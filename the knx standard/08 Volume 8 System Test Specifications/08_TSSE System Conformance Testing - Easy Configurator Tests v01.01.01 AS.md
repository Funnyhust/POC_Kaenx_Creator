## System Conformance Testing

#### Test Suite Supplement E

 Testing of Easy Configurators (controllers – Logical Tag Supervisors); channel codes – connection rules

Summary:

This document contains test specifications for Testing of Easy
Configurators and their knowledge of channel codes and connection
rules.

Version 01.01.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

###### Document Updates

**Version** **Date** **Modifications**

0.8 2002.09 Working Document in KonCert

0.9RfV 2002.11 Release for voting in KTB

0.9FVb 2003.06 Final voting in KTB – integrated all comments from RfV cycle (second try)

1.0 2003.09 Approved standard – integrated all comments from Final voting cycle

1.1 2009.06 Readying document for publication in V2.0 of KNX specifications - keeping
LTR and LTS references for the time being in view of Easy implementations
based on Link services

01.01.01 2013.10.24 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 08_TSSE System Conformace Testing - Easy Configurator Tests v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.24
Number of pages: 22

|Version|Date|Modifications|
|---|---|---|
|0.8|2002.09|Working Document in KonCert|
|0.9RfV|2002.11|Release for voting in KTB|
|0.9FVb|2003.06|Final voting in KTB – integrated all comments from RfV cycle (second try)|
|1.0|2003.09|Approved standard – integrated all comments from Final voting cycle|
|1.1|2009.06|Readying document for publication in V2.0 of KNX specifications  - keeping<br>LTR and LTS references for the time being in view of Easy implementations<br>based on Link services|
|01.01.01|2013.10.24|Editorial updates for the publication of KNX Specifications 2.1.|


-----

###### Contents

 1 Presentation of the document ................................................................................................ 4

 2 Test supported Channel Codes ............................................................................................. 5 2.1 Abstract Test Suite .......................................................................................................... 5 2.2 Test Channel Codes Example 1 ...................................................................................... 6 2.2.1 Case 1 – Positive test – connection via main connection codes ......................... 6 2.2.2 Case 2 – Positive test – connection via sub connection codes ............................ 6 2.2.3 Case 3 – Negative test – incompatible connection codes - no connection ......... 7 2.3 Test Channel Codes Example 2 ...................................................................................... 8 2.3.1 Case 1 – Positive test – connection via main connection codes ......................... 8 2.3.2 Case 2 – Positive test – connection via sub connection codes ............................ 9 2.3.3 Case 3 – Negative test – incompatible connection codes - no connection ....... 10 2.4 Test Channel Codes Additional tests ............................................................................ 11 2.4.1 Deleting of linked functionality ........................................................................ 11

 3 Test Channel Code Parameters .......................................................................................... 12 3.1 Abstract Test Suite ........................................................................................................ 12 3.2 Test Channel Codes Parameter ..................................................................................... 12 3.3 Test Channel Parameters Example ............................................................................... 12

 4 Connection Rules .................................................................................................................. 14 4.1 Introduction ................................................................................................................... 14 4.2 Test of the Basic Rule ................................................................................................... 15 4.2.1 Case 1 ................................................................................................................ 15 4.2.2 Case 2 – test n : m ............................................................................................. 16 4.2.3 Case 3 ................................................................................................................ 16 4.2.4 Case 4: negative test 1....................................................................................... 16 4.2.5 Case 5: negative test 2....................................................................................... 16 4.3 Test of Visualization Datapoints .................................................................................. 17 4.3.1 Case 1 ................................................................................................................ 17 4.3.2 Case 2 ................................................................................................................ 18 4.4 Test of Datapoints that are connectable only once ....................................................... 18 4.4.1 Case 1 – More X input Datapoints than output Datapoints .............................. 18 4.4.2 Case 2 – more output Datapoints than X input Datapoints ............................... 18 4.4.3 Case 3 ................................................................................................................ 19 4.5 Test of Adjustable channels .......................................................................................... 20 4.5.1 Case 1 ................................................................................................................ 20 4.5.2 Case 2 ................................................................................................................ 20 4.5.3 Case 3 ................................................................................................................ 20 4.6 Test of Adaptive subblocks .......................................................................................... 21 4.6.1 Case 1 ................................................................................................................ 21 4.6.2 Case 2 ................................................................................................................ 21 4.6.3 Case 3 ................................................................................................................ 21 4.7 Test of subconnection code testing ............................................................................... 21 4.7.1 Case 1 ................................................................................................................ 21 4.7.2 Case 2 ................................................................................................................ 22


