## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 165 rev 0.4

### Approved by KonCert 07/13 – to be approved in Release for Voting by KTB 07/13 – Immediate effect after final voting

**Subject:** FEC Certification

**Question:** What are the tests to be performed by a device to check compliance of a product against the Ctrl
FEC profile ?

**Answer:**

#### Document updates

**Version** **Date** **Modifications**

v0.0 May 2013 Working document for KonCert discussion
v0.1 June 2013 Update with Koncert first feedbacks.
v0.2 July 2013 Update with Koncert second meeting (2013.07.09) feedbacks.
v0.3 July 2013 Update after KonCert meeting on 2013.07.30.
Remove clause concerning ETS RF system aspects (because not yet voted).
v0.4 July 2013 Readying for release for Voting – last minute changes

#### Contents

### 1. Introduction ........................................................................................................................ 2 1.1 General considerations ........................................................................................... 2

 2. Glossary .............................................................................................................................. 2

 3. Ctrl FEC profile ................................................................................................................. 3 3.1 [General] Domain Address unicity check .............................................................. 3 3.1.1 Testing of NM_DomainAddress_Scan2 procedure using A_DomainAddressSelective_Read-service .................................................... 3 3.1.2 Testing of NM_DomainAddress_Scan2 procedure using A_DomainAddressSelective_Read-service : negative case ........................... 3 3.2 [General] Device Management: Interface Object Index Discovery ...................... 4 3.2.1 Testing of NM_ObjectIndex_Read procedure using A_NetworkParameterRead-service ................................................................ 4 3.3 [General] Device Management: Master Reset ....................................................... 8 3.3.1 Testing of A_Restart-Service : Server Test .................................................... 8 3.4 [Easy specific] Device identification: device descriptor 2 .................................. 13 3.4.1 Testing of DeviceDescriptorType2 for Ctrl FEC profile .............................. 13 3.5 [General] Configuration signature ....................................................................... 14 3.5.1 PID_DOWNLOAD_COUNTER ................................................................. 14 3.6 [Easy specific] Interface Objects and Properties ................................................. 16 3.6.1 Device Object ............................................................................................... 16 3.6.2 Non adjustable channel (use of E-Mode Channel Object only) ................... 17 3.6.3 Adjustable channel (use of E-Mode Channel Object and Adjusted E-Mode Channel object) ............................................................................................. 27

|Version|Date|Modifications|
|---|---|---|
|v0.0|May 2013|Working document for KonCert discussion|
|v0.1|June 2013|Update with Koncert first feedbacks.|
|v0.2|July 2013|Update with Koncert second meeting (2013.07.09) feedbacks.|
|v0.3|July 2013|Update after KonCert meeting on 2013.07.30.<br>Remove clause concerning ETS RF system aspects(because notyet voted).|
|v0.4|July 2013|Readying for release for Voting – last minute changes|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
### 3.6.4 Text Catalogue Object .................................................................................. 36 3.6.5 E-Mode Device Object ................................................................................. 38

## 1. Introduction

#### Scope of this document is a description of the different test procedures used to ensure the conformance of devices to the Ctrl FEC profile. 
 This document contains test specifications for the following FEC specifications:
  AN134 v02 Flexible E-Mode Channels DV 
 It also contains test specifications for the following System specifications:
  AN132 v02 A_NetworkParameter_InfoReport DV
  Interface Object Index Discovery : already integrated in 3/3/7 and 3/5/2 (previously AN 124)
  AN127 v05 Master Reset AS
  AN137 v02 Configuration Signature DV
  AN133 v02 A_DomainAddressSelective_Read DV

 1.1 General considerations
 Some of features in this document are specific to the Easy Ctrl FEC profile. The corresponding chapter of the current document is, in these cases, prefixed with “Easy specific”. Some other features are not specific to Ctrl FEC profile and can be used in other configuration modes. In these cases, the corresponding chapter is prefixed with “General”.
 In this document, the individual address of the BDUT is often set to the value 02FFh. In Easy mode configuration, this is the default ex-factory individual address of TP devices. For the features that are not Easy specific or for RF devices, this default individual address shall be replaced by the default ex-factory IA corresponding to the mode and the medium used.

## 2. Glossary

#### AP : Application Program BDUT : Bus Device Under Test FEC : Flexible E-Mode Channel IA : Individual Address


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

 3. Ctrl FEC profile

 _If not explicitly said in the test, the tests are written for BDUT on TP media. For other media (e.g. RF, PL), the_
_tests have to be adapted accordingly._

#### 3.1 [General] Domain Address unicity check

 3.1.1 Testing of NM_DomainAddress_Scan2 procedure using A_DomainAddressSelective_Read- service

 _This clause is intended to define the test for checking the uniqueness of a domain address on an open media._

This feature is specified in the document “AN133 v02 A_DomainAddressSelective_Read DV”.
This is based on the DomainAddressSelective_Read service.

Preparation: the default BDUT individual address (ex-factory) is 02FFh. Its serial number is 010203040506h. Its
domain address is 000000000003h.

Test sequence: send an A_DomainAddressSelective_Read in broadcast with start domain address = 000000000002h
and end domain address = 000000000004h.

IN    BC FFFA 0000 E6 03 E3 01 00 00 00 00 00 02 00 00 00 00 00 04 00
:DomAddrSelectiveRead(DomAddrStart=000000000002, DomAddrEnd=000000000004)
OUT  BC 02FF FFFA E6 03 E2 01 00 00 00 00 00 03 :

Acceptance: BDUT shall respond in a random wait time from 0 to 2 seconds with its domain address.

#### 3.1.2 Testing of NM_DomainAddress_Scan2 procedure using A_DomainAddressSelective_Read- service : negative case

Preparation: the default BDUT individual address (ex-factory) is 02FFh. Its serial number is 010203040506h. Its
domain address is 000000000003h.

Test sequence: send an A_DomainAddressSelective_Read in broadcast with start domain address = 00000000000Ah
and end domain address = 00000000000Fh.

IN    BC FFFA 0000 E6 03 E3 01 00 00 00 00 00 0A 00 00 00 00 00 0F 00
:DomAddrSelectiveRead(DomAddrStart=00000000000A, DomAddrEnd=00000000000F)

Acceptance: BDUT does not respond.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.2 [General] Device Management: Interface Object Index Discovery 

This feature is specified in the document “AN124 v03 Interface Object Index Discovery AS”.
This is based on the NetworkParameterRead service.

The following subclauses describe the tests in the different use cases of the service, described in AN124.
The following table summarizes the tests:

Number of Start Number of
Case Error
interface objects instance instances

a 6 1 6
b 6 2 4
c Number of instances = 0 6 4 0
d Unvalid start instance and number of instances 6 0 0
e Unvalid start instance 6 0 2
f Value of start instance is too high 6 7 2
g Instances partly out of range 6 3 5
h number of instances is too high 8 1 15

Number of instances = 0 and total number of
i 8 1 0
instances is too high for a frame

#### 3.2.1 Testing of NM_ObjectIndex_Read procedure using A_NetworkParameterRead-service

 3.2.1.1 Read of object index : normal case (a)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 1 and number_of_instance 6.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 01 06 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=01 06 )
OUT BC 0201 AFFE 6E 03 DB 00 0E 1D 01 06 01 06 0E 0F 10 11 12 13 :

Acceptance: BDUT shall respond with the list of object indexes (14, 15, 16, 17, 18, 19) with the start_instance 1, the
number of instances 6 of this object type.

#### 3.2.1.2 Read of object index : normal case (b)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 2 and number_of_instance 4.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 02 04 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=02 04 )
OUT BC 0201 AFFE 6C 03 DB 00 0E 1D 02 04 02 04 0F 10 11 12 :

Acceptance: BDUT shall respond with the list of object indexes (15, 16, 17, 18) with the start_instance 2, the number of
instances 4 of this object type.

|Case|Error|Number of<br>interface objects|Start<br>instance|Number of<br>instances|
|---|---|---|---|---|
|a||6|1|6|
|b||6|2|4|
|c|Number of instances  = 0|6|4|0|
|d|Unvalid start instance and number of instances|6|0|0|
|e|Unvalid start instance|6|0|2|
|f|Value of start instance is too high|6|7|2|
|g|Instancespartly out of range|6|3|5|
|h|number of instances is too high|8|1|15|
|i|Number of instances = 0  and total number of<br>instances is too high for a frame|8|1|0|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.2.1.3 Read of object index : error case (c)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 4 and number_of_instance 0.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 04 00 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=04 00 )
OUT BC 0201 AFFE 6B 03 DB 00 0E 1D 04 00 04 03 11 12 13 :

Acceptance: BDUT shall respond with the list of object indexes (16, 17, 18) with the start_instance 4, the number of
instances 3 of this object type.

#### 3.2.1.4 Read of object index : error case (d)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 0 and number_of_instance 0.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 00 00 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=00 00 )
OUT BC 0201 AFFE 68 03 DB 00 0E 1D 00 00 00 06 :

Acceptance: BDUT shall respond with no list of object indexes but with the start_instance 0, the number of instances 6
of this object type.

#### 3.2.1.5 Read of object index : error case (e)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 0 and number_of_instance 2.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 00 02 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=00 02 )
OUT BC 0201 AFFE 68 03 DB 00 0E 1D 00 02 00 00 :NetworkParameterResponse(ObjType=000E,
PID=1D, TestData=00 02 00 00 )

Acceptance: BDUT shall respond with no list of object indexes but with the start_instance 0 and the number of
instances 0.

#### 3.2.1.6 Read of object index : error case (f)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 7 and number_of_instance 2.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 07 02 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=07 02 )
OUT BC 0201 AFFE 68 03 DB 00 0E 1D 07 02 00 00 :

Acceptance: BDUT shall respond with no list of object indexes but with the start_instance 0 and the number of
instances 0.

#### 3.2.1.7 Read of object index : error case (g)

Preparation: the BDUT individual address is 0201h. It contains 6 interface objects of type 0E, at index 14,15,16,17,18
and 19.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 3 and number_of_instance 5.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 03 05 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=03 05 )
OUT BC 0201 AFFE 6C 03 DB 00 0E 1D 03 05 03 04 10 11 12 13 :

Acceptance: BDUT shall respond with the list of object indexes (16,17,18,19), with the start_instance 3 and the number
of instances 4.

#### 3.2.1.8 Read of object index : error case (h)

Preparation: the BDUT individual address is 0201h. It contains 8 interface objects of type 0E, at index
14,15,16,17,18,19,20 and 21.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 1 and number_of_instance 15.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 01 0F :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=01 0F )
OUT BC 0201 AFFE 6F 03 DB 00 0E 1D 01 0F 01 07 0E 0F 10 11 12 13 14
:NetworkParameterResponse(ObjType=000E, PID=1D, TestData=01 0F 01 07 0E 0F 10 11 12 13
14 )

Acceptance: BDUT shall respond with the list of object indexes (14,15,16,17,18,19,20), with the start_instance 1 and
the number of instances 7. The response of the BDUT depends on the maximum supported APDU-length. In the above
case, the maximum supported APDU-length of the BDUT is 15 (no extended frame).

#### 3.2.1.9 Read of object index : error case (i)

Preparation: the BDUT individual address is 0201h. It contains 8 interface objects of type 0E, at index
14,15,16,17,18,19,20 and 21.

Test sequence: send an A_NetworkParameterRead to the BDUT, on object type 0Eh (E-Mode Channel) and
PID_OBJECT_INDEX (29), with start_instance 1 and number_of_instance 0.

IN   BC AFFE 0201 66 03 DA 00 0E 1D 01 00 :NetworkParameterRead(ObjType=000E, PID=1D,
TestInfo=01 00 )


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 0201 AFFE 6F 03 DB 00 0E 1D 01 00 01 07 0E 0F 10 11 12 13 14
:NetworkParameterResponse(ObjType=000E, PID=1D, TestData=01 00 01 07 0E 0F 10 11 12 13 14
)

Acceptance: BDUT shall respond with the list of object index (14,15,16,17,18,19,20), with the start_instance 1 and the
number of instances 7. The response of the BDUT depends on the maximum supported APDU-length. In the above
case, the maximum supported APDU-length of the BDUT is 15 (no extended frame).


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.3 [General] Device Management: Master Reset

