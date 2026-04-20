## KNX System Conformance Testing 8

### Introduction

Summary

This document gives a general introduction to KNX System conformance
testing


-----

###### Document Updates

**Version** **Date** **Modifications**
1.0 2001.06.14 Approved Standard
1.1 2005.05.31 Approved Standard – integration of AN 020 – relevant parts of AN041
1.1 2009.02 Finalisation in preparation for release of 2.0 of KNX Specifications
1.2 RfV 2013.10 Update following recent accreditation audits at test labs – integrated
comments of KonCert meeting
1.2 FV 2014.02 Resolution of comments from the Release for Voting Cycle
01.02.00 2015.04 No comments in final voting – publication as AS
01.03.01 2021.03 Revision to include Conditions for renewed testing of updated certified
stacks – included AN180
01.03.02 2021.03 Extra correction in preparation for the KCG meeting
01.03.03 2021.06 Resolution of comments – Proposal to KCG
01.03.04 2021.09 No comments in Final voting – Publication as Approved Standard

###### 1 General ...................................................................................................................... 3

 2 KNX Test Classes ..................................................................................................... 4
 2.1 Test Class Table ........................................................................................... 4 2.2 Minimum requirements ............................................................................... 4 2.3 Further conventions and definitions with regard to Test Tables ................. 4 2.3.1 Certified Chip set .................................................................................. 4 2.3.2 Use of certified chip set - General ........................................................ 4 2.3.3 Use of certified chip set – Specific case: TP1 ...................................... 5 2.3.4 Use of certified chip set – Specific case: RF ........................................ 5 2.3.5 Layer Tests............................................................................................ 5 2.3.6 Conditions for renewed testing of updated certified stacks .................. 6 2.3.7 Miscellaneous ....................................................................................... 7

 3 Actual Test class tables ............................................................................................ 8
 3.1 Test class BCU ............................................................................................ 8 3.2 Test class BAU ............................................................................................ 9 3.3 KNX-Device .............................................................................................. 10

 4 Needed Volume 8/2/5 retests for modified physical layer implementations ..... 12

Filename: 08_01 System Conformance Testing - Introduction v01.03.04 AS
Version: 01.03.04
Status: Approved Standard
Savedate: 2021.09.07
Number of pages: 13

|Version|Date|Col3|Modifications|Col5|
|---|---|---|---|---|
|1.0|2001.06.14|ApprovedStandard|ApprovedStandard||
|1.1|2005.05.31|Approved Standard – integration of AN 020 – relevant parts of AN041|Approved Standard – integration of AN 020 – relevant parts of AN041|Approved Standard – integration of AN 020 – relevant parts of AN041|
|1.1|2009.02|Finalisation inpreparation for release of 2.0 of KNX Specifications|Finalisation inpreparation for release of 2.0 of KNX Specifications|Finalisation inpreparation for release of 2.0 of KNX Specifications|
|1.2 RfV|2013.10|Update following recent accreditation audits at test labs – integrated<br>comments of KonCert meeting|Update following recent accreditation audits at test labs – integrated<br>comments of KonCert meeting|Update following recent accreditation audits at test labs – integrated<br>comments of KonCert meeting|
|1.2 FV|2014.02|Resolution of comments from the Release forVoting Cycle|Resolution of comments from the Release forVoting Cycle|Resolution of comments from the Release forVoting Cycle|
|01.02.00|2015.04|No comments in final voting –publication as AS|No comments in final voting –publication as AS|No comments in final voting –publication as AS|
|01.03.01|2021.03|Revision to include Conditions for renewed testing of updated certified<br>stacks – included AN180|Revision to include Conditions for renewed testing of updated certified<br>stacks – included AN180|Revision to include Conditions for renewed testing of updated certified<br>stacks – included AN180|
|01.03.02|2021.03|Extra correction inpreparation for the KCG meeting|Extra correction inpreparation for the KCG meeting|Extra correction inpreparation for the KCG meeting|
|01.03.03|2021.06|Resolution of comments – Proposal to KCG|Resolution of comments – Proposal to KCG|Resolution of comments – Proposal to KCG|
|01.03.04|2021.09|No comments in Finalvoting – Publication as ApprovedStandard|No comments in Finalvoting – Publication as ApprovedStandard|No comments in Finalvoting – Publication as ApprovedStandard|


-----

