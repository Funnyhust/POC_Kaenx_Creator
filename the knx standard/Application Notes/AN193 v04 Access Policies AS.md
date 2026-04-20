###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

# Application Note 193/18 v04

###### Title: Access Policies

 Status: Date:

 Approved Standard 2019.04.18

 Transitional period:  See 3.3.1

 Date: 2019.04.18

 Subject: Completion and review of the Access Policies defined for KNX Data Security. Documents Modified

[01] Chapter 3/5/1 “Resources” v01.09.03 AS of 2013.12.10

[02] Chapter 3/3/7 “Application Layer” v01.06.05 of 2015.07.07

[03] Volume 6 “Profiles” v01.13.02 of 2013.10.28

[04] AN158 “KNX Data Security” v04 AS of 2018.01.05

###### Referred

[05] Chapter 8/3/7 “Application (Interface) Layer Testing – Network

Management Server/Client Testing” v01.06.02 of 2017.01.30

[06] AN159 “KNXnet/IP Secure” v06 of 2017.10.27

###### Document updates

**Version** **Date** **Modifications**

KSG803 v06.04.01 2018.05.03 - Document creation based on “KSG803 Access

###### Policies v06.04.01”.
AN193 v01 2018.05.03 - Preparation of the Draft Proposal.
AN193 v02 2018.07.29 - Preparation of the Draft for Voting.
KSG803 v09.01.01 2018.12.10 - Inclusion of the KSG resolution of comments from

###### Final Voting.
KSG803 v09.02.01 2019.02.06 - Inclusion of the conclusions of the KSG Core meeting

###### of 2018.12.12-13.
```
                 o Completed error handling for A_Property
 Description_Read: 2.2.1, 3.3.1. o Updated error handling of A_DeviceDesriptor_ Read (2.2.4.4).
                 o Integration of the current Access Policies from

 “KSG803 Access Policies v09.01.01 - fb KSG 20181212.xlsx”
```
KSG803 v09.02.01 2019.03.06 - Inclusion of conclusion of [KSG00195-11]

###### “A_PropertValue_Write and 008/008”.
AN193 v03 2019.04.20 - Informal inclusion about indications of Access Policies

###### for (System) Network Parameter services.
  Creation of the Approved Standard.

Savedate: Filename: page 1 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG803 v06.04.01|2018.05.03| Document creation based on “KSG803 Access<br>Policies v06.04.01”.|
|AN193 v01|2018.05.03| Preparation of the Draft Proposal.|
|AN193 v02|2018.07.29| Preparation of the Draft for Voting.|
|KSG803 v09.01.01|2018.12.10| Inclusion of the KSG resolution of comments from<br>Final Voting.|
|KSG803 v09.02.01|2019.02.06| Inclusion of the conclusions of the KSG Core meeting<br>of 2018.12.12-13.<br>`o` Completed error handling for A_Property-<br>Description_Read: 2.2.1, 3.3.1.<br>`o` Updated error handling of A_DeviceDesriptor_-<br>Read (2.2.4.4).<br>`o` Integration of the current Access Policies from<br>“KSG803 Access Policies v09.01.01 - fb KSG<br>20181212.xlsx”|
|KSG803 v09.02.01|2019.03.06| Inclusion of conclusion of [KSG00195-11]<br>“APropertValueWrite and 008/008”.|
|AN193 v03|2019.04.20|__<br> Informal inclusion about indications of Access Policies<br>for (System) Network Parameter services.<br> Creation of the Approved Standard.|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Version** **Date** **Modifications**

AN193 v04 2019.04.18 - Correction of the Access Level of Property Description

###### services in 2.2.3: these are at data level and not at service level.

 Contents

##### 1 Purpose, motivation and scope ........................................................................ 2

 2 Specification ....................................................................................................... 3
 2.1 Terms and definitions .............................................................................. 3 2.2 Stack and communication ....................................................................... 3
 2.2.1 Application Layer – completed error handling for A_PropertyDescription_Read ........................................................... 3 2.2.2 Application Layer – error handling for “write only Properties” ........... 3 2.2.3 Application Layer - Access Policies at service Level ......................... 3 2.2.4 Application Interface Layer – Access Policies at Data Level ............. 6 2.3 Resource definition or used Resources................................................. 18 2.4 Management Procedures ...................................................................... 18 2.5 Configuration Procedures ...................................................................... 18 2.6 Usage and context ................................................................................ 18 2.7 Profile definition ..................................................................................... 18 2.8 Identifiers and discovery ........................................................................ 18

 3 Impact and dependencies ............................................................................... 18
 3.1 System specification (“Handbook”) dependencies ................................ 18 3.2 Configuration interworking ..................................................................... 18 3.3 Registration and certification ................................................................. 19
 3.3.1 Transitional period .......................................................................... 19 3.3.2 Indications for testing ...................................................................... 19 3.4 Integration and common tool impact ..................................................... 19 3.5 Security ................................................................................................. 19 3.6 Risks and compatibility issues ............................................................... 19

## 1 Purpose, motivation and scope
###### The KNX Data Security specifications in [04] and the KNX IP Secure specifications in [06] define the first Access Levels. These are however limited to the Resources needed for the configuration of the security itself in the devices and do not define Access Policies for all services and all standard KNX Resources. This is completed by this Application Note.

 Additionally, the before given Access Policies have been defined without a common philosophy in mind. Also this is streamlined in this Application Note.

Savedate: Filename: page 2 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Version|Date|Modifications|
|---|---|---|
|AN193 v04|2019.04.18| Correction of the Access Level of Property Description<br>services in 2.2.3: these are at data level and not at<br>service level.|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

## 2 Specification

### 2.1 Terms and definitions

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not introduce, neither modify, any terms or definitions.

### 2.2 Stack and communication

#### 2.2.1 Application Layer – completed error handling for
 A_PropertyDescription_Read

 _In [02] clause 3.4.3.3 “A_PropertyDescription_Read service”, the error handling shall be completed. The_

_following sentence shall be corrected._

###### If the remote application process has a problem, e.g. Interface Object or Property does not exist, then the max_nr_of_elem of the A_PropertyDescription_Response-PDU shall be zero.

_This shall be replaced by the following._

###### If the remote application process has a problem, e.g. Interface Object or Property does not exist, then the fields write_enable, type, max_nr_of_elem and access of the A_PropertyDescription_Response-PDU shall be zero.

#### 2.2.2 Application Layer – error handling for “write only Properties”
###### In [02] clause 3.4.3.2 “A_PropertValue_Write-service”, the following sentence shall be followed by a note.

 .. The value of the Property of the associated Interface Object shall be explicitly read back after writing to it.

NOTE 1 If this reading back of the Property value is realised stack internally by issuing a subsequent
A_PropertyValue_Read.ind, then the writing of a value of a Property with Access Policy 008/008 may effectively
have succeeded, but the reading back may fail because of the Access Policy; in that case, the MaS will return an
error according the standard error handling, even if the writing is successful.

 _Please note that this is important for for instance PID_TOOL_KEY._

#### 2.2.3 Application Layer - Access Policies at service Level

 _These are the Access Levels “at service level”: the Plain Application Layer already concludes on whether_

_the access is allowed or not. For the services for which the acceptance is for all its use defined “at data_
_level”, always 3FF/3FF is given, so that it is clear that the Plain Application Layer passes the message_
_and the evaluation of the access is done by the Application Interface Layer._

###### Legend

  For the notation style of the Access Policies, please refer to [04]. The same notation style is maintained, but the “R/W” differentiation is not used, meaning that the flags for read- or write permissions are always both set in the same way (00 or 11).

**Access**

**Service primitive**
**Acces Level** **Policy**

APCI_GroupValue_Read at data level: configurable 3FF / 3FF
APCI_GroupValue_Response at data level: configurable 3FF / 3FF
APCI_GroupValue_Write at data level: configurable 3FF / 3FF
APCI_IndividualAddress_Write at service level 3FF / 00C
APCI_IndividualAddress_Read at service level 3FF / 3FF

Savedate: Filename: page 3 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Service primitive|Acces Level|Access<br>Policy|
|---|---|---|
|APCIGroupValueRead|at data level:configurable|3FF/ 3FF|
|__<br>APCIGroupValueResponse|at data level:configurable|3FF/ 3FF|
|__<br>APCIGroupValueWrite|at data level:configurable|3FF/ 3FF|
|__<br>APCIIndividualAddressWrite|at service level|3FF/ 00C|
|__<br>APCIIndividualAddressRead|at service level|3FF/ 3FF|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Access**

**Service primitive**
**Acces Level** **Policy**

APCI_IndividualAddress_Response at service level 3FF / 3FF
APCI_ADC_Read at service level 3FF / 00C
APCI_ADC_Response at service level 3FF / 00C
APCI_SystemNetworkParameter_Read[ 1)] at data level 3FF / 3FF
APCI_SystemNetworkParameter_Response[ 1)] at data level 3FF / 3FF
APCI_SystemNetworkParameter_Write[ 1)] at data level 3FF / 3FF
APCI_PropertyExtValue_Read-PDU at data level 3FF / 3FF
APCI_PropertyExtValue_Response-PDU at data level 3FF / 3FF
APCI_PropertyExtValue_WriteCon-PDU at data level 3FF / 3FF
APCI_PropertyExtValue_WriteConRes-PDU at data level 3FF / 3FF
APCI_PropertyExtValue_WriteUnCon-PDU at data level 3FF / 3FF
APCI_PropertyExtValue_InfoReport-PDU at data level 3FF / 3FF
APCI_PropertyExtDescription_Read-PDU at data level 3FF / 3FF
APCI_PropertyExtDescription_Response-PDU at data level 3FF / 3FF
APCI_FunctionPropertyExtCommand-PDU at data level 3FF / 3FF
APCI_FunctionPropertyExtState_Read-PDU at data level 3FF / 3FF
APCI_FunctionPropertyExtState_Response-PDU at data level 3FF / 3FF
APCI_MemoryExtended_Write at data level 3FF / 3FF
APCI_MemoryExtended_WriteResponse at data level 3FF / 3FF
APCI_MemoryExtended_Read at data level 3FF / 3FF
APCI_MemoryExtended_ReadResponse at data level 3FF / 3FF
APCI_Memory_Read at data level 3FF / 3FF
APCI_Memory_Response at data level 3FF / 3FF
APCI_Memory_Write at data level 3FF / 3FF
APCI_UserMemory_Read at data level 3FF / 3FF
APCI_UserMemory_Response at data level 3FF / 3FF
APCI_UserMemory_Write at data level 3FF / 3FF
APCI_UserMemoryBit_Write at data level 3FF / 3FF
APCI_UserManufacturerInfo_Read at data level 3FF / 3FF
APCI_UserManufacturerInfo_Response at data level 3FF / 3FF
APCI_FunctionPropertyCommand at data level 3FF / 3FF
APCI_FunctionPropertyState_Read at data level 3FF / 3FF
APCI_FunctionPropertyState_Response at data level 3FF / 3FF
APCI_DeviceDescriptor_Read at data level 3FF / 3FF
APCI_DeviceDescriptor_Response at data level 3FF / 3FF
APCI_Restart at data level: see below 3FF / 3FF
A_Open_Routing_Table_Req-PDU at service level 3FF / 0CC
A_Write_Router_Status_Req-PDU at service level 3FF / 0CC
APCI_Read_Router_Status at service level 3FF / 0CC
APCI_MemoryBit_Write at data level 3FF / 3FF
APCI_Authorize_Request at service level 3FF / 3FF
APCI_Authorize_Response at service level 3FF / 3FF
APCI_Key_Write at service level 3FF / 0CC
APCI_Key_Response at service level 3FF / 0CC
APCI_PropertyValue_Read at data level 3FF / 3FF
APCI_PropertyValue_Response at data level 3FF / 3FF
APCI_PropertyValue_Write at data level 3FF / 3FF

