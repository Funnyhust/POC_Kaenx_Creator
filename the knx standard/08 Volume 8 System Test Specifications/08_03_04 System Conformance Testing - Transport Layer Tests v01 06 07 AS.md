## KNX System Conformance Testing 8

### KNX Network, Transport, Application (Interface) Layer, Management Service Testing

 Transport Layer Tests

###### Summary

 This document contains the Transport Layer Test specifications.


-----

##### Document updates

###### Version Date Modifications 1.0 2001.15.06 Approved Standard 1.1 2005-02-25 Approved Standard – integration of AN 002 – 009 – relevant parts of AN 041 1.2 2009-06 Readying document for publication as part of V2.0 of the KNX specifications 1.3 2010-01 Resolving comments from Final voting – publication as AS 01.04.00 2013.06.26 Avoiding use of local services for TL testing following availability RfV of EITT 4.1 supporting multiple interfaces – integrating comments
 of KonCert 1013 meeting 01.04.00 2014-02 Resolution of comments from Release for Voting FV
 01.05.00 2015-04 No comments in FV voting – publication as AS – incrementing AS version number as identical to previous version
 01.06.00 2019-06 Minor corrections of some tests acc. AN181 – preparation of document for automatic generation via EITT – updating of clause 2 01.06.01 2019-06 Addressing comments of Certification Group meeting 062019 01.06.02 2019-06 Corrections following Certification Group meeting 062019 – removed style 1 and 2 from the test specifications following AN181 01.06.03 2019-06 Resolved comments from Certification Group member – removing some more remnants from style 1 and 2 01.06.04 2019-07 Small corrections in clause 2.3 – readying for RfV 01.06.05 2019-09 Resolution of comments from Release for Voting 01.06.06 2019-12 No comments in FV voting – Publication as AS 01.06.07 2020-08 General: Removed all Style 1 and 2 test cases according AN181. Updated test cases 2.x/4.x and 6.x according to 8/3/4 v1.06.07.

##### References

[01] Chapter 3/3/4 “Transport Layer”

[02] Chapter 3/3/7 “Application Layer”

[03] Chapter 3/6/3 “External Message Interface”

[04] Chapter 8/3/7 “Application (Interface) Layer Testing – Network Management Server/Client Testing”

Filename: 08_03_04 Transport Layer Tests v01 06 07 AS.docx
Version: 01.06.07
Status: Approved Standard
Save date: 2020.08.19
Number of pages: 74

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.15.06|Approved Standard|
|1.1|2005-02-25|Approved Standard – integration of AN 002 – 009 – relevant<br>parts of AN041|
|1.2|2009-06|Readying document for publication as part of V2.0 of the KNX<br>specifications|
|1.3|2010-01|Resolving comments from Final voting –publication as AS|
|01.04.00<br>RfV|2013.06.26|Avoiding use of local services for TL testing following availability<br>of EITT 4.1 supporting multiple interfaces – integrating comments<br>of KonCert 1013 meeting|
|01.04.00<br>FV|2014-02|Resolution of comments from Release for Voting|
|01.05.00<br>AS|2015-04|No comments in FV voting – publication as AS – incrementing<br>version number as identical to previous version|
|01.06.00|2019-06|Minor corrections of some tests acc. AN181 – preparation of<br>document for automatic generation via EITT – updating of clause<br>2|
|01.06.01|2019-06|Addressing comments of Certification Group meeting 062019|
|01.06.02|2019-06|Corrections following Certification Group meeting 062019 –<br>removed style 1 and 2 from the test specifications following<br>AN181|
|01.06.03|2019-06|Resolved comments from Certification Group member –<br>removing some more remnants from style 1and 2|
|01.06.04|2019-07|Smallcorrections inclause 2.3 – readying for RfV|
|01.06.05|2019-09|Resolution of comments from Release for Voting|
|01.06.06|2019-12|No comments in FV voting – Publication as AS|
|01.06.07|2020-08|**General**: Removed all Style 1 and 2 test cases according AN181.<br>Updated test cases 2.x/4.xand 6.xaccording to 8/3/4 v1.06.07.|


-----

##### Contents

###### 1 Foreword ................................................................................................................................. 7

 2 General Transport Layer Tests ............................................................................................ 8 2.1 Transport Layer tests for multicast communication .............................................. 8 2.2 Transport Layer test for broadcast communication ............................................... 9 2.3 Transport Layer tests point-to-point connection oriented communication .......... 10 2.4 Transport Layer tests point-to-point connectionless communication .................. 11

 3 State machine of connection-oriented communication relationship ............................... 12

 4 Testing of Timing Requirements of Transport Layer State Machine ............................. 14 4.1 Testing of the connection-time-out-timer ............................................................ 14 4.2 Testing of the acknowledgement-time-out timer ................................................. 14

 5 Testing of Transport Layer State Machine, with EMI ..................................................... 15 5.1 Introduction .......................................................................................................... 15 5.1.1 General .................................................................................................. 15 5.1.2 Test environment when testing BCU (with EMI) ................................. 15 5.2 States caused by a Connect and Disconnect – Service ........................................ 15 5.2.1 Connect from a remote device .............................................................. 15 5.2.1.1 Sequence 1: Procedure with initial state ‘CLOSED’ .............................. 15 5.2.1.2 Sequence 2: Procedure with initial state ‘OPEN_IDLE’ ........................ 17 5.2.1.3 Sequence 3: Procedure with initial state ‘OPEN_WAIT’ ....................... 18 5.2.2 Connect from a remote device during an existing connection .............. 19 5.2.2.1 Sequence 4 : Procedure with initial state ‘OPEN_IDLE’ ....................... 19 5.2.2.2 Sequence 5: Procedure with initial state ‘OPEN_WAIT’ ....................... 20 5.2.3 Disconnect from a remote device ......................................................... 20 5.2.3.1 Sequence 6: Procedure with initial state ‘CLOSED’ .............................. 20 5.2.3.2 Sequence 7: Procedure with initial state ‘OPEN_IDLE’ ........................ 21 5.2.3.3 Sequence 8: Procedure with initial state ‘OPEN_WAIT’ ....................... 22 5.2.4 Disconnect from a remote device during an existing connection ......... 22 5.2.4.1 Sequence 9: Procedure with initial state ‘OPEN_IDLE’ ........................ 22 5.2.4.2 Sequence 10: Procedure with initial state ‘OPEN_WAIT’ ..................... 23 5.2.5 Sequence 11 : Connect from the local user to an existing device ......... 24 5.2.6 Sequence 12: Connect from the local user to an non existing device ... 25 5.2.7 Connect from the local user during an existing connection .................. 26 5.2.7.1 Sequence 13: Procedure with initial state ‘OPEN_IDLE’ ...................... 26 5.2.7.2 Sequence 14: Procedure with initial state ‘OPEN_WAIT’ ..................... 27 5.2.8 Disconnect from the local user ............................................................. 28 5.2.8.1 Sequence 15: Procedure with initial state ‘OPEN_IDLE’ ...................... 28 5.2.8.2 Sequence 16: Procedure with initial state ‘OPEN_WAIT’ ..................... 29 5.2.9 Sequence 17: Disconnect from the local user without an existing connection ............................................................................................. 30 5.2.10 Connection timeout ............................................................................... 30 5.2.10.1 Sequence 18: Procedure with initial state ‘OPEN_IDLE’ ...................... 30 5.2.11 Acknowledgement timeout ................................................................... 32 5.2.11.1 Sequence 19: Procedure with initial state ‘OPEN_WAIT’ ..................... 32


-----

###### 5.3 Reception of data ................................................................................................. 33 5.3.1 Sequence 20a: Reception of a correct N_Data_Individual – Procedure with initial state ‘OPEN_IDLE’............................................................ 33 5.3.2 Sequence 20b: Reception of a correct N_Data_Individual – Procedure with initial state ‘OPEN_WAIT’ .......................................................... 34 5.3.3 Reception of a repeated N_Data_Individual ......................................... 35 5.3.3.1 Sequence 21: Procedure with initial state ‘OPEN_IDLE’ ...................... 35 5.3.3.2 Sequence 22: Procedure with initial state ‘OPEN_WAIT’ ..................... 36 5.3.4 Reception of data N_Data_Individual with wrong sequence number .. 37 5.3.4.1 Sequence 23: Procedure with initial state ‘OPEN_IDLE’ ...................... 37 5.3.4.2 Sequence 24: Procedure with initial state ‘OPEN_WAIT’ ..................... 38 5.3.5 Reception of data N_Data_Individual with wrong source address ....... 39 5.3.5.1 Sequence 25: Procedure with initial state ‘OPEN_IDLE’) ..................... 39 5.3.5.2 Sequence 26: Procedure with initial state ‘OPEN_WAIT ...................... 40 5.4 Transmission of data ............................................................................................ 41 5.4.1 T_DATA_CONNECTED-reqest from the local user ........................... 41 5.4.1.1 Sequence 27: Procedure with initial state ‘OPEN_IDLE’ ...................... 41 5.4.1.2 Sequence 28: Procedure with initial state ‘CLOSED’ to check event 15 42 5.4.1.3 Sequence 29: Procedure with initial state ‘OPEN_WAIT to check event 15 42 5.4.2 Reception of a T_ACK_PDU ............................................................... 43 5.4.2.1 Sequence 30: Procedure with initial state ‘OPEN_IDLE’ ...................... 43 5.4.3 Reception of an T_ACK_PDU with wrong sequence number ............. 44 5.4.3.1 Sequence 31: Procedure with initial state ‘OPEN_IDLE’ ...................... 44 5.4.3.2 Sequence 32: Procedure with initial state ‘OPEN_WAIT’ ..................... 45 5.4.3.3 Sequence 33: Procedure with initial state ‘OPEN_IDLE’ ...................... 46 5.4.3.4 Sequence 34: Procedure with initial state ‘OPEN_WAIT’ ..................... 47 5.4.4 Reception of T_NAK_PDU with wrong sequence number .................. 48 5.4.4.1 Sequence 35: Procedure with initial state ‘OPEN_IDLE’ ...................... 48 5.4.4.2 Sequence 36: Procedure with initial state ‘OPEN_WAIT’ ..................... 49 5.4.5 Sequence 37 : Reception of T_NAK_PDU with correct sequence number - Procedure with initial state ‘OPEN_IDLE’ ........................... 50 5.4.6 Sequence 38: Reception of T_NAK_PDU and maximum number of repetitions is not reached - Procedure with initial state ‘OPEN_WAIT’ ..................................................................................... 51 5.4.7 Sequence 39: Reception of T_NAK_PDU and maximum number of repetitions is reached - Procedure with initial state ‘OPEN_WAIT’ .... 52 5.4.8 Reception of T_NAK_PDU with wrong connection address ............... 53 5.4.8.1 Sequence 40: Procedure with initial state ‘OPEN_IDLE’ ...................... 53 5.4.8.2 Sequence 41: Procedure with initial state ‘OPEN_WAIT’ ..................... 53 5.5 Events started in state ‚CLOSED’ ....................................................................... 54 5.5.1 Sequence 42: Procedure with initial state ‘CLOSED’ .......................... 54

 6 Testing of Transport Layer State Machine, without EMI ............................................... 55 6.1 Introduction .......................................................................................................... 55 6.1.1 General .................................................................................................. 55 6.1.2 Test environment for closed devices (without EMI) ............................ 55


-----

