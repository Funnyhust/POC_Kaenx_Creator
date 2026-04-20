## System Conformance Testing

### Test Suite Supplement G

 Testing of Load State Machines

Summary:

This document contains test specifications for Testing of implemented
Load State Machines.

Version 01.02.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

###### Document Updates

**Version** **Date** **Modifications**

0.1 2002.06 Working Document in KonCert

0.2 2002.06 Working Document in KonCert – clearer introduction

0.3 2002.10 Integrated comments from KonCert July meeting – Preparation for release
for voting

0.4 2007.05 Renewed start of the document following publication of AN080 with new
approved load state machine specificiations

0.5 2007.11 Completion with alternative test methods via MemoryAccess – adding of
optional states

0.6 2008.03 Resolution of comments from Release for Voting – Draft for voting version –
correction of Figure 1

0.7 2008.06 Simplification of test set-up

0.8 2008.11 Resolutions of comments from Final voting

1.0 2008.11 Publication as Approved Standard

1.1 2009-06 Readying of document in preparataion for publication of V2.0 of the KNX
specifications

1.2DP 2009-10 Addition of tests for unknown load state events

1.2DV 2010-01 Resolving comments from Rfv – reading for final voting

1.2AS 2010-03 No comments in Final voting – publication as AS

01.02.01 2013.10.24 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 08_TSSG System Conformace Testing - Load State Machines Tests v01.02.01 AS.docx
Version: 01.02.01
Status: Approved Standard
Savedate: 2013.10.24
Number of pages: 43

|Version|Date|Modifications|
|---|---|---|
|0.1|2002.06|Working Document in KonCert|
|0.2|2002.06|Working Document in KonCert – clearer introduction|
|0.3|2002.10|Integrated comments from KonCert July meeting –**Preparation** for release<br>for voting|
|0.4|2007.05|Renewed start of the document following publication of AN080 with new<br>approved load state machine specificiations|
|0.5|2007.11|Completion with alternative test methods via MemoryAccess – adding of<br>optional states|
|0.6|2008.03|Resolution of comments from Release for Voting – Draft for voting version –<br>correction of Figure 1|
|0.7|2008.06|Simplification of test set-up|
|0.8|2008.11|Resolutions of comments from Final voting|
|1.0|2008.11|Publication as Approved Standard|
|1.1|2009-06|Readying of document in preparataion for publication of V2.0 of the KNX<br>specifications|
|1.2DP|2009-10|Addition of tests for unknown load state events|
|1.2DV|2010-01|Resolving comments from Rfv – reading for final voting|
|1.2AS|2010-03|No comments in Final voting – publication as AS|
|01.02.01|2013.10.24|Editorial updates for the publication of KNX Specifications 2.1.|


-----

##### Contents

###### 1 General .................................................................................................................................... 4 1.1 Introduction ..................................................................................................................... 4 1.2 Test Set-up ...................................................................................................................... 4 1.3 State-transition table ....................................................................................................... 4

 2 Testing of Load Controls ....................................................................................................... 5 2.1 Test Preparation .............................................................................................................. 5 2.2 Tests with initial state LOAD_STATE_UNLOADED .................................................. 6 2.2.1 Event: NO OPERATION and unknown Load event .......................................... 6 2.2.2 Event: LOAD_EVENT_START LOADING ..................................................... 7 2.2.3 Event: LOAD_EVENT_LOAD COMPLETED ................................................. 8 2.2.4 Event: LOAD_SEGMENT ................................................................................. 9 2.2.5 Event: UNLOAD .............................................................................................. 10 2.2.6 Event: DEVICE RESTART .............................................................................. 11 2.3 Tests with initial state LOAD_STATE_LOADED ...................................................... 12 2.3.1 Event: NO OPERATION and unknown load event ......................................... 12 2.3.2 Event: START LOADING ............................................................................... 14 2.3.3 Event: LOAD COMPLETED ........................................................................... 17 2.3.4 Event: LOAD SEGMENT ................................................................................ 19 2.3.5 Event: UNLOAD .............................................................................................. 21 2.3.6 Event: DEVICE RESTART .............................................................................. 23 2.4 Tests with initial state LOAD_STATE_LOADING .................................................... 25 2.4.1 Event: NO OPERATION and unknown Load event ........................................ 25 2.4.2 Event: START LOADING ............................................................................... 27 2.4.3 Event: LOAD COMPLETED ........................................................................... 28 2.4.4 Event: LOAD SEGMENT ................................................................................ 29 2.4.5 Event: UNLOAD .............................................................................................. 30 2.4.6 Event: DEVICE RESTART .............................................................................. 31 2.5 Tests with initial state LOAD_STATE_ERROR ......................................................... 33 2.5.1 Event: NO OPERATION and unknown load event ......................................... 33 2.5.2 Event: START LOADING ............................................................................... 34 2.5.3 Event: LOAD COMPLETED ........................................................................... 36 2.5.4 Event: LOAD SEGMENT ................................................................................ 38 2.5.5 Event: UNLOAD .............................................................................................. 39 2.5.6 Event: DEVICE RESTART .............................................................................. 41 2.6 Test without access rights ............................................................................................. 43


