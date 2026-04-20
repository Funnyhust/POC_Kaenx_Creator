## System Conformance Testing

### Test Suite Supplement I

 Testing of Run State Machines

Summary:

This document contains test specifications for Testing of implemented
Run State Machines.

Version 01.01.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

###### Document Updates

**Version** **Date** **Modifications**

0.1 2008.03 Draft Proposal

0.2 2008.05 Revised Draft Proposal

0.3 2008.06 Readying the document for Release for voting

0.4 2008.11 Readying the document for Final voting – step 1 KonCert

0.5 2009.04 Readying the document for Final voting – step 2 KSG

1.0 2009-06 Resolution of comments from final voting cycle - Readying document for
publication in V2.0 of KNX specifications

01.01.01 2013.10.24 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 08_TSSI System Conformace Testing - Run State Machine Tests v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.24
Number of pages: 33

|Version|Date|Modifications|
|---|---|---|
|0.1|2008.03|Draft Proposal|
|0.2|2008.05|Revised Draft Proposal|
|0.3|2008.06|Readying the document for Release for voting|
|0.4|2008.11|Readying the document for Final voting – step 1 KonCert|
|0.5|2009.04|Readying the document for Final voting – step 2 KSG|
|1.0|2009-06|Resolution of comments from final voting cycle - Readying document for<br>publication in V2.0 of KNX specifications|
|01.01.01|2013.10.24|Editorial updates for the publication of KNX Specifications 2.1.|


-----

##### Contents

###### 1 General .................................................................................................................................... 4 1.1 Introduction ..................................................................................................................... 4 1.2 Test Set-up ...................................................................................................................... 4 1.3 State-transition table ....................................................................................................... 4

 2 Testing of Run State Machines ............................................................................................. 5 2.1 Test Preparation .............................................................................................................. 5 2.2 Tests with initial state RUNSTATE_HALTED ............................................................. 5 2.2.1 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION ................................................................. 5 2.2.2 Event: RUNCONTROL_RESTART and executable part loaded ...................... 6 2.2.3 Event: RUNCONTROL_RESTART and executable part unloaded .................. 6 2.2.4 Event: RUNCONTROL_STOP .......................................................................... 7 2.2.5 Event: Unload to corresponding load state ......................................................... 7 2.2.6 Event: Device restart and executable part loaded (Power Up) ........................... 8 2.2.7 Event: Device restart and executable part not loaded (Power Up) ..................... 8 2.3 Tests with initial state RUNSTATE_RUNNING ........................................................... 9 2.3.1 Preparation .......................................................................................................... 9 2.3.2 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION ............................................................... 11 2.3.3 Event: RUNCONTROL_RESTART (executable part loaded) ........................ 12 2.3.4 Event: RUNCONTROL_RESTART and executable part unloaded ................ 12 2.3.5 Event: RUNCONTROL_STOP ........................................................................ 13 2.3.6 Event: Unload corresponding load state ........................................................... 13 2.3.7 Event: Device restart and executable part loaded (Power Up) ......................... 14 2.3.8 Event: Device restart and executable part unloaded (Power Up) ..................... 17 2.4 Tests with initial state RUNSTATE_READY ............................................................. 17 2.4.1 General .............................................................................................................. 17 2.4.2 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION ............................................................... 17 2.4.3 Event: Restart and executable part loaded ........................................................ 18 2.4.4 Event: Restart and executable part unloaded .................................................... 19 2.4.5 Event: Stop run state machine........................................................................... 19 2.4.6 Event: Unload to corresponding load state ....................................................... 20 2.4.7 Event: Device restart and executable part loaded (Power Up) ......................... 21 2.4.8 Event: Device restart and executable part unloaded (Power Up) ..................... 24 2.5 Tests with initial state RUNSTATE_TERMINATED ................................................. 24 2.5.1 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION ............................................................... 24 2.5.2 Event: RUNCONTROL_RESTART ( executable part loaded) ....................... 25 2.5.3 Event: RUNCONTROL_RESTART (executable part unloaded) .................... 25 2.5.4 Event: RUNCONTROL_STOP ........................................................................ 26 2.5.5 Event: Unload to corresponding load state ....................................................... 26 2.5.6 Event: Device restart and executable part loaded (Power Up) ......................... 27 2.5.7 Event: Device restart and executable part not loaded (Power Up) ................... 30


-----

#### 1 General