-----

##### 1 Presentation of the document
This document provides test specifications for easy channels and connection rules supported by easy
configurators (according to Volume 6, for the time being only applicable to controller and supervised
mode).

In view of the above, the term ‘BDUT’ in the underneath document refers to the to be tested easy
configurator (“client”).

The document is principally divided into three parts:

   - test of the channel codes supported by the configurator (i.e. the Easy Controller or Easy Logical
Tag Supervisor)

   - test of the handling of parameters of supported channel codes by the configurator

   - test of connection rules used by the configurator

The document provides a framework for the conformance testing of the above-mentioned features by
giving a number of examples of “Abstract Test Suites” for each to be tested feature. It for instance does
not contain for each defined channel code a detailed test procedure (called “Executable Test Suites”).

For all tests, dummy products (“servers”) shall be used as auxiliary equipment. In some cases, it might be
possible to simulate these products by an appropriate tool (e.g. EITT). The objective of the tests is not to
verify the correct functioning of the auxiliary devices but whether the configurator establishes the correct
links.

All implemented channel codes with all related in/outputs respectively connection rules as supported by a
configurator (as laid down in the PICS/PIXIT – Proforma supplied by the manufacturer) shall be tested.
In the case where for a supported channel’s in or output, a corresponding channel to link is not
implemented in the configurator, it is allowed to skip the testing of this in- or output.
As regards handling of parameters of supported channel codes, the general rules for the modification of
parameters as laid down in Volume 8/7/1 ‘Interworking Tests’ apply.

For tests other than the checking of the correct support of channels codes (and their parameters)
respectively connection rules (e.g. management procedures to be fulfilled by the configurators), please
refer to the test specifications for Easy controller (Test Suite Supplement B) and Easy Logical Tag
Supervised (Test Suite Supplement A).


-----

##### 2 Test supported Channel Codes

###### 2.1 Abstract Test Suite
ID XX

Name XX

PROP Check whether the BDUT is able to connect the Channel ‘xx’ according Easy channel codes

Config Check the BDUT with devices supporting channel ‘xx’ together with devices supporting
channels y1 and y2

Proc Have the configurator localise the devices and check whether the configurator sets the L-flag
of the dedicated Datapoint according to the channel definitions.

Stimulate the BDUT to link the desired channels and check after the linking the linking
information in the devices

      - positive tests to cover all possible connection codes (both main as well as sub connection
codes)

      - at minimum one negative test (test with incompatible connection codes[1])

Confor The links have to be established in the following way

The following semantics are used in the underneath test specifications:

a) “# n” = n-th Group Address in the address table associated to the respective Group Object

b) “# -“ = no Group Address associated to the respective Group Object

###### XX Y1

 GA1
 CC 1 CC 1

 GA2
 CC 1 CC 1

 Y2

 CC 1

**Figure 1: Testing Channel codes general**

1 In the case where the configurator e.g. after having selected a sensor, only gives the user the possibility to link
devices with matching actuator channels (i.e. offers the user a pre-selection), this test can be skipped.

