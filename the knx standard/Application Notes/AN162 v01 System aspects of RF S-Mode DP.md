KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

# Application Note 162/13 v01

**Title:** **System aspects of RF S-Mode**

**Status:** **Date:**

Working Document KSG 2013.07.15

**Date:** 2013.07.15

**Subject:** List and solve system stack relevant aspects resulting from the
integration of RF in ETS

**Documents** **Modified**

[01] Chapter 3/3/7 “Application Layer” v1.3.00 AS of 2010.10.22

[02] Chapter 3/5/2 “Management Procedures”
**Referred**

[03] Chapter 3/2/5 “Radio Frequency” v1.6.01 AS

[04] Chapter 3/3/3 “Network Layer”

[05] Chapter 3/3/4 “Transport Layer”

[06] Chapter 3/5/1 “Resources”

[07] Chapter 3/5/3 “Configuration Procedures”

[08] Volume 6 “Profiles”

[09] AN133 “A_DomainAddressSelective_Read revised”.

[10] AN160 “RF S-Mode device Profiles”

[11] AN161 “Coupler Model 2012”

**Document updates**

**Version** **Date** **Modifications**
KSG502-01 2012.07.12 - Document creation.
KSG502-10 2013.06.21 - Inclusion of feedback of the KSG meetings of 2013.04.19
and of 2013.06.11-12.

                          - Accepted all changes.

                          - NM_Read_SerialNumber_By_ExFactoryState and
NM_Read_SerialNumber_By_PowerReset can be stopped by
255.

                          - Added A_SystemNetworkParameter_Write
KSG502-11 2013.07.08 - Included evaluation of battery state indication: see 3.5.3.
AN162 v01 2013.07.15 - Preparation of the Draft Proposal.

**Contents**

##### 1 Purpose, motivation and scope ......................................................................... 2
 1.1 Purpose .................................................................................................... 2 1.2 Motivation ................................................................................................. 2

Savedate: Filename: page 1 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|Version|Date|Modifications|
|---|---|---|
|KSG502-01|2012.07.12|• <br>Document creation.|
|KSG502-10|2013.06.21|<br> <br>• <br>Inclusion of feedback of the KSG meetings of 2013.04.19<br>and of 2013.06.11-12.<br>- <br>Accepted all changes.<br>- <br>NM_Read_SerialNumber_By_ExFactoryState and<br>NM_Read_SerialNumber_By_PowerReset can be stopped by<br>255.<br>- <br>Added ASystemNetworkParameterWrite|
|KSG502-11|2013.07.08|__<br>• <br>Included evaluation of battery state indication: see 3.5.3.|
|AN162 v01|2013.07.15|<br> <br>• <br>Preparation of the Draft Proposal.|


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

##### 2 Specification ........................................................................................................ 3
 2.1 Terms and definitions ............................................................................... 3 2.2 Stack and communication ........................................................................ 3
 2.2.1 Application Layer ............................................................................... 3 2.3 Resource definition or used Resources.................................................. 11 2.4 Management Procedures ....................................................................... 11
 2.4.1 Management Procedures with A_DomainAddressSelective_Read .................................................. 11 2.4.2 Management Procedures with A_SystemNetworkParameter_Read ................................................ 14 2.4.3 Management Procedures with A_SystemNetworkParameter_Write ................................................ 26 2.5 Configuration Procedures ....................................................................... 27 2.6 Usage and context ................................................................................. 27 2.7 Profile definition ...................................................................................... 27 2.8 Identifiers and discovery ......................................................................... 27

 3 Impact and dependencies ................................................................................ 27
 3.1 System specification (“Handbook”) dependencies ................................. 27
 3.1.1 Adaptations in Volume 6 “Profiles” ................................................... 27 3.2 Configuration interworking ...................................................................... 27 3.3 Run-time Interworking ............................................................................ 28 3.4 Registration and certification .................................................................. 28 3.5 Integration and common tool impact ...................................................... 28
 3.5.1 Aspect 1: Scan the devices in an RF Subnetwork ........................... 28 3.5.2 Aspect 2 ........................................................................................... 31 3.5.3 Aspect 3: battery state indication ..................................................... 32 3.6 Risks and compatibility issues ................................................................ 33
 3.6.1 Reserved APCIs for future system broadcast services .................... 33

## 1 Purpose, motivation and scope

### 1.1 Purpose
The purpose of this document is to formulate functional expectations to the KNX
communication system, resulting from the “Support of RF in ETS”, and to formulate solutions
for this.

This document modifies, completes and replaces AN133 “A_DomainAddressSelective_Read
revised”.

### 1.2 Motivation
This Application Notes is established to answers to aspects of the support of KNX RF
devices in ETS.

**1.** **Aspect 1:** **Scan the devices in an RF Subnetwork**
Please refer to clause 3.5.1 for a detailed description.

Savedate: Filename: page 2 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

**2.** **Aspect 2:** **Program the DoA and IA of a device in which Programming Mode**
**is active, but prevent from accidentally reprogramming a device**
**in a neighbouring installation, in which Programming Mode may**
**be active as well.**
Please refer to clause 3.5.2 for a detailed description.


## 2 Specification

### 2.1 Terms and definitions


 _This clause shall not be integrated in the KNX Specifications._

This document does not introduce neither modify any terms or definitions.


### 2.2 Stack and communication

#### 2.2.1 Application Layer


##### 2.2.1.1 A_DomainAddressSelective_Read

 _This clause is based on clause 3.3.5 “A_DomainAddressSelective_Read” in [01] and shall replace that_
_clause. The original text is in black formatted text; changes and additions are in red co loured text._


 _This specification is repeated here for completeness. It is identical to the specification in AN133_
_“A_DomainAddressSelective_Read revised” (see [09])._

 _This clause shall be integrated in [01]._


The local Application Layer shall accept the service request and shall pass it with a
T_Data_SystemBroadcast.req to the local Transport Layer. The parameter priority shall be
mapped to the corresponding parameter of the T_Data_SystemBroadcast.req primitive, the
TSDU shall be an A_DomainAddressSelective_Read-PDU.

octet 6 octet 7 octet 8 … octet n


APCI ASDU

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

…


1 1 1 1 1 0 0 0 1 1

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI||||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6||
|||||||APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI||||||||||||
|||||||1|1|1|1|1|0|0|0|1|1||||||||||||

|Col1|Col2|Col3|octet n|Col5|Col6|Col7|Col8|Col9|Col10|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
||||||||||||
||1|0|7|6|5|4|3|2|1|0|
||||||||||||
||||||||||||


**Figure 1 - A_DomainAddressSelective_Read-PDU (example)**

The remote Application Layer shall map a T_Data_SystemBroadcast.ind primitive with
TSDU = A_DomainAddressSelective_Read-PDU to an A_DomainAddressSelective_Read.ind primitive. The priority and the ASDU shall be passed to the remote Application
Layer user.


If the remote Application Layer user confirms the A_DomainAddressSelective_Read.ind
primitive, with ASDU specific data and wait times, with an A°DomainAddress_Read.res, then
the remote Application Layer shall accept the service response and shall pass it with a
T_Data_System¬Broadcast.req to the remote Transport Layer; the TSDU shall be an
A_DomainAddress_Response PDU.

Savedate: Filename: page 3 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

A_DomainAddressSelective_Read.req(priority, hop_count_type, ASDU)


priority: system, urgent, normal or low priority

hop_count_type: hop count 7 or standard


ASDU: service specific parameters

A_DomainAddressSelective_Read.Lcon(priority, hop_count_type, domain_address, start_address, range,
a_status)


priority: system, urgent, normal or low priority

hop_count_type: hop count 7 or standard


ASDU: service specific parameters

a_status: ok: A_DomainAddressSelective_Read-PDU sent successfully with
T_Data_SystemBroadcast service


not_ok: transmission of the associated T_Data_SystemBroadcast request frame did
not succeed.

A_DomainAddressSelective_Read.ind(priority, hop_count_type, domain_address, start_address, range)


priority: system, urgent, normal or low priority

hop_count_type: hop count 7 or standard


ASDU: service specific parameters

##### 2.2.1.2 Application Layer Control Field


 _According to the below specifications, also the following new APCIs shall be added to Table 1 “Application_