-----

#### 1 General

##### 1.1 Introduction
This test suite supplement contains test specifications for the testing the correct implementation of Load
State Machines in accordance with Volume 3/5/2.

**Note:**

1. the underneath test sequences assume the testing of devices with device models supporting
authorization. If this is not the case for the BDUT (e.g. in case it supports system 300),
authorization during the test preparation can be skipped and clause 2.6 does not apply.

2. the underneath test specifications do not contain tests for testing the reaction of the load state
machine when the initial state of the BDUT is ‘unloading’, as current implementations do not
support these states as an externally visible state. If an implementation, in which this state is
supported, is submitted to certification, the test specifications have to be updated accordingly.

3. For the tests where the reaction of the Load State Machine is tested with unknown events, the
underneath test specifications describe the mandatory behaviour for new implementations from
the beginning of 2012 onwards, i.e. ignoring of unknown events. Existing or modified
implementations may go to the error state.

##### 1.2 Test Set-up
###### For all tests, the same setup can be used. As PC interface an RS232 or USB interface can be used.

 PC
 EITT

COM1:

RS-232/USB

EDI

# BDUT

AFFE

# 1001

(remote)

BUS

PSU Choke

**Figure 1: Set-up for testing Load State Machines**

##### 1.3 State-transition table
###### The State transition table is given in Volume 3/5/2.

|PC<br>EITT<br>COM1:<br>RS-232/USB<br>EDI<br>BDUT<br>1001<br>AFFE<br>(remote)|Col2|
|---|---|
|PSU <br>Choke<br>BUS|PSU <br>Choke<br>BUS|
|PSU|Choke|


# BDUT


RS-232/USB


###### EITT


Choke


###### PC


BUS


-----

#### 2 Testing of Load Controls

##### 2.1 Test Preparation
Test Setup : Preset Access keys

Assumed Memory Model:

Address 0x4000 to 0xBFFF:

Will be unloaded / loaded by this test

Settings of keys:

Key for level 0: 0xAA, 0xAA, 0xAA, 0xAA

**Preparation: Unload complete device (Address table, assoc table and application object, PEI program)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to address table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 01 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=01, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 ) [with
_Memory Write: write first byte ‘14h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 01 05 10 01 00 :PropertyValueResponse(Obj=01, Prop=05, Count=1,
Start=001, Data=00 ) [with Memory Read: read one byte from address B6EAh – Memory Response 00h]

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application object a LOAD_EVENT_UNLOAD


-----

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘34h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6ECh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to PEI program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 53 D7 04 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=04, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘44h’ to address 0104h]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 04 05 10 01 00 :PropertyValueResponse(Obj=04, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EDh – Memory Response 00h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now BDUT is completely UNLOADED

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

---> Now BDUT is ready for test

##### 2.2 Tests with initial state LOAD_STATE_UNLOADED

###### 2.2.1 Event: NO OPERATION and unknown Load event
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED


-----

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

---> Now test object is unloaded

Send to association table object a LOAD_EVENT_NO OPERATION

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object an unknown LOAD_EVENT

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 05 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=05 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘25h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.2 Event: LOAD_EVENT_START LOADING
**Preparation**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)


-----

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

---> Now test object is unloaded

Send to association table object a LOAD_EVENT_START LOADING

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.3 Event: LOAD_EVENT_LOAD COMPLETED
**Preparation**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )


-----

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

---> Now test object is unloaded

Send to association table object a LOAD_EVENT_LOAD COMPLETED

---> Acceptance: BDUT remains in load state LOAD_STATE_UNLOADED, alternatively ERROR

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 – alternatively 03)

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h or alternatively 03h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.4 Event: LOAD_SEGMENT
**Preparation**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)


-----

---> Now test object is unloaded

Send to association table object a LOAD_SEGMENT

---> Acceptance: BDUT remains in load state LOAD_STATE_UNLOADED, alternatively ERROR

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 03 00 01 1A 00 7A 33 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 01 1A 00 7A 33 03 80 00 )

_[with Memory Write: write first byte ‘23h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00, alternatively 03)

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h, alternatively 03h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.5 Event: UNLOAD
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

---> Now test object is unloaded

Send to association table object a LOAD_EVENT_UNLOAD

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_


-----

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.6 Event: DEVICE RESTART
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

---> Now test object is unloaded

Send a device restart to BDUT

IN   BC AFFE 1001 61 4B 80 :Restart()