#### 1 General
It is the ultimate goal of KNX Association to ensure that for any system requirement in Volume 3
appropriate test requirements are available in Volume 8.

It is also KNX’ goal that any requirements documented in either volumes giving rise to conflicts
during certification are eliminated by the elaboration of Application Notes.

Therefore in case of conflict between Volume 3 and 8, KNX Certification Department shall be
contacted. If necessary, the KNX Certification Group and/or the KNX System Group can be
contacted. If no agreement between both before-mentioned groups can be reached, the KNX Technical
Board shall take the ultimate decision.


-----

#### 2 KNX Test Classes

##### 2.1 Test Class Table
For certification, KNX devices can be divided according to their construction into several test classes:
for each class another range of tests shall be carried out. This is reflected in the tables in Figure 3 to
Figure 5.

The tables can be used for establishing the depth of the certification tests for any kind of KNX device
(including gateways and interfaces). On the basis of the data supplied in the KNX data sheet for
hardware, KNX and/or the KNX accredited test lab will determine the device test class: the hardware
datasheet is submitted during the registration phase.

##### 2.2 Minimum requirements
This underneath table just names the type of test to be carried out, not the extent of the test as such.
For this, one has to consult the list of minimum requirements for the various KNX profiles (as laid
down in Volume 6 of the KNX Specifications) and the PICS proforma and PIXIT for KNX services as
supplied by the KNX applicant.

##### 2.3 Further conventions and definitions with regard to Test Tables

###### 2.3.1 Certified Chip set
A certified chip set denotes a certified combination of a physical layer implementation and a system
stack (mostly implemented on a controller). A chip set can be certified[1] on the basis of a declaration,
stating that the chip set is derived from an already certified BIM, BAU or BCU.

If certified BIMs, BAUs or BCUs using the chip set are not yet available, the manufacturer shall
present his chip set to KNX in a testable form, so that compliance to the requirements as regards
physical layer[2] and system software can be checked.

In order to be able to waive the physical layer tests, when this chip set is used in products either by the
original manufacturer and/or OEM manufacturers, the original manufacturer shall submit to KNX at
the time of certification of the chip set the following declaration (underneath called “chip set
declaration”)

- a circuit diagram of the certified physical layer implementation in combination with the processor

- a list of extra components and their tolerances to be used together with the certified physical layer
implementation and controller.

###### 2.3.2 Use of certified chip set - General
Physical layer tests can only be waived when using a certified chip set, if compliance to the chip set
declaration of the original manufacturer can be declared in the KNX HW data sheet[3] by the
manufacturer using this certified chip set in his products.

The cross in the underneath test class table (Figure 3 to Figure 5) denotes full testing, while @ denotes
that the confirmation of compliance to the chip set declaration of the original manufacturer (in the
KNX datasheet) suffices for certification.

1 certification does not imply that the chip set is commercially available on the OEM market
2 compliance to hardware requirements related to the physical layer (e.g. bus power consumption) are declared in
the KNX data sheet for hardware.
3 to be submitted at the time of registration of the product


-----

###### 2.3.3 Use of certified chip set – Specific case: TP1
In the case of TP1, the use of a certified system stack allows to waive the physical layer collision
tests/coding/decoding, while the use of a certified transceiver allows to waive all physical layer tests
but collision/coding/decoding. In order to be able to waive any of the tests, the condition as stated
under 2.3.2 shall be fulfilled.

If a certified physical layer is replaced by another certified physical layer, a declaration of the
manufacturer is sufficient to prove compliance of this new combination.

###### 2.3.4 Use of certified chip set – Specific case: RF
In the case of RF, reference is made to clause 4.

###### 2.3.5 Layer Tests
The following type of layer tests are defined:

- Black box testing of layer features of the implemented stack via the bus interface;

- Testing of the declared and supported External Message Interface of the implemented layers;

- Testing of the declared and supported Internal Layer Interfaces between the implemented layers. If
these are however the identical or converted copy of the messages provided at the External
Message interface, the tests of the Internal Layer Interfaces can be waived.

The following figure shows the various cases of layer tests and the required test depth.

###### 3 Software to test

Layer 1 Layer 2 Layer 3 ... Layer 7 Emulator

Bus to test

all software
interfaces 3

PC

###### 2

BCU, CU

Bus BAU with Communi-cation 2

PEI Unit

PEI

###### 1