###### 6.2 States caused by a Connect and Disconnect – Service ........................................ 56 6.2.1 Connect from a remote device .............................................................. 56 6.2.1.1 Sequence 1: Procedure with initial state ‘OPEN_IDLE’ ........................ 56 6.2.1.2 Sequence 2: Procedure with initial state ‘OPEN_WAIT’ ....................... 56 6.2.2 Connect from a remote device during an existing connection .............. 56 6.2.2.1 Sequence 3 : Procedure with initial state ‘OPEN_IDLE’ ....................... 56 6.2.2.2 Sequence 4: Procedure with initial state ‘OPEN_WAIT’ ....................... 57 6.2.3 Disconnect from a remote device ......................................................... 58 6.2.3.1 Sequence 5: Procedure with initial state ‘CLOSED’ .............................. 58 6.2.3.2 Sequence 6: Procedure with initial state ‘OPEN_IDLE’ ........................ 58 6.2.3.3 Sequence 7: Procedure with initial state ‘OPEN_WAIT’ ....................... 58 6.2.4 Disconnect from a remote device during an existing connection ......... 59 6.2.4.1 Sequence 8: Procedure with initial state ‘OPEN_IDLE’ ........................ 59 6.2.4.2 Sequence 9: Procedure with initial state ‘OPEN_WAIT’ ....................... 59 6.2.5 Connection timeout ............................................................................... 60 6.2.5.1 Sequence 10: Procedure with initial state ‘OPEN_IDLE’ ...................... 60 6.2.6 Acknowledgement timeout ................................................................... 60 6.2.6.1 Sequence 11: Procedure with initial state ‘OPEN_WAIT’ ..................... 60 6.3 Reception of data ................................................................................................. 61 6.3.1 Reception of a correct N_Data_Individual ........................................... 61 6.3.1.1 Sequence 12: Procedure with initial state ‘OPEN_IDLE’ ...................... 61 6.3.1.2 Sequence 13: Procedure with initial state ‘OPEN_WAIT’ ..................... 62 6.3.2 <Deprecated> ........................................................................................ 63 6.3.3 Reception of a repeated N_Data_Individual ......................................... 63 6.3.3.1 Sequence 14: Procedure with initial state ‘OPEN_IDLE’ ...................... 63 6.3.3.2 Sequence 15: Procedure with initial state ‘OPEN_WAIT’ ..................... 64 6.3.4 Reception of data N_Data_Individual with wrong sequence number .. 64 6.3.4.1 Sequence 16: Procedure with initial state ‘OPEN_IDLE’ ...................... 64 6.3.4.2 Sequence 17: Procedure with initial state ‘OPEN_WAIT’ ..................... 65 6.3.5 Reception of data N_Data_Individual with wrong source address ....... 66 6.3.5.1 Sequence 18: Procedure with initial state ‘OPEN_IDLE’) ..................... 66 6.3.5.2 Sequence 19: Procedure with initial state ‘OPEN_WAIT’ ..................... 66 6.4 Transmission of data ............................................................................................ 67 6.4.1 Reception of a T_ACK_PDU ............................................................... 67 6.4.1.1 Sequence 20: Procedure with initial state ‘OPEN_IDLE’ ...................... 67 6.4.2 Reception of an T_ACK_PDU with wrong sequence number ............. 67 6.4.2.1 Sequence 21: Procedure with initial state ‘OPEN_IDLE’ ...................... 67 6.4.2.2 Sequence 22: Procedure with initial state ‘OPEN_WAIT’ ..................... 68 6.4.3 Reception of T_ACK_PDU with wrong connection address ............... 68 6.4.3.1 Sequence 23: Procedure with initial state ‘OPEN_IDLE’ ...................... 68 6.4.3.2 Sequence 24: Procedure with initial state ‘OPEN_WAIT’ ..................... 69 6.4.4 Reception of T_NAK_PDU with wrong sequence number .................. 69 6.4.4.1 Sequence 25: Procedure with initial state ‘OPEN_IDLE’ ...................... 69 6.4.4.2 Sequence 26: Procedure with initial state ‘OPEN_WAIT’) .................... 70


-----

###### 6.4.5 Sequence 27 : Reception of T_NAK_PDU with correct sequence number - Procedure with initial state ‘OPEN_IDLE’ ........................... 70 6.4.6 Sequence 28: Reception of T_NAK_PDU and maximum number of repetitions is not reached - Procedure with initial state ‘OPEN_WAIT’ ..................................................................................... 71 6.4.7 Sequence 29: Reception of T_NAK_PDU and maximum number of repetitions is reached - Procedure with initial state ‘OPEN_WAIT’ .... 72 6.4.8 Reception of T_NAK_PDU with wrong connection address ............... 73 6.4.8.1 Sequence 30: Procedure with initial state ‘OPEN_IDLE’ ...................... 73 6.4.8.2 Sequence 31: Procedure with initial state ‘OPEN_WAIT’ ..................... 73 6.5 Events started in state ‚CLOSED’ ....................................................................... 74 6.5.1 Sequence 32: Procedure with initial state ‘CLOSED’ .......................... 74


-----

#### 1 Foreword
###### In order to check the compatibility of devices as regards Transport Layer, the following tests need to be carried out: 

 - For any kind of device, the general transport layer tests as laid down in clause 2 need to be carried out;  - When a device supports connection-oriented communication, the tests to check compliance to the Transport Layer State Machine timing requirements as laid down in clause 4 shall in addition be carried out;  - In the case where the device does not support a PEI accessible via local services (EMI) and supports connection oriented communication, the tests as contained in clause 6 shall be carried out; - In the case where the device does support a PEI accessible via local services (EMI) and supports connection oriented communication, the tests as contained in clause 5 shall be carried out; 

**Transport Layer**
**Tests**

**Clause 2**
General Transport Layer Tests

Yes Support of No

connectionoriented
communication?

**Clause 4**
Tests of Timing Requirements of
TL State Machine

Yes

Via PEI accessible?

No

**Clause 6** **Clause 5**
Tests of TL State Machine Tests of TL State Machine
without EMI with EMI

**End of Transport**
**Layer Tests**

###### Figure 1 - Flowchart Transport Layer Test Requirements

|Clause 2<br>General Transport Layer Tests|Col2|
|---|---|
|||


Support of
connectionoriented
communication?


**Clause 4**
Tests of Timing Requirements of
TL State Machine


**Clause 5**
Tests of TL State Machine
with EMI


**Transport Layer**
**Tests**


-----

#### 2 General Transport Layer Tests
##### 2.1 Transport Layer tests for multicast communication
###### a) Positive case: checking whether BDUT sends respectively accepts telegrams with correct Transport Control Field (TPCI) – Test implicitly carried out during Application Interface Layer Tests of [04].

 b) Negative case: 

 Multicast-addressed frames with incorrect TPCI coding for multicast communication.

 Test purpose: Check whether the DUT does not change the value of a communication object with a Group Value write/response command with the Transport Control field set to the value “40h”, which indicates the frame as “T_Data_Connected-PDU” with SeqNo == 0 in the Transport Control field.

 Test Precondition: Ensure that GA 1001 has been assigned to a 1 bit Group Object of the BDUT – Ensure that the update on response flag is set. Set the current Individual Address of the BDUT to be 1001.

 Assigning individual address to BDUT.

 (1)  IN BC 01.01.254 00/0/000 8D 03 DE FE ED BA BE CA FE 11 01 00 00 00 00 :IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

 Send GroupValueWrite first to GO with GA 1001 to write value

 (2)  IN BC 01.01.254 02/1/001 E1 00 81 :GroupValueWrite(Grp=02/1/001, 01)

 Group Value Write with TPCI of T_Data_Connected.

 (3)  IN BC 11 FE 11 01 E1 40 80 :GroupValueWrite(Grp=02/1/001, 00)

 Check if value was not written

 (4)  IN BC 01.01.254 02/1/001 E1 00 00 :GroupValueRead(Grp=02/1/001)

 (5)  OUT BC 01.01.001 02/1/001 E1 00 41 :GroupValueResponse(Grp=02/1/001, 01)

 Group Value Response with TPCI of T_Connect.

 (6)  IN BC 11 FE 11 01 E2 80 40 00 :GroupValueResponse(Grp=02/1/001, 00)

 Check if value was not written

 (7)  IN BC 01.01.254 02/1/001 E1 00 00 :GroupValueRead(Grp=02/1/001)

 (8)  OUT BC 01.01.001 02/1/001 E1 00 41 :GroupValueResponse(Grp=02/1/001, 01)

 Test purpose: Check whether the DUT does not react to the reading of the value of a communication object with a Group Value Read command with an undefined Transport Control field.

 Group Value Read with undefined TPCI.

 (9)  IN BC 11 FE 11 01 E1 C0 00 :GroupValueRead(Grp=02/1/001)

 BDUT does not react

 Acceptance: BDUT does not accept the frames. Check BDUT’s behaviour, e.g. by reading back the values respectively checking that the BDUT does not generate any responses to read telegrams.

 Test purpose: Check whether the DUT does not change the value of a communication object with a Group Value write command with TPCI coding 00xxxxb, where x is different from 0.

 Group Value Write with Sequence number 4.

 (10)  IN BC 11 FE 11 01 E1 10 80 :GroupValueWrite(Grp=02/1/001, 00)

 Acceptance: Check if value was not written

 (11)  IN BC 01.01.254 02/1/001 E1 00 00 :GroupValueRead(Grp=02/1/001)

 (12)  OUT BC 01.01.001 02/1/001 E1 00 41 :GroupValueResponse(Grp=02/1/001, 01)


-----

###### Acceptance: BDUT does not accept the frames. Check BDUT’s behaviour, e.g. by reading back the values respectively checking that the BDUT does not generate any responses to read telegrams.

##### 2.2 Transport Layer test for broadcast communication
###### a) positive case: checking whether BDUT sends respectively accepts telegrams with correct Transport Control Field (TPCI) – Test implicitly carried out during Application Interface Layer Tests of [04]

 b) negative case: 

 Broadcast-addressed frames with incorrect TPCI coding for broadcast communication.

 Test purpose: Check whether the DUT does not change the value of its individual address with an Individual Address Write command with the Transport Control field set to the value “40h”, which indicates the frame as “T_Data_Connected-PDU” with SeqNo == 0 in the Transport Control field.

 Test Precondition: Activate Programming Mode and (indirectly) check IA. Other settings same as clause 2.1

 (1)  IN BC 01.01.254 01.01.001 66 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (2)  OUT BC 01.01.001 01.01.254 66 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 IndAddrWrite(Addr=1234) with TPCI of T_Data_Connected.

 (3)  IN BC 11 FE 00 00 E3 40 C0 12 34 :IndAddrWrite(Addr=01.02.052)

 check if BDUT still has the IA 1001

 (4)  IN BC 01.01.254 00/0/000 E1 01 00 :IndAddrRead()

 (5)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

 IndAddrWrite(Addr=1234) with TPCI of T_Connect.

 (6)  IN BC 11 FE 00 00 E3 80 C0 12 34 :IndAddrWrite(Addr=01.02.052)

 check if BDUT still has the IA 1001

 (7)  IN BC 01.01.254 00/0/000 E1 01 00 :IndAddrRead()

 (8)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

 IndAddrRead() with undefined TPCI

 (9)  IN BC 11 FE 00 00 E1 C1 00 :IndAddrRead()

 BDUT shows no reaction

 Acceptance: BDUT does not accept the frames. Check BDUT’s behaviour, e.g. by reading back the values respectively checking that the BDUT does not generate any responses to read telegrams.

 Broadcast-addressed frames with TPCI coding 00xxxxb, where x is different from 0.

 IndAddrWrite(Addr=1234) with Sequence number 4.

 (10)  IN BC 11 FE 00 00 E3 10 C0 12 34 :IndAddrWrite(Addr=01.02.052)

 check if BDUT still has the IA 1001

 (11)  IN BC 01.01.254 00/0/000 E1 01 00 :IndAddrRead()

 (12)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

 Deactivate Programming Mode

 (13)  IN BC 01.01.254 01.01.001 66 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001, Data=00 )


