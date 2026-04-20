1

2

3

4


# System Specifications

## KNX IoT

 KNX IoT Point API


5 Summary

6 This document provides information on the KNX IoT Point API.

7 Version 1.0.0 is a KNX Approved Standard.

8


-----

9 **Document updates**

**Version** **Date** **Modifications**

0.1.0 2021.03.22 - Document creation.
1.0.0 2021.11.01 - Draft for Voting
1.0.0 2022.04.05 - Creation of the Approved Standard
10

11 **References**

[01] Chapter 3/10/1 KNX IoT Introduction

[02] Chapter 3/10/2 KNX IoT Constants

[03] Chapter 3/10/3 KNX IoT Information Model

[04] Chapter 3/10/4 KNX IoT 3[rd] Party API

[05] Chapter 3/10/5 KNX IoT Point API

[06] Chapter 3/1/2 Glossary

[07] Chapter 7/20/1 Lighting Sensors

[08] Chapter 7/20/2 Lighting Actuators

[09] Chapter 3/5/2 Management Procedures

[10] Chapter 3/5/1 Resources

[11] Chapter 3/3/7 “Application Layer”

Filename: 3_10_5 KNX IoT Point API.docx
Version: 1.0.0
Status: Approved Standard
Save date: 2022.04.05
Number of pages: 153

|Version|Date|Modifications|
|---|---|---|
|0.1.0|2021.03.22|- <br>Document creation.|
|1.0.0|2021.11.01|- <br>Draft for Voting|
|1.0.0|2022.04.05|- <br>Creation of the Approved Standard|


-----

12 **Contents**

13 **1** **KNX IoT Point API ................................................................................................................ 6**

14 1.1 Introduction ..................................................................................................................... 6

15 1.2 System Entities ............................................................................................................... 7

16 1.3 Device Model .................................................................................................................. 8

17 1.4 Conventions used in this document ................................................................................ 9

18 1.4.1 Requirements language ....................................................................................... 9

19 1.4.2 Conformance ....................................................................................................... 9

20 1.4.3 Number format .................................................................................................. 10

21 1.4.4 Link format ....................................................................................................... 10

22 **2** **Point API Specification ........................................................................................................ 11**

23 2.1 Application Protocol ..................................................................................................... 11

24 2.2 Overview ....................................................................................................................... 11

25 2.2.1 Common Data Model ........................................................................................ 11

26 2.2.2 Application Layer Service Mapping ................................................................. 11

27 2.2.3 Application Protocol ......................................................................................... 12

28 2.2.4 Content-Format ................................................................................................. 12

29 2.3 System Design .............................................................................................................. 13

30 2.3.1 Events and Group Communication ................................................................... 13

31 2.3.2 Brokerless System ............................................................................................. 13

32 2.3.3 Message Broker Based System ......................................................................... 14

33 2.3.4 Device Linking.................................................................................................. 16

34 2.4 Device Bootstrapping and Configuration ..................................................................... 17

35 2.4.1 Introduction ....................................................................................................... 17

36 2.4.2 Device Individualization Procedure .................................................................. 18

37 2.4.3 Device Configuration Procedure ....................................................................... 19

38 2.5 Resource Model ............................................................................................................ 21

39 2.5.1 Introduction ....................................................................................................... 21

40 2.5.2 Resources (Points) ............................................................................................ 21

41 2.5.3 Interface Types (if) ........................................................................................... 23

42 2.5.4 Device Discovery Resource (/.well-known/core) ............................................. 27

43 2.5.5 Device API Resource (/.well-known/knx) ........................................................ 28

44 2.5.6 Device Object Resource (dev) .......................................................................... 33

45 2.5.7 Function Point Table (fp) .................................................................................. 34

46 2.5.8 Device Load State Machine Command (a/lsm) ................................................ 47

47 2.5.9 S-Mode Messaging Resource (/.knx) ................................................................ 49

48 2.5.10 Functional Block Resource (f) .......................................................................... 51

49 2.5.11 Parameter and Diagnostic Property Resource (p) ............................................. 51

50 2.5.12 Subscription Resource (sub) ............................................................................. 59

51 2.5.13 Datatype Mapping ............................................................................................. 60

52 2.6 Runtime Interworking ................................................................................................... 64

53 2.6.1 Discovery .......................................................................................................... 64

54 2.6.2 Device IP Address............................................................................................. 73

55 2.6.3 Unicast Operation ............................................................................................. 75

56 2.6.4 Multicast Operation .......................................................................................... 78

57 2.6.5 Multicast Group IP Addresses .......................................................................... 79

58 2.6.6 Message Flow Control ...................................................................................... 80

59 2.6.7 Creating, Updating and Deleting Function Points ............................................ 80

60 2.6.8 Pagination ......................................................................................................... 82


-----

61 2.6.9 S-Mode Group Communication ........................................................................ 84

62 2.6.10 Point Publish/Subscribe .................................................................................... 86

63 **3** **Security .................................................................................................................................. 91**

64 3.1 Introduction ................................................................................................................... 91

65 3.2 Device Identity Enrollment ........................................................................................... 92

66 3.2.1 Common Requirements .................................................................................... 92

67 3.2.2 Device Authentication ...................................................................................... 93

68 3.2.3 Domain CA Provisioning .................................................................................. 93

69 3.2.4 Operational Device Certificate Enrollment (Pull Certificate) .......................... 93

70 3.2.5 Management Client as Registrar (Push Certificate) .......................................... 94

71 3.3 Device Identity Certificates .......................................................................................... 97

72 3.3.1 Manufacturer Device Certificates (IDevID) ..................................................... 97

73 3.3.2 Operational Device Certificates (LDevID) ....................................................... 97

74 3.4 Certificate Validation .................................................................................................... 98

75 3.4.1 General Requirements ....................................................................................... 98

76 3.4.2 Device Certificate Cipher Suites ....................................................................... 99

77 3.5 Device Access Control ................................................................................................. 99

78 3.5.1 General Requirements ....................................................................................... 99

79 3.5.2 Trust List Resource (auth/certs) ........................................................................ 99

80 3.5.3 Access Scope .................................................................................................. 100

81 3.5.4 Device Access Control List Resource (auth/at) .............................................. 101

82 3.5.5 Revocation List ............................................................................................... 105

83 3.6 OSCORE Application Layer Security ........................................................................ 105

84 3.6.1 General Requirements ..................................................................................... 105

85 3.6.2 OSCORE Key Configuration Resource Object .............................................. 106

86 3.6.3 Password Authenticated Access Token Enrollment ....................................... 107

87 3.6.4 Message Replay Protection ............................................................................. 115

88 3.6.5 OSCORE Cipher Suites .................................................................................. 118

89 **4** **Software Update ................................................................................................................. 120**

90 4.1 Introduction ................................................................................................................. 120

91 4.2 Software Update Client Resource (swu) ..................................................................... 120

92 4.3 Software Update Modes ............................................................................................. 124

93 4.3.1 Overview ......................................................................................................... 124

94 4.3.2 Software Update Query Resource Object ....................................................... 125

95 4.3.3 Software Update Query Parameter "po" and "ps" .......................................... 126

96 4.3.4 Software Update PULL ................................................................................... 127

97 4.3.5 Software Update PUSH .................................................................................. 131

98 **5** **KNX IoT Classic Gateway ................................................................................................. 133**

99 5.1 Introduction ................................................................................................................. 133

100 5.2 Definition .................................................................................................................... 133

101 5.3 Message Translation ................................................................................................... 133

102 5.4 Group Address Mapping Table Resource ................................................................... 134

103 5.4.1 Definition ........................................................................................................ 134

104 5.4.2 Group Address Mapping Resource Object ..................................................... 135

105 5.5 Message Routing ........................................................................................................ 136

106 5.5.1 Forwarding Rules ............................................................................................ 136

107 5.5.2 Message Queuing ............................................................................................ 136


-----

108 **6** **Profiles ................................................................................................................................. 137**

109 6.1 KNX IoT Point API Device ........................................................................................ 137

110 6.1.1 Default Configuration State ............................................................................ 137

111 6.1.2 Commissioned Mode ...................................................................................... 137

112 6.1.3 Device Resource List ...................................................................................... 139

113 6.2 CBOR Encoding ......................................................................................................... 140

114 6.2.1 Function Point Tables, Functional Blocks and Properties .............................. 140

115 6.2.2 Software Update Package Query .................................................................... 141

116 6.2.3 Security ........................................................................................................... 141

117 **7** **Examples ............................................................................................................................. 142**

118 7.1 DEVICE POINT LIST EXAMPLES ......................................................................... 142

119 7.1.1 Device Point List Example with OSCORE and (D)TLS ................................ 142

120 7.2 DEVICE CONFIGURATION EXAMPLE ................................................................ 145

121 7.2.1 Full Download Example ................................................................................. 145

122 7.2.2 Partial Download Example ............................................................................. 148

123

124


-----

125 **1** **KNX IoT Point API**

126 **1.1** **Introduction**

127 KNX IoT uses Internet Protocol (IP) suite standards for transmission of KNX IoT application layer data

128 across IP networks.

129 Physical media like Ethernet (IEEE 802.3), Wi-Fi (802.11) or WPAN (802.15.4) carry KNX IoT packets.

130 These may contain unicast TCP or UDP frames or multicast UDP frame transmission of KNX IoT

131 application data. KNX IoT application data is agnostic to the underlaying communication layers. Hence,

132 it is possible to send KNX IoT messages over Non-IP transport bindings such as BLE, NBIoT or

133 LoRaWAN, however, this is out-of-scope of this specification.

134 A common (IP based) interworking infrastructure allows heterogeneous data link media to work seamlessly

135 with each other. The Point API provides a mapping of KNX AL data to a RESTful resource model and

136 CBOR/JSON based data representation that is used to communicate over IP. Using this API, a client can

137 read/write values or can subscribe to Point events (e.g., switch on/off). The KNX IoT Point API is based

138 on the following building blocks:

139 **1.** **Discovery**

140 Discovery (of resources including devices) can be done either with unicast or multicast. Resource discovery

141 in CoAP (CoRE) is accomplished using a “/.well-known/core” resource URI that returns a list of links

142 about resources (e.g. functional block properties) hosted by that server that matches filter attributes.

143 **2.** **S-Mode Messaging**

144 The S-Mode messaging uses a secure message-oriented communication pattern for group communication

145 where a producer sends a message to notify consumers of a change in the domain. A tool or rather a

146 Management Client (MaC) configures group communication events via group tables.

147 **3.** **Point Read, Write and Publish/Subscribe**

148 Parameter and diagnostic properties are used for sensor, actuator, parameter, and diagnostic values, such

149 as getting the current sensor value or setting a setpoint. They are addressed by URIs, can be directly

150 accessed with the corresponding standard CoAP access method GET (read values) and manipulated with

151 PUT/POST (write values). Additionally, also subscribing to property values is possible.

152 **4.** **Security**

153 Group communication and access to parameter and diagnostic properties are secured either by OSCORE

154 or (D)TLS. OSCORE (application layer security) is used for S-Mode messaging, Point read, write, and

155 publish/subscribe. (D)TLS (transport layer security) is mainly used for mutual authenticated pre-shared

156 key distribution. The initial bootstrapping of pre-shared OSCORE keys and operational device certificates

157 bases on an out-of-band (QR code, NFC or BLE etc.) authentication code as a proof-of-possession.

158

159 **Figure 1 - KNX IoT Point API**


-----

160 **1.2** **System Entities**


**Publisher/Subscriber** **Recipient**


161


**configure function point tables**

**Management Client (MaC)** **and parameters**


162 **Figure 2 – System Entities**

163 Some above used terms are detailed underneath with additional KNX IoT Point API information. The

164 general term definitions can be found in clause [02].

165 The Key Distribution Center (KDC) enables and enforces the authorized access of joining KNX IoT

166 devices to access the related KNX Group Communication. Multiple installations can be associated to the

167 same Authorization & Group Manager, it might be a service entity part of a MaC (Management Client) or

168 an independent service.

169 The Message Broker is an intermediary that can provide data marshaling, routing, message translation,

170 persistence. It receives messages from a Publisher and delivers it to all related Recipients. A KNX Classic

171 to KNX IoT Gateway is an example for a Message Broker.

172 **Publishers and Subscribers are KNX IoT devices which are loosely coupled and often do not know each**

173 other. Their primary relation is that they are configured with the same Group Address. In KNX IoT:

174 - the Publisher sends Group Messages to Subscribers (e.g., via Message Broker), it represents a certain

175 information source, for example, a light switch status;

176 - the Subscriber are the consumers of Group Messages from a Publisher. They are CoAP Clients but

177 are Group Message Recipients;

178 - the Publishers and Subscribers use CoAP to communicate;

179 - A Recipient is a device that receives Group Messages from a Publisher. If the Recipient is not a

180 Subscriber at the same time, then the Recipient endpoint is a static configuration in the Publisher

181 Function Point group table.

182 The Registrar decides whether a new KNX IoT device can join the domain, it:

183 - might be a part of the MaC (Management Client), containing a mixture of blacklist rules, whitelists

184 (for known installed devices) and stateful tracking to protect the KNX System;

185 - subsequently configures domain CA certificates followed by the operational device certificate on

186 KNX IoT devices.

187


-----

188 **1.3** **Device Model**

189 The following figure depicts the KNX IoT device Model, which is, from a high-level perspective, the

190 same as the classic KNX Device Model.

**KNX IoT Device (combined sensor/actuator)** **KNX IoT Device (actuator)**
**URL: coaps://serialnumber.knx.local** **URL: coaps://serialnumber.knx.local**

**Inputs** **Outputs** **Inputs**

<<Runtime Interworking>> <<Runtime Interworking>>

**Parameter Property (if:p)** **Diagnostic Property (if:d)** **ApplicationProgram**

(Functional Block, Channel)

<<Runtime Interworking>> **ApplicationProgram** <<Runtime Interworking>> <<Runtime Interworking>>

**Input Group Object (if:i)** (Functional Block, Channel) **Output Group Object (if:o)** **FunctionPoint** **Input Group Object (if:i)**

<<Hardwired I/O>> <<Hardwired I/O>>
**Sensor** **Actuator**

**Sensor (if:s)** **Command (if:a)**

191

192 **Figure 3 - KNX IoT Device Model**

193 A KNX IoT device may have physical inputs and/or outputs.

194 - A physical input may be internal to the device or may have an external sensor connected via a

195 terminal block.

196 - A physical output may be internal to the device or may have an external actuator connected via a

197 terminal.

198 A KNX IoT device has at least one logical input and/or output. Such a logical input or output is called

199 _Group Object (GO). The Group Object has a unique identifier with reference to the device. When a_

200 _Group Address is assigned to a Group Object then the Group Object becomes a member of that Function_

201 Point identified by the Group Address. A Group Address is the instantiation of a Function Point and is

202 unique with respect to the project.

203 An input Group Object can be assigned to one or more Function Points.

204 An output Group Object can be assigned to one or more Function Points but can only send information to

205 one Function Point.

206 For configuration purposes, a KNX IoT device may have parameters to determine specific behavior

207 concerning the whole device or a device channel. Each individual Parameter Property has a unique

208 identifier with reference to the device.

209 For diagnostic purposes, a KNX IoT device may provide diagnostic information concerning the whole

210 device or a device channel. Each individual Diagnostic Property has a unique identifier with reference to

211 the device.

212 Parameter and Diagnostic Properties are using the same communication mechanisms. Hence, these are

213 not differentiated, and both are named Property in the following.

214 A Group Object is a specialization of a Property. A Group Object is designed for runtime communication

215 (“Transport layer Multicast messaging pattern” and “Broker based Publish–Subscribe (pub/sub)”). A

216 simple Property is only designed and intended for configuration or diagnostic purposes. It supports only

217 simple point to point communication methods (Read-, Write- and Subscription-Commands).

218 A KNX IoT device may have Group Objects and Parameter and Diagnostic Properties that belong

219 together. Where Group Objects and Properties belong together these MAY be declared as a channel.

220 A device may have channels that have different sets of Group Objects and Properties and/or channels that

221 have identical sets of Group Objects and Properties. Devices may have one or more channels that are

222 functionally identical and have the same type of Group Objects and Properties.

|Col1|KNX IoT Device (combined sensor/actuator)<br>URL: coaps://serialnumber.knx.local|Col3|Col4|Col5|Col6|Outputs Inputs<br>> FunctionPoint <<<br>) I<br>ctuator|Col8|Col9|KNX IoT Device (actuator)<br>URL: coaps://serialnumber.knx.local|Col11|Col12|
|---|---|---|---|---|---|---|---|---|---|---|---|
||**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br><<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Sensor (if:s)**<br><<Hardwired I/O>><br>**Command (if:a)**|**ApplicationProgram**<br>(Functional Block, Channel)<br>Runtime Interworking>><br>**nput Group Object (if:i)**|**ApplicationProgram**<br>(Functional Block, Channel)<br>Runtime Interworking>><br>**nput Group Object (if:i)**|**ApplicationProgram**<br>(Functional Block, Channel)<br>Runtime Interworking>><br>**nput Group Object (if:i)**|
|**Inputs**<br><<br>**Sensor**|<<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Hardwired I/O>><br>**Sensor (if:s)**|<<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Hardwired I/O>><br>**Sensor (if:s)**|<<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Hardwired I/O>><br>**Sensor (if:s)**|<<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Command (if:a)**|<<Runtime Interworking>><br>**Diagnostic Property (if:d)**<br><<Runtime Interworking><br>**Output Group Object (if:o**<br>**A**<br><<Hardwired I/O>><br>**Command (if:a)**|**Outputs**<br> ><br>**   )**<br>**ctuator**|**Outputs**<br> ><br>**   )**<br>**ctuator**|**Inputs**<br><<<br>**I**|**Applicati**<br>(Functional B|**Applicati**<br>(Functional B|**Applicati**<br>(Functional B|
|**Inputs**<br><<br>**Sensor**|<<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Hardwired I/O>><br>**Sensor (if:s)**|ing>><br>**  (if:p)**<br> >|**ApplicationProgram**<br>(Functional Block, Channel)|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|
|**Inputs**<br><<br>**Sensor**|<<Runtime Interworking>><br>**Parameter Property (if:p)**<br><Runtime Interworking>><br>**Input Group Object (if:i)**<br><<Hardwired I/O>><br>**Sensor (if:s)**|ing>><br>**  (if:p)**<br> >|**ApplicationProgram**<br>(Functional Block, Channel)|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|<<Runt<br>**Diagno**<br><<br>**O**<br><<H<br>**C**|**Applicati**<br>(Functional B|**onProgram**<br> lock, Channel)<br> g>><br>**   :i)**|
|**Inputs**<br><<br>**Sensor**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**|Runtim<br>**nput G**|e Interworkin<br>** roup Object (if**|e Interworkin<br>** roup Object (if**|
|**Inputs**<br><<br>**Sensor**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**||||||
|**Inputs**<br><<br>**Sensor**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**|**FunctionPoint**|**FunctionPoint**|**FunctionPoint**|**FunctionPoint**|**FunctionPoint**|
|**Inputs**<br><<br>**Sensor**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking>><br>**Input Group Object (if:i)**|<Runtime Interworking><br>**utput Group Object (if:o**|<Runtime Interworking><br>**utput Group Object (if:o**||||||
|**Inputs**<br><<br>**Sensor**|<<Hardwired I/O><br>**Sensor (if:s)**|<<Hardwired I/O><br>**Sensor (if:s)**|<<Hardwired I/O><br>**Sensor (if:s)**|<<Hardwired I/O><br>**Sensor (if:s)**|**A**<br>ardwired I/O>><br>**ommand (if:a)**|**A**<br>ardwired I/O>><br>**ommand (if:a)**|**A**<br>ardwired I/O>><br>**ommand (if:a)**|**A**<br>ardwired I/O>><br>**ommand (if:a)**||||


-----

223 Apart from channels, a KNX IoT device may have Group Objects and Parameter and Diagnostic

224 _Properties that apply to the whole device. These are associated with the control function of the whole_

225 device.

226 If and how Group Objects and Properties are declared as a channel is up to the manufacturer designing

227 the device.

228 For certification purposes, a channel may be declared to include at least one Functional Block describing

229 the function of that channel.

230 The KNX Specification defines Functional Blocks for different applications. Functional Blocks

231 encompass inputs and outputs as well as parameter properties with generic names and identifiers.

232 The Functional Blocks determine Interworking between products of different manufacturers. More than

233 one Functional Block type may be required to describe the function of a channel.

234 A KNX IoT device has a unique identifier called KNX Individual Address. The KNX Individual Address

235 is assigned and is unique with respect to the project.

236 A KNX IoT device SHALL have a globally unique identifier assigned by the manufacturer called KNX

237 _Serial Number._

238 The hardware (MAC-) or network (IP-) address of the device SHALL NOT be used as KNX Individual

239 _Address._

240 The following table summarizes the above-mentioned core elements and their associated unique

241 identifiers.

242 **Table 1 – Core elements and identifiers**

**Unique Identifier**

**Core element** **Name** **Scope**

Device KNX Serial Number globally unique

KNX Individual Address unique within a project

Functional Block Functional Block ID unique per functionality

Function Point Group Address unique within a project

Group Object (GO) GO identifier unique per device

Parameter /Diagnostic Property Property identifier unique per device

243

244 **1.4** **Conventions used in this document**

245 **1.4.1** **Requirements language**

246 The keywords "SHALL", "SHALL NOT", "SHOULD", "SHOULD NOT", "RECOMMENDED", "NOT

247 RECOMMENDED", "MAY", "MANDATORY", and "OPTIONAL" in this specification are to be

248 interpreted as described in [RFC2119].

249 **1.4.2** **Conformance**

250 For all resources, their expected request/ response document formats, and their content is not described to

251 the full extent in this specification. As described in clause "Document Structure" in [01], whether an

252 element is mandatory or optional can be found in the json-schema description as an electronic document.

253 [The URL https://schema.knx.org allows to retrieve the most recent electronic documents of the KNX IoT](https://schema.knx.org/)

254 Point API. Older versions are also available.

|Core element|Unique Identifier|Col3|
|---|---|---|
|**Core element**|**Name**|**Scope **|
|Device|KNX Serial Number|globally unique|
|Device|KNX Individual Address|unique within aproject|
|Functional Block|Functional Block ID|uniqueper functionality|
|Function Point|Group Address|unique within aproject|
|Group Object(GO)|GO identifier|uniqueper device|
|Parameter /Diagnostic Property|Property identifier|unique per device|


-----

255 **1.4.3** **Number format**

256 All numbers in this document are assumed to be decimal unless indicated with a prefix. Hexadecimal

257 numbers are prefixed with the designation “0x” and binary numbers are prefixed with the designation

258 “0b”. Binary numbers are defined as successive groups of 4 bits, separated by a space character from the

259 most significant bit to the least significant bit (0b1111 1111).

260 **1.4.4** **Link format**

261 A Uniform Resource Identifier (URI) identifies a logical resource. This document uses the CoAP URL

262 for link formats which comprises scheme, authority, path and query values: scheme ":" ["//" authority]

263 path ["?" query].

264 The following link formats are used in this document:

265 Absolute Link with schema and authority: coap://{ip-address}:{port}/basepath/path1?query

266 Absolute path that start at the root path (“/”): /basepath/path?query

267 Relative path that starts after a basepath (without “/” at the beginning): path?query

268


-----

269 **2** **Point API Specification**

270 **2.1** **Application Protocol**

271 This version of the KNX IoT Point API specification solely considers the use of CoAP as application

272 protocol. The below specifications and examples therefore focus on CoAP. Indications for other

273 application protocols may be added as these are added to this specification.

274 **2.2** **Overview**

275 **2.2.1** **Common Data Model**

276 The following clauses describe a common data model and API for KNX IoT devices that represent a

277 contract for the interworking between devices and, in addition, between devices and infrastructure

278 (e.g., Management Client, Message Broker etc.). For a semantic description of instances of the API

279 (project export), KNX IoT adopts the W3C WoT interactions model for Points that exchange data via IP

280 interworking infrastructure. The Thing Description [TD] is a central building block in the W3C Web of

281 Things (WoT). The TD provides a framework for semantic metadata for the device itself, an interaction

282 model based on WoT's PropertyAffordances, ActionAffordances, and EventAffordances paradigm, a

283 semantic schema to make data models machine-processable and features for Web Linking to express

284 relations among devices and Points. The “/.well-known/core” URI, for example, is an ActionAffordance

285 with a default entry point for discovery purposes or a PropertyAffordance is usually mapped to a

286 Parameter and Diagnostic Property. The TD is the glue between KNX IoT device data and the KNX

287 domain model (see [03] “KNX Information Model”).

**KNX IoT Device**

**Management Client (MaC),**

URL: coaps://device-1.knx.iot

**WebApp, etc.**

**Point Interactions**

**/well-known/core**

discovery

                                                   - Device Discovery

                                                    - Functional Block Discovery

                                                    - Point Discovery

read/write and
subscribe datapoint **/<properties>**

                                                 - Parameter Points

                                                     - Diagnostic Points

function call

**/<actions>**

URL: coaps://device-2.knx.iot

                                                     - Device Individualization

/<events>           - Messaging (Publisher)

                                                 - Device Reboot and Reset

/<action> group event            - Credential Enrollment

                                                - Software Update

URL: coaps://message-broker.iot

**/<events>**

group event                               - Messaging (Recipient)

/<action>

                                                    - Notification (Pub/Sub)

288

289 **Figure 4 - Thing Description**

290 **2.2.2** **Application Layer Service Mapping**

291 The KNX application layer provides a large variety of application services to the application process.

292 Application processes in different devices interoperate by using services from the application layer.

293 Depending on the communication mode, different application layer services are available. KNX IoT only

294 takes over the core functionality of a subset of existing KNX application layer services. These service

295 functionalities are mapped to REST calls which can be described as PropertyAffordances,

296 ActionAffordances or EventAffordances, for example, for a semantic project export or device

297 descriptions (see [03] “KNX Information Model”). The following clause explains the concept how

298 existing KNX application layer services are mapped to service discovery, PropertyAffordances,

299 ActionAffordances and EventAffordances in KNX IoT.

|URL: coaps://device-2.knx.iot<br>/<events><br>/<action>|Col2|
|---|---|
|/<events>|/<events>|
|/<events>||
|/<action>|/<action>|

|anagement Client (MaC),<br>WebApp, etc.<br>discovery<br>read/write and<br>subscribe datapoint<br>function call<br>URL: coaps://device-2.knx.iot<br>/<events><br>group event<br>/<action><br>URL: coaps://message-broker.iot<br>group event<br>/<action>|URL: coaps://device-1.knx.iot<br>Point Interactions<br>/well-known/core<br>- Device Discovery<br>- Functional Block Discovery<br>- Point Discovery<br>/<properties><br>- Parameter Points<br>- Diagnostic Points<br>/<actions><br>- Device Individualization<br>- Messaging (Publisher)<br>- Device Reboot and Reset<br>- Credential Enrollment<br>- Software Update<br>/<events><br>- Messaging (Recipient)<br>- Notification (Pub/Sub)|
|---|---|
|/<action><br>URL: coaps://message-broker.iot<br>/<action><br>URL: coaps://device-2.knx.iot<br>**anagement Client (MaC),**<br>**WebApp, etc.**<br>discovery<br>read/write and<br>subscribe datapoint<br>function call<br>group event<br>group event<br>/<events>|**/well-known/core**<br>- Device Discovery<br>- Functional Block Discovery<br>- Point Discovery|
|/<action><br>URL: coaps://message-broker.iot<br>/<action><br>URL: coaps://device-2.knx.iot<br>**anagement Client (MaC),**<br>**WebApp, etc.**<br>discovery<br>read/write and<br>subscribe datapoint<br>function call<br>group event<br>group event<br>/<events>|**/<properties>**<br>- Parameter Points<br>- Diagnostic Points|
|/<action><br>URL: coaps://message-broker.iot<br>/<action><br>URL: coaps://device-2.knx.iot<br>**anagement Client (MaC),**<br>**WebApp, etc.**<br>discovery<br>read/write and<br>subscribe datapoint<br>function call<br>group event<br>group event<br>/<events>|**/<actions>**<br>- Device Individualization<br>- Messaging (Publisher)<br>- Device Reboot and Reset<br>- Credential Enrollment<br>- Software Update|
|/<action><br>URL: coaps://message-broker.iot|/<action><br>URL: coaps://message-broker.iot|
|/<action><br>URL: coaps://message-broker.iot|**/<events>**<br>- Messaging (Recipient)<br>- Notification (Pub/Sub)|
|/<action>|/<action>|


-----

300 The A_IndividualAddress_Read- and A_IndividualAddress_Write-services, for example, are used to find

301 a device within a system and for changing the device address. These services are used on broadcast

302 communication mode, this is, the communication partner is not identified in this service., i.e., the partner

303 device is defined enabling its "Programming Mode", e.g., by pressing a programming button on that

304 device. In KNX IoT, the service is split into a discovery ActionAffordance (discovery phase: DNS or

305 GET coap://{ipv6-multicast}/.well-known/core?if=urn:knx:if.pm), and second subsequent authorized

306 ActionAffordance call to change the device address (POST coap://{ipv6-unicast}/.well-known/knx/ia).

307 PropertyAffordances expose internal state of a device that can be directly accessed (read) and optionally

308 manipulated (write) on Parameter and Diagnostic Properties. Devices can also choose to make Parameter

309 and Diagnostic Properties subscribable (observe) by pushing the new state after a change. PUT and GET

310 on Properties are used instead of the KNX Classic Data Property services (e.g., A_PropertyValue_Read,

311 A_PropertyValue_Write).

312 ActionAffordances offer device functions. These functions may manipulate the internal state of a device

313 in a way that is impossible through setting Properties. Examples are changing internal state that is not

314 exposed as PropertyAffordances (e.g., A Restart-PDU), changing multiple Properties or changing

315 Properties over time.

316 An EventAffordance describes event sources that asynchronously push messages. Hence, event-oriented

317 runtime communication is mapped to EventAffordances in the sending device and to ActionAffordances

318 in the receiving device. Here not state, but state transitions (events) are communicated (e.g., "light switch

319 ON"). Events may be triggered by internal state changes that are not exposed as PropertyAffordance,

320 e.g., a push button event to switch from Off to On. POST is used for Group Objects instead of KNX

321 Classic A_GroupValue services.

322 **2.2.3** **Application Protocol**

323 This document uses CoAP [RFC7252] as MANDATORY application protocol. CoAP is a reliable

324 transport that can preserve packet ordering and handles message duplication. However, the Point API

325 specification is not limited to CoAP. Some device profiles MAY implement a CoAP and an HTTP

326 interface. This enables an HTTP client to access data on a KNX IoT device without implementing a

327 CoAP communication stack. However, how an HTTP request is mapped to a CoAP request and how a

328 CoAP response is mapped back to an HTTP response is out-of-scope of this document, but an HTTP

329 implementation SHOULD follow the guidelines described in [RFC8075].

330 **2.2.4** **Content-Format**

331 All KNX IoT device resources SHALL support either the application/link format (lists) or the Concise

332 Binary Object Representation (CBOR) format [RFC8949]. The CoAP Content-Format ([RFC8949],

333 clause 9.4), used to encode resources into a payload when accessed via a RESTful method, SHALL use

334 the Internet media type [RFC6838] application/cbor ([RFC8949], clause 9.4).

335 KNX IoT Points MAY in addition support the JavaScript Object Notation (JSON) format [RFC8259].

336 The examples given in this document are shown in JSON or CBOR diagnostic notation for human
337 readability ([RFC8949] clause 8). In the absence of the CoAP Accept and Content-Format options in a

338 CoAP request or in a successful CoAP response, devices SHALL assume a value of ‘application/cbor’ for

339 each of those options. This document uses the following notation (for major type 7, the minor types used

340 in this document is a subset only of the specified minor types [RFC8949], clause 3.3).

341 **Table 2 – Used notations**

|short notation|CBOR type|major<br>type|minor<br>type|Notes|
|---|---|---|---|---|
|unsigned|unsigned integer|0||length depends on value|
|negative|negative integer|1||length depends on value|
|byte string|byte string|2||length is dynamic|


-----

|short notation|CBOR type|major<br>type|minor<br>type|Notes|
|---|---|---|---|---|
|text|text string|3||length is dynamic|
|[]|Array|4||length is dynamic, as needed by the datapoint,<br>i.e., a B8 with only 2 bits used will be encoded<br>as array of bools with length 2.<br>in case we have a homogeneous array of a<br>specific type, we indicate this by adding the<br><type>*|
|{}|Map|5||length is dynamic|
|<tag>(CBOR<br>type)|Tagging|6||<tag> is a number|
|bool|false/true|7|20 / 21||
|float|single precision float|7|26|IEEE754 32 bit float|


342 **2.3** **System Design**

343 **2.3.1** **Events and Group Communication**

344 KNX group communication uses a message-oriented communication pattern for point-to-multipoint

345 communication where a producer sends a message to notify consumers of a change in the domain. An

346 event is a message that informs various listeners about something that has happened. A key element of an

347 event is that the producer potentially does not really care much about the response. Often it does not

348 expect any answer at all, or if there is a response that the producer does care about, it is indirect.

349 In general, there are two concepts how to distribute an event in a message-oriented system: Message

350 Broker based Publish–Subscribe (pub/sub) and brokerless transport layer multicast (or unicast) messaging

351 pattern. These concepts are described in the following clauses.

352 **2.3.2** **Brokerless System**

353 The KNX IoT point-to-multipoint communication relies on the IP network infrastructure to deliver

354 messages to one or more Recipients. IP network devices – like network routers, switches, or bridges – are

355 used for this purpose. Transport layer multicast messaging pattern is much more efficient than having to

356 send multiple peer-to-peer transport layer unicast messages. Multicast allows near-simultaneous message

357 delivery and thereby near-simultaneous modification of actuators on all devices in a group, providing to

358 users a perceived effect of synchronism or simultaneity (lights ON). Multicast is only possible on top of

359 UDP in IP networks, while the use of a sequence number supports recognizing duplication of messages.

360 However, IP multicasting is unreliable (unconfirmed transmission) and requires proper configuration of

361 suitable network equipment like (managed) switches and routers. Routers need knowledge about listeners

362 in their subsystem for an efficient message filtering. For communication where simultaneity is of lower

363 importance and/or reliability is of higher importance, multiple transport layer unicast may be used instead

364 of multicast.

365 Advantages of a point-to-multipoint system include the following:

366 - Near-simultaneous message delivery to multiple Recipients with UDP protocol using multicast

367 addressing.

368 - Only standard network infrastructure is needed.

369 - Messages are delivered peer-to-peer without software intermediaries and therefore provides reduced

370 latency and overhead.

371 The Group Notification Message Keys used in the below figure are defined in clause 2.5.9 “S-Mode

372 Messaging Resource (/.knx)”.


-----

###### KNX IoT Device

(IA=9123)


###### KNX IoT Device


373


###### KNX IoT Device

(IA=5678)


374 **Figure 5 - Brokerless system [i) ]**

375 Figure 5 shows a typical brokerless communication scenario with 2 different group connections, where a

376 sender (Publisher) uses multicast addressing to reach 1 or multiple Recipients. The device shown in the

377 middle acts as Recipient for a 1st group and as sender (Publisher) for a different 2[nd] group.

378 **2.3.3** **Message Broker Based System**

379 Point-to-point messaging with fixed (configured) setup or ad-hoc Broker based Publish–Subscribe

380 (pub/sub) setup is a messaging pattern for facilitating communication in loosely coupled distributed

381 systems. Message Broker based Publish–Subscribe (pub/sub) is a messaging pattern for facilitating

382 communication in loosely coupled distributed systems. It has gained increasing popularity in the context

383 of Internet of Things (IoT) applications.

384 With a fixed point-to-point configuration, the serving device sends the message directly to the Recipient

385 using unicast transport.

386 In most pub/sub systems a reliable transport layer unicast communication is used. Hence, these systems

387 rely on unicast application layer messaging (i.e., point-to-point connections from a central broker to each

388 Subscriber) to disseminate messages. This option assumes a Message Broker in the middle. All the

389 communication is passed through the Message Broker. The Message Broker routes the group notification

390 to all subscribed applications based on topics.

391 Advantages of this model include the following:

392 - Publisher and Subscriber do not have to be directly addressable. They can be anywhere if they have

393 access to the Message Broker.

394 - Publisher and Subscriber can use different messaging protocols to communicate with the Message

395 Broker (e.g., KNX Classic, WebSocket, HTTP, or CoAP).

396 - Reliable Group Notifications (acknowledged unicast message) can be handled to a very large list of

397 Subscribers, multiple networks or even chained Message Broker or scalable Message Broker.


-----

###### Message Broker (Subscriber & Publisher)

|Function Point<br>Recipient Table|Col2|
|---|---|


398


###### ￼


399 **Figure 6 - Broker Based System [i)]**

400 Figure 6 shows a typical communication scenario with a Message Broker, a (D)TLS Publisher and a

401 OSCORE Recipient as an example. It requires the use of a Message Broker technology like AMQP,

402 MQTT or a KNX Classic coupler etc. In this model the Message Broker relays messages from Publishers

403 to Subscribers. The Broker maybe be able to queue messages and send the same message to multiple

404 Subscribers. Note that the Message Broker functionality and the protocol proxy (e.g., from CoAP to

405 MQTT) is outside the scope of this specification. The Message Broker is just a CoAP server in the

406 context of KNX IoT and the Message Broker itself is a KNX IoT device that delivers messages to KNX

407 IoT Recipients. Hence, the Message Broker is a normal KNX IoT device and KNX IoT defines how to

408 connect to a Message Broker in a reliable and secure manner. Message confidentiality and integrity with

409 the Message Broker can be ensured at two levels.

410 1. Application-level security as end-to-end security between Publisher and Subscriber based on

411 OSCORE, see clause 3.6 “OSCORE Application Layer Security” and/or

412 2. Transport security between Publishers/Subscribers, and the Broker based on (D)TLS.

413 The application-level security requires all Publishers, Subscribers and Recipients to have pre-shared

414 credentials that grant them access to the necessary group. The configuration of credentials and access

415 scopes is described in clause 3.5 “Device Access Control”.


-----

416 **2.3.4** **Device Linking**

417 **2.3.4.1** **Introduction**

418 KNX IoT devices send and receive group messages on configured unicast or multicast IP addresses
419 (messaging endpoint). A MaC (Management Client) configures the KNX system communication
420 interworking. For this purpose, the MaC configures the KNX Function Point Tables of all KNX devices
421 in an installation. A KNX IoT device SHALL support Group Communication via

422 - Broker based Publish–Subscribe (pub/sub), and

423 - Transport layer Multicast messaging pattern

424 **2.3.4.2** **Function Point Tables**

425 The Function Point Tables of a device are Group Address mapping tables. The Function Point Tables

426 have references from Group Addresses (ga) of KNX IoT device to a protocol specific (e.g., CoAP)

427 destination address for sending or source address for receiving messages (unicast or multicast URL).

428 The MaC configures Function Point Tables on all KNX IoT Point Devices in both a brokerless and in a

429 broker-based system. The Function Point Tables consist of the following tables:

430 - The Group Object table maps a Group Addresses to a Point to read a value, store a value or for

431 further processing of incoming values.

432 - The Recipient Table (destination unicast/multicast address) defines to which devices a group event

433 needs to be sent.

434 - The Publisher Table (source unicast/multicast address) contains configurations from which devices

435 group events need to be received (group event source address).

436 The Group Object Table of a device contains all Group Object Points (“href”: {point-path}) that can be

437 activated, the Group Object Points are defined by the manufacturer.

438 The KNX IoT Group Address is used for KNX S-Mode communication. The Group Address is an

439 unstructured ID (ga). The MaC assigns the ga with predefined Group Objects (Group Object Table) and

440 writes the configuration to the KNX IoT device (see clause 2.4 “Device Bootstrapping and

441 Configuration”). In addition, the Group Address is also used to discover configured S-Mode Group

442 _Objects (see clause 2.6.1 “Discovery”)._

443 The following figure illustrates the general linkage concept between Group Objects, Points and Group

444 _Addresses, but it does not prescribe how to implement the table structures._

**Function Point Tables**

**FunctionPoint Recipient Table**

PUBLISH

**Recipient** Message notification destination url [ga]

/.knx

KNX IoT Device **Group Object Table**

|FunctionPoint Recipient Table|Col2|
|---|---|
|Message notification destination url|[ga]|

|Group Object Table|Col2|Col3|Col4|
|---|---|---|---|
|[ga]|communication-flags|point-path hre|f|

|FunctionPoint Publisher Table|Col2|
|---|---|
|Message notification source url|[ga]|


SUBSCRIBE


445


KNX IoT Device


446 **Figure 7 – Function Point Tables**


-----

447 **2.4** **Device Bootstrapping and Configuration**

448 **2.4.1** **Introduction**

449 Device Bootstrapping is the process of joining a device to an installation and configuring an application.

450 The application configuration of a KNX IoT Point API device aligns along the existing ETS (MaC)

451 workflows and contains the following steps.

452 **STEP 0 - Project creation in ETS**

453 This is as it is done in KNX Classic. This can be done before, in parallel, or after the step 1. This may

454 include at this place as well offline configuration, i.e., setting parameters and creating links between the

455 devices, for installation parts engineered completely offline.

456 **STEP 1 - Enter KNX IoT Point API device Serial Number in ETS, e.g., by QR code scan**

457 This step brings the serial number to ETS, needed for step 2, and e.g., an authentication code, needed for

458 step 3.

459 **STEP 2 - Device Discovery**

460 Discovery of a KNX IoT Point API device follows the method as described under 2.6.1.2 “Device

461 Discovery with DNS-SD”

462 NOTE 1 With this version of the KNX IoT Point API specification, it is assumed for this step that a device is

463 reachable already on the IP network, e.g., a wireless (Thread or Wi-Fi) KNX IoT device is already

464 onboarded into the IP network and thus discoverable.


465 **STEP 3 - Device Assignment, i.e., matching the discovered devices with the instances foreseen in the**

466 ETS project.

467 This step includes the security setup as described under clause 3.2 “Device Identity Enrollment” and 3.5

468 “Device Access Control”.

469 Device Individualization, i.e., assigning a KNX Individual Address is the same as in KNX Classic. This is

470 either by using the "Programming Mode" Method or by using the KNX Serial Number Method in case

471 the KNX Serial Number is already known to ETS, e.g., by QR code scan.

472 Device Individualization is described in more detail in clause 2.4.2 “Device Individualization Procedure”.

473 **STEP 4 - Offline configuration**

474 This is setting parameters and creating links between the devices (Function Point Table). At this place,

475 this may as well include configuration of a before online discovered and uploaded installation or part of

476 an installation.

477 **STEP 5 - Download device configuration (in ETS aka Application Download)**

478 With this step, ETS also configures the credentials at application level, pre-shared keys. This is, once

479 downloaded, the devices can trust each other.

480 Device configuration is described in more detail in clause 2.4.3 “Device Configuration Procedure”.

481 The above numbering does not imply a fix order for executing these steps. The order may differ as far as

482 possible and meaningful. Some may even be repeated several times during setup / commissioning of an

483 installation, as it is done in KNX Classic.

484 NOTE 2 This version of the KNX IoT Point API specification does not consider how to join, replace or delete a

485 device from the network and how to avoid that the replaced / removed device can still communicate.


-----

486 **2.4.2** **Device Individualization Procedure**

487 Every device in a KNX installation SHALL have a unique, unambiguous KNX Individual Address. This

488 clause defines how a MaC configures the KNX IoT device Individual Address.

489 The KNX Individual Address configuration workflow is like the existing procedure in KNX Classic. The

490 device can either be identified by its KNX Serial Number or by activating the KNX Programming Mode

491 locally on the device, for example, by pressing a button. The MaC can choose one of the following

492 discovery options:

493 - DNS-SD: see clause 2.6.1.2 “Device Discovery with DNS-SD” with _knx service type

494 - “/.well-known/core”: see clause 2.6.1.3 “Resource Discovery with CoAP”

495 - with KNX Serial Number see clause 2.6.1.3.6.1 “Endpoint Name "ep"”.

496 - with "Programming Mode" see clause 2.6.1.3.6.2 “Programming Mode “if.pm””

497 Before writing the Individual Address to the discovered device, a MaC SHALL check that no other device

498 has the same Individual Address. The MaC has the following options to check Individual Addresses:

499 - DNS-SD: see clause 2.6.1.2 “Device Discovery with DNS-SD” with _ia subtype.

500 - “/.well-known/core”: see clause 2.6.1.3 “Resource Discovery with CoAP” or the example below.


**Verify whether the Individual Address is already occupied on the network.**


**REQ:**
GET coap://[FF03::FD]/.well-known/core?if=urn:knx:ia.{KNX Individual Address}

**RES :**
2.05 CONTENT (Content-Format : application/link-format (40))
**Payload :**
</dev/sa>;rt="dpa.0.57";ct=50 60,
</dev/da>;rt="dpa.0.58";ct=50 60


501

502 If the MaC receives a response to the multicast request, it SHALL conclude that the KNX Individual

503 _Address is occupied. If no response is received after timeout then the Individual Address is not occupied_

504 and subsequent the MaC can configure the Individual Address. For this configuration request, the MaC

505 uses the sender IP address out of the IP-response to the before discovery request as the destination device

506 IP unicast address.

507 The procedure SHALL deactivate the Programming Mode by executing a restart of the device (“/.well
508 known/knx”).

509 At this point the MaC knows the IP Address of the uncommissioned KNX IoT device. However, the MaC

510 MAY configure the security credentials first before it configures the KNX Individual Address (see clause

511 3.6.2)

512 In the last step the MaC configures the device KNX Individual Address (see clause 2.5.5.5). A KNX IoT
513 device SHALL accept this configuration request and set its KNX Individual Address accordingly.


**Write device KNX Individual Address**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/ia (Content-Format: application/cbor (60), OSCORE (code
(POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ 12: <KNX Individual Address>, 25: <fid>, 26: <iid> }


514


-----

515 **2.4.3** **Device Configuration Procedure**

516 **2.4.3.1** **General**

517 After the device individualization procedure, the MaC writes the full new Function Point configuration
518 (fp/g, fp/r, fp/p) and application configuration parameters (p) to the device. These resources are controlled
519 by a load state machine (see 2.5.8 “Device Load State Machine Command (a/lsm)”).

520 **2.4.3.2** **Full download**

521 Table 3 specifies the configuration procedure for a full download. An example is given in clause 7.2.1

522 “Full Download Example”.

523 **Table 3 – Full download**

|Step|Procedure|Description|
|---|---|---|
|1|Check MaC DB Entry compatibility with<br>KNX IoT device by comparing “dev/hwt”|See clause 2.5.6 “Device Object Resource (dev)”.<br>Continue with next steps only if compatibility check is<br>successful.|
|2|Set State Machine to “unload”|See clause 2.5.8 “Device Load State Machine Command<br>(a/lsm)”<br>If the intermediate state “unloading” is supported by the<br>Management Server then it may answer with state<br>“unloading”. The MaC SHALL NOT continue before the<br>Management Server has reached the state “unloaded”.|
|3|Set State Machine to “loading”|See clause 2.5.8 “Device Load State Machine Command<br>(a/lsm)”|
|4|Write parameter configuration|See clause 2.5.11 “Parameter and Diagnostic Property<br>Resource (p)”|
|5|Write group object table|See clause 2.5.7.2 “Group Object Table Resource (fp/g)”|
|6|Write Function Point Publisher Table|See clause 2.5.7.4<br>“Function Point Publisher Table Resource (fp/p)”|
|7|Write Function Point Recipient Table|See clause 2.5.7.3 “Function Point Recipient Table<br>Resource (fp/r)”|
|8|Set State Machine to “loaded”|See clause 2.5.8 “Device Load State Machine Command<br>(a/lsm)”<br>If the intermediate state “loadcompleting” is supported by<br>the Management Server then it MAY answer with state<br>“loadcompleting”. The MaC SHALL NOT continue before<br>the Management Server has reached the state<br>“loadcomplete”.|
|9|Read the device configuration fingerprint<br>of the written resources|See clause 2.5.5.4 “Device Configuration Fingerprint<br>(/.well-known/knx/f)”<br>The retrieved checksum MAY be stored by the MaC for a<br>future decision about a differential download|
|10|Restart device (optional)|see clause 2.5.5.3.3 “Device Restart Command”|


-----

524 **2.4.3.3** **Partial/Differential download**

525 Table 4 specifies the configuration procedure for a partial/differential download. The partial/differential

526 download is used if the device is in a known state. In this case the MaC can write only the differences to

527 the device. An example is given in clause 7.2.2 “Partial Download Example”.

528 **Table 4 – Partial/differential download**

|Step|Procedure|Description|
|---|---|---|
|1|Check MaC DB Entry compatibility with<br>KNX IoT device by comparing “dev/hwt”|See clause 2.5.6 “Device Object Resource (dev)”.<br>Continue with next steps only if compatibility check is<br>successful.|
|2|Check if the KNX IoT device is in a<br>known state|See clause 2.5.5.4 “Device Configuration Fingerprint<br>(/.well-known/knx/f)”<br>If the device configuration fingerprint value is known by<br>the MaC than the MaC MAY continue with a differential<br>download else the MaC SHALL fall back to the full<br>download procedure acc. Clause 2.4.3.2 “Full download”<br>and continue there with Step 2.|
|3|Set State Machine to “loading”|See clause 2.5.8 “Device Load State Machine Command<br>(a/lsm)”|
|4|Write parameter configuration<br>(conditional: only if changes there)|See clause 2.5.11 “Parameter and Diagnostic Property<br>Resource (p)”<br>The MaC MAY write only changed parameters (identified<br>by href).|
|5|Write group object table (conditional: only<br>if changes there)|See clause 2.5.7.2 “Group Object Table Resource (fp/g)”<br>The MaC MAY write only changed group objects<br>(identified by “id”).|
|6|Write Function Point Publisher Table<br>(conditional: only if changes there)|See clause 2.5.7.4<br>“Function Point Publisher Table Resource (fp/p)”<br>The MaC MAY write only changed table entries<br>(identified by “id”). Entries with a new “id” will create a<br>new entry.|
|7|Write Function Point Recipient Table<br>(conditional: only if changes there)|See clause 2.5.7.3 “Function Point Recipient Table<br>Resource (fp/r)”<br>The MaC MAY write only changed table entries<br>(identified by “id”). Entries with a new “id” will create a<br>new entry.|
|8|Set State Machine to “loaded”|See clause 2.5.8 “Device Load State Machine Command<br>(a/lsm)”<br>If the intermediate state “loadcompleting” is supported by<br>the Management Server, then it may answer with state<br>“loadcompleting”. The MaC SHALL NOT continue before<br>the Management Server has reached the state<br>“loadcomplete”.|
|9|Read the checksum of the written<br>resources|See clause 2.5.5.4 “Device Configuration Fingerprint<br>(/.well-known/knx/f)”<br>The retrieved checksum MAY be stored by the MaC for a<br>future decision about a differential download|
|10|Restart device (optional)|see clause 2.5.5.3.3 “Device Restart Command”|


-----

529 **2.5** **Resource Model**

530 **2.5.1** **Introduction**

531 Resources are the basis for representing the state and functionality or rather a KNX application.

532 Resources provide access to common application services like device and resource discovery as well as

533 device specific properties and function calls. The resource model provides means of presenting,

534 describing, and addressing data and metadata. Data is accessible by RESTful methods for creating,

535 reading, setting, and deleting data. This clause gives rules for device interactions that need to be exposed,

536 for configuration and discovery, and provides guidelines how to use predefined attributes.

537 **2.5.2** **Resources (Points)**

538 **2.5.2.1** **Definition**

539 Points are KNX application specific API resources representing the KNX application domain model.

540 With an URI, a resource is uniquely defined, and a URL includes the schema to access the resource.

541 Using KNX specific nomenclature for resource names helps developers to understand the functionality

542 and basic semantics of resources. It also reduces the need for further documentation the API items. This

543 clause defines mandatory and optional resource paths and names.

544 **2.5.2.2** **Base Path**

545 A KNX IoT device MAY have a base path to which the Point API resource paths are appended. However,

546 it is RECOMMENDED to avoid a base path if possible.

547 **2.5.2.3** **Resource Names**

548 To simplify encoding of resource IDs in URLs, their representation SHALL only consist of ASCII strings

549 of letters, numbers, underscore, minus, colon, and period.

550 URLs are often treated case sensitive, therefore lowercase separated words with hyphens “-” SHOULD be

551 used.

552 This specification does not define resource names for functional blocks (f) or properties (p), however, it is

553 RECOMMENDED to reuse either IDs or names from the KNX Application Descriptions (volume 7):

554 - Functional block path: “f/{fb-id-instance}”

555 - Property path: “p/{fb-id-instance}/{property-id}”

556 **2.5.2.4** **Resource Path**

557 The resource path definitions allow to access items of a KNX IoT device such as discovery, device,

558 authorization, functional blocks, property items, based on entities as specified in [03] “KNX Information

559 Model”.

560 To keep the API and authorization simple, a resource path SHOULD contain only one collection or item

561 resource with an {id} and MAY a sub-resource path for collections:

562 - collection path: “/collection”

563 - item path: “/items/{id}”

564 - collection path of a particular item: “/items/{id}/collection”

565 It is key to keep maintenance and service evolution manageable. Therefore, the resources follow

566 “functional segmentation” and “separation of concern” design principles and do not mix different

567 functionalities in same API resource. This keeps maintenance and service evolution manageable.

568 The length of a KNX IoT device resource path SHALL not exceed the maximum of 30 bytes.

569 A KNX IoT device server has the following MANDATORY (‘M’) or OPTIONAL (‘O’) resource path

570 definitions with their corresponding access methods.


-----

571 **Table 5 – Resource path definitions**

|Category|Method|Resource Path|Support|Reference|
|---|---|---|---|---|
|Discovery|`GET`|`/.well-known/core`|M|clause 2.5.4|
|Device|`POST`|`/.well-known/knx`|M|clause 2.5.5|
|Device|`POST`|`/.well-known/knx/ia`|M|clause 2.5.5.5|
|Device|`GET`|`/.well-known/knx/f`|M|2.5.5.4|
|Device|`GET`|`/{base-path}/dev`|M|clause 2.5.6|
|Device|`GET`|`/{base-path}/dev/{property-id}`|M|M|
|Device|`PUT`|`/{base-path}/dev/{property-id}`|M/O|M/O|
|Device|`GET`|`/{base-path}/swu`|M|clause 4.2|
|Device|`GET`|`/{base-path}/swu/{property-id}`|M|M|
|Device|`PUT`|`/{base-path}/swu/{property-id}`|M/O|M/O|
|Security|`POST`|`/.well-known/knx/spake`|M|3.6.3.3|
|Security|`GET`|`/.well-known/knx/idevid`|O|clause 3.3.1|
|Security|`GET`|`/.well-known/knx/ldevid`|O|clause 3.3.2|
|Security|`GET`|`/{base-path}/auth`|M|clause 2.5.3.2|
|Security|`POST`|`/{base-path}/auth/crts`|O|clause 3.5.2|
|Security|`GET`|`/{base-path}/auth/crts`|O|O|
|Security|`DELETE`|`/{base-path}/auth/crts/{kid}`|O|O|
|Security|`POST`|`/{base-path}/auth/at`|M|clause 3.5.4|
|Security|`GET`|`/{base-path}/auth/at`|M|M|
|Security|`GET`|`/{base-path}/auth/at/{access-token-id}`|M|M|
|Security|`DELETE`|`/{base-path}/auth/at/{access-token-id}`|M|M|
|Security|`GET`|`/{base-path}/f/oscore`|M|clause 3.6.4|
|Messaging|`POST`|`/.knx`|M|clause 2.5.9|
|Messaging|`GET`|`/.knx`|M|M|
|Function Point<br>Tables|`POST`|`/{base-path}/fp/g`|M|clause 2.5.7|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/g`|M|M|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/g/{group-object-id}`|M|M|
|Function Point<br>Tables|`DELETE`|`/{base-path}/fp/g/{group-object-id}`|M|M|
|Function Point<br>Tables|`POST`|`/{base-path}/fp/r`|M|M|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/r`|M|M|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/r/{recipient-id}`|M|M|
|Function Point<br>Tables|`DELETE`|`/{base-path}/fp/r/{recipient-id}`|M|M|
|Function Point<br>Tables|`POST`|`/{base-path}/fp/p`|O|O|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/p`|O|O|
|Function Point<br>Tables|`GET`|`/{base-path}/fp/p/{publisher-id}`|O|O|
|Function Point<br>Tables|`DELETE`|`/{base-path}/fp/p/{publisher-id}`|O|O|
|Actions|`POST`|`/{base-path}/a/lsm`|M|clause 2.5.8|
|Actions|`GET`|`/{base-path}/a/lsm`|M|M|
|Actions|`POST`|`/{base-path}/a/swu`|O|clause 4.2|


-----

`DELETE /{base-path}/sub/{subscription-id}` O
572

573 **2.5.3** **Interface Types (if)**

574 **2.5.3.1** **Introduction and overview**

575 This clause specifies a set of default interface types and defines how manufacturers can add additional
576 manufacturer-specific interface types.

577 The interface describes a generic context or view to interact with a resource or a set of resources. The

578 interface description “if” attribute is an opaque string used to provide a name indicating a specific

579 interface definition used to interact with the KNX IoT device. The usage of the interface description “if”

580 attribute is described in 3.5.3 “Access Scope”.

581 The interface types are derived from the KNX Device Model (see clause 1.3) and MAY contains a set of
582 additional mandatory or optional metadata.

583 Table 6 defines KNX IoT interfaces and which CoAP Methods are allowed for a particular interface on a

584 KNX IoT device:

585 **Table 6 – Interface definitions and methods**

|Category|Method|Resource Path|Support|Reference|
|---|---|---|---|---|
||`POST`|`/{base-path}/a/sen`|O|3.2.4.2|
|Functional blocks|`GET`|`/{base-path}/f/{fb-id-instance}`|M|clause 2.5.10|
|Properties|`POST`|`/{base-path}/p`|M|clause 2.5.11|
||`GET`|`/{base-path}/p`|M|M|
||`GET`|`/{base-path}/p/{fb-id-instance}/{property-`<br>`id}`|M|M|
||`PUT`|`/{base-path}/p/{fb-id-instance}/{property-`<br>`id}`|M|M|
|Subscriptions|`POST`|`/{base-path}/p/{fb-id-instance}/{property-`<br>`id}`|O|clause 2.5.12|
||`GET`|`/{base-path}/p/{fb-id-instance}/{property-`<br>`id}/sub`|O|O|
||`GET`|`/{base-path}/sub`|O|O|
||`DELETE`|`/{base-path}/sub`|M|M|
||`GET`|`/{base-path}/sub/{subscription-id}`|O|O|
||`DELETE`|`/{base-path}/sub/{subscription-id}`|O|O|

|Type|Interface|Method|Description|
|---|---|---|---|
|Link List|if.ll|GET,<br>(OBSERVE)|Read linked list and, in combination with<br>if.o, subscribe all datapoints of the list|
|Parameter|if.p|GET, PUT,<br>(OBSERVE)|Adjust parameter datapoint (see [03]<br>“KNX Information Model”)|
|Diagnostic|if.d|GET,<br>(OBSERVE)|Read diagnostic datapoint (see [03]<br>“KNX Information Model”)|
|Configuration|if.c|GET, PUT,<br>POST, DELETE|Configuration and programming of a<br>device|
|Logical Input|if.i|PUT, POST|Write and command runtime input<br>datapoint (see [03] “KNX Information<br>Model” and clause 1.3)|


-----

|Type|Interface|Method|Description|
|---|---|---|---|
|Logical Output|if.o|GET, POST,<br>OBSERVE|Read and subscribe runtime output<br>datapoint (see [03] “KNX Information<br>Model” and clause 1.3)|
|Group Communication|if.g.s|POST|Group communication (S-Mode) runtime<br>interworking (input and output) address|
|Batch|if.b|GET, PUT, POST|Read or write a collection (e.g. datapoint<br>list)|
|Actuator|if.a|GET, PUT, POST|Hardwired actuator (see [03] “KNX<br>Information Model” and clause 1.3)|
|Sensor|if.s|GET, PUT|Hardwired sensor (see [03] “KNX<br>Information Model” and clause 1.3)|
|Security|if.sec|GET, PUT,<br>POST, DELETE|Configuration (read and write) of security<br>incl. authorization related data (see<br>clause 3 “Security”).|
|Software Update|if.swu|GET, PUT,<br>POST, DELETE|Software update (push and pull) related<br>data (see clause 4).|
|Programing Mode|if.pm|GET|Data that can be read in Programming<br>Mode|
|Manufacturer|if.m.{name}|Manufacturer-<br>specific definition|Manufacturer defined interface types|


586

587 **2.5.3.2** **Link List Interface Type (if.ll)**

588 The Link List interface provides gradual reveal of resources on a KNX IoT device. It is used to retrieve

589 (GET) a list of resources on a KNX IoT device. The GET request SHOULD contain an Accept option

590 with the application/link-format content format. The request returns a list of URI references with absolute

591 paths to the resources as defined in CoRE Link Format [RFC6690]. This interface is typically used with a

592 parent resource to enumerate sub-resources, but MAY be used to reference any resource on an origin

593 server.


**CoAP client request a link list (datapoint list) from a Room Temperature Sensor (functional block**
**321)**


**REQ:**

GET coap://{ip unicast}/f/rts (Accept: application/link-format (40))

**RES :**

**12.04** CONTENT (Content-Format : application/link-format (40))

**Payload :**

</p/rts/temproom>;rt="dpa.321.51";ct=50,
</p/rts/tempcorrvalue>;rt="dpa.321.111";ct=50
</p/rts/tempalarmlimitupper>;rt="dpa.321.113";ct=50


594


-----

595 **2.5.3.3** **Parameter and Diagnostic Interface Type (if.p, if.d)**

596 Parameter and diagnostic properties (see clause 1.3) are the basic interfaces of a Point API and define

597 whether a client can read or read/update values and metadata, such as getting the current sensor value or

598 updating a setpoint. The following MANDATORY and OPTIONAL metadata members from clause

599 2.5.11.3 “Metadata Query Parameter “m” are assigned to the “if.p” (parameter) and “if.d” (diagnostic)

600 interface:

601 - id

602 - rt

603 - if

604 - unit

605 - min

606 - max

607 A Point MAY implement a parameter (“if.p”) and diagnostic property (“if.d”) in combination with a

608 communication interworking interface type (“if.i”, “if.o”). In such cases, it is RECOMMANDED to

609 combine only “if.i” with “if.p” (inputs) or “if.o” with “if.d” (outputs).

610 **2.5.3.4** **Configuration Interface Type (if.c)**

611 The Configuration interface is used to configure a basic functionality, Function Point Tables or for

612 programming a KNX IoT device.

613 **2.5.3.5** **Input Interface Type (if.i)**

614 A communication interworking logical input Point (see clause 1.3) receives events from Publishers. An

615 input interface Point receives either status events (e.g. light switch ON/OFFF) or periodic updates from

616 Publishers (if.o interface). A Point with an interface type “if.i” SHALL NOT be of interface type “if.o” at

617 once.

618 The Recipient device MAY have a default behavior if no update is received within a given period

619 (e.g., Max-Age timeout). For example, a controller gets a periodic synchronization from an output

620 temperature sensor and the controller uses a default value in case the sensor value is not present (e.g.

621 broken or not configured).

622 **2.5.3.6** **Output Interface Type (if.o)**

623 A communication interworking logical output Point (see clause 1.3) sends status events (e.g. light switch

624 ON/OFFF) or periodic updates (e.g. temperature sensor) from a Publisher to a Receiver (“if.i” interface).

625 A Point with an interface type “if.o” SHALL NOT be of interface type “if.i” at once.

626 An output interface Point either supports subscriptions (e.g., CoAP Observe) or S-Mode event

627 notifications. Examples are operating modes, setpoints, status updates, or sensor values etc. Those values,

628 such as an outside temperature value, MAY have additional metadata that are used for periodic

629 synchronization of values throughout the system. The following metadata members from clause 2.5.11.3

630 “Metadata Query Parameter “m” MAY be assigned to the “if.o” interface:

631 - mrt

632 - cov

633 - hbt

634 **2.5.3.7** **Group Object Interface (if.g.s)**

635 Points with a Groups Object interface support S-Mode event notifications and a MaC can link Group

636 _Addresses to this object. The following metadata members from clause 2.5.11.3 “Metadata Query_

637 Parameter “m” are assigned to the “if.g.s” interface:

638 - g


-----

639 **2.5.3.8** **Batch Interface Type (if.b)**

640 The Batch interface (“if.b”) is used to manipulate a collection of sub-resources or an array of values with

641 a single request. A resource with “if.b” interface SHALL support pagination as defined in clause 2.6.8

642 “Pagination”. Single items can be accessed with pagination query parameters starting with pn=0 if no

643 query parameter is present.

644 If a resource contains an array of datapoint values then the resource SHALL be of type Batch interface

645 (“if.b”).

646 Datapoint values SHALL be modeled as key/value pairs in the GET response (see rules in 2.5.11.1) but

647 only if the client requests more than one item (ps > 1). The default list size SHALL be ps=1 if the query

648 parameter is not present.

649 The KNX IoT device GET response SHALL list items in the same order as they were written (first array

650 item = “po=0”). A KNX IoT device SHALL support write (PUT) of a single value, for example, on “if.p”

651 interfaces. However, updating a list of values on the same resource is OPTIONAL.


**CoAP client reads an array of Ipv6 configurations with a single request. In the second request the**
**client omits pagination parameters and gets only the first list item.**


**REQ:**

GET coap://{ipv6-unicast}/dev/ipv6?pn=0&ps=3 (Content-Format: application/json (50))

**Payload:**

[
“value”: 20010db8000300006cd98ad28e881a47
“value”: fe800000000000006cd98ad28e881a47,
“value”: fd00000ff1ce0ba56cd98ad28e881a47
]

**REQ:**

GET coap://{ipv6-unicast}/dev/ipv6 (Content-Format: application/json (50))

**Payload:**

20010db8000300006cd98ad28e881a47


652

653 The interface type of a resource that represents a collection of sub-resources SHALL be of type Batch

654 interface. The Batch interface resource SHALL support the same methods as its sub-resources, and can be

655 used to read (GET), update (PUT) or apply (POST) the values of those sub-resource. The method used on

656 Batch only applies to sub-resources that support it. For example, sensor interfaces do not support PUT,

657 and thus a PUT request to a Sensor member of that Batch would be ignored.


-----

**CoAP client writes a collection of datapoints to a device with a single request to a Room**
**Temperature Sensor (functional block 321)**


**REQ:**

PUT coap://{ipv6-unicast}/p (Content-Format: application/json (50))

**Payload:**

[
{ “href”: “/p/rts/tempcorrvalue”, “value”: 0.5 }
{ “href”: “/p/rts/tempalarmlimitupper”, “value”: 27.2 }
]


658

659 **2.5.3.9** **Programming Mode Interface Type (if.pm)**

660 A MaC MAY want to find devices that are in "Programming Mode" during the device bootstrapping and

661 configuration step. Hence, a KNX IoT device SHALL support the "Programming Mode".

662 With a "Programming Mode" the destination KNX IoT device can be identified by selecting the device

663 manually. This can be done by pressing a button that brings this device into "Programming Mode", i.e.

664 only the device where the button is pressed. The way a KNX IoT device is set to "Programming Mode" is

665 manufacturer specific.

666 **2.5.3.10** **Manufacturer Specific Interface Type (if.m.{name})**

667 The manufacturer interface allows manufacturer-specific interface types, for example, with manufacturer

668 specific methods (GET, PUT etc.) that are allowed on a resource. Manufacturer specific interface types

669 SHALL start either with “urn:” or “if.m.” followed by a manufacturer defined string {name}.

670 **2.5.4** **Device Discovery Resource (/.well-known/core)**

671 For CoAP-based resource discovery purposes, a KNX IoT device SHALL support the /.well-known/core

672 resource [RFC6690], and the device SHALL accept unicast and multicast discovery requests on this

673 resource. More details are described in clause 2.6.1 “Discovery”. In the case of multicast discovery

674 queries, a KNX IoT device SHALL follow the rules for response suppression as described in clause

675 2.6.4.2 “Response suppression”. In the case of unicast discovery queries, a KNX IoT device SHOULD

676 respond as described in clause 2.6.3.2.2 “Error Responses to Queries”.

677 The response SHALL contain all functional block resources of a KNX IoT device. In order to reduce the

678 message size, the response MAY contain only functional block resources. However, the response SHALL

679 contain all implemented functional blocks that are standardized in KNX Application Descriptions

680 (volume 7) and supported content types (ct). In addition, the following resources SHALL be in the

681 response if supported by the device:

682 - “/{base-path}/dev”

683 - “/{base-path}/auth”

684 - “/{base-path}/swu”

685 - “/{base-path}/sub”

686 The functional block resources in the response SHALL support the application/link-format. This allows

687 clients to discover Points with subsequent requests (see clause 2.5.10 “Functional Block Resource (f)”).

688 The response SHALL contain the prefix “urn:knx” since the device context is unknown on the client at

689 this stage.


-----

**CoAP client discovers device functional blocks**


**REQ:**
GET coap://{ipv6-unicast}/.well-known/core

**RES :**
**12.04** CONTENT (Content-Format : application/link-format (40))
**Payload :**
<rts> ; rt="urn :knx :fb.321" ;ct=40


690

691 **2.5.5** **Device API Resource (/.well-known/knx)**

692 **2.5.5.1** **General requirement**

693 A KNX IoT device SHALL support the “/.well-known/knx” resource for KNX-specific device

694 operations, such as device individualization, security configuration (see clause 3 “Security”), reset to

695 default state or device restart, so that it can be easily located by a MaC.

696 **2.5.5.2** **API Version Resource Object**

697 The “/.well-known/knx” resource also provides the KNX IoT API version information and relationship

698 information to identify the API entry point for a MaC or any other client. A basic response contains the

699 data as listed in Table 7.

700 **Table 7 – Data in the basic response**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

“api” “api” map **M** The API object contains the most recent
supported API version on the KNX IoT
device

“version” “version” Text string **M** Major and minor version of the KNX IoT
Point API (“<major.minor.patch>”).

“base” “base” Text string **M** The /{base-path} member value is part of
the entire URL of the KNX IoT Point API.
A client SHALL include the resource path
base member value when requesting
content from a KNX IoT device (see
clause 2.5.2.2 “Base Path”).

701

702 Semantic versioning contains a major, minor and patch information. The version member value SHALL

703 contain the major, minor and patch number according to the format major.minor.patch, represented as a

704 string. The major number starts from value 1, the minor and patch number starts with value 0.

705 On any compatible change with the current KNX IoT Point API, the major number remains, the minor

706 number SHALL be incremented. The base member value SHALL NOT be changed.

707 On any incompatible change with the current KNX IoT Point API, the new major number SHALL be

708 incremented. The new minor number SHALL be set to 0.

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“api”|“api”|map|**M **|The API object contains the most recent<br>supported API version on the KNX IoT<br>device|
|“version”|“version”|Text string|**M **|Major and minor version of the KNX IoT<br>Point API (“<major.minor.patch>”).|
|“base”|“base”|Text string|**M **|The /{base-path} member value is part of<br>the entire URL of the KNX IoT Point API.<br>A client SHALL include the resource path<br>base member value when requesting<br>content from a KNX IoT device (see<br>clause 2.5.2.2 “Base Path”).|


-----

709 The KNX IoT device Point API SHALL have version 1.0.0 if the API is compliant with this specification

710 version and implements the MANDATORY resource definitions as defined in clause 2.5.2.4 ”Resource

711 Path”.

712 Table 8 defines MANDATORY (‘M’) or OPTIONAL (‘O’, for optional) configuration resources of a

713 KNX IoT device.

714 **Table 8 – Mandatory and option configuration resources**

**Resource** **rt & Data** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types**

/.well- NA cbor GET **M** Res : Content-Format : Device KNX Point
known/knx json application/json API version and

base path

Payload:

{

"api": {

"version": “1.0.0”,

"base": "/"

}
}

715

716 **2.5.5.3** **Device Command Resource Object**

717 2.5.5.3.1 Overview

718 The functionality of the reset resource is derived from the functionality of the Master Reset Service as
719 defined for KNX Classic devices, see [09].

720 A KNX IoT device SHALL support at least reset command (cmd), with supported erase codes ‘2’ (“Reset

721 to default state”) and ‘7’ (“Reset to default without IA”).

722 With erase code ‘2’ (“Reset to default state”), all addressing information and security configuration data

723 SHALL be reset to default state. With erase code ‘7’ (“Reset to default without IA”), all configuration

724 data SHALL be reset to default state except addressing information (IA, Device IP Address) and security

725 configuration data (credentials) that are needed after the reset to access the device without need to

726 discover the device again and/or renew addressing information and security credentials.

727 Table 9 defines JSON keys and the CBOR mapping for CoAP request and response members of “/.well
728 known/knx”.

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|/.well-<br>known/knx|NA|cbor<br>json|GET|**M **|Res : Content-Format :<br>application/json<br>Payload:<br>{ <br> "api": {<br> "version": “1.0.0”,<br> "base": "/" <br>  }<br>}|Device KNX Point<br>API version and<br>base path|


-----

729 **Table 9 – response members of /.well-known/knx**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

“value” 1 unsigned **M** Erase value (see [09])

“cmd” 2 text string **M** Service command.
Enum: reset, restart

“status” 3 unsigned **M** Current status

“code” “code” unsigned **M** Device response code (see

[09])

“time” “time” unsigned **M** Process time (see [09])

730

731 2.5.5.3.2 Device Reset Command

732 A KNX IoT device provides a functionality to reset it to its default state, which typically corresponds to

733 the ex-factory state of the device’s configurable data. A device reset to default state is a device specific

734 operation. A KNX IoT device therefore SHALL support the following command to allow a MaC or any

735 other client with appropriate rights to reset the KNX IoT device to its default configuration state.

736 **Table 10 – Device Reset Command**

**Resource** **rt & Data** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types**

/.well- NA cbor POST **M** Req : Content-Format : The CoAP reset
known/knx application/json request SHOULD be

confirmed by the

Payload:

device, before the

{ "cmd": "reset", "value":

CoAP connection

<erase-code> }

breaks down.

Res : Content-Format :
application/json
Payload:

{ "code": <error-code>,
"time": <process-time> }

737

738 Before executing the reset function, the KNX IoT device SHALL return a response with CoAP response

739 code 2.04 CHANGED and with payload containing Error Code and Process Time in seconds as defined

740 for the response to a Master Reset Request for KNX Classic devices, see [09]. The following example

741 shows how a MaC sets a KNX IoT device to its default configuration state.

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“value”|1|unsigned|**M **|Erase value (see [09])|
|“cmd”|2|text string|**M **|Service command.<br>Enum: reset, restart|
|“status”|3|unsigned|**M **|Current status|
|“code”|“code”|unsigned|**M **|Device response code (see<br>[09])|
|“time”|“time”|unsigned|**M **|Process time (see [09])|

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|/.well-<br>known/knx|NA|cbor|POST|**M **|Req : Content-Format :<br>application/json<br>Payload:<br>{ "cmd": "reset", "value":<br><erase-code> }<br>Res : Content-Format :<br>application/json<br>Payload:<br>{ "code": <error-code>,<br>"time": <process-time> }|The CoAP reset<br>request SHOULD be<br>confirmed by the<br>device, before the<br>CoAP connection<br>breaks down.|


-----

**Device Reset to default state**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx (Content-Format: application/cbor (60))
**Payload:**
{ 2: "reset", 1: <erase-code> }

**RES:**
2.04 CHANGED (Content-Format: application/cbor (60))
**Payload:**
{ "code": <error-code>, "time": <process-time> }


742

743 2.5.5.3.3 Device Restart Command

744 A KNX IoT device SHALL support the following command to allow a MaC or any other client with

745 appropriate rights to restart a KNX IoT device.

746 **Table 11 – Device Restart command**

**Resource** **rt & Data** **Method** **Support** **Request/Response** **Notes**

**path** **Types**

/.well- NA POST **M** Req : Content-Format : The CoAP restart request
known/knx application/json SHALL NOT be confirmed

Payload: by the device. This may

result in a breakdown of

{ "cmd": "restart" }

the CoAP connection.

747

748 **2.5.5.4** **Device Configuration Fingerprint (/.well-known/knx/f)**

749 A KNX IoT device SHALL provide a resource to read a fingerprint of a device configuration setting (e.g.

750 a checksum). The device configuration fingerprint SHALL include parameters that can be changed of the

751 following resources:

752 - fp/g

753 - fp/r

754 - fp/p

755 - p

756 The device configuration fingerprint MAY be used by a MaC for the decision if a differential download is

757 possible or not. The calculation of the device configuration fingerprint is manufacturer specific but

758 SHALL reflect a distinct device configuration set.

759 Table 12 defines the device configuration fingerprint resource for KNX IoT that a device MANDATORY

760 (‘M’) or OPTIONAL (‘O’, for optional) support.

|Resource<br>path|rt & Data<br>Types|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|
|/.well-<br>known/knx|NA|POST|**M **|Req : Content-Format :<br>application/json<br>Payload:<br>{ "cmd": "restart" }|The CoAP restart request<br>SHALL NOT be confirmed<br>by the device. This may<br>result in a breakdown of<br>the CoAP connection.|


-----

761 **Table 12 – Device Configuration Fingerprint resource**

**Resource path** **rt & Data** **Method** **Support** **Request/Response** **Notes**

**Types**

/.well- NA GET **M** Req : Content-Format : Device specific fingerprint in
known/knx/f « application/cbor » order to identify changes in

Payload: the resources “fp/g”, “fp/r”,

“fp/p” and “p”

{ 1: <value> }

762

763 **2.5.5.5** **Device Individualization Resource (/.well-known/knx/ia)**

764 The individualization process is derived from the A_IndividualAddress_Write-service as defined for
765 KNX Classic devices (see [11]). However, KNX IoT splits the functionality into a "Programming Mode"
766 discovery (see clause 2.6.1.2.3 and 2.6.1.3.6.3) and a device address configuration step.

767 The “/.well-known/knx/ia” resource SHALL be used by the MaC to modify the KNX Individual Address

768 and the installation ID on a KNX IoT device (see clause 2.4.2).

769 The device individualization request SHALL contain the new individual address and installation ID.

770 Table 13 defines the MANDATORY (‘M’) resource object members and CBOR keys. If a member is

771 market as OPTIONAL (‘O’) then this means a client can omit the member in the request, however, the

772 server SHALL support the member handling.

773 **Table 13 – Device Individualization Resource Object**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

“ia” 12 unsigned **M** New KNX Individual Address device
configuration (2 Byte).

“fid” 25 unsigned O New KNX Fabric ID device for unicast
address configuration.

“iid” 26 unsigned **M** New KNX Installation ID for device multicast
configuration.

774

775 If the KNX IoT device has changed its local KNX Individual Address (see “dev/sa”, “dev/da”, “dev/iid”

776 and “dev/fid” in clause 2.5.6) then the KNX IoT device SHALL return a response with CoAP response

777 code 2.04 CHANGED. After responding to the client, the KNX IoT device SHALL change the IPv6

778 address if the KNX Fabric ID has changed (see ULA clause 2.6.2).

779 **Table 14 – Device Individualization resource**

**Resource path** **rt & Data** **Method** **Support** **Request/Response** **Notes**

**Types**

/.well- NA POST **M** Req: Content-Format: Device individualization for
known/knx/ia application/cbor configuring the device ia and

Payload: installation ID.
{ 12: <ia>, 26: <iid> }

780

|Resource path|rt & Data<br>Types|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|
|/.well-<br>known/knx/f|NA|GET|**M **|Req : Content-Format :<br>« application/cbor »<br>Payload:<br>{ 1: <value> }|Device specific fingerprint in<br>order to identify changes in<br>the resources “fp/g”, “fp/r”,<br>“fp/p” and “p”|

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“ia”|12|unsigned|**M **|New KNX Individual Address device<br>configuration (2 Byte).|
|“fid”|25|unsigned|O|New KNX Fabric ID device for unicast<br>address configuration.|
|“iid”|26|unsigned|**M **|New KNX Installation ID for device multicast<br>configuration.|

|Resource path|rt & Data<br>Types|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|
|/.well-<br>known/knx/ia|NA|POST|**M **|Req: Content-Format:<br>application/cbor<br>Payload:<br>{ 12: <ia>,  26: <iid> }|Device individualization for<br>configuring the device ia and<br>installation ID.|


-----

781 **2.5.6** **Device Object Resource (dev)**

782 The device object contains general device specific settings and configurations. Some properties are

783 configured by the MaC (see clause 2.4.3 “Device Configuration Procedure”) other properties are

784 configured in the factory (e.g., serial number).

785 Table 15 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) device resources (dev) and the

786 respective resource path names that SHALL be used.

787 **Table 15 – Device resources and paths**

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|dev|:fb.0|link-<br>format|GET|**M **|Content-Format:<br>application/link-format<br>Payload:<br></dev/model>;ct=60|Device functional<br>block|
|dev/sn|:dpa:0.11<br>:dpt.serNu<br>m|cbor<br>json|GET|**M**|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: “123ABC” }|Device_KNX_<br>_Serial Number_|
|dev/hwv|:dpt.versio<br>n|cbor<br>json|GET|O|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: [1,2,3] }|Hardware version|
|dev/fwv|:dpa.0.25<br>:dpt.versio<br>n|cbor<br>json|GET|**M**|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: [1,2,3] }|Firmware version|
|dev/hwt|:dpt.varStr<br>ing8859_1|cbor<br>json|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{1:012345ABCDEFG”}|The hardware<br>type is a<br>manufacture<br>specific ID for a<br>device type (MaC<br>uses this ID for<br>compatibility<br>checks).<br>Max. length: 6<br>octets|
|dev/model|:dpa.0.15<br>:dpt.utf8|cbor<br>json|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: “QAA987” }|Device Model<br>Max. length: 10<br>octets|
|dev/sa|:dpa.0.57<br>:dpt.value<br>1Ucount|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 1 }|KNX Subnet<br>Address|
|dev/da|:dpa.0.58<br>:dpt.value<br>1Ucount|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 2 }|KNX Device<br>Address|


-----

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|dev/hname|:dpt.varStr<br>ing8859_1|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: “my.device.local” }|Device hostname<br>for DNS resolution<br>(min. 60 and max.<br>253 characters<br>according to<br>[RFC1035] clause<br>2.3.4)|
|dev/ipv6|:dpt.ipv6|cbor<br>json|GET<br>(PUT)|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1:<br>0x20010db800030000<br>6cd98ad28e881f68 }|Device ipv6<br>addresses. The<br>resource interface<br>SHALL be if=if.b|
|dev/fid|:dpt.value<br>4Ucount|cbor<br>json|GET<br>(PUT)|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0x1122223333 }|40-bit KNX Fabric<br>ID (see ULA in<br>clause 2.6.2)|
|dev/iid|:dpt.value<br>4Ucount|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0x0000003333 }|40-bit KNX<br>Installation ID<br>(see ULA in<br>clause 2.6.5)|
|dev/port|:dpt.value<br>2Ucount|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 5683 }|Standard/default<br>port number for<br>CoAP based<br>device-to-device<br>communication.|
|dev/pm|:dpa.0.54<br>:dpt.binary<br>Value|cbor<br>json|GET<br>PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: false }|Programming<br>Mode<br>enable/disable|


788

789 **2.5.7** **Function Point Table (fp)**

790 **2.5.7.1** **Introduction and overview**

791 This clause describes the configuration of group events on a KNX IoT device. A MaC can choose

792 between several message exchange configurations. The definition when to apply which message

793 exchange pattern is out-of-scope of this document. A KNX IoT device SHALL support at least the

794 following message exchange configurations:

795 - Multicast message exchange

796 - Direct Unicast message exchange

797 A KNX IoT device MAY support and the KNX IoT Classic Gateway SHALL implement the following

798 message exchange configuration:

799 - Endpoint subscription message exchange (see clause 5)


-----

800 In Figure 8 the MaC configures a multicast message exchange, for example, between one or many sensors

801 (e.g. light switches) and one or many actuators (e.g. light bulbs). In addition, the actuator status is sent to

802 an HMI (e.g. room unit) for visualization. For multicast group events the MaC SHALL configure the

803 following Function Point Tables:

804 - GA and Points in the Group Object Table on all devices.

805 - Multicast send address in the Function Point Publisher Table on devices with “if.o” interfaces.

806 - Multicast listening address in the Function Point Recipient Table on devices with “if.i” interfaces.

knx://urn:knx:ia.11 knx://urn:knx:ia.12 knx://urn:knx:ia.13

**<<FunctionalBlock>>** **<<FunctionalBlock>>** **<<FunctionalBlock>>**

**Sensor** **Actuator** **HMI**

**<<Point>>** coap://<multicast>/.knx **<<Point>>** **<<Point>>** coap://<multicast>/.knx **<<Point>>**

**if.o** **if.i** **if.o** **if.i**

Function Point Tables Function Point Tables Function Point Tables

**- Group object table**

**- Group object table** **- Group object table**

**- Recipient table**

**- Recipient Table** **- Publisher table**

|<<Point>>|Col2|<<Point>>|
|---|---|---|
||||
|**if.i**|**if.i**|**if.o**|

|Col1|<<Point>>|Col3|
|---|---|---|
||||
|Function Point Tables<br>**if.o**|**if.o**||

|knx://urn:knx:ia.11<br><<FunctionalBlock>><br>Sensor<br><<Point>><br>if.o<br>Function Point Tables|coap://<multicast>/.knx|knx://urn:knx:ia.12<br><<FunctionalBlock>><br>Actuator<br><<Point>> <<Point>><br>if.i if.o<br>Function Point Tables|
|---|---|---|
||||


807


**Management Client (MaC)**


808 **Figure 8 – Multicast Message Exchange**

809 The MaC MAY configure Direct Unicast Message Exchange, for example, in networks where multicast

810 reachability between devices is not possible or for applications that need reliable (confirmed)

811 communication between devices. Figure 9 depicts a unicast example with a controller (e.g. HVAC

812 controller) which gets sensor updates (e.g. room temperature sensor) and commands an actuator

813 accordingly (e.g. radiator valve). The MaC SHALL configure for unicast group events the following

814 Function Point Tables:

815 - GA and Points in the Group Object Table on all devices.

816 - Unicast send address in the Function Point Publisher Table on devices with “if.o” interfaces.

knx://urn:knx:ia.21 knx://urn:knx:ia.22 knx://urn:knx:ia.23

**<<FunctionalBlock>>** **<<FunctionalBlock>>** **<<FunctionalBlock>>**

**Sensor** **Controller** **Actuator**

**<<Point>>** knx://urn:knx:ia.22/.knx **<<Point>>** **<<Point>>** knx://urn:knx:ia.23/.knx **<<Point>>**

**if.o** **if.i** **if.o** **if.i**

Function Point Tables Function Point Tables Function Point Tables

**- Group object table**

**- Group object table**

**- Recipient table** **- Group object table**

**- Recipient Table**

|<<Point>>|Col2|<<Point>>|
|---|---|---|
||||
|**if.i**|**if.i**|**if.o**|

|Col1|<<Point>>|Col3|
|---|---|---|
||||
|Function Point Tables<br>**if.o**|**if.o**||

|knx://urn:knx:ia.21<br><<FunctionalBlock>><br>Sensor<br><<Point>><br>if.o<br>Function Point Tables|knx://urn:knx:ia.22/.knx|knx://urn:knx:ia.22<br><<FunctionalBlock>><br>Controller<br><<Point>> <<Point>><br>if.i if.o<br>Function Point Tables|
|---|---|---|
||||


817


**Management Client (MaC)**


818 **Figure 9 – Direct Unicast Message Exchange**


-----

819 **2.5.7.2** **Group Object Table Resource (fp/g)**

820 2.5.7.2.1 Definition

821 A KNX IoT device SHALL implement a Group Object table. The Group Object table SHALL be

822 writable; it is configured by the MaC. The Group Object table contains configuration information for

823 each Group Object used by the device.

824 A Group Object is represented by a manufacturer defined resource path (“href”: “{point-path}”). A

825 _Group Object has a set of mandatory and optional metadata member (see clause 2.5.11.3 “Metadata_

826 Query Parameter “m” and clause 2.5.11.4 “Metadata Resource Object”). A Metadata member is

827 accessible as a resource below the {point-path}. A MaC SHALL use metadata member such as CoV,

828 heartbeat, min/max limitations etc. to configure Group Object communication behavior.

829 In case a function has extended features with additional configuration parameters, then the MaC MAY

830 write values to additional manufacturer defined resource paths ({point-path}). This document does not

831 specify how to implement company-specific parameters and diagnostic properties.

832 Every Group Object SHALL implement a ("dpt") metadata for retrieving Datapoint Types and, if

833 possible, semantic Datapoint Annotations (“rt”).

834 KNX Datapoint Types are identified by a prefix (urn:knx:dpt), and a Datapoint Type separated by a dot as

835 specified in [03] “KNX Information Model”. For example, a DPT_BinaryValue is encoded as follows:

836 urn:knx:dpt.binaryValue. Datapoint Types with the same main number have the same data type

837 (e.g., boolean), format (e.g., B1 or B2) and encoding. A different subnumber indicates a different

838 dimension (different range and/or different unit). KNX Datapoint Types are defined in KNX System

839 specifications, chapter 3/7/2 and are used accordingly in KNX IoT. The Datapoint Type SHALL be

840 defined for every Group Object and can be retrieved by reading {point-path}?m=dpt.

841 All Group Objects SHOULD have a semantic Datapoint Annotation, for example, for filtering discovery

842 requests. Datapoint annotations have the following structure: urn:knx:dpa.{functionalblock
843 id>.<property-id>. Datapoint annotations are inherited from the existing functional block and property

844 specification as defined in the KNX Application Descriptions (volume 7). A Datapoint Annotation does

845 not imply that a certain functional block functionality is implemented. Every Group Object, or rather the

846 assigned {point-path} SHOULD have a Datapoint Annotation unless the appropriate functional block and

847 property has not been defined yet in the KNX Application Descriptions.

848 A Group Object contains a list of Group Addresses (“ga”). However, only one sending Group Address

849 can be used for a Group Object. Hence, if more then one Group Addresses are configured then the first

850 list item SHALL be used as sending Group Address.

851 The "href" member SHALL contain a reference to a {point-path}.

852 Table 16 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) group object table resources and the

853 respective resource path names that SHALL be used.

854 **Table 16 – Group Object Table resources and paths**

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|fp/g|NA|cbor|POST|M|Req: Content-Format:<br>application/cbor<br>Payload:  (see<br>example below)|Write Group Object<br>Table. Single<br>Elements are<br>identified by its “id”.<br>Existing elements<br>are replaced, and<br>not existing<br>elements are added.|


-----

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|fp/g|NA|cbor|GET|**M**|Resp; Content-<br>Format:<br>application/link-format<br>Payload:<br></fp/g/1>;ct=50|Group object item<br>linked list|
|fp/g/{group-<br>object-id}|NA|cbor|GET<br>DELETE|**M**|Req: Content-Format:<br>application/cbor<br>Payload:  (see<br>example below)|Read/delete single<br>list item|


855

856 2.5.7.2.2 Function Point Group Object Resource Object

857 Table 17 defines the Function Point Group Object resource object CBOR keys for configuring and

858 reading Function Point Group Object table items.

859 **Table 17 – Function Point Group Object resource object CBOR keys**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

"id" 0 unsigned **M** ID of the Group Object Table Entry.
It has to be unique in the table (range
0…65 535). Note: There is no
sorting requirement for IDs.

"ga" 7 unsigned array **M** A List of all connected Group
_Addresses._

"cflag" 8 unsigned **M** Group Object Configuration Flags
(see 2.5.7.2.3)

"href" 11 text string **M** Reference to the Point which is
representing the data of this Group
Object.

860

861 The MaC configures 2 group object table items on a KNX IoT device in the following example. The

862 cFlags for the first item are configured as “read”, “write”, “transmit” and “update” (0b11011000). The

863 cFlag for the second item is configured as “transmit” (0b01000000).

864

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"id"|0|unsigned|**M **|ID of the Group Object Table Entry.<br>It has to be unique in the table (range<br>0…65 535). Note: There is no<br>sorting requirement for IDs.|
|"ga"|7|unsigned array|**M **|A List of all connected_Group_<br>_Addresses_.|
|"cflag"|8|unsigned|**M **|Group Object Configuration Flags<br>(see  2.5.7.2.3)|
|"href"|11|text string|**M **|Reference to the Point which is<br>representing the data of this Group<br>Object.|


**Write group object table items.**


**REQ:**
POST coap://{ipv6-unicast}/fp/g (Content-Format: application/cbor (60)), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
0: 1,
11: "/p/LDSB1/SOO",


-----

7: [2305, 2401],
8: 216 //0b11011000
},
{
0: 2,
11": "/p/LDSB1/RSC",
7: [2306],
8: 64 //0b01000000
}
]


865

866 2.5.7.2.3 Group Object Configuration Flags Resource Object “cflag”

867 A KNX IoT device SHALL support for each Group Object the non-volatile configuration flags “read”,

868 “init”, “write”, “transmit”, and “update”, describing the behavior of the respective Group Object. Like in

869 KNX Classic, the configuration flags are configured by a MaC and are written to the device as part of the

870 group object table configuration, see 2.5.7.2 “Group Object Table”.

871 The meaning and action of the configuration flags “read”, “init”, “write”, “transmit”, and “update” are

872 explained in Table 18.

873 **Table 18 – Group Object configuration flags**

**Flag** **Bit** **Description**

Reserved 0, 1 Default = false

Communication 2 not used in KNX IoT since the flag is just a logical disjunction (OR) of the
other configuration flags (default = false).

Read 3 false = Group Object value cannot be read.
true = With a read command to a Group Object, the device sends this
_Group Object’s value._

Write 4 false = Group Object value cannot be written.
true = The device receives and overwrites its Group Object value (default
for inputs).

Init 5 false = Disable read after initialization.
(Value read on true = Group Object read request after initialization (e.g., power up). The
initialization) read-Flag on producer side is expected to be true, to get a response.

Transmission 6 false = Group Object value is not transmitted.
true = For CoV, event or heartbeat, the device sends its Group Object
value (default for outputs).

Update 7 false = Group Object value is not updated.
true = The Group Object value is updated with a group value response
message if flag w=true.

874

|Flag|Bit|Description|
|---|---|---|
|Reserved|0, 1|Default = false|
|Communication|2|not used in KNX IoT since the flag is just a logical disjunction (OR) of the<br>other configuration flags (default = false).|
|Read|3|false =_Group Object_ value cannot be read.<br>true = With a read command to a_Group Object_, the device sends this<br>_Group Object’s_ value.|
|Write|4|false =_Group Object_ value cannot be written.<br>true = The device receives and overwrites its_Group Object_ value (default<br>for inputs).|
|Init<br>(Value read on<br>initialization)|5|false = Disable read after initialization.<br>true =_Group Object_ read request after initialization (e.g., power up). The<br>read-Flag on producer side is expected to be true, to get a response.|
|Transmission|6|false =_Group Object_ value is not transmitted.<br>true = For CoV, event or heartbeat, the device sends its_Group Object_ <br>value (default for outputs).|
|Update|7|false =_Group Object_ value is not updated.<br>true = The_Group Object_ value is updated with a group value response<br>message if flag w=true.|


-----

875 **2.5.7.3** **Function Point Recipient Table Resource (fp/r)**

876 2.5.7.3.1 Definition

877 The Function Point Recipient Table contains the endpoint address where to send group events. This table

878 SHALL be writable and is configured by the MaC. The Function Point Recipient Table SHALL support

879 the following endpoint configurations:

880 - IPv6 unicast addresses of a receiving KNX IoT device that provides a CoAP endpoint.

881 - or a KNX Individual Address or FQDN that can be resolved to an IPv6 unicast address.

882 - or IPv6 multicast addresses to send a message to multiple KNX IoT Recipients.

883 Table 19 specifies the MANDATORY (‘M’) resources and the respective resource path names that

884 SHALL be used for the Function Point Table.

885 **Table 19 – Function Point Recipient Table resource path and Methods**

**Resource** **rt & Data** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types**

fp/r NA cbor POST M Req: Content- Write Function Point
Format: Recipient Table. Single
application/cbor elements are identified
Payload: (see by its “id”. Existing
example below) elements are replaced,

and not existing
elements are added.
An empty element (only
“id”) in the payload will
cause the deletion of a
corresponding existing
element.

fp/r NA cbor GET M Resp; Content- Recipient item linked list
Format:
application/linkformat
Payload:
</fp/r/1>;ct=50

fp/r/{recipie NA cbor GET M Req: Content- Read/delete single list
nt-id} DELETE Format: item

application/cbor
Payload: (see
example below)

886

887 2.5.7.3.2 Function Point Recipient Resource Object

888 A Function Point Recipient Resource Object represents either a Direct Unicast or a Multicast message

889 exchange which defines an IPv6 endpoint configuration. The IPv6 address and the path are used as the

890 destination endpoint address in the CoAP message.

891 A KNX IoT device MAY publish messages to topics. The topic name structure in the superordinate

892 system is often given such as "kitchen/sensors/". The destination address (URL including path) in the

893 Function Point Recipient Table SHALL be freely configurable. The MaC SHALL configure the topic

894 name in the Recipient Table (see examples in clause 2.3 “System Design”) only in cases where the

895 endpoint path deviates from the standard KNX path (./knx).

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|fp/r|NA|cbor|POST|M|Req: Content-<br>Format:<br>application/cbor<br>Payload: (see<br>example below)|Write Function Point<br>Recipient Table. Single<br>elements are identified<br>by its “id”. Existing<br>elements are replaced,<br>and not existing<br>elements are added.<br>An empty element (only<br>“id”) in the payload will<br>cause the deletion of a<br>corresponding existing<br>element.|
|fp/r|NA|cbor|GET|M|Resp; Content-<br>Format:<br>application/link-<br>format<br>Payload:<br></fp/r/1>;ct=50|Recipient item linked list|
|fp/r/{recipie<br>nt-id}|NA|cbor|GET<br>DELETE|M|Req: Content-<br>Format:<br>application/cbor<br>Payload: (see<br>example below)|Read/delete single list<br>item|


-----

896 The MaC can change some basic message transmission parameters with “non” and “mt” since some

897 applications MAY need adjusted settings. It is RECOMMENDED that KNX IoT devices use CoAP

898 default settings as defined in [RFC7252] clause 4.8. Manufacturers MAY support additional

899 configuration parameters conveyed as proprietary metadata parameters (see clause 2.5.11.3 “Metadata

900 Query Parameter “m”), however, this is out-of-scope of this document.

901 Table 20 defines the Function Point Recipient resource object CBOR keys for configuring and reading

902 Function Point Recipient table items.

903 **Table 20 - Function Point Recipient resource object CBOR keys**

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"id"|0|unsigned|**M **|ID of the Function Point Recipient<br>Table Entry. It has to be unique in<br>the table.|
|"ga"|7|unsigned array|**M **|A list of_Group Addresses_ which<br>shall be sent to the configured<br>Recipient.|
|"url"|10|text string|**M**a|The url identifying the Recipient<br>endpoint.|
|"ia"|12|unsigned|**M**a|KNX Individual Address of the<br>Recipient.|
|“grpid”|13|unsigned|**O**a|Group ID for the multicast group<br>identifier (see clause 2.6.5). If grpid<br>is omitted, then the ga SHALL be<br>used for the multigast group<br>identifier.|
|“fid”|25|unsigned|Ca|KNX Fabric ID of the Recipient.<br>Obsolete in case Recipient has the<br>same fabric ID (see also clause<br>2.6.2 “Device IP Address”).|
|“iid”|26|unsigned|Ca|KNX Installation ID of the Recipient.<br>Obsolete in case Recipient is within<br>the same installation (2.6.5<br>Multicast Group IP Addresses)|
|"non"|"non"|bool|**M**|true = Non-confirmable request . If<br>“non” is omitted, the device SHALL<br>assume confirmed request (false)<br>as default.|


-----

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“mt”|“mt”|unsigned|**M **|Number of max. retransmission for<br>confirmable and non-confirmable<br>requests. If “mt” is omitted, the<br>device SHALL assume no repetition<br>(0) for non-confirmable requests<br>and maximum 4 retransmissions for<br>confirmable request. However, the<br>device SHALL send not more than<br>5 retransmissions.|
|a The Recipient can be identified either by “ia”, “grpid” or by “url”.|a The Recipient can be identified either by “ia”, “grpid” or by “url”.|a The Recipient can be identified either by “ia”, “grpid” or by “url”.|a The Recipient can be identified either by “ia”, “grpid” or by “url”.|a The Recipient can be identified either by “ia”, “grpid” or by “url”.|


904

905 2.5.7.3.3 Publish Group Events

906 Table 21 describes the basic procedure for sending group event messages to Recipients and how the

907 Function Point Tables are used.

908 **Table 21 – Publish Group Event Messages**

**Step** **Procedure** **Description**

                            - Check if a Point value has changed AND time
1 Check Point value

since last update is > min repetition time

                             - OR time since last update > heartbeat
(see clause 2.5.11.2)

                            - KNX IoT device checks the group object
2 Check group object configuration flags

configuration flags (see clause 2.5.7.2.3) if the
respective Point value needs to be published.

3 Check Recipient table items      - The KNX IoT device searches group object table

items and Functional Point recipient table items
that have the same Group Address (ga) configured.

4 Send group message to Recipient      - The KNX IoT device sends a group message to the

network.

5 Update last sent time stamp      - If the message was sent to the network, then the

device SHALL update the last sent time stamp.
This step is only applicable if heartbeat or min.
repetition timeout are configurable.
909

910 Figure 10 shows a basic multicast Recipient configuration. Multicast group event notifications do not

911 need additional IPv6 address resolving steps or acknowledgments and potential repetitions are not needed

912 as well. Therefore, the send procedure of a multicast Recipient configuration is straight forward and

913 follows the steps in Table 21.

###### FunctionPoint Recipient Table
 PUBLISH

**Recipient** IPv6 Multicast Address [ga]

|Step|Procedure|Description|
|---|---|---|
|1|Check Point value|- Check if a Point value has changed AND time<br>since last update is > min repetition time<br>- OR time since last update > heartbeat<br>(see clause 2.5.11.2)|
|2|Check group object configuration flags|- KNX IoT device checks the group object<br>configuration flags (see clause 2.5.7.2.3) if the<br>respective Point value needs to be published.|
|3|Check Recipient table items|- The KNX IoT device searches group object table<br>items and Functional Point recipient table items<br>that have the same_Group Address_ (ga) configured.|
|4|Send group message to Recipient|- The KNX IoT device sends a group message to the<br>network.|
|5|Update last sent time stamp|- If the message was sent to the network, then the<br>device SHALL update the last sent time stamp.<br>This step is only applicable if heartbeat or min.<br>repetition timeout are configurable.|

|FunctionPoint Recipient Table|Col2|
|---|---|
|IPv6 Multicast Address|[ga]|


914


###### KNX IoT Device


915 **Figure 10 – Multicast Function Point Recipient Table Item**


-----

916 The following example configures the multicast Recipient item from Figure 10 with the default path

917 “.knx”.

918 The “grpid” and/or the “ga” attribute SHALL be used for multicast Recipient configuration and the “ia”

919 SHALL be used for unicast Publisher configuration. The installation ID is needed for the Recipient IPv6

920 multicast address since the Group Address is unique only within a project but can be omitted if the

921 Recipient belongs to the same installation.

922 The “url” attribute can be used for unicast as well as for multicast Publisher but SHALL NOT be used in

923 combination with “ia” or “grpid”.

924 If the resource object contains an “url” attribute, then the resource object SHALL NOT contain a “path”

925 attribute at the same time since the path is part of the URL.


**Function Point Recipient Table Configuration Example**


**REQ:**
POST coap://{ipv6-unicast}/fp/r (Content-Format: application/cbor (60), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
0: 2,
26: <recipient’s installation ID>,
13: <multicastGroupId>,
7: [2204, 2205, 2206]
},
{
0: 3,
10: “coap://<IP multicast>:<port>/<path>”,
7: [2305, 2306, 2307, 2308]
},
{
0: 4,
13: <multicastGroupId>,
7: [2404, 2405, 2406]
}
]


926

927 A MaC MAY configure a unicast communication between KNX IoT devices. The MaC can configure

928 unicast communication either with a fix IPv6 address, a KNX Individual Address or an FQDN. In case of

929 a KNX Individual Address or a FQDN configuration, the KNX IoT device has to resolve the KNX

930 _Individual Address or FQDN to an Ipv6 unicast address before the device can publish events._


931


**Recipient** IPv6 Unicast Address [ga]

/.knx

###### KNX Individual Address
 KNX IoT Device FQDN

|PUBLISH|FunctionPoint Recipient Table|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|PUBLISH|IPv6 Unicast Address|IPv6 Unicast Address|IPv6 Unicast Address|IPv6 Unicast Address|[ga]|
|PUBLISH|IPv6 Unicast Address||KNX Individual Address|||
|PUBLISH|IPv6 Unicast Address||FQDN|FQDN|FQDN|


932 **Figure 11 – Unicast Function Point Recipient Table Item**


-----

933 The next example shows a Recipient Table configuration that uses an FQDN and a KNX Individual

934 _Address as destination endpoint configuration. The KNX Fabric ID “fid” SHALL be omitted if the_

935 Recipient belongs to the same project.


**Function Point Recipient Table Configuration Example**


**REQ:**
POST coap://{ipv6-unicast}/fp/r (Content-Format: application/cbor (60), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
0: 5,
25: <recipient’s fabric ID>,
12: <recipient’s IA>,
7: [2505, 2506, 2507, 2508]
},
{
0: 6,
10: "coap://<unicast address or fqdn>:<port>/<path>",
7: [2605, 2606, 2607, 2608]
},
{
0: 7,
12: <recipient’s IA>,
7: [2705, 2706, 2707, 2708]
}
]


936

937 **2.5.7.4** **Function Point Publisher Table Resource (fp/p)**

938 2.5.7.4.1 Definition

939 The Function Point Publisher Table contains the endpoint address from where to receive group
940 notification events. This table SHALL be writable and is configured by the MaC. The Function Point
941 Publisher Table supports the following endpoint configurations:

942 - IPv6 unicast subscription address of a publishing KNX IoT device.

943 - or IPv6 multicast addresses to receive messages from multiple KNX IoT Publishers.

944 Table 22 specifies the MANDATORY (‘M’) resources and the respective resource path names that

945 SHALL be used for the Function Point Table.


-----

946 **Table 22 – Function Point Publisher table**

**Resource** **rt & Data** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types**

fp/p NA cbor POST **M** Req: Content- Writes the Function
Format: Point Publisher Table.
application/json Single Elements are
Payload: (see identified by its “id”.

Existing elements are

example below)

replaced and not
existing elements are
added.
An empty element (only
“id”) in the payload will
cause the deletion of a
corresponding existing
element.

fp/p NA cbor GET **M** Resp; Content- Publisher item linked list
Format:
application/linkformat
Payload:
</fp/p/1>;ct=50

fp/r/{publis NA cbor GET **M** Req: Content- Read/delete single list
her-id} DELETE Format: item

application/cbor
Payload: (see
example below)

947

948 2.5.7.4.2 Function Point Publisher Resource Object

949 A Function Point Publisher Resource Object represents either a multicast or a subscription message

950 exchange. The IPv6 address is used as a unicast IPv6 subscription endpoint or a receiving multicast IPv6

951 address configuration.

952 A KNX IoT device SHALL support multicast message exchange configurations and MAY support

953 subscription (unicast address) configurations in the Function Point Publisher Table. However, a KNX IoT

954 device SHALL support CoAP Observe on the resource “./knx” as defined in clause 2.6.10 “Point

955 Publish/Subscribe”. This allows clients, such as a Message Broker, to subscribe for event notifications on

956 all KNX IoT devices.

957 Table 23 defines the Function Point Publisher resource object CBOR keys for configuring and reading

958 Function Point Publisher table items.

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|fp/p|NA|cbor|POST|**M **|Req: Content-<br>Format:<br>application/json<br>Payload:  (see<br>example below)|Writes the Function<br>Point Publisher Table.<br>Single Elements are<br>identified by its “id”.<br>Existing elements are<br>replaced and not<br>existing elements are<br>added.<br>An empty element (only<br>“id”) in the payload will<br>cause the deletion of a<br>corresponding existing<br>element.|
|fp/p|NA|cbor|GET|**M**|Resp; Content-<br>Format:<br>application/link-<br>format<br>Payload:<br></fp/p/1>;ct=50|Publisher item linked list|
|fp/r/{publis<br>her-id}|NA|cbor|GET<br>DELETE|**M**|Req: Content-<br>Format:<br>application/cbor<br>Payload:  (see<br>example below)|Read/delete single list<br>item|


-----

959 **Table 23 – Function Point Publisher resource object**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

"id" 0 unsigned **M** ID of the Function Point Publisher
Table Entry. It has to be unique in
the table.

"ga" 7 unsigned array **M** A list of Group Addresses which
shall be received from the
configured Publisher.

"url" 10 text string C[a] The url identifying the Publishers
endpoint.

"ia" 12 unsigned C[a] The KNX Individual Address of the
Publisher for unicast
communication.

“grpid” 13 unsigned C[a] Group ID for the multicast group
identifier (see clause 2.6.5). If grpid
is omitted, then the ga SHALL be
used for the multigast group
identifier.

“fid” 25 unsigned C[a] KNX Fabric ID of the Publisher.
Obsolete in case Publisher has the
same KNX Fabric ID (see also
clause 2.6.2 “Device IP Address”).

“iid” 26 unsigned C[a] KNX Installation ID of the
Publisher. Obsolete in case
Publisher is within the same
installation (2.6.5 Multicast Group
IP Addresses)

a The Publisher can be identified either by “ia”, “grpid” or “url”.
960

961 Figure 12 shows a KNX IoT device configuration that is listening on a IPv6 multicast address. The

962 Publisher sends a multicast event notification to the network and, on the other side, a KNX IoT device

963 receives the event notifications and updates the configured Group Address or rather the associated Point

964 in the Group Object Table.

###### FunctionPoint Publisher Table

/.knx
###### PUBLISH

**Publisher** IPv6 Multicast Address [ga]

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"id"|0|unsigned|**M **|ID of the Function Point Publisher<br>Table Entry. It has to be unique in<br>the table.|
|"ga"|7|unsigned array|**M**|A list of_Group Addresses_ which<br>shall be received from the<br>configured Publisher.|
|"url"|10|text string|Ca|The url identifying the Publishers<br>endpoint.|
|"ia"|12|unsigned|Ca|The KNX Individual Address of the<br>Publisher for unicast<br>communication.|
|“grpid”|13|unsigned|Ca|Group ID for the multicast group<br>identifier (see clause 2.6.5). If grpid<br>is omitted, then the ga SHALL be<br>used for the multigast group<br>identifier.|
|“fid”|25|unsigned|Ca|KNX Fabric ID of the Publisher.<br>Obsolete in case Publisher has the<br>same KNX Fabric ID (see also<br>clause 2.6.2 “Device IP Address”).|
|“iid”|26|unsigned|Ca|KNX Installation ID of the<br>Publisher. Obsolete in case<br>Publisher is within the same<br>installation (2.6.5Multicast Group<br>IP Addresses)|
|a The Publisher can be identified either by “ia”, “grpid” or “url”.|a The Publisher can be identified either by “ia”, “grpid” or “url”.|a The Publisher can be identified either by “ia”, “grpid” or “url”.|a The Publisher can be identified either by “ia”, “grpid” or “url”.|a The Publisher can be identified either by “ia”, “grpid” or “url”.|

|FunctionPoint Publisher Table|Col2|
|---|---|
|IPv6 Multicast Address|[ga]|


965


###### KNX IoT Device


966 **Figure 12 – Multicast Function Point Publisher Table Item**

967 The MaC MAY configure on a KNX IoT device a subscription endpoint (Publisher) with a project

968 specific resource endpoint (path). The resource path on the Publisher in a superordinate system is often

969 given, for example, “kitchen/sensors/". Therefore, the KNX IoT device SHALL support project specific

970 subscription endpoints in the Function Point Publisher Table.

971


-----

###### KNX IoT Device


###### SUBSCRIBE


972

|FunctionPoint Publisher Table<br>/.knx<br>NOTIFICATION<br>her IPv6 Unicast Address [ga]<br>KNX Individual Address<br>evice<br>FQDN<br>SUBSCRIBE|FunctionPoint Publisher Table|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|FQDN<br>KNX Individual Address<br>NOTIFICATION<br>**FunctionPoint Publisher Table**<br>IPv6 Unicast Address<br>SUBSCRIBE<br>**her**<br>  evice<br>/.knx<br>[ga]|IPv6 Unicast Address|IPv6 Unicast Address|IPv6 Unicast Address|IPv6 Unicast Address|[ga]|
|FQDN<br>KNX Individual Address<br>NOTIFICATION<br>**FunctionPoint Publisher Table**<br>IPv6 Unicast Address<br>SUBSCRIBE<br>**her**<br>  evice<br>/.knx<br>[ga]|IPv6 Unicast Address||KNX Individual Address|||
|FQDN<br>KNX Individual Address<br>NOTIFICATION<br>**FunctionPoint Publisher Table**<br>IPv6 Unicast Address<br>SUBSCRIBE<br>**her**<br>  evice<br>/.knx<br>[ga]|IPv6 Unicast Address||FQDN|FQDN|FQDN|


973 **Figure 13 – Unicast Function Point Publisher Table Item**

974 A KNX IoT device MAY has to subscribe (see clause 5 “KNX IoT Classic Gateway”) or send group

975 events to a device that belongs to another KNX IoT project. The KNX Fabric ID “fid” is needed for

976 resolving the Publisher IPv6 unicast address since the KNX Individual Address is unique only within a

977 project (see clause 2.6.1.2 “Device Discovery with DNS-SD”). The KNX Fabric ID SHALL be omitted if

978 the Publisher belongs to the same fabric.

979 The “ia” attribute SHALL be used for unicast Publisher configuration and the “grpid” SHALL be used for

980 multicast Publisher configuration. The installation ID is needed for the Publisher IPv6 multicast address

981 since the Group Address is unique only within a project.

982 The “url” attribute can be used for unicast as well as for multicast Publisher but SHALL NOT be used in

983 combination with “ia” or “grpid”.

984 If the resource object contains an “url” attribute, then the resource object SHALL NOT contain a “path”

985 attribute at the same time since the path is already part of the URL.


**Function Point Publisher Table Configuration Example**


**REQ:**
POST coap://{ipv6-unicast}/fp/p (Content-Format: application/cbor (60), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
0: 7,
25: <publisher fabric ID>,
12: <publisher’s IA>,
7: [2305, 2306, 2307, 2308]
},
{
0: 8,
10: "coap://<IP multicast, unicast address or fqdn>:<port>/<path>",
7: [2309, 2310, 2311, 2312]
},
{
0: 9,
26: <publisher installation ID>,
13: <multicastGroupId>,
7: [2320, 2321, 2322, 2323]
}
]


986


-----

987 **2.5.8** **Device Load State Machine Command (a/lsm)**

988 **2.5.8.1** **Definition**

989 Table 24 defines configuration resources for KNX IoT that a device MANDATORY (‘M’) support.

990 **Table 24 – Device Load State Machine command**

**Resource path** **rt & Data** **Method** **Support** **Request/Response** **Notes**

**Types**

a/lsm NA POST **M** Req: Content-Format: Change Function Point
application/json Table state
Payload:
{ “cmd”: 1 } 1 = “startloading" [1)]
Res: Content-Format:
application/json
Payload:
{ “ status”: 2 } 2 = “loading”

Req: Content-Format: Change Function Point
application/json Table state
Payload:
{
“cmd”: 2 2 = "loadcomplete"
}
Res: Content-Format:
application/json
Payload:
{ “status”: 1 } 1 = “loaded”

Req: Content-Format: Change Function Point
application/json Table state and resets

the resources “fp/g”,
“fp/r”, “fp/p” and “p”.

Payload:
{ “cmd”: 4 } 4 = "unload"
Res: Content-Format:
application/json
Payload:
{ “status”: 0 } 0 = “unloaded”

a/lsm NA GET **M** Req: Content-Format: Function Point Table
application/json state
Payload:
{ “status”: 1 }

1 = “loaded”

991

1) Encoding of load commands and load states is reused from KNX Classic’s LSM, see [09].

|Resource path|rt & Data<br>Types|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|
|a/lsm|NA|POST|**M **|Req: Content-Format:<br>application/json<br>Payload:<br>{ “cmd”: 1 }<br>Res: Content-Format:<br>application/json<br>Payload:<br>{ “ status”: 2 }|Change Function Point<br>Table state<br>1 = “startloading"1) <br>2 = “loading”|
|a/lsm|NA|POST|**M **|Req: Content-Format:<br>application/json<br>Payload:<br>{ <br> “cmd”: 2<br>} <br>Res: Content-Format:<br>application/json<br>Payload:<br>{ “status”: 1 }|Change Function Point<br>Table state<br>2 = "loadcomplete"<br>1 = “loaded”|
|a/lsm|NA|POST|**M **|Req: Content-Format:<br>application/json<br>Payload:<br>{ “cmd”: 4 }<br>Res: Content-Format:<br>application/json<br>Payload:<br>{ “status”: 0 }|Change Function Point<br>Table state and resets<br>the resources “fp/g”,<br>“fp/r”, “fp/p” and “p”.<br>4 = "unload"<br>0 = “unloaded”|
|a/lsm|NA|GET|**M **|Req: Content-Format:<br>application/json<br>Payload:<br>{ “status”: 1 }|Function Point Table<br>state<br>1 = “loaded”|


-----

992 If the Load State Machine is not loaded (e.g. unloaded) the following resources SHALL NOT be

993 evaluated:

994 - Group Object Table (fp/g)

995 - Function Point Recipient Table (fp/r)

996 - Function Point Publisher Table (fp/p)

997 - Parameters (p)

998 That means runtime communication is not possible if the load state is not set to “loaded”.

999 The transitions between the states SHOULD be less than 30 seconds. If a KNX IoT device cannot

1000 immediately respond after a state transition, for example the device will restart first, the server SHALL

1001 return 2.04 CHANGED with the Max-Age option to indicate the number of seconds a MaC SHALL wait

1002 before sending the next request.

1003 The value of the Load State Machine SHALL be stored in non-volatile memory because it SHALL be

1004 preserved also on power fail. Table 25 and

1005 Table 26 describe the states and events of the Load State Machine.

1006 **Table 25 – Load States**

**Load State[ 2)]** **Support** **Notes**

unloaded (0) **M** No data is loaded. The associated resources have been
reseted to its default values.

loaded (1) **M** Valid data is loaded.
Only in this state the associated data SHALL be
considered as valid; in all other states the data SHALL
be considered as invalid

loading (2) **M** Load process is active

unloading (4) **O** Unload process is active.

loadcompleting (5) **O** Intermediate state between Loading and Loaded

1007

1008 **Table 26 – Load Events**

**Load Events[ 3)]** **Support** **Notes**

nop (0) **O** No operation

startloading (1) **M** Request to start the loading of the loadable part

loadcomplete (2) **M** Request to complete the Loading of the loadable part.
Possible checksum shall be calculated, all data shall be
declared as valid and the Load State shall change to
the state Loaded. If the transition from Loading to
Loaded takes more than 2 seconds, e.g. by complex
checksum calculation, the Load State shall first change
to intermediate state LoadCompleting and change to
Loaded after calculation is finished.

2) Encoding load states is reused from KNX Classic’s LSM, see [11].
3) Encoding load events is reused from KNX Classic’s LSM, see [11].

|Load State 2)|Support|Notes|
|---|---|---|
|unloaded (0)|**M **|No data is loaded. The associated resources have been<br>reseted to its default values.|
|loaded (1)|**M **|Valid data is loaded.<br>Only in this state the associated data SHALL be<br>considered as valid; in all other states the data SHALL<br>be considered as invalid|
|loading (2)|**M **|Load process is active|
|unloading (4)|**O **|Unload process is active.|
|loadcompleting (5)|**O **|Intermediate state between Loading and Loaded|

|Load Events 3)|Support|Notes|
|---|---|---|
|nop (0)|**O **|No operation|
|startloading (1)|**M **|Request to start the loading of the loadable part|
|loadcomplete (2)|**M **|Request to complete the Loading of the loadable part.<br>Possible checksum shall be calculated, all data shall be<br>declared as valid and the Load State shall change to<br>the state Loaded. If the transition from Loading to<br>Loaded takes more than 2 seconds, e.g. by complex<br>checksum calculation, the Load State shall first change<br>to intermediate state LoadCompleting and change to<br>Loaded after calculation is finished.|


-----

|Load Events 3)|Support|Notes|
|---|---|---|
|unload (4)|**M **|Request to unload the loadable part.|


1009

1010 The related resources SHALL be used immediately after the Load State Machine has reached the state

1011 “loaded”.

UnloadedUnloaded

startLoading

[Unloading completed]

unload

UnloadingUnloading LoadingLoading

startLoading loadCompelte

unload

Loaded LoadComple�ngLoadComple�ng

[LoadComple�ng

completed]

1012

1013 **Figure 14 – Load State Machine**

1014 **2.5.8.2** **Device Load State Machine Resource Object**

1015 Table 27 defines JSON keys and the CBOR mapping for CoAP request and response attributes of a/lsm

1016 resource object:

1017 **Table 27 - Device Load State Machine Resource Object**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

"cmd" 2 Text string M Service command.
Enum: load, unload, loadcomplete

"status" 3 Text string M Current status
Enum: loaded, loading, unloaded,
unloading, loadcompleting

1018

1019 **2.5.9** **S-Mode Messaging Resource (/.knx)**

1020 **2.5.9.1** **Definition**

1021 A KNX IoT device SHALL send and receive messages on configured multicast addresses (S-Mode

1022 messaging endpoint) as described in clause 2.6.9 “S-Mode Group Communication”.

1023 The KNX IoT device (server) SHALL provide a resource /.knx of resource type "rt=urn:knx:g.s" for

1024 unicast clients (device root path without /{base-path}).

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"cmd"|2|Text string|M|Service command.<br>Enum: load, unload, loadcomplete|
|"status"|3|Text string|M|Current status<br>Enum: loaded, loading, unloaded,<br>unloading, loadcompleting|


-----

1025 A Message Broker such as a KNX IoT Classic Gateway MAY want to subscribe for S-Mode group

1026 notifications. Therefore, the resource /.knx SHALL support CoAP observe incl. “lt” and “non” query

1027 parameter according to clause 2.6.10.1 “Subscriptions”.

1028 A KNX IoT device SHALL provide the following resources for Publisher and Recipient communication.

1029 **Table 28 – Resources for Publisher and Recipient communication**

**Resource** **rt & Data** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types**

.knx NA cbor POST M Req: Content- Publisher sends
Format: notification to KNX IoT
application/cbor device (Recipient)
Payload: (see
example in clause
2.6.9)

.knx NA cbor GET **M** Resp: Content- Publisher (KNX IoT
Format: device) updates
application/cbor subscribed Recipients.
Payload: (see
example in clause
2.6.9)

1030

1031 **2.5.9.2** **Group Notification Resource Object**

1032 To reduce the size in the message payload, the following CBOR keys SHALL be used for Group

1033 Messages. The following fields are MANDATORY for S-Mode notification events:

1034 - sia: The source KNX Individual Address SHALL be present either in the message payload or in the

1035 OSCORE header.

1036 - s: The S-Mode message object SHALL contain a service type and a value for write and response

1037 service type.

1038 **Table 29 – JSON keys for Group Object notification**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

"value" 1 see clause 2.5.13 **M** _Group Object value_
“Datatype Mapping”

"sia" 4 unsigned **(M)** Source ID (device KNX Individual
_Address)_

"s" 5 map **M** S-Mode Group Message

"st" 6 text string **M** Service type code (write=w, read=r,
response=rp)
Enum: w, r, rp

"ga" 7 unsigned **M** _Group Address_

1039

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|.knx|NA|cbor|POST|M|Req: Content-<br>Format:<br>application/cbor<br>Payload: (see<br>example in clause<br>2.6.9)|Publisher sends<br>notification to KNX IoT<br>device (Recipient)|
|.knx|NA|cbor|GET|**M**|Resp: Content-<br>Format:<br>application/cbor<br>Payload: (see<br>example in clause<br>2.6.9)|Publisher (KNX IoT<br>device) updates<br>subscribed Recipients.|

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"value"|1|see clause2.5.13 <br>“Datatype Mapping”|**M **|_Group Object_ value|
|"sia"|4|unsigned|**(M)**|Source ID (device_KNX Individual_<br>_Address_)|
|"s"|5|map|**M **|S-Mode Group Message|
|"st"|6|text string|**M **|Service type code (write=w, read=r,<br>response=rp)<br>Enum: w, r, rp|
|"ga"|7|unsigned|**M **|_Group Address_|


-----

1040 **2.5.10** **Functional Block Resource (f)**

1041 The function block resource “f” provides a list of functional blocks.

1042 The “f” resource MAY contain additional functional blocks beside the announced functional blocks in

1043 “/.well-known/core” (e.g. disabled functionality). However, the response SHALL contain at least the

1044 same functional block links (f/<fb-id-instance>) as in the “/.well-known/core” response.

1045 The resource type (“rt”) of a functional block SHALL contain the prefix “fb.” followed by the functional

1046 block type ID according to KNX standard Volume 7.

1047 The “urn:knx” prefix SHALL be omitted in the response to reduce payload.

1048 The functional block resources “f/{fb-id-instance}” SHALL support the application/link-format

1049 containing links to the functional block properties (p/{property-path}). This allows clients to discover

1050 Points with a subsequent request.

1051 **Table 30 – Functional Block resource**

**Resource** **rt & Data** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types**

f NA applicatio GET **M** Resp; Content- List contains all
n/link- Format: functional block of a
format application/link- device.

format
Payload:
</f/rts>;rt="fb.321";c
t=40

f/{fb-id- NA applicatio GET **M** Resp; Content- List contains all
instance} n/link- Format: properties of a

format application/link- functional block.

format
Payload:
</p/rts/temproom>;rt
="dpa:321.51";ct=5
0

1052

1053 **2.5.11** **Parameter and Diagnostic Property Resource (p)**

1054 **2.5.11.1** **General requirements**

1055 Parameter and diagnostic properties are used for sensor, actuator, parameter, and diagnostic values, such

1056 as getting the current sensor value or setting a setpoint. Parameter and diagnostic properties are addressed

1057 by URIs and can be directly accessed (read) and optionally manipulated (write). The following rules

1058 apply for CBOR as well as for JSON.

1059 The {point-path} is a concatenation of {base-path}, the MANDATORY “p/” and a manufacturer

1060 specific {property-id}. The following examples are valid resource paths for properties:

1061 - Functional block ID/instance and property ID (see KNX standard Volume 7): p/321/1/51

1062 - Functional block and property names (see KNX standard Volume 7): p/rts/temproom

1063 - Simple numbers: p/1

1064 [RFC8259] defines JSON as a serialized value. This means that a JSON value without brackets is also

1065 valid JSON (e.g., 25.5 or “TextString”). A GET response or, if supported, a CoAP observe notification

1066 [RFC8323] of simple Datapoint Types (see clause 2.5.13 “Datatype Mapping”) SHALL be conveyed as

1067 simple JSON value without brackets in order to reduce payload size. However, this specific rule SHALL

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|f|NA|applicatio<br>n/link-<br>format|GET|**M**|Resp; Content-<br>Format:<br>application/link-<br>format<br>Payload:<br></f/rts>;rt="fb.321";c<br>t=40|List contains all<br>functional block of a<br>device.|
|f/{fb-id-<br>instance}|NA|applicatio<br>n/link-<br>format|GET|**M**|Resp; Content-<br>Format:<br>application/link-<br>format<br>Payload:<br></p/rts/temproom>;rt<br>="dpa:321.51";ct=5<br>0|List contains all<br>properties of a<br>functional block.|


-----

1068 NOT apply to CBOR. CBOR has already a compact format and SHALL always be conveyed as a

1069 key/value pair.


**CBOR and JSON diagnostic property read example for a value of a simple Datapoint Type**


**REQ:**
POST coap://{ipv6-unicast}/{point-path} (OSCORE (code (GET), kid (<sia>), kid_context (<contextID>)))

**RES :**
2.05 CONTENT (Content-Format: application/cbor (60))
**Payload:**
{ 1: 100.0 }

**REQ:**
POST coap://{ipv6-unicast}/{point-path} (Accept: application/json (50), OSCORE (code (GET), kid
(<sia>), kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
100.0


1070

1071 The same rule applies if a client wants to change a parameter property, the JSON payload SHALL convey

1072 the value without brackets.


**CBOR and JSON parameter property write example for a value of a simple Datapoint Type**


**REQ:**
POST coap://{ipv6-unicast}/{point-path} (Content-Format: application/cbor (60), OSCORE (code (PUT),
kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ 1: 20.0 }

**REQ:**
POST coap://{ipv6-unicast}/{point-path} (Content-Format: application/json (50), OSCORE (code (PUT),
kid (<sia>), kid_context (<contextID>)))
**Payload:**
20.0


1073

1074 Complex Datapoint Types SHALL be conveyed without “value” key (only JSON) as a simple array

1075 according to clause 2.5.13 “Datatype Mapping” to reduce payload size.


**CBOR and JSON Diagnostic property read example for a value of a complex Datapoint Type**


**REQ:**
POST coap://{ipv6-unicast}/{point-path} (OSCORE (code (GET), kid (<sia>), kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/cbor (60))
**Payload:**
{ 1: [ 13.0, 18.0, 20.0, 21.0 ] }


-----

**REQ:**
POST coap://{ipv6-unicast}/{point-path} (Accept: application/json (50), OSCORE (code (GET), kid (<sia>),
kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**

[ 13.0, 18.0, 20.0, 21.0 ]


1076

1077 However, in some cases parameter or diagnostic property values are conveyed with additional data. In

1078 that case the JSON value SHALL be identified by the key “value”. For example, if the value has

1079 additional status information (see clause 2.5.11.5 “Status and Command Resource Object (Z8)”) or the

1080 value is conveyed with additional metadata (see clause 2.5.11.3 “Metadata Query Parameter “m”).

1081 Therefore, a JSON client SHOULD always implement both message types (only value and as key/value

1082 pair).

1083 Table 31 defines configuration resources for KNX IoT that a device MANDATORY (‘M’) support.

1084 **Table 31 – Parameter and diagnostic properties**

**Resource** **rt & Data** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types**

p NA cbor, json POST **M** Req : Content-Format : Writes a set of
application/json parameters to a KNX
Payload: IoT device.

[
{

"href ":"{point-path}",

"value":"abc "

},
{

"href":"{point-path}",

"value":42

},
…
]

1085

1086 **2.5.11.2** **Point Value Update Notification**

1087 Notifications to Subscriber devices SHALL be based upon the criteria contained in application

1088 configurations (e.g., lighting or HVAC) and are activated with the transmission configuration flag

1089 (transmit). A notification SHALL be sent when the heartbeat time has elapsed since the previous

1090 message, or the configured change of value (CoV) has exceeded of the same value. Heartbeat time,

1091 MinRepTime or change of value (CoV) are optional metadata members, see clause 2.5.11.3 “Metadata

1092 Query Parameter “m” for more details. However, a notification SHALL NOT be sent before minimum

1093 repetition time (MinRepTime) has elapsed.

1094 All Subscription notifications with a configured heartbeat time SHALL contain a Max-Age CoAP option

1095 containing the remaining time.

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|p|NA|cbor, json|POST|**M **|Req : Content-Format :<br>application/json<br>Payload:<br>[ <br>  {<br> "href ":"{point-path}", <br> "value":"abc " <br>  },<br>  {<br> "href":"{point-path}", <br> "value":42<br>  },<br>  …<br>]|Writes a set of<br>parameters to a KNX<br>IoT device.|


-----

1096 Hence, Group Objects and subscriptions supporting event notifications require the specification of the

1097 following metadata parameters:

1098 - CoV

1099 - MinRepTime

1100 - Heatbeat

1101 **2.5.11.3** **Metadata Query Parameter “m”**

1102 Metadata members are Point attributes that are used to annotate, tag, and describe Group Objects,

1103 parameter and diagnostic properties. Every Point has a set of metadata members. Metadata members are

1104 modeled as key/value pairs and addressable via the {point-path} as specified and shown underneath.

1105 To retrieve the value of {metadata-member} a KNX IoT device SHALL accept a GET request to the URI

1106 {point-path}?m={metadata-member},{metadata-member}. If at least one of the requested metadata

1107 {metadata-member} is supported then the device SHALL return a response with CoAP response code

1108 2.05 Content. The response payload SHALL contain the {metadata-member} as key, and the

1109 {metadata_value} of the specified metadata as value but missing or not supported metadata member

1110 fields (e.g., unit) SHALL be omitted in the response.

1111 If none of the requested metadata {metadata-member} is supported, the device SHALL return a response

1112 with CoAP response code 4.04 Not Found with empty payload.

1113 If the client requests a specific metadata field (e.g., unit) but the metadata member field is not supported

1114 on this datapoint then the device SHALL return a response with CoAP response code 5.01 Not

1115 Implemented.


**CBOR Metadata read example for selected metadata members**


**REQ:**

GET coap://{ipv6-unicast}/{point-path}?m=min,max

**RES:**
2.05 CONTENT (Content-Format: application/cbor (60))

**Payload:**

{ “min”: 0.0, “max”: 50.0 }


1116

1117 The meta query parameter is used with GET to retrieve a subset of metadata items for the selected

1118 resource. The parameter has the following form: m(={metadata-member}) for which {metadata-member}

1119 can be either a single metadata identifier, a comma separated list of metadata identifiers or wildcard (‘m’

1120 or ‘m=*’) to select all existing metadata.


**JSON Metadata read example for all metadata members**


**REQ:**
GET coap://{ipv6-unicast}/{point-path}?m (Accept: application/json (50))

**RES :**
2.05 CONTENT (Content-Format: application/json (50))

**Payload :**

{

“id“:“urn :knx :sn :<serialnumber>/p/rts/temproom“,

“rt“: [“dpa.321.51“],


-----

“dpt“:“valueTemp“,

“value”: 21.0,

“if”: [“if.o”, “if.g.s”, “if.d”],

“unit“: “DEG_C“,

“min“: 0.0,

“max“: 50.0,

“mrt”: 2,

“cov”: 0.5,

“hbt”: 900,

“sns”: true,

“g”: { “ga”: [1234]}

}


1121

1122 **2.5.11.4** **Metadata Resource Object**

1123 KNX IoT defines a common basic set of metadata that MAY be applied to any Point. Standardized KNX

1124 IoT metadata resource names (key) do not contain a namespace.

1125 All Point metadata resources SHALL support the CBOR format (see clause 2.2.4 “Content-Format”).

1126 Table 32 defines the metadata members for KNX IoT that the server MANDATORY (‘M’) or

1127 OPTIONAL (‘O’) support. (PUT) on metadata is OPTIONAL since these values are often preconfigured

1128 (e.g. with MaC).

1129 **Table 32 – KNX IoT common metadata**

|JSON Key|CBOR Key|CBOR Type|Method|Support|Notes|
|---|---|---|---|---|---|
|“id”|9|integer|GET|**M**|ID: An identifier for a data item that is<br>not dependent on the data item’s<br>location. It SHALL be permanent and<br>SHALL move with the data if the data<br>changes its location. The ID SHOULD<br>use the LRI format as defined in 2.6.1.4<br>“Linkage and Resolution” but without<br>network port (e.g.<br>knx://sn.12345678/p/rts/temproom,|
|“rt”|“rt”|text string|GET|**M**|Type: The specific type name of the<br>data item and is equivalent to a<br>resource type (rt). A Point with a<br>specific type can be discovered via<br>/.well-known/core?rt={type} (see<br>clause 2.6.1.3.6.4 “Resource Type<br>"rt"”).|


-----

|JSON Key|CBOR Key|CBOR Type|Method|Support|Notes|
|---|---|---|---|---|---|
|“if”|“if”|text string|GET|**M**|Interface: An interface provides a view<br>for organizing Points for discovery (see<br>clause 2.5.3 “Interface Types (if)”) and<br>for interactions, such as access rights.<br>Points can be discovered via /.well-<br>known/core?if={if}. Therefore, the<br>value SHALL contain a namespace<br>definition (e.g., urn:knx).|
|“desc”|“desc”|text string|GET<br>(PUT)|O|Description: A localizable description of<br>the data item.|
|“dpt”|“dpt”|text string|GET|**M**|KNX Datapoint Type|
|“unit”|“unit”|text string|GET|O|Unit: The engineering unit of the data<br>item. KNX units are defined by QUDT<br>(http://qudt.org/vocab). For example,<br>an air temperature unit (°C) is encoded<br>as follows: DEG_C.|
|“min”|“min”|float|GET<br>(PUT)|O|Min: The minimum value allowed for<br>the data item (Point).|
|“max”|“max”|float|GET<br>(PUT)|O|Max: The maximum value allowed for<br>the data item (Point).|
|“mrt”|“mrt”|integer|GET<br>(PUT)|O|MinRepTime: Minimum delay in<br>seconds until the next message is sent.|
|“cov”|“cov”|integer|GET<br>(PUT)|O|Change of Value: The Point sends a<br>notification message if the point’s<br>value change has exceeded this Change<br>of Value (CoV) threshold.|
|“hbt”|“hbt”|integer|GET<br>(PUT)|O|Heartbeat: A Point sends a periodic<br>value update to indicate normal<br>operation or to synchronize other<br>devices.|
|“sns”|“sns”|integer|GET<br>(PUT)|O|Sequence Number Synchronization:<br>Sequence number synchronization is<br>disabled if false or the metadata<br>member is not present. If configured<br>(true) then a read/write request to the<br>Point value triggers message counter<br>synchronization (see also clause 3.6.4<br>“Message Replay Protection”).|
|“g”|103 (“g”)|map|GET|(M)|Group object configuration|


-----

|JSON Key|CBOR Key|CBOR Type|Method|Support|Notes|
|---|---|---|---|---|---|
|“ga”|“ga”|Array<br>[unsigned]|GET|**(M)**|_Group Address_: Configured_Group_<br>_Addresses_ for S-Mode communication<br>(<group-address>). A Point with a<br>group-address can also be discovered<br>via /.well-<br>known/core?d=urn:knx:g.s.{group-<br>address}.|


1130

1131 Metadata members on a KNX IoT device MAY be writable (see requirements table below). To set the

1132 value of {metadata-member}, a KNX IoT device MAY accept a PUT request to the URI {point-path}

1133 containing the {metadata-member} and its new value in the payload. A single PUT request payload

1134 SHALL contain only one writable {metadata-member} key/value pair.


**CBOR Metadata write example**


**REQ:**

PUT coap://{ipv6-unicast}/{point-path}

**Payload:**

{ “min”: 0.0 }

**RES:**

2.04 CHANGED


1135

1136 **2.5.11.5** **Status and Command Resource Object (Z8)**

1137 In CoAP the Z8 status/command feature (see KNX Specifications Chapter 3/7/2) is an optional feature of

1138 a Point. If a value is out-of-service, overridden or in fault then this information is provided together with

1139 the value as additional information. As a consequence, all Z8 data types (e.g., V16Z8, U8Z8 etc.)

1140 SHOULD be mapped to simple data types without Z8.

1141 For Points supporting the Z8 feature, a KNX IoT device SHALL deliver Z8 additional status information

1142 accompanied with the value only if the status deviates from ‘normal’. A client SHALL handle values

1143 accompanied with additional Z8 status information, especially in the situation where the value is not

1144 present but only the Z8 status information, for example in case the value is out-of-service.

1145 The status/command extension Z8 has a dual representation, i.e., the representation is different depending

1146 on the role as status (response, info report paradigm) or command (write paradigm).


-----

1147 **Table 33 – Status and Command JSON/CBOR keys**

**JSON Key** **CBOR Key** **CBOR Type** **Description**

“cmd” 2 unsigned KNX Z8 command is represented by a 8bit
enumeration => CBOR unsigned. The following
commands MAY are supported on a Point:

                              - override: temporary override of a sensor or
actuator value.

                             - release: Undo “override”, leads to normal
operation of the Point using the
actual value.

                          - setOSV: Disable functionality of a Point such
as a configuration parameter is void
(function disabled) or a sensor is
disabled.

                           - resetOSV: Undo “setOSV”, leads to normal
operation of the Point using the
actual value.

“overridden” 111 (“o”) bool True = Value is currently overridden

“osv” “osv” bool True = No valid value available

“fault” 102 (“f”) text string Error incl. fault information

1148

1149 In case of presence of Z8 values, the payload is represented as map and the Z8 is embedded in the

1150 payload under the ‘status’ resp. ‘cmd’ key. JSON examples:

1151 Value status = normal: 100

1152 Value status = overridden: { “value”: 100, “overridden”: true }

1153 Value status = out-of-service: { “osv”: true }

1154 Value status = fault: { “fault”: “general fault” }

1155 Value command = override/release: { “value”: 50, “cmd”: “override” }

1156 Value command = setOSV/resetOSV: { “cmd”: “setOSV” }

|JSON Key|CBOR Key|CBOR Type|Description|
|---|---|---|---|
|“cmd”|2|unsigned|KNX Z8 command is represented by a 8bit<br>enumeration => CBOR unsigned. The following<br>commands MAY are supported on a Point:<br>- override:<br>temporary override of a sensor or<br>actuator value.<br>- release:<br>Undo “override”, leads to normal<br>operation of the Point using the<br>actual value.<br>- setOSV:<br>Disable functionality of a Point such<br>as a configuration parameter is void<br>(function disabled) or a sensor is<br>disabled.<br>- resetOSV:<br>Undo “setOSV”, leads to normal<br>operation of the Point using the<br>actual value.|
|“overridden”|111 (“o”)|bool|True = Value is currently overridden|
|“osv”|“osv”|bool|True = No valid value available|
|“fault”|102 (“f”)|text string|Error incl. fault information|


**Command Example**


**REQ:**
POST coap://{ipv6-unicast}/{point-path} (Content-Format: application/json (50), Accept:
application/json (50), OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ “value”: 50, “cmd”: “override” }

**RES:2.05 CONTENT (Content-Format: application/json (50))**
**Payload:**
{ “value”: 50, “overridden”: true }


1157


-----

1158 **2.5.12** **Subscription Resource (sub)**

1159 **2.5.12.1** **Definition**

1160 A KNX IoT device MAY support subscriptions on predefined Points as described in clause 2.6.10 “Point

1161 Publish/Subscribe”.

1162 Table 34 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) subscription resources (sub) and the

1163 respective resource path names that SHALL be used if the KNX IoT device supports subscriptions.

1164 **Table 34 – Mandatory and optional subscription resources**

**Resource** **rt & Data** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types (rt)**

/{point- NA json POST O Content-Format: Subscribe a resource
path}/sub cbor application/link-format value

Payload: {
"url":
"knx://123/.knx",
"non": true }

/{point- NA link- GET O Content-Format: List of Point
path}/sub format application/link-format subscriptions

Payload:
</sub/1>;ct=50

sub NA link- GET O Content-Format: List of all device
format application/link-format subscriptions

Payload:
</sub/1>;ct=50

sub NA NA DELETE **M** Res: 2.02 DELETED Delete all device
subscriptions
(WebHook and CoAP
Observe).

sub/{sub-id} NA json GET O Content-Format: The subscription item
cbor application/json SHALL contain a “url”

Payload: { "url": and MAY contain a
"knx://sn.12345678/kit “non”, “cid” and an
chen/sensors", "href": “at” reference.
"p/rts/temproom",
"cid": "1", "lt":1234,
"at”:9182, “non”: true }

sub/{sub-id} NA NA DELETE O Res: 2.02 DELETED Delete a subscription.

1165

|Resource<br>path|rt & Data<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|/{point-<br>path}/sub|NA|json<br>cbor|POST|O|Content-Format:<br>application/link-format<br>Payload: {<br>  "url":<br>"knx://123/.knx",<br>  "non": true }|Subscribe a resource<br>value|
|/{point-<br>path}/sub|NA|link-<br>format|GET|O|Content-Format:<br>application/link-format<br>Payload:<br></sub/1>;ct=50|List of Point<br>subscriptions|
|sub|NA|link-<br>format|GET|O|Content-Format:<br>application/link-format<br>Payload:<br></sub/1>;ct=50|List of all device<br>subscriptions|
|sub|NA|NA|DELETE|**M **|Res: 2.02 DELETED|Delete all device<br>subscriptions<br>(WebHook and CoAP<br>Observe).|
|sub/{sub-id}|NA|json<br>cbor|GET|O|Content-Format:<br>application/json<br>Payload: { "url":<br>"knx://sn.12345678/kit<br>chen/sensors", "href":<br>"p/rts/temproom",<br>"cid": "1", "lt":1234,<br>"at”:9182, “non”: true }|The subscription item<br>SHALL contain a “url”<br>and MAY contain a<br>“non”, “cid” and an<br>“at” reference.|
|sub/{sub-id}|NA|NA|DELETE|O|Res: 2.02 DELETED|Delete a subscription.|


-----

1166 **2.5.12.2** **Subscription Resource Object**

1167 All subscription resources SHALL support the CBOR format (see clause 2.2.4 “Content-Format”). In

1168 addition, the following dictionary SHALL be used for CBOR subscription and notifications.

1169 **Table 35 – Subscription JSON/CBOR keys**

**JSON** **CBOR** **CBOR Type** **Description**

**Key** **Key**

"value" 1 see clause 2.5.13 “Datatype Mapping” Notification value

"url" 10 text string Callback Url

"href" 11 text string Notification source datapoint path

“at” 27 unsigned Reference to an access token in the
access control list.

"cid" "cid" text string Correlation Identifier. The CBOR key
and the query parameter are kept the
same.

“non” "non" bool Non-confirmable notification request.
The CBOR key and the query parameter
are kept the same. Default: false
(confirmed).

"lt" "lt" unsigned Remaining subscription lifetime. The
CBOR key and the query parameter are
kept the same.
1170

1171 **2.5.13** **Datatype Mapping**

1172 **2.5.13.1** **Introduction and general requirements**

1173 The following tables illustrate the representation of KNX datatypes in CBOR and JSON.

1174 In some cases, variable-length encoding as possible with CBOR, will provide a shorter notation,

1175 e.g., unsigned numbers < 24 will be encoded in a single byte in CBOR, even if KNX Classic datatype

1176 representation is a 32 bit unsigned number.

1177 Three categories of datatypes are discerned:

1178 1. KNX simple datatypes: direct mapping to a simple CBOR/JSON datatype exists.

1179 2. KNX complex datatypes: two or more simple CBOR/JSON datatypes are needed - those will be

1180 aggregated in an array.

1181 3. KNX Z8 data types: has different representation depending on the service context used (status

1182 or command).

1183 NOTE 3 Datatype modelling is not limited to KNX datatypes known from KNX Classic. I.e., further data types or data object

1184 structures may be defined that are used by features that may be applicable only on KNX IoT. An example to do so may be

1185 modelling data for trend logs.

|JSON<br>Key|CBOR<br>Key|CBOR Type|Description|
|---|---|---|---|
|"value"|1|see clause 2.5.13 “Datatype Mapping”|Notification value|
|"url"|10|text string|Callback Url|
|"href"|11|text string|Notification source datapoint path|
|“at”|27|unsigned|Reference to an access token in the<br>access control list.|
|"cid"|"cid"|text string|Correlation Identifier. The CBOR key<br>and the query parameter are kept the<br>same.|
|“non”|"non"|bool|Non-confirmable notification request.<br>The CBOR key and the query parameter<br>are kept the same. Default: false<br>(confirmed).|
|"lt"|"lt"|unsigned|Remaining subscription lifetime. The<br>CBOR key and the query parameter are<br>kept the same.|


1186 **2.5.13.2** **Simple Datatypes**

1187 **Table 36 – Simple datatypes and CBOR representation**

|KNX<br>data<br>type|CBOR<br>Type|JSON<br>Type a|Notes|
|---|---|---|---|
|B1|bool|boolean||
|A8|text string|string|UTF-8 representation, ASCII is identical, ISO-8859-1 needs conversion to UTF8|


-----

|KNX<br>data<br>type|CBOR<br>Type|JSON<br>Type a|Notes|
|---|---|---|---|
|U8|unsigned|integer||
|V8|negative /<br>unsigned|integer||
|U16|unsigned|integer||
|V16|negative /<br>unsigned|integer|GET and PUT to parameter and diagnostic datapoints containing a temperature<br>value are mapped to CBOR float and JSON Number.|
|F16|float|number|F16 is incompatible with CBOR 16bit float, thus using 32 bit float.<br>IEEE754 encodes with 1 bit sign, 5 bit exponent with bias 15 [-14,15] and 10<br>bits significant - with 11 bit precision under the assumption of a leading 1 if the<br>exponent is not 0 (seehttps://en.wikipedia.org/wiki/Half-precision_floating-<br>point_format). KNX F16 encodes 12 bit of mantissa in 2 complement<br>representation with an 4 bit exponent [0-15] and a assumed precision of 0.01.<br>this leads to a range from [671088.64, 670670,96] The encoding is different<br>and leads to different ranges.|
|U32|unsigned|integer||
|V32|negative /<br>unsigned|integer||
|F32|float|number|CBOR has IEEE754 style floats - these match with the KNX 32bit float definition.|
|A112|text string|string|conversion to UTF-8 representation needed, ASCII is valid, ISO-8859-1 needs<br>conversion to UTF8<br>max length is 14 characters - no trailing 00 are encoded|
|N2, N3,<br>N5, N6,<br>N8|unsigned|integer|If the numeric value is less than 24, 1 byte is sufficient.|
|A[n]|text string|string|conversion to UTF-8 representation needed if not UTF8 already.<br>length is dynamic - no trailing 00 as EOL are encoded|
|V64|negative /<br>unsigned|integer||
|a <br>JSON can be basic types (integer, Boolean, …), objects or arrays. Objects "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines_integer_ as a<br>separate value type|a <br>JSON can be basic types (integer, Boolean, …), objects or arrays. Objects "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines_integer_ as a<br>separate value type|a <br>JSON can be basic types (integer, Boolean, …), objects or arrays. Objects "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines_integer_ as a<br>separate value type|a <br>JSON can be basic types (integer, Boolean, …), objects or arrays. Objects "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines_integer_ as a<br>separate value type|


1188

1189 **2.5.13.3** **Complex Datatypes**

1190 KNX complex datatypes are modeled as array of aggregated simple CBOR/JSON datatypes.

1191 KNX structured DPTs, are mapped to CBOR/JSON datatypes by the following rules:

1192 - represent singular fields of the KNX datatype (DPT) with their simple datatype (acc. 2.5.13.2

1193 “Simple Datatypes”) and concatenate them to CBOR/JSON arrays

1194 - use next larger, simple data types for length-optimized fields of KNX data types, to map them to

1195 CBOR/JSON simple data types (e.g., U3 → U8  unsigned/number)

1196 - reserved KNX data type / DPT fields SHALL be omitted - in most cases the modeling by the next
1197 larger data type allows for extension


-----

1198 Table 37 lists complex datatypes and the defined the CBOR representation.

1199 **Table 37 – Complex datatypes and CBOR representation**

|KNX data type|CBOR Type|JSON Type a|Notes|
|---|---|---|---|
|B2|[bool, bool]|[bool, bool]||
|B1U3|[bool, unsigned]|[bool, number]||
|B5N3|[[bool*], unsigned]|[[bool*], integer]|6.020 DPT_Status_Mode3|
|N3U5r2U6r2U6|[unsigned,<br>unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer, integer]|<br>10.001 DPT_TimeOfDay|
|r3U5r4U4r1U7|[unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer]|11.001 DPT_Date|
|U4U4U4U4U4U4B4N4|[unsigned,<br>unsigned,<br>unsigned,<br>unsigned,<br>unsigned,<br>unsigned,<br>[bool*4],<br>unsigned]|[integer, integer,<br>integer, integer,<br>integer, integer,<br>[bool*4], integer]|15.000 DPT_Access_Data|
|r2U6|unsigned|integer|17.001 DPT_SceneNumber|
|B1r1U6|[bool, unsigned]|[bool, integer]|<br>18.001 DPT_SceneControl|
|U8[r4U4][r3U5][U3U5]-<br>[r2U6][r2U6]B16|[unsigned*7,<br>[bool*9]]|[integer*7,<br>[bool*9] ]|<br>19.001 DPT_DateTime: the ending B16<br>of the DPT is encoded from left to right<br>and ends with 7 padding ‘zeros’, i.e.,<br>only the 9 leading bits provide relevant<br>information|
|B8|[bool*]|[bool*]||
|B16|[bool*]|[bool*]||
|U4U4|[unsigned,<br>unsigned]|[integer, integer]||
|r1b1U6|[bool, unsigned]|[bool, integer]||
|B32|[bool*]|[bool*]||
|B24|[bool*]|[bool*]||
|U16N8|[unsigned,<br>unsigned]|[integer, integer]||
|U8B8|[unsigned, [bool*]]|[integer, [bool*]]||
|V16B8|[negative /<br>unsigned, [bool*]]|[integer, [bool*]]||
|V16B16|[negative /<br>unsigned, [bool*]]|[integer, [bool*]]||
|U8N8|[unsigned,<br>unsigned]|[integer, integer]||


-----

|KNX data type|CBOR Type|JSON Type a|Notes|
|---|---|---|---|
|V16V16V16|[negative /<br>unsigned,<br>negative /<br>unsigned,<br>negative /<br>unsigned]|[integer*3]||
|V16V16V16V16|[negative /<br>unsigned,<br>negative /<br>unsigned,<br>negative /<br>unsigned,<br>negative /<br>unsigned]|[integer*4]||
|V16U8B8|[negative /<br>unsigned,<br>unsigned, [bool*]]|[integer, integer,<br>[bool*]]||
|V16U8B16|[negative /<br>unsigned,<br>unsigned, [bool*]]|[integer, integer,<br>[bool*]]||
|U16U8N8B8|[unsigned,<br>unsigned,<br>unsigned, [bool*]]|[integer, integer,<br>integer, [bool*]]||
|U5U5U6|[unsigned,<br>unsigned,<br>unsigned]|[integer*3]||
|U8N8N8N8B8B8|[unsigned,<br>unsigned,<br>unsigned,<br>unsigned, [bool*],<br>[bool*]]|[integer, integer,<br>integer, integer,<br>[bool*], [bool*]]||
|U16V16|[unsigned,<br>negative /<br>unsigned]|[integer, integer]||
|N16U32|[unsigned,<br>unsigned ]|[integer, integer]||
|F16F16F16|[float, float, float]|[number, number,<br>number]||
|V8N8N8|[negative /<br>unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer]||
|V16V16N8N8|[negative /<br>unsigned,<br>negative /<br>unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer, integer]||
|U16U8|[unsigned,<br>unsigned]|[integer, integer]||


-----

a JSON can be basic types, objects (maps) or arrays. Maps "{}" are unordered and need to be
populated with key:value pairs.
Note: RFC8259 specifies number as the only numeric value type. However, JSON schema defines
_integer as a separate value type_
1200

1201 **2.5.13.4** **KNX IoT Datatype Extensions**

1202 Table 38 lists datatypes that do not exist in KNX Classic and have been introduced for KNX IoT.

1203 **Table 38 – Datatype Extension CBOR representation**

**KNX** **CBOR** **JSON** **Name** **Notes**
**Data** **Type** **Type**
**Type**

O[16] byte string string DPT_ipv6 The IPv6 address data type octet string SHALL
correspond to the full 16 octets according to

[RFC4291] in network byte order.

Example:

IPv6 Address: 2001:db8:3::6cd9:8ad2:8e88:1f68 ->

Octet string:
0x20010db8000300006cd98ad28e881f68

1204

1205 **2.6** **Runtime Interworking**

1206 **2.6.1** **Discovery**

1207 **2.6.1.1** **Introduction**

1208 A KNX IoT device supports different discovery features that a client can use to learn about a KNX IoT

1209 device for example as a part of the device bootstrapping and configuration process (see clause 2.4). KNX

1210 IoT defines a DNS-based service discovery (DNS‑SD) for IP address resolution in combination with a

1211 semantic resource discovery (incl. semantic annotations) based on CoAP. The device discovery is used

1212 within KNX IoT for the following purposes:

1213 - Discover new device: MaC discovers new devices on the network. Prerequisite is that the devices

1214 have an IP address but have no security configuration or KNX Individual Address.

1215 - Discover commissioned device: A client discovers a commissioned KNX IoT device that has at least

1216 security and a KNX Individual Address configured.

1217 - Device initiated MaC notification: The device initiates the MaC to start the commissioning

1218 procedure (Programming Mode enabled).

1219 NOTE 4 This version of the KNX IoT Point API specification does not define the Device initiated commissioning.

|KNX data type|CBOR Type|JSON Type a|Notes|
|---|---|---|---|
|U16U32U8N8|[unsigned,<br>unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer, integer]||
|A8A8A8A8|text string|string||
|U8U8U8|[unsigned,<br>unsigned,<br>unsigned]|[integer, integer,<br>integer]||
|A8A8|text string|string||
|a <br>JSON can be basic types, objects (maps) or arrays. Maps "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines<br>_integer_ as a separate value type|a <br>JSON can be basic types, objects (maps) or arrays. Maps "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines<br>_integer_ as a separate value type|a <br>JSON can be basic types, objects (maps) or arrays. Maps "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines<br>_integer_ as a separate value type|a <br>JSON can be basic types, objects (maps) or arrays. Maps "{}" are unordered and need to be<br>populated with key:value pairs.<br>Note: RFC8259 specifies_number_ as the only numeric value type. However, JSON schema defines<br>_integer_ as a separate value type|

|KNX<br>Data<br>Type|CBOR<br>Type|JSON<br>Type|Name|Notes|
|---|---|---|---|---|
|O[16]|byte string|string|DPT_ipv6|The IPv6 address data type octet string SHALL<br>correspond to the full 16 octets according to<br>[RFC4291] in network byte order.<br>Example:<br>IPv6 Address: 2001:db8:3::6cd9:8ad2:8e88:1f68 -><br>Octet string:<br>0x20010db8000300006cd98ad28e881f68|


-----

1220 **2.6.1.2** **Device Discovery with DNS-SD**

1221 2.6.1.2.1 Motivation

1222 In constrained networks (e.g., Thread) multicast SHOULD be avoided since this can lead to uncontrolled

1223 responses or congestion issues in the constrained network. In addition, multicast messages need cache

1224 memory on routers with sleepy end nodes what may lead to loss of packets, for example, if the cache is

1225 full.

1226 Therefore, a KNX IoT device SHALL provide DNS Service Discovery (DNS-SD) [RFC6763] services to

1227 be discovered. For devices in constrained network (e.g., Thread), the device enables this functionality by

1228 a DNS-SD Discovery Proxy [RFC8766]. Hence, a KNX IoT client can assume that (sleepy and non
1229 sleepy) devices are always discoverable.

1230 A client MAY preform a short-lived query by using unicast DNS over UDP to the DNS‑SD Discovery

1231 Proxy. If supported by the DNS-SD Discovery Proxy, then clients MAY use DNS Push Notifications

1232 [RFC8765] with DNS Stateful Operations [RFC 8490] for long-lived queries in order to reduce expensive

1233 polling.

1234 A KNX IoT device SHOULD advertise its endpoint (service name) through multicast Domain Name

1235 System (mDNS) [RFC6762]. Constrained KNX IoT devices, for example in a Thread network, MAY

1236 support the DNS-SD Service Registration Protocol (SRP) [https://tools.ietf.org/html/draft-ietf-dnssd-srp]

1237 and implement an SRP-client. The SRP-client registers the KNX IoT service name at the DNS-SD

1238 discovery proxy. A device discovers or becomes discoverable via DNS-SD discovery proxy in the local

1239 multicast scope and beyond without use of multicast in the constrained network. Figure 15 below

1240 illustrates such behavior for use cases (A) and (B).

1241 The MaC MAY use mDNS in networks not providing any additional DNS services or for initial discovery

1242 of better performing DNS services (Figure 15, use case (A)). A MaC in larger networks with e.g., a

1243 discovery proxy SHOULD use DNS Push Notifications [RFC8765] with DNS Stateful Operations

1244 [RFC8490] for improved user experience (Figure 15, use case (B)). Also constrained KNX IoT devices

1245 having a need to discover devices MAY implement DNS Push for interaction with the DNS Discovery

1246 Proxy (Figure 15, use case (C)).


**Discovery of Service**
**on Device in Constrained Sub-Network (B)**


**Discovery of Service**
**on Device in Backbone Network**

|Backbone IP Network<br>M Cla in ena tg e (Mm ae Cn )t (Ethernet, Wi-Fi)<br>Multicast<br>DNS query<br>Multicast<br>DNS query<br>Multicast<br>DNS Response|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br> <br>**Management**<br>** Client (MaC)**<br>Multicast<br>DNS query<br>Multicast<br> DNS query<br>Multicast<br>DNS Response|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br> <br>**Management**<br>** Client (MaC)**<br>Multicast<br>DNS query<br>Multicast<br> DNS query<br>Multicast<br>DNS Response|Multicast<br>DNS Response|||
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br> <br>**Management**<br>** Client (MaC)**<br>Multicast<br>DNS query<br>Multicast<br> DNS query<br>Multicast<br>DNS Response|||||
||Service Registry|Service Registry|Service Registry||
|**Constrained IP Sub-Network**<br>**(eg. Thread)**<br>Service<br> <br>DNS Advertising Proxy<br>Unicast<br>SRP Registration|<br>DNS Advertising Proxy|<br>DNS Advertising Proxy|<br>DNS Advertising Proxy|<br>DNS Advertising Proxy|

|Backbone IP Network<br>M Cla in ena tg e (Mm ae Cn )t (Ethernet, Wi-Fi)<br>DNS notification DNS push<br>registration notification<br>Service Registry|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Service Registry<br>**Management**<br>** Client (MaC)**<br>DNS notification<br>registration<br>DNS push<br>notification|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Service Registry<br>**Management**<br>** Client (MaC)**<br>DNS notification<br>registration<br>DNS push<br>notification|DNS notification<br>registration|||
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Service Registry<br>**Management**<br>** Client (MaC)**<br>DNS notification<br>registration<br>DNS push<br>notification|Service Registry|Service Registry|Service Registry|Service Registry|
||<br>|<br>|<br>||
|**Constrained IP Sub-Network**<br>**(eg. Thread)**<br>Service<br>DNS Discovery Proxy<br> DNS Push notification<br>Unicast<br>SRP Registration<br>Unicast<br>Query and<br>Response|DNS Discovery Proxy<br> DNS Push notification|DNS Discovery Proxy<br> DNS Push notification|DNS Discovery Proxy<br> DNS Push notification|DNS Discovery Proxy<br> DNS Push notification|

|Backbone IP Network<br>Service M Cla in ena tg e (Mm ae Cn )t (Ethernet, Wi-Fi)<br>Multicast<br>DNS query<br>Multicast<br>DNS Response|Col2|Col3|
|---|---|---|
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Service<br> <br>**Management**<br>** Client (MaC)**<br>Multicast<br>DNS Response<br>Multicast<br>DNS query|||
||Service Registry||
|**Constrained IP Sub-Network**<br>**(eg. Thread)**<br>DNS Discovery Proxy<br>Unicast<br>Query and<br>Response|DNS Discovery Proxy|DNS Discovery Proxy|


1247


**Discovery of Service**
**on Device in Constrained Sub-Network (A)**

**Management** **Backbone IP Network**
**Client (MaC)**

Multicast
DNS query

Multicast
DNS query

Multicast
DNS Response

Service Registry
DNS Advertising Proxy **Constrained IP Sub-Network**

Unicast
SRP Registration

Service

has discovered Service


1248 (A) through Service Registry Protocol (SRP) and DNS Advertising Proxy (ADVPROXY) for legacy mDNS

1249 support

1250 (B) Service Registry Protocol, DNS Discovery Proxy and DNS Push.

1251 (C) Examples of Constrained KNX IoT devices discovering a service in the backbone IP network.

1252 **Figure 15 - Bidirectional DNS Service Discovery for KNX IoT device discovery**


-----

1253 As described in [RFC6762] mDNS SHOULD use communication on UDP port 5353 with the multicast

1254 IP address 224.0.0.251 for IPv4 and FF02::FB for IPv6.

1255 For standardizing the DNS-based discovery a KNX IoT device SHALL adhere to the following rules:

1256 1. The KNX IoT device or a DNS-SD proxy (e.g., Thread Border Router) SHOULD implement a

1257 mDNS client providing its own IP address in a resource record of type A for IPv4 [RFC1035] and

1258 SHALL provide the IP address in a resource record type AAAA for IPv6 [RFC3596].

1259 2. The KNX IoT device or the DNS-SD proxy SHALL support direct communication over at least

1260 one port. The name and port are propagated using the mDNS-SD protocol as defined in

1261 [RFC6763].

1262 3. The DNS-SD service type [RFC6335] is “._knx._udp”. The communication port can be selected

1263 without limitations. The TXT record of the mDNS-SD query SHOULD be empty to minimize the

1264 message size. The service domain is “.local” for mDNS (default), or as configured by the DNS

1265 Discovery Proxy for unicast DNS from corresponding subnets [RFC8766, clause 5.1]. The target

1266 host name, required in addition to the instance name (see clause 2.6.1.2.2 “DNS-SD Services”),

1267 is the KNX Serial Number encoded as fixed length UTF-8 text in capital letters,

1268 e.g., “01CAFFE1234.knx.local”. In case the device performs address randomization for privacy

1269 protection, the target host name updates accordingly.

1270 4. Communication between different subnets is considered to be part of the infrastructure

1271 installation for IP communication. mDNS can offer proxy information which offer access to other

1272 subnets IF the corresponding routes have been added AND the DHCP server has offered the

1273 corresponding gateway.

1274 NOTE 5 [RFC6335: “The service name “._knx._udp” will be registered with IANA”: http://www.iana.org/assignments/port-numbers](http://www.iana.org/assignments/port-numbers)

1275 2.6.1.2.2 DNS-SD Services

1276 The following standard DNS resource records are used for the representation of a KNX IoT device in

1277 DNS-SD. KNX IoT uses standard DNS-SD Service Discovery according to [RFC6763], and no

1278 modifications are required. Irrelevant parts of the respective DNS resource records are omitted here for

1279 clarity.

1280 The “Service” indicates the KNX IoT device DNS-SD service type or subtype. The “Domain” (e.g., local)

1281 is the DNS domain in which the service type is present. The “Domain” is typically used to limit the

1282 resource records returned in a DNS query. The domain is independent of the domain name of the host of

1283 the DNS-SD service instance. The domains to scan for KNX devices MAY be discovered through reading

1284 DNS-SD defined resource records. The hostname identifies the service and is a readable name and MAY

1285 be determined locally but SHALL be unique among all instances of this service as defined in clause

1286 2.6.1.2.3. For allowed characters, see [RFC6763], clause 4.1.1.

1287 A KNX IoT device SHALL advertise DNS AAAA records, since KNX IoT uses IPv6 communication. A

1288 KNX IoT device SHALL publish all AAAA records for all IPv6 addresses that are accepted for

1289 commissioning or runtime communication.

1290 PTR Resource Records as defined in [RFC1035] are used for enumerating the KNX IoT device DNS-SD

1291 service instances. A KNX IoT device SHALL advertise the following service subtypes with the KNX

1292 _Serial Number as service name (ASCII hexadecimal string in capital letters) for the corresponding service_

1293 instance:

1294 - _{serialnumber}: Contains the KNX Serial Number as ASCII hexadecimal string in capital letters.

1295 The KNX IoT device SHALL advertise this subtype if the KNX Individual Address has not been

1296 configured.

1297 - _ia{installationid}-{ia}: MaC configured KNX Individual Address concatenated with the KNX

1298 Installation ID (see clause 2.6.1.2.3).


-----

1299 EXAMPLE 01 The example below shows a commissioned KNX IoT device:

1300 01CAFFE1234._knx._udp.local. PTR 01CAFFE1234._knx._udp.local.

1301 _ia3333-CA._sub._knx._udp.local PTR 01CAFFE1234._knx._udp.local.

1302 01CAFFE1234._knx._udp.local. SRV 0 0 5683 {hostname}.local.

1303 {hostname}.local. AAAA fe80::f244:126f:6772:4a60

1304 2.6.1.2.3 Commissioning and Operational Discovery

1305 The naming convention for the DNS-SD {hostname} of a KNX IoT device in default configuration state

1306 SHALL be in the format {serialnumber.knx}.local. The KNX Serial Number SHALL be a valid DNS

1307 name as a ASCII hexadecimal string in capital letters, e.g., “01CAFFE1234.knx.local”. In case the

1308 hostname is not unique then DNS-SD will detect a name conflict. The device then has to generate an

1309 alternative instance name according to [RFC6762] and the Service Registration Protocol [SRP]. It is

1310 RECOMENDED to increment a number separated by a dash at the end of the hostname (e.g.

1311 01CAFFE1234-1.knx.local) in case of a name conflict. This name convention allows the discovery of a

1312 new device without additional configuration of standard DNS servers. The hostname MAY change later

1313 in a local deployment.

1314 A KNX IoT device in Programming Mode (see clause 2.5.3.9) which is waiting for commissioning

1315 SHALL advertise “0” and “_ia” as subtype of the service type to allow for filtered responses

1316 (_ia0._sub._knx._udp.local). A manufacturer specific string MAY be provided as an additional subtype.

1317 The following example shows a command-line example to create an mDNS advertisement using avahi
1318 utils Linux package and subsequent discovery and IP address resolving.


**Discovery example KNX Individual Address (device in Programming Mode).**


avahi-publish --host=01CAFFE1234.knx.local -s --subtype=_01CAFFE1234._sub._knx._udp -subtype=_ia0._sub._knx._udp 01CAFFE1234 _knx._udp 5683

avahi-browse -rt _ia0._sub._knx._udp
= IPv6 01CAFFE1234
hostname = [01CAFFE1234.knx.local]
address = [fd11:2222:3333:0001:6cd9:8ad2:8e88:1f68]
port = [5683]


1319

1320 For operational discovery, after the MaC has configured a KNX Individual Address and operational

1321 credentials (LDevID or OSCORE) etc., the DNS-SD service type of the operational KNX IoT device

1322 SHALL comprise the KNX Installation ID and the configured KNX Individual Address separated by a

1323 hyphen (“-”), encoded as ASCII hexadecimal string of 12 respectively 16 characters, e.g., _ia3333
1324 CA.knx.local, the target host name remains unchanged. Leading “0” in the KNX Installation ID SHALL

1325 be omitted (e.g. 0x0000003333 = _ia3333-CA.knx.local).

1326 During normal operation, a KNX IoT device SHOULD advertise either the KNX Serial Number or the

1327 _KNX Individual Address service type except in Programming Mode._

1328 The next command-line example shows a DNS-SD advertisement using avahi-utils Linux package and

1329 subsequent discovery and IP address resolving.


-----

**Discovery example with KNX Serial Number.**


avahi-publish --host=01CAFFE1234.knx.local -s --subtype=_01CAFFE1234._sub._knx._udp 01CAFFE1234
_knx._udp 5683

avahi-browse -r _01CAFFE1234._sub._knx._udp

= IPv6 01CAFFE1234._sub._knx._udp
hostname = [01CAFFE1234.knx.local]
address = [fd11:2222:3333:0001:6cd9:8ad2:8e88:1f68]
port = [5683]


1330

1331 **2.6.1.3** **Resource Discovery with CoAP**

1332 2.6.1.3.1 Introduction

1333 Multicast resource discovery in CoAP (CoRE) is accomplished through use of a “/.well-known/core”

1334 resource URI that returns a list of links about resources hosted by that server that matches filter attributes.

1335 Multicast Resource Discovery is useful if a client needs to locate a resource within a limited scope, and

1336 that scope supports IP multicast. To limit the number and size of responses, a query string is

1337 recommended with the known attributes (e.g., rt). Typically, a resource would be discovered based on its

1338 Resource Type (rt) along with possible application-specific attributes.

1339 The Resource Type 'rt' attribute is an opaque string used to assign an application-specific semantic type to

1340 a resource. In the case of a room temperature sensor (rts) resource, this could be, e.g., an application
1341 specific semantic type like URI referencing a specific concept in the “KNX Information Model” [03],

1342 such as, "urn:knx:dpa.352.51" (KNX Point annotation) or "urn:knx:fb.321" (KNX functional block).

1343 Multiple Resource Types may be included in the value of this parameter, each separated by a space. The

1344 maximum length of this parameter is 63 octets.

1345 This clause explains the basic mechanisms, query formats and other requirements that are common over

1346 all the discovery operations. More details per discovery type are given in later clauses. Note that all

1347 discovery types re-use the same generic mechanism of Link Format querying for attribute values, which

1348 simplifies a constrained implementation.

1349 2.6.1.3.2 Basic Query Format

1350 A KNX IoT device SHALL support the query filtering even if this is designated as optional in [RFC7252]

1351 and [RFC6690]. The hostname is typically an IPv6 [RFC2460] literal between square brackets, either

1352 unicast address or multicast address. For example: [ff03::fd]. The below CoAP request format is used to

1353 do a one-attribute query in general:

1354 GET coap://hostname/.well-known/core?attribute=value

1355 2.6.1.3.3 Multiple Query-Attributes Format

1356 Attributes MAY appear in any order; this order has no specific significance. Allowing multiple attributes

1357 extends [RFC6690] which only allows to query one attribute. All the query attributes are logically AND
1358 ed to provide the query result. Multiple query attributes MAY be applied for unicast and multicast

1359 queries. The number of attributes for query is not limited. A KNX IoT device MAY impose limits on the

1360 number of query attributes to reduce complexity.

1361 GET coap://hostname/.well-known/core?attribute=value&attr2=val2

1362 2.6.1.3.4 Wildcard Usage and Hierarchy

1363 Also note that per [RFC6690] the '*'-character can be used as wildcard in any query attribute value.

1364 _partialValue is a partial value prefix string. This is used to search on multiple values that start with string_

1365 _partialValue and end with the wildcard character '*'._


-----

1366 GET coap://hostname/.well-known/core?attribute=partialValue*

1367 2.6.1.3.5 Basic Response Format

1368 A successful response to a query SHALL consist of a unicast 2.05 response with CoRE Link Format

1369 [RFC6690] payload containing the query result. The CoAP Token in the response SHALL be the same as

1370 the request Token. The exact attributes returned MAY depend on the query parameters used. If not
1371 explicitly specified, supporting of concatenated query parameters is OPTIONAL. The {/path} returned

1372 depends on the query type, i.e., if and what query parameters were given with the query request. The

1373 {/path} returned is given by the device, i.e., it is device- and manufacturer specific. Note that secured,

1374 OSCORE or coaps:// scheme links MAY be returned although not shown in following example.


**Discovery Response**


2.05 Content (Content-Format: application/link-format (40))
</path>; attr=value, attr2=value2,
<other link 1>,
<other link 2>


1375

1376 2.6.1.3.6 Query-Attributes

1377 2.6.1.3.6.1 Endpoint Name "ep"

1378 Endpoint Name provides an identifier of a CoAP endpoint that is unique within a defined domain. A

1379 domain might be a single site of installation, or the entire world (global). The value of the Endpoint Name

1380 attribute SHALL be a unique device identifier (e.g., KNX Serial Number). The response SHALL contain

1381 the requested ep ID and the base path (e.g., {} or {api}) for KNX IoT resources (e.g., “dev” or “swu”). A

1382 KNX IoT device SHALL ignore a multicast query request for “ep” if the queried Endpoint Name does not

1383 match its own or if the query request contains more than one “ep” attribute. A KNX IoT device SHALL

1384 accept and respond to a discovery request if its built-in KNX Serial Number matches the KNX Serial

1385 _Number received with the discovery request._


**CoAP client discovers a device with a particular device identifier (e.g., KNX Serial Number from QR**
**code scan) in a network**


**REQ:**
GET coap://{ipv6-multicast}/.well-known/core?ep=urn:knx:sn.{serial-number}

**RES :**
2.05 CONTENT (Content-Format : application/link-format (40))
**Payload:**
<>; ep="urn:knx:sn.<serial-number>"


1386

1387 With the above shown discovery request, a MaC will get the KNX IoT device’s IP (unicast) address that

1388 is not part of the CoAP response payload but contained in the IP response frame. Using the returned IP

1389 Address, the MaC then may do further (unicast) discovery or other unicast actions (e.g., device

1390 configuration)

1391 2.6.1.3.6.2 Programming Mode “if.pm”

1392 If the Programming Mode is active (see clause 2.5.3.9), a KNX IoT device SHALL accept and respond to

1393 the discovery request, to /.well-know/core and with query attribute if=urn:knx:if.pm, with its serial

1394 number in the response’s ep attribute (ep=”urn:knx:sn.serialnumber”).


-----

1395 If the Programming Mode is used to identify the device, then the MaC sends a multicast request to the

1396 device which returns the KNX Serial Number with its device IP address. Using the returned IP Address,

1397 the MaC can set, for example, the KNX Individual Address of the device in a subsequent step.

1398 Sleepy KNX IoT devices in “Programming Mode” SHALL have wake-up intervals less than 5 seconds in

1399 order to have a reasonable reaction time on the MaC.


**Discover devices which are in Programming Mode**


**REQ:**
GET coap://[FF03::FD]/.well-known/core?if=urn:knx:if.pm

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
<>;ep="urn:knx:sn.12345678";ct=40


1400

1401 2.6.1.3.6.3 Interface Description “if”

1402 An interface description describes a generic CoAP resources to interact with a Point or a set of Points.

1403 The interface provides a view on organized Points. The interface description ‘if’ attribute is an opaque

1404 string indicating a specific interface definition as defined in clause 2.5.3 “Interface Types (if)”. The “if”

1405 column defines the interface description (if=) attribute value to be used in the CoRE Link Format for a

1406 resource conforming to that interface.

1407 The “urn:knx” prefix SHALL be omitted in the response in order to reduce payload since the request filter

1408 has already been applied to “urn:knx”.


**CoAP client discovers all (wildcard) output points on a specific device**


**REQ:**
GET coap://{ipv6-unicast}/.well-known/core?if=urn:knx:if.o

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
</path2example>;rt="dpa.352.55";if="if.o";ct=50


1409

1410 The "if" attribute MAY be used in conjunction with a query attribute to read a value from a device in a

1411 specify device state such as the "Programming Mode" (see clause 2.6.1.3.6.2).

1412 A MaC MAY use multicast or unicast requests to test the destination device with a specific serial number

1413 if the KNX IoT device is currently in "Programming Mode".

1414 A KNX IoT device SHALL support the concatenation of “ep=urn:knx:sn.{serial-number}” and

1415 “if=urn:knx:if.pm” query parameters. The response SHALL contain the serial number if all query

1416 parameters match.


-----

**CoAP client discovers (multicast) a device in Programming Mode (pm)**


**REQ:**
GET coap://[FF03::FD]/.well-known/core?ep=urn:knx:sn.*&if=urn:knx:if.pm

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
<>; ep="urn:knx:sn.12345678"


1417

1418 The above example shows the combination of query attributes ep=urn:knx:sn.*&if=urn:knx:if.pm in a

1419 multicast discovery request. The attribute if=urn:knx:if.pm here limits the number of responses to only

1420 those resources (devices) that have their Programming Mode enabled. Using query attribute

1421 ep=urn:knx:sn.* only, i.e., wildcard on the serial number sn, would else result in responses from all

1422 devices.

1423 NOTE 6 Multiple devices could respond with their ep in the payload, i.e., if more than one device is present with their

1424 _Programming Mode enabled._

1425 2.6.1.3.6.4 Resource Type "rt"

1426 A discovery client MAY make use of the resource type, represented by the ‘rt’ attribute (see [RFC6690]

1427 clause 3.1) for selected CoAP resources. Every resource that is discoverable SHALL have an ‘rt’ attribute

1428 associated. The resource type value for a resource SHALL contain "urn:knx:" and is to be interpreted as

1429 an identifier for the type of the resource.

1430 The "rt" attribute value is used to filter a discovery request based on a functional block type ID

1431 (e.g., urn:knx:fb.321), or a Datapoint Annotation (e.g., urn:knx:dpa.321.51). The “rt” member MAY

1432 contain a list of different types representing a semantic information. The syntax of the value of this

1433 attribute is: rt={type}.

1434 A Datapoint Annotation is a combination of Object Type (Functional block ID) and Property Identifier as

1435 described in detail in KNX Application Descriptions (volume 7). A datapoint MAY have one or many

1436 Datapoint Annotations, for example, an “if.i” (input interface) can have bindings to several “if.o”

1437 properties (output interface). Hence, the Datapoint Annotation is either the datapoint Object Type and

1438 Property ID (DP Address) or possible datapoint bindings (e.g., LTE InfoReport input). Datapoint

1439 Annotations for “if.i” and “if.o” are described in volume 7 in the “LTE-Mode” datapoint description (see

1440 Communication – DP Address).

1441 In the following example a client device wants to discover points with a specific Datapoint Annotation on

1442 a server device. If the server device hosts such points, then the server device SHALL reply a list

1443 containing all resources including access path, resource type and content type. In addition, the response

1444 SHALL at least contain datapoints with the interface type “if.o” or “if.i” and "if.p” in case of an

1445 unassigned (peripheral) Group Address configuration datapoint.

1446 The “urn:knx” prefix SHALL be omitted in the response in order to reduce payload since the request filter

1447 has already been applied to “urn:knx”.


-----

**CoAP client discovers all (wildcard) Heat Valve Actuator (functional block 352) points on a specific**
**device**


**REQ:**
GET coap://{ipv6-unicast}/.well-known/core?rt=urn:knx:dpa.352*

**RES :**
2.05 CONTENT (Content-Format : application/link-format (40))
**Payload :**
</path1example> ;rt="dpa.352.51";if="if.i";ct=50 60,
</path2example> ;rt="dpa.352.55"; if="if.o";ct=50 60


1448

1449 2.6.1.3.6.5 Sector “d”

1450 In the context of a Resource Directory [RD], a sector is a logical grouping of resources. The abbreviation

1451 “d” is used for the sector in query parameters for compatibility with deployed implementations. The

1452 sector identifier “d” is used for discovery of resources reachable through a KNX Group Address.

1453 Therefore, the value of “d” represents a KNX Group Address. The syntax for a KNX Group Address is

1454 d=urn:knx:g.{group-type}.{group-address}. This specification defines ‘s’ as {group-type} for S-Mode

1455 _Group Address and “p” for unassigned (peripheral) tags as {group-type} (see volume 10/1 clause 5.3),_

1456 however, other {group-types} MAY be added in future.

1457 The wildcard character (‘*’) is neither allowed in the <group-type>, nor in the <group-address> field

1458 since this can result in large responses. The KNX IoT device SHALL return a response code of 4.00 Bad

1459 Request if the request contains a wildcard character (‘*’) in a KNX Group Address discovery query.

1460 The “urn:knx” prefix SHALL be omitted in the response in order to reduce payload since the request filter

1461 has already been applied to “urn:knx”.


**CoAP client discovers points which belong to a specific Group Address (S-Mode) on a specific**
**device.**


**REQ:**
GET coap://{ipv6-unicast}/.well-known/core?d=urn:knx:g.s.1234

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
</path3example>;rt="dpa.352.51";ct=50


1462

1463 A KNX IoT device SHALL support the concatenation of query parameters with resource type “rt”, but

1464 only for “dpa” prefixed attributes (Datapoint Annotation), and the sector type “d” with {group-type} “p”.

1465 The query attributes are logically AND-ed to provide the query result. This allows clients (e.g. controller

1466 functional block) to find corresponding runtime interworking inputs or outputs of a particular Datapoint

1467 Annotation. This discovery query is intended to be used in small ad hoc configurations, for example, in

1468 combination with a push-mode binding.

1469 If “rt” and “d” are used in combination then the wildcard character (‘*’) is neither allowed in “rt”, nor in

1470 the “d” query parameter. The KNX IoT device SHALL return a response code of 4.00 Bad Request if the

1471 request contains a wildcard character (‘*’).


-----

**CoAP client discovers (multicast) datapoints that belong to the peripheral Group Address = 1**


**REQ:**
GET coap://[FF03::FD]/.well-known/core?rt=urn:knx:dpa.352.55&d=urn:knx:g.p.1

**RES :**
CONTENT (Content-Format : application/link-format (40))
**Payload:**
</path2example> ;rt="dpa.352.55"; if="if.o";ct=50 60


1472

1473 **2.6.1.4** **Linkage and Resolution**

1474 Device resources MAY be identified by a Link Identifier and a relative path component. To identify a

1475 specific resource a Logical Resource Identifier (LRI) is used, this LRI can be generated as unique id by

1476 the device. A Link Identifier is defined by the scheme: “knx://{LRI}”. A device resource reference can be

1477 identified by its Link Identifier and relative path component. An example for reference to a resource by

1478 means of the Link Identifier is: knx://sn.{serial-number}:<port>/{point-path}. The same ID SHALL be

1479 used as endpoint name (ep) in order to discover the device by clients in case the IP Address has changed.

1480 **2.6.2** **Device IP Address**

1481 **2.6.2.1** **Requirements**

1482 A single network MAY consist of a bridged Ethernet or Wi-Fi network and all KNX-IoT devices belong

1483 to the same IPv6 multicast domain. In this case, a link-local IPv6 addressing (LLA) is sufficient. A larger

1484 OT (Operational Technology) network usually contains stub networks. Stub networks, like a Thread

1485 network, require routable IPv6 addresses to communicate across networks such as a unique-local

1486 identifier (ULA). The Thread network uses for link-local communication an On-mesh prefix which

1487 corresponds with a LLA prefix in a Wi-Fi or Ethernet network. A stub router (Border Router) connects

1488 the stub network with an adjacent network. The stub router SHALL provide its own routable prefix if the

1489 network does not provide a routable prefix. A stub router SHOULD advertise routable prefixes on the

1490 adjacent network. A Thread Border Router, for example, SHOULD advertise routable prefixes on

1491 adjacent networks with Router Advertisements [RFC4861] with the Route Information Option

1492 [RFC4191].

1493 The KNX IoT device SHALL listen on configured CoAP ports (see Device Resource Object clause

1494 2.5.6). The default CoAP port configuration SHALL be used for unicast and multicast as defined in

1495 [RFC7252].

1496 All KNX IoT devices SHALL have an IPv6 address. KNX IoT devices will use the unique-local identifier

1497 fd00::/8 according to [RFC4193] for communication within private networks (site or organization, but not

1498 in the global IPv6 Internet). Furthermore, a KNX IoT device SHALL support the configuration of at least

1499 three routable IPv6 addresses (e.g., KNX Fabric, KNX Installation and Thread Domain prefix) in addition

1500 to the link-local address. As for any IPv6 networking device, multiple IPv6 addresses may be available. If

1501 available, the prefix having the unique-local identifier concatenated with a KNX Fabric ID (see

1502 configuration property “dev/fid” in clause 2.5.6) yield the system Unique Local Address (ULA) prefix

1503 that SHOULD be used to construct the default address for KNX IoT messages. For each KNX IoT Fabric

1504 that wants to use KNX specific ULA for the deployed system, the MaC either gets a network specific

1505 ULA configuration from the network administrator or generates a random, unique 40-bit KNX Fabric ID

1506 representing the Global ID according to [RFC4193]. This procedure is part of the configuration with a

1507 MaC and not scope of this specification.


-----

1508 The interface identifier of a KNX IoT device SHALL be 64 bits long. It MAY be constructed by various

1509 methods [RFC4291, RFC7136, Thread Specification], but SHALL be persistent over reboots for the

1510 operational phase of the device. It MAY also be created from random and recreated during a device reset

1511 to default state. The device SHOULD implement some method of Duplicate Address Detection (DAD),

1512 e.g., [RFC4429].

1513 Every IPv6 subnet, such as a Thread or Wi-Fi network, gets a separate 16-bit subnet ID. Subnet ID

1514 “0000” is by convention reserved for administrative services. This results in the following IPv6 address

1515 format for a KNX IoT device when using the ULA:

###### ULA Routing Prefix /48 Subnet ID Interface Identifier

Unique- KNX Fabric ID /
Local Global ID

###### fd 11:2222:3333: 0001: 6cd9:8ad2:8e88:1f68

1516 **2.6.2.2** **KNX Network Example**

1517 The following KNX network example contains devices and services in different network segments. The

1518 KNX Fabric ID and KNX Installation ID are used in order to simplify the routing table configuration

1519 instead of “whitelisting” each device individually. Hence the KNX Fabric ID and KNX Installation ID

1520 serves as a part of the security zone concept (see clause 3.1) and access is only possible among devices

1521 and services with the same ULA. In addition, the KNX Fabric ID MAY be used to separate groups of

1522 devices within an OT network. For example, devices that belong to a tenant (apartment) or trade (lighting,

1523 fire protection, or HVAC system etc.) MAY have an own IPv6 address range in larger buildings.

1524 The example also contains an IPv6 tunnel to a Cloud service via Access Point (AP). This tunnel or rather

1525 the service at the end of the tunnel belongs to the KNX Fabric too. The same is true for services in an IT

1526 network (office network). In both cases routers block requests to devices that do not belong to the KNX

1527 Fabric.

|ULA Routing Prefix /48|Col2|Subnet ID|Interface Identifier|
|---|---|---|---|
|Unique-<br>Local|KNX Fabric ID /<br>Global ID|KNX Fabric ID /<br>Global ID|KNX Fabric ID /<br>Global ID|
|fd|11:2222:3333:|0001:|6cd9:8ad2:8e88:1f68|


**KNX Installation**

|Col1|R|
|---|---|

|Col1|Col2|Col3|IT Network<br>(Ethernet, Wi-Fi, etc.)<br>Service<br>R|
|---|---|---|---|
|**KNX Classic Subsystem**<br>KNX-TP1<br>Device<br>**GW**|**Thread IP Network (IEEE 802.15.4)**<br>Device<br>(Router)<br> Device<br>**BR**|**Single Pair Ethernet Network (IEEE 802.3cg)**<br> Device<br> Device<br>**R**|**Single Pair Ethernet Network (IEEE 802.3cg)**<br> Device<br> Device<br>**R**|


1528


AP: Access Point, GW: Gateway, BR: Border Router, R: Router


1529 **Figure 16 – KNX Network Example**


-----

1530 **2.6.3** **Unicast Operation**

1531 **2.6.3.1** **Options**

1532 Table 39 lists the Options a server KNX IoT device MANDATORY (‘M’, for mandatory), SHOULD

1533 (‘R’, for recommended) or OPTIONAL (‘O’) support. Hyphen (‘-‘) means not applicable. The ‘X’ means

1534 the Option can be used but SHOULD NOT be used in the indicated context. All the Options are specified

1535 in [RFC7252] except where noted otherwise in the “Notes” column. Any Option in a confirmable request

1536 that is not recognized by a server where the option number has the “Critical” flag [RFC7252] set SHALL

1537 lead to a 4.02 Bad Option response. These are the uneven Option numbers. Option support for a client is

1538 not specified in detail. However, it SHALL support at least the Options marked MANDATORY (‘M’) in

1539 the Server “In Response” column below.

1540 **Table 39 – Unicast operation server requirements**

|Opt<br>Nr|Option Name|Server support for the<br>Option|Col4|Notes|
|---|---|---|---|---|
|**Opt**<br>**Nr**|**Option Name**|**In Request**|**In**<br>**Response**|**In**<br>**Response**|
|1|If-Match|O|-||
|3|Uri-Host|O|-|Normally not included in a CoAP request; a<br>Server SHALL respond 4.02 if it does not<br>support multiple virtual servers per Clause<br>5.10.1 of [RFC7252].|
|4|ETag|O|O||
|5|If-None-Match|O|-||
|6|Observe|O|-|[RFC8323]|
|7|Uri-Port|O|-|Normally not included in a CoAP request; a<br>Server SHALL respond 4.02 if it does not<br>support multiple virtual servers per [RFC7252]<br>clause 5.10.1.|
|8|Location-Path|-|M|Typically used when resources are created<br>using POST.|
|11|Uri-Path|M|-||
|12|Content-Format|M|M|Applicable for PUT and POST in requests and<br>for GET in the response.|
|14|Max-Age|-|O|By default, excluded in response.|
|15|Uri-Query|M|-||
|17|Accept|M|-|Applicable for PUT and POST if payload<br>returned.|
|20|Location-Query|-|O||
|23|Block2|O|O|[RFC7959]|
|27|Block1|O|O|[RFC7959]|
|28|Size2|O|O|[RFC7959]|
|35|Proxy-Uri|O|-||
|39|Proxy-Scheme|O|-||


-----

258 No-Response R     - [RFC7967]
1541

1542 **2.6.3.2** **Response Codes**

1543 2.6.3.2.1 Overview

1544 Table 40 lists the response codes that the server KNX IoT device SHALL (‘M’, for MANDATORY) or

1545 MAY (‘O’, for optional) support. The ‘X’ means SHOULD NOT use this response because there is a

1546 better alternative or no reason to use it. The usage rules for the code are given by [RFC7252] or the RFC

1547 listed in the Notes column; plus, in addition the “Requirements for Use” stated in this column, if any. The

1548 required support for a CoAP client is not specified in detail; however, a client SHALL at least be able to

1549 distinguish the basic CoAP response code classes 2.xx (success), 4.xx (client error) and 5.xx (server

1550 error).

1551 Using error messages that do not provide implementation details is important to avoid information

1552 leakage. When a server encounters a problem, only standardized status codes of the 4.xx and 5.xx

1553 range SHALL be used consistently with their intended semantics.

1554 A server MAY choose to stop processing as soon as a problem is encountered, or it MAY continue

1555 processing and encounter multiple problems. For instance, a server might process multiple attributes and

1556 then return multiple validation problems in a single response. When a server encounters multiple

1557 problems for a single request, the most generally applicable HTTP error code SHALL be used in the

1558 response. For instance, “4.01 Unauthorized” has highest priority and SHALL be used for clients that does

1559 not have valid authentication credentials (e.g. (D)TLS [X.509] certificate and/or OSCORE pre-shared

1560 key). If no specific response code is applicable then “4.00 Bad Request” might be appropriate for 4.xx

1561 errors or “5.00 Internal Server Error” might be appropriate for 5.xx errors.

1562 **Table 40 – Server response codes**

|Opt<br>Nr|Option Name|Server support for the<br>Option|Col4|Notes|
|---|---|---|---|---|
|**Opt**<br>**Nr**|**Option Name**|**In Request**|**In**<br>**Response**|**In**<br>**Response**|
|60|Size1|O|R <br>O|'R' for Clause 5.9.2.9 of [RFC7252] defined<br>Size1 semantics for 4.13 response;<br>‘O’ for [RFC7959] Size1 semantics.|
|252|Echo|M|M|[RFC9175]|
|258|No-Response|R|-|[RFC7967]|

|Resp.<br>Code|Description|Support<br>Level|Notes and Requirements for Use|
|---|---|---|---|
|2.01|Created|**M **|"Create" operation, e.g., of an item, is completed<br>successfully; [RFC7252]|
|2.02|Deleted|**M **|"Delete" operation is completed successfully; [RFC7252]|
|2.03|Valid|O|Only used when ETag Option was in request|
|2.04|Changed|**M **|"Write" operation is completed successfully; [RFC7252]|
|2.05|Content|**M **|"Read", “Notification” or “Discover” etc. operation is<br>completed successfully; [RFC7252]|
|2.31|Continue|O|This code indicates that the transfer of this block of the re<br>quest body was successful, and that the server encourag<br>es sending further blocks; [RFC7959]|
|4.00|Bad Request|**M **|The response means that server could not understand<br>the request due to invalid syntax; [RFC7252]|


-----

|Resp.<br>Code|Description|Support<br>Level|Notes and Requirements for Use|
|---|---|---|---|
|4.01|Unauthorized|**M **|Used if the client could not (yet) be properly<br>authenticated, in order to check if it is authorized to<br>access this resource. The client SHOULD perform<br>action(s) to authenticate itself before retrying the request.<br>In case a request results in several errors then<br>Unauthorized SHOULD have highest priority.|
|4.02|Bad Option|**M **|Diagnostic payload SHALL be included and SHOULD<br>start with the first unrecognized critical-option number as<br>4-byte UTF-8 string|
|4.03|Forbidden|**M **|Used if the client could be authenticated but does not<br>have the authorization to access this resource<br>(e.g., wrong access scope). The client SHOULD take<br>action(s) to improve its authorization status, before<br>retrying this request.|
|4.04|Not Found|**M **|Server cannot find requested resource; [RFC7252]|
|4.05|Method Not Allowed|**M **|The request method (GET or PUT etc.) is known by the<br>server but has been disabled and cannot be used;<br>[RFC7252]|
|4.06|Not Acceptable|**M **|This response is sent when the server, after<br>performing content negotiation, doesn't find any content<br>following the criteria given by the client; [RFC7252]|
|4.08|Request Entity<br>Incomplete|O|The code indicates one or more missing blocks. The<br>server has not received the blocks of the request body<br>that it needs to proceed; [RFC7959]|
|4.09|Conflict|X|See [RFC8132], typically not expected to be supported.|
|4.12|Precondition Failed|O|If 4.12 not implemented, then 4.02 SHALL be returned if a<br>conditional request [RFC7252] is made.|
|4.13|Request Entity Too<br>Large|O|‘O’ as defined in [RFC7252] for request size only.|
|4.15|Unsupported<br>Content-Format|**M **|The media format of the requested data is not supported<br>by the server, so the server is rejecting the request;<br>[RFC7252]|
|4.22|Unprocessable<br>Entity|X|See [RFC8132], typically not expected to be supported.|
|4.29|Too Many Requests|**M**|[RFC8516]|
|5.00|Internal Server Error|**M **|[RFC7252]|
|5.01|Not Implemented|X|[RFC7252] requires use of 4.05 instead for all cases.|
|5.02|Bad Gateway|O|Only relevant for CoAP Proxy; [RFC7252]|
|5.03|Service Unavailable|O|The server is not ready to handle the request. Common<br>causes are a server that is down for maintenance or that<br>is overloaded. The server**SHALL** return a Retry-<br>After header indicating how long (delay in seconds) the<br>client ought to wait before making a follow-up request;<br>[RFC7252]|


-----

5.05 Proxying Not O If proxying is not supported for any resource, a CoAP
Supported request with Proxy-Uri Option SHOULD trigger 4.02

response instead of 5.05.
1563

1564 2.6.3.2.2 Error Responses to Queries

1565 This clause applies to all unicast operations in the context of Discovery, i.e., unicast interactions on the

1566 “well-known/core” resource. Error responses are generated when a unicast request was sent, and an error

1567 occurred in processing the request. The applicable response codes including error responses are defined in

1568 [RFC7252] clause 12.1.2. Specifically, in case where a query contains too many elements for the

1569 responding server to handle is relevant for Discovery. This includes, for example:

1570 - Too many query parameters.

1571 - Too long strings in query parameters, or other parts of the URI.

1572 - Too long URI in total.

1573 In such situations, the server SHOULD respond with a 4.13 Request Entity Too Large. This might

1574 indicate to the client that it SHOULD adapt its query before sending it again. It might happen, that the

1575 response to a discovery request (holds for all requests) would be too large to construct or send for the

1576 server. In absence of a specific error code for this situation, the server could indicate this with an error

1577 code 4.00 Bad Request to indicate that the client might change /restrict the discovery query.

1578 Since discovery queries might lead to long answers, especially if filtering is not implemented fully, clients

1579 SHALL support the option of CoAP Block-wise Transfers [RFC7959].

1580 An exception is, however, when the CoAP server is only temporarily occupied and will soon (within

1581 some seconds) be available to process larger queries. Then, the server SHOULD respond “5.03 Service

1582 Unavailable.

1583 2.6.3.2.3 Rate limiting

1584 KNX IoT devices SHALL rate limit requests from clients that are sending excessive request. This

1585 prevents battery powered devices, for example, from being discharged. Many load-based denial-of
1586 service incidents in systems are unintentional caused by errors in software or configurations in other parts

1587 of the system.

1588 **2.6.4** **Multicast Operation**

1589 **2.6.4.1** **CoAP multicast scopes**

1590 The IPv6 [RFC8200] address range ff0x::fd has been reserved by IANA as the “All CoAP Nodes”

1591 variable scope multicast address [RFC7252]. The “x” designates the 4 bits that declare the multicast

1592 address scope; all scopes can be used in principle. This multicast address is used for CoAP service

1593 discovery, it SHALL NOT be used for other purposes. A device SHALL support CoAP multicast

1594 discovery by listening to this multicast address on the following scope:

1595 Link-local (2):

1596 - Typically used to query in a single Wi-Fi or Ethernet network segment.

1597 Realm-local (3):

1598 - Typically used to query in a single mesh topology IPv6 network.

|Resp.<br>Code|Description|Support<br>Level|Notes and Requirements for Use|
|---|---|---|---|
|5.04|Gateway Timeout|O|The request does not complete within a specified time.<br>The request times out and returns a Gateway Timeout<br>error. Only relevant for CoAP Proxy; [RFC7252]|
|5.05|Proxying Not<br>Supported|O|If proxying is not supported for any resource, a CoAP<br>request with Proxy-Uri Option SHOULD trigger 4.02<br>response instead of 5.05.|


-----

1599 NOTE 7 Realm-local is defined for 6LoWPAN and currently only implemented in certain IPv6 mesh network standards,

1600 e.g., Thread.

1601 - A LAN or Wi-Fi node SHOULD NOT send realm-local multicast messages.

1602 Realm-local (3) SHALL be used as default scope, in order to discover all nodes in a meshed network, i.e.,

1603 across routing (on the same physical media) devices.

1604 Site-local (5):

1605 - Site-local is the default in a Installation and spans across networks and stubs (Wi-Fi, Ethernet and
1606 Thread network segments).

1607 **2.6.4.2** **Response suppression**

1608 If a query component is not present in a multicast request to “/.well-known/core”, the receiving CoAP

1609 server SHALL NOT respond to the query in compliance with [RFC6690] and [RFC7252]. If there is no

1610 matching result e.g., the query result set has zero elements, and the request was sent as multicast, then a

1611 response to the query request SHALL NOT be sent. This behavior complies with [RFC6690] clause 4.1.

1612 If a multicast request was sent, any error responses (CoAP 4.xx or 5.xx class) SHALL be suppressed by

1613 the responding CoAP server. Only in the unicast case error responses are generated.

1614 **2.6.4.3** **Response Timing**

1615 Any response to a multicast query SHOULD be delayed by the CoAP server by a randomly chosen

1616 duration between 0 and DEFAULT_LEISURE (5 seconds, [RFC7252]).

1617 **2.6.4.4** **Sleepy Devices**

1618 Infrastructure devices (e.g. Thread Routing devices) have limited memory to cache messages on behalf of

1619 sleepy devices which have turned off the radio when idle to preserve battery lifetime. Reliable multicast

1620 communication to "sleepy" devices MAY is not possible. Therefore, the communication patterns between

1621 devices SHOULD be designed such that sleepy devices are always the initiator of multicast messages.

1622 **2.6.5** **Multicast Group IP Addresses**

1623 IPv6 Multicast Group Address is constructed using Unicast-Prefix-based multicast addresses [RFC3306,

1624 RFC3307] comprising

1625 - the multicast prefix FF3x:00PT [RFC3306, Chapter 4], with FF3 indicating a multicast address

1626 assigned based on the ULA routing prefix, and PT encoding the type of the following ULA routing

1627 prefix. x is any valid scope identifier defined in [RFC4291 and IANA registry], but SHALL NOT

1628 exceed the scope of the embedded ULA routing prefix [RFC3306].

1629 - The ULA routing prefix (KNX Installation ID),

1630 - and a 32 bit group identifier in the range 0x80000000 to 0xFFFFFFFF [RFC3307, Chapter 4.3]

1631 The KNX Installation ID (see configuration property “dev/iid” in clause 2.5.6) SHALL be used for the

1632 system Unique Local Address (ULA) routing prefix.

1633 In a Thread network, for example, this multicast address type enables IP header compression down to 48

1634 bits [RFC6282], if the constrained stub network uses less than 16 compressible prefixes in total

1635 [e.g., Thread Specification, 6LoWPAN Contexts]. Therefore, for multicast group notifications among

1636 KNX IoT devices, the compressed address SHALL take the form of ff3x::00:<group id> [RFC6282,

1637 Chapter 3.1.1], with the ULA routing prefix and its type PT mapped to a context managed by the

1638 constrained stub network.

1639 Note that the lifetime of a Unicast-Prefix-based multicast address SHOULD NOT exceed the Valid

1640 Lifetime field in the Prefix Information option, corresponding to the ULA routing prefix being used,

1641 contained in the Neighbor Discovery Router Advertisement message [RFC3306].


-----

1642 The group identifier SHALL be allocated either by a server (e.g., MaC) or the host (KNX IoT device),

1643 following the rules for server or host allocation referenced in [RFC3307]. The group identifier is

1644 configured in the Function Point Table (see clause 2.5.7).

1645 The multicast groups SHALL be registered, for example, at the Thread Border Router to protect

1646 constrained KNX IoT devices from undesired network loads. The multicast groups MAY be registered

1647 through a configuration step, e.g., by the MaC or the KNX IoT device MAY subscribe and maintain the

1648 groups of interest by itself [Thread 1.2 Specification, Chapter 5.24]. In a Thread network, for example,

1649 Rx-off-when-idle KNX IoT devices SHALL register such multicast addresses with their Thread Parent to

1650 receive them via link layer unicast transmissions. Multicast packets of scope admin-local (x=4), scope

1651 site-local (x=5) and higher will be forwarded by a Backbone Router function of a Border Router [Thread

1652 1.2 Specification Chapter 9.4.7] in its default configuration if the multicast group is registered in the

1653 Border Routers Multicast Listener Table.

1654 NOTE 8 Source-Specific Multicast (SSM) is not supported for Thread Devices.

1655 Example site-local scoped multicast address: FF35::30:<ULA-routing-prefix>::<group id>

1656 This results in the following IPv6 address format (example):

Multicast prefix ULA routing prefix Group Identifier

FF35:0030: FD11:2222:3333:: 8000:0068
1657

1658 **2.6.6** **Message Flow Control**

1659 Flow control is used to limit messages between KNX IoT devices to prevent devices being overwhelmed

1660 with data. Publisher flow control is a mechanism that pushes the blocking behavior to the data producer.

1661 When the message queue is full, the receiving device notifies the Publisher device to stop sending new

1662 messages for a defined time.

1663 If a KNX IoT device is unable to serve a certain Publisher that is sending messages too fast, the device
1664 SHOULD respond with a unicast message response code 4.29, "Too Many Requests" and set the Max1665 Age option to indicate the number of milliseconds after which the Publisher can retry.

1666 The time to wait in Max-Age SHOULD be enough to empty the message queue on the receiving KNX
1667 IoT device.

1668 If a Publisher device receives the 4.29 Response Code from a KNX IoT device for a publish message, it
1669 SHALL NOT send new publish messages before the time indicated in Max-Age has passed.

1670 **2.6.7** **Creating, Updating and Deleting Function Points**

1671 **2.6.7.1** **Introduction**

1672 A MaC can create new Function Point resources and modify or delete existing resources (see clause

1673 2.4.3.3 “Partial/Differential download”). However, a KNX IoT device MAY NOT check configurations

1674 before applying (in a single or multiple “transaction”). Hence, the MaC SHALL write only correct and

1675 consistent data to a KNX IoT device.

1676 **2.6.7.2** **Creating Resources**

1677 A Function Point resource can be created by sending a POST request to a resource that represents a

1678 collection of resources (fp/g, fp/r, or fp/p). The request contains an array of resource objects as primary

1679 data. The resource object SHALL contain an ID member created by the MaC. An ID SHALL be specified

1680 with an “id” key, the value of which SHALL be a unique on a KNX IoT device.

1681 If a POST request has been created successfully, the server SHALL return a 2.01 CREATED status code.

|Multicast prefix|ULA routing prefix|Group Identifier|
|---|---|---|
|FF35:0030:|FD11:2222:3333::|8000:0068|


-----

**Write group object table. fp resources SHALL support CBOR, however, the following example**
**uses the JSON content format for better readability.**


**REQ:**
POST coap://{ipv6-unicast}/fp/g (Content-Format: application/json (50)), OSCORE (code (POST),
kid (<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 13,
"href": "/LDSB1/SOO",
"ga": [2305, 2401],
"cflag": 216 //0b11011000
},
{
"id": 14,
"href": "/LDSB1/RSC",
"ga": [2306],
"cflag": 64 //0b01000000
}
]


1682

1683 **2.6.7.3** **Updating Resources**

1684 If a request does not include all of the members for a resource, the server SHALL interpret the missing

1685 attributes as if they were included with their current values. The server SHALL NOT interpret missing

1686 attributes as null values. For example, the following POST request is interpreted as a request to update

1687 only the “href” member of a Function Point group table:


**Write group object table Example. fp resources SHALL support CBOR, however, the**
**following example uses the JSON content format for better readability.**


**REQ:**
POST coap://{ipv6-unicast}/fp/g (Content-Format: application/json (50))
**Payload:**

[
{
"id": 1,
"href":"/LDSB1/SOO",
}
]


1688

1689 If an update is successful and the server does not update any attributes besides those provided, the

1690 server SHALL return 2.04 CHANGED status code with no response document. When processing a

1691 request to modify a resource that does not exist, a server SHALL return 4.04 Not Found with empty

1692 payload.


-----

1693 **2.6.7.4** **Deleting Resources**

1694 An individual resource can be deleted by making a DELETE request to the resource’s URL:


**Delete Function Point list item**


**REQ:**
DELETE coap://{ipv6-unicast}/fp/g/1


1695

1696 A server SHALL return a 2.00 OK status code if a deletion request is successful with empty payload.

1697 A server SHALL return a 4.04 Not Found status code if a deletion request fails due to the resource not

1698 existing.

1699 **2.6.8** **Pagination**

1700 **2.6.8.1** **Basic principle**

1701 A KNX IoT device (server) MAY want to limit the number of items returned in a response to a subset

1702 (“page”) of the whole set available. The page query parameter family “p” (e.g., pn or ps) is reserved for

1703 pagination. Servers and clients SHALL use this key for pagination operations. A KNX IoT device

1704 SHALL support Linked List Pagination on all linked list resources (application/link-format).

1705 With the query parameter “pn={value}” the client can request the number of pages to skip before starting

1706 to collect the result set. The page size “ps” defines the number of items per page and is a fixed

1707 configuration on a KNX IoT device (server).

1708 If the request contains “ps” but the query parameter is not supported on the resource, then the server

1709 SHALL return a response code of 4.00 Bad Request.

1710 If the request does not contain “ps” and the response is too large, then the server SHALL return a

1711 response code of 4.13 Request Entity Too Large.

1712 Any link that could return a large (e.g., larger than min UDP frame size), potentially unbounded list of

1713 items in its GET response SHALL implement the “pn” query parameter for pagination using the pattern

1714 described in the following example:


**Pagination example that starts with the first list item (list size = 2 items)**


**REQ:**
GET coap://{ipv6-unicast}/f/rts?pn=0 (Content-Format: application/link-format (40))

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
</p/rts/temproom>;rt="dpa.321.51";ct=60,
</p/rts/tempcorrvalue>;rt="dpa.321.111";ct=60


1715


-----

1716 **2.6.8.2** **List Metadata Query Parameter "l"**

1717 List metadata members are used to provide additional information about the list such as the list size or

1718 default page size. The “l” query parameter SHALL be used exclusively and a combination with other

1719 query parameters on the same resource is not possible.

1720 To retrieve the value of {list-metadata} a KNX IoT device SHALL accept a GET request to the URI {list
1721 path}?l={list-metadata},{list-metadata}. If at least one of the requested {list-metadata} is supported, then

1722 the device SHALL return a response with CoAP response code 2.05 Content. The response payload

1723 SHALL contain the {list-metadata} as key, and the {metadata-value} of the specified metadata as value.

1724 If none of the requested {list-metadata} is supported, the device SHALL return a response with CoAP

1725 response code 4.04 Not Found with empty payload.


**Metadata read example for a selected list metadata member (list size)**


**REQ:**
GET coap://{ipv6-unicast}/fp/r?l=total,ps (Accept: application/json (50))
**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
{ "total": 22, "ps": 5 }


1726

1727 KNX IoT defines a common basic set of metadata that MAY be applied to any Point. Standardized KNX

1728 IoT metadata resource names (key) do not contain a namespace. The following table defines the metadata

1729 members for KNX IoT that the server MANDATORY (‘M’) or OPTIONAL (‘O’) support:

1730 **Table 41 – List metadata member**

**Metadata** **Resource** **Method** **[Support]** **JSON** **Notes**

**Member** **Name** **Type**

Total total GET **M** Number The total number of existing items in the
whole list.

Page Size ps GET **M** Number The default page size for pagination

1731

1732 **2.6.8.3** **Link List**

1733 A client MAY have to read multiple pages to get the full list of an application/link-format resource

1734 (“if.ll”).

1735 If the list has more than one page than “rt=p.next” SHALL indicate that more requests (pages) are needed

1736 to get the full list. The link in the <brackets> contains the next page that the client can request.

1737 The client in the following example reads a resource list without the “p” pagination query parameter in

1738 the first request. The client knows that there is more to read because of the “rt=p.next” item. Hence, the

1739 client requests the next page with “pn=1”.

|Metadata<br>Member|Resource<br>Name|Method|Support|JSON<br>Type|Notes|
|---|---|---|---|---|---|
|Total|total|GET|**M**|Number|The total number of existing items in the<br>whole list.|
|Page Size|ps|GET|**M **|Number|The default page size for pagination|


-----

**Link list pagination example**


**REQ:**
GET coap://{ipv6-unicast}/p? (Content-Format: application/link-format (40))

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
</p/1>;rt="dpa.x.y";ct=60,
</p/2>;rt="dpa.x.z";ct=60,
</p/3>;rt="mdt.siemens.x.y";ct=60,
</p?pn=1>;rt="p.next";ct=40

**REQ:**
GET coap://{ipv6-unicast}/p?pn=1 (Content-Format: application/link-format (40))

**RES:**
2.05 CONTENT (Content-Format: application/link-format (40))
**Payload:**
</p/4> rt="dpa.x.y";ct=60,
</p/5> rt="dpa.x.y";ct=60


1740

1741 **2.6.9** **S-Mode Group Communication**

1742 **2.6.9.1** **Publish Group Notification – Unacknowledged Multicast**

1743 In a brokerless system, a KNX IoT device MAY publish group notifications via IP multicast

1744 communication. The predefined default path structure ({messaging-path}) for S-Mode group notifications

1745 on IP multicast SHOULD be ".knx".

1746 The KNX IoT device SHALL support configuration of the path-structure. The MaC (Management Client)

1747 configures the path structure for an installation and in some cases, the configured path-structure may

1748 differ from the predefined structure, for example "kitchen/sensors/" (see clause 2.5.7.3.2 ”Function Point

1749 Recipient Resource Object”).

1750 CoAP [RFC7252] message fields SHALL be protected by OSCORE [RFC8613]. According to

1751 [RFC8613] (clause 4.2.), the code (PUT/GET/POST etc.) is encrypted and integrity protected to prevent

1752 an intermediary from eavesdropping or manipulating the code (e.g., changing from GET to DELETE).

1753 KNX IoT multicast messages SHALL be encrypted, and integrity protected. Request and response codes

1754 are encrypted by OSCORE, see clause 3.6 “OSCORE Application Layer Security”. Only dummy codes

1755 (POST/Changed) are visible in the header of the OSCORE message.

1756 KNX IoT group notifications SHALL use POST inside the protected OSCORE message. In OSCORE

1757 messages the source KNX Individual Address is moved from payload into the CoAP header as described

1758 in [RFC8613] (sia=kid=OSCORE Sender-ID) to avoid duplicating message content. In addition, the KNX

1759 IoT device SHALL support configuration of a “kid_context” for each Group Address with the access

1760 token. If a “kid_context” has been configured, then the Publisher KNX IoT device SHALL add the

1761 kid_context in the OSCORE message and the Recipient KNX IoT device SHALL check the

1762 “kid_context” with the related access token in the access control list.


-----

**PUBLISH Multicast S-Mode Group Message**


**REQ:**
POST coap://{ipv6-multicast}/{messaging-path}
(Content-Format: application/cbor (60), OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ 5: { 6: <st>, 7: <ga>, 1: <value> } }


1763

1764 **2.6.9.2** **Publish Group Notification - Acknowledged Unicast**

1765 For reliable unicast message transfer, the Publisher KNX IoT device SHALL use a confirmed transport

1766 channel to a message broker or a Subscriber KNX IoT device, secured by OSCORE or, if supported, by

1767 (D)TLS (coaps://).

1768 The destination interaction ({messaging-path}) SHALL be an ActionAffordance of type "rt=urn:knx:g.s".

1769 A Publisher KNX IoT device publishing to a Subscriber device MAY indicate the maximum lifetime of

1770 the value by including the Max-Age option in the publish request. The Subscriber KNX IoT device

1771 SHALL return a response code of "2.04 Changed" if the publish request is accepted.

1772 The Subscriber KNX IoT device SHALL accept CoAP requests using POST method.


**WebHook Unicast S-Mode Group Message with (D)TLS messaging-destination-uri from Pub/Sub Table**


**REQ:**
POST coap://{messaging-destination-uri}/{messaging-path} (Content-Format: application/cbor (60)
OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ 4: <sia>, 5: { 6: <st>, 7: <ga>, 1: <value> } }


1773

1774 For use of OSCORE application layer security, the KNX IoT device SHALL use an OSCORE access

1775 token, which is configured by the MaC (tool) and by thus known by all involved peers.


**WebHook Unicast S-Mode Group Message with OSCORE messaging-destination-uri from Pub/Sub**
**Table**


**REQ:**
POST coap://{messaging-destination-uri}/{messaging-path} (Content-Format: application/cbor (60),
OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ 5: { 6: <st>, 7: <ga>, 1: <value> } }


1776

1777 **2.6.9.3** **Group Notification Subscription - Acknowledged Unicast**

1778 A KNX IoT device SHALL allow OSCORE clients, and if supported (D)TLS clients, to subscribe an

1779 EventAffordances of type "rt=urn:knx:g.s" on using the KNX IoT Point subscription mechanism as

1780 described in clause 2.5.12.2 “Subscription Resource Object”. The KNX IoT device adds the Subscriber

1781 device to a list of Subscribers. After successful subscription, the KNX IoT device sends Group Message

1782 events to all devices in the list of Subscribers (e.g., monitoring device, Message Broker or KNX IoT

1783 Classic Gateway).

1784 Group messages from an intermediate service (e.g., KNX IoT Classic Gateway) or a KNX IoT device

1785 SHALL contain the device KNX Individual Address (sia) from the device of origin.


-----

**SUBSCRIBE on Group Messages (add messaging-destination-url to Pub/Sub Table)**


**REQ:**
POST coap://{ipv6-unicast}/{messaging-path}?lt=<lifetime> (Content-Format: application/json (50),
OSCORE (code (POST), kid (<sia>), kid_context (<contextID>))
**Payload:**
{ "url": <messaging-destination-url>:<port> }
**RES:**
2.04 CHANGED


1786

1787


**PUBLISH S-Mode Group Message (messaging-destination-uri from Pub/Sub Table)**


**REQ:**
POST coap://{messaging-destination-uri} (Content-Format: application/json (50), OSCORE (code
(POST), kid (<sia>), kid_context (<contextID>))
**Payload:**
{ "sia": <sia>, "s": { "st": <st>, "ga": <ga>, "value": <value> } }
**RES:**
2.04 CHANGED


1788 **2.6.10** **Point Publish/Subscribe**

1789 **2.6.10.1** **Subscriptions**

1790 2.6.10.1.1 Basic requirements

1791 Points that implement the EventAffordances interface of type "rt=urn:knx:g.s" SHALL support WebHook

1792 subscriptions. This is done by providing the WebHook Recipient callbackUrl “url” (see clause 2.6.10.1.5

1793 “Event Recipient Member “url”) in the payload. The resulting notifications are group notifications as

1794 defined in clause 2.6.10.2.2 “Notification Event”.

1795 In addition, some resources MAY allow CoAP clients (3[rd] party client) to subscribe points and receive

1796 update notifications. A WebHook is a unidirectional logical link from one device to another device. A

1797 subscription MAY be performed by a MaC or a Subscriber 3rd party client. The resulting event is a Point

1798 notification event, see clause 2.6.10.2.1 “Event Resource Member “href””.

1799 The following picture depicts a MaC that configures a WebHook Message Broker or device endpoint on a

1800 KNX IoT device (Publisher), and a Recipient that subscribes on the same Publisher using CoAP observe.

1801 The Publisher sends updates (point notification) to the Message Broker either with (D)TLS or with

1802 OSCORE depending on the configured security. The DNS-SD name SHOULD be used for WebHook

1803 endpoint address configuration which improves discovery stability and scalability. However, the MaC

1804 MAY configure a multicast address as an endpoint e.g., for lighting applications. Hence the KNX IoT

1805 device SHALL support multicast for publishing group events to multiple Recipients. The second

1806 Recipient uses CoAP observe as subscription mechanism. This is usually simpler for clients since CoAP

1807 observe is a standard functionality of CoAP and no additional predefined resource is necessary on the

1808 Recipient for updates.


-----

1809


**configure Recipient (WebHook)** **publish group event w/ unicast (CoAP observe)**
**Management Client (MaC)** **Publisher** **Recipient /Subscriber**


1810 **Figure 17 – WebHook and CoAP Observe**

1811 CoAP observe is the default subscription mechanism for KNX IoT. Hence, resources that support

1812 WebHook subscriptions SHALL support CoAP observe notification [RFC8323] as well. The definition of

1813 device resources that support CoAP observe is manufacturer specific.

1814 Query parameters (e.g., “lt”) of WebHook POST and CoAP observe GET subscription are handled

1815 equally in order to simplify the implementation.

1816 2.6.10.1.2 Lifetime Query Parameter "lt"

1817 The lifetime (seconds) of a subscription (WebHook or CoAP observe) SHALL be configured. If no

1818 lifetime is included in the initial subscription, then the server SHALL return a response code of 4.00 Bad

1819 Request.

1820 2.6.10.1.3 Non-Confimable Notification Query Parameter "non"

1821 The subscription MAY contain a "non" query parameter of type Boolean that indicates whether a

1822 notification resulting from a subscription of a specific Point or group of Points SHALL be sent over non
1823 confirmable transport. The default value for a notification is confirmed (“non”=false) if "non" is absent in

1824 the subscription.

1825 2.6.10.1.4 Correlation Identifier Query Parameter “cid”

1826 A WebHook or an Observe subscription MAY contain a reference using a correlation identifier string

1827 (cid) as a query parameter. If present in the subscription, then the same identifier SHALL also be present

1828 in the notification event.

1829 If OSCORE is used to protect the notification event, then the “cid” SHALL be present in subscription

1830 also in cases where the device has a configured KNX Individual Address. The “cid” is used as the

1831 OSCORE Sender-ID as defined in [RFC8613].


-----

**CoAP WebHook subscription with lifetime and subsequent unconfirmed (non) event notification**


**REQ:**
POST coaps://{ipv6-unicast}/{point-path}/sub?lt={lifetime}&non=true (Content-Format:
application/json (50))
**Payload:**
{ "url":<point-callback-url>:<port> }
**RES:**
2.04 CHANGED
**Payload:**
{ "sid":<subscription-id> }

**REQ:**
PUT coaps://{point-callback-url} (Content-Format: application/json (50))
**Payload:**
{ "value": <value> }
**RES:**
2.04 CHANGED


1832

1833 A Subscription can be removed with the “sid” ({subscription-id}) attribute in the path string that SHALL

1834 contain the {subscription-id} from the initial subscription. If the (<subscription-id>) is empty

1835 (coaps://{ipv6-unicast}/sub) then all subscriptions of this device are deleted.


**Delete CoAP WebHook subscription**


**REQ:**
DELETE coaps://{ipv6-unicast}/sub/{subscription-id} (Content-Format: application/json (50))
**RES:**
2.04 CHANGED


1836

1837 2.6.10.1.5 Event Recipient Member “url”

1838 A subscription SHALL configure the Recipient URI ({point-callback-url}). It is in the responsibility of

1839 the Subscriber that the configured endpoint URI (CoAP Server) exists on the 3[rd] party device or Message

1840 Broker etc. It is also possible to subscribe to Points without Group Address configuration. All

1841 subscriptions SHOULD be stored into non-volatile memory.

1842 2.6.10.1.6 Access Token ID Member “at”

1843 If no “at” (access-token-id) is present in the subscription, then the Publisher SHALL use the same

1844 credentials notification messages from the subscription message.

1845 The following example uses for the subscription (D)TLS and for the notification massage different

1846 credentials (e.g., OSCORE), therefore, and additional access token (“at”) reference is MANDATORY.

1847 For the notification the credentials from the configured access token in the device access control list

1848 SHALL be used.


-----

**WebHook subscription with Recipient URI and lifetime without Group Address (point-callback-url)**


**REQ:**
POST coaps://{ipv6-unicast}/{point-path}/sub?lt={lifetime}&cid={cid} (Content-Format:
application/json (50))
**Payload:**
{ "url":<point-callback-url>:<port> "at":<access-token-id> }
**RES:**
2.04 CHANGED


1849

1850 **2.6.10.2** **Notifications**

1851 2.6.10.2.1 Event Resource Member “href”

1852 Device resources may be grouped, and a CoAP client can subscribe to a datapoint list with a single

1853 subscription. The resource that contains a datapoint list SHALL be an “if.ll” interface (see clause 2.5.3

1854 “Interface Types (if)”). This simplifies the Subscriber (client) and reduces traffic to the Publisher

1855 (resource server). If the Subscriber has subscribed to a datapoint list, then the notification message

1856 SHALL contain the datapoint {path} in “href” as string. How datapoints are grouped is device

1857 manufacturer specific. The notification message MAY contain a single resource object or an array of

1858 resource objects if multiple values have changed at the same time.


**CoAP Observe subscription to a datapoint list with OSCORE (unicast)**


**REQ:**
POST coap://{ipv6-unicast}/{path}?lt={lifetime}&"cid"={cid}
(Accept: application/cbor (60), OSCORE (code (GET), kid (<sia>), kid_context (<contextID>)))

**RES:**
(Content-Format: application/cbor (60), OSCORE (code (Content), kid (<sia>), kid_context
(<contextID>)))
**Payload:**

[ { 1: <value>, 11: <point-path>} ]


1859

1860 2.6.10.2.2 Notification Event

1861 A notification event SHALL be sent to subscribed WebHook {point-callback-url} or CoAP Subscriber IP

1862 address when the heartbeat time has elapsed since the previous message, or the configured change of

1863 value (CoV) has exceeded the delta of the same value (see also clause 2.5.11.2 “Point Value Update

1864 Notification”).

1865 The notification heartbeat is indicated with the Max-Age option in the notification message. If no update

1866 is received within this period, the Subscriber SHOULD invalidate the last received value and the

1867 Subscriber SHOULD behave according to manufacturer or application specific requirements that are not

1868 part of this specification.

1869 For WebHook subscriptions performed with a MaC {lifetime} SHOULD be larger as the configured

1870 heartbeat on the device.

1871 If the Subscriber has configured a correlation identifier (cid) then the notification message SHALL

1872 contain the same {cid} as string in case of (D)TLS without OSCORE.


-----

**WebHook notification to Recipient URI (point-callback-url)**


**REQ:**
PUT coaps://{point-callback-url} (Content-Format: application/json (50), Max-Age (900))
**Payload:**
{ "cid": "<cid>", "value": <value> }

**RES:**
2.04 CHANGED


1873

1874 Notification events SHALL use the code inside the protected OSCORE message. In OSCORE messages

1875 the correlation identifier (cid) is moved from payload into the CoAP header as described in [RFC8613]

1876 (cid=kid=OSCORE Sender-ID) in order to avoid duplicating message content.


**OSCORE (unicast) notification to Recipient URI (point-callback-url)**


**REQ:**
POST coap://{point-callback-url}
(Content-Format: application/json (50), Max-Age (900), OSCORE (code (PUT), kid (<cid>), kid_context
(<contextID>)))
**Payload:**
{ "value": <value> }


1877

1878 Notification events MAY be published via IP multicast communication. The multicast address and the

1879 messaging-path structure are configured by the MaC with the WebHook subscription. The CoAP

1880 [RFC7252] message fields SHALL be protected by OSCORE [RFC8613].

**OSCORE (multicast) notification to Recipient URI (point-callback-url)**

**REQ:**
POST coap://{ipv6-multicast}/{messaging-path}
(Content-Format: application/json (50), Max-Age (900), OSCORE (code (PUT), kid (<cid>), kid_context
(<contextID>)))
**Payload:**
{ "value": <value> }


-----

1881 **3** **Security**

1882 **3.1** **Introduction**

1883 The following clauses describe a common approach in enabling a unified, multi-vendor building
1884 automation solution meeting the technical requirements for a [62443-3-3] security Level 3 compliant

1885 installation. However, it remains in the responsibility of the network administrator to decide which

1886 security level an installation needs and which infrastructure is needed to reach the security level

1887 (e.g., LDevID, a local Registrar/Domain CA or a local KDC etc.).

1888 An installation involves many parties for successful operation of a building automation system. Each

1889 party has a specific role in managing an installation. There are the following roles relevant to security

1890 management in an installation:

1891 - manufacturers of KNX IoT devices,

1892 - network administrators who are responsible for secure operation of the overall network

1893 infrastructure,

1894 - system integrators who customize KNX IoT devices, integrate them into an installation and perform

1895 commissioning,

1896 - facility managers who monitor the system during their normal operation and respond to alarms,

1897 - and service technicians who are responsible for maintaining and repairing the installation.

1898 Successful function of an installation is only possible when KNX IoT devices are properly commissioned,

1899 operated and maintained. Access scopes have been defined with these roles in mind, however, the

1900 mapping of roles and permissions to access scopes are out-of-scope of this document. Another key aspect

1901 that this security specification brings forward is the need to strengthen the trust relationship between the

1902 manufacturer and the operator by trusting the manufacturer device certificate IDevID (Initial Device ID).

1903 The solution can be deployed on top of any IP network deployment, providing uniform communication

1904 infrastructure independent from the underlying networking technologies (e.g., Ethernet, Wi-Fi, or a

1905 Thread-based IEEE 802.15.4 network). At the transport level, a security zone concept based on IPv6

1906 network segments (ULA prefix) and X.509 certificates can be configured that reflect diversely

1907 administered systems. A KNX IoT device maybe member of multiple security zones. On top of that, the

1908 application-level authorization of the Resource model limits the access scope of what a KNX IoT device

1909 is entitled to do within the scope of a single security zone. The following clauses describe a PAKE

1910 (Password Authenticated Key Exchange) and X.509 variants of operational device certificate (LDevID)

1911 enrollment procedures:

1912 - Simple Enrollment (Pull Certificate): A user with an on-premises MaC configures Registrar settings

1913 on a KNX IoT device. Subsequent the KNX IoT device enrolls automatically the LDevID with a

1914 Registrar with standard [EST-CoAPS] protocol. The resulting LDevID has a finite lifetime.

1915 - Enrollment with MaC (Push Certificate): A user with an on-premises MaC configures the KNX IoT

1916 device LDevID. This enrollment procedure is usually used if the network infrastructure does not

1917 provide a Registrar service. Hence, the LDevID most probably has an infinite lifetime.

1918 - Authentication code based enrollment: A user provides out-of-band a setup key (e.g., QR code, NFC

1919 etc.) that is known by all involved peers. The resulting secure session between peers is used for

1920 authentication and access token configuration.


-----

1921 **3.2** **Device Identity Enrollment**

1922 **3.2.1** **Common Requirements**

1923 When the new device is turned on it looks for networks that are open for device enrollment. Once a

1924 network is discovered the device is ready for the enrollment process. A KNX IoT device MAY

1925 implements the simple enrollment concept as defined in “EST over secure CoAP” [EST-CoAPS].

1926 However, not all KNX IoT devices are capable of performing simple enrollment, therefore, a KNX IoT

1927 device SHALL support at least the PAKE method (see clause 3.6.2).

1928 The following sequence diagram and clauses describe the general device identity enrollment flow of a
1929 new device that wants to join a network. Before a device can join a network (security zone) it SHALL be
1930 authenticated, and MAY be provisioned with a domain CA Trust Anchor and an operational device
1931 certificate. The process involves the following steps:

1932 - Device Authentication,

1933 - Domain CA Trust Anchor Provisioning,

1934 - a MaC (maybe) triggers the device to start the Operational Device Certificate (LDevID) Enrollment.

1935

**Registrar**

**MaC** **device**

**Domain CA**

**KNX IoT Device**

Device authentication
w/ password (PASE) or

Trust Anchor Provisioning (trusts Registrar/MaC) w/ IDevID (TOFU)

/auth/crts

Trigger simple enrollment

/a/sen

Operational Device

Certificate signing request (CSR) Certificate Enrollment

/.well-known/est/crts (Simple Enrollment)

Request trusted CA certificates

/.well-known/est/sen

1936

1937 **Figure 18 – Device Identity Enrollment**

|Col1|Col2|Trust Anchor Provisioning (trusts Registrar/MaC)|Device authentication<br>w/ password (PASE) or<br>w/ IDevID (TOFU)<br>/auth/crts|
|---|---|---|---|
|||Trigger simple enrollment|/a/sen|
|Request trusted CA certificates<br>Certificate signing request(CSR)<br>/.well-known/est/crts<br>/.well-known/est/sen<br>Operational Device<br>Certificate Enrollment<br>(Simple Enrollment)|Request trusted CA certificates<br>Certificate signing request(CSR)<br>/.well-known/est/crts<br>/.well-known/est/sen<br>Operational Device<br>Certificate Enrollment<br>(Simple Enrollment)|Request trusted CA certificates<br>Certificate signing request(CSR)<br>/.well-known/est/crts<br>/.well-known/est/sen<br>Operational Device<br>Certificate Enrollment<br>(Simple Enrollment)|Request trusted CA certificates<br>Certificate signing request(CSR)<br>/.well-known/est/crts<br>/.well-known/est/sen<br>Operational Device<br>Certificate Enrollment<br>(Simple Enrollment)|


-----

1938 **3.2.2** **Device Authentication**

1939 In the first step a secure channel between a KNX IoT device and the Registrar SHALL be established.

1940 This can be initiated by a MaC/Registrar (PUSH with PAKE) or by the device with simple enrollment

1941 (PULL).

1942 For the simple enrollment, the KNX IoT device without LDevID SHALL use the IDevID as a client

1943 certificate for the mutual authenticated (D)TLS session with the Registrar. IDevID is a factory-imprinted

1944 certificate and serves as an initial proof-of-identity. If the Registrar is not accessible in the local network

1945 then the device MAY uses a Proxy acting as a relay. The proxy function will vary based on L2

1946 technology. For Thread-based devices, it might be (for instance) a border router. For wired Ethernet it

1947 might be either null or the switch. Hence, KNX IoT devices that support simple enrollment SHALL

1948 support brski-proxy and brski-registrar DNS-SD service names as defined in [RFC8995] clause 8.6 for

1949 Registrar discovery. The (D)TLS handshake SHALL perform mutual authentication based on the device

1950 manufacturer and Registrar certificates. The device lacks yet the domain CA to verify the Registrar

1951 certificate, therefore it SHALL provisionally accepts the Registrar certificate to complete the (D)TLS

1952 handshake. At this stage, the Registrar MAY decide to not continue further with the process if the KNX

1953 IoT device is not authorized to join the security zone (e.g., verification of the device Manufacturer

1954 certificate failed).

1955 **3.2.3** **Domain CA Provisioning**

1956 A typical KNX IoT device contains no pre-configured operational trusts (CA certificates in trust list) prior

1957 to first commissioning. In the second step, the Registrar configures the domain CA certificate on the

1958 device. In KNX IoT the Domain CA is an operational Trust Anchor that:

1959 - issues operational device certificates (LDevID) for a particular KNX IoT device and certifies the

1960 ownership of a public key by the named subject of the KNX IoT device certificate to a security zone

1961 or rather an installation domain.

1962 - might be a local service entity such as a part of a MaC or is a remote service entity from a

1963 manufacturer or enterprise network.

1964 **3.2.4** **Operational Device Certificate Enrollment (Pull Certificate)**

1965 **3.2.4.1** **Requirements**

1966 The simple enrollment (PULL) requires that the new KNX IoT device first discovers the Registrar either

1967 by using DNS, mDNS, or the KNX IoT device has a configuration setting where to find the Registrar.

1968 In the next step, the KNX IoT device sends a Certificate Signing Request (CSR) to the Registar.

1969 [RFC5967] defines the MANDATORY format for a CSR.

1970 A CSR MAY include all of the key details of the requested certificate such as subject, organization, state.

1971 The CSR SHALL include the specific subject distinguished name from the manufacturer device

1972 certificate (IDevID) as well as the public key of the certificate (LDevID) to get signed. The privat key

1973 SHALL NOT leave the device at any time, and SHALL NOT be readable via MaC or any other (remote)

1974 communication connection.

1975 After sending the CSR, the Registrar MAY decide not to continue further with the process if the new

1976 KNX IoT device cannot be authorized automatically. The Registrar receiving this CSR SHOULD validate

1977 the proof-of-identity and then, check the subject distinguished name included in the CSR with the

1978 manufacturer device certificate (IDevID). The CSR only gets signed by the Trust Anchor if all checks

1979 were successful.

1980 A successful response SHALL be a certs-only [CMC] Simple PKI Response (PKCS#7), as defined in

1981 [RFC5273]. The authorization at the Registrar is deployment specific and may need manual confirmation

1982 from a network administrator. As soon as the new KNX IoT device is authorized to join the domain then

1983 the Registrar returns the LDevID to the KNX IoT device. The returned LDevID SHALL be a security

1984 zone (e.g., installation domain) specific [X.509] device certificate.


-----

1985 The enrollment process for a new LDevID is based on EST (Enrollment over Secure Transport) [EST
1986 CoAPS]. Devices MAY re-enroll via [EST-CoAPS] at any time prior to certificate expiration but SHALL

1987 re-enroll with their IDevID after certificate expiration.

1988 **3.2.4.2** **LDevID Simple Enrollment Command (a/sen)**

1989 A client MAY starts the simple enrollment, the KNX IoT device SHALL return a response with CoAP

1990 response code 2.04 CHANGED if the command was accepted.

1991 Table 42 defines the resource for triggering the LDevID enrollment with [EST-CoAPS] and a device

1992 MANDATORY (‘M’) or OPTIONAL (‘O’, for optional) support.

1993 **Table 42 - LDevID enrollment resource**

**Resource** **Resource** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types (rt)**

a/sen NA cbor POST M Req: Content-Format: Starts the X.509
application/cbor certificate
Payload: enrollment.
{ 2: "renew" }
Res: 2.04 CHANGED

1994

1995 **3.2.4.3** **LDevID Simple Enrollment Resource Object**

1996 Table 43 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) members and defines JSON keys and

1997 the CBOR mapping for CoAP the request object to a/sen:

1998 **Table 43 - LDevID Simple Enrollment Resource Object members**

**JSON Key** **CBOR** **CBOR Type** **Support** **Name**

**Key**

"cmd" 2 text string **M** Command for triggering or stopping the
LDevID simple enrollment.
Enum: renew, stop

1999

2000 **3.2.5** **Management Client as Registrar (Push Certificate)**

2001 When a Registrar is not available in the installation, a Management Client (MaC) MAY serve as this

2002 function. Once a Registrar becomes available in the installation, devices will enroll with the IDevID as

2003 described above. For transition and mobility purposes, KNX IoT devices may continue to use any actively

2004 enrolled certificate for communication until that certificate expires or is removed. Devices already using

2005 an LDevID SHALL NOT make use of new LDevIDs issued from different Registrars until configured to

2006 do so, so as to avoid confusion in certificate selection.

2007 In the [EST-CoAPS] certificate enrollment flow the KNX IoT device is client and sends requests to the

2008 Registrar. In a PUSH enrollment the roles are changed. The MaC always acts as a client and controls the

2009 communication flow with KNX IoT devices and sends request to the KNX IoT device. The LDevID

2010 configuration is an additional step in the access token enrollment (see clause 3.6 “OSCORE Application

2011 Layer Security”). A KNX IoT device in default configuration state SHALL accept client (D)TLS sessions

2012 provisionally until the MaC has configured a domain CA.

|Resource<br>path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|a/sen|NA|cbor|POST|M|Req: Content-Format:<br>application/cbor<br>Payload:<br>{ 2: "renew" }<br>Res: 2.04 CHANGED|Starts the X.509<br>certificate<br>enrollment.|

|JSON Key|CBOR<br>Key|CBOR Type|Support|Name|
|---|---|---|---|---|
|"cmd"|2|text string|**M **|Command for triggering or stopping the<br>LDevID simple enrollment.<br>Enum: renew, stop|


-----

2013 The KNX IoT device MAY begin generation of a key pair as a result of the CSR request. If the KNX IoT

2014 device cannot immediately respond due to time required to generate a key pair, the KNX IoT device

2015 SHALL return "5.03 Service Unavailable" but uses the Max-Age option to indicate the number of

2016 seconds after which to retry.

2017 Constrained KNX IoT devices MAY do not have enough power and entropy source to generate a random

2018 private key. In this case a tool can generate a key pair and write the private key and the LDevID

2019 certificate to the device (“auth/skg”). The protocol design for simple enrollment and server-side key

2020 generation reuses the same payload format as defined in [EST-CoAPS] clause 5.3.

2021 The KNX IoT device SHALL use for (D)TLS server authentication the LDevID for requests on “/.well
2022 known/knx/idevid” and the IDevID if the KNX IoT device is in default configuration state. For requests

2023 on “/.well-known/knx/LDevID” the KNX IoT device SHALL always use the IDevID for (D)TLS server

2024 authentication.

2025 Table 44 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) LDevID configuration functions on a

2026 KNX IoT device:

2027 **Table 44 – Configuration functions**

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth||link-<br>format|GET|**M **|Content-Format:<br>application/link-format<br>Payload:<br></auth/at/5>;ct=60,<br></auth/at/6>;ct=60,<br></auth/crts/2>;ct=60,<br></auth/skg>;ct=280|Response contains a<br>list with points that<br>belongs to the auth<br>functional block incl.<br>device trust list and<br>access control list (see<br>Table 45, Table 47, <br>Table 44).|
|/.well-<br>known/knx/<br>idevid|:dpt.x509|pkcs7-<br>mime;<br>smime-<br>type=cert<br>s-only|GET|O|Res: Content-Format:<br>application/pkcs7-<br>mime; smime-<br>type=certs-only<br>Payload: { X.509<br>binary DER encoded }|X.509 binary DER<br>encoded manufacturer<br>device certificate. The<br>server SHALL use the<br>IDevID for (D)TLS<br>sessions in default<br>configuration state<br>(server certificate). If<br>the server has already a<br>configured LDevID<br>(operational device<br>certificate) then the<br>server SHALL use the<br>LDevID for (D)TLS<br>sessions (server<br>certificate).<br>Resource path is<br>MANDATORY if the<br>device supports<br>(D)TLS.|


-----

auth/skg NA /pkcs7- POST O Req: Content-Format: With server side key
mime; application/pkcs7- generation a tool can
smime- mime; smime- write the private key
type=serv type=server- and a certificate to the
er- generated-key device ([PKCS#7] and
generate Payload: { PKCS#7, [PKCS#8] format). The
d-key PKCS#8 } request SHALL

generate a 4.04 (Not
Found) if the device
supports only simple
enrollment (sen).

2028

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|/.well-<br>known/knx/<br>ldevid|:dpt.x509|pkcs7-<br>mime;<br>smime-<br>type=cert<br>s-only|GET|O|Res: Content-Format:<br>application/pkcs7-<br>mime; smime-<br>type=certs-only<br>Payload: { X.509<br>binary DER encoded }|X.509 binary DER<br>encoded operational<br>device certificate. If<br>supported then the<br>server SHALL use the<br>IDevID (manufacturer<br>device certificate) for<br>the (D)TLS session<br>(server certificate).<br>Resource path is<br>MANDATORY if the<br>device supports<br>(D)TLS.|
|a/sen|NA|cbor|POST|O|Res: Content-Format:<br>application/json<br>Payload:<br>{ 2: "renew" }|Triggers simple LDevID<br>enrollment.<br>MANDATORY if simple<br>enrollment is supported.|
|auth/sen|NA|pkcs10|GET|O|Res: Content-Format:<br>application/pkcs10<br>Payload: { PKCS#10 }|The simple enrollment<br>(sen) request is used to<br>read a [PKCS#10]<br>(including proof-of-<br>possession) certificate<br>signing request (CSR)<br>from a KNX IoT device.<br>The request SHALL<br>generate a 4.04 (Not<br>Found) if the device<br>supports only server<br>side key generation<br>(skg).|
|auth/sen|NA|pkcs7-<br>mime;<br>smime-<br>type=cert<br>s-only|POST|O|Req: Content-Format:<br>application/pkcs7-<br>mime; smime-<br>type=certs-only<br>Payload: { PKCS#7 }|The request is used to<br>write a device certificate<br>signing response<br>(PKCS#7) to a KNX IoT<br>device. The request<br>SHALL generate a 4.04<br>(Not Found) if the<br>device supports only<br>server side key<br>generation (skg).|
|auth/skg|NA|/pkcs7-<br>mime;<br>smime-<br>type=serv<br>er-<br>generate<br>d-key|POST|O|Req: Content-Format:<br>application/pkcs7-<br>mime; smime-<br>type=server-<br>generated-key<br>Payload: { PKCS#7,<br>PKCS#8 }|With server side key<br>generation a tool can<br>write the private key<br>and a certificate to the<br>device ([PKCS#7] and<br>[PKCS#8] format). The<br>request SHALL<br>generate a 4.04 (Not<br>Found) if the device<br>supports only simple<br>enrollment (sen).|


-----

2029 **3.3** **Device Identity Certificates**

2030 **3.3.1** **Manufacturer Device Certificates (IDevID)**

2031 The IDevID is used for bootstrapping when the new KNX IoT device is not initialized. The IDevID

2032 [802.1AR] manufacturer device certificate is an assertion of the KNX IoT device manufacturer as to the

2033 device’s unique identity. The IDevID subject field SHALL contain the “serialNumber” attribute with the

2034 device’s unique KNX serial number ([802.1AR] clause 4.1.2.4).

2035 It is RECOMMENDED that the manufacturer device certificate is permanently stored in a security

2036 module. The IDevID is only used for commissioning until certificate bootstrapping has completed and

2037 gets replaced by the LDevID for normal runtime communication. Hence, the IDevID SHOULD NOT be

2038 used for proof-of-identity after successful LDevID certificate bootstrapping but SHALL be reactivated

2039 after a device reset to a default configuration state. KNX IoT devices MAY make use of the IDevID to

2040 create additional identities for other purposes, for example, for OSCORE access token configuration in

2041 smaller and non-critical installations if no LDevID has been configured.

2042 IDevIDs SHALL have indefinite expiration dates, and hence SHALL use the GeneralizedTime value

2043 [X.509]. Validating entities SHOULD ignore validity period information in the [X.509] certificate. This

2044 ensures that KNX IoT device authentication can always be verified during [X.509] path validation. The

2045 Registrar and its network administrator are responsible for determining the trustworthiness of an IDevID

2046 and its signer. A manufacturer MAY include a URL that points to a certificate revocation list (CRL) in

2047 the signing certificate for the device. A local network (Registrar) SHOULD check the CRL

2048 (e.g., manufacturer device CRL published in the Internet or local configuration) prior to registering a

2049 device.

2050 The IDevID X.509 certificate SHALL contain the MANDATORY fields as specified in [802.1AR],

2051 including:

2052 - tbs certificate (To Be Signed)

2053 - subjectPublicKeyInfo

2054 - issuer; O=[Manufacturer] CN=[Manufacturer CA]

2055 - subject; O=[Vendor] CN=[Product ID] serialNumber=[KNX serial number]

2056 - validity; Not After : Dec 31 23:59:59 9999 GMT (GeneralizedTime [X.509])

2057 - version; SHALL be version 3

2058 - serialNumber; certificate serial number

2059 - signature

2060 - signatureAlgorithm; SHALL be ecdsa-with-SHA256 and secp256r1

2061 - signatureValue

2062 **3.3.2** **Operational Device Certificates (LDevID)**

2063 The LDevID [802.1AR] operational device certificate is a [X.509] certificate for a particular KNX IoT

2064 device that is, especially in large installations, in the responsibility of the network administrator. These

2065 certificates are used to identify the device to the network. They are also used to establish [RFC7515]

2066 tokens, as required, and MAY be used for different purposes (e.g., at link layer, network layer or

2067 application layer) for application-layer authentication.

2068 An LDevID contains authentication information in the Subject Alternative Name (SAN), to associate it to

2069 a particular security zone. Hence [X.509] certificates SHALL NOT contain multiple security zones

2070 (e.g., more than one rfc822Name field). In addition, the wildcard character ('*') is neither allowed in the

2071 Subject Alternative Name extension, nor in the common name. The LDevID subject field SHALL contain

2072 the “serialNumber” attribute from the IDevID with the device’s unique KNX serial number. This serial

2073 number SHOULD be printed on the device housing (e.g., in a QR code) for visual validation and can be

2074 discovered, for example, with /.well-known/core?ep=urn:knx:sn.12345678 or with DNS-SD (see clause

2075 2.6.1 “Discovery”).


-----

2076 How an operational device certificate is issued depends on the certificate bootstrapping method, and on

2077 the certificate lifecycle management during operation. The KNX IoT device SHALL have a new key pair

2078 before requesting a new operational device certificate. The KNX IoT device either generates the key pair

2079 locally if possible or obtains the key pair from a trusted Registrar or MaC.

2080 All stored operational device certificates and its associated private keys SHALL be deleted on device

2081 reset to default state of the KNX IoT device. LDevIDs are expected to be periodically updated. The length

2082 of time a certificate is valid is up to the deployment. A recommended certificate lifetime is one year.

2083 However, if the deployment does not have mature processes to update certificates, then the lifetime MAY

2084 be infinite. Vice versa, if the deployment does not have a mature process to manage revocation of

2085 certificates, then the lifetime MAY be significantly less than one year (e.g., 90 days). Operational

2086 certificate Trust Anchors MAY contain a pointer to a CRL. However, KNX IoT devices are not expected

2087 to support OCSP.

2088 The LDevID X.509 certificate SHALL contain the MANDATORY fields as specified in [X.509]

2089 clause 4.1, including:

2090 - tbs certificate (To Be Signed)

2091 - subjectPublicKeyInfo

2092 - issuer;

2093 - subject; O=[Vendor] CN=[Product ID] serialNumber=[ KNX serial number]

2094 - validity

2095 - version; SHALL be version 3

2096 - serialNumber; certificate serial number

2097 - signature

2098 - signatureAlgorithm; see clause 3.4.2 “Device Certificate Cipher Suites”

2099 - signatureValue

2100 **3.4** **Certificate Validation**

2101 **3.4.1** **General Requirements**

2102 KNX IoT devices SHALL follow the procedure defined in RFC 5280 [X.509] to verify certificates.

2103 As a summary of the procedure defined in RFC5280:

2104 - Certificate verifiers SHALL reject certificates that contain one or more unsupported critical

2105 extensions.

2106 - Any extension not listed by name within this document SHOULD NOT be included within a

2107 compliant certificate and, if included, SHALL NOT be marked critical.

2108 - In an authentication exchange, the KNX IoT device SHALL supply a complete and valid chain

2109 comprising its own certificate and any intermediate CA certificate between the KNX IoT device and

2110 the Root CA.

2111 KNX IoT devices use [X.509] certificates for mutual authentication for device-to-device communication

2112 based on (D)TLS. Server identities SHALL be checked as described in [RFC2818] clause 3.1. If a

2113 security zone is configured, then the client and server side SHALL check the [X.509] subjectAltName

2114 (e.g., rfc822Name) field in the LDevID with the settings in the KNX IoT device Access Control List.

2115 A certificate policy applies to the complete certification process, from root down to KNX IoT device, and

2116 this is reflected in the certificate by inclusion of the policy OID in all the certificates in the chain. Hence,

2117 policy-mapping is not supported, and certificates containing policy mappings SHALL be rejected.

2118 Therefore, issuers SHOULD NOT include policy qualifiers in operational device certificates. However,

2119 verifiers SHOULD NOT reject certificates containing policy qualifiers unless there are other reasons to

2120 do so.


-----

2121 To defend against brute-force attacks, the KNX IoT device SHALL limit (D)TLS session establishment

2122 retries after a predefined number of consecutive invalid access attempts, e.g., wrong certificate, then the

2123 KNX IoT device SHALL block further attempts. (D)TLS session establishment attempts SHOULD be

2124 limited to at most one attempt per 3000 seconds on average in 24 hours.

2125 **3.4.2** **Device Certificate Cipher Suites**

2126 Elliptic curve cryptography (ECC [RFC4492]) provides the cryptographic basis for secure

2127 communication with resource constrained KNX IoT devices due to its small key size and comparably low

2128 arithmetic requirements. All KNX IoT devices supporting identity certificates [X.509] SHALL support

2129 the following cipher suite for communication: TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8

2130 [RFC7251].

2131 Specifically, the device identity certificate [X.509] will use ECC NIST P-256 (secp256r1 or prime256v1)

2132 [RFC4492]. The signer of the certificate SHALL also use NIST P-256 (secp256r1) and ecdsa-with
2133 SHA256 (ECDSA with SHA256).

2134 Cryptographic suites SHALL be updated from time to time. As such, future releases of this specification

2135 may require more than one algorithm for both backward compatibility and improved security. Algorithms

2136 may also be deprecated.

2137 **3.5** **Device Access Control**

2138 **3.5.1** **General Requirements**

2139 Complementing the core principles of the defense-in-depth protection strategy and the overarching

2140 principles of information security, access management itself has a series of core guiding principles, as

2141 follows:

2142 - Categorization and classification: Clearly categorize and value all data (see clause 3.5.3 “Access

2143 Scope”).

2144 - Least privilege: Provide the least amount of access necessary for a given entity to complete their

2145 system role.

2146 - Need to know: Provide access to systems and information only where there is a need for the

2147 Recipient of such access to have it.

2148 - Controlled access: Define procedures to monitor, enable and disable access methods, and enforce

2149 security policy at all access points.

2150 Effectively applying these principles to a KNX IoT System throughout processes, networks and users in

2151 the system will ensure that access related risks are appropriately controlled, allowing authorized access

2152 when required and unauthorized access to be prevented.

2153 The following clauses describe how initial access control privileges for a KNX IoT device are enrolled

2154 during commissioning phase and how a KNX IoT device grants access to resources by verifying requests

2155 against the device access control list (configured access tokens) and trust list.

2156 **3.5.2** **Trust List Resource (auth/certs)**

2157 **3.5.2.1** **General Requirements**

2158 A trust list is a list of device certificates or CA certificates that are trusted for authentication and is a

2159 MANDATORY functionality of KNX IoT devices if the device supports (D)TLS. The KNX IoT device

2160 SHALL reject connections from peers whose device certificate or CA certificate is not in the trust list or

2161 if the certificate is expired. Entries in the trust list will be added and removed as an explicit administrative

2162 action reflecting changes in trust relationships in conjunction with the access control list, in other words,

2163 only a MaC with admin (“if.sec”) rights can configure the trust list.

2164 A KNX IoT device SHALL support multiple MaC or Registrars with admin rights. Hence, the trust list

2165 SHALL support the configuration of at least 3 CA certificates (e.g., MaC, Registrar and KDC).


-----

2166 A MaC SHALL write certificates in binary DER encoded [X.509] format to the KNX IoT device trust

2167 list. The [PKCS#7] defines a container format that includes just the public certificate or may include an

2168 entire certificate chain or a signature of the encapsulated enveloped data structure. The [PKCS#7]

2169 SHALL be used to add new trust relations to other peers.

2170 **Table 45 – KNX IoT Trust List access**

**Resource path Resource** **Format** **Method** **Support Request/Response** **Notes**

**Types (rt)**

auth/crts NA applicatio GET O Content-Format: Collection of configured
n/link- application/link- X.509 certificate
format format thumbprints.

Payload:
</auth/crts/kid>

auth/crts NA pkcs7- POST O Req: Content- Configures a PKCS#7
mime Format: list according to

application/pkcs7- [RFC7030] clause 4.1.3
mime; smimetype=certs-only
Payload: { PKCS#7
}

auth/crts/{kid} NA NA DELETE O Res: 2.02 Delete a configured
DELETED token from a KNX IoT

device

2171

2172 **3.5.3** **Access Scope**

2173 Access Scopes are the permission grants that client applications require for authorization and use of Points

2174 on a server device. A Point SHALL be assigned to at least one access scope. The access rights of a client

2175 are limited to the granted scopes in the access token or in the device access control list (e.g., for OSCORE).

2176 The number of scope identifiers (the granularity) supported by the server device is device specific and

2177 generally matches the capabilities of the server device and the expected kinds of data that it contains.

2178 However, KNX IoT devices (server) SHALL support the predefined scope meanings and identifiers and

2179 for interoperability it is RECOMMENDED to use the predefined scope identifiers whenever possible.

2180 The following table defines the default KNX IoT access scopes. Scopes are mapped to one or more

2181 interfaces (if). The interface definition and the allowed CoAP Methods for a particular scope are defined in

2182 clause 2.5.3 “Interface Types (if)”:

2183 **Table 46 – KNX IoT Access scopes**

|Resource path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth/crts|NA|applicatio<br>n/link-<br>format|GET|O|Content-Format:<br>application/link-<br>format<br>Payload:<br></auth/crts/kid>|Collection of configured<br>X.509 certificate<br>thumbprints.|
|auth/crts|NA|pkcs7-<br>mime|POST|O|Req: Content-<br>Format:<br>application/pkcs7-<br>mime; smime-<br>type=certs-only<br>Payload: { PKCS#7<br>}|Configures a PKCS#7<br>list according to<br>[RFC7030] clause 4.1.3|
|auth/crts/{kid}|NA|NA|DELETE|O|Res: 2.02<br>DELETED|Delete a configured<br>token from a KNX IoT<br>device|

|Scope|CBOR Type|if|Description|
|---|---|---|---|
|if.i|text string|if.i|Write and command runtime input datapoint|
|if.o|text string|if.o|Read and subscribe runtime output datapoint|
|if.g.s|text string|if.g.s|Group communication (S-Mode) runtime interworking (input<br>and output) for all_Group Addresses_ (ga)|
|<ga>|unsigned|if.g.s|Group communication (S-Mode) runtime interworking (input<br>and output) for a particular_Group Address_ (ga)|
|if.p|text string|if.p, if.ll|Adjust (write, read) parameter Datapoint incl. metadata|


-----

|Scope|CBOR Type|if|Description|
|---|---|---|---|
|if.d|text string|if.d, if.ll|Read diagnostic datapoint incl. metadata|
|if.c|text string|if.p, if.d, if.ll|Configure device (commissioning) functionality or Function<br>Point Tables.|
|if.sec|text string|if.sec, if.swu|Configuration (read and write) of security incl. metadata and<br>authorization related data.|
|if.swu|text string|if.swu|Software update (push and pull) related data incl, metadata.|


2184

2185 **3.5.4** **Device Access Control List Resource (auth/at)**

2186 **3.5.4.1** **Common requirements**

2187 The device access control list is a MANDATORY functionality of KNX IoT device and specifies which

2188 entity (user, application or device) have access. The list contains permissions, which controls access to

2189 KNX IoT device resources (Points) and what operations are allowed on given resources (GET, PUT etc.).

2190 Each permission in the device access control list identifies an authorized entity and specifies the access
2191 rights for that entity (e.g., allowed or denied). It is up to the system integrator in collaboration with the

2192 network administrator to define permission rules for an entity. As a precondition for any access control

2193 decisions, the KNX IoT device SHALL authenticate and authorize the peer by verifying its [X.509]

2194 certificate and/or pre-shared key (OSCORE). Verification includes that

2195 - Pre-shared key SHALL be configured in the device access control list (access token).

2196 - Pre-shared key SHALL have the permission rights to access the respective resource (access scope).

2197 - The operational device certificate is correctly signed by a trusted CA (see clause 3.4). The trusted

2198 CA certificate SHALL be configured in the device trust list.

2199 - The peer’s identity in the [X.509] operational device certificate (e.g., Subject and/or SubjectAltName

2200 name) matches an entity that is authorized to access the required resources. The entity SHALL be

2201 validated with the corresponding access token (access scope) in the access control list.

2202 If a security zone has not its own exclusive CA certificate (e.g., intermediate CA) than the KNX IoT

2203 device access control list SHALL be added with settings in the subject (sub) attribute equivalent to name

2204 constraints defined in [X.509] clause 4.2.1.10.

2205 Devices that cannot reliably keep track of time SHALL accept all credentials even if the credential

2206 lifetime has expired. This requirement MAY change in a future specification but currently no expiration

2207 time can be configured for pre-shared key access tokens (OSCORE). It is in the responsibility of the KDC

2208 to rotate and delete access tokens with an appropriate interval, and the overlap of active and new pre
2209 shared keys.

2210 Group communication credential configurations SHALL contain only Group Address <ga> scopes in the

2211 access token. A combination with other scopes such as “if.p” etc. is not possible since incoming and

2212 outgoing communications use the same credentials. For example, devices in the following figure with the

2213 access token ID 221, 212, 221 and 241 SHALL accept incoming and outgoing messages on configured

2214 _Group Addresses._


-----

knx://urn:knx:ia.23 knx://urn:knx:ia.24
2215

2216 **Figure 19 – Access Token Configuration Example**

2217 The MaC SHALL configure the audience in the access token on KNX IoT devices for outgoing unicast

2218 requests. Figure 19 depicts a KNX IoT device that subscribes (Subscriber) to /.knx and the publishing

2219 device (Publisher) sends all communication messages to the Subscriber since the scope is configured with

2220 “if.g.s”. If the access scope on the Publisher is limited to a set of _Group Addresses then the Publisher_

2221 SHALL only send notifications of the configured Group Addresses.

2222 The device destination address in audience SHALL be the same as in the Publisher or Recipient Function

2223 Point Table.

2224 Table 47 specifies and example of the MANDATORY (‘M’) or OPTIONAL (‘O’) token configuration

2225 resources on a KNX IoT device.

2226 **Table 47 - Token configuration resources on a KNX IoT device (EXAMPLE)**

|Resource<br>path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth/at|NA|cbor|POST|O|Req : Content-Format:<br>application/cbor<br>Payload:<br>[{<br>"id": "BC6BLLhk56",<br>"scope": ["<if.scope>"],<br>"sub": "<.inst1.local>",<br>"profile": "coap_dtls",<br>"cnf": {<br>"kid": "<trust list<br>[X.509]fingerprint>"<br>}}]|Credentials<br>configuration for<br>KNX IoT device<br>Point access with a<br>[X.509] certificate.<br>For example, a<br>device (Registrar or<br>KDC) can configure<br>security credentials<br>(“if.sec”) based on<br>its X.509 certificate.|


-----

|Resource<br>path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth/at|NA|applicatio<br>n/link-<br>format|GET|**M **|Content-Format:<br>application/link-format<br>Payload:<br></auth/at/12345>;ct=50|Reads a collection<br>of all configured<br>tokens from a KNX<br>IoT device|
|auth/at/{to<br>ken-id}|NA|cbor|GET|**M **|Res : 2.05 CONTENT<br>Content-Format:<br>application/cbor<br>Payload:<br>{<br>"id": "BC6BLLhk56",<br>"scope":<br>["<PointInterface>"],<br>"sub": "<.inst1.local>",<br>"profile": "x.509",<br>"cnf": {<br>"kid": "<trust list<br>[X.509]fingerprint>"<br>}}|Reads a specific<br>token from a KNX<br>IoT device|
|auth/at|NA|NA|DELETE|**M **|Res: 2.02 DELETED|Delete all configured<br>tokens from a KNX<br>IoT device|
|auth/at/{to<br>ken-id}|NA|NA|DELETE|**M **|Res: 2.02 DELETED|Delete a configured<br>token from a KNX<br>IoT device|


2227

2228 **3.5.4.2** **Access Token Resource Object**

2229 For KNX IoT access rights configuration the CWT (CBOR Web Token) format [RFC8392] is used as

2230 defined in [ACE-OAuth]. The following fields are MANDATORY for each access token item:

2231 - id: Token ID for update and deleting an item on a device. The ID SHALL contain only characters as

2232 defined for the URI-Reference in [RFC3986] since the ID is also used in the access token resource

2233 path.

2234 - cnf: Key configuration (either a link to the trust list or OSCORE key settings).

2235 - profile: The token profile defines further MANDATORY members (M).

2236 - scope: Needed for both X.509 certificate and OSCORE.

2237 Table 48 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) access token item members and

2238 names.


-----

2239 **Table 48 – Access token item members**

**JSON Key** **CBOR** **CBOR Type** **Support**

**Key**

“id” 0 text string **M**

unique in an installation.

“cnf” 8 map **M**
of-possession key [RFC 8392]

“osc” 4 map **(M)**
“
Object”)

“kid” 2 text string **(M)**

“nbf" 5 integer O
before)

“sub” 2 text string **(M)**

be restricted) [RFC 8392]

“aud” 3 text string **(M)**

installation.

URL example: "
fqdn>"

“scope” 9 map **M**
“Access Scope
_Addresses._

“profile” 38 unsigned **M**

8392] or,

2240

|JSON Key|CBOR<br>Key|CBOR Type|Support|Name|
|---|---|---|---|---|
|“id”|0|text string|**M **|access token ID (max: 32byte); The ID SHALL<br>be unique on a device and SHOULD be<br>unique in an installation.|
|“cnf”|8|map|**M**|confirmation key; e.g., with a symmetric proof-<br>of-possession key [RFC 8392]|
|“osc”|4|map|**(M)**|OSCORE confirmation key (see clause 3.6.2<br>“OSCORE Key Configuration Resource<br>Object”)|
|“kid”|2|text string|**(M)**|Key Identifier: Acts as an ‘alias’ for the key<br>and MAY be a Link to [X.509] certificate in the<br>Trust List (e.g., x.509 thumbprint)|
|“nbf"|5|integer|O|Token is not valid before a defined time (Not<br>before)|
|“sub”|2|text string|**(M)**|Subject of the access token (used if [X.509]<br>CA cert. is ambiguous, and the SAN SHALL<br>be restricted) [RFC 8392]|
|“aud”|3|text string|**(M)**|The audience claim identifies the destination<br>address to which the access token belongs to.<br>The “aud” is MANDATORY for outgoing<br>unicast request (except for notifications after a<br>subscriptions). “aud” is a link to the Publisher<br>or Recipient Function Point Table.<br>The “installation ID” or “Fabric ID” can be<br>omitted for devices that belong to the same<br>installation.<br>IA example: “<installation/fabric ID>.<IA>”<br>URL example: "coap://<unicast address or<br>fqdn>"|
|“scope”|9|map|**M**|Array of interfaces as defined in clause 3.5.3<br>“Access Scope” [RFC 8392] or a list of_Group_<br>_Addresses_.|
|“profile”|38|unsigned|**M**|access token profile; SHALL be set to<br>1: "coap_dtls" for [X.509] certificates [RFC<br>8392] or,<br>2: "coap_oscore" [OSCORE]|


-----

2241 **3.5.5** **Revocation List**

2242 A revocation list is a blacklist of digital certificates that have been revoked by a trustworthy entity before

2243 their scheduled expiration date. Digital certificates (X.509 certificates) in the revocation list are no longer

2244 trusted. Requests SHALL be declined from devices that use a certificate from the revocation list. Digital

2245 certificates are revoked for many reasons. For example, if a certificate is discovered to be counterfeit, the

2246 Trust Anchor will revoke it and add it to the revocation list of each KNX IoT device in the system. A

2247 common reason for revocation occurs when the owner of the Domain CA no longer owns devices, or the

2248 original certificate being replaced with a different certificate from a new Trust Anchor (e.g., after

2249 commissioning).

2250 The problem with revocation lists, as with all blacklists, is that they are difficult to maintain and are an

2251 inefficient and unreliable method of distributing in real time. Furthermore, the size of the revocation list is

2252 limited especially on constrained devices and, therefore, a revocation list on a KNX IoT device is

2253 RECOMMENDED and if present the list SHOULD be updated only under exceptional circumstances.

2254 The process of updating revocation lists is manufacturer specific and not part of this document.

2255 **3.6** **OSCORE Application Layer Security**

2256 **3.6.1** **General Requirements**

2257 This clause describes the bootstrapping of pre-shared OSCORE keys. OSCORE application layer security

2258 is needed for the following reasons:

2259 - Low-latency communication: (D)TLS can only be used for unicast point-to-point communication but

2260 not for secure multicast group communication (e.g., switch on light group). In addition, (D)TLS

2261 needs a time consuming (on constrained devices) session key establishment before peers can start

2262 communicating. The resulting latency is not acceptable for some applications like lighting.

2263 - Application layer end-to-end security: The (D)TLS security terminates at proxies and message

2264 brokers, making this intermediary node capable of accessing and manipulating any part of the

2265 message payload and metadata.

2266 OSCORE, as defined in this document, uses pre-shared keys to secure the communication between peers

2267 (no session establishment needed). OSCORE protects unicast and multicast CoAP application payload

2268 end-to-end across any intermediary nodes (i.e., proxies and message brokers). Therefore, all KNX IoT

2269 devices SHALL support OSCORE for unicast and for multicast communication.

2270 OSCORE [RFC8613] essentially protects the RESTful interactions (including replay protection), the

2271 request method, the requested resource, the message payload, etc. OSCORE does neither protect the

2272 CoAP messaging layer nor the CoAP token which may change between the resources. OSCORE requires

2273 that all KNX IoT devices, which belong to the same KNX group, establish a shared security context used

2274 to process COSE [RFC8152] (CBOR Object Signing and Encryption) objects. OSCORE uses COSE with

2275 an AEAD [RFC5116] (Authenticated Encryption with Additional Data) algorithm for protecting message

2276 data (encryption) between a client and a server. The CoAP payload SHALL be encrypted in the COSE

2277 object.

2278 The following figure depicts the general workflow for configuring access tokens on a KNX IoT device.

2279 The access token configuration flow includes the following 3 steps:

2280 - The MaC gets a means to authenticate the KNX IoT device. This MAY be an authentication code or

2281 an LDevID after Device Identity Enrollment. If the KNX IoT device has already an LDevID then the

2282 respective Registrar (e.g., MaC) SHALL have “if.sec” access rights which are configured in the

2283 device access control list.

2284 - In case the MaC has just an authentication code than the MaC uses the Password Authenticated

2285 Session Establishment (PASE) for device authentication. Subsequent, the MaC uses a trusted PASE

2286 session for reading the IDevID of the KNX IoT device.


-----

2287 - If supported by both peers then the MaC starts a (D)TLS session and uses the IDevID for

2288 authentication and configures OSCORE Access Tokens for the tool key (“if.sec”) and runtime keys

2289 (“if.s”, “if.p”, “if.d” etc.).

**device**

**MaC** **KNX IoT Device**


(LDevID)


(check password or
(read IDevID)
voucher)

(configure tool key Access Token Configuration

and runtime keys)

2290

2291 **Figure 20 - OSCORE Access Token Configuration**

2292 **3.6.2** **OSCORE Key Configuration Resource Object**

2293 This clause defines how to derive a security context based on a shared master secret and a set of other

2294 parameters, established between all KNX IoT devices which exchange data. The derivation of Sender

2295 Key, Recipient Key, and Common IV SHALL be done according to [RFC8613] clause 3.2. The proof-of
2296 possession key (runtime key) provisioned from the MaC MAY, in case of pre-shared keys, be used

2297 directly as master secret in OSCORE. If OSCORE is used directly with the symmetric proof-of
2298 possession keys as master secret, then the MaC SHALL provision the master secrete (“ms”), the context

2299 ID and the client ID. Additionally, the MaC MAY provision the “hkdf”, “alg” or “salt” parameter. In case

2300 these parameters are omitted, the default values are used as defined in [RFC8613] clause 3.2.

2301 For KNX IoT ACE-OSCORE access rights configuration the CWT format as defined in [ACE-OSCORE]

2302 is used, containing the necessary parameters in the “cnf” claim. Table 49 specifies the MANDATORY

2303 (‘M’) or OPTIONAL (‘O’) members and defines the CBOR mapping for the

2304 OSCORE_Security_Context:

2305 **Table 49 - Members in the ‘cnf’-claim**

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“id”|0|byte string|**M **|OSCORE input material identifier.|
|“version”|1|unsigned|O|OSCORE Version|
|“ms”|2|byte string|**M **|master secret; SHALL be the PSK (32 bytes)|
|“hkdf”|3|unsigned|O|KDF (Key Derivation Function algorithm);<br>Default SHALL be HKDF SHA-256<br>[RFC5869]|
|“alg”|4|unsigned|O|AEAD algorithm; SHALL be set to the value<br>from [RFC8152], the default is AES-CCM-<br>16-64-128 (COSE algorithm encoding: 10)|


-----

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“salt”|5|byte string|O|salt; Default SHALL be an empty byte string|
|“contextId”|6|byte string|O|security context ID (kid_context); The<br>context ID is used to distinguish security<br>contexts on the receiver and is configured in<br>the access token. The context ID SHOULD<br>be a subset of the grpid (see clause 2.5.7)|


2306

2307 The MaC SHALL send a POST request to “auth/at” in order to configure tokens on a KNX IoT device.

2308 The payload SHALL be a CBOR map. The configuration request to the KNX IoT device SHALL be

2309 secured either with CoAP over (D)TLS (if supported by the device) or OSCORE. The scope attribute can

2310 be omitted if all datapoints of the assigned IPv6 multicast address (“serverId”) uses the same access

2311 token. However, if a Group Address is configured with an individual token then scope SHALL be

2312 configured with the Group Address as defined in clause 2.5.9 “S-Mode Messaging Resource (/.knx)”. A

2313 Group Message with a configured security context SHALL be protected by OSCORE for both multicast

2314 and unicast (with and without (D)TLS). Table 50 specifies the MANDATORY (‘M’) OSCORE

2315 configuration resources on a KNX IoT device.

2316 **Table 50 – OSCORE configuration functions (EXAMPLE)**

**Resource** **Resource** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types (rt)**

auth/at NA cbor POST **M** Content-Format: OSCORE
application/json credentials

configuration for

Payload:

knx Group

{ Communication.
"id": "OC5BLLhkAG", However, it is also
"profile": possible to
"coap_oscore",

configure a token

"scope": [<ga>], for a Point
"cnf": { subscription
"osc": { ("scope":
"alg": "AES-CCM-16- ["<PointInterface>"
64-128",

]).

"id": "<kid>",
"ms":
"f9af8….6bd94e6f"
}}}

2317

2318 **3.6.3** **Password Authenticated Access Token Enrollment**

2319 **3.6.3.1** **Introduction**

2320 This clause describes an access token configuration procedure using a shared password as an

2321 authentication code for devices in default configuration state. At the end of the procedure, the KNX IoT

2322 device has received credentials (tool key=”if.sec”) that allow configuration of further access tokens.

|Resource<br>path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth/at|NA|cbor|POST|**M **|Content-Format:<br>application/json<br>Payload:<br>{ <br>"id": "OC5BLLhkAG",<br>"profile":<br>"coap_oscore",<br>"scope": [<ga>],<br>"cnf": {<br>"osc": {<br>"alg": "AES-CCM-16-<br>64-128",<br>"id": "<kid>",<br>"ms":<br>"f9af8….6bd94e6f"<br>}}}|OSCORE<br>credentials<br>configuration for<br>knx Group<br>Communication.<br>However, it is also<br>possible to<br>configure a token<br>for a Point<br>subscription<br>("scope":<br>["<PointInterface>"<br>]).|


-----

2323 PAKE protocols allow for two or more entities to authenticate each other and create an encrypted channel

2324 for further communication. The security protocols rely on an out-of-band secret (e.g., password from a

2325 printed QR code or retrieved via NFC interface from KNX IoT device etc.) to authenticate the exchanges.

2326 The password is never sent, but parties in the exchange can prove possession of the shared password and

2327 thus authenticate. When both parties have computed the same PASE session key, it is used to

2328 symmetrically encrypt all data in subsequent OSCORE messages of the same PASE session.

2329 [SPAKE2+] is an augmented Password Authenticated Key Exchange (PAKE) protocol, as only one party

2330 makes direct use of the password and the other party may not know the password, but only stores a

2331 derivative of the password. The party using the password directly would typically be the initiator/client

2332 (e.g., MaC), and acts as a prover, while the other party would be a server, and acts as verifier (KNX IoT

2333 device).

2334 SPAKE2+ is agnostic to the used transport protocol (e.g., Bluetooth, TCP etc.). The following clause

2335 describes how CoAP is used as SPAKE2+ transport protocol.

2336 **3.6.3.2** **PASE Resource Object**

2337 PAKE key enrollment uses CoAP [RFC7252] as a reliable transport protocol and OSCORE [RFC8613]

2338 for encryption. It is RECOMMENDED to carry messages in confirmed messages, especially if

2339 fragmentation is used. Table 51 defines JSON keys and the CBOR mapping for CoAP request and

2340 response objects to “/.well-known/knx/spake”.

2341 If a member is market as OPTIONAL (e.g. id) then this means a client can omit the member in the

2342 request, however, the server SHALL support the member handling.

2343 **Table 51 - JSON keys and the CBOR mapping**

**JSON Key** **CBOR** **CBOR Type** **Support** **Description**

**Key**

“id” 0 byte string O Responder ID context (max. 10 bytes).

"salt" 5 byte string **M** salt: A random value of at least 16 bytes and
at most 32 bytes.

"shareP" 10 byte string **M** shareP: The SPAKE2+ contribution in
uncompressed public key format 32 byte).

"shareV" 11 byte string **M** shareV: The SPAKE2+ contribution in
uncompressed public key format.

"pbkdf2" 12 map **M** _PBKDF2: Password-Based Key Derivation_
Function 2

"confirmV" 13 byte string **M** confirmV: The key confirmation.

"confirmP" 14 byte string **M** confirmP: The key confirmation.

"rnd" 15 byte string **M** Random value (32byte)

"it" 16 unsigned **M** Iterations: An integer value specifying the
number iterations.

2344

2345 **3.6.3.3** **Device Authentication with SPAKE2+ over CoAP**

2346 The following figure depicts an Initiator acting as CoAP client and the Responder acting as CoAP server.

2347 The Password Authenticated Session Establishment (PASE) is used for generating the OSCORE master

2348 secret. Every KNX IoT device SHALL have a unique password that is used as proof-of-possession in the

2349 PASE flow (see clause 3.6.5.4 “Password”).

2350 The Initiator (e.g., MaC) initiates the PASE Parameter exchange with the Responder (KNX IoT device).

2351 In the response the Responder sends an unencrypted salt to the verifier. This salt is used from both peers

2352 as input for the key derivation function (see clause 3.6.5.1 “Key Derivation Function”).

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“id”|0|byte string|O|Responder ID context (max. 10 bytes).|
|"salt"|5|byte string|**M**|salt: A random value of at least 16 bytes and<br>at most 32 bytes.|
|"shareP"|10|byte string|**M**|shareP: The SPAKE2+ contribution in<br>uncompressed public key format 32 byte).|
|"shareV"|11|byte string|**M**|shareV: The SPAKE2+ contribution in<br>uncompressed public key format.|
|"pbkdf2"|12|map|**M**|_PBKDF2_: Password-Based Key Derivation<br>Function 2|
|"confirmV"|13|byte string|**M**|confirmV: The key confirmation.|
|"confirmP"|14|byte string|**M**|confirmP: The key confirmation.|
|"rnd"|15|byte string|**M **|Random value (32byte)|
|"it"|16|unsigned|**M **|Iterations: An integer value specifying the<br>number iterations.|


-----

2353 The CoAP Client SHALL send a POST request containing the [SPAKE2+] message 1 to a reserved

2354 resource at the CoAP Server (PASE Credential Request). If the KNX IoT device is in default

2355 configuration state, then this message triggers the SPAKE2+ exchange on the CoAP Server, which

2356 SHALL reply with a 2.04 (Changed) response containing the SPAKE2+ message 2 (PASE Credential

2357 Response).

2358 Finally, the SPAKE2+ message 3 (PASE Credential Verification) is sent by the CoAP Client in a CoAP

2359 POST request to the same resource used for the SPAKE2+ message 1. The Content-Format of these

2360 CoAP messages SHALL be set to "application/cbor".

2361 If the device onboarding with PASE fails after a predefined number of consecutive invalid access

2362 attempts, e.g., wrong password, then the KNX IoT device SHALL block further attempts. The server

2363 SHALL return "5.03 Service Unavailable" in the last response and SHALL use the Max-Age option to

2364 indicate the number of seconds after which to retry. It is RECOMMENDED to block device onboarding

2365 after 10 consecutive invalid attempts per minute and MAY increase the timeout with every failed retry

2366 but no longer than 5 minutes (see clause 3.6.5.4 “Password”).

**device**

**Initiator** **Responder**

(compute shareP) PASE Parameter Request (shareP)

(compute shareV)

PASE Parameter Response (shareV)

(compute confirmV)

PASE Credential Request (confirmV)

PASE Credential Response (confirmP)

(compute confirmP)

PASE Credential Verification

OSCORE Read IDevID

Access Token Configuration

2367

2368 **Figure 21 - Password Authenticated OSCORE Access Token Enrollment**

2369 PBKDF2 [RFC2898] is a simple cryptographic key derivation function, which is resistant to dictionary

2370 attacks and rainbow table attacks. PBKDF2 applies a pseudorandom function, such as hash-based

2371 message authentication code (HMAC), to the input password along with a salt value and repeats the

2372 process many times to produce a derived key, which can then be used as a cryptographic key in

2373 subsequent operations.

2374 The PASE Parameter exchange SHALL contain the following attributes from Table 51 for the request:

2375 - rnd

2376 The PASE Parameter request MAY contain a responderkey ID for the temporary OSCORE access token.

2377 If the responderkey ID is present in the request, then the OSCORE message context ID (kid_context) for

2378 the subsequent access token configuration SHALL contain the same value.

2379 - id (default is “responderkey” if “id” was omitted in the request)


-----

2380 The PASE Parameter response SHALL contain the following attributes:

2381 - rnd

2382 - pbkdf2

2383 - it

2384 - salt


**PASE Parameter Exchange**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/spake (Accept: application/cbor (60))
**Payload:**
{ 15: "3456…c45e" }

**RES:**
2.04 CHANGED (Content-Format: application/cbor (60))
**Payload:**
{ 15: "8dfs…a7ad", 12: { 16: 3, 5: "98fa…fw54" } }


2385

2386 With the next message, the Initiator (e.g., MaC) responds with its own public key shareV (see clause

2387 3.6.3.3 “Device Authentication with SPAKE2+ over CoAP”). Both Responder (KNX IoT device) and

2388 Initiator then SHALL derive a shared secret used to produce encryption and authentication keys. The

2389 Responder SHALL send the verifier (Initiator) a key confirmation message containing confirmV so both

2390 parties can confirm that they agree upon these shared secrets.

2391 The PASE Credential request SHALL contain the following attributes from Table 51:

2392 - shareP

2393 The PASE Credential response SHALL contain the following attributes:

2394 - shareV

2395 - confirmV


**PASE Credential Exchange**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/spake (Accept: application/cbor (60))
**Payload:**
{ 10: "b6b8…95c9" }

**RES:**
2.04 CHANGED (Content-Format: application/cbor (60))
**Payload:**
{ 11: "9876…aa98", 13: "a987…c3874" }


2396

2397 The Initiator (e.g., MaC) SHALL send to the Responder (KNX IoT device) a confirmation message

2398 containing confirmP. The Initiator SHALL NOT send application data to the Responder until it has

2399 received and verified the confirmation message. Key confirmation verification requires recomputation of

2400 confirmP or confirmV and checking for equality against that which was received ([SPAKE2+] clause 4).


-----

2401 The PASE Credential Verification request SHALL contain the following attributes from Table 51 in the

2402 request:

2403 - confirmP


**PASE Credential Verification**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/spake (Accept: application/cbor (60))
**Payload:**
{ 14: "8964…d887" }

**RES:**
2.04 CHANGED


2404

2405 As a result of the PASE Credential Exchange each party can compute their sending and receiving keys.

2406 The sending key of the Initiator SHALL be used as master secrete ("ms") for operational OSCORE access

2407 token configuration.

2408 The following access token example shows the OSCORE access token configuration after PASE

2409 Credential Exchange. This temporary access token item is generated from the KNX IoT device and

2410 SHALL be deleted from the device as soon as the token expires. This access token grants access to the

2411 Initiator with the responderkey from the previous PASE session. Only one responderkey is valid at a time.

2412 A KNX IoT device SHALL stop access token enrollment after a specified time period (e.g., 5 min) if the

2413 SPAKE2+ session establishment has not been concluded.

2414 The Initiator with the public key "shareP" and the master secret "ms" can configure further operational

2415 tokens for a limited time ("expires_in").

2416 **Table 52 – Access Token example after PASE Credential Exchange (EXAMPLE)**

**Resource** **rt & Data** **Format** **Method** **Support** **Request/Response** **Notes**

**path** **Types**

auth/at/{to :dpt.a[n] cbor GET **M** Content-Format: PASE based access
ken-id} application/json token configuration is

Payload: only applicable for

"scope": ["if.sec"]. In

{

this example the

"id": "OC5BLLhkAG", token is valid for 3600
"profile": "coap_pase", sec. and OSCORE

with a pre-shared key

"scope": ["if.sec"],

will be used for

"expires_in" : "3600",

further access token

"cnf": { configurations. In this
"osc": { example, the device

has internally added a

"alg": "P256-SHA256
token to the access

HKDF-HMAC",

control list with a

"id": "responderkey",

context ID

"ms": "<Resulting “responderkey” to
PASE confirmP>" mark that this token
}}} can be used with

PASE only.

2417

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|auth/at/{to<br>ken-id}|:dpt.a[n]|cbor|GET|**M **|Content-Format:<br>application/json<br>Payload:<br>{ <br>"id": "OC5BLLhkAG",<br>"profile": "coap_pase",<br>"scope": ["if.sec"],<br>"expires_in" : "3600",<br>"cnf": {<br>"osc": {<br>"alg": "P256-SHA256-<br>HKDF-HMAC",<br>"id": "responderkey",<br>"ms": "<Resulting<br>PASE confirmP>"<br>}}}|PASE based access<br>token configuration is<br>only applicable for<br>"scope": ["if.sec"]. In<br>this example the<br>token is valid for 3600<br>sec. and OSCORE<br>with a pre-shared key<br>will be used for<br>further access token<br>configurations. In this<br>example, the device<br>has internally added a<br>token to the access<br>control list with a<br>context ID<br>“responderkey” to<br>mark that this token<br>can be used with<br>PASE only.|


-----

2418 **3.6.3.4** **Access Token Configuration**

2419 This clause describes how a MaC or a 3[rd] Party device configure Access Tokens on a KNX IoT device

2420 during commissioning (PAKE) and after commissioning. Precondition is that the MaC or the 3[rd] Party

2421 device have access to the respective credentials in the KDC service (Key Distribution Center).

2422 The key management of a KDC is out-of-scope of this document and is in the responsibility of the

2423 network administrator. However, it is RECOMMENDED to have a Tool Master Key for security

2424 configuration (access scope = “if.sec”) and a Runtime Master Key. The individual tool and runtime keys

2425 are derived from the Master secret (see clause 3.6.5.1 “Key Derivation Function”) for each KNX IoT

2426 device which the 3[rd] Party device integrates. The Master Secret SHOULD be accessible for the network

2427 administrator. The Master Secret is important in case the 3[rd] Party gets replaced by a new device. With the

2428 Master Secret the new 3[rd] Party device can bootstrap all existing KNX IoT devices and configure new

2429 runtime keys. The Runtime Master Key MAY be generated device internally and is only known by the 3[rd]

2430 Party device.

2431 If both the 3[rd] Party device and the KNX IoT device support (D)TLS than it is RECOMMENDED to

2432 configure the LDevID of the 3[rd] Party device in the access token with “if.sec” access scope. In this case

2433 the Master Secret or rather the tool key gets replaced by a X.509 certificate.

2434 3.6.3.4.1 Temporary Access Token Configuration (Responder Key)

2435 In following example, the 3rd Party device integrates a KNX IoT device. The 3rd Party device configures
2436 access tokens (incl. pre-shared keys) and, in addition, can read, write and subscribe application data
2437 (e.g., room temperature value) later after commissioning.

**KDC**

**3rd Party Device** **device**

Runtime
Master Secret

**KNX IoT Device**

**Key Derivation**

PASE

**Function (KDF)**

Configure tool key access token (ms=<Tool Key>)

/auth/at

OSCORE Keys OSCORE kid_context = Responder Key

Configure if.o access token etc. (ms=<Rumtime Key>)

/auth/at

OSCORE Key OSCORE kid_context = Responder Key

Responder Key
expires

**Key Derivation**
**Function (KDF)** Subscribe resource w/ Runtime Key (if.o)

/p/321/roomtemp

OSCORE kid_context = <Runtime Key>

Tool Key
Master Secret Renew if.o access token (ms= New Rumtime Key)

/auth/at

OSCORE kid_context = <Tool Key> (or X.509 certificate)

Subscribe resource w/ new Runtime Key (if.o)

/p/321/roomtemp

OSCORE kid_context = <New Runtime Key>

2438

2439 **Figure 22 – Access Token Configuration (Pub/Sub)**

2440 The sequence diagram above continues with an existing PASE session (valid responder key). The Initiator

2441 (3[rd] Party device) can only configure access tokens since the access token scope of the responderkey

2442 SHALL be limited to "if.sec".

2443 The next CoAP POST example shows how the Initiator configures a new operational OSCORE access

2444 token for "if.sec" scope (tool key).

2445 The KNX IoT device SHALL accept the first OSCORE write unicast request from an unsynchronized

2446 client. This is an exception to the general rule as defined in clause 3.6.4 “Message Replay Protection”.

|Col1|KNX IoT Device|Col3|
|---|---|---|
||OSCORE kid_context = Responder Key<br>OSCORE kid_context = Responder Key<br>Configure tool key access token(ms=<Tool Key>)<br>Configure if.o access token etc.(ms=<Rumtime Key>)<br>/auth/at<br>/auth/at<br>Responder Key<br>expires<br>PASE|OSCORE kid_context = Responder Key<br>OSCORE kid_context = Responder Key<br>Configure tool key access token(ms=<Tool Key>)<br>Configure if.o access token etc.(ms=<Rumtime Key>)<br>/auth/at<br>/auth/at<br>Responder Key<br>expires<br>PASE|
||OSCORE kid_context = <Runtime Key><br>OSCORE kid_context = <New Runtime Key><br>OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>Subscribe resource w/ new Runtime Key (if.o)<br>Subscribe resource w/ Runtime Key (if.o)<br>Renew if.o access token (ms= New Rumtime Key)|/p/321/roomtemp<br>/auth/at<br>/p/321/roomtemp|


-----

2447 The CoAP message SHALL contain the “id” if present or the string “responderkey” as “kid_context” and

2448 the Initiator or Responder public key in the “kid”. Before accepting the request, the Responder (KNX IoT

2449 device) SHALL check the corresponding credentials. At least one operational access token configuration

2450 SHALL contain the "if.sec" scope, otherwise access token changes or renewals are not possible anymore

2451 as soon as the responderkey expires. The following example uses the JSON content format for

2452 readability:


**Configure tool key access token (ms=<tool key>) with X.509 certificate**


**REQ:**
POST coap://{ipv6-unicast}/auth/at (Content-Format: application/json (50), OSCORE (code (POST), kid
(<shareP>), kid_context ("responderkey")))
**Payload:**
{
"id": "12345",
"scope": ["if.sec"],
"sub": "<kdc-id.knx.local>",
"profile": "coap_dtls",
"cnf": {"kid": "<trust list [X.509]fingerprint>"
}}


2453

2454 The initiator MAY configures additional runtime keys (configure “if.o” access token) with the same

2455 responder key session.

2456 The previous example shows a X.509 certificate-based trust to the entity that hosts the KDC. If both peers

2457 support (D)TLS then the Initiator SHOULD configure the “coap_dtls” profile for X.509 certificate-based

2458 mutual authorization for the tool key (see clause 3.5.4 “Device Access Control List Resource (auth/at)”).

2459 However, it is also possible to configure a coap_oscore profile for the tool key. The local network

2460 administrator has to decide whether to use a certificate based or pre-shared key approach for the tool key

2461 and depends on local security requirements. The following example uses the JSON content format for

2462 readability:


**Configure tool key access token (ms=<tool key>) with pre-shared key**


**REQ:**
POST coap://{ipv6-unicast}/auth/at (Content-Format: application/json (50), OSCORE (code (POST), kid
(<shareP>), kid_context ("responderkey")))
**Payload:**
{
"id": "23451.",
"profile": "coap_oscore",
"scope": ["if.sec"],
"cnf": {
"osc": {
"alg": "AES-CCM-16-64-128",
"id": "<kid>",
"ms": "ca5….4dd43e4c"
}}}


2463


-----

2464 3.6.3.4.2 Access Token for Group Communication

2465 The next example shows a MaC which configures access tokens on two KNX IoT devices that want to
2466 exchange S-Mode group notifications. Hence, the MaC SHALL configure the same runtime key on all
2467 KNX IoT devices that send or receive messages with a particular Group Address. For every Group

2468 _Address in the access token SHOULD be a corresponding Group Address configuration in the Function_
2469 Point Table.

**KDC**

**MaC** **device** **device**

Runtime
Master Secret

**KNX IoT Device** **KNX IoT Device**

**Key Derivation**
**Function (KDF)** PASE

Configure tool key access token (ms=<Tool Key>)

/auth/at

OSCORE Keys OSCORE kid_context = Responder Key

Download device configuration

OSCORE Key (/fp/g, fp/r, fp/p etc.)

**Application downloaded** **Application downloaded**

**Key Derivation**
**Function (KDF)**

Configure if.g.s.<ga> access token (ms=Rumtime Key)

/auth/at

Tool Key OSCORE kid_context = <Tool Key> (or X.509 certificate)
Master Secret

Configure if.g.s.<ga> access token (ms=Rumtime Key)
/auth/at
OSCORE kid_context = <Tool Key> (or X.509 certificate)

S-Mode Group notification

/knx

OSCORE kid_context = <Runtime Key>

2470

2471 **Figure 23 – Access Token Configuration (Group Communication)**

2472 An access token for a Group Address contains a specific scope identifier as shown in the next table and,

2473 therefore, is just an extension of the previous example with a 3rd Party device.

2474 If a POST request has created a new access token successfully, the server SHALL return a 2.01

2475 CREATED status code. If an access token already exists and the update is successful, the server SHALL

2476 return 2.04 CHANGED status code with no response document. A valid access token item SHALL

2477 contain all MANDATORY members as defined in clause 3.5.4.2. Partial update of access token items

2478 SHALL be supported, for example, for key renewal.

|Col1|KNX IoT Device|Col3|Col4|
|---|---|---|---|
||OSCORE kid_context = Responder Key<br>Configure tool key access token(ms=<Tool Key>)<br>/auth/at<br>PASE|OSCORE kid_context = Responder Key<br>Configure tool key access token(ms=<Tool Key>)<br>/auth/at<br>PASE|OSCORE kid_context = Responder Key<br>Configure tool key access token(ms=<Tool Key>)<br>/auth/at<br>PASE|
|||||
||||Download device configuration<br>(/fp/g, fp/r, fp/p etc.)<br>|
|||||
||Configure if.g.s.<ga> access token (ms=Rumtime Key)<br>**Application**|**Application**|** downloaded**|
||OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>Configure if.g.s.<ga> access token (ms=Rumtime Key)|OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>Configure if.g.s.<ga> access token (ms=Rumtime Key)|OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>OSCORE kid_context = <Tool Key> (or X.509 certificate)<br>Configure if.g.s.<ga> access token (ms=Rumtime Key)|

|Application|downloaded|
|---|---|
|**Application**|/auth/at<br>/knx|


**Configure <ga> access token (ms=<runtime key>). “auth/at” resources SHALL support CBOR,**
**however, the following example uses the JSON content format for better readability.**


**REQ:**
POST coap://{ipv6-unicast}/auth/at (Content-Format: application/json (50), OSCORE (code (POST), kid
(<shareP>), kid_context (<tool-key-id>)))
**Payload:**
{
"id": "345612",
"profile": "coap_oscore",
"scope": [1, 2, 3, 4],
"cnf": {
"osc": {
"alg": "AES-CCM-16-64-128",
"id": "<kid>",
"ms": "ca5….4dd43e4c"
}}}


2479


-----

2480 **3.6.4**

2482 **3.6.4** **Message Replay Protection**

2483 A KNX IoT device receiving an OSCORE request SHALL implement replay protection and validate

2484 message freshness according to [RFC8613] clause 7.4.

2485 The general rule is that the first time a server receives an OSCORE unicast GET, DELETE, PUT or

2486 POST request from an unsynchronized client, the server SHALL respond with an OSCORE protected

2487 CoAP response code 4.01 Unauthorized with an Echo option according to [RFC9175] clause 2.3. This is

2488 due to the replay window not yet being set up by the receiving KNX IoT device. Upon receiving a 4.01

2489 (Unauthorized) response with the Echo option, the client SHOULD resend the original request with the

2490 addition of the Echo option with the received Echo option value. The server SHALL NOT check the

2491 sequence number if an Echo option is present. This allows a client or rather the KDC to configure a new

2492 security context in case the client has lost the sequence number. However, the client can use the Echo

2493 option value only once with an invalid sequence number.

2494 3.6.4.1.1 Sender Security Context

2495 KNX IoT devices MAY trust by default the first authenticated multicast message from an unsynchronized

2496 peer. A KNX IoT device SHALL store received OSCORE message sequence numbers from each

2497 publishing sender security context so that the replay protection is enabled after receiving the first

2498 message. This approach has lower latency for less security-sensitive applications such as lighting,

2499 however, this method is susceptible to accepting a replayed message after a device reboot (see also clause

2500 3.6.4.1.3).

2501 The OSCORE message sequence number SHALL be maintained together with the configured security
2502 context (configured access token = pre-shared key) and the OSCORE sender “kid”. The OSCORE sender
2503 “kid” SHALL be the KNX Individual Address if configured. However, if not configured and not otherwise
2504 specified then the OSCORE “kid” SHALL be the device serial number.

2505 The message sequence number or rather the message sender context cache SHALL be deleted (reset) at
2506 the same time as the access token gets invalid (e.g. deleted).

2507 3.6.4.1.2 Message Sequence Number

2508 A KNX IoT device SHALL persist per sender security context the received OSCORE message sequence

2509 number into non-volatile memory and if this is not possible then the device MAY synchronizes the

2510 OSCORE message sequence number from configured peers (e.g., subscriptions or Function Point

2511 publisher table) based on a challenge-response machanism.

2512 A KNX IoT device SHALL support a list for S-Mode security context sequence number counters and, in

2513 addition, an independent list for Subscription sequence number counters.

2514 The MaC SHALL NOT configure more security contexts of publishing S-Mode communication devices

2515 then the maximal supported number of S-Mode sequence number counters of the receiving KNX IoT

2516 device.

2517 It is RECOMMENDET to support a sequence number counter for each subscription.

2518 The KNX IoT device that sends an OSCORE message (unicast or multicast) SHALL ensure that the

2519 sequence counter does not roll back and SHALL persist the sequence number counter in non-volatile

2520 [memory for each sender context. This means that the sequence counter SHALL strictly monotonic](https://dict.leo.org/englisch-deutsch/strictly)

2521 [increasing for a given sender security context also after device restart.](https://dict.leo.org/englisch-deutsch/increasing)

2522 If the sender sequence number exceeds the maximum configured value, the endpoint SHALL continue

2523 with 0. This definition contrasts with [RFC8613] clause 7.2.1. However, if a KDC is present in the system

2524 then it SHALL configure a new security context before this happens. The maximum sequence counter

2525 SHALL be 0xFFFF FFFF = 2[32]-1 (1 message per second = ~138 years).

2526 A KNX IoT device SHALL generate a response to an OSCORE unicast request according [RFC8613]

2527 clause 8.3 and reuse the sequence number from the sender. This reduces the consumption of sequence

2528 numbers on the responding device.


-----

2529 The receiving device SHALL check the OSCORE message sequence counter with the configured replay

2530 window (min = last received message + 1, max = last received message + configuration in

2531 p/oscore/replwdo).

2532 3.6.4.1.3 Sequence Number Synchronization

2533 The sequence number synchronization mechanism MAY be used in combination with multicast runtime

2534 communication in order to update the security context sequence number.

2535 When receiving a multicast request from a Publisher for the first time or the receiving device has lost

2536 synchronization e.g. after reboot, then the receiving device is not synchronized with the Publisher's sender

2537 sequence number and is not able to verify if a request is fresh.

2538 More security-sensitive applications MAY want to synchronize the sequence number before processing

2539 the OSCORE message. However, this is an application specific configuration which can generate high

2540 communication traffic and drain battery capacity (e.g., light switch) and, therefore, SHALL be

2541 configurable (see clause 2.5.11.3 “Metadata Query Parameter “m”).

2542 If the application requires message freshness, then the receiving device SHALL (re-)synchronize the

2543 Publisher's sender sequence number based on the CoAP Echo approach described in [RFC9175] clause

2544 2.3. A Publisher KNX IoT device SHALL support a challenge-response based on the Echo option if a

2545 peer requests it.

2546 A KNX IoT device SHALL use the same credentials for the challenge-response request that initially

2547 triggered the (re-)synchronization. KNX IoT devices SHALL accept OSCORE message sequence number

2548 synchronization requests from all peers that use credentials (sender context) configured in the access

2549 control list (see clause 3.5.4 “Device Access Control List”).


**Sequence number synchronization.**


**REQ:**
POST coap://{ipv6-multicast}/.knx
(Content-Format: application/cbor (60), OSCORE (code (POST), kid (<sia>), kid_context (<contextID>),
sequence-number(10)))
**Payload:**
{ 5: { 6: <st>, 7: <ga>, 1: <value> } }

**RES:**
4.01 UNAUTHORIZED (Echo: 1234)

**REQ:**
POST coap://{ipv6-unicast}/.knx
(Content-Format: application/cbor (60), Echo(1234), OSCORE (code (POST), kid (<sia>), kid_context
(<contextID>),
sequence-number(10)))
**Payload:**
{ 5: { 6: <st>, 7: <ga>, 1: <value> } }


2550

2551 The following sequence diagram shows a sequence number synchronization example after receiving a
2552 multicast OSCORE message.

2553 Upon receiving a request from a particular Publisher for the first time, the receiving device processes the
2554 message, but, even if valid, does not deliver it to the application. Instead, the receiving device replies to
2555 the Publisher with an OSCORE protected 4.01 (Unauthorized) response, including only the Echo option
2556 value. This response SHALL be delayed (jitter) to avoid network congestion.

2557 Since this response is protected with the security context used in the previous request, the Publisher will
2558 consider the response valid upon successfully decrypting and verifying it.


-----

2559 The Publisher receiving a 4.01 (Unauthorized) response, that includes an Echo option and originates from
2560 a verified peer, SHALL send an unconfirmed unicast echoing request to the same peer. The echoing
2561 message SHALL contain the sequence number previously used in the latest multicast message and the
2562 Echo option value from the response. The Publisher SHALL NOT send the request including the Echo
2563 option over multicast.

2564 If other devices also want to (re-)synchronize with the same Publisher then the publishing device SHALL
2565 reuse the same sequence number from the latest multicast notification request in combination with the
2566 Echo option value from the respective device.

2567 The Publisher maybe send further multicast messages before echoing the 4.01 (Unauthorized) response
2568 from the receiving KNX IoT device, for example, since the response was delayed (jitter) on the receiving
2569 device. The Publisher SHALL take for the unicast echoing message the latest (highest) sequence number
2570 used in the last multicast message. The Recipient KNX IoT device SHALL discard duplicate message
2571 before processing the message in the application.


**KNX IoT Device**


**KNX IoT Device**

/.knx

, sequence number=10

**random delay**

, sender sequence number+1=11

, sequence number=10

process message


**KNX IoT Device**

/.knx

**random delay**

process message

|random|delay|
|---|---|

|random|delay|
|---|---|


2572

|Multicast message, sequence number=10 /.knx<br>Unicast response Code 4.01, Echo=1234, sen<br>Unicast request re-send Message, Echo=1234|random<br>der sequence number + 1=11<br>, sequence number=10<br>delay<br>er sequence number+1=11<br>, sequence number=10|/.knx<br>delay|
|---|---|---|
|Unicast response Code 4.01, Echo=1235, send<br>**random**<br>Unicast request re-send Message, Echo=1235|Unicast response Code 4.01, Echo=1235, send<br>**random**<br>Unicast request re-send Message, Echo=1235|proces|


2573 **Figure 24 – OSCORE Sequence Number Synchronization**

2574 Table 53 specifies the MANDATORY (‘M’) resources for sequence number synchronization on a KNX

2575 IoT device.

2576 **Table 53 – Resources for sequence number synchronization**

**Resource** **rt & Data** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types**

p/oscore/re :dpt.value2 cbor GET PUT **M** Content-Format: Replay window is the
plwdo UCount application/cbor maximum number of

previously processed

Payload:

messages to accept

{ 1: 32 }

from a given device and
credential.

p/oscore/o :dpt:timePe cbor GET PUT **M** Content-Format: Maximum delay (jitter)
sndelay riodMsec application/cbor before sending a read

Payload: message counter

request (e.g., after

{ 1: 1000 }

receiving a multicast
message). Default
value is 1000ms.
2577

|Resource<br>path|rt & Data<br>Types|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|p/oscore/re<br>plwdo|:dpt.value2<br>UCount|cbor|GET PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 32 }|Replay window is the<br>maximum number of<br>previously processed<br>messages to accept<br>from a given device and<br>credential.|
|p/oscore/o<br>sndelay|:dpt:timePe<br>riodMsec|cbor|GET PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 1000 }|Maximum delay (jitter)<br>before sending a read<br>message counter<br>request (e.g., after<br>receiving a multicast<br>message). Default<br>value is 1000ms.|


-----

2578 **3.6.5** **OSCORE Cipher Suites**

2579 **3.6.5.1** **Key Derivation Function**

2580 A Key derivation function is used to derive several secrets from one secrete, the so-called Master Secret.

2581 KNX IoT devices SHALL support HKDF with SHA-256 according to clause 4.1 option 2 [NIST 800
2582 56C] as a simple deterministic key derivation function based on HMAC message authentication code.

Input Key Material **HKDF**
(Master Secret)

Pseudo-random Key

**HKDF Extract** Output Keying
Salt

Material

Info String **HKDF Expand**

Output Length

2583

2584 **Figure 25 – HKDF**

2585 HKDF denotes the composition of the expand and extract functions as defined in [RFC5869] and the

2586 Master Secret is used as Input Key Material. The Master Secret (ms in table 3.6.2 “OSCORE Key

2587 Configuration Resource Object”) SHALL be a random value of at least 16 bytes and at most 32 bytes.

2588 The OSCORE security context parameters Sender Key, Recipient Key, and Common IV SHALL be

2589 derived from the HKDF input parameter. The Info String provides information to identify the security

2590 context. The Info String SHALL be a CBOR array according to [RFC8613] clause 3.2.1.

2591 **3.6.5.2** **SPAKE2+ Enrollment Configurations**

2592 This clause specifies SPAKE2+ configuration parameters for password authenticated OSCORE access

2593 token enrollment. All KNX IoT devices supporting OSCORE access token enrollment SHALL support

2594 the following cipher suite according to [SPAKE2+]: SPAKE2+_P256_SHA256_HKDF_HMAC.

2595 It is assumed that both, the Initiator and the Responder, know all relevant parameters (w0, L)

2596 corresponding to the Password. The following list defines additional SPAKE2+ parameters such as

2597 elliptic curve points (M and N) etc.:

2598 - SPAKE M Constant [SPAKE2+]:

2599 02886e2f97ace46e55ba9dd7242579f2993b64e16ef3dcab95afd497333d8fa12f

2600 - SPAKE N Constant [SPAKE2+]:

2601 - 03d8bbd6c639c62937b04d997f38c3770719c629d7014d49a24b4f98baa1292b49

2602 - PBKDF2 random value size: 32 byte (secure random number)

2603 - Salt: Device specific random value of at least 16 bytes and at most 32 bytes.

2604 - Count: min=1000 and max=100000

2605 - Context: knxpase

2606 - idProver [SPAKE2+]: 0x0000000000000000

2607 - idVerifier [SPAKE2+]: 0x0000000000000000

|Input Key Material<br>(Master Secret)<br>Salt<br>Info String|HKDF<br>Pseudo-random Key<br>HKDF Extract<br>HKDF Expand|Col3|Output Keying<br>Material|
|---|---|---|---|
|Info String<br>Input Key Material<br>(Master Secret)<br>Salt|**HKDF Expand**<br>Pseudo-random Key<br>**HKDF Extract**<br>**HKDF**|**HKDF Expand**|**HKDF Expand**|
|Info String<br>Input Key Material<br>(Master Secret)<br>Salt|**HKDF Expand**<br>Pseudo-random Key<br>**HKDF Extract**<br>**HKDF**|**HKDF Expand**||
|Output Length|Output Length|Output Length|Output Length|


-----

2608 **3.6.5.3** **Transcript Computation (TT)**

2609 The protocol transcript (TT) is known by the Initiator and the Responder. Both parties use the TT to

2610 derive the shared symmetric key according to [SPAKE2+] clause 3.3.

2611 The idProvider and the idVerifier are unknown during the PASE enrollment. Therefore, an empty octet

2612 string represented as an eight-byte little endian number (0x0000000000000000) for idProver and

2613 idVerifier SHALL be used to indicate that no identities are present.

2614 After exchanging PASE parameters, the Initiator and the Responder can compute Z and V that are known

2615 values on both sides.


**The following example depicts the protocol transcript encoding for the PASE enrollment:**


TT =
len(Context) || knxpase ||
0x0000000000000000 ||
0x0000000000000000 ||
len(M) || 0x02886e2f97ace46e55ba9dd7242579f2993b64e16ef3dcab95afd497333d8fa12f ||
len(N) || 0x03d8bbd6c639c62937b04d997f38c3770719c629d7014d49a24b4f98baa1292b49 ||
len(shareP) || shareP ||
len(shareV) || shareV ||
len(Z) || Z ||
len(V) || V ||
len(w0) || w0


2616

2617 **3.6.5.4** **Password**

2618 This clause defines the password for the OSCORE token configuration procedure using a shared

2619 password as a proof-of-possession for KNX IoT devices in default configuration state. The password

2620 character definition serves the following purposes:

2621 - Minimize typing (or printing) errors since the Initiator (e.g., MaC) maybe allow users to manually

2622 enter a password.

2623 - Alphanumeric encoding of passwords in QR codes.

2624 The following characters from an alphabet of 32 numbers and upper-case letters SHALL be used: [0, 1, 2,

2625 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, G, H, J, K, L, M, N, P, R, S, T, U, V, W, X, Y]. Hence, the following

2626 letters SHALL NOT be used for passwords: [I, O, Q, Z].

2627 The KNX IoT device password SHALL be composed of at least 6 characters but not more than 32

2628 characters. To defend against brute-force attacks, the KNX IoT device SHALL limit authentication retries

2629 after a predefined number of consecutive invalid access attempts, e.g., wrong password, then the KNX

2630 IoT device SHALL block further attempts. Authentication attempts SHALL be limited to at most one

2631 attempt per 5 seconds on average. This requires over 2,5 years of effort for an attacker to have a 50 %

2632 chance of success with a 6-character password.

2633 The password SHOULD only be accessible with some form of physical proximity as proof-of-possession

2634 and SHALL NOT be accessible from a network interface (e.g., IP or CoAP). The password MAY be

2635 printed on a device (e.g., static QR code) or MAY is conveyed via NFC. Passwords, for example, in QR

2636 codes SHOULD be hidden when installed. The password SHOULD be generated dynamically, if

2637 possible, for example, in dynamic QR codes or NFC messages. However, NFC readout of a static

2638 password SHALL NOT be possible if the commissioning mode is inactive, for example, when the device

2639 is in the packaging.


-----

2640 **4** **Software Update**

2641 **4.1** **Introduction**

2642 Software (firmware) updates are essential to keep an installations healthy. The demand to shorten time to

2643 market for new applications along with the accelerated pace of network and security standard evolution

2644 mandates the need for more frequent updates.

2645 The KNX IoT device software update functionality is designed to meet the specific needs of devices with

2646 limited computing power and memory. Software updates require power, which means special

2647 consideration must be given to power management. In addition, data throughput will determine the time it

2648 takes for updates, and the energy used to execute them.

2649 Therefore, the image size is a key factor for a software update. KNX IoT implements an image-based

2650 software update strategy. This is achieved by encoding only the differences between a reference and a

2651 target image. For example, a package MAY contain only the communication stack that needs to be

2652 updated, however, the application software remains on the current version. This also enables a

2653 distribution of a software package to a large number of the same KNX IoT devices in a given installation

2654 via multicast messages.

2655 KNX IoT device notifies (only with subscription) the Software Update Server that the download is

2656 complete, and it is ready to apply the downloaded software package (“swu/state” = downloaded). For

2657 example, the Software Update Manager and the Software Update Server MAY be deployed on the same

2658 device, on different devices or are integrated in a MaC.

2659 The Software Update Manager (e.g., MaC or Software Update Server) activates software download and

2660 update. It is the initiator which decides when it happens and either provides the Software Update Client

2661 with an URL to perform the download from a Software Update Server, or directly sends the software to

2662 the KNX IoT device. Hence, the software update process looks as follows.

2663 1. Software Update Manager activates software download.

2664 2. Software Update Client (KNX IoT device) downloads the software from the Software Update

2665 Server and reports when finished.

2666 3. Software Update Manager decides what to do next, and when needed, sends to the Software

2667 Update Client a request to perform the update.

2668 4. Software Update Client attempts to apply the software and reports the status.

2669 **4.2** **Software Update Client Resource (swu)**

2670 The Software Update Manager operates software updates on the Software Update Client Functional Block

2671 (SWU) which SHALL be implemented on a KNX IoT device.

2672 A Software Update Manager MAY configure the SWU to fetch (PULL) a software package from a

2673 dedicated server instead of pushing (PUSH) software packages to the KNX IoT device.

2674 If download speed is important and the KNX IoT device supports additional protocols beside CoAP/UDP

2675 then the server MAY choose one of those protocols (e.g., CoAP(s)/TCP) for software downloads.

2676 However, the Software Update Server and the KNX IoT device SHALL support CoAP including

2677 OSCORE and Block-wise transfer [RFC7959] for software downloads.

2678 Manufacturers SHOULD consider further aspects for secure software updates. Examples are how to

2679 manage a software update repository at the server side (which may include user interface considerations),

2680 the techniques to provide additional application layer security protection of the software package, how

2681 many versions of software images to store on the KNX IoT device, and how to execute the software

2682 update process considering the hardware specific details of a given KNX IoT product. These aspects are

2683 out-of-scope of this document. However, a KNX IoT device SHALL verify the authenticity and integrity

2684 of a software package before applying a software package.


-----

2685 Table 54 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) Software Update resources (swu) and

2686 the respective resource path names that SHALL be used. (PUT) is OPTIONAL since the property value is

2687 preconfigured or only one option is supported.

2688 **Table 54 – Resources for Software Update**

|Resource<br>path|rt & Data<br>Types|Forma<br>t|Metho<br>d|Sup<br>port|Request/Response|Notes|
|---|---|---|---|---|---|---|
|swu|:fb.swu|link-<br>format|GET|**M **|Content-Format:<br>application/link-format<br>Payload:<br></swu/pkgnames>;ct=50|Response contains a<br>list with points that<br>belongs to the swu<br>functional block.|
|a/swu|:dpt.file|octet-<br>stream|PUT|**M **|Content-Format:<br>"application/octet-<br>stream"<br>Payload: Manufacturer<br>specific binary file|Manufacturer specific<br>software package. It<br>overwrites the oldest<br>package version that<br>exists on the device.|
|swu/pkgnames|[:dpt. <br>varString88<br>59_1]|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: [filename.bin] }|List of Package file<br>names that exists on<br>the device|
|swu/pkgqurl|:dpt.url|cbor|GET<br>(PUT)|O|Content-Format:<br>application/cbor<br>Payload:<br>{ 1:<br>swus.knx.local/firmware }|URL where to send a<br>software update query<br>request periodically.<br>The URL format is<br>defined in RFC 3986.<br>The initial value of the<br>mrt metadata value is<br>24h (86400 sec)|
|swu/pkgbytes|:dpt.value4<br>UCount|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 96325 }|Indicates already saved<br>bytes (e.g., eeprom) of<br>the software package.|
|a/swu|NA|cbor|POST|O|Content-Format:<br>application/cbor<br>Payload: { see clause 4.3<br>“Software Update<br>Modes” }|Triggers a software<br>update query request<br>(PULL on Software<br>Update Server).|
|swu/pkgv|dpt.version|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: [1,2,3] }|Version of the new<br>available software<br>package if the State<br>resource is in state<br>downloaded. Otherwise<br>returns error code 4.04<br>Not Found|


-----

|Resource<br>path|rt & Data<br>Types|Forma<br>t|Metho<br>d|Sup<br>port|Request/Response|Notes|
|---|---|---|---|---|---|---|
|swu/update|:dpt.value2<br>UCount|cbor|PUT|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|Trigger for upgrading<br>the firmware. The value<br>contains a defer period<br>in seconds (0=update<br>immediately,<br>max=”swu/maxdefer”).<br>The resource is<br>executable only when<br>the State resource is in<br>the downloaded state.<br>GET = remaining time<br>or Z8 status = OSV.|
|swu/update/{fil<br>ename}|:dpt.value2<br>UCount|cbor|PUT|O|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|Trigger for upgrading<br>the firmware of a<br>particular package if<br>more than one exists<br>on a device (e.g., for<br>rollback to older<br>version).|
|swu/state|:dpt.value1<br>UCount|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|Indicates current state<br>with respect to this<br>software update. This<br>value is set by the<br>SWU.<br>0: Idle (before<br>downloading or after<br>successful updating)<br>1: Downloading (the<br>data sequence is on<br>the way)<br>2: Downloaded<br>3: If the “swu/update” is<br>executed (true), the<br>“swu/status” changes<br>from Downloaded to Up<br>grading. If the update is<br>successful, the<br>“swu/status” changes<br>to Idle. If the update<br>fails, the status<br>changes to<br>Downloaded.|
|swu/result|:dpt.value1<br>UCount|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|Contains the result of<br>the software update or<br>download.|


-----

|Resource<br>path|rt & Data<br>Types|Forma<br>t|Metho<br>d|Sup<br>port|Request/Response|Notes|
|---|---|---|---|---|---|---|
|||||||0: Initial value. Once<br>the updating process is<br>initiated (Download<br>/Update), this Resource<br>SHALL be reset to<br>Initial value.<br>1: Software updated<br>successfully.<br>2: Not enough flash<br>memory for the new<br>software package.<br>3: Out of RAM during<br>downloading process.<br>4: Connection lost<br>during downloading<br>process.<br>5: Integrity check<br>failure for new<br>downloaded package.<br>6: Unsupported<br>package type.<br>7: Invalid URL.<br>8: Software update<br>failed.<br>9: Unsupported<br>protocol.|
|swu/lastupdate|:dpt.varStri<br>ng8859_1|cbor|GET|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 2020-04-<br>12T23:20:50.52Z }|Time of the last<br>software update<br>according to IETF RFC<br>3339. Initial value on<br>date of manufacturing.|
|swu/method|:dpt.value1<br>UCount|cbor|GET<br>(PUT)|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 2 }|The KNX IoT device<br>(SWU) uses this<br>resource to indicate its<br>support for transferring<br>software images to the<br>client either via the<br>Package Resource<br>(=push) or via the<br>Package URI Resource<br>(=pull) mechanism.<br>0: Pull only<br>1: Push only<br>2: Both. In this case the<br>Update Server MAY<br>choose the preferred<br>mechanism for<br>conveying the software<br>package to the KNX<br>IoT Client.|


-----

|Resource<br>path|rt & Data<br>Types|Forma<br>t|Metho<br>d|Sup<br>port|Request/Response|Notes|
|---|---|---|---|---|---|---|
|swu/maxdefer|:dpt.value1<br>UCount|cbor|GET<br>PUT|O|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|Maximum Defer Period<br>The maximum number<br>of seconds a software<br>update can be<br>deferred. When this<br>time period is over, the<br>device will<br>automatically update a<br>new package. If the<br>value is 0, an automatic<br>update is not allowed.|
|swu/protocol|:dpt.value1<br>UCount|cbor|GET<br>(PUT)|**M **|Content-Format:<br>application/cbor<br>Payload:<br>{ 1: 0 }|A list of supported<br>protocols by the KNX<br>IoT device.<br>0: Unicast CoAP with<br>OSCORE (as defined<br>in RFC 7252) with the<br>additional support for<br>Block-wise transfer.<br>CoAP is the default<br>setting.<br>1: CoAPS (as defined<br>in RFC 7252) with<br>optional support for<br>Block-wise transfer<br>4: CoAP with OSCORE<br>over TCP (as defined in<br>RFC 8323)<br>5: CoAP over TLS (as<br>defined in RFC 8323)<br>254: Manufacturer<br>specific|


2689

2690 **4.3** **Software Update Modes**

2691 **4.3.1** **Overview**

2692 KNX IoT defines the following two software download modes.

2693 - PUSH - The download is initiated by the Software Update Server, performing a write operation

2694 (unicast or multicast) on the a/swu resource. This usually means that the Block-wise transfer

2695 prevents other CoAP requests on the KNX IoT device until the write operation completes.

2696 - PULL - the Software Update Server indicates where the client should download software package

2697 from, by configuring the “swu/pkgurl” (package URI) resource on the KNX IoT device. The KNX

2698 IoT device (client) then performs the download asynchronously, while still being able to handle

2699 CoAP requests.

2700 Although the Software Update Manager selects the download method, it is RECOMMENDED to

2701 use PULL transfers exclusively during normal operation of an installation.


-----

2702 Depending on the configured protocol the respective access token configuration in the access control list

2703 SHALL be checked.

2704 **4.3.2** **Software Update Query Resource Object**

2705 The following table defines the CBOR mapping for the different messages used for software updates

2706 between Software Update Manager, Software Update Server and the SWU Functional Block (KNX IoT

2707 device). The attributes for these requests provide sufficient information to allow the KNX IoT device and

2708 the Software Update Server to determine the availability of a new software package.

2709 A KNX IoT device firmware MAY be divided into several software packages. The KNX IoT device

2710 SHOULD use the software package type (“pkgt”) to distinguish between firmware parts

2711 (e.g., “communication stack package” or “application package” etc.) and, therefore, the software package

2712 SHOULD contain the software package type information, for example, in the package header. The

2713 definition of package types and software package structure (header, image segment) is manufacturer

2714 specific.

2715 Table 55 specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) members for a software update

2716 resource object.

2717 **Table 55 – Software Update Query Resource Object members**

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“pkgn”|1|map|-|Package notification object|
|“pkgq”|29|map|-|Package query object|
|“result”|3|unsigned|O|Package query result|
|“mid”|4|unsigned|**M **|Manufacturer ID of the KNX IoT device (see<br>“dev/manufid”)|
|“fwv”|7|[unsigned,<br>unsigned,<br>unsigned]|**(M)**|Current software version of the KNX IoT device<br>(see “dev/fwv”) in software update query<br>request and response.|
|“prot”|8|unsigned|O|Supported download protocols (see<br>“swu/protocol”)|
|“defer”|9|unsigned|O|Package update deferred period (see<br>“swu/maxdefer”)|
|“pkgv”|10|[unsigned,<br>unsigned,<br>unsigned]|**(M)**|New software package version (see<br>“swu/pkgv”) in software update notification.|
|“pkgurl”|11|text string|O|Package URL (see “swu/pkgurl”) of the update<br>server. The URL MAY be preconfigured.|
|“pkgt”|12|unsigned|O|Package type (manufacturer specific number)|
|“pkgs”|13|unsigned|O|Package Size (kByte)|
|“po”|14|unsigned|O|Page offset (see clause 4.3.3)|


-----

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|“ps”|15|unsigned|O|Page size (see clause 4.3.3)|


2718

2719 **4.3.3** **Software Update Query Parameter "po" and "ps"**

2720 Software update query parameters provide the information about which part from a software update

2721 package is written (PUSH mode) to the KNX IoT device or is requested (PULL mode) from the Software

2722 Update Server.

2723 With the query parameter “ps={byte size}” in the GET request (PULL mode) the client indicates the

2724 maximum file size (bytes) the device can handle in the response to the Software Update Server. If “ps” is

2725 missing, then standard values from CoAP option Block1 and Block2 are used.

2726 The page offset “po” can be used in PULL mode (GET firmware) and in the PUT request to “a/swu” in

2727 PUSH mode. The query parameter “po” defines the number of bytes to skip. If “po” is omitted in the

2728 request, then the default offset SHALL be 0.

2729 The following picture depicts a Software Update Package that is split into 2 independent byte chunks. The

2730 first byte chunk starts at the beginning of the Software Update Package (po=0). After receiving the first

2731 byte chunk the software update continues with the next byte chunk and an offset “po” (po=<received

2732 bytes> + 1). The page size “ps” is transferred to the device with CoAP Block-wise transfer and each “ps”

2733 byte chunk SHALL start with block number 0.


po=0


ps


po ps

Block No. 0 Block No. 1 Block No. 2

**Software Update Package**

Byte 0 Byte n

|ps<br>Block No. 0 Block No. 1|Col2|
|---|---|
|||
|**Software Update Package**|**Software Update Package**|

|po|ps<br>Block No. 0 Block No. 1 Block No. 2|
|---|---|
|po||
|**Software Update Package**|**Software Update Package**|


2734


Byte 0 Byte n


2735 **Figure 26 – Software Package Query Parameter**

2736 The following example shows a KNX IoT requests that starts with an offset of 2056 bytes and indicates

2737 that it can handle maximum 1028 bytes.


**Read software update package chunk from Software Update Server (incl. Block-wise transfer)**


**REQ:**
GET coap://{ipv6-unicast}/firmware?po=2056&ps=1028 (Content-Format: application/octet-stream
(42), block num 0 (block size: 64))
**Payload:**
Uiow578oiqwhtq8745
**RES:**
2.04 Changed


2738

2739 **4.3.3.1** **Resume Software Update**

2740 Software Update Packages are often multiple kilobytes, sometimes exceeding one hundred kilobytes, in

2741 size. If for some reason a software update is interrupted, like a disruption in connectivity or a device

2742 losing power, the software update needs a mechanism to resume interrupted transfers.

2743 If a KNX IoT device wants to continue reading a software package (PULL mode) from a Software

2744 Update Server, for example after device restart, then the device SHOULD request the next byte chunk

2745 with a byte offset “po” after the last successful received byte (“swu/pkgbytes” + 1).


-----

2746 If a Software Update manager wants to resume an interrupted transfer, then it SHOULD read from the

2747 KNX IoT device the number of bytes already saved in nonvolatile memory (“swu/pkgbytes”) and

2748 continue from there.

2749 The Software Update Manager using PUSH mode SHALL indicate where to append byte chunks with

2750 “po” (po={“swu/pkgbytes”} + 1) in the PUT request to “a/swu” or with a software notification request in

2751 PULL mode (see clause 4.3.4.2).

2752 **4.3.4** **Software Update PULL**

2753 **4.3.4.1** **Basic requirements**

2754 KNX IoT devices MAY support Software Update PULL. If the PULL method is configured, then the

2755 KNX IoT device SHALL support Software Update Notifications if the Software Update Manager wants

2756 to trigger the software update process.

2757 In addition, the SWU Functional Block MAY support to check the configured Software Update Server

2758 periodically with a Software Update Query for new software packages. The Software Update Server

2759 SHOULD support block-wise transfer [RFC7959] since this is the mandatory software update transfer

2760 format for a KNX IoT device.

2761 It is RECOMMENDED that sleepy KNX IoT devices make their best effort to optimize their wake-up

2762 intervals to optimize battery live time or other constrained power sources while retrieving a new software

2763 package. Therefore, KNX IoT devices SHOULD support Block-wise transfer to recover and continue the

2764 download without having to start from the beginning of a given software package (see 4.3.5 "Software

2765 Update PUSH" e.g., “swu/pkgbytes”). This takes more time to complete the download process and

2766 SHALL be considered by the Software Update Manager, for example, if it wants to trigger the software

2767 update and restart all KNX IoT devices of a given installation at the same time.

2768 Since the SWU Functional Block MAY need to read Software package in parts, it is RECOMMENDED

2769 that Software Update Servers maintain cached package for at least 10 minutes after closure of the last

2770 package transfer, so that the SWU Functional Block MAY come back to read different parts of a package

2771 file.

2772 Software Update Clients SHALL abort retrying a transfer after three attempts and retry with a normal

2773 software update query request (e.g., “check available software” after 24h). The resulting error SHALL be

2774 logged in the “swu/result” datapoint.


-----

**Software Update Manager** **Software Update Client**

**/swu/state = idle**

1./2. Software Update Configure SWU FB; PUT /swu/pkgurl, /swu/method, /swu/protocol

Configuration


**Software Update Server**

|/swu/sta|te = idle|
|---|---|

|/swu/result|= initial value|
|---|---|


3./4. Check available

software

5. Trigger Software

Update


**/swu/state = downloading**
7. Software Download

Package complete or ACK carrying package block

**/swu/state = downladed**

8. Software validation

Install package update; PUT /.swu/update

10. Update Software

**/swu/state = updating**

ok

11. Update software package

**/swu/state = idle**

**/swu/result = sw updated successful** 12. Update status

2775

2776 **Figure 27 – Software Update PULL**

2777 The example depicted in the previous figure illustrates a successful message exchange between Software

2778 Update Manager/Server and a KNX IoT device. In this example, no messages are lost during

2779 transmission:

2780 1. Software Update Manager configures the Software Update Server and PULL as update method

2781 on the KNX IoT Client. This configuration can be done with a MaC over CoAP or out-of-band

2782 (e.g., NFC or BLE etc.). In case of CoAP, the Software Update Manager MAY have a

2783 configured device list or MAY discover KNX IoT devices, for example, with mDNS.

2784 2. KNX IoT device determines Software Update Server to query (“swu/pkgurl”).

2785 3. KNX IoT device periodically checks for available software packages and queries the Software

2786 Update Server for a new package version.

2787 4. If Software Update Server has no new software available, then retry after heartbeat period

2788 expires (see metadata) else continue with 6.

2789 5. OPTIONAL: Software Update Manager triggers the KNX IoT device to start immediately with

2790 software download.

2791 6. The KNX IoT device validates whether to apply the new software version or not.

2792 7. KNX IoT device downloads the software package with the configured protocol

2793 (“swu/protocol”), for example, with CoAP Block-wise transfer (default) in chunks suitable to

2794 the maximum transmission size (MTU) or the adaption-layer fragmentation (e.g., 60-80 bytes

2795 for 6LoWPAN).

2796 8. KNX IoT device validates the new software package (e.g., manufacturer signature etc.)

|/swu/state =|downloading|
|---|---|

|/swu/state =|downladed|
|---|---|

|/swu/state|= updating|
|---|---|

|Col1|/swu/sta|te = idle|
|---|---|---|
|**/swu/result = sw u**|**/swu/result = sw u**|**   pdated successful**|

|Col1|/swu/sta<br>Configure SWU FB; PUT /swu/pkgurl, /swu/method, /swu/protocol<br>ok|Col3|te = idle|Col5|Col6|
|---|---|---|---|---|---|
|**/.s**|Software Update Notification Request (optional); POST /a/swu {cmd:start}<br>ok<br>**/swu/result**<br>**wu/method = pull**<br>**/swu/state =**<br>**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|Software Update Notification Request (optional); POST /a/swu {cmd:start}<br>ok<br>**/swu/result**<br>**wu/method = pull**<br>**/swu/state =**<br>**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|Software update query request; POST /firmware<br>New software not available<br>6. Version validation<br>** = initial value**|||
|**/.s**|Software Update Notification Request (optional); POST /a/swu {cmd:start}<br>ok<br>**/swu/result**<br>**wu/method = pull**<br>**/swu/state =**<br>**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|Package complete or ACK carrying package block<br>retrieve software; GET /firmware<br>**  downloading**|||
|**/.s**|Software Update Notification Request (optional); POST /a/swu {cmd:start}<br>ok<br>**/swu/result**<br>**wu/method = pull**<br>**/swu/state =**<br>**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|**/swu/state =**<br>**Repeat: CoAP Block-Wise transfer**|8. Software validation<br>**  downladed**|||
|**/.s**|Install package update; PUT /.swu/update<br>ok<br>**/swu/result = sw u**<br>**/swu/sta**<br>**/swu/state**|Install package update; PUT /.swu/update<br>ok<br>**/swu/result = sw u**<br>**/swu/sta**<br>**/swu/state**|11. Update software package<br>**   pdated successful**<br>**te = idle**<br>** = updating**<br>12. Update status|||


-----

2797 9. OPTIONAL: KNX IoT device notifies (with subscription) the Software Update Server that the

2798 download is complete, and it is ready to apply the downloaded software package (“swu/state” =

2799 downloaded).

2800 10. Software Update Manager triggers the KNX IoT device to apply the software package.

2801 11. KNX IoT device applies the software package.

2802 12. KNX IoT device notifies (read or with Point Subscription) the Software Update Manager of

2803 having successfully applied the software package (“swu/result” = sw updated successful).

2804 **4.3.4.2** **Software Update Notification**

2805 Installations often have a large number of the same KNX IoT devices (same product and version). The

2806 Software Update Servers SHOULD avoid redownloading the same software package again and again if it

2807 can determine that multiple KNX IoT devices are requesting, or can be expected to request, the same

2808 software package.

2809 The software update notification command is used if a Software Update Manager wants to control or

2810 force the rollout of new software packages. The software update notification command SHALL contain

2811 the following attributes from Table 55:

2812 - mid: software package manufacturer ID

2813 - hwt: software package product ID

2814 - pkgv: version of new available package

2815 The software update notification command MAY contain the following attribute:

2816 - pkgt: software package type

2817 - pkgurl: the URL from where to fetch new software package.

2818 - pkgs: file size of the software package [kByte]

2819 - defer: deferred software package installation after download.

2820 - prot: Supported protocols for software download (default CoAP with OSCORE)

2821 - po: Page offset (see clause 4.3.3)

2822 - ps: Page size (see clause 4.3.3)

2823 The following example does not contain a Package Update Deferred Period (defer) attribute therefore the

2824 package update SHALL NOT be installed automatically. In this case, the Software Update Manager

2825 wants to apply the new software package by sending a separate request to “swu/update” afterwards. The

2826 following example uses the JSON content format for readability:

**Software Update Notification example (new software update available)**

**REQ:**
POST coap://{ipv6-unicast}/a/swu (Content-Format: application/json (50), Accept: application/json (50), OSCORE
(code (PUT), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "start",
"pkgn": {
"mid": 123, "hwt": 456, "pkgt": 0, "pkgv": [1,2,3], "pkgs": 23, "prot": [6],
"pkgurl": "coap://swus.knx.local/firmware:61630" } }

**RES:**
2.04 CHANGED


-----

2827

2828 **4.3.4.3** **Software Update Query**

2829 The KNX IoT device MAY check periodically for new available software packages by default. However,

2830 it SHALL be possible to disable automatic software updates and checks (“swu/pkgurl” - meta data:

2831 heartbeat=0). If supported then the SWU Functional Block SHOULD configure at least a minimal

2832 heartbeat of 24 hour and maximal 3 retries, for example if the server does not reply, between two query

2833 request per Software Update Server, unless a KNX IoT device loses its time, due to power loss or restart

2834 etc. This reduces the burden on both the Software Update Server providing the service to many devices

2835 and the supporting networking infrastructure.

2836 If the Software Update Server cannot immediately respond since it is busy, the server SHALL return

2837 "5.03 Service Unavailable" but uses the Max-Age option to indicate the number of seconds after which to

2838 retry.

2839 The update notification query request SHALL contain the following attributes from Table 55:

2840 - mid: software package manufacturer ID

2841 - hwt: software package product ID

2842 - hwv: device hardware version

2843 - fwv: device software or firmware version.

2844 The update notification query request MAY contain the following attributes:

2845 - pkgt: software package type

2846 - The update notification query response SHALL contain the following attribute:result: query result.

2847 The following example uses the JSON content format for readability:

**Software Update Query example (software update not available)**

**REQ:**
POST coap://{ipv6-unicast}/firmware (Content-Format: application/json (50), Accept: application/json (50),
OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ "pkgq": {
"mid": 123, "hwt": 456, "pkgt": 0, "hwv": [1,2,3], "fwv": [2,3,4] } }

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
{ "result": 0 }

2848

2849 It may happen that during package query or package download the SWU Functional Block encounters

2850 error conditions that eventually succeed through retrying the same operation more than once. Hence, the

2851 SWU Functional Block will repeat a Software Update Query request. Even if the Software Update Server

2852 can detect this, it SHALL NOT behave differently on any subsequent attempt compared to the first,

2853 unless a new software package has become available in the meantime.

2854 If the new software update is available, then the update query response SHALL contain the following

2855 attributes from Table 55:

2856 - mid: software package manufacturer ID

2857 - hwt: software package product ID

2858 - pkgt: software package type


-----

2859 - pkgv: version of the new available software package.

2860 - pkgs: file size of the new software package [kByte]

2861 - pkgurl: the URL from where to fetch new software package.

2862 - result: query result.

2863 The update notification response MAY contain the following attribute:

2864 - defer: deferred software package installation after download.

2865 The following Software Update Query example defines a Package Update Deferred Period (defer) of 0

2866 seconds in the response. Hence, the KNX IoT device SHALL automatically install the new software

2867 package after the download except “swu/maxdefer” is set to 0. If defer is not present, then the new

2868 software package SHALL NOT be installed automatically. The following example uses the JSON content

2869 format for readability:

**Software Update Query example (new software update available)**

**REQ:**
POST coap://{ipv6-unicast}/firmware (Content-Format: application/json (50), Accept: application/json (50),
OSCORE (code (POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{ "pkgq": {
"mid": 123, "hwt": 456, "pkgt": 0, "hwv": [1,2,3], "fwv": [2,3,4], "prot": 6 } }

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
{ "result": 1, "
"pkgn": {
"mid": 123, "hwt": 456, "pkgt": 0, "pkgv": [1,2,3], "pkgs": 23, "pkgurl":
"coap://swus.knx.local/firmware:61630" } }

2870

2871 **4.3.5** **Software Update PUSH**

2872 Software Update PUSH simplifies the KNX IoT device and puts the update logic to the Software Update

2873 Manager. Resource-constrained devices MAY NOT be able to implement Software Update PULL. In

2874 addition, with Software Update PUSH the entire upgrade process is managed by the Software Update

2875 Manager, including package downloads. The Software Update Manager can optimize the process such as

2876 subsequent dynamic loads of packets based on a wider range of information. Therefore, a KNX IoT

2877 device SHALL support Software Update PUSH.

2878 In the “PUSH” as well as in the “PULL” scenario, the KNX IoT device SHALL sum up the transmitted

2879 bytes until the last message that has been successfully received and SHOULD store this information into

2880 non-volatile memory (“swu/pkgbytes”) before power-down. When a new data packet PUSH or PULL

2881 operation begins, the information SHOULD be checked, and the update process SHOULD continue after

2882 the last successfully stored message on the device.

2883 The KNX IoT device SHALL change to fast-poll or preferably to always-on mode after receiving the first
2884 block of a software update package (PUT “a/swu”) and make their best effort to optimize their wake-up

2885 intervals.


-----

**Software Update Manager** **Software Update Client**

**/swu/state = idle**

1. Software Update Configure&check SWU FB; /swu/pkgbytes, /swu/method, /swu/protocol

Configuration

ok

2. Check available

software


**Software Update Server**

|/swu/sta|te = idle|
|---|---|


3. Write Software

|/swu/state =|downloading|
|---|---|


6. Trigger update

**/swu/state = updating**

ok

7. Update software package

**/swu/state = idle**

**/swu/result = sw updated successful** 8. Update status

2886

2887 **Figure 28 – Software Update PUSH**

2888 The example depicted in the previous figure illustrates a successful message exchange between Software

2889 Update Manager and a KNX IoT device. It is RECOMMENDED to use confirmed requests for all unicast

2890 communication. In this example, no messages are lost during transmission:

2891 1. Software Update Manager configures PUSH as update method on the KNX IoT Client. This

2892 configuration can be done with a MaC over CoAP or out-of-band (e.g., NFC or BLE etc.). In

2893 case of CoAP, the Software Update Manager MAY have a configured device list or MAY

2894 discover KNX IoT devices, for example, with mDNS.

2895 2. Software Update Manager periodically checks for available software packages and queries the

2896 Software Update Server for a new package version.

2897 3. Software Update Manager writes a new software package to the KNX IoT device, for example,

2898 with CoAP Block-wise transfer (default) in chunks suitable to the maximum transmission size
2899 (MTU) or the adaption-layer fragmentation (e.g., 60-80 bytes for 6LoWPAN).

2900 4. KNX IoT device validates the new software package (e.g., manufacturer signature etc.).

2901 5. OPTIONAL: KNX IoT device notifies (with subscription) the Software Update Server that the

2902 download is complete, and it is ready to apply the downloaded software package (“swu/state” =

2903 downloaded).

2904 6. Software Update Manager triggers the KNX IoT device to apply the software package.

2905 7. KNX IoT device applies the software package.

2906 8. KNX IoT device notifies (client reads “swu/result” = sw updated successful) the Software

2907 Update Manager of having successfully applied the software package.

|/swu/state|= updating|
|---|---|

|Col1|/swu/sta|te = idle|
|---|---|---|
|**/swu/result = sw u**|**/swu/result = sw u**|**   pdated successful**|

|Col1|Col2|/swu/sta<br>Configure&check SWU FB; /swu/pkgbytes, /swu/method, /swu/protocol<br>ok|Col4|te = idle<br>retrieve package; GET /firmware<br>ok<br>Version validation<br>downloading<br>downladed<br>4. Software validation<br>= updating<br>7. Update software package<br>te = idle<br>pdated successful 8. Update status|
|---|---|---|---|---|
||||||
|**/.s**<br>|**/.s**<br>|**wu/method = push**|**wu/method = push**|**wu/method = push**|
|**/.s**<br>||write software package; PUT /a/swu<br>Package complete or ACK carrying package block or error<br>**Repeat: CoAP Block-Wise transfer**<br> <br>**/swu/state =**|write software package; PUT /a/swu<br>Package complete or ACK carrying package block or error<br>**Repeat: CoAP Block-Wise transfer**<br> <br>**/swu/state =**|write software package; PUT /a/swu<br>Package complete or ACK carrying package block or error<br>**Repeat: CoAP Block-Wise transfer**<br> <br>**/swu/state =**|
|**/.s**<br>||write software package; PUT /a/swu<br>Package complete or ACK carrying package block or error<br>**Repeat: CoAP Block-Wise transfer**<br> <br>**/swu/state =**||**  downladed**|
|||Install package update; PUT /swu/update<br>ok<br>**/swu/result = sw u**<br>**/swu/sta**<br>**/swu/state**<br>**/swu/state =**|**/swu/state =**|**/swu/state =**|


-----

2908 **5** **KNX IoT Classic Gateway**

2909 **5.1** **Introduction**

2910 A KNX IoT to Classic Gateway is used for the communication between devices or device groups that

2911 MAY use a different transport than an originating device. For this, the gateway maintains Group

2912 _Addresses representations on the respective other side to act as communication peer accessible through_

2913 the respective transport.

2914 **5.2** **Definition**

2915 The following picture depicts a KNX IoT Classic Gateway that acts on one side as a KNX Classic device

2916 (e.g., TP1) and on the other side as a KNX IoT device (IPv6 device). The Gateway is conceptually a

2917 Message Broker as described in clause 2.3.3 “Message Broker Based System”. Therefore, the KNX IoT

2918 Classic Gateway MAY be used in combination with a KNX IoT 3[rd] Party API [5], as Message Broker for

2919 KNX IoT devices to bridge networks or for reliable group communication with confirmed messages etc.

KNX IoT Classic Gateway

URL: coap://gateway.knx.local

**Group Address Mapping Table**

**configure group and**
**function point tables**

Function Point Function Point
Publisher Table Recipient Table

/.knx **Management Client (MaC)**

SUBSCRIBE

/.knx

**GrpObjT** **GrpObjT**

**Recipient,**

**Publisher** **Recipient**

**Publisher**

KNX Classic Device KNX IoT Device KNX IoT Device

2920

2921 **Figure 29 – KNX IoT Classic Gateway**

2922 In general, the KNX IoT Classic Gateway is a normal KNX IoT device as defined in clause 2 “Point API

2923 Specification” but SHALL implement the following additional functionalities.

2924 - Decrypts and encrypts KNX Classic and KNX IoT secured messages.

2925 - Translates CBOR-encoded KNX IoT messages into KNX Classic messages.

2926 - _Group Address mapping if the extended address range has been used (only KNX IoT)._

2927 - Transmits incoming messages to configured destination Group Address (KNX IoT from/to KNX

2928 Classic and KNX IoT from/to KNX IoT)

2929 - Message subscription and notification.

2930 **5.3** **Message Translation**

2931 The KNX IoT Classic Gateway SHALL convert incoming messages to the destination format according

2932 to clause 2.5.13 “Datatype Mapping”.

2933 The MaC configures the main datatype for all Group Address mapping items. However, for some special

2934 DPTs the sub type is needed as well. For Example DPT_Scaling (5.001) and DPT_Percent_U8 (5.004).

|URL: coap://gateway.knx.local<br>Group Address Mapping Table<br>Function Point Function Point<br>Publisher Table Recipient Table|Col2|Col3|Col4|Col5|configure group and<br>function point tables|
|---|---|---|---|---|---|
|**G**|**G**|**G**|**G**|Function Point<br>Recipient Table<br>Function Point<br>Publisher Table<br>**p Address Mapping Table**|Function Point<br>Recipient Table<br>Function Point<br>Publisher Table<br>**p Address Mapping Table**|
|**G**|**G**|**G**|**rou**|**p Address Mapping Table**|**p Address Mapping Table**|
|**G**||||||
|KNX Classic Device<br>**Recipient,**<br>**Publisher**|KNX Classic Device<br>**Recipient,**<br>**Publisher**|KNX Classic Device<br>**Recipient,**<br>**Publisher**||**Publisher**<br>KNX IoT Device<br>**Recipient**<br>KNX IoT Device<br>**GrpObjT**<br>**GrpObjT**<br>SUBSCRIBE<br>/.knx<br>/.knx|**Publisher**<br>KNX IoT Device<br>**Recipient**<br>KNX IoT Device<br>**GrpObjT**<br>**GrpObjT**<br>SUBSCRIBE<br>/.knx<br>/.knx|


-----

5.004 0x32 0x64 0xff
2935

2936 **5.4** **Group Address Mapping Table Resource**

2937 **5.4.1** **Definition**

2938 The MaC has to create a project specific mapping table for configuring a KNX IoT Classic Gateway as

2939 defined in clause 2.6.7 “Creating, Updating and Deleting Function Points”.

2940 Table 56 specifies the MANDATORY (‘M’) Group Address Mapping Table resources and the respective

2941 resource path names.

2942 **Table 56 - Group Address Mapping Table resources**

**Resource** **Resource** **Format** **Method** **Support Request/Response** **Notes**

**path** **Types (rt)**

fp/gm NA cbor POST **M** Req: Content- Write or update Group
Format: _Address_ mapping table
application/cbor
Payload: (see
example below)

fp/gm NA cbor GET **M** Resp; Content- _Group Address_ item
Format: linked list
application/linkformat
Payload:
</fp/gm/1>;ct=50

fp/gm/{item- NA cbor GET **M** GET Req: Content- Read/delete single list
id} DELETE Format: item

application/cbor
Payload:
{ "ga": 2305,
"dpt": "1.1" }

2943

2944 A table item SHALL contain as a minimum the KNX IoT Group Address (ga) and the DPT for message

2945 translation (see clause 5.3 “Message Translation”). The s.groupkey and s.secSettings are only needed if

2946 the Group Address is secured in KNX Classic. The KNX Classic Group Address (s.ga) is not needed if

2947 the same Group Address is used as in KNX Classic. The following example uses the JSON content

2948 format for readability:

|Datapoint Type|Encoded Value|Col3|Col4|
|---|---|---|---|
|Datapoint Type|50 %|100 %|255 %|
|5.001|0x80|0xff|Out of encodable<br>range|
|5.004|0x32|0x64|0xff|

|Resource<br>path|Resource<br>Types (rt)|Format|Method|Support|Request/Response|Notes|
|---|---|---|---|---|---|---|
|fp/gm|NA|cbor|POST|**M**|Req: Content-<br>Format:<br>application/cbor<br>Payload:  (see<br>example below)|Write or update_Group_<br>_Address_ mapping table|
|fp/gm|NA|cbor|GET|**M**|Resp; Content-<br>Format:<br>application/link-<br>format<br>Payload:<br></fp/gm/1>;ct=50|_Group Address_ item<br>linked list|
|fp/gm/{item-<br>id}|NA|cbor|GET<br>DELETE|**M**|GET Req: Content-<br>Format:<br>application/cbor<br>Payload:<br>{ "ga": 2305,<br>  "dpt": "1.1" }|Read/delete single list<br>item|


-----

**Mapping table configuration Example**


**REQ:**
POST coap://{ipv6-unicast}/fp/gm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"ga": 2305,
"dpt": "1"
},
{
"ga": 2306,
"dpt": "5.1",
"s": {
"ga": 1306,
"groupkey": "<key2>",
"secSettings": {
"a": true,
"c": true
}
}
}
]


2949

2950 **5.4.2** **Group Address Mapping Resource Object**

2951 The Mapping Table of a KNX IoT to KNX Classic gateway contains all information needed for the

2952 mapping of Group Addresses between KNX IoT Point API and KNX Classic. The following fields are

2953 mandatory for each Group Address mapping item:

2954 - ga: 1:1 Group Address mapping for GA range [0…65 535] if ga in “s” object is omitted.

2955 - dpt: Provide information about Data Type Mapping (classic DPT form/to CBOR encoding).

2956 Normally only the main value is necessary (e.g., "1") for the translation but for some Datapoint

2957 Types the subtype is needed as well. Main type and subtype SHALL be separated by a point “.”.

2958 The following fields are needed in the following cases:

2959 - s: KNX Classic Group Address if the classic system is secured or the KNX IoT System uses different

2960 _Group Address (e.g., extended address > 65 535)._

2961 - s.ga: Group address is needed if the Group Address differs in the KNX IoT and the Classic System.

2962 - groupKey, secSettings: Credential configuration for the KNX Secure (KNX Classic)

2963 Table 57 list specifies the MANDATORY (‘M’) or OPTIONAL (‘O’) members for a Group Address

2964 mapping item:

2965 **Table 57 – Group Address mapping item members (EXAMPLE)**

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"ga"|7|unsigned|**M **|KNX IoT_Group Address_|
|"dpt"|116 (“t”)|text string|**M**|Datapoint Type|


-----

"c" 99 (“c”) bool O The field determine if confidentiality SHALL
be applied for KNX Classic secure group
communication.
2966

2967 **5.5** **Message Routing**

2968 A KNX IoT Classic Gateway MAY acts as an intermediate between different transports or subsystems

2969 with different data throughput. This can lead to message congestion and subsequent loss of messages
2970 because messages cannot be forwarded from the system with high to the system with low data throughput.
2971 If the message queue on the KNX IoT Classic Gateway exceeds the number of what can be processed,
2972 then it SHALL notify the publishing device with Response Code 4.29 as described in clause 2.6.6.

2973 **5.5.1** **Forwarding Rules**

2974 The KNX IoT Classic Gateway SHALL provide at least one queue for incoming messages from KNX

2975 Classic subsystem and one from KNX IoT subsystem. Any telegram that cannot be instantly forwarded to
2976 the destination device SHALL be queued in the respective message queue.

2977 If more than one message is waiting in the message queue then the message that stayed in the queue for
2978 the longest time SHALL be transmitted first, regardless of KNX priorities. The KNX IoT Classic

2979 Gateway SHALL discard any message in the queue if the connection to the medium (e.g. TP1 or
2980 Ethernet) is lost.

2981 **5.5.2** **Message Queuing**

2982 If a message is to be queued and the appropriate queue is already full, one message has to be discarded.
2983 The message to be routed last (determined by the forwarding rules), taking into account the last message
2984 received, SHALL be cast off.

|JSON Key|CBOR<br>Key|CBOR Type|Support|Description|
|---|---|---|---|---|
|"s"|s|map|**M**|KNX Classic object|
|"ga"|7|unsigned|O|KNX Classic_Group Address_|
|"groupKey"|107 (“k”)|byte string|O|KNX secure shared group key|
|"secSettings"|28|map|O|The KNX Classic security flags.|
|"a"|97 (“a”)|bool|O|The field determine if authentication SHALL<br>be applied for KNX Classic secure group<br>communication.|
|"c"|99 (“c”)|bool|O|The field determine if confidentiality SHALL<br>be applied for KNX Classic secure group<br>communication.|


-----

2985 **6** **Profiles**

2986 **6.1** **KNX IoT Point API Device**

2987 **6.1.1** **Default Configuration State**

2988 Table 58 defines features and resources for KNX IoT that a device SHALL (‘M’) or MAY (‘O’, for

2989 optional) support in default configuration state according to [AN194]. A device in default configuration

2990 state MAY have a preset application configuration but SHALL have no installation specific credential

2991 (security zone) configuration. Resources of the following device features SHALL be accessible without

2992 security credentials in default configuration state. For example, a device in default configuration state

2993 SHALL reply to an “ep” (“/.well-known/core”) device discovery. If the client reads the current access

2994 token configuration (“auth/at”) then the device SHALL return with a CoAP response code 2.05 Content

2995 with empty payload. However later during runtime interworking, the device SHALL return a CoAP

2996 response code 4.01 Unauthorized to the same request.

2997 **Table 58 – Features in default configuration state**

**Device Features** **Support** **Notes**

Device discovery with DNS-SD M 2.6.1.2 “Device Discovery with DNS-SD”
and “ep” 2.6.1.3.6.1 “Endpoint Name "ep"“

Affected resources:
GET /.well-known/core

Read IDevID M 3.3.1 “Manufacturer Device Certificates (IDevID)”
Affected resources:
GET auth/idevid

OSCORE configuration with M 3.6.3 “Password Authenticated Access Token
TOFU Enrollment”
(Trust On First Use) Affected resources:

POST /.well-known/knx/spake
GET auth/at

LDevID simple enrollment O 3.2.4 “Operational Device Certificate Enrollment (Pull
with EST (PULL) Certificate)”

Affected resources:
a/sen

2998

2999 **6.1.2** **Commissioned Mode**

3000 Table 59 defines features for KNX IoT that a device SHALL (‘M’) or MAY (‘O’, for optional) support in

3001 normal operation.

3002 **Table 59 - Features for normal operation**

|Device Features|Support|Notes|
|---|---|---|
|Device discovery with DNS-SD<br>and“ep”|M|2.6.1.2 “Device Discovery with DNS-SD” <br>2.6.1.3.6.1 “Endpoint Name "ep"“ <br>Affected resources:<br>GET /.well-known/core|
|Read IDevID|M|3.3.1 “Manufacturer Device Certificates (IDevID)” <br>Affected resources:<br>GET auth/idevid|
|OSCORE configuration with<br>TOFU<br>(Trust On First Use)|M|3.6.3“Password Authenticated Access Token<br>Enrollment” <br>Affected resources:<br>POST /.well-known/knx/spake<br>GET auth/at|
|LDevID simple enrollment<br>with EST (PULL)|O|3.2.4 “Operational Device Certificate Enrollment (Pull<br>Certificate)” <br>Affected resources:<br>a/sen|

|Device Features|Support|Notes|
|---|---|---|
|Device and resource discovery|M|2.6.1 “Discovery” <br>Affected resources:<br>GET /.well-known/core|


-----

|Device Features|Support|Notes|
|---|---|---|
|Application Layer Security<br>with pre-shared keys (if.sec)|M|3.5.3 “Access Scope” <br>3.5.4 “Device Access Control List Resource (auth/at)” <br>3.6 “OSCORE Application Layer Security” <br>Affected resources:<br>GET, POST, DELETE auth/at/*<br>GET f/oscore (including OSCORE properties in p/*)|
|Device individualization<br>(if.sec, if.c)|M|2.5.5.5Device Individualization Resource (/.well-<br>known/knx/ia) <br>Affected resources:<br>GET /.well-known/knx/ia|
|Read/Write Points (if.p, if.d)|M|2.5.11 “Parameter and Diagnostic Property Resource<br>(p)” <br>Affected resources:<br>GET, PUT p/*|
|Pub/Sub with CoAP Observe<br>(if.i, if.o)|M|2.5.11 “Parameter and Diagnostic Property Resource<br>(p)” <br>2.6.10.1.2 “Lifetime Query Parameter "lt"” <br>Affected resources:<br>GET + Observe p/*|
|Function Point Table<br>configuration|M|2.5.7 “Function Point Table (fp)” <br>Affected resources:<br>GET, POST, DELETE fp/*/*<br>GET, POST a/lsm<br>Publisher table MAY not supported on specific device<br>types such as switches (e.g. sleepy devices)|
|S-Mode Group<br>Communication (if.g.s)|M|2.5.9 “S-Mode Messaging Resource (/.knx)” <br>Affected resources:<br>POST .knx|
|Software update (PUSH)|M|4.3.5 “Software Update PUSH” <br>Affected resources:<br>GET, PUT swu/*|
|Pub/Sub with WebHook (if.i,<br>if.o)|O|2.5.12 “Subscription Resource (sub)” <br>GET, POST p/*/sub<br>GET, DELETE sub/|
|LDevID Enrollment (PUSH)|O|3.2.5 “Management Client as Registrar (Push<br>Certificate)” <br>Affected resources:<br>auth/sen, or auth/skg|
|Transport Layer Security<br>(if.sec)|O|3.2 “Device Identity Enrollment” <br>3.3 “Device Identity Certificates” <br>3.4 “Certificate” <br>3.5.3 “Access Scope” <br>3.5.2 “Trust List Resource (auth/certs)” <br>3.5.5 “Revocation List”|


-----

|Device Features|Support|Notes|
|---|---|---|
|Software update (PULL)|O|4.3.4 “Software Update PULL” <br>Affected resources:<br>POST a/swu<br>GET, PUT swu/*|


3003

3004 **6.1.3** **Device Resource List**

3005 **Table 60 – Device Resource List**

|Resource path|Entity<br>type|Interface|Content<br>format|Method|Support|Description|
|---|---|---|---|---|---|---|
|Discovery|||||||
|/.well-known/core|Collection||link-format|GET|M|List with device functional blocks|
|/.well-known/core?ep=|Item||link-format|GET|M|Device serial number|
|/.well-known/core?if=|Collection||link-format|GET|M|Filter: Interfaces|
|/.well-known/core?rt=|Collection||link-format|GET|M|Filter: Resource type|
|/.well-known/core?d=|Collection||link-format|GET|M|Filter: Group address|
|Device|||||||
|/.well-known/knx|Item||cbor, json|GET|M|API version & basepath|
|/.well-known/knx|Action|if.sec,if.c|cbor|POST|M|Device reboot and reset|
|/.well-known/knx/ia|Action|If.sec,if.c|cbor, json|POST|M|Device individualization|
|/.well-known/knx/f|Item|if.c|cbor, json|GET|M|Device configuration fingerprint|
|/{base-path}/dev|Collection|if.ll|link-format|GET|M|List with device functional block<br>properties|
|/{base-path}/dev/{property-id}|Item|if.d|cbor, json|GET|M|Readproperty value|
|/{base-path}/dev/{property-id}|Item|if.p|cbor, json|PUT|M|Writeproperty value|
|/{base-path}/dev/{property-id}?m=|Item|if.d|cbor, json|GET|M|Filter: Read selected list of<br>metadata values|
|/{base-path}/dev/{property-id}|Item|if.p|cbor, json|PUT|M|Write metadata value(with key)|
|/{base-path}/swu|Collection|if.ll|link-format|GET|M|List with software update<br>functional blockproperties|
|/{base-path}/swu/{property-id}|Item|if.d|cbor, json|GET|M|Readproperty value|
|/{base-path}/swu/{property-id}|Item|if.swu|cbor, json|PUT|M|Writeproperty value|
|Actions|||||||
|/{base-path}/a/swu|Action|if.swu|cbor|POST|O|Trigger firmware update PULL|
|/{base-path}/a/lsm|Action|if.c|cbor|POST|M|Command device load state<br>machine|
|/{base-path}/a/lsm|Item|if.c|cbor|GET|M|Device load state machine<br>status|
|/{base-path}/a/sen|Action|if.sec|cbor|POST|O|LDevID enrollment|
|Security|||||||
|/.well-known/knx/spake|Item||cbor|POST|M|PASE|
|/.well-known/knx/idevid|Item|if.d|pkcs7-mime|GET|O|Read manufacturer device<br>certificate|
|/.well-known/knx/ldevid|Item|if.d|pkcs7-mime|GET|O|Write operational device<br>certificate|
|/{base-path}/auth|Collection|if.ll|link-format|GET|O|List with/ security sub resources|
|/{base-path}/auth/crts|Collection|if.sec,if.b|pkcs7-mime|POST|O|Write certificates|
|/{base-path}/auth/crts|Collection|if.ll|link-format|GET|O|Read certificate list (link to<br>resources)|
|/{base-path}/auth/crts/{kid}|Item|if.sec||DELETE|O|Delete certificate|
|/{base-path}/auth/at|Collection|if.sec|cbor|POST|M|Write access tokens|
|/{base-path}/auth/at|Collection|if.ll|link-format|GET|M|Read access tokens list (link to<br>resources)|
|/{base-path}/auth/at/{kid}|Item|if.sec||DELETE|M|Delete certificate|
|/{base-path}/f/oscore|Collection|if.ll|link-format|GET|M|List with oscore functional block<br>properties|
|/{base-path}/p/oscore/{property-id}|Item|if.p|cbor, json|GET|M|Readproperty value|
|/{base-path}/p/oscore/{property-id}|Item|if.sec|cbor, json|PUT|M|Writeproperty value|
|Messaging|||||||
|./knx|Action|if.g.s|cbor|POST|M|KNXgroup communication|
|./knx|Event|if.g.s|cbor|GET|M|KNX group communication<br>(CoAP Observe)|


-----

Delete all device subscriptions
/{base-path}/sub Collection if.p cbor, json DELETE M
incl. CoAP observe
/{base-path}/sub/{subscription-id} Item if.d cbor, json GET O Read subscription item
/{base-path}/sub/{subscription-id} Item if.p cbor, json DELETE O Delete subscription item
3006

3007 **6.2** **CBOR Encoding**

3008 **6.2.1** **Function Point Tables, Functional Blocks and Properties**

3009 **Table 61 – Function Point, Functional Block and Property CBOR encoding**

cbor **0** **1** **2** **3** **4** **5** **6** **7** **8** **9**

json id value cmd status sia s st ga cflag

cbor **10** **11** **12** **13** **14** **15** **16** **17** **18** **19**

json url href ia grpid

cbor **20** **21** **22** **23** 24 25 26 27 28 29

json fid iid at secFlags pkgq

cbor 90 91 92 93 94 95 96 97 (a) 98 (b) 99 (c)

json secFlag a secFlag c

cbor 100 (d) 101 (e) 102 (f) 103 (g) 104 (h) 105 (i) 106 (j) 107 (k) 108 (l) 109 (m)

json fault g groupKey

cbor 110 (n) 111 (o) 112 (p) 113 (q) 114 (r) 115 (s) 116 (t) 117 (u) 118 (v) 119 (w)

json overridden dpt

|Resource path|Entity<br>type|Interface|Content<br>format|Method|Support|Description|
|---|---|---|---|---|---|---|
|Function Point Tables|||||||
|/{base-path}/fp/g|Collection|if.c,if.b|cbor|POST|M|Add or change group object<br>items|
|/{base-path}/fp/g|Collection|if.ll|link-format|GET|M|Read group object list (link to<br>resources)|
|/{base-path}/fp/g/{group-object-id}|Item|if.p|cbor|GET|M|Readgroup object item|
|/{base-path}/fp/g/{group-object-id}|Item|if.c|cbor|DELETE|M|Deletegroup object item|
|/{base-path}/fp/r|Collection|if.c,if.b|cbor|POST|M|Add or change recipient items|
|/{base-path}/fp/r|Collection|if.ll|link-format|GET|M|Read recipient list (link to<br>resources)|
|/{base-path}/fp/r/{recipient-id}|Item|if.d|cbor|GET|M|Read recipient item|
|/{base-path}/fp/r/{recipient-id}|Item|if.c|cbor|DELETE|M|Delete recipient item|
|/{base-path}/fp/p|Collection|if.c,if.b|cbor|POST|O|Add or change publisher items|
|/{base-path}/fp/p|Collection|if.ll|link-format|GET|O|Read publisher list (link to<br>resources)|
|/{base-path}/fp/p/{publisher-id}|Item|if.d|cbor|GET|O|Writepublisher item|
|/{base-path}/fp/p/{publisher-id}|Item|if.c|cbor|DELETE|O|Deletepublisher item|
|Functional blocks|||||||
|/{base-path}/f|Collection|if.ll|link-format|GET|M|Read functional block list (link to<br>resources)|
|/{base-path}/f/{fb-id-instance}|Collection|if.ll|link-format|GET|M|Read functional block property<br>list(link to resources)|
|Properties|||||||
|/{base-path}/p|Collection|if.c, if.b|cbor, json|POST|M|Add or change property items|
|/{base-path}/p|Collection|if.ll|link-format|GET|M|Read property list (link to<br>resources)|
|/{base-path}/p/{property-path}|Item|if.d|cbor, json|GET|M|Readproperty item|
|/{base-path}/p/{property-path}?lt=|Item|if.d|cbor, json|GET|M|Read property item and observe<br>with lifetime|
|/{base-path}/p/{property-path}|Item|if.p|cbor, json|PUT|M|Writeproperty item|
|Subscriptions|||||||
|/{base-path}/p/{property-path}/sub|Item|if.p|cbor, json|POST|O|Subscribe a resource value|
|/{base-path}/p/{property-path}/sub|Collection|if.ll|link-format|GET|O|Read subscription list of a<br>resource(link to resources)|
|/{base-path}/sub|Collection|if.ll|link-format|GET|O|Read subscription list (link to<br>resources)|
|/{base-path}/sub|Collection|if.p|cbor, json|DELETE|M|Delete all device subscriptions<br>incl. CoAP observe|
|/{base-path}/sub/{subscription-id}|Item|if.d|cbor, json|GET|O|Read subscription item|
|/{base-path}/sub/{subscription-id}|Item|if.p|cbor, json|DELETE|O|Delete subscription item|


-----

3010

3012 **6.2.2** **Software Update Package Query**

3013 **Table 62 – Software Update CBOR encoding**

cbor **0** **1** **2** **3** **4** **5** **6** **7** **8** **9**

json pkgn result mid hwt hwv fwv prot defer

cbor **10** **11** **12** **13** **14** **15** **16** **17** **18** **19**

json pkgv pkgurl pkgt pkgs po ps

cbor **20** **21** **22** **23** 24 25 26 27 28 29

json

3014

3015 **6.2.3** **Security**

3016 **6.2.3.1** **Access Token (RFC 8392)**

3017 **Table 63 – Access Token CBOR encoding**

cbor **0** **1** **2** **3** **4** **5** **6** **7** **8** **9**

json id iss sub aud exp nbf iat cti cnf scope

cbor **10** **11** **12** **13** **14** **15** **16** **17** **18** **19**

json profile
3018

3019 **6.2.3.2** **Access Token Confirmation Methods (RFC 8747)**

3020 **Table 64 – Access Token Confirmation Methods**

cbor **0** **1** **2** **3** **4** **5** **6** **7** **8** **9**

json jwk jwe kid osc
3021

3022 **6.2.3.3** **OSCORE Key Configuration incl. PASE**

3023 **Table 65 – OSCORE Key Configuration**

cbor **0** **1** **2** **3** **4** **5** **6** **7** **8** **9**

json id version ms hkdf alg salt contextId

cbor **10** **11** **12** **13** **14** **15** **16** **17** **18** **19**

json pa pb pbkdf2 cb ca rnd it
3024


-----

3025 **7** **Examples**

3026 **7.1** **DEVICE POINT LIST EXAMPLES**

3027 **7.1.1** **Device Point List Example with OSCORE and (D)TLS**

|Resource Name|Col2|Thing Desc.<br>Interaction|rt & Data Types|if|Content Type|Description|
|---|---|---|---|---|---|---|
|Common Services|Common Services||||||
||/.well-known/core|ActionAffordance|||link-format|Device and rt Discovery|
||/.well-known/knx|ActionAffordance|||cbor|Returns {prefix}|
||/.well-known/knx/spake|ActionAffordance|||cbor|PASE device bootstrapping|
||/.well-known/knx/ia|ActionAffordance|||cbor|Configure IA|
||/.well-known/knx/f|PropertyAffordance|||cbor|Returns a configuration fingerprint|
|Security|Security||||||
||/auth|||if.ll|link-format||
||/.well-known/knx/idevid|PropertyAffordance|dpt.x509|if.d|pkcs7-mime|Manufacturer Device Certificate<br>(X.509)|
||/.well-known/knx/ldevid|PropertyAffordance|dpt.x509|if.d|pkcs7-mime|Operational Device Certificate (X.509)|
||/auth/crts|PropertyAffordance||if.b<br>if.sec|link-format|Read list with certificate IDs|
||/auth/crts|PropertyAffordance||if.p<br>if.sec|pkcs7-mime|Write CA Certificates|
||/auth/at|PropertyAffordance||if.b<br>if.sec|link-format|Read list with access token IDs<br>(e.g., OSCORE Credentials)|
||/auth/at/{id}|PropertyAffordance||if.b<br>if.sec|cbor|Write access tokens (e.g., OSCORE<br>Credentials)|
|Device Object|Device Object||||||
||/dev||fb.0|if.ll|link-format||
||/dev/pm|PropertyAffordance|dpa.0.54<br>dpa.binaryValue|if.p|json/cbor|Programming Mode|
||/dev/fwv|PropertyAffordance|dpa.0.25<br>dpt.version|if.d|json/cbor|Firmware version|
||/dev/hwt|PropertyAffordance|dpt.varString8859_1|if.d|json/cbor|Hardware type|
||/dev/sn|PropertyAffordance|dpa.0.11<br>dpt.serNum|if.d|json/cbor|Device serial number|
||/dev/model|PropertyAffordance|dpa.0.15<br>dpt.utf8|if.d|json/cbor|Device Model / order number|
||/dev/da|PropertyAffordance|dpa.0.58<br>dpt.value2Ucount|if.p|json/cbor|KNX Device (Individual) Address|


-----

|Resource Name|Col2|Thing Desc.<br>Interaction|rt & Data Types|if|Content Type|Description|
|---|---|---|---|---|---|---|
||/dev/fid|PropertyAffordance|dpt.value4Ucount|if.p|json/cbor|KNX Fabric ID|
||/dev/iid|PropertyAffordance|dpt.value4Ucount|if.p|json/cbor|KNX Installation ID|
||/dev/hname|PropertyAffordance|dpt.varString8859_1|if.p|json/cbor|Device hostname|
|SW Update (PUSH)|SW Update (PUSH)||||||
||/swu||fb.swu|if.ll|link-format||
||/a/swu|ActionAffordance||if.swu|octet-stream|Package file (firmware update PUSH)|
||/swu/pkgnames|PropertyAffordance|dpt.varString8859_1|if.swu<br>if.d|cbor|Package file name|
||/swu/pkgbytes|PropertyAffordance|dpt.value4Ucount|if.swu|cbor|Transmitted and stored package<br>bytes|
||/swu/pkgv|PropertyAffordance|dpt.version|if.swu<br>if.d|cbor|Package version|
||/swu/update|Action Affordance|dpt.value2Ucount|if.swu|cbor|Install package|
||/swu/state|PropertyAffordance|dpt:value1Ucount|if.swu<br>if.d|cbor|Update status|
||/swu/result|PropertyAffordance|dpt:value1Ucount|if.swu<br>if.d|cbor|Update error|
||/swu/lastupdate|PropertyAffordance|dpt.varString8859_1|if.swu<br>if.d|cbor|Last successful package update|
||/swu/method|PropertyAffordance|dpt:value1Ucount|if.swu<br>if.d|cbor|Download method|
||/swu/protocol|PropertyAffordance|dpt:value1Ucount|if.swu<br>if.d|cbor|Download protocol|
|Device Linking|Device Linking||||||
||/p|PropertyAffordance||if.b<br>if.c|json/cbor|Parameter and diagnose properties|
||/fp|PropertyAffordance||if.b<br>if.c|cbor|Function Point Table configuration|
||/fp/g|PropertyAffordance||if.b<br>if.c|cbor|Group object configuration|
||/fp/r|PropertyAffordance||if.b<br>if.c|cbor|Recipient configuration|
||/fp/p|PropertyAffordance||if.b<br>if.c|cbor|Publisher configuration|
||/a/lsm|ActionAffordance||f.c|cbor|Function Point Table Load-state-<br>machine|


-----

|Resource Name|Col2|Thing Desc.<br>Interaction|rt & Data Types|if|Content Type|Description|
|---|---|---|---|---|---|---|
|S-Mode Messaging|S-Mode Messaging||||||
||/.knx|ActionAffordance|urn:knx:g.s||cbor|KNX S-Mode Group Notification Input|
||/.knx|EventAffordance|urn:knx:g.s||cbor|KNX S-Mode Group Notification<br>Output|
|Heat Valve Actuator|Heat Valve Actuator||||||
||/hva||fb.352|if.ll|link-format||
||/hva/actpossetpheatstagea|PropertyAffordance|dpa.352.51<br>dpt.scaling|if.i|json/cbor|Actuator Position Set Point<br>Heat Stage A|
||/hva/actposheatstagea|PropertyAffordance|dpa.352.55<br>dpt.scaling|if.o|json/cbor|Actuator Position Heat Stage A|
|User HVAC Display|User HVAC Display||||||
||/f/uhd||fb.390|if.ll|application-link||
||/p/uhd/temproomsetpabseff|PropertyAffordance|dpa.390.59<br>dpt.valueTemp|if.p|json/cbor|Absolute Effective Room<br>Temperature Set Point|
|Room Temperature Sensor|Room Temperature Sensor||||||
||/f/rts||fb.321|if.ll|link-format||
||/p/rts/temproom|PropertyAffordance|dpa.321.51<br>dpt.valueTemp|if.o|json/cbor|Measured Room Temperature|
|Company-specific Properties|Company-specific Properties||||||
||/f/devtype/|PropertyAffordance||if.ll|link-format||
||/p/devtype/batterylow|PropertyAffordance|dpt.binaryValue|if.d|json/cbor|Battery Status|
||/p/devtype/inlinkmargin|PropertyAffordance|dpt:value1Ucount|if.d|json/cbor|In Link Margin|
||/p/devtype/batteryuptime|PropertyAffordance|dpt.timePeriodHrs|if.d|json/cbor|Uptime Battery|
||/p/devtype/wakeupcycle|PropertyAffordance|dpt.timePeriodSec|if.p|json/cbor|Wake Up Cycle Main Controller|


3028


-----

3029 **7.2** **DEVICE CONFIGURATION EXAMPLE**

3030 **7.2.1** **Full Download Example**

3031 The following examples uses the JSON content format for readability.


**SETP 1: Check MaC DB Entry compatibility with KNX IoT device**


**REQ:**
POST coap://{ipv6-unicast}/dev/hwt (Content-Format: application/json (50), OSCORE (code (GET), kid
(<sia>), kid_context (<contextID>)))
**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
“012345ABCDEFG”


3032

3033 Continue with next steps only if compatibility check is successful.


**SETP 2: Set State Machine to “unload”**


**REQ:**
POST coap://{ipv6-unicast}/a/lsm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>))
**Payload:**
{
"cmd": "unload"
}


3034

3035 If the intermediate state “unloading” is supported by the Management Server then it may answer with

3036 state “unloading”. The MaC SHALL NOT continue before the Management Server has reached the state

3037 “unloaded”.


**SETP 3: Set State Machine to “loading”**


**REQ:**
POST coap://{ipv6-unicast}/a/lsm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "startloading"
}


3038

3039 Now, the MaC writes Function Point Table items to the KNX IoT device (see also clause 2.6.7 “Creating,

3040 Updating and Deleting Function Points”).


-----

**STEP 4: Write parameter configuration**


**REQ:**
POST coap://{ipv6-unicast}/p (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"href": "p/rts/defaultsetpoint",
"value": 21,
},
{
"href": "p/rts/availablemodes",
"value": [1, 2, 3]
},
…
]


3041


**STEP 5: Write group object table**


**REQ:**
POST coap://{ipv6-unicast}/fp/g (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 13,
"href": "/LDSB1/SOO",
"ga": [2305, 2401],
"cflag": 216 //0b11011000
},
{
"id": 14,
"href": "/LDSB1/RSC",
"ga": [2306],
"cflag": 64 //0b01000000
},
{
"id": 15,
"href": "/LDSB2/SOO",
"ga": [2307, 2401],
"cflag": 216 //0b11011000
},
{
"id": 16,
"href": "/LDSB2/RSC",
"ga": [2308],
"cflag": 64 //0b01000000
}
]


-----

3042

3043

3044

3045


**STEP 6: Write Function Point Publisher table**


**REQ:**
POST coap://{ipv6-unicast}/fp/p (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 11,
"ia": "<publisher’s IA>",
"ga": [2305, 2306, 2307, 2308]
},
{
"id": 12,
"url": "coap://<IP multicast, unicast address or fqdn>:<port>/<path>",
"ga": [2305, 2306, 2307, 2308]
}
]


**STEP 7: Write Function Point Recipient table**


**REQ:**
POST coap://{ipv6-unicast}/fp/r (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 9,
"ia": "<recipient’s IA>",
"ga": [2305, 2306, 2307, 2308]
},
{
"id": 10,
"url": "coap://<IP multicast, unicast address or fqdn>:<port>/<path>",
"ga": [2305, 2306, 2307, 2308]
}
]


**SETP 8: Set State Machine to “loaded”**


**REQ:**
POST coap://{ipv6-unicast}/a/lsm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "loadcomplete"
}


-----

3046 If the intermediate state “LoadCompleting” is supported by the Management Server then it may answer

3047 with state “LoadCompleting”. The MaC SHALL NOT continue before the Management Server has

3048 reached the state “loadcomplete”.


**SETP 9: Read the configuration fingerprint of the written resources**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/f (Content-Format: application/json (50), OSCORE (code
(GET), kid (<sia>), kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
132768923564196


3049

3050 The retrieved fingerprint MAY be stored by the MaC for a future decision about a differential download.

3051 Finally, the MaC MAY restart the device, to cause a reset of the communication system (e.g., device

3052 group table) in the before configured device (see clause 2.5.5.3.3 “Device Restart Command”).


**SETP 10: Restart device (optional)**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx (Content-Format: application/json (50), OSCORE (code
(POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "restart"
}


3053

3054 **7.2.2** **Partial Download Example**

3055 The following examples uses the JSON content format for readability.


**SETP 1: Check MaC DB Entry compatibility with KNX IoT device**


**REQ:**
POST coap://{ipv6-unicast}/dev/hwt (Content-Format: application/json (50), OSCORE (code (GET), kid
(<sia>), kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
“012345”


3056

3057 Continue with next steps only if compatibility check is successful.


-----

**SETP 2: Check if the KNX IoT device is in a known state**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx/f (Content-Format: application/json (50), OSCORE (code
(GET), kid (<sia>), kid_context (<contextID>)))

**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
132768923564196


3058

3059 If the device configuration fingerprint value is known by the MaC than the MaC MAY continue with a

3060 differential download else the MaC SHALL fall back to the full download and continue there with STEP

3061 2.


**SETP 3: Set State Machine to “loading”**


**REQ:**
POST coap://{ipv6-unicast}/a/lsm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "startloading"
}


3062

**STEP 4: Write parameter configuration (conditional: only if changes there)**

**REQ:**
POST coap://{ipv6-unicast}/p (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"href": "p/rts/defaultsetpoint",
"value": 21,
},
{
"href": "p/rts/availablemodes",
"value": [1, 2, 3"]
},
…
]

3063

3064 The MaC MAY write only changed parameters (identified by href).


-----

**STEP 5: Write group object table (conditional: only if changes there)**


**REQ:**
POST coap://{ipv6-unicast}/fp/g (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 13,
"href": "/LDSB1/SOO",
"ga": [2305, 2401],
"cflag": 216 //0b11011000
},
{
"id": 14,
"href": "/LDSB1/RSC",
"ga": [2306],
"cflag": 64 //0b01000000
},
{
"id": 15,
"href": "/LDSB2/SOO",
"ga": [2307, 2401],
"cflag": 216 //0b11011000
},
{
"id": 16,
"href": "/LDSB2/RSC",
"ga": [2308],
"cflag": 64 //0b01000000
}
]


3065

3066 The MaC MAY write only changed group objects (identified by “id”).


**STEP 6: Write Function Point Publisher table (conditional: only if changes there)**


**REQ:**
POST coap://{ipv6-unicast}/fp/p (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 11,
"ia": "<publisher’s IA>",
"ga": [2305, 2306, 2307, 2308]
},
{
"id": 12,
"url": "coap://<IP multicast, unicast address or fqdn>:<port>/<path>",


-----

"ga": [2305, 2306, 2307, 2308]
},
{
"id": 13
}
]


3067

3068 The MaC MAY write only changed table entries (identified by “id”). Entries with an new “id” will create

3069 a new entry.


**STEP 7: Write Function Point Recipient table (conditional: only if changes there)**


**REQ:**
POST coap://{ipv6-unicast}/fp/r (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**

[
{
"id": 9,
"ia": "<recipient’s IA>",
"ga": [2305, 2306, 2307, 2308]
},
{
"id": 10,
"url": "coap://<IP multicast, unicast address or fqdn>:<port>/<path>",
"ga": [2305, 2306, 2307, 2308]
}
]


3070

3071 The MaC MAY write only changed table entries (identified by “id”). Entries with a new “id” will create a

3072 new entry.


**SETP 8: Set State Machine to “loaded”**


**REQ:**
POST coap://{ip-unicast}/a/lsm (Content-Format: application/json (50), OSCORE (code (POST), kid
(<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "loadcomplete"
}


3073

3074 If the intermediate state “loadcompleting” is supported by the Management Server then it may answer

3075 with state “loadcompleting”. The MaC SHALL NOT continue before the Management Server has

3076 reached the state “loadcomplete”.


-----

**SETP 9: Read the configuration fingerprint of the written resources**


**REQ:**
POST coap://{ip-unicast}/.well-known/knx/f (Content-Format: application/json (50), OSCORE (code
(GET), kid (<sia>), kid_context (<contextID>)))
**RES:**
2.05 CONTENT (Content-Format: application/json (50))
**Payload:**
132768923564196


3077

3078 The retrieved checksum MAY be stored by the MaC for a future decision about a differential download.

3079 Finally, the MaC MAY restart the device, to cause a reset of the communication system (e.g., device

3080 group table) in the before configured device.


**SETP 10: Restart device (optional)**


**REQ:**
POST coap://{ipv6-unicast}/.well-known/knx (Content-Format: application/json (50), OSCORE (code
(POST), kid (<sia>), kid_context (<contextID>)))
**Payload:**
{
"cmd": "restart"
}


3081


-----

3082 This page is reserved to list all endnotes

3083

i JSON is used to denote contents in this paper. In practice CBOR encoding is used.


-----

