## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 199 rev 3

### Approved by KonCert 03/20 – approved in Final Voting by KTB 07/20 –still under discussion in KCG - Immediate effect after final voting

**Subject:** Additional Tests Volume 8/3/7 and RF S-Mode

**Question:**

**Answer:**

### It is proposed to add the following tests to Volume 8/3/7 as paragraph 2.34 and 2.35

@[t
@[tTestcase 2.34.1 Set Domain Address via correct Serial Number
IN 2C E0 01.00.065 00/0/000 0D 03 EE 30 30 30 30 30 30 12 34 12 34 12 34
:DomAddrSnoWrite(Sno=303030303030, DomAddr=12 34 12 34 12 34)
@[tAcceptance: The BDUT now has the Domain address 123412341234h. This can be checked via an
DomainAddressRead in programming mode.
@@!For verification switch ON programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=01 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=01 )
IN 2C E0 01.00.065 00/0/000 01 03 E1 :DomAddrRead()
OUT 2C E0 01.01.011 00/0/000 07 03 E2 12 34 12 34 12 34
:DomAddrResponse(DomAddr=123412341234)
@@!Now switch OFF programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=00 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=00 )
@[t===============================================================================
@[tTestcase 2.34.2 Set Domain Address to other Value via same Serial Number
IN 2C E0 01.00.065 00/0/000 0D 03 EE 30 30 30 30 30 30 56 78 56 78 56 78
:DomAddrSnoWrite(Sno=303030303030, DomAddr=56 78 56 78 56 78)
@[tAcceptance: The BDUT now has the Domain address 567856785678h. This can be checked via a
DomainAddressRead in programming mode.
@@!For verification switch ON programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=01 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=01 )
IN 2C E0 01.00.065 00/0/000 01 03 E1 :DomAddrRead()
OUT 2C E0 01.01.011 00/0/000 07 03 E2 56 78 56 78 56 78
:DomAddrResponse(DomAddr=567856785678)
@@!Now switch OFF programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=00 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=00 )
@[t===============================================================================
@[tTestcase 2.34.3 Set Domain Address to other Value via incorrect Serial Number
IN 2C E0 01.00.065 00/0/000 0D 03 EE CA FE FE ED BA BE 23 45 23 45 23 45
:DomAddrSnoWrite(Sno=CAFEFEEDBABE, DomAddr=23 45 23 45 23 45)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tAcceptance: The BDUT still has the Domain address 56 78 56 78 56 78h. This can be checked via a
DomainAddressRead in programming mode.
@@!For verification switch ON programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=01 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=01 )
IN 2C E0 01.00.065 00/0/000 01 03 E1 :DomAddrRead()
OUT 2C E0 01.01.011 00/0/000 07 03 E2 56 78 56 78 56 78
:DomAddrResponse(DomAddr=567856785678)
@@!Now switch OFF programming LED of BDUT.
IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=00 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=00 )
@[t===============================================================================
@[tTestcase 2.35.1 Read Domain Address via incorrect Serial Number
IN 2C E0 01.00.065 00/0/000 07 03 EC CA FE BE EF BA BE
:DomAddrSnoRead(Sno=CAFEBEEFBABE)
@[tAcceptance: No response may be sent.
@[t===============================================================================
@[tTestcase 2.35.2 Send Response to BDUT via incorrect Serial Number
IN 2C E0 01.00.065 00/0/000 0D 03 ED CA FE BE EF BA BE 56 78 56 78 56 78
:DomAddrSnoResponse(Sno=CAFEBEEFBABE, DomAddr=56 78 56 78 56 78)
@[tAcceptance: No response may be sent.
@[t===============================================================================
@[tTestcase 2.35.3 Read Domain Address via correct Serial Number
IN 2C E0 01.00.065 00/0/000 07 03 EC 30 30 30 30 30 30 :DomAddrSnoRead(Sno=303030303030)
OUT 2C E0 01.01.011 00/0/000 0D 03 ED 30 30 30 30 30 30 56 78 56 78 56 78
:DomAddrSnoResponse(Sno=303030303030, DomAddr=56 78 56 78 56 78)
@[tAcceptance: The BDUT sends an A_DomainAddressSerialNumber_Response-PDU.
@[t===============================================================================
=
@[tTestcase 2.35.4 Send Response to BDUT via correct Serial Number
(18) IN 2C E0 01.00.065 00/0/000 0D 03 ED 30 30 30 30 30 30 56 78 56 78 56 78
:DomAddrSnoResponse(Sno=303030303030, DomAddr=56 78 56 78 56 78)
@[tAcceptance: no response may be sent.
@[t===============================================================================

### It is proposed to add the following test examples to Volume 8/3/7 as part of paragraph 5.2

@[tTestcase 5.2.1 Test 1 - 1 to 1 relation (1-bit) - receiving

It is suggested to replace the figures 6 to 12 by the following single overview figure


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

@[tAttribute GA 1/1/0 to GO0 and GA 1/1/2 to GO1
IN BC 01.00.065 01/1/000 E1 00 81 :GroupValueWrite(Grp=01/1/000, 01)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
OUT BC 01.01.011 01/1/002 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/000 E1 00 80 :GroupValueWrite(Grp=01/1/000, 00)
OUT BC 01.01.011 01/1/002 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: the returned status value changes according to the written values.
@[t===============================================================================

@[tTestcase 5.2.1 Test 2 - 1 to n relation (1-bit) - receiving
@[tAttribute GA 1/1/1 to GO2 and GO4 - GA 1/1/3 to GO3 and GO5.
IN BC 01.00.065 01/1/001 E1 00 81 :GroupValueWrite(Grp=01/1/000, 01)
OUT BC 01.01.011 01/1/003 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/003 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/0010 E1 00 80 :GroupValueWrite(Grp=01/1/000, 00)
OUT BC 01.01.011 01/1/003 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
OUT BC 01.01.011 01/1/003 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: the returned status value changes according to the written values.
@[t===============================================================================
@[tTestcase 5.2.1 Test 3 - n to 1 relation (1-bit) - receiving
@[tAttribute GA 1/1/4 and GA 1/1/5 to GO6- GA 1/1/6 to GO7
IN BC 01.00.065 01/1/004 E1 00 81 :GroupValueWrite(Grp=01/1/000, 01)
OUT BC 01.01.011 01/1/006 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/004E1 00 80 :GroupValueWrite(Grp=01/1/000, 00)
OUT BC 01.01.011 01/1/006 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
IN BC 01.00.065 01/1/005 E1 00 81 :GroupValueWrite(Grp=01/1/001, 01)
OUT BC 01.01.011 01/1/006 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/005 E1 00 80 :GroupValueWrite(Grp=01/1/001, 00)
OUT BC 01.01.011 01/1/006 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: the returned status value changes according to the written values.
@[t===============================================================================
@[tTestcase 5.2.1 Test 4 - n to n relation (1-bit) - receiving
@[tAttribute GA 1/1/7 and GA 1/1/8 to GO8 and GO10- GA 1/1/9 to GO9 and GO11
IN BC 01.00.065 01/1/007 E1 00 81 :GroupValueWrite(Grp=01/1/000, 01)
OUT BC 01.01.011 01/1/009 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/009 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/007 E1 00 80 :GroupValueWrite(Grp=01/1/000, 00)
OUT BC 01.01.011 01/1/009 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
OUT BC 01.01.011 01/1/009 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
IN BC 01.00.065 01/1/008 E1 00 81 :GroupValueWrite(Grp=01/1/001, 01)
OUT BC 01.01.011 01/1/009 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/009 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
IN BC 01.00.065 01/1/008 E1 00 80 :GroupValueWrite(Grp=01/1/001, 00)
OUT BC 01.01.011 01/1/009 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
OUT BC 01.01.011 01/1/009 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: the returned status value changes according to the written values.
@[t===============================================================================
@[tTestcase 5.2.2 Test 1 - 1 to 1 relation (1-bit) - sending
@[tAttribute GA 1/1/10 to GO12, GO13 does not have a GA assigned
@[tStimulate the object on the server side: twice and within 20 seconds.
OUT BC 01.01.011 01/1/010 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/010 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: verify if the returned status value has changed according to the stimuli.
@[t===============================================================================
@[tTestcase 5.2.2 Test 2 - 1 to n relation (1-bit) - sending
@[tAttribute GA 1/1/11 to GO14 and to GO15
@[tStimulate both objects on the server side: each object once and within 20 seconds.
OUT BC 01.01.011 01/1/011 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/011 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: verify if two telegrams have been sent. One telegram for each Group Address with values
according to the stimuli.
@[t===============================================================================


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tTestcase 5.2.2 Test 3 - n to 1 relation (1-bit)
@[tAttribute GA 1/1/12 and GA 1/1/13 to GO16
@[tStimulate the object on the server side: twice and within 20 seconds.
OUT BC 01.01.011 01/1/012 E1 00 81 :GroupValueWrite(Grp=01/1/002, 01)
OUT BC 01.01.011 01/1/012 E1 00 80 :GroupValueWrite(Grp=01/1/002, 00)
@@!Acceptance: verify whehter two telegrams have been sent with the same destination Group Address.
The values are according to the stimuli AND no telegram shall have been sent on the second Group
Address.
@[t===============================================================================
### It is suggested to add the following additional tests for testing KNX RF S-Mode features according AN 162. 

Test of Bi-directional Mode: start and retriggering

@[t Wake up sleeping DUT via prog button
@@ Please switch prog mode on
@[t
@[t - Bidir mode with timeout of 60s starting by prog mode activation
@[t
@[t Retrigger bidir mode via prog mode. Expecting bidir timeout of 60s
IN 3C 60 01.01.002 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=00 )
OUT 3C 60 01.01.001 01.01.002 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=00 )
IN 3C 60 01.01.002 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=01 )
OUT 3C 60 01.01.001 01.01.002 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=01 )
IN 3C 60 01.01.002 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=00 )
OUT 3C 60 01.01.001 01.01.002 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=00 )

@[t
@[t 2s later, query remaining bidir time
@[t Expecting 60s (retriggered by Property and FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 3C :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 3C )
@[t
@[t 59s later, query again remaining bidir time
@[t Expecting 60s (retriggered by FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 3C :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 3C )
@[t
@[t - Bidir mode with timeout of 10s starting by device restart
@[t
@[t Set RF_BIDIR_TIMEOUT to 1s
IN 3C 60 01.01.002 01.01.001 04 02 C7 06 3C 01 :FctPropCmd(ObjIdx=06, PropId=3C, Data=01 )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 01 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 01 )
@[t
@[t Restart DUT
@[t Expecting bidir timeout of 10s
IN 3C 60 01.01.002 01.01.001 01 03 80 :Restart(Response=00, Type=00)
@[t
@[t 9s later, query remaining bidir time


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[t Expecting 10s (retriggered by FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 0A :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 0A )
@[t
@[t - Bidir mode retriggering by FunctionPropertyCommand
@[t
@[t Set bidir time to 5s by FunctionProperty PID_RF_BIDIR_TIMEOUT
IN 3C 60 01.01.002 01.01.001 04 02 C7 06 3C 05 :FctPropCmd(ObjIdx=06, PropId=3C, Data=05 )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 05 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 05 )
@[t
@[t 4s later, query remaining bidir time
@[t Expecting 5s (retriggered by FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 05 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 05 )
@[t
@[t - Bidir mode retriggering by SystemNetworkParameterWrite
@[t
@[t Set bidir time to 6s by SystemNetworkParameterWrite PID_RF_BIDIR_TIMEOUT
IN 2C E0 01.01.002 00/0/000 06 01 CA 00 13 03 C0 06
:SystemNetworkParameterWrite(ObjType=0013, PID=003C, Value=06 )
@[t
@[t 5s later, query remaining bidir time
@[t Expecting 6s (retriggered by FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 06 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 06 )
@[t
@[t - Bidir telegram from DUT with bidir timeout of 3s
@[t
@[t Send 1-byte value 1 to 2/1/2, to trigger bidir test telegram from DUT after 60s
IN 3C E0 01.01.002 02/1/002 02 00 80 01 :GroupValueWrite(Grp=1102, 01)
@[t
@[t Set bidir time to 0 by FunctionProperty PID_RF_BIDIR_TIMEOUT
IN 3C 60 01.01.002 01.01.001 04 02 C7 06 3C 00 :FctPropCmd(ObjIdx=06, PropId=3C, Data=00 )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 00 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 00 )
@[t
@[t Query remaining bidir time
@[t Expecting no response (DUT fallen asleep immediately)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
@[t
@[t Expecting test telegram from DUT after 60s, and then bidir timeout of 3s
OUT 3C E0 01.01.001 00/0/000 01 01 40 :IndAddrResponse(Addr=1101)
@[t
@[t 2s later, query remaining bidir time
@[t Expecting 3s (retriggered by FunctionProperty access)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 03 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 03 )
@[t
@[t Unidir telegram from DUT
@[t
@[t Send 1-byte value 0 to 2/1/2, to trigger unidir test telegram after 60s
IN 3C E0 01.01.002 02/1/002 02 00 80 00 :GroupValueWrite(Grp=1102, 00)
@[t
@[t 4s later, query remaining bidir time


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[t Expecting no response (DUT fallen asleep after 3s)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
@[t
@[t Expecting unidir test telegram (with unidir flag set) after (60 - 3)s
OUT 3C E0 01.01.001 00/0/000 01 01 40 :IndAddrResponse(Addr=1101)
@[t
@[t Query remaining bidir time
@[t Expecting no response (DUT sleeping)
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
@[t

Function PropertyTests based on PID_RF_DIAG_PROBE in the RF Medium Object
@[t FunctionPropertyCommand trigger to RF_DIAG_PROBE correct value 00h
@[t shall produce positive FunctionPropertyState_Response (P2P) and positive
NetworkParameterInfoReport (broadcast)
IN 3C 60 01.01.002 01.01.000 04 02 C7 03 3F 00 :FctPropCmd(ObjIdx=03, PropId=3F, Data=00 )
OUT 3C 60 01.01.000 01.01.002 05 02 C9 03 3F 00 00 :FctPropState_Rsp(ObjIdx=03, PropId=3F,
RetCode=00, Data=00 )
OUT 3C 60 01.01.000 00.00.000 06 03 DB 00 03 3F 00 00
:NetworkParameterResponse/InfoReport(ObjType=0003, PID=3F, TestData=00 00 )
@[t
@[t FunctionPropertyCommand trigger to RF_DIAG_PROBE incorrect value FFh
@[t shall produce negative FunctionPropertyState_Response
IN 3C 60 01.01.002 01.01.000 04 02 C7 03 3F FF :FctPropCmd(ObjIdx=03, PropId=3F, Data=FF )
OUT 3C 60 01.01.000 01.01.002 03 02 C9 03 3F :FctPropState_Rsp(ObjIdx=03, PropId=3F)
@[t
@[t FunctionPropertyState_Read
@[t shall produce FunctionPropertyState_Response, but not NetworkParameterInfoReport
IN 3C 60 01.01.002 01.01.000 04 02 C8 03 3F 00 :FctPropState_Read(ObjIdx=03, PropId=3F, 00 )
OUT 3C 60 01.01.000 01.01.002 05 02 C9 03 3F 00 00 :FctPropState_Rsp(ObjIdx=03, PropId=3F,
RetCode=00, Data=00 )
@[t
@[t PropertyValue_Read applied to FunctionProperty
@[t shall produce negative PropertyValue_Response
IN 3C 60 01.01.002 01.01.000 05 03 D5 03 3F 10 01 :PropertyValueRead(Obj=03, Prop=3F, Count=1,
Start=001)
OUT 3C 60 01.01.000 01.01.002 05 03 D6 03 3F 00 01 :PropertyValueResponse(Obj=03, Prop=3F,
Count=0, Start=001, Data=)
@[t
@[t PropertyValue_Write applied to FunctionProperty
@[t shall produce negative PropertyValue_Response
IN 3C 60 01.01.002 01.01.000 06 03 D7 03 3F 10 01 00 :PropertyValueWrite(Obj=03, Prop=3F,
Count=1, Start=001, Data=00 )
OUT 3C 60 01.01.000 01.01.002 05 03 D6 03 3F 00 01 :PropertyValueResponse(Obj=03, Prop=3F,
Count=0, Start=001, Data=)
@[t
@[t FunctionPropertyCommand applied to NonFunctionProperty
@[t shall produce negative FunctionPropertyState_Response
IN 3C 60 01.01.002 01.01.000 04 02 C7 00 01 00 :FctPropCmd(ObjIdx=00, PropId=01, Data=00 )
(13) OUT 3C 60 01.01.000 01.01.002 03 02 C9 00 01 :FctPropState_Rsp(ObjIdx=00,
PropId=01)
@[t
@[t FunctionPropertyState_Read applied to NonFunctionProperty
@[t shall produce negative FunctionPropertyState_Response
IN 3C 60 01.01.002 01.01.000 04 02 C8 00 01 00 :FctPropState_Read(ObjIdx=00, PropId=01, 00 )
OUT 3C 60 01.01.000 01.01.002 03 02 C9 00 01 :FctPropState_Rsp(ObjIdx=00, PropId=01)

@[t example RF_BIDIR_TIMEOUT function property for bidirectional RF device
@[t Activate the programming mode


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
N 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36, Count=1, Start=001,
Data=01 )
OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36, Count=1,
Start=001, Data=01 )
@[t Read function property RF_BIDIR_TIMEOUT
@[t Expecting response ReturnCode=00h, MaxTimeout=FFh, and TimeLeft=FFh for permanent bidirectional
devices
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 FF FF :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=FF FF )
Alternatively, for semi-directional devices
@[t Expecting response ReturnCode=00h, MaxTimeout=xxh, and TimeLeft=yyh
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? ?? :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? ?? )
@[t
@[t Write function property RF_BIDIR_TIMEOUT
@[t Overwriting time-out value with certain value
@[t Expecting response MaxTimeout=FFh and TimeLeft=FFh for permanenet bidirectional devices, Return
Code don't care
IN 3C 60 01.01.002 01.01.001 04 02 C7 06 3C 05 :FctPropCmd(ObjIdx=06, PropId=3C, Data=05 )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C ?? FF FF :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=??, Data=FF FF )
@[t Expecting response MaxTimeout=xxh and TimeLeft=yyh for semi-directional devices, Return Code
success and time left retriggered with value written
Alternatively, for semi-directional devices
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? ?? :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? ?? )
@[t Overwriting time-out value with value 0 (=deactivating the bidirectional mode)
@[t Expecting response MaxTimeout=FFh and TimeLeft=FFh for permanenet bidirectional devices, Return
Code don't care
IN 3C 60 01.01.002 01.01.001 04 02 C7 06 3C 00 :FctPropCmd(ObjIdx=06, PropId=3C, Data=00 )
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C ?? FF FF :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=??, Data=FF FF )
Alternatively, for semi-directional devices
@[t Expecting response MaxTimeout=xxh and TimeLeft=00h Return Code success and time left retriggered
with value written
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? 00 :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? 00 )
@[t
@[t System NetworkParameter Write using RF_BIDIR_TIMEOUT
Restart Device
@[t Not expecting any responses but changed timeout
IN 2C E0 01.01.002 00/0/000 06 01 CA 00 13 03 C0 22
:SystemNetworkParameterWrite(ObjType=0013, PID=003C, Value=22 )
Wait for 15 seconds
@[t Checking whether device is not yet in sleepmode.
IN 3C 60 01.01.002 01.01.001 03 02 C8 06 3C :FctPropState_Read(ObjIdx=06, PropId=3C, )
@[t Expecting response ReturnCode=00h, MaxTimeout=xxh, and TimeLeft=yyh for semi-directional devices
OUT 3C 60 01.01.001 01.01.002 06 02 C9 06 3C 00 ?? ?? :FctPropState_Rsp(ObjIdx=06, PropId=3C,
RetCode=00, Data=?? ?? )
@[t


-----