1) See indications in 2.2.4.2.

Savedate: Filename: page 4 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Service primitive|Acces Level|Access<br>Policy|
|---|---|---|
|APCIIndividualAddressResponse|at service level|3FF/ 3FF|
|__<br>APCIADCRead|at service level|3FF/ 00C|
|__<br>APCIADCResponse|at service level|3FF/ 00C|
|__<br>APCISystemNetworkParameterRead 1)|at data level|3FF / 3FF|
|__<br>APCISystemNetworkParameterResponse 1)|at data level|3FF / 3FF|
|__<br>APCISystemNetworkParameterWrite 1)|at data level|3FF / 3FF|
|__<br>APCIPropertyExtValueRead-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtValueResponse-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtValueWriteCon-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtValueWriteConRes-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtValueWriteUnCon-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtValueInfoReport-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtDescriptionRead-PDU|at data level|3FF/ 3FF|
|__<br>APCIPropertyExtDescriptionResponse-PDU|at data level|3FF/ 3FF|
|__<br>APCIFunctionPropertyExtCommand-PDU|at data level|3FF/ 3FF|
|_<br>APCIFunctionPropertyExtStateRead-PDU|at data level|3FF/ 3FF|
|__<br>APCIFunctionPropertyExtStateResponse-PDU|at data level|3FF/ 3FF|
|__<br>APCIMemoryExtendedWrite|at data level|3FF/ 3FF|
|__<br>APCIMemoryExtendedWriteResponse|at data level|3FF/ 3FF|
|__<br>APCIMemoryExtendedRead|at data level|3FF/ 3FF|
|__<br>APCIMemoryExtendedReadResponse|at data level|3FF/ 3FF|
|__<br>APCIMemoryRead|at data level|3FF/ 3FF|
|__<br>APCIMemoryResponse|at data level|3FF/ 3FF|
|__<br>APCIMemoryWrite|at data level|3FF/ 3FF|
|__<br>APCIUserMemoryRead|at data level|3FF/ 3FF|
|__<br>APCIUserMemoryResponse|at data level|3FF/ 3FF|
|__<br>APCIUserMemoryWrite|at data level|3FF/ 3FF|
|__<br>APCIUserMemoryBitWrite|at data level|3FF/ 3FF|
|__<br>APCIUserManufacturerInfoRead|at data level|3FF/ 3FF|
|__<br>APCIUserManufacturerInfoResponse|at data level|3FF/ 3FF|
|__<br>APCIFunctionPropertyCommand|at data level|3FF/ 3FF|
|_<br>APCIFunctionPropertyStateRead|at data level|3FF/ 3FF|
|__<br>APCIFunctionPropertyStateResponse|at data level|3FF/ 3FF|
|__<br>APCIDeviceDescriptorRead|at data level|3FF/ 3FF|
|__<br>APCIDeviceDescriptorResponse|at data level|3FF/ 3FF|
|__<br>APCIRestart|at data level:see below|3FF/ 3FF|
|_<br>AOpenRoutingTableReq-PDU|at service level|3FF/ 0CC|
|____<br>AWriteRouterStatusReq-PDU|at service level|3FF/ 0CC|
|____<br>APCIReadRouterStatus|at service level|3FF/ 0CC|
|___<br>APCIMemoryBitWrite|at data level|3FF/ 3FF|
|__<br>APCIAuthorizeRequest|at service level|3FF/ 3FF|
|__<br>APCIAuthorizeResponse|at service level|3FF/ 3FF|
|__<br>APCIKeyWrite|at service level|3FF/ 0CC|
|__<br>APCIKeyResponse|at service level|3FF/ 0CC|
|__<br>APCIPropertyValueRead|at data level|3FF/ 3FF|
|__<br>APCIPropertyValueResponse|at data level|3FF/ 3FF|
|__<br>APCIPropertyValueWrite|at data level|3FF/ 3FF|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Access**

**Service primitive**
**Acces Level** **Policy**

APCI_PropertyDescription_Read at data level 3FF / 3FF
APCI_PropertyDescription_Response at data level 3FF / 3FF
APCI_NetworkParameter_Read[ 1)] at data level 3FF / 3FF
APCI_NetworkParameter_Response[ 1)] at data level 3FF / 3FF
APCI_IndividualAddress_SerialNumber_Read at service level 3FF / 3FF
APCI_IndividualAddress_SerialNumber_Response at service level 3FF / 3FF
APCI_IndividualAddress_SerialNumber_Write at service level 3FF / 00C
APCI_DomainAddress_Write at service level 3FF / 00C
APCI_DomainAddress_Read at service level 3FF / 3FF
APCI_DomainAddress_Response at service level 3FF / 3FF
APCI_DomainAddress_Selective_Read at service level 3FF / 3FF
APCI_NetworkParameter_Write[ 1)] at data level 3FF / 3FF
APCI_Link_Read void[ 2)]

APCI_Link_Response void[ 2)]
APCI_Link_Write void[ 2)]
APCI_GroupPropValue_Read at data level: configurable 3FF / 3FF
APCI_GroupPropValue_Response at data level: configurable 3FF / 3FF
APCI_GroupPropValue_Write at data level: configurable 3FF / 3FF
APCI_GroupPropValue_InfoReport at data level: configurable 3FF / 3FF
APCI_DomainAddressSerialNumber_Read at data level: see below 3FF / 3FF
APCI_DomainAddressSerialNumber_Response at data level 3FF / 3FF
APCI_DomainAddressSerialNumber_Write at data level: see below 3FF / 3FF
APCI_FileStream_InfoReport at data level 3FF / 3FF

2) These services will no longer be used in the Secure generations of E-Mode devices.

Savedate: Filename: page 5 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Service primitive|Acces Level|Access<br>Policy|
|---|---|---|
|APCIPropertyDescriptionRead|at data level|3FF/ 3FF|
|__<br>APCIPropertyDescriptionResponse|at data level|3FF/ 3FF|
|__<br>APCINetworkParameterRead 1)|at data level|3FF / 3FF|
|__<br>APCINetworkParameterResponse 1)|at data level|3FF / 3FF|
|__<br>APCIIndividualAddressSerialNumberRead|at service level|3FF/ 3FF|
|___<br>APCIIndividualAddressSerialNumberResponse|at service level|3FF/ 3FF|
|___<br>APCIIndividualAddressSerialNumberWrite|at service level|3FF/ 00C|
|___<br>APCIDomainAddressWrite|at service level|3FF/ 00C|
|__<br>APCIDomainAddressRead|at service level|3FF/ 3FF|
|__<br>APCIDomainAddressResponse|at service level|3FF/ 3FF|
|__<br>APCIDomainAddressSelectiveRead|at service level|3FF/ 3FF|
|___<br>APCINetworkParameterWrite 1)|at data level|3FF / 3FF|
|__<br>APCI_Link_Read|void 2)||
|<br>APCI_Link_Response|void 2)||
|<br>APCI_Link_Write|void 2)||
|<br>APCIGroupPropValueRead|at data level:configurable|3FF/ 3FF|
|__<br>APCIGroupPropValueResponse|at data level:configurable|3FF/ 3FF|
|__<br>APCIGroupPropValueWrite|at data level:configurable|3FF/ 3FF|
|__<br>APCIGroupPropValueInfoReport|at data level:configurable|3FF/ 3FF|
|__<br>APCIDomainAddressSerialNumberRead|at data level:see below|3FF/ 3FF|
|__<br>APCIDomainAddressSerialNumberResponse|at data level|3FF/ 3FF|
|__<br>APCIDomainAddressSerialNumberWrite|at data level:see below|3FF/ 3FF|
|__<br>APCIFileStreamInfoReport|at data level|3FF/ 3FF|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

#### 2.2.4 Application Interface Layer – Access Policies at Data Level

 _For the notation style of the Access Policies, please refer to [04]._

 _These are the Access Policies “at data level”: these are thus evaluated in the Application Interface Layer._

##### 2.2.4.1 Data accessed by the services A_DomainAddressSerialNumber_Read and
 A_DomainAddressSerialNumber_Write

**Service primitive and accessed data** **Access Policy**

###### A_DomainAddressSerialNumber_Read - 2 octet DoA (PL110 DoA) 3FF / 3FF A_DomainAddressSerialNumber_Write - 2 octet DoA: (PL110 DoA) 3FF / 00C A_DomainAddressSerialNumber_Read - void: service not supported for 4 octet - / - DoA (IP Domain Address: multicast address): service remains void.
 A_DomainAddressSerialNumber_Write - 4 octet (IP Domain Address: multicast 3FF / 00C address)
 A_DomainAddressSerialNumber_Read - if MaS has 6 octet DoA (KNX RF DoA) 3FF / 3FF A_DomainAddressSerialNumber_Write - 6 octet (KNX RF DoA) 3FF / 00C A_DomainAddressSerialNumber_Read - void: service not supported for 21 octet - / - DoA (IP Domain Address: multicast address, Routing Security Version and Backbone Key)
 A_DomainAddressSerialNumber_Write - 21 octet (IP Domain Address: multicast 00C / 00C address, Routing Security Version and Backbone Key)

