## Basic and System Components/Devices – Minimum Requirements – Standardised solutions - Tests KNX System Conformance Testing


# 9


### Basic Components 22

Summary

This document contains the minimum requirements for KNX Basic
Components and standardised solutions.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.12.19 Approved Standard

1.1 2006.05.09 Approved Standard – removal of footnotes related to output voltage and
overload from clause 3 – correction of references to Volume 4

1.2RfV 2008.11 Integration of AN029 (except for DPSU management and profiles –
integrated in Volume 6 clause 8) – removal TP0, PL132 – updating of
PSU requirements

1.2FV 2010.03 Resolution of Release for voting comments – readying for final voting

1.2AS 2010.04 Publication of AS version – no comments during final voting

1.3AS 2012.09 Update following publication of AN126

01.03.01 2013.10.23 Editorial updates for the publication of KNX Specifications 2.1

01.03.02 2022.04 Integration of AN204

Filename: 09_02 Basic and System Components - Basic Components v01.03.02 AS
Version: 01.03.02
Status: Approved Standard
Savedate: 2022.04.15

Number of pages: 53

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.12.19|Approved Standard|
|1.1|2006.05.09|Approved Standard – removal of footnotes related to output voltage and<br>overload from clause 3 – correction of references to Volume 4|
|1.2RfV|2008.11|Integration of AN029 (except for DPSU management and profiles –<br>integrated in Volume 6 clause 8) – removal TP0, PL132 – updating of<br>PSU requirements|
|1.2FV|2010.03|Resolution of Release for voting comments – readying for final voting|
|1.2AS|2010.04|Publication of AS version – no comments during final voting|
|1.3AS|2012.09|Update following publication of AN126|
|01.03.01|2013.10.23|Editorial updates for the publication of KNX Specifications 2.1|
|01.03.02|2022.04|Integration of AN204|


-----

##### Contents

###### 1 Preface ................................................................................................................................... 6

 2 TP1 Centralised Power Supply Unit (PSU) ....................................................................... 7 2.1 Communication Requirements........................................................................................ 7 2.2 Electrical Safety .............................................................................................................. 7 2.3 Environmental Conditions .............................................................................................. 8 2.4 EMC 9 2.5 Mechanical, Dimensions, Constructional Features ......................................................... 9 2.6 Electrical Features ........................................................................................................... 9 2.7 Testing........................................................................................................................... 11 2.7.1 Environment ...................................................................................................... 11 2.7.2 Test Equipment ................................................................................................. 11 2.7.3 Testing of Output Voltage ................................................................................. 12 2.7.4 Testing of Output Voltage Ripple ..................................................................... 12 2.7.5 Testing of two parallel PSUs, Leakage Current ................................................ 13 2.7.6 Testing of PSU’s Dynamic Behavior ................................................................ 13 2.7.7 Testing of PSU’s Hold-Up Time....................................................................... 14 2.7.8 Testing of U/I Characteristic ............................................................................. 14 2.8 Functional Safety .......................................................................................................... 14 2.9 Interfaces, Connectors................................................................................................... 14 2.10 Marking ......................................................................................................................... 15 2.11 Installation..................................................................................................................... 16 2.12 Symbols......................................................................................................................... 16

 3 Battery Back-up system ..................................................................................................... 17

 4 PSU with integrated Choke ............................................................................................... 18

 5 TP1 Choke........................................................................................................................... 19 5.1 Communication ............................................................................................................. 19 5.2 Electrical Safety ............................................................................................................ 19 5.3 Climatic Conditions ...................................................................................................... 20 5.4 EMC 20 5.5 Mechanical, Dimension, Constructional ....................................................................... 20 5.6 Electrical ....................................................................................................................... 21 5.7 Testing........................................................................................................................... 21 5.7.1 Environment ...................................................................................................... 21 5.7.2 Test Equipment ................................................................................................. 21 5.7.3 Testing of Static Parameters.............................................................................. 22 5.7.4 Testing of Dynamic Parameters ........................................................................ 22 5.7.5 Testing of Symmetry ......................................................................................... 24 5.7.6 Testing of Reset................................................................................................. 25 5.8 Functional Safety .......................................................................................................... 25 5.9 Interfaces/ Connectors................................................................................................... 25 5.10 Marking ......................................................................................................................... 26 5.11 Installation..................................................................................................................... 26 5.12 Symbols......................................................................................................................... 26

 6 TP1 Decentralized Power Supply Unit (DPSU)............................................................... 27 6.1 Scope 27 6.2 Introduction ................................................................................................................... 27


-----

###### 6.3 Communication Requirements ..................................................................................... 28 6.4 Integrated TP Choke ..................................................................................................... 29 6.5 Electrical Safety............................................................................................................ 30 6.6 Environmental conditions ............................................................................................. 31 6.7 EMC 31 6.8 Mechanical, Dimensions, Constructional Features ...................................................... 32 6.9 Electrical Features ........................................................................................................ 32 6.10 Testing .......................................................................................................................... 34
 6.10.1 Environment...................................................................................................... 34 6.10.2 Test Equipment ................................................................................................. 34 6.10.3 Testing of Output Voltage ................................................................................ 35 6.10.4 Testing of Output Voltage Ripple..................................................................... 35 6.10.5 Testing of DPSU’s Dynamic Behaviour........................................................... 36 6.10.6 Testing of two parallel DPSUs, Leakage Current............................................. 37 6.10.7 Testing of DPSU’s Hold-Up Time ................................................................... 37 6.10.8 Testing of U/I Characteristic............................................................................. 37 6.10.9 Testing of Dynamic Parameters and Busload ................................................... 38 6.10.10 System Test ....................................................................................................... 40 6.10.11 Testing of Symmetry ........................................................................................ 41 6.10.12 Testing of Reset ................................................................................................ 41 6.11 Functional Safety .......................................................................................................... 41 6.12 Interfaces, Connectors .................................................................................................. 42 6.13 Marking ........................................................................................................................ 42 6.14 Installation .................................................................................................................... 43 6.15 Symbols ........................................................................................................................ 43 6.16 Battery Back-up system ................................................................................................ 44

 7 PL110 Filter ........................................................................................................................ 45 7.1 Communication Requirements ..................................................................................... 45 7.2 Electrical Safety............................................................................................................ 45 7.3 Environmental Conditions ............................................................................................ 45 7.4 EMC 45 7.5 Mechanical Dimensions, Constructional Features ....................................................... 45 7.6 Electrical Features ........................................................................................................ 46 7.7 Testing .......................................................................................................................... 46 7.7.1 Filter RF-Impedance ......................................................................................... 46 7.7.2 DC-Filter-Impedance ........................................................................................ 48 7.7.3 Filter Attenuation .............................................................................................. 49 7.8 Functional Safety .......................................................................................................... 49 7.9 Interfaces, Connectors .................................................................................................. 50 7.10 Marking ........................................................................................................................ 50 7.11 Installation .................................................................................................................... 50 7.12 Symbols ........................................................................................................................ 50

 8 PL110 Phase Coupler ........................................................................................................ 51 8.1 Communication Requirements ..................................................................................... 51 8.2 Electrical Safety............................................................................................................ 51 8.3 Environmental Conditions ............................................................................................ 51 8.4 EMC 52 8.5 Mechanical Dimensions, Constructional Features ....................................................... 52 8.6 Electrical Features ........................................................................................................ 52


-----

###### 8.7 Testing........................................................................................................................... 52 8.7.1 Test Preparation ................................................................................................ 52 8.7.2 Testing ............................................................................................................... 52 8.7.3 Requirements..................................................................................................... 53 8.8 Functional Safety .......................................................................................................... 53 8.9 Interfaces, Connectors................................................................................................... 53 8.10 Marking ......................................................................................................................... 53 8.11 Installation..................................................................................................................... 53 8.12 Symbols......................................................................................................................... 53


-----

#### 1 Preface
In the light of the multi-vendor philosophy within KNX, KNX has opted for a standardization of a
number of crucial basic and system components/devices providing standardized interfaces not only to
manufacturers but also installers and users. However, it is still possible to design non-standardized
solutions.

In the following clauses, the underneath connotation is used:

**No.** **Abbreviation** **Meaning**

1 M Minimum requirements for certification – the ‘M’ requirements are
only a subset of the standardized/optional requirements respectively
recommendations – devices not complying to at least these
requirements cannot be certified

2 0 Optional requirement - when implemented, the KNX requirements
shall be met

3 F Recommendations (free to implement)

4 S Feature of standardized solutions

5 VI Visual inspection (test guidelines)

If the names of basic and system components/devices have been standardized respectively exclusively
assigned to this type of products (e.g. BCU), non-standardized versions may not bear this same name.
For the example given above, the system device would have to be named BAU or Bus Access Unit.

Note: For commercially available basic and system components/devices, consult the KNX Directory
of KNX registered/certified solutions.

|No.|Abbreviation|Meaning|
|---|---|---|
|1|M|Minimum requirements for certification – the ‘M’ requirements are<br>only a subset of the standardized/optional requirements respectively<br>recommendations – devices not complying to at least these<br>requirements cannot be certified|
|2|0|Optional requirement - when implemented, the KNX requirements<br>shall be met|
|3|F|Recommendations (free to implement)|
|4|S|Feature of standardized solutions|
|5|VI|Visual inspection (test guidelines)|


-----

#### 2 TP1 Centralised Power Supply Unit (PSU)
This paragraph deals with all information related to centralised Power Supply Unit (hereafter
abbreviated PSU). Two types of centralised PSU are defined: with or without integrated bus choke. In
this clause the requirements for the PSU without choke are given, while clause 4 contains the
additional requirements for the type with integrated choke.

The requirements for the TP1 decentralised power supply unit are given in clause 6.

##### 2.1 Communication Requirements

**No.** **Requirements** **M**

1 PSU and choke together shall act as a bus termination (for further details see choke M/S
specifications – clause 5).

2 The PSU bus output shall only be used for feeding the bus or bus devices. When an M/S
extra output is implemented it shall not affect the bus voltage in any way.

3 Two Power Supply Units shall be able to function together in one single bus line F/S
(physical segment). If one PSU is out of operation (e.g. missing mains), the other
PSU shall not be affected by the idle one.

##### 2.2 Electrical Safety

**No.** **Item** **Requirements** **M**

1 General The PSU shall comply with the requirements for F/S
group 1 devices as given in Volume 4/1 clause 3.4

2 Output voltage/ protection The PSU shall generate a SELV (Safe Extra Low M/S
measure Voltage) with a typical voltage of 30 V DC (28 V
31 V)1.

3 Overload The PSU shall be able to sustain any kind of overload. M/S

An independent overvoltage protection circuit shall be
provided, limiting the output voltage to a level
between 34 ± 1 V. The overvoltage protection shall be
ensured by the manufacturer (no test specified).

4 Separation of terminals Mains and bus terminals and/or sockets shall be F/S
located at opposite sides of the PSU.

5 non-SELV circuits/ Non-SELV circuits/terminals shall provide protective M/S
terminals separation from bus circuits/terminals according to

their respective rated insulation voltage. When
galvanic connection between non-SELV circuits and
bus circuits is required, the rules for protective
impedances shall be applied (acc. IEC 1140).

6 Rated Insulation Voltage RIV ≥ 250 V, Group 1 device F/S

1 The KNX TP1 signal is a mixed voltage with a DC part of max. 31 V DC and an AC signal (10 kHz) with max. +13 V and
min. –9 V (22 V peak-peak). This signal is within the SELV frame according to sub-clause 5.2.13 of EN 50178 (see also
EN 60950).