-----

###### (14)  OUT BC 01.01.001 01.01.254 66 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=00 )

 Acceptance: BDUT does not accept the frames. Check BDUT’s behaviour, e.g. by reading back the values respectively checking that the BDUT does not generate any responses to read telegrams.

##### 2.3 Transport Layer tests point-to-point connection oriented communication
###### a) positive case: checking whether BDUT sends respectively accepts telegrams with correct Transport Control Field (TPCI) – Test implicitly carried out during Application Interface Layer Tests of [04].

 b) negative case: 

 Test purpose: Check whether the DUT does not react to a Mask Version Read with the Transport Control field set to the value '00h' and AT type = 1 which indicates the frame as 'T_Data_Group-PDU' (case Broadcast can not be tested as destination address is always different than 0).

 Test Precondition: : Other settings same as clause 2.1.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (2)  IN BC 11 FE 11 01 E1 03 00 :DeviceDescriptorRead(DescType=00)

 (3)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 BDUT does not react.

 Test purpose: Check whether the DUT does not react to a Mask Version Read with the Transport Control field set to the value '00h' and AT type = 0 which indicates the frame as 'T_Data_Individual-PDU'

 (4)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (5)  IN BC 11 FE 10 01 61 03 00 :DeviceDescriptorRead(DescType=00)

 (6)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 BDUT does not react.

 Test purpose: Check whether the DUT does not react to a Mask Version Read with the Transport Control field set to the value '10h' and AT type = 0 which indicates the frame as 'T_Connect-PDU'

 (7)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (8)  IN BC 11 FE 10 01 61 83 00 :DeviceDescriptorRead(DescType=00)

 (9)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 BDUT does not react.

 Test purpose: Check whether the DUT does not react to a Mask Version Read with the Transport Control field set to the value '11h' and AT type = 0 which indicates an undefined TPCI coding

 (10)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (11)  IN BC 11 FE 10 01 61 C3 00 :DeviceDescriptorRead(DescType=00)

 (12)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 BDUT does not react.

 Acceptance: BDUT does not accept the frames. Check that the BDUT does not return a T-Ack or a Mask Version response.

 Test purpose: Telegram sequence with connection oriented communication interrupted by broadcast or group telegrams.

 (13)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (14)  IN BC 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)


-----

###### (15)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (16)  OUT BC 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Value Write command to group address supported by the device.

 (17)  IN BC 01.01.254 02/1/001 E1 00 81 :GroupValueWrite(Grp=02/1/001, 01)

 (18)  IN BC 01.01.254 00/0/000 E1 01 00 :IndAddrRead()

 (19)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 Check whether TL connection is still active.

 (20)  IN BC 01.01.254 01.01.001 61 47 00 :DeviceDescriptorRead(DescType=00)

 (21)  OUT B0 01.01.001 01.01.254 60 C6 :T-Ack(Seq=1)

 (22)  OUT BC 01.01.001 01.01.254 63 47 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (23)  IN B0 01.01.254 01.01.001 60 C6 :T-Ack(Seq=1)

 (24)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 Acceptance: BDUT does not interrupt the established transport connection (it however may write the relevant addressed group object) and shows that the TL connection remains open.

##### 2.4 Transport Layer tests point-to-point connectionless communication
###### a) Positive case: checking whether BDUT sends respectively accepts telegrams with correct Transport Control Field (TPCI) – Test implicitly carried out during Application Interface Layer Tests of [04].

 b) Negative case: 

 Purpose: Check BDUT´s acceptance of connectionless frames with incorrect TPCI-coding.

 Procedure: Use a telegram generator (e.g. EITT) to send connectionless frames with incorrect TPCI coding for connectionless communication:

 PropertyRead(Obj=00, Prop=36, Count=1, Start=001) with TPCI of T_Data_Broadcast\T_Data_Group.

 (1)  IN BC 11 FE 11 01 E5 03 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36, Count=1, Start=001)

 PropertyRead(Obj=00, Prop=36, Count=1, Start=001) with TPCI of T_Data_Connected.

 (2)  IN BC 11 FE 11 01 65 43 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36, Count=1, Start=001)

 PropertyRead(Obj=00, Prop=36, Count=1, Start=001) with an undefined TPCI value.

 (3)  IN BC 11 FE 11 01 65 83 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36, Count=1, Start=001)

 PropertyRead(Obj=00, Prop=36, Count=1, Start=001) with TPCI of T_(N)Ack.

 (4)  IN BC 11 FE 11 01 65 C3 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36, Count=1, Start=001)

 Acceptance: BDUT does not accept the frames and does not produce and responses.


-----

#### 3 State machine of connection-oriented communication relationship
###### A KNX end device only has a single one-to-one connection-oriented communication relationship.

 To test the state machine of transport-layer the following services can only be used on a connection- oriented communication relationship:

_Local Layer-4 User_ _Remote Layer-4 User_


T_Data_Broadcast.con

T_ Data_Broadcast.req

T_Data_Group.con

T_Data_Group.req T_Data_Individual.req

Multicast Broadcast

###### - T_Connect

 - T_Disconnect


T_Data_Connected.con T_Disconnect.con

T_Data_Connected.req T_Disconnect.req


T_ Data_Individual.ind
T_ Data_Group.ind


T_Connect.ind


connection- one-to-one connection-oriented

less

Transport Layer

|T_ Data_Broadc<br>_Data_Group.con<br>ata_Group.req|Col2|ast.req T_Data_Connect<br>T_ Data_Individual.con<br>T_Data_Individual.req T|Col4|ed.req T_Disconnec<br>T_Connect.con<br>_Connect.req|
|---|---|---|---|---|
|Multicast|Broadcast|Broadcast|one-to-one<br>connection-<br>less|one-to-one<br>connection-<br>less|

|Multicast|Broadcast|one-to-one<br>connection-<br>less|
|---|---|---|


###### Figure 2 - Interactivity of the Transport Layer


###### - T_Data_Connected

 The transport-layer provides a supervision of the connection with a connection-time-out-timer. If the timer expires or if an unrecoverable error occurs, the transport-layer will release the connection immediately.

 T_Data_Connected services are repeated up to three times if the T_Data_Connected.req is not acknowledged from the remote transport-layer entity within an acknowledgement-time-out-time. Repetitions of T_Data_Connected services are detected using a sequence number. The state machine is designed for only one connection at a time. To use more than one connection at a time several state machines are needed, one for each connection.

The state machine has the following states:

CLOSED The connection is closed
OPEN_IDLE The connection is open.
OPEN_WAIT The state machine is waiting for a T_ACK when data have been sent to
the remote partner

###### The tests in the following clauses examine the actual state transition, the correct event and the executed action. For further information see [01], that provides a specification of the complete state machine with reactions to all possible events in all states  The state diagrams are inserted in these test specifications for explanatory reasons.


-----

###### The underneath example explains the structure of the state diagram.


**Event**
**-No.**

0/1


**Events or Actions** **STATES** **Events or Actions** **Event**
**-No.**
N_Data_Individual.ind
(T_CONNECT_REQ_PDU)

CLOSED

A1
OPEN_IDLE

T_Connect.ind
(connection number =0)

###### Figure 3: Example of a TL state diagram


###### All Sequences as given in clause 4 contain local services conforming to the EMI2 protocol. For further information see [03]. Some of the underneath tests are marked with ‘(without EMI)’, if a test can be executed on devices without EMI. To achieve the initial state, in some cases the Sequence will however have to be modified. Stimulations are in this case always carried out via the bus and not via the EMI. E.g. the initial state OPEN_WAIT cannot be reached by sending a T_Data_Connected.req via the EMI in this case, but the BDUT shall be stimulated via the bus with a MaskVersion_Read frame in order to send a MaskVersion_Response. If the BDUT does not receive a T_ACK, the transport layer remains in OPEN_WAIT.  Contrary to previous versions, this version of the test specifications only contains the needed behaviour of the BDUT according to the previous transport layer style 3 state machine, as it was decided that all new or updated stack versions shall support this style.  It is allowed to reuse existing and unchanged TL state machines in certified stacks still in new devices or OEM versions of already registered/certified products. Because of the above, the previous styles 1 and 2 are no longer mentioned in this version of the test specifications. These styles are phased out and not described in the standard anymore.


-----

#### 4 Testing of Timing Requirements of Transport Layer State Machine

##### 4.1 Testing of the connection-time-out-timer
###### This is implicitly tested in clause 5.2.10.1 and 6.2.5.1. 