Device 1
e. g.
Bus Bin Out = Interface to test

Effort, test depth

**Figure 1: Different cases for layer testing**

The following possibilities of declaration for Internal Layer and External Message Interfaces can be
distinguished:

|3<br>Software to test<br>Layer 1 Layer 2 Layer 3...Layer 7 Emulator<br>Bus to test<br>all software<br>interfaces<br>PC<br>2<br>BCU, CU<br>us BAU Communi-<br>with cation<br>PEI Unit<br>PEI<br>1<br>Device<br>e. g.<br>Bus Bin Out = Interface to test|3<br>2<br>1<br>Effort, test depth|
|---|---|


-----

|No.|External Message<br>Interface (EMI)<br>declared|Internal Layer<br>Interfaces (ILI)<br>declared|Example|Extend of Testing|
|---|---|---|---|---|
|1|Yes|Yes4|BCU 2|Full testing of EMI|
|2|Yes|No|BCU 1|Testing of EMI only|
|3|No|Yes|--|Full testing of internal layer interface5|
|4|No|No|BAU, device|No tests required|


**Figure 2: Declaration of internal and external message interfaces (with examples)**

The External Message Interfaces (EMI) shall comply with one of the flavours given in Volume 3/6/3.

In case of closed devices, implementing a not yet certified KNX protocol stack, merely the features of
the KNX Protocol stack shall be submitted to the black box layer tests via the bus interface.

###### 2.3.6 Conditions for renewed testing of updated certified stacks
A KNX system stack is the compiled version of code implementing a certain flavour of the defined
KNX System Profiles as given in Volume 6 of the KNX Standard.

The following cases are distinguished when modifications were made to a certified system stack:

  - In the case where the binary file of the compiled system stack can be transferred 1 to 1 to
another controller platform (e.g. typically a controller with extended features compared to the
previous version), then the stack continues to be regarded as certified.

  - In the case where the code of the system stack needs to be modified to be able to compile it to
another controller platform, without changing the code of the implemented KNX system stack
as regards implemented KNX system features, the correct functioning of the stack on this new
controller lies in the responsibility of the manufacturer and KNX continues to regard the stack
as certified.

  - In the case where the code of the implemented KNX system stack needs to be changed (e.g.
adding new or correcting/adapting existing KNX system features), be it to compile it to the
same or another controller platform, KNX regards the stack as uncertified and it needs to be
checked by a KNX accredited test lab, as if the stack were a newly developed system stack.
Based on the relevant declaration made by the manufacturer on which functionality was
changed, the KNX accredited test lab may decide to only repeat some of the tests. Some
examples of this may be:

    - Extending an already certified stack with KNX Secure: need for (at least) verification of
the full added KNX Secure functionality as well as retest of the tests given in Volume
8/3/7;

    - Porting an already certified stack for use with another KNX medium, e.g. originally
certified for TP and adapted to RF: need for (at least) verification of the lower layers in
accordance with Volume 8/2/5 and retest of the tests given in Volume 8/3/7;

    - Extending an already certified stack with KNXnet/IP Tunnelling: need for the verification
of KNXnet/IP Core, Management, Tunnelling next to random tests of the remaining stack.

It goes without saying that any of the above new versions of the stack, even the one ported 1 to 1 to
another controller platform, need to be registered at KNX.

4 Testing of the internal layer interfaces can in this case be waived, as they are identical to (or converted to) the
supported and already tested external message interface.
5 In most cases, internal interfaces are not declared, hence they are not part of the KNX certification.


-----

###### 2.3.7 Miscellaneous

- In some cases, even though marked with a cross, testing of a particular aspect can be superfluous
e.g. as is the case

  - for management testing when using the BCU 2 controller and connecting to a layer lower than
application layer. If in this case the FT 1.2 serial protocol is used, management is maintained
and shall not be re-tested;

  - testing of user management, when the co-processor in a device containing an already certified
system stack, which is not (entirely or partly) deactivated by the co-processor.

♦ The non-shaded areas in the underneath test class tables (Figure 3 to Figure 5) denote the to be
tested aspects, for which uniform KNX test specifications are not yet available. For showing
compliance to these aspects, the applicant may carry out the tests at his own discretion and present
the results to KNX in the form of internal company test reports.