_Layer control field” in [01]._
_One additional APCI is foreseen for A_SystemNetworkParameter_InfoReport. This service is not yet_
_specified, but the APCI shall be mapped to system broadcast in Media Couplers to an open medium._

**Table 1 – Application Layer control field**


**Communication**

**modes**

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 0 A_SystemNetworkParameter_Read-PDU x x M x x
0 1 1 1 0 0 1 0 0 1 A_SystemNetworkParameter_Response-PDU x x M x x
0 1 1 1 0 0 1 0 1 0 A_SystemNetworkParameter_Write-PDU x x M x x
0 1 1 1 0 0 1 0 1 1 planned for future system broadcast service x x M x x

|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|<br>APCI|<br>APCI/dat|APCI/dat|APCI/dat|APCI/dat|APCI/dat|APCI/dat|APCI/dat|APCI/dat|

|Col1|Col2|Col3|Col4|Col5|Col6|0|1|1|1|0|0|1|0|0|0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||0|1|1|1|0|0|1|0|0|<br> 1|
|||||||0|1|1|1|0|0|1|0|<br> 1|<br>0|
|||||||0|1|1|1|0|0|1|0|1|<br>  1|

|multicast|broadcast|system bro|point-to-po|point-to-po|
|---|---|---|---|---|
|x|x|M|x|x|
|x|x|M|x|x|
|x|x|M|x|x|
|x|x|M|x|x|


Savedate: Filename: page 4 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

 _The latter additional APCI is reserved for system broadcast communication mode as well, yet without_
_already specifying the specific AL-service. This way, together with the specification of the handling of_
_system broadcast services in the specification of the Network Layer for Couplers (clause 2.4.2.4.5 in [04])_
_it will be guaranteed that if ever this service is introduced, it will be mapped to system broadcast in future_
_Media Couplers._

##### 2.2.1.3 A_SystemNetworkParameter_Read

 _This clause shall be added to [01] to the clause 3.3 “3.3 Application Layer Services on System Broadcast_
_communication mode”._

The A_SystemNetworkParameter_Read.req primitive shall be applied by the user of
Application Layer of the MaC to check about the configuration of a network parameter.

   - On an open communication medium, the service request shall be communicated on
point-to-all-points (system broadcast) communication mode.
   - On a closed communication medium, the service request shall be communicated on
point-to-domain, connectionless (broadcast) communication mode.

 _The current specification of the A_NetworkParameter_Read-service allows the use on ptp-cl or on_
_broadcast. At least, it is classified under the broadcast services. However, the specification mentions_
_“point-to-all-points (broadcast) communication mode”. In [05], “point-to-all points” is classified as “system_
_broadcast” and only “point-to-domain” is classified as broadcast. This needs to be corrected in the_
_specification of A_NetworkParameter_Read in [01]!_

A device shall respond to the service if it complies with the conditions specified in the service
parameters.

The local Application Layer shall accept the service request.

   - If the local medium is an open medium, then it shall pass the service request with a
T_Data_SystemBroadcast.req to the local Transport Layer.
   - If the local medium is a closed medium, then it shall pass the service request with a
T_Data_Broadcast.req to the local Transport Layer.
The TSDU shall in both cases always be an A_SystemNetworkParameter_Read-PDU. The
parameter priority, implicitly with value ‘system’, shall be mapped to the corresponding
parameter of the T_Data_SystemBroadcast.req respectively the T_Data_Broadcast.req
primitive; the TSDU shall be an A_SystemNetworkParameter_Read-PDU.

If the remote Application Layer receives a T_Data_SystemBroadcast.ind or a T_Data_Broadcast.ind with TSDU = A_SystemNetworkParameter_Read-PDU, it shall map the
service primitive to an A_SystemNetworkParameter_Read.ind primitive. The parameter
priority, implicitly with value ‘system’, shall be mapped to the corresponding parameter
priority of the A_SystemNetworkParameter_Read.ind primitive.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11 ... n
APCI parameter_type test_info
object_type PID reserved operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 0 0 0 0 0

**Figure 2 - A_SystemNetworkParameter_Read-PDU (example)**

If the remote application process finds the conditions for replying are not fulfilled, this is if it
does not support the read network parameter or the check of its investigated parameters
against the test information is negative, it shall ignore the service.

Savedate: Filename: page 5 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11 ... n|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|reserved|reserved|reserved|reserved|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

If the remote application process accepts the service, it shall respond to the A_SystemNetworkParameter_Read.ind primitive with an A_SystemNetworkParameter_Read.res primitive
after a random wait time that is per parameter_type specified in [02]. The data in the
response shall depend on the network parameter type being read.

The remote Application Layer shall accept the service response.

   - If the local medium is an open medium, then it shall pass the service response with
a T_Data_SystemBroadcast.req to the local Transport Layer
   - If the local medium is a closed medium, then it shall pass the service response with
a T_Data_Broadcast.req to the local Transport Layer
The TSDU shall always be an A_SystemNetworkParameter_Response-PDU.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 1

octet 12 ... n octet n + 1 ... m
test_info
test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Figure 3 - A_SystemNetworkParameter_Response-PDU (example)**

On reception of a T_Data_SystemBroadcast.ind primitive or a T_Data_Broadcast.ind, with
TSDU = A_SystemNetworkParameter_Response-PDU the local Application Layer shall map
this service to an A_SystemNetworkParameter_Read.Acon primitive. The parameter priority,
implicitly with value ‘system’, shall be mapped to the corresponding parameter priority of the
A_SystemNetworkParameter_Read.Acon primitive. The parameter TSAP shall be mapped
to the corresponding parameter ASAP of the A_SystemNetworkParameter_Read.Acon
primitive.

**Error and exception handling**

   - If the remote application process receives an A_SystemNetworkParameter_ReadPDU with an unknown object_type within parameter_type, this is, object_type is not
supported by the remote application, then it shall respond with an A_SystemNetworkParameter_Response-PDU with object_type = FFFFh, PID = FFh and
without test_info and test_result fields.

   - If the remote application process receives an A_SystemNetworkParameter_ReadPDU with a known object_type but with unknown PID within parameter_type, this is,
the requested PID is not supported by the remote application, then it shall respond
with an A_SystemNetworkParameter_Response-PDU with object_type = requested
object_type, PID = FFh and without test_info and test_result fields.

   - The negative response for a negative result of a check of the investigated parameters against the test information is specified per parameter_type either in [02] or

[08].

Savedate: Filename: page 6 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||||||

|octet 12 ... n|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet n + 1 ... m|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|test_result|test_result|test_result|test_result|test_result|test_result|test_result|test_result|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||
|||||||||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

A_SystemNetworkParameter_Read.req(hop_count_type, parameter_type, priority, test_info)

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

test_info: value against which the resource indicated by parameter_type is tested

A_SystemNetworkParameter_Read.Lcon(hop_count_type, parameter_type, priority, test_info, a_status)

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

test_info value against which the resource indicated by parameter_type is tested

a_status: ok: A_NetworkParameter_Read.req sent successfully with T_Data_Broadcast – or
with T_Data_SystemBroadcast-service

not_ok: transmission of the associated T_Data_Broadcast – or T_DataSystem_Broadcast
request frame did not succeed

A_SystemNetworkParameter_Read.ind(hop_count_type, parameter_type, priority, test_info)

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type
and Property Identifier

priority: system, urgent, normal or low priority

test_info: value against which the resource indicated by parameter_type is tested

A_SystemNetworkParameter_Read.res(hop_count_type, parameter_type, priority, test_info, test_result)

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

test_info: value against which the resource indicated by parameter_type is tested

test_result: parameter_type dependent response

Savedate: Filename: page 7 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

A_SystemNetworkParameter_Read.Rcon(hop_count_type, parameter_type, priority, test_info,
test_result, a_status)

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

test_info: value against which the resource indicated by parameter_type is tested

test_result: parameter_type dependent response

a_status: ok: A_NetworkParameter_Read.res sent successfully with T_Data_Broadcast or
T_Data_Individual service

not_ok: transmission of the associated T_Data_Broadcast or T_Data_Individual request
frame did not succeed

A_SystemNetworkParameter_Read.Acon(ASAP, hop_count_type, parameter_type, priority, test_info,
test_result)

