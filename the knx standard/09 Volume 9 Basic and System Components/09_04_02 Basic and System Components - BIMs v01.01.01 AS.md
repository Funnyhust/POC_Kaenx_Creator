## Basic and System Components/Devices – Minimum Requirements – Standardised solutions - Tests KNX System Conformance Testing

### BCUs and BIMs

 BIMs

Summary

This document contains the requirements for standardised Bus Interface
Modules.

This document is part of the KNX Specifications v2.1.

Version 01.01.01 is a KNX Approved Standard.


# 9


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.12.19 Approved Standard

1.1 2009.06 Readying document for publication as part of V2.0 of KNX standard –
removal of BIM M113, TP0 and PL132 BIM – removal SnPb requirements
for BIM M111 – adding of BIM M132

01.01.01 2013.10.23 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 09_04_02 Basic and System Components - BIMs v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.23
Number of pages: 14

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.12.19|Approved Standard|
|1.1|2009.06|Readying document for publication as part of V2.0 of KNX standard –<br>removal of BIM M113, TP0 and PL132 BIM – removal SnPb requirements<br>for BIM M111 – adding of BIM M132|
|01.01.01|2013.10.23|Editorial updates for the publication of KNX Specifications 2.1.|


-----

##### Contents

###### 1 Preface ..................................................................................................................................... 4

 2 Introduction ............................................................................................................................ 4

 3 BIM M 111 (TP1) ................................................................................................................... 5 3.1 Communication Requirements ....................................................................................... 6 3.2 Electrical Safety .............................................................................................................. 7 3.3 Environmental conditions ............................................................................................... 7 3.4 EMC ................................................................................................................................ 8 3.5 Mechanical, Dimensions, Constructional Features ........................................................ 8 3.6 Electrical Features .......................................................................................................... 8 3.7 Testing ............................................................................................................................ 8 3.8 Functional Safety ............................................................................................................ 9 3.9 Interfaces, Connectors .................................................................................................... 9 3.10 Marking ........................................................................................................................... 9 3.11 Installation ...................................................................................................................... 9

 4 BIM M 13x (TP1) ................................................................................................................. 10 4.1 Communication Requirements ..................................................................................... 10 4.2 Electrical Safety ............................................................................................................ 12 4.3 Environmental conditions ............................................................................................. 12 4.4 EMC .............................................................................................................................. 12 4.5 Mechanical, Dimensions, Constructional Features ...................................................... 12 4.6 Electrical Features ........................................................................................................ 13 4.7 Testing .......................................................................................................................... 13 4.8 Functional Safety .......................................................................................................... 13 4.9 Interfaces, Connectors .................................................................................................. 13 4.10 Marking ......................................................................................................................... 14 4.11 Installation .................................................................................................................... 14


-----

#### 1 Preface
In the light of the multi-vendor philosophy within KNX, KNX has opted for a standardisation of a
number of crucial basic and system components/devices providing standardised interfaces not only to
manufacturers but also installers and users. However, it is still possible to design non-standardised
solutions.

In the following clauses, the underneath connotation is used:

**No.** **Abbreviation** **Meaning**

1 M Minimum requirements for certification – the ‘M’ requirements are
only a subset of the standardised/optional requirements respectively
recommendations – devices not complying to at least these
requirements cannot be certified

2 0 Optional requirement - when implemented, the KNX requirements
shall be met

3 F Recommendations (free to implement)

4 S Feature of standardised solutions

5 VI Visual inspection (test guidelines)

If the names of basic and system components/devices have been standardised respectively exclusively
assigned to this type of products (e.g. BCU), non-standardised versions may not bear this same name. For
the example given above, the system device would have to be named BAU or Bus Access Unit.

Note: For commercially available basic and system components/devices, consult the KNX Directory of
KNX registered/certified solutions.