|ID|XX|
|---|---|
|Name|XX|
|PROP|Check whether the BDUT is able to connect the Channel ‘xx’ according Easy channel codes|
|Config|Check the BDUT with devices supporting channel ‘xx’ together with devices supporting<br>channels y1 and y2|
|Proc|Have the configurator localise the devices and check whether the configurator sets the L-flag<br>of the dedicated Datapoint according to the channel definitions.<br>Stimulate the BDUT to link the desired channels and check after the linking the linking<br>information in the devices<br>• <br>positive tests to cover all possible connection codes (both main as well as sub connection<br>codes)<br>• <br>at minimum one negative test (test with incompatible connection codes1)|
|Confor|The links have to be established in the following way|

|CC 1<br>CC 1|GA1|Col3|CC 1<br>CC 1|
|---|---|---|---|
|CC 1<br>CC 1||GA2|GA2|


-----

###### 2.2 Test Channel Codes Example 1

 2.2.1 Case 1 – Positive test – connection via main connection codes
XX = 0x020h Ch_PushButton

Y1 = 0x101h Ch_Binary_Actuator_Basic

Confor 1 :

###### 0x020h 0x101h

 GA1
 OO OO

 IOO

**Figure 2: Testing Channel codes example 1 – connection via main connection codes**

**LTS:**

Confor 1 Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

Device (y1)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

A_Link_Read (Obj 1) via A_Link_Response (---)

**Ctrl**

Device (xx)

Adr-Tab : GA1[2] Assoc-tab : # 1 : GO 0

Device (y1)

Adr-Tab : GA1 Assoc-tab :
# 1 : GO 0
# - : GO 1

###### 2.2.2 Case 2 – Positive test – connection via sub connection codes
XX = 0x020h Ch_PushButton

Y2 = 0x10E Ch_Logical_Actuator

Confor 2:

2 In case of the use of additional localisation channels, the address and association tables will also contain the
addresses respectively associations of those channels. Differences between the tables before and after linking can
be verified by reading the tables after localisation.
In case of the use of localisation flags only, the address and association table may be different (not the case when
localisation addresses are reused during linking).

|OO|GA1|OO<br>IOO|
|---|---|---|

|Adr-Tab : GA12|Assoc-tab : # 1 : GO 0|
|---|---|

|Adr-Tab : GA1|Assoc-tab :<br># 1 : GO 0<br># - : GO 1|
|---|---|


-----

###### 0x020h 0x10E

 GA1
 OO/LV LV

**Figure 3: Testing Channel codes example 1 – connection via sub connection codes**

**LTS**

Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

Device (y2)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

**Ctrl**

Device (xx)

Adr-Tab : GA1 Assoc-tab : # 1 - GO 0

Device (y2)

Adr-Tab : GA1 Assoc-tab : # 1 - GO 0

###### 2.2.3 Case 3 – Negative test – incompatible connection codes - no connection
XX = 0x020h Ch_PushButton

Y3 = 0x108 CH_Shutter_Actuator_Basic_Wind

Confor 3

###### 0x020h 0x108h

 OO MUB

 SSUD

 WA

 IMUD

**Figure 4: Testing Channel codes example 1– no connection**

**LTS**

Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (---)[3]

3 it is possible that some default addresses and/or associations are still present in the devices.

|OO/LV|GA1|LV|
|---|---|---|
|OO/LV|||

|Adr-Tab : GA1|Assoc-tab : # 1 - GO 0|
|---|---|

|Adr-Tab : GA1|Assoc-tab : # 1 - GO 0|
|---|---|


-----

Device (y3)

A_Link_Read (Obj 0) via A_Link_Response (---)

A_Link_Read (Obj 1) via A_Link_Response (---)

A_Link_Read (Obj 2) via A_Link_Response (---)

A_Link_Read (Obj 3) via A_Link_Response (---)

**Ctrl**

Device (xx)

Adr-Tab : - Assoc-tab : # - : GO 0

Device (y3)