The feature “Master Reset” is one of the mandatory features for the Ctrl FEC profile.
This feature is specified in the document “AN127 v05 Master Reset AS”.

The default ex-factory IA used in the following test sequences is 02FFh, as is the case for Easy mode TP devices. This
is dependant on the mode and the medium of the device, and shall – if needed - be adapted accordingly.

In the list of erase codes, some are optional and some are mandatory (Erase Code Confirmed restart). If an erase code is
not supported, then the test result shall be similar to the one in §3.3.1.11.

#### 3.3.1 Testing of A_Restart-Service : Server Test

The existing A_Restart service has been extended to support “Master reset” feature additionally to the “Basic restart”
feature”.
It is not the intention here to test the existing “Basic restart” feature, but to check the conformance of the extended
feature “Master reset”.
Some of the erase codes are optional. In case they are not supported by the device, the device shall respond negatively
with the error “Unsupported Erase Code”.

#### 3.3.1.1 Confirmed Restart (Erase Code = 01h)

Preparation: the BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 01h and Channel Number 00h to the BDUT

Switch on programming mode of the BDUT
IN         BC AFFE 0201 63 03 81 01 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall confirm the restart, shall not reset any resource value (at least IA) and switch off the
programming LED.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.2 Factory Reset (Erase Code = 02h) : all channels

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 02h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 02 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset the applicable resources (at least IA) and confirm the reset without any error.

Check whether the BDUT has its default IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 02FF 0000 E1 01 40 :IndAddrResponse(Addr=02FF)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.3.1.3 Factory Reset (Erase Code = 02h) : one valid channel number

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 02h and Channel Number 01h to the BDUT.

IN         BC AFFE 0201 63 03 81 02 01 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset the applicable resources (at least IA and if applicable, on the resources of the indicated
valid channel) and confirm the reset without any error.

Check whether the BDUT has its default IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 02FF 0000 E1 01 40 :IndAddrResponse(Addr=02FF)

#### 3.3.1.4 ResetIA (Erase Code = 03h)

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 03h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 03 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset its IA to its medium specific default IA (TP in the above case) and confirm the reset
without any error.

Check whether the BDUT has its default IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 02FF 0000 E1 01 40 :IndAddrResponse(Addr=02FF)

#### 3.3.1.5 ResetAP (Erase Code = 04h)

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 04h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 04 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset its application program and confirm the reset without any error. The way to check
whether the AP has been reset is application specific.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 3.3.1.6 ResetParam (Erase Code = 05h) : all channels

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence:

  - Modify a parameter in order to change the default factory value of this parameter.

  - Send a Master Reset with Erase Code 05h and Channel Number 00h to the BDUT.

  - Verify that the default value is set back for this parameter.

IN    BC AFFE 0201 66 43 D7 0A 4F 10 01 0B :PropertyValueWrite(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0B )
IN BC AFFE 0201 65 43 D5 0A 4F 10 01 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0A 4F 10 01 0B :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0B )

IN     BC AFFE 0201 63 03 81 05 00 :
OUT   BC 0201 AFFE 64 03 A1 00 00 00 :

IN    BC AFFE 0201 65 43 D5 0A 4F 10 01 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0A 4F 10 01 0A :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0A )

Acceptance: BDUT shall reset its parameters and confirm the reset without any error.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.7 ResetParam (Erase Code = 05h) : one valid channel number

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence:

  - Modify a parameter of channel number 01 in order to change the default factory value of this parameter.

  - Send a Master Reset with Erase Code 05h and Channel Number 01h to the BDUT.

  - Verify that the default value is set back for this parameter.

IN    BC AFFE 0201 66 43 D7 0A 4F 10 01 0B :PropertyValueWrite(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0B )
IN BC AFFE 0201 65 43 D5 0A 4F 10 01 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0A 4F 10 01 0B :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0B )

IN     BC AFFE 0201 63 03 81 05 01 :
OUT   BC 0201 AFFE 64 03 A1 00 00 00 :

IN    BC AFFE 0201 65 43 D5 0A 4F 10 01 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0A 4F 10 01 0A :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0A )

Acceptance: BDUT shall reset the parameters of the channel number 01 and confirm the reset without any error.

Check whether the BDUT has kept its IA (switch on programming mode)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.8 ResetLinks (Erase Code = 06h) : all channels

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh. The group object
association table should not be empty in order to check that it becomes empty.

Test sequence: send a Master Reset with Erase Code 06h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 06 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset its links and confirm the reset without any error.

Check before and after test (attribute GA to at least one object) and check whether no links are returned after erasing.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.9 ResetLinks (Erase Code = 06h) : one valid channel number

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh. The group object
association table should not be empty in order to check that it becomes empty.

Test sequence: send a Master Reset with Erase Code 06h and Channel Number 01h to the BDUT.

IN         BC AFFE 0201 63 03 81 06 01 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset the links of channel number 01h and confirm the reset without any error.

Check before and after test (attribute GA to at least one object of the channel number 01h) and check whether no links
are returned after erasing.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.10 Factory Reset without IA (Erase Code = 07h)

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 07h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 07 00 :
OUT       BC 0201 AFFE 64 03 A1 00 00 00 :

Acceptance: BDUT shall reset its resources except it individual address and confirm the reset without any error.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.11 Unsupported Erase Code 00h 

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 00h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 00 00 :
OUT       BC 0201 AFFE 64 03 A1 02 00 00 :

Acceptance: BDUT shall send an error 02h (Unsupported Erase Code) as response.

#### 3.3.1.12 Unsupported Erase Code 08h 

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 08h and Channel Number 00h to the BDUT.

IN         BC AFFE 0201 63 03 81 08 00 :
OUT       BC 0201 AFFE 64 03 A1 02 00 00 :

Acceptance: BDUT shall send an error 02h (Unsupported Erase Code) as response.

#### 3.3.1.13 Invalid Channel Number with Erase Code 03h

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh.

Test sequence: send a Master Reset with Erase Code 03h (ResetIA) and Channel Number 01h to the BDUT.

IN         BC AFFE 0201 63 03 81 03 01:
OUT       BC 0201 AFFE 64 03 A1 03 00 00:

Acceptance: BDUT shall send an error 03h (Invalid Channel Number) as response.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.14 Invalid Channel Number with Erase Code 02h

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh. The actual BDUT has
only 6 application channel.

Test sequence: send a Master Reset with Erase Code 02h (Factory Reset) and Channel Number 09h to the BDUT.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

IN         BC AFFE 0201 63 03 81 02 09:
OUT       BC 0201 AFFE 64 03 A1 03 00 00:

Acceptance: if applicable, BDUT shall send an error 03h (Invalid Channel Number) as response.

Check whether the BDUT has kept its IA (switch on programming mode)

IN         BC AFFE 0000 E1 01 00 :IndAddrRead()
IN         BC 0201 0000 E1 01 40 :IndAddrResponse(Addr=0201)

#### 3.3.1.15 Access denied 

Preparation: the actual BDUT individual address is 0201h, but its default ex-factory IA is 02FFh. One resource involved
in the Master Reset is protected by an access level of 2 or higher.

Test sequence: send a Master Reset with an Erase Code XXh and a Channel Number YYh that involve the protected
ressource.

IN         BC AFFE 0201 63 03 81 XX YY :
OUT       BC 0201 AFFE 64 03 A1 01 00 00 :

Acceptance: BDUT shall send an error 01h (Access denied) as response.

#### 3.4 [Easy specific] Device identification: device descriptor 2

The specification of this feature is done in the document “AN134 v02 Flexible E-Mode Channels DV”.
This feature is based on the DeviceDescriptorRead service.

#### 3.4.1 Testing of DeviceDescriptorType2 for Ctrl FEC profile

Preparation: the BDUT individual address is 0201h. This device implements the Ctrl FEC profile. The Application
Manufacturer id is 0009h and the application identifier is 2097h. Application version is 01h.

Test sequence: send a A_DeviceDescriptorType2 to the BDUT.

IN    BC FFFA 0201 61 03 02 :DeviceDescriptorRead(DescType=02)
OUT  BC 0201 FFFA 6F 03 42 00 09 20 97 01 80 00 00 00 00 00 00 00 00 :

Acceptance: BDUT shall respond with a Management Profile octet (octet 5) equal to 80h to denote a Ctrl FEC device.
Moreover the fields Channel Info 1 to Channel Info 4 shall be 0000h.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.5 [General] Configuration signature

 3.5.1 PID_DOWNLOAD_COUNTER

The feature “Configuration Signature” is one of the mandatory features for the Ctrl FEC profile.
The specification of this feature is done in the document “AN137 v02 Configuration Signature”.

#### 3.5.1.1 Testing of PID_DOWNLOAD_COUNTER : default ex-factory value

Preparation: the BDUT individual address is 02FFh. This device implements the Ctrl FEC profile. The BDUT is in an
ex-factory state.

Test sequence: send a A_PropertyValue_Read, on device index 0, PID_DOWNLOAD_COUNTER to the BDUT.

IN    AFFE 02FF 65 03 D5 00 1E 10 01 :PropertyValueRead(Obj=00, Prop=1E, Count=1, Start=001)
OUT  BC 02FF AFFE 67 03 D6 00 1E 10 01 00 00 :PropertyValueResponse(Obj=00, Prop=1E, Count=1,
Start=001, Data=00 00 )

Acceptance: BDUT shall respond with value 0000h.

#### 3.5.1.2 Testing of PID_DOWNLOAD_COUNTER: modify configuration

Preparation: the BDUT individual address is 02FFh. This device implements the Ctrl FEC profile. The BDUT is in an
ex-factory state.

Test sequence:

  - send a A_PropertyValue_Read, on device index 0, PID_DOWNLOAD_COUNTER to the BDUT.

  - modify the configuration of BDUT, by changing its individual address to 0201h

  - send a A_PropertyValue_Read, on device index 0, PID_DOWNLOAD_COUNTER to the BDUT.

IN    BC AFFE 02FF 65 03 D5 00 1E 10 01 :PropertyValueRead(Obj=00, Prop=1E, Count=1, Start=001)
OUT BC 02FF AFFE 67 03 D6 00 1E 10 01 00 00 :PropertyValueResponse(Obj=00, Prop=1E, Count=1,
Start=001, Data=00 00 )
IN   BC AFFE 0000 E3 00 C0 02 01 :IndAddrWrite(Addr=0201)

IN   BC AFFE 02FF 65 03 D5 00 1E 10 01 :PropertyValueRead(Obj=00, Prop=1E, Count=1, Start=001)
OUT BC 02FF AFFE 67 03 D6 00 1E 10 01 00 01 :PropertyValueResponse(Obj=00, Prop=1E, Count=1,
Start=001, Data=00 01 )

Acceptance: BDUT shall respond with a value (C2) different than ex-factory value (C1). The value shall be greater than
original value (C2 > C1).

#### 3.5.1.3 Testing of PID_DOWNLOAD_COUNTER: modify configuration, and undo

Preparation: the BDUT individual address is 02FFh. This device implements the Ctrl FEC profile. The BDUT is in an
ex-factory state.

Test sequence:


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

  - send a A_PropertyValue_Read, on device index 0, PID_DOWNLOAD_COUNTER to the BDUT.

  - modify the configuration of BDUT, by changing its individual address to 0201h

  - modify the configuration of BDUT, by changing its individual address to 02FFh (setting it back to the original
one).

  - send a A_PropertyValue_Read, on device index 0, PID_DOWNLOAD_COUNTER to the BDUT.

IN   BC AFFE 02FF 65 03 D5 00 1E 10 01 :PropertyValueRead(Obj=00, Prop=1E, Count=1, Start=001)
OUT BC 02FF AFFE 67 03 D6 00 1E 10 01 00 00 :PropertyValueResponse(Obj=00, Prop=1E, Count=1,
Start=001, Data=00 00 )
IN   BC 1040 0000 E3 00 C0 02 01 :IndAddrWrite(Addr=0201)
IN   BC 1040 0000 E3 00 C0 02 FF :IndAddrWrite(Addr=02FF)