ASAP: local reference of the Service Access Point or individual address

hop_count_type: hop count 7 or standard

parameter_type: network parameter type that is verified, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

test_info: value against which the resource indicated by parameter_type is tested

test_result: parameter_type dependent response

##### 2.2.1.4 A_SystemNetworkParameter_Write
The A_SystemNetworkParameter_Write.req primitive shall be applied by the user of
Application Layer of the MaC to set network configuration information in one or multiple
management servers.

   - On an open communication medium, the service request shall be communicated on
point-to-all-points (system broadcast) communication mode.
   - On a closed communication medium, the service request shall be communicated on
point-to-domain, connectionless (broadcast) communication mode.

The local Application Layer shall accept the service request.

   - If the local medium is an open medium, then it shall pass the service request with a
T_Data_SystemBroadcast.req to the local Transport Layer.
   - If the local medium is a closed medium, then it shall pass the service request with a
T_Data_Broadcast.req to the local Transport Layer.
The TSDU shall in both cases always be an A_SystemNetworkParameter_Write-PDU. The
parameter priority, implicitly with value ‘system’, shall be mapped to the corresponding
parameter of the T_Data_SystemBroadcast.req respectively the T_Data_Broadcast.req
primitive; the TSDU shall be an A_SystemNetworkParameter_Write-PDU.

Savedate: Filename: page 8 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

If the remote Application Layer receives a T_Data_SystemBroadcast.ind or a T_Data_Broadcast.ind with TSDU = A_SystemNetworkParameter_Write-PDU, it shall map the
service primitive to an A_SystemNetworkParameter_Write.ind primitive. The parameter
priority, implicitly with value ‘system’, shall be mapped to the corresponding parameter
priority of the A_SystemNetworkParameter_Write.ind primitive.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 1 0 0 0 0 0

octet 12…octet n

value
7 6 5 4 3 2 1 0

**Figure 4 - A_SystemNetworkParameter_Write-PDU (example)**

Prior to passing an A_SystemNetworkParameter_Write.Lcon primitive to the local application
process, the local Application Layer shall need a T_Data_SystemBroadcast.con or a
T_Data_Broadcast.con, depending on the communication mode of the service request, from
the local Transport Layer. If the confirmation is positive (t_status = ok), the local Application
Layer shall pass a positive A_SystemNetworkParameter_Write.Lcon(a_status = ok) to the
local application process. If the confirmation is negative (t_status = not_ok), the local
Application Layer shall pass an A_SystemNetworkParameter_Write.Lcon
(a_status = not_ok) to the local user indicating that the transmission of the associated
Transport Layer specification did not succeed.

NOTE 1 This service is as such not confirmed by the remote partner. The A_SystemNetworkParameter_Write.Lcon is only a
local confirmation caused by the local Transport Layer confirmation, basically caused by the Data Link Layer confirmation (ok,
not_ok).

A_SystemNetworkParameter_Write.req(hop_count_type, parameter_type, priority, value)

hop_count_type: hop count 7 or standard

parameter_type: the network parameter that shall be set, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

value: value to which the network parameter indicated by parameter_type shall be set

Savedate: Filename: page 9 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|||||
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|reserved|reserved|reserved|reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|1|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12…octet n|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|value|value|value|value|value|value|value|value|
|7|6|5|4|3|2|1|0|
|||||||||
|||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

A_SystemNetworkParameter_Write.Lcon(hop_count_type, parameter_type, priority, value, a_status)

hop_count_type: hop count 7 or standard

parameter_type: the network parameter that shall be set, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

value: value to which the network parameter indicated by parameter_type shall be set

a_status: ok: A_SystemNetworkParameter_Write.req sent successfully with T_Data_Broadcast
– or with T_Data_SystemBroadcast- service

not_ok: Transmission of the associated T_Data_Broadcast – or with T_Data_SystemBroadcast request frame did not succeed

A_SystemNetworkParameter_Write.ind(hop_count_type, parameter_type, priority, value)

hop_count_type: hop count 7 or standard

parameter_type: the network parameter that shall be set, structured as Interface Object Type and
Property Identifier

priority: system, urgent, normal or low priority

value: value to which the network parameter indicated by parameter_type shall be set

**Error and exception handling**

- **Unknown parameter_type**

If an unknown parameter_type is received, the receiver shall neglect the A_SystemNetworkParameter_Write-PDU without further action.

- **Object Type and PID not accessible through A_SystemNetworkParameter_Write**

The A_SystemNetworkParameter_Write-service is no generic function to access any
Property. Instead, the accessibility of a Property through this service is limited to those
Properties for which this is indicated in [08].

- **Property specific use of A_SystemNetworkParameter_Write**

The service parameters Object Type, PID and Value are inherited from the access to Data
Properties using e.g. A_PropertyValue_Write. Yet, this service may not only be used to
simply set the Property Value, but may instead have a use case specific meaning and
interpretation in the field “value”, similar to the service A_FunctionProperty_Command. It is
for each use of this service per Property specified in Chapter 3/5/1 “Resources” ([06]) or in
Chapter 3/5/2 “Management Procedures” ([02]) how the field “value” shall be interpreted.

- **Data consistency**

In general, if over this service data is accessed that is also accessible over additional
mechanisms, like over the A_PropertyValue_Read or the A_PropertyValue_Write, via dedicated services like the A_IndividualAddress_Read or the A_IndividualAddress_Write, as a
memory mapped Resource or via local access using EMI, the receiver shall take care of
consistency between these access modes.

The network – and device Management Procedures (see [02]) that base on this Application
Layer service may specify procedure specific error handling.

Savedate: Filename: page 10 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

### 2.3 Resource definition or used Resources


 _This clause shall not be integrated in the KNX Specifications._

This document does not introduce neither modify any Resources.


### 2.4 Management Procedures

 _This clause replaces the specification of the Management Procedures that are specified in AN133_
_“A_DomainAddressSelective_Read revised” (see [09]). Differences compared to AN133 are given in blue_
_text._


#### 2.4.1 Management Procedures with A_DomainAddressSelective_Read
The Management Client (this is the local of Application Layer user) shall apply the
A_DomainAddressSelective_Read.req primitive to read the KNX PL110 - or KNX RF DoA of
one or more devcies without using a specific Domain Address.

The type of network Resources that shall be read shall be indicated by field Type in the
ASDU. The following network Resources can be read.


   - Type 0: The Domain Address of one or more KNX PL110 MaS.
   - Type 1: The Domain Address of one or more KNX RF MaS.
This service is particularly used to check the existence of any open media devices with the
specified Domain Address in possibly neighbouring installations.

There is no common general behaviour specified for the MaS. The reaction of the MaS has
to be specified case per case. In case the MaS receives an A_DomainAddressSelective_Read-PDU with a value of the field Type that it does not support, or with further service
parameters for which no reaction is specified, then the MaS shall not react.

##### 2.4.1.1 Type 00h – single octet DoA


 _This is a redefinition of the existing specification. In order to be able to introduce a field Type, the higher_
_octet of the legacy 2 octet Domain Address, is redefined to be a field Type and the Domain Address is_
_reduced to a single octet, as is anyhow the case for KNX PL110._

The ASDU of the A_DomainAddressSelective_Read-PDU shall contain the following fields.



- type: This shall be the type of call of the A_DomainAddressSelective_Readservice. This field shall have the value 00h.

- start_address: This shall be the start_address of the range of Individual Addresses to
which the Management Server shall compare its own Individual Address.



- range: This shall be the range of Individual Addresses, starting from start_address
and ending at start_address + range to which a Management Server shall
compare its own Individual Address.

octet 8 octet 9 octet 10 octet 11 octet 12

start_address start_address
type = 00 domain_addres range

(high) (low)

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 0

**Figure 5 - A_DomainAddressSelective_Read-SDU – Type 00h (example)**

|octet 8|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 10|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 11|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 12|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|range|range|range|range|range|range|range|range|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|0|0|||||||||||||||||||||||||||||||||


Savedate: Filename: page 11 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

The Management Server shall ignore the A_DomainAddressSelective_Read.ind primitive
with Type 00h, if its Domain Address does not match with the argument domain_address, or
its Individual Address is lower than the argument start_address or its Individual Address is
higher than the (start_address + range).