Adr-Tab : -- Assoc-tab :
###### # - : GO 0 # - : GO 1 # - : GO 2 # - : GO 3

 2.3 Test Channel Codes Example 2

 2.3.1 Case 1 – Positive test – connection via main connection codes
xx=0x006h Ch-PB-Dimmer-Toggle

y1=0x105h Ch-Dimming Actuator-Basic

Confor 1

###### 0x006h 0x105h

|Adr-Tab : -|Assoc-tab : # - : GO 0|
|---|---|

|Adr-Tab : --|Assoc-tab :<br># - : GO 0<br># - : GO 1<br># - : GO 2<br># - : GO 3|
|---|---|

|Col1|OO<br>DC<br>IOO|Col3|GA 1|OO<br>DC<br>IO O<br>DV<br>ID V|
|---|---|---|---|---|
||OO <br>DC <br>IOO|OO <br>DC <br>IOO|**GA 2**|**GA 2**|
||OO <br>DC <br>IOO|IOO|IOO|IOO|
||||||


**GA 3**


**Figure 5: Testing Channel codes example 2 –connection via main connection codes**

**LTS**

Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (GA 3)

A_Link_Read (Obj 1) via A_Link_Response (GA 1)

A_Link_Read (Obj 1) via A_Link_Response (GA 2)

Device (y1)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

A_Link_Read (Obj 1) via A_Link_Response (GA2)


-----

A_Link_Read (Obj 2) via A_Link_Response (---)

A_Link_Read (Obj 3) via A_Link_Response (GA3)

A_Link_Read (Obj 4) via A_Link_Response (---)

**Ctrl**

Device (xx)

Adr-Tab : Assoc-tab :
GA 1 # 3 : GO 0
GA 2 # 1 : GO 1
GA 3 # 2 : GO 2

Device (y1)

Adr-Tab : Assoc-tab :
GA 1 # 1 : GO 0
GA 2 # 2 : GO 1
GA 3 # - : GO 2

# 3 : GO 3
# - : G0 4

###### 2.3.2 Case 2 – Positive test – connection via sub connection codes
Confor 2

xx=0x006h Ch-PB-Dimmer-Toggle

y2 = 0x10E CH_Logical_Actuator

###### 0x006h 0x10Eh

**GA 1**

OO/LV LV

DC

IOO

**Figure 6: Testing Channel codes example 2 –connection via sub connection codes**

**LTS**

Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (---)

A_Link_Read (Obj 1) via A_Link_Response (GA1)

A_Link_Read (Obj 2) via A_Link_Response (---)

Device (y2)

A_Link_Read (Obj 0) via A_Link_Response (GA1)

**Ctrl**

Device (xx)

|Adr-Tab :<br>GA 1<br>GA 2<br>GA 3|Assoc-tab :<br># 3 : GO 0<br># 1 : GO 1<br># 2 : GO 2|
|---|---|

|Adr-Tab :<br>GA 1<br>GA 2<br>GA 3|Assoc-tab :<br># 1 : GO 0<br># 2 : GO 1<br># - : GO 2<br># 3 : GO 3<br># - : G0 4|
|---|---|

|OO/ LV<br>DC<br>IOO|GA 1|LV|
|---|---|---|

|Adr-Tab :<br>GA 1|Assoc-tab :<br># - : GO 0<br># 1 : GO 1|
|---|---|


-----

|Col1|# - : GO 2|
|---|---|


Device (y2)

Adr-Tab : Assoc-tab :
GA 1 # 1 : GO 0

###### 2.3.3 Case 3 – Negative test – incompatible connection codes - no connection
Confor 3

xx=0x006h Ch-PB-Dimmer-Toggle

Y3 = 0x108 CH_Shutter_Actuator_Basic_Wind

###### 0x006h 0x108h

# x

**Figure 7: Testing Channel codes example 2 – no connection**

**LTS**

Device (xx)

A_Link_Read (Obj 0) via A_Link_Response (---)