IN   BC AFFE 02FF 65 03 D5 00 1E 10 01 :PropertyValueRead(Obj=00, Prop=1E, Count=1, Start=001)
OUT BC 02FF AFFE 67 03 D6 00 1E 10 01 00 01 :PropertyValueResponse(Obj=00, Prop=1E, Count=1,
Start=001, Data=00 01 )

Acceptance: BDUT shall respond with a value (C2) different than ex-factory value (C1). The value shall be greater than
original value (C2 > C1).


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 3.6 [Easy specific] Interface Objects and Properties

 _Some of the tests in this clause may have to be adapted due to an updated version of the AN134, that is under_
_Voting cycle._

If this is not explicitly defined, the specification of the features of this clause is done in the document “AN134 v02
Flexible E-Mode Channels DV”.
The features are based on classical services used with interface objects and properties (e.g. PropertyValueRead).

#### 3.6.1 Device Object

For all tests of the Device Object, the BDUT individual address is 0201h. This device implements the Ctrl FEC profile.

#### 3.6.1.1 PID_OBJECTLINK : check non existence

Preparation: the BDUT individual address is 0201h. This device implements the Ctrl FEC profile.

Test sequence: send a A_PropValueRead, on device index 0, PID_OBJECT_LINK to the BDUT.

IN   BC AFFE 0201 65 03 D5 00 3F 10 01 :PropertyValueRead(Obj=00, Prop=3F, Count=1, Start=001)
OUT BC 0201 AFFE 65 43 D6 00 3F 00 01 :PropertyValueResponse(Obj=00, Prop=3F, Count=0,
Start=001, Data=)

Acceptance: BDUT shall respond negatively as the device object of a FEC device may not contain this property.

#### 3.6.1.2 PID_CHANNEL_01_PARAM

Preparation: the BDUT individual address is 0201h. This device implements the Ctrl FEC profile.

Test sequence: send a A_PropertyValue_Read, on device index 0, PID_CHANNEL_01_PARAM to the BDUT.

IN    BC AFFE 0201 65 03 D5 00 65 10 01 :PropertyValueRead(Obj=00, Prop=65, Count=1, Start=001)
OUT  BC 0201 AFFE 65 03 D6 00 65 00 01 :PropertyValueResponse(Obj=00, Prop=65, Count=0,
Start=001, Data=)

Acceptance: BDUT shall respond negatively as the device object of a FEC device may not contain this property.

#### 3.6.1.3 PID_CHANNEL_32_PARAM

Preparation: the BDUT individual address is 0201h. This device implements the Ctrl FEC profile.

Test sequence: send a A_PropertyValue_Read, on device index 0, PID_CHANNEL_32_PARAM to the BDUT.

IN    BC AFFE 0201 65 03 D5 00 84 10 01 :PropertyValueRead(Obj=00, Prop=84, Count=1, Start=001)
OUT  BC 0201 AFFE 65 03 D6 00 84 00 01 :PropertyValueResponse(Obj=00, Prop=84, Count=0,
Start=001, Data=)

Acceptance: BDUT shall respond negatively as the device object of a FEC device may not contain this property.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.6.2 Non adjustable channel (use of E-Mode Channel Object only)

Preparation: for all tests of the E-Mode Channel Object, the BDUT individual address is 0201h. This device implements
the Ctrl FEC profile. The BDUT contains at object index 0Ah, the following channel description as interface object of
type 0Eh :


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

|PID Value|PID<br>Name|Property Name|Value<br>(remark)|Col5|
|---|---|---|---|---|
|1|PID_OBJECT_TYPE|Interface Object<br>Type|14|14|
|2|PID_OBJECT_NAME|Interface Object<br>Name|[43h, 68h, 61h, 6Eh, 6Eh, 65h, 6Ch, 5Fh, 30h, 30h, 31h, 30h]<br>(“Channel001”)|[43h, 68h, 61h, 6Eh, 6Eh, 65h, 6Ch, 5Fh, 30h, 30h, 31h, 30h]<br>(“Channel001”)|
|21|PID_DESCRIPTION|Description|_<br>[4Ch, 69h, 67h, 68h, 74h, 20h, 6Bh, 69h, 74h, 63h, 68h, 65h,<br>6Eh, 00h]<br>(“Light kitchen”)|_<br>[4Ch, 69h, 67h, 68h, 74h, 20h, 6Bh, 69h, 74h, 63h, 68h, 65h,<br>6Eh, 00h]<br>(“Light kitchen”)|
|25|PID_VERSION|Version|0841h<br>(version 1.1.1)|0841h<br>(version 1.1.1)|
|**Error!**<br>**Reference**<br>**source not**<br>**found.**|PID_CHAN_NUMBER|Channel Number|1|1|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_CHAN_CODE|Channel Code|0103h<br>(CH_Light_Actuator_Scene)|0103h<br>(CH_Light_Actuator_Scene)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_CHAN_FLAGS|Channel Flags|0000000000110100b<br>(non-adjustable output E-Mode Channel; supporting Localisation<br>Reports and Commands)|0000000000110100b<br>(non-adjustable output E-Mode Channel; supporting Localisation<br>Reports and Commands)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_CHAN_FB_LIST|Functional Block<br>List|[01A1h]<br>({417 = FB Light Switching Actuator Basic})|[01A1h]<br>({417 = FB Light Switching Actuator Basic})|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_CHAN_ADJ_LISTS|Adjustable Channel<br>Object List|Not implemented: this is not an Adjustable E-Mode Channel.|Not implemented: this is not an Adjustable E-Mode Channel.|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_CCODES_LIST|Connection Codes|[0001000000000000h, 0003000000000000h,<br>0004000000000000h, 0008000000000000h,<br>0002001300000000h,]<br>( GO 1:<br>CC_Switch_OnOff +0 + 0 + 0<br> GO 2:<br>CC_Timed + 0 + 0 + 0<br> GO 3:<br>CC_Forced + 0 + 0 + 0<br> GO 4:<br>CC_Scene_Number + 0 + 0 + 0<br> GO 5:<br>CCSwitchOnOffStatus + CCLogical + 0 + 0)|[0001000000000000h, 0003000000000000h,<br>0004000000000000h, 0008000000000000h,<br>0002001300000000h,]<br>( GO 1:<br>CC_Switch_OnOff +0 + 0 + 0<br> GO 2:<br>CC_Timed + 0 + 0 + 0<br> GO 3:<br>CC_Forced + 0 + 0 + 0<br> GO 4:<br>CC_Scene_Number + 0 + 0 + 0<br> GO 5:<br>CCSwitchOnOffStatus + CCLogical + 0 + 0)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_CFLAGS_LIST|Connection Flags|____<br>[0004h, 0004h, 0004h, 0004h, 0002]<br>( GO 1:<br>{I},<br> GO 2:<br>{I},<br> GO 3:<br>{I},<br> GO 4:<br>{I},<br> GO 3:<br>{O})|____<br>[0004h, 0004h, 0004h, 0004h, 0002]<br>( GO 1:<br>{I},<br> GO 2:<br>{I},<br> GO 3:<br>{I},<br> GO 4:<br>{I},<br> GO 3:<br>{O})|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_OBJECTLINK|Object Link|GO 1 is linked to group address 0201h,<br>GO 5 is linked to group address 0202h|GO 1 is linked to group address 0201h,<br>GO 5 is linked to group address 0202h|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_SUBUNIT|Subunit Number|[01h, 01h, 01h, 01h, 01h]<br>( GO 1:<br>1,<br> GO 2:<br>1,<br> GO 3:<br>1,<br> GO 4:<br>1,<br> GO 5:<br>1)|[01h, 01h, 01h, 01h, 01h]<br>( GO 1:<br>1,<br> GO 2:<br>1,<br> GO 3:<br>1,<br> GO 4:<br>1,<br> GO 5:<br>1)|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

**PID** **Value**
**PID Value** **Property Name**
**Name** **(remark)**
65 PID_GO_NAME_LIST Group Object Names [4F6E4F666600h, 54645374727453746F00h, 466F72636564h,
5363656E6500h, 496E666F4F6E4F666600h]
( GO 1: “OnOff”,
GO 2: “TdStrtSto”,
GO 3: “Forced”,
GO 4: “Scene”,
GO 5: “InfoOnOff”)
**Error!** PID_PARAM_TYPES Parameter Types [1402h, 1403h]
**Reference** ( Param. 1: PART_Time_Delay,

Param. 2: PART_Prewarning_Delay)

**source**
**not**
**found.**

**Error!** PID_PARAM_FLAGS Parameter Flags [0000h, 0000h]
**Reference** ( Param. 1: is not set locally, is not void and does not require a restart,

Param. 2: is not set locally, is not void and does not require a restart)

**source**
**not**
**found.**

**Error!** PID_PARAM_NAMES Parameter Names [54696D65642064757200h, 5072652D772064757200h]
**Reference** ( Param. 1: “Timed dur”,

Param. 2: “Pre-w dur”)

**source**
**not**
**found.**

**Error!** PID_PARAM_UNITS Parameter Units [00000000000000000000h, 00000000000000000000h]
**Reference** (There are no Parameter Units.)
**source**
**not**
**found.**

**Error!** PID_PARAM_VALUES Parameter Values [0Ah, 00h]
**Reference** ( Param. 1: 1 minute,

Param. 2: no pre-warning)

**source**
**not**
**found.**

#### 3.6.2.1 PID_OBJECT_TYPE

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_OBJECT_TYPE.

IN   BC FFFA 0201 65 03 D5 0A 01 10 01 :PropertyValueRead(Obj=0A, Prop=01, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 01 10 01 00 0E :PropertyValueResponse(Obj=0A, Prop=01, Count=1,
Start=001, Data=00 0E )

Acceptance: BDUT shall respond with value 0Eh.

#### 3.6.2.2 PID_OBJECT_NAME[]

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_OBJECT_NAME.

IN   BC FFFA 0201 65 03 D5 0A 02 A0 01 :PropertyValueRead(Obj=0A, Prop=02, Count=A, Start=001)
OUT BC 0201 FFFA 6F 03 D6 0A 02 A0 01 43 68 61 6E 6E 65 6C 5F 30 30
:PropertyValueResponse(Obj=0A, Prop=02, Count=A, Start=001, Data=43 68 61 6E 6E 65 6C 5F 30
30 )
IN  00:00:00.2 BC FFFA 0201 65 03 D5 0A 02 20 0B :PropertyValueRead(Obj=0A, Prop=02, Count=2,
Start=00B)

|PID Value|PID<br>Name|Property Name|Value<br>(remark)|Col5|
|---|---|---|---|---|
|65|PID_GO_NAME_LIST|Group Object Names|[4F6E4F666600h, 54645374727453746F00h, 466F72636564h,<br>5363656E6500h, 496E666F4F6E4F666600h]<br>( GO 1:<br>“OnOff”,<br> GO 2:<br>“TdStrtSto”,<br> GO 3:<br>“Forced”,<br> GO 4:<br>“Scene”,<br> GO 5:<br>“InfoOnOff”)|[4F6E4F666600h, 54645374727453746F00h, 466F72636564h,<br>5363656E6500h, 496E666F4F6E4F666600h]<br>( GO 1:<br>“OnOff”,<br> GO 2:<br>“TdStrtSto”,<br> GO 3:<br>“Forced”,<br> GO 4:<br>“Scene”,<br> GO 5:<br>“InfoOnOff”)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_TYPES|Parameter Types|[1402h, 1403h]<br>(  Param. 1: PART_Time_Delay,<br>   Param. 2: PART_Prewarning_Delay)|[1402h, 1403h]<br>(  Param. 1: PART_Time_Delay,<br>   Param. 2: PART_Prewarning_Delay)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_FLAGS|Parameter Flags|[0000h, 0000h]<br>(  Param. 1: is not set locally, is not void and does not require a restart,<br>    Param. 2: is not set locally, is not void and does not require a restart)|[0000h, 0000h]<br>(  Param. 1: is not set locally, is not void and does not require a restart,<br>    Param. 2: is not set locally, is not void and does not require a restart)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_NAMES|Parameter Names|[54696D65642064757200h, 5072652D772064757200h]<br>( Param. 1: “Timed dur”,<br> Param. 2: “Pre-w dur”)|[54696D65642064757200h, 5072652D772064757200h]<br>( Param. 1: “Timed dur”,<br> Param. 2: “Pre-w dur”)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_UNITS|Parameter Units|[00000000000000000000h, 00000000000000000000h]<br>(There are no Parameter Units.)|[00000000000000000000h, 00000000000000000000h]<br>(There are no Parameter Units.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_VALUES|Parameter Values|[0Ah, 00h]<br>( Param. 1: 1 minute,<br>  Param. 2: no pre-warning)|[0Ah, 00h]<br>( Param. 1: 1 minute,<br>  Param. 2: no pre-warning)|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 0201 FFFA 67 03 D6 0A 02 20 0B 31 00 :PropertyValueResponse(Obj=0A, Prop=02, Count=2,
Start=00B, Data=31 00 )

Acceptance: BDUT shall respond with the string “Channel_001”.

#### 3.6.2.3 PID_DESCRIPTION[]

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_OBJECT_NAME.

IN   BC FFFA 0201 65 03 D5 0A 15 A0 01 :PropertyValueRead(Obj=0A, Prop=15, Count=A, Start=001)
OUT BC 0201 FFFA 6F 03 D6 0A 02 A0 01 4C 69 67 68 74 20 6B 69 74 63
:PropertyValueResponse(Obj=0A, Prop=15, Count=A, Start=001, Data=4C 69 67 68 74 20 6B 69 74
63 )
IN  BC FFFA 0201 65 03 D5 0A 15 40 0B :PropertyValueRead(Obj=0A, Prop=15, Count=4, Start=00B)
OUT BC 0201 FFFA 67 03 D6 0A 15 40 0B 68 65 6E 00 :PropertyValueResponse(Obj=0A, Prop=15,
Count=4, Start=00B, Data=68 65 6E 00)

Acceptance: BDUT shall respond with the string “Light kitchen”.

Test sequence: send a A_PropertyValue_Write to the BDUT on object index 0Ah, property PID_OBJECT_NAME.
Modify the description with “aaa” and read it back.

IN   BC FFFA 0201 6F 03 D7 0A 15 A0 01 61 61 61 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=0A,
Prop=15, Count=A, Start=001, Data=61 61 61 00 00 00 00 00 00 00 )
OUT BC 0201 FFFA 6F 03 D6 0A 15 A0 01 61 61 61 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=15, Count=A, Start=001, Data=61 61 61 00 00 00 00 00 00
00 )