#### 2 Introduction
The name BIM is reserved for standardised bus access units without housing and intended for piggyback
use to be directly mounted on PC-boards. The term BIM shall not be used to denote bus access units not
complying with the underneath BIM requirements.

|No.|Abbreviation|Meaning|
|---|---|---|
|1|M|Minimum requirements for certification – the ‘M’ requirements are<br>only a subset of the standardised/optional requirements respectively<br>recommendations – devices not complying to at least these<br>requirements cannot be certified|
|2|0|Optional requirement - when implemented, the KNX requirements<br>shall be met|
|3|F|Recommendations (free to implement)|
|4|S|Feature of standardised solutions|
|5|VI|Visual inspection (test guidelines)|


-----

#### 3 BIM M 111 (TP1)
A BIM 111 is especially designed as small module for piggyback use and can be fitted directly into PCboards.

BIM111

CONTROLLER

0 PA0 b5

PA1 a6
PA2 b4
PA3 a5

Port A PA4 b3

PA5 a4

TRANSFORMER- 7 PPAA76 ba32

[M][O][D][U][L][E] +5V Programming

47k BUTTON

+ Port B [2] LED c2

e1 7 c6 +5V

B U S

e2  - PLMA PPLLMMAB b1

PLMB d6

TxD d3

PSPEiignIns-a1l-) CRCRxLTTDKSS dcdc3454

PC7 b6IE

P

TYPE

Port D 4 c5 +5V

RType

47k5

3)

+5V VCC d2

VDD

+20V d1

GND c1

+5V +5V

V T
5 E
3C SE

R **Note:** **Use** **the** **C35V-pin** **only** **for** **extension** **of** **"Bus**

a2 a1 **Buffer** **Time".** **Do** **not** **draw** **current!** **Otherwise**

2) **the** **quality** **of** **bus** **transmission** **would** **be**

**affected.**

**Figure 1: BIM M 111 TP 1 block diagram**

1) For detailed description see "PEI"-Table.

2) Additional Capacitance (Vc=35V) for extended "Bus Buffer Time", e.g.100μF.

3) Additional Capacitance (Vc=5V) for extended "Bus Buffer Time"., e.g. 470μF.

|Col1|P A 0 P A 1 P A 2 P A 3|
|---|---|
||<br>P A 4 <br>|
||<br>   <br>P A 5|
||P A 6 <br>   <br>|
||<br>   <br>P A 7|
|+ 5 V|+ 5 V|
|||
|||
|||
||R x D <br>   <br>|
||<br>C L K <br>|
||<br>R T S <br>|
||<br>C T S <br>|
||<br>P C 7|
|||


-----

##### 3.1 Communication Requirements

|No.|Requirements|M|
|---|---|---|
|1|BIM 111 shall offer the same features (including identical memory map) as the TP1<br>BCU1 (see Volume 9/4/1), except for the following:<br>- <br>only PEI signals shall be available (no true PEI connector)<br>- <br>no shift register<br>- <br>no housing and therefore no EMC related shielding<br>- <br>no programming button<br>- <br>access to PLMA and Port A of microprocessor possible<br>- <br>support of maximum 14 Group Objects<br>- <br>reset output available|M/S|
|2|The BIM 111 shall comply to the BCU1 profile in Volume 6|M/S|
|3|Pin Assignment and correspondence with PEI: see underneath table and figure|M/S|