If Management Server accepts the A_DomainAddressSelective_Read.ind primitive it shall
respond to the Application Layer with an A_DomainAddress_Read.res primitive after a wait
time: (individual_address - start_address) x Tmedia[ 1)]. If the received argument range is lower
than FFh and the Management Server receives during the waiting time an A_DomainAddress_Response-PDU then it shall terminate the transmission of its own response.

 _AN133 “A_DomainAddressSelective_Read revised” (see [09]) did not explicitly specify the type-field in the_
_Response-PDU._


The A_DomainAddress_Response-PDU shall contain the fields Type and domain_address
as show in Figure 6.

octet 6 octet 7 octet 8 octet 9
APCI type = 00h domain_address
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 1 1 1 1 0 0 0 1 0

**Figure 6 - A_DomainAddress_Response-PDU for a type 0 (1 octet DoA) (example)**

|6.|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 6|octet 6|octet 6|octet 6|octet 6|octet 6|octet 6|octet 6|octet 7|octet 7|octet 7|octet 7|octet 7|octet 7|octet 7|octet 7|octet 8|octet 8|octet 8|octet 8|octet 8|octet 8|octet 8|octet 8|octet 9|octet 9|octet 9|octet 9|octet 9|octet 9|octet 9|octet 9|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|||||||||||||||||
|||||||1|1|1|1|1|0|0|0|1|0|||||||||||||||||


##### 2.4.1.2 Type 01h – six octet DoA

2.4.1.2.1 General requirements
The ASDU of the A_DomainAddressSelective_Read-PDU shall contain the following fields.



- type: This shall be the type of call of the A_DomainAddressSelective_Readservice. This field shall have the value 01h.

- domain_address_start: This shall be the start_address of the range of Domain Addresses to

which the Management Server shall compare its own Domain Address.



- domain_address_end: This shall be the end_address of the range of Domain Addresses to which

the Management Server shall compare its own Domain Address.

octet 8 octet 9 octet 14 octet 15 octet 20 octet 21


type = 01h domain_address_start domain_address_end reserved

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0  7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0  7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0


0 0 0 0 0 0 0 1                    0 0 0 0 0 0 0 0

**Figure 7 - A_DomainAddressSelective_Read-SDU – Type 01h (example)**

|octet 8|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|
|7|6|5|4|3|2|1|0|7|6|5|4|<br>            3|<br>             2|<br>              1|<br>               0|<br>|
||||||||||||||||||
|0|0|0|0|0|0|0|1||||||||||

|Col1|octet 14|Col3|Col4|Col5|Col6|Col7|Col8|Col9|octet 15|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|dress_start|dress_start|dress_start|dress_start|dress_start|dress_start|dress_start|dress_start|dress_start|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|
|<br>|<br>                   7|<br>                    6|<br>                     5|<br>                      4|3|2|1|0|7|6|5|4|3|<br>                                2|<br>                                 1|<br>                                  0|<br>|
|||||||||||||||||||
|||||||||||||||||||

|Col1|octet 20|Col3|Col4|Col5|Col6|Col7|Col8|Col9|octet 21|Col11|Col12|Col13|Col14|Col15|Col16|Col17|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|
|<br>|<br>                                      7|<br>                                       6|<br>                                        5|<br>                                         4|3|2|1|0|7|6|5|4|3|2|1|0|
||||||||||||||||||
||||||||||0|0|0|0|0|0|0|0|


The Management Server shall only accept the A_DomainAddressSelective_Read.ind
primitive with Type 01h if its Domain Address is within the range domain_address_start to
domain_address_end; else, it shall ignore the service.

1) Tmedia is specified in [05].


Savedate: Filename: page 12 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

If Management Server accepts the A_DomainAddressSelective_Read.ind primitive it shall
respond to the Application Layer with an A_DomainAddress_Read.res primitive after a
random wait time from 0 s to 2 s.


EXAMPLE 1 To have an equal spreading of the responses, this random wait time may for instance be based on the
least significant octet to the KNX Serial Number of the Management Server device.

The A_DomainAddress_Response-PDU shall contain the fields Type and domain_address
as show in Figure 8.


octet 6 octet 7 octet 8 octet 9 octet 14


APCI type = 01h domain_address

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 … 7 6 5 4 3 2 1 0

1 1 1 1 1 0 0 0 1 0

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|dom|dom|dom|dom|dom|dom|dom|dom|dom|dom|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|<br>|<br>|
|||||||APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|||||||||||||||||||
|||||||1|1|1|1|1|0|0|0|1|0|||||||||||||||||||

|Col1|Col2|octet 14|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|ess|ess|ess|ess|ess|ess|ess|ess|ess|ess|
|<br>|<br>|7|6|5|4|3|2|1|0|
|||||||||||
|||||||||||


**Figure 8 - A_DomainAddress_Response-PDU for a type 1 (6 octet DoA) (example)**

2.4.1.2.2 NM_DomainAddress_Scan2


 _This is the specification inherited from AN133 ([09])._

**Use**


This Management Procedure shall be used by a Management Client to scan for the
presence of any devices with a 6 octet Domain Address that lies within a given range.

It returns whether or not there are any devices with a Domain Address in the scanned range.
The devices respond with their Individual Address in the Source Address field of the
responses, so the Individual Addresses are known by this as well. Additionally, on KNX RF,
as the devices shall respond in system broadcast communication mode, the AET shall be 0
and the response shall contain the KNX Serial Number of the responding device. This is
actually the key data retrieved by this procedure.


The MaC shall not execute this Management Procedure with values of any DoA in which the
MSB differs from 00h.

**Used Application Layer Services for management**



- A_DomainAddressSelective_Read
(please note that this service responds with the A_DomainAddress_Response-PDU).

**Parameters of the Management Procedure**


NM_DomainAddress_Scan2(/* [in] */ mpp_DoA_start, /* [in] */ mpp_DoA_end,
/* [out] */ mmp_KNX_SN[],/* [out] */ mmp_IA[], /* [out] */ mpp_DoA_response[])

mpp_DoA_start: This shall be lower limit of the range of Domain Addresses
in which the presence of devices shall be searched.

mpp_DoA_end: This shall be upper limit of the range of Domain Addresses
in which the presence of devices shall be searched.


mpp_KNX_SN[]: This shall be the collection of all KNX Serial Number values
that have been used by the responding devices.


mpp_IA[]: This shall be the collection of all Individual Address values
that have been used by the responding devices.

Savedate: Filename: page 13 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

mpp_DoA_response[]: This shall be the DoA with which the Management Server
has responded. There can be 0, 1 or multiple answers with
the same of different DoA-values.

The A_DomainAddressSelective_Read-PDU shall be transmitted with priority System.

Management Management
Client Server (device)

1.

A_DomainAddressSelective_Read-PDU

(type = 01h,
domain_address_start = mmp_DoA_start
domain_address_end = mpp_DoA_end)

If the Management Server finds the conditions for replying to the message fulfilled,

then it shall transmit a response.
A_DomainAddress_Response-PDU
(mpp_DoA_response= domain_address)

#### 2.4.2 Management Procedures with A_SystemNetworkParameter_Read

##### 2.4.2.1 Introduction (informative)
This procedure shall be the alternative to the procedure NM_NetworkParameter_Read_R on
system broadcast communication mode.

##### 2.4.2.2 General Procedure
**Precondition**

This procedure shall be executed on system broadcast communication mode. This service is
designed for the management (discovery, setting and diagnostics) of KNX open medium
specific parameters. This is typically done at the beginning of the Configuration, when the
Individual Addresses of the devices in the communication path between MaC and MaS have
not yet been established. It is thus not possible to execute the procedure “Discovery of
maximal Frame length” as specified in [07]. If using this procedure, the MaC shall thus make
sure that the size request – and response-PDUs remains limited to an APDU of 14 octets at
maximum.

**Use**

The MaC shall use this Management Procedure to find if a system- or device parameter of a
given type and value is used in the network or not, using system broadcast communication
mode on KNX open media.

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read

Savedate: Filename: page 14 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

The ASDU of the A_SystemNetworkParameter_Read-PDU shall contain the following fields.

- object_type: Value that shall be used by the MaC for the subfield object_type of the
field parameter_type of the A_SystemNetworkParameter_Read-PDU.