IN   BC FFFA 0201 65 03 D5 0A 15 A0 01 :PropertyValueRead(Obj=0A, Prop=15, Count=A, Start=001)
OUT BC 0201 FFFA 6F 03 D6 0A 15 A0 01 61 61 61 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=15, Count=A, Start=001, Data=61 61 61 00 00 00 00 00 00
00 )

Acceptance: BDUT shall respond with the modified string.

#### 3.6.2.4 PID_VERSION

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_VERSION.

IN    BC FFFA 0201 65 03 D5 0A 19 10 01 :PropertyValueRead(Obj=0A, Prop=19, Count=1, Start=001)
OUT  BC 0201 FFFA 67 03 D6 0A 19 10 01 08 41 :PropertyValueResponse(Obj=0A, Prop=19, Count=1,
Start=001, Data=08 41 )

Acceptance: BDUT shall respond with value 0841h (1.1.1).

#### 3.6.2.5 PID_CHAN_NUMBER

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_CHAN_NUMBER.

IN   BC FFFA 0201 65 03 D5 0A 33 10 01 :PropertyValueRead(Obj=0A, Prop=33, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 33 10 01 00 01 : PropertyValueResponse (Obj=0A, Prop=33, Count=1,
Start=001, Data=00 01)

Acceptance: BDUT shall respond with value 01h.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 3.6.2.6 PID_CHAN_CODE

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_CHAN_CODE.

IN   BC FFFA 0201 65 03 D5 0A 34 10 01 :PropertyValueRead(Obj=0A, Prop=34, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 34 10 01 01 03 :PropertyValueResponse(Obj=0A, Prop=34, Count=1,
Start=001, Data=01 03 )

Acceptance: BDUT shall respond with value 0103h.

#### 3.6.2.7 PID_CHAN_FLAGS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_CHAN_FLAGS.

IN   BC FFFA 0201 65 03 D5 0A 35 10 01 :PropertyValueRead(Obj=0A, Prop=35, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 35 10 01 00 34 :PropertyValueResponse(Obj=0A, Prop=35, Count=1,
Start=001, Data=00 34 )

Acceptance: BDUT shall respond with value 0034h.

#### 3.6.2.8 PID_CHAN_FB_LIST[]

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_CHAN_FB_LIST.

IN   FFFA 0201 65 03 D5 0A 36 10 00 :PropertyValueRead(Obj=0A, Prop=36, Count=1, Start=000)
OUT BC 0201 FFFA 67 03 D6 0A 36 10 00 00 01 :PropertyValueResponse(Obj=0A, Prop=36, Count=1,
Start=000, Data=00 01 )
IN   BC FFFA 0201 65 03 D5 0A 36 10 01 :PropertyValueRead(Obj=0A, Prop=36, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 36 10 01 01 A1 :PropertyValueResponse(Obj=0A, Prop=36, Count=1,
Start=001, Data=01 A1 )

Acceptance: BDUT shall respond with value 01A1h.

#### 3.6.2.9 PID_CHAN_ADJ_LISTS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_CHAN_ADJ_LIST.

IN    FFFA 0201 65 03 D5 0A 37 10 00 :PropertyValueRead(Obj=0A, Prop=37, Count=1, Start=000)
OUT BC 0201 FFFA 67 03 D6 0A 37 10 00 00 00 :PropertyValueResponse(Obj=0A, Prop=37, Count=1,
Start=000, Data=00 00 )
IN   BC FFFA 0201 65 03 D5 0A 37 10 01 :PropertyValueRead(Obj=0A, Prop=37, Count=1, Start=001)
OUT BC 0201 FFFA 65 03 D6 0A 37 00 01 :PropertyValueResponse(Obj=0A, Prop=37, Count=0,
Start=001, Data=)

Acceptance: BDUT shall respond negatively.

#### 3.6.2.10 PID_GO_CCODES_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_GO_CCODES_LIST.

IN   BC FFFA 0201 65 03 D5 0A 3D 10 00 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=000)
OUT BC 0201 FFFA 67 03 D6 0A 3D 10 00 00 05 :PropertyValueResponse(Obj=0A, Prop=3D, Count=1,
Start=000, Data=00 05 )


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN   BC FFFA 0201 65 03 D5 0A 3D 10 01 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=001)
OUT BC 0201 FFFA 6D 03 D6 0A 3D 10 01 00 01 00 00 00 00 00 00 :PropertyValueResponse(Obj=0A,
Prop=3D, Count=1, Start=001, Data=00 01 00 00 00 00 00 00 )
IN  BC FFFA 0201 65 03 D5 0A 3D 10 02 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=002)
OUT BC 0201 FFFA 6D 03 D6 0A 3D 10 02 00 03 00 00 00 00 00 00 :PropertyValueResponse(Obj=0A,
Prop=3D, Count=1, Start=002, Data=00 03 00 00 00 00 00 00 )
IN   BC FFFA 0201 65 03 D5 0A 3D 10 03 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=003)
OUT BC 0201 FFFA 6D 03 D6 0A 3D 10 03 00 04 00 00 00 00 00 00 :PropertyValueResponse(Obj=0A,
Prop=3D, Count=1, Start=003, Data=00 04 00 00 00 00 00 00 )
IN   BC FFFA 0201 65 03 D5 0A 3D 10 04 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=004)
OUT BC 0201 FFFA 6D 03 D6 0A 3D 10 04 00 08 00 00 00 00 00 00 :PropertyValueResponse(Obj=0A,
Prop=3D, Count=1, Start=004, Data=00 08 00 00 00 00 00 00 )
IN   BC FFFA 0201 65 03 D5 0A 3D 10 05 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=005)
OUT BC 0201 FFFA 6D 03 D6 0A 3D 10 05 00 02 00 13 00 00 00 00 :PropertyValueResponse(Obj=0A,
Prop=3D, Count=1, Start=005, Data=00 02 00 13 00 00 00 00 )
IN   BC FFFA 0201 65 03 D5 0A 3D 10 06 :PropertyValueRead(Obj=0A, Prop=3D, Count=1, Start=006)
OUT BC 0201 FFFA 65 03 D6 0A 3D 00 06 :PropertyValueResponse(Obj=0A, Prop=3D, Count=0,
Start=006, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.11 PID_GO_CFLAGS_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_GO_CFLAGS_LIST.

IN   BC FFFA 0201 65 03 D5 0A 3E 10 00 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=000)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 00 00 05 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=000, Data=00 05 )
IN   BC FFFA 0201 65 03 D5 0A 3E 10 01 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 01 00 04 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=001, Data=00 04 )
IN   BC FFFA 0201 65 03 D5 0A 3E 10 02 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=002)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 02 00 04 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=002, Data=00 04 )
IN   BC FFFA 0201 65 03 D5 0A 3E 10 03 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=003)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 03 00 04 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=003, Data=00 04 )
IN  BC FFFA 0201 65 03 D5 0A 3E 10 04 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=004)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 04 00 04 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=004, Data=00 04 )
IN   BC FFFA 0201 65 03 D5 0A 3E 10 05 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=005)
OUT BC 0201 FFFA 67 03 D6 0A 3E 10 05 00 02 :PropertyValueResponse(Obj=0A, Prop=3E, Count=1,
Start=005, Data=00 02 )
IN   BC FFFA 0201 65 03 D5 0A 3E 10 06 :PropertyValueRead(Obj=0A, Prop=3E, Count=1, Start=006)
OUT BC 0201 FFFA 65 03 D6 0A 3E 00 06 :PropertyValueResponse(Obj=0A, Prop=3E, Count=0,
Start=006, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.12 PID_OBJECTLINK

 _When using the function property command PID_OBJECTLINK on a BDUT on TP media, the serial number field_
_is set to 000000000000h._


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
Test sequence: send a A_FunctionPropertyCommand to the BDUT on object index 0Ah, property
PID_OBJECT_LINK.

IN    BC AFFE 0201 6F 02 C7 0A 3F 00 00 00 00 00 00 00 00 02 01 00 01 :FctPropCmd(ObjIdx=0A,
PropId=3F, Data=00 00 00 00 00 00 00 00 02 01 00 01 )
OUT  BC 0201 AFFE 64 02 C9 0A 3F 00 :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=00, Data=)
IN BC AFFE 0201 67 02 C8 0A 3F 00 00 01 00 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 01
00 )
OUT BC 0201 AFFE 6F 02 C9 0A 3F 00 00 00 00 00 00 00 00 02 01 00 01 :FctPropState_Rsp(ObjIdx=0A,
PropId=3F, RetCode=00, Data=00 00 00 00 00 00 00 02 01 00 01 )
IN  BC AFFE 0201 67 02 C8 0A 3F 00 00 01 01 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 01 01
)
OUT  BC 0201 AFFE 64 02 C9 0A 3F FF :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=FF, Data=)

IN  BC AFFE 0201 6F 02 C7 0A 3F 01 00 00 00 00 00 00 00 02 02 00 05 :FctPropCmd(ObjIdx=0A,
PropId=3F, Data=01 00 00 00 00 00 00 00 02 02 00 05 )
OUT BC 0201 AFFE 64 02 C9 0A 3F 00 :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=00, Data=)
IN  BC AFFE 0201 67 02 C8 0A 3F 00 00 05 00 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 05 00 )
OUT BC 0201 AFFE 6F 02 C9 0A 3F 00 01 00 00 00 00 00 00 02 02 00 05 :FctPropState_Rsp(ObjIdx=0A,
PropId=3F, RetCode=00, Data=01 00 00 00 00 00 00 02 02 00 05 )
IN  BC AFFE 0201 67 02 C8 0A 3F 00 00 05 01 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 05 01 )
OUT BC 0201 AFFE 64 02 C9 0A 3F FF :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=FF, Data=)

