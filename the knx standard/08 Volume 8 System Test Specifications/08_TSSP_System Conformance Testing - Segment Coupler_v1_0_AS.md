## KNX System Conformance Testing 8

### Test Suite Supplement P

 KNX Segment Coupler Tests

Summary

This document contains the KNX Segment Coupler Tests, in
accordance with AN195. This version only covers the use case TPRF Segment Coupler. It will be extended at a later date with tests for
other segment coupler use cases.


-----

###### Document Updates

**Version** **Date** **Modifications**
0.0.1 2020.03.30 Elaboration of first working draft
0.0.2 2021.03.02 Updating document on basis of latest system specifications
0.0.3 2021.03 Minor update in preparation for Certification Group Meeting
0.0.4 2021.04 Update (adding repetitions, including master reset tests, adding
verification of manufacturer ID and hardware type) and preparation
for Release for Voting
0.0.5 2021.05 Preparation for Release for Voting
0.0.6 2021.06 Preparation for Final Voting
0.0.7 2021.09 Preparation for Approved Standard
1.0 2022.04 Approved Standard

Filename: 08_TSSP_System Conformance Testing - Segment Coupler_v1_0_AS
Version: 1.0
Status: Approved Standard
Savedate: 2022.04.19
Number of pages: 60

|Version|Date|Modifications|
|---|---|---|
|0.0.1|2020.03.30|Elaboration of firstworking draft|
|0.0.2|2021.03.02|Updating document on basis of latest system specifications|
|0.0.3|2021.03|Minor update inpreparation forCertificationGroup Meeting|
|0.0.4|2021.04|Update (adding repetitions, including master reset tests, adding<br>verification of manufacturer ID and hardware type) and preparation<br>for Release for Voting|
|0.0.5|2021.05|Preparation for Release for Voting|
|0.0.6|2021.06|Preparation for FinalVoting|
|0.0.7|2021.09|Preparation for Approved Standard|
|1.0|2022.04|Approved Standard|


-----

##### Contents

###### 1 List of Abbreviations ......................................................................................................... 6

 2 Test Environment DUT settings ....................................................................................... 7

 3 Test Cases for Application Note 195/01 ........................................................................... 8 3.1 General .............................................................................................................. 8 3.2 Preparation ........................................................................................................ 8 3.3 Check default settings of PID_COUPLER_TYPE ........................................... 8 3.4 Requesting Program Version, Manufacturer ID and Hardware Type .............. 9 3.5 Tests related to PID_DA_FILTER_TABLE................................................... 10 3.5.1 Property Description Read ............................................................... 10 3.5.2 Verification of the actual length of the Property PID_DA_FILTER_TABLE ............................................................. 10 3.5.3 Checking default configuration of Elements 1 to 32 ....................... 10 3.5.4 Setting device addresses and performing confirmed restart ............ 11 3.5.5 Effects of PID_DA_FILTER_TABLE on routing ........................... 12 3.5.5.1 Sending individual addressed frames to the IA of the BDUT .......... 12 3.5.5.2 individual addressed frames to a value set in the PID_DA_FILTER_TABLE ............................................................. 12 3.5.5.3 individual addressed frames to a value not set in the PID_DA_FILTER_TABLE ............................................................. 12 3.5.5.4 Sending individual addressed frames to a subnetwork different from the subnetwork of the DUT .............................................................. 13 3.5.5.5 Sending to set device address but with Route Last=1 ...................... 13 3.5.5.6 Sending to set device address but with hop count = 0...................... 13 3.5.6 Further Master Reset Tests ............................................................... 13 3.5.6.1 Erase Code 2 ..................................................................................... 14 3.5.6.2 Erase Code 7 ..................................................................................... 14 3.5.6.3 Local Reset to default state .............................................................. 15 3.5.7 Test of PID_DA_FILTER_TABLE (3FF/00C) Access Policies ..... 18 3.5.7.1 PropertyValueRead plain, A or A+C ............................................... 18 3.5.7.2 PropertyValueWrite plain, A or A+C............................................... 19 3.6 Tests related to PID_TEMP_DA_FILTER_CONTROL ................................ 21 3.6.1 Property Description Read ............................................................... 21 3.6.2 Negative Test Function Property – No Read possible (optional) .... 21 3.6.3 Negative Test Function Property Command with no Service ID and no ServiceInfo (optional) ................................................................. 21 3.6.4 Negative Test Function Property Command with reserved Octet 10 set to other values than 00 (optional) ............................................... 22 3.6.5 Negative Test Function Property Command with Write Service ID set to undefined coding .................................................................... 22 3.6.6 Negative Test Function Property Command with valid Service ID 00h and octets in ServiceInfo exceeding number of expected octets (optional) .......................................................................................... 22 3.6.7 Negative Test Function Property Command with valid Service ID 01h and octets in Servcie Info exceeding number of expected octets (optional) .......................................................................................... 23


-----

###### 3.6.8 Positive Test Function Property Command with Write Service ID set to 0 and not set Device Address ....................................................... 23 3.6.9 Repercussions of PID_TEMP_DA_FILTER_TABLE on Routing towards TP ........................................................................................ 23 3.6.10 Individual addressed frame outside of the subnetwork with the same device address set in the temporary address filter control ................ 24 3.6.11 Trigger Timeout ................................................................................ 24 3.6.12 Positive Test - Setting the same temporary Device Address after timeout .............................................................................................. 25 3.6.13 Negative Test - Setting temporary Device Address to invalid value 26 3.6.14 Invalidating the temporary Device Address by setting value identical to permanent address ......................................................... 26 3.6.15 Deleting all temporary addresses ...................................................... 27 3.6.16 Setting temporary address and deleting permanent addresses .......... 29 3.6.17 Performing Master Reset .................................................................. 30 3.6.18 Test of PID_TEMP_DA_FILTER_CONTROL (3FF/00C) Access Policies .............................................................................................. 35 3.7 Tests related to PID_COUPLER_TYPE ........................................................ 37 3.7.1 Property Description Read ................................................................ 37 3.7.2 Checking Default configuration ....................................................... 37 3.7.3 Setting configuration to TP1 Repeater and performing NM_Coupler_Scan_Directed ........................................................... 37 3.7.4 P2P Routing in setting TP1 Repeater ............................................... 38 3.7.5 Setting configuration to reserved value and performing NM_Coupler_Scan_Directed ........................................................... 40 3.7.6 P2P Routing with reserved setting .................................................... 40 3.7.7 Performing Master Reset different erase codes ................................ 40 3.7.8 Test of PID_COUPLER_TYPE (3FF/0CC) Access Policies ........... 45 3.7.8.1 PropertyValueRead plain, A or A+C ................................................ 45 3.7.8.2 PropertyValueWrite plain, A or A+C ............................................... 46 3.8 NetworkParameter_Read on PID_OBJECT_TYPE ....................................... 48 3.8.1 Positive Test from TP side ................................................................ 48 3.8.2 Negative Test – Malformed Network Parameter Read..................... 48 3.8.3 Positive Test from RF side ............................................................... 49 3.8.4 Positive Test –NetworkParameter_Read with PID_COUPLER_TYPE = 1 (Repeater) ........................................... 49 3.8.5 Positive Test – Test Info = 0 ............................................................. 50 3.9 Testing of PID_LOAD_STATE_CONTROL ................................................ 50 3.9.1 Setting to the not loaded State of Secondary Router IO – effect on permanent device addresses .............................................................. 50 3.9.2 Setting to the not loaded State of Secondary Router IO – effect on temporary device addresses (optional) ............................................. 51 3.10 Testing as Media Coupler ............................................................................... 53 3.11 Tests related to PID_SEGMENT_STATUS .................................................. 56
 3.11.1 Checking Property Description in Segment Coupler instance 1 ...... 56 3.11.2 Checking Property Description in Segment Coupler instance 2 ...... 56 3.11.3 Checking Actual Status..................................................................... 56 3.11.4 Test of PID_SEGMENT_STATUS (3FF/1FF) Access Policies ...... 57 3.11.4.1 PropertyValueRead plain, A or A+C ................................................ 57 3.11.4.2 PropertyValueWrite plain, A or A+C ............................................... 59


-----

-----

#### 1 List of Abbreviations

|Abbreviation|Description|
|---|---|
|DA|Device Address|


-----

#### 2 Test Environment DUT settings

**Figure 1: Test Setup for Segment Coupler Testing**

The Test setup shall consist of:

   - One TP USB interface (in the below sequences ML_TP);
   - One RF USB interface – if this interface does not filter on physical address on Link layer, then
one does not require to switch it to busmonitor mode during the tests (as is the case in the
below included test sequences (in the below sequences SL_RF));
   - One TP-RF BDUT Segment Coupler in default settings (security mode off)
   - The RF devices are not physically available, but simply entered into the PID_DA_FILTER
TABLE (the permanent addresses) respectively the PID_TEMP_DA_FILTER_CONTROL
(the temporary address) of the segment coupler during the tests (hence the rectangular
brackets in the above figure).


-----

#### 3 Test Cases for Application Note 195/01

##### 3.1 General
The segment coupler is a functional extension to existing Couplers. Hence, all tests stated in Volume
9/3 also need to be carried out.

##### 3.2 Preparation
Assumed serial number in the below tests: 00 0A 1A 15 29 0E [make entry in EITT template
datasheet]