|No.|Requirements|M|
|---|---|---|
|1|PSU and choke together shall act as a bus termination (for further details see choke<br>specifications – clause 5).|M/S|
|2|The PSU bus output shall only be used for feeding the bus or bus devices. When an<br>extra output is implemented it shall not affect the bus voltage in any way.|M/S|
|3|Two Power Supply Units shall be able to function together in one single bus line<br>(physical segment). If one PSU is out of operation (e.g. missing mains), the other<br>PSU shall not be affected by the idle one.|F/S|

|No.|Item|Requirements|M|
|---|---|---|---|
|1|General|The PSU shall comply with the requirements for<br>group 1 devices as given in Volume 4/1 clause 3.4|F/S|
|2|Output voltage/ protection<br>measure|The PSU shall generate a SELV (Safe Extra Low<br>Voltage) with a typical voltage of 30 V DC (28 V-<br>31 V)1.|M/S|
|3|Overload|The PSU shall be able to sustain any kind of overload.<br>An independent overvoltage protection circuit shall be<br>provided, limiting the output voltage to a level<br>between 34± 1 V. The overvoltage protection shall be<br>ensured by the manufacturer (no test specified).|M/S|
|4|Separation of terminals|Mains and bus terminals and/or sockets shall be<br>located at opposite sides of the PSU.|F/S|
|5|non-SELV circuits/<br>terminals|Non-SELV circuits/terminals shall provide protective<br>separation from bus circuits/terminals according to<br>their respective rated insulation voltage. When<br>galvanic connection between non-SELV circuits and<br>bus circuits is required, the rules for protective<br>impedances shall be applied (acc. IEC 1140).|M/S|
|6|Rated Insulation Voltage|RIV≥ 250 V, Group 1 device|F/S|


-----

|7|Safety transformer|A safety transformer shall be used in the power supply<br>unit and shall comply with EN 60742 or EN 61558 in<br>addition to the KNX requirements.|M/S|
|---|---|---|---|
|8|Terminal for connection to<br>earth|If the terminal complies with the requirements for PE<br>terminals it shall be marked with<br>. <br>The yellow-green wire shall be used for connection to<br>PE.<br>If the terminal does not comply with the requirements<br>for PE terminals, it shall be marked with<br>.|M/S|
|9|Protective impedance to<br>earth|The protective impedance for symmetrical earthing of<br>the bus line shall follow Figure 1.<br>The dimensions of the used resistors shall be selected<br>to comply with the clearances and creepage distances<br>to ensure basic separation to earth.<br>The optional capacitor (≤ 3,3 nF) shall withstand 1,5<br>kV impulse 1,2/50 (or 1 kV AC)|M/S|


###### D+ C
 560k 560k

 560k

 3,3 nF

 560k

**Figure 1: Protective Impedance for Use in TP1 PSU's**

##### 2.3 Environmental Conditions

As regards environmental data, requirements and tests, the PSU shall comply with Volume 4/1 clause
2.1. Additionally, the following requirements apply:

|No|Item|Data and Requirements|M|
|---|---|---|---|
|1|ambient temperature range|3k5 (-5°C/+45°C)|F/S|


-----

|2|life time|10 years according<br>Volume 4/1 clause 2.5.3|M/S|
|---|---|---|---|


##### 2.4 EMC

As regards EMC, the requirements of Volume 4/1 clause 2.3 apply.

##### 2.5 Mechanical, Dimensions, Constructional Features

**No** **Requirements** **M**
**.**

1 When a PSU is equipped with LED’s to indicate normal operation respectively overload O/S
(e.g. short circuit), they shall be green respectively red coloured. For more information
on the conditions for overload, refer to Figure 3.

2 When a PSU is equipped with additional LED’s indicating overvoltage or disturbances O/S
(e.g. caused by radiated interference), they shall be yellow- coloured.

##### 2.6 Electrical Features
The PSU shall principally follow the U/I characteristic as shown in Figure 2.

**No** **Topic** **Data and Requirements** **M**

1 output voltage [UPSU ] 28 V –31 VDC M/S

2 output voltage ripple (idle) ≤ 100 mV (peak to peak) (DC to 1 MHz) M/S

3 nominal output current [IN] 160 mA / 320 mA / 640 mA / 960 mA/ 1280 mA M/S

4 Operating current [IO] Normal operation: 0 mA < IO < IN; UO=UPSU M/S

5 short circuit current[Is] see Figure 3 M/S

6 DC output impedance the output voltage ( item 1 ) shall remain constant in M/S
the range as laid down under item 3 of this table.

7 hold up time (mains interrupt under normal conditions (nominal input voltage output M/S
time)  [tholdup] current), an interruption of the mains power of

less/equal to 100 ms shall not affect the DC output
voltage of the bus power supply unit.

8 Transient response ripple voltage < 0,2 V (peak to peak) during load M/S
(Dynamic behaviour) changes

9 Symmetry to earth The bus voltage shall be earth symmetrical (see M/S
Protective Impedance to earth):
Figure 1 shows an example how this can be achieved.

10 leakage current – two parallel I ≤ 10 mA O/S
PSU

The underneath figure shows the range for the PSU output characteristics: The graph J to L shows the
static behaviour of the PSU

|No<br>.|Requirements|M|
|---|---|---|
|1|When a PSU is equipped with LED’s to indicate normal operation respectively overload<br>(e.g. short circuit), they shall be green respectively red coloured. For more information<br>on the conditions for overload, refer to Figure 3.|O/S|
|2|When a PSU is equipped with additional LED’s indicating overvoltage or disturbances<br>(e.g. caused by radiated interference), they shall be yellow- coloured.|O/S|

|No|Topic|Data and Requirements|M|
|---|---|---|---|
|1|output voltage [UPSU ]<br>|28 V –31 VDC|M/S|
|2|~~output voltage ripple (idle)~~|≤ 100 mV (peak to peak) (DC to 1 MHz)|M/S|
|3|nominal output current [IN]|160 mA / 320 mA / 640 mA / 960 mA/ 1280 mA|M/S|
|4|Operating current [IO]|Normal operation: 0 mA < IO < IN; UO=UPSU|M/S|
|5|short circuit current[Is]|see Figure 3|M/S|
|6|DC output impedance|the output voltage ( item 1 ) shall remain constant in<br>the range as laid down under item 3 of this table.|M/S|
|7|hold up time (mains interrupt<br>time)    [tholdup]|under normal conditions (nominal input voltage output<br>current), an interruption of the mains power of<br>less/equal to 100 ms shall not affect the DC output<br>voltage of the bus power supply unit.|M/S|
|8|Transient response<br>(Dynamic behaviour)|ripple voltage < 0,2 V (peak to peak) during load<br>changes|M/S|
|9|Symmetry to earth|The bus voltage shall be earth symmetrical (see<br>Protective Impedance to earth):<br>Figure 1 shows an example how this can be achieved.|M/S|
|10|leakage current – two parallel<br>PSU|I ≤ 10 mA|O/S|


-----

###### U

A

J

B

|H<br>K<br>D<br>I<br>G|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
||||||||||


F E


L


C


###### I


forbidden range for PSU U/I
characteristic

**Figure 2: TP1 PSU U/I Characteristic (drawing not in scale!)**

The letters in the above figure denote the following (see also requirements in clause 2.6):

A = upper voltage limit

B = lower voltage limit

C = maximum current limit

D = knee point

E = nominal current: up to E the minimum hold up time of the PSU is ensured.

F = 0 V current

G/I = knee point

K = overload indication

H = activation of overload protection

J to K = normal operation range


-----

|IN/mA|A|B|C|D|E|F|G|I|K|
|---|---|---|---|---|---|---|---|---|---|
|160|item 1 of clause 2.6|item 1 of clause 2.6|1 A|0,35 A|0,16 A|0,1 A|10 V<br>0,35 A|18 V<br>0,35 A|0,30 A|
|320|320|320|1,0 A|0,70 A|0,32 A|0,2 A|10 V<br>0,7 A|18 V<br>0,7 A|0,50 A|
|640|640|640|1,5 A|1,2 A|0,64 A|0,4 A|10 V<br>1,3 A|18 V<br>1,3 A|0,90 A|
|960|960|960|2,25 A|1,6 A|0,96 A|0,6 A|10 V<br>2,0 A|18 V<br>2,0 A|1,3 A|
|1280|1280|1280|3,0 A|1,9 A|1,28 A|0,8 A|10 V<br>2,65 A|18 V<br>2,65 A|1,6 A|


**Figure 3: U/I Characteristic – values for different types of TP1 PSU**

##### 2.7 Testing

###### 2.7.1 Environment

 • Testing shall be carried out in an environment that does not influence the test results.

 • Only calibrated test equipment shall be used.

 • Test set-ups shall be as small as possible (if not specified otherwise) to avoid voltage drops along the wires and parasitic induction.

 • The test shall be carried out in the temperature range stated for the product by the manufacturer in the data sheet.

 2.7.2 Test Equipment

 • PSU: Ajustable DC-Source ; 0-40 V; UPSU (Ripple) < 100 mV

 • Oscilloscope (BW min. 20MHz) : Standard Ri = 1 MΩ/20 pF

 • Function Generator: Standard; Ri < 50 Ω

 • Variable Resistors to simulate different loads

 • Variable AC source to simulate tolerances of mains

 • DC-Voltmeter Ri >10 MΩ/V

 • LPF Bandwidth limitation [0-159kHz](see below)


-----

###### 1K

 IN 1nF OUT

**Figure 4: Lowpass Filter (fg = 159 kHz)**

###### 2.7.3 Testing of Output Voltage 

 • Test Setup: 

 +D I

## A

###### PSU Load
 Mains U[PSU] V R

L

N

Earth -C

**Figure 5: Test Setup U/I**

###### • Testing:  Voltage UPSU shall be monitored during variation of Resistor R from Rmax = ∞ (idle state ) to  Rmin = (UPSU / IN ) * 0,9 Variation of mains from max. to min. voltage

 • Requirements:  according to item 1, clause 2.2 and 2.6.

 2.7.4 Testing of Output Voltage Ripple 

 • Test Setup: 

|U PSU|A<br>V<br>L o a d|
|---|---|

|ains|PSU<br>L<br>N<br>Earth|+D I<br>A<br>V<br>L o a d<br>U PSU<br>-C|
|---|---|---|

|Col1|Col2|
|---|---|


###### Mains


###### PSU AC Load

U[PSU] R

Scope

Earth -C

**Figure 6: Test Set-up for Voltage Ripple**

|CH 1<br>AC|CH2|Col3|
|---|---|---|

|Mains|PSU<br>L<br>N<br>Earth|+D<br>LPF<br>CH 1 CH2<br>AC L o a d<br>U PSU<br>Scope<br>-C|
|---|---|---|
||||
||||



###### • Testing: UPSU shall be monitored with an Oscilloscope (use LPF) during variation of


-----

###### Resistor R from  Rmax = ∞ (idle state ) to  Rmin = UPSU / IN Channel display: AC. Reading out peak-peak value

 • Requirements:  UPSU shall be lower or equal than the value of item 2 of clause 2.6.

 2.7.5 Testing of two parallel PSUs, Leakage Current

 • Test Setup:


###### -C


###### -C

|Mains|PSU-1<br>L<br>N<br>Earth|+D I +D<br>A<br>UP SU<br>-C -C|PSU-2<br>L<br>N<br>Earth|Col5|
|---|---|---|---|---|
||||||


**Figure 7: Test Set-up of two parallel PSUs, Leakage Current**

###### • Testing:  The leakage current shall be measured 

 • Requirements: The current I shall be lower or equal than the value of item 10 of clause 2.6.

 2.7.6 Testing of PSU’s Dynamic Behavior

 • Test Setup: 

 +D

LPF

###### PSU CH1 CH2AC R2

U[PSU] R1 Generator
###### Mains L Scope function: Pulse

N periode: 104us