Check correct functional behaviour of the product

IN   BC AFFE 0201 E1 00 81 :DPT 1.xxx Boolean (switch on)
OUT  BC 0201 0202 E1 00 81 :DPT 1.xx x Boolean (switch on)

IN    BC AFFE 0201 6F 02 C7 0A 3F 02 00 00 00 00 00 00 00 02 01 00 01 :FctPropCmd(ObjIdx=0A,
PropId=3F, Data=02 00 00 00 09 00 00 00 02 01 00 01)
OUT BC 0201 AFFE 64 02 C9 0A 3F 00 :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=00, Data=)
IN  BC AFFE 0201 67 02 C8 0A 3F 00 00 01 00 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 01 00 )
OUT BC 0201 AFFE 64 02 C9 0A 3F FF :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=FF, Data=)

IN  BC AFFE 0201 6F 02 C7 0A 3F 02 00 00 00 00 00 00 00 02 02 00 05 :FctPropCmd(ObjIdx=0A,
PropId=3F, Data=02 00 00 00 00 00 00 00 02 02 00 05 )
OUT BC 0201 AFFE 64 02 C9 0A 3F 00 :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=00, Data=)
IN  BC AFFE 0201 67 02 C8 0A 3F 00 00 05 00 :FctPropState_Read(ObjIdx=0A, PropId=3F, 00 00 05 00 )
OUT BC 0201 AFFE 64 02 C9 0A 3F FF :FctPropState_Rsp(ObjIdx=0A, PropId=3F, RetCode=FF, Data=)

Check correct functional behaviour of the product again

IN   BC AFFE 0201 E1 00 81 :DPT 1.xxx Boolean (switch on) – no reaction
No out telegram when stimulating product

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.13 PID_GO_SUBUNIT

When having a channel with several Datapoints with the same Connection Code, there is a need to designate one given
Datapoint when establishing the links. A Sub-Unit defines one set of such Datapoints. The default sub-unit is 1.

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_GO_SUBUNIT.

IN   BC AFFE 0201 65 03 D5 0A 40 10 00 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 40 10 00 00 05 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=000, Data=00 05 )


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN   BC AFFE 0201 65 03 D5 0A 40 10 01 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=001)
OUT BC 0201 AFFE 66 03 D6 0A 40 10 01 01 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=001, Data=01 )
Default value indicating no subunit