##### 2.2.4.2 Data Access by the Network Parameter services and the System Network
 Parameter services

 _This clause is not intended for integration in the KNX Specifications._

###### This concerns the following services:

 - A_SystemNetworkParameter_Read
 - A_SystemNetworkParameter_Write
 - A_NetworkParameter_Read
 - A_NetworkParameter_Write

 These services use of the identifiers Object Type and Property Identifer to identify the parameters used in these services. These are however only used as identifiers and shall not be seen as accesses to the Interface Objects and Properties of which the identifiers are used. Consequently, the Access Policies given for these Properties in this document do not apply for these services; the Access Policies for these services are under work in the KNX System Group and will be specified as soon as possible.

##### 2.2.4.3 Data accessed by the A_Restart-service

**Service primitive and accessed data** **Access Policy**

A_Restart - Restart_type = 0 3FF / 0CC
A_Restart - Restart_type = 1 - Erase Code 01h 3FF / 0CC
A_Restart - Restart_type = 1 - Erase Code 02h 3FF / 00C
A_Restart - Restart_type = 1 - Erase Code 03h 3FF / 000
A_Restart - Restart_type = 1 - Erase Code 05h 3FF / 00C
A_Restart - Restart_type = 1 - Erase Code 06h 3FF / 00C
A_Restart - Restart_type = 1 - Erase Code 07h 3FF / 00C

Savedate: Filename: page 6 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Service primitive and accessed data|Access Policy|
|---|---|
|A_DomainAddressSerialNumber_Read - 2 octet DoA(PL110 DoA)|3FF/ 3FF|
|A_DomainAddressSerialNumber_Write - 2 octet DoA:(PL110 DoA)|3FF /00C|
|A_DomainAddressSerialNumber_Read - void: service not supported for 4 octet<br>DoA(IP Domain Address: multicast address): service remains void.|- <br>/ <br>-|
|A_DomainAddressSerialNumber_Write - 4 octet (IP Domain Address: multicast<br>address)|3FF / 00C|
|A_DomainAddressSerialNumber_Read - if MaS has 6 octet DoA(KNX RF DoA)|3FF/ 3FF|
|A_DomainAddressSerialNumber_Write - 6 octet(KNX RF DoA)|3FF/ 00C|
|A_DomainAddressSerialNumber_Read - void: service not supported for 21 octet<br>DoA (IP Domain Address: multicast address, Routing Security Version and<br>Backbone Key)|- / -|
|A_DomainAddressSerialNumber_Write - 21 octet (IP Domain Address: multicast<br>address, Routing Security Version and Backbone Key)|00C / 00C|

|Service primitive and accessed data|Access Policy|
|---|---|
|ARestart - Restarttype =0|3FF/ 0CC|
|__<br>ARestart - Restarttype = 1 - Erase Code 01h|3FF/ 0CC|
|__<br>ARestart - Restarttype = 1 - Erase Code 02h|3FF/ 00C|
|__<br>ARestart - Restarttype = 1 - Erase Code 03h|3FF/ 000|
|__<br>ARestart - Restarttype = 1 - Erase Code 05h|3FF/ 00C|
|__<br>ARestart - Restarttype = 1 - Erase Code 06h|3FF/ 00C|
|__<br>ARestart - Restarttype = 1 - Erase Code 07h|3FF / 00C|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

##### 2.2.4.4 Data accessed by A_PropertyDescription_Read and
 A_PropertyExtDescription_Read
###### The Access Policies for APCI_PropertyDescription_Read and APCI_PropertyExt- Description_Read are defined at data level and shall for each Property result from the OR function of the Access Policies to the write- and read access of the Property Value. This means that only if the communication partner would have the Permission to either read – or write the Property value, it will only have the Permission to read the Property description. If the communication partner does not have the Permission to either read – or write the Property Value, then it shall not have the Permission to read the Property description.

EXAMPLE 1 The Access Policies for PID_SEQUENCE_NUMBER_SENDING are 00C/00C. Regardless of the
Security Mode (enabled or disabled), only the communication partner using the Tool Key can read the Property
description, with A+C.
EXAMPLE 2 The Access Policies for PID_TOOL_KEY are 008/008. Regardless of the Security Mode (enabled
or disabled), only the communication partner using the Tool Key can read the Property description, with A+C.
EXAMPLE 3 The Access Policies for PID_OBJECT_TYPE are 3FF/0CC. If Security Mode is disabled, any
requester can read the Property description. If Security Mode is enabled, only the communication partner with the
Tool Key are a Role Rx can read the Property description, only with A+C.

##### 2.2.4.5 Data accessed by A_DeviceDescriptor_Read

**Service primitive and accessed data** **Access Policy**

APCI_DeviceDescriptor_Read - any Device Descriptor Type 3FF / 0CC

 _Clause 3.4.2.1 “A_DeviceDescriptor_Read” in [02] shall be modified as follows._

_(Blue text is new text. Black text is existing text.)_

###### In this, the following shall apply. 

  If Security Mode is not enabled in the MaS then the plain handling shall apply.
 - if the descriptor_type = 0 the Management Server shall respond with DD0 if DD0 is supported. If DD0 is not supported by the Management Server then it shall respond with the lowest supported Descriptor Type and corresponding data. 
 - if the descriptor_type ≠ 0 the Management Server shall respond with the corresponding Descriptor Type and data. 
 - if the descriptor_type ≠ 0 and this Descriptor Type is not supported by the Management Server, then the Management Server shall respond with the Descriptor Type 3Fh (error) without any data.  This definition is independent of the medium used and whether connection-oriented - or connectionless communication is used.

  If Security Mode is enabled in the MaS then the secure handling shall apply.
 - If the requested descriptor_type = 0 then the following shall apply.

    - If the communication partner does have the necessary Permissions according

###### the Access Policies of the Device Descriptor Type, then the MaS shall respond with the descriptor_type = 0 and its Descriptor Type 0 value.

    - If the communication partner does not have the necessary Permissions
###### according the Access Policies of the Device Descriptor Type, then the MaS shall respond with the descriptor_type = 0 and Descriptor Type 0 value FFFFh.

Savedate: Filename: page 7 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Service primitive and accessed data|Access Policy|
|---|---|
|APCIDeviceDescriptorRead - any Device Descriptor Type|3FF / 0CC|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

 - If the requested descriptor_type ≠ 0 then the following shall apply.

    - If the requested descriptor_type is supported, then the following shall apply.

 If the communication partner does have the necessary Permissions
###### according the Access Policies of the Device Descriptor Type, then the MaS shall respond with the descriptor_type as requested and the corresponding Descriptor Type value.

 If the communication partner does not have the necessary Permissions
###### according the Access Policies of the Device Descriptor Type, then the MaS shall respond with the descriptor_type = 3Fh without any data.

 This is summarized in Figure 1.

 Figure 1 – Permissions and error handling for A_DeviceDescriptor_Read

##### 2.2.4.6 Resources
###### Legend

  M/R The column M/R indicates whether the given Access Policy is mandatorily to be followed, or only a recommendation. All Access Policies are mandatory, yet, for a few exceptions, there are use cases where the implemented Access Policy may deviate from the recommended one and is implementation specific.

**Object Type 0: Device Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
8 PID_SERVICE_CONTROL 3FF / 0CC M
9 PID_FIRMWARE_REVISION 3FF / 0CC M
10 PID_SERVICES_SUPPORTED 3FF / 0CC M
11 PID_SERIAL_NUMBER 3FF / 0CC M
12 PID_MANUFACTURER_ID 3FF / 0CC M
14 PID_DEVICE_CONTROL 3FF / 0CC M

Savedate: Filename: page 8 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 0: Device Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|8|__<br> PIDSERVICECONTROL|3FF/ 0CC|M|
|9|__<br> PIDFIRMWAREREVISION|3FF/ 0CC|M|
|10|__<br> PIDSERVICESSUPPORTED|3FF/ 0CC|M|
|11|__<br> PIDSERIALNUMBER|3FF/ 0CC|M|
|12|__<br> PIDMANUFACTURERID|3FF/ 0CC|M|
|14|__<br> PIDDEVICECONTROL|3FF / 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 0: Device Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

15 PID_ORDER_INFO 3FF / 0CC M
16 PID_PEI_TYPE 3FF / 0CC M
17 PID_PORT_CONFIGURATION 3FF / 0CC M
18 PID_POLL_GROUP_SETTINGS 3FF / 0CC M
19 PID_MANUFACTURER_DATA 3FF / 0CC M
21 PID_DESCRIPTION 3FF / 0CC M
25 PID_VERSION 3FF / 0CC M
29 PID_OBJECT_INDEX 3FF / 0CC M
30 PID_DOWNLOAD_COUNTER 3FF / 0CC M
51 PID_ROUTING_COUNT 3FF / 0CC M
52 PID_MAX_RETRY_COUNT 3FF / 0CC M
53 PID_ERROR_FLAGS 3FF / 0CC M
54 PID_PROG_MODE 3FF / 0CC M
55 PID_PRODUCT_ID 3FF / 0CC R
56 PID_MAX_APDU_LENGTH 3FF / 1FF R
57 PID_SUBNET_ADDR 3FF / 00C M
58 PID_DEVICE_ADDR 3FF / 00C M
59 PID_PB_CONFIG 3FF / 00C M
67 PID_PSU_TYPE 3FF / 0CC M
68 PID_PSU_STATUS (not applicable: volatile memory) 3FF / 0CC M
69 PID_PSU_ENABLE 3FF / 0CC M
70 PID_DOMAIN_ADDRESS 3FF / 00C M
71 PID_IO_LIST 3FF / 0CC M
72 PID_MGT_DESCRIPTOR_01 3FF / 0CC M
73 PID_PL110_PARAM 3FF / 0CC M
74 PID_RF_REPEAT_COUNTER 3FF / 0CC M
75 PID_RECEIVE_BLOCK_TABLE 3FF / 0CC M
76 PID_RANDOM_PAUSE_TABLE 3FF / 0CC M
77 PID_RECEIVE_BLOCK_NR 3FF / 0CC M
78 PID_HARDWARE_TYPE 3FF / 0CC M
79 PID_RETRANSMITTER_NUMBER 3FF / 0CC M
80 PID_SERIAL_NR_TABLE 3FF / 0CC M
81 PID_BIBAT_MASTER_ADDRESS 3FF / 0CC M
82 PID_RF_DOMAIN_ADDRESS 3FF / 00C M
83 PID_DEVICE_DESCRIPTOR 3FF / 0CC M
84 PID_METERING_FILTER_TABLE 3FF / 0CC M
85 PID_GROUP_TELEGR_RATE_LIMIT_TIME_BASE 3FF / 0CC M
86 PID_GROUP_TELEGR_RATE_ LIMIT_NO_OF_TELEGR 3FF / 0CC M
89 PID_FEATURES_SUPPORTED 3FF / 0CC M
101 PID_CHANNEL_01_PARAM 3FF / 0CC M
102 PID_CHANNEL_02_PARAM 3FF / 0CC M
103 PID_CHANNEL_03_PARAM 3FF / 0CC M
104 PID_CHANNEL_04_PARAM 3FF / 0CC M
105 PID_CHANNEL_05_PARAM 3FF / 0CC M
106 PID_CHANNEL_06_PARAM 3FF / 0CC M
107 PID_CHANNEL_07_PARAM 3FF / 0CC M
108 PID_CHANNEL_08_PARAM 3FF / 0CC M
109 PID_CHANNEL_09_PARAM 3FF / 0CC M
110 PID_CHANNEL_10_PARAM 3FF / 0CC M