A_Link_Read (Obj 1) via A_Link_Response (---)

A_Link_Read (Obj 2) via A_Link_Response (---)

Device (y3)

A_Link_Read (Obj 0) via A_Link_Response (---)

A_Link_Read (Obj 1) via A_Link_Response (---)

A_Link_Read (Obj 2) via A_Link_Response (---)

A_Link_Read (Obj 3) via A_Link_Response (---)

**Ctrl**

Device (xx)

|Adr-Tab :<br>GA 1|Assoc-tab :<br># 1 : GO 0|
|---|---|

|Adr-Tab : --|Assoc-tab :<br># - : GO 0<br># - : GO 1<br># - : GO 2|
|---|---|


-----

Device (y3)

Adr-Tab : - Assoc-tab :
# - : GO 0
# - : GO 1
# - : GO 2
# - : GO 3

###### 2.4 Test Channel Codes Additional tests

 2.4.1 Deleting of linked functionality
Delete in the controller already linked functionality.

Check whether the controller removes all the addresses as well as associations from the auxiliary devices,
resets all the parameter values to the default values and resets the localisation values.

|Adr-Tab : -|Assoc-tab :<br># - : GO 0<br># - : GO 1<br># - : GO 2<br># - : GO 3|
|---|---|


-----

##### 3 Test Channel Code Parameters

###### 3.1 Abstract Test Suite
ID XX

Name XX

PROP Check that the BDUT is able to adjust the Value of Parameter “pp” of easy channel “xx”

Config Check the BDUT with a device supporting channel ‘xx’

Proc - check the current Value of Parameter “pp” in device “xx”

      - Stimulate the BDUT to change the value of the Parameter “pp” in the device “xx”

      - Check if the parameter value “pp” has been updated in device “xx”

Confor The parameter value “pp” in device “xx” has changed to the new value on the right location
inside the parameter block.

###### 3.2 Test Channel Codes Parameter
**LTS (optional if supported):**

- Property access point to point connectionless

- A_Property_Read (Obj. = 0, Property = 101) – A_Property_Response (Parameter Block)

- Check the parameter Value inside the Parameter Block with bit offset and size

**Ctrl:**

- Read the parameter Block of the device via DMA

- Calculate the absolute start address of the Parameter Block at the end of the Group Object Table

- Read the parameter block (DMA)

- Check the parameter Value inside the Parameter Block with bit offset and size

###### 3.3 Test Channel Parameters Example[4]
Xx = 0x020h CH_Pushbutton

Pp : Switch_action

###### Confor

- Parameter Value before change

0 6 Parameter block switch action = on/off

0 0 0 0 0 0 1 1

- Change Parameter Value to “OFF”

4 applicable for devices with parameter block only

|ID|XX|
|---|---|
|Name|XX|
|PROP|Check that the BDUT is able to adjust the Value of Parameter “pp” of easy channel “xx”|
|Config|Check the BDUT with a device supporting channel ‘xx’|
|Proc|• <br>check the current Value of Parameter “pp” in device “xx”<br>• <br>Stimulate the BDUT to change the value of the Parameter “pp” in the device “xx”<br>• <br>Check if the parameter value “pp” has been updated in device “xx”|
|Confor|The parameter value “pp” in device “xx” has changed to the new value on the right location<br>inside the parameter block.|

|0      6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|0 <br>6 <br>0 0 0 0 0 0 1 1|
|0|0|0|0|0|0|1|1|


Parameter block switch action = on/off


-----

|• Parameter Value after change|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|0 <br>6 <br>0 0 0 0 0 0 0 0|
|0|0|0|0|0|0|0|0|


Parameter block switch action = off


-----

##### 4 Connection Rules

###### 4.1 Introduction

 1. Adaptive Sub

 Adjustable
 2.
 Channels

 Connectable only
 3.
 once

 Visualisation
 4.
 Datapoints

 5.
 Basic Rule

 Plausibility check

 Min one of 1 -5