IN   BC AFFE 0201 65 03 D5 0A 40 10 02 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=002)
OUT BC 0201 AFFE 66 03 D6 0A 40 10 02 01 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=002, Data=01 )
IN  BC AFFE 0201 65 03 D5 0A 40 10 03 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=003)
OUT BC 0201 AFFE 66 03 D6 0A 40 10 03 01 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=003, Data=01 )
IN  BC AFFE 0201 65 03 D5 0A 40 10 04 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=004)
OUT BC 0201 AFFE 66 03 D6 0A 40 10 04 01 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=004, Data=01 )
IN  BC AFFE 0201 65 03 D5 0A 40 10 05 :PropertyValueRead(Obj=0A, Prop=40, Count=1, Start=005)
OUT BC 0201 AFFE 66 03 D6 0A 40 10 05 01 :PropertyValueResponse(Obj=0A, Prop=40, Count=1,
Start=005, Data=01 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.14 PID_GO_NAME_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_GO_NAME_LIST.

IN    BC AFFE 0201 65 03 D5 0A 41 10 00 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 41 10 00 00 05 :PropertyValueResponse(Obj=0A, Prop=41, Count=1,
Start=000, Data=00 05 )
IN  BC AFFE 0201 65 03 D5 0A 41 10 01 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0A 41 10 01 4F 6E 4F 66 66 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=41, Count=1, Start=001, Data=4F 6E 4F 66 66 00 00 00 00
00 )
IN  BC AFFE 0201 65 03 D5 0A 41 10 02 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=002)
OUT BC 0201 AFFE 6F 03 D6 0A 41 10 02 54 64 53 74 72 74 53 74 6F 00
:PropertyValueResponse(Obj=0A, Prop=41, Count=1, Start=002, Data=54 64 53 74 72 74 53 74 6F
00 )
IN  BC AFFE 0201 65 03 D5 0A 41 10 03 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=003)
OUT BC 0201 AFFE 6F 03 D6 0A 41 10 03 46 6F 72 63 65 64 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=41, Count=1, Start=003, Data=46 6F 72 63 65 64 00 00 00
00 )
IN  BC AFFE 0201 65 03 D5 0A 41 10 04 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=004)
OUT BC 0201 AFFE 6F 03 D6 0A 41 10 04 53 63 65 6E 65 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=41, Count=1, Start=004, Data=53 63 65 6E 65 00 00 00 00
00 )
IN  BC AFFE 0201 65 03 D5 0A 41 10 05 :PropertyValueRead(Obj=0A, Prop=41, Count=1, Start=005)
OUT BC 0201 AFFE 6F 03 D6 0A 41 10 05 49 6E 66 6F 4F 6E 4F 66 66 00
:PropertyValueResponse(Obj=0A, Prop=41, Count=1, Start=005, Data=49 6E 66 6F 4F 6E 4F 66 66
00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.15 PID_PARAM_TYPES

Every parameter type supported by the stack shall be tested. The stack documentation shall give the list of supported
parameter types. In the following test sequence, only one parameter type is tested.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_PARAM_TYPES.

IN   BC AFFE 0201 65 03 D5 0A 46 10 00 :PropertyValueRead(Obj=0A, Prop=46, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 46 10 00 00 02 :PropertyValueResponse(Obj=0A, Prop=46, Count=1,
Start=000, Data=00 02 )
IN  BC AFFE 0201 65 03 D5 0A 46 10 01 :PropertyValueRead(Obj=0A, Prop=46, Count=1, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0A 46 10 01 01 14 02 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=46, Count=1, Start=001, Data=01 14 02 00 00 00 00 00 00
00 )
IN  BC AFFE 0201 65 03 D5 0A 46 10 02 :PropertyValueRead(Obj=0A, Prop=46, Count=1, Start=002)
OUT BC 0201 AFFE 6F 03 D6 0A 46 10 02 01 14 03 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=46, Count=1, Start=002, Data=01 14 03 00 00 00 00 00 00
00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.16 PID_PARAM_FLAGS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_PARAM_FLAGS.

IN   BC AFFE 0201 65 03 D5 0A 47 10 00 :PropertyValueRead(Obj=0A, Prop=47, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 47 10 00 00 02 :PropertyValueResponse(Obj=0A, Prop=47, Count=1,
Start=000, Data=00 02 )
IN  BC AFFE 0201 65 03 D5 0A 47 10 01 :PropertyValueRead(Obj=0A, Prop=47, Count=1, Start=001)
OUT BC 0201 AFFE 67 03 D6 0A 47 10 01 00 00 :PropertyValueResponse(Obj=0A, Prop=47, Count=1,
Start=001, Data=00 00 )
IN   BC AFFE 0201 65 03 D5 0A 47 10 02 :PropertyValueRead(Obj=0A, Prop=47, Count=1, Start=002)
OUT BC 0201 AFFE 67 03 D6 0A 47 10 02 00 00 :PropertyValueResponse(Obj=0A, Prop=47, Count=1,
Start=002, Data=00 00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.17 PID_PARAM_NAMES

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_PARAM_NAMES.

IN   BC AFFE 0201 65 03 D5 0A 48 10 00 :PropertyValueRead(Obj=0A, Prop=48, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 48 10 00 00 02 :PropertyValueResponse(Obj=0A, Prop=48, Count=1,
Start=000, Data=00 02 )
IN  BC AFFE 0201 65 03 D5 0A 48 10 01 :PropertyValueRead(Obj=0A, Prop=48, Count=1, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0A 48 10 01 54 69 6D 65 64 20 64 75 72 00
:PropertyValueResponse(Obj=0A, Prop=48, Count=1, Start=001, Data=54 69 6D 65 64 20 64 75 72
00 )
IN  BC AFFE 0201 65 03 D5 0A 48 10 02 :PropertyValueRead(Obj=0A, Prop=48, Count=1, Start=002)
OUT BC 0201 AFFE 6F 03 D6 0A 48 10 02 50 72 65 2D 77 20 64 75 72 00
:PropertyValueResponse(Obj=0A, Prop=48, Count=1, Start=002, Data=50 72 65 2D 77 20 64 75 72
00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.18 PID_PARAM_UNITS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_PARAM_UNITS.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN   BC AFFE 0201 65 03 D5 0A 49 10 00 :PropertyValueRead(Obj=0A, Prop=49, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 49 10 00 00 02 :PropertyValueResponse(Obj=0A, Prop=49, Count=1,
Start=000, Data=00 02 )
IN   BC AFFE 0201 65 03 D5 0A 49 10 01 :PropertyValueRead(Obj=0A, Prop=49, Count=1, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0A 49 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=49, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00
00 )
IN   BC AFFE 0201 65 03 D5 0A 49 10 02 :PropertyValueRead(Obj=0A, Prop=49, Count=1, Start=002)
OUT BC 0201 AFFE 6F 03 D6 0A 49 10 02 00 00 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0A, Prop=49, Count=1, Start=002, Data=00 00 00 00 00 00 00 00 00
00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.2.19 PID_PARAM_VALUES

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Ah, property PID_PARAM_VALUES.

IN   BC AFFE 0201 65 03 D5 0A 4F 10 00 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0A 4F 10 00 00 02 :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=000, Data=00 02 )
IN   BC AFFE 0201 65 03 D5 0A 4F 10 01 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=001)
OUT BC 0201 AFFE 66 03 D6 0A 4F 10 01 0A :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=001, Data=0A )
IN   BC AFFE 0201 65 03 D5 0A 4F 10 02 :PropertyValueRead(Obj=0A, Prop=4F, Count=1, Start=002)
OUT  BC 0201 AFFE 66 03 D6 0A 4F 10 02 00 :PropertyValueResponse(Obj=0A, Prop=4F, Count=1,
Start=002, Data=00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.6.3 Adjustable channel (use of E-Mode Channel Object and Adjusted E-Mode Channel object)

Preparation: for all tests of the E-Mode Channel Object, the BDUT individual address is 0201h. This device implements
the Ctrl FEC profile. The BDUT contains at object index 05h, the following channel description as interface object of
type 0Eh :


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

|PID Value|PID<br>Name|Property Name|Value<br>(remark)|Col5|
|---|---|---|---|---|
|1|PID_OBJECT_TYPE|Interface Object<br>Type|14<br>(E-Mode Channel)|14<br>(E-Mode Channel)|
|2|PID_OBJECT_NAME|Interface Object<br>Name|[49h, 6Eh, 70h, 75h, 74h, 5Fh, 30h, 30h, 31h, 30h]<br>(“Input001”)|[49h, 6Eh, 70h, 75h, 74h, 5Fh, 30h, 30h, 31h, 30h]<br>(“Input001”)|
|21|PID_DESCRIPTION|Description|_<br>[53h, 77h, 69h, 74h, 63h, 68h, 20h, 6Bh, 69h, 74h, 63h, 68h,<br>65h, 6Eh, 00h]<br>(“Switch kitchen”)|_<br>[53h, 77h, 69h, 74h, 63h, 68h, 20h, 6Bh, 69h, 74h, 63h, 68h,<br>65h, 6Eh, 00h]<br>(“Switch kitchen”)|
|25|PID_VERSION|Version|0841h<br>(version 1.1.1)|0841h<br>(version 1.1.1)|
|51|PIDCHANNUMBER|Channel Number|1|1|
|52|__<br>PID_CHAN_CODE|Channel Code|0316h<br>(CHGenericPB½Info5)|0316h<br>(CHGenericPB½Info5)|
|53|PID_CHAN_FLAGS|Channel Flags|_____<br>0000000000110011b<br>(adjustable input E-Mode Channel; supporting Localisation<br>Reports and Commands)|_____<br>0000000000110011b<br>(adjustable input E-Mode Channel; supporting Localisation<br>Reports and Commands)|
|54|PID_CHAN_FB_LIST|Functional Block<br>List|[01A5h, 01A4h, 0321h, 0193h, 0196h, 03FCh, 0322h, 0323h,<br>0180h]<br>({421 = FB Switching Sensor Basic, 420 = FB Dimming Sensor<br>Basic, 801 = Sunblind Sensor Basic, 403 = FB Scene Sensor,<br>406 = FB Timed Sensor, 1020 = FB Priority Sensor, 802 = FB<br>Wind Sensor, 803 = FB Rain Sensor, 384 = User HVAC Room<br>Settings})|[01A5h, 01A4h, 0321h, 0193h, 0196h, 03FCh, 0322h, 0323h,<br>0180h]<br>({421 = FB Switching Sensor Basic, 420 = FB Dimming Sensor<br>Basic, 801 = Sunblind Sensor Basic, 403 = FB Scene Sensor,<br>406 = FB Timed Sensor, 1020 = FB Priority Sensor, 802 = FB<br>Wind Sensor, 803 = FB Rain Sensor, 384 = User HVAC Room<br>Settings})|
|55|PID_CHAN_ADJ_LISTS|Adjustable Channel<br>Object List|[06h, 07h, 08h, 09h, 0Ah, 0Bh, 0Ch, 0Dh, 0Eh, 0Fh, 10h, 11h,<br>12h, 13h, 14h]|[06h, 07h, 08h, 09h, 0Ah, 0Bh, 0Ch, 0Dh, 0Eh, 0Fh, 10h, 11h,<br>12h, 13h, 14h]|
|61|PID_GO_CCODES_LIST|Connection Codes|(This E-Mode Channel does not have Parameters.)|(This E-Mode Channel does not have Parameters.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|<br>PID_GO_CFLAGS_LIST|<br> Connection Flags|(This E-Mode Channel does not have Parameters.)|(This E-Mode Channel does not have Parameters.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_OBJECTLINK|Object Link|FEC device shall use this property for object linking.|FEC device shall use this property for object linking.|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_SUBUNIT|Subunit Number|(This E-Mode Channel does not have Parameters.)|(This E-Mode Channel does not have Parameters.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_NAME_LIST|Group Object Names|(This E-Mode Channel does not have Parameters.)|(This E-Mode Channel does not have Parameters.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_TYPES|Parameter Types|[0503h]<br>(  Param. 1: PART_Adjustable_Selection)|[0503h]<br>(  Param. 1: PART_Adjustable_Selection)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_FLAGS|Parameter Flags|[0000h, 0000h]<br>(  Param. 1: is not set locally, is not void and does not require a restart)|[0000h, 0000h]<br>(  Param. 1: is not set locally, is not void and does not require a restart)|
|72|PID_PARAM_NAMES|Parameter Names|[41h, 4Ah, 53h, 00h]<br>( Param. 1: “AJS”)|[41h, 4Ah, 53h, 00h]<br>( Param. 1: “AJS”)|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

**Value**
**Property Name**
**(remark)**

Parameter Units [00000000000000000000h]
(There are no Parameter Units.)

Parameter Values [08h]
( Param. 1: 8 = Scene Number)

#### Table 1 – E-Mode channel for CH_Generic_½_Info_5 

|PID Value|PID<br>Name|Property Name|Value<br>(remark)|Col5|
|---|---|---|---|---|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_UNITS|Parameter Units|[00000000000000000000h]<br>(There are no Parameter Units.)|[00000000000000000000h]<br>(There are no Parameter Units.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_VALUES|Parameter Values|[08h]<br>( Param. 1: 8 = Scene Number)|[08h]<br>( Param. 1: 8 = Scene Number)|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
The BDUT contains at object index 06h, the following channel description as interface object of type 0Fh :

The BDUT contains at object index 0Eh, the following channel description as interface object of type 0Fh :


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

**PID** **Value**
**Property Name**
**Name** **(remark)**
Interface Object 15
Type (Adjusted E-Mode Channel)
Interface Object [50h, 42h, 20h, 53h, 63h, 65h, 6Eh, 65h, 20h, 4Eh, 75h, 6Dh,
Name 62h, 65h, 72h]
(“PB Scene Number”)

PID_GO_CCODES_LIST Connection Codes [0008000000000000h]
( GO 5: CC_Scene_Number+0+0+0)

PID_GO_CFLAGS_LIST Connection Flags [0002h]
( GO 5: O)

Object Link FEC device shall prevent from using this property for object

linking.

Subunit Number [01h]
( GO 1: 1)

PID_GO_NAME_LIST Group Object Names [53h, 63h, 65h, 6Eh, 65h, 4Eh, 72h, 4Fh, 75h, 74h]
( GO5: “SceneNrOut”)

PID_PARAM_TYPES Parameter Types [1101h]
( Param. 1: PART_Scene_Number)

PID_PARAM_FLAGS Parameter Flags [0000h]
( Param. 1: Parameter 1 is not set locally, is not void and does not require a
restart.)

PID_PARAM_NAMES Parameter Names 5363656E65204E720000h
( Param. 1: “Scene Nr”)

PID_PARAM_UNITS Parameter Units 00000000000000000000h
( There are no Parameter Units.)

PID_PARAM_VALUES Parameter Values [04]
( Param. 1: The user has changed the default scene number value from 0 to 4; the
PDT of this PID_PARAM_VALUES is PDT_GENERIC_01.)

#### Table 2 – Adjusted E-Mode Channel for AJS = 8 : Scene Number

|PID Value|PID<br>Name|Property Name|Value<br>(remark)|Col5|
|---|---|---|---|---|
|1|PID_OBJECT_TYPE|Interface Object<br>Type|15<br>(Adjusted E-Mode Channel)|15<br>(Adjusted E-Mode Channel)|
|2|PID_OBJECT_NAME|Interface Object<br>Name|[50h, 42h, 20h, 53h, 63h, 65h, 6Eh, 65h, 20h, 4Eh, 75h, 6Dh,<br>62h, 65h, 72h]<br> (“PB Scene Number”)|[50h, 42h, 20h, 53h, 63h, 65h, 6Eh, 65h, 20h, 4Eh, 75h, 6Dh,<br>62h, 65h, 72h]<br> (“PB Scene Number”)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_CCODES_LIST|Connection Codes|[0008000000000000h]<br>( GO 5:<br>CC_Scene_Number+0+0+0)|[0008000000000000h]<br>( GO 5:<br>CC_Scene_Number+0+0+0)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_CFLAGS_LIST|Connection Flags|[0002h]<br>( GO 5:<br>O)|[0002h]<br>( GO 5:<br>O)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_OBJECTLINK|Object Link|FEC device shall prevent from using this property for object<br>linking.|FEC device shall prevent from using this property for object<br>linking.|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_SUBUNIT|Subunit Number|[01h]<br>( GO 1:<br>1)|[01h]<br>( GO 1:<br>1)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_GO_NAME_LIST|Group Object Names|[53h, 63h, 65h, 6Eh, 65h, 4Eh, 72h, 4Fh, 75h, 74h]<br>( GO5:<br>“SceneNrOut”)|[53h, 63h, 65h, 6Eh, 65h, 4Eh, 72h, 4Fh, 75h, 74h]<br>( GO5:<br>“SceneNrOut”)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_TYPES|Parameter Types|[1101h]<br>( Param. 1: PART_Scene_Number)|[1101h]<br>( Param. 1: PART_Scene_Number)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_FLAGS|Parameter Flags|[0000h]<br>( Param. 1: Parameter 1 is not set locally, is not void and does not require a<br>restart.)|[0000h]<br>( Param. 1: Parameter 1 is not set locally, is not void and does not require a<br>restart.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_NAMES|Parameter Names|5363656E65204E720000h<br>( Param. 1: “Scene Nr”)|5363656E65204E720000h<br>( Param. 1: “Scene Nr”)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_UNITS|Parameter Units|00000000000000000000h<br>( There are no Parameter Units.)|00000000000000000000h<br>( There are no Parameter Units.)|
|**Error!**<br>**Reference**<br>**source**<br>**not**<br>**found.**|PID_PARAM_VALUES|Parameter Values|[04]<br>( Param. 1: The user has changed the default scene number value from 0 to 4; the<br>PDT of this PID_PARAM_VALUES is PDT_GENERIC_01.)|[04]<br>( Param. 1: The user has changed the default scene number value from 0 to 4; the<br>PDT of this PID_PARAM_VALUES is PDT_GENERIC_01.)|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.6.3.1 E-Mode Channel Object

 3.6.3.1.1 PID_CHAN_FLAGS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 05h, property PID_CHAN_FLAGS.

IN   BC FFFA 0201 65 03 D5 05 35 10 01 :PropertyValueRead(Obj=05, Prop=35, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 05 35 10 01 00 33 :PropertyValueResponse(Obj=05, Prop=35, Count=1,
Start=001, Data=00 33 )

Acceptance: BDUT shall respond with value 0033h.

#### 3.6.3.1.2 PID_CHAN_ADJ_LISTS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 05h, property PID_CHAN_ADJ_LISTS.

IN   BC AFFE 0201 65 03 D5 05 37 10 00 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 05 37 10 00 00 0F :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=000, Data=00 0F )
IN   BC AFFE 0201 65 03 D5 05 37 10 01 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=001)
OUT BC 0201 AFFE 66 03 D6 05 37 10 01 06 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=001, Data=06 )
IN   BC AFFE 0201 65 03 D5 05 37 10 02 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=002)
OUT BC 0201 AFFE 66 03 D6 05 37 10 02 07 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=002, Data=07 )
IN  BC AFFE 0201 65 03 D5 05 37 10 03 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=003)
OUT BC 0201 AFFE 66 03 D6 05 37 10 03 08 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=003, Data=08 )
IN  BC AFFE 0201 65 03 D5 05 37 10 04 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=004)
OUT BC 0201 AFFE 66 03 D6 05 37 10 04 09 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=004, Data=09 )
IN  BC AFFE 0201 65 03 D5 05 37 10 05 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=005)
OUT BC 0201 AFFE 66 03 D6 05 37 10 05 0A :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=005, Data=0A )
IN   BC AFFE 0201 65 03 D5 05 37 10 06 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=006)
OUT BC 0201 AFFE 66 03 D6 05 37 10 06 0B :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=006, Data=0B )
IN   BC AFFE 0201 65 03 D5 05 37 10 07 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=007)
OUT BC 0201 AFFE 66 03 D6 05 37 10 07 0C :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=007, Data=0C )
IN  BC AFFE 0201 65 03 D5 05 37 10 08 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=008)
OUT BC 0201 AFFE 66 03 D6 05 37 10 08 0D :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=008, Data=0D )
IN  BC AFFE 0201 65 03 D5 05 37 10 09 :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=009)
OUT BC 0201 AFFE 66 03 D6 05 37 10 09 0E :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=009, Data=0E )
IN  BC AFFE 0201 65 03 D5 05 37 10 0A :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00A)
OUT BC 0201 AFFE 66 03 D6 05 37 10 0A 0F :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00A, Data=0F )
IN   BC AFFE 0201 65 03 D5 05 37 10 0B :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00B)
OUT BC 0201 AFFE 66 03 D6 05 37 10 0B 10 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00B, Data=10 )
IN   BC AFFE 0201 65 03 D5 05 37 10 0C :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00C)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 0201 AFFE 66 03 D6 05 37 10 0C 11 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00C, Data=11 )
IN  BC AFFE 0201 65 03 D5 05 37 10 0D :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00D)
OUT BC 0201 AFFE 66 03 D6 05 37 10 0D 12 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00D, Data=12 )
IN  BC AFFE 0201 65 03 D5 05 37 10 0E :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00E)
OUT BC 0201 AFFE 66 03 D6 05 37 10 0E 13 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00E, Data=13 )
IN  BC AFFE 0201 65 03 D5 05 37 10 0F :PropertyValueRead(Obj=05, Prop=37, Count=1, Start=00F)
OUT BC 0201 AFFE 66 03 D6 05 37 10 0F 14 :PropertyValueResponse(Obj=05, Prop=37, Count=1,
Start=00F, Data=14 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2 Adjusted E-Mode Channel Object

 3.6.3.2.1 PID_OBJECT_TYPE

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_OBJECT_TYPE.

IN   BC AFFE 0201 65 03 D5 0E 01 10 01 :PropertyValueRead(Obj=0E, Prop=01, Count=1, Start=001)
OUT BC 0201 AFFE 67 03 D6 0E 01 10 01 00 0F :PropertyValueResponse(Obj=0E, Prop=01, Count=1,
Start=001, Data=00 0F )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.2 PID_OBJECT_NAME[]

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_OBJECT_NAME.

IN   BC AFFE 0201 65 03 D5 0E 02 A0 01 :PropertyValueRead(Obj=0E, Prop=02, Count=A, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0E 02 A0 01 50 42 20 53 63 65 6E 65 20 4E
:PropertyValueResponse(Obj=0E, Prop=02, Count=A, Start=001, Data=50 42 20 53 63 65 6E 65 20
4E )
IN   BC AFFE 0201 65 03 D5 0E 02 A0 0B :PropertyValueRead(Obj=0E, Prop=02, Count=A, Start=00B)
OUT BC 0201 AFFE 6F 03 D6 0E 02 A0 0B 75 6D 62 65 72 00 00 00 00 00
:PropertyValueResponse(Obj=0E, Prop=02, Count=A, Start=00B, Data=75 6D 62 65 72 00 00 00 00
00 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.3 PID_GO_CCODES_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_GO_CCODES_LIST.

IN   BC AFFE 0201 65 03 D5 0E 3D 10 00 :PropertyValueRead(Obj=0E, Prop=3D, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0E 3D 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=3D, Count=1,
Start=000, Data=00 01 )
IN   BC AFFE 0201 65 03 D5 0E 3D 10 01 :PropertyValueRead(Obj=0E, Prop=3D, Count=1, Start=001)
OUT BC 0201 AFFE 6D 03 D6 0E 3D 10 01 00 08 00 00 00 00 00 00 :PropertyValueResponse(Obj=0E,
Prop=3D, Count=1, Start=001, Data=00 08 00 00 00 00 00 00 )
IN   BC AFFE 0201 65 03 D5 0E 3D 10 02 :PropertyValueRead(Obj=0E, Prop=3D, Count=1, Start=002)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 0201 AFFE 65 03 D6 0E 3D 00 02 :PropertyValueResponse(Obj=0E, Prop=3D, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.4 PID_GO_CFLAGS_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_GO_CFLAGS_LIST.

IN    BC AFFE 0201 65 03 D5 0E 3E 10 00 :PropertyValueRead(Obj=0E, Prop=3E, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 3E 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=3E, Count=1,
Start=000, Data=00 01 )
IN    BC AFFE 0201 65 03 D5 0E 3E 10 01 :PropertyValueRead(Obj=0E, Prop=3E, Count=1, Start=001)
OUT  BC 0201 AFFE 67 03 D6 0E 3E 10 01 00 02 :PropertyValueResponse(Obj=0E, Prop=3E, Count=1,
Start=001, Data=00 02 )
IN    BC AFFE 0201 65 03 D5 0E 3E 10 02 :PropertyValueRead(Obj=0E, Prop=3E, Count=1, Start=002)
OUT  BC 0201 AFFE 65 03 D6 0E 3E 00 02 :PropertyValueResponse(Obj=0E, Prop=3E, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.5 PID_OBJECTLINK

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_OBJECTLINK.

IN    BC AFFE 0201 65 03 D5 0E 3F 10 01 :PropertyValueRead(Obj=0E, Prop=3F, Count=1, Start=001)
OUT  BC 0201 AFFE 65 03 D6 0E 3F 00 01 :PropertyValueResponse(Obj=0E, Prop=3F, Count=0,
Start=001, Data=)

Acceptance: BDUT shall respond negatively.

#### 3.6.3.2.6 PID_GO_SUBUNIT

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_GO_SUBUNIT.

IN    BC AFFE 0201 65 03 D5 0E 40 10 00 :PropertyValueRead(Obj=0E, Prop=40, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 40 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=40, Count=1,
Start=000, Data=00 01 )
IN    BC AFFE 0201 65 03 D5 0E 40 10 01 :PropertyValueRead(Obj=0E, Prop=40, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0E 40 10 01 01 :PropertyValueResponse(Obj=0E, Prop=40, Count=1,
Start=001, Data=01 )
IN   BC AFFE 0201 65 03 D5 0E 40 10 02 :PropertyValueRead(Obj=0E, Prop=40, Count=1, Start=002)
OUT  BC 0201 AFFE 65 03 D6 0E 40 00 02 :PropertyValueResponse(Obj=0E, Prop=40, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.7 PID_GO_NAME_LIST

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_GO_NAME_LIST.

IN    BC AFFE 0201 65 03 D5 0E 41 10 00 :PropertyValueRead(Obj=0E, Prop=41, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 41 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=41, Count=1,
Start=000, Data=00 01 )


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN    BC AFFE 0201 65 03 D5 0E 41 10 01 :PropertyValueRead(Obj=0E, Prop=41, Count=1, Start=001)
OUT  BC 0201 AFFE 6F 03 D6 0E 41 10 01 53 63 65 6E 65 4E 72 4F 75 74
:PropertyValueResponse(Obj=0E, Prop=41, Count=1, Start=001, Data=53 63 65 6E 65 4E 72 4F 75
74 )
IN   BC AFFE 0201 65 03 D5 0E 41 10 02 :PropertyValueRead(Obj=0E, Prop=41, Count=1, Start=002)
OUT BC 0201 AFFE 65 03 D6 0E 41 00 02 :PropertyValueResponse(Obj=0E, Prop=41, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.8 PID_PARAM_TYPES

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_PARAM_TYPES.
IN    BC AFFE 0201 65 03 D5 0E 46 10 00 :PropertyValueRead(Obj=0E, Prop=46, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 46 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=46, Count=1,
Start=000, Data=00 01 )
IN    BC AFFE 0201 65 03 D5 0E 46 10 01 :PropertyValueRead(Obj=0E, Prop=46, Count=1, Start=001)
OUT  BC 0201 AFFE 6F 03 D6 0E 46 10 01 01 11 01 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0E, Prop=46, Count=1, Start=001, Data=01 11 01 00 00 00 00 00 00
00 )
IN    BC AFFE 0201 65 03 D5 0E 46 10 02 :PropertyValueRead(Obj=0E, Prop=46, Count=1, Start=002)
OUT  BC 0201 AFFE 65 03 D6 0E 46 00 02 :PropertyValueResponse(Obj=0E, Prop=46, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.9 PID_PARAM_FLAGS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_PARAM_FLAGS.

IN   BC AFFE 0201 65 03 D5 0E 47 10 00 :PropertyValueRead(Obj=0E, Prop=47, Count=1, Start=000)
OUT BC 0201 AFFE 67 03 D6 0E 47 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=47, Count=1,
Start=000, Data=00 01 )
IN   BC AFFE 0201 65 03 D5 0E 47 10 01 :PropertyValueRead(Obj=0E, Prop=47, Count=1, Start=001)
OUT  BC 0201 AFFE 67 03 D6 0E 47 10 01 00 00 :PropertyValueResponse(Obj=0E, Prop=47, Count=1,
Start=001, Data=00 00 )
IN    BC AFFE 0201 65 03 D5 0E 47 10 02 :PropertyValueRead(Obj=0E, Prop=47, Count=1, Start=002)
OUT  BC 0201 AFFE 65 03 D6 0E 47 00 02 :PropertyValueResponse(Obj=0E, Prop=47, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.10 PID_PARAM_NAMES

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_PARAM_NAMES.

IN    BC AFFE 0201 65 03 D5 0E 48 10 00 :PropertyValueRead(Obj=0E, Prop=48, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 48 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=48, Count=1,
Start=000, Data=00 01 )
IN   BC AFFE 0201 65 03 D5 0E 48 10 01 :PropertyValueRead(Obj=0E, Prop=48, Count=1, Start=001)
OUT BC 0201 AFFE 6F 03 D6 0E 48 10 01 53 63 65 6E 65 20 4E 72 00 00
:PropertyValueResponse(Obj=0E, Prop=48, Count=1, Start=001, Data=53 63 65 6E 65 20 4E 72 00
00 )
IN   BC AFFE 0201 65 03 D5 0E 48 10 02 :PropertyValueRead(Obj=0E, Prop=48, Count=1, Start=002)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 0201 AFFE 65 03 D6 0E 48 00 02 :PropertyValueResponse(Obj=0E, Prop=48, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.11 PID_PARAM_UNITS

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_PARAM_UNITS.

IN    BC AFFE 0201 65 03 D5 0E 49 10 00 :PropertyValueRead(Obj=0E, Prop=49, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 49 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=49, Count=1,
Start=000, Data=00 01 )
IN    BC AFFE 0201 65 03 D5 0E 49 10 01 :PropertyValueRead(Obj=0E, Prop=49, Count=1, Start=001)
OUT  BC 0201 AFFE 6F 03 D6 0E 49 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=0E, Prop=49, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00
00 )
IN   BC AFFE 0201 65 03 D5 0E 49 10 02 :PropertyValueRead(Obj=0E, Prop=49, Count=1, Start=002)
OUT BC 0201 AFFE 65 03 D6 0E 49 00 02 :PropertyValueResponse(Obj=0E, Prop=49, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.3.2.12 PID_PARAM_VALUES

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 0Eh, property PID_PARAM_VALUES.

IN    BC AFFE 0201 65 03 D5 0E 4F 10 00 :PropertyValueRead(Obj=0E, Prop=4F, Count=1, Start=000)
OUT  BC 0201 AFFE 67 03 D6 0E 4F 10 00 00 01 :PropertyValueResponse(Obj=0E, Prop=4F, Count=1,
Start=000, Data=00 01 )
IN    BC AFFE 0201 65 03 D5 0E 4F 10 01 :PropertyValueRead(Obj=0E, Prop=4F, Count=1, Start=001)
OUT  BC 0201 AFFE 66 03 D6 0E 4F 10 01 04 :PropertyValueResponse(Obj=0E, Prop=4F, Count=1,
Start=001, Data=04 )
IN    BC AFFE 0201 65 03 D5 0E 4F 10 02 :PropertyValueRead(Obj=0E, Prop=4F, Count=1, Start=002)
OUT  BC 0201 AFFE 65 03 D6 0E 4F 00 02 :PropertyValueResponse(Obj=0E, Prop=4F, Count=0,
Start=002, Data=)

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.4 Text Catalogue Object

Preparation: for all tests of the Text Catalogue Object, the BDUT individual address is 0201h. This device implements
the Ctrl FEC profile. The BDUT contains at object index 14h, one instance of the Text Catalogue interface object (type
10h). The BDUT contains the following languages and regions setttings :

  - de-DE

  - en-GB

  - nl-BE

#### 3.6.4.1 PID_OBJECT_TYPE

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 14h, property PID_OBJECT_TYPE.

IN    BC AFFE 0201 65 03 D5 14 01 10 01 :PropertyValueRead(Obj=14, Prop=01, Count=1, Start=001)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT  BC 0201 AFFE 67 03 D6 14 01 10 01 00 10 :PropertyValueResponse(Obj=14, Prop=01, Count=1,
Start=001, Data=00 10 )

Acceptance: BDUT shall respond the correct values defined in the channel description.

#### 3.6.4.2 PID_VERSION

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 14h, property PID_VERSION.

IN    BC FFFA 0201 65 03 D5 14 19 10 01 :PropertyValueRead(Obj=14, Prop=19, Count=1, Start=001)
OUT  BC 0201 FFFA 67 03 D6 14 19 10 01 08 41 :PropertyValueResponse(Obj=14, Prop=19, Count=1,
Start=001, Data=08 41 )

Acceptance: BDUT shall respond with value 0841h (1.1.1).

#### 3.6.4.3 PID_LOCALE_LIST

Preparation:

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 14h, property PID_LOCALE_LIST.

IN    BC AFFE 0201 65 03 D5 14 33 20 01 :PropertyValueRead(Obj=14, Prop=33, Count=2, Start=001)
OUT BC 0201 AFFE 6D 03 D6 14 33 20 01 64 65 44 45 65 6E 47 42 :PropertyValueResponse(Obj=14,
Prop=33, Count=2, Start=001, Data=64 65 44 45 65 6E 47 42 )
IN   BC AFFE 0201 65 03 D5 14 33 10 03 :PropertyValueRead(Obj=14, Prop=33, Count=1, Start=003)
OUT BC 0201 AFFE 69 03 D6 14 33 10 03 6E 6C 42 45 :PropertyValueResponse(Obj=14, Prop=33,
Count=1, Start=003, Data=6E 6C 42 45 )

Acceptance: BDUT shall respond with the list of its available language flavours and regional options.

#### 3.6.4.4 PID_LOCALE_SELECTION and PID_ACTIVE_LOCALE : supported language

Test sequence:

  - select the language “de-DE”, using the property PID_LOCALE_SELECTION on object index 14h.

  - read the current active language, using the property PID_ACTIVE_LOCALE on object index 14h.

IN    BC AFFE 0201 69 43 D7 14 34 10 01 64 65 44 45 :PropertyValueWrite(Obj=14, Prop=34, Count=1,
Start=001, Data=64 65 44 45 )
OUT  BC 0201 AFFE 69 03 D6 14 34 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=34,
Count=1, Start=001, Data=64 65 44 45 )
IN    BC AFFE 0201 65 03 D5 14 35 10 01 :PropertyValueRead(Obj=14, Prop=35, Count=1, Start=001)
OUT  BC 0201 AFFE 69 03 D6 14 35 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=35,
Count=1, Start=001, Data=64 65 44 45 )

Acceptance: BDUT shall respond with the same language than what has been selected.

#### 3.6.4.5 PID_LOCALE_SELECTION and PID_ACTIVE_LOCALE : unsupported language

Test sequence:

  - read the current active language, using the property PID_ACTIVE_LOCALE on object index 14h.

  - select the unsupported language “en-US”, using the property PID_LOCALE_SELECTION on object index
14h.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

  - read the current active language, using the property PID_ACTIVE_LOCALE on object index 14h.

IN   BC AFFE 0201 65 03 D5 14 35 10 01 :PropertyValueRead(Obj=14, Prop=35, Count=1, Start=001)
OUT BC 0201 AFFE 69 03 D6 14 35 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=35,
Count=1, Start=001, Data=64 65 44 45 )
IN   BC AFFE 0201 69 43 D7 14 34 10 01 65 6E 55 53 :PropertyValueWrite(Obj=14, Prop=34, Count=1,
Start=001, Data=65 6E 55 53 )
OUT  BC 0201 AFFE 65 03 D6 14 34 00 01 :PropertyValueResponse(Obj=14, Prop=34, Count=0,
Start=001, Data=)
IN    BC AFFE 0201 65 03 D5 14 35 10 01 :PropertyValueRead(Obj=14, Prop=35, Count=1, Start=001)
OUT  BC 0201 AFFE 69 03 D6 14 35 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=35,
Count=1, Start=001, Data=64 65 44 45 )

Acceptance: BDUT shall not switch the language and shall respond with a negative A_PropertyValue_Response.

#### 3.6.4.6 PID_STRING_001

Test sequence:

  - select the supported language “de-DE”, using the property PID_LOCALE_SELECTION on object index 14h.

  - read the first text string, using the property PID_STRING_001 on object index 14h.

  - select the supported language “en-GB”, using the property PID_LOCALE_SELECTION on object index 14h.

  - read the first text string, using the property PID_STRING_001 on object index 14h.

IN    BC AFFE 0201 69 43 D7 14 34 10 01 64 65 44 45 :PropertyValueWrite(Obj=14, Prop=34, Count=1,
Start=001, Data=64 65 44 45 )
OUT  BC 0201 AFFE 69 03 D6 14 34 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=34,
Count=1, Start=001, Data=64 65 44 45 )
IN    BC AFFE 0201 65 03 D5 14 3C 90 01 :PropertyValueRead(Obj=14, Prop=3C, Count=9, Start=001)
OUT  BC 0201 AFFE 6E 03 D6 14 3C 90 01 41 75 73 67 61 6E 67 20 41
:PropertyValueResponse(Obj=14, Prop=3C, Count=9, Start=001, Data=41 75 73 67 61 6E 67 20 41 )
IN   BC AFFE 0201 69 43 D7 14 34 10 01 65 6E 47 42 :PropertyValueWrite(Obj=14, Prop=34, Count=1,
Start=001, Data=65 6E 47 42 )
OUT  BC 0201 AFFE 69 03 D6 14 34 10 01 64 65 44 45 :PropertyValueResponse(Obj=14, Prop=34,
Count=1, Start=001, Data=64 65 44 45 )
IN    BC AFFE 0201 65 03 D5 14 3C 90 01 :PropertyValueRead(Obj=14, Prop=3C, Count=9, Start=001)
OUT  BC 0201 AFFE 6E 03 D6 14 3C 90 01 4F 75 74 70 75 74 20 41 00
:PropertyValueResponse(Obj=14, Prop=3C, Count=9, Start=001, Data=4F 75 74 70 75 74 20 41 00 )

Acceptance: BDUT shall respond each time with the text string correctly translated in the selected language.

#### 3.6.5 E-Mode Device Object

 3.6.5.1 PID_OBJECT_TYPE

Test sequence: send a A_PropertyValue_Read to the BDUT on object index 15h, property PID_OBJECT_TYPE.

IN   BC FFFA 0201 65 03 D5 15 01 10 01 :PropertyValueRead(Obj=15, Prop=01, Count=1, Start=001)
OUT BC 0201 FFFA 67 03 D6 15 01 10 01 00 12 :PropertyValueResponse(Obj=15, Prop=01, Count=1,
Start=001, Data=00 12 )

Acceptance: BDUT shall respond with value 0012h.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### 3.6.5.2 PID_LOCALISATION_MODE

 3.6.5.2.1 Testing of Localisation Mode : manual activation / manual inactivation

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - read the current value of localisation mode in BDUT using A_NetworkParameter_Read, in point to point
mode.

  - Inactivate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode,
on object type 12h, property PID_LOCALISATION_MODE, value 0.

  - read the current value of localisation mode in BDUT using A_NetworkParameter_Read, in point to point
mode.

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )
IN   BC AFFE 0201 64 03 DA 00 12 3C :NetworkParameterRead(ObjType=0012, PID=3C, )
OUT BC 0201 AFFE 65 03 DB 00 12 3C 01 :NetworkParameterResponse(ObjType=0012, PID=3C,
TestData=01 )

IN   BC AFFE 0000 E5 03 E4 00 12 3C 00 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=00 )
IN   BC AFFE 0201 64 03 DA 00 12 3C :NetworkParameterRead(ObjType=0012, PID=3C, )
OUT BC 0201 AFFE 65 03 DB 00 12 3C 00 :NetworkParameterResponse(ObjType=0012, PID=3C,
TestData=00 )

Acceptance: BDUT shall respond with the same value that has been written by NetworkParameterWrite.

#### 3.6.5.2.2 Testing of Localisation Mode : manual activation / autonomous inactivation

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Wait more than 3 minutes 30 seconds,

  - read the current value of localisation mode in BDUT using A_NetworkParameter_Read, in point to point
mode.

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )
IN   BC AFFE 0201 64 03 DA 00 12 3C :NetworkParameterRead(ObjType=0012, PID=3C, )
OUT BC 0201 AFFE 65 03 DB 00 12 3C 00 :NetworkParameterResponse(ObjType=0012, PID=3C,
TestData=00 )

Acceptance: BDUT shall autonomously inactivate its localisation mode.

#### 3.6.5.2.3 Testing of Localisation Mode : manual activation / retrigger / autonomous inactivation

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

  - After X minutes, retrigger the localisation mode by sending again a A_NetworkParameter_Write to the BDUT,
in broadcast mode, on object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Wait more than X+3 minutes and 30 seconds,

  - Read the current value of localisation mode in BDUT using A_NetworkParameter_Read, in point to point
mode.

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

After X minutes, retrigger the localisation Mode
IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

After X+3 minutes and 30 seconds, read the localisation mode
IN   BC AFFE 0201 64 03 DA 00 12 3C :NetworkParameterRead(ObjType=0012, PID=3C, )
OUT BC 0201 AFFE 65 03 DB 00 12 3C 00 :NetworkParameterResponse(ObjType=0012, PID=3C,
TestData=00 )

Acceptance: BDUT shall autonomously inactivate its localisation mode.

#### 3.6.5.3 PID_LOCALISATION_REPORT

The specification of this specific feature is done in the document “AN132 v02 A_NetworkParameter_InfoReport”.
This is based on the A_NetworkParameter_InfoReport service.

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Do the localisation action on the BDUT, on channel 1,

IN    BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01
)
OUT  BC 0201 AFFE 65 03 DC 00 12 3D 00 00 01 :NetworkParameterInfoReport(ObjType=0012,
PID=3D, testinfo=00, Testresult = 00 01)