- PID: Value that shall be used by the MaC for the subfield PID of the field
parameter_type of the A_SystemNetworkParameter_Read-PDU.

- test_info: Value that shall be used by the MaC for the field test_info of the
A_SystemNetworkParameter_Read-PDU.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11 ... n
APCI parameter_type test_info
object_type PID reserved operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 0 0 0 0 0

**Figure 9 - A_SystemNetworkParameter_Read-PDU (example)**

The conditions for the MaS to respond to this service depend on the specific use and are
given in the detailed procedures below.

- If the MaS receives an A_SystemNetworkParameter_Read PDU of which it does not
support any of the service parameters (object_type, PID or further) or the reaction for
these service parameters is not specified, then it shall not react.

- If the MaS finds the conditions for replying are not fulfilled, this is if the check of its
investigated parameters against the test information is negative, then it shall ignore the
service.

- If the MaS does accept the service, it shall respond with an A_SystemNetworkParameter_Read.res primitive after a random wait time. This random wait time is specified
either per parameter_type in the detailed procedures below; additionally or alternatively,
it is possible that the random wait time is communication by the MaC as part of the
test_info. The data in the response shall depend on the network parameter type being
read. The TSDU shall be an A_SystemNetworkParameter_Response-PDU as shown
in Figure 10.

- The MaC shall not call this service with any service parameters (parameter_type,
test_info) that are not specified in this paper.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 1

Savedate: Filename: page 15 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11 ... n|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|reserved|reserved|reserved|reserved|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|||||||||

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

octet 12 ... n octet n + 1 ... m
test_info
test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Figure 10 - A_SystemNetworkParameter_Response-PDU (example)**

##### 2.4.2.3 Overview of the accepted usage (informative)
All values are decimal, unless indicated otherwise. Indexes denote the bit length.

 - **NM_Read_SerialNumber_By_ProgrammingMode**

To read the KNX Serial Numbers of all devices in which Programming Mode is active.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **01h**
The MaS shall respond only if its Programming Mode
is active.
test_result: KNX Serial Number of responder
random wait time: constant: 0 s to 1 s

 - **NM_Read_SerialNumber_By_ExFactoryState**

To discover the devices in the network that have the factory default Domain Address and the
factory default Individual Address.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **02h**
The MaS shall respond only if its Domain Address and
its Individual address both have their factory default
value.
**wait_time:** 1 octet: random wait time expressed in seconds (0 s to
255 s).
Pending responses can be cancelled. Please check
the specification of NM_Read_SerialNumber_By_ExFactoryState.
test_result: KNX Serial Number of responder
random wait time: variable: contained in test_info

 - **NM_Read_SerialNumber_By_PowerReset**

To discover the devices in the network of that have just been powered off and on again.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **03h**
The MaS shall respond only if it has just been powered
on.
**wait_time:** 1 octet: random wait time expressed in seconds (0 s to
255 s).
Pending responses can be cancelled. Please check
the specification of NM_Read_SerialNumber_By_PowerReset.
test_result: KNX Serial Number of responder
random wait time: variable: contained in test_info

Savedate: Filename: page 16 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 12 ... n|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet n + 1 ... m|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|test_result|test_result|test_result|test_result|test_result|test_result|test_result|test_result|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||
|||||||||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

 - **Manufacturer specific use of A_SystemNetworkParameter_Read**

To perform manufacturer specific operations on system broadcast communication mode.
object_type: any Interface Object Type: manufacturer and use specific
PID: any Property Identifier: manufacturer and use specific
test_info: **operand:** **FEh**
The use and response conditions are implementation
specific.
**manufacturer_id:** Manufacturer Code of the MaS that may react to the

service.
The test_info may contain additional implementation specific fields.
test_result: manufacturer and use specific
random wait time: manufacturer and use specific
The cancellation of pending responses is optionally possible; the methods
are implementation specific without further requirements.

Other tests will be added in the future when needed.

##### 2.4.2.4 Detailed procedure 1 – NM_Read_SerialNumber_By_ProgrammingMode
**Use**

This Network Management Procedure shall be used to read the KNX Serial Number of
devices in which Programming Mode is active.

This procedure shall use system broadcast communication mode and is by that independent
of the configuration of the Domain Addresses and the Individual Addresses of the devices
and the (Media) Couplers.

The test_info shall consist of a single octet operand 01h.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12
test_info
operand
7 6 5 4 3 2 1 0

01h

**Figure 11 - A_SystemNetworkParameter_Read-PDU**
**with NM_Read_SerialNumber_By_ProgrammingMode**

Savedate: Filename: page 17 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|
|01h|01h|01h|01h|01h|01h|01h|01h|
|||||||||
|||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 18
test_info test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

01h KNX Serial Number

**Figure 12 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_ProgrammingMode**

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read

**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read in this service, if its
Programming Mode is active.

The random wait time for responding in this procedure shall be between 0 s and 1 s.

**Parameters of the Management Procedure**

NM_Read_SerialNumber_By_ProgrammingMode(/* [out] */ mpp_KNX_Serial_Number[])

mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that

respond to this procedure, that is, in which Programming Mode
is active.
This Management Procedure does not have input parameters.

The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.

Savedate: Filename: page 18 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|01h|01h|01h|01h|01h|01h|01h|01h|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
|||||||||||||||||||
|||||||||||||||||||

|Col1|Col2|octet 18|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**


Management
Client


Management
Server (device)


A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 01h)

If Programming Mode is active in the MaS, then the MaS shall respond with the KNX Serial Number of

the MaS in the response, else, the MaS shall ignore the service.
A_SystemNetworkParameter_Response-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 01h,
test_result = KNX Serial Number)

NOTE 2 The value 01h of test_info identifies this specific use of A_SystemNetworkParameter_Read with the PID_SERIAL_NUMBER. It shall not be mistaken for a comparison between the state of the Programming Mode (‘1’ = ‘active’) and the value
01h.

##### 2.4.2.5 Detailed procedure 2 – NM_Read_SerialNumber_By_ExFactoryState
**Use**

This Network Management Procedure shall be used to scan for devices in the network of
which both the Domain Address (if available) and the Individual Address have their factory
default value.

The factory default values are specified here:

    - for the DoA Realisation Type 1 (2 octets): in [11] clause 2.4.4.3.2.1.4 “Default value and Master Reset” in
the specification of PID_PL110_DOA

    - for the DoA Realisation Type 2 (6 octets): in [06] clause 3.2.4

    - for the Individual Address: in [06] clause 3.3

This procedure shall use system broadcast communication mode and is by that independent
of the configuration of the Domain Addresses and the Individual Addresses of the devices
and the (Media) Couplers.

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read

**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read-PDU in this service, if
both its Domain Address (if available) and its Individual Address have the factory default
value.

The random wait time for responding in this procedure shall be variable and shall be
contained in the field wait_time in the A_SystemNetworkParameter_Read-PDU as specified
in Figure 13.

Savedate: Filename: page 19 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

If the MaS concludes on responding to this service request, then it shall delay its response
until a random time in the period from 0 s to the number of seconds as indicated in the
wait_time in the request.

- If during this delay the MaS receives a next A_SystemNetworkParameter_Read-PDU
with the same parameters (object_type, PID and operand), but with the random wait time
equal to 255 (FFh), then it shall cancel its response and not send an A_SystemNetworkParameter_Response PDU.

- If however the delay has already elapsed and the MaS has already requested the
transmission of its request, then there are no further requirements.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13
test_info
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

02h

**Figure 13 - A_SystemNetworkParameter_Read-PDU**
**with NM_Read_SerialNumber_By_ExFactoryState**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 14 octet 19
test_info test_result
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

02h KNX Serial Number

**Figure 14 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_ExFactoryState**

NM_Read_SerialNumber_By_ExFactoryState(/* [out] */ mpp_KNX_Serial_Number[])

mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that

respond to this procedure, that is, which have the factory
default DoA and IA.
This Management Procedure does not have input parameters.

