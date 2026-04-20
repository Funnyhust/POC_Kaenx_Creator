## KNX System Conformance Testing 8

### KNX Network, Transport, Application (Interface) 33 Layer, Management Service Testing


### Application (Interface) Layer Testing – Network Management Server/Client Testing

###### Summary

 This document specifies the Application (Interface) Layer Tests as well as the Management Server/Client Tests.


# 77


-----

###### Document Updates

 Version Date Modifications
 1.0 2001.03.13 Approved Standard 1.1 2005-02-25 Integration of AN 024 – 025 – relevant parts of AN041 1.2 2009-06 Readying document for publication in V2.0 – integration of AN085 1.3 2009-10DP Correction of clause 2.13 to 2.15, added clause 3 on SysIO and parameter tests – shift clause 7 and 8 of TSS B to clause 4 and 5 of this Volume 1.3 2010-01DV Resolving (editiorial) comments RfV – reading for final voting 1.3 2010-03 Resolution of comments from FV – publication as AS 1.4RfV 2013-10 Adding of checking of read on init flag test (yellow marked part) – included KonCert meeting 1013 comments 01.05.00 2015-04 No comments during Release for Voting – so direct publication as AS – update of the version numbering to distinguish with previous 2.1 version 01.06.00 2016-05 Changes to ADC Read, Restart, minimum requirements for ALG tests, Additional test Authorize, reintroduction of A_NeworkParameter_Write and Read tests of previous 01.04.01 (mysteriously deleted), reintroduction of test illegial APCI (however some of them are not illegal as Memory Read/Write) 01.06.01 2016-10 Resolution of comments from Release for Voting 01.06.02 2017-03 Resolution of comments from Final Voting 01.07.01 2019-10 Extension of clauses MemoryRead/Write, PropReadWrite,  RouterMemoryRead/Write, Routing Table Access and UserMemory Access with EFF tests according AN178 – Preparation Release for Voting 01.07.02 2019-12 Resolution of comments from Release for Voting 01.07.03 2020-01 Readying for Final Voting 01.07.04 2020-03 Readying for Publication as Approved Standard

Filename: 08_03_07 System Conformance Testing - AIL and Management Tests v01.07.04 AS
Version: 01.07.04
Status: Approved Standard
Savedate: 2020.06.12
Number of pages: 109

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.03.13|Approved Standard|
|1.1|2005-02-25|Integration of AN024 –025 – relevantparts of AN041|
|1.2|2009-06|Readying document forpublication in V2.0 – integration of AN085|
|1.3|2009-10DP|Correction of clause 2.13 to 2.15, added clause 3 on SysIO and parameter<br>tests – shift clause 7 and8 of TSS B to clause 4 and5 of this Volume|
|1.3|2010-01DV|Resolving (editiorial) comments RfV – reading for finalvoting|
|1.3|2010-03|Resolution of comments from FV –publication as AS|
|1.4RfV|2013-10|Adding of checking of read on init flag test (yellow marked part) –<br>included KonCert meeting 1013 comments|
|01.05.00|2015-04|No comments during Release for Voting – so direct publication as AS –<br>update of theversion numbering to distinguishwithprevious 2.1version|
|01.06.00|2016-05|Changes to ADC Read, Restart, minimum requirements for ALG tests,<br>Additional test Authorize, reintroduction of A_NeworkParameter_Write<br>and Read tests of previous 01.04.01 (mysteriously deleted),<br>reintroduction of test illegial APCI (however some of them are not illegal<br>as Memory Read/Write)|
|01.06.01|2016-10|Resolution of comments from Release for Voting|
|01.06.02|2017-03|Resolution of comments from Final Voting|
|01.07.01|2019-10|Extension of clauses MemoryRead/Write, PropReadWrite,<br>RouterMemoryRead/Write, Routing Table Access and UserMemory<br>Access with EFF tests according AN178 – Preparation Release for<br>Voting|
|01.07.02|2019-12|Resolution of comments from Release for Voting|
|01.07.03|2020-01|Readying for Final Voting|
|01.07.04|2020-03|Readying for Publication as ApprovedStandard|


-----

##### Contents

###### 1 Application (Interface) Layer Tests .................................................................................... 10 1.1 Introduction ................................................................................................................... 10 1.2 General guidelines ......................................................................................................... 10 1.3 Test Set-up .................................................................................................................... 10 1.3.1 Hardware ........................................................................................................... 10 1.3.2 Software used during Tests ............................................................................... 11 1.4 Group objects (GO) ....................................................................................................... 12 1.4.1 Tests with accessible configuration and communication flags ......................... 12 1.4.2 Black Box tests .................................................................................................. 23 1.5 System Interface Objects .............................................................................................. 24 1.5.1 Device Object .................................................................................................... 24 1.5.2 Address Table Object ........................................................................................ 24 1.5.3 Association Table Object .................................................................................. 24 1.5.4 Application Program Object ............................................................................. 24 1.5.5 PEI Program Object .......................................................................................... 24 1.6 Bus/PEI Test ................................................................................................................. 24

 2 Network Management Server Tests .................................................................................... 25 2.1 Introduction ................................................................................................................... 25 2.2 Description of the Test Set-up ...................................................................................... 26 2.2.1 Hardware ........................................................................................................... 26 2.2.2 Software used during Tests ............................................................................... 27 2.3 Testing of A_IndividualAddress_Read-Service - Server Test ...................................... 28 2.3.1 Try to read Address with LED off .................................................................... 28 2.3.2 Send Response to BDUT with LED off ............................................................ 28 2.3.3 Read Address with LED on ............................................................................... 28 2.3.4 Send Response to BDUT with LED on ............................................................. 28 2.4 Testing of A_IndividualAddress_Write-Service - Server Test ..................................... 28 2.4.1 Try to set Address with LED off ....................................................................... 28 2.4.2 Set Address with LED on .................................................................................. 29 2.5 Testing of A_DeviceDescriptor_Read-Service - Server Test ....................................... 29 2.5.1 Read Device Descriptor, connection-oriented .................................................. 29 2.5.2 Read Device Descriptor, connectionless (when supported) .............................. 29 2.5.3 Read DD Type2, connection-oriented ............................................................... 29 2.5.4 Read DD Type2, connectionless (if supported) ............................................... 29 2.5.5 Read illegal DD Types, connection-oriented .................................................... 30 2.5.6 Read illegal DD Types, connectionless (if supported) ...................................... 30 2.6 Testing of A_Memory_Read-Service - Server Test ..................................................... 30 2.6.1 Preparation ........................................................................................................ 30 2.6.2 Accessible Memory Area .................................................................................. 30 2.6.3 Protected Memory Area .................................................................................... 30 2.6.4 Partly protected Memory Area .......................................................................... 31 2.6.5 Illegal Length - accessible Memory Area – for devices not supporting EFF .................................................................................................. 31 2.6.6 Accessible Memory Area – for devices supporting EFF .................................. 31 2.6.7 Accessible Memory Area - not supporting MAX_APDU_LENGTH ≥ 66 .................................................................................................................... 31 2.6.8 Accessible Memory Area - EFF - response fits in SFF .................................... 31 2.6.9 Accessible Memory Area - EFF - response fits in EFF .................................... 31


-----

###### 2.6.10 Accessible Memory Area - supporting MAX_APDU_LENGTH ≥ 66............ 32 2.7 Testing of A_Memory_Write-Service - Server Test .................................................... 32 2.7.1 Accessible Memory - no Verify ....................................................................... 32 2.7.2 Partly protected Memory - no Verify ............................................................... 32 2.7.3 Length inconsistency - accessible Memory - no Verify ................................... 32 2.7.4 Accessible Memory – Verify on ....................................................................... 33 2.7.5 Protected Memory – Verify .............................................................................. 33 2.7.6 Partly protected Memory – Verify .................................................................... 34 2.7.7 Length inconsistency - accessible Memory - Verify ........................................ 34 2.7.8 Accessible Memory - EFF - Verify .................................................................. 34 2.7.9 Accessible Memory - EFF - respond SFF - Verify .......................................... 35 2.7.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify ................................................................................................................ 35 2.7.11 Length inconsistency - accessible Memory - EFF - Verify .............................. 36 2.7.12 Length inconsistency - accessible Memory - EFF - Verify .............................. 36 2.7.13 Accessible Memory - EFF - no Verify ............................................................. 37 2.7.14 Accessible Memory - EFF but fits SFF - no Verify ......................................... 37 2.7.15 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify ................................................................................................................ 37 2.7.16 Length inconsistency - accessible Memory - EFF - no Verify ......................... 38 2.7.17 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify ............................................................... 38 2.7.18 Accessible Memory - EFF - data matches maximum service length - Verify ................................................................................................................ 39 2.7.19 Accessible Memory - EFF - matches maximum service length - no Verify ................................................................................................................ 40 2.8 Testing of A_ADC_Read-Service - Server Test .......................................................... 40 2.8.1 Correct Channel Number (Channel 1 and 1 count) .......................................... 40 2.8.2 Correct Channel Number (Channel 4 and 1 count) .......................................... 40 2.8.3 Unsupported Channel Number (e.g. Channel 7 and 1 count) ........................... 41 2.9 Testing of A_Restart-Service - Server Test .................................................................. 41 2.9.1 Send Basic Restart (connection oriented) ......................................................... 41 2.9.2 Send Basic Restart (connectionless) ................................................................. 41 2.9.3 Send Master Reset – confirmed Restart (connectionless) ................................ 41 2.9.4 Send Master Reset – Factory Reset (connectionless[10]) .................................... 41 2.9.5 Send Master Reset – ResetIA (connectionless[10]) ............................................. 42 2.9.6 Send Master Reset – ResetAP (connectionless[10]) ............................................ 42 2.9.7 Send Master Reset – ResetParam (connectionless[10]) ....................................... 42 2.9.8 Send Master Reset – ResetLinks (connectionless[10]) ........................................ 42 2.9.9 Send Master Reset – Factory Reset without IA (connectionless[10]) .................. 42 2.9.10 Send Master Reset – Unsupported EraseCode (connectionless[10]) ................... 43 2.9.11 Send Master Reset – Access denied (connectionless[10]) ................................... 43 2.9.12 Send Master Reset – Incorrect Channel number (connectionless[10]) ................ 43 2.10 Testing of A_MemoryBit_Write-Service - Server Test ............................................... 43
 2.10.1 Legal Length - accessible Memory - no Verify (5 bytes from 200H) .............. 43 2.10.2 Legal Length - partly protected Memory - no Verify (2 bytes from 02FF) ................................................................................................................ 44 2.10.3 Illegal Length - accessible Memory - no Verify (6 bytes from 0210H) .............................................................................................................. 44 2.10.4 Legal Length - accessible Memory – Verify (5 bytes from 0220H) ................ 44


-----

###### 2.10.5 Legal Length - protected Memory – Verify (5 bytes from 0300H) .................. 44 2.10.6 Legal Length - partly protected Memory – Verify (2 bytes from 02FF) ................................................................................................................. 45 2.10.7 Illegal Length - accessible Memory – Verify (6 bytes from 0230H) ................ 45 2.11 Testing of A_Authorize_Request-Service: Server Test ................................................ 45
 2.11.1 Authorization with Legal Key ........................................................................... 46 2.11.2 Authorization with Illegal Key .......................................................................... 46 2.11.3 Reaction to Authorize Response ....................................................................... 46 2.11.4 Authorization with default Key ......................................................................... 46 2.11.5 Access to the device without Authorization ...................................................... 47 2.12 Testing of A_Key_Write-Service : Server Test ............................................................ 47
 2.12.1 Authorize at Level 1 - set Key for Illegal Level ............................................... 47 2.12.2 Authorize at higher Level - set Key for lower Level ........................................ 48 2.12.3 Authorize and set Key at same Level ................................................................ 48 2.12.4 Authorize at lower Level – set Key for higher Level ........................................ 49 2.13 Testing of A_PropertyValue_Read-Service : Server-Test ............................................ 50
 2.13.1 Property Read with legal Property ID ............................................................... 51 2.13.2 Property Read with illegal Object index ........................................................... 51 2.13.3 Property Read with illegal Property ID ............................................................. 52 2.13.4 Property Read with illegal Start Index .............................................................. 52 2.13.5 Property Read with illegal Access Level .......................................................... 53 2.13.6 Property Read with illegal Count ...................................................................... 53 2.13.7 Property Read of two objects, for which access level is legal - access level is illegal .................................................................................................... 53 2.13.8 Property Read on Start Index 0 – current length of arrays ................................ 54 2.13.9 Property Read with data not fitting in SFF, devices not supporting EFF .................................................................................................................... 55 2.13.10 Property Read - SFF - response fitting in EFF - not exceeding MAX_APDU_LENGTH ................................................................................... 56 2.13.11 Property Read - SFF - data fitting in EFF - exceeding MAX_APDU_LENGTH ................................................................................... 56 2.13.12 Property Read - EFF - data fitting in SFF ......................................................... 56 2.13.13 Property Read - EFF - response fitting in EFF - not exceeding MAX_APDU_LENGTH ................................................................................... 57 2.14 Testing of A_PropertyValue_Write-Service : Server-Test ........................................... 58
 2.14.1 Property Write by PropID, by Index to Prop, to array ...................................... 58 2.14.2 Property Write by illegal Object index ............................................................. 58 2.14.3 Property Write with illegal PropID ................................................................... 59 2.14.4 Property Write with illegal Start Index ............................................................. 59 2.14.5 Property Write with illegal Access Level ......................................................... 59 2.14.6 Property Write with illegal Count ..................................................................... 60 2.14.7 Property Write to write protected Value ........................................................... 60 2.14.8 Property Write to object .................................................................................... 60 2.14.9 Property Write – Influence on Start Index 0 – not exceeding Maxlength - exceeding Maxlength .................................................................... 61 2.14.10 Property Write – SFF - inconsistent data .......................................................... 63 2.14.11 Property Write - consistent data - Write EFF - Response EFF ......................... 63 2.14.12 Property Write - consistent data - Write EFF - Response SFF ......................... 63 2.14.13 Property Write - consistent data - Write EFF - data fitting in EFF - exceeding MAX_APDU_LENGTH ................................................................. 64


-----

###### 2.14.14 Property Write - inconsistent data - Write EFF - data fitting in EFF ............... 64 2.14.15 Property Write - consistent data - Write EFF - data fitting in EFF – not exceeding MAX_APDU_LENGTH ........................................................... 65 2.15 Testing of A_PropertyDescription_Read-Service : Server Test .................................. 66
 2.15.1 A_PropertyDescription_Read-Service with legal ID and Index ...................... 66 2.15.2 A_PropertyDescription_Read-Service with illegal object ............................... 67 2.15.3 A_PropertyDescription_Read-Service with illegal ID ..................................... 67 2.15.4 A_PropertyDescription_Read-Service with illegal Index ................................ 68 2.15.5 A_PropertyDescription_Read-Service with illegal access level ...................... 68 2.15.6 A_PropertyDescription_Read-Service with legal ID and illegal Index ........... 68 2.16 Testing of A_IndAddressSerialNumber_Write-Service : Server Test ......................... 70
 2.16.1 Set Individual Address via correct Serial Number ........................................... 70 2.16.2 Set Individual Address to other Value via same Serial Number ...................... 70 2.16.3 Set Individual Address to other Value via incorrect Serial Number ................ 70 2.17 Testing of A_IndAddressSerialNumber_Read-Service : Server Test .......................... 70
 2.17.1 Try to read Individual Address via incorrect Serial Number ........................... 70 2.17.2 Send Response to BDUT via incorrect Serial Number .................................... 71 2.17.3 Read Individual Address via correct Serial Number ........................................ 71 2.17.4 Send Response to BDUT via correct Serial Number........................................ 71 2.18 Testing of A_NetworkParameter_Read - Server Tests ................................................ 71 2.19 Testing of A_NetworkParameter_Write - Server Tests ............................................... 71
 2.19.1 General Test Case with correct service parameters .......................................... 71 2.19.2 Example: Subnet Address Update (PID_Subnet_Addr) ................................... 71 2.20 Illegal APCI in point to point communication mode ................................................... 72 2.21 A_Open_Routing_Table -Server Test .......................................................................... 73 2.22 A_Filter_Table_Read-Server Test ................................................................................ 73
 2.22.1 Accessible Memory Area (10 bytes from 0200H) ............................................ 73 2.22.2 Protected Memory Area (10 bytes from 2200H) .............................................. 73 2.22.3 Partly protected Memory Area (2 Bytes from 21FFH) .................................... 74 2.22.4 Illegal Length - accessible Memory Area (12 bytes from 200H) - for devices not supporting EFF .............................................................................. 74 2.22.5 Accessible Memory Area - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH - for devices supporting EFF .................. 74 2.22.6 Accessible Memory Area - SFF - response fits in EFF - exceeding MAX_APDU_LENGTH .................................................................................. 74 2.22.7 Accessible Memory Area - SFF - response fits in EFF - equaling MAX_APDU_LENGTH .................................................................................. 75 2.22.8 Accessible Memory Area - EFF - response fits in SFF .................................... 75 2.22.9 Accessible Memory Area - EFF - response fits in EFF .................................... 75 2.23 A_Filter_Table_Write-Server Test ............................................................................... 75
 2.23.1 Accessible Memory - no Verify (10 Bytes from 200H) ................................... 76 2.23.2 Partly protected Memory - no Verify (2 Bytes from 21FFH) .......................... 76 2.23.3 Length inconsistency - accessible Memory - no Verify ................................... 77 2.23.4 Accessible Memory - Verify ............................................................................ 77 2.23.5 Protected Memory – Verify .............................................................................. 78 2.23.6 Partly protected Memory – Verify .................................................................... 78 2.23.7 Length inconsistency - accessible Memory – Verify ....................................... 78 2.23.8 Accessible Memory - EFF - Verify .................................................................. 79 2.23.9 Accessible Memory - EFF - response fits in SFF - Verify ............................... 79


-----

###### 2.23.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify 79 2.23.11 Accessible Memory - EFF - equaling MAX_APDU_LENGTH - Verify 80 2.23.12 Length inconsistency - accessible Memory - EFF - Verify .............................. 81 2.23.13 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify ..................................................................... 82 2.23.14 Accessible Memory - EFF - no Verify .............................................................. 83 2.23.15 Accessible Memory - EFF - response fits in SFF - no Verify .......................... 83 2.23.16 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify 84 2.23.17 Accessible Memory - EFF - equaling MAX_APDU_LENGTH - no Verify 84 2.23.18 Length inconsistency - accessible Memory - EFF - no Verify ......................... 85 2.23.19 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify ................................................................ 86 2.24 A_RouterMemory_Read/A_RouterMemory_Write-Server Test ................................. 88
 2.24.1 RouterMemory_Read - normal case ................................................................. 88 2.24.2 RouterMemory_Read - Illegal length ............................................................... 88 2.24.3 RouterMemory_Read - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH ................................................................................... 88 2.24.4 RouterMemory_Read - SFF - response fits in EFF - exceeding MAX_APDU_LENGTH ................................................................................... 88 2.24.5 RouterMemory_Read - SFF - response fits in EFF - equaling MAX_APDU_LENGTH ................................................................................... 89 2.24.6 RouterMemory_Read - EFF - response fits in SFF .......................................... 89 2.24.7 RouterMemory_Read - EFF - response fits in EFF .......................................... 89 2.24.8 RouterMemory_Write - no Verify .................................................................... 90 2.24.9 RouterMemory_Write - Length inconsistency - SFF - no Verify ..................... 90 2.24.10 RouterMemory_Write - SFF - Verify ............................................................... 90 2.24.11 RouterMemory_Write - Length inconsistency - Verify .................................... 91 2.24.12 RouterMemory_Write - EFF - Verify ............................................................... 91 2.24.13 RouterMemory_Write - EFF - response fits in SFF - Verify ............................ 91 2.24.14 RouterMemory_Write - EFF - exceeds MAX_APDU_LENGTH - Verify 92 2.24.15 RouterMemory_Write - EFF - equaling MAX_APDU_LENGTH - Verify 93 2.24.16 RouterMemory_Write - Length inconsistency - EFF - Verify .......................... 94 2.24.17 RouterMemory_Write - Length inconsistency - EFF - exceeds MAX_APDU_LENGTH - Verify ..................................................................... 94 2.24.18 RouterMemory_Write - EFF - no Verify .......................................................... 95 2.24.19 RouterMemory_Write - EFF - response fits in SFF - no Verify ....................... 96 2.24.20 RouterMemory_Write - EFF - exceeds MAX_APDU_LENGTH - no Verify 96 2.24.21 RouterMemory_Write - EFF - equaling MAX_APDU_LENGTH - no Verify ........................................................................................................... 97 2.24.22 RouterMemory_Write - Length inconsistency - EFF - no Verify ..................... 97 2.24.23 RouterMemory_Write - Length inconsistency - EFF - exceeds MAX_APDU_LENGTH - no Verify ................................................................ 98 2.25 A_ServiceInformation_Indication_Write-Service ........................................................ 99


-----