**Figure 8: Connection sequence for one connection procedure by a controller/supervisor**

|Adaptive Sub|Col2|
|---|---|
|||

|Adjustable<br>Channels|Col2|
|---|---|
|||

|Connectable only<br>once|Col2|
|---|---|
|||

|Visualisation<br>Datapoints|Col2|
|---|---|
|||

|Basic Rule|Col2|
|---|---|
|||


-----

|V|visualisation Datapoints|this Datapoint shall be connected on one and only one<br>sending Datapoint and one or more receiving Datapoint.(<br>1 to N connection)|
|---|---|---|
|X|Datapoints connectable only<br>once|to have one exact connection. Only one Group Address<br>shall be assigned to this Datapoint. (1 to 1 connection)|
|XC|Datapoint connectable only<br>once with an information if<br>it is connected<br>Need a specific parameter<br>"used input bit stream"|Only one Group Address shall be assigned to this<br>Datapoint. (1 to 1 connection)<br>If the Datapoint is connected, the corresponding bit in the<br>parameter "used input bit stream" must be set. The<br>application knows the connected Datapoints via this<br>parameter.|
|O|Output Datapoint|The value of this Datapoint will be sent|
|I|Input Datapoint|The value of this Datapoint can be received|
|L|Localisation Datapoint|This Datapoint is used for the localisation procedure in<br>the controller mode|
|T|Adaptive Datapoint|This Datapoint is defined only by this format (1bit, 8bits,<br>16bits) and can be adapted during the calculation of the<br>link. Need a additional definition in the sub-block list to<br>know the possibilities of adaptation|


###### 4.2 Test of the Basic Rule

 4.2.1 Case 1

0x101h

OO

IOO

0x020h

0x105h

**GA 1**

OO

OOOO

**GA 2**

0x005h DC

OO DVDV

IOO

DC IDV

**Figure 9: Test of the basic rule – Case 1[5]**

Confor 1: see Channel Code Test

5 Optimisation as depicted in the above figure is recommended. It is also possible that the configurator attributes two
different addresses to the OO output data points and the OO input data point.

|OO<br>IOO<br>0x020h<br>0x105h<br>GA 1<br>OO<br>OO<br>GA 2<br>0x005h DC<br>OO DV<br>IOO<br>DC IDV|OO<br>IOO|Col3|
|---|---|---|
|**OO**<br>**OO**<br>**GA 1**<br>**OO**<br>**DC**<br>**IOO**<br>**OO**<br>**DC**<br>**DV**<br>**IOO**<br>**IDV**<br>**GA 2**<br>0x020h<br>0x005h<br>0x105h||**IOO**|
|**OO**<br>**DC**<br>|**OO**<br>**DC**<br>|**OO**<br>**DC**<br>|


-----

###### 4.2.2 Case 2 – test n : m
Confor 2:

Connection 1

0x020h

**GA1**
OO OO

IOO

**GA2**

OO 0x101h

0x020h

Connection 2

**Figure 10: Test of the basic rule – Case 2**

###### 4.2.3 Case 3
Confor 3: new GA for each new connection

###### 4.2.4 Case 4: negative test 1
Confor 4[6]:

2 inputs connection - not connectable X

###### 4.2.5 Case 5: negative test 2
Confor 5:

2 outputs connection – not connectable X

6 Such a test is automatically passed if a controller user interface does not allow to make such a selection


-----

###### 4.3 Test of Visualization Datapoints

 4.3.1 Case 1

0x002h 0x101h

OOOO OO

IOO

IOO Basic

Rule V

0x002h 0x101h

**GA2**
OO OO

IOO IOO

V

**GA1**

Visualisation rule

**Figure 11: Test of the visualization Datapoints – Case 1**

|Col1|0x002h|
|---|---|
||**OO**<br>**IOO**|
||**IOO**|

