# System Conformance Testing

## KNX Network, Transport, Application (Interface) Layer, Management Service Testing

 Network Layer Tests

Summary

This document contains the Network Layer Test specifications.

Version 01.01.04 is an Approved Standard Version document.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.13.03 Approved Standard

1.1 2009.02 Preparation for publication in V2.0 of the KNX Specifications

01.01.01 2013.10.24 Editorial updates for the publication of KNX Specifications 2.1.

01.01.02 2019.06.07 Removal of RC=7 as possibility to send by end devices following AN189 §
2.2.1.1.1 State Machine of Network Layer for normal devices

01.01.03 2019.07.15 Readying for Release for Voting – no content change since v 1.1.2

01.01.04 2019.09.17 Resolution of (editorial) comments from Release for Voting – publication as
Approved Standard

Filename: 08_03_03 System Conformance Testing - NL Tests v01.01.04_AS.docx
Version: 01.01.04
Status: Approved Standard
Savedate: 2021.05.28
Number of pages: 9

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.13.03|Approved Standard|
|1.1|2009.02|Preparation for publication in V2.0 of the KNX Specifications|
|01.01.01|2013.10.24|Editorial updates for the publication of KNX Specifications 2.1.|
|01.01.02|2019.06.07|Removal of RC=7 as possibility to send by end devices following AN189 §<br>2.2.1.1.1 State Machine of Network Layer for normal devices|
|01.01.03|2019.07.15|Readying for Release for Voting – no content change since v 1.1.2|
|01.01.04|2019.09.17|Resolution of (editorial) comments from Release for Voting – publication as<br>Approved Standard|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4

 2 Test Set-up .............................................................................................................................. 4 2.1 Hardware ................................................................................................................ 4 2.2 Software used during Tests .................................................................................... 4 2.2.1 Used KNX Software ............................................................................... 4 2.2.2 Used Application Software ..................................................................... 4 2.2.3 Implementation of used Software in the Test Set-up .............................. 5

 3 Test case 1: Black Box test ..................................................................................................... 5 3.1 Group oriented communication ............................................................................. 5 3.2 Device oriented communication – connected ........................................................ 6 3.3 Device oriented communication – connectionless ................................................ 7 3.4 Broadcast communication ..................................................................................... 8

 4 Test case 2: Bus/PEI test ........................................................................................................ 9

 5 Test case 3: Testing of routing algorithm in routers ........................................................... 9


-----

### 1 Introduction

The main functionality of the network layer is

- in the sending direction the setting of the routing counter and

- in the receiving direction the splitting of the service L_Data.ind/.con to N_Data_Individual.ind/.con,
N_Data_Group.ind/.con and N_Data_broadcast.ind/.con respectively.

Black box tests use only the bus connection to the BDUT, Bus/PEI tests use the bus access and the PEI
access to the BDUT.

### 2 Test Set-up

#### 2.1 Hardware
The test set-up is depicted in the underneath figure and consists of:

- one Bus Device Under Test (BDUT)

- the KNX Interworking Test Tool, hereafter called EITT running on a PC, which is connected to the
bus by an EDI (KNX data interface)

- when testing TP1 devices, a power supply module and choke will have to be added to the underneath
test set-up

- when testing PL110 devices an additional artificial network 50 Ω / 50 µH + 5 Ω according CISPR 162-1:2014 and CISPR-2-1:2017 (Clause 7.3.2) shall be installed next to BDUT.

**PC**

EDI + BDUT

BCU

**Figure 1: Test Set-up in case of a black-box test**

#### 2.2 Software used during Tests

##### 2.2.1 Used KNX Software
During testing the only software tool used is the KNX Interworking Test Tool (EITT).

##### 2.2.2 Used Application Software
Necessary application software is described with the tests.


-----