##### 4.2 Testing of the acknowledgement-time-out timer
###### Connect from USB A to BDUT.

 (1)  IN 00:00:00.2 B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead to BDUT.

 (2)  IN 00:00:00.0 B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT 00:00:00.0 B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT 00:00:00.0 B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT repeats sent response every 3 seconds.

 @[w"00:00:02.8"

 (5)  OUT 00:00:00.4 B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 @[w"00:00:02.8"

 (6)  OUT 00:00:00.4 B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 @[w"00:00:02.8"

 (7)  OUT 00:00:00.4 B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT breaks down connection because of maximum repetitions reached.

 @[w"00:00:02.8"

 (8)  OUT 00:00:00.4 B0 01.01.001 01.01.254 60 81 :T-Disconnect


-----

#### 5 Testing of Transport Layer State Machine, with EMI

##### 5.1 Introduction

###### 5.1.1 General In each sequence it is explained which event is tested (purpose) and which Sequence is used with the appropriate initial state.

 In each test step, the term local implies sending the messages via a PC tool connected to a USB stuck on the PEI of the BDUT, while remote implies sending the messages via a second USB interface on bus (see relevant test set-ups)

 5.1.2 Test environment when testing BCU (with EMI)

 Test-Tools:

 Hardware: - the to be tested stack with EMI1/2 support with a USB connected to it

 - Two-USBs (optionally one additional for observation of bus traffic) 

 - One PC with Windows

 Software: - EITT Version 4.0 or upwards

 Figure 4: Test equipment when testing BCU (with EMI)

##### 5.2 States caused by a Connect and Disconnect – Service

###### 5.2.1 Connect from a remote device

 5.2.1.1 Sequence 1: Procedure with initial state ‘CLOSED’ Purpose: Check whether the BDUT passes the following states.


-----

**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind
0/1 CLOSED
T_CONNECT_REQ_PDU

T_Connect.ind
OPEN_IDLE
(connection number=0)

A1

###### Figure 5 - State transition Sequence 1
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[tThe BDUT is in State 'CLOSED'.
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.

```

-----

###### 5.2.1.2 Sequence 2: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states. (OPEN_IDLE, OPEN_WAIT)


**Event-**
**No.**

0


**Events or Actions** **STATES** **Events or Actions** **Even**
**t-No.**
N_Data_Individual.ind OPEN_IDLE
T_CONNECT_REQ_PDU

OPEN_WAIT


###### Figure 6 - State transition Sequence 2
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The remote device sends a T_CONNECT.req to BDUT
(4) IN 00:00:01.0 B0 A001 A000 60 80  T-Connect(Addr=10.00.000)
BDUT remains in OPEN_IDLE, sends no T_Disconnect.ind and no Disconnect on the
bus. 

```

-----

###### 5.2.1.3 Sequence 3: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80
    T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00:
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Send a T_DATA_CONNECTED.req to remote BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00
    T_DATA_CONNECTED.req
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. The remote device sends a T_CONNECT.req to BDUT
(6 IN 00:00:04.0 B0 A001 A000 60 80
    T-Connect(Addr=10.00.000)
BDUT remains in OPEN_WAIT, BDUT sends no T_Disconnect.ind and no Disconnect
on the bus. 

```

-----

###### 5.2.2 Connect from a remote device during an existing connection

 5.2.2.1 Sequence 4 : Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

1


N_Data_Individual.ind
T_CONNECT_REQ_PDU

SA<>CA

N_Data_Individual.req
(T_DISCONNECT_REQ_PDU)
DA = SA (of N_Data_Individual.ind)

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)

SA=CA or SA<>CA


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


A10


21 A0

###### Figure 7 - State transition Sequence 4
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. Check that the BDUT confirms the T_CONNECT
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Connect from a remote device during an existing connection (remote BCU
<> third BCU).
(4) IN 00:00:00.2 B0 A001 A000 60 80
    T-Connect(Addr=10.00.000)
@[t5. Check that a telegram is sent addressed to remote BCU with
NSDU=T_DISCONNECT.req
(5) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tThe BDUT persists in State 'OPEN_IDLE'.

```

-----

###### 5.2.2.2 Sequence 5: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Set the BCU
in Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. Check that the BDUT confirms the T_CONNECT
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. BDUT sends a T_DATA_CONNECTED.req to the third BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t5. Connect from a remote device during an existing connection (remote BCU
<> third BCU).
(5) IN 00:00:04.0 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t6. Check that a telegram is sent addressed to remote BCU with
NSDU=T_DISCONNECT.req
(6 OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tThe BDUT persists in State 'OPEN_WAIT'.

 5.2.3 Disconnect from a remote device

 5.2.3.1 Sequence 6: Procedure with initial state ‘CLOSED’ Purpose: Check whether the BDUT passes the following states.

```

**Event-**
**No.**

2/3


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


A0

###### Figure 8 - State transition for Sequence 6


N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA=CA
(SA!=CA)


CLOSED

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[tThe BDUT is in State 'CLOSED'.
@[t2. The remote device sends a T_DISCONNECT.req to BDUT
(2) IN 00:00:00.2 B0 A001 A000 60 81 T-Disconnect
@[tThe BDUT persists in State 'CLOSED'.

```

-----

###### 5.2.3.2 Sequence 7: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

2


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA=CA


OPEN_IDLE
OPEN_WAIT

CLOSED


A5

T_Disconnect.ind

###### Figure 9 - State transition for Sequence 7
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00:
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The remote device sends a T_DISCONNECT.req to BDUT
(4) IN 00:00:00.2 B0 A001 A000 60 81 T-Disconnect
@[t5. Check that the BDUT sends a T_DISCONNECT.ind
(5) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[tThe BDUT is in State 'CLOSED'.

```

-----

###### 5.2.3.3 Sequence 8: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00:
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Send a T_DATA_CONNECTED.req to remote BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. The remote device sends a T_DISCONNECT.req to BDUT
(6) IN 00:00:04.0 B0 A001 A000 60 81 T-Disconnect
@[t7. Check that the BDUT sends a T_DISCONNECT.ind
(7) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[tNow the BDUT is in State 'CLOSED'.

 5.2.4 Disconnect from a remote device during an existing connection

 5.2.4.1 Sequence 9: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

```

**Event-**
**No.**

3


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA<>CA


OPEN_IDLE
OPEN_WAIT


A0

###### Figure 10 - State transition for Sequence 9
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.

```

-----

```
@[t4. The BDUT receives a T_DISCONNECT.req from remote BCU (<> connected BCU
= third BCU)
(4) IN 00:00:02.0 B0 A001 A000 60 81 T-Disconnect
@[tNo reaction.
@[tThe BDUT persists in State 'OPEN_IDLE'.

###### 5.2.4.2 Sequence 10: Procedure with initial state ‘OPEN_WAIT’
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. BDUT sends a T_DATA_CONNECTED.req to the third BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00
    T_DATA_CONNECTED.req
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t5. The BDUT receives a T_DISCONNECT.req from remote BCU (<> connected BCU
= third BCU)
(5) IN 00:00:04.0 B0 A001 A000 60 81 T-Disconnect
@[tNo reaction.
@[tThe BDUT persists in State 'OPEN_WAIT'.

```

-----

###### 5.2.5 Sequence 11 : Connect from the local user to an existing device Purpose: Check whether the BDUT passes the following states.

**Event-** **Events or Actions** **STATES** **Events or Actions** **Event-**
**No.** **No.**

Client CLOSED T_Connect.req

only

25

N_Data_Individual.req
OPEN_IDLE A12
(T_CONNECT_REQ_PDU)

N_Data_Individual.con
(T_CONNECT_REQ_PDU)

IAK = OK

19

T_Connect.con

A13


###### Figure 11 - State transition for Sequence 11
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to an existing device (remote BCU).
(2) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t3. Check that a telegram is sent addressed to remote BCU with
NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A001 60 80 T-Connect(Addr=10.00.001)
@[t4. Check that the BDUT sends a T_CONNECT.con when the IAK=OK from the
existing device (remote BCU).
(4) OUT 00:00:00.0 86 B0 A0 01 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
On A12 BDUT changes to CONNECTING and on A13 to OPEN_IDLE.

```

-----

###### 5.2.6 Sequence 12: Connect from the local user to an non existing device Purpose: Check whether the BDUT passes the following states.

**Event-** **Events or Actions** **STATES** **Events or Actions** **Event-**
**No.** **No.**

Client

CLOSED T_Connect.req
only


25


20


N_Data_Individual.req
OPEN_IDLE [A12 ]
(T_CONNECT_REQ_PDU)

N_Data_Individual.con
(T_CONNECT_REQ_PDU)

IAK = NOT OK

CLOSED T_Disconnect.con

A5

###### Figure 12 - state transition for Sequence 12

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[tThe BDUT is in State 'CLOSED'.
@[t2. Send a T_CONNECT to a non-existing device (Address A005h).
(2) IN 00:00:00.2 43 00 00 00 A0 05  T_CONNECT.req
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t3. Check that a telegram is sent addressed to non-existing BCU with
NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A005 60 80 T-Connect(Addr=10.00.005)
(only visible by third PC with EITT in Busmonitor mode)
@[t4. Check that a T_DISCONNECT.ind is sent, when receiving no IAK.
(4) OUT 00:00:00.0 87 00 A0 00 A0 00  T_DISCONNECT.ind
@[tThe BDUT is in State 'CLOSED'.
On A12 BDUT changes to CONNECTING and on A5 to CLOSED

```

-----

###### 5.2.7 Connect from the local user during an existing connection 

 5.2.7.1 Sequence 13: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


Client OPEN_IDLE

only OPEN_WAIT


T_Connect.req 25


21


N_Data_Individual.req
CLOSED T_Disconnect.ind
(T_DISCONNECT_REQ_PDU)

N_Data_Individual.con
A6
(T_DISCONNECT_REQ_PDU)

Note: T_DISCONNECT is generated

immediately, else an additional state

would be needed

A0

###### Figure 13 - State transition for Sequence 13

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to remote BCU.
(2) IN 00:00:00.2 43 00 00 00 A0  T_CONNECT.req
@[t3. Check that a telegram is sending addressed to remote BCU with
NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A001 60 80 T-Connect(Addr=10.00.001)
@[t4. Check that the BDUT confirms the T_CONNECT when the IAK=OK from the
existing device (remote BCU).
(4) OUT 00:00:00.0 86 B0 A0 01 A0 00  T_CONNECT.con
@[t Connection established. State 'OPEN_IDLE'.
@[t5. Connect during an existing connection.
(5) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t6. Check that a telegram is sent addressed to BCU with
NSDU=T_DISCONNECT.req
(6) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[t7. Check that a T_DISCONNECT.ind is sent
(7) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[tThe BDUT goes in State 'CLOSED'.

```

-----

###### 5.2.7.2 Sequence 14: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to remote BCU.
(2) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t3. Send telegram addressed to remote BCU with NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A001 60 80 T-Connect(Addr=10.00.001)
@[t4. Check that the BDUT sends a T_CONNECT.con when the IAK=OK from the
existing device (remote BCU).
(4) OUT 00:00:00.0 86 B0 A0 01 A0 00  T_CONNECT.con
@[t Connection established. State 'OPEN_IDLE'.
@[t5. Send a T_DATA_CONNECTED.req to remote BCU.
(5) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t6. Send telegram addressed to remote BCU with NSDU=T_DATA_CONNECTED.req
(6) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tBDUT is in State 'OPEN_WAIT'.
@[t7. Connect during an existing connection.
(7) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t8. Check that a telegram is sent addressed to BCU with
NSDU=T_DISCONNECT.req
(8) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[t9. Check that a T_DISCONNECT.ind is sent
(9) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[tNow the BDUT is in State 'CLOSED'.

```

-----

###### 5.2.8 Disconnect from the local user

 5.2.8.1 Sequence 15: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


Client OPEN_IDLE

only OPEN_WAIT


T_Connect.req


21


N_Data_Individual.req
CLOSED T_Disconnect.ind
(T_DISCONNECT_REQ_PDU)

N_Data_Individual.con
A14
(T_DISCONNECT_REQ_PDU)

Note: T_DISCONNECT is generated

immediately, else an additional state

would be needed

A0

###### Figure 14 - State transition for Sequence 15

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT.req to remote BCU (client).
(2) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t3. Send telegram addressed to remote BCU with NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A001 60 80 T-Connect(Addr=10.00.001)
@[t4. Check that the BDUT sends a T_CONNECT.con when the IAK=OK from the
existing device (remote BCU).
(4) OUT 00:00:00.0 86 B0 A0 01 A0 00  T_CONNECT.con
@[t Connection established. State 'OPEN_IDLE' (client).
@[t5. T_DISCONNECT.req from local user (BDUT).
(5) IN 00:00:00.2 44 00 00 00 00 00  T_DISCONNECT.req
@[t6. Check that the client sends a T_DISCONNECT.con to the local user.
(6) OUT 00:00:00.0 88 00 00 00 00 00  T_DISCONNECT.con
@[t7. Check that a telegram is sent addressed to remote BCU with
NSDU=T_DISCONNECT.req
(7) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tBDUT is in State 'CLOSED' – 

```

-----

###### 5.2.8.2 Sequence 16: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT.req to remote BCU (client).
(2) IN 00:00:00.2 43 00 00 00 A0 01  T_CONNECT.req
@[t3. Send telegram addressed to remote BCU with NSDU=T_CONNECT.req
(3) OUT 00:00:00.0 B0 A000 A001 60 80 T-Connect(Addr=10.00.001)
@[t4. Check that the BDUT sends a T_CONNECT.con when the IAK=OK from the
existing device (remote BCU).
(4) OUT 00:00:00.0 86 B0 A0 01 A0 00  T_CONNECT.con
@[t Connection established. State 'OPEN_IDLE'.
@[t5. Send T_DATA_CONNECTED.req to remote BCU (client).
(5) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t6. A telegram is sent to remote BCU with NSDU=T_DATA_CONNECTED.req
(6) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tState 'OPEN_WAIT'.
@[t7. T_DISCONNECT.req from the local user (BDUT).
(7) IN 00:00:00.2 44 00 00 00 00 00  T_DISCONNECT.req
@[t8. Check that the client sends a T_DISCONNECT.con to the local user.
(8) OUT 00:00:00.0 88 00 00 00 00 00  T_DISCONNECT.con
@[t9. Check that a telegram is sent addressed to remote BCU with
NSDU=T_DISCONNECT.req
(9) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tBDUT is in State 'CLOSED'.

```

-----

###### 5.2.9 Sequence 17: Disconnect from the local user without an existing connection Purpose: Check whether the BDUT passes the following states.

**Event-** **Events or Actions** **STATES** **Events or Actions** **Even**
**No.** **t-No.**

Client

CLOSED T_DISCONNECT.req 26
only


T_DISCONNECT.con

A15

###### Figure 15: State transition for Sequence 17
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[tState 'CLOSE'(client).
@[t2. T_DISCONNECT.req from local user (BDUT).
(2) IN 00:00:00.2 44 00 00 00 00 00  T_DISCONNECT.req
@[t3. Check that the client sends an T_DISCONNECT.con to the local user.
(3) OUT 00:00:00.0 88 00 00 00 00 00  T_DISCONNECT.con

 5.2.10 Connection timeout

 5.2.10.1 Sequence 18: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

```

**Event-**
**No.**

16


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

Connection timeout OPEN_IDLE

CLOSED
A6


N_Data_Individual.req
(T_DISCONNECT_REQ_PDU)

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)

21 A0


T_DISCONNECT.ind
Connection_number = 0


###### Figure 16: State transition for Sequence 18


-----

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in state 'OPEN_IDLE'.
@[tThe connection timeout timer has started.
@[t4.+5. After the time interval of 6s (connection timeout timer is released)
the BDUT will close the connection by sending a T_DISCONNECT.ind and a
telegram with NSDU=T_DISCONNECT_REQ.
(4) OUT 00:00:06.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
(5) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect

```

-----

###### 5.2.11 Acknowledgement timeout

 5.2.11.1 Sequence 19: Procedure with initial state ‘OPEN_WAIT’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

Acknowledgement timeout
OPEN_WAIT
rep_count<max_rep_count


17 A9

OPEN_WAIT

Acknowledgement timeout
rep_count>=max_rep_count

T_DISCONNECT.ind
18 CLOSED
Connection_number = 0

N_Data_Individual.req
(T_DISCONNECT_REQ_PDU)

A6

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


21


A0

###### Figure 17: State transition for Sequence 19

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in state 'OPEN_IDLE'.
@[t5. Send T_DATA_CONNECTED.req to remote BCU (client).
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t6. A telegram is sent to remote BCU with NSDU=T_DATA_CONNECTED.req
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in state 'OPEN_WAIT'.
@[tThe acknowledgement timeout timer has started.
(6) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
(7) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
(8) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tIf the repeat counter = 3 (maximum of T_DATA_CONNECTED.req repetitions),
the acknowledgement timeout timer stops and the user gets a T_DISCONNECT.ind.

```

-----

```
(9) OUT 00:00:00.2 87 00 A0 01 A0 00  T_DISCONNECT.ind
(10) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tThe BDUT is in state 'CLOSED'.

##### 5.3 Reception of data

###### 5.3.1 Sequence 20a: Reception of a correct N_Data_Individual – Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

```

**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind, OPEN_IDL
T_DATA_CONNECTED_REQ_PDU

E

(source_address == connection_address)

(SeqNo_of_PDU == SeqNoRcv)

T_Data_Connected.ind
4 Connection_number = 0

N_Data_Individual.req (T_ACK_PDU)

_SYSTEM, destination =_
_connection_address, sequence =_

_SeqNoRcv_

A2

N_Data_Individual.con (T_ACK_PDU)

23 A0

###### Figure 18: State Transition for Sequence 20
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T_Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT receives a NSDU=T_DATA_CONNECTED_REQ (MaskVersionRead).
(4) IN 00:00:00.2 B0 A001 A000 61 43 00 MaskVersionRead()
@[t5. Check that the BDUT is sent a T_DATA_CONNECTED.ind and a telegram with
NSDU=T_ACK.
(5) OUT 00:00:00.0 89 B0 A0 01 A0 00 61 43 00 T_DATA_CONNECTED.ind
(6) OUT 00:00:00.0 B0 A000 A001 60 C2 T-Ack(Seq=0)
@[tThe BDUT persists in State 'OPEN_IDLE'.

```

-----

###### 5.3.2 Sequence 20b: Reception of a correct N_Data_Individual – Procedure with initial state ‘OPEN_WAIT’

NOTE the ‘??’ characters denote wildcards for the reception of data in EITT.
```
@[t Purpose: check whether a repetition of an N_DataIndividual with
SeqNo_of_PDU = SeqNoRcv is accepted and the data are stored.
@[t Initial state: Send T_Connect and MaskVersionRead to BDUT to establish
OPEN_WAIT as the initial state for the sequence.
(1) IN start B0 AFFE 1001 60 80 T-Connect(Addr=1001)
@[t BDUT is in State OPEN_IDLE
@[t Now the BDUT receives a MaskVersionRead
(2) IN 00:00:02.0 B0 AFFE 1001 61 43 00
DeviceDescriptorRead(DescType=00)
(3) OUT 00:00:00.0 B0 1001 AFFE 60 C2 T-Ack(Seq=0)
@[t BDUT is in State OPEN_IDLE 
(4) OUT 00:00:00.0 B0 1001 AFFE 63 43 40 ?? ??
DeviceDescriptorResponse(DescType=00, Descriptor=?? ??)
@[t BDUT is in State OPEN_WAIT
(5) IN 00:00:03.5 B0 AFFE 1001 63 46 01 01 FE MemoryRead(Count=01,
Addr=01FE - may be any memory location)
(6) OUT 00:00:00.0 B0 1001 AFFE 60 C6 T-Ack(Seq=1)
@[t BDUT persists in state OPEN_WAIT
(7) OUT 00:00:00.2 B0 1001 AFFE 63 43 40 ?? ??
DeviceDescriptorResponse(DescType=00, Descriptor=?? ??)
(8) IN 00:00:06.5 B0 AFFE 1001 60 C2 T-Ack(Seq=0)
@[t BDUT is now in OPEN_IDLE and sends the stored Memory-Response
(9) OUT 00:00:00.0 B0 1001 AFFE 64 46 41 01 FE ??
MemoryResponse(Count=01, Addr=01FE, Data=??)
(10) OUT 00:00:03.5 B0 1001 AFFE 64 46 41 01 FE ??
MemoryResponse(Count=01, Addr=01FE, Data=??)
(11) OUT 00:00:03.5 B0 1001 AFFE 64 46 41 01 FE ??
MemoryResponse(Count=01, Addr=01FE, Data=??)
(12) OUT 00:00:03.5 B0 1001 AFFE 64 46 41 01 FE ??
MemoryResponse(Count=01, Addr=01FE, Data=??)
(13) OUT 00:00:03.5 B0 1001 AFFE 60 81 T-Disconnect

```

-----

###### 5.3.3 Reception of a repeated N_Data_Individual

 5.3.3.1 Sequence 21: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

5


N_Data_Individual.ind,
T_DATA_CONNECTED_REQ_PDU
(source_address == connection_address)

( SeqNo_of_PDU == ((SeqNoRcv 
1)&0xF))

N_Data_Individual.req (T_ACK_PDU)

SYSTEM, destination =
connection_address, sequence =

sequence of received message

N_Data_Individual.con (T_ACK_PDU)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


A3


23 A0

###### Figure 19: State diagram for Sequence 21

 Purpose: check whether a repetition of an N_Data_Individual with SeqNo_of_PDU = ‘-1’ is accepted and the data is ignored.
```
Initial state: A T_Connect is sent to establish the initial OPEN_IDLE state
    IN B0 AFFE 1001 60 80 T_Connect (Addr=1001)
BDUT is now in State Open_Idle – now the BDUT receives a MaskVersionRead
    IN B0 AFFE 1001 61 7F 00 MaskVersionRead()
    OUT B0 1001 AFFE 60 FE T_Ack (Seq=F)
BDUT is in State Open_Idle for a few seconds
    OUT B0 1001 AFFE 60 81 T_Disconnect
End State: closed

```

-----

###### 5.3.3.2 Sequence 22: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Send T_DATA_CONNECTED.req to remote BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. A telegram is sent to remote BCU with NSDU=T_DATA_CONNECTED.req
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00  MaskVersionRead()
@[tThe BDUT is in state 'OPEN_WAIT'.
@[t6. Now the BDUT receives a NSDU=T_DATA_CONNECTED_REQ (MaskVersionRead).
(6) IN 00:00:00.2 B0 A001 A000 61 43 00 MaskVersionRead()
@[t7. Check that the BDUT sends a T_DATA_CONNECTED.ind and
@[t8. a telegram with NSDU=T_DATA_ACK.
(7) OUT 00:00:00.0 89 B0 A0 01 A0 00 61 43 00 T_DATA_CONNECTED.ind
(8) OUT 00:00:00.0 B0 A000 A001 60 C2 T-Ack(Seq=0)
@[t9. The BDUT receives a repeated NSDU=T_DATA_CONNECTED_REQ
(MaskVersionRead).
(9) IN 00:00:00.2 B0 A001 A000 61 43 00 MaskVersionRead()
@[t10. Check that the BDUT sends a telegram with NSDU=T_DATA_ACK.
(10) OUT 00:00:00.0 B0 A000 A001 60 C2 T-Ack(Seq=0)
@[tThe BDUT persists in state 'OPEN_WAIT'.

```

-----

###### 5.3.4 Reception of data N_Data_Individual with wrong sequence number

 5.3.4.1 Sequence 23: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

6


N_Data_Individual.ind,
T_DATA_CONNECTED_REQ_PDU
(source_address == connection_address)

(SeqNo_of_PDU != SeqNoRcv)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


N_Data_Individual.req (T_NAK_PDU) OPEN_IDLE

N_Data_Individual.con (T_NAK_PDU)


A4


24 A0

###### Figure 20: State transition for Sequence 23
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
---------------------------------------------------------------@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The BDUT receives a MaskVersionRead with a wrong sequence number.
(4) IN 00:00:00.2 B0 A001 A000 61 57 00 MaskVersionRead()
@[t5. Check that the BDUT sends a T_NAK. (Seq=5)
(5) OUT 00:00:00.0 B0 A000 A001 60 D7 T-Nack(Seq=5)
@[tThe BDUT persists in State 'OPEN_IDLE'.

```

-----

###### 5.3.4.2 Sequence 24: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Send T_DATA_CONNECTED.req to remote BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. A telegram is sent to remote BCU with NSDU=T_DATA_CONNECTED.req
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
-----------------------------------------------------------------------@[tThe BDUT is in state 'OPEN_WAIT'.
@[t6. The BDUT receives a MaskVersionRead with a wrong sequence number.
(6) IN 00:00:00.2 B0 A001 A000 61 57 00 MaskVersionRead()
@[t7. Check that the BDUT sends a T_NAK. (Seq=5)
(7) OUT 00:00:00.0 B0 A000 A001 60 D7 T-Nack(Seq=5)
@[tThe BDUT is still in state 'OPEN_WAIT'.

```

-----

###### 5.3.5 Reception of data N_Data_Individual with wrong source address

 5.3.5.1 Sequence 25: Procedure with initial state ‘OPEN_IDLE’) Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

7


N_Data_Individual.ind,
T_DATA_CONNECTED_REQ_PDU
(source_address != connection_address)

N_Data_Individual.req
T_DISCONNECT_REQ_PDU with
SYSTEM, Destination = source_address

from N_Data_Individual.ind

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


A10


23 A0

###### Figure 21: State transition for Sequence 25
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The BDUT receives a MaskVersionRead from remote BCU (<> connected BCU =
third BCU)
(4) IN 00:00:00.2 B0 A001 A000 61 43 00 MaskVersionRead()
@[tThe BDUT persists in State 'OPEN_IDLE'.

```

-----

###### 5.3.5.2 Sequence 26: Procedure with initial state ‘OPEN_WAIT
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. BDUT sends a T_DATA_CONNECTED.req to the third BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t5. The BDUT receives a MaskVersionRead from remote BCU (<> connected BCU =
third BCU)
(5) IN 00:00:04.0 B0 A001 A000 61 43 00 MaskVersionRead()
@[tThe BDUT persists in State 'OPEN_WAIT'.

```

-----

##### 5.4 Transmission of data

###### 5.4.1 T_DATA_CONNECTED-reqest from the local user

 5.4.1.1 Sequence 27: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

**Event-** **Events or Actions** **STATES** **Events or Actions** **Event-**
**No.** **No.**

Client OPEN_IDLE T_DATA_CONNECTED.req

only 15


N_Data_Individual.req
T_DATA_CONNECTED_REQ_PDU,
destination = connection_address,

sequence = SeqNoSend

N_Data_Individual.con
T_DATA_CONNECTED_REQ_PDU


OPEN_WAIT


A7


22 A0

N_Data_Individual.ind

T_ACK_PDU
(source_address ==
connection_address)
(SeqNo_of_PDU == SeqNoSend)

8

OPEN_IDLE T_DATA_CONNECTED.con

A8

###### Figure 22: State transition for Sequence 27
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. Check that the BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()

```

-----

```
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. Now the BDUT receives a T_ACK.
@[t7. Check that the BDUT goes to 'OPEN_IDLE' and sends a
T_DATA_CONNECTED.con
(6) IN 00:00:00.2 B0 A001 A000 60 C2 T-Ack(Seq=0)
(7) OUT 00:00:00.0 8E B0 A0 00 00 00 61 43 00 T_DATA_CONNECTED.con

###### 5.4.1.2 Sequence 28: Procedure with initial state ‘CLOSED’ to check event 15
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[tThe BDUT is in State 'CLOSED'.
@[t2. Now the BDUT gets a T_DATA_CONNECTED.req
(2) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[tThe BDUT persists in State 'CLOSED'.

 5.4.1.3 Sequence 29: Procedure with initial state ‘OPEN_WAIT to check event 15
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. Now the BDUT gets a T_DATA_CONNECTED.req again.
(6) IN 00:00:07.0 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
BDUT remains in OPEN_WAIT, BDUT sends T_Data_Connected on the bus after
leaving OPEN_WAIT 

```

-----

###### 5.4.2 Reception of a T_ACK_PDU

 5.4.2.1 Sequence 30: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

Client

only

8


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind,

T_ACK_PDU
(source_address ==
connection_address)
(SeqNo_of_PDU == SeqNoSend)


OPEN_IDLE


###### Figure 23: State transition for Sequence 30
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT receives a T_ACK.
(4) IN 00:00:00.2 B0 A001 A000 60 C2 T-Ack(Seq=0)
BDUT remains in OPEN_IDLE, BDUT sends no T_Disconnect.ind and no Disconnect
on the bus 

```

-----

###### 5.4.3 Reception of an T_ACK_PDU with wrong sequence number

 5.4.3.1 Sequence 31: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

9


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind, T_ACK_PDU

(source_address ==
connection_address)
(SeqNo_of_PDU != SeqNoSend)


OPEN_IDLE
OPEN_WAIT


###### Figure 24: State transition for Sequence 31
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT receives a T_ACK with wrong sequence number.
(4) IN 00:00:00.2 B0 A001 A000 60 D6 T-Ack(Seq=5)
BDUT remains in OPEN_IDLE, BDUT sends no T_Disconnect.ind and no Disconnect
on the bus 

```

-----

###### 5.4.3.2 Sequence 32: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. Now the BDUT receives a T_ACK with wrong sequence number.
(6) IN 00:00:00.2 B0 A001 A000 60 D6 T-Ack(Seq=5)
@[t7. Check that the BDUT sends a telegram with NSDU=T_DISCONNECT.req.
(7) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[t8. Check that a T_DISCONNECT.ind is sent
(8) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind

```

-----

Reception of T_ACK_PDU with wrong connection address

###### 5.4.3.3 Sequence 33: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

10


N_Data_Individual.ind, T_ACK_PDU
(source_address != connection_address)

N_Data_Individual.req
(T_DISCONNECT_REQ_PDU) with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind),

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


A10


21 A0

###### Figure 25: State transition for Sequence 33
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The BDUT receives a T_ACK from remote BCU (<> connected BCU = third
BCU)
(4) IN 00:00:00.2 B0 A001 A000 60 C2 T-Ack(Seq=0)
@[tThe BDUT persists in State 'OPEN_IDLE' and sends no Disconnect on the bus.

```

-----

###### 5.4.3.4 Sequence 34: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. BDUT sends a T_DATA_CONNECTED.req to the third BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t5. The BDUT receives a T_ACK from remote BCU (<> connected BCU = third
BCU)
(5) IN 00:00:04.0 B0 A001 A000 60 C2 T-Ack(Seq=0)
@[tThe BDUT persists in State 'OPEN_WAIT' and sends no Disconnect on the bus.

```

-----

###### 5.4.4 Reception of T_NAK_PDU with wrong sequence number

 5.4.4.1 Sequence 35: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

11


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind, T_NAK_PDU
( source_address == connection_address)

SeqNo_of_PDU!=SeqNoSend


OPEN_IDLE
OPEN_WAIT


###### Figure 26: State transition for sequence 35
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT receives a T_NACK with wrong sequence number.
(4) IN 00:00:00.2 B0 A001 A000 60 D7 T-Nack(Seq=5)
BDUT remains in OPEN_IDLE, BDUT sends no T_Disconnect.ind and no Disconnect
on the bus.

```

-----

###### 5.4.4.2 Sequence 36: Procedure with initial state ‘OPEN_WAIT’
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. Now the BDUT receives a T_NACK with wrong sequence number.
(6) IN 00:00:00.2 B0 A001 A000 60 D7 T-Nack(Seq=5)
BDUT remains in OPEN_WAIT, BDUT sends no T_Disconnect.ind and no Disconnect
on the bus 

```

-----

###### 5.4.5 Sequence 37 : Reception of T_NAK_PDU with correct sequence number - Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

**Event-** **Event-**
**Events or Actions** **STATES** **Events or Actions**
**No.** **No.**

N_Data_Individual.ind, T_NAK_PDU
(source_address == connection_address) [OPEN_IDLE ]

12/13


N_Data_Individual.req
(T_DISCONNECT_REQ_PDU) with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind)


CLOSED T_Disconnect.ind


21


N_Data_Individual.con
A6
(T_DISCONNECT_REQ_PDU)

A0

###### Figure 27: State transition for Sequence 37

```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT receives a T_NACK with correct sequence number.
(4) IN 00:00:00.2 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[t5. Check that the BDUT sends a T_DISCONNECT.ind
(5) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[t6. Check that the BDUT sends a telegram with NSDU=T_DISCONNECT.req.
(6) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tThe BDUT takes the State 'CLOSED'.

```

-----

###### 5.4.6 Sequence 38: Reception of T_NAK_PDU and maximum number of repetitions is not reached - Procedure with initial state ‘OPEN_WAIT’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

12

22


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**
N_Data_Individual.ind, T_NAK_PDU OPEN_WAIT
(source_address == connection_address)
( SeqNo_of_PDU == SeqNoSend )

( rep_count < max_rep_count )


N_Data_Individual.req
T_DATA_CONNECTED_REQ_PDU

(stored message)

N_Data_Individual.con
T_DATA_CONNECTED_REQ_PDU


A9


###### Figure 28: State transition for Sequence 38
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
------------------------------------------------------------------------@[tThe BDUT is in State 'OPEN_WAIT'.
@[t6. Now the BDUT receives a T_NACK.
(6) IN 00:00:00.2 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[t7. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req (stored
message).
(7) OUT 00:00:00.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[tThe BDUT persists in State 'OPEN_WAIT'.

```

-----

###### 5.4.7 Sequence 39: Reception of T_NAK_PDU and maximum number of repetitions is reached - Procedure with initial state ‘OPEN_WAIT’  Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_Data_Individual.ind, T_NAK_PDU
(source_address == connection_address) OPEN_WAIT

( SeqNo_of_PDU == SeqNoSend )

( rep_count == max_rep_count )

13 CLOSED T_Disconnect.ind

N_Data_Individual.req
T_DISCONNECT_REQ_PDU with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind)

A6

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)

21

###### Figure 29: State transition for Sequence 39
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Send T_CONNECT to BDUT.
(2) IN 00:00:00.2 B0 A001 A000 60 80 T-Connect(Addr=10.00.000)
@[t3. Check that the BDUT sends a T_CONNECT.ind to remote BCU
(3) OUT 00:00:00.0 85 B0 A0 01 A0 00  T_CONNECT.ind
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. Now the BDUT gets a T_DATA_CONNECTED.req.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[t5. The BDUT sends a telegram with NSDU=T_DATA_CONNECTED.req.
(5) OUT 00:00:00.0 B0 A000 A001 61 43.00 MaskVersionRead()
@[tThe BDUT is still in State 'OPEN_WAIT'.
(6) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
(7) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
(8) OUT 00:00:03.0 B0 A000 A001 61 43 00 MaskVersionRead()
@[t6. Now the BDUT receives a T_NACK.
(9) IN 00:00:10.0 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[t7. Check that the BDUT sends a T_DISCONNECT.ind
(10) OUT 00:00:00.0 87 00 A0 01 A0 00  T_DISCONNECT.ind
@[t8. Send telegram addressed to remote BCU with NSDU=T_DISCONNECT.req
(11) OUT 00:00:00.0 B0 A000 A001 60 81 T-Disconnect
@[tThe BDUT is in State 'CLOSED'.

```

-----

###### 5.4.8 Reception of T_NAK_PDU with wrong connection address

 5.4.8.1 Sequence 40: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

14

21


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


N_DATA_INDIVIDUAL.ind,
T_NAK_PDU (source_address !=
connection_address)

N_Data_Individual.req
T_DISCONNECT_REQ_PDU,
SYSTEM, Destination =
source_address (of rbuffer)

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


CLOSED
OPEN_IDLE
OPEN_WAIT


A10


###### Figure 30: State transition for sequence 40
```
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. The BDUT receives a T_NACK from remote BCU (<> connected BCU = third
BCU)
(4) IN 00:00:00.2 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[tThe BDUT persists in State 'OPEN_IDLE' and sends no Disconnect on the bus.

 5.4.8.2 Sequence 41: Procedure with initial state ‘OPEN_WAIT’
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@@PREPARATION: Install a third BCU with physical address A007H. Activate the
Link-Layer.
@[t1. Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req

```

-----

```
@[t2. Connect BDUT with third BCU
@[t3. BDUT receives a T_CONNECT.con
(2) IN 00:00:00.2 43 00 00 00 A0 07  T_CONNECT.req
(3) OUT 00:00:00.0 86 B0 A0 07 A0 00  T_CONNECT.con
@[tThe BDUT is in State 'OPEN_IDLE'.
@[t4. BDUT sends a T_DATA_CONNECTED.req to the third BCU.
(4) IN 00:00:00.2 41 B0 00 00 00 00 01 03 00 T_DATA_CONNECTED.req
@[tThe BDUT is in State 'OPEN_WAIT'.
@[t5. The BDUT receives a T_NACK from remote BCU (<> connected BCU = third
BCU)
(5) IN 00:00:04.0 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[tThe BDUT persists in State 'OPEN_WAIT' and sends no Disconnect on the bus.

##### 5.5 Events started in state ‚CLOSED’
###### The following Sequence checks the events No. 4, No. 8 and No. 11 representative for event No. 4 till No.14 started with initial state ‚CLOSED’.

 5.5.1 Sequence 42: Procedure with initial state ‘CLOSED’
@@PREPARATION: Set physical address of BDUT to A000H. The remote BCU is set
to A001H.
@[t Set EMI of BDUT to Transport-Layer (remote)
(1) IN start A9 00 12 34 48 88 0A EMI_SWITCH.req
@[t Now the BDUT receives a NSDU=T_DATA_CONNECTED_REQ (MaskVersionRead).
(2) IN 00:00:00.2 B0 A001 A000 61 43 00 MaskVersionRead()
@[t Now the BDUT receives a T_ACK.
(3) IN 00:00:00.2 B0 A001 A000 60 C2 T-Ack(Seq=0)
@[t Now the BDUT receives a T_NAK.
(4) IN 00:00:00.2 B0 A001 A000 60 C3 T-Nack(Seq=0)
@[tThe BDUT persists in State 'CLOSED' and sends no Disconnect on the bus.

```

-----

#### 6 Testing of Transport Layer State Machine, without EMI

##### 6.1 Introduction

###### 6.1.1 General In each sequence it is explained which event is tested (purpose) and which Sequence is used with the appropriate initial state.

 In each test step, there are two KNX data interfaces (referred to with USB A and USB B, however can also be a non-USB type data interface, see note 2); USB A is used for the normal case of a connection between two devices, USB B is only used for simulating a third device sending messages when the connection between two devices has already been established.
 In the underneath State Transition Figures, the symbol in front of the listed messages implies that the cause of the internal message is visible on the bus, whereas the  after the listed message implies that the result of this internal message is visible on the bus. 

 6.1.2 Test environment for closed devices (without EMI)

 Test-Tools:

 Hardware:

 - two KNX USB Interfaces[1] - USB A with individual address 1.1.254 - USB B with individual address 1.1.253 - (optionally) a third additional KNX USB interface for observation of bus traffic - one (optionally two) PC with Windows - the BDUT with the IA set to 1.1.1

 Software: - EITT Version 4.1 or upwards

 Figure 31: Test equipment when testing BCU (without EMI)

1 The USB Interfaces may also be replaced by KNXnet IP interfaces.


-----

NOTE the ‘??’ characters in the underneath Sequences denote wildcards for the reception of data.

##### 6.2 States caused by a Connect and Disconnect – Service

###### 6.2.1 Connect from a remote device

 6.2.1.1 Sequence 1: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states. (OPEN_IDLE, OPEN_WAIT)


**Event-**
**No.**

0


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**
###  N_Data_Individual.ind OPEN_IDLE
T_CONNECT_REQ_PDU OPEN_WAIT


###### Figure 32 - State transition Sequence 1

 Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 The BDUT is in State 'OPEN_IDLE'.

 Connect again from same USB to BDUT.

 (2)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT remains in OPEN_IDLE, BDUT only sends Disconnect on the bus after connection time out.

 (3)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.2.1.2 Sequence 2: Procedure with initial state ‘OPEN_WAIT’ Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 The BDUT is in State 'OPEN_IDLE' – send MaskVersion Read to change to OPEN_WAIT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 The BDUT is in State 'OPEN_WAIT'.

 A second connect is sent to BDUT from USB A.

 (5)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT remains in OPEN_WAIT, would only send Disconnect on the bus after connection time out. Instead, EITT confirms the MaskVersionResponse with T-Ack and actively closes the connection.

 (6)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 (7)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.2.2 Connect from a remote device during an existing connection

 6.2.2.1 Sequence 3 : Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


-----

**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

###  N_Data_Individual.ind
T_CONNECT_REQ_PDU

SA<>CA


OPEN_IDLE
1
OPEN_WAIT

N_Data_Individual.req
(T_DISCONNECT_REQ_PDU)
DA = SA (of N_Data_Individual.ind)

### 

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)

SA=CA or SA<>CA


A10


21 A0

###### Figure 33 - State transition Sequence 3

 Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Connect from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (3)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

 Send immediate disconnect from USB A.

 (4)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.2.2.2 Sequence 4: Procedure with initial state ‘OPEN_WAIT’ Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.253 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Send second connection from USB A to BDUT.

 (5)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 (6)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 BDUT repeats sent response every 3 seconds.

 (7)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Send immediate disconnect from USB B.


-----

###### (8)  IN B0 01.01.253 01.01.001 60 81 :T-Disconnect

 6.2.3 Disconnect from a remote device

 6.2.3.1 Sequence 5: Procedure with initial state ‘CLOSED’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

2/3


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


A0

###### Figure 34 - State transition for Sequence 5


###  N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA=CA
(SA!=CA)


CLOSED


###### ---> Send Disconnect to BDUT in State CLOSED.

 (1)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 ---> No response shows that BDUT remains CLOSED (wait for 6 seconds).

 6.2.3.2 Sequence 6: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

2


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA=CA


OPEN_IDLE
OPEN_WAIT

CLOSED


A5

T_Disconnect.ind

###### Figure 35 - State transition for Sequence 6

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send Disconnect from USB A to BDUT.

 ---> No response shows that BDUT switched to CLOSED (wait for 6 seconds).

 (2)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.2.3.3 Sequence 7: Procedure with initial state ‘OPEN_WAIT’ Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

###### BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (5)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 BCU is in state OPEN_WAIT.

 Send Disconnect from USB A to BDUT.

 (6)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 ---> No response shows that BDUT switched to CLOSED.

 Now the BDUT is in State 'CLOSED'.

 6.2.4 Disconnect from a remote device during an existing connection

 6.2.4.1 Sequence 8: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

3


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind
(T_DISCONNECT_REQ_PDU)

SA<>CA


OPEN_IDLE
OPEN_WAIT


A0

###### Figure 36 - State transition for Sequence 8

 Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send Disconnect from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 60 81 :T-Disconnect

 ---> No response shows that BDUT remains in OPEN_IDLE.

 BDUT sends disconnect to USB A after connection timeout.

 (3)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.2.4.2 Sequence 9: Procedure with initial state ‘OPEN_WAIT’ Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)


-----

###### (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 Send Disconnect from USB B to BDUT.

 (5)  IN B0 01.01.253 01.01.001 60 81 :T-Disconnect

 ---> BDUT sends repetition every 3 seconds after ACK-timeout and shows that BDUT remains in OPEN_WAIT.

 (6)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Send immediate disconnect from USB A.

 (7)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.2.5 Connection timeout

 6.2.5.1 Sequence 10: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

16


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

Connection timeout OPEN_IDLE

CLOSED
A6


N_Data_Individual.req
(T_DISCONNECT_REQ_PDU) 

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)

21 A0


T_DISCONNECT.ind
Connection_number = 0


###### Figure 37: State transition for Sequence 10

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT sends Disconnect to USB A after connection timeout.

 (2)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.2.6 Acknowledgement timeout

 6.2.6.1 Sequence 11: Procedure with initial state ‘OPEN_WAIT’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

Acknowledgement timeout
OPEN_WAIT


-----

rep_count<max_rep_count

17 A9

OPEN_WAIT

Acknowledgement timeout
rep_count>=max_rep_count

18 CLOSED


T_DISCONNECT.ind
Connection_number = 0


N_Data_Individual.req

(T_DISCONNECT_REQ_PDU) 

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


A6

A0


21


###### Figure 38: State transition for Sequence 11

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BCU is in state OPEN_WAIT.

 -------------------------------------------.

 ---> BDUT sends repetition every 3 seconds after ACK-timeout.

 (5)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (6)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (7)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 ---> BDUT sends Disconnect to USB A after ACK-timeout.

 (8)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

##### 6.3 Reception of data

###### 6.3.1 Reception of a correct N_Data_Individual

 6.3.1.1 Sequence 12: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


-----

**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind, OPEN_IDL
T_DATA_CONNECTED_REQ_PDU E
(source_address == connection_address)

(SeqNo_of_PDU == SeqNoRcv)

T_Data_Connected.ind
4 Connection_number = 0

N_Data_Individual.req (T_ACK_PDU)

SYSTEM, destination =
connection_address, sequence =

SeqNoRcv 

A2

N_Data_Individual.con (T_ACK_PDU)

23 A0

###### Figure 39: State Transition for Sequence 12

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DeviceDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 ---> BDUT sends T-ACK and Mask Version Response to USB A.

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Send Disconnect from USB A to BDUT.

 (5)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.3.1.2 Sequence 13: Procedure with initial state ‘OPEN_WAIT’ Purpose: check whether a repetition of an N_DataIndividual with SeqNo_of_PDU = SeqNoRcv is accepted and the data are stored.

 Initial state: Send T_Connect and MaskVersionRead to BDUT to establish OPEN_WAIT as the initial state for the sequence.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in State OPEN_IDLE.

 Now the BDUT receives a MaskVersionRead.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 BDUT is in State OPEN_IDLE.

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in State OPEN_WAIT.


-----

###### (5)  IN BC 01.01.254 01.01.001 66 47 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (6)  OUT B0 01.01.001 01.01.254 60 C6 :T-Ack(Seq=1)

 BDUT persists in state OPEN_WAIT.

 (7)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (8)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 BDUT is now in OPEN_IDLE and sends the Property-Responses.

 (9)  OUT BC 01.01.001 01.01.254 66 47 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (10)  OUT BC 01.01.001 01.01.254 66 47 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (11)  OUT BC 01.01.001 01.01.254 66 47 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (12)  OUT BC 01.01.001 01.01.254 66 47 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1, Start=001, Data=01 )

 (13)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.3.2 <Deprecated> This chapter is intentionally empty to keep chapter and test sequence numbering in tact.

 6.3.3 Reception of a repeated N_Data_Individual

 6.3.3.1 Sequence 14: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

5


###  N_Data_Individual.ind, OPEN_IDLE
T_DATA_CONNECTED_REQ_PDU OPEN_WAIT
(source_address == connection_address)

(SeqNo_of_PDU == ((SeqNoRcv 
1)&0xF))

N_Data_Individual.req (T_ACK_PDU)

SYSTEM, destination =
connection_address, sequence =
sequence of received message 

N_Data_Individual.con (T_ACK_PDU)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


A3


23 A0

###### Figure 40: State diagram for Sequence 14

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

###### BDUT is in state OPEN_IDLE.

 In the following User Data requests are used as the AL of the BDUT will not respond to them.

 Send UserData from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 42 C3 :UserData(Service=03, Data=)

 ---> BDUT sends T-ACK to USB A.

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 Send UserData-repetition from USB A to BDUT to prevent an AL-response.

 (4)  IN B0 01.01.254 01.01.001 61 42 C3 :UserData(Service=03, Data=)

 --->BDUT sends T-ACK to USB A.

 (5)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 Send Disconnect from USB A to BDUT.

 (6)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.3.3.2 Sequence 15: Procedure with initial state ‘OPEN_WAIT’ Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DeviceDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BCU is in state OPEN_WAIT.

 Send UserData from USB A to BDUT to prevent an AL-response.

 (5)  IN B0 01.01.254 01.01.001 61 46 C3 :UserData(Service=03, Data=)

 ---> BDUT sends T-ACK to USB A.

 (6)  OUT B0 01.01.001 01.01.254 60 C6 :T-Ack(Seq=1)

 Send UserData-repetition from USB A to BDUT to prevent an AL-response.

 (7)  IN B0 01.01.254 01.01.001 61 46 C3 :UserData(Service=03, Data=)

 ---> BDUT sends T-ACK to USB A.

 (8)  OUT B0 01.01.001 01.01.254 60 C6 :T-Ack(Seq=1)

 Send Disconnect from USB A to BDUT.

 (9)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.3.4 Reception of data N_Data_Individual with wrong sequence number

 6.3.4.1 Sequence 16: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


-----

**Event-**
**No.**

6


###  N_Data_Individual.ind,
T_DATA_CONNECTED_REQ_PDU
(source_address == connection_address)

(SeqNo_of_PDU != SeqNoRcv)


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


OPEN_IDLE
OPEN_WAIT


N_Data_Individual.req (T_NAK_PDU)  OPEN_IDLE

N_Data_Individual.con (T_NAK_PDU)


A4


24 A0

###### Figure 41: State transition for Sequence 16

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DeviceDescriptorRead from USB A to BDUT with sequence number 5.

 (2)  IN B0 01.01.254 01.01.001 61 57 00 :DeviceDescriptorRead(DescType=00)

 ---> BDUT sends NACK to USB A with sequence number 5.

 (3)  OUT B0 01.01.001 01.01.254 60 D7 :T-Nack(Seq=5)

 ----------------------------------------------------------------
 ---> BDUT sends Disconnect to USB A after connection-timeout.

 (4)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.3.4.2 Sequence 17: Procedure with initial state ‘OPEN_WAIT’ Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 -------------------------------------------------------------
 Send DeviceDescriptorRead from USB A to BDUT with sequence number 5.

 (5)  IN B0 01.01.254 01.01.001 61 57 00 :DeviceDescriptorRead(DescType=00)

 ---> BDUT sends NACK to USB A with sequence number 5.

 (6)  OUT B0 01.01.001 01.01.254 60 D7 :T-Nack(Seq=5)


-----

###### ---> BDUT sends repetition of DeviceDescriptorResponsea after timeout.

 (7)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 USB A sends Disconnect to BDUT.

 (8)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.3.5 Reception of data N_Data_Individual with wrong source address

 6.3.5.1 Sequence 18: Procedure with initial state ‘OPEN_IDLE’) Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

7


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind,
T_DATA_CONNECTED_REQ_PDU
(source_address != connection_address)


OPEN_IDLE
OPEN_WAIT


###### Figure 42: State transition for Sequence 18

 Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 BDUT sends Disconnect to USB B after connection-timeout.

 (3)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

 6.3.5.2 Sequence 19: Procedure with initial state ‘OPEN_WAIT’ Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.253 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 Send DevDescriptorRead from USB A to BDUT.

 (5)  IN B0 01.01.254 01.01.001 61 47 00 :DeviceDescriptorRead(DescType=00)

 BDUT sends repetition of DeviceData after ACK-timeout.

 (6)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )


-----

###### (7)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (8)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT disconnects from USB B.

 (9)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

##### 6.4 Transmission of data

###### 6.4.1 Reception of a T_ACK_PDU

 6.4.1.1 Sequence 20: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.

**Event-** **Events or Actions** **STATES** **Events or Actions** **Event-**
**No.** **No.**

Client  N_Data_Individual.ind, OPEN_IDLE

only

T_ACK_PDU
(source_address == connection_address)

(SeqNo_of_PDU == SeqNoSend)

8

###### Figure 43: State transition for Sequence 20


###### Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-ACK from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 BDUT remains in OPEN_IDLE, BDUT sends no Disconnect on the bus.

 Cleanup: USB A sends Disconnect to BDUT.

 (3)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.4.2 Reception of an T_ACK_PDU with wrong sequence number

 6.4.2.1 Sequence 21: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

9


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind, T_ACK_PDU

(source_address ==
connection_address)
(SeqNo_of_PDU != SeqNoSend)


OPEN_IDLE
OPEN_WAIT


###### Figure 44: State transition for Sequence 21

 Send Connect from USB A to BDUT.


-----

###### (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-ACK from USB A to BDUT with wrong sequence number.

 (2)  IN B0 01.01.254 01.01.001 60 D6 :T-Ack(Seq=5)

 BDUT remains in OPEN_IDLE, BDUT sends no Disconnect on the bus.

 Cleanup: USB A sends Disconnect to BDUT.

 (3)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.4.2.2 Sequence 22: Procedure with initial state ‘OPEN_WAIT’ Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BCU is in state OPEN_WAIT.

 Send T-ACK from USB A to BDUT with wrong sequence number.

 (5)  IN B0 01.01.254 01.01.001 60 D6 :T-Ack(Seq=5)

 ---> BDUT sends Disconnect to USB A.

 (6)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.4.3 Reception of T_ACK_PDU with wrong connection address

 6.4.3.1 Sequence 23: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

10


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind, T_ACK_PDU
(source_address != connection_address)


OPEN_IDLE
OPEN_WAIT


N_Data_Individual.req
(T_DISCONNECT_REQ_PDU) with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind), 

###### Figure 45: State transition for Sequence 23

 Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-ACK from USB A to BDUT.


-----

###### (2)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 ---> BDUT sends Disconnect to USB B after connection-timeout.

 (3)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

 6.4.3.2 Sequence 24: Procedure with initial state ‘OPEN_WAIT’ Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.253 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 Send T-ACK from USB A to BDUT.

 (5)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 ---> BDUT sends repetition of Device Data after ACK-timeout and disconnects after connection timeout.

 (6)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (7)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (8)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (9)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

 6.4.4 Reception of T_NAK_PDU with wrong sequence number

 6.4.4.1 Sequence 25: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

11


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind, T_NAK_PDU
( source_address == connection_address)

SeqNo_of_PDU!=SeqNoSend


OPEN_IDLE
OPEN_WAIT


###### Figure 46: State transition for sequence 25

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-NACK from USB A to BDUT with wrong sequence number.

 (2)  IN B0 01.01.254 01.01.001 60 D7 :T-Nack(Seq=5)


-----

###### BDUT remains in OPEN_IDLE, BDUT sends no Disconnect on the bus.

 Cleanup: USB A sends Disconnect to BDUT.

 (3)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.4.4.2 Sequence 26: Procedure with initial state ‘OPEN_WAIT’) Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BCU is in state OPEN_WAIT.

 Send T-NACK from USB A to BDUT with wrong sequence number.

 (5)  IN B0 01.01.254 01.01.001 60 D7 :T-Nack(Seq=5)

 ---> BDUT remains in OPEN_WAIT, BDUT sends no Disconnect on the bus.

 (6)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Cleanup: USB A sends Disconnect to BDUT.

 (7)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.4.5 Sequence 27 : Reception of T_NAK_PDU with correct sequence number - Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

12/13

21


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**

###  N_Data_Individual.ind, T_NAK_PDU
(source_address == connection_address) [OPEN_IDLE ]


N_Data_Individual.con
A6
(T_DISCONNECT_REQ_PDU)

A0

###### Figure 47: State transition for Sequence 27


N_Data_Individual.req
(T_DISCONNECT_REQ_PDU) with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind) 


CLOSED T_Disconnect.ind


-----

###### Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-NACK from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 ---> BDUT sends an immediate Disconnect to USB A.

 (3)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.4.6 Sequence 28: Reception of T_NAK_PDU and maximum number of repetitions is not reached - Procedure with initial state ‘OPEN_WAIT’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

12

22


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**
N_Data_Individual.ind, T_NAK_PDU OPEN_WAIT
(source_address == connection_address)
( SeqNo_of_PDU == SeqNoSend )

( rep_count < max_rep_count ) 

N_Data_Individual.req
T_DATA_CONNECTED_REQ_PDU

(stored message) 


A9

N_Data_Individual.con
T_DATA_CONNECTED_REQ_PDU

###### Figure 48: State transition for Sequence 28


###### Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 Send T-NACK from USB A to BDUT.

 (5)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 ---> BDUT sends repetition to USB A.

 (6)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )


-----

###### USB A sends Disconnect to BDUT.

 (7)  IN B0 01.01.254 01.01.001 60 81 :T-Disconnect

 6.4.7 Sequence 29: Reception of T_NAK_PDU and maximum number of repetitions is reached - Procedure with initial state ‘OPEN_WAIT’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_Data_Individual.ind, T_NAK_PDU
(source_address == connection_address) OPEN_WAIT

( SeqNo_of_PDU == SeqNoSend )

( rep_count == max_rep_count )

13 CLOSED T_Disconnect.ind


N_Data_Individual.req
T_DISCONNECT_REQ_PDU with
SYSTEM, Destination = source_address

(of N_Data_Individual.ind) 

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


A6


21

###### Figure 49: State transition for Sequence 29

 Send Connect from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.254 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 BDUT sends repetitions to USB A for 3 times.

 (5)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (6)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (7)  OUT B0 01.01.001 01.01.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 Send T-NACK from USB A to BDUT.

 (8)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 ---> BDUT sends Disconnect to USB A.


-----

###### (9)  OUT B0 01.01.001 01.01.254 60 81 :T-Disconnect

 6.4.8 Reception of T_NAK_PDU with wrong connection address

 6.4.8.1 Sequence 30: Procedure with initial state ‘OPEN_IDLE’ Purpose: Check whether the BDUT passes the following states.


**Event-**
**No.**

14

21


**Events or Actions** **STATES** **Events or Actions** **Event-**
**No.**


###  N_DATA_INDIVIDUAL.ind,
T_NAK_PDU (source_address !=
connection_address)

N_Data_Individual.req
T_DISCONNECT_REQ_PDU,
SYSTEM, Destination =

source_address (of buffer) 

N_Data_Individual.con
(T_DISCONNECT_REQ_PDU)


CLOSED
OPEN_IDLE
OPEN_WAIT


A10


###### Figure 50: State transition for sequence 30

 Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send T-NACK from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 BDUT sends no Disconnect on the bus.

 ---> BDUT sends Disconnect to USB B after connection-timeout.

 (3)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

 6.4.8.2 Sequence 31: Procedure with initial state ‘OPEN_WAIT’ Connect from USB B to BDUT.

 (1)  IN B0 01.01.253 01.01.001 60 80 :T-Connect(Addr=01.01.001)

 BDUT is in state OPEN_IDLE.

 Send DevDescriptorRead from USB B to BDUT.

 (2)  IN B0 01.01.253 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 (3)  OUT B0 01.01.001 01.01.253 60 C2 :T-Ack(Seq=0)

 (4)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT is in state OPEN_WAIT.

 Send T-NACK from USB A to BDUT.


-----

###### (5)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 ---> BDUT sends repetition of DeviceData after ACK-timeout.

 (6)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (7)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 (8)  OUT B0 01.01.001 01.01.253 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00, Descriptor=?? ?? )

 BDUT sends disconnect to USB B.

 (9)  OUT B0 01.01.001 01.01.253 60 81 :T-Disconnect

##### 6.5 Events started in state ‚CLOSED’
###### The following Sequence checks the events No. 4, No. 8 and No. 11 representative for event No. 4 till No.14 started with initial state ‚CLOSED’.

 6.5.1 Sequence 32: Procedure with initial state ‘CLOSED’ Send DeviceDescriptorRead from USB A to BDUT.

 (1)  IN B0 01.01.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

 Send T-ACK from USB A to BDUT.

 (2)  IN B0 01.01.254 01.01.001 60 C2 :T-Ack(Seq=0)

 BDUT sends no Disconnect on the bus.

 Send T-NACK from USB A to BDUT.

 (3)  IN B0 01.01.254 01.01.001 60 C3 :T-Nack(Seq=0)

 BDUT sends no Disconnect on the bus.


-----