Savedate: Filename: page 20 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|operand|operand|operand|operand|operand|operand|operand|operand|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|02h|02h|02h|02h|02h|02h|02h|02h|||||||||
|||||||||||||||||
|||||||||||||||||

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 14|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|operand|operand|operand|operand|operand|operand|operand|operand|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|02h|02h|02h|02h|02h|02h|02h|02h|||||||||KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
|||||||||||||||||||||||||||
|||||||||||||||||||||||||||

|Col1|Col2|octet 19|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.


Management
Client

**Risks**


Management
Server (device)
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 02h + random_wait_time)

If MaS has the factory default DoA (if available) and the factory default
IA, then the MaS shall respond with the KNX Serial Number of the MaS
in the response, else the MaS shall ignore the service. The response

shall be sent at a random time in between 0 s and wait_time.
start random wait
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 02h +
random_wait_time = 255)

If during the random wait period an identical request is received with the

field random_wait_time = 255, then the MaS shall not respond.

end random wait
If the random wait time elapses with a 2[nd] identical request with
random_wait_time = 255 is received, then the MaS shall request the

transmission of its response.
A_SystemNetworkParameter_Read-PDU
(operand = 02h, object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info =operand 02h + random_wait_time,
test_result = KNX Serial Number)



- As this procedure uses system broadcast communication mode, if there are devices in
ex-factory state outside the managed network, in neighbouring networks, these will
respond as well.

##### 2.4.2.6 Deatiled procedure 3 – NM_Read_SerialNumber_By_PowerReset
**Use**

This Network Management Procedure shall be used to scan for devices in the network of
which have just been powered on.

This procedure shall help identifying and addressing “inaccessible devices”.

Opposite to the procedure NM_Read_SerialNumber_By_ExFactoryState, this procedure
requires a human activity on the device and therefore has a better probability of excluding
devices in neighbouring installations.

This procedure shall use system broadcast communication mode and is by that independent
of the configuration of the Domain Addresses and the Individual Addresses of the devices
and the (Media) Couplers.

Savedate: Filename: page 21 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

**Used Application Layer Services for Management**

  - A_DomainAddressSelective_Read

**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read-PDU in this service, if it
has been powered on since less than 4 minutes. After 4 minutes, the device shall no longer
react to this service with this operand. To these 4 minutes, there may be a tolerance of
30 seconds.

Additionally, the MaS shall not react if it has already replied to a preceding request since it
has last powered on. This requires that the MaS keeps track of this.

If the MaS concludes on responding to this service request, then it shall delay its response
until a random time in the period from 0 s to the number of seconds as indicated in the
wait_time in the request.

- If during this delay the MaS receives a next A_SystemNetworkParameter_Read-PDU
with the same parameters (object_type, PID and operand), but with the random wait time
equal to 255 (FFh), then it shall cancel its response and not send an A_SystemNetworkParameter_Response PDU.

- If however the delay has already elapsed and the MaS has already requested the
transmission of its request, then there are no further requirements.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13
test_info
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

03h

**Figure 15 - A_SystemNetworkParameter_Read-PDU**
**(Domain Parameter Read) with NM_Read_SerialNumber_By_PowerReset**

Savedate: Filename: page 22 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|operand|operand|operand|operand|operand|operand|operand|operand|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|03h|03h|03h|03h|03h|03h|03h|03h|||||||||
|||||||||||||||||
|||||||||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 14 octet 19
test_info test_result
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

03h KNX Serial Number

**Figure 16 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_PowerReset**

**Requirements to the MaC**

The MaC shall send the A_SystemNetworkParameter_Read-PDU in this procedure
NM_Read_SerialNumber_By_PowerReset and repeat every 30 s during 4 minutes. It shall
collect all the answers that arrive.

EXAMPLE 2 It is possible that the installer resets the MaS firstly and that the MaS completes its power up
procedure before the installer triggers the procedure on the MaC (ETS). In this case, the MaS
(device) will react immediately.

A_SystemNetworkParameter_Read-PDU

MaC

t

A_SystemNetworkParameter_Response-PDU

MaS

t

**Figure 17 – The MaC triggers the procedure**
**well after the MaS completes its power up**

EXAMPLE 3 If the installer firstly triggers the procedure on the MaC (ETS) and then only resets the power of
the MaS, then the MaS will not react.

A_SystemNetworkParameter_Read-PDU

MaC

t

The MaS has not The MaS is restarjust powered and ting and does not
does not respond. receive the request.

MaS

t

**Figure 18 – The MaC triggers the procedure**
**before the MaS completes its power up**

Savedate: Filename: page 23 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|octet 8|Col17|Col18|Col19|Col20|Col21|Col22|Col23|octet 9|Col25|Col26|Col27|Col28|Col29|Col30|Col31|octet 10|Col33|Col34|Col35|Col36|Col37|Col38|Col39|octet 11|Col41|Col42|Col43|Col44|Col45|Col46|Col47|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|10|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI<br>APCI|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|<br>Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0 1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|octet 14|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|operand|operand|operand|operand|operand|operand|operand|operand|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|||||||||||
|7|6|5|4|3|2|1|0|7|6|5 4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|03h|03h|03h|03h|03h|03h|03h|03h||||||||KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
||||||||||||||||||||||||||
||||||||||||||||||||||||||

|Col1|Col2|octet 19|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||

|MaS|Col2|Col3|Col4|
|---|---|---|---|

|MaC|Col2|
|---|---|
|||
||t|
|MaS <br>The MaS has not<br>just powered and<br>does not respond. <br>The MaS is<br>ting and do<br>receive the|restar-<br>  es not<br>  request.|


The MaS has not
just powered and
does not respond.


A_SystemNetworkParameter_Read-PDU


A_SystemNetworkParameter_Response-PDU


MaC


MaS


t


t


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

Therefore, the MaC shall repeat the A_ SystemNetworkParameter_Read-PDU with a period of
30 s.

A_SystemNetworkParameter_Read-PDU

MaC

t


A_SystemNetworkParameter_Read-PDU


t


A_SystemNetworkParameter_Response-PDU

|MaC|Col2|Col3|
|---|---|---|
|MaC|MaC||
|MaS|MaS|t <br>A_SystemNetworkParameter_Re|
|MaS|||
|||t|


A_SystemNetworkParameter_Response-PDU


MaS


t


**Figure 19 – The MaC repeats the request periodically. The MaS responds**
**on the first request that it receives after power up.**

To make sure that the MaS reacts, the MaC repetition period shall be sufficiently smaller
(30 s) than the after powering up during which the MaS reacts to the request.

NM_Read_SerialNumber_By_PowerReset(/* [out] */ mpp_KNX_Serial_Number[])

mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that

respond to this procedure, that is, which are powered up in
the preceding 4 minutes.
This Management Procedure does not have input parameters.

The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.


MaC


Management
Client


Management
Server (device)


A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h + random_wait_time)

If MaS is powered up in the last 4 minutes, then the MaS shall respond
with the KNX Serial Number of the MaS in the response, else, the MaS
shall ignore the service. The response shall be sent at a random time

in between 0 s and wait_time.
start random wait
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h
+ random_wait_time = FFh)

If during the random wait period an identical request is received with the

field random_wait_time = 255, then the MaS shall not respond.

end random wait

Savedate: Filename: page 24 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

If the random wait time elapses with a 2[nd] identical request with
random_wait_time = 255 is received, then the MaS shall request the

transmission of its response.
A_SystemNetworkParameter_Read-PDU

(test_info = operand = 02h,
object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h + random_wait_time,
test_result = KNX Serial Number)

**Risks**

- As this procedure uses system broadcast communication mode, in the unlikely case that
also devices outside the managed network, in neighbouring networks have just been
powered on, these will respond as well.

##### 2.4.2.7 Operand FEh – Manufacturer specific use of A_SystemNetworkParameter_Read
This procedure shall be used for manufacturer specific Network Configuration Procedures.

This allows for the manufacturer specific support of A_SystemNetworkParameter_Read

   - for standard Properties for which no standard use of A_SystemNetworkParameter_Read is specified, and
   - for non-standard Interface Objects and - Properties.

In the A_SystemNetworkParameter_Read-PDU, the ASDU shall be composed of the
Interface Object Type, the PID, the operand FEh and the 2 octet manufacturer code; further
manufacturer specific service parameters may follow.

The A_SystemNetworkParameter_Read-PDU for manufacturer specific use shall thus be
formatted as specified in Figure 20.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13 octet 14 (octet 15 to n)
test_info
operand manufacturer code …
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