Earth -C BUZ 72 pulswidth: 35us

**Figure 8: Test Setup for Dynamic Behaviour**

###### • Testing: R1 = ∞ (idle state ) to Rmin = [UPSU / IN] * 0,9   (INOM) R2 = 140Ω (IPulse ≈ 200mA); the transistor behaves like a switch UPSU shall be monitored with an Oscilloscope.  Channel display: AC. Reading out differential voltage of pulse and pause.

 • Requirements:  UPSU (AC) shall be in the limit given in item 8 of clause 2.6. 

|1 CH2|Col2|
|---|---|

|Mains|PSU<br>L<br>N<br>Earth|+D<br>LPF<br>CH 1 CH2 R2<br>AC<br>R1<br>U PSU<br>Scope<br>-C BUZ 72|
|---|---|---|
||||


-----

###### 2.7.7 Testing of PSU’s Hold-Up Time

 • Test Setup:

 +D I

 Mains PSU Load
switch U[PSU] V R

L

N

Earth -C

**Figure 9: Test Setup for Hold Up Time**

###### • Testing: Switch closed; R= (UPSU / IN ) * 0,9 Switch open, measure time till UPSU drops below 95% of original value

 • Requirements:  tholdup shall be more or equal than the value of item 7 of clause 2.6.

 2.7.8 Testing of U/I Characteristic 

 • Test Setup: see Figure 5

 • Testing:  Voltage UPSU and current I shall be monitored during variation of Resistor R from Rmax = ∞ (idle state ) to  Rmin = 0 (short circuit)

 • Requirements:  resulting graph shall comply with U/I characteristic in Figure 2.

##### 2.8 Functional Safety

Under consideration

##### 2.9 Interfaces, Connectors

|Mains<br>switch|PSU<br>L<br>N<br>Earth|+D I<br>V<br>L o a d<br>U PSU<br>-C|
|---|---|---|
||||

|No.|Requirements|M|
|---|---|---|
|1|Data rail connection|F/S|
|2|In case of a data rail type design, the dimensions of the PSU shall be in accordance<br>to DIN 43880 (CLC TC23E Report R023-01) and shall allow snapping the device<br>onto the DIN rail of which the dimensions correspond to those laid down in Volume<br>9/1, Connector Type 6.1|O/S|


-----

|3|In case of data rail connection, the connection to the bus shall be ensured either<br>• by means of Type 6.1 Connector connected to the outer tracks of the data<br>rail or<br>• by the red/dark-gray Type 5.1 Connector (Bus-Connector)<br>• or both|O/S|
|---|---|---|
|4|In case of other than data-rail connection the connection to the bus shall be ensured<br>by the red/dark-gray Type 5.1 Connector (Bus-Connector) only.|O/S|
|5|Additional (choke) outputs shall only use the red/dark-gray Type 5.1 connector.|O/S|
|6|Additional auxiliary non-SELV outputs shall not use KNX standardized Connector<br>Types.|M/S|


##### 2.10 Marking

**No.** **Requirements**

1

2

3

4
etc.

**Power Supply +**

**Bus +**

**Bus -**

**Power Supply -**

|No.|Requirements|M|
|---|---|---|
|1|The function of the LED’s shall be clearly indicated both on the device itself and in<br>the manufacturer’s data sheet.|O/S|
|2|The PSU shall be labelled according to the example in Figure 10. The technical data<br>shall contain: input voltage range, the AC symbol, frequency, nominal DC output<br>voltage, nominal output current, temperature range and the PSU symbol. The<br>manufacturer’s data sheet shall moreover contain details on maximum mains power<br>consumption, short circuit mains protection and maximum output current.|M/S|
|3|All outputs for bus voltage shall be marked with the polarity.|M/S|
|4|Additional auxiliary non-SELV outputs shall be clearly marked with voltage, power,<br>etc.|M/S|


**L** **N**


**Red**

**Green**

**Yellow**


**30 V DC**

|Col1|Col2|L N|Col4|Col5|
|---|---|---|---|---|
|||**mains** <br>**earth**|**mains** <br>**earth**||
||||<br>||
||||**Technical data** <br>**Power Supply**|**Technical data** <br>**Power Supply**|
||||<br> <br>**overload**||
||||<br> <br> <br>|<br> <br> <br>|
||||**mains** <br> <br>**230 V** <br>  <br>**30 V** <br>||
||||<br> <br>**50...60 Hz** <br> <br>**I nom**|<br> <br>**50...60 Hz** <br> <br>**I nom**|
||||**overvoltage** <br> <br> <br> <br>||
|||**Manufacturer** <br>**0...45 °C**|**Manufacturer** <br>**0...45 °C**|**Manufacturer** <br>**0...45 °C**|
|||**30 V DC**|**30 V DC**|**30 V DC**|


**Figure 10: Example of Electrical Connection and Labeling of PSU**


-----

##### 2.11 Installation

**No.** **Requirements** **M**

1 When a PSU without integrated bus choke is used, an additional external choke shall
closely be mounted to the PSU and connected to feed a twisted pair physical
segment.

2 Such PSU shall not be connected to the Bus without choke

3 Two PSUs may be mounted in parallel or used with one choke, under the condition
that the sum of the short circuit currents does not exceed 3 A[2].

4 Unused connections of the PSU and choke shall not impair protective separation. If M/S
necessary they shall be protected by additional appropriate covers.

5 The cable length between PSU and device shall be less than or equal 350m.

##### 2.12 Symbols
The following symbols are defined for installation schematics:

**Fig. 9/2- 27: PSU Symbols**

2 The short circuit currents of all connected PSUs (including decentralized power supplies) may never exceed
3A. The short circuit current of a 1280 mA PSU is already by specification set to 3A (see Figure 3 in Volume
9/2).

|No.|Requirements|M|
|---|---|---|
|1|When a PSU without integrated bus choke is used, an additional external choke shall<br>closely be mounted to the PSU and connected to feed a twisted pair physical<br>segment.||
|2|Such PSU shall not be connected to the Bus without choke|Such PSU shall not be connected to the Bus without choke|
|3|Two PSUs may be mounted in parallel or used with one choke, under the condition<br>that the sum of the short circuit currents does not exceed 3 A2.|Two PSUs may be mounted in parallel or used with one choke, under the condition<br>that the sum of the short circuit currents does not exceed 3 A2.|
|4|Unused connections of the PSU and choke shall not impair protective separation. If<br>necessary they shall be protected by additional appropriate covers.|M/S|
|5|The cable length between PSU and device shall be less than or equal 350m.||


-----

#### 3 Battery Back-up system

|No.|Requirements|M|
|---|---|---|
|1|If either a battery backup system is charged from the bus or from the mains, it shall<br>comply with the electrical data as laid down in clause 2.6 above. The effect on the<br>behaviour of the PSU resulting from this battery backup system shall be clearly<br>stated in the manufacturer’s data sheet.|O|


-----

#### 4 PSU with integrated Choke
For choke specific requirements consult paragraph 5.

|No.|Requirements|M|
|---|---|---|
|1|A PSU with integrated choke is a Group 1 device|O|
|2|The connection to data rail shall be ensured by Type 6.1 connector to inner tracks of<br>the data rail.|O|
|3|When the PSU with integrated choke is equipped with an intermediate connection<br>point for 30 V DC it shall be clearly marked both with ‘30 V DC’ and the polarity. In<br>this case Connector Type 5.1 Yellow/White shall be used for connection.|O|


-----

#### 5 TP1 Choke
The choke connects the bus with the PSU. The principle of connection is shown in Figure 11. The
choke ensures de-coupling of power feeding and data signalling.

The choke plays an essential role in the generation of analogue data signals.
During the equalization part it restores the energy as used in the active part of the 0-bit.


D +


A

bus cable
or DIN rail


mains (PSU)

##### 5.1 Communication

**No.** **Requirements**

1
impedance.

##### 5.2 Electrical Safety


-15 V C    - B

**Figure 11: Connection of Choke Module**

|Col1|Col2|D +15 V|Col4|A +|
|---|---|---|---|---|
|ains|Power<br>Supply<br>Unit<br>(PSU)|D <br>+15 V||A <br>+|
|ains|Power<br>Supply<br>Unit<br>(PSU)|C <br>-15 V <br>Earth|Choke<br>Module|B <br>- <br>b<br>or|
|ains|Power<br>Supply<br>Unit<br>(PSU)||||

|No.|Requirements|M|
|---|---|---|
|1|The output impedance of the choke shall be matched to the standard bus-cable<br>impedance.|M/S|

|No.|Item|Requirements|Col4|
|---|---|---|---|
|1|General|The choke shall comply with the requirements for<br>group 2 devices as given in Volume 4/1 clause 3.5|M/S|
|2|protection measure/nominal<br>voltage|SELV (Safe Extra Low Voltage) (21 V-31 V).|M/S|
|3|Rated Insulation Voltage|RIV≥ 250 V, Group 2 device|F/S|
|4|Creepage distance (KNX<br>standard) between bus<br>contacts and outer surface<br>when mated (Usage class B<br>– basic insulation)|min 3 mm|M/S|
|5|Clearance distance (KNX<br>standard) between bus<br>contacts and outer surface<br>when mated (Usage class B<br>– basic insulation)|min 3 mm|M/S|


-----

##### 5.3 Climatic Conditions
As regards environmental data, requirements and tests, the choke shall comply with Volume 4/1 clause
2.1. Additionally, the following requirements apply:

**No** **Topic** **Data and Requirements** **M**

1 ambient temperature range 3k5 (-5°C/+45°C) F/S

2 life time 10 years according Volume 4/1 clause 2.5.3 M/S

##### 5.4 EMC

As regards EMC, the requirements of Volume 4/1 clause 2.3 apply.

|No|Topic|Data and Requirements|M|
|---|---|---|---|
|1|ambient temperature range|3k5 (-5°C/+45°C)|F/S|
|2|life time|10 years according Volume 4/1 clause 2.5.3|M/S|

|No.|Requirements|M|
|---|---|---|
|1|In order to improve noise immunity and decrease radiation on the bus, the choke<br>shall be electrical symmetrical designed.|F/S|