Savedate: Filename: page 9 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 0: Device Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|15|PIDORDERINFO|3FF/ 0CC|M|
|16|__<br> PIDPEITYPE|3FF/ 0CC|M|
|17|__<br> PIDPORTCONFIGURATION|3FF/ 0CC|M|
|18|__<br> PIDPOLLGROUPSETTINGS|3FF/ 0CC|M|
|19|___<br> PIDMANUFACTURERDATA|3FF/ 0CC|M|
|21|__<br> PIDDESCRIPTION|3FF/ 0CC|M|
|25|_<br> PIDVERSION|3FF/ 0CC|M|
|29|_<br> PIDOBJECTINDEX|3FF/ 0CC|M|
|30|__<br> PIDDOWNLOADCOUNTER|3FF/ 0CC|M|
|51|__<br> PIDROUTINGCOUNT|3FF/ 0CC|M|
|52|__<br> PIDMAXRETRYCOUNT|3FF/ 0CC|M|
|53|___<br> PIDERRORFLAGS|3FF/ 0CC|M|
|54|__<br> PIDPROGMODE|3FF/ 0CC|M|
|55|__<br> PIDPRODUCTID|3FF/ 0CC|R|
|56|__<br> PIDMAXAPDULENGTH|3FF/ 1FF|R|
|57|___<br> PIDSUBNETADDR|3FF/ 00C|M|
|58|__<br> PIDDEVICEADDR|3FF/ 00C|M|
|59|__<br> PIDPBCONFIG|3FF/ 00C|M|
|67|__<br> PIDPSUTYPE|3FF/ 0CC|M|
|68|__<br> PIDPSUSTATUS (not applicable: volatile memory)|3FF/ 0CC|M|
|69|__<br> PIDPSUENABLE|3FF/ 0CC|M|
|70|__<br> PIDDOMAINADDRESS|3FF/ 00C|M|
|71|__<br> PIDIOLIST|3FF/ 0CC|M|
|72|__<br> PIDMGTDESCRIPTOR01|3FF/ 0CC|M|
|73|___<br> PIDPL110PARAM|3FF/ 0CC|M|
|74|__<br> PIDRFREPEATCOUNTER|3FF/ 0CC|M|
|75|___<br> PIDRECEIVEBLOCKTABLE|3FF/ 0CC|M|
|76|___<br> PIDRANDOMPAUSETABLE|3FF/ 0CC|M|
|77|___<br> PIDRECEIVEBLOCKNR|3FF/ 0CC|M|
|78|___<br> PIDHARDWARETYPE|3FF/ 0CC|M|
|79|__<br> PIDRETRANSMITTERNUMBER|3FF/ 0CC|M|
|80|__<br> PIDSERIALNRTABLE|3FF/ 0CC|M|
|81|___<br> PIDBIBATMASTERADDRESS|3FF/ 0CC|M|
|82|___<br> PIDRFDOMAINADDRESS|3FF/ 00C|M|
|83|___<br> PIDDEVICEDESCRIPTOR|3FF/ 0CC|M|
|84|__<br> PIDMETERINGFILTERTABLE|3FF/ 0CC|M|
|85|___<br> PIDGROUPTELEGRRATELIMITTIMEBASE|3FF/ 0CC|M|
|86|______<br> PIDGROUPTELEGRRATE LIMITNOOFTELEGR|3FF/ 0CC|M|
|89|_______<br> PIDFEATURESSUPPORTED|3FF/ 0CC|M|
|101|__<br> PIDCHANNEL01PARAM|3FF/ 0CC|M|
|102|___<br> PIDCHANNEL02PARAM|3FF/ 0CC|M|
|103|___<br> PIDCHANNEL03PARAM|3FF/ 0CC|M|
|104|___<br> PIDCHANNEL04PARAM|3FF/ 0CC|M|
|105|___<br> PIDCHANNEL05PARAM|3FF/ 0CC|M|
|106|___<br> PIDCHANNEL06PARAM|3FF/ 0CC|M|
|107|___<br> PIDCHANNEL07PARAM|3FF/ 0CC|M|
|108|___<br> PIDCHANNEL08PARAM|3FF/ 0CC|M|
|109|___<br> PIDCHANNEL09PARAM|3FF/ 0CC|M|
|110|___<br> PIDCHANNEL10PARAM|3FF / 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 0: Device Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

111 PID_CHANNEL_11_PARAM 3FF / 0CC M
112 PID_CHANNEL_12_PARAM 3FF / 0CC M
113 PID_CHANNEL_13_PARAM 3FF / 0CC M
114 PID_CHANNEL_14_PARAM 3FF / 0CC M
115 PID_CHANNEL_15_PARAM 3FF / 0CC M
116 PID_CHANNEL_16_PARAM 3FF / 0CC M
117 PID_CHANNEL_17_PARAM 3FF / 0CC M
118 PID_CHANNEL_18_PARAM 3FF / 0CC M
119 PID_CHANNEL_19_PARAM 3FF / 0CC M
120 PID_CHANNEL_20_PARAM 3FF / 0CC M
121 PID_CHANNEL_21_PARAM 3FF / 0CC M
122 PID_CHANNEL_22_PARAM 3FF / 0CC M
123 PID_CHANNEL_23_PARAM 3FF / 0CC M
124 PID_CHANNEL_24_PARAM 3FF / 0CC M
125 PID_CHANNEL_25_PARAM 3FF / 0CC M
126 PID_CHANNEL_26_PARAM 3FF / 0CC M
127 PID_CHANNEL_27_PARAM 3FF / 0CC M
128 PID_CHANNEL_28_PARAM 3FF / 0CC M
129 PID_CHANNEL_29_PARAM 3FF / 0CC M
130 PID_CHANNEL_30_PARAM 3FF / 0CC M
131 PID_CHANNEL_31_PARAM 3FF / 0CC M
132 PID_CHANNEL_32_PARAM 3FF / 0CC M

**Object Type 1: Addresstable Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

Group Address Table memory 3FF / 0CC M

This Acces Policy shall apply for whatever way (service) the Group Address Table is
accessed.

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
7 PID_TABLE_REFERENCE 3FF / 0CC M
23 PID_TABLE 3FF / 0CC M

This Acces Policy shall apply for whatever way (service) the Group Address Table is
accessed.

25 PID_VERSION 3FF / 0CC M
27 PID_MCB_TABLE 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M
29 PID_OBJECT_INDEX 3FF / 0CC M
30 PID_DOWNLOAD_COUNTER 3FF / 0CC M
51 PID_EXT_FRAMEFORMAT 3FF / 0CC M
52 PID_MAX_ADDRTAB1 3FF / 0CC M
53 PID_GROUP_RESPONSER_TABLE 3FF / 0CC M

Savedate: Filename: page 10 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 0: Device Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|111|PIDCHANNEL11PARAM|3FF/ 0CC|M|
|112|___<br> PIDCHANNEL12PARAM|3FF/ 0CC|M|
|113|___<br> PIDCHANNEL13PARAM|3FF/ 0CC|M|
|114|___<br> PIDCHANNEL14PARAM|3FF/ 0CC|M|
|115|___<br> PIDCHANNEL15PARAM|3FF/ 0CC|M|
|116|___<br> PIDCHANNEL16PARAM|3FF/ 0CC|M|
|117|___<br> PIDCHANNEL17PARAM|3FF/ 0CC|M|
|118|___<br> PIDCHANNEL18PARAM|3FF/ 0CC|M|
|119|___<br> PIDCHANNEL19PARAM|3FF/ 0CC|M|
|120|___<br> PIDCHANNEL20PARAM|3FF/ 0CC|M|
|121|___<br> PIDCHANNEL21PARAM|3FF/ 0CC|M|
|122|___<br> PIDCHANNEL22PARAM|3FF/ 0CC|M|
|123|___<br> PIDCHANNEL23PARAM|3FF/ 0CC|M|
|124|___<br> PIDCHANNEL24PARAM|3FF/ 0CC|M|
|125|___<br> PIDCHANNEL25PARAM|3FF/ 0CC|M|
|126|___<br> PIDCHANNEL26PARAM|3FF/ 0CC|M|
|127|___<br> PIDCHANNEL27PARAM|3FF/ 0CC|M|
|128|___<br> PIDCHANNEL28PARAM|3FF/ 0CC|M|
|129|___<br> PIDCHANNEL29PARAM|3FF/ 0CC|M|
|130|___<br> PIDCHANNEL30PARAM|3FF/ 0CC|M|
|131|___<br> PIDCHANNEL31PARAM|3FF/ 0CC|M|
|132|___<br> PIDCHANNEL32PARAM|3FF/ 0CC|M|

|Object Type 1: Addresstable Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
||Group Address Table memory<br>This Acces Policy shall apply for whatever way (service) the Group Address Table is<br>accessed.|3FF / 0CC|M|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|7|___<br> PIDTABLEREFERENCE|3FF/ 0CC|M|
|23|__<br> PID_TABLE<br>This Acces Policy shall apply for whatever way (service) the Group Address Table is<br>accessed.|3FF / 0CC|M|
|25|PIDVERSION|3FF/ 0CC|M|
|27|_<br> PIDMCBTABLE|3FF/ 0CC|M|
|28|__<br> PIDERRORCODE|3FF/ 0CC|M|
|29|__<br> PIDOBJECTINDEX|3FF/ 0CC|M|
|30|__<br> PIDDOWNLOADCOUNTER|3FF/ 0CC|M|
|51|__<br> PIDEXTFRAMEFORMAT|3FF/ 0CC|M|
|52|__<br> PIDMAXADDRTAB1|3FF/ 0CC|M|
|53|__<br> PIDGROUPRESPONSERTABLE|3FF / 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 2: Associationtable Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