---> Acceptance: Connection breaks down, load state remains UNLOADED

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read load state of association table

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 65 43 D5 02 05 10 01 :PropertyValueRead(Obj=02, Prop=05, Count=1,
Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)


-----

OUT  BC 1001 AFFE 66 43 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

##### 2.3 Tests with initial state LOAD_STATE_LOADED

###### 2.3.1 Event: NO OPERATION and unknown load event
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)


-----

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write first byte ’23 00 00 42 00 00 10 ff 03 80 00 00h’ to address 0104h_

_Start address 4200h_

_Length 0010h_

_Read/Write Access: ffh no privilege_

_MemoryType 03h EEPROM_

_Memory Attributes 80h apply checksum]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h_

_Contents manufacturer dependant_

_Pointer to table 4200h_

_PEI Type 80h_

_Manufacturer ID 002h_

_Device ID 0A4Ah]_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)


-----

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded

Send to association table object a LOAD_EVENT_NO OPERATION

---> Acceptance: BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 63 D7 02 05 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘20h’ to address 0104h]_

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 5F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to association table object an unknown LOAD_EVENT

---> Acceptance: BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 02 05 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=05 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘25h’ to address 0104h]_

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)

OUT  BC 1001 AFFE 66 63 D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.2 Event: START LOADING
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned


-----

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write ’23 00 00 42 00 00 10 ff 03 80 00 00h’ to address 0104h – significance of_
_bytes see 2.3.1]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data


-----

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded

Send to association table object a LOAD_EVENT_START LOADING

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 5F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect


-----

###### 2.3.3 Event: LOAD COMPLETED
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write ’23 00 00 42 00 00 10 ff 03 80 00 00h’ to address 0104h – for significance see_
_2.3.1]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_


-----

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – for significance see_
_2.3.1]_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded

Send to association table object a LOAD_EVENT_LOAD COMPLETED

---> Acceptance: BDUT remains in load state LOAD_STATE_LOADED, alternatively ERROR

IN   BC AFFE 1001 6F 63 D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)


-----

OUT  BC 1001 AFFE 66 5F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h, alternatively 03h]_

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.4 Event: LOAD SEGMENT
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)

BDUT returns load state LOAD_STATE_LOADING


-----

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write ’23 00 00 42 00 00 10 ff 03 80 00 00h’ to address 0104h – for significance see_
_2.3.1]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – for significance see_
_2.3.1]_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded


-----

Send to association table object a LOAD_SEGMENT (Segment control record)

---> Acceptance: BDUT returns load state LOAD_STATE_ERROR

IN   BC A001 1001 6F 63 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – for significance see_
_2.3.1_

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 5F D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.5 Event: UNLOAD
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)


-----

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write ’23 00 00 42 00 00 10 ff 03 80 00h’ to address 0104h – for significance see_
_2.3.1_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – for significance see_
_2.3.1_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_


-----

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded

Send to association table object a LOAD_EVENT_UNLOAD

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED[1]

IN   BC A001 1001 6F 63 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 5F D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.6 Event: DEVICE RESTART
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

1 The BDUT may assume the temporary state ‘Unloading’ (04h)


-----

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_SEGMENT (Allocation record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 00 40 30 00 10 31 03 80 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 00 40 30 00 10 31 03 80 00 )

_[with Memory Write: write ’23 00 00 42 00 00 10 ff 03 80 00h’ to address 0104h – for significance see_
_2.3.1_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Write data to association table

IN   BC AFFE 1001 6A 52 87 40 30 03 01 00 02 01 03 02 :MemoryWrite(Count=07, Addr=4030,
Data=03 01 00 02 01 03 02 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

Verify data

IN   BC AFFE 1001 63 56 07 40 30 :MemoryRead(Count=07, Addr=4030)

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 6A 52 47 40 30 03 01 00 02 01 03 02 :MemoryResponse(Count=07,
Addr=4030, Data=03 01 00 02 01 03 02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – for significance see_
_2.3.1_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )


-----

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 5F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

---> Now test object is loaded

Send a device restart to BDUT

IN   BC AFFE 1001 61 63 80 :Restart()

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

T-ACK is optional. It is depending on the device architecture.

---> Acceptance: Connection breaks down, load state remains LOADED

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read load state of association table

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 65 43 D5 02 05 10 01 :PropertyValueRead(Obj=02, Prop=05, Count=1,
Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01)

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

##### 2.4 Tests with initial state LOAD_STATE_LOADING

###### 2.4.1 Event: NO OPERATION and unknown Load event
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned


-----

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send to association table object a LOAD_EVENT_NO OPERATION

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘20h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object an unknown LOAD_EVENT

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 05 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=05 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘25h’ to address 0104h]_


-----

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.2 Event: START LOADING
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send to association table object a LOAD_EVENT_START LOADING


-----

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.3 Event: LOAD COMPLETED
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )


-----

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send to association table object a LOAD_EVENT_LOAD COMPLETED

---> Acceptance: BDUT returns theload state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.4 Event: LOAD SEGMENT
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )


-----

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send to association table object a LOAD_SEGMENT (Segment control record)

---> Acceptance: BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.5 Event: UNLOAD
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_


-----

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send to association table object a LOAD_EVENT_UNLOAD

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED[2]

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.6 Event: DEVICE RESTART
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

2 The BDUT may assume the temporary state ‘Unloading’ (04h)


-----

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

---> Now test object is loading

Send a device restart to BDUT

IN   BC AFFE 1001 61 4F 80 :Restart()

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

T-ACK is optional. It is depending on the device architecture.

---> Acceptance: Connection breaks down, load state remains in loading

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read load state of association table

BDUT returns load state LOAD_STATE_LOADING, optional ERROR

IN   BC AFFE 1001 65 43 D5 02 05 10 01 :PropertyValueRead(Obj=02, Prop=05, Count=1,
Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h, optional 03h]_

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect


-----

##### 2.5 Tests with initial state LOAD_STATE_ERROR

###### 2.5.1 Event: NO OPERATION and unknown load event
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )


-----

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send to association table object a LOAD_EVENT_NO OPERATION

---> Acceptance: BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 57 D7 02 05 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘20h’ to address 0104h]_

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to association table object an unknown LOAD_EVENT

---> Acceptance: BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 5B D7 02 05 10 01 05 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=05 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘25h’ to address 0104h]_

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 5B D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.2 Event: START LOADING
**Preparation: Unload test object (Assoc table)**

Connect to BDUT


-----

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR


-----

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send to association table object a LOAD_EVENT_START LOADING

---> Acceptance: BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 57 D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.3 Event: LOAD COMPLETED
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)


-----

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send to association table object a LOAD_EVENT_LOAD COMPLETED

---> Acceptance: BDUT remains in load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 57 D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )


-----

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.4 Event: LOAD SEGMENT
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED


-----

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send to association table object a LOAD_SEGMENT (Segment control record)

---> Acceptance: BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 57 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.5 Event: UNLOAD
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned


-----

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_


-----

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send to association table object a LOAD_EVENT_UNLOAD

---> Acceptance: BDUT returns load state LOAD_STATE_UNLOADED[3]

IN   BC AFFE 1001 6F 57 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.6 Event: DEVICE RESTART
**Preparation: Unload test object (Assoc table)**

Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Authorization with highest key to access load state machines

Authorize response for level 0 is returned

IN   BC AFFE 1001 66 43 D1 00 AA AA AA AA :AuthorizeRequest(AAAAAAAA)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 62 43 D2 00 :AuthorizeResponse(00)

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to association table object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 02 05 10 01 00 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=00 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 00h]_

3 The BDUT may assume the temporary state ‘Unloading’ (04h)


-----

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to association table object a LOAD_EVENT_START LOADING

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 02 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘21h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 02 05 10 01 02 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=02 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 02h]_

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to association table object a LOAD_EVENT_LOAD COMPLETED

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 4F D7 02 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘22h’ to address 0104h]_

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 02 05 10 01 01 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=01 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 01h]_

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to association table object a LOAD_SEGMENT (Segment control record)

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 6F 53 D7 02 05 10 01 03 02 40 30 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=03 02 40 30 00 00 00 00 00 00 )

_[with Memory Write: write ’23 02 00 42 00 80 00 02 A0 4A 10h’ to address 0104h – significance of bytes_
_see 2.3.1 ]_

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

---> Now test object is in state ERROR

Send a device restart to BDUT

IN   BC AFFE 1001 61 57 80 :Restart()

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

T-ACK is optional. It is depending on the device architecture.

---> Acceptance: Connection breaks down, load state changes to ERROR

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)


-----

Read load state of association table

BDUT returns load state LOAD_STATE_ERROR

IN   BC AFFE 1001 65 43 D5 02 05 10 01 :PropertyValueRead(Obj=02, Prop=05, Count=1,
Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 02 05 10 01 03 :PropertyValueResponse(Obj=02, Prop=05, Count=1,
Start=001, Data=03 )

_[with Memory Read: read one byte from address B6EBh – Memory Response 03h]_

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

##### 2.6 Test without access rights
Connect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

No authorization!

Send to association table object a LOAD_EVENT_UNLOAD

---> Acceptance: BDUT denies access to load state machine

IN   BC AFFE 1001 6F 43 D7 02 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=02, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

_[with Memory Write: write first byte ‘24h’ to address 0104h]_

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 65 43 D6 02 05 00 01 :PropertyValueResponse(Obj=02, Prop=05, Count=0,
Start=001, Data=)

_[with Memory Read: read one byte from address B6EBh – Memory Response --]_

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect


-----