##### 2.2.3 Implementation of used Software in the Test Set-up
By means of EITT (in send mode) the BDUT is stimulated. By means of EITT (in receive mode) the
reaction of the BDUT can be observed. In the latter mode it is moreover possible to check the time delay
between the stimulus and the reply telegram, if the latter is actually transmitted.

###### 2.2.3.1 Parameters to be set in the BDUT
Before carrying out the various tests or test steps, several values have to be set in the BDUT by means of
EITT. These relate amongst others to:

- the physical address of the BDUT (in the executable test suites in this document physical address
1001h is used by default).

- the EDI shall have the following physical address: 10.15.254 (AFFEh) in case of twisted pair and
7.15.254 (7FFEh) when testing power line devices.

- when testing Powerline devices, the Domain Address 254 (FEh) shall be loaded into the BDUT and
the EDI.

- specific data (e.g. the value of the routing counter, if possible), which has to be downloaded into a
fixed memory area of the BDUT (see also PIXIT proforma as supplied by the manufacturer).

### 3 Test case 1: Black Box test

#### 3.1 Group oriented communication
A Group object (GO) shall be present in the BDUT that is read- and transmit enabled. This GO shall be
associated to a group address.

Send telegrams with Routing Count 6, 5, 4, 3, 2, 1, 0 to the BDUT.

Acceptance: The BDUT shall answer with Routing Count 6 in all cases.

(1)  IN BC 10.15.254 02/0/001 81 00 00 :GroupValueRead(Grp=02/0/001)

(2)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(3)  IN BC 10.15.254 02/0/001 91 00 00 :GroupValueRead(Grp=02/0/001)

(4)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(5)  IN BC 10.15.254 02/0/001 A1 00 00 :GroupValueRead(Grp=02/0/001)

(6)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(7)  IN BC 10.15.254 02/0/001 B1 00 00 :GroupValueRead(Grp=02/0/001)

(8)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(9)  IN BC 10.15.254 02/0/001 C1 00 00 :GroupValueRead(Grp=02/0/001)

(10)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(11)  IN BC 10.15.254 02/0/001 D1 00 00 :GroupValueRead(Grp=02/0/001)

(12)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

(13)  IN BC 10.15.254 02/0/001 E1 00 00 :GroupValueRead(Grp=02/0/001)

(14)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)

Test Group Communication Routing Count 7.

(15)  IN BC 10.15.254 02/0/001 F1 00 00 :GroupValueRead(Grp=02/0/001)

Acceptance: The BDUT shall answer with Routing Count 6.

(16)  OUT BC 01.01.001 02/0/001 E2 00 40 00 :GroupValueResponse(Grp=02/0/001, 00)


-----

#### 3.2 Device oriented communication – connected
Send telegrams with Routing Count 6, 5, 4, 3, 2, 1, 0 to the BDUT.

Acceptance: The BDUT shall answer with Routing Count 6 in all cases.

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 61 43 00 :DeviceDescriptorRead(DescType=00)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(7)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(8)  IN BC 10.15.254 01.01.001 51 43 00 :DeviceDescriptorRead(DescType=00)

(9)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(10)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(11)  IN B0 10.15.254 01.01.001 50 C2 :T-Ack(Seq=0)

(12)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(13)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  IN BC 10.15.254 01.01.001 41 43 00 :DeviceDescriptorRead(DescType=00)

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(16)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(17)  IN B0 10.15.254 01.01.001 40 C2 :T-Ack(Seq=0)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(19)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(20)  IN BC 10.15.254 01.01.001 31 43 00 :DeviceDescriptorRead(DescType=00)

(21)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(22)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(23)  IN B0 10.15.254 01.01.001 30 C2 :T-Ack(Seq=0)

(24)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(25)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(26)  IN BC 10.15.254 01.01.001 21 43 00 :DeviceDescriptorRead(DescType=00)

(27)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(28)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(29)  IN B0 10.15.254 01.01.001 20 C2 :T-Ack(Seq=0)

(30)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(31)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