###### D

 A
 B (Bus
 C (

3 1 100

47

4 BC327

5 220n

10K

47 6 2 1N4148


TP 64/TP 256

W3-4

bifilar Ri < 1.0

W5-6

L W3-4+ LW5-6= 4,8 mH    for I  =0 to rated DC

L = 5,0 mH
W1-2

W1-2
=1,04
W3-4 + W5-6

Tol=±10%

**Figure 12: Electrical Circuit of a Choke Module TP (informative)**

##### 5.5 Mechanical, Dimension, Constructional

|No.|Requirements|M|
|---|---|---|
|1|The choke shall be equipped with a reset switch or reset push button, which cuts off<br>the PSU from the bus line and short-circuits the bus|F/S|
|2|The reset status caused by a reset switch or reset push button shall be indicated by<br>means of an extra LED. It shall be red coloured.|F/S|


-----

##### 5.6 Electrical

**No** **Topic** **Data and Requirements** **M**

1 input voltage See PSU output voltage.

2 maximum current 3 A for stand-alone chokes M/S

matching the maximum current of the PSU for
integrated chokes

3 nominal current for stand-alone chokes M/S

IN ≥ 1000 mA and

IN ≥ the current at point C (see Figure 2) of the
used PSU(s)

For integrated chokes:

Matching the U/I Characteristic of the used PSU
for UPSU ≥ 20V

4 DC voltage drop UDA = UBC ≤ 0,75 V for IN ≤ 640 mA M/S
(for nominal load) ≤ 1,25 V for IN ≥ 640 mA

5 reset switch or reset push button shall be able to carry and switch 3 A O/S

##### 5.7 Testing

###### 5.7.1 Environment

 • Testing shall be carried out in an environment that does not influence the test results.

 • Only calibrated test equipment shall be used.

 • Test set-ups shall be as small as possible (if not specified otherwise) to avoid voltage drops along the wires and parasitic induction.

 • The test shall be carried out in the temperature range stated for the product by the manufacturer in the data sheet.

 5.7.2 Test Equipment

 • PSU: Ajustable DC-Source ; 0-40 V; UPSU (Ripple) < 100 mV

 • Oscilloscope (BW min. 20MHz) : Standard Ri = 1 MΩ/20 pF

 • Function Generator: Standard; Ri < 50 Ω

 • Variable Resistors to simulate different loads

 • Current Probe (galvanic separated)

 • DC-Voltmeter Ri >1 MΩ/V

 • Isolated Amplifier

|No|Topic|Data and Requirements|M|
|---|---|---|---|
|1|input voltage|See PSU output voltage.||
|2|maximum current|3 A for stand-alone chokes<br>matching the maximum current of the PSU for<br>integrated chokes|M/S|
|3|nominal current|for stand-alone chokes<br>IN ≥ 1000 mA and<br>IN ≥ the current at point C (see Figure 2) of the<br>used PSU(s)<br>For integrated chokes:<br>Matching the U/I Characteristic of the used PSU<br>for UPSU ≥ 20V|M/S|
|4|DC voltage drop UDA = UBC<br>(for nominal load)|≤ 0,75 V for IN ≤ 640 mA<br>≤ 1,25 V for IN ≥ 640 mA|M/S|
|5|reset switch or reset push button|shall be able to carry and switch 3 A|O/S|


-----

###### 5.7.3 Testing of Static Parameters

 • Test Set-up:


Mains
L


U[PSU] **Choke** Load R

###### -C -B

## V

**Figure 13: Test Setup Voltage Drop**

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||V|V|V|V|
|ns|PSU <br>N <br>L <br>**AUX**|U PSU<br>+D||**Choke**||A <br>I <br>L o a d <br><br>+A <br>-B|
||||||||
||||||||
|||-C|||||
|||-C|||||
|||-C|V|V|V|V|



###### • Testing:  a) The voltages (UCB ) and (UDA ) shall be measured at UPSU =29 V DC  Rmax = ∞ (idle state ) to  Rmin = (UPSU / IN ) * 0,9 b) I=IM (Adjusted by R), (Resistor R =12Ω ; UPSU = 29 V DC)

 • Requirements: a) UCB = UDA  (tolerance ± 5%)  UCB = UDA   (Voltages shall be lower or equal than the value of item 4 in table of clause 5.6) b) no damage after this test

 5.7.4 Testing of Dynamic Parameters

 • Test Setup:


###### +D +A IP

S1

##### AUX

###### PSU UPSU Choke UP L1 CH1 CH2AC  AC

R1
L Scope

N

Earth -C -B

**Figure 14: Test Setup for Dynamic Behaviour**

###### • Testing:  UP shall be tuned to 29V DC UP and IP shall be monitored with an Oscilloscope 


Generator
function: Pulse
period: 104us
pulswidth: 35us

|CH1<br>AC|CH2<br>AC|Col3|
|---|---|---|

|Mains|AUX<br>PSU<br>L<br>N<br>Earth|+D|Col4|+A I P function: Pulse<br>period: 104us<br>pulswidth: 35us<br>S1<br>L1<br>U P CH1 CH2 R2<br>AC AC<br>R1<br>Scope<br>-B BUZ 72|
|---|---|---|---|---|
|Mains|PSU <br>**AUX** <br>N <br>Earth <br>L|-C <br>U PSU|Choke|Choke|
||||||
||||||
||||||


-----

###### R2 = 220Ω R1 = (UP/ IN ) * 0,9 L1 = 4,8 mH (at rated DC current), Ri < 2Ω Requirements: Point A to D of the registered wave forms (S1 open/closed) shall comply to the values as stated in underneath figures and tables.

 D

 A
 U P

 C B

 I P

**Figure 15: Voltage and Current of Choke (S1 = open)**

Point Voltage

A 30 V (± 5%)

B 24,2 V (± 5%)

C 24,4 V (± 5%)

D 34 V (± 5%)

current IP 105mA (+/- 10%)

**Figure 16: Electrical Data of Choke (S1 = open)**


-----

20 s
2.00 V

20 s
100mA


###### U P

 I P


**Figure 17: Voltage and Current of Choke (S1 = close)**

Point Voltage

A 29,5 V (+/- 5%)

B 24,3 V (+/- 5%)

C 25,4 V (+/- 5%)

D 36 V (+/- 5%)

current IP 105mA (+/- 10%)

**Figure 18: Electrical Data of Choke (S1 = close)**

###### 5.7.5 Testing of Symmetry

Test shall be carried out in accordance with Handbook Volume 4/2 EMC Test Set-ups clause 3.3 and
4.3.


-----

###### 5.7.6 Testing of Reset

 • Test Set-up:

 PSU
 Main L


Reset Norm al

###### +A

#### Choke V

###### -B

LED

**Figure 19: Test Setup**


Mains
L

|Col1|Col2|Col3|Col4|R e s e t    N o r m a l|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|||||||||
|Main|PSU <br>N <br>Earth <br>L|+D|+D|+ A|+ A|+ A|PSU <br>N <br>R <br>L <br>M<br>**A** **U** **X** <br>U A U X|
|Main|PSU <br>N <br>Earth <br>L|+D|+D|||||
|Main|PSU <br>N <br>Earth <br>L|U P S U <br>|V|**C** **h** **o** **k** **e**|<br>|<br>V|R <br>U A U X|
|Main|PSU <br>N <br>Earth <br>L|-C|-C|||||
|||||||||
|||||||||
|||||||||



###### • Testing:  UAUX shall be tuned to 10V DC ; R = 3,3Ω ( I ≈ 3A )  Switch or push button to reset position

 • Requirements: UPSU ≥ 28V (reset switch or reset push button/UPSU not measured) UAux < 0,5V LED (red) shall illuminate. no damage of reset switch or reset push button and choke module after this test 

##### 5.8 Functional Safety

Under consideration

##### 5.9 Interfaces/ Connectors

|No.|Requirements|M|
|---|---|---|
|1|In case of DIN-rail type design, the dimensions of the choke shall be in accordance<br>with EN 43880 and allow snapping the device onto the DIN rail.|O/S|
|2|When stand-alone (not integrated in a PSU), data rail connecting is recommended.|O/S|
|3|In case of data rail contacting, connection to the bus shall be ensured by KNX<br>Connector type 6.1. The outer tracks shall be connected to the choke input (PSU);<br>the inner tracks to the choke output (Bus).|F/S|
|4|In case of non-data-rail contacting, the choke input and output shall be equipped with<br>KNX Connector type 5.1. The input of the choke shall be equipped with<br>white/yellow and the output with red/dark gray connectors.|O/S|


-----

##### 5.10 Marking

**No.** **Requirements**

1

20.

Power Supply

Bus +

Bus 
Power Supply

|No.|Requirements|M|
|---|---|---|
|1|Labelling on the choke shall contain at least the following data: manufacturer, the<br>product name, maximum current and symbol. The wording ‘reset’ next to the reset<br>LED as well as additional labelling of the reset button is recommended. Input,<br>Output and polarity shall be clearly labelled in case of a non-data-rail type design.<br>An example of electrical connection and labelling of the choke is shown in Figure<br>20.|M/S|


reset switch

|Col1|Col2|R|Col4|Col5|Col6|
|---|---|---|---|---|---|
|||||||
|||||||
|||||||
|||||||
|||||||
|||||||
|||||||
|||||||
|||||||
|||||||


**Figure 20: Example of Electrical Connection and Labelling of Choke**

##### 5.11 Installation

**No.** **Requirements**

1 A reset time of at least 20 s is recommended to the user, to ensure that all bus
devices within a segment are reset

2 The reset switch or reset push button shall not be directly accessible, e.g. in case of
DIN-rail mounting protected by means of the distribution board cover, if a cover is
not provided by the device.

3 A maximum of two chokes may be mounted in one bus line. The minimum distance
between the chokes shall be at least 200 m.

##### 5.12 Symbols
The following symbols are defined for installation schematics:

**Figure 21: Symbol for Standalone Choke resp. Power Supply + Choke**

|No.|Requirements|M|
|---|---|---|
|1|A reset time of at least 20 s is recommended to the user, to ensure that all bus<br>devices within a segment are reset||
|2|The reset switch or reset push button shall not be directly accessible, e.g. in case of<br>DIN-rail mounting protected by means of the distribution board cover, if a cover is<br>not provided by the device.|O/S|
|3|A maximum of two chokes may be mounted in one bus line. The minimum distance<br>between the chokes shall be at least 200 m.|M/S|


-----

#### 6 TP1 Decentralized Power Supply Unit (DPSU)

##### 6.1 Scope
This paragraph deals with all information related to Decentralized Power Supply Unit (hereafter
abbreviated DPSU) with integrated bus choke.

This specification is valid for DPSUs up to 80 mA nominal output current. If needed in the future,
DPSUs with higher output current would be specified in a separate clause.

##### 6.2 Introduction

This document specifies a cost-effective solution to power the TP1 bus line. Instead of the centralized
bus power supply, the bus is powered in a distributed way by some devices which contain each a
Decentralized Power Supply Unit (DPSU). One DPSU provides less power than a standard central bus
power supply and only a few devices with limited power consumption can be fed by one DPSU.

Up to eight DPSUs may be activated together in one single bus line (physical segment). Devices with
DPSU feature can allow to disable the DPSU manually (e.g. by jumper or configuration of a
parameter). Activation of more than eight DPSUs in one single bus line does not have a destructive
effect (no over-current protection necessary) but damping of the signal increases and communication
may be disturbed.

DPSUs can be located at any point of the bus line. There are no limitations concerning minimal cable
distances between two DPSUs or DPSU and standard central PSU.

Each DPSU has a fan-in value according to clause 6.10.9 “Testing of Dynamic Parameters and
Busload”.

**Dn(S)** **D5(S)**

**D4(R)**

**D2(P)**

**D3(R)**

**D1(S)**

(S): device with DPSU
(R): device remotely powered from the bus
(P): passive device (neither DSPU nor powered from the bus)

**Figure 22 - TP1 network with multiple DPSUs**

The usage of DPSU instead of a central bus power supply on a TP1 network is appropriate in the
following cases:

   - small system with few devices, or

   - short distances between devices: limited total cable length is dependent on the number of
devices with DPSU, or

   - only a few devices to be powered from the bus: total available average supply current is
limited and dependent on the number of devices with DPSU.


-----

Application examples for DPSU operation:

   - Simple heating system in a single family home with one heating zone. Such a heating system
may consist in its simplest form of one heating controller with DPSU (S) and one room unit
(R).

   - Single family home heating system with individual room control. Such a heating system may
consist of one boiler controller with DPSU (S) and has per individually controlled room one
room unit/controller with DPSU (S) and some radiator valve actuators (P).

Several types of DPSU with different power capability (supply current) are specified. Different types
of DPSU can be mixed in one single bus line. It is also possible to combine DPSU with up to two
Standard Power Supply Units.

The number and types of necessary DPSU depends on:

   - the needed total supply current for the devices to be fed from the bus, and

   - the required total cable length.

DPSU is usually part of a communicating device but stand alone DPSU devices (without microcontroller, not communicating) are also possible.

NOTE Some technical requirements and test setup are different for DPSU and central PSU (as
specified in 2.7). These differences are intentional and have technical reasons.

   - Unlike central PSU, the DPSU shall always include the choke module.

   - There shall be no minimum cable distance between DPSUs. Therefore the output impedance