Acceptance: BDUT shall send the localisation report, using the A_NetworkParameter_InfoReport service, with test
result 0001h.

#### 3.6.5.4 PID_LOCALISATION_COMMAND

 3.6.5.4.1 Normal case

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Send a localisation command (start physical effect) on the first channel of the BDUT, using broadcast mode

  - Send another localisation command (stop physical effect) on the first channel of the BDUT, using point to
point mode.

  - Start then a non physical action on the first channel of BDUT, using point to point mode,

  - And then stop this non physical action on the first channel of BDUT, using broadcast mode.

  - Then start a physical action on all channels of the BDUT, using broadcast mode

  - And finally stop the physical action on all channels of the BDUT, using point to point mode.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

IN  BC AFFE 0000 E7 03 E4 00 12 3E 01 00 01 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=01 00 01 )
IN  BC AFFE 0201 67 03 E4 00 12 3E 00 00 01 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=00 00 01 )

IN  BC AFFE 0201 67 03 E4 00 12 3E 03 00 01 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=03 00 01 )
IN BC AFFE 0000 E7 03 E4 00 12 3E 02 00 01 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=02 00 01 )

IN   BC AFFE 0000 E7 03 E4 00 12 3E 01 00 00 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=01 00 00 )

IN  BC AFFE 0201 67 03 E4 00 12 3E 00 00 00 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=00 00 00 )