@[tDeactivate the TP Busmonitor first

@if-"ML_TP_Busmon"

@[tPreparation: attribute domain address 00 0A 00 00 04 00 and individual address 1234 (already
causing it to become a segment coupler) – precondition: device interface object loaded

@[tWrite DoA via SerNo

(1) IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00 04 00
:DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

[make Sno entry in EITT template datasheet]

(2) IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

@[tWrite IA via SerNo

(3) OUT [SL_RF   ] 3C E0 01.02.255 00/0000 0D 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=34000000)

##### 3.3 Check default settings of PID_COUPLER_TYPE
Purpose: check that the master reset did not have any effect on the default value of the
PID_COUPLER_TYPE

Procedure:

@[tMaster Reset with IA to make sure the value is set back to KNX default

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 63 43 81 02 00 :Restart(Response=00, Type=01,
EraseCode=02, ChannelNumber=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 43 A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

[make ProcessTime entry in EITT template datasheet]

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Rewrite IA via SerNo

(7) IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

@[tWrite IA via SerNo

(8) OUT [SL_RF   ] 3C E0 01.02.255 00/0000 0D 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=34000000)


-----

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(10)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(11)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(12)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 02
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=02 )

(13)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(14)   IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The PID_COUPLER_TYPE is still set to Segment Coupler (2).

##### 3.4 Requesting Program Version, Manufacturer ID and Hardware Type
Purpose: Reading out the PID_PROGRAM_VERSION and PID_HARDWARE_TYPE

Procedure:

@[tRequesting the PID_PROGRAM_VERSION

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 0D 10 01
:PropertyValueRead(Obj=00, Prop=0D, Count=1, Start=001)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 00 0D 10 01 ?? ?? ?? ?? ??
:PropertyValueResponse(Obj=00, Prop=0D, Count=1, Start=001, Data=?? ?? ?? ?? ?? )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tRequesting the PID_MANUFACTURER_ID

(7) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(8) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 0C 10 01
:PropertyValueRead(Obj=00, Prop=0C, Count=1, Start=001)

(9) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(10)  OUT [ML_TP   ] B0 01.02.052 01.02.255 67 43 D6 00 0C 10 01 ?? ??
:PropertyValueResponse(Obj=00, Prop=0C, Count=1, Start=001, Data=?? ?? )

(11)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(12)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tRequesting the PID_HARDWARE_TYPE

(13)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(14)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 4E 10 01
:PropertyValueRead(Obj=00, Prop=4E, Count=1, Start=001)

(15)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(16) OUT [ML_TP   ] B0 01.02.052 01.02.255 6B 43 D6 00 4E 10 01 ?? ?? ?? ?? ?? ??
:PropertyValueResponse(Obj=00, Prop=4E, Count=1, Start=001, Data=?? ?? ?? ?? ?? ?? )

(17) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(32) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The device supplies its program version, manufacturer ID and hardware type.


-----

##### 3.5 Tests related to PID_DA_FILTER_TABLE

###### 3.5.1 Property Description Read
Required BDUT setting: default.

Purpose: Checking the correctness of the supplied Property Description

Procedure: Send Property Description Read to the relevant property and check the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 64 43 D8 02 44 00 :PropertyDescRead(Obj=02,
Prop=44, Index=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 68 43 D9 02 44 ?? B3 00 20 ??
:PropertyDescResponse(Obj=02, Prop=44, Index=??, Type=B3, MaxCount=0020, RdAcc=?,
WrAcc=?)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

Acceptance: The BDUT supplies the correct response.

###### 3.5.2 Verification of the actual length of the Property PID_DA_FILTER_TABLE
Purpose: Checking the correctness of the number of Elements

Procedure: Send Property Read to element 0 of the relevant property and check the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 02 44 10 00
:PropertyValueRead(Obj=02, Prop=44, Count=1, Start=000)
(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)
(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 67 47 D6 02 44 10 00 00 20
:PropertyValueResponse(Obj=02, Prop=44, Count=1, Start=000, Data=00 20 )
(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)
Acceptance: The BDUT supplies the correct response.

###### 3.5.3 Checking default configuration of Elements 1 to 32
Purpose: Checking the defaut content of the elements 1 to 32

Procedure: Send Property Read to element 1 to 32 and check default content in the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 4B D5 02 44 80 01
:PropertyValueRead(Obj=02, Prop=44, Count=8, Start=001)
(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)
(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 6D 4B D6 02 44 80 01 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=8, Start=001, Data=00 00 00 00 00 00 00 00 )
(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)
(5) IN [ML_TP   ] B0 01.02.255 01.02.052 65 4F D5 02 44 80 09
:PropertyValueRead(Obj=02, Prop=44, Count=8, Start=009)
(6) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CE :T-Ack(Seq=3)
(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 6D 4F D6 02 44 80 09 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=8, Start=009, Data=00 00 00 00 00 00 00 00 )
(8) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CE :T-Ack(Seq=3)
(9) IN [ML_TP   ] B0 01.02.255 01.02.052 65 53 D5 02 44 80 11
:PropertyValueRead(Obj=02, Prop=44, Count=8, Start=011)
(10) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 D2 :T-Ack(Seq=4)


-----

(11) OUT [ML_TP   ] B0 01.02.052 01.02.255 6D 53 D6 02 44 80 11 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=8, Start=011, Data=00 00 00 00 00 00 00 00 )
(12) IN [ML_TP   ] B0 01.02.255 01.02.052 60 D2 :T-Ack(Seq=4)
(13) IN [ML_TP   ] B0 01.02.255 01.02.052 65 57 D5 02 44 80 19
:PropertyValueRead(Obj=02, Prop=44, Count=8, Start=019)
(14) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 D6 :T-Ack(Seq=5)
(15) OUT [ML_TP   ] B0 01.02.052 01.02.255 6D 57 D6 02 44 80 19 00 00 00 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=8, Start=019, Data=00 00 00 00 00 00 00 00 )
(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 D6 :T-Ack(Seq=5)
Acceptance: The BDUT supplies the correct response.

###### 3.5.4 Setting device addresses and performing confirmed restart
Purpose: Setting device addresses and checking whether the values survive a confirmed restart

Procedure: Send Property Write to set the permanent addresses as given in Figure 1 in the second
instance of the router interface object, perform confirmed restart and check if permanent addresses are
still in memory.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 5B D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DA :T-Ack(Seq=6)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 5B D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DA :T-Ack(Seq=6)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 01 00 :Restart(Response=00, Type=01,
EraseCode=01, ChannelNumber=00)

(6) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(8) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 44 50 01
:PropertyValueRead(Obj=02, Prop=44, Count=5, Start=001)

(12) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(14) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tVerification of unchanged value of the secondary router IO load state

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(17) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 05 10 01
:PropertyValueRead(Obj=02, Prop=05, Count=1, Start=001)

(18) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)


-----

(19) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 05 10 01 00
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(20) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(21) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT accepts the permanenent device addresses and keeps these values after
confirmed restart.

###### 3.5.5 Effects of PID_DA_FILTER_TABLE on routing
Purpose: Checking the effects of the setting of the device addreses in the filter table on routing

###### 3.5.5.1 Sending individual addressed frames to the IA of the BDUT
Procedure: Send P2P messages addressed to own address

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 67 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )
@[t Activation of TP Busmonitor interface to be able to verify any routed telegrams
@if+"bm;ML_TP"
(3) IN [SL_RF   ] 30 60 01.02.254 01.02.052 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(4) OUT [SL_RF   ] 3C 60 01.02.052 01.02.254 07 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )
@[tDeactivate TP Busmonitor again
@if+"ll;ML_TP"
Acceptance: The BDUT does not route the messages, neither on RF nor on TP. ACK on TP.

###### 3.5.5.2 individual addressed frames to a value set in the PID_DA_FILTER_TABLE
Procedure: Send individual addressed frames to a value set in the PID_DA_FILTER_TABLE

(1) IN [ML_TP   ] B0 01.02.255 01.02.001 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(2) OUT [SL_RF   ] 3C 60 01.02.255 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[tNo Routing from RF to TP
@[tActivate TP Busmonitor again
@if+"bm;ML_TP"
(3) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[tDeactivate TP Busmonitor again
@if+"ll;ML_TP"
Acceptance: The BDUT routes the telegrams from TP to RF (with ACK) and blocks the telegrams
from RF to TP.

###### 3.5.5.3 individual addressed frames to a value not set in the PID_DA_FILTER_TABLE
Procedure: Send individual addressed frames to a value not set in the PID_DA_FILTER_TABLE

(1) IN [ML_TP   ] 91 01.02.255 01.02.002 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)
@[tRouting onto TP
@[tActivate TP Busmonitor again
@if+"bm;ML_TP"
(2) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

(3) OUT [ML_TP   ] B0 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(4) OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(5) OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(6) OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[tDeactivate TP Busmonitor again
@if+"ll;ML_TP"
Acceptance: The BDUT sends no ACK and does not route onto RF respectively routes the message
onto TP.

###### 3.5.5.4 Sending individual addressed frames to a subnetwork different from the subnetwork of the DUT
Procedure: Send individual addressed frames to a subnetwork different from the subnetwork of the
DUT

(1) IN [ML_TP   ] 91 01.02.255 01.03.001 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)
@if+"bm;ML_TP"
@[tRouting onto TP
(2) IN [SL_RF   ] 30 60 01.02.254 01.03.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(3) OUT [ML_TP   ] B0 01.02.254 01.03.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(4) OUT [ML_TP   ] 90 01.02.254 01.03.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(5) OUT [ML_TP   ] 90 01.02.254 01.03.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(6) OUT [ML_TP   ] 90 01.02.254 01.03.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
Acceptance: The BDUT sends no ACK and does not route onto RF respectively routes the message
onto TP.

###### 3.5.5.5 Sending to set device address but with Route Last=1
Procedure: Send P2P messages addressed to set device address but with Route Last = 1

@[tActivate TP Busmonitor again
(1) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[tDeactivate TP Busmonitor again
@if+"ll;ML_TP"
Acceptance: The BDUT does not route the message onto TP.

###### 3.5.5.6 Sending to set device address but with hop count = 0
Procedure: Send P2P messages addressed to set device address but with hop count = 0

(1) IN [ML_TP   ] 90 01.02.255 01.02.001 05 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)
Acceptance: The BDUT sends acknowledgement but does not route onto RF.

###### 3.5.6 Further Master Reset Tests
Purpose: Checking the effects of the different Master Reset commands on the
PID_DA_FILTER_TABLE


-----

###### 3.5.6.1 Erase Code 2
Procedure: Send Erase Code 2 and check whether the content of PID_DA_FILTER_TABLE has been
reset to KNX default (all Bits set to 0).

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 02 00 :Restart(Response=00, Type=01,
EraseCode=02, ChannelNumber=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(7) IN [ML_TP   ] B0 01.02.255 15.15.000 60 80 :T-Connect(Addr=15.15.000)

(8) IN [ML_TP   ] B0 01.02.255 15.15.000 65 43 D5 02 44 50 01
:PropertyValueRead(Obj=02, Prop=44, Count=5, Start=001)

(9) OUT [ML_TP   ] B0 15.15.000 01.02.255 60 C2 :T-Ack(Seq=0)

(10)  OUT [ML_TP   ] B0 15.15.000 01.02.255 6A 43 D6 02 44 50 01 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=00 00 00 00 00 )

(11)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 C2 :T-Ack(Seq=0)

(12)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 81 :T-Disconnect

@[Checking the Element[0] - unchanged

(13)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 80 :T-Connect(Addr=15.15.000)

(14)  IN [ML_TP   ] B0 01.02.255 15.15.000 65 47 D5 02 44 10 00
:PropertyValueRead(Obj=02, Prop=44, Count=1, Start=000)

(15)  OUT [ML_TP   ] B0 15.15.000 01.02.255 60 C6 :T-Ack(Seq=1)

(16)  OUT [ML_TP   ] B0 15.15.000 01.02.255 67 47 D6 02 44 10 00 00 20
:PropertyValueResponse(Obj=02, Prop=44, Count=1, Start=000, Data=00 20 )

(17)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 C6 :T-Ack(Seq=1)

(18)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 81 :T-Disconnect

Restore addresses
@[tWrite DoA via SerNo
(19)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00 04 00
:DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)
@[tWrite IA via SerNo
(20)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)
Acceptance: The BDUT shows that the content of the PID_DA_FILTER_TABLE has been reset to
KNX default (all Bits set to 0). The IndAddrSnoWrite is not forwarded on RF following the unloaded
device interface object. The number of elements is unchanged.

###### 3.5.6.2 Erase Code 7
Procedure: Send Erase Code 7 and check whether the content of PID_DA_FILTER_TABLE has been
reset to KNX default (all Bits set to 0).

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)


-----

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 5B D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DA :T-Ack(Seq=6)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 5B D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DA :T-Ack(Seq=6)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 07 00 :Restart(Response=00, Type=01,
EraseCode=07, ChannelNumber=00)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(12) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 44 50 01
:PropertyValueRead(Obj=02, Prop=44, Count=5, Start=001)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(14) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=00 00 00 00 00 )

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[Checking the Element[0] - unchanged

(17)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 80 :T-Connect(Addr=15.15.000)

(18)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 02 44 10 00
:PropertyValueRead(Obj=02, Prop=44, Count=1, Start=000)

(19)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(20)  OUT [ML_TP   ] B0 01.02.052 01.02.255 67 47 D6 02 44 10 00 00 20
:PropertyValueResponse(Obj=02, Prop=44, Count=1, Start=000, Data=00 20 )

(21)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(22)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 81 :T-Disconnect

Acceptance: The BDUT shows that the content of the PID_DA_FILTER_TABLE has been reset to
KNX default (all Bits set to 0). The number of elements is unchanged.

###### 3.5.6.3 Local Reset to default state
Procedure: Perform a Local Reset and check whether the content of PID_DA_FILTER_TABLE has
been reset to KNX default (all Bits set to 0).

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 5B D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DA :T-Ack(Seq=6)


-----

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 5B D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DA :T-Ack(Seq=6)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@@Perform a local Master Reset

(7) IN [ML_TP   ] B0 01.02.255 15.15.000 60 80 :T-Connect(Addr=15.15.000)

(8) IN [ML_TP   ] B0 01.02.255 15.15.000 65 43 D5 02 44 50 01
:PropertyValueRead(Obj=02, Prop=44, Count=5, Start=001)

(9) OUT [ML_TP   ] B0 15.15.000 01.02.255 60 C2 :T-Ack(Seq=0)

(10)  OUT [ML_TP   ] B0 15.15.000 01.02.255 6A 43 D6 02 44 50 01 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=00 00 00 00 00 )

(11)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 C2 :T-Ack(Seq=0)

(12)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 81 :T-Disconnect

@[Checking the Element[0] - unchanged

(13)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 80 :T-Connect(Addr=15.15.000)

(14)  IN [ML_TP   ] B0 01.02.255 15.15.000 65 47 D5 02 44 10 00
:PropertyValueRead(Obj=02, Prop=44, Count=1, Start=000)

(15)  OUT [ML_TP   ] B0 15.15.000 01.02.255 60 C6 :T-Ack(Seq=1)

(16)  OUT [ML_TP   ] B0 15.15.000 01.02.255 67 47 D6 02 44 10 00 00 20
:PropertyValueResponse(Obj=02, Prop=44, Count=1, Start=000, Data=00 20 )

(17)  IN [ML_TP   ] B0 01.02.255 15.15.000 C6 :T-Ack(Seq=1)

(18)  IN [ML_TP   ] B0 01.02.255 15.15.000 60 81 :T-Disconnect

@[trestore addresses

@[tWrite DoA via SerNo

(19)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00 04 00
:DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

@[tWrite IA via SerNo

(20)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

@[tChecking and Restoring of the Device Load State of the device object

(21)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(22)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 05 10 01
:PropertyValueRead(Obj=00, Prop=05, Count=1, Start=001)

(23)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(24)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 00 05 10 01 00
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=00 )

(25)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(26)  IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 00 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(27) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)


-----

(28) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 00 05 10 01 02
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=02 )

(29) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(30) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 00 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(31) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(32) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 00 05 10 01 01
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=01 )

(33) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(34) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tSetting Bit 1&34 of PID_DA_FILTER_TABLE and restoring router object load state

(35) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(36) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 43 D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(37) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(38) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(39) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(40) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(41) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 02 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(42) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(43) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 02 05 10 01 02
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=02 )

(44) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(45) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 02 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(46) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(47) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 02 05 10 01 01
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(48) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(49) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT shows that the content of the PID_DA_FILTER_TABLE has been reset to
KNX default (all Bits set to 0). The number of elements remains unchanged.


-----

###### 3.5.7 Test of PID_DA_FILTER_TABLE (3FF/00C) Access Policies[1]

 3.5.7.1 PropertyValueRead plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether the BDUT only sends a PropValueResponse with the data in case of A+C and
Security Mode on resp. in all cases when Security Mode is off

Procedure: Send message to the BDUT to read the PID_DA_FILTER_TABL

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CD 00 06 00 20 44 00 00 01 FC
:PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=00,
Index=0001, Data=FC )

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 20 44 00 00 01 FC
:PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=00,
Index=0001, Data=FC )

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0E 01 CD 00 06 00 20 44 05 00 01 02 00 00
00 04 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

@[tDeactivate Security Mode

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(11) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(12) OUT [ML_TP   ] BC 01.01.001 01.00.065 6E 01 CD 00 06 00 20 44 05 00 01 02 00 00 00
04 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

@[tA only

1 Optional if not supporting security


-----

(13) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(14) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0E 01 CD 00 06 00 20 44 05 00 01 02 00 00
00 04 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

@[tA+C

(15) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(16) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0E 01 CD 00 06 00 20 44 05 00 01 02 00 00
00 04 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

Acceptance: the BDUT only sends a PropValueResponse with the data in case of A+C and Security
Mode on resp. in all cases when Security Mode is off

###### 3.5.7.2 PropertyValueWrite plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the PID_DA_FILTER_TABLE in Security Mode on
(except with toolkey and A+C) resp. writes the property in all cases when Security Mode is off

Procedure: Send messages to the BDUT to try and write the PID_DA_FILTER_TABLE

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] BC 01.00.065 01.01.001 6E 01 CE 00 06 00 20 44 05 00 01 01 00 00 00 05
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=01 00 00 00 05 )

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 20 44 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=00,
Index=0001, RetCode=FC)

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 01 00 00 00
05 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=01 00 00 00 05 )

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=00,
Index=0001, RetCode=FC)

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 01 00 00 00
05 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=01 00 00 00 05 )

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)


-----

@[tReading back written values

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0E 01 CD 00 06 00 20 44 05 00 01 01 00 00
00 05 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=01 00 00 00 05 )

@[tSetting back previous values

(11) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 02 00 00 00
04 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

(12) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)

@[tDeactivate Security Mode

(13) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

(14) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(15) IN [ML_TP   ] BC 01.00.065 01.01.001 6E 01 CE 00 06 00 20 44 05 00 01 01 00 00 00 05
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=01 00 00 00 05 )

(16) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)

@[tA only

(17) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 03 00 00 00
06 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=03 00 00 00 06 )

(18) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)

@[tA+C

(19) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 04 00 00 00
07 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=04 00 00 00 07 )

(20) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)

@[tReading back written values

(21) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 20 44 05 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05, Index=0001)

(22) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0E 01 CD 00 06 00 20 44 05 00 01 04 00 00
00 07 :PropertyExtValueResponse(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=04 00 00 00 07 )


-----

@[tSetting back previous values

(23) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0E 01 CE 00 06 00 20 44 05 00 01 02 00 00 00
04 :PropertyExtValueWriteCon(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, Data=02 00 00 00 04 )

(24) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 20 44 05 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0002, PropId=0044, ElemCount=05,
Index=0001, RetCode=00)

Acceptance: the BDUT rejects to write the PID_DA_FILTER_TABLE in Security Mode on (except
with toolkey and A+C) resp. writes the property in all cases when Security Mode is off

##### 3.6 Tests related to PID_TEMP_DA_FILTER_CONTROL

###### 3.6.1 Property Description Read
Purpose: Checking the correctness of the supplied Property Description

Procedure: Send Property Description Read to the relevant property and check the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 64 43 D8 02 45 00 :PropertyDescRead(Obj=02,
Prop=45, Index=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 68 43 D9 02 45 ?? BE 00 01 ??
:PropertyDescResponse(Obj=02, Prop=45, Index=??, Type=BE, MaxCount=0001, RdAcc=?,
WrAcc=?)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

Acceptance: The BDUT supplies the correct response.

###### 3.6.2 Negative Test Function Property – No Read possible (optional)
Purpose: Checking reaction to Function Property Read

Procedure: Send Function Property Read on Property

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 64 46 C8 02 45 00 :FctPropState_Read(ObjIdx=02,
PropId=45, 00 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 46 C9 02 45 FF
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=FF, Data=)

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

Acceptance: The BDUT returns E_ERROR.

###### 3.6.3 Negative Test Function Property Command with no Service ID and no ServiceInfo (optional)
Purpose: Checking reaction to Function Property Command ending with reserved Octet 10

Procedure: Send Function Property Command on Property but ending with reserved Octet 10

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 64 4A C7 02 45 00 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)


-----

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 4A C9 02 45 FF
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=FF, Data=)

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