Group Object Association Table memory 3FF / 0CC M

This Acces Policy shall apply for whatever way (service) the Group Address Table is
accessed.

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
7 PID_TABLE_REFERENCE 3FF / 0CC M
23 PID_TABLE 3FF / 0CC M

This Acces Policy shall apply for whatever way (service) the Group Address Table is
accessed.

27 PID_MCB_TABLE 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M

**Object Type 3: Applicationprogram**

**Access**
**PID** **Property Name** **M/R**

**Policy**

Application Program memory 3FF / 0CC R
Application Paramater memory 3FF / 0CC R
1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
6 PID_RUN_STATE_CONTROL 3FF / 0CC M
7 PID_TABLE_REFERENCE 3FF / 0CC M
13 PID_PROGRAM_VERSION 3FF / 0CC M
16 PID_PEI_TYPE 3FF / 0CC M
27 PID_MCB_TABLE 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M
51 PID_PARAM_REFERENCE  - /  - M

PID_PARAM_REFENCE is used in FEC, for which KNX Data Security is not defined.
KNX Data Security is only defined for FEC. Therefore, for this Property, it is not
necessary tio define the Access Policies.

52 PID_OPERATION_MODE 3FF / 00C M

**Object Type 4: Application Program 2 Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

Application Program memory 3FF / 0CC R

The indicated Access Policy is only a recommendation: 3FF/0CC is the most
secure setting and should be respected unless there is a strong motivation.
EXAMPLE If 3FF/3FF would be allowed, then a hacker may set the drive pause
times too short and make an actuator break. It is possible that this is different
even per memory location.

Application Paramater memory 3FF / 0CC R
1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
6 PID_RUN_STATE_CONTROL 3FF / 0CC M

Savedate: Filename: page 11 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 2: Associationtable Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
||Group Object Association Table memory<br>This Acces Policy shall apply for whatever way (service) the Group Address Table is<br>accessed.|3FF / 0CC|M|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|7|___<br> PIDTABLEREFERENCE|3FF/ 0CC|M|
|23|__<br> PID_TABLE<br>This Acces Policy shall apply for whatever way (service) the Group Address Table is<br>accessed.|3FF / 0CC|M|
|27|PIDMCBTABLE|3FF/ 0CC|M|
|28|__<br> PIDERRORCODE|3FF/ 0CC|M|

|Object Type 3: Applicationprogram|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
||Application Program memory|3FF/ 0CC|R|
||Application Paramater memory|3FF/ 0CC|R|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|6|___<br> PIDRUNSTATECONTROL|3FF/ 0CC|M|
|7|___<br> PIDTABLEREFERENCE|3FF/ 0CC|M|
|13|__<br> PIDPROGRAMVERSION|3FF/ 0CC|M|
|16|__<br> PIDPEITYPE|3FF/ 0CC|M|
|27|__<br> PIDMCBTABLE|3FF/ 0CC|M|
|28|__<br> PIDERRORCODE|3FF/ 0CC|M|
|51|__<br> PID_PARAM_REFERENCE<br>PID_PARAM_REFENCE is used in FEC, for which KNX Data Security is not defined.<br>KNX Data Security is only defined for FEC. Therefore, for this Property, it is not<br>necessary tio define the Access Policies.|<br>- <br>/ <br>-|M|
|52|PIDOPERATIONMODE|3FF/ 00C|M|

|Object Type 4: Application Program 2 Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
||Application Program memory<br>The indicated Access Policy is only a recommendation: 3FF/0CC is the most<br>secure setting and should be respected unless there is a strong motivation.<br>EXAMPLE If 3FF/3FF would be allowed, then a hacker may set the drive pause<br>times too short and make an actuator break. It is possible that this is different<br>even per memory location.|3FF / 0CC|R|
||Application Paramater memory|3FF/ 0CC|R|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|6|___<br> PIDRUNSTATECONTROL|3FF/ 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 4: Application Program 2 Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

7 PID_TABLE_REFERENCE 3FF / 0CC M
13 PID_PROGRAM_VERSION 3FF / 0CC M
16 PID_PEI_TYPE 3FF / 0CC M
27 PID_MCB_TABLE 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M

**Object Type 6: Router Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M
29 PID_OBJECT_INDEX 3FF / 0CC M
30 PID_DOWNLOAD_COUNTER 3FF / 0CC M
51 PID_LINE_STATUS 3FF / 1FF M
52 PID_MAIN_LCCONFIG 3FF / 0CC M
53 PID_SUB_LCCONFIG 3FF / 0CC M
54 PID_MAIN_LCGRPCONFIG 3FF / 0CC M
55 PID_SUB_LCGRPCONFIG 3FF / 0CC M
56 PID_ROUTETABLE_CONTROL 3FF / 0CC M
57 PID_COUPL_SERV_CONTROL 3FF / 0CC M
58 PID_MAX_APDULENGTH_ROUTING 3FF / 1FF M
59 PID_L2_COUPLER_TYPE 3FF / 0CC M
61 PID_HOP_COUNT 3FF / 0CC M
63 PID_MEDIUM 3FF / 0CC M
67 PID_FILTER_TABLE_USE 3FF / 0CC M
80 PID_SECURITY_ROUTING_CONTROL 00C / 00C M
81 PID_SECURITY_PROXY_GRP_KEY_TABLE 00C / 00C M
82 PID_SECURITY_PROXY_ZONE_KEY_TABLE 00C / 00C M
83 PID_SECURITY_PROXY_INDIVIDUAL_ADDRESS_TABLE 00C / 00C M
84 PID_UNICAST_ROUTING_CONTROL 3FF / 0CC M
85 PID_BROADCAST_ROUTING_CONTROL 3FF / 0CC M
104 PID_PL110_SBC_CONTROL 3FF / 0CC M
105 PID_PL110_DOA 3FF / 0CC M
112 PID_RF_SBC_CONTROL 3FF / 0CC M
120 PID_IP_SBC_CONTROL 3FF / 0CC M

**Object Type 7: LTE Address Routing Table Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
51 PID_LTE_ROUTESELECT 3FF / 0CC M
52 PID_ROUTETABLE 3FF / 0CC M

Savedate: Filename: page 12 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 4: Application Program 2 Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|7|PIDTABLEREFERENCE|3FF/ 0CC|M|
|13|__<br> PIDPROGRAMVERSION|3FF/ 0CC|M|
|16|__<br> PIDPEITYPE|3FF/ 0CC|M|
|27|__<br> PIDMCBTABLE|3FF/ 0CC|M|
|28|__<br> PIDERRORCODE|3FF / 0CC|M|

|Object Type 6: Router Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|28|___<br> PIDERRORCODE|3FF/ 0CC|M|
|29|__<br> PIDOBJECTINDEX|3FF/ 0CC|M|
|30|__<br> PIDDOWNLOADCOUNTER|3FF/ 0CC|M|
|51|__<br> PIDLINESTATUS|3FF/ 1FF|M|
|52|__<br> PIDMAINLCCONFIG|3FF/ 0CC|M|
|53|__<br> PIDSUBLCCONFIG|3FF/ 0CC|M|
|54|__<br> PIDMAINLCGRPCONFIG|3FF/ 0CC|M|
|55|__<br> PIDSUBLCGRPCONFIG|3FF/ 0CC|M|
|56|__<br> PIDROUTETABLECONTROL|3FF/ 0CC|M|
|57|__<br> PIDCOUPLSERVCONTROL|3FF/ 0CC|M|
|58|___<br> PIDMAXAPDULENGTHROUTING|3FF/ 1FF|M|
|59|___<br> PIDL2COUPLERTYPE|3FF/ 0CC|M|
|61|___<br> PIDHOPCOUNT|3FF/ 0CC|M|
|63|__<br> PIDMEDIUM|3FF/ 0CC|M|
|67|_<br> PIDFILTERTABLEUSE|3FF/ 0CC|M|
|80|___<br> PIDSECURITYROUTINGCONTROL|00C / 00C|M|
|81|___<br> PIDSECURITYPROXYGRPKEYTABLE|00C / 00C|M|
|82|_____<br> PIDSECURITYPROXYZONEKEYTABLE|00C / 00C|M|
|83|_____<br> PIDSECURITYPROXYINDIVIDUALADDRESSTABLE|00C / 00C|M|
|84|_____<br> PIDUNICASTROUTINGCONTROL|3FF/ 0CC|M|
|85|___<br> PIDBROADCASTROUTINGCONTROL|3FF/ 0CC|M|
|104|___<br> PIDPL110SBCCONTROL|3FF/ 0CC|M|
|105|___<br> PIDPL110DOA|3FF/ 0CC|M|
|112|__<br> PIDRFSBCCONTROL|3FF/ 0CC|M|
|120|___<br> PIDIPSBCCONTROL|3FF/ 0CC|M|

|Object Type 7: LTE Address Routing Table Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|51|___<br> PIDLTEROUTESELECT|3FF/ 0CC|M|
|52|__<br> PIDROUTETABLE|3FF/ 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 8: cEMI Server Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
51 PID_MEDIUM_TYPE 3FF / 1FF M
52 PID_COMM_MODE 3FF / 1FF M
53 PID_MEDIUM_AVAILABILITY 3FF / 1FF M
54 PID_ADD_INFO_TYPES 3FF / 0CC M
55 PID_TIME_BASE 3FF / 0CC M
57 PID_CEMI_SERVER_SNA 3FF / 1FF M
58 PID_CEMI_SERVER_DEVICE_ADDRESS 3FF / 1FF M
59 PID_BIBAT_NEXTBLOCK 3FF / 0CC M
60 PID_RF_MODE_SELECT 3FF / 0CC M
61 PID_RF_MODE_SUPPORT 3FF / 0CC M
62 PID_RF_FILTERING_MODE_SELECT 3FF / 0CC M
63 PID_RF_FILTERING_MODE_SUPPORT 3FF / 0CC M
64 PID_COMM_MODES_SUPPORTED 3FF / 0CC M
65 PID_FILTERING_MODE_SELECT 3FF / 0CC M
66 PID_FILTERING_MODE_SUPPORT 3FF / 0CC M
68 PID_MAX_INTERFACE_APDU_LENGTH 3FF / 1FF M
69 PID_MAX_LOCAL_APDU_LENGTH 3FF / 0CC M
70 PID_RF_MULTI_SENDING_ACK 3FF / 0CC M

**Object Type 9: Group Object Table**