###### 2.26 Testing of A_DomainAddress_Write-Service : Server Test – 2 byte DA ................. 100
 2.26.1 Try to set Domain Address with programming mode off .............................. 100 2.26.2 Try to set Address with programming mode on ............................................. 100 2.27 Testing of A_DomainAddress_Write-Service : Server Test – 6 byte DA ................. 100
 2.27.1 Try to set Domain Address with programming mode off .............................. 101 2.27.2 Try to set Address with programming mode on ............................................. 101 2.28 Testing of A_DomainAddress_Read-Service : Server Test – 2 byte DA .................. 101
 2.28.1 Try to read Domain Address with programming mode off ............................ 101 2.28.2 Send Response to BDUT with programming mode off ................................. 101 2.28.3 Read Domain Address with programming mode on ...................................... 101 2.28.4 Send Response with programming mode on .................................................. 101 2.29 Testing of A_DomainAddress_Read-Service : Server Test – 6 byte DA .................. 101
 2.29.1 Try to read Domain Address with programming mode off ............................ 102 2.29.2 Send Response to BDUT with programming mode off ................................. 102 2.29.3 Read Domain Address with programming mode on ...................................... 102 2.29.4 Send Response with programming mode on .................................................. 102 2.30 Testing of A_DomainAddressSelective_Read-Service : Server Test ........................ 102
 2.30.1 2 Octet Domain Address – Powerline – positive case .................................... 102 2.30.2 2 Octet Domain Address – Powerline – negative case 1 ................................ 102 2.30.3 2 Octet Domain Address – Powerline – negative case 2 ................................ 103 2.30.4 6 octet Domain Address Radio Frequency – positive case ............................ 103 2.30.5 6 octet Domain Address Radio Frequency – negative case ............................ 103 2.30.6 6 octet Domain Address Radio Frequency – reserved fields set to different value ................................................................................................. 103 2.30.7 Not supported Type ........................................................................................ 103 2.31 Testing of A_UserMemory_Read-Service : Server Test ............................................ 103
 2.31.1 Accessible Memory - SFF .............................................................................. 104 2.31.2 Protected Memory - SFF ............................................................................... 104 2.31.3 Partly protected Memory - SFF ..................................................................... 104 2.31.4 Illegal Length - accessible Memory– for devices supporting SFF only ................................................................................................................. 104 2.31.5 Accessible Memory - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH ................................................................................ 105 2.31.6 Accessible Memory - SFF - response would fit in EFF - exceeding MAX_APDU_LENGTH ................................................................................ 105 2.31.7 Accessible Memory - EFF - response fits in SFF ........................................... 105 2.31.8 Accessible Memory - EFF - response fits in EFF .......................................... 105 2.32 Testing of A_UserMemory_Write-Service : Server Test ........................................... 106
 2.32.1 Accessible Memory - no Verify (10 bytes from 7FF0) .................................. 106 2.32.2 Partly protected Memory - no Verify (2 bytes from 7FFF) ............................ 106 2.32.3 Inconsistent Length - accessible Memory - no Verify .................................... 106 2.32.4 Accessible Memory – Verify .......................................................................... 107 2.32.5 Protected Memory – Verify ............................................................................ 107 2.32.6 Partly protected Memory – Verify .................................................................. 107 2.32.7 Illegal Length - accessible Memory –– for devices supporting SFF only ................................................................................................................. 108 2.32.8 Accessible Memory - EFF - no Verify ........................................................... 108 2.32.9 Accessible Memory - EFF but fits SFF - no Verify ....................................... 108 2.32.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify 108


-----

###### 2.32.11 Inconsistent Length - accessible Memory - EFF - no Verify .......................... 109 2.32.12 Illegal Length - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify .............................................................. 109 2.32.13 Inconsistent Length - accessible Memory - Verify ......................................... 109 2.32.14 Accessible Memory - EFF - Verify ................................................................. 110 2.32.15 Accessible Memory - EFF - response fits in SFF - Verify ............................. 110 2.32.16 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify 110 2.32.17 Inconsistent Length - accessible Memory - EFF - Verify ............................... 111 2.32.18 Illegal Length - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify ................................................................... 111 2.33 Testing of A_UserManufacturerInfo_Read-Service : Server Test ............................. 112
 2.33.1 Read Management Type ................................................................................. 112

 3 Verification of implemented Interface Objects and Properties ..................................... 113

 4 Test of Address Table ......................................................................................................... 114 4.1 General ........................................................................................................................ 114 4.2 Server Tests ................................................................................................................. 114 4.3 Client Tests ................................................................................................................. 114

 5 Test of structure of Association Table .............................................................................. 115 5.1 General ........................................................................................................................ 115 5.2 Server Tests ................................................................................................................. 115 5.2.1 Receiving telegrams ........................................................................................ 115 5.2.2 Sending telegrams ........................................................................................... 117 5.3 Client Tests ................................................................................................................. 118

 6 Network Management Client ............................................................................................ 119 6.1 Introduction ................................................................................................................. 119


-----

#### 1 Application (Interface) Layer Tests

##### 1.1 Introduction
###### The main functionality of the application layer is in the group oriented part the conversion of the address table index to the SAP number according to the association table,

 The device oriented and broadcast parts of the AL are called “Management” and the according tests are described in part 6 of this volume “Network Management Tests”.

 The application interface layer contains the group objects and the interface objects. Here the structure and the flags of group objects are tested. The mechanisms to access interface objects (property services) are tested in the “Network Management” part. Tests of the contents of the system interface objects are described here.

##### 1.2 General guidelines
###### In all cases, the system conformity tests shall be completed by the testing of an at randomly chosen application program, once with and once without bus load, in order to avoid that bus load tests have to be applied to every bus device built on this bus access unit.

 In case products are commissioned via the bus by a PC tool other than the ETS (including ETS plug in modules), during the first commissioning a trace shall be made by means of the EITT in order to ensure that commissioning is carried out with KNX conforming telegrams.

##### 1.3 Test Set-up

###### 1.3.1 Hardware The test set-up is depicted in the underneath figure and consists of:

 • one Bus Device Under Test (BDUT)

 • the KNX Interworking Test Tool, hereafter called EITT running on a PC which is connected to the bus by an EDI (KNX data interface).

 • when testing TP devices, a power supply module (for TP1 also a choke) will have to be added to the underneath test set-up

 • when testing powerline devices an additional artificial network 50 Ω / 50 µH + 5 Ω according CISPR 16 (Second Edition, Clause 8.2.1) shall be installed next to BDUT[1].

1 Such a mains artificial network shall only be installed next to the BDUT when the relevant Power Line
medium does not provide other means of separation of the test circuit, e.g. standardized PL-filters or mains
separation transformer.


-----

Bus


###### Figure 1: Test Set-up for all bus media

 1.3.2 Software used during Tests

 1.3.2.1 Used KNX Software During testing the only software tool used is the KNX Interworking Test Tool (EITT).

 1.3.2.2 Used Application Software Application software to be downloaded into the BDUT is described at the respective tests.

 1.3.2.3 Implementation of used Software in the Test Set-up By means of EITT (in send mode) the BDUT is stimulated. By means of EITT (in receive mode) the reaction of the BDUT can be observed. In the latter mode it is moreover possible to check the time delay between the stimulus and the reply telegram, if the latter is actually transmitted.

 Parameters to be set in the BDUT

 Before carrying out the various tests or test steps, several values have to be set in the BDUT by means of EITT. These relate amongst others to:

 • the individual address of the BDUT (in the executable test suites in this document individual address 1101h is used by default).

 • the EDI shall have the following individual address: 10.15.254 (AFFEh) in case of twisted pair and 07.15.254 (7FFEh) when testing power line devices.

 • when testing powerline devices, the Domain Address 254 (FEh) shall be loaded into the BDUT and the EDI.

 • specific data, which has to be downloaded into a fixed memory area of the BDUT (see also PIXIT proforma as supplied by the manufacturer).


-----

##### 1.4 Group objects (GO)
###### These tests cover the behaviour of the Group objects. From the internal application the Group objects are accessible by the Communication flags (see Volume 3 Part 4 Chapter1, usually stored in RAM) and by the Configuration Flags (see Volume 3 Part4 Chapter1 usually stored in EEPROM). In this test suite these flags are made accessible by group objects. Alternatively (e.g. in case the BDUT does not support a loadable application), the communication and configuration flags may be accessible directly via MemoryRead and MemoryWrite-services (for details, see PICS supplied by the applicant). In case the above mentioned flags are not accessible at all, only those parts of the underneath tests which are applicable to the BDUT shall be carried out, i.e. only its reaction on the bus to value read/write/response commands.

 The configuration flags include the following information about a group object:

 1. “read response update”: If enabled, the GO value is updated on arrival of a Value_Response after a Value_Read was sent (“communication” and “transmit” shall be enabled).

 2. “transmit”: If enabled, the GO is able to send a Value_Read or a Value_Write message (“communication” shall also be enabled).

 3. “write”: If enabled, the GO is able to receive a Value_Write message and update its value accordingly (“communication” shall also be enabled).

 4. “read”: If enabled, the GO value can be read by a Value_Read message. In order to ensure the generation of a Value_Response, “communication” shall also be enabled.

 5. “communication”: If enabled, the GO is able to send and receive messages.

 6. “Transmission priority”[2]: two bits defining the priority of the Value Read or Write frame sent by the group object.

 The order of the configuration flags is specified in Volume 3 for the various system implementations.

 The communication flags contain the following information:

 1. update: The GO value has been updated (i.e. a Value_Write or a Value_Response has successfully been received).

 2. data_request: The GO will send/has sent a Value_Read message and (in the latter case) is waiting for the Value_Response.

 3. transmission status: can be idle/OK or idle/error or transmitting or transmit-request. Reflects the status of a Value_Read or Value_Write message sent by the GO.

 The order of the communication flags is implementation dependant (see PICS supplied by the applicant[3]).

 1.4.1 Tests with accessible configuration and communication flags In this test suite the configuration and communication flags are made accessible by group objects. Alternatively (e.g. in case the BDUT does not support a loadable application), the communication and

2 It is reminded that group communication shall never be sent with system priority (see volume 3 Part 7 Chapter
1). In closed devices, it is therefore allowed not to support the setting of the system priority. Consequently,
the relevant tests must not be carried out.
3 In case of a new system implementation on a BCU, the order and the format of the communication flags shall
be identical to the one defined in the profile. In case of a new system implementation on a device, the order
and the format of the communication flags may be identical to the selected profile. In the case the order and
the format does not comply to the selected profile, it may then be possible that only specific application
programs are loadable in the above mentioned device. In the latter case, it is not necessary to check the
correct settings of the communication flags.


-----

###### configuration flags may be accessible directly via MemoryRead and MemoryWrite-services (for details, see PICS supplied by the applicant).

 The tests shall be performed for at least two of the supported AIL formats (see PICS supplied by applicant), the smallest supported AIL format and the maximum supported AIL format. In the underneath tests, merely the UINT1 format is tested as an example. This format is accessible by GO0, whereas the three additional group objects are implemented as auxiliary objects to access the configuration and communication flags. 

 For the underneath tests, the following sample application program with the following group objects is loaded into the BDUT. 

 GO0: object type = 1 bit (UINT1), connected to group address 1000h – this group object is intended to test the supported AIL format(s) and the correct reaction to value read/write/response. 

 GO1: object type = (4 bit, UINT4), connected to group address 1001h – this group object makes the communication flags of GO0 accessible via the bus.

 GO2: object type = (8 bit, UINT8), connected to group address 1002h – this group object makes the configuration flags of GO0 accessible via the bus.

 GO3: object type = (8 bit, UINT8), connected to group address 1003h – this group object makes the value of GO0 accessible via the bus, thereby avoiding the modification of the configuration and communication flags of GO0.

 The following tests (intended to test BCU2 technology) may have to be adapted according to the to be tested system implementation as regards the order of the communication and configuration flags. 

 1.4.1.1 BDUT sends A_GroupValue_Read Preparation: reset object data and flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1003 E2 00 80 01 :clear data to other value than default value

 Generate read request with different priorities

 Low priority

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read with low priority and Comm. flags are set accordingly_

###### OUT  BC 1101 1000 E1 00 00 : BDUT sends Value Read request

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 44 :Comm.-flags = idle/OK, read

 Normal priority

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1002 E2 00 80 DD :set priority to normal

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read with normal priority_


-----

###### OUT  B4 1101 1000 E1 00 00 : BDUT sends Value Read request

 Urgent priority

 IN   BC AFFE 1002 E2 00 80 DE :set priority to urgent

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read with urgent priority_

###### OUT  B8 1101 1000 E1 00 00 : BDUT sends Value Read request

 System priority

 IN   BC AFFE 1002 E2 00 80 DC :set priority to system

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read with system priority_

###### OUT  B0 1101 1000 E1 00 00 : BDUT sends Value Read request

 Check function of Configuration flags

 Disable “communication”

 IN   BC AFFE 1002 E2 00 80 DB :disable communication in configuration flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1001 E1 00 87 :set read request in communication flags

_Acceptance: BDUT does not send an A_GroupValue_Read and Comm. flags are set accordingly._

###### IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 45 :Comm.-flags = BCU 2 : idle/error, read - BCU 1 : status of flags as set 

 Disable “read”

 IN   BC AFFE 1002 E2 00 80 D7 :disable read in configuration flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read and Comm. flags are set accordingly._

###### OUT  BC 1101 1000 E1 00 00 : BDUT sends Value Read

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 44 :Comm.-flags = idle/OK, read

 Disable “write” 

 IN   BC AFFE 1002 E2 00 80 CF :disable write enable in configuration flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1001 E1 00 87 :set read request in communication flags

_Acceptance: BDUT sends A_GroupValue_Read and Comm. flags are set accordingly._

###### OUT  BC 1101 1000 E1 00 00 : BDUT sends Value Read


-----

###### IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 44 :Comm.-flags = idle/OK, read

 Disable “transmission”

 IN   BC AFFE 1002 E2 00 80 9F :disable transmission in configuration flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1001 E1 00 87 :set read request in communication flags

_Acceptance: BDUT does not send an A_GroupValue_Read and Comm. flags are set accordingly._

###### IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 45 : Comm.-flags = BCU 2 : idle/error, read - BCU 1 : status of flags as set 

 Disable “read response update”[4]

 IN   BC AFFE 1002 E2 00 80 5F :disable read response update in configuration flags

 IN   BC AFFE 1001 E1 00 87 :set read request

_Acceptance: BDUT sends A_GroupValue_Read and Comm. flags are set accordingly._

###### OUT  BC 1101 1000 E1 00 00 : BDUT sends Value Read

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 44 :Comm.-flags = idle/OK, read

 1.4.1.2 BDUT receives A_GroupValue_Read Preparation: reset object data and flags.

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1003 E2 00 80 01 :set object to other data than default

 BDUT receives read requests with different priorities

 Low priority

 IN   BC AFFE 1000 E1 00 00 :read object value

_Acceptance: BDUT sends A_GroupValue_Response with correct data._

###### OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse according to priority set in Value Read (optionally with priority set in object)

 Normal priority

 IN   B4 AFFE 1000 E1 00 00 :read object value

 OUT  B4 1101 1000 E1 00 41 :==> generated valueResponse according to priority set in Value Read (optionally with priority set in object)

4 The deactivation of the read response update flag does not have any repercussions in the BCU1 model. This
applies to all the following tests where the read response update flag is disabled.


-----

###### Urgent priority

 IN   B8 AFFE 1000 E1 00 00 :read object value

 OUT  B8 1101 1000 E1 00 41 :==> generated valueResponse according to priority set in Value Read (optionally with priority set in object)

 System priority

 IN   B0 AFFE 1000 E1 00 00 :read object value

 OUT  B0 1101 1000 E1 00 41 :==> generated valueResponse according to priority set in Value Read (optionally with priority set in object)

 BDUT receives read requests with different routing counters

_Acceptance: generate response with correct routing counter setting_

###### IN   BC AFFE 1000 E1 00 00 :read object value

 OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse according to set routing counter

 IN   BC AFFE 1000 81 00 00 :read object value

 OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse according to set routing counter

 IN   BC AFFE 1000 F1 00 00 :read object value

 OUT  BC 1101 1000 F1 00 41 :==> generated valueResponse with routing counter 7 (identical to routing counter in ValueRead) or optionally with 6

 Check function of Configuration flags

 Disable “communication”

_Acceptance: no response generated_

###### IN   BC AFFE 1002 E2 00 80 DB :disable communication in configuration flags

 IN   BC AFFE 1000 E1 00 00 :read object value

 Disable “read”

_Acceptance: no response generated_

###### IN   BC AFFE 1002 E2 00 80 D7 :disable read in configuration flags

 IN   BC AFFE 1000 E1 00 00 :read object value

 Disable “write”

_Acceptance: response generated_

###### IN   BC AFFE 1002 E2 00 80 CF :disable write in configuration flags

 IN   BC AFFE 1000 E1 00 00 :read object value

 OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse

 Disable “transmission”

_Acceptance: response generated_

###### IN   BC AFFE 1002 E2 00 80 9F :disable transmission in configuration flags

 IN   BC AFFE 1000 E1 00 00 :read object value


-----

###### OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse

 Disable “read response update”

_Acceptance: response generated_

###### IN   BC AFFE 1002 E2 00 80 5F :disable read response update in configuration flags

 IN   BC AFFE 1000 E1 00 00 :read object value

 OUT  BC 1101 1000 E1 00 41 :==> generated valueResponse

 1.4.1.3 BDUT sends A_GroupValue_Write
_Preparation: reset object data and flags_

###### IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1003 E2 00 80 01 :set object to value other than default

 Stimulate BDUT to send A_GroupValue_Write with different priorities

 Low priority

 IN   BC AFFE 1001 E1 00 83 :set transmit request in communication flags

 Acceptance: BDUT sends message with correct data and Comm. flags are set accordingly.

 OUT  BC 1101 1000 E1 00 81 :--> generated valueWrite

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = idle/OK

 Normal priority

 IN   BC AFFE 1002 E2 00 80 DD :set priority to normal

 IN   BC AFFE 1001 E1 00 83 :set transmit request

 OUT  B4 1101 1000 E1 00 81 :--> generated valueWrite

 Urgent priority

 IN   BC AFFE 1002 E2 00 80 DE :set priority to urgent

 IN   BC AFFE 1001 E1 00 83 :set transmit request

 OUT  B8 1101 1000 E1 00 81 :--> generated valueWrite

 System priority

 IN   BC AFFE 1002 E2 00 80 DC :set priority to system

 IN   BC AFFE 1001 E1 00 83 :set transmit request

 OUT  B0 1101 1000 E1 00 81 :--> generated valueWrite

 Check function of Configuration flags

 Disable “communication”

_Acceptance: ==> no telegram generated, check Comm. flags_


-----

###### IN   BC AFFE 1002 E2 00 80 DB :disable communication in configuration flags

 IN   BC AFFE 1001 E1 00 83 :set transmit request in communication flags

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 41 :Comm.-flags = idle/error (BCU 2), transmit request (BCU1)

 IN   BC AFFE 1001 E1 00 80 :reset Comm. flags

 Disable “read”

_Acceptance: ==> generate telegram, check Comm. flags_

###### IN   BC AFFE 1002 E2 00 80 D7 :disable read in configuration flags

 IN   BC AFFE 1001 E1 00 83 :set transmit request in communication flags

 OUT  BC 1101 1000 E1 00 81 :--> generated valueWrite

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = idle/OK (BCU2), according to value set (BCU1)

 Disable “write”

_Acceptance: ==> generate telegram, check Comm. flags_

###### IN   BC AFFE 1002 E2 00 80 CF :disable write in configuration flags

 IN   BC AFFE 1001 E1 00 83 :set transmit request in communication flags

 OUT  BC 1101 1000 E1 00 81 :--> generated valueWrite

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = idle/OK

 Disable “transmission”

_Acceptance: ==> no telegram generated, check Comm. flags_

###### IN   BC AFFE 1002 E2 00 80 9F :disable transmission in configuration flags

 IN   BC AFFE 1001 E1 00 83 :set transmit request in communication flags

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 41 :Comm.-flags = idle/error (BCU 2), transmit request (BCU1)

 IN   BC AFFE 1001 E1 00 80 :reset Comm. flags

 Disable “read response update”

_Acceptance: ==> generate telegram, check Comm. flags_

###### IN   BC AFFE 1002 E2 00 80 5F :disable read response update

 IN   BC AFFE 1001 E1 00 83 :set transmit request

 OUT  BC 1101 1000 E1 00 81 :--> generated valueWrite

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = idle/OK (BCU2), according to value set (BCU1)


-----

###### 1.4.1.4 BDUT receives A_GroupValue_Write
_Preparation: reset object data and flags_

###### IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1003 E2 00 80 01 :set object to value other than default

 BDUT receives telegram

 IN   BC AFFE 1000 E1 00 80 :==> Value Write sent by EITT to BDUT

_Acceptance: Comm. flags are set accordingly_

###### IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Check function of Configuration flags

 Disable “communication”

 Acceptance ==> Update flag not set.

 IN   BC AFFE 1002 E2 00 80 DB :disable comm in configuration flags

 IN   BC AFFE 1000 E1 00 81 :==> Value Write sent by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = update flag not set

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “read”

 Acceptance ==> Update flag set.

 IN   BC AFFE 1002 E2 00 80 D7 :disable read in configuration flags

 IN   BC AFFE 1000 E1 00 81 :==> Value Write sent by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 01 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “write”

 Acceptance ==> Update flag not set.


-----