Acceptance: The BDUT returns E_ERROR.

###### 3.6.4 Negative Test Function Property Command with reserved Octet 10 set to other values than 00 (optional)
Purpose: Checking reaction to Function Property Command with Reserved Octet 10 set to other values
than 00

Procedure: Send Function Property Command on Property but with reserved Octet 10 having other
values than 00

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 4E C7 02 45 01 01 :FctPropCmd(ObjIdx=02,
PropId=45, Data=01 01 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CE :T-Ack(Seq=3)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 4E C9 02 45 FF 01
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=FF, Data=01 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CE :T-Ack(Seq=3)

Acceptance: The BDUT returns E_ERROR and repeats service ID.

###### 3.6.5 Negative Test Function Property Command with Write Service ID set to undefined coding
Purpose: Checking reaction to Function Property Command with Write Service ID set to undefined
coding

Procedure: Send Function Property Command on Property but with Write Service ID set to 2

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 52 C7 02 45 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 02 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 D2 :T-Ack(Seq=4)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 52 C9 02 45 F2 02
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=F2, Data=02 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 D2 :T-Ack(Seq=4)

Acceptance: The BDUT returns E_COMMAND_INVALID and repeats service ID.

###### 3.6.6 Negative Test Function Property Command with valid Service ID 00h and octets in ServiceInfo exceeding number of expected octets (optional) 
Purpose: Checking reaction to Function Property Command with Write Service ID set to 0, but Device
address of two bytes

Procedure: Send Function Property Command on Property with Write Service ID set to 0 and Device
Address with two bytes

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 67 56 C7 02 45 00 00 23 45
:FctPropCmd(ObjIdx=02, PropId=45, Data=00 00 23 45 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 D6 :T-Ack(Seq=5)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 56 C9 02 45 F8 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=F8, Data=00 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 D6 :T-Ack(Seq=5)


-----

Acceptance: The BDUT returns E_DATA_VOID and repeats service ID.

###### 3.6.7 Negative Test Function Property Command with valid Service ID 01h and octets in Servcie Info exceeding number of expected octets (optional)
Purpose: Checking reaction to Function Property Command with Write Service ID set to 1 and data
padded

Procedure: Send Function Property Command on Property with Write Service ID set to 1 and data
padded behind it

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 66 5A C7 02 45 00 01 23
:FctPropCmd(ObjIdx=02, PropId=45, Data=00 01 23 )

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DA :T-Ack(Seq=6)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 5A C9 02 45 F8 01
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=F8, Data=01 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DA :T-Ack(Seq=6)

Acceptance: The BDUT returns E_DATA_VOID and repeats service ID.

###### 3.6.8 Positive Test Function Property Command with Write Service ID set to 0 and not set Device Address
Purpose: Checking reaction to Function Property Command with Write Service ID set to 0 and setting
a device address that is not already permanent

Procedure: Send Function Property Command on Property with Write Service ID set to 0 and Device
Address to 2

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT returns E_SUCCESS and repeats service ID.

###### 3.6.9 Repercussions of PID_TEMP_DA_FILTER_TABLE on Routing towards TP
Purpose: Checking reaction of new temporary device address on routing

Procedure: Send P2P addressed frames to new temporary address on secondary side

@if+"bm;ML_TP"

(1) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[tOpposite direction TP to RF: telegram is routed.

(2) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(3) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

Acceptance: The BDUT does not route to TP, as the address is now a temporary address of the
secondary side. BDUT routes from TP to RF.

###### 3.6.10 Individual addressed frame outside of the subnetwork with the same device address set in the temporary address filter control
Purpose: Checking routing from ML and SL but addressed to a different subnetwork

Procedure: Send P2P addressed frames to temporary address on primary side but to a different
subnetwork

(1) IN [ML_TP   ] 91 01.02.255 01.03.002 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)

@[tOpposite direction from RF to TP: the telegram is routed.

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(2) IN [SL_RF   ] 30 60 01.02.254 01.03.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(3) OUT [ML_TP   ] B0 01.02.254 01.03.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(4) OUT [ML_TP   ] 90 01.02.254 01.03.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(5) OUT [ML_TP   ] 90 01.02.254 01.03.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(6) OUT [ML_TP   ] 90 01.02.254 01.03.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT does not route to RF, as the address is in another subnetwork. The BDUT
does route to TP, as the address is in not in the subnetwork.

###### 3.6.11 Trigger Timeout
Purpose: Checking reaction when sending telegrams to device address just prior and just after the
time-out of 60 s

Procedure: Retrigger first, then send P2P addressed frames to temporary address on primary side just
prior and just after the time out of 60 s

@@[w"00:00:10"

@[tRetrigger first

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@@[w"00:00:55"


-----

(7) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(8) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(9) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tDeactivate TP Busmonitor again

@if+"ll;ML_TP"

@[tSend telegram to set temporary Device Address 61s after last trigger. Expected: no Ack, no
Routing onto RF

@@[w"00:00:10"

(10)  IN [ML_TP   ] 91 01.02.255 01.02.002 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(11)  IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(12)  OUT [ML_TP   ] B0 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tDeactivate TP Busmonitor again

@if+"ll;ML_TP"

Acceptance: The BDUT routes to RF prior to the timeout and does not route after the timeout. The
BDUT does not route to TP prior to the timeout and does route to TP after the timeout, as the address
is then no longer temporarily set.

###### 3.6.12 Positive Test - Setting the same temporary Device Address after timeout
Purpose: Checking reaction when setting the same temporary Device Address

Procedure: Send P2P addressed frames to temporary address on primary side

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Expected: again Routing onto RF when sending telegrams to set temporary Device Addres

(7) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

(8) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tExpected: no Routing onto TP, as DA is now set as address belonging temporary to the secondary
line

@if+"bm;ML_TP"

(9) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT again routes to RF. RF blocks to TP as now temporary address in sub line.

###### 3.6.13 Negative Test - Setting temporary Device Address to invalid value
Purpose: Checking reaction when setting an invalid Device Address

Procedure: Send Function Property Command to set the temporary Device Address to value 0 – Check
whether previous temporary address remains active.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 00 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 00 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 F8 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=F8, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(7) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(8) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tstill no Routing onto TP, as DA is still set as address belonging temporary to the secondary line

@if+"bm;ML_TP"

(9) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT responds E_DATA_VOID with Service ID and still routes to RF and does not
route onto TP.

###### 3.6.14 Invalidating the temporary Device Address by setting value identical to permanent address
Purpose: Checking reaction when setting a temporary Device Address that is already part of the list of
permanent addresses

Procedure: Send Function Property Command to set the temporary Device Address to value 1, which
is a permanent device address. Check that the routing to the temporary address is no longer possible.
Check that sending to the permanent address still results in routing.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)


-----

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 01 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 01 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Expected: sending telegrams to previous temporary Device Address is now no longer possible.
Communication to RF blocked, no Ack

(7) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tOpposite direction from RF to TP: the telegram is routed.

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(8) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(9) OUT [ML_TP   ] B0 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(10)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(11)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(12)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t Expected: sending telegrams to new temporary/permanent Device Address possible - Expected:
ACK and routing onto RF

(13)  IN [ML_TP   ] B0 01.02.255 01.02.001 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(14)  OUT [SL_RF   ] 3C 60 01.02.255 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t no Routing onto TP, as DA is assigned to the secondary line

@if+"bm;ML_TP"

(15)  IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT responds E_SUCCESS with ServiceID and still routes telegrams addressed to
the permanent device address to RF. Routing to the temporary address is no longer possible because
the setting of a temporary address to a permanent address invalidates the existing temporary address.

###### 3.6.15 Deleting all temporary addresses
Purpose: Checking reaction when deleting all temporary addresses.


-----

Procedure: Again set device address 2 as temporary address – check that routing to RF works
accordingly – delete all temporary addresses – check that routing to RF no longer works for temporary
address but does for the permanent address.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Routing onto RF again works

(7) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(8) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t no Routing onto TP, as DA is again set as address belonging temporary to the secondary line

@if+"bm;ML_TP"

(9) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t Deleting all temporary addresses

(10)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 65 42 C7 02 45 00 01 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 01 )

(12) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 01
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=01 )

(14) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Sending Telegrams to previous temporary address. Expected: no ACK and no routing onto RF

(16) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tOpposite direction from RF to TP: the telegram is routed.

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(17)  IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(18)  OUT [ML_TP   ] B0 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(19)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

(20)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(21)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t Sending Telegrams to permanent address still works. Expected: ACK and routing onto RF

(22) IN [ML_TP   ] B0 01.02.255 01.02.001 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(23) OUT [SL_RF   ] 3C 60 01.02.255 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t no Routing onto TP, as DA is set as address belonging to the secondary line

@if+"bm;ML_TP"

(24)  IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT no longer routes to RF for temporary addresses (as they have been deleted),
but still for permanent addresses.

###### 3.6.16 Setting temporary address and deleting permanent addresses
Purpose: Checking whether the BDUT continues to route to the temporary address even if no
permanent addresses remain

Procedure: Make device address again the temporary address but delete all permanent addresses.
Check whether the BDUT continues to route to the temporary address even if no permanent addresses
remain

@[tNow again seting the DA=02 as temporary
(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)
(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )
(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)
(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )
(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)
(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect
@[tSetting Bit 1&34 of PID_DA_FILTER_TABLE to 0, no more permanent addresses
(7) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)
(8) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 43 D7 02 44 50 01 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=00 00 00 00 00 )
(9) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)
(10) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 00 00 00 00 00
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=00 00 00 00 00 )
(11) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)
(12) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect
@[t Routing onto RF still works for temporary address
(13) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[t no Routing onto TP, as DA is set as temporary address belonging to the secondary line
@if+"bm;ML_TP"
(14)  IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

@if+"ll;ML_TP"
(15) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@[t Sending telegram to not set permanent Destination Address - No ACK and no Routing onto RF
(16) IN [ML_TP   ] 91 01.02.255 01.02.001 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)
@[tOpposite direction from RF to TP: the telegram is routed, as address no longer permanent.
@[tActivate TP Busmonitor again
@if+"bm;ML_TP"
(17)  IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(18)  OUT [ML_TP   ] B0 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(19)  OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(20)  OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
(21)  OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)
@if+"ll;ML_TP"
Acceptance: The BDUT continues to route to the temporary address even if no permanent addresses
remain, the BDUT does not route to the previous permanent addresses.

@[tSetting Bit 1&34 of PID_DA_FILTER_TABLE back to 1
(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)
(17) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 43 D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )
(18) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)
(19) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )
(20) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)
(21) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

###### 3.6.17 Performing Master Reset
Purpose: Checking reaction when performing the different mandatory master reset erase codes

Procedure: Again set device address 2 as temporary address –perform the different mandatory master
reset erase codes (1, 2, 7 and local reset) and check that routing to RF no longer works for temporary
address.

@[tNow again setting the DA=02 as temporary

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Routing onto RF again works

(7) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

(8) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Performing Master Reset Erase Code 1

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 01 00 :Restart(Response=00, Type=01,
EraseCode=01, ChannelNumber=00)

(11) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(12) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(13) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(14) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Sending Telegrams to previous temporary address. Expected: no ACK and no routing onto RF

(15) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tNow again setting the DA=02 as temporary

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(17) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(18) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(19) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(20) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(21) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Routing onto RF again works

(22) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(23) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Performing Master Reset Erase Code 2

(24) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(25) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 02 00 :Restart(Response=00, Type=01,
EraseCode=02, ChannelNumber=00)

(26) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(27) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(28) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(29) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect


-----

@[tRestore Addresses

@[tWrite DoA via SerNo

(30)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00 04 00
:DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

@[tWrite IA via SerNo

(31)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

@[tChecking and Restoring of the Device Load State of the device object

(32)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(33)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 05 10 01
:PropertyValueRead(Obj=00, Prop=05, Count=1, Start=001)

(34)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(35)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 00 05 10 01 00
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=00 )

(36)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(37)  IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 00 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(38) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(39) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 00 05 10 01 02
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=02 )

(40) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(41) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 00 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(42) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(43) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 00 05 10 01 01
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=01 )

(44) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(45) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Sending Telegrams to previous temporary address. Expected: no ACK and no routing onto RF

(46) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tNow again setting the DA=02 as temporary

(47) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(48) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(49) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(50) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(51) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)


-----

(52) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Routing onto RF again works

(53) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(54) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Performing Master Reset Erase Code 7

(55) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(56) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 07 00 :Restart(Response=00, Type=01,
EraseCode=07, ChannelNumber=00)

(57) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(58) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(59) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(60) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tChecking and Restoring of the Device Load State of the device object

(61)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(62)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 05 10 01
:PropertyValueRead(Obj=00, Prop=05, Count=1, Start=001)

(63)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(64)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 00 05 10 01 00
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=00 )

(65)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(66)  IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 00 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(67)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(68)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 00 05 10 01 02
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=02 )

(69)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(70) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 00 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(71) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(72) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 00 05 10 01 01
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=01 )

(73) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(74) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Sending Telegrams to previous temporary address. Expected: no ACK and no routing onto RF

(75) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)