(32)  IN BC 10.15.254 01.01.001 11 43 00 :DeviceDescriptorRead(DescType=00)

(33)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(34)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(35)  IN B0 10.15.254 01.01.001 10 C2 :T-Ack(Seq=0)

(36)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(37)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(38)  IN BC 10.15.254 01.01.001 01 43 00 :DeviceDescriptorRead(DescType=00)

(39)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(40)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(41)  IN B0 10.15.254 01.01.001 00 C2 :T-Ack(Seq=0)

(42)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Routing count 7

(43)  IN BC 10.15.254 01.01.001 70 80 :T-Connect(Addr=01.01.001)

(44)  IN BC 10.15.254 01.01.001 71 43 00 :DeviceDescriptorRead(DescType=00)

Acceptance: The BDUT shall answer with Routing Count 6.

(45)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(46)  OUT BC 01.01.001 10.15.254 63 43 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? )

(47)  IN B0 10.15.254 01.01.001 70 C2 :T-Ack(Seq=0)

(48)  IN BC 10.15.254 01.01.001 70 81 :T-Disconnect

#### 3.3 Device oriented communication – connectionless
Note: If the BDUT does not support the service PropertyValueRead the test shall be conducted with any
other device oriented connectionless service.

Send telegrams with Routing Count 6, 5, 4, 3, 2, 1, 0 to the BDUT.

Acceptance: The BDUT shall answer with Routing Count 6 in all cases.

(1)  IN BC 10.15.254 01.01.001 65 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01, Count=1,
Start=001)

(2)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(3)  IN BC 10.15.254 01.01.001 55 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01, Count=1,
Start=001)

(4)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(5)  IN BC 10.15.254 01.01.001 45 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01, Count=1,
Start=001)

(6)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(7)  IN BC 10.15.254 01.01.001 35 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01, Count=1,
Start=001)


-----

(8)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(9)  IN BC 10.15.254 01.01.001 25 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01, Count=1,
Start=001)

(10)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(11)  IN BC 10.15.254 01.01.001 15 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01,
Count=1, Start=001)

(12)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

(13)  IN BC 10.15.254 01.01.001 05 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01,
Count=1, Start=001)

(14)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

Routing count 7

(15)  IN BC 10.15.254 01.01.001 75 03 D5 00 01 10 01 :PropertyValueRead(Obj=00, Prop=01,
Count=1, Start=001)

Acceptance: The BDUT shall answer with Routing Count 6.

(16)  OUT BC 01.01.001 10.15.254 67 03 D6 00 01 10 01 00 00 :PropertyValueResponse(Obj=00,
Prop=01, Count=1, Start=001, Data=00 00 )

#### 3.4 Broadcast communication
Send telegrams with Routing Count 6, 5, 4, 3, 2, 1, 0 to the BDUT.

Acceptance: The BDUT shall answer with Routing Count 6 in all cases.

(1)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(2)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(3)  IN BC 10.15.254 00/0/000 D1 01 00 :IndAddrRead()

(4)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(5)  IN BC 10.15.254 00/0/000 C1 01 00 :IndAddrRead()

(6)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(7)  IN BC 10.15.254 00/0/000 B1 01 00 :IndAddrRead()

(8)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(9)  IN BC 10.15.254 00/0/000 A1 01 00 :IndAddrRead()

(10)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(11)  IN BC 10.15.254 00/0/000 91 01 00 :IndAddrRead()

(12)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

(13)  IN BC 10.15.254 00/0/000 81 01 00 :IndAddrRead()

(14)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Routing count 7

(15)  IN BC 10.15.254 00/0/000 F1 01 00 :IndAddrRead()

Acceptance: The BDUT shall answer with Routing Count 6.


-----

(16)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

### 4 Test case 2: Bus/PEI test

See Volume 8/6/3

### 5 Test case 3: Testing of routing algorithm in routers

See AN191


-----