|OO<br>IOO<br>V|Col2|
|---|---|

|Col1|Col2|
|---|---|


Confor 1

only one V-Data point may be connected


-----

###### 4.3.2 Case 2
Confor 2


Connection 1

###### 0x002h 0x101h

 GA2
 OO OO

 IOO
 IOOIOO

Visualisation Rule

###### OO GA3

 IOO

 GA1 0x002h Connection 2

Reuse of GA

**Figure 12: Test of the visualization Datapoints – Case 2**

###### 4.4 Test of Datapoints that are connectable only once

 4.4.1 Case 1 – More X input Datapoints than output Datapoints
Confor 1


0x01Fh


0x01Eh


**Figure 13: Test of Datapoints connectable only once – Case 1**

###### 4.4.2 Case 2 – more output Datapoints than X input Datapoints
Confor 2


-----

###### 0x01Eh


###### 0x01Fh

 LVLV

 0x01Fh
 LV

 0x01Fh

 LVLV

 0x01Fh

 LVLV

 0x01Fh


###### LVLV


###### 4.4.3 Case 3
Confor 3


**Figure 14: Test of Datapoints connectable only once – Case 2**

###### Connection 1

 0x01Fh
 GA1
 *
 LVLV LVLV
 0x01Fh GA2 * X
 LVLV LVLV

X

###### *
 LVLV
 0x01Fh
 LVLV GA3 X LVLV

X

###### 0x01Eh

 Connection 2

**Figure 15: Test of Datapoints connectable only once – Case 3**



###### * If channel requires “C”- Flag, then update relevant Parameter Bit in the parameter “Used input Bitstream” for each connection.


-----

###### 4.5 Test of Adjustable channels

 4.5.1 Case 1
Confor 1


###### 0x303h Dimm = Actuator


###### 0x105h

|OO|OO|SUD|
|---|---|---|

|-|-|MUD|
|---|---|---|

|-|DC|-|
|---|---|---|

|OO OO SUD<br>- - MUD<br>- DC -<br>P Dimming Adj. Selection|GA1|OO<br>DC<br>DV<br>IOO<br>IDV|
|---|---|---|


**Figure 16: Test of adjustable channels – Case 1**

###### 4.5.2 Case 2
Confor 2

Equivalent Test with Shutter actuator

###### 4.5.3 Case 3
Confor 3

Equivalent test with switching actuator


-----

###### 4.6 Test of Adaptive subblocks

 4.6.1 Case 1
Confor 1


**Switching-Actuator**
SN 0x201h


SB1

SB2

SB3

SB4

