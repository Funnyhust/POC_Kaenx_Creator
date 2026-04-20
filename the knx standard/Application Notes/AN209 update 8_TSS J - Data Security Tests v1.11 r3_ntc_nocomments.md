## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 209 rev 3

### Approved by KCG on 14/9/2021 – Approved in Release for Voting by KTB 10/21 – To be approved in Final Voting by KTB 01/22 - Immediate effect after final voting

**Subject:** Changes in Volume 8 TSS J Data Security V1.11 AS

**Question:**

**Answer:** Update of the EITT Templates requires the following additional changes in above stated Volume

Note 1: the below list does not include changes to the template that have no effect on the telegram format shown in TSS
J (e.g. timing corrections, changes related to sequence number value tool/from table, …).

Note 2: the below gives a rationale for changing the current test, should this not already be clear from the change
proposal.

**Changes to AN158 Template**
#### 1. Increase Seq No Tool to higher values

Increase Seq No Tool in 3.3.15 to 5000000000 (instead of 2000) in the [sn"Tool;;;IN;;x" command, respectively
5000000001 in the next one.

This change shall be considered also in the fixed text in the update of the TSS J.

Rationale: Avoiding that because of several prior factory resets of the BDUT, the now set value would be exceeded.

#### 2. Set A+C for Clean up at the end of Test 3.6

Set Telegram 306 to Secure (C) + Tool key

Rationale: Currently one tries to set back the IA to default value without authentication (and encryption). This is not
possible when security mode is activated.

#### 3. Set Authorize Response Access Level to ?? (don’t care) in 3.7.2.7

The test shall be changed so that the returned access level becomes irrelevant (as not focus of the test).

The required changes are given in red below:

@[tTestcase 3.7.2.7 A_Authorize_Request PDU (3FF/3FF) – Plain/A/A + C – Security Mode on
@[tRequired DUT setting: Security Mode of the DUT activated. Assumed BAU password set 12345678h. Level to
which access is granted is irrelevant
@[tPurpose: Check whether DUT accepts an A_Authorize_Request PDU plain, authenticated and with confidentiality,
even if security mode is activated.
@[tProcedure: Send message to the DUT to attempt to request authorization plain and with authentication and/or
encryption.
@[tActivate Security Mode
(391) T  C   IN        3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1
(392) T  C   OUT       3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1
(393) IN        BC 01.00.065 01.01.001 60 80 :T-Connect(Addr=01.01.001)
(394) IN        BC 01.00.065 01.01.001 66 43 D1 00 12 34 56 78 :AuthorizeRequest(12345678)
(395) OUT       B0 01.01.001 01.00.065 60 C2 :T-Ack(Seq=0)
(396) OUT       BC 01.01.001 01.00.065 62 43 D2 ?? :AuthorizeResponse(??)
(397) IN        BC 01.00.065 01.01.001 60 C2 :T-Ack(Seq=0)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(398) T  A   IN        3C 60 01.00.065 01.01.001 06 47 D1 00 12 34 56 78 :AuthorizeRequest(12345678),
Key: TK1
(399) OUT       B0 01.01.001 01.00.065 60 C6 :T-Ack(Seq=1)
(400) T  A   OUT       BC 01.01.001 01.00.065 62 47 D2 ?? :AuthorizeResponse(??), Key: TK1
(401) IN        BC 01.00.065 01.01.001 60 C6 :T-Ack(Seq=1)
(402) T  C   IN        3C 60 01.00.065 01.01.001 06 4B D1 00 12 34 56 78 :AuthorizeRequest(12345678),
Key: TK1
(403) OUT       B0 01.01.001 01.00.065 60 CA :T-Ack(Seq=2)
(404) T  C   OUT       BC 01.01.001 01.00.065 62 4B D2 ?? :AuthorizeResponse(??), Key: TK1
(405) IN        BC 01.00.065 01.01.001 60 CA :T-Ack(Seq=2)
(406) IN        BC 01.00.065 01.01.001 60 81 :T-Disconnect
@[tDeactivate Security Mode
(407) T  C   IN        3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1
(408) T  C   OUT       3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1
@[tAcceptance: the BDUT accepts the authorize Request and answers in all cases with an authorize Response.
Rationale: During this particular test, the granted access level is irrelevant, the aim of the test is to check the access
policies of the service.

#### 4. Change Domain Address to default multicast IP Address

Change Domain Address in telegram 581 to E0 00 17 0Ch

Rationale: The current value is never initialized and is not in the range of allowed IPV4 multicast addresses.

#### 5. Changes of Domain Address in Test 3.7.2.12.3

a) The 21 octets shall be structured according AN183: 6 octets serial number, 4 octets domain address, one byte routing
security version and backbone key.

The whole test case shall be changed so that

   - the 6 octets are the serial number of the device (as entered into the data sheet);
   - the domain address that shall be set in advance shall be the default multicast address (E0 00 17 0Ch) and shall
be changed to other values e.g. EX 00 17 0Ch
   - the routing security version shall always be set to 1h and
   - the backbone key shall also be set to a fixed value of e.g. 16 x 11h.

b) For reading the changed domain address, instead of using the DomainAddrSerNoRead, one shall use

3C 60 01.00.065 01.01.001 09 01 CC 00 0B 00 10 42 01 00 01 :PropertyExtValueRead(ObjType=000B,
ObjInst=0001, PropId=0042, ElemCount=01, Index=0001)

Same as in 3.7.2.12.1

c) Add an extra test (with A+C) where an attempt is made to change the DoA to another value but by setting the routing
security version to a value 2h and checking whether indeed, the DoA is NOT changed.

#### 6. Wrong value for activating security mode in Test 3.7.2.12.3

The value to activate the Security Mode is wrong in Telegram 588

Rationale: Should be 01 instead of now 00h.

#### 7. Change throughout Test 3.8.2.x Element Count to Fh

Element count is now set to 01h, this should be changed everywhere to Fh, as PID_OBJECT_NAME is of Property
Datatype PDT_UNSIGNED_CHAR[].

Change in telegram 681 wrong propId in response (001 instead of 002).


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 8. Change SerNoValue in 3.8.3.2 

The serial number entered in the data sheet shall be referenced in the test telegrams, but by adding “+1” to it, so that it
differs from the BDUT’s serial number.

#### 9. Change FDSK entries to TK1

Last telegrams in Test case 3.8.7.4 (917/918) shall be changed to TK1. Same for 3.8.10.5 (1170/1171). Same for
3.8.17.5 (2179/2180). Same for 3.8.18.3 (2279/2280). Same for 3.8.14.5 (1785/1816/1836). Same for entire 3.8.19 as
well as the 3.9.

Rationale: In the cleanup procedure of test cases, the “FDSK” is used to disable the security mode. From the Telegrams
just before this clean up, it can be seen, that the TK1 is active in the DUT at this time.
In the test procedure 3.8.19 all telegrams are set to “FDSK”, where at the beginning of the sequence TK1 seems to be
active in the DUT.

#### 10. Replace setting of the error counters in 3.8.12.6

Instead of introducing a manufacturer specific FunctionPropertyExtCommand, replace telegrams 1429 to 1432 by the below:

@[tSet error counters to FFFFh (e.g. use manufacturer specific PID – e.g. PID = 203h in the KNX Secure Object with 4
Elements, each 16 Bits wide) and check on Overflow

(x)        T  C   IN    start [Sside1  ] 3C 60 10.15.254 15.15.000 11 01 CE 00 11 00 10 CB 04 00 01 FF FF FF FF FF FF FF FF
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=00CB, ElemCount=04, Index=0001, Data=FF FF FF FF FF FF
FF FF ), Key: TK1

(y)        T  C   OUT 00:00:00.0 [Sside1  ] 3C 60 15.15.000 10.15.254 0A 01 CF 00 11 00 10 CB 04 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=00CB, ElemCount=04, Index=0001, RetCode=00), Key:
TK1

Rationale: avoiding methods using reserved service IDs

#### 11. Object index still set to fixed value of 6 in EITT Template Test 3.8.12.8

Change fixed value of ObjIdx=6 to variable SEC_INTF_OBJ_INDEX throughout the whole test (telegrams 1462, 1464, 1468,
1470, 1474, 1476, 1477,

#### 12. Insert @@[rn at end of 3.8.15.7

Insert this command prior to the telegram 2036

#### 13. Shift Setup telegrams from 3.8.18.1 to 3.8.18.2

Shift telegrams 2181 to 2186 to beginning of 3.8.18.2

Rationale: Make the test setup in the test to which it belongs, not in the preceding test.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 14. Change Text of 3.8.19.1

Change to:

_@[t3.8.19.1.1 Parameter Memory_
_@[tThe Parameter Memory of the Device Model 0x091A is related to the BCU1 memory Model. For this Device Model_
_relevant addresses are:_
_@[t- Address: 0x104, Name: Manufacture, Description: 1 Byte Manufacturer Data_
_@[t- Address: 0x105-0x106, Name: Device Type_
_@[t- Address: 0x107, Name Version_
_@[t- Address: 0x112, Name: Main Line Physical resend Repetitions_
_@[t- Address: 0x113, Name: Main Line Group resend Repetitions_
_@[t- Address: 0x114, Name: Sub Line Physical resend Repetitions_
_@[t- Address: 0x115, Name: Sub Line Group resend Repetitions_
_@[t- Address: 0x117-0x118, Name: IA, Description: Individual Address of the Host device_
_@[t- Address: 0x11B, Name: LK_def_2_
_@[t- Address: 0x11C, Name: LK_Grp_Conf_
_@[t- Address: 0x11D, Name: Bridge, 1: Repeater, other values Reserved_
_@[tReading and writing of these addresses is related only to legacy tool usage and legacy data base entries._
_@[tFor this, reading and writing must only be ensured if Security Mode is off._
_@[tIf the manufacturer supports downward compatible configuration, it must be ensured, that writing to these_
_addresses is not possible, if the Security Mode is on._
_@[tReading of these addresses might work and is manufacturer dependent._

Add as Test Preparation at the beginning of 3.8.19.1 the writing of specific content at the memory location (after current
telegram 2296).

_@[tPreparation - Set Memory Location to specific content_

_(1)_ _IN_ _BC 01.01.100 01.01.001 60 80 :T-Connect(Addr=01.01.001)_
_(2)_ _IN_ _BC 01.01.100 01.01.001 64 42 81 01 00 00 :MemoryWrite(Count=01, Addr=0100, Data=00 )_
_(3)_ _OUT_ _B0 01.01.001 01.01.100 60 C2 :T-Ack(Seq=0)_
_(4_ _OUT_ _BC 01.01.001 01.01.100 64 42 41 01 00 00 :MemoryResponse(Count=01, Addr=0100, Data=00 )_
_(5)_ _IN_ _BC 01.01.100 01.01.001 60 C2 :T-Ack(Seq=0)_
_(6)_ _IN_ _BC 01.01.100 01.01.001 60 81 :T-Disconnect_

#### 15. Set Device Descriptor to ?? in Test 3.9

The Response shall accept any value for the Device Descriptor.

#### 16. Missing service ID after Return Code in FctPropResponse

Previous versions of TSS J required besides the (negative) return code the repeated ServiceId.

The current version of the Test specifications require in the clauses In chapter 3.8.8.3, 3.8.8.4 and 3.8.12.1 only the (negative)
return code.

AN 158 V07 clearly requires the repeated Service ID:


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

This shall be correctly accordingly in the before-mentioned clauses of TSS J.

The following additional correction shall be made in this test step:

_@[tPerform Unsecured FctPropStateRead_

_@[tBDUT DOES NOT allow to read the values unsecured and returns an error_

_(1) IN_ _BC 01.01.100 01.01.001 69 01 D5 00 11 00 10 37 00 00 00 :FctPropertyExtStateRead(ObjType=0011,_
_ObjInst=0001, PropId=0037, Data=00 00 00 )_
_(2) OUT BC 01.01.001 01.01.100 68 01 D6 00 11 00 10 37 FC 00 :FctPropertyExtStateResponse(ObjType=0011,_
_ObjInst=0001, PropId=0037, RetCode=FC, Data=00 )_
_@[tRead of Last Message unsecured_
_(3) IN_ _BC 01.01.100 01.01.001 69 01 D5 00 11 00 10 37 00 01 00 :FctPropertyExtStateRead(ObjType=0011,_
_ObjInst=0001, PropId=0037, Data=00 01 00 )_
_(4) OUT BC 01.01.001 01.01.100 68 01 D6 00 11 00 10 37 FC 01_ _:FctPropertyExtStateResponse(ObjType=0011,_
_ObjInst=0001, PropId=0037, RetCode=FC, Data=01 )_
_@[tPerform FctPropStateRead with A only_
_@[tBDUT DOES NOT allow to read the values with A only and returns an error_
_(5) T  A   IN 3C 60 01.01.100 01.01.001 09 01 D5 00 11 00 10 37 00 00 00_
_:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1_
_(6) T  A   OUT 3C 60 01.01.001 01.01.100 08 01 D6 00 11 00 10 37 FC 00_
_:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=00 ), Key: TK1_
_@[tRead of Last Message with A only_
_(7) T  A   IN 3C 60 01.01.100 01.01.001 09 01 D5 00 11 00 10 37 00 01 00_
_:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1_
_(8) T  A   OUT 3C 60 01.01.001 01.01.100 08 01 D6 00 11 00 10 37 FC 01_
_:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=01_ _), Key: TK1_

#### 17. Wrong PID in the expected response

In the test case 3.8.18.2, the reading of PID 3Ah expects a response from PID 39h.

#### 18. Wrong IA used in the proposed security configuration table

In the Table 6 of Chapter 2.5.3, the IA for the P2PK1 is set to 10.1.1. This is in contradiction to the configuration
settings of chapter 2.1.1, 3.6.1.1, where the IA 1.1.1 is assigned to the P2PK1. The IA in the Table 6 should be changed
to 1.1.1. in the security configuration table as well as in the snapshot shown in TSS J.

#### 19. Redefining the Tests in 3.6.

The current tests do not consider that the method read/write is assigned to a certain security setting (A or A+C). If
neither read or write is defined, the respective individual address does not have a role or is unlisted.
The settings for the resource for roles as given in clause 3.6.1.1 shall be redefined as follows (changes marked in red,
other entries deleted).


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

Source Security Role Required Read and/or Write Test Case
Address Key Security Level in access policy

the case where
security mode is
ON (A or A+C)

IA4 (1.1.1) P2PK1 0 A R + W 3.6.1.2
IA5 (1.1.2) P2PK2 1 A+C R + W 3.6.1.5
IA6 (1.1.3) P2PK3 2 A R 3.6.1.3
IA7 (1.1.4) P2PK4 3 A+C R 3.6.1.6
IA8 (1.1.5) P2PK5 4 A W 3.6.1.10
IA9 (1.1.6) P2PK6 5 A+C W 3.6.1.4 (accessing with A)
and 3.6.1.11 (accessing with
A+C)
IA10 (1.1.7) P2PK7 No 3.6.1.7
Role

IA11 (1.1.8) P2PK8 3 and 4 See above See above 3.6.1.12
IA 1.1.10 not in P2P Key Table (Test case 3.6.1.8).

The updated Sequences are given in Annex A and only cover the tests when security mode is switched on.

Compared to the previous version of TSS J, the following test cases were updated:

   - 3.6.1.4: test of role only allowed to write with A+C
   - 3.6.1.10: test of role A required – Write but no Read
Compared to the previous version of TSS J, the following test cases are newly defined:

   - 3.6.1.11: test of role only A + C required – write but no read
   - 3.6.1.12: test of role A+C required, two supported roles

The roles as set in clause 3.6.1.1 also have to be corrected according the updated sequences in Annex A (as role
enumeration starts at R0, as defined in e.g. Chapter “2.3.5.6.2 Format”, “AN158 v07 KNX Data Security AS", “Roles”,
where Bit 0 is defined as R0 (Role 0)).

#### 20. Overview of variables set for creation of telegram sequences as part of TSS J

As an extra information on how the telegram sequences as contained in TSS J were created based on the templates
available in EITT, the used default settings of the various variables shall be listed in an extra section in clause 2.5.3.

#### a) Global Values and Variables for AN158 tests

 b) Variables for AN163 tests

|Source<br>Address|Security<br>Key|Role|Required<br>Security Level in<br>the case where<br>security mode is<br>ON (A or A+C)|Read and/or Write<br>access policy|Test Case|
|---|---|---|---|---|---|
|IA4 (1.1.1)|P2PK1|0|A|R + W|3.6.1.2|
|IA5 (1.1.2)|P2PK2|1|A+C|R + W|3.6.1.5|
|IA6 (1.1.3)|P2PK3|2|A|R|3.6.1.3|
|IA7 (1.1.4)|P2PK4|3|A+C|R|3.6.1.6|
|IA8 (1.1.5)|P2PK5|4|A|W|3.6.1.10|
|IA9 (1.1.6)|P2PK6|5|A+C|W|3.6.1.4 (accessing with A)<br>and 3.6.1.11 (accessing with<br>A+C)|
|IA10 (1.1.7)|P2PK7|No<br>Role|||3.6.1.7|
|IA11 (1.1.8)|P2PK8|3 and 4|See above|See above|3.6.1.12|


-----

## KNX CERTIFICATION AND LICENCE SYSTEM

#### c) Variables for AN177 tests

 d) Variables for AN170 tests

 21. Need to change IA of BDUT for Test cases 3.8.7.1/2 and 3.8.18.2

To avoid collision with the BDUT address used by default for creation of all telegram examples in TSS J, the tests in
3.8.7.1/2 and 3.8.18.2 need to be adapted as given below:

   - first the BDUT address must be changed
   - the address 1.1.1 needs to be set in the security IA table
   - all communication to the BDUT needs to take into account its new IA
   - communication with the P2PKx needs to be sent from the address 1.1.1
#### - after the test the original value of the BDUT address needs to be set back.

@[tPreparation:
@[tSet BDUT IA
(1) IN BC 01.01.100 00/0000 ED 03 DE FE ED BA BE CA FE 22 02 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=2202, Reserved=00000000)
@[tSet Security IA table IA1
@[tChanged all addresses below to 2.2.2
@[tSet Security IA table A1 = 1.1.1
(2) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 01 11 01 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001, Data=11 01 00
00 00 00 00 00 ), Key: TK1
(3) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
….
@[tCleanup
@[tSet BDUT IA back to 1.1.1.
(x) IN BC 01.01.100 00/0000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000).

In this way, the entry “IA1 entry of Security individual address table (PID:54) (2 bytes)” in the EITT Data sheet can be
deleted.

#### 22. Cleanup at the end of the AN158 tests – Setting the IA at the beginning of the AN163 tests


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
To make sure the device is reset to factory default values, the AN 158 tests shall be concluded by a master reset, in this
way also deleting the tool key.

@[tCleanup - Factory Reset with IA
(1) IN B0 01.01.100 01.01.001 60 80 :T-Connect(Addr=01.01.001)
(2) T  C   IN 3C 60 01.01.100 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01,
EraseCode=02, ChannelNumber=00), Key: TK1
(3) OUT B0 01.01.001 01.01.100 60 C2 :T-Ack(Seq=0)
(4) T  C   OUT 3C 60 01.01.001 01.01.100 04 43 A1 00 00 ?? :Restart(Response=01, Type=01,
ErrorCode=00, ProcessTime=00??), Key: TK1
(5) IN B0 01.01.100 01.01.001 60 C2 :T-Ack(Seq=0)
(6) IN B0 01.01.100 15.15.255 60 81 :T-Disconnect

Prior to the start of the AN163 tests, the IA of the BDUT shall again be set:

@[tPreparation
@[tSet BDUT IA back to 1.1.1.
(1) IN BC 01.01.100 00/0000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

#### 23. Unspecified tested behavior in 3.8.12.8

As the behavior of implementations to this kind of telegrams is not clearly given in the system specifications, it should
be additionally allowed to respond to a FunctionCommand with incorrect ServiceID also alternatively with no data.

@[tFunctionCommand with incorrect ServiceID
(1) IN BC 01.01.100 01.01.001 60 80 :T-Connect(Addr=01.01.001)
(2) T  C   IN 3C 60 01.01.100 01.01.001 06 42 C7 06 37 00 05 00 :FctPropCmd(ObjIdx=06,
PropId=37, Data=00 05 00 ), Key: TK1
(3) OUT B0 01.01.001 01.01.100 60 C2 :T-Ack(Seq=0)
(4) T  C   OUT 3C 60 01.01.001 01.01.100 05 42 C9 06 37 F2 05 :FctPropState_Rsp(ObjIdx=06,
PropId=37, RetCode=F2, Data=05 ), Key: TK1
@[tAlternatively (as behavior not yet clearly defined in the system specifications), no data
T  C   OUT 3C 60 01.01.001 01.01.100 04 42 C9 06 37 F2 :FctPropState_Rsp(ObjIdx=06,
PropId=37, RetCode=F2, Data=), Key: TK1
(6) IN B0 01.01.001 01.01.100 60 C2 :T-Ack(Seq=0)
(7) IN BC 01.01.100 01.01.001 60 81 :T-Disconnect

#### 24. Changes to sequence 3.9

At the beginning of the sequence the SeqNoRemote neds to be written to a defined value, after which the sequence
numbers need to be synchronized with the tool.
Subsequently, the sequence numbers in all OUT KNX Secure Frames need to be set to the next higher value and need to
be duplicated in the repetitions.

The priority of the T-Connect, T-Ack and T-Disconnect messages need to be set to system.

The format of the T-Connect, T-Disconnect, T-Ack and DeviceDescriptorRead messages need to be changed to
standard instead of extended.

**Changes to AN163 Template**
#### 1. Change Object type to a variable in 4.2.1

Change in the following way:

@[tA_PropertyExtValue_WriteCon to accessible property PID_LOAD_STATE_CONTROL in one of the supported interface
objects

#### 2. Use IO C351 and PID 54 in 4.3.12


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tProcedure: A_PropertyExtValue_WriteUnCon to PID 54 of manuf specific IO C351h
(1) IN        BC 01.00.065 01.01.001 6C 01 D0 C3 51 00 10 36 01 00 01 00 00 01
:PropertyExtValueWriteUnCon(ObjType=C351, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001, Data=00
00 01 )
(2) T  C   IN        BC 01.00.065 01.01.001 68 01 D5 C3 51 00 10 36 00 00
:FctPropertyExtStateRead(ObjType=C351, ObjInst=0001, PropId=0036, Data=00 00 ), Key: TK1
(3) T  C   OUT       BC 01.01.001 01.00.065 6A 01 D6 C3 51 00 10 36 ?? ?? ?? ??
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0001, PropId=0036, RetCode=??, Data=?? ?? ?? ), Key: TK1
@[tAcceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check PID 54 to make sure it was not
altered.
Rationale: avoding using a PID that is restricted to implementations supporting security only.

#### 3. Change Index in alternative telegram in 4.5.6 by placeholder

As is the case for the preceding telegram

OUT       3C 60 01.01.001 01.00.065 10 01 D3 00 00 00 10 0E 0??? ?? ?? ?? ?? 91 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=0???, DptMain=????,
DptSub=????, Wr/PDT=91, ElemMax=0001, RdAcc=?, WrAcc=?)

The same applies to 4.5.4.

Rationale: the index is implementation dependent.

#### 4. Replace @@ by @ in 4.6.1

**@For SECURE DEVICES these services on a PDT_FUNCTION are already tested in 3.8.8.1 and the**
PDT_FUNCTION telegrams below can be disabled.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
#### 5. Change Load state to placeholder in 4.6.1 and 4.7.1

@[tTo PDT_CONTROL
(1) IN        3C 60 01.00.065 01.01.001 10 01 D4 00 03 00 10 06 00 00 00 00 00 00 00 00 00 00
:FctPropertyExtCommand(ObjType=0003, ObjInst=0001, PropId=0006, Data=00 00 00 00 00 00 00 00 00 00 )
(2) OUT       BC 01.01.001 01.00.065 68 01 D6 00 03 00 10 06 00 ??
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0006, RetCode=00, Data=?? )
Rationale: the state of the loads state machine is now required to be “01h”. This precondition is however not set up by
the test suite itself, so the status of the load state machine is unknown. The status itself is anyhow not of interest for the
test focus, so it can be replaced by a place holder.

#### 6. Change Writing ManufCode in 4.6.5 to Writing of Device_Control

@[tProcedure: A_FunctionPropertyExtCommand to PID_DEVICE_CONTROL in the Device Interface Object (Type
0).
(1) IN        BC 01.00.065 01.01.001 68 01 D4 00 00 00 10 0C 00 01
:FctPropertyExtCommand(ObjType=0000, ObjInst=0001, PropId=000E, Data=04)
(2) OUT       BC 01.01.001 01.00.065 67 01 D6 00 00 00 10 0E FE
:FctPropertyExtStateResponse(ObjType=0000, ObjInst=0001, PropId=000E, RetCode=FE, Data=)
@[tAcceptance: BDUT accepts A_FunctionPropertyExtCommand and sends A_FunctionPropertyExtState_Response
with return code E_DATA_TYPE_CONFLICT without any data.
Rationale: it is already used in the test suite in another context and it is for sure not write protected

#### 7. Wrong format of the expected FctPropertyExtStateResponse

In the test case 4.3.12 three octets payload expected. The service is however defined with 2 Octets payload (first Octet
repeats the ServiceID, second octet holds the value of the KNX secure mode).

#### 8. PID_TABLE (17h) is defined as PDT_GENERIC_02 (2 Octets), whilst in the Test template used as 1 Octet
 data type

In test case 4.1.7 the number of elements read successfully from PID 17h of the manufacturer dependent Property is F5h.
The number of expected octets in the answer seems to be F5h. In TSS J, chapter 2.5.1, this Property is defined with data type
PDT_GENERIC_02 (2 Octets).

The proposed PID_TABLE shall be replaced by a manufacturer specific PID (1 Octet): it shall be able to enter it in the data
sheet settings.

**Changes to AN177 Template**
#### 1. Insert telegram with alternative return code for 5.1.4, 5.1.5, 5.2.3, 5.2.4

As example testcase 5.1.4 : .
@[tTestcase 5.1.4 MemoryExtended_Write – read only memory (if available in BDUT)
@[tRequired BDUT setting: The LSM of the memory is in state loading.
@[tPurpose: Check that BDUT rejects MemoryExtended_Write to read only memory and sends
MemoryExtended_Response with Return Code FBh (alternatively FCh).
@[tProcedure: [to be described]
(1) IN        BC 01.00.065 01.01.001 60 80 :T-Connect(Addr=01.01.001)
(2) IN        BC 01.00.065 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)
(3) OUT       B0 01.01.001 01.00.065 60 C2 :T-Ack(Seq=0)
(4) OUT       BC 01.01.001 01.00.065 62 43 D2 00 :AuthorizeResponse(00)
(5) IN        B0 01.00.065 01.01.001 60 C2 :T-Ack(Seq=0)
@[tAccess to service, shall be denied as read only
(6) IN        BC 01.00.065 01.01.001 6B 45 FB 06 00 B0 00 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=0B000, Data=01 02 03 04 05 06 )
(7) OUT       B0 01.01.001 01.00.065 60 C6 :T-Ack(Seq=1)
(8) OUT       BC 01.01.001 01.00.065 65 45 FC FB 00 B0 00
:MemoryExtendedWriteResponse(RetCode=FB, Address=0B000, Data=)
@[tAlternatively, access denied (FCh)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(x) OUT       BC 01.01.001 01.00.065 65 45 FC FC 00 B0 00
:MemoryExtendedWriteResponse(RetCode=FC, Address=0B000, Data=)
(9) IN        B0 01.00.065 01.01.001 60 C6 :T-Ack(Seq=1)
(10) IN        BC 01.00.065 01.01.001 60 81 :T-Disconnect
@[tAcceptance: BDUT rejects MemoryExtended_Write and sends MemoryExtended_Response with Return Code FBh
(alternatively FCh).
@[t================================================================================
Rationale: in case a device is secured, returning FC may be sufficient to protect its memory area.

#### 2. Change return code from FFh to FDh in clause 5.1.6 and 5.2.5 for count set to 0

@[tByte Count=0 with 1 byte data
(1) IN        BC 01.00.065 01.01.001 66 01 FB 00 00 A0 00 01 :MemoryExtendedWrite(Byte
Count=00, Address=0A000, Data=01 )
(2) OUT       BC 01.01.001 01.00.065 65 01 FC FD 00 A0 00
:MemoryExtendedWriteResponse(RetCode=FD, Address=0A000, Data=)
Alternatively Return code FFh
(x) OUT       BC 01.01.001 01.00.065 65 01 FC FF 00 A0 00
:MemoryExtendedWriteResponse(RetCode=FF, Address=0A000, Data=)

Rationale: The very same exception in the context of Extended Interface Object Addressing results also in the return code
E_ADDRESS_VOID (FDh).

#### 3. Change return code from FFh to FEh in clause 5.1.6 for inconsistent data

@[tByte Count=5 with 6 bytes data
(1) IN        BC 01.00.065 01.01.001 6B 01 FB 05 00 A0 00 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=05, Address=0A000, Data=01 02 03 04 05 06 )
(2) OUT       BC 01.01.001 01.00.065 65 01 FC FE 00 A0 00
:MemoryExtendedWriteResponse(RetCode=FE, Address=0A000, Data=)
Alternatively Return code FFh
(x) OUT       BC 01.01.001 01.00.065 65 01 FC FF 00 A0 00
:MemoryExtendedWriteResponse(RetCode=FF, Address=0A000, Data=)

Rationale: The very same exception in the context of Extended Interface Object Addressing ends up in the return code
E_DATA_TYPE_CONFLICT (FEh)

#### 4. Add T-Disconnect to test 5.2.2

T-Disconnect is missing at the end of the test

#### 5. Insert telegram with alternative return code for 5.2.5 second test step

@[tMemExt_Read 250 bytes (this exceeds max size supported with extended L-Data Frame)
(1) IN        BC 01.00.065 01.01.001 65 01 FD FA 00 A0 00 :MemoryExtendedRead(Byte
Count=FA, Address=0A000)
(2) OUT       BC 01.01.001 01.00.065 65 01 FE FF 00 A0 00
:MemoryExtendedReadResponse(RetCode=FF, Address=0A000, Data=)
@[tAlternatively F4h
(x) OUT       BC 01.01.001 01.00.065 65 01 FE F4 00 A0 00
:MemoryExtendedReadResponse(RetCode=F4, Address=0A000, Data=)
Rationale: The return code F4h is only valid if the device does not support the maximum possible APDU length, but
under this condition two exceptions are tested in one row, and the result will be unpredictable
E_LENGTH_EXCEEDS_MAX_APDU_LENGTH (F4h) or E_ERROR(FFh)


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
**Annex A: Update of the TSS J 3.6.x Test sequence**

@[tTestcase 3.6.1.1 Introduction
@[tFor the testing of roles, it is necessary that the manufacturer supplies a sample application with different
defined roles and their individual rights as defined in a manufacturer specific Interface Object/properties. As
an example, the following could be set in the BDUT and the reaction to the reception of telegrams could be
defined by the supplied sample application:
@[t==============================================================
@[tResource for roles: Certification Object, active only during KNX Certification, Object Type = C351h,
Property ID = 33h, access policy towards the property for the various roles see below
@[tSource address - Security key - Role - Required security level with security mode on - Read and/or Write
possiblity with security mode on
@[tIA4 = 1.1.1 P2PK1  0  A R/W
@[tIA5 = 1.1.2 P2PK2 1  A+C R/W
@[tIA6 = 1.1.3 P2PK3 2  A R
@[tIA7 = 1.1.4 P2PK4  3  A+C R
@[tIA8 = 1.1.5 P2PK5  4  A W
@[tIA9 = 1.1.6 P2PK6 5  A+C W
@[tIA10 = 1.1.7 P2PK7 No Role
@[tIA11 = 1.1.8 P2PK8  3 and 4 See above
@[tIA = 1.1.10 not in P2P Key Table
@[t==============================================================
@[tDefault BDUT address: 2.2.2
@[tReset internal Sequence Numbers
@@[rn
@[tPreparation:
@[tSet BDUT IA
(1) IN BC 01.01.100 00/0000 ED 03 DE FE ED BA BE CA FE 22 02 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=2202, Reserved=00000000)
@[tSynchronize Sequence Number for Tool Key
(2) T req   IN 3C 60 01.01.100 02.02.002 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: TK1
(3) T res   OUT 3C 60 02.02.002 01.01.100 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: TK1
@[tDeactivate Security Mode
(4) T  C   IN 3C 60 01.01.100 02.02.002 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1
(5) T  C   OUT 3C 60 02.02.002 01.01.100 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
TK1
@[tSet Security = unloaded
(6) T  C   IN 3C 60 01.01.100 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 04 00 00 00 00
00 00 00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01,
Index=0001, Data=04 00 00 00 00 00 00 00 00 00 ), Key: TK1
(7) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
@[tSet Security = loading
(8) T  C   IN 3C 60 01.01.100 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 01 00 00 00 00
00 00 00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01,
Index=0001, Data=01 00 00 00 00 00 00 00 00 00 ), Key: TK1
(9) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
@[tSet Security IA table


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(10) T  C   IN 3C 60 01.01.100 02.02.002 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1
(11) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
RetCode=00), Key: TK1
(12) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 01 11 01 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0001, Data=11 01 00 00 00 00 00 00 ), Key: TK1
(13) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
(14) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 02 11 02 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0002, Data=11 02 00 00 00 00 00 00 ), Key: TK1
(15) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 02 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
RetCode=00), Key: TK1
(16) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 03 11 03 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0003, Data=11 03 00 00 00 00 00 00 ), Key: TK1
(17) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 03 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0003,
RetCode=00), Key: TK1
(18) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 04 11 04 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0004, Data=11 04 00 00 00 00 00 00 ), Key: TK1
(19) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 04 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0004,
RetCode=00), Key: TK1
(20) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 05 11 05 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0005, Data=11 05 00 00 00 00 00 00 ), Key: TK1
(21) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 05 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0005,
RetCode=00), Key: TK1
(22) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 06 11 06 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0006, Data=11 06 00 00 00 00 00 00 ), Key: TK1
(23) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 06 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0006,
RetCode=00), Key: TK1
(24) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 07 11 07 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0007, Data=11 07 00 00 00 00 00 00 ), Key: TK1
(25) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 07 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0007,
RetCode=00), Key: TK1
(26) T  C   IN 3C 60 01.01.100 02.02.002 11 01 CE 00 11 00 10 36 01 00 08 11 08 00 00 00
00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01,
Index=0008, Data=11 08 00 00 00 00 00 00 ), Key: TK1
(27) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 36 01 00 08 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0008,
RetCode=00), Key: TK1
@[tSet P2P Key Table: P2PKn = 0000000000000000000000000000000nh
(28) T  C   IN 3C 60 01.01.100 02.02.002 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(29) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
RetCode=00), Key: TK1
@[tIA4: Roles = Role0 (A, R+W)
(30) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 01 00 01 22 22
22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22
22 22 22 22 00 01 ), Key: TK1
(31) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
@[tIA5: Roles = Role1 (A+C, R+W)
(32) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 02 00 02 33 33
33 33 33 33 33 33 33 33 33 33 33 33 33 33 00 02 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0002, Data=00 02 33 33 33 33 33 33 33 33 33 33 33 33
33 33 33 33 00 02 ), Key: TK1
(33) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 02 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0002,
RetCode=00), Key: TK1
@[tIA6: Roles = Role2 (A, R)
(34) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 03 00 03 44 44
44 44 44 44 44 44 44 44 44 44 44 44 44 44 00 04 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0003, Data=00 03 44 44 44 44 44 44 44 44 44 44 44 44
44 44 44 44 00 04 ), Key: TK1
(35) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 03 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0003,
RetCode=00), Key: TK1
@[tIA7: Roles = Role3 (A+C, R)
(36) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 04 00 04 55 55
55 55 55 55 55 55 55 55 55 55 55 55 55 55 00 08 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0004, Data=00 04 55 55 55 55 55 55 55 55 55 55 55 55
55 55 55 55 00 08 ), Key: TK1
(37) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 04 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0004,
RetCode=00), Key: TK1
@[tIA8: Roles = Role4 (A, W)
(38) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 05 00 05 66 66
66 66 66 66 66 66 66 66 66 66 66 66 66 66 00 10 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0005, Data=00 05 66 66 66 66 66 66 66 66 66 66 66 66
66 66 66 66 00 10 ), Key: TK1
(39) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 05 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0005,
RetCode=00), Key: TK1
@[tIA9: Roles = Role5 (A+C, W)
(40) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 06 00 06 77 77
77 77 77 77 77 77 77 77 77 77 77 77 77 77 00 20 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0006, Data=00 06 77 77 77 77 77 77 77 77 77 77 77 77
77 77 77 77 00 20 ), Key: TK1
(41) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 06 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0006,
RetCode=00), Key: TK1
@[tIA10: Roles = No Role
(42) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 07 00 07 88 88
88 88 88 88 88 88 88 88 88 88 88 88 88 88 00 00 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0007, Data=00 07 88 88 88 88 88 88 88 88 88 88 88 88
88 88 88 88 00 00 ), Key: TK1
(43) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 07 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0007,
RetCode=00), Key: TK1


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tIA11: Roles = Role3+Role4
(44) T  C   IN 3C 60 01.01.100 02.02.002 1D 01 CE 00 11 00 10 34 01 00 08 00 08 99 99
99 99 99 99 99 99 99 99 99 99 99 99 99 99 00 18 :PropertyExtValueWriteCon(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0008, Data=00 08 99 99 99 99 99 99 99 99 99 99 99 99
99 99 99 99 00 18 ), Key: TK1
(45) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 34 01 00 08 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0008,
RetCode=00), Key: TK1
@[tSet Security = loaded
(46) T  C   IN 3C 60 01.01.100 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00
00 00 00 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01,
Index=0001, Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK1
(47) T  C   OUT 3C 60 02.02.002 01.01.100 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1
@[tSynchronize Sequence Number for P2PK1
(48) req   IN 3C 60 01.01.001 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK1
(49) res   OUT 3C 60 02.02.002 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK1
@[tSynchronize Sequence Number for P2PK2
(50) req   IN 3C 60 01.01.002 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK2
(51) res   OUT 3C 60 02.02.002 01.01.002 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK2
@[tSynchronize Sequence Number for P2PK3
(52) req   IN 3C 60 01.01.003 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK3
(53) res   OUT 3C 60 02.02.002 01.01.003 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK3
@[tSynchronize Sequence Number for P2PK4
(54) req   IN 3C 60 01.01.004 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK4
(55) res   OUT 3C 60 02.02.002 01.01.004 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK4
@[tSynchronize Sequence Number for P2PK5
(56) req   IN 3C 60 01.01.005 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK5
(57) res   OUT 3C 60 02.02.002 01.01.005 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK5
@[tSynchronize Sequence Number for P2PK6
(58) req   IN 3C 60 01.01.006 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK6
(59) res   OUT 3C 60 02.02.002 01.01.006 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK6
@[tSynchronize Sequence Number for P2PK7
@[tchanged address


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(60) req   IN 3C 60 01.01.007 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK7
(61) res   OUT 3C 60 02.02.002 01.01.008 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK7
@[tSynchronize Sequence Number for P2PK8
@[tchanged address
(62) req   IN 3C 60 01.01.008 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00
00 00 00 00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00
00 00 00 00 01), Key: P2PK8
(63) res   OUT 3C 60 02.02.002 01.01.009 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0,
Seq.local=0), Key: P2PK8
@[tActivate Security Mode
(64) T  C   IN 3C 60 01.01.100 02.02.002 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1
(65) T  C   OUT 3C 60 02.02.002 01.01.100 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
TK1
@[t===============================================================================
=
@[tTestcase 3.6.1.2 correct S-A_Data PDU - A required - role correct to read and write
@[tPurpose: Check BDUT’s acceptance of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [00h], appropriate sequence number, plain data and MAC
correctly encrypted with P2PK1) with source address IA4 = 1.1.1
@[tWrite OK
(66) A   IN 3C 60 01.01.001 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1
(67) A   OUT 3C 60 02.02.002 01.01.001 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK1
@[tRead OK
(68) A   IN 3C 60 01.01.001 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK1
(69) A   OUT 3C 60 02.02.002 01.01.001 0A 01 CD C3 51 00 10 33 01 00 01 AA
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1
@[tAcceptance: the BDUT accepts the frames and allows reading/writing the corresponding properties.
@[t===============================================================================
=
@[tTestcase 3.6.1.3 correct S-A_Data PDU - A required only - role incorrect to write
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [00h], appropriate sequence number, MAC correctly encrypted with
P2PK3) with source address IA6 = 1.1.3
@[tRead ok
(70) A   IN 3C 60 01.01.003 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK3
(71) A   OUT 3C 60 02.02.002 01.01.003 0A 01 CD C3 51 00 10 33 01 00 01 AA
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK3
@[tWrite NOK


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(72) A   IN 3C 60 01.01.003 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK3
(73) A   OUT 3C 60 02.02.002 01.01.003 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK3
@[tAcceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements
= 0, no data) as the role is not permitted to write the value.
@[t===============================================================================
=
@[tTestcase 3.6.1.4 correct S-A_Data - role only allowed to write with A+C
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU but sent via the individual address that is
only allowed to write with A+C
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [00h], appropriate sequence number, plain data and MAC
correctly encrypted with P2PK6) with source address IA10 = 1.1.6
@[tWrite NOK
@[tChanged addresses from 1.1.7 to 1.1.6
(74) A   IN 3C 60 01.01.006 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK6
(75) A   OUT 3C 60 02.02.002 01.01.007 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK6
@[tRead NOK
(76) A   IN 3C 60 01.01.006 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK6
(77) A   OUT 3C 60 02.02.002 01.01.007 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK6
@[tAcceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements
= 0, no data) as the role is only permitted to write with A+C
@[t===============================================================================
=
@[tTestcase 3.6.1.5 correct S-A_Data PDU - A and C required - role correct to read and write
@[tPurpose: Check BDUT’s acceptance of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with P2PK2) with source address IA5 = 1.1.2
@[tWrite OK
(78) C   IN 3C 60 01.01.002 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK2
(79) C   OUT 3C 60 02.02.002 01.01.002 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK2
@[tRead OK
(80) C   IN 3C 60 01.01.002 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK2
(81) C   OUT 3C 60 02.02.002 01.01.002 0A 01 CD C3 51 00 10 33 01 00 01 55
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK2
@[tAcceptance: the BDUT accepts the frames and allows reading/writing the corresponding properties.
@[t===============================================================================
=
@[tTestcase 3.6.1.6 correct S-A_Data PDU - A and C required - role incorrect to write


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tPurpose: Check BDUT’s acceptance of the correct S-A_Data PDU but rejection to write corresponding
value
@[tProcedure: Send PropertyValueWrite message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted with P2PK4) with source address IA7 = 1.1.4
@[tRead OK
(82) C   IN 3C 60 01.01.004 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK4
(83) C   OUT 3C 60 02.02.002 01.01.004 0A 01 CD C3 51 00 10 33 01 00 01 55
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK4
@[tWrite NOK
(84) C   IN 3C 60 01.01.004 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK4
(85) C   OUT 3C 60 02.02.002 01.01.004 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK4
@[tAcceptance: the BDUT accepts the frames and allows reading/writing the corresponding properties.
@[t===============================================================================
=
@[tTestcase 3.6.1.7 correct S-A_Data - A and C required – role not allowed to read nor write
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU but sent via the individual address that
has role not allowing to read or write
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with P2PK67) with source address IA10 = 1.1.7
@[tRead NOK
(86) C   IN 3C 60 01.01.007 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK7
(87) C   OUT 3C 60 02.02.002 01.01.007 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK7
@[tWrite NOK
(88) C   IN 3C 60 01.01.007 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK7
(89) C   OUT 3C 60 02.02.002 01.01.007 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK7
@[tAcceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements
= 0, no data) as the role is not permitted to read nor write the value.
@[t===============================================================================
=
@[tTestcase 3.6.1.8 correct S-A_Data PDU - A and C required – IA not listed in P2P Key Table
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with P2PK1) but with source address not in P2P Keytable (here 1.1.10)
(90) C   IN 3C 60 01.01.010 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1
(91) C   IN 3C 60 01.01.010 02.02.002 09 01 CC 00 00 03 60 01 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0036, PropId=0001, ElemCount=01, Index=0001), Key:
P2PK1
@[tAcceptance: the BDUT ignores the frames.


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[t===============================================================================
=
@[tTestcase 3.6.1.9 correct S-A_Data PDU - A and C required – Role using incorrect key
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted, but with the wrong key, e.g. P2PK3) with source address IA5 = 1.1.2
@[tWrite NOK
(92) C   IN 3C 60 01.01.002 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK3
@[tRead NOK
(93) C   IN 3C 60 01.01.002 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK3
@[tAcceptance: the BDUT ignores the frames.
@[t===============================================================================
=
@[tTestcase 3.6.1.10 correct S-A_Data PDU - A required – Write but no read
@[tPurpose: Check that BDUT accepts to write with A but refuses to read with A
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with correct key P2PK5) with source address IA8 = 1.1.5 (A - W ok, R NOK)
@[tWrite OK
C   IN 3C 60 01.01.007 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK7
C   OUT 3C 60 02.02.002 01.01.006 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK7
@[tRead NOK
C   IN 3C 60 01.01.007 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK7
C   OUT 3C 60 02.02.002 01.01.008 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK7
(98) A   IN 3C 60 01.01.005 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 BB
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=BB ), Key: P2PK5
(99) A   OUT 3C 60 02.02.002 01.01.005 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK5
@[tRead NOK
(100)           A   IN 3C 60 01.01.005 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK6
(101)           A   OUT 3C 60 02.02.002 01.01.005 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK6
@[tAcceptance: the BDUT shall send a negative response when trying to read.
@[t===============================================================================
=
@[tTestcase 3.6.1.11 correct S-A_Data PDU - A+C required – Write but no read
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with correct key P2PK6) with source address IA11 = 1.1.5 (A, W ok, R NOK)
@[tWrite OK


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
@[tChanged addresses to 1.1.6 below
(102)           C   IN 3C 60 01.01.006 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 BB
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=BB ), Key: P2PK6
(103)           C   OUT 3C 60 02.02.002 01.01.006 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK6
@[tRead NOK
(104)           C   IN 3C 60 01.01.006 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK6
(105)           C   OUT 3C 60 02.02.002 01.01.006 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK6
@[tAcceptance: the BDUT shall send a negative response when trying to read.
@[t===============================================================================
=
@[tTestcase 3.6.1.12 correct S-A_Data PDU - A and C required – two supported roles
@[tPurpose: Check BDUT’s rejection of the correct S-A_Data PDU
@[tProcedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct
APCI Sec [3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC
correctly encrypted with correct key P2PK6) with source address IA11 = 1.1.8
@[tRead OK with A+C because of role 3
C   IN 3C 60 01.01.008 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK8
C   OUT 3C 60 02.02.002 01.01.008 0A 01 CD C3 51 00 10 33 01 00 01 BB
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=BB ), Key: P2PK8
@[tAcceptance: the BDUT sends the correct value
@[tWrite OK A because of role 4
(108)           A   IN 3C 60 01.01.008 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 CC
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=CC ), Key: P2PK8
(109)           A   OUT 3C 60 02.02.002 01.01.008 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK8
@[tAcceptance: the BDUT accepts the writing
@[tRead OK with A+C because of role 3
(110)           C   IN 3C 60 01.01.008 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK8
(111)           C   OUT 3C 60 02.02.002 01.01.008 0A 01 CD C3 51 00 10 33 01 00 01 CC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=CC ), Key: P2PK8
@[tAcceptance: the BDUT sends the correct value
@[tRead NOK with A because of role 4
(112)           A   IN 3C 60 01.01.008 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK8
(113)           A   OUT 3C 60 02.02.002 01.01.008 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK8
@[tAcceptance: the BDUT rejects the reading with A
@[t===============================================================================
=
@[t3.6.1.x Clean up
@[tRestore original BDUT IA


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
(114)         T  C   IN 3C E0 01.01.100 00/0000 0D 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000), Key: TK1
@[tDeactivate Security Mode
(115)         T  C   IN 3C 60 01.01.100 02.02.002 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1
(116)         T  C   OUT 3C 60 02.02.002 01.01.100 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
TK1
@[t===============================================================================
=


-----