###### IN   BC AFFE 1002 E2 00 80 CF :disable write in configuration flags

 IN   BC AFFE 1000 E1 00 80 :==> Value Write sent by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = update flag not set

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 01 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “transmission”

 Acceptance ==> Update flag set.

 IN   BC AFFE 1002 E2 00 80 9F :disable transmission in configuration flags

 IN   BC AFFE 1000 E1 00 80 :==> Value Write from EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “read response update”

 Acceptance ==> Update flag set.

 IN   BC AFFE 1002 E2 00 80 5F :disable read response update

 IN   BC AFFE 1000 E1 00 81 :==> Value Write sent by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 01 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. Flags

 BDUT receives invalid data length (optional)

 Purpose of the test is to check whether the group objects implemented in BDUT reject a value write/response addressed to them, of which the indicated info length does not match their own supported field types. E.g. group object with value field type 3 bytes receives on its attributed group address a value write with info length 5. This does not apply to frames with value field type less than 7 bits, as these all have the same info length and can therefore not be distinguished by the addressed group object.

 For this particular test, GO0 and GO3 shall have the value field type of BYTE3 instead of UINT1: 

 Preparation

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E4 00 80 00 00 00 :clear object data

 IN   BC AFFE 1003 E4 00 80 CC CC CC :set object to value other than default value


-----

###### Test

 IN   BC AFFE 1000 E5 00 80 FF FF FF FF :set object to value larger than size of group object

 Acceptance : the object value is not updated

 IN   BC AFFE 1003 E1 00 00 :send Value Read to group object

 OUT   BC 1101 1003 E4 00 40 CC CC CC :value of group object not updated

 IN   BC AFFE 1000 E3 00 80 FF FF :set object to value smaller than size of group object

 Acceptance : the object value is not updated

 IN   BC AFFE 1003 E1 00 00 :send Value Read to group object

 OUT   BC 1101 1003 E4 00 40 CC CC CC :value of group object not updated

 The tests shall be performed for all supported value field types.

 1.4.1.5 BDUT receives A_GroupValue_Response

 Preparation: reset object data and flags

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E2 00 80 00 :clear data

 IN   BC AFFE 1003 E2 00 80 01 :set object to value other than default

 Disable “communication”

 Acceptance ==> Update flag not set.

 IN   BC AFFE 1002 E2 00 80 DB :disable comm in configuration flags

 IN   BC AFFE 1000 E1 00 40 :==> ValueResponse by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = update flag not set

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 01 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “read”

 Acceptance ==> Update flag set.

 IN   BC AFFE 1002 E2 00 80 D7 :disable read in configuration flags

 IN   BC AFFE 1000 E1 00 40 :==> ValueResponse by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “write”


-----

###### Acceptance ==> Update flag not set.

 IN   BC AFFE 1002 E2 00 80 CF :disable write in configuration flags

 IN   BC AFFE 1000 E1 00 41 :==> ValueResponse by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40 :Comm.-flags = update flag not set

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “transmission”

 Acceptance ==> Update flag set.

 IN   BC AFFE 1002 E2 00 80 9F :disable transmission in configuration flags

 IN   BC AFFE 1000 E1 00 41 :==> ValueResponse by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 48 :Comm.-flags = update flag, BIM M112: Update flag = bit 4

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 OUT   BC 1101 1003 E2 00 40 01 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. flags

 Disable “read response update” (if possible)

 Acceptance ==> Update flag not set

 IN   BC AFFE 1002 E2 00 80 5F :disable read response update

 IN   BC AFFE 1000 E1 00 40 :==> ValueResponse by EITT to BDUT

 IN   BC AFFE 1001 E1 00 00 :read communication-flags

 OUT  BC 1101 1001 E1 00 40: Update flag not set (BCU2), update flag set (BCU1)

 IN   BC AFFE 1003 E1 00 00 :Value read of object value

 The group object value remains unchanged for devices supporting deactivation of the update flag and vice versa. The underneath frame shows the reaction in the case where the device does not support deactivation of the update flag.

 OUT   BC 1101 1003 E2 00 40 00 :Value Response of BDUT

 IN   BC AFFE 1001 E1 00 80 :clear Comm. Flags

 1.4.1.6 Checking of Read on Init Flag The purpose of this test is to check whether the BDUT – if supported (check PICS and PIXIT for more details) - correctly sends out a Group Value read request via group objects for which the read on init flag can be set.

 Preparation

 Assuming the BDUT has five group objects (GO 0 to GO4), deactivate the read on init flag of the first 3 (with different settings of the other available flags) and activate the read on init of the last two. Attribute the group addresses 1001h to 1005h to Group Object 0 to 4. Restart the BDUT and check the reaction of the BDUT.


-----

###### Expected Result

 After sending a Restart, the BDUT sends a Group Value Read request on the group addresses attributed to the group objects for which the read on init flag was set. For the other group objects, it does not generate a Group Value Read request. 

 IN BC AFFE 1101 61 03 80 : Restart connectionless () or

 IN BC AFFE 1101 60 80: Transport Layer Connect

 IN BC AFFE 1101 61 43 80 : Restart connection-oriented ()

 OUT   BC 1101 1004 E1 00 00 : read value via attributed group address

 OUT   BC 1101 1005 E1 00 00 : read value via attributed group address

 (only in case of connection oriented restart)

 OUT BC 1101 AFFE 60 81: Transport Layer Disconnect after time out

 1.4.1.7 BDUT receives invalid APCI The purpose of this test is to check whether unsupported APCI’s and APCI’s, which are invalid for group communication, are rejected by the BDUT. The tests ensure that the BDUT does not generate a reaction on the bus and that invalid or unsupported APCI do not update the corresponding group object. Any other internal reactions to invalid or unsupported APCI’s are however not tested and reside under manufacturer’s responsibility.

 For this particular test, GO0 and GO3 shall have the value field type of BYTE3 instead of UINT1: 

 Preparation

 IN   BC AFFE 1002 E2 00 80 DF :set Configuration flags

 IN   BC AFFE 1003 E4 00 80 00 00 00 :clear object data

 IN   BC AFFE 1003 E4 00 80 CC CC CC :set object to value other than default value

 Test 1 (optional) – Checking acceptance of Value Read with values higher than 00

 IN   BC AFFE 1000 E1 00 3F :send Value Read with higher values than 00

 Acceptance : no value response may be sent

 Test 2 – Checking acceptance of frames with unsupported APCI’s or APCI’s not valid for group communication

 IN   BC AFFE 1000 E4 0x xx FF FF FF : send frame with invalid APCI (where ‘x xx’ is APCI other than Value Read, Value Write or Value Response)

 Acceptance : no value response may be sent and value of object is not updated

 IN   BC AFFE 1003 E1 00 00 :send Value Read to group object

 OUT   BC 1101 1003 E4 00 40 CC CC CC :value of group object not updated

 1.4.2 Black Box tests If no application program can be loaded into the BDUT, those parts of the above specified group object tests shall be performed which are possible with the implemented group objects of the BDUT. Usually this excludes access to the Comm. and Configuration flags.


-----

##### 1.5 System Interface Objects

###### 1.5.1 Device Object To be completed

 1.5.2 Address Table Object To be completed

 1.5.3 Association Table Object To be completed

 1.5.4 Application Program Object To be completed

 1.5.5 PEI Program Object To be completed

##### 1.6 Bus/PEI Test
###### See Volume 8/7


-----

#### 2 Network Management Server Tests

##### 2.1 Introduction
###### This chapter of the Handbook merely contains the Management Server[5] test. The client tests are laid down in clause 3 of this document.

 KNX has opted not to lay down Abstract Test Suites for Management. This document contains for all currently agreed Management Services an example of an Executable Test Suites (ETS) for BAU’s[6]. Based on these Executable Test Suites, if needed other ETS can be derived.

 Depending on the entries in the PICS and PIXIT for management, it could be necessary to carry out all test steps or only part of them:

 Example:

 • Some test steps are not run when the BDUT does not have a protected memory (for instance when testing A_Memory_Write-Service or A_Memory_Read-Service).

 • Some tests are not run when the BDUT exclusively uses Extended Frame Format (EFF) and not Standard Frame Format (SFF), e.g. as is the case for Radio Frequency devices. 

 • Test steps relating to verify mode[7] (automatic generation by the BDUT of a response to a write command) must not be run when one cannot switch the BDUT to verify mode.

 • Some device profiles do not allow the writing of memory without proper authentication and manipulation of the use of load controls (respectively allocation of memory). However, the BCU2 does not require the use of load controls after a master reset (the BCU2 then runs in BCU1 compatibility mode).

 • And so forth...

 Depending on how management services are implemented (e.g. where the accessible memory or the protected memory in the BDUT is located - for which the submitted PIXIT have to be assessed), other telegrams than the ones listed as examples in this document might have to be created by means of EITT[8] to stimulate the BDUT. Consequently, the BDUT will also generate other telegrams than those listed underneath.

 Some of the underneath test steps rely on settings that are made in preceding test steps. Hence, it may not always be possible to run individual test steps without prior preparation of the BDUT. 

 However, those parts that may be device dependent are characterized in this document by the fact that they are printed bold and with larger characters than the other telegram sections.

 The Executable Test Suites of this document in EITT format is offered as an EITT test template available in EITT (from EITT 4.3 onwards). 

5 A Management “Server” is the functionality which allows a device (or rather its resources [addresses, links,
parameters, application, …]) to be managed remotely across the network by some appropriate “client” (e.g.
PC with ETS, controller, ….).
6 The telegrams integrated in these test specifications are in TP1 LL format. For other media, they would have to
be changed accordingly.
7 Verify mode is normally deactivated after each received disconnect
8 For a description of EITT, see manual delivered along with the software package


-----

##### 2.2 Description of the Test Set-up

###### 2.2.1 Hardware The test set-up is depicted in the underneath figure and consists of:

 • one Bus Device Under Test (BDUT)

 • the KNX Interworking Test Tool, hereafter called EITT

 • a Load Generator (available from the KNX association)

 • when testing TP devices, a power supply module and RS232 (for TP1 also a choke) will have to be added to the underneath test set-up

 • when testing powerline devices an additional artificial network 50 Ω / 50 µH + 5 Ω according CISPR 16 (Second Edition, Clause 8.2.1)[9] shall be installed next to BDUT, as well as an RS232 and a Load Generator

**PC1**

**3** KNX

EITT/ETS **RS 232 Interface**

For TP devices : POWER SUPPLY

**4**

For TP1 additional choke

**Load Generator**

**BUS DEVICE UNDER TEST (BDUT)**

###### Figure 2: Test Set-up when testing KNX Twisted Pair Devices

9 Such a mains artificial network shall only be installed next to the BDUT when the relevant Power Line
medium does not provide other means of separation of the test circuit, e.g. standardized PL-filters or mains
separation transformer.


-----

**PC1**

**3** KNX

EITT/ETS **RS 232 Interface**

Artificial network

**4**

50 OHM/50 µH + 5 OHM

**Load Generator**

**BUS DEVICE UNDER TEST (BDUT)**

###### Figure 3: Test Set-up when testing KNX Power Line Devices

 2.2.2 Software used during Tests

 2.2.2.1 Used KNX Software During testing the only software tool used is the KNX Interworking Test Tool (EITT).

 2.2.2.2 Used Application Software During some of the management tests application specific software has to be downloaded into the BDUT (e.g. property related management services - see test preparations for appropriate information).

 2.2.2.3 Implementation of used Software in the Test Set-up By means of EITT (in send mode) the BDUT is stimulated. By means of EITT (in receive mode) the reaction of the BDUT can be observed. In the latter mode it is moreover possible to check the time delay between the stimulus and the reply telegram, if the latter is actually transmitted.

 Parameter to be set in the BDUT

 Before carrying out the various tests or test steps, several values have to be set in the BDUT by means of EITT. These relate amongst others to:

 • the individual address of the BDUT (in the executable test suites in this document individual address 1.0.1 is used by default).

 • the RS232 shall have the following individual address: 10.15.254 in case of twisted pair and 07.15.254 when testing power line devices.

 • when testing powerline devices, the Domain Address shall be loaded into the BDUT and RS232.

 • specific data, which has to be downloaded into a fixed memory area of the BDUT (see also PIXIT proforma as supplied by the manufacturer).


-----

###### Except in case of connectionless management services, a point to point connection shall always be established between the BDUT and EITT. 

 In the case where the service may be implemented connection-oriented as well as connectionless, the underneath test procedures cover the connection-oriented test case only. The connectionless case can be derived by simply omitting the frames for TL-(Dis)Connection and TL_(N)Ack from the procedure.

##### 2.3 Testing of A_IndividualAddress_Read-Service - Server Test

###### Prior to starting the test, set individual address of the BDUT to a fix value (e.g. 1001H)

 For step 1 to 2 : Switch off programming LED on BDUT

 2.3.1 Try to read Address with LED off
IN BC 10.15.254 00/0000 E1 01 00 :A_IndividualAddress_Read()

###### Acceptance: no response may be sent

 2.3.2 Send Response to BDUT with LED off

IN BC 10.15.254 00/0000 E1 01 40 :A_IndividualAddress_Response(Addr=AFFE)

###### Acceptance: no response may be sent

 For step 3 to 4 : Switch on programming LED on BDUT

 2.3.3 Read Address with LED on
IN BC 10.15.254 00/0000 E1 01 00 :A_IndividualAddress_Read()

OUT BC 01.00.001 00/0000 E1 01 40 :A_IndividualAddress_Response(Addr=1001)

###### Acceptance: the BDUT sends an A_IndividualAddress_Response-PDU

 2.3.4 Send Response to BDUT with LED on
IN BC 10.15.254 00/0000 E1 01 40 :A_IndividualAddress_Response(Addr=AFFE)

###### Acceptance: no response may be sent

##### 2.4 Testing of A_IndividualAddress_Write-Service - Server Test

###### Prior to starting the test, set individual address of the BDUT to a fix value (e.g. 1001H)

 For test step 1 : Switch off programming LED on BDUT

 2.4.1 Try to set Address with LED off

IN BC 10.15.254 00/0000 E3 00 C0 12 03 :A_IndividualAddress_Write(Addr=1203)

###### Acceptance: No reaction of the BDUT - BDUT keeps individual address as downloaded prior to starting the test. This can be checked by (switch on programming LED first !!):

IN BC 10.15.254 00/0000 E1 01 00 :A_IndividualAddress_Read()

OUT BC 01.00.001 00/0000 E1 01 40 :A_IndividualAddress_Response(Addr=1001)


-----

###### For test step 2 : Switch on programming LED on BDUT

 2.4.2 Set Address with LED on

IN BC 10.15.254 00/0000 E3 00 C0 12 03 :A_IndividualAddress_Write(Addr=1203)

###### Acceptance: The BDUT now has the individual address 1203H. This can be checked by:

IN BC 10.15.254 00/0000 E1 01 00 :A_IndividualAddress_Read()

OUT BC 01.02.003 00/0000 E1 01 40 :A_IndividualAddress_Response(Addr=1203)

##### 2.5 Testing of A_DeviceDescriptor_Read-Service - Server Test
###### Prior to starting the test, set the individual address of the BDUT to a fix value (e.g. 1001H).

 2.5.1 Read Device Descriptor, connection-oriented

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 61 43 00 :A_DeviceDescriptor_Read()
OUT B0 01.00.001 AFFE 60 C2 :T-Ack(Seq=0)
###### Acceptance : The BDUT sends a telegram with an A_DeviceDescriptor_Response-PDU, containing the type and version or answers with the lowest Device Descriptor it supports

OUT BC 01.00.001 AFFE 63 43 40 ?? ?? :A_DeviceDescriptor_Response(Type=??,
Version=??)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.5.2 Read Device Descriptor, connectionless (when supported)

IN BC 10.15.254 01.00.001 61 03 00 :A_DeviceDescriptor_Read()
###### Acceptance : The BDUT sends a telegram with an A_DeviceDescriptor_Response-PDU, containing the type and version or the lowest Device Descriptor it supports

OUT BC 01.00.001 AFFE 63 03 40 ?? ?? :A_DeviceDescriptor_Response(Type=??, Version=??)

###### 2.5.3 Read DD Type2, connection-oriented

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 61 43 02 :A_DeviceDescriptor_Read()
OUT B0 01.00.001 AFFE 60 C2 :T-Ack(Seq=0)
###### Acceptance : when The BDUT supports DD2, it shall send a telegram with an A_DeviceDescriptor_Response-PDU, containing the correct DD2 information. When the BDUT does not support DD2, it shall answer with the error code

OUT BC 01.00.001 10.15.254 6F 43 42 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:A_DeviceDescriptor_Response(DD Type 2 – see supplement 15 Easy common parts – paragraph
1.3.3.2.2)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.5.4 Read DD Type2, connectionless (if supported)

IN BC 10.15.254 01.00.001 61 03 02 :A_DeviceDescriptor_Read()
###### Acceptance : when The BDUT supports DD2, it shall send a telegram with an A_DeviceDescriptor_Response-PDU, containing the correct DD2 information. When the BDUT does not support DD2, it shall answer with the error code


-----

OUT BC 01.00.001 10.15.254 6F 03 42 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:A_DeviceDescriptor_Response(DD Type 2 – see supplement 15 Easy common parts – paragraph
1.3.3.2.2)

###### 2.5.5 Read illegal DD Types, connection-oriented

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 61 43 0x :A_DeviceDescriptor_Read()
OUT B0 01.00.001 AFFE 60 C2 :T-Ack(Seq=0)
###### Acceptance : when the BDUT does not support the read DD, it shall answer with the error code

OUT BC 01.00.001 10.15.254 61 43 7F : A_DeviceDescriptor_Response(negative response)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.5.6 Read illegal DD Types, connectionless (if supported)

IN BC 10.15.254 01.00.001 61 03 0x :A_DeviceDescriptor_Read()
###### Acceptance : The BDUT sends a telegram with a negative A_DeviceDescriptor_Response-PDU, 

OUT BC 01.00.001 10.15.254 61 03 7F :A_DeviceDescriptor_Response(negative response)

##### 2.6 Testing of A_Memory_Read-Service - Server Test