##### 1.1 Introduction
This test suite supplement contains test specifications for the testing the correct implementation of Run
State Machines in accordance with Volume 3/5/2.

**Note: the underneath test specifications do not contain tests for testing the reaction of the run state**
machine when the initial state of the BDUT is ‘starting’ and ‘shutting down’, as current implementations
do not support these states. If an implementation, in which these states are supported, is submitted to
certification, the test specifications have to be updated accordingly.

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

**Fig. 8-TSS-I-1: Set-up for testing run state machines**

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

#### 2 Testing of Run State Machines

##### 2.1 Test Preparation
Assumed Memory Model:

Address 0x4000 to 0xBFFF:

##### 2.2 Tests with initial state RUNSTATE_HALTED
**Preparation: Load application object (executable part)**

###### 2.2.1 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION
**Preparation: Unload test object (Application)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Read run state

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

First check if BDUT ignores invalid Run state event

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 6F 4B D7 03 06 10 01 FF 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=FF 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Now send to run state object a RUNCONTROL_NO_OPERATION

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 6F 4F D7 03 06 10 01 00 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )


-----

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.2 Event: RUNCONTROL_RESTART and executable part loaded
**Note: Only applicable for devices complying with System 2/BCU2 profiles or mask versions 0300h and**
2300h. For all other system profiles, this test does not apply as the initial state can not be provoked.

Set device to state ‘halted’with executable part loaded as done in clause 2.3.5.

Send to run state object a RUNCONTROL_RESTART

**---> Acceptance: BDUT returns run state RUNSTATE_HALTED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

IN   BC 1041 1001 6F 43 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.3 Event: RUNCONTROL_RESTART and executable part unloaded
**Preparation: Unload test object (Application)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_RESTART

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect


-----

###### 2.2.4 Event: RUNCONTROL_STOP
**Preparation: Unload test object (Application)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_STOP

---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.5 Event: Unload to corresponding load state
IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_RESTART

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 6F 43 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Read run state

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED


-----

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 4F D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.2.6 Event: Device restart and executable part loaded (Power Up)
Not applicable as device is in run state „halted“, which is for a loaded application not possible.

###### 2.2.7 Event: Device restart and executable part not loaded (Power Up)
**Preparation: Unload test object (Application)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send a reset to BDUT

IN   BC AFFE 1001 61 47 80 :Restart()

Connection breaks down, run state is RUNSTATE_HALTED

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)


-----

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

##### 2.3 Tests with initial state RUNSTATE_RUNNING

###### 2.3.1 Preparation
**Note: the underneath test preparation is specific to a certain system profile and might have to be adapted**
for other system profiles to ensure that at the end of the preparation the load state machine is in state
“loaded” and the run state machine is in the state ‘running’.

Load application object (executable part)

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_START

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 03 00 07 00 00 F8 F1 02 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 07 00 00 F8 F1 02 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 03 00 40 A4 01 5C F1 03 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 40 A4 01 5C F1 03 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )


-----

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 03 05 10 01 03 00 42 00 01 00 22 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 42 00 01 00 22 03 80 00 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 57 D7 03 05 10 01 03 00 43 00 01 00 33 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 43 00 01 00 33 03 80 00 )

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 03 05 10 01 03 00 44 00 72 00 FF 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 44 00 72 00 FF 03 80 00 )

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 5B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5F D7 03 05 10 01 03 02 41 34 00 00 C5 FF 12 11
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 02 41 34 00 00 C5 FF 12 11 )

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 03 05 10 01 03 04 40 B7 03 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 04 40 B7 03 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 63 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)


-----

Send to application program object a LOAD_EVENT_COMPLETE

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 03 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)

OUT  BC 1001 AFFE 66 67 D6 03 05 10 01 01 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 E6 :T-Ack(Seq=9)

Send to run state object a RUNCONTROL_RESTART

BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 6F 6B D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 EA :T-Ack(Seq=A)

OUT  BC 1001 AFFE 66 6B D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 EA :T-Ack(Seq=A)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.2 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION
Precondition: The executable part is already loaded (see clause 2.3.1)

**Preparation: Set run state to RUNSTATE_RUNNING**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

First check if BDUT ignores invalid Run State event

---> Acceptance: BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 6F 47 D7 03 06 10 01 FF 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=FF 00 00 00 00 00 00 00 00 00 )

IN   B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

IN   BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Now send to run state object a RUNCONTROL_NO_OPERATION

---> Acceptance: BDUT returns run state RUNSTATE_RUNNING