♦ The shaded areas in the tables (Figure 3 to Figure 5) denote the to be tested aspects for which
uniform test specifications are available. Testing of these aspects shall be carried out in the
presence of an KNX auditor (witness testing) on the basis of the draft KNX test specifications or
in an KNX accredited third party test house on the basis of released KNX test specifications.

♦ Specific tests related to the actual profiles are for the time being not defined (i.e. testing of features
called ‘resources’). These will be added at a later date.

♦ Any test application used for system testing shall be archived by the KNX accredited test lab. In
the case of S-mode devices, the accredited test lab is allowed to accept unregistered applications,
which have been exported by the manufacturer by means of the KNX Manufacturer Tool inside a
project file and can in this way be integrated in ETS end user databases. This application shall be
archived for traceability reasons.

♦ Any test sample of a system platform (transceiver and microcontroller), which is used during
system testing and which is not commercially available, shall be sealed by the lab that carried out
the system tests and archived by the manufacturer for a period of minimum 10 years.


-----

#### 3 Actual Test class tables

##### 3.1 Test class BCU[6]

**KNX** **8-3-3 +** **8 TSS** **8 TSS** **8-6-2** **Mech[9]**
**Test** **required tests →** **8/2[7]** **8-3-4 +** **8-6-3** **G** **I** **8-7** **electr.[8]**
**Class** **8-3-7**

1a BCU based on certified BIM - - - - - - X X

1b BCU based on certified KNX chipset @ - - - - - X X

1c BCU based on certified physical layer
@ X X X X                     - X X
implementation, uncertified system stack

1d BCU based on uncertified physical layer
X                   -                   -                   -                   -                   - X X
implementation, certified system stack

1e BCU based on uncertified chipset X X X X X - X X

**Figure 3: Test class BCU Table**

6 for definition see Clause 2 Volume 5
7 In case of TP1, some tests can be waived – see clause 2.3.3
8 tests to verify correct voltage and current levels at each PEI pin against the specifications – test of correct support of stated PEI types – test of the maximum current
available at the PEI for the application – test of correct PEI R-type recognition.
9 test to verify mechanical compatibility of new BCU to KNX specifications (e.g. PEI, dimensions, programming button and LED, …).

|KNX<br>Test<br>Class|required tests →|8/27|8-3-3 +<br>8-3-4 +<br>8-3-7|8-6-3|8 TSS<br>G|8 TSS<br>I|8-7|8-6-2<br>electr.8|Mech9|
|---|---|---|---|---|---|---|---|---|---|
|1a|BCU based on certified BIM|-|-|-|-|-|-|X|X|
|1b|BCU based on certified KNX chipset|@|-|-|-|-|-|X|X|
|1c|BCU based on certified physical layer<br>implementation, uncertified system stack|@|X|X|X|X|-|X|X|
|1d|BCU based on uncertified physical layer<br>implementation, certified system stack|X|-|-|-|-|-|X|X|
|1e|BCU based on uncertified chipset|X|X|X|X|X|-|X|X|


-----

##### 3.2 Test class BAU[10]

**KNX**
**Test** **required tests →** **8/2[11]**
**Class**

2a BAU based on certified BIM 
2b BAU based on certified KNX chipset @

BAU based on certified physical layer
2c @
implementation, uncertified system stack

2d BAU based on uncertified physical layer
X
implementation, certified system stack

2e BAU based on uncertified chipset X

10 for definition see Volume 5 Clause 2 ‘Definitions’
11 In case of TP1, some tests can be waived – see clause 2.3.3
12 If EMI declared by applicant

|KNX<br>Test<br>Class|required tests →|8/211|8-3-3<br>8-3-4<br>8-3-7|8-6-312|8 TSS G|8 TSS<br>I|8-6-2<br>electr.|Mech|
|---|---|---|---|---|---|---|---|---|
|2a|BAU based on certified BIM|-|-|-|-|-|-|-|
|2b|BAU based on certified KNX chipset|@|-|-|-|-|-|-|
|2c|BAU based on certified physical layer<br>implementation, uncertified system stack|@|X|X|X|X|-|-|
|2d|BAU based on uncertified physical layer<br>implementation, certified system stack|X|-|-|-|-|-|-|
|2e|BAU based on uncertified chipset|X|X|X|X|X|-|-|


**Figure 4 : Test class BAU Table**


-----

##### 3.3 KNX-Device