|Col1|Pin<br>Mnemonics|Power<br>Supply|Serial<br>Interface<br>async./<br>sync.|I-Ports<br>or A/D-<br>Ports|Digital I/O-<br>Ports|Corres-<br>ponding<br>PEI pin|Remarks|
|---|---|---|---|---|---|---|---|
|a1|RESET||||_RESET||In-/Output|
|a2|C35V||||||Buffer Capacitor|
|a3|PA7||||PA7||Digital Input/Output|
|a4|PA5||||PA5||Digital Input/Output|
|a5|PA3||||PA3||Digital Input/Output|
|a6|PA1||||PA1||Digital Input/Output|
|b1|PLMA||||PLMB||Pulse-Length-Mod.|
|b2|PA6||||PA6||Digital Input/Output|
|b3|PA4||||PA4||Digital Input/Output|
|b4|PA2||||PA2||Digital input/output|
|b5|PA0||||PA0||Digital Input/Output|
|b6|PC7||||PC7|6a|Dig. Outp. (In./Outp. when PEI-<br>Type17)|
|c1|GND|Ground||||1/10||
|c2|BUTTON||||PB2||Digital Input|
|c3|CLK||SCLK|PD6|PC4|3|Clock•→|
|c4|CTS|||PD3|PC6|7|Clear to Send•←|
|c5|TYPE|||PD4||6|PEI-Type|
|c6|LED||||PB7||Digital Output|


-----

|Col1|Pin<br>Mnemonics|Power<br>Supply|Serial<br>Interface<br>async./<br>sync.|I-Ports<br>or A/D-<br>Ports|Digital I/O-<br>Ports|Corres-<br>ponding<br>PEI pin|Remarks|
|---|---|---|---|---|---|---|---|
|d1|VDD|Vdd<br>(20V)||||8|2mA Current Limit.|
|d2|VCC|Vcc (5V)||||5||
|d3|TxD||TDO<br>|PD5|PC3|4|Data•→|
|d4|RxD||RDI<br>|PD7|PC2|2|Data•←|
|d5|RTS|||PD2|PC5|9|Request to Send•→|
|d6|PLMB||||PLMB|5a|Pulse-Length-Mod.|
|e1|+ Bus||||||Bus Line|
|e2|- Bus||||||Bus Line|


**Figure 2: Pin assignment and correspondence between BIM 111 pinning and PEI**


d6

d1

e2

e1


b6 a6

b1 a1


Crystal

C[oil]

|c6 b6<br>Micro-<br>Controller<br>c1 b1<br>ystal<br>Transformer<br>Capacitor Capacitor|Col2|Col3|Col4|
|---|---|---|---|
|Transformer<br>Capacitor<br>Capacitor<br><br>ystal<br>Micro-<br>Controller<br>b6<br>b1<br>c1<br>c6||||
|Transformer<br>Capacitor<br>Capacitor<br><br>ystal<br>Micro-<br>Controller<br>b6<br>b1<br>c1<br>c6||||
|Transformer<br>Capacitor<br>Capacitor<br><br>ystal<br>Micro-<br>Controller<br>b6<br>b1<br>c1<br>c6||||
|Transformer<br>Capacitor<br>Capacitor<br><br>ystal<br>Micro-<br>Controller<br>b6<br>b1<br>c1<br>c6||||


**Figure 3: Pin assignment of BIM 111**

##### 3.2 Electrical Safety

**No.** **Requirements** **M**

1 No requirements as such for the component itself. When assembled into devices, the M/S
requirements of Volume 4 Part 1 shall be complied with.

##### 3.3 Environmental conditions

**No.** **Requirements** **M**

1 BIM 111 shall comply with the requirements of Volume 4 Part 1 clause 2.1.2 M/S

|No.|Requirements|M|
|---|---|---|
|1|No requirements as such for the component itself. When assembled into devices, the<br>requirements of Volume 4 Part 1 shall be complied with.|M/S|

|No.|Requirements|M|
|---|---|---|
|1|BIM 111 shall comply with the requirements of Volume 4 Part 1 clause 2.1.2|M/S|


-----

##### 3.4 EMC

**No.** **Requirements**

1 BIM 111 shall comply with the requirements of Volume 4 Part 1 clause 2.3

##### 3.5 Mechanical, Dimensions, Constructional Features
The BIM 111 shall comply to the underneath dimensions and constructional features

**Figure 4: Constructional and mechanical features of BIM111**

##### 3.6 Electrical Features