of DPSU is higher to distribute the load more uniformly.

   - DPSUs and central PSU may be operated in parallel. The specified typical output voltage of
DPSU is lower in comparison with central PSU. This decreases the probability that DPSUs
are working in the limiting part of the output characteristics because central PSU is feeding
the bus devices.

##### 6.3 Communication Requirements

**Table 1 – Communication Requirements for DPSU**

|Nr.|Requirements|M|
|---|---|---|
|1|DPSU with integrated choke shall act as a bus termination.|M/S|
|2|The DPSU bus output shall only be used for feeding the bus or bus devices.|M/S|
|3|Eight Decentralized Power Supply Units shall be able to function together in one<br>single bus line (physical segment).|M/S|
|4|It shall be possible to switch off resp. to unlink the DPSU from the bus, e.g. by an<br>electronic or a mechanical switch. If one DPSU is out of operation, the other DPSUs<br>and PSUs shall not be affected by the idle one. This feature shall be stated in the<br>datasheet of the product.|O/S|
|5|Eight Decentralized – and two Standard Power Supply Units are able to function<br>together in one single bus line (physical segment). This feature shall be stated in the<br>datasheet of the product.<br>Mandatory feature if the DPSU cannot be switched off according to item 4.<br>Optional feature if the DPSU can be switched off according to item 4.|M <br>O|


-----

|Nr.|Requirements|M|
|---|---|---|
|6|It shall be possible to place DPSU at any point of the bus line (no minimal cable<br>distance between two DPSU or between DPSU and standard central PSU).<br>If one DPSU is out of operation (e.g. missing mains), the other PSUs/DPSUs shall not<br>be affected by the idle one|M/S|


##### 6.4 Integrated TP Choke
The integrated choke connects the bus with the output voltage of the PSU. The principle of connection
is shown in Figure 23. The choke ensures decoupling of power feeding and data signalling.

The choke plays an essential role in the generation of analogue data signals. During the equalisation
part it restores the energy as used in the active part of the 0-bit.

The dimension shall be done so, that the requirements of 6.10.9 “Testing of Dynamic Parameters and
Busload” are fulfilled. Otherwise the implementation is free. An example is shown in Figure 24.

###### DPSU

D + A


mains


Supply DPSU

TP1 bus cable

Unit Choke

or DIN rail

(PSU) Module

C        - B

**Figure 23 - Example Internal Connection of DPSU**

L1

R1
R1

L1

L1min = 7,5 mH

R1min = 187 Ohm

**Figure 24 - DPSU Choke Module**

|Col1|Power<br>Supply<br>Unit<br>(PSU)|
|---|---|

|Col1|L<br>1<br>R<br>1<br>R<br>1<br>L<br>1|Col3|
|---|---|---|
||||


-----

##### 6.5 Electrical Safety

acc. to EN60950  max. leakage current 125 µA (max. 250 µA at reverse connection N-L)

acc. to EN50491-3  safety separation

acc. to IEC60664-1  over-voltage category III; pollution degree 2

|Nr.|Item|Requirements|M|
|---|---|---|---|
|1|General|The DPSU shall comply with the requirements for<br>group 1 devices as given in Volume 4/1 clause 3.4.|F/S|
|2|Output voltage/ protection<br>measure|The DPSU shall generate a SELV (Safe Extra Low<br>Voltage) with a typical voltage of 29 V DC (21 V to<br>31 V).<br>NOTE  In a configuration with PSUs and DPSUs in parallel,<br>without the maximum number of bus devices, a typical voltage<br>of 29 V decreases the probability that the DPSUs are working in<br>the limiting part of the output characteristic because the central<br>PSUs are feeding the bus devices.|M/S|
|3|Overload|The DPSU shall be able to sustain any kind of<br>overload.<br>An independent overvoltage protection circuit shall<br>be provided, limiting the output voltage. The<br>overvoltage protection has to be guaranteed by the<br>manufacturer. There is no test specified.|M/S|
|4|Separation of terminals|Mains and bus terminals and/or sockets shall be<br>located at opposite sides of the DPSU.|F/S|
|5|non-SELV circuits/ terminals|Non-SELV circuits/terminals shall provide<br>protective separation from bus circuits/terminals<br>according to their respective rated insulation voltage.<br>When galvanic connection between non-SELV<br>circuits and bus circuits is required, the rules for<br>protective impedances shall be applied (acc. IEC<br>1140). (EN50491-3)<br>PELV circuits shall provide basic separation.|<br>M/S|
|6|Rated Insulation Voltage|RIV≥ 250 V, Group 1 device|F/S|
|7|Safety transformer|A safety transformer shall be used in the power<br>supply unit and shall comply with EN 60742 or EN<br>61558 in addition to the KNX requirements.|M/S|
|8|Terminal for connection to<br>earth|If the terminal complies with the requirements for<br>PE terminals it shall be marked with<br>. <br>The yellow-green wire shall be used for connection<br>to PE.<br>If the terminal does not comply with the<br>requirements for PE terminals, it shall be marked<br>with<br>.|M/S|


-----

|Nr.|Item|Requirements|M|
|---|---|---|---|
|9|General|The choke shall comply with the requirements for<br>group 2 devices as given in Volume 4/1 clause 3.5|M/S|
|10|Creepage distance (KNX<br>standard) between bus<br>contacts and outer surface<br>when mated (Usage class B –<br>basic insulation)|min. 3 mm|M/S|
|11|Clearance distance (KNX<br>standard) between bus<br>contacts and outer surface<br>when mated (Usage class B –<br>basic insulation)|min. 3 mm|M/S|


##### 6.6 Environmental conditions
As regards environmental data, requirements and tests, the DPSU shall comply with Volume 4/1
clause 2.1. Additionally, the following requirements apply:

**Nr.** **Item** **Data and Requirements** **M**

1 ambient temperature range 3k5 (-5°C to 55°C) (-5°C to 45°C for flush- F/S
mounting)

2 life time 10 years according Volume 4/1 clause 2.5.3 M/S

##### 6.7 EMC

As regards EMC the requirements according to EN50491-5-2 apply with the exception of:

**EMC immunity acc. to EN61000-6-1**
electrostatic discharge acc. to EN61000-4-2 4/8 kV (Contact-/Air-Discharge) Crit. B
n. EN61000-6-1

RF-fields acc. to EN61000-4-3 3 V/m  80 MHz to 1 GHz, Crit. A

fast transients (burst) acc. to EN61000-4-4 1 kV/ 1 kV(mains, bus), Crit. B

Surge acc. to EN61000-4-5 2 kV common mode / 1 kV differential
mode, Crit. B

RF-voltage acc. to EN61000-4-6 0,15 MHz to 80 MHz  3Vrms
80 % AM 1kHz, Crit. A

voltage dips a. voltage interruptions acc. to EN61000-4-11 ∆V 30 %; ∆t 300 ms performance
criteria B
∆V 100%; ∆t 100 ms performance criteria B

**EMC emission acc. to EN61000-6-3**
radio emission interference voltage acc. to EN55022  class B

radio emission interference field acc. to EN55022  class B
strength

The exceptions apply due to the home environment.

In addition all requirements of Part 4/2 apply.

|Nr.|Item|Data and Requirements|M|
|---|---|---|---|
|1|ambient temperature range|3k5 (-5°C to 55°C) (-5°C to 45°C for flush-<br>mounting)|F/S|
|2|life time|10 years according Volume 4/1 clause 2.5.3|M/S|

|EMC immunity acc. to EN61000-6-1|Col2|
|---|---|
|electrostatic discharge|acc. to EN61000-4-2<br>4/8 kV (Contact-/Air-Discharge) Crit. B<br>n. EN61000-6-1|
|RF-fields|acc. to EN61000-4-3<br>3 V/m   80 MHz to 1 GHz, Crit. A|
|fast transients (burst)|acc. to EN61000-4-4<br>1 kV/ 1 kV(mains, bus), Crit. B|
|Surge|acc. to EN61000-4-5<br>2 kV common mode / 1 kV differential<br>mode, Crit. B|
|RF-voltage|acc. to EN61000-4-6<br>0,15 MHz to 80 MHz   3Vrms<br>80 % AM 1kHz, Crit. A|
|voltage dips a. voltage interruptions|acc. to EN61000-4-11<br>∆V 30 %;∆t 300 ms performance<br>criteria B<br>∆V 100%;∆t 100 ms performance criteria B|
|||
|**EMC emission acc. to EN61000-6-3**|**EMC emission acc. to EN61000-6-3**|
|radio emission interference voltage|acc. to EN55022   class B|
|radio emission interference field<br>strength|acc. to EN55022   class B|


-----

##### 6.8 Mechanical, Dimensions, Constructional Features

**Nr.** **Requirements**

1 If a DPSU is equipped with LEDs to indicate normal operation respectively overload
(e.g. short circuit), they shall be green respectively red coloured. For more information
on the conditions for overload, refer to Table 2.

2 If a DPSU is equipped with additional LEDs indicating overvoltage or disturbances
(e.g. caused by radiated interference), they shall be yellow coloured.

3 The DPSU shall be equipped with a reset switch or reset push button, which shortcircuits the bus.

If a reset switch is used, additionally the DPSU shall be cut off from the bus line.

4 The reset status caused by a reset switch shall be indicated by means of an extra LED.
It shall be red coloured.

##### 6.9 Electrical Features

The DPSU shall principally follow the U/I characteristic as shown in Table 2.

|Nr.|Requirements|M|
|---|---|---|
|1|If a DPSU is equipped with LEDs to indicate normal operation respectively overload<br>(e.g. short circuit), they shall be green respectively red coloured. For more information<br>on the conditions for overload, refer to Table 2.|O/S|
|2|If a DPSU is equipped with additional LEDs indicating overvoltage or disturbances<br>(e.g. caused by radiated interference), they shall be yellow coloured.|O/S|
|3|The DPSU shall be equipped with a reset switch or reset push button, which short-<br>circuits the bus.<br>If a reset switch is used, additionally the DPSU shall be cut off from the bus line.|O/S|
|4|The reset status caused by a reset switch shall be indicated by means of an extra LED.<br>It shall be red coloured.|O/S|

|No|Topic|Data and Requirements|M|
|---|---|---|---|
|1|output voltage [UDPSU ]|27 V to 31 V DC for DPSU (choke module included),<br>see points A, B in Table 2.<br>NOTE 1 DPSUs and central PSU may be operated in parallel. The<br>specified minimum output voltage of DPSU is lower in comparison<br>with central PSU. This decreases the probability that DPSUs are<br>working in the limiting part of the output characteristics because<br>central PSU is feeding the bus devices.|M/S|
|2|output voltage ripple (idle)|≤ 100 mV (peak to peak) (DC to 1 MHz)|M/S|
|3|nominal output current [IN]|3 different DPSU types: 25 mA, 40 mA, 80 mA|M/S|
|4|Operating current [IO]|Normal operation : 0 mA < IO < IN; UO = UDPSU|M/S|
|5|short circuit current[Is]|see Table 2.|M/S|
|6|DC output impedance|min. 10Ω <br>NOTE<br>There is no minimum cable distance between DPSUs.<br>Therefore a minimum output impedance is needed to distribute the<br>load more uniformly|M/S|
|7|hold up time (mains interrupt<br>time)    [tholdup]|Under normal conditions [nominal input voltage,<br>nominal output current], an interruption of the mains<br>power of less/equal to 100 ms shall not affect the DC<br>output voltage of the bus power supply unit according<br>to EN 50090-2-2 performance criterion B.<br>NOTE<br>Performance criterion B allows transmission errors<br>during test, but the equipment shall continue to operate as intended<br>after the test.<br>The manufacturer shall specify the nominal output<br>current in the manufacturer data sheet.|M/S|
|8|Transient response<br>(Dynamic behaviour)||ripple voltage|≤ 0,2 V (referring to idle voltage)|M/S|