**KNX** **8-3-3** **8-3-7** **8 TSS** **8-7** **8-6-2** **Mech**
**Test** **8-3-4** **User Manag[14].** **G** **electr.**

**8 TSS**

**Class** **required tests →** **8/2[13]** **8-3-7** **8-6-3**

**I**

**Stack**
**Management**

with Ph. System co-processor[15]
BCU/BAU Impl. Stack

3a C[16] no - - - - - X - 
3b C C no @ - - - - X - 
3c C NC[17] no @ X - - X X X - 
3d NC C no X - - - - X - 
3e NC NC no X X - - X X X - 
3f C yes - - X - - X - 
3g C C yes @ - X - - X - 
3h C NC yes @ X X - X X X - 
3I NC C yes X - X - - X - 
3j NC NC yes X X X - X X X - 
**Figure 5: KNX Device Test Class Table**

13 In case of TP1, some tests can be waived – see clause 2.3.3
14 Test only applicable if User Management is implemented.
15 If a co-processor deactivates part of the system stack, the features of all re-implemented layers also have to be tested. The Figure 5 only covers the case, where the coprocessor does not deactivate already certified system stack.
16 certified
17 not certified

|KNX<br>Test<br>Class|required tests →|Col3|Col4|Col5|8/213|8-3-3<br>8-3-4<br>8-3-7<br>Stack<br>Management|8-3-7<br>User Manag14.|8-6-3|8 TSS<br>G|8 TSS<br>I|8-7|8-6-2<br>electr.|Mech|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||with<br>BCU/BAU|Ph.<br>Impl.|System<br>Stack|co-processor15||||||||||
|3a|C16|||no|-|-|-|-||-|X|-|-|
|3b||C|C|no|@|-|-|-||-|X|-|-|
|3c||C|NC17|no|@|X|-|-|X|X|X|-|-|
|3d||NC|C|no|X|-|-|-||-|X|-|-|
|3e||NC|NC|no|X|X|-|-|X|X|X|-|-|
|3f|C|||yes|-|-|X|-||-|X|-|-|
|3g||C|C|yes|@|-|X|-||-|X|-|-|
|3h||C|NC|yes|@|X|X|-|X|X|X|-|-|
|3I||NC|C|yes|X|-|X|-||-|X|-|-|
|3j||NC|NC|yes|X|X|X|-|X|X|X|-|-|


-----

7
Compliance to
recommended circuit
diagram + component
tolerances (of original
manufacturer) ?


10
Mandatory or voluntary
compliance to Functional
Blocks


13
Approval for the
use by competent KNX
Body


8
Device with coprocessor?


9
Management tests of co-processor


12
Test compliance


1
START


**Figure 6: ‘Summary of the KNX System Conformance Requirement**


5
Check Compliance to minimum requirements
as regards

     - KNX protocol stack (Layer 2-7)

 - declared external message interface (if any)

     - standardized resources (tbd)


2
Device with
certified PhL?


3
Execution of PhL tests


END


-----

#### 4 Needed Volume 8/2/5 retests for modified physical layer implementations
The following table lists the tests that need to be performed when making the underneath listed modifications to a certified KNX RF physical layer: this table
needs to become part of Volume 8/1. In the case the desired modification is not listed in this application note, the repercussions on the tests that need to be
performed need to be taken on a case by case basis by the KNX Certification Department.

**Antenna[18]** **Transceiver**

**3.1** **Physical Layer Tests**

3.1.1 EMC - and ERM related tests

3.1.2 Bit Error Rate Level V V V V V V X5 X V X5

3.1.3 Testing of Tx Centre Frequency Tolerance V X X X V V V1 X X V1

3.1.4 Testing of max Tx Effective Radiated Power V V V V V V X X X X

3.1.5 Testing of Duty Cycle Declaration D D D D D D D D D D

3.1.6 Testing of FSK deviation V X X X V X X5 X X X5

3.1.7 Testing of max allowed bandwidth V X X X V X X5 X X X5

3.1.8 Testing of Tx Chip Rate V X X3 X3 V X V1 X X V1

18 Such change can include: any change or wired antenna shape change or PCB antenna layout change or integral antenna