Characteristics Symbol Min. Max typical Unit Remarks

Operating Voltage VBus 21 30 V

Current bus consumption [I]Bus 12 5 mA

Reset conditions Vcc 4,5 V Reset generated by
transformer-module

BCU-Buffer-Time 50 ms PEI-Load: 50mW

##### 3.7 Testing
The following test shall be carried out to show compliance:

- Communication testing: according Volume 8 System Conformance testing (if applicable)

- Environmental conditions: according Volume 4 Part 3

- EMC: according Volume 4 Part 2

- Mechanical and electrical properties according to this Handbook clause

|No.|Requirements|M|
|---|---|---|
|1|BIM 111 shall comply with the requirements of Volume 4 Part 1 clause 2.3|M/S|

|Characteristics|Symbol|Min.|Max|typical|Unit|Remarks|
|---|---|---|---|---|---|---|
|Operating Voltage|VBus|21|30||V||
|Current bus consumption|IBus||12|5|mA||
|Reset conditions|Vcc|4,5|||V|Reset generated by<br>transformer-module|
|BCU-Buffer-Time||50|||ms|PEI-Load: 50mW|


-----

##### 3.8 Functional Safety
Under Consideration

##### 3.9 Interfaces, Connectors
See Figure 4 for details on length and width of connectors and interfaces.

##### 3.10 Marking
The BIM 111 components can be marked by the manufacturer at his discretion.

##### 3.11 Installation
Not applicable


-----

#### 4 BIM M 13x (TP1)
A BIM 13x is especially designed as small module for piggyback use and can be fitted directly into PCboards.

**Figure 5: BIM M 13x TP 1 block diagram**

##### 4.1 Communication Requirements

|No.|Requirements|M|
|---|---|---|
|1|The BIM 13x shall comply to the System 2 profile in Volume 6|M/S|
|2|Pin Assignment and correspondence with PEI: see underneath table and figure|M/S|


-----

**Figure 6: Pin assignment and correspondence between BIM 13x pinning and PEI**

**Figure 7: Pin assignment of BIM 13x**


-----

##### 4.2 Electrical Safety

**No.** **Requirements**

1 No requirements as such for the component itself. When assembled into devices, the
requirements of Volume 4 Part 1 shall be complied with.

##### 4.3 Environmental conditions

**No.** **Requirements**

1 BIM 13x shall comply with the requirements of Volume 4 Part 1 clause 2.1.2

##### 4.4 EMC

**No.** **Requirements**

1 BIM 13x shall comply with the requirements of Volume 4 Part 1 clause 2.3

##### 4.5 Mechanical, Dimensions, Constructional Features
The BIM 13x shall comply to the underneath dimensions and constructional features

**Figure 8: Constructional and mechanical features of BIM13x**

|No.|Requirements|M|
|---|---|---|
|1|No requirements as such for the component itself. When assembled into devices, the<br>requirements of Volume 4 Part 1 shall be complied with.|M/S|

|No.|Requirements|M|
|---|---|---|
|1|BIM 13x shall comply with the requirements of Volume 4 Part 1 clause 2.1.2|M/S|

|No.|Requirements|M|
|---|---|---|
|1|BIM 13x shall comply with the requirements of Volume 4 Part 1 clause 2.3|M/S|


-----

##### 4.6 Electrical Features

 4.7 Testing
The following test shall be carried out to show compliance:

- Communication testing: according Volume 8 System Conformance testing (if applicable)

- Environmental conditions: according Volume 4 Part 3

- EMC: according Volume 4 Part 2

- Mechanical and electrical properties according to this Handbook clause

##### 4.8 Functional Safety
Under Consideration

##### 4.9 Interfaces, Connectors
See Figure 8 for details on length and width of connectors and interfaces.


-----

##### 4.10 Marking
The BIM 13x components can be marked by the manufacturer at his discretion.

##### 4.11 Installation
Not applicable


-----