###### 2.6.1 Preparation @[tLoad memory area with default value (by means of A_Memory_Write-service) @[tAssumed Memory Model 0200h to 02FFh accessible, else protected
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 6F 42 8C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:MemoryWrite(Count=0C, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 6B 46 88 02 0C 0D 0E 0F 10 11 12 13 14 :MemoryWrite(Count=08,
Addr=020C, Data=0D 0E 0F 10 11 12 13 14 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.2 Accessible Memory Area
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN IN BC 10.15.254 01.01.001 63 42 0A 02 00 :MemoryRead(Count=0A, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with the required data.
OUT BC 01.01.001 10.15.254 6D 42 4A 02 00 01 02 03 04 05 06 07 08 09 0A :MemoryResponse(Count=0A,
Addr=0200, Data=01 02 03 04 05 06 07 08 09
0A )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.3 Protected Memory Area
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 63 42 0A 03 00 :MemoryRead(Count=0A, Addr=0300)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with length byte set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 03 00 :MemoryResponse(Count=00, Addr=0300, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

###### 2.6.4 Partly protected Memory Area
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN IN BC 10.15.254 01.01.001 63 42 02 02 FF :MemoryRead(Count=02, Addr=02FF)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with length byte set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 02 FF :MemoryResponse(Count=00, Addr=02FF, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.5 Illegal Length - accessible Memory Area – for devices not supporting EFF

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 63 42 0D 02 00 :MemoryRead(Count=0D, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with length byte set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.6 Accessible Memory Area – for devices supporting EFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 63 42 0D 02 00 :MemoryRead(Count=0D, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with the required data in EFF.
OUT 3C 60 01.01.001 10.15.254 17 42 4D 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D
:MemoryResponse(Count=0D, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.7 Accessible Memory Area - not supporting MAX_APDU_LENGTH ≥ 66
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 63 42 3F 02 00 :MemoryRead(Count=3F, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
OUT 3C 60 01.01.001 10.15.254 03 42 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.8 Accessible Memory Area - EFF - response fits in SFF

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 03 42 0C 02 00 :MemoryRead(Count=0C, Addr=0200)
OUT OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with the required data in SFF.
OUT BC 01.01.001 10.15.254 6F 42 4C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:MemoryResponse(Count=0C, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.9 Accessible Memory Area - EFF - response fits in EFF

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 03 42 0D 02 00 :MemoryRead(Count=0D, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** the BDUT sends an A_Memory_Response-PDU with the required data in EFF.


-----

OUT 3C 60 01.01.001 10.15.254 17 42 4D 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D
:MemoryResponse(Count=0D, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.6.10 Accessible Memory Area - supporting MAX_APDU_LENGTH ≥ 66
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 63 42 3F 02 00 :MemoryRead(Count=3F, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the stored data.
OUT 3C 60 01.01.001 10.15.254 42 42 7F 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryResponse(Count=3F,
Addr=0200, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17
18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25
26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33
34 35 36 37 38 39 3A 3B 3C 3D 3E 3F )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

##### 2.7 Testing of A_Memory_Write-Service - Server Test

###### 2.7.1 Accessible Memory - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 6D 42 8A 02 00 00 11 22 33 44 55 66 77 88 99 :MemoryWrite(Count=0A,
Addr=0200, Data=00 11 22 33 44 55 66 77 88
99 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.001 63 46 0A 02 00 :MemoryRead(Count=0A, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 6D 42 4A 02 00 00 11 22 33 44 55 66 77 88 99 :MemoryResponse(Count=0A,
Addr=0200, Data=00 11 22 33 44 55 66 77 88
99 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.2 Partly protected Memory - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 65 42 82 02 FF 12 34 :MemoryWrite(Count=02, Addr=02FF, Data=12 34 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.
IN BC 10.15.254 01.01.001 63 46 01 02 FF :MemoryRead(Count=01, Addr=02FF)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 64 42 41 02 FF FF :MemoryResponse(Count=01, Addr=02FF, Data=FF )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.3 Length inconsistency - accessible Memory - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

@[tNumber is greater than data
IN BC 10.15.254 01.01.001 6F 42 8D 02 00 FF FF FF FF FF FF FF FF FF FF FF FF
:MemoryWrite(Count=0D, Addr=0200,
Data=FF FF FF FF FF FF FF FF FF FF FF FF
)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is less than than data
IN BC 10.15.254 01.01.001 6F 46 8B 02 00 FF FF FF FF FF FF FF FF FF FF FF FF
:MemoryWrite(Count=0B, Addr=0200,
Data=FF FF FF FF FF FF FF FF FF FF FF FF
)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.
IN BC 10.15.254 01.01.001 63 4A 0A 02 00 :MemoryRead(Count=0A, Addr=0200)
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.001 10.15.254 6D 42 4A 02 00 00 11 22 33 44 55 66 77 88 99 :MemoryResponse(Count=0A,
Addr=0200, Data=00 11 22 33 44 55 66 77 88
99 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.4 Accessible Memory – Verify on
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 6D 42 8A 02 00 99 88 77 66 55 44 33 22 11 00 :MemoryWrite(Count=0A,
Addr=0200, Data=99 88 77 66 55 44 33 22 11
00 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response-PDU with the data written.
OUT BC 01.01.001 10.15.254 6D 42 4A 02 00 99 88 77 66 55 44 33 22 11 00 :MemoryResponse(Count=0A,
Addr=0200, Data=99 88 77 66 55 44 33 22 11
00 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.5 Protected Memory – Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 6D 42 8A 03 00 00 11 22 33 44 55 66 77 88 99 :MemoryWrite(Count=0A,
Addr=0300, Data=00 11 22 33 44 55 66 77 88
99 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 03 00 :MemoryResponse(Count=00, Addr=0300, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.6 Partly protected Memory – Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 65 42 82 02 FF 12 34 :MemoryWrite(Count=02, Addr=02FF, Data=12 34 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 02 FF :MemoryResponse(Count=00, Addr=02FF, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.7 Length inconsistency - accessible Memory - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN BC 10.15.254 01.01.001 65 42 83 02 00 12 34 :MemoryWrite(Count=03, Addr=0200, Data=12 34 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
OUT BC 01.01.001 10.15.254 63 42 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
@[tNumber is less than data
IN BC 10.15.254 01.01.001 66 46 82 02 00 AA BB CC :MemoryWrite(Count=02, Addr=0200, Data=AA
BB CC )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data. The
memory has not been altered.
IN B0 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.8 Accessible Memory - EFF - Verify
IN IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 17 42 8D 02 00 01 02 03 04 05 06 07 08 09 10 11 12 13
:MemoryWrite(Count=0D, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 10 11 12 13)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with a Response in EFF containing the same data as written.


-----

OUT 3C 60 01.01.001 10.15.254 17 42 4D 02 00 01 02 03 04 05 06 07 08 09 10 11 12
13:MemoryResponse(Count=0D, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 10 11 12 13)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.9 Accessible Memory - EFF - respond SFF - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 07 42 84 02 00 AA BB CC DD :MemoryWrite(Count=04, Addr=0200,
Data=AA BB CC DD )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with a Response in SFF containing the same data as written.
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify

@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
66.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 42 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryWrite(Count=3F, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=02 00, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

###### 2.7.11 Length inconsistency - accessible Memory - EFF - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
OUT 3C 60 10.15.254 01.01.001 16 42 94 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
:MemoryWrite(Count=14, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN 3C 60 10.15.254 01.01.001 18 42 94 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 :MemoryWrite(Count=14, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_Memory_Response with the length set to 0 and no data.
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.12 Length inconsistency - accessible Memory - EFF - Verify
@[tThis test case is CONDITIONAL and is applicable if the MAX_APDU_LENGTH is equal or greater than
66.

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.001 41 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E :MemoryWrite(Count=3F, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data


-----

IN 3C 60 10.15.254 01.01.001 42 42 BE 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryWrite(Count=3E, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.001 10.15.254 63 46 40 02 00 :MemoryResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.13 Accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 17 42 8D 02 00 01 02 03 04 05 06 07 08 09 10 11 12 13
:MemoryWrite(Count=0D, Addr=02 00,
Data=01 02 03 04 05 06 07 08 09 10 11 12 13)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.001 63 46 14 02 00 :MemoryRead(Count=0D, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 17 42 4D 02 00 01 02 03 04 05 06 07 08 09 10 11 12 13
:MemoryResponse(Count=0D, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 10 11 12 13)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.14 Accessible Memory - EFF but fits SFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 07 42 84 0200 AA BB CC DD :MemoryWrite(Count=04, Addr=0200,
Data=AA BB CC DD )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.15 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
66.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

IN IN 3C 60 10.15.254 01.01.001 42 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D
2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F :MemoryWrite(Count=3F,
Addr=0200, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17
18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25
26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33
34 35 36 37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.16 Length inconsistency - accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.001 16 42 94 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
:MemoryWrite(Count=14, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN 3C 60 10.15.254 01.01.001 18 42 94 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 :MemoryWrite(Count=14, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.17 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
66.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.001 41 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E :MemoryWrite(Count=3F, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E )


-----

OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN IN 3C 60 10.15.254 01.01.001 42 42 BE 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D
2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F :MemoryWrite(Count=3E,
Addr=0200, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17
18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25
26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33
34 35 36 37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 44 02 00 AA BB CC DD :MemoryResponse(Count=04, Addr=0200,
Data=AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.7.18 Accessible Memory - EFF - data matches maximum service length - Verify

@MAX_APDU_LENGTH is equal or greater than 66.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 42 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryWrite(Count=3F, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tMemory_Response with the data written
OUT 3C 60 01.01.001 10.15.254 42 46 7F 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryResponse(Count=3F, Addr=02
00, Data=01 02 03 04 05 06 07 08 09 0A 0B
0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19
1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27
28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35
36 37 38 39 3A 3B 3C 3D 3E 3F )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

###### 2.7.19 Accessible Memory - EFF - matches maximum service length - no Verify

@[tMAX_APDU_LENGTH is equal or greater 66.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 42 42 BF 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryWrite(Count=3F, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C
0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A
1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28
29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36
37 38 39 3A 3B 3C 3D 3E 3F )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance: Reading memory from the device shows the data has been changed.**
IN BC 10.15.254 01.01.001 63 46 04 02 00 :MemoryRead(Count=04, Addr=0200)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 42 42 7F 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F
30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D
3E 3F :MemoryResponse(Count=3F,
Addr=0200, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17
18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25
26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33
34 35 36 37 38 39 3A 3B 3C 3D 3E 3F )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

##### 2.8 Testing of A_ADC_Read-Service - Server Test

Note: Channel numbers are coded on 3 bits.

###### 2.8.1 Correct Channel Number (Channel 1 and 1 count)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 62 41 81 01 :A_ADC_Read-PDU(Channel=1, Count=01)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: the BDUT sends an A_ADC_Response-PDU with the correct data

OUT BC 01.00.001 10.15.254 64 41 C1 01 ?? ?? :A_ADC_Response
(Channel=1, Count=01, ????)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.8.2 Correct Channel Number (Channel 4 and 1 count)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 62 44 81 01 :A_ADC_Read-PDU(Channel=4, Count=01)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: the BDUT sends an A_ADC_Response-PDU with the correct data

OUT BC 01.00.001 10.15.254 64 41 C4 01 ?? ?? :A_ADC_Response
(Channel=4, Count=01, ????)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.8.3 Unsupported Channel Number (e.g. Channel 7 and 1 count)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 62 41 87 01 :A_ADC_Read(Channel=07, Count=01)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: The BDUT sends an A_ADC_Response-PDU with the count set to zero.

OUT BC 01.00.001 10.15.254 64 41 C7 00 00 00 :A_ADC_Response
(Channel=07, Count=00, 0000)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

##### 2.9 Testing of A_Restart-Service - Server Test

###### 2.9.1 Send Basic Restart (connection oriented)

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
out
IN BC 10.15.254 01.00.001 61 43 80 :A_Restart()

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management (e.g. previously active programming mode deactivated).

 2.9.2 Send Basic Restart (connectionless)
IN BC 10.15.254 01.00.001 61 03 80 :A_Restart()

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management (e.g. previously active programming mode deactivated).

 2.9.3 Send Master Reset – confirmed Restart (connectionless[10])
IN BC 10.15.254 01.00.001 63 03 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00)

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: is a confirmed alternative to the unconfirmed basis restart. 

OUT BC 01.00.001 10.15.254 64 03 A1 00 ?? ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=?? ??)

###### 2.9.4 Send Master Reset – Factory Reset (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00)

Channel Number equalling 00 implies resources of all channels to be reset, different from 00h, the resources
from the indicated channel shall be reset

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: IA, Domain Address, IP address/address mask/multicast address/address assignement method/default gateway/individual addresses shall all be reset. 

OUT BC 01.00.001 10.15.254 64 03 A1 00 ?? ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

10 Repeat the tests connection-oriented, if supported.


-----

###### 2.9.5 Send Master Reset – ResetIA (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 03 00 :Restart(Response=00, Type=01, EraseCode=03,
ChannelNumber=00)

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: the IA shall be reset to the medium specific default IA

OUT BC 01.00.001 10.15.254 64 03 A1 00 ???? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

###### 2.9.6 Send Master Reset – ResetAP (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 04 00 :Restart(Response=00, Type=01, EraseCode=04,
ChannelNumber=00)

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: the Application Program Memory shall be reset to the default application

OUT BC 01.00.001 10.15.254 64 03 A1 00 ???? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

###### 2.9.7 Send Master Reset – ResetParam (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 05 00 :Restart(Response=00, Type=01, EraseCode=05,
ChannelNumber=00)

Channel Number equalling 00 implies parameters of all channels to be reset, different from 00h, the parameters
from the indicated channel shall be reset

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: Application Parameter Memory shall be reset to its default value

OUT BC 01.00.001 10.15.254 64 03 A1 00 ???? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

###### 2.9.8 Send Master Reset – ResetLinks (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 06 00 :Restart(Response=00, Type=01, EraseCode=06,
ChannelNumber=00)

Channel Number equalling 00 implies links of all channels to be reset, different from 00h, the links from the
indicated channel shall be reset

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: link information for group objects shall be reset to the default state

OUT BC 01.00.001 10.15.254 64 03 A1 00 ???? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

###### 2.9.9 Send Master Reset – Factory Reset without IA (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00)

###### Acceptance: Compare BDUT’s reaction to what the manufacturer has declared in the supplied PIXIT forms for Management: all resources shall be reset as in clause 2.9.4, except the IA

OUT BC 01.00.001 10.15.254 64 03 A1 00 ?? ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=?? ??)


-----

###### 2.9.10 Send Master Reset – Unsupported EraseCode (connectionless[10])
IN B0 10.15.254 01.00.001 63 03 81 22 00 :Restart(Response=00, Type=01, EraseCode=22,
ChannelNumber=00)

###### Acceptance: BDUT shall respond with error code unsupported erase code

OUT BC 01.00.001 10.15.254 64 03 A1 02 00 00 :Restart(Response=01, Type=01, ErrorCode=02,
ProcessTime=0000)

###### 2.9.11 Send Master Reset – Access denied (connectionless[10])
Make sure the BDUT is not at the proper authorization level to carry out the master reset

IN B0 10.15.254 01.00.001 63 03 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00)

###### Acceptance: BDUT shall respond with error code access denied

OUT BC 01.00.001 10.15.254 64 03 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000)

###### 2.9.12 Send Master Reset – Incorrect Channel number (connectionless[10])

Make sure the BDUT is not at the proper authorization level to carry out the master reset

IN B0 10.15.254 01.00.001 63 03 81 02 FF :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=FF)

###### Acceptance: BDUT shall respond with error code access denied

OUT BC 01.00.001 10.15.254 64 03 A1 03 00 00 :Restart(Response=01, Type=01, ErrorCode=03,
ProcessTime=0000)

##### 2.10 Testing of A_MemoryBit_Write-Service - Server Test[11]
###### Assumed Memory Model: 200H to 2FFH : accessible memory area: entire memory area filled with 0FH 300H to 3FFH : protected memory area

 2.10.1 Legal Length - accessible Memory - no Verify (5 bytes from 200H)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6E 43 D0 05 02 00 33 33 33 33 33 55 55 55 55 55
:A_MemoryBit_Write(Count=05, Addr=0200, Data= 33 33 33 33 33 55 55 55 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: After reading the concerned memory area, the BDUT sends a response showing that the memory has been manipulated.

IN BC 10.15.254 01.00.001 63 46 05 02 00 :A_Memory_Read(Count=05, Addr=0200)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 68 42 45 02 00 56 56 56 56 56
:A_Memory_Response(Count=05, Addr=0200, Data= 56 56 56 56 56)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

11 support of this service optional for BCU2/System 2 respectively CU


-----

###### 2.10.2 Legal Length - partly protected Memory - no Verify (2 bytes from 02FF)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 68 43 D0 02 02 FF 33 33 55 55
:A_MemoryBit_Write(Count=02, Addr=02FF, Data= 33 33 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: after reading the last byte of the accessible memory area, the BDUT sends a response showing that the memory has not been manipulated.

IN BC 10.15.254 01.00.001 63 46 01 02 FF :A_Memory_Read(Count=01, Addr=02FF)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.00.001 10.15.254 64 42 41 02 FF 0F :A_Memory_Response
(Count=01, Addr=02FF, Data= 0F)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.10.3 Illegal Length - accessible Memory - no Verify (6 bytes from 0210H)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6F 43 D0 06 02 **10** **33** **33** **33** **33** **33** **33** **55** **55** **55** **55** **55**
:A_MemoryBit_Write(Count=06, Addr=0210, Data= 33 33 33 33 33 33 55 55 55 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: after reading the concerned memory area, the BDUT sends a response showing that the memory has not been manipulated.

IN BC 10.15.254 01.00.001 63 46 06 02 10 :A_Memory_Read(Count=06, Addr=0210)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 69 42 46 02 10 0F 0F 0F 0F 0F 0F
:A_Memory_Response(Count=06, Addr=0110, Data= 0F 0F 0F 0F 0F 0F)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.10.4 Legal Length - accessible Memory – Verify (5 bytes from 0220H)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6E 43 D0 05 02 20 33 33 33 33 33 55 55 55 55 55
:A_MemoryBit_Write(Count=05, Addr=0220, Data= 33 33 33 33 33 55 55 55 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: the BDUT sends a response showing that the memory has been manipulated.

OUT BC 01.00.001 10.15.254 68 42 45 02 20 56 56 56 56 56
:A_Memory_Response(Count=05, Addr=0220, Data= 56 56 56 56 56)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.10.5 Legal Length - protected Memory – Verify (5 bytes from 0300H)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6E 43 D0 05 03 00 33 33 33 33 33 55 55 55 55 55
:A_MemoryBit_Write(Count=05, Addr=0300, Data= 33 33 33 33 33 55 55 55 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)


-----

###### Acceptance: the BDUT sends a response with the count set to zero and no data

OUT BC 01.00.001 10.15.254 63 42 40 0300 :A_Memory_Response
(Count=00, Addr=0300, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.10.6 Legal Length - partly protected Memory – Verify (2 bytes from 02FF)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 68 43 D0 02 02 FF 33 33 55 55
:A_MemoryBit_Write(Count=02, Addr=02FF, Data= 33 33 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: the BDUT sends a response with the count set to zero and no data

OUT BC 01.00.001 10.15.254 63 42 40 02 FF :A_Memory_Response
(Count=00, Addr=02FF, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.10.7 Illegal Length - accessible Memory – Verify (6 bytes from 0230H)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6F 43 D0 06 02 30 33 33 33 33 33 33 55 55 55 55 55 55
:A_MemoryBit_Write(Count=06, Addr=0230, Data= 33 33 33 33 33 33 55 55 55 55 55)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 63 42 40 02 30
:A_Memory_Response(Count=00, Addr=0230, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

##### 2.11 Testing of A_Authorize_Request-Service: Server Test

###### Keytable : level 0 : 00000000H

 level 1 : 12345678H - read access to block 200H to 300H

 level 2 : default key = FFFFFFFFH - read access to block 300H to 400H

 Level 3: default key = FFFFFFFFH – read access to block 500H to 600H

 key 87654321H not in key table - data in memory block for level 1 : FFH - data in memory block for level 2 : AAH

 Note: the support of the A_Authorize and A_Keywrite-Service does not imply that the device itself has access protected areas. When this is not the case, a device shall always allow – regardless of the attributed keys – access to the highest level (0), including when receiving an illegal key (‘illegal’ in this sense meaning another key than any of the keys entered in the key table).

 However, the above (incomplete) support of the A_Authorize and A_Setkey-services has the drawback that the protection of any devices with keys by the user of ETS does not have the awaited result. An appropriate warning shall be given in the product documentation to the user for each device with an incomplete support of the A_Authorize and A_Setkey–services.


-----

###### 2.11.1 Authorization with Legal Key
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 12 34 56 78 :A_Authorize_Request(12345678)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance a: Authorize Response for level 1 is returned.

OUT BC 01.00.001 10.15.254 62 43 D2 01 :A_Authorize_Response(01)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

###### Acceptance b: Memory read for level 1 block succeeds.

IN BC 10.15.254 01.00.001 63 46 01 02 00 :A_Memory_Read(Count=01, Addr=0200)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 64 46 41 02 00 FF :A_Memory_Response
(Count=01, Addr=0200, Data= FF)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.11.2 Authorization with Illegal Key
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 87 65 43 21 :A_Authorize_Request(87654321)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance a: no authorization is returned (e.g. 3)

OUT BC 01.00.001 10.15.254 62 43 D2 03 :A_Authorize_Response(03)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

###### Acceptance b: Memory read for level 1 block fails

IN BC 10.15.254 01.00.001 63 46 01 02 00 :A_Memory_Read(Count=01, Addr=0200)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 63 46 40 02 00 :A_Memory_Response
(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.11.3 Reaction to Authorize Response

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 62 43 D2 01 :A_Authorize_Response(01)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance : no reaction of the BDUT

IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.11.4 Authorization with default Key
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 FF FF FF FF :A_Authorize_Request(FFFFFFFF)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance a: authorization to level 2 is given (maximal level for default key)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)


-----

###### Acceptance b: Memory read for level 2 succeeds

IN BC 10.15.254 01.00.001 63 46 01 03 00 :A_Memory_Read(Count=01, Addr=0300)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.00.001 10.15.254 64 46 41 03 00 AA :A_Memory_Response
(Count=01, Addr=0300, Data= AA)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.11.5 Access to the device without Authorization
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

###### Acceptance: Memory read for level 2 succeeds (maxium level with default key), same reaction as clause 2.11.4

IN BC 10.15.254 01.00.001 63 42 01 03 00 :A_Memory_Read(Count=01, Addr=0300)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.00.001 10.15.254 62 42 41 03 00 AA :A_Memory_Response
(Count=01, Addr=0300, Data= AA)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

###### Acceptance: Memory read for level 1 does not succeed

IN BC 10.15.254 01.00.001 63 42 01 02 00 :A_Memory_Read(Count=01, Addr=0200)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.00.001 10.15.254 63 42 40 02 00 :A_Memory_Response
(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

##### 2.12 Testing of A_Key_Write-Service : Server Test
###### Keytable:

 level 0 : 00000000H

 level 1 : 11111111H

 no other keys in key table

 Note: ‘The support of the A_Authorize and A_Keywrite-Service does not imply that the device itself has access protected areas. When this is not the case, a device shall always allow – regardless of the attributed keys – access to the highest level (0), including when receiving an illegal key (‘illegal’ in this sense meaning another key than any of the keys entered in the key table).

 However, the above (incomplete) support of the A_Authorize and A_Setkey-services has the drawback that the protection of any devices with keys by the user of ETS does not have the awaited result. An appropriate warning shall be given in the product documentation to the user for each device with an incomplete support of the A_Authorize and A_Setkey–services .

 2.12.1 Authorize at Level 1 - set Key for Illegal Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 11 11 11 11
:A_Authorize_Request(11111111)


-----

OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 01 :A_Authorize_Response(01)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D3 16 12 34 56 78
:A_Key_Write(16, 12345678)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: Rejection value is returned.

OUT BC 01.00.001 10.15.254 62 47 D4 FF :A_Key_Response(FF)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.12.2 Authorize at higher Level - set Key for lower Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 11 11 11 11
:A_Authorize_Request(11111111)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 01 :A_Authorize_Response(01)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D3 02 22 22 22 22
:A_Key_Write(02, 22222222)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance a: Access level 2 is set.

OUT BC 01.00.001 10.15.254 62 47 D4 02 :A_Key_Response(02)

###### Acceptance b: Authorization with new key at new level succeeds.

IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 66 4B D1 00 22 22 22 22
:A_Authorize_Request(22222222)
OUT B0 01.00.001 10.15.254 60 CA :T-Ack(Seq=2)

OUT BC 01.00.001 10.15.254 62 4B D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.12.3 Authorize and set Key at same Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 22 22 22 22
:A_Authorize_Request(22222222)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D3 02 12 12 12 12
:A_Key_Write(02, 12121212)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance a: access level 2 is reset

OUT BC 01.00.001 10.15.254 62 47 D4 02 :A_Key_Response(02)


-----

###### Acceptance b: authorization with new key at same level succeeds

IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 66 4B D1 00 12 12 12 12
:A_Authorize_Request(12121212)
OUT B0 01.00.001 10.15.254 60 CA :T-Ack(Seq=2)

OUT BC 01.00.001 10.15.254 62 4B D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.12.4 Authorize at lower Level – set Key for higher Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 12 12 12 12
:A_Authorize_Request(12121212)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D3 01 33 33 33 33
:A_Key_Write(01, 33333333)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: rejection value is returned

OUT BC 01.00.001 10.15.254 62 47 D4 FF :A_Key_Response(FF)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

##### 2.13 Testing of A_PropertyValue_Read-Service : Server-Test
###### Property-Read-Service Server-Test

 The following KNX interface objects are defined in an imaginary application program:

 Object 0 with index x : Access level 0 with access key = AAAAAAAA

 Property 01 (Index 00): Object type

 Property 02 (Index 01) : type 01 (Character - 1 Byte), WrAcc = 0, RdAcc = 0, 7 elements 

 Property 03 (Index 02) : type 01 (Character - 1 Byte), WrAcc = 0, RdAcc=0, 4 elements

 Property 02 Property 03

 Start Addr Data Start Addr Data

 001 01 001 11

 002 02 002 22

 003 03 003 33

 004 04 004 44

 005 05

 006 06

 007 07

 Property 04 (Index 03) : type 01 (Character - 1 Byte), WrAcc = 0, RdAcc=0, 11 elements, MaxElements = 12

 Property 04

 Start Addr Data

 1 01

 2 02

 3 03

 4 04

 5 05

 6 06

 7 07

 8 08

 9 09

 A 0A

 B 0B

 Object 1 with index x+1: identical to Object 0 but set to access level 1 with access key BBBBBBBB

 Object 2 with index x+2: identical to Object 0 but set to access level 2 with access key CCCCCCCC and Property 01 : write protected (rest same)

|Start Addr|Data|
|---|---|
|001|11|
|002|22|
|003|33|
|004|44|

|Start Addr|Data|
|---|---|
|001|01|
|002|02|
|003|03|
|004|04|
|005|05|
|006|06|
|007|07|

|Start Addr|Data|
|---|---|
|1|01|
|2|02|
|3|03|
|4|04|
|5|05|
|6|06|
|7|07|
|8|08|
|9|09|
|A|0A|
|B|0B|


-----

###### Object with index x+3 - Property ID E0h (Index 01): type 24h (PDT_GENERIC_20), WrAcc = 0, RdAcc=0, 20 elements, MaxElements = 20, content of the data irrelevant

 Whereby x = first application interface object, in the examples x = 0

 For the BDUT other object indexes and property IDs can be chosen as the ones that are used in the below test cases. These can be set in the data sheet of the EITT test template.

 2.13.1 Property Read with legal Property ID
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 02 10 01
:A_PropertyValue_Read(Obj=00, Prop=02, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 02 10 01 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=1, Start=001, Data=01 )
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 65 4B D5 00 03 10 01
:A_PropertyValue_Read(Obj=00, Prop=03, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

###### Acceptance: The BDUT sends a A_PropertyValue_Read-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 4B D6 00 03 10 01 11
:A_PropertyValue_Response(Obj=00, Prop=03, Count=1, Start=001, Data=11 )
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)

IN BC 10.15.254 01.00.001 65 4F D5 00 02 20 04
:A_PropertyValue_Read(Obj=00, Prop=02, Count=2, Start=004)
OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 67 4F D6 00 02 20 04 04 05
:A_PropertyValue_Response(Obj=00, Prop=02, Count=2, Start=004, Data=04 05 )
IN B0 10.15.254 01.00.001 60 CE :T-Ack(Seq=3)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.2 Property Read with illegal Object index
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 04 01 10 01
:A_PropertyValue_Read(Obj=04, Prop=01, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

###### Acceptance: The BDUT sends a A_PropertyValue_Response-PDU with count set to 0 and no data.

OUT BC 01.01.001 10.15.254 65 47 D6 04 01 00 01
:A_PropertyValue_Response(Obj=04, Prop=01, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.3 Property Read with illegal Property ID
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 04 10 01
:A_PropertyValue_Read(Obj=00, Prop=04, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 04 00 01
:A_PropertyValue_Response(Obj=00, Prop=04, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.4 Property Read with illegal Start Index
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 03 10 05
:A_PropertyValue_Read(Obj=00, Prop=03, Count=1, Start=005)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 03 00 05
:A_PropertyValue_Response(Obj=00, Prop=03, Count=0, Start=005, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.13.5 Property Read with illegal Access Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 CC CC CC CC
:A_Authorize_Request(CCCCCCCC)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 02 10 01
:A_PropertyValue_Read(Obj=00, Prop=02, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data.

OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.6 Property Read with illegal Count
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 03 50 01
:A_PropertyValue_Read(Obj=00, Prop=03, Count=5, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 03 00 01
:A_PropertyValue_Response(Obj=00, Prop=03, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.7 Property Read of two objects, for which access level is legal - access level is illegal
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 BB BB BB BB
:A_Authorize_Request(BBBBBBBB)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 01 :A_Authorize_Response(01)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 01 02 10 01
:A_PropertyValue_Read(Obj=01, Prop=02, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.


-----

OUT BC 01.01.001 10.15.254 66 47 D6 01 02 10 01 01
:A_PropertyValue_Response(Obj=01, Prop=02, Count=1, Start=001, Data=01 )
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 65 4B D5 00 02 10 01
:A_PropertyValue_Read(Obj=00, Prop=02, Count=1, Start=001)
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count 0 and no data.

OUT BC 01.01.001 10.15.254 65 4B D6 00 02 00 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.13.8 Property Read on Start Index 0 – current length of arrays
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 02 10 00
:A_PropertyValue_Read(Obj=00, Prop=02, Count=1, Start=000)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 02 10 00 00 07
:A_PropertyValue_Response(Obj=00, Prop=02, Count=1, Start=000, Data=00 07)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.13.9 Property Read with data not fitting in SFF, devices not supporting EFF

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 04 B0 01
:A_PropertyValue_Read(Obj=00, Prop=04, Count=B, Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 04 00 01
:A_PropertyValue_Response(Obj=00, Prop=04, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.13.10 Property Read - SFF - response fitting in EFF - not exceeding MAX_APDU_LENGTH Assuming MAX_APDU_LENGTH of 254, if lower read lower number of elements

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 65 47 D5 03 E0 C0 01 :PropertyValueRead(Obj=03, Prop=E0, Count=C,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_PropertyValue_Response-PDU in EFF.
OUT 3C 60 01.01.001 10.15.254 F5 47 D6 03 E0 C0 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyValueResponse(Obj=03, Prop=E0, Count=C, Start=001, Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.13.11 Property Read - SFF - data fitting in EFF - exceeding MAX_APDU_LENGTH
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 65 47 D5 03 E0 F0 01 :PropertyValueRead(Obj=03, Prop=E0, Count=F,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no
data.
OUT BC 01.01.001 10.15.254 65 47 D6 03 E1 00 01 :PropertyValueResponse(Obj=03, Prop=E0, Count=0,
Start=001, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.13.12 Property Read - EFF - data fitting in SFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 05 47 D5 00 02 10 01 :PropertyValueRead(Obj=00, Prop=02, Count=1,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

**@[tAcceptance:** The BDUT sends an A_PropertyValue_Response-PDU in SFF.
OUT BC 01.01.001 10.15.254 66 47 D6 00 02 10 01 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=1, Start=001, Data=01 )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.13.13 Property Read - EFF - response fitting in EFF - not exceeding MAX_APDU_LENGTH Assuming MAX_APDU_LENGTH of 254, if lower adapt accordingly

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 05 47 D5 03 E0 B0 01 :PropertyValueRead(Obj=03, Prop=E0, Count=C,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_PropertyValue_Response-PDU in EFF.
OUT 3C 60 01.01.001 10.15.254 F5 47 D6 03 E0 C0 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyValueResponse(Obj=03, Prop=E0, Count=C, Start=001, Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

##### 2.14 Testing of A_PropertyValue_Write-Service : Server-Test
###### Test preperation see A_PropertyValue_Read-Service Server Test

 2.14.1 Property Write by PropID, by Index to Prop, to array
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 02 10 01 AA
:A_PropertyValue_Write(Obj=00, Prop=02, Count=1, Start=001, Data=AA )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance:  The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 02 10 01 AA
:A_PropertyValue_Response(Obj=00, Prop=02, Count=1, Start=001, Data=AA )
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 69 4B D7 00 03 40 01 0A 1A 2A 3A
:A_PropertyValue_Write(Obj=00, Prop=03, Count=4, Start=001, Data=0A 1A 2A 3A )
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 69 4B D6 00 03 40 01 0A 1A 2A 3A
:A_PropertyValue_Response(Obj=00, Prop=03, Count=4, Start=001, Data=0A 1A 2A 3A )
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)

IN BC 10.15.254 01.00.001 67 4F D7 00 03 20 02 3F 4F
:A_PropertyValue_Write(Obj=00, Prop=03, Count=2, Start=002, Data=3F 4F )
OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 67 4F D6 00 03 20 02 3F 4F
:A_PropertyValue_Response(Obj=00, Prop=03, Count=2, Start=002, Data=3F 4F )
IN B0 10.15.254 01.00.001 60 CE :T-Ack(Seq=3)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.2 Property Write by illegal Object index
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 **A_Authorize_Response(00)**
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 04 01 10 01 FF
:A_PropertyValue_Write(Obj=04, Prop=01, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data


-----

OUT BC 01.01.001 10.15.254 65 47 D6 04 01 00 01
:A_PropertyValue_Response(Obj=04, Prop=01, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.3 Property Write with illegal PropID
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 04 10 01 FF
:A_PropertyValue_Write(Obj=00, Prop=04, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 04 00 01
:A_PropertyValue_Response(Obj=00, Prop=04, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.4 Property Write with illegal Start Index
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 02 10 08 FF
:A_PropertyValue_Write(Obj=00, Prop=02, Count=1, Start=008, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data.

OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 08
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=008, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.5 Property Write with illegal Access Level
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 CC CC CC CC
:A_Authorize_Request(CCCCCCCC)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :A_Authorize_Response(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 02 10 01 FF
:A_PropertyValue_Write(Obj=00, Prop=02, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data


-----

OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.6 Property Write with illegal Count
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 6E 47 D7 00 02 90 01 FF FF FF FF FF FF FF FF FF
:A_PropertyValue_Write(Obj=00, Prop=02, Count=9, Start=001, Data=FF FF FF FF FF FF FF FF FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data

OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.7 Property Write to write protected Value
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 02 02 10 01 FF
:A_PropertyValue_Write(Obj=02, Prop=02, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data

OUT BC 01.01.001 10.15.254 65 47 D6 02 02 00 01
:A_PropertyValue_Response(Obj=02, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.8 Property Write to object a) for which legal key was given

 b) for which illegal key was given


-----

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 BB BB BB BB :A_Authorize_Request(BBBBBBBB)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 01 :A_Authorize_Response(01)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 01 02 10 01 FF
:A_PropertyValue_Write(Obj=01, Prop=02, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with correct data

OUT BC 01.01.001 10.15.254 66 47 D6 01 02 10 01 FF
:A_PropertyValue_Response(Obj=01, Prop=02, Count=1, Start=001, Data=FF )
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 66 4B D7 00 02 10 01 FF
:A_PropertyValue_Write(Obj=00, Prop=02, Count=1, Start=001, Data=FF )
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with count set to 0 and no data.

OUT BC 01.01.001 10.15.254 65 4B D6 00 02 00 01
:A_PropertyValue_Response(Obj=00, Prop=02, Count=0, Start=001, Data=)
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.14.9 Property Write – Influence on Start Index 0 – not exceeding Maxlength - exceeding Maxlength
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 04 10 0C 0C
:A_PropertyValue_Write(Obj=00, Prop=04, Count=1, Start=012, Data=0C)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance:  The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 04 10 0C 0C
:A_PropertyValue_Response(Obj=00, Prop=04, Count=1, Start=012, Data=0C)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

Check increase of number of elements to 12


-----

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 04 10 00
:A_PropertyValue_Read(Obj=00, Prop=04, Count=1, Start=000)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 04 10 00 00 0C
:A_PropertyValue_Response(Obj=00, Prop=04, Count=1, Start=000, Data=00 0C)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 66 47 D7 00 04 10 0D 0D
:A_PropertyValue_Write(Obj=00, Prop=04, Count=1, Start=013, Data=0D)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance:  The BDUT sends an A_PropertyValue_Response-PDU with count set to zero and no data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 04 00 0D
:A_PropertyValue_Response(Obj=00, Prop=04, Count=0, Start=013, Data=)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

Check whether number of elements unchanged

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 65 47 D5 00 04 10 00
:A_PropertyValue_Read(Obj=00, Prop=04, Count=1, Start=000)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 66 47 D6 00 04 10 00 00 0C
:A_PropertyValue_Response(Obj=00, Prop=04, Count=1, Start=000, Data=00 0C)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.14.10 Property Write – SFF - inconsistent data
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tWrite initial values to property
IN BC 10.15.254 01.01.001 68 47 D7 00 02 30 01 AA BB CC :PropertyValueWrite(Obj=00, Prop=02,
Count=3, Start=001, Data=AA BB CC )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 68 47 D6 00 02 30 01 AA BB CC :PropertyValueResponse(Obj=00, Prop=02,
Count=3, Start=001, Data=AA BB CC )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tnr_of_elem greater than number of data octets
IN BC 10.15.254 01.01.001 67 47 D7 00 02 30 01 11 22 :PropertyValueWrite(Obj=00, Prop=02, Count=3,
Start=001, Data=11 22 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance: The BDUT sends negative response**
OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 01 :PropertyValueResponse(Obj=00, Prop=02, Count=0,
Start=001, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tnr_of_elem less than number of data octets
IN BC 10.15.254 01.01.001 68 4B D7 00 02 20 01 01 02 03 :PropertyValueWrite(Obj=00, Prop=02,
Count=2, Start=001, Data=01 02 03 )
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance: The BDUT sends negative response**
OUT BC 01.01.001 10.15.254 65 47 D6 00 02 00 01 :PropertyValueResponse(Obj=00, Prop=02, Count=0,
Start=001, Data=)
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)
@[tCheck whether data was written
IN BC 10.15.254 01.01.001 65 47 D5 00 02 30 01 :PropertyValueRead(Obj=00, Prop=02, Count=3,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data.**
OUT BC 01.01.001 10.15.254 68 47 D6 00 02 30 01 AA BB CC :PropertyValueResponse(Obj=00, Prop=02,
Count=3, Start=001, Data=AA BB CC )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.14.11 Property Write - consistent data - Write EFF - Response EFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 18 47 D7 03 E0 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 12
13 14 :PropertyValueWrite(Obj=03, Prop=E0, Count=1, Start=001, Data=01 02 03 04 05 06 07 08 09 0A
0B 0C 0D 0E 0F 10 12 13 14 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
@[tAcceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data in EFF.
OUT 3C 60 01.01.001 10.15.254 17 47 D6 03 E0 10 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 12 13
14 :PropertyValueResponse(Obj=03, Prop=E0, Count=1, Start=001, Data=02 03 04 05 06 07 08 09 0A
0B 0C 0D 0E 0F 10 12 13 14 )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.14.12 Property Write - consistent data - Write EFF - Response SFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)


-----

OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 0F 47 D7 00 04 A0 01 01 02 03 04 05 06 07 08 09 0A
:PropertyValueWrite(Obj=00, Prop=04, Count=A, Start=001, Data=01 02 03 04 05 06 07 08 09 0A )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
@[tAcceptance: The BDUT sends an A_PropertyValue_Response-PDU with the correct data in SFF.
OUT BC 01.01.001 10.15.254 6F 47 D6 00 04 A0 01 01 02 03 04 05 06 07 08 09 0A
:PropertyValueResponse(Obj=00, Prop=04, Count=A, Start=001, Data=01 02 03 04 05 06 07 08 09 0A )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.14.13 Property Write - consistent data - Write EFF - data fitting in EFF - exceeding MAX_APDU_LENGTH
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
245.
@[tAttempting to write Ch elements of each 20 bytes (= 240 bytes + 5 = APDU length)

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 F5 47 D7 03 E0 C0 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10
11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30
31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50
51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70
71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90
91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 :PropertyValueWrite(Obj=03, Prop=E0, Count=C, Start=001, Data=01
02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41
42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61
62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81
82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1
A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD
BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9
DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance: The BDUT sends negative response**
OUT BC 01.01.001 10.15.254 65 47 D6 03 0E 00 01 :PropertyValueResponse(Obj=03, Prop=0E, Count=0,
Start=001, Data=)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.14.14 Property Write - inconsistent data - Write EFF - data fitting in EFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tWrite initial values to property
IN 3C 60 10.15.254 01.01.001 19 47 D7 03 E0 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 :PropertyValueWrite(Obj=03, Prop=E0, Count=1, Start=001, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

OUT 3C 60 01.01.001 10.15.254 19 47 D6 03 E0 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 :PropertyValueResponse(Obj=03, Prop=E0, Count=1, Start=001, Data=01 02 03 04 05 06 07
08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tnr_of_elem greater than number of data octets.
IN 3C 60 10.15.254 01.01.001 1A 47 D7 03 E0 10 01 15 14 13 12 11 10 0F 0E 0D 0C 0B 0A 09 08 07 06
05 04 03 02 01 :PropertyValueWrite(Obj=03, Prop=E0, Count=1, Start=001, Data=15 14 13 12 11 10 0F
0E 0D 0C 0B 0A 09 08 07 06 05 04 03 02 01 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 05 47 D6 03 E0 00 01 :PropertyValueResponse(Obj=03, Prop=E0, Count=0,
Start=001, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
@[tnr_of_elem less than number of data octets
IN 3C 60 10.15.254 01.01.001 18 47 D7 03 E0 10 01 13 12 11 10 0F 0E 0D 0C 0B 0A 09 08 07 06 05 04 03
02 01 :PropertyValueWrite(Obj=03, Prop=E0, Count=1, Start=001, Data=13 12 11 10 0F 0E 0D 0C 0B
0A 09 08 07 06 05 04 03 02 01 )
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 05 47 D6 03 E0 00 01 :PropertyValueResponse(Obj=03, Prop=E0, Count=0,
Start=001, Data=)
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
**@[tAcceptance: The frames shall be ignored. Reading the property from the device shows the data has not**
**been changed.**
IN BC 10.15.254 01.01.001 65 47 D5 03 E0 10 01 :PropertyValueRead(Obj=03, Prop=E0, Count=1,
Start=001)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 19 47 D6 03 E0 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 :PropertyValueResponse(Obj=03, Prop=E0, Count=1, Start=001, Data=01 02 03 04 05 06 07
08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 )
IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.14.15 Property Write - consistent data - Write EFF - data fitting in EFF – not exceeding MAX_APDU_LENGTH
@[tThis test case is CONDITIONAL and only applicable if the MAX_APDU_LENGTH is equal or greater than
245.
@[tAttempting to write Ch elements of each 20 bytes (= 240 bytes + 5 = APDU length)

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN BC 10.15.254 01.01.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 F5 47 D7 03 E0 C0 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10
11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30
31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50
51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70
71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90
91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 :PropertyValueWrite(Obj=03, Prop=E0, Count=C, Start=001, Data=01
02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21
22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41
42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61
62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81
82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1
A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD
BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9
DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 )


-----

OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance: The BDUT sends response with the data written**
OUT 3C 60 01.01.001 10.15.254 F5 47 D6 03 0E C0 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10
11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30
31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50
51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70
71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90
91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 :PropertyValueResponse(Obj=03, Prop=0E, Count=C, Start=001,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E
1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E
3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E
5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E
7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E
9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA
BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6
D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 )
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

##### 2.15 Testing of A_PropertyDescription_Read-Service : Server Test
###### For test preparation see A_PropertyValue_Read-Service Server test

 Note: For an A_PropertyDescription_Read, the index is not evaluated when the Property Identifier in the message has any other value than 0. The index in the corresponding A_PropertyDescriptionResponse shall in this case be a copy of the index received with A_PropertyDescription_Read-service or, alternatively, the actual index of the responding property.

 2.15.1 A_PropertyDescription_Read-Service with legal ID and Index

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 64 47 D8 00 02 00 :A_PropertyDescription_Read
(Obj=00, Prop=02, Index=00)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 68 47 D9 00 02 01 81 00 07 00
:A_PropertyDescription_Response(Obj=00,Prop=02,Index=01,Type=81,MaxCount=0007,WrAcc=0,R
dAcc=0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

IN BC 10.15.254 01.00.001 64 4B D8 00 00 02 :A_PropertyDescription_Read
(Obj=00, Prop=00, Index=02)
OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with the correct data.


-----

OUT BC 01.01.001 10.15.254 68 4B D9 00 03 02 81 00 04 00
:A_PropertyDescription_Response(Obj=00,Prop=03,Index=02,Type=81,MaxCount=0004,WrAcc=0,R
dAcc=0)
IN B0 10.15.254 01.00.001 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.15.2 A_PropertyDescription_Read-Service with illegal object

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 64 47 D8 0E 00 03
:A_PropertyDescription_Read(Obj=0E, Prop=00, Index=03)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU data with the complete data field, but MaxCount set to zero.

OUT B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 68 47 D9 0E 00 03 00 00 00 00
:A_PropertyDescription_Response(Obj=0E,Prop=00,Index=03,Type=00,MaxCount=0000,WrAcc=0,R
dAcc=0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.15.3 A_PropertyDescription_Read-Service with illegal ID

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 64 47 D8 00 04 03 :A_PropertyDescription_Read
(Obj=00, Prop=04, Index=03)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with the complete data field, but MaxCount set to zero.

OUT B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 68 47 D9 00 04 03 00 00 00 00
:A_PropertyDescription_Response(Obj=00,Prop=04,Index=03,Type=00,MaxCount=0000,WrAcc=0,R
dAcc0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

###### 2.15.4 A_PropertyDescription_Read-Service with illegal Index

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.00.001 64 47 D8 00 00 04 :A_PropertyDescription_Read
(Obj=00, Prop=00 Index=04)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU data set to zero.

OUT B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 68 47 D9 00 00 04 00 00 00 00
:A_PropertyDescription_Response(Obj=00,Prop=00,Index=04,Type=00,MaxCount=0000,WrAcc=0,R
dAcc0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.15.5 A_PropertyDescription_Read-Service with illegal access level

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 CC CC CC CC :AuthorizeRequest(CCCCCCCC)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 02 :AuthorizeResponse(02)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
###### Send an A_PropertyDescription_Read-PDU to BDUT

 Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with data as this service is not access protected!

IN BC 10.15.254 01.00.001 64 47 D8 00 02 00 :A_PropertyDescription_Read
(Obj=00, Prop=02, Index=00)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 68 47 D9 00 02 01 81 00 07 00
:A_PropertyDescription_Response(Obj=00,Prop=02,Index=01,Type=81,MaxCount=0007,WrAcc=0,R
dAcc=0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.15.6 A_PropertyDescription_Read-Service with legal ID and illegal Index

 Note: contrary to test 2.5.4, the Property ID is not set to 00h. 

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA
:A_Authorize_Request(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

OUT BC 01.00.001 10.15.254 62 43 D2 00 :A_Authorize_Response(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.00.001 64 47 D8 00 02 04 :A_PropertyDescription_Read
(Obj=00, Prop=02, Index=04)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

###### Acceptance: The BDUT sends an A_PropertyDescription_Response-PDU with the correct data.

OUT BC 01.01.001 10.15.254 68 47 D9 00 02 01 81 00 07 00
**A_PropertyDescription_Response(Obj=00,Prop=02,Index=01,Type=81,MaxCount=0007,WrAcc=0,Rd**
Acc=0)

_Alternatively_

OUT BC 01.01.001 10.15.254 68 47 D9 00 02 04 81 00 07 00
**A_PropertyDescription_Response(Obj=00,Prop=02,Index=04,Type=81,MaxCount=0007,WrAcc=0,Rd**
Acc=0)
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)

###### IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

##### 2.16 Testing of A_IndAddressSerialNumber_Write-Service : Server Test

###### General :

 Serial number of device is 303030303030H

 2.16.1 Set Individual Address via correct Serial Number

IN  BC 10.15.254 0000 ED 03 DE 30 30 30 30 30 30 10 02 00 00 00 00
:A_IndAddressSerialNumber_Write(Sno=303030303030, PhysAddr=1002)
###### Acceptance: The BDUT now has the individual address 1002H. This can be checked via an IndAddressRead in programming mode. For verification switch ON programming LED of BDUT

IN BC 10.15.254 0000 E1 01 00 :A_IndAddress_Read()
OUT BC 01.00.002 0000 E1 01 40 :A_IndAddress_Response(Addr=01.00.002)
###### Now switch OFF programming LED of BDUT

 2.16.2 Set Individual Address to other Value via same Serial Number

IN  BC 10.15.254 0000 ED 03 DE 30 30 30 30 30 30 10 01 00 00 00 00
:A_IndAddressSerialNumber_Write(Sno=303030303030, PhysAddr=1001)
###### Acceptance: The BDUT now has the individual address 1001H. This can be checked via a IndividualAddressRead in programming mode. For verification switch ON programming LED of BDUT

IN  BC 10.15.254 0000 E1 01 00 :A_IndAddress_Read()
OUT BC 01.00.001 0000 E1 01 40 :A_IndAddress_Response(Addr=01.00.001)
###### Now switch OFF programming LED of BDUT

 2.16.3 Set Individual Address to other Value via incorrect Serial Number

IN  BC 10.15.254 0000 ED 03 DE 30 30 30 30 30 29 10 03 00 00 00 00
:A_IndAddressSerialNumber_Write(Sno=303030303029, PhysAddr=1003)
###### Acceptance: The BDUT still has the individual address 1001H. This can be checked via a IndividualAddressRead in programming mode.

 For verification switch ON programming LED of BDUT

 IN  BC 10.15.254 0000 E1 01 00 :A_IndAddress_Read()

OUT BC 01.00.001 0000 E1 01 40 :A_IndAddress_Response(Addr=01.00.001)
###### switch OFF programming LED of BDUT

##### 2.17 Testing of A_IndAddressSerialNumber_Read-Service : Server Test
###### Serial order number of device is 303030303030H

 2.17.1 Try to read Individual Address via incorrect Serial Number

IN BC 10.15.254 00/0000 E7 03 DC 30 30 30 30 30 29
:A_IndAddressSerialNumber_Read(Sno=303030303029)

###### Acceptance: No response may be sent.


-----

###### 2.17.2 Send Response to BDUT via incorrect Serial Number

IN BC 10.15.254 00/0000 EB 03 DD 30 30 30 30 30 29 00 00 00 00
:A_IndAddressSerialNumber_Response(Sno=303030303029)

###### Acceptance: No response may be sent.

 2.17.3 Read Individual Address via correct Serial Number

IN BC 10.15.254 00/0000 E7 03 DC 30 30 30 30 30 30
:A_IndAddressSerialNumber_Read(Sno=303030303030)

###### Acceptance: The BDUT sends an A_IndividualAddressSerialNumber_Response-PDU.

OUT BC 01.01.001 00/0000 EB 03 DD 30 30 30 30 30 30 00 00 00 00
:A_IndAddressSerialNumber_Response(Sno=303030303030)

###### 2.17.4 Send Response to BDUT via correct Serial Number

IN BC 10.15.254 00/0000 EB 03 DD 30 30 30 30 30 30 00 00 00 00
:A_IndAddressSerialNumber_Response(Sno=303030303030)

###### Acceptance: no response may be sent

##### 2.18 Testing of A_NetworkParameter_Read - Server Tests 
###### Purpose: Check if BDUT sends answer with correct data  Stimuli:send A_NetworkParameter_Read to BDUT Test frame (IN): A_NetworkParameter_Read (Object_Type; PID; Test_Info)  Note: manufacturers must declare in the PICS/PIXIT for management server services, which network parameters are supported with A_NetworkParameter_Read-Service  Acceptance: BDUT sends A_NetworkParameter_Response with correct data and standard hop count  Test frame (OUT): A_NetworkParameter_Response (Object_Type; PID; Test_Info; Test_Result) 

##### 2.19 Testing of A_NetworkParameter_Write - Server Tests 

###### 2.19.1 General Test Case with correct service parameters  Purpose: Check BDUT´s acceptance of network parameter-write frames  Stimuli:send A_NetworkParameter_Write to BDUT Test frame (IN): A_NetworkParameter_Write (Object_Type; PID; Value)  Note: manufacturers must declare in the PICS/PIXIT for management server services, which network parameters are supported A_NetworkParameter_Write-Service  Acceptance: BDUT´s behaviour according manufacture’s declaration about implemented features 

 2.19.2 Example: Subnet Address Update (PID_Subnet_Addr)  Purpose: Check BDUT´s acceptance of SNA Update  Stimuli:Use a Telegram Generator to send an A_NetworkParameter_Write (SNA Update) to BDUT Test frame (IN): A_NetworkParameter_Write (Device Object; PID_Subnet_Addr; new SNA), with hop count = 0 Acceptance: BDUT has updated its Subnet Address:  Test frame (IN): send Property Read to PID_Subnet_Addr (DO)  Test frame (OUT): Property Response, value of SNA updated


-----

##### 2.20 Illegal APCI in point to point communication mode 
###### Purpose: Check whether unsupported APCIs and APCIs, which are invalid in point to point connectionless communication mode, are rejected by the BDUT. The tests ensure that the BDUT does not generate any reaction on the bus. 
 Stimuli : Use a telegram generator (e.g. EITT) to send frames with incorrect APCI in point to point connectionless communication mode to the BDUT[12]. 
 IN BC AFFE 1101 63 00 00 00 00  IN BC AFFE 1101 63 01 00 00 00  IN BC AFFE 1101 63 02 00 00 00  IN BC AFFE 1101 63 00 01 00 00  IN BC AFFE 1101 63 01 01 00 00  IN BC AFFE 1101 63 02 01 00 00  IN BC AFFE 1101 63 00 02 00 00  IN BC AFFE 1101 63 01 02 00 00  IN BC AFFE 1101 63 02 02 00 00  IN BC AFFE 1101 63 00 04 00 00  IN BC AFFE 1101 63 01 04 00 00  IN BC AFFE 1101 63 02 04 00 00  IN BC AFFE 1101 63 00 08 00 00  IN BC AFFE 1101 63 01 08 00 00  IN BC AFFE 1101 63 02 08 00 00  IN BC AFFE 1101 63 00 10 00 00  IN BC AFFE 1101 63 01 10 00 00  IN BC AFFE 1101 63 02 10 00 00  IN BC AFFE 1101 63 00 20 00 00  IN BC AFFE 1101 63 01 20 00 00  IN BC AFFE 1101 63 02 20 00 00  IN BC AFFE 1101 63 00 40 00 00  IN BC AFFE 1101 63 01 40 00 00  IN BC AFFE 1101 63 02 40 00 00  IN BC AFFE 1101 63 00 80 00 00  IN BC AFFE 1101 63 01 80 00 00  IN BC AFFE 1101 63 02 80 00 00  IN BC AFFE 1101 63 00 08 00 00  IN BC AFFE 1101 63 01 08 00 00  IN BC AFFE 1101 63 02 08 00 00  IN BC AFFE 1101 63 00 11 00 00  IN BC AFFE 1101 63 01 11 00 00  IN BC AFFE 1101 63 02 11 00 00  IN BC AFFE 1101 63 00 22 00 00  IN BC AFFE 1101 63 01 22 00 00  IN BC AFFE 1101 63 02 22 00 00  IN BC AFFE 1101 63 00 44 00 00  IN BC AFFE 1101 63 01 44 00 00  IN BC AFFE 1101 63 02 44 00 00  IN BC AFFE 1101 63 00 88 00 00  IN BC AFFE 1101 63 01 88 00 00  IN BC AFFE 1101 63 02 88 00 00 ... ....................  Acceptance: BDUT does not accept the frames (sends no reaction onto the bus).

12 Please note that in the course of the evolution of the KNX standard, some of the stated APCIs may become
valid APCIs. Hence the BDUT then logically may accept the frames, if it supports this new APCI


-----

##### 2.21 A_Open_Routing_Table -Server Test
###### See test sequences in clause 2.22 and in clause 2.23. 

##### 2.22 A_Filter_Table_Read-Server Test
###### Test Setup: Load memory area with default value (by means of A_Filter_Table_Write service)

 Assumed memory Model of line coupler Mask 09xxh (external RAM):

 Address 200H to 21FFH : accessible memory area

 Downloaded data from 200H onwards : 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF 11 22 and so forth

 From address 2200H onwards : protected memory area

@[tPreparation
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 6E 47 C3 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableWrite(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
IN BC 10.15.254 01.01.000 6E 47 C3 0A 02 0A BB CC DD EE FF 11 22 33 44 55
:RoutingTableWrite(Count=0A, Addr=020A, Data=BB CC DD EE FF 11 22 33 44 55 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.22.1 Accessible Memory Area (10 bytes from 0200H)

IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 64 47 C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends a Response PDU with the required data.

OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:LcTabMemResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.2 Protected Memory Area (10 bytes from 2200H)
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 64 47 C1 0A 22 00 :RoutingTableRead(Count=0A, Addr=2200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends a Response PDU with length byte set to zero and no data.

OUT BC 01.01.000 10.15.254 64 43 C2 00 22 00
:LcTabMemResponse(Count=00, Addr=2200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect


-----

###### 2.22.3 Partly protected Memory Area (2 Bytes from 21FFH)
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 64 47 C1 02 21 FF :RoutingTableRead(Count=02, Addr=21FF)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends a Response PDU with length byte set to zero and no data.

OUT BC 01.01.000 10.15.254 64 43 C2 00 21 FF
:LcTabMemResponse(Count=00, Addr=21FF, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.4 Illegal Length - accessible Memory Area (12 bytes from 200H) - for devices not supporting EFF
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 64 47 C1 0C 02 00 :RoutingTableRead(Count=0C, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: The BDUT sends a Response PDU with length byte set to zero and no data.

OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00
:LcTabMemResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.5 Accessible Memory Area - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH - for devices supporting EFF
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 64 47 C1 0C 02 00 :RoutingTableRead(Count=0C, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response PDU with the required data in EFF.
OUT 3C 60 01.01.000 10.15.254 10 43 C2 0C 02 00 11 22 33 44 55 66 77 88 99 AA BB CC
:RoutingTableResponse(Count=0C, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.6 Accessible Memory Area - SFF - response fits in EFF - exceeding MAX_APDU_LENGTH
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 64 47 C1 FA 02 00 :RoutingTableRead(Count=FA, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_FilterTable_Response with the length set to 0 and no data.
OUT 3C 60 01.01.000 10.15.254 04 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect


-----

###### 2.22.7 Accessible Memory Area - SFF - response fits in EFF - equaling MAX_APDU_LENGTH
@[tThis test case assumes a MAX_APDU_LENGTH equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 64 47 C1 FA 02 00 :RoutingTableRead(Count=FA, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends an A_FilterTable_Response with the loaded data.
OUT 3C 60 01.01.000 10.15.254 FE 43 C2 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33
34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55
56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77
78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99
9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5
D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4
F5 F6 F7 F8 F9 FA :RoutingTableResponse(Count=FA, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B
0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D
2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F
50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93
94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2
B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0
D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE
EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.8 Accessible Memory Area - EFF - response fits in SFF
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 04 47 C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response PDU with the required data in SFF.
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.22.9 Accessible Memory Area - EFF - response fits in EFF
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 04 47 C1 0C 02 00 :RoutingTableRead(Count=0C, Addr=0200)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response PDU with the required data in EFF.
OUT 3C 60 01.01.000 10.15.254 10 43 C2 0C 02 00 11 22 33 44 55 66 77 88 99 AA BB CC
:RoutingTableResponse(Count=0C, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

##### 2.23 A_Filter_Table_Write-Server Test
###### Test Setup : Load memory area with default value (by means of A_Filter_Table_Write-Service)

 Assumed memory Model see 2.22.


-----

###### 2.23.1 Accessible Memory - no Verify (10 Bytes from 200H)
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 6E 47 C3 0A 02 00 01 02 03 04 05 06 07 08 09 0A
:LcTabMemWrite(Count=0A, Addr=0200, Data= 01 02 03 04 05 06 07 08 09 0A )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: After reading the written memory, the same data is returned by the BDUT as written)

IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)

OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 01 02 03 04 05 06 07 08 09 0A
:LcTabMemResponse(Count=0A, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.2 Partly protected Memory - no Verify (2 Bytes from 21FFH)
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :M_LC_Tab_Mem_Enable()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)

IN BC 10.15.254 01.01.000 66 47 C3 02 21 FF 11 22
:LcTabMemWrite(Count=02, Addr=21FF, Data=11 22 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)

###### Acceptance: after reading the affected accessible memory area, a response shall be generated showing that data has not been modified


-----

IN BC 10.15.254 01.01.000 64 4B C1 01 21 FF
:RoutingTableRead(Count=01, Addr=0FFF)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)

OUT BC 01.01.000 10.15.254 65 43 C2 01 21 FF FF
:LcTabMemResponse(Count=01, Addr=0FFF, Data=FF )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.3 Length inconsistency - accessible Memory - no Verify
**IN** B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN BC 10.15.254 01.01.000 66 47 C3 03 02 00 01 02 :RoutingTableWrite(Count=03, Addr=0200, Data=01
02 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN BC 10.15.254 01.01.000 67 47 C3 02 02 00 AA BB CC :RoutingTableWrite(Count=02, Addr=0200,
Data=AA BB CC )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.4 Accessible Memory - Verify 
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 6E 47 C3 0A 02 00 01 02 03 04 05 06 07 08 09 AA
:RoutingTableWrite(Count=0A, Addr=0200, Data=01 02 03 04 05 06 07 08 09 AA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Memory Response with the data written.
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 01 02 03 04 05 06 07 08 09 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=01 02 03 04 05 06 07 08 09 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect


-----

###### 2.23.5 Protected Memory – Verify 
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 6E 47 C3 0A 22 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableWrite(Count=0A, Addr=2200, Data=11 22 33 44 55 66 77 88 99 AA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Memory Response with the length set to 0 and no data..
OUT BC 01.01.000 10.15.254 64 43 C2 00 22 00 :RoutingTableResponse(Count=00, Addr=2200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.6 Partly protected Memory – Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 66 47 C3 02 21 FF 11 22 :RoutingTableWrite(Count=02, Addr=21FF, Data=11
22 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Memory Response with the length set to 0 and no data.
OUT BC 01.01.000 10.15.254 64 43 C2 00 21 FF :RoutingTableResponse(Count=00, Addr=21FF, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.7 Length inconsistency - accessible Memory – Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN BC 10.15.254 01.01.000 66 47 C3 03 02 00 11 22 :RoutingTableWrite(Count=03, Addr=0200, Data=11
22 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Memory Response with the length set to 0 and no data.
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
**@[tAcceptance:** The BDUT sends a Memory Response with the length set to 0 and no data.
@[tNumber is less than data


-----

IN BC 10.15.254 01.01.000 67 47 C3 02 02 00 AA BB CC :RoutingTableWrite(Count=02, Addr=0200,
Data=AA BB CC )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response with the length set to 0 and no data.
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.8 Accessible Memory - EFF - Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 10 47 C3 0C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RoutingTableWrite(Count=0C, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT replies with a Response in EFF containing the same data as written.
OUT 3C 60 01.01.000 10.15.254 10 43 C2 0C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RoutingTableResponse(Count=0C, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.9 Accessible Memory - EFF - response fits in SFF - Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 0E 47 C3 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableWrite(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT replies with a Response in SFF containing the same data as written.
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()


-----

OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 FE 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** Reading Routing Table from the device to show the data has not been changed.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.11 Accessible Memory - EFF - equaling MAX_APDU_LENGTH - Verify

@[tThis test case assumes MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)


-----

IN 3C 60 10.15.254 01.01.000 FE 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT answers with the data written.
OUT 3C 60 01.01.000 10.15.254 FE 43 C2 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableResponse(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.12 Length inconsistency - accessible Memory - EFF - Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.000 17 47 C3 14 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 :RoutingTableWrite(Count=14, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
10 11 12 13 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response with the length set to 0 and no data.
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)


-----

IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN 3C 60 10.15.254 01.01.000 19 47 C3 14 02 00 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF
B0 B1 B2 B3 B4 B5 :RoutingTableWrite(Count=14, Addr=0200, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9
AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT sends a Response with the length set to 0 and no data.
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** Reading Routing Table from the device to show the data has not been changed.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.13 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.000 FD 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data


-----

IN 3C 60 10.15.254 01.01.000 FE 47 C3 F9 02 00 AA AA AA AA AA AA AA AA AA AA 0B 0C 0D 0E
0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E
2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E
4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E
6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E
8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC
AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9
CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5
E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=F9,
Addr=0200, Data=AA AA AA AA AA AA AA AA AA AA 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18
19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38
39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58
59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78
79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98
99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5
B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1
D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED
EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.000 10.15.254 64 43 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, Data=)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.14 Accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 10 47 C3 0C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RoutingTableWrite(Count=0C, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C)
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.000 64 4B C1 0C 02 00 :RoutingTableRead(Count=0C, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT 3C 60 01.01.000 10.15.254 10 43 C2 0C 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RoutingTableResponse(Count=0C, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C)
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.15 Accessible Memory - EFF - response fits in SFF - no Verify

IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 0E 47 C3 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableWrite(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )


-----

IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.16 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.000 FE 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.17 Accessible Memory - EFF - equaling MAX_APDU_LENGTH - no Verify
@[tThis test case assumes a MAX_APDU_LENGTH equal to 254.
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)


-----

IN 3C 60 10.15.254 01.01.000 FE 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** Reading the device shows the data has been changed.
IN BC 10.15.254 01.01.000 64 4B C1 FA 02 00 :RoutingTableRead(Count=FA, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT 3C 60 01.01.000 10.15.254 FE 43 C2 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableResponse(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.18 Length inconsistency - accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.000 17 47 C3 0E 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 :RoutingTableWrite(Count=0E, Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
10 11 12 13 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN 3C 60 10.15.254 01.01.000 19 47 C3 0E 02 00 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF
B0 B1 B2 B3 B4 B5 :RoutingTableWrite(Count=0E, Addr=0200, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9
AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.


-----

IN BC 10.15.254 01.01.000 64 4B C1 20 02 00 :RoutingTableRead(Count=20, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** After reading the affected accessible memory area, a response shall be generated
showing that data has not been modified.
OUT 3C 60 01.01.000 10.15.254 18 43 C2 20 02 00 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF 11 22
33 44 55 :RoutingTableResponse(Count=20, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA BB CC
DD EE FF 11 22 33 44 55 )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect

###### 2.23.19 Length inconsistency - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
IN B0 10.15.254 01.01.000 60 80 :T-Connect(Addr=1100)
IN BC 10.15.254 01.01.000 61 43 C0 :RoutingTableOpen()
OUT B0 01.01.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.000 FD 47 C3 FA 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 :RoutingTableWrite(Count=FA,
Addr=0200, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN 3C 60 10.15.254 01.01.000 FE 47 C3 F9 02 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32
33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52
53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72
73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92
93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF
B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC
CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9
EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RoutingTableWrite(Count=F9, Addr=0200,
Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E
1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E
3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E
5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E
7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E
9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA
BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6
D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3
F4 F5 F6 F7 F8 F9 FA )
OUT B0 01.01.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frames shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.000 64 4B C1 0A 02 00 :RoutingTableRead(Count=0A, Addr=0200)
OUT B0 01.01.000 10.15.254 60 CA :T-Ack(Seq=2)


-----

OUT BC 01.01.000 10.15.254 6E 43 C2 0A 02 00 11 22 33 44 55 66 77 88 99 AA
:RoutingTableResponse(Count=0A, Addr=0200, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.000 60 81 :T-Disconnect


-----

##### 2.24 A_RouterMemory_Read/A_RouterMemory_Write-Server Test

###### 2.24.1 RouterMemory_Read - normal case
@[tPreparation
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 6E 47 CA 0A 01 19 01 02 03 04 05 06 07 08 09 0A
:RouterMemoryWrite(Count=0A, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
IN B0 10.15.254 15.15.000 6E 4B CA 0A 01 23 0B 0C 0D 0E 0F 10 11 12 13 14
:RouterMemoryWrite(Count=0A, Addr=0123, Data=0B 0C 0D 0E 0F 10 11 12 13 14 )
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
(IN B0 10.15.254 15.15.000 64 47 C8 02 01 19 :RouterMemoryRead(Count=02, Addr=0119)
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** BDUT sends Response with correct length byte and data.
OUT B0 15.15.000 10.15.254 66 43 C9 02 01 19 01 02 :RouterMemoryResponse(Count=02, Addr=0119,
Data=01 02 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.2 RouterMemory_Read - Illegal length
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 64 43 C8 FE 01 19 :RouterMemoryRead(Count=FE, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** BDUT sends Response with length byte set to zero and no data
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.3 RouterMemory_Read - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 64 4B C8 0C 01 19 :RouterMemoryRead(Count=0C, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** BDUT sends Response with correct length byte and data in EFF.
OUT 30 60 15.15.000 10.15.254 10 43 C9 0C 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RouterMemoryResponse(Count=0C, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.4 RouterMemory_Read - SFF - response fits in EFF - exceeding MAX_APDU_LENGTH
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()


-----

OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 64 4B C8 FA 01 19 :RouterMemoryRead(Count=FA, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** The BDUT sends an A_FilterTable_Response with the length set to 0 and no data.
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.5 RouterMemory_Read - SFF - response fits in EFF - equaling MAX_APDU_LENGTH
@[tThis test case assumes MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 64 4B C8 FA 01 19 :RouterMemoryRead(Count=FA, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** The BDUT sends an A_FilterTable_Response with the loaded data.
OUT 30 60 15.15.000 10.15.254 FE 43 C9 FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryResponse(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.6 RouterMemory_Read - EFF - response fits in SFF

IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 04 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** BDUT sends Response with correct length byte and data in SFF.
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 01 02 03 04 05 06 07 08 09 0A 0B
:RouterMemoryResponse(Count=0B, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.7 RouterMemory_Read - EFF - response fits in EFF
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=15.15.000)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 04 4B C8 0C 01 19 :RouterMemoryRead(Count=0C, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)


-----

**@[tAcceptance:** BDUT sends Response with correct length byte and data in EFF.
OUT 30 60 15.15.000 10.15.254 10 43 C9 0C 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C
:RouterMemoryResponse(Count=0C, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.8 RouterMemory_Write - no Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 6F 47 CA 0B 01 19 01 02 03 04 05 06 07 08 09 0A 0B
:RouterMemoryWrite(Count=0B, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 01 02 03 04 05 06 07 08 09 0A 0B
:RouterMemoryResponse(Count=0B, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.9 RouterMemory_Write - Length inconsistency - SFF - no Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN B0 10.15.254 15.15.000 66 47 CA 03 01 19 11 22 :RouterMemoryWrite(Count=03, Addr=0119,
Data=11 22 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN B0 10.15.254 15.15.000 67 47 CA 02 01 19 AA BB CC :RouterMemoryWrite(Count=02, Addr=0119,
Data=AA BB CC )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frames shall be ignored. Reading memory from the device shows the data has not
been changed.
IN B0 10.15.254 15.15.000 64 4B C8 03 01 19 :RouterMemoryRead(Count=03, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
**@[tAcceptance:** The BDUT sends a Response, no data were changed.
OUT B0 15.15.000 10.15.254 67 43 C9 03 01 19 01 02 03 :RouterMemoryResponse(Count=03, Addr=0119,
Data=01 02 03 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.10 RouterMemory_Write - SFF - Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 6F 47 CA 0B 01 19 01 02 03 04 05 06 07 08 09 0A 0B
:RouterMemoryWrite(Count=0B, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT replies with a Response in SFF containing the same data as written.


-----

OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 01 02 03 04 05 06 07 08 09 0A 0B
:RouterMemoryResponse(Count=0B, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.11 RouterMemory_Write - Length inconsistency - Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN B0 10.15.254 15.15.000 66 47 CA 03 01 19 11 22 :RouterMemoryWrite(Count=03, Addr=0119,
Data=11 22 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_RouterMemory_Response-PDU with count set to zero
and no data.
@[tNumber is less than data
IN B0 10.15.254 15.15.000 67 47 CA 02 01 19 AA BB CC :RouterMemoryWrite(Count=02, Addr=0119,
Data=AA BB CC )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_RouterMemory_Response-PDU with count set to zero
and no data.
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.12 RouterMemory_Write - EFF - Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 10 47 CA 0C 01 19 11 22 33 44 55 66 77 88 99 AA BB CC
:RouterMemoryWrite(Count=0C, Addr=0119, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT replies with a Response in EFF containing the same data as written.
OUT 30 60 15.15.000 10.15.254 10 43 C9 0C 01 19 11 22 33 44 55 66 77 88 99 AA BB CC
:RouterMemoryResponse(Count=0C, Addr=0119, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.13 RouterMemory_Write - EFF - response fits in SFF - Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )


-----

OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 0F 47 CA 0B 01 19 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
:RouterMemoryWrite(Count=0B, Addr=0119, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The BDUT replies with a Response in SFF containing the same data as written.
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
:RouterMemoryResponse(Count=0B, Addr=0119, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.14 RouterMemory_Write - EFF - exceeds MAX_APDU_LENGTH - Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 FE 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT 30 60 15.15.000 10.15.254 04 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
:RouterMemoryResponse(Count=0B, Addr=0119, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect


-----

###### 2.24.15 RouterMemory_Write - EFF - equaling MAX_APDU_LENGTH - Verify
@[tThis test case assumes MAX_APDU_LENGTH is equal to 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 FE 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** the device sends response showing the data has been changed.
OUT 30 60 15.15.000 10.15.254 FE 43 C9 FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryResponse(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect


-----

###### 2.24.16 RouterMemory_Write - Length inconsistency - EFF - Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 30 60 10.15.254 15.15.000 17 47 CA 0E 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 :RouterMemoryWrite(Count=0E, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
10 11 12 13 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN 30 60 10.15.254 15.15.000 19 47 CA 0E 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 14 A5 :RouterMemoryWrite(Count=0E, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D
0E 0F 10 11 12 13 14 A5 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_RouterMemory_Response with the length set to 0 and no data.
**@[tAcceptance:** Reading Routing memory from the device to show the data has not been changed.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
:RouterMemoryResponse(Count=0B, Addr=0119, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.17 RouterMemory_Write - Length inconsistency - EFF - exceeds MAX_APDU_LENGTH - Verify

IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data


-----

IN 30 60 10.15.254 15.15.000 FD 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN 30 60 10.15.254 15.15.000 FE 47 CA F9 01 19 AA AA AA AA AA AA AA AA AA AA 0B 0C 0D 0E
0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E
2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E
4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E
6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E
8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC
AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9
CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5
E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA
:RouterMemoryWrite(Count=F9, Addr=0119, Data=AA AA AA AA AA AA AA AA AA AA 0B 0C 0D
0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D
2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D
4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D
6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D
8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7
C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3
E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT B0 15.15.000 10.15.254 64 43 C9 00 01 19 :RouterMemoryResponse(Count=00, Addr=0119, )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
:RouterMemoryResponse(Count=0B, Addr=0119, Data=A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.18 RouterMemory_Write - EFF - no Verify

IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)


-----

IN 30 60 10.15.254 15.15.000 10 47 CA 0C 01 19 11 22 33 44 55 66 77 88 99 AA BB CC
:RouterMemoryWrite(Count=0C, Addr=0119, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN B0 10.15.254 15.15.000 64 4B C8 0C 01 19 :RouterMemoryRead(Count=0C, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT 30 60 15.15.000 10.15.254 10 43 C9 0C 01 19 11 22 33 44 55 66 77 88 99 AA BB CC
:RouterMemoryResponse(Count=0C, Addr=0119, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.19 RouterMemory_Write - EFF - response fits in SFF - no Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 0F 47 CA 0B 01 19 AA BB CC DD EE FF 11 22 33 44 55
:RouterMemoryWrite(Count=0B, Addr=0119, Data=AA BB CC DD EE FF 11 22 33 44 55 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT in SFF as
written.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 AA BB CC DD EE FF 11 22 33 44 55
:RouterMemoryResponse(Count=0B, Addr=0119, Data=AA BB CC DD EE FF 11 22 33 44 55 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.20 RouterMemory_Write - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 FE 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 AA BB CC DD EE FF 11 22 33 44 55
:RouterMemoryResponse(Count=0B, Addr=0119, Data=AA BB CC DD EE FF 11 22 33 44 55 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)


-----

IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.21 RouterMemory_Write - EFF - equaling MAX_APDU_LENGTH - no Verify
@[tThis test case assumes MAX_APDU_LENGTH is 254.
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
IN 30 60 10.15.254 15.15.000 FE 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** Reading memory from the device shows the data has been changed.
IN B0 10.15.254 15.15.000 64 4B C8 FA 01 19 :RouterMemoryRead(Count=FA, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT 30 60 15.15.000 10.15.254 FE 43 C9 FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA :RouterMemoryResponse(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.22 RouterMemory_Write - Length inconsistency - EFF - no Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data


-----

IN 30 60 10.15.254 15.15.000 17 47 CA 0E 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12
13 :RouterMemoryWrite(Count=0E, Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
10 11 12 13 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data
IN 30 60 10.15.254 15.15.000 19 47 CA 0E 01 19 AA AA AA AA AA AA AA AA AA AA 0B 0C 0D 0E
0F 10 11 12 13 14 A5 :RouterMemoryWrite(Count=0E, Addr=0119, Data=AA AA AA AA AA AA AA
AA AA AA 0B 0C 0D 0E 0F 10 11 12 13 14 A5 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frames shall be ignored. Reading memory from the device shows the data has not
been changed.
IN 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 AA BB CC DD EE FF 11 22 33 44 55
:RouterMemoryResponse(Count=0B, Addr=0119, Data=AA BB CC DD EE FF 11 22 33 44 55 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

###### 2.24.23 RouterMemory_Write - Length inconsistency - EFF - exceeds MAX_APDU_LENGTH - no Verify
IN B0 10.15.254 15.15.000 60 80 :T-Connect(Addr=FF00)
IN B0 10.15.254 15.15.000 61 43 C0 :RoutingTableOpen()
OUT B0 15.15.000 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 30 60 10.15.254 15.15.000 FD 47 CA FA 01 19 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11
12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51
52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71
72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE
AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB
CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7
E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 :RouterMemoryWrite(Count=FA,
Addr=0119, Data=01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B
1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B
3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B
5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B
7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B
9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3
D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0
F1 F2 F3 F4 F5 F6 F7 F8 F9 )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
@[tNumber is less than data


-----

IN 30 60 10.15.254 15.15.000 FE 47 CA F9 01 19 AA AA AA AA AA AA AA AA AA AA 0B 0C 0D 0E
0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E
2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E
4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E
6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E
8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC
AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9
CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5
E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA
:RouterMemoryWrite(Count=F9, Addr=0119, Data=AA AA AA AA AA AA AA AA AA AA 0B 0C 0D
0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D
2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D
4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D
6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D
8E 8F 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB
AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7
C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3
E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA )
OUT B0 15.15.000 10.15.254 60 C6 :T-Ack(Seq=1)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN B0 10.15.254 15.15.000 64 4B C8 0B 01 19 :RouterMemoryRead(Count=0B, Addr=0119)
OUT B0 15.15.000 10.15.254 60 CA :T-Ack(Seq=2)
OUT B0 15.15.000 10.15.254 6F 43 C9 0B 01 19 AA BB CC DD EE FF 11 22 33 44 55
:RouterMemoryResponse(Count=0B, Addr=0119, Data=AA BB CC DD EE FF 11 22 33 44 55 )
IN B0 10.15.254 15.15.000 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 15.15.000 60 81 :T-Disconnect

##### 2.25 A_ServiceInformation_Indication_Write-Service[13]

###### Prepare device to enable the sending of the ServiceIndicationWrite_Service

 Connect to BDUT

IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
###### Authorization with highest key to access the service control property of device object - Authorise response for level 0 is returned

IN BC 10.15.254 01.00.001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.00.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
###### Send a property value write to device object, PID_SERVICE_CONTROL to enable the "receive own indaddr srvinfo"

 BDUT returns the property value after writing

IN BC 10.00.001 01.00.001 67 47 D7 00 08 10 01 00 02 :PropertyWrite(Obj=00, Prop=08,
Count=1, Start=001, Data=00 02 )
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.00.001 10.15.254 67 47 D6 00 08 10 01 00 02 :PropertyResponse(Obj=00, Prop=08,
Count=1, Start=001, Data=00 02 )
IN B0 10.15.254 01.00.001 60 C6 :T-Ack(Seq=1)
###### Disconnect from BDUT

IN B0 10.15.254 01.00.001 60 81 :T-Disconnect
###### Now set individual address of BDUT to A007 (the same as third BCU)

13 This service is not allowed for future implementations


-----

###### Switch on Programming LED of DUT 

IN BC 10.15.254 00/0000 E3 00 C0 A0 07 :A_IndAddress_Write(Addr=A007)
###### Switch off Programming LED of DUT 

 Start of the actual test

 Send a ValueWrite with same source address as BDUT (via third BCU) - Third BCU runs on application layer, so no L_Data.con can be detected, merely the ValueWrite.ind on the remote BCU

 Acceptance: The BDUT sends a ServiceInformationIndicationWrite service

IN 11 0C A0 07 10 01 E1 00 81 :L_DATA.requ(0C, S=A007, D=1001, E1, 00, Data=81)
OUT BC 10.00.007 02/0001 E1 00 81 :EIS1 switching (switch on)
OUT B0 10.00.007 00/0000 E4 03 DF 02 00 00 :ServiceInfo(Info=020000)

##### 2.26 Testing of A_DomainAddress_Write-Service : Server Test – 2 byte DA
###### Prior to starting the test, set the Domain Address of the data interface to 0002H and its individual address to 07.15.254

 The BDUT shall have the Domain Address 0002H and the individual address 01.00.001.

 For step 1 : Switch off programming mode of BDUT

 2.26.1 Try to set Domain Address with programming mode off
IN B0 07.15.254 00/0000 E3 03 E0 00 05 :A_DomainAddress_Write
(Domain Address=0005)

###### Acceptance: No reaction of the BDUT - BDUT keeps its Domain Address as downloaded prior to starting the test. This can be checked by:

IN B0 07.15.254 00/0000 E1 03 E1 :A_DomainAddress_Read()

OUT B0 01.00.001 00/0000 E3 03 E2 00 02 :A_DomainAddress_Response(Domain
Address=0002)

###### For test step 2 : Switch on programming mode of BDUT

 2.26.2 Try to set Address with programming mode on

IN B0 07.15.254 00/0000 E3 03 E0 00 05 :A_DomainAddress_Write
(Domain Address=0005)

###### Acceptance: The BDUT has the new Domain Address.

IN B0 07.15.254 00/0000 E1 03 E1 :A_DomainAddress_Read()

OUT B0 01.00.001 00/0000 E3 03 E2 00 05 :A_DomainAddress_Response
(Domain Address=0005)

##### 2.27 Testing of A_DomainAddress_Write-Service : Server Test – 6 byte DA
###### The BDUT shall have the Domain Address AABBCCDDEEFFh and the individual address 01.01.011.


-----

###### 2.27.1 Try to set Domain Address with programming mode off
@@!Switch off programming mode of BDUT
IN 30 E0 07.15.254 00/0/000 07 03 E0 11 22 33 44 55 66 :DomAddrWrite(DomAddr=112233445566)
@[tAcceptance: No reaction of the BDUT - BDUT keeps its Domain Address as downloaded prior to starting
the test. This can be checked by:
IN 30 E0 07.15.254 00/0/000 01 03 E1 :DomAddrRead()
OUT 30 E0 01.01.011 00/0/000 07 03 E2 AA BB CC DD EE FF
:DomAddrResponse(DomAddr=AABBCCDDEEFF)

###### 2.27.2 Try to set Address with programming mode on

@@!Switch on programming mode of BDUT
IN 30 E0 07.15.254 00/0/000 07 03 E0 11 22 33 44 55 66 :DomAddrWrite(DomAddr=112233445566)
@[tAcceptance: The BDUT has the new Domain Address.
IN 30 E0 07.15.254 00/0/000 01 03 E1 :DomAddrRead()
OUT 30 E0 01.01.011 00/0/000 07 03 E2 11 22 33 44 55 66 :DomAddrResponse(DomAddr=112233445566)

##### 2.28 Testing of A_DomainAddress_Read-Service : Server Test – 2 byte DA
###### Prior to starting the test, set the Domain Address of the data interface to 0002H and its individual address to 07.15.254

 The BDUT shall have the Domain Address 0005H and the individual address 01.01.001.

 For step 1 to 2 : Switch off programming mode of BDUT

 2.28.1 Try to read Domain Address with programming mode off
IN B0 07.15.254 00/0000 E1 03 E1 :A_DomainAddress_Read()

###### Acceptance: No response may be sent.

 2.28.2 Send Response to BDUT with programming mode off

IN B0 07.15.254 00/0000 E3 03 E2 00 05 :A_DomainAddress_Response
(Domain Address=0005)

###### Acceptance : no response may be sent

 For steps 3 to 4 : Switch on programming mode of BDUT

 2.28.3 Read Domain Address with programming mode on
IN B0 07.15.254 00/0000 E1 03 E1 :A_DomainAddress_Read()

OUT B0 01.01.001 00/0000 E3 03 E2 00 05 :A_DomainAddress_Response(Domain
Address=0005)

###### Acceptance: The BDUT sends the correct Domain Address.

 2.28.4 Send Response with programming mode on
IN B0 07.15.254 00/0000 E3 03 E2 00 05 :A_DomainAddress_Response(Domain
Address=0005)

###### Acceptance: No response may be sent.

##### 2.29 Testing of A_DomainAddress_Read-Service : Server Test – 6 byte DA
###### The BDUT shall have the Domain Address 112233445566H and the individual address 01.00.011.


-----

###### 2.29.1 Try to read Domain Address with programming mode off @@!Switch off programming mode of BDUT

 IN 30 E0 07.15.254 00/0/000 01 03 E1 :DomAddrRead()

 @[tAcceptance: No response may be sent.

 2.29.2 Send Response to BDUT with programming mode off @@!Switch off programming mode of BDUT

 IN 30 E0 07.15.254 00/0/000 07 03 E2 11 22 33 44 55 66  :DomAddrResponse(DomAddr=112233445566)

 @[tAcceptance: No response may be sent.

 2.29.3 Read Domain Address with programming mode on @@!Switch on programming mode of BDUT

 IN 30 E0 07.15.254 00/0/000 01 03 E1 :DomAddrRead()

 OUT 30 E0 01.01.011 00/0/000 07 03 E2 11 22 33 44 55 66  :DomAddrResponse(DomAddr=112233445566)

 @[tAcceptance: The BDUT sends the correct Domain Address.

 2.29.4 Send Response with programming mode on @@!Switch on programming mode of BDUT

 IN 30 E0 07.15.254 00/0/000 07 03 E2 11 22 33 44 55 66  :DomAddrResponse(DomAddr=112233445566)

 @[tAcceptance: No response may be sent.

##### 2.30 Testing of A_DomainAddressSelective_Read-Service : Server Test

###### 2.30.1 2 Octet Domain Address – Powerline – positive case Prior to starting the test, set the Domain Address of the local interface to 0002H and its individual address to 07.15.254

 The BDUT shall have the Domain Address 0005H and the individual address 01.01.011.

IN B0 07.15.254 00/0/000 E6 03 E3 00 05 11 08 03 :DomAddrSelectiveRead(Type=00, DomAddr=05,
StartAddr=1108, Range=03)

@[tAcceptance: The BDUT sends a telegram with Domain Address 05h

OUT B0 01.01.011 00/0/000 E3 03 E2 00 05 :DomAddrResponse(DomAddr=0005)

###### 2.30.2 2 Octet Domain Address – Powerline – negative case 1 The BDUT shall have the Domain Address 0005H and the individual address 01.01.011.

IN B0 07.15.254 00/0/000 E6 03 E3 00 05 12 08 03 :DomAddrSelectiveRead(Type=00, DomAddr=05,
StartAddr=1208, Range=03)

@[tAcceptance: The BDUT does not answer


-----

###### 2.30.3 2 Octet Domain Address – Powerline – negative case 2 The BDUT shall have the Domain Address 0005H and the individual address 01.01.011.

IN B0 07.15.254 00/0/000 E6 03 E3 00 05 11 08 03 :DomAddrSelectiveRead(Type=00, DomAddr=05,
StartAddr=1108, Range=02)

@[tAcceptance: The BDUT does not answer

###### 2.30.4 6 octet Domain Address Radio Frequency – positive case The BDUT shall have the Domain Address 112233445566h and any individual address

IN B0 07.15.254 00/0/000 EF 03 E3 01 11 22 33 44 55 00 11 22 33 44 55 FF 00
:DomAddrSelectiveRead(Type=01, StartAddr=112233445500, EndAddr=1122334455FF, Res=00)

@[tAcceptance: The BDUT sends a telegram with Domain Address 112233445566h

OUT B0 01.01.011 00/0/000 E7 03 E2 11 22 33 44 55 66 :DomAddrResponse(DomAddr=112233445566)

###### 2.30.5 6 octet Domain Address Radio Frequency – negative case The BDUT shall have the Domain Address 112233445566h and any individual address

IN B0 07.15.254 00/0/000 EF 03 E3 01 11 22 33 44 66 00 11 22 33 44 66 FF 00
:DomAddrSelectiveRead(Type=01, StartAddr=112233446600, EndAddr=1122334466FF, Res=00)

@[tAcceptance: The BDUT does not answer

###### 2.30.6 6 octet Domain Address Radio Frequency – reserved fields set to different value The BDUT shall have the Domain Address 112233445566h and any individual address

IN B0 07.15.254 00/0/000 EF 03 E3 01 11 22 33 44 55 00 11 22 33 44 55 FF 22
:DomAddrSelectiveRead(Type=01, StartAddr=112233445500, EndAddr=1122334455FF, Res=22)

@[tAcceptance: The BDUT does not answer

###### 2.30.7 Not supported Type
IN B0 07.15.254 00/0/000 EF 03 E3 02 11 22 33 44 55 00 11 22 33 44 55 FF 00
:DomAddrSelectiveRead(Type=02, StartAddr=112233445500, EndAddr=1122334455FF, Res=00)

@[tAcceptance: The BDUT does not answer

##### 2.31 Testing of A_UserMemory_Read-Service : Server Test
###### Assumed Memory Model : 

 7FF0H to 7FFFH : accessible memory area filled with the following data : 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF and so forth

 8000H to 8FFFH : protected memory area


-----

@[tPreparation
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN BC 10.15.254 01.01.001 6E 42 C2 0A 7F F0 11 22 33 44 55 66 77 88 99 AA
:UserMemoryWrite(Count=0A, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 69 42 C2 05 7F FA BB CC DD EE FF :UserMemoryWrite(Count=05,
Addr=07FFA, Data=BB CC DD EE FF )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.31.1 Accessible Memory - SFF
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 64 42 C0 0A 7F F0 :A_UserMemory_Read
(Count=0A, Addr=07FF0)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: The BDUT returns the correct data.

OUT BC 01.00.001 10.15.254 6E 42 C1 0A 7F F0 11 22 33 44 55 66 77 88 99 AA
:A_UserMemory_Response(Count=0A, Addr=07FF0, Data= 11 22 33 44 55 66 77 88 99 AA)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.31.2 Protected Memory - SFF
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 64 42 C0 0A 80 00 :A_UserMemory_Read
(Count=0A, Addr=08000)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: The BDUT answers with an A_UserMemory_Response-PDU with no data and count set to zero.

OUT BC 01.00.001 10.15.254 64 42 C1 00 08 00 :A_UserMemory_Response
(Count=00, Addr=00800, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.31.3 Partly protected Memory - SFF
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 64 42 C0 02 7F FF :A_UserMemory_Read
(Count=02, Addr=07FFF)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: The BDUT answers with an A_UserMemory_Response-PDU with no data and count set to zero.

OUT BC 01.00.001 10.15.254 64 42 C1 00 7F FF :A_UserMemory_Response
(Count=00, Addr=07FFF, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.31.4 Illegal Length - accessible Memory– for devices supporting SFF only
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 64 42 C0 0D 7F F0 :A_UserMemory_Read
(Count=0D, Addr=07FF0)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)


-----

###### Acceptance: The BDUT answers with an A_UserMemory_Response-PDU with no data and count set to zero.

OUT BC 01.00.001 10.15.254 64 42 C1 00 7F F0 :A_UserMemory_Response
(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.31.5 Accessible Memory - SFF - response fits in EFF - not exceeding MAX_APDU_LENGTH
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN BC 10.15.254 01.01.001 64 42 C0 0C 7F F0 :UserMemoryRead(Count=0C, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT returns the correct data in EFF.
OUT 3C 60 01.01.001 10.15.254 10 42 C1 0C 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC
:UserMemoryResponse(Count=0C, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.31.6 Accessible Memory - SFF - response would fit in EFF - exceeding MAX_APDU_LENGTH
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
19.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN BC 10.15.254 01.01.001 64 42 C0 0F 7F F0 :UserMemoryRead(Count=0F, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_UserMemory_Response with the length set to 0 and no data.
OUT 3C 60 01.01.001 10.15.254 04 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.31.7 Accessible Memory - EFF - response fits in SFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN 3C 60 10.15.254 01.01.001 04 42 C0 0A 7F F0 :UserMemoryRead(Count=0A, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT returns the correct data in SFF.
OUT BC 01.01.001 10.15.254 6E 42 C1 0A 7F F0 11 22 33 44 55 66 77 88 99 AA
:UserMemoryResponse(Count=0A, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.31.8 Accessible Memory - EFF - response fits in EFF
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN 3C 60 10.15.254 01.01.001 04 42 C0 0C 7F F0 :UserMemoryRead(Count=0C, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT returns the correct data in EFF.
OUT 3C 60 01.01.001 10.15.254 10 42 C1 0C 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC
:UserMemoryResponse(Count=0C, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

##### 2.32 Testing of A_UserMemory_Write-Service : Server Test
###### Assumed Memory Model:

 7FF0H to 7FFFH : accessible memory area filled with 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF and so forth

 8000H to 8FFFH : protected memory area

 2.32.1 Accessible Memory - no Verify (10 bytes from 7FF0)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 6E 42 C2 0A 7F F0 11 22 33 44 55 66 77 88 99 AA
:A_UserMemory_Write(Count=0A, Addr=07FF0, Data= 11 22 33 44 55 66 77 88 99 AA)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: After reading the written memory, the same data is returned by the BDUT as written)

IN BC 10.15.254 01.00.001 64 46 C0 0A 7F F0 :A_UserMemory_Read
(Count=0A, Addr=07FF0)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 6E 42 C1 0A 7F F0 11 22 33 44 55 66 77 88 99 AA
:A_UserMemory_Response(Count=0A, Addr=07FF0, Data= 11 22 33 44 55 66 77 88 99 AA)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.32.2 Partly protected Memory - no Verify (2 bytes from 7FFF)
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)

IN BC 10.15.254 01.00.001 66 42 C2 02 7F FF 12 34
:A_UserMemory_Write(Count=02, Addr=07FFF, Data= 12 34)
OUT B0 01.00.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: After reading the affected accessible memory area, a response shall be generated showing that data has not been modified.

IN BC 10.15.254 01.00.001 64 46 C0 01 7F FF :A_UserMemory_Read
(Count=01, Addr=07FFF)
OUT B0 01.00.001 10.15.254 60 C6 :T-Ack(Seq=1)

OUT BC 01.00.001 10.15.254 65 42 C1 01 7F FF FF
:A_UserMemory_Response(Count=01, Addr=07FFF, Data= FF)
IN B0 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect

###### 2.32.3 Inconsistent Length - accessible Memory - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tNumber is greater than data
IN BC 10.15.254 01.01.001 66 42 C2 03 7F F0 11 22 :UserMemoryWrite(Count=03, Addr=07FF0,
Data=11 22 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN BC 10.15.254 01.01.001 67 42 C2 02 7F F0 01 02 03 :UserMemoryWrite(Count=02, Addr=07FF0,
Data=01 02 03 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 64 46 C0 03 7F F0 :UserMemoryRead(Count=03, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

OUT OUT BC 01.01.001 10.15.254 67 42 C1 03 7F F0 FF FF FF :UserMemoryResponse(Count=03,
Addr=07FF0, Data=FF FF FF )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.4 Accessible Memory – Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 6E 42 C2 0A 7F F0 22 33 44 55 66 77 88 99 AA BB
:UserMemoryWrite(Count=0A, Addr=07FF0, Data=22 33 44 55 66 77 88 99 AA BB )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with a Response containing the same data as written..
OUT BC 01.01.001 10.15.254 6E 42 C1 0A 7F F0 22 33 44 55 66 77 88 99 AA BB
:UserMemoryResponse(Count=0A, Addr=07FF0, Data=22 33 44 55 66 77 88 99 AA BB )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.5 Protected Memory – Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 6E 42 C2 0A 80 00 22 33 44 55 66 77 88 99 AA BB
:UserMemoryWrite(Count=0A, Addr=08000, Data=22 33 44 55 66 77 88 99 AA BB )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_UserMemory_Response-PDU with count set to zero
and no data.
OUT BC 01.01.001 10.15.254 64 42 C1 00 80 00 :UserMemoryResponse(Count=00, Addr=08000, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.6 Partly protected Memory – Verify

IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 66 42 C2 02 7F FF 12 34 :UserMemoryWrite(Count=02, Addr=07FFF,
Data=12 34 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_UserMemory_Response-PDU with count set to zero
and no data.
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F FF :UserMemoryResponse(Count=00, Addr=07FFF, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect


-----

###### 2.32.7 Illegal Length - accessible Memory –– for devices supporting SFF only
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN BC 10.15.254 01.01.001 6F 42 C2 0C 7F F0 FF FF FF FF FF FF FF FF FF FF FF FF
:UserMemoryWrite(Count=0C, Addr=07FF0, Data=FF FF FF FF FF FF FF FF FF FF FF FF)
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_UserMemory_Response-PDU with count set to zero
and no data.
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.8 Accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN 3C 60 10.15.254 01.01.001 11 42 C2 0D 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD
:UserMemoryWrite(Count=0D, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.001 64 46 C0 0D 7F F0 :UserMemoryRead(Count=0D, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT 3C 60 01.01.001 10.15.254 11 42 C1 0D 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD
:UserMemoryResponse(Count=0D, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.9 Accessible Memory - EFF but fits SFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
IN 3C 60 10.15.254 01.01.001 0F 42 C2 0B 7F F0 01 02 03 04 05 06 07 08 09 0A 0B
:UserMemoryWrite(Count=0B, Addr=07FF0, Data=01 02 03 04 05 06 07 08 09 0A 0B )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** After reading the written memory, the same data is returned by the BDUT as written.
IN BC 10.15.254 01.01.001 64 46 C0 0B 7F F0 :UserMemoryRead(Count=0B, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 6F 42 C1 0B 7F F0 01 02 03 04 05 06 07 08 09 0A 0B
:UserMemoryResponse(Count=0B, Addr=07FF0, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.10 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
19.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 13 42 C2 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF
:UserMemoryWrite(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 64 46 C0 0B 07 FF :UserMemoryRead(Count=0B, Addr=07FF)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 6F 42 C1 0B 7F F0 01 02 03 04 05 06 07 08 09 0A 0B
:UserMemoryResponse(Count=0B, Addr=07FF0, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.11 Inconsistent Length - accessible Memory - EFF - no Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.001 06 42 C2 03 7F F0 11 22 :UserMemoryWrite(Count=03, Addr=07FF0,
Data=11 22 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN BC 10.15.254 01.01.001 67 42 C2 02 7F F0 AA BB CC :UserMemoryWrite(Count=02, Addr=07FF0,
Data=AA BB CC )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 64 46 C0 0B 7F F0 :UserMemoryRead(Count=0B, Addr=07FF0)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 6F 42 C1 0B 7F F0 01 02 03 04 05 06 07 08 09 0A 0B
:UserMemoryResponse(Count=0B, Addr=07FF0, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.12 Illegal Length - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - no Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
19.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
IN 3C 60 10.15.254 01.01.001 12 42 C2 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE
:UserMemoryWrite(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frame shall be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 63 46 0B 07 FF :MemoryRead(Count=0B, Addr=07FF)
OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 6F 42 C1 0B 7F F0 01 02 03 04 05 06 07 08 09 0A 0B
:UserMemoryResponse(Count=0B, Addr=07FF0, Data=01 02 03 04 05 06 07 08 09 0A 0B )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.13 Inconsistent Length - accessible Memory - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN BC 10.15.254 01.01.001 66 42 C2 03 7F F0 11 22 :UserMemoryWrite(Count=03, Addr=07FF0,
Data=11 22 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_UserMemory_Response-PDU with count set to zero
and no data.
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN BC 10.15.254 01.01.001 67 42 C2 02 7F F0 01 02 03 :UserMemoryWrite(Count=02, Addr=07FF0,
Data=01 02 03 )


-----

OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with an A_UserMemory_Response-PDU with count set to zero
and no data.
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.14 Accessible Memory - EFF - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 13 42 C2 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF
:UserMemoryWrite(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with a Response in EFF containing the same data as written.
OUT 3C 60 01.01.001 10.15.254 13 42 C1 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF
:UserMemoryResponse(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE
FF )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.15 Accessible Memory - EFF - response fits in SFF - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 07 42 C2 03 7F F0 01 02 03 :UserMemoryWrite(Count=03, Addr=07FF0,
Data=01 02 03 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT replies with a Response in SFF containing the same data as written.
OUT BC 01.01.001 10.15.254 67 42 C1 03 7F F0 01 02 03 :UserMemoryResponse(Count=03, Addr=07FF0,
Data=01 02 03 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.16 Accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify
@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
19.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 13 42 C2 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF
:UserMemoryWrite(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE FF )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on


-----

@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The frames may be ignored. Reading memory from the device shows the data has not
been changed.
IN BC 10.15.254 01.01.001 64 46 C0 03 7F F0 :UserMemoryRead(Count=03, Addr=07FF0)
OUT BC 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)
OUT BC 01.01.001 10.15.254 67 42 C1 03 7F F0 01 02 03 :UserMemoryResponse(Count=03, Addr=07FF0,
Data=01 02 03 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.17 Inconsistent Length - accessible Memory - EFF - Verify
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=1101)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is greater than data
IN 3C 60 10.15.254 01.01.001 06 42 C2 03 7F F0 11 22 :UserMemoryWrite(Count=03, Addr=07FF0,
Data=11 22 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
@[tNumber is less than data
IN BC 10.15.254 01.01.001 67 42 C2 02 7F F0 AA BB CC :UserMemoryWrite(Count=02, Addr=07FF0,
Data=AA BB CC )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** The BDUT sends an A_UserMemory_Response with the length set to 0 and no data.
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

###### 2.32.18 Illegal Length - accessible Memory - EFF - exceeds MAX_APDU_LENGTH - Verify

@[tThis test case is CONDITIONAL and not applicable if the MAX_APDU_LENGTH is equal or greater than
19.
IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)
@[tEnable verify
IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN 3C 60 10.15.254 01.01.001 12 42 C2 0F 7F F0 11 22 33 44 55 66 77 88 99 AA BB CC DD EE
:UserMemoryWrite(Count=0F, Addr=07FF0, Data=11 22 33 44 55 66 77 88 99 AA BB CC DD EE )
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)
@[tThe frame might be dropped and there would be no answer, even if Verify Mode is switched on
@[tIf the frame is not dropped, the next two telegrams shall be enabled
OUT BC 01.01.001 10.15.254 64 42 C1 00 7F F0 :UserMemoryResponse(Count=00, Addr=07FF0, Data=)
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
**@[tAcceptance:** Reading memory from the device shows the data has not been changed.
IN BC 10.15.254 01.01.001 64 46 C0 03 7F F0 :UserMemoryRead(Count=03, Addr=07FF0)
OUT BC 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)


-----

OUT BC 01.01.001 10.15.254 67 42 C1 03 7F F0 01 02 03 :UserMemoryResponse(Count=03, Addr=07FF0,
Data=01 02 03 )
IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

##### 2.33 Testing of A_UserManufacturerInfo_Read-Service : Server Test 

###### 2.33.1 Read Management Type
IN B0 10.15.254 01.00.001 60 80 :T-Connect(Addr=1001)
IN BC 10.15.254 01.00.001 61 42 C5 :A_UserManufacturerInfo_Read()
OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

###### Acceptance: BDUT sends a response containing manufacturer's code and type number according manufacturer's declarations

OUT BC 01.01.001 10.15.254 64 42 C6 12 12 34 :A_UserManufacturerInfo_Response
(Code=12, Type Number=1234)
IN BC 10.15.254 01.00.001 60 C2 :T-Ack(Seq=0)
IN B0 10.15.254 01.00.001 60 81 :T-Disconnect


-----

#### 3 Verification of implemented Interface Objects and Properties

###### For system profiles requiring the implementation of interface objects and properties according Annex A to Volume 6, with the help of the ETS device Editor Tool, it shall be checked that the BDUT supports the mandatory interface objects and properties. 

 For those mandatory properties that can be written, random tests shall be performed to check whether new values are accepted by the BDUT. 

 It shall moreover be checked that the Interface Object index start with 0 and are consecutively numbered. 


-----

#### 4 Test of Address Table

##### 4.1 General

Location  Length

IA

GA # 1

GA # 2

###### Figure 4: Structure of Address Table

##### 4.2 Server Tests
###### See Link Layer Tests 

##### 4.3 Client Tests

###### • Make download of Address Table with client and record the frames with EITT

 • Compare the trace of EITT with the relevant management procedures in the Resource document

 • Read out Server device and check the contents of the Group Address Table with the reference. Check sorting of the addresses. 


-----

#### 5 Test of structure of Association Table

##### 5.1 General

Location  Length

Assoc. Obj.

s.s.

Assoc. Obj.

###### Figure 5: Structure of Association Table

##### 5.2 Server Tests

###### 5.2.1 Receiving telegrams
 • Test 1 – 1 to 1 relation – Stimulate the test object by sending a telegram on the group address linked to it. Check reaction via the application. 

Adr. Assoc. Obj.

#0 IA 0

#1 GA 1 1 1 1

#1 GA 2 2

###### Figure 6: Test 1 to 1

 Test 2 – 1 to n relation - as Test 1 Stimulate all test objects by sending a telegram on the group address linked to it. Check reaction via the application.

|Assoc.|Obj.|
|---|---|

|Assoc.|Obj.|
|---|---|

|GA 1|Col2|1|1|Col5|1|
|---|---|---|---|---|---|
|GA 1||||||


-----

|1|1|Col3|
|---|---|---|

|1|4|Col3|
|---|---|---|
|1|4||


###### Figure 7: Test 1 to n

 • Test 3 –n to 1 relation - as Test 1 - Stimulate the test object by sending a telegram on the group addresses linked to it. Check reaction via the application.


###### 0


#0

#1


###### IA


#2 GA 2 1

#3 GA 3

|1|2|
|---|---|

|2|2|
|---|---|

|3|2|
|---|---|


###### Figure 8: Test n to 1


-----

###### • Test 4 –n to n relation (optional) - as Test 1 - check the exact reaction of all linked objects

IA

0
1 1

GA 1

1 2 1

GA 2

2

GA 3

2 2

GA 4 3

2 1

###### Figure 9: Test n to n

 5.2.2 Sending telegrams
 • Test 1 – 1 to 1 relation – Stimulate the application to send one telegram on the sending group address. 

IA

0

GA 1 1 1 1 ss

GA 2 2

GA 3 3

###### Figure 10: Test 1 to 1

 • Test 2 – 1 to n relation - as Test 1 – additional reaction on all linked group objects.

|1|1|
|---|---|

|1|2|
|---|---|

|2|2|
|---|---|

|1|Col2|
|---|---|
|1||

|GA 1|Col2|1|1|Col5|1|
|---|---|---|---|---|---|
|GA 1||||||

|GA 1|Col2|
|---|---|

|1|Col2|1|
|---|---|---|

|2|Col2|2|
|---|---|---|
|2|||


-----

###### • Test 3 –n to 1 relation - as Test 1 – additionally no telegram on any other linked group address.


IA


ss

|1|1|
|---|---|

|2|1|
|---|---|

|Col1|0|
|---|---|
|GA 1<br>GA 2<br>1<br>2<br>1<br>1<br>GA 3<br>2<br>1|GA 1<br>GA 2<br>1<br>2<br>1<br>1<br>GA 3<br>2<br>1|
|GA 3|GA 3|


###### Figure 12: Test n to 1


##### 5.3 Client Tests

###### • Make download of Association Table with client and record the frames with EITT

 • Compare the trace of EITT with the relevant management procedures in the Resource document

 • Read out Server device and check the contents of the Association Table with the reference. 


-----

#### 6 Network Management Client

##### 6.1 Introduction
###### This chapter of the Handbook merely contains the Management Client[14] test. The Server tests are laid down in clause 2 of this document.

 To be completed. 

14 A Management “Client” is the functionality which allows a client (e.g. PC with ETS, controller) to manage
remotely across the network a device (or rather its resources [addresses, links, parameters, application, …)


-----