Acceptance: BDUT shall do the different actions on the first channel.

#### 3.6.5.4.2 Reserved bits

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Send a localisation command (start physical effect) on the first channel of the BDUT, using broadcast mode,
with reserved bits set to a value different than 0

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

IN   BC AFFE 0000 E7 03 E4 00 12 3E 11 00 01 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=11 00 01 )

Acceptance: BDUT shall ignore the telegram and not react.

#### 3.6.5.4.3 Unsupported channel number

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Send a localisation command (start physical effect) on a non supported channel 0Bh of the BDUT, using
broadcast mode

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

IN   BC AFFE 0000 E7 03 E4 00 12 3E 01 00 0B :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=01 00 0B )

Acceptance: BDUT shall ignore the telegram and not react.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 3.6.5.4.4 Channel number not supporting localisation command with Physical action “Not a physical action”

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Start the “not physical action” localisation command on the second channel of the BDUT, which does not
support this value, using broadcast mode.

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

IN   BC AFFE 0000 E7 03 E4 00 12 3E 03 00 02 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=01 00 02 )

Acceptance: BDUT shall ignore the telegram and not react.

#### 3.6.5.4.5 Channel number not supporting localisation command

Test sequence:

  - Activate the localisation mode by sending a A_NetworkParameter_Write to the BDUT, in broadcast mode, on
object type 12h, property PID_LOCALISATION_MODE, value 1.

  - Send the localisation command (start physical effect) on the third channel of the BDUT, which does not
support localisation command, using broadcast mode.

IN   BC AFFE 0000 E5 03 E4 00 12 3C 01 :NetworkParameterWrite(ObjType=0012, PID=3C, Value=01 )

IN   BC AFFE 0000 E7 03 E4 00 12 3E 01 00 03 :NetworkParameterWrite(ObjType=0012, PID=3E,
Value=01 00 03 )

Acceptance: BDUT shall ignore the telegram and not react.


-----