|SN 0x201h<br>B1 Iad 1.1 Oad 1.1<br>Iad1.8 Oad 1.8<br>Iad 1.16 Oad 1.16<br>B2 IaD 2.1 Oad 1.1<br>IaD 2.8 Oad 2.8<br>GA4<br>IaD 2.16 Oad 2.16<br>B3 IaD 3.1 Oad 3.1<br>IaD 3.8 Oad 3.8 GA5<br>IaD 3.16 Oad 3.16<br>B4 IaD 4.1 Oad 4.1<br>IaD 4.8 Oad 4.8<br>IaD 4.16 Oad 4.16<br>P1 Switch<br>Adj Selections<br>P2 Dimm<br>P3<br>Shutter<br>P4|Col2|Col3|Switching-Actuator<br>GA1<br>0x101h<br>OO<br>IOO<br>GA2<br>Dimming-Actuator<br>0x105h<br>GA3<br>OO<br>DC IOO<br>DV IDV<br>Shutter-Actuator<br>0x108h<br>MUD<br>SSUD<br>WA<br>GA6<br>IMUD|
|---|---|---|---|
|SN<br>Iad 1.1<br>Iad1.8<br>Iad 1.16<br>Oad 1.1<br>Oad 1.8<br>Oad 1.16<br>IaD 2.1<br>IaD 2.8<br>IaD 2.16<br>Oad 1.1<br>Oad 2.8<br>Oad 2.16<br>IaD 3.1<br>IaD 3.8<br>IaD 3.16<br>Oad 3.1<br>Oad 3.8<br>Oad 3.16<br>IaD 4.1<br>IaD 4.8<br>IaD 4.16<br>Oad 4.1<br>Oad 4.8<br>Oad 4.16<br>Switch<br>Dimm<br>Shutter<br>B4<br>P2<br>P3<br>P4<br>Adj Selections<br>B3<br>B2<br>B1<br>**GA4**<br>**GA5**<br>P1<br>0x201h|Switch|Adj Selections|Adj Selections|
|SN<br>Iad 1.1<br>Iad1.8<br>Iad 1.16<br>Oad 1.1<br>Oad 1.8<br>Oad 1.16<br>IaD 2.1<br>IaD 2.8<br>IaD 2.16<br>Oad 1.1<br>Oad 2.8<br>Oad 2.16<br>IaD 3.1<br>IaD 3.8<br>IaD 3.16<br>Oad 3.1<br>Oad 3.8<br>Oad 3.16<br>IaD 4.1<br>IaD 4.8<br>IaD 4.16<br>Oad 4.1<br>Oad 4.8<br>Oad 4.16<br>Switch<br>Dimm<br>Shutter<br>B4<br>P2<br>P3<br>P4<br>Adj Selections<br>B3<br>B2<br>B1<br>**GA4**<br>**GA5**<br>P1<br>0x201h|Dimm|Dimm|Dimm|
|SN<br>Iad 1.1<br>Iad1.8<br>Iad 1.16<br>Oad 1.1<br>Oad 1.8<br>Oad 1.16<br>IaD 2.1<br>IaD 2.8<br>IaD 2.16<br>Oad 1.1<br>Oad 2.8<br>Oad 2.16<br>IaD 3.1<br>IaD 3.8<br>IaD 3.16<br>Oad 3.1<br>Oad 3.8<br>Oad 3.16<br>IaD 4.1<br>IaD 4.8<br>IaD 4.16<br>Oad 4.1<br>Oad 4.8<br>Oad 4.16<br>Switch<br>Dimm<br>Shutter<br>B4<br>P2<br>P3<br>P4<br>Adj Selections<br>B3<br>B2<br>B1<br>**GA4**<br>**GA5**<br>P1<br>0x201h|Shutter|Shutter|Shutter|
|SN<br>Iad 1.1<br>Iad1.8<br>Iad 1.16<br>Oad 1.1<br>Oad 1.8<br>Oad 1.16<br>IaD 2.1<br>IaD 2.8<br>IaD 2.16<br>Oad 1.1<br>Oad 2.8<br>Oad 2.16<br>IaD 3.1<br>IaD 3.8<br>IaD 3.16<br>Oad 3.1<br>Oad 3.8<br>Oad 3.16<br>IaD 4.1<br>IaD 4.8<br>IaD 4.16<br>Oad 4.1<br>Oad 4.8<br>Oad 4.16<br>Switch<br>Dimm<br>Shutter<br>B4<br>P2<br>P3<br>P4<br>Adj Selections<br>B3<br>B2<br>B1<br>**GA4**<br>**GA5**<br>P1<br>0x201h||||


**Figure 17: Test of adaptive subblocks– Case 1**

###### 4.6.2 Case 2
Confor 2: equivalent Test with 4 Shutter Actuators

###### 4.6.3 Case 3
Confor 3: equivalent test with 2 Dimming Actuators

###### 4.7 Test of subconnection code testing

 4.7.1 Case 1
Confor 1

Test output DP “main” with input DP “sub” connection code

 is tested during Channel black-box testing


-----

###### 4.7.2 Case 2
Confor 2

Test output DP “sub” with input DP “main” connection code

 is tested during Channel black-box testing


-----