-----

|10|leakage current – two parallel<br>DPSUs|I ≤ 10 mA|M/S|
|---|---|---|---|


The underneath figure shows the range for the DPSU output characteristics: The graph J to L shows
the static behaviour of the DPSU.

##### U

A

J H

K

B D


F E


L


C


##### I


forbidden range for PSU U/I characteristic

**Figure 25 - TP1 DPSU U/I Characteristic (drawing not in scale!)**

The letters in the above figure denote the following (see also requirements in clause 6.9):

A = upper voltage limit (see item 1 of 6.9)

B = lower voltage limit (see item 1 of 6.9)

C = maximum current limit

D = knee point

E = nominal current: up to E the minimum hold up time of the
DPSU is ensured.

F = 0 V current

G/I = knee point

K = overload indication

H = activation of overload protection

J to K = normal operation range


-----

**Table 2 - U/I Characteristic – values for different types of TP1 DPSUs**

**Point**

**(mA)** **A** **B** **C** **D** **E** **F** **G** **I** **K**

item 1 [a)] item 1 [a)] 145 mA 50 mA 25 mA 10 mA 13 V 18 V 50 mA

55 mA 55 mA

item 1 [a)] item 1 [a)] 145 mA 80 mA 40 mA 25 mA 13 V 18 V 75 mA

85 mA 85 mA

item 1 [a)] item 1 [a)] 350 mA 160 mA 80 mA 50 mA 13 V 18 V 150 mA

175 mA 175 mA

Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.

**Special requirement for DPSU with IN = 80 mA**

The maximum resulting short circuit current of multiple DPSUs and central PSU on the same line
shall not exceed 3 A. If 8 DPSUs with the max. short circuit current of 350 mA (Point 'C') are
combined with one central PSU, the maximum limit of 3 A is exceeded. This restriction shall be
considered for planning of an installation. The actual max. short circuit current shall be indicated in
the product datasheet for each DPSU product.

##### 6.10 Testing

###### 6.10.1 Environment

- Testing shall be carried out in an environment that does not influence the test results.

- Only calibrated test equipment shall be used.

- Test set-ups shall be as small as possible (if not specified otherwise) to avoid voltage drops along
the wires and parasitic induction.

- The test shall be carried out in the temperature range stated for the product by the manufacturer in
the data sheet.

###### 6.10.2 Test Equipment

- DPSU: Adjustable DC-Source ; 0 V to 40 V; UDPSU (Ripple) < 100 mV

- Oscilloscope (BW min. 20 MHz) : Standard Ri = 1 MΩ/20 pF

- Function Generator: Standard; Ri < 50 Ω

- Variable Resistors to simulate different loads

- Variable AC source to simulate tolerances of mains

- DC-Voltmeter Ri >10 MΩ/V

- LPF Bandwidth limitation [0-159 kHz](see below)

|I<br>N<br>(mA)|Point|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|**IN **<br>**(mA)**|**A **|**B **|**C **|**D **|**E **|**F **|**G **|**I **|**K **|
|25|item 1a)|item 1a)|145 mA|50 mA|25 mA|10 mA|13 V<br>55 mA|18 V<br>55 mA|50 mA|
|40|item 1a)|item 1a)|145 mA|80 mA|40 mA|25 mA|13 V<br>85 mA|18 V<br>85 mA|75 mA|
|80|item 1a)|item 1a)|350 mA|160 mA|80 mA|50 mA|13 V<br>175 mA|18 V<br>175 mA|150 mA|
|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|a)<br>Limits of output voltage [UDPSU ] as specified in item 1 in 6.9.|


-----

###### 1 K

 IN 1 nF OUT

**Figure 26 - Low pass Filter (fg = 159 kHz)**

###### 6.10.3 Testing of Output Voltage

- Test Setup:

###### +A I

## A

###### Mains DPSU UDPSU V Load R
L

N

Earth -B

**Figure 27 - Test Setup U/I**

- Testing

Voltage UDPSU shall be monitored during variation of Resistor R from
Rmax = ∞ (idle state ) to
Rmin = (UDPSU / ID )*0,9
Variation of mains from max. to min. voltage

- Requirements

According to 6.9, item 1.

###### 6.10.4 Testing of Output Voltage Ripple

- Test Setup:

###### +A

LPF

CH1 CH2

###### DPSU AC Load
 Mains L U DPSU Scope R

N

Earth -B

**Figure 28 - Test Set-up for Voltage Ripple**

|V<br>U<br>DPSU|A<br>Load|
|---|---|

|ains|DPSU<br>L<br>N<br>Earth|+A I<br>A<br>V<br>Load<br>U<br>DPSU<br>-B|
|---|---|---|

|H1 CH2|Col2|
|---|---|

|Mains|DPSU<br>L<br>N<br>Earth|+A<br>LPF<br>CH1 CH2<br>AC Load<br>U<br>DPSU<br>Scope<br>-B|
|---|---|---|
||||
||||
||||


-----

- Testing

UDPSU shall be monitored with an oscilloscope (use LPF) during variation of Resistor R from
Rmax = ∞ (idle state ) to
Rmin = UDPSU / ID
Channel display: AC. Reading out peak-peak value

- Requirements

UDPSU shall be lower or equal than the value of item 2 of 6.9.

###### 6.10.5 Testing of DPSU’s Dynamic Behaviour

- Test Setup:

###### +A

 C
 DPSU
 di/dt

Mains
L R U D

N

Earth

###### -B

**Figure 29 - Test Setup for Dynamic Behaviour**

NOTE The test setup is different from central PSU as specified in 2.7 because DPSUs always include the "choke module".
Since the output voltage is tested after the "choke module" a different test setup is needed

- Testing

R = 10 kΩ
C = 100 nF
n = nominal number of
di/dt = IN(mA) / 10 (mA) * 0,5 * 2 mA/ms; start from 0 mA
Testing Period: 5 ms
UD shall be monitored with an Oscilloscope.
Channel display: DC

- Requirements

UD shall be in the limit given in item 8 of clause 6.9.

|Mains|DPSU<br>L<br>N<br>Earth|+A<br>C<br>di/dt<br>R|
|---|---|---|
||||
||||
|||-B|


-----

###### 6.10.6 Testing of two parallel DPSUs, Leakage Current

- Test Setup:


###### -B


###### -B

|Mains|DPSU<br>-1<br>L<br>N<br>Earth|+A I +A<br>A<br>U<br>DPSU<br>-B -B|DPSU<br>-2<br>L<br>N<br>Earth|Col5|
|---|---|---|---|---|
||||||


**Figure 30 - Test Set-up of two parallel DPSUs, Leakage Current**

- Testing

The leakage current shall be measured.

- Requirements

The current I shall be lower than or equal to the value of item 10 of 6.9.

###### 6.10.7 Testing of DPSU’s Hold-Up Time

- Test Setup

###### +A I

 Mains DPSU V Load
switch UDPSU R
L

N

Earth -B

**Figure 31 - Test Setup for Hold Up Time**

- Testing

Switch closed: R = (UDPSU / IDPSU ) * 0,9

Switch open measure time till UDPSU drops below 95 % of original value

- Requirements

tholdup shall be more than or equal to the value of item 7 of 6.9.

###### 6.10.8 Testing of U/I Characteristic

- Test Setup

See Figure 25.

|Mains<br>switch|DPSU<br>L<br>N<br>Earth|+A I<br>V<br>Load<br>U<br>DPSU<br>-B|
|---|---|---|
||||


-----

- Testing

Voltage UDPSU and current I shall be monitored during variation of resistor R from
Rmax = ∞ (idle state ) to
Rmin = 0 (short circuit)

- Requirements

The resulting graph shall comply with U/I characteristic for DPSU;
no damage after this test.

###### 6.10.9 Testing of Dynamic Parameters and Busload

NOTE The test setup and test values are tailored to the specific nature of DPSU and are different from central PSU as
specified in 2.7.

- Test Setup

Ua = 6 V
UDC = UDPSU – Ua
S1 on/off switching time ≤ 2 µs


IP


Generator
function:  Pulse
period:   z * 104 µs
pulswidth: 35 µs

|CH 1<br>AC|CH<br>AC|2|
|---|---|---|

|Mains|DPSU<br>L<br>N<br>Earth|I P<br>+A<br>S1<br>U DPSU C ACH 1 C AH C2 =<br>U<br>DC<br>Scope<br>-B|
|---|---|---|


**Figure 32 - Test Setup for Dynamic Behaviour**

**Testing Dynamic Parameters**

UDPSU and IP shall be monitored with an oscilloscope.

- Requirements

Point A to C of the registered wave forms (z = 10) shall comply to the values as stated in
underneath figures and tables.


-----

###### A


Us

Is

Ip


###### 0
t

0 18 µs 35 µs 104 µs

**Figure 33 - Voltage and Current of Choke**

**Table 3 - Electrical Data of Choke (z = 10, see Figure 32)**

Point Voltage

A UDPSU + 4,15 V

B UDPSU + 3,8 V

C UDPSU + 0,7 V
(>UDPSU)

Tolerances: ±5 %

e.g. Tolerance at Point A:
±(29 V + 4,15 V)*5/100 ≅ 1,66 V

**Testing Dynamic Busload**

- Test Setup

UDPSU and IP shall be monitored with an oscilloscope. IP is measured 18 µs after the start of
the pulse.
z = 10, see Figure 32.

- Requirements

8,5 mA ≤ IP ≤ 23 mA
Busload (TP256) = IP / 1 mA (fan-in value related to transmission)
(e.g. IP = 10 mA ⇒ One DPSU represents the same busload as 10 TP256 bus devices
regarding the transmission technique).

|Point|Voltage|
|---|---|
|A|UDPSU + 4,15 V|
|B|UDPSU + 3,8 V|
|C|UDPSU + 0,7 V<br>(>UDPSU)|
|Tolerances:±5 %<br>e.g. Tolerance at Point A:<br>±(29 V + 4,15 V)*5/100≅ 1,66 V|Tolerances:±5 %<br>e.g. Tolerance at Point A:<br>±(29 V + 4,15 V)*5/100≅ 1,66 V|


-----

###### 6.10.10 System Test

Trans- Remitter ceiver

L1 L2

m *
PSU

x * **n *** y *
busdevice **DPSU** busdevice

**Figure 34 - Test Set-up of System Test**

###### 6.10.10.1 Minimum Number of Devices

- Test Setup

m = 0
n = 1; x = 1; y = 1
L1 = L2 = max. distance from DPSU
Transmitter is sending normal group telegrams.
Telegrams shall be monitored with a busmonitor.
Test shall be done with maximum and minimum dc-bus-load at each bus device.

- Requirements

The receiver shall be able to receive the telegrams.
No telegram repetitions shall occur.

###### 6.10.10.2 Maximum Number of Devices

- Test Setup

m = 0
n = 8
x = max. number of devices divided by 2;
y = max. number of devices divided by 2
L1 = L2 = max. distance from DPSU (e.g. 175 m up to 350 m)
Transmitter is sending normal group telegrams.
Telegrams shall be monitored with a busmonitor.
Test shall be done with maximum and minimum dc-bus-load at each bus device.

- Requirements

The receiver shall be able to receive the telegrams.
No telegram repetitions shall occur.


-----

###### 6.10.10.3 Maximum Number of Devices and PSUs

- Test Setup

m = 1
n = 8
x = max. number of devices divided by 2;
y = max. number of devices divided by 2
L1 = L2 = max. distance from DPSU (e.g. 175 m up to 350 m)
Transmitter is sending normal group telegrams.
Telegrams shall be monitored with a busmonitor.
Test shall be done with maximum and minimum dc-bus-load at each bus device.