**Access**
**PID** **Property Name** **M/R**

**Policy**

Group Object Table memory 3FF / 0CC M

This Acces Policy shall apply for whatever way (service) the Group Address
Table is accessed.

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 3FF / 0CC M
7 PID_TABLE_REFERENCE 3FF / 0CC M
23 PID_TABLE 3FF / 0CC M
27 PID_MCB_TABLE 3FF / 0CC M
28 PID_ERROR_CODE 3FF / 0CC M
51 PID_GRPOBJTABLE 3FF / 0CC M
52 PID_EXT_GRPOBJREFERENCE 3FF / 0CC M
66 PID_GO_DIAGNOSTICS 3FF / 0CC M

**Object Type 11: KNXnet/IP Parameter Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
29 PID_OBJECT_INDEX 3FF / 0CC M
30 PID_DOWNLOAD_COUNTER 3FF / 0CC M
51 PID_PROJECT_INSTALLATION_ID 3FF / 0CC M
52 PID_KNX_INDIVIDUAL_ADDRESS 3FF / 0CC M

Savedate: Filename: page 13 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 8: cEMI Server Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|51|__<br> PIDMEDIUMTYPE|3FF/ 1FF|M|
|52|__<br> PIDCOMMMODE|3FF/ 1FF|M|
|53|__<br> PIDMEDIUMAVAILABILITY|3FF/ 1FF|M|
|54|__<br> PIDADDINFOTYPES|3FF/ 0CC|M|
|55|___<br> PIDTIMEBASE|3FF/ 0CC|M|
|57|__<br> PIDCEMISERVERSNA|3FF/ 1FF|M|
|58|___<br> PIDCEMISERVERDEVICEADDRESS|3FF/ 1FF|M|
|59|____<br> PIDBIBATNEXTBLOCK|3FF/ 0CC|M|
|60|__<br> PIDRFMODESELECT|3FF/ 0CC|M|
|61|___<br> PIDRFMODESUPPORT|3FF/ 0CC|M|
|62|___<br> PIDRFFILTERINGMODESELECT|3FF/ 0CC|M|
|63|____<br> PIDRFFILTERINGMODESUPPORT|3FF/ 0CC|M|
|64|____<br> PIDCOMMMODESSUPPORTED|3FF/ 0CC|M|
|65|___<br> PIDFILTERINGMODESELECT|3FF/ 0CC|M|
|66|___<br> PIDFILTERINGMODESUPPORT|3FF/ 0CC|M|
|68|___<br> PIDMAXINTERFACEAPDULENGTH|3FF/ 1FF|M|
|69|____<br> PIDMAXLOCALAPDULENGTH|3FF/ 0CC|M|
|70|____<br> PIDRFMULTISENDINGACK|3FF/ 0CC|M|

|Object Type 9: Group Object Table|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
||Group Object Table memory<br>This Acces Policy shall apply for whatever way (service) the Group Address<br>Table is accessed.|3FF / 0CC|M|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|3FF/ 0CC|M|
|7|___<br> PIDTABLEREFERENCE|3FF/ 0CC|M|
|23|__<br> PIDTABLE|3FF/ 0CC|M|
|27|_<br> PIDMCBTABLE|3FF/ 0CC|M|
|28|__<br> PIDERRORCODE|3FF/ 0CC|M|
|51|__<br> PIDGRPOBJTABLE|3FF/ 0CC|M|
|52|_<br> PIDEXTGRPOBJREFERENCE|3FF/ 0CC|M|
|66|__<br> PIDGODIAGNOSTICS|3FF/ 0CC|M|

|Object Type 11: KNXnet/IP Parameter Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|29|__<br> PIDOBJECTINDEX|3FF/ 0CC|M|
|30|__<br> PIDDOWNLOADCOUNTER|3FF/ 0CC|M|
|51|__<br> PIDPROJECTINSTALLATIONID|3FF/ 0CC|M|
|52|___<br> PIDKNXINDIVIDUALADDRESS|3FF / 0CC|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 11: KNXnet/IP Parameter Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

53 PID_ADDITIONAL_INDIVIDUAL_ADDRESSES 3FF / 0CC M
54 PID_CURRENT_IP_ASSIGNMENT_METHOD 3FF / 0CC M
55 PID_IP_ASSIGNMENT_METHOD 3FF / 0CC M
56 PID_IP_CAPABILITIES 3FF / 0CC M
57 PID_CURRENT_IP_ADDRESS 3FF / 0CC M
58 PID_CURRENT_SUBNET_MASK 3FF / 0CC M
59 PID_CURRENT_DEFAULT_GATEWAY 3FF / 0CC M
60 PID_IP_ADDRESS 3FF / 0CC M
61 PID_SUBNET_MASK 3FF / 0CC M
62 PID_DEFAULT_GATEWAY 3FF / 0CC M
63 PID_DHCP_BOOTP_SERVER 3FF / 0CC M
64 PID_MAC_ADDRESS 3FF / 0CC M
65 PID_SYSTEM_SETUP_MULTICAST_ADDRESS 3FF / 0CC M
66 PID_ROUTING_MULTICAST_ADDRESS 3FF / 0CC M
67 PID_TTL 3FF / 0CC M
68 PID_KNXNETIP_DEVICE_CAPABILITIES 3FF / 0CC M
69 PID_KNXNETIP_DEVICE_STATE 3FF / 0CC M
70 PID_KNXNETIP_ROUTING_CAPABILITIES 3FF / 0CC M
71 PID_PRIORITY_FIFO_ENABLED 3FF / 0CC M
72 PID_QUEUE_OVERFLOW_TO_IP 3FF / 0CC M
73 PID_QUEUE_OVERFLOW_TO_KNX 3FF / 0CC M
74 PID_MSG_TRANSMIT_TO_IP 3FF / 0CC M
75 PID_MSG_TRANSMIT_TO_KNX 3FF / 0CC M
76 PID_FRIENDLY_NAME 3FF / 0CC M
78 PID_ROUTING_BUSY_WAIT_TIME 3FF / 0CC M
79 PID_TUNNELLING_ADDRESSES 15F / 04C M
91 PID_BACKBONE_KEY 008 / 008 M
92 PID_DEVICE_AUTHENTICATION_CODE 008 / 008 M
93 PID_PASSWORD_HASHES 008 / 008 M
94 PID_SECURED_SERVICE_FAMILIES 15F / 04C M
95 PID_MULTICAST_LATENCY_TOLERANCE 15F / 04C M
96 PID_SYNC_LATENCY_FRACTION 15F / 04C M
97 PID_TUNNELLING_USERS 15F / 04C M

**Object Type 13: File Server Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
51 PID_MAX_APDU_LENGTH_OUT 3FF / 0CC R
52 PID_FILE_COMMAND 3FF / 0CC R
53 PID_FILE_PATH 3FF / 0CC R
56 PID_MAX_APDU_LENGTH 3FF / 0CC R

Savedate: Filename: page 14 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 11: KNXnet/IP Parameter Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|53|PIDADDITIONALINDIVIDUALADDRESSES|3FF/ 0CC|M|
|54|___<br> PIDCURRENTIPASSIGNMENTMETHOD|3FF/ 0CC|M|
|55|____<br> PIDIPASSIGNMENTMETHOD|3FF/ 0CC|M|
|56|___<br> PIDIPCAPABILITIES|3FF/ 0CC|M|
|57|__<br> PIDCURRENTIPADDRESS|3FF/ 0CC|M|
|58|___<br> PIDCURRENTSUBNETMASK|3FF/ 0CC|M|
|59|___<br> PIDCURRENTDEFAULTGATEWAY|3FF/ 0CC|M|
|60|___<br> PIDIPADDRESS|3FF/ 0CC|M|
|61|__<br> PIDSUBNETMASK|3FF/ 0CC|M|
|62|__<br> PIDDEFAULTGATEWAY|3FF/ 0CC|M|
|63|__<br> PIDDHCPBOOTPSERVER|3FF/ 0CC|M|
|64|___<br> PIDMACADDRESS|3FF/ 0CC|M|
|65|__<br> PIDSYSTEMSETUPMULTICASTADDRESS|3FF/ 0CC|M|
|66|____<br> PIDROUTINGMULTICASTADDRESS|3FF/ 0CC|M|
|67|___<br> PIDTTL|3FF/ 0CC|M|
|68|_<br> PIDKNXNETIPDEVICECAPABILITIES|3FF/ 0CC|M|
|69|___<br> PIDKNXNETIPDEVICESTATE|3FF/ 0CC|M|
|70|___<br> PIDKNXNETIPROUTINGCAPABILITIES|3FF/ 0CC|M|
|71|___<br> PIDPRIORITYFIFOENABLED|3FF/ 0CC|M|
|72|___<br> PIDQUEUEOVERFLOWTOIP|3FF/ 0CC|M|
|73|____<br> PIDQUEUEOVERFLOWTOKNX|3FF/ 0CC|M|
|74|____<br> PIDMSGTRANSMITTOIP|3FF/ 0CC|M|
|75|____<br> PIDMSGTRANSMITTOKNX|3FF/ 0CC|M|
|76|____<br> PIDFRIENDLYNAME|3FF/ 0CC|M|
|78|__<br> PIDROUTINGBUSYWAITTIME|3FF/ 0CC|M|
|79|____<br> PIDTUNNELLINGADDRESSES|15F / 04C|M|
|91|__<br> PIDBACKBONEKEY|008 / 008|M|
|92|__<br> PIDDEVICEAUTHENTICATIONCODE|008 / 008|M|
|93|___<br> PIDPASSWORDHASHES|008 / 008|M|
|94|__<br> PIDSECUREDSERVICEFAMILIES|15F / 04C|M|
|95|___<br> PIDMULTICASTLATENCYTOLERANCE|15F / 04C|M|
|96|___<br> PIDSYNCLATENCYFRACTION|15F / 04C|M|
|97|___<br> PIDTUNNELLINGUSERS|15F / 04C|M|