FEh

**Figure 20 - A_SystemNetworkParameter_Read-PDU – Type FEh (example)**

Savedate: Filename: page 25 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI<br>|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 14|Col18|Col19|Col20|Col21|Col22|Col23|Col24|(octet 15 to n)|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|operand|operand|operand|operand|operand|operand|operand|operand|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|…|…|…|…|…|…|…|…|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|FEh|FEh|FEh|FEh|FEh|FEh|FEh|FEh|||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

The A_SystemNetworkParameter_Response-PDU for this operand FEh shall repeat all the
fields of the A_SystemNetworkParameter_Read-PDU which may be followed by further
manufacturer specific response fields.

There are no further requirements concerning fields, use or timing for this manufacturer
specific use. It is allowed to foresee the cancellation of pending responses by
implementation specific means.

#### 2.4.3 Management Procedures with A_SystemNetworkParameter_Write

##### 2.4.3.1 General Procedure
**Precondition**

This procedure shall be executed on system broadcast communication mode. This service is
mainly designed for the management (discovery, setting and diagnostics) of KNX open
medium specific parameters. This is typically done at the beginning of the Configuration,
when the Individual Addresses of the devices in the communication path between MaC and
MaS have not yet been established. It is thus not possible to execute the procedure
“Discovery of maximal Frame length” as specified in [07]. If using this procedure, the MaC
shall thus make sure that the size request – and response-PDUs remains limited to an
APDU of 14 octets at maximum.

**Use**

The MaC shall use this Management Procedure to set a system – or device parameter of a
given type to a given value, using system broadcast communication model on KNX open
media.

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Write

The ASDU of the A_SystemNetworkParameter_Write-PDU shall contain the following fields.

- object_type: Value that shall be used by the MaC for the subfield object_type of the
field parameter_type of the A_SystemNetworkParameter_Write-PDU.

- PID: Value that shall be used by the MaC for the subfield PID of the field
parameter_type of the A_SystemNetworkParameter_Write-PDU.

- value: Value that shall be used by the MaC and that shall be interpreted by the
MaS when accessing the Property indicated in the object_type and PID.

##### 2.4.3.2 Overview of the accepted usage (informative)
All values are decimal, unless indicated otherwise. Indexes denote the bit length.

 _This is not classified as an own standing Management Procedure or Configuration Procedure. The use is_
_simply specified as part of the specification of PID_RF_BIDIR_TIMEOUT._

 - **Keep the bidrectional mode active in more than one KNX RF S-Mode device**

To keep the bidirectional model enabled in KNX RF S-Mode semi-directional devices
object_type: RF Medium Object
PID: 60 (PID_RF_BIDIR_TIMEOUT)
value: New value for the bidirectional mode time-out timer.

Savedate: Filename: page 26 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

Please refer to the specification of PID_RF_BIDIR_TIMEOUT in [10].

### 2.5 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not specify neither modify any Configuration Procedures. Yet, it
specifies the above Management Procedures, which are designed for inclusion in the
Network – and Device Configuration Procedures as amongst other specified in [11].

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

The mechanisms specified in this paper are at first considered for use in the support of RF
devices in ETS, as specified in [10]. The procedures can optionally also be used on KNX
TP1 and KNX PL110 devices.

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce or modify any Profiles. The first mandatory use of the
support of the features specified in this document is foreseen for the “RF S-Mode devices”
as drafted in [10].

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

The support of the features specified in this document cannot be discovered online from the
device. This has to be concluded from the Device Descriptor information.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

This document contains indications at appropriate locations about the integration in the KNX
Specifications.

#### 3.1.1 Adaptations in Volume 6 “Profiles”

 _Additionally, in [08], clause A.1.2.2 “Network Parameter Properties”, a differentiation has to be introduced_
_between access through A_NetworkParameter_Read/A_NetworkParameter_Write and A_System-_
_NetworkParameter_Read/ A_SystemNetworkParameter_Write._

In the Property indications, instead of “Network”, it shall be written “SysNetwork’ or “Network”
(as today). Indications are given in [10].

### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The procedures specified in this document are not supposed to cause conflicts in the
Configuration Interworking. Yet, this document contains a second redefinition of the service
A_DomainAddressSelective_Read, after [09]. Yet, no implementations according [09] are
known.

Savedate: Filename: page 27 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

### 3.3 Run-time Interworking

 _This clause is not intended for integration in the KNX Specifications._

This document does not influence runtime Interworking.

### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

The features specified in this document are allowed for registration after acceptance in
Release for Voting.

The specification as published in [09] is no longer allowed after acceptance in Release for
Voting.

### 3.5 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

#### 3.5.1 Aspect 1: Scan the devices in an RF Subnetwork

##### 3.5.1.1 Summary
This clause lists the motivation, discussion and conclusions to the “Aspect 1” as noted in the
motivation of this Application Note in 1.2.

This does not lead to modified KNX system requirements.

##### 3.5.1.2 Use case

3.5.1.2.1 Task
Scan the devices in an RF Subnetwork.

NOTE 3 This is mostly called “Scan Line”.

3.5.1.2.2 Scope
This is a diagnostic function, as it is used on TP1, to use in an already configured installation. The devices already have been assigned an RF DoA and an IA. The goal is to find
whether these devices are still all present in the installation.

The presence of the unique configured Device Address within the Subnetwork can be a
parameter for spreading the responses in time to prevent from collisions on the KNX RF
Medium.

3.5.1.2.3 Constraints
It is not the goal to find possible unconfigured, ex-factory devices within RF range of the
ETS RF interface. The DoA of such devices would either be 0 or unknown, and their Device
Address would be FFh or unknown.

##### 3.5.1.3 Description

3.5.1.3.1 TP1
On TP1, this is done by connecting to the possible devices in the Subnetwork with all
possible Device Addresses, from 1 to 255 and reading the Device Descriptor Type 0.

EXAMPLE 4 If Line 1.1 is scanned, ETS tries to connect to all devices from 1.1.1 to 1.1.255 and reads as many Device
Descriptors. The responses are shown as devices in that Line.

Savedate: Filename: page 28 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

**Disadvantages**

- This takes more time than the PL110 solution.

3.5.1.3.2 PL110
On PL110, this is not done in the same way. Instead, the procedure NM_DomainAddress_Scan Type 0 is used (see [09]): the DoA of the PL110 Subnetwork is known, the Subnetwork
Address as well, and the start address is set to 01h and the range to 255. According the
specification of the use A_DomainAddressSelective_Read ([01]), all devices from 1 to 255 in
the Subnetwork will thus respond in a time slotted mechanism, with a delay after reception:

(individual_address – start_address) x Tmedia (Tmedia for PL110 is 390 ms)

**Advantages**

- The MaC only sends one single message and does not send an A_DeviceDescriptor_Read-PDU. This is roughly on 25 % of the busload compared to the TP1 solution.

- PL110 does not have collision avoidance as on TP1. Though actually the MaC controls
the pace of the message transmissions, collisions between the responses in the TP1
style solution may happen on another medium. The time slotted approach tries to
prevent from collisions.

**Disadvantages**

- Though this way of working is possible with the definition of the use A_DomainAddressSelective_Read-service, this is not a standard Management Procedure and not
standardised in the KNX PL110 Network – or Device Configuration Procedures.

3.5.1.3.3 Radio Frequency
It is suggested that a technique as on PL110 can be used.

The A_DomainAddressSelective_Read-service is revised in AN133 ([09]): a “Type 1” is
introduced. It is still the intention to scan for a free DoA, but the parameter of the IA-range is
removed. Additionally, instead of scanning only a single 1 octet DoA (PL110), it scans a
range of 6 octets DoAs (RF). Table 2 gives a comparison.

Savedate: Filename: page 29 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

**Table 2 – Comparison A_DomainAddressSelective_Read Type 0 to Type 1**

**A_DomainAddressSelective_Read**

**Parameter** **Type 0** **Type 1**

**Request**

field “Type” 1 octet = 00h 1 octet = 01h

field “DoA” 1 octet: DoA base 6 octet: DoA start

field “DoA range” 1 DoA (none: uses start to end)

