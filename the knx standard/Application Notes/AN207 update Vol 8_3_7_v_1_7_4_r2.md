## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 207 rev 2

### Approved by KCG on 18/3/2021 – Approved in Final Voting by KTB 0921 – Immediate effect after final voting

**Subject:** Changes in Volume 8/3/7 Version 1.7.4

**Question:**

**Answer:** Update of the EITT Templates requires the following additional changes in above stated Volume

### • 2.6.6, 2.6.9 and 2.7.13: stated length 17h (23d) should be changed to 10h (16d)

 • 2.6.1: 2 more lines need to be added in to set the last accessible memory location
 to a specific value. 

 • 2.7.4: The T-Disconnect and Reconnect in the middle of the sequence needs to be
 deleted, as otherwise the Verify Mode would be deactivated. 

 • 2.7.13: Memory Read -Count needs to be changed from 14h to 0Dh, same in
 Response (as is stated in the comment)

 • 2.7.19: Memory read count needs to be changed to 63d, in accordance with
 memory response count 3Fh

 • 2.14.11: one 01h (first octet of data) and 11h (17th octet of data) are missing for the
 complete telegram PropertyValueResponse (because PDT size 20) as well as for preceding PropValueWrite. 

 • 2.14.13 and 2.14.15: property response needs to be corrected from 0Eh to E0h

 • General in Routing Table tests: there is a mix up with the Ind.Add of the Router
 (BDUT) that is supposed to be 1.1.0 but appears sometimes as 1.1.1. This needs to be synchronized overall to 1.1.0. 

 • 2.22.7: needs to be corrected to match the memory value description from the
 beginning of the test collection, i.e. values 11 22 33 44 .. AA BB .. FF and so on. 250 bytes ends in this case with AAh instead of FAh as incorrectly stated in Volume 8/3/7. 

 • 2.24.22: Telegram RouterMemoryRead with Count B has no control field octet. 

 • DomainAddressSerialNumber tests: the below tests need to be added


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@DVLP 8/3/7 - AIL & Management Tests - System Conformance Test Template

@[t2.34.0 Test preparation

@[tWrite the default serial number

(1) IN 3C 60 01.00.065 01.00.001 0F 01 CE 00 00 00 10 0B 01 00 01 30 30 30 30 30 30
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=30 30 30 30 30 30 )

(2) OUT3C 60 01.00.001 01.00.065 0A 01 CF 00 00 00 10 0B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
RetCode=00)

@[t===============================================================================

@[tTestcase 2.34.1 Set Domain Address via correct Serial Number

(3) IN 2C E0 01.00.065 00/0000 0D 03 EE 30 30 30 30 30 30 12 34 12 34 12 34
:DomAddrSnoWrite(Sno=303030303030, DomAddr=12 34 12 34 12 34)

@[tAcceptance: The BDUT now has the Domain address 123412341234h. This can be checked via an
DomainAddressRead in programming mode.

@@!For verification switch ON programming LED of BDUT.

(4) IN 2C E0 01.00.065 00/0000 01 03 E1 :DomAddrRead()

(5) OUT2C E0 01.00.001 00/0000 07 03 E2 12 34 12 34 12 34
:DomAddrResponse(DomAddr=123412341234)

@@!Now switch OFF programming LED of BDUT.

@[t===============================================================================

@[tTestcase 2.34.2 Set Domain Address to other Value via same Serial Number

(6) IN 2C E0 01.00.065 00/0000 0D 03 EE 30 30 30 30 30 30 56 78 56 78 56 78
:DomAddrSnoWrite(Sno=303030303030, DomAddr=56 78 56 78 56 78)

@[tAcceptance: The BDUT now has the Domain address 567856785678h. This can be checked via a
DomainAddressRead in programming mode.

@@!For verification switch ON programming LED of BDUT.

(7) IN 2C E0 01.00.065 00/0000 01 03 E1 :DomAddrRead()

(8) OUT2C E0 01.00.001 00/0000 07 03 E2 56 78 56 78 56 78
:DomAddrResponse(DomAddr=567856785678)

@@!Now switch OFF programming LED of BDUT.

@[t===============================================================================

@[tTestcase 2.34.3 Set Domain Address to other Value via incorrect Serial Number

(9) IN 2C E0 01.00.065 00/0000 0D 03 EE CA FE FE ED BA BE 23 45 23 45 23 45
:DomAddrSnoWrite(Sno=CAFEFEEDBABE, DomAddr=23 45 23 45 23 45)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tAcceptance: The BDUT Domain address is unchanged. This can be checked via a DomainAddressRead
in programming mode.

@@!For verification switch ON programming LED of BDUT.

(10) IN 2C E0 01.00.065 00/0000 01 03 E1 :DomAddrRead()

(11) OUT2C E0 01.00.001 00/0000 07 03 E2 56 78 56 78 56 78
:DomAddrResponse(DomAddr=567856785678)

@@!Now switch OFF programming LED of BDUT.

@[t==============================================================================

@[t2.35.0 Test preparation

@[tWrite the default serial number (if writable, else set during manufacturing process and test step can be
skipped – make sure the correct serial number is configured in the EITT data sheet)

(12) IN 2C 60 01.00.065 01.00.001 0F 01 CE 00 00 00 10 0B 01 00 01 30 30 30 30 30 30
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=30 30 30 30 30 30 )

(13) OUT2C 60 01.00.001 01.00.065 0A 01 CF 00 00 00 10 0B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
RetCode=00)

@[t===============================================================================

@[tTestcase 2.35.1 Read Domain Address via incorrect Serial Number

(14) IN 2C E0 01.00.065 00/0000 07 03 EC CA FE BE EF BA BE
:DomAddrSnoRead(Sno=CAFEBEEFBABE)

@[tAcceptance: No response may be sent.

@[t===============================================================================

@[tTestcase 2.35.2 Send Response to BDUT via incorrect Serial Number

(15) IN 2C E0 01.00.065 00/0000 0D 03 ED CA FE BE EF BA BE 56 78 56 78 56 78
:DomAddrSnoResponse(Sno=CAFEBEEFBABE, DomAddr=56 78 56 78 56 78)

@[tAcceptance: No response may be sent.

@[t===============================================================================

@[tTestcase 2.35.3 Read Domain Address via correct Serial Number

(16) IN 2C E0 01.00.065 00/0000 07 03 EC 30 30 30 30 30 30
:DomAddrSnoRead(Sno=303030303030)

(17) OUT2C E0 01.00.001 00/0000 0D 03 ED 30 30 30 30 30 30 12 34 12 34 12 34
:DomAddrSnoResponse(Sno=303030303030, DomAddr=12 34 12 34 12 34)

@[tAcceptance: The BDUT sends an A_DomainAddressSerialNumber_Response-PDU.

@[t===============================================================================


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tTestcase 2.35.4 Send Response to BDUT via correct Serial Number

(18) IN 2C E0 01.00.065 00/0000 0D 03 ED 30 30 30 30 30 30 56 78 56 78 56 78
:DomAddrSnoResponse(Sno=303030303030, DomAddr=56 78 56 78 56 78)

@[tAcceptance: no response may be sent.

@[t===============================================================================


-----