-----

IN   BC 1041 1001 6F 4B D7 03 06 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.3 Event: RUNCONTROL_RESTART (executable part loaded)
Precondition: The executable part is already loaded (see clause 2.3.1)

**Preparation: Set run state to RUNSTATE_RUNNING**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_RESTART

---> Acceptance: BDUT returns run state RUNSTATE_RUNNING. It may intermediately return
RUNSTATE_READY (this is marked in italics and is thus optional).

IN   BC 1041 1001 6F 47 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

_OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,_
_Start=001, Data=02 )_

_In case of an intermediate RUNSTATE_Ready, observe waiting period to ensure that application has_
_started._

_Read run state_

_IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1,_
_Start=001)_

_OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)_

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.4 Event: RUNCONTROL_RESTART and executable part unloaded
Not applicable, the runstate „running“ is not possible for an unloaded application.


-----

###### 2.3.5 Event: RUNCONTROL_STOP
Precondition: The executable part is already loaded (see clause 2.3.1)

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_STOP

---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED, optional HALTED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

(optional OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06,
Count=1, Start=001, Data=00)

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.6 Event: Unload corresponding load state
Precondition: The executable part is already loaded (done in 2.)

**Preparation: Set run state to RUNSTATE_RUNNING**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_RESTART

BDUT returns run state RUNSTATE_RUNNING (it may optionally return the intermediate state
‘ready’).

IN   BC 1041 1001 6F 43 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Read run state

BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)


-----

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_HALTED, alternatively the intermediate step
‘Shutting Down (05h)’

IN   BC 1041 1001 65 4F D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.7 Event: Device restart and executable part loaded (Power Up)
**Preparation: Load application object (executable part)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_START

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

------------------------------------------------------

-----

**Note: the underneath test preparation until the next dotted line is specific to a certain system profile and**
might have to be adapted for other system profiles to ensure that at the end of the preparation the load
state machine is in state “loaded” and the run state machine is in the state “running”.

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 03 00 07 00 00 F8 F1 02 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 07 00 00 F8 F1 02 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 03 00 40 A4 01 5C F1 03 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 40 A4 01 5C F1 03 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 03 05 10 01 03 00 42 00 01 00 22 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 42 00 01 00 22 03 80 00 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 57 D7 03 05 10 01 03 00 43 00 01 00 33 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 43 00 01 00 33 03 80 00 )

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 03 05 10 01 03 00 44 00 72 00 FF 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 44 00 72 00 FF 03 80 00 )

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 5B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )


-----

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5F D7 03 05 10 01 03 02 41 34 00 00 C5 FF 12 11
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 02 41 34 00 00 C5 FF 12 11 )

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 03 05 10 01 03 04 40 B7 03 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 04 40 B7 03 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 63 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)

Send to application program object a LOAD_EVENT_COMPLETE

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 03 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)

OUT  BC 1001 AFFE 66 67 D6 03 05 10 01 01 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 E6 :T-Ack(Seq=9)

Send to application program object a RUNSTATE_RESTART

IN   BC 1041 1001 6F 6B D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

IN   B0 1001 AFFE 60 EA :T-Ack(Seq=A)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

------------------------------------------------
Actual start of test

**Preparation: Do reset of device**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

---> Acceptance: Connection breaks down, run state may intermediately return RUNSTATE_HALTED
or RUNSTATE_READY or may immediately return the run state RUNSTATE_RUNNING. The test
sequence in italics is thus optional.

_Reconnect to BDUT_


-----

_IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)_

_Read run state_

_BDUT may return the intermediate run state RUNSTATE_HALTED and/or RUNSTATE_READY_

_IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1,_
_Start=001)_

_OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)_

_OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,_
_Start=001, Data=00 )_

_And/or_

_OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,_
_Start=001, Data=02 )_

_IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)_

_In case of an intermediate RUNSTATE_HALTED and/or RUNSTATE_READY, observe waiting period to_
_ensure that application has started._

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.3.8 Event: Device restart and executable part unloaded (Power Up)
Not applicable, marked as such in AN080.

##### 2.4 Tests with initial state RUNSTATE_READY

###### 2.4.1 General
If run-conditions are immediately fulfilled and the executable part is started automatically, it may be
possible that the BDUT never returns the intermediate run state ‘ready’. In that case the underneath
tests can be skipped.

###### 2.4.2 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION
Precondition: The executable part is already loaded