-----

@[tNow again setting the DA=02 as temporary

(76) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(77) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(78) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(79) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(80) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(81) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Routing onto RF again works

(82) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(83) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Performing Local Reset to default state

@[tRestore Addresses

@[tWrite DoA via SerNo

(84)         IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00
04 00 :DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

@[tWrite IA via SerNo

(85)         IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00
00 00 :IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

@[t Sending Telegrams to previous temporary address. Expected: no ACK and no routing onto RF

(87) IN [ML_TP   ] B1 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

Acceptance: The BDUT in all cases no longer routes to RF for temporary addresses.
@[tSetting Bit 1&34 of PID_DA_FILTER_TABLE and restoring router object load state

(88)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(89)  IN [ML_TP   ] B0 01.02.255 01.02.052 6A 43 D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(90)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(91)  OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(92)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(93)  IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 02 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(94)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(95)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 02 05 10 01 02
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=02 )

(96) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)


-----

(97) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 02 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(98) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(99) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 02 05 10 01 01
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(100)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(101)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

###### 3.6.18 Test of PID_TEMP_DA_FILTER_CONTROL (3FF/00C) Access Policies[2]
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to execute the PID_TEMP_DA_FILTER_CONTROL in
Security Mode on (except with toolkey and A+C) resp. executes the command in all cases when
Security Mode is off

Procedure: Send FctPropertyExtCommand plain, A or A+C messages to the BDUT to try and execute
the PID_TEMP_DA_FILTER_CONTROL

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 68 01 D6 00 06 00 20 45 FC 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=FC, Data=00 )

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 06 00 20 45 FC 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=FC, Data=00 )

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 06 00 20 45 00 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=00, Data=00 )

@[t Routing onto RF again works

(9) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(10) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@@[w"00:01:00"

2 Optional if not supporting security


-----

@[tMaking sure that the temporary address is no longer active

@[tDeactivate Security Mode

(11) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

(12) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(13) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(14) OUT [ML_TP   ] BC 01.01.001 01.00.065 68 01 D6 00 06 00 20 45 00 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=00, Data=00 )

@[t Routing onto RF again works

(15) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(16) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@@[w"00:01:00"

@[tMaking sure that the temporary address is no longer active

@[tA only

(17) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(18) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 06 00 20 45 00 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=00, Data=00 )

@[t Routing onto RF again works

(19) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(20) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@@[w"00:01:00"

@[tMaking sure that the temporary address is no longer active

@[tA+C

(21) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 06 00 20 45 00 00 02
:FctPropertyExtCommand(ObjType=0006, ObjInst=0002, PropId=0045, Data=00 00 02 )

(22) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 06 00 20 45 00 00
:FctPropertyExtStateResponse(ObjType=0006, ObjInst=0002, PropId=0045, RetCode=00, Data=00 )

@[t Routing onto RF again works

(23) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(24) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@@[w"00:01:00"

@[tMaking sure that the temporary address is no longer active


-----

Acceptance: the BDUT rejects to execute the PID_TEMP_DA_FILTER_CONTROL in Security
Mode on (except with toolkey and A+C) resp. executes the command in all cases when Security
Mode is off

##### 3.7 Tests related to PID_COUPLER_TYPE

###### 3.7.1 Property Description Read
Purpose: Checking the correctness of the supplied Property Description

Procedure: Send Property Description Read to the relevant property and check the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 64 43 D8 01 3B 00 :PropertyDescRead(Obj=01,
Prop=3B, Index=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 68 43 D9 01 3B ?? B5 00 01 ??
:PropertyDescResponse(Obj=01, Prop=3B, Index=??, Type=B5, MaxCount=0001, RdAcc=?,
WrAcc=?)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

Acceptance: The BDUT supplies the correct response.

###### 3.7.2 Checking Default configuration
Purpose: Checking the default configuration of the property

Procedure: Send Property Read to the property and check whether the default value is set to Segment
Coupler.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 02
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=02 )

(4) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT sends a Property Response indicating the default configuration is segment
coupler.

###### 3.7.3 Setting configuration to TP1 Repeater and performing NM_Coupler_Scan_Directed
Purpose: Setting the configuration to TP1 repeater and perform a NM_Coupler_Scan_Directed from
the TP side (in case the device support TP1 repeater functionality next to segment coupler).

Procedure: Send Property Write to PID_COUPLER_TYPE and configure the BDUT to the setting of
TP1 Repeater – Perform a NM_Coupler_Scan_Directed with test_info = 01, 3 seconds random time
and HC value of the NL and check the content of the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 43 D7 01 3B 10 01 01
:PropertyValueWrite(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)


-----

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t(5) NetworkParameter_Read with test_info = 01, 3 seconds random time and HC value of the NL Expected response with test info (1), random wait time (3 sec), hop count of the NL (1), object index
of primary router object (1), object index of secondary router object (2), value of coupler type (1),
request received from primary TP side (1)

(11) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(12) OUT [ML_TP   ] B0 01.02.052 00/0000 EB 03 DB 00 06 01 01 03 01 01 02 01 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 01 01 )

Acceptance: The BDUT sets the PID_COUPLER_TYPE to TP1 Repeater. The BDUT sends in the
NetworkParameter_Response test info (1), random wait time (3 sec), hop count of the NL (1), object
index of primary router object (1), object index of secondary router object (2), value of coupler type
(1), request received from primary TP side (1).

###### 3.7.4 P2P Routing in setting TP1 Repeater
Purpose: Testing the routing of individual addressed telegrams, in case the device support TP1
repeater functionality next to segment coupler. Test that the set temporary/permanent device address
filter table has no effect on the normal behavior of the TP1 Repeater.

Procedure:

  - Send telegrams addressed to own device address

  - send telegrams addressed to permanent device address

  - send telegrams addressed to device address not set as permanent address
@[t Send telegrams addressed to own device address - no routing

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(2) OUT [ML_TP   ] B0 01.02.052 01.02.255 67 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(3) IN [SL_RF   ] 30 60 01.02.254 01.02.052 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(4) OUT [SL_RF   ] 3C 60 01.02.052 01.02.254 07 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )

@if+"ll;ML_TP"

@[t send telegrams addressed to permanent Device Address - Expected: ACK and routing to RF


-----

(5) IN [ML_TP   ] B0 01.02.255 01.02.001 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(6) OUT [SL_RF   ] 3C 60 01.02.255 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[tCheck opposite direction RF to TP: shall be routed, as BDUT is now set to repeater

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(7) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(8) OUT [ML_TP   ] B0 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(9) OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(10)  OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(11)  OUT [ML_TP   ] 90 01.02.254 01.02.001 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t send telegrams addressed to non set permanent Device Address - Expected: routing onto TP

@[tActivate TP Busmonitor again

@if+"bm;ML_TP"

(11)  IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(12)  OUT [ML_TP   ] B0 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(13)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(14)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(15)  OUT [ML_TP   ] 90 01.02.254 01.02.002 55 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[tCheck opposite direction TP to RF: shall be routed, as BDUT is now set to repeater

(16)  IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(17)  OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

Acceptance: The BDUT in all cases routes the telegrams, as it is now set to repeater and should hence
disregard the set temporary and permanent device address filter table.


-----

###### 3.7.5 Setting configuration to reserved value and performing NM_Coupler_Scan_Directed
Purpose: Setting the configuration to reserved value and perform a NM_Coupler_Scan_Directed from
the TP side

Procedure: Send Property Write to PID_COUPLER_TYPE and configure the BDUT to a reserved
value – Perform a NM_Coupler_Scan_Directed with test_info = 01, 3 seconds random time and HC
value of the NL and check the content of the response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 43 D7 01 3B 10 01 06
:PropertyValueWrite(Obj=01, Prop=3B, Count=1, Start=001, Data=06 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 06
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=06 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 06
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=06 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t NetworkParameter_Read with test_info = 01, 3 seconds random time and HC value of the NL Expected response with test info (1), random wait time (3 sec), hop count of the NL (1), object index
of primary router object (1), object index of secondary router object (2), value of coupler type (6),
request received from primary TP side (1)

(11) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(12) OUT [ML_TP   ] B0 01.02.052 00/0000 EB 03 DB 00 06 01 01 03 01 01 02 06 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 06 01 )

Alternatively, the BDUT may reply with a coupler type value that reflects its current behavior.

Acceptance: The BDUT sets the PID_COUPLER_TYPE to the reserved value. The BDUT sends in
the NetworkParameter_Response test info (1), random wait time (3 sec), hop count of the NL (1),
object index of primary router object (1), object index of secondary router object (2), value of coupler
type (6), request received from primary TP side (1).

###### 3.7.6 P2P Routing with reserved setting
Test cannot be performed as behavior is implementation specific.

###### 3.7.7 Performing Master Reset different erase codes
Purpose: Testing the reaction of the BDUT to the different master reset erase codes

Procedure: Set the PID_COUPLER_TYPE to another value than the default value and perform the
different master reset mandatory commands (1, 2, 7 and local reset). Check whether the value changes
or is kept according to the specification.


-----

@[t Setting the configuration to "TP1 Repeater"

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 43 D7 01 3B 10 01 01
:PropertyValueWrite(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Performing Master Reset Erase Code 1

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(12) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 01 00 :Restart(Response=00, Type=01,
EraseCode=01, ChannelNumber=00)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(14) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(17) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(18) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(19) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(20) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(21) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(22) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Performing Master Reset Erase Code 2

(23) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)


-----

(24) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 02 00 :Restart(Response=00, Type=01,
EraseCode=02, ChannelNumber=00)

(25) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(26) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(27) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(28) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tRestore addresses

@[tWrite DoA via SerNo

(29)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00 04 00
:DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

@[tWrite IA via SerNo

(30)  IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

(31) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(32) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(33) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(34) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 02
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=02 )

(35) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(36) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Setting the configuration to "TP1 Repeater"

(37) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(38) IN [ML_TP   ] B0 01.02.255 01.02.052 66 43 D7 01 3B 10 01 01
:PropertyValueWrite(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(39) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(40) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(41) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(42) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(43) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(44) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(45) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(46) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect


-----

@[t Performing Master Reset Erase Code 7

(47) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(48) IN [ML_TP   ] B0 01.02.255 01.02.052 63 5F 81 07 00 :Restart(Response=00, Type=01,
EraseCode=07, ChannelNumber=00)

(49) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 DE :T-Ack(Seq=7)

(50) OUT [ML_TP   ] B0 01.02.052 01.02.255 64 5F A1 00 ???? :Restart(Response=01,
Type=01, ErrorCode=00, ProcessTime=????)

(51) IN [ML_TP   ] B0 01.02.255 01.02.052 60 DE :T-Ack(Seq=7)

(52) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(53) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(54) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(55) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(56) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(57) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(58) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tPerforming local Reset to default state

@[tRestore Addresses

@[tWrite DoA via SerNo

(59)         IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 EE 00 0A 1A 15 29 0E 00 0A 00 00
04 00 :DomAddrSnoWrite(Sno=000A1A15290E, DomAddr=00 0A 00 00 04 00)

@[tWrite IA via SerNo

(60)         IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 34 00 00
00 00 :IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=00000000)

(61)         OUT [SL_RF   ] 3C E0 01.02.255 00/0000 0D 03 DE 00 0A 1A 15 29 0E 12 34 00
00 00 00 :IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1234, Reserved=34000000)

(62) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(63) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(64) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(65) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 02
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=02 )

(66) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(67) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT

  - keeps the set value in case of erase code 1, 7


-----

  - resets the value to the KNX default (0 for mask 0912h and 2 for 091Ah/2920h) in case of
erase code 2 and local reset to default value

@[tChecking and Restoring of the Device Load State of the device object

(68)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(69)  IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 00 05 10 01
:PropertyValueRead(Obj=00, Prop=05, Count=1, Start=001)

(70)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(71)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 00 05 10 01 00
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=00 )

(72)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(73)  IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 00 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(74)  OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(75)  OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 00 05 10 01 02
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=02 )

(76)  IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(77) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 00 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=00, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(78) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(79) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 00 05 10 01 01
:PropertyValueResponse(Obj=00, Prop=05, Count=1, Start=001, Data=01 )

(80) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(81) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tSetting Bit 1&34 of PID_DA_FILTER_TABLE and restoring router object load state

(82) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(83) IN [ML_TP   ] B0 01.02.255 01.02.052 6A 43 D7 02 44 50 01 02 00 00 00 04
:PropertyValueWrite(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(84) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(85) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(86) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(87) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(88) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 02 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(89) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(90) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 02 05 10 01 02
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=02 )

(91) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)


-----

(92) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 4B D7 02 05 10 01 02 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00
)

(93) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 CA :T-Ack(Seq=2)

(94) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 4B D6 02 05 10 01 01
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(95) IN [ML_TP   ] B0 01.02.255 01.02.052 60 CA :T-Ack(Seq=2)

(96) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

###### 3.7.8 Test of PID_COUPLER_TYPE (3FF/0CC) Access Policies[3]

 3.7.8.1 PropertyValueRead plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether the BDUT only sends a PropValueResponse with the data in case of A+C and
Security Mode on resp. in all cases when Security Mode is off

Procedure: Send message to the BDUT to read the PID_COUPLER_TYPE

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CD 00 06 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=00,
Index=0001, Data=FC )

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=00,
Index=0001, Data=FC )

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 01 00 01 02
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

@[tDeactivate Security Mode

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

3 Optional if not supporting security


-----

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(11) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(12) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CD 00 06 00 10 3B 01 00 01 02
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

@[tA only

(13) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(14) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 01 00 01 02
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

@[tA+C

(15) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(16) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 01 00 01 02
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

Acceptance: the BDUT only sends a PropValueResponse with the data in case of A+C and Security
Mode on resp. in all cases when Security Mode is off

###### 3.7.8.2 PropertyValueWrite plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the PID_COUPLER_TYPE in Security Mode on
(except with toolkey and A+C) resp. writes the property in all cases when Security Mode is off

Procedure: Send messages to the BDUT to try and write the PID_COUPLER_TYPE

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=00,
Index=0001, RetCode=FC)

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )


-----

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=00,
Index=0001, RetCode=FC)

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

@[tReading back written values

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 01 00 01 01
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

@[tSetting back previous values

(11) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 02
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

(12) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

@[tDeactivate Security Mode

(13) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

(14) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(15) IN [ML_TP   ] BC 01.00.065 01.01.001 6A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

(16) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

@[tA only

(17) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

(18) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

@[tA+C


-----

(19) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

(20) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

@[tReading back written values

(21) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(22) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 3B 01 00 01 01
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=01 )

@[tSetting back previous values

(23) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 3B 01 00 01 02
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, Data=02 )

(24) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=003B, ElemCount=01,
Index=0001, RetCode=00)

Acceptance: the BDUT rejects to write the PID_COUPLER_TYPE in Security Mode on (except with
toolkey and A+C) resp. writes the property in all cases when Security Mode is off

##### 3.8 NetworkParameter_Read on PID_OBJECT_TYPE

###### 3.8.1 Positive Test from TP side
Purpose: Perform a NetworkParameter_Read with test info 1, 3 seconds random time and HC value of
the NL from the TP side

Procedure: Send from the TP side a NetworkParameter_Read with test info 1, 3 seconds random time
and HC value of the NL.

(1) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(2) OUT [ML_TP   ] B0 01.02.052 00/0000 EB 03 DB 00 06 01 01 03 01 01 02 01 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 02 01 )

Acceptance: The BDUT sends in the NetworkParameter_Response test info (1), random wait time (3
sec), hop count of the NL (1), object index of primary router object (1), object index of secondary
router object (2), value of coupler type (2), request received from primary TP side (1).

###### 3.8.2 Negative Test – Malformed Network Parameter Read
Purpose: Perform a NetworkParameter_Read with test info 1 but with random time and HC value of
the NL missing

Procedure: Send a NetworkParameter_Read with test info 1.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 65 03 DA 00 06 01 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 )

Acceptance: The BDUT does not react.


-----

###### 3.8.3 Positive Test from RF side
Purpose: Perform a NetworkParameter_Read with test info 1, 3 seconds random time and HC value of
the NL from the RF side

Procedure: Send from the RF side a NetworkParameter_Read with test info 1, 3 seconds random time
and HC value of the NL.

(1) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(2) OUT [SL_RF   ] 3C E0 01.02.052 00/0000 0B 03 DB 00 06 01 01 03 01 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 02 02 )

Acceptance: The BDUT sends in the NetworkParameter_Response test info (1), random wait time (3
sec), hop count of the NL (1), object index of primary router object (1), object index of secondary
router object (2), value of coupler type (2), request received from primary TP side (2).

###### 3.8.4 Positive Test –NetworkParameter_Read with PID_COUPLER_TYPE = 1 (Repeater)
Purpose: Change PID_COUPLER_TYPE to Repeater (1) and perform a NetworkParameter_Read with
test info 1, 3 seconds random time and HC value of the NL once from the TP side and once from the
RF side

Procedure: Verify whether the PID_COUPLER_TYPE is updated accordingly in the Response.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 43 D7 01 3B 10 01 01
:PropertyValueWrite(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 65 47 D5 01 3B 10 01
:PropertyValueRead(Obj=01, Prop=3B, Count=1, Start=001)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 01 3B 10 01 01
:PropertyValueResponse(Obj=01, Prop=3B, Count=1, Start=001, Data=01 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Positive Test - NetworkParameter_Read with test_info = 01, 3 seconds random time and HC
value of the NL - Expected response with test info (1), random wait time (3 sec), hop count of the NL
(1), object index of primary router object (1), object index of secondary router object (2), value of
coupler type (1), request received from primary TP side (1)

(11) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(12) OUT [ML_TP   ] B0 01.02.052 00/0000 EB 03 DB 00 06 01 01 03 01 01 02 01 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 01 01 )

Acceptance: The BDUT sends in the NetworkParameter_Response test info (1), random wait time (3
sec), hop count of the NL (1), object index of primary router object (1), object index of secondary
router object (2), value of coupler type (1), request received from primary TP side (1) respectively
from the secondary RF side (2).


-----

(1) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 03 02
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 02 )

(2) OUT [SL_RF   ] 3C E0 01.02.052 00/0000 0B 03 DB 00 06 01 01 03 01 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 02 02 )

###### 3.8.5 Positive Test – Test Info = 0
Purpose: Perform a NetworkParameter_Read with test info 0 from the TP side

Procedure: Send from the TP side a NetworkParameter_Read with test info 0 and no other data.

(1) IN [ML_TP   ] B0 01.02.255 00/0000 85 03 DA 00 06 01 00
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=00 )

(2) OUT [ML_TP   ] B0 01.02.052 00/0000 E7 03 DB 00 06 01 00 00 06
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=00 00 06 )

Acceptance: The BDUT sends in the NetworkParameter_Response test info (0) and Object Type 00
06h.

##### 3.9 Testing of PID_LOAD_STATE_CONTROL

###### 3.9.1 Setting to the not loaded State of Secondary Router IO – effect on permanent device addresses
Purpose: Checking whether the BDUT stops routing frames to permanent device addresses when the
secondary router object is not set to loaded.

Procedure: Read the status of the secondary router object and put it to loading. Read the content of the
PID_DA_FILTER_CONTROL. Check the different conditions for routing individual addresses
frames.

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 05 10 01
:PropertyValueRead(Obj=02, Prop=05, Count=1, Start=001)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 05 10 01 01
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 47 D7 02 05 10 01 01 00 00 00 00 00 00 00 00
00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00
)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C6 :T-Ack(Seq=1)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 47 D6 02 05 10 01 02
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=02 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C6 :T-Ack(Seq=1)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tReading PID_DA_FILTER_CONTROL (1 and 34 are still set)

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

(12) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(13) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 44 50 01
:PropertyValueRead(Obj=02, Prop=44, Count=5, Start=001)


-----

(14) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(15) OUT [ML_TP   ] B0 01.02.052 01.02.255 6A 43 D6 02 44 50 01 02 00 00 00 04
:PropertyValueResponse(Obj=02, Prop=44, Count=5, Start=001, Data=02 00 00 00 04 )

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(17) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[tExpected: no routing of individual addressed frames

@[t Addressed to own device address

(18) IN [ML_TP   ] B0 01.02.255 01.02.052 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(19) OUT [ML_TP   ] B0 01.02.052 01.02.255 67 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )

@if+"bm;ML_TP"

(20) IN [SL_RF   ] 30 60 01.02.254 01.02.052 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(21) OUT [SL_RF   ] 3C 60 01.02.052 01.02.254 07 03 D6 00 01 10 01 00 00
:PropertyValueResponse(Obj=00, Prop=01, Count=1, Start=001, Data=00 00 )

@if+"ll;ML_TP"

@[t Telegrams addressed to set Device Address - Expected no ACK and no routing onto RF

(22) IN [ML_TP   ] 91 01.02.255 01.02.001 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)

@[t Telegrams address to Device Address that is not set - Expected no ACK and no Routing onto RF

(23) IN [ML_TP   ] 91 01.02.255 01.02.002 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00,
Prop=01, Count=1, Start=001)

@[t Telegrams address to set Device Address - Expected no Routing onto TP

@if+"bm;ML_TP"

(24) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Telegrams addressed to Device Address that is not set - Expected no Routing on TP

(25) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

Acceptance: The BDUT blocks routing to permanent device addresses when the status of the Load
Control is not set to loaded.

###### 3.9.2 Setting to the not loaded State of Secondary Router IO – effect on temporary device addresses (optional)
Purpose: Checking whether the BDUT continues routing frames to temporary device addresses when
the secondary router object is set to unloaded.

Procedure: Set the temporary address 2 respectively set temporary addresss 1, check whether in both
cases the BDUT does not route from RF to TP but routes from TP to RF in spite of the unloaded state
– delete all temporary addresses

@[t temporarily set DA=02


-----

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 02 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 02 )

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Expected: no Routing towards TP, as DA set temporary but also because of load state

@if+"bm;ML_TP"

(7) IN [SL_RF   ] 30 60 01.02.254 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t Expected: Routing onto RF as DA set temporary and in spite of load state

(8) IN [ML_TP   ] B0 01.02.255 01.02.002 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(9) OUT [SL_RF   ] 3C 60 01.02.255 01.02.002 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t Positive Test: set temporary DA to 1 - Expected E_SUCCESS

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 66 42 C7 02 45 00 00 01 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 00 01 )

(12) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 00
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=00 )

(14) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Expected: no Routing onto TP, as DA is set temporily but also because of load state

@if+"bm;ML_TP"

(16) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@if+"ll;ML_TP"

@[t Expected: Routing onto RF, as DA set temporarily despite load state

(17) IN [ML_TP   ] B0 01.02.255 01.02.001 65 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

(18) OUT [SL_RF   ] 3C 60 01.02.255 01.02.001 05 03 D5 00 01 10 01
:PropertyValueRead(Obj=00, Prop=01, Count=1, Start=001)

@[t delete all temporary DAs

(19) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(20) IN [ML_TP   ] B0 01.02.255 01.02.052 65 42 C7 02 45 00 01 :FctPropCmd(ObjIdx=02,
PropId=45, Data=00 01 )


-----

(21) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(22) OUT [ML_TP   ] B0 01.02.052 01.02.255 65 42 C9 02 45 00 01
:FctPropState_Rsp(ObjIdx=02, PropId=45, RetCode=00, Data=01 )

(23) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(24) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: the BDUT in both cases does not route from RF to TP but routes from TP to RF in spite
of the not loaded state
(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 05 10 01
:PropertyValueRead(Obj=02, Prop=05, Count=1, Start=001)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 05 10 01 02
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=02 )

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 6F 43 D7 02 05 10 01 02 00 00 00 00 00
00 00 00 00 :PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00
00 00 00 )

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 05 10 01 01
:PropertyValueResponse(Obj=02, Prop=05, Count=1, Start=001, Data=01 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

##### 3.10 Testing as Media Coupler
Purpose: Perform the NM_Coupler_Scan_Directed in the setting as Media Coupler

Procedure: Set the IA of the BDUT to the device address 0 (media coupler) and send the following
Network Parameter Read messages:

- test info 1, 3 seconds random time, HC value of the NL, from both the TP as well as the RF side

- test info 1, 255 seconds random time, HC value of the NL, from both the TP side

- test info 1, 0 seconds random time, different HC values from both the TP side as well as the RF side

- test info 1, 0 seconds random time, HC = 0 respectively 1 from the RF side, but with set Route Flag
Last

@[t1.2 Set IA back to Media Coupler address, DA to 0h

(1) IN [ML_TP   ] B0 01.02.255 00/0000 ED 03 DE 00 0A 1A 15 29 0E 12 00 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1200, Reserved=00000000)

(2) OUT [SL_RF   ] 3C E0 01.02.255 00/0000 0D 03 DE 00 0A 1A 15 29 0E 12 00 00 00 00 00
:IndAddrSnoWrite(Sno=000A1A15290E, IndAddr=1200, Reserved=00000000)

(3) IN [ML_TP   ] B0 01.02.255 00/0000 E7 03 DC 00 0A 1A 15 29 0E
:IndAddrSnoRead(Sno=000A1A15290E)

(4) OUT [SL_RF   ] 3C E0 01.02.255 00/0000 07 03 DC 00 0A 1A 15 29 0E
:IndAddrSnoRead(Sno=000A1A15290E)


-----

(5) OUT [ML_TP   ] B0 01.02.000 00/0000 EB 03 DD 00 0A 1A 15 29 0E 00 00 00 00
:IndAddrSnoResponse(Sno=000A1A15290E, DomainAddr=0000, Reserved=0000)

@[tNetworkParameter_Read with test_info = 01, 3 seconds random time and HC value of the NL Expected response with test info (1), random wait time (3 sec), hop count of the NL (1), object index
of primary router object (1), object index of secondary router object (2), value of coupler type (2),
request received from primary TP side (1)

(6) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(7) OUT [ML_TP   ] B0 01.02.000 00/0000 EB 03 DB 00 06 01 01 03 01 01 02 02 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 02 01 )

@[tNetworkParameter_Read with test_info = 01, 3 seconds random time and HC value of the NL Expected response with test info (1), random wait time (3 sec), hop count of the NL (1), object index
of primary router object (1), object index of secondary router object (2), value of coupler type (2),
request received from secondary RF side (2)

(8) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 03 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 03 01 )

(9) OUT [SL_RF   ] 3C E0 01.02.000 00/0000 0B 03 DB 00 06 01 01 03 01 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 03 01 01 02 02 02 )

@[tNetworkParameter_Read with test_info = 01, 255 seconds random time and HC value of the NL Expected response with test info (1), random wait time (255 sec), hop count of the NL (1), object
index of primary router object (1), object index of secondary router object (2), value of coupler type
(2), request received from primary TP side (1)

(10) IN [ML_TP   ] B0 01.02.255 00/0000 E7 03 DA 00 06 01 01 FF 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 FF 01 )

(11) OUT [SL_RF   ] 3C E0 01.02.255 00/0000 07 03 DA 00 06 01 01 FF 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 FF 01 )

(12) OUT [ML_TP   ] B0 01.02.000 00/0000 EB 03 DB 00 06 01 01 FF 01 01 02 02 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 FF 01 01 02 02 01 )

@[tNetworkParameter_Read on TP side with test_info = 01, 0 seconds random time and different HC
values (including FE/FHh) - Expected response with test info (1), random wait time (0 sec), different
hop count values (but FE and FF resulting in no response), object index of primary router object (1),
object index of secondary router object (2), value of coupler type (2), request received from primary
TP side (1)

(13) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 00 00
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 00 )

(14) OUT [ML_TP   ] B0 01.02.000 00/0000 8B 03 DB 00 06 01 01 00 00 01 02 02 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 00 01 02 02 01 )

(15) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 00 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 01 )

(16) OUT [ML_TP   ] B0 01.02.000 00/0000 EB 03 DB 00 06 01 01 00 01 01 02 02 01
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 01 01 02 02 01 )

(17) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 00 FE
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 FE )

@[tNo Reaction of BDUT as reserved bits are set in the NetworkParameterRead


-----

(18) IN [ML_TP   ] B0 01.02.255 00/0000 87 03 DA 00 06 01 01 00 FF
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 FF )

@[tNo Reaction of BDUT as reserved bits are set in the NetworkParameterRead

@[tNetworkParameter_Read on RF side with test_info = 01, 0 seconds random time and different HC
values (including FE/FFh) - Expected response with test info (1), random wait time (3 sec), different
hop counts (but FE and FF resulting in no response), object index of primary router object (1), object
index of secondary router object (2), value of coupler type (2), request received from seondary RF side
(2)

(19) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 00
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 00 )

(20) OUT [ML_TP   ] B0 01.02.254 00/0000 D7 03 DA 00 06 01 01 00 00
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 00 )

(21) OUT [SL_RF   ] 3C E0 01.02.000 00/0000 0B 03 DB 00 06 01 01 00 00 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 00 01 02 02 02 )

(22) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 01 )

(23) OUT [ML_TP   ] B0 01.02.254 00/0000 D7 03 DA 00 06 01 01 00 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 01 )

(24) OUT [SL_RF   ] 3C E0 01.02.000 00/0000 0B 03 DB 00 06 01 01 00 01 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 01 01 02 02 02 )

(25) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 FE
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 FE )

@[tNo Reaction of BDUT as reserved bits are set in the NetworkParameterRead

(26) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 FF
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 FF )

@[tNo Reaction of BDUT as reserved bits are set in the NetworkParameterRead

@[tNetworkParameter_Read with Route Last Flag set and with test_info = 01, 0 seconds random time
and hop count 0/1 - Expected response with test info (1), random wait time (0 sec), hop count of the
NL (0 and 1), object index of primary router object (1), object index of secondary router object (2),
value of coupler type (2), request received from secondary RF side (2)

@[tNo Routing to TP

(27) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 00
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 00 )

(28) OUT [SL_RF   ] 3C E0 01.02.000 00/0000 0B 03 DB 00 06 01 01 00 00 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 00 01 02 02 02 )

(29) IN [SL_RF   ] 30 E0 01.02.254 00/0000 07 03 DA 00 06 01 01 00 01
:NetworkParameterRead(ObjType=0006, PID=01, TestInfo=01 00 01 )

(30) OUT [SL_RF   ] 3C E0 01.02.000 00/0000 0B 03 DB 00 06 01 01 00 01 01 02 02 02
:NetworkParameterResponse/InfoReport(ObjType=0006, PID=01, TestData=01 00 01 01 02 02 02 )

Acceptance: The BDUT sends a Network Parameter Response with the following data:

- test info (1), random wait time (3 sec), hop count of the NL (1), object index of primary router object
(1), object index of secondary router object (2), value of coupler type (2), request received from
primary TP side (1) respectively secondary side (2)


-----

- with test info (1), random wait time (255 sec), hop count of the NL (1), object index of primary
router object (1), object index of secondary router object (2), value of coupler type (2), request
received from primary TP side (1)

- test info (1), random wait time (0 sec), different hop count values (but FE resulting in 0 and FF in 1),
object index of primary router object (1), object index of secondary router object (2), value of coupler
type (2), request received from primary TP side (1) respectively from the secondary RF side (2)

- test info (1), random wait time (0 sec), hop count of the NL (0 and 1), object index of primary router
object (1), object index of secondary router object (2), value of coupler type (2), request received from
secondary RF side (2) – the message is also not routed on TP.

##### 3.11 Tests related to PID_SEGMENT_STATUS

###### 3.11.1 Checking Property Description in Segment Coupler instance 1
Purpose: Check the Property Description in the Segment Coupler instance 1

Procedure: Send a Property Description to the PID_SEGMENT_STATUS in Segment Coupler
instance 1

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 64 43 D8 01 46 00 :PropertyDescRead(Obj=01,
Prop=46, Index=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 68 43 D9 01 46 ?? 11 00 01 ??
:PropertyDescResponse(Obj=01, Prop=46, Index=??, Type=11, MaxCount=0001, RdAcc=?,
WrAcc=?)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

Acceptance: The BDUT sends the correct Property Description Response

###### 3.11.2 Checking Property Description in Segment Coupler instance 2
Purpose: Check the Property Description in the Segment Coupler instance 2

Procedure: Send a Property Description to the PID_SEGMENT_STATUS in Segment Coupler
instance 2

(1) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(2) IN [ML_TP   ] B0 01.02.255 01.02.052 64 43 D8 02 46 00 :PropertyDescRead(Obj=02,
Prop=46, Index=00)

(3) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

(4) OUT [ML_TP   ] B0 01.02.052 01.02.255 68 43 D9 02 46 ?? 11 00 01 ??
:PropertyDescResponse(Obj=02, Prop=46, Index=??, Type=11, MaxCount=0001, RdAcc=?,
WrAcc=?)

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT sends the correct Property Description Response

###### 3.11.3 Checking Actual Status
Purpose: Check the Status of the PID_SEGMENT_STATUS

Procedure: Send a Property Value Read to the respective PID_SEGMENT_STATUS in the different
instances of the Segment Coupler, with or without disconnected communication


-----

@[t Disconnect TP and check segment status of Segment Coupler instance 1 via RF

(1) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 01 46 10 01
:PropertyValueRead(Obj=01, Prop=46, Count=1, Start=001)

@[t Segment Coupler Instance reports communication is impossible

(2) OUT [SL_RF   ] 30 60 01.02.254 01.02.002 06 03 D6 01 46 10 01 01
:PropertyValueResponse(Obj=01, Prop=46, Count=1, Start=001, Data=01 )

@[t Reconnect TP and check segment status of Segment Coupler instance 1 via RF

(3) IN [SL_RF   ] 30 60 01.02.254 01.02.001 05 03 D5 01 46 10 01
:PropertyValueRead(Obj=01, Prop=46, Count=1, Start=001)

@[t Segment Coupler Instance reports communication is impossible

(4) OUT [SL_RF   ] 30 60 01.02.254 01.02.002 06 03 D6 01 46 10 01 00
:PropertyValueResponse(Obj=01, Prop=46, Count=1, Start=001, Data=00 )

@[t Disconnect RF and check segment status of Segment Coupler instance 2 via TP

(5) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(6) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 46 10 01
:PropertyValueRead(Obj=02, Prop=46, Count=1, Start=001)

(7) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

@[t Segment Coupler Instance reports communication is impossible

(8) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 46 10 01 01
:PropertyValueResponse(Obj=02, Prop=46, Count=1, Start=001, Data=01 )

(9) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(10) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

@[t Reconnect RF and check segment status of Segment Coupler instance 2 via TP

(11) IN [ML_TP   ] B0 01.02.255 01.02.052 60 80 :T-Connect(Addr=01.02.052)

(12) IN [ML_TP   ] B0 01.02.255 01.02.052 65 43 D5 02 46 10 01
:PropertyValueRead(Obj=02, Prop=46, Count=1, Start=001)

(13) OUT [ML_TP   ] B0 01.02.052 01.02.255 60 C2 :T-Ack(Seq=0)

@[t Segment Coupler Instance reports communication is again possible

(14) OUT [ML_TP   ] B0 01.02.052 01.02.255 66 43 D6 02 46 10 01 00
:PropertyValueResponse(Obj=02, Prop=46, Count=1, Start=001, Data=00 )

(15) IN [ML_TP   ] B0 01.02.255 01.02.052 60 C2 :T-Ack(Seq=0)

(16) IN [ML_TP   ] B0 01.02.255 01.02.052 60 81 :T-Disconnect

Acceptance: The BDUT sends the correct status in the different situation

###### 3.11.4 Test of PID_SEGMENT_STATUS (3FF/1FF) Access Policies[4]

 3.11.4.1 PropertyValueRead plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated
Purpose: Check whether the BDUT sends in all cases a PropValueResponse with the data
Procedure: Send message to the BDUT to read the PID_SEGMENT_STATUS

4 Optional if not supporting security


-----

@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tDeactivate Security Mode

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(11) IN [ML_TP   ] BC 01.00.065 01.01.001 69 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(12) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tA only

(13) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(14) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tA+C

(15) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)


-----

(16) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

Acceptance: the BDUT sends in all cases a PropValueResponse with the data

###### 3.11.4.2 PropertyValueWrite plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated
Purpose: Check whether BDUT rejects to write in all cases the PID_SEGMENT_STATUS and returns
FB (only with plain and with security mode on FC)
Procedure: Send messages to the BDUT to try and write the PID_SEGMENT_STATUS
@[tActivate Security Mode

(1) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 )

(2) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(3) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(4) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 10 46 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FC)

@[tA only

(5) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(6) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 46 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FB)

@[tA+C

(7) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(8) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 46 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FB)

@[tReading back written values

(9) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(10) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

@[tDeactivate Security Mode

(11) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 )


-----

(12) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 )

@[tPlain

(13) IN [ML_TP   ] BC 01.00.065 01.01.001 6A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(14) OUT [ML_TP   ] BC 01.01.001 01.00.065 6A 01 CF 00 06 00 10 46 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FB)

@[tA only

(15) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(16) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 46 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FB)

@[tA+C

(17) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 0A 01 CE 00 06 00 10 46 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=01 )

(18) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CF 00 06 00 10 46 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=00,
Index=0001, RetCode=FB)

@[tReading back written values

(19) IN [ML_TP   ] 3C 60 01.00.065 01.01.001 09 01 CC 00 06 00 10 46 01 00 01
:PropertyExtValueRead(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01, Index=0001)

(20) OUT [ML_TP   ] 3C 60 01.01.001 01.00.065 0A 01 CD 00 06 00 10 46 01 00 01 00
:PropertyExtValueResponse(ObjType=0006, ObjInst=0001, PropId=0046, ElemCount=01,
Index=0001, Data=00 )

Acceptance: the BDUT rejects to write in all cases to write the PID_SEGMENT_STATUS and returns
FB (only with plain and with security mode on FC)


-----