field “DoA end” (none: uses start + range) ≥ 1 DoA: DoA start to DoA end

field “IA” start address

none (all IA in the DoA respond)
field “IA range” 0 to 255

**Response**

timing time slotted randomly between 0s and 2 s

field “Type” not available not available

field “DoA” 2 octet: DoA 6 octet: DoA

NOTE 4 The Type 1 procedure additionally returns the KNX Serial Number of each responding device. This is however
contained in the DoA/SN field of the KNX RF Frame and not in the APDU. This means that this information is lost if the Frame
is routed to TP1 by a KNX TP1/RF Media Coupler.

NOTE 5 AN133 ([09]) is not very clear on this: it does not explicitly say that the KNX SN is contained in the SN/DoA-field
and not in the APDU. Both service types reply with the A_DomainAddress_Response-PDU, which only contains the 2 – or
6 octet DoA.

**Goal**

The above use case is still wanted: give the IAs of the devices in a given Subnetwork.
Hence, Type 0 is needed, but it needs to be extended, so that it supports a 6 octet DoA. The
searched IAs will be given by the Source Addresses of the response Frames.

##### 3.5.1.4 KSG System discussion, proposals and conclusion

3.5.1.4.1 History
KSG has discussed and concluded this topic in its online meeting on 2012.07.26.

3.5.1.4.2 Considerations
There are several aspects to consider.

- If an RF request remains unanswered, it cannot be differentiated between the following
cases.

   - The original request is destroyed on the medium, because of RF disturbances or
because of an RF collision.
   - The original request did not reach all the receivers.

The same counts for the response.

   - The response from a single device may be destroyed on the medium, or it may
have collided with the response of another device or with any other RF signal.
   - The response may not receive the original requested.

Savedate: Filename: page 30 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx

|Parameter|A DomainAddressSelective Read<br>_ _|Col3|
|---|---|---|
|<br>**Parameter**|<br>**Type 0**|<br>**Type 1**|
|**Request**|**Request**|**Request**|
|field “Type”|1 octet = 00h|1 octet = 01h|
|field “DoA”|1 octet: DoA base|6 octet: DoA start|
|field “DoA range”|1 DoA|(none: uses start to end)|
|field “DoA end”|(none: uses start + range)|≥ 1 DoA: DoA start to DoA end|
|field “IA”|start address|none (all IA in the DoA respond)|
|field “IA range”|0 to 255|0 to 255|
|**Response**|**Response**|**Response**|
|timing|time slotted|randomly between 0s and 2 s|
|field “Type”|not available|not available|
|field “DoA”|2 octet: DoA|6 octet: DoA|


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

The KNX RF PhL cannot indicate this situation. This is even more the case of the requester
(MaC) is located on a TP1 segment.

- In order to reduce the probability of collisions of the responses, these would have to be
spread in time over a larger period.

EXAMPLE 5 A single response would occupy the medium for about 40 ms. Two responses would have to be spread in
time over about 400 ms and would still then have a likelihood of estimated 10 % of colliding.

- The MaC does not have any means to control the timing of the responses.

- This is a diagnostic function that is not executed regularly. It is rather wanted that the
result be complete and reliable than that it be quick and possibly incomplete.

3.5.1.4.3 Conclusions
The MaC shall not trigger this investigation through a single (system) broadcast message,
but the MaC shall contact each possible MaS separately.

In order to avoid collisions between the responses of the various MaS, the MaC shall not
overlap these procedures. A next request to a next MaS shall only be initiated if the
preceding request to the preceding MaS

   - is either answered, or
   - a time-out to that request happens.

It is assumed that the time-out for this request is 3 s. The total duration of a full Subnetwork
scan (255 MaS) may then last about estimated 13 minutes (no MaS reacting).

**Conclusion: For the solution, the procedure NM_SubnetworkDevices_Scan can be used.**

This use case is not the motivation for the modification of the A_DomainAddressSelective_Read as specified in this Application Note.

#### 3.5.2 Aspect 2

##### 3.5.2.1 Use case
Program the DoA and IA of a device in which Programming Mode is active, but prevent from
accidentally reprogramming a device in a neighbouring installation, in which Programming
Mode may be active as well.

##### 3.5.2.2 Description

3.5.2.2.1 Proposal solution by the ETS developers
The Programming Mode would only be used to learn whether null, one, or more devices
respond. If only a single device responds, the procedure does not assign the DoA and IA
through A_DomainAddress_Write resp. A_IndividualAddress_Write, but instead assigns DoA
and IA uses the KNX Serial Number in A_DomainAddressSerialNumber_Write and
A_IndividualAddressSerialNumber_Write.

Derived need: learn the SN of a device in which Programming Mode is active through a
service usable on system broadcast communication mode.

To check whether there is any device in which Programming Mode is active on an open
medium, unlike TP1, the A_IndividualAddress_Read-service is not used, because this is
transmitted on broadcast communication mode and thus assumes that the DoA is known.

Instead, the A_DomainAddress_Read-service is used, which is available on system
broadcast.

Savedate: Filename: page 31 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

This provides the KNX SN of the responder as part of the source address information.
However, this KNX SN information is lost if the response is routed over a KNX TP1/RF
Media Coupler.

Hence, it is proposed to extend the A_DomainAddress_Read-service, so that it also returns
the KNX Serial Number in the payload.

##### 3.5.2.3 KSG System discussion, proposals and conclusion
**NOTE 1**

As the ETS developers indicate as well: this does not prevent ETS from all the time
communicating with a neighbouring device, instead of with a device in the own installation.
Only if ETS indicates that the programming was successful and the Programming LED of the
device in the own installation remains on, you know that something went wrong …in the
neighbour’s installation.

**NOTE 2**

As the ETS developers also indicate, this would be a way how to retrieve the KNX Serial
Number of a device in which Programming Mode is active. This could be an interesting
function as well for TP1. However, TP1 devices do not support A_DomainAddress_Read.
My first idea therefore would be to introduce a sort of A_NetworkParameter_Read, for
exclusive use on system broadcast communication mode on open media. (The classic
A_NetworkParameter_Read cannot be used, cause the TP1/RF Media Coupler must be able
to decide whether to route it on RF on normal broadcast or on system broadcast.)

**NOTE 3**

To have a lower risk of accidentally assigning a DoA and IA to a device in a neighbouring
installation, ETS could firstly read out additional information, like manufacturer code and
device type from the device. This can be matched with the product information that ETS has
in its database for the device to be programmed. Possible parameters to use could be
PID_PROGRAM_VERSION or PID_HARDWARE_TYPE. If these were read and checked
prior to assigning DoA and IA, accidental changes in neighbouring installations could be
prevented better.

NOTE 6 Given the use case – the RF device still has no DoA or IA, but only has an active Programming Mode – it would be
required that such reading would be done through system broadcast communication mode. Not all devices in RF range should
of course react, so the request should have a filter, e.g. to limit reaction to devices with active Programming Mode only.

**Conclusion**

This shall be solved through the procedure
NM_Read_SerialNumber_By_ProgrammingMode as specified in 2.4.2.4.

#### 3.5.3 Aspect 3: battery state indication
The KNX RF Data Link Layer Frame contains in the field RF-info in the first block the
indication whether the battery of the battery powered KNX RF device is weak or not
(see clause 6.12.4 in [03]).

This field is not transferred onto any other KNX medium through any Media Coupler.
However, it is transferred using a cEMI interface to the cEMI Client if directly connected to
the KNX RF Medium.

Savedate: Filename: page 32 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

KNXCERTIFICATION AND LICENCE SYSTEM
**AN162** **System aspects of RF S-Mode**

Therefore, under these conditions, it could be useful to mark this battery state in the ETS
Group – and Busmonitor, but also in the Device View next to the device that sends the
Frame.

### 3.6 Risks and compatibility issues

#### 3.6.1 Reserved APCIs for future system broadcast services
Table 1 specifies four new APCIs for exclusive use on system broadcast communication
mode on open media. Two of these APCIs are not yet used by any AL-services. These
APCIs are envisaged for future system broadcast services and shall by Media Couplers on
an open medium be transferred using system broadcast communication mode.

Savedate: Filename: page 33 of 33
2013 07 15 AN162 v01 System aspects of RF S-Mode DP docx


-----