|Object Type 13: File Server Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|51|__<br> PIDMAXAPDULENGTHOUT|3FF/ 0CC|R|
|52|____<br> PIDFILECOMMAND|3FF/ 0CC|R|
|53|__<br> PIDFILEPATH|3FF/ 0CC|R|
|56|__<br> PIDMAXAPDULENGTH|3FF/ 0CC|R|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 14: E-Mode Channel**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
51 PID_CHAN_NUMBER 3FF / 1FF M
52 PID_CHAN_CODE 3FF / 1FF M
53 PID_CHAN_FLAGS 3FF / 1FF M
54 PID_CHAN_FB_LIST 3FF / 1FF M
55 PID_CHAN_ADJ_LISTS 3FF / 1FF M
61 PID_GO_CCODES_LIST 3FF / 1FF M
62 PID_GO_CFLAGS_LIST 3FF / 1FF M
63 PID_OBJECTLINK 3FF / 1FF M
64 PID_GO_SUBUNIT 3FF / 1FF M
65 PID_GO_NAME_LIST 3FF / 1FF M
66 PID_GO_DIAGNOSTICS 3FF / 0CC M
67 PID_OBJECTLINK_EXT 3FF / 1FF M
70 PID_PARAM_TYPES 3FF / 1FF M
71 PID_PARAM_FLAGS 3FF / 1FF M
72 PID_PARAM_NAMES 3FF / 1FF M
73 PID_PARAM_UNITS 3FF / 1FF M
79 PID_PARAM_VALUES 3FF / 1FF M

**Object Type 15: Adjusted E-Mode Channel**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
61 PID_GO_CCODES_LIST 3FF / 1FF M
62 PID_GO_CFLAGS_LIST 3FF / 1FF M
63 PID_OBJECTLINK 3FF / 1FF M
65 PID_GO_NAME_LIST 3FF / 1FF M
66 PID_GO_DIAGNOSTICS 3FF / 0CC M
67 PID_OBJECTLINK_EXT 3FF / 1FF M
70 PID_PARAM_TYPES 3FF / 1FF M
71 PID_PARAM_FLAGS 3FF / 1FF M
72 PID_PARAM_NAMES 3FF / 1FF M
73 PID_PARAM_UNITS 3FF / 1FF M
79 PID_PARAM_VALUES 3FF / 1FF M

**Object Type 16: Text Catalogue**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
51 PID_LOCALE_LIST 3FF / 1FF M
52 PID_LOCALE_SELECTION 3FF / 0CC M
53 PID_ACTIVE_LOCALE 3FF / 1FF M
60 PID_STRING_001 3FF / 1FF M
... 3FF / 1FF M

Savedate: Filename: page 15 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 14: E-Mode Channel|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|51|__<br> PIDCHANNUMBER|3FF/ 1FF|M|
|52|__<br> PIDCHANCODE|3FF/ 1FF|M|
|53|__<br> PIDCHANFLAGS|3FF/ 1FF|M|
|54|__<br> PIDCHANFBLIST|3FF/ 1FF|M|
|55|___<br> PIDCHANADJLISTS|3FF/ 1FF|M|
|61|___<br> PIDGOCCODESLIST|3FF/ 1FF|M|
|62|___<br> PIDGOCFLAGSLIST|3FF/ 1FF|M|
|63|___<br> PIDOBJECTLINK|3FF/ 1FF|M|
|64|_<br> PIDGOSUBUNIT|3FF/ 1FF|M|
|65|__<br> PIDGONAMELIST|3FF/ 1FF|M|
|66|___<br> PIDGODIAGNOSTICS|3FF/ 0CC|M|
|67|__<br> PIDOBJECTLINKEXT|3FF/ 1FF|M|
|70|__<br> PIDPARAMTYPES|3FF/ 1FF|M|
|71|__<br> PIDPARAMFLAGS|3FF/ 1FF|M|
|72|__<br> PIDPARAMNAMES|3FF/ 1FF|M|
|73|__<br> PIDPARAMUNITS|3FF/ 1FF|M|
|79|__<br> PIDPARAMVALUES|3FF / 1FF|M|

|Object Type 15: Adjusted E-Mode Channel|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|61|__<br> PIDGOCCODESLIST|3FF/ 1FF|M|
|62|___<br> PIDGOCFLAGSLIST|3FF/ 1FF|M|
|63|___<br> PIDOBJECTLINK|3FF/ 1FF|M|
|65|_<br> PIDGONAMELIST|3FF/ 1FF|M|
|66|___<br> PIDGODIAGNOSTICS|3FF/ 0CC|M|
|67|__<br> PIDOBJECTLINKEXT|3FF/ 1FF|M|
|70|__<br> PIDPARAMTYPES|3FF/ 1FF|M|
|71|__<br> PIDPARAMFLAGS|3FF/ 1FF|M|
|72|__<br> PIDPARAMNAMES|3FF/ 1FF|M|
|73|__<br> PIDPARAMUNITS|3FF/ 1FF|M|
|79|__<br> PIDPARAMVALUES|3FF/ 1FF|M|

|Object Type 16: Text Catalogue|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|51|__<br> PIDLOCALELIST|3FF/ 1FF|M|
|52|__<br> PIDLOCALESELECTION|3FF/ 0CC|M|
|53|__<br> PIDACTIVELOCALE|3FF/ 1FF|M|
|60|__<br> PIDSTRING001|3FF/ 1FF|M|
|...|__|3FF/ 1FF|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 16: Text Catalogue**

**Access**
**PID** **Property Name** **M/R**

**Policy**

200 PID_STRING_141 3FF / 1FF M

**Object Type 17: Security Interface Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
5 PID_LOAD_STATE_CONTROL 15F / 04C M
51 PID_SECURITY_MODE 15F / 04C M
52 PID_P2P_KEY_TABLE 00C / 00C M
53 PID_GRP_KEY_TABLE 00C / 00C M
54 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE 00C / 00C M
55 PID_SECURITY_FAILURES_LOG 1FF / 0CC M
56 PID_TOOL_KEY 008 / 008 M
57 PID_SECURITY_REPORT 1FF / 0CC M
58 PID_SECURITY_REPORT_CONTROL 00C / 00C M
59 PID_SEQUENCE_NUMBER_SENDING 00C / 00C M
60 PID_ZONE_KEY_TABLE 00C / 00C M
61 PID_GO_SECURITY_FLAGS 00C / 00C M
62 PID_ROLE_TABLE 15F / 04C M
70 PID_PB_KEY_ESTABLISH_REQUEST 3FF / 0CC M
71 PID_PB_KEY_ESTABLISH_RESPONSE 3FF / 0CC M
72 PID_PB_SECURITY_CONFIRM 3FF / 0CC M

**Object Type 18: E-Mode Device Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
60 PID_LOCALISATION_MODE 3FF / 0CC M
61 PID_LOCALISATION_REPORT 3FF / 0CC M
62 PID_LOCALISATION_COMMAND 3FF / 0CC M
63 PID_RECONSTRUCTION_MODE 3FF / 0CC M
90 PID_PB_START_CONFIG 3FF / 00C M
91 PID_PB_INPUT_SENSOR 3FF / 00C M
92 PID_PB_OUTPUT_ACTUATOR 3FF / 00C M
93 PID_PB_OUTPUT_ACTUATOR_SET_LINK 3FF / 00C M
94 PID_PB_NA_OUTPUT_ACTUATOR 3FF / 00C M
95 PID_PB_NA_OUTPUT_ACTUATOR_NB 3FF / 00C M
96 PID_PB_START_LINK 3FF / 00C M
97 PID_PB_STOP_LINK 3FF / 00C M
98 PID_PB_QUIT_CONFIG 3FF / 00C M
99 PID_PB_DELETE_CHANNEL 3FF / 00C M
100 PID_PB_NA_OUTPUT_ACTUATOR_NB_RESP 3FF / 00C M
101 PID_PB_INPUT_SENSOR_SET_LINK 3FF / 00C M
102 PID_PB_START_CONFIG_REMOTE 3FF / 00C M
103 PID_PB_EFFICIENT_LINKING 3FF / 00C M

Savedate: Filename: page 16 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 16: Text Catalogue|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|200|PIDSTRING141|3FF/ 1FF|M|

|Object Type 17: Security Interface Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|5|__<br> PIDLOADSTATECONTROL|15F / 04C|M|
|51|___<br> PIDSECURITYMODE|15F / 04C|M|
|52|__<br> PIDP2PKEYTABLE|00C / 00C|M|
|53|___<br> PIDGRPKEYTABLE|00C / 00C|M|
|54|___<br> PIDSECURITYINDIVIDUALADDRESSTABLE|00C / 00C|M|
|55|____<br> PIDSECURITYFAILURESLOG|1FF/ 0CC|M|
|56|___<br> PIDTOOLKEY|008 / 008|M|
|57|__<br> PIDSECURITYREPORT|1FF/ 0CC|M|
|58|__<br> PIDSECURITYREPORTCONTROL|00C / 00C|M|
|59|___<br> PIDSEQUENCENUMBERSENDING|00C / 00C|M|
|60|___<br> PIDZONEKEYTABLE|00C / 00C|M|
|61|___<br> PIDGOSECURITYFLAGS|00C / 00C|M|
|62|___<br> PIDROLETABLE|15F / 04C|M|
|70|__<br> PIDPBKEYESTABLISHREQUEST|3FF/ 0CC|M|
|71|____<br> PIDPBKEYESTABLISHRESPONSE|3FF/ 0CC|M|
|72|____<br> PIDPBSECURITYCONFIRM|3FF/ 0CC|M|

|Object Type 18: E-Mode Device Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|60|__<br> PIDLOCALISATIONMODE|3FF/ 0CC|M|
|61|__<br> PIDLOCALISATIONREPORT|3FF/ 0CC|M|
|62|__<br> PIDLOCALISATIONCOMMAND|3FF/ 0CC|M|
|63|__<br> PIDRECONSTRUCTIONMODE|3FF/ 0CC|M|
|90|__<br> PIDPBSTARTCONFIG|3FF/ 00C|M|
|91|___<br> PIDPBINPUTSENSOR|3FF/ 00C|M|
|92|___<br> PIDPBOUTPUTACTUATOR|3FF/ 00C|M|
|93|___<br> PIDPBOUTPUTACTUATORSETLINK|3FF/ 00C|M|
|94|_____<br> PIDPBNAOUTPUTACTUATOR|3FF/ 00C|M|
|95|____<br> PIDPBNAOUTPUTACTUATORNB|3FF/ 00C|M|
|96|_____<br> PIDPBSTARTLINK|3FF/ 00C|M|
|97|___<br> PIDPBSTOPLINK|3FF/ 00C|M|
|98|___<br> PIDPBQUITCONFIG|3FF/ 00C|M|
|99|___<br> PIDPBDELETECHANNEL|3FF/ 00C|M|
|100|___<br> PIDPBNAOUTPUTACTUATORNBRESP|3FF/ 00C|M|
|101|______<br> PIDPBINPUTSENSORSETLINK|3FF/ 00C|M|
|102|_____<br> PIDPBSTARTCONFIGREMOTE|3FF/ 00C|M|
|103|____<br> PIDPBEFFICIENTLINKING|3FF/ 00C|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