|Col1|Col2|Col3|Col4|Col5|Antenna18|Col7|Col8|Col9|Transceiver|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||**Initial test**|||**Matching electronics TX path**|**Matching electronics  TX and RX path**||**Differenttransceiver**|**+ Different antenna output**||**Transceiver crystal**||**µC**|**µC stack (firmware)**||**µC crystal Replacement**||
|**3.1**|**Physical Layer Tests**||||||||||||||||||
|3.1.1|EMC - and ERM related tests||||||||||||||||||
|3.1.2|Bit Error Rate Level||V||V|V|V||V|V||X5||X|V||X5||
|3.1.3|Testing of Tx Centre Frequency Tolerance||V||X|X|X||V|V||V1||X|X||V1||
|3.1.4|Testing of max Tx Effective Radiated Power||V||V|V|V||V|V||X||X|X||X||
|3.1.5|Testing of Duty Cycle|Declaration|D||D|D|D||D|D||D||D|D||D||
|3.1.6|Testing of FSK deviation||V||X|X|X||V|X||X5||X|X||X5||
|3.1.7|Testing of max allowed bandwidth||V||X|X|X||V|X||X5||X|X||X5||
|3.1.8|Testing of Tx Chip Rate||V||X|X3|X3||V|X||V1||X|X||V1||


-----

|Col1|Col2|Col3|Col4|Col5|Antenna19|Col7|Col8|Col9|Transceiver|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||**Initial test**|||**Matching electronics TX path**|**Matching electronics  TX and RX path**||**Differenttransceiver**|**+ Different antenna output**||**Transceiver crystal**||**µC**|**µC stack (firmware)**||**µC crystal Replacement**||
|3.1.9|Testing of Tx Jitter per transition||V||X1|X3|X3||V|X||X5||X|X||X5||
|3.1.10|Testing of Rx Blocking performance|EN 300 220-1|V||X2|X4|V||V|X4||X5||X|X||X5||
|3.1.11|Testing of Rx Frequency Tolerance||V||X|X|X||V|X4||X5||X|X||X5||
|3.1.12|Testing of Rx Chip Rate Tolerance||V||X|X|X||V|X4||X5||X|X||X5||
|3.1.13|Testing of Rx Radiated Sensitivity||V||V|X4|V||V|X||X||X|X||X||


V = Test to be (re)done - V1 = Either one or both

X = Test need not to be (re)done - D = Is a matter of declaration

X1 The antenna does not affect the tx jitter. The Tx jitter will be dependent on the transmitter itself and the test receiver.

X2 3.1.10 is covered with 8.4 Blocking Test in EN 300 200-1. 8.4 states said: „For equipment with integral antenna the connection to the equipment is

made either to a temporary antenna connector or via a validated test fixture, see clause 6.3.“ The test should be done conducted to avoid that
changes in antenna affect the test result.

X3 Changing matching elements does not affect the Tx Chip rate(3.1.8) and Tx Jitter per transition (3.1.9).

In case the transceiver has splitted paths for receive and transmit. If the matching elements for the TX path are changed, the RX characteristics may
X4
not change and vice versa.

With replacing µC crystal (the µC generates clock for the transceiver) or replacing the transceiver crystal (only for transceiver), in both cases it

X5 should be sufficient to test 3.1.3 and 3.1.8 as long as the new crystal has the same or better specification in aging, temperature tolerance, and initial

frequency tolerance at 25°C.

19 Such change can include: any change or wired antenna shape change or PCB antenna layout change or integral antenna

|X1|The antenna does not affect the tx jitter. The Tx jitter will be dependent on the transmitter itself and the test receiver.|
|---|---|
|X2|3.1.10 is covered with 8.4 Blocking Test in EN 300 200-1. 8.4 states said: „For equipment with integral antenna the connection to the equipment is<br>made either to a temporary antenna connector or via a validated test fixture, see clause 6.3.“ The test should be done conducted to avoid that<br>changes in antenna affect the test result.|
|X3|Changing matching elements does not affect the Tx Chip rate(3.1.8) and Tx Jitter per transition (3.1.9).|
|X4|In case the transceiver has splitted paths for receive and transmit. If the matching elements for the TX path are changed, the RX characteristics may<br>not change and vice versa.|
|X5|With replacing µC crystal (the µC generates clock for the transceiver) or replacing the transceiver crystal (only for transceiver), in both cases it<br>should be sufficient to test 3.1.3 and 3.1.8 as long as the new crystal has the same or better specification in aging, temperature tolerance, and initial<br>frequency tolerance at 25°C.|


-----