- Requirements

The receiver shall be able to receive the telegrams.
No telegram repetitions shall occur.

###### 6.10.11 Testing of Symmetry
Test shall be carried out in accordance with Volume 4/2 EMC Test Set-ups clause 3.3 and 4.3.

###### 6.10.12 Testing of Reset

- Test Set-up:

Reset Normal

###### +A

R **AUX**

###### DPSU U DPSU UAUX PSU

## V

Mains
L

###### Main L N s N -B

Earth

LED

**Figure 35 - Test Setup**

- Testing

UAUX shall be tuned to 10 V DC ; R = 3,3 Ω ( I ≈ 3 A )
Switch to reset position/push reset push button.

- Requirements

UAUX < 0,5 V
LED (red) shall illuminated (reset switch).
No damage of reset switch/reset push button and choke module after this test.

##### 6.11 Functional Safety

Under consideration.

|U<br>DPSU|R<br>V UAUX|
|---|---|

|+A<br>AUX<br>R<br>DPSU U V UAUX PSU<br>DPSU<br>M<br>L<br>Main<br>L N<br>s N -B<br>Earth|Col2|
|---|---|
|PSU<br>N<br>R<br>U DPSU<br>L<br>M<br>**AUX**<br>+A<br>-B<br>DPSU<br>N<br>Earth<br>Main<br>~~s~~<br>L<br>V<br>UAUX<br><br>|DPSU<br>N<br>Earth<br>L|
|~~s~~|~~s~~|
|||


-----

##### 6.12 Interfaces, Connectors

###### No.

1 Data rail connection

2

Connector Type 6.1

3

      rail

      
      - or both

4

5

6
Types.

7

Type 5.1 Yellow/White shall be used for connection.

##### 6.13 Marking

|No.|Requirements|M|
|---|---|---|
|1|Data rail connection|F/S|
|2|In case of a data rail type design, the dimensions of the DPSU shall be in accordance<br>to EN 43880 and shall allow snapping the device onto the DIN rail of which the<br>dimensions correspond to those laid down in Part 9/1 “Cables and Connectors”,<br>Connector Type 6.1|O/S|
|3|In case of data rail connection, the connection to the bus shall be ensured either:<br>• <br>by means of Type 6.1 Connector connected to the inner tracks of the data<br>rail<br>• <br>by the red/dark-grey Type 5.1 Connector (Bus-Connector)<br>• <br>or both|O/S|
|4|In case of other than data-rail connection the connection to the bus shall be ensured<br>by the red/dark-grey Type 5.1 Connector (Bus-Connector) only.|O/S|
|5|Additional (choke) outputs shall only use the red/dark-grey Type 5.1 connector.|O/S|
|6|Additional auxiliary non-SELV outputs shall not use KNX standardized Connector<br>Types.|M/S|
|7|When the DPSU is equipped with an intermediate connection point for 29 V DC it<br>shall be clearly marked both with “29 V DC” and the polarity. In this case Connector<br>Type 5.1 Yellow/White shall be used for connection.|O|

|No.|Requirements|M|
|---|---|---|
|1|The function of the LED’s shall be clearly indicated both on the device itself and in<br>the manufacturer’s data sheet.|O/S|
|2|The DPSU shall be labelled according to the example in Figure 36. The technical<br>data shall contain: input voltage range, the AC symbol, frequency, nominal DC<br>output voltage, nominal output current, temperature range and the DPSU symbol.<br>The manufacturer’s data sheet shall moreover contain details on maximum mains<br>power consumption, short circuit mains protection and maximum output current.|M/S|
|3|All outputs for bus voltage shall be marked with the polarity.|M/S|
|4|Additional auxiliary non-SELV outputs shall be clearly marked with voltage, power,<br>etc.|M/S|


-----

**L** **N**


**Bus +** **overload**

**230 V** = **29 V** **mains**

**Bus -** **50...60 Hz** **100 mA** **overvoltage**

**0...45 °C** **Manufacturer**

**29 V DC**

**Figure 36 - Example of electrical connection and labelling of DPSU**

##### 6.14 Installation

###### No. Requirements

1 Restrictions with regards to the installation guidelines for standard DPSUs:

         - The maximum allowed distance between two devices shall be between
350 m and 700 m

         - The maximum cable length shall be between 350 m and 1000 m

         - If DPSUs used in parallel with one or two standard PSUs the standard
installation guidelines have to be applied.

3 Unused connections of the DPSU and choke shall not impair protective separation. If
necessary they shall be protected by additional appropriate covers.

4 The cable length between DPSU and device shall be less than or equal 350 m.

5 The reset switch (also recommended for reset push button) shall not be directly
accessible, e.g. in case of DIN-rail mounting protected by means of the distribution
board cover, if a cover is not provided by the device.

6 A reset time of at least 20 s is recommended to the user, to ensure that all bus
devices within a segment are reset.

e.g.

Number of max. Distance max. cable length
DPSUs DPSU - Device Device - Device

1 350 m 350 m 350 m
2 350 m 700 m 700 m
3 ... 8 350 m 700 m 1000 m

##### 6.15 Symbols

The following symbols are provided for installation schematics.


**Red**

**Green**

**Yellow**

|Col1|Col2|Col3|L N|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
||||**mains**<br>**earth**<br> <br>|**mains**<br>**earth**<br> <br>|**mains**<br>**earth**<br> <br>|**mains**<br>**earth**<br> <br>||
|||||**Technical data**<br>**Power Supply**<br>**overload**|**Technical data**<br>**Power Supply**<br>**overload**|**Technical data**<br>**Power Supply**<br>**overload**|**Technical data**<br>**Power Supply**<br>**overload**|
|||||||||
|||||||||
|||||**230 V**<br>|=|**mains**<br>**29 V**<br>||
|||||**50...60 Hz**||**overvoltage**<br>**100 mA**|**overvoltage**<br>**100 mA**|
|||||**0...45 °C**|**0...45 °C**|**0...45 °C**||
|||||**Manufacturer**<br>|**Manufacturer**<br>|**Manufacturer**<br>|**Manufacturer**<br>|
||||**29 V DC**|**29 V DC**|**29 V DC**|**29 V DC**|**29 V DC**|

|No.|Requirements|M|
|---|---|---|
|1|Restrictions with regards to the installation guidelines for standard DPSUs:<br>- The maximum allowed distance between two devices shall be between<br>350 m and 700 m<br>- The maximum cable length shall be between 350 m and 1000 m<br>- If DPSUs used in parallel with one or two standard PSUs the standard<br>installation guidelines have to be applied.|M|
|3|Unused connections of the DPSU and choke shall not impair protective separation. If<br>necessary they shall be protected by additional appropriate covers.|M/S|
|4|The cable length between DPSU and device shall be less than or equal 350 m.|M|
|5|The reset switch (also recommended for reset push button) shall not be directly<br>accessible, e.g. in case of DIN-rail mounting protected by means of the distribution<br>board cover, if a cover is not provided by the device.|O/S|
|6|A reset time of at least 20 s is recommended to the user, to ensure that all bus<br>devices within a segment are reset.|O/S|

|Number of<br>DPSUs|max. Distance|Col3|max. cable length|
|---|---|---|---|
|Number of<br>DPSUs|<br>DPSU- Device|Device- Device|Device- Device|
|<br>1|<br>350 m|<br>350 m|350 m|
|<br>2|<br>350 m|<br>700 m|<br>700 m|
|<br>3 ... 8|<br>350 m|<br>700 m|<br>1000 m|


-----

**Figure 37 - DPSU Symbols**

##### 6.16 Battery Back-up system

|No.|Requirements|M|
|---|---|---|
|1|If either a battery backup system is charged from the bus or from the mains, it shall<br>comply with the electrical data as laid down above. The effect on the behaviour of<br>the DPSU resulting from this battery backup system shall be clearly stated in the<br>manufacturer’s data sheet.|O|


-----

#### 7 PL110 Filter

##### 7.1 Communication Requirements
The filter device in PL110 KNX-Installations is used to physically separate several PL110 networks
from each other by blocking the RF-signal. This filter also provides a minimum RF-impedance
necessary for powerline modem operation.


L1 →

###### Filter
supply


L1


to

PL110
installation

|L1|→<br>Filter|L1|
|---|---|---|


mains


N


**Figure 38 - Usage of Filter**

##### 7.2 Electrical Safety

**No.** **Item** **Requirements** **M**

1 General The PL110 filter shall comply with the M/S
requirements for group 1 devices as
given in Volume 4/1

2 protection class according EN 60529 IP20 M/S

3 rated insulation voltage ≥ 250 V AC, group 1 device M/S

4 Clearance and creepage distance between 3 mm (Usage Class B/basic insulation) M/S
mains and accessible surface when
mounted

##### 7.3 Environmental Conditions
As regards environmental data, requirements and tests, the filter shall comply with Volume 4/1 clause
2.1. Additionally, the following requirements apply:

**No.** **Item** **Requirements** **M**

1 Ambient temperature range operation 3k5 (-5°C/+45°C) F/S

2 ambient temperature range no-operation -25 °C/+70 °C F/S

3 Relative humidity (non-condensing) 5 % to 93 % F/S

4 Life time - 10 years M/S

##### 7.4 EMC
The requirements of Volume 4/1 clause 2.3 (and in future part 4 of EN 50065) apply.

##### 7.5 Mechanical Dimensions, Constructional Features

|No.|Item|Requirements|M|
|---|---|---|---|
|1|General|The PL110 filter shall comply with the<br>requirements for group 1 devices as<br>given in Volume 4/1|M/S|
|2|protection class according EN 60529|IP20|M/S|
|3|rated insulation voltage|≥ 250 V AC, group 1 device|M/S|
|4|Clearance and creepage distance between<br>mains and accessible surface when<br>mounted|3 mm (Usage Class B/basic insulation)|M/S|

|No.|Item|Requirements|M|
|---|---|---|---|
|1|Ambient temperature range operation|3k5 (-5°C/+45°C)|F/S|
|2|ambient temperature range no-operation|-25 °C/+70 °C|F/S|
|3|Relative humidity (non-condensing)|5 % to 93 %|F/S|
|4|Life time|> 10 years|M/S|

|No.|Requirements|M|
|---|---|---|
|1|Din rail mounted construction|F/S|


-----

##### 7.6 Electrical Features

**No.** **Item** **Requirements** **M**

1 Operating voltage 250 V AC ± 10 %, 50 Hz M/S

2 Power-consumption < 4,5 W @ 63 A M/S

3 Filter frequency range 95 kHz to 125 kHz M/S

4 Attenuation without external load ≤ 25 dB @ 105 kHz M/S
≤ 30 dB @ 110 kHz
≤ 25 dB @ 115 kHz

##### 7.7 Testing

###### 7.7.1 Filter RF-Impedance 
The PL110 filter´s RF-impedance shall have a minimum value in order not to decrease signal level on
the 230V-line.

For easier measuring a voltage-drop test is performed instead of a direct meassurement of the
impedances.

###### 7.7.1.1 Test Preparation

|No.|Item|Requirements|M|
|---|---|---|---|
|1|Operating voltage|250 V AC± 10 %, 50 Hz|M/S|
|2|Power-consumption|< 4,5 W @ 63 A|M/S|
|3|Filter frequency range|95 kHz to 125 kHz|M/S|
|4|Attenuation without external load|≤ 25 dB @ 105 kHz<br>≤ 30 dB @ 110 kHz<br>≤ 25 dB @ 115 kHz|M/S|


Arrow shows
**230VAC current from**
**mains supply to**
**consumer installation**


###### L1


###### L1


###### CISPR16 left
 Supply Artificial Chokes Filter open for

**Mains** N **Network** N **this test**