**Preparation: Set run state to RUNSTATE_READY**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

---> Acceptance: Connection breaks down, run state is RUNSTATE_READY

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=01.00.001)


-----

Read run state

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

First check if BDUT ignores invalid run state event

---> Acceptance: BDUT returns run state RUNSTATE_READY

IN   BC 1041 1001 6F 47 D7 03 06 10 01 FF 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=FF 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Now send to run state object a RUNCONTROL_NO_OPERATION

---> Acceptance: BDUT returns run state RUNSTATE_READY

IN   BC 1041 1001 6F 4B D7 03 06 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.3 Event: Restart and executable part loaded
Precondition: The executable part is already loaded (done in 2.)

**Preparation: Set run state to RUNSTATE_READY**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

---> Acceptance: Connection breaks down, run state is RUNSTATE_READY

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )


-----

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_RESTART

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 6F 47 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Here we wait a few seconds to be sure that the application has started.

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_RUNNING

IN   BC 1041 1001 65 4B D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.4 Event: Restart and executable part unloaded
Not applicable (if application is unloaded and a restart is sent to the BDUT, the BDUT can acc. AN 080
never be set to the ready state. The case where the initial state is ready for an unloaded application can
never occur).

###### 2.4.5 Event: Stop run state machine
**Preparation: Set run state to RUNSTATE_READY**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

---> Acceptance: Connection breaks down, run state is RUNSTATE_READY

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_STOP


-----

---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.6 Event: Unload to corresponding load state
**Preparation: Set run state to RUNSTATE_READY**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

---> Acceptance: Connection breaks down, run state is RUNSTATE_READY

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Read run state

---> Acceptance: BDUT returns run state RUNSTATE_HALTED

IN   BC 1041 1001 65 4B D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT


-----

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.7 Event: Device restart and executable part loaded (Power Up)
Precondition: The executable part is already loaded

**Preparation: Load application object (executable part)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_START

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 03 00 07 00 00 F8 F1 02 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 07 00 00 F8 F1 02 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 03 00 40 A4 01 5C F1 03 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 40 A4 01 5C F1 03 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 03 05 10 01 03 00 42 00 01 00 22 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 42 00 01 00 22 03 80 00 )


-----

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 57 D7 03 05 10 01 03 00 43 00 01 00 33 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 43 00 01 00 33 03 80 00 )

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 03 05 10 01 03 00 44 00 72 00 FF 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 44 00 72 00 FF 03 80 00 )

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 5B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5F D7 03 05 10 01 03 02 41 34 00 00 C5 FF 12 11
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 02 41 34 00 00 C5 FF 12 11 )

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 03 05 10 01 03 04 40 B7 03 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 04 40 B7 03 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 63 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)

Send to application program object a LOAD_EVENT_COMPLETE

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 03 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)


-----

OUT  BC 1001 AFFE 66 67 D6 03 05 10 01 01 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 E6 :T-Ack(Seq=9)

Send to application program object a RUNSTATE_RESTART

IN   BC 1041 1001 6F 6B D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

IN   B0 1001 AFFE 60 EA :T-Ack(Seq=A)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

**Start of actual test: Set run state to RUNSTATE_READY**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send a reset to BDUT

IN   BC AFFE 1001 61 43 80 :Restart()

**---> Acceptance: Connection breaks down, run state is RUNSTATE_READY**

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_READY

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send a reset to BDUT

IN   BC AFFE 1001 61 47 80 :Restart()

**---> Acceptance: Connection breaks down, run state is RUNSTATE_READY**

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

BDUT returns run state RUNSTATE_READY (intermediate state)

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Observe a short wait time to ensure that the application has started.

Read run state

**---> Acceptance: BDUT returns run state RUNSTATE_RUNNING**

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)


-----

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.4.8 Event: Device restart and executable part unloaded (Power Up)
Not applicable, marked as such in AN080.

##### 2.5 Tests with initial state RUNSTATE_TERMINATED
**Preparation: Load application object (executable part)**

###### 2.5.1 Event: Invalid RUNCONTROL and RUNCONTROL_NO_OPERATION
Precondition: The executable part is already loaded

**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 43 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

First check if BDUT ignores invalid run state event

**---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED**

IN   BC 1041 1001 6F 47 D7 03 06 10 01 FF 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=FF 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Now send to run state object a RUNCONTROL_NO_OPERATION

**---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED**

IN   BC 1041 1001 6F 4B D7 03 06 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=00 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT


-----

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.2 Event: RUNCONTROL_RESTART ( executable part loaded)
Precondition: The executable part is already loaded (done)

**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 43 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_RESTART

**---> Acceptance: BDUT returns run state RUNSTATE_RUNNING (it may return the intermediate state**
‘ready’).

IN   BC 1041 1001 6F 47 D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.3 Event: RUNCONTROL_RESTART (executable part unloaded)
**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)


-----

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to run state object a RUNCONTROL_RESTART

**---> Acceptance: BDUT returns run state RUNSTATE_HALTED**

IN   BC 1041 1001 6F 4B D7 03 06 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=06, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.4 Event: RUNCONTROL_STOP
**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 43 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to run state object a RUNCONTROL_STOP

**---> Acceptance: BDUT returns run state RUNSTATE_TERMINATED**

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.5 Event: Unload to corresponding load state
**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED


-----

IN   BC 1041 1001 6F 43 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Read run state

**---> Acceptance: BDUT returns run state RUNSTATE_HALTED**

IN   BC 1041 1001 65 4B D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.6 Event: Device restart and executable part loaded (Power Up)
**Preparation: Load application object (executable part)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_START

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )


-----

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

----------------------------------------------
**Note: the underneath test preparation until the next dotted line is specific to a certain system profile and**
might have to be adapted for other system profiles to ensure that at the end of the preparation the load
state machine is in state “loaded” and the run state machine is in the state “loaded”.

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 03 00 07 00 00 F8 F1 02 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 07 00 00 F8 F1 02 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 03 00 40 A4 01 5C F1 03 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 40 A4 01 5C F1 03 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 03 05 10 01 03 00 42 00 01 00 22 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 42 00 01 00 22 03 80 00 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 57 D7 03 05 10 01 03 00 43 00 01 00 33 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 43 00 01 00 33 03 80 00 )

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 03 05 10 01 03 00 44 00 72 00 FF 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 44 00 72 00 FF 03 80 00 )

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)


-----

OUT  BC 1001 AFFE 66 5B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5F D7 03 05 10 01 03 02 41 34 00 00 C5 FF 12 11
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 02 41 34 00 00 C5 FF 12 11 )

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 03 05 10 01 03 04 40 B7 03 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 04 40 B7 03 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 63 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)

Send to application program object a LOAD_EVENT_COMPLETE

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 03 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)

OUT  BC 1001 AFFE 66 67 D6 03 05 10 01 01 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 E6 :T-Ack(Seq=9)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

---------------------------------------------------
Start of actual test

Precondition: The executable part is already loaded

**Preparation: Set run state to RUNSTATE_TERMINATED**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 43 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )


-----

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send a reset to BDUT

IN   BC AFFE 1001 61 47 80 :Restart()

**---> Acceptance: Connection breaks down, run state may intermediately return RUNSTATE_HALTED**
and/or RUNSTATE_READY or may immediately return the run state RUNSTATE_RUNNING. The test
sequence in italics is thus optional.

_Reconnect to BDUT_

_IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)_

_Read run state_

_BDUT returns run state RUNSTATE_HALTED and/or RUNSTATE_READY (intermediate state)_

_IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1,_
_Start=001)_

_OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)_

_OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,_
_Start=001, Data=00 )_

_And/or_

_OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 02 :PropertyValueResponse(Obj=03, Prop=06, Count=1,_
_Start=001, Data=02 )_

_IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)_

_In case of an intermediate RUNSTATE_HALTED and/or RUNSTATE_Ready, observe a wait time to_
_ensure that the application has started._

Read run state

**---> Acceptance: BDUT returns run state RUNSTATE_RUNNING**

IN   BC 1041 1001 65 47 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 01 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

###### 2.5.7 Event: Device restart and executable part not loaded (Power Up)
**Preparation: Unload test object (Application)**

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)


-----

Send to run state object a RUNCONTROL_STOP

BDUT returns run state RUNSTATE_TERMINATED

IN   BC 1041 1001 6F 47 D7 03 06 10 01 02 00 00 00 00 00 00 00 00 00 :PropertyValueWrite(Obj=03,
Prop=06, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)

OUT  BC 1001 AFFE 66 47 D6 03 06 10 01 03 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=03 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send a reset to BDUT

IN   BC AFFE 1001 61 4B 80 :Restart()

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

T-ACK is optional. It is depending on the device architecture.