**Object Type 18: E-Mode Device Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

103 PID_PB_EXT_ADD_TX_LINK_REQUEST 3FF / 00C M
104 PID_PB_EXT_ADD_TX_LINK_RESPONSE 3FF / 00C M
105 PID_PB_EXT_ADD_RX_LINK_REQUEST 3FF / 00C M
106 PID_PB_EXT_ADD_RX_LINK_RESPONSE 3FF / 00C M
107 PID_PB_EXT_DELETE_LINK_REQUEST 3FF / 00C M
108 PID_PB_EXT_DELETE_LINK_RESPONSE 3FF / 00C M

**Object Type 19: RF Medium Object**

**Access**
**PID** **Property Name** **M/R**

**Policy**

1 PID_OBJECT_TYPE 3FF / 0CC M
2 PID_OBJECT_NAME 3FF / 0CC M
51 PID_RF_MULTI_TYPE 3FF / 0CC M
52 PID_RF_MULTI_PHYSICAL_FEATURES 155 / 155 M
53 PID_RF_MULTI_CALL_CHANNEL 3FF / 0CC M
54 PID_RF_MULTI_OBJECT_LINK 3FF / 0CC M
55 PID_RF_MULTI_EXT_GA_REPEATED 3FF / 0CC M
56 PID_RF_DOMAIN_ADDRESS 3FF / 1FF M
57 PID_RF_RETRANSMITTER 3FF / 0CC M
58 PID_RF_FILTERING_MODE_SUPPORT 3FF / 0CC M
59 PID_RF_FILTERING_MODE_SELECT 3FF / 0CC M
60 PID_RF_BIDIR_TIMEOUT 3FF / 0CC M
61 PID_RF_DIAG_SA_FILTER_TABLE 3FF / 0CC M
62 PID_RF_DIAG_QUALITY_TABLE[] 3FF / 0CC M
63 PID_RF_DIAG_PROBE 3FF / 0CC M
70 PID_TRANSMISSION_MODE 3FF / 0CC M
71 PID_RECEPTION_MODE 3FF / 0CC M
72 PID_TEST_SIGNAL 3FF / 0CC M
73 PID_FAST_ACK 3FF / 0CC M
74 PID_FAST_ACK_ACTIVATE 3FF / 0CC M
75 PID_RF_TYPES_SUPPORTED 3FF / 0CC M
76 PID_GRP_TX_MULTI_INFO_TABLE 3FF / 0CC M
77 PID_GRP_RX_MULTI_INFO_TABLE 3FF / 0CC M
78 PID_RF_MULTI_MEDIA_COUPLER_TYPE 3FF / 0CC M
79 PID_RF_MULTI_UNICAST_CONTROL 3FF / 0CC M
80 PID_RF_MULTI_BROADCAST_CONTROL 3FF / 0CC M
81 PID_RF_SMART_RETRANSMITTER 3FF / 0CC M
82 PID_GRP_TP_RF_MULTICAST_TABLE 3FF / 0CC M
83 PID_GRP_RF_TP_MULTICAST_TABLE 3FF / 0CC M
84 PID_RF_MULTI_FAST_SLOW_COMM 3FF / 0CC M
85 PID_RF_MULTI_FAST_MEDIA_COUPLER_IA 3FF / 0CC M
86 PID_RF_MULTI_SLOW_EXTENDER_IA 3FF / 0CC M
87 PID_GRP_MULTICAST_TABLE 3FF / 1FF M

Savedate: Filename: page 17 of 19
2019 04 18 AN193 v04 Access Policies AS docx

|Object Type 18: E-Mode Device Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|103|PIDPBEXTADDTXLINKREQUEST|3FF/ 00C|M|
|104|______<br> PIDPBEXTADDTXLINKRESPONSE|3FF/ 00C|M|
|105|______<br> PIDPBEXTADDRXLINKREQUEST|3FF/ 00C|M|
|106|______<br> PIDPBEXTADDRXLINKRESPONSE|3FF/ 00C|M|
|107|______<br> PIDPBEXTDELETELINKREQUEST|3FF/ 00C|M|
|108|_____<br> PIDPBEXTDELETELINKRESPONSE|3FF / 00C|M|

|Object Type 19: RF Medium Object|Col2|Col3|Col4|
|---|---|---|---|
|**PID**|**Property Name**|**Access**<br>**Policy**|**M/R**|
|1|PIDOBJECTTYPE|3FF/ 0CC|M|
|2|__<br> PIDOBJECTNAME|3FF/ 0CC|M|
|51|__<br> PIDRFMULTITYPE|3FF/ 0CC|M|
|52|___<br> PIDRFMULTIPHYSICALFEATURES|155 / 155|M|
|53|____<br> PIDRFMULTICALLCHANNEL|3FF/ 0CC|M|
|54|____<br> PIDRFMULTIOBJECTLINK|3FF/ 0CC|M|
|55|____<br> PIDRFMULTIEXTGAREPEATED|3FF/ 0CC|M|
|56|_____<br> PIDRFDOMAINADDRESS|3FF/ 1FF|M|
|57|___<br> PIDRFRETRANSMITTER|3FF/ 0CC|M|
|58|__<br> PIDRFFILTERINGMODESUPPORT|3FF/ 0CC|M|
|59|____<br> PIDRFFILTERINGMODESELECT|3FF/ 0CC|M|
|60|____<br> PIDRFBIDIRTIMEOUT|3FF/ 0CC|M|
|61|___<br> PIDRFDIAGSAFILTERTABLE|3FF/ 0CC|M|
|62|_____<br> PIDRFDIAGQUALITYTABLE[]|3FF/ 0CC|M|
|63|____<br> PIDRFDIAGPROBE|3FF/ 0CC|M|
|70|___<br> PIDTRANSMISSIONMODE|3FF/ 0CC|M|
|71|__<br> PIDRECEPTIONMODE|3FF/ 0CC|M|
|72|__<br> PIDTESTSIGNAL|3FF/ 0CC|M|
|73|__<br> PIDFASTACK|3FF/ 0CC|M|
|74|__<br> PIDFASTACKACTIVATE|3FF/ 0CC|M|
|75|___<br> PIDRFTYPESSUPPORTED|3FF/ 0CC|M|
|76|___<br> PIDGRPTXMULTIINFOTABLE|3FF/ 0CC|M|
|77|_____<br> PIDGRPRXMULTIINFOTABLE|3FF/ 0CC|M|
|78|_____<br> PIDRFMULTIMEDIACOUPLERTYPE|3FF/ 0CC|M|
|79|_____<br> PIDRFMULTIUNICASTCONTROL|3FF/ 0CC|M|
|80|____<br> PIDRFMULTIBROADCASTCONTROL|3FF/ 0CC|M|
|81|____<br> PIDRFSMARTRETRANSMITTER|3FF/ 0CC|M|
|82|___<br> PIDGRPTPRFMULTICASTTABLE|3FF/ 0CC|M|
|83|_____<br> PIDGRPRFTPMULTICASTTABLE|3FF/ 0CC|M|
|84|_____<br> PIDRFMULTIFASTSLOWCOMM|3FF/ 0CC|M|
|85|_____<br> PIDRFMULTIFASTMEDIACOUPLERIA|3FF/ 0CC|M|
|86|______<br> PIDRFMULTISLOWEXTENDERIA|3FF/ 0CC|M|
|87|_____<br> PIDGRPMULTICASTTABLE|3FF/ 1FF|M|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

### 2.3 Resource definition or used Resources

 _This clause is not intended for integration in the KNX Specifications._

###### The Access Policies shall be part of the Property definitions in [01] and shall for convenience be repeated in [03].

### 2.4 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not introduce neither modify any Management Procedures.

 The defined Access Policies for Tool Access have been set to allow configuration by the tool (ETS) without changing the Management Procedures.

 However, the followed strategy makes that some Properties in the device may not be accessible without the proper Tool Key: see below.

### 2.5 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not introduce neither modify any Configuration Procedures.

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

###### The proposed Access Policies are a necessary completion to and more safe (closed) definition of the Access Policies as defined in [04].

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not define or modify any Profiles.

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

###### None.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

###### Indications about the integration of this Application Note in the KNX Specifications are given directly in the relevant clauses above.

### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

###### Configuration Interworking is not modified by this Application Note.

 Yet, devices supporting Data Security and Access Policies may no longer be reverse engineered or even discovered by legacy Clients. This is inherent to the use of KNX Data Run-time Interworking

Savedate: Filename: page 18 of 19
2019 04 18 AN193 v04 Access Policies AS docx


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN193 Access Policies

### 3.3 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

#### 3.3.1 Transitional period
###### General

 This Application Note shall have immediate effect after the publication of the Approved Standard, with exception of the completion of the error handling of A_PropertyDescription_Read (clause 2.2.1).

 Completion of the error handling of A_PropertyDescription_Read (clause 2.2.1)

 After the publication of the Approved Standard state of this Application Note, the completed error handling shall have

 - immediate effect for devices implementing Data Security, and
 - effect after a transitional period of 1 year for devices not implementing Data Security.

 The proposed completed error handling (2.2.1) is already tested in the current test specifications clause 2.15.2 to clause 2.15.6.

#### 3.3.2 Indications for testing
###### The Access Policies are a key element of securing KNX devices. Therefore, the proper realisation of the Access Policies in devices shall be tested. Yet, because of the vast number of services, data, read- and write flags, it will not be possible to test all combinations and representative tests shall be well chosen.

### 3.4 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

###### The Access Policies are set to allow the common tool (ETS) with the proper Tool Key to always have access to the device with unlimited tool compatibility.

 Yet, if the proper Tool Key is missing, the tool will have almost no access to the device and may only be able to discover its presence (Individual Address) and max. APDU-length (in case of a Coupler), but no more.

EXAMPLE 4 Without the proper Tool Key, an operation like “Device Info” will only reveal the Individual
Address, but no more system data, and possibly plain accessible application specific data (Properties).

### 3.5 Security

 _This clause is not intended for integration in the KNX Specifications._

###### The proposed Access Policies are set to make that a secure device reveals as little as possible information about itself and only this information for which there is a use case.

### 3.6 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

###### The proposed Access Policies are compatible with the first implementations of KNX Data Security in ETS.

 There are no other risks or compatibility issues than the ones inherent to the use of Data Security itself.

Savedate: Filename: page 19 of 19
2019 04 18 AN193 v04 Access Policies AS docx


-----