**Figure 39 - Test circuit filter impedance**

**Note: The chokes are 3,5 mH, 20 turns on Siemens T38 ferrite, R16 toroid each.**


-----

2µF 50[Ω]


50[Ω]


Signal
**Source**


Amplifier
(Low-Z-Output)

|Signal<br>Source|Col2|Amplifier<br>(Low-Z-Output)|Col4|Col5|
|---|---|---|---|---|


wideband

**1:1 ratio**
**transformer**

**Figure 40 - Signal-Injector according to EN50065-2**

Note: The wideband transformer suitable for frequencies from 80kHz to 150kHz consists e.g. of a
Siemens R25/10 toroid, N27 ferrite, with 2x20 turns / 2x1,2mH.

0.22µF

DSO
Mains (DUT) (Hi-Z-Input)
100[Ω]

wideband

1:1 ratio
transformer

**Figure 41 - Example for a 100 Ω RF-Probe**

Parts-List Resistor 100Ω/0,6W, 1% tolerance

Capacitor 0,22µF / 250VAC, X7-quality, 10%
tolerance

Wideband-Transformer Siemens R16 toroid,

T38 ferrite

2 x 12 turns, 1mH each

10% tolerance

###### 7.7.1.2 Testing
With the signal injector several monofrequent sinusodial signals are coupled on the mains line behind
the CISPR16 artificial network. The chokes provide an impedance-decoupling between the filter and
the artificial network.

First the chokes, the signal-injector and the RF-Probe are connected to the artificial mains network as
shown in 4.1. The amplitude of the signal injector has to be adjusted to 1V peak-peak at the RF-Probe
for each frequency while the 230V AC mains supply is ON.

If the 230VAC causes interference the envelope signal is used for measuring.

Secondly the device under test (DUT) in receiving mode is connected to the mains as shown above.
The level of the injected signal with and without the DUT connected shall be recorded.

**Test-Description:**

Both the signal-injector and the RF-probe have an inpedance of 100 Ω each at 110 kHz. If the
connected filter has an Impedance of 100 Ω the signal seen at the DSO shows one third of the
amplitude of the signal-injector without any load. If the measured signal is below one third of the
unloaded injector the impedance of the DUT is less than 100 Ω.


-----

**Notes**

To check the test-setup a calibration can be made using a 100 Ω/0,5 W-resistor in series with a
0,47 µF/250 V AC X7-capacitor instead of using the DUT. This test should be made with and without
230 V mains supply at the artificial network.

The RF-probe shown above does not have any spike-protection! It is recommended to disconnect the
probe from the DSO before switching the mains supply or before connecting / disconnecting the filter
or switching the mains supply on or off.

###### 7.7.1.3 Requirements
The test is carried out at

100kHz

105kHz

110kHz

115kHz

120kHz

For each frequency the injected signal shall not drop below 0,3 V peak/peak with connected filter.

###### 7.7.2 DC-Filter-Impedance

To determine the maximum power-dissipation of the Filter a voltage-drop-test is performed.

###### 7.7.2.1 Test Preparation

L1 Ampere
Filter Resistive

Meter

Supply Load

Ω

Mains N 50 /1kW

Volt
Meter

**Figure 42 - Test set-up for DC-Impedance-Test**

###### 7.7.2.2 Testing
A voltage-drop-test is made for determination of the DC-resistance and hence the maximum powerdissipation at maximum 230VAC-current.

Filter-Resistance: Rfilter = Ufilter x Ifilter

Power-Dissipation: Pfilter = Rfilter x (Ifilter)[2]

###### 7.7.2.3 Requirements
With the maximum current of 63 A the power-dissipation shall be below 4,5 W.


-----

###### 7.7.3 Filter Attenuation

A filter is necessary to separate different powerline-installations e.g. two residential buildings from
one other.

###### 7.7.3.1 Test Preparation

L1

CISPR16 BCU

Supply

Artificial Transmit
Mains

Network Mode

Testpoint 1

Ω

50

Termination

Filter

N

Testpoint 2

L1

CISPR16

Artificial

Network

To Ω

RF-Probe, Z=100

Testpoint

Ω

50

Termination

DSO
Hi-Z-Input

**Figure 43 - Test Circuit Filter Attenuation**

###### 7.7.3.2 Testing
The transmitter is continuously sending messages. With the analyser / DSO the RF-signal-level on
both sides of the filter shall be recorded.

The attenuation is calculated as: a=20(log(Ubefore filter/Uafter filter)); [a]=1dB;

###### 7.7.3.3 Requirements
The attenuation of the filter shall be more than 30dB @105kHz and @115kHz.

##### 7.8 Functional Safety

To be completed


-----

##### 7.9 Interfaces, Connectors

**No.** **Requirements**

1 Screw terminals for phase L1 input, L1 output and Neutral.

2 Terminals for L1 input an L1 output for 10 to 25 mm²

3 Terminal for N for 2x 2,5 mm²

##### 7.10 Marking

**No.** **Requirements**

1 An arrow, indicating the direction from the mains supply to the consumer
installation, shall be provided on the label to ensure correct mounting.

2 Rated voltage, Rated current, KNX-mark, CE-mark, Manufacturer mark

##### 7.11 Installation

**No.** **Requirements**

1 The filter shall be located between the main fuse and the leakage current protector,
typically before the last fuses.

2 In a three-phase system, one filter per phase shall be installed.

3 In order to ensure correct functionality, the device shall be mounted in the way
indicated by the arrow on the label

4 DIN-rail according EN 50022

##### 7.12 Symbols
The following symbols are defined for installation schematics:

**Figure 44 - Symbol for PL110 Filter**

|No.|Requirements|M|
|---|---|---|
|1|Screw terminals for phase L1 input, L1 output and Neutral.|F/S|
|2|Terminals for L1 input an L1 output for 10 to 25 mm²|F/S|
|3|Terminal for N for 2x 2,5 mm²|F/S|

|No.|Requirements|M|
|---|---|---|
|1|An arrow, indicating the direction from the mains supply to the consumer<br>installation, shall be provided on the label to ensure correct mounting.|F/S|
|2|Rated voltage, Rated current, KNX-mark, CE-mark, Manufacturer mark|F/S|

|No.|Requirements|M|
|---|---|---|
|1|The filter shall be located between the main fuse and the leakage current protector,<br>typically before the last fuses.||
|2|In a three-phase system, one filter per phase shall be installed.||
|3|In order to ensure correct functionality, the device shall be mounted in the way<br>indicated by the arrow on the label|F/S|
|4|DIN-rail according EN 50022|F/S|


-----

#### 8 PL110 Phase Coupler

##### 8.1 Communication Requirements
The phase-coupler is an additional device used in PL110 installations to improve the signal-coupling
between the mains phases in a 3-phase installation network.


Phase-Coupler

|L1|Col2|L2|Col4|L3|Col6|N|
|---|---|---|---|---|---|---|
||||||||


###### mains supply 230VAC


**Figure 45 - Usage of the Phase Coupler**

##### 8.2 Electrical Safety

**No.** **Item** **Requirements** **M**

1 General The PL110 phase coupler shall comply M/S
with the requirements for group 1 devices
as given in Volume 4/1

2 protection class according EN 60529 IP20 M/S

3 rated insulation voltage ≥ 400 V AC, group 1 device M/S

4 Clearance and creepage distance between 3 mm (Usage Class B/basic insulation) M/S
mains and accessible surface when
mounted

##### 8.3 Environmental Conditions
As regards environmental data, requirements and tests, the phase coupler shall comply with Volume
4/1 clause 2.1. Additionally, the following requirements apply:

|No.|Item|Requirements|M|
|---|---|---|---|
|1|General|The PL110 phase coupler shall comply<br>with the requirements for group 1 devices<br>as given in Volume 4/1|M/S|
|2|protection class according EN 60529|IP20|M/S|
|3|rated insulation voltage|≥ 400 V AC, group 1 device|M/S|
|4|Clearance and creepage distance between<br>mains and accessible surface when<br>mounted|3 mm (Usage Class B/basic insulation)|M/S|

|No.|Item|Requirements|M|
|---|---|---|---|
|1|Ambient temperature range operation|3k5 (-5°C/+45°C)|F/S|
|2|ambient temperature range no-operation|-25 °C/+70°C|F/S|
|3|Relative humidity (non-condensing)|5% to 93%|F/S|
|4|Life time|> 10 years|M/S|


-----

##### 8.4 EMC

The requirements of Volume 4/1 clause 2.3 apply.

##### 8.5 Mechanical Dimensions, Constructional Features

**No.** **Requirements** **M**

1 Din rail mounted construction F/S

##### 8.6 Electrical Features

**No.** **Item** **Requirements** **M**

1 Operating voltage 3 x 400 V ± 10 %, 50 Hz M/S

2 Power-consumption < 1 W M/S

3 Modem frequency range 95 kHz to 125 kHz M/S

##### 8.7 Testing

###### 8.7.1 Test Preparation

CISPR16 L1

Supply Artificial

L2

Mains Network
3-Phases 3-Phase L3 BCU
+ Neutral Version Transmit
N Mode

Ω

RF-Transformer

RF-Probe, Z=100

Analyser /
Meassuring-Receiver

Ω

Phase
with 50

DSO

Coupler

Termination

Hi-Z-Input

**Figure 46 - Test Circuit Phase Coupler**

###### 8.7.2 Testing
The transmitter is continuously sending messages. With a mounted phase coupler, the RF-signal is
coupled to the remaining phases L2 and L3. Since the transmission method works symmetrically
referred to protective ground, the measurement ports of the artificial network are not used because
they are unsymmetrical. Therefore the RF-signal is measured by a RF-probe between every Phase (one
at a time) and neutral.

Note: The RF-probe is described in clause 7.7. An error of –1 dB is to be considered in the
frequency-range from approx. 80 kHz to 150 kHz.

|No.|Requirements|M|
|---|---|---|
|1|Din rail mounted construction|F/S|

|No.|Item|Requirements|M|
|---|---|---|---|
|1|Operating voltage|3 x 400 V± 10 %, 50 Hz|M/S|
|2|Power-consumption|< 1 W|M/S|
|3|Modem frequency range|95 kHz to 125 kHz|M/S|

|Col1|CISPR16<br>Artificial<br>Network<br>3-Phase<br>Version|
|---|---|
|||

|L2|Col2|Col3|
|---|---|---|
|L3|L3|L3|
|L3|||
|L3|||


-----

###### 8.7.3 Requirements

The attenuation of RF-signal on the coupled phases must be lower than 3 dB.

##### 8.8 Functional Safety
To be completed

##### 8.9 Interfaces, Connectors

**No.** **Requirements**

1 Screw terminals for three phases L1, L2, L3.

2 Terminals for 2 X 1,5 mm² or 1 X 2,5 mm²

##### 8.10 Marking

**No.** **Requirements**

1 Rated voltage, KNX-mark, CE-mark, Manufacturer mark

##### 8.11 Installation

**No.** **Requirements**

1 The phase-coupler shall be located between the main fuses and the leakage-current
protector, typically before the last fuses.

##### 8.12 Symbols

The following symbols are defined for installation schematics:

|No.|Requirements|M|
|---|---|---|
|1|Screw terminals for three phases L1, L2, L3.|F/S|
|2|Terminals for 2 X 1,5 mm² or 1 X 2,5 mm²|F/S|

|No.|Requirements|M|
|---|---|---|
|1|Rated voltage, KNX-mark, CE-mark, Manufacturer mark|F/S|

|No.|Requirements|M|
|---|---|---|
|1|The phase-coupler shall be located between the main fuses and the leakage-current<br>protector, typically before the last fuses.||


**L1**
**L2**
**L3**


**Figure 47 - Symbol**


-----