**---> Acceptance: Connection breaks down, load state remains UNLOADED**

Reconnect to BDUT

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Read run state

**---> Acceptance: BDUT returns run state RUNSTATE_HALTED**

IN   BC 1041 1001 65 43 D5 03 06 10 01 :PropertyValueRead(Obj=03, Prop=06, Count=1, Start=001)

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 06 10 01 00 :PropertyValueResponse(Obj=03, Prop=06, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect

Restore device (Load application object)

IN   B0 AFFE 1001 60 80 :T-Connect(Addr=1001)

Send to application program object a LOAD_EVENT_UNLOAD

BDUT returns load state LOAD_STATE_UNLOADED

IN   BC AFFE 1001 6F 43 D7 03 05 10 01 04 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=04 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C2 :T-Ack(Seq=0)

OUT  BC 1001 AFFE 66 43 D6 03 05 10 01 00 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=00 )

IN   B0 AFFE 1001 60 C2 :T-Ack(Seq=0)

Send to application program object a LOAD_EVENT_START

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 47 D7 03 05 10 01 01 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=01 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 C6 :T-Ack(Seq=1)


-----

OUT  BC 1001 AFFE 66 47 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 C6 :T-Ack(Seq=1)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4B D7 03 05 10 01 03 00 07 00 00 F8 F1 02 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 07 00 00 F8 F1 02 00 00 )

OUT  B0 1001 AFFE 60 CA :T-Ack(Seq=2)

OUT  BC 1001 AFFE 66 4B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CA :T-Ack(Seq=2)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 4F D7 03 05 10 01 03 00 40 A4 01 5C F1 03 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 40 A4 01 5C F1 03 00 00 )

OUT  B0 1001 AFFE 60 CE :T-Ack(Seq=3)

OUT  BC 1001 AFFE 66 4F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 CE :T-Ack(Seq=3)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 53 D7 03 05 10 01 03 00 42 00 01 00 22 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 42 00 01 00 22 03 80 00 )

OUT  B0 1001 AFFE 60 D2 :T-Ack(Seq=4)

OUT  BC 1001 AFFE 66 53 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D2 :T-Ack(Seq=4)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 57 D7 03 05 10 01 03 00 43 00 01 00 33 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 43 00 01 00 33 03 80 00 )

OUT  B0 1001 AFFE 60 D6 :T-Ack(Seq=5)

OUT  BC 1001 AFFE 66 57 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 D6 :T-Ack(Seq=5)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5B D7 03 05 10 01 03 00 44 00 72 00 FF 03 80 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 00 44 00 72 00 FF 03 80 00 )

OUT  B0 1001 AFFE 60 DA :T-Ack(Seq=6)

OUT  BC 1001 AFFE 66 5B D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )


-----

IN   B0 AFFE 1001 60 DA :T-Ack(Seq=6)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 5F D7 03 05 10 01 03 02 41 34 00 00 C5 FF 12 11
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 02 41 34 00 00 C5 FF 12 11 )

OUT  B0 1001 AFFE 60 DE :T-Ack(Seq=7)

OUT  BC 1001 AFFE 66 5F D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 DE :T-Ack(Seq=7)

Send to application program object a LOAD_EVENT_SEGMENT

BDUT returns load state LOAD_STATE_LOADING

IN   BC AFFE 1001 6F 63 D7 03 05 10 01 03 04 40 B7 03 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=03 04 40 B7 03 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E2 :T-Ack(Seq=8)

OUT  BC 1001 AFFE 66 63 D6 03 05 10 01 02 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=02 )

IN   B0 AFFE 1001 60 E2 :T-Ack(Seq=8)

Send to application program object a LOAD_EVENT_COMPLETE

BDUT returns load state LOAD_STATE_LOADED

IN   BC AFFE 1001 6F 67 D7 03 05 10 01 02 00 00 00 00 00 00 00 00 00
:PropertyValueWrite(Obj=03, Prop=05, Count=1, Start=001, Data=02 00 00 00 00 00 00 00 00 00 )

OUT  B0 1001 AFFE 60 E6 :T-Ack(Seq=9)

OUT  BC 1001 AFFE 66 67 D6 03 05 10 01 01 :PropertyValueResponse(Obj=03, Prop=05, Count=1,
Start=001, Data=01 )

IN   B0 AFFE 1001 60 E6 :T-Ack(Seq=9)

Close connection with BDUT

IN   B0 AFFE 1001 60 81 :T-Disconnect


-----

