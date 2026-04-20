## Basic and System Components/Devices – Minimum Requirements – Standardised solutions - Tests KNX System Conformance Testing

### Cables and Connectors

Summary

This document contains minimum requirements for KNX cables and
connectors and standardised solutions.


# 9


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.10.15 Approved Standard
1.1 RfV 2006.03 Integration of AN’s, delete the former requirements indicating use of
lead in view of EU regulations prohibiting the use of lead – updating of
references to restructured volume 4 – correction of standard references
1.1 FV 2006.09 Resolution of comments from RfV
1.1 AS 2009.06 Finalisation of document in preparation for publication of V2.0 of the
KNX Standard
1.2 AS 2012.09 Editorial update following AN 126
1.3 WD 2016.02 Definition of general Connector type 5.x
1.3 FV 2016.06 Resolution of comments Release for Voting
1.3 AS 2017-04 Resolution of comments Final Voting – Publication as AS
1.4 DP 2020-03 Updating of standard references in cable specifications – no comments
KCG meeting
01.05.01 2022-04 Resolution of comments from release for voting

Filename: 09_01 Basic and System Components - Cable and Connectors v01.05.01 FV
Version: 01.05.01
Status: Draft for Voting
Savedate: 2022.04.15

Number of pages: 50

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.10.15|Approved Standard|
|1.1 RfV|2006.03|Integration of AN’s, delete the former requirements indicating use of<br>lead in view of EU regulations prohibiting the use of lead – updating of<br>references to restructured volume 4 –correction of standard references|
|1.1 FV|2006.09|Resolution of comments from RfV|
|1.1 AS|2009.06|Finalisation of document in preparation for publication of V2.0 of the<br>KNX Standard|
|1.2 AS|2012.09|Editorial update following AN 126|
|1.3 WD|2016.02|Definition of general Connector type 5.x|
|1.3 FV|2016.06|Resolution of comments Release for Voting|
|1.3 AS|2017-04|Resolution of comments Final Voting – Publication as AS|
|1.4 DP|2020-03|Updating of standard references in cable specifications – no comments<br>KCG meeting|
|01.05.01|2022-04|Resolution of comments from release for voting|


-----

##### Contents

###### 1 Preface ....................................................................................................................... 5

 2 TP Cable .................................................................................................................... 6
 2.1 TP1 Cable ..................................................................................................... 6 2.1.1 General .................................................................................................. 6 2.1.2 Test set-up for transient induced differential voltages .......................... 8 2.1.3 Test for measurement of continuous-wave induced differential voltages ............................................................................................... 10 2.1.4 Installation requirements ..................................................................... 11

 3 Connectors............................................................................................................... 12
 3.1 Overview .................................................................................................... 12 3.2 KNX Connector Type 1.1 .......................................................................... 13 3.3 KNX Connector Type 1.2 .......................................................................... 13 3.4 KNX Connector Type 2.1 .......................................................................... 13 3.5 KNX Connector Type 3.1 .......................................................................... 13 3.6 KNX Connector Type 4.1 .......................................................................... 14 3.6.1 General Requirements ......................................................................... 15 3.6.2 Additional Requirements for Contact Security ................................... 16 3.6.3 Contact material: ................................................................................. 17 3.6.4 Constructional Features ....................................................................... 17 3.7 KNX Connector Type 5.x .......................................................................... 18 3.7.1 Requirements for KNX Connector Type 5.x ...................................... 18 3.7.2 Requirements for KNX Connector Type 5.1 ...................................... 21 3.7.3 Constructional Features for standardized Solution ............................. 24 3.7.4 Test Guidelines.................................................................................... 25 3.8 KNX Data Rail Connectors - Type 6.1 ...................................................... 27 3.8.1 KNX Connector Type 6.1 - Contact Block/Data Rail......................... 27 3.8.2 Constructional Requirements for standardized Contact Block ........... 30 3.8.3 Constructional Features of the Data Rail ............................................ 30 3.8.4 Constructional Features of Data Rail Cover ....................................... 31 3.8.5 Test Guidelines for Contact Block and Data Rail ............................... 31 3.8.6 Data Rail to Wire Connector ............................................................... 36 3.9 KNX Connector Type 7.1 .......................................................................... 36 3.9.1 Requirements....................................................................................... 36 3.9.2 Constructional Features ....................................................................... 39 3.10 KNX Connector Type 7.2 .......................................................................... 39
 3.10.1 Requirements....................................................................................... 39 3.10.2 Constructional Features ....................................................................... 42 3.11 KNX Connector Type 8.1 .......................................................................... 43
 3.11.1 Requirements....................................................................................... 44

 4 KNX TP Overvoltage Protector (secondary Protector) ...................................... 47
 4.1 General Requirements ................................................................................ 47 4.2 Requirements for Communication ............................................................. 47 4.3 Electrical Safety Requirements .................................................................. 47 4.4 Environmental Conditions.......................................................................... 47 4.5 EMC ........................................................................................................... 47 4.6 Mechanical, Dimensions ............................................................................ 47 4.7 Electrical Requirements ............................................................................. 48


-----

###### 4.8 Testing........................................................................................................ 48 4.9 Functional Safety ....................................................................................... 49 4.10 Interfaces, Connectors................................................................................ 49 4.11 Symbols...................................................................................................... 49 4.12 Installation.................................................................................................. 49 4.13 Marking ...................................................................................................... 50


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

Note: For commercially available basic and system components/devices, consult the KNX
Directory of registered/certified solutions.

|No.|Abbreviation|Meaning|
|---|---|---|
|1|M|Minimum requirements for certification – the ‘M’ requirements are<br>only a subset of the standardized/optional requirements respectively<br>recommendations – devices not complying to at least these<br>requirements cannot be certified|
|2|0|Optional requirement - when implemented, the KNX requirements<br>shall be met|
|3|F|Recommendations (free to implement)|
|4|S|Feature of standardized solutions|
|5|VI|Visual inspection (test guidelines)|


-----

#### 2 TP Cable

##### 2.1 TP1 Cable

###### 2.1.1 General
Two types of TP1 cable are distinguished:

   - cables complying with the ‘S’ marked features of the underneath table. This cable will ensure
that cable distances as specified in Chapter 3/1/1 "KNX Implementation on Twisted Pair 1"
can be met. Moreover, the standardized TP1 cable has amongst others the following additional
features: two twisted pairs, overall shield and sheath. This cable is always green RAL 6018
colored.

   - Cables complying only with the ‘M’ marked features of the underneath table. It is allowed that
such cables do not ensure that the distances as specified in Chapter 3/1/1 "KNX
Implementation on Twisted Pair 1" can be met (shall be derived from the product instruction
sheet). This cable shall however never be green RAL 6018 colored.

The underneath requirements have to be read in the above light. Further details have to be derived
from the Physical Layer specifications.

**No.** **Features** **Requirements** **Test** **M**
1 exclusive TP1 standard cable  - S
designation/ name

2.1 Wire diameter min 0,8 mm, max 1,0 Measurement F/S

constructional mm (AWG Cu 20 features, dimensions 18)

2.2a Wire material Copper, solid wires - S
2.2b Wire material Copper, stranded - F
wires

2.3 Wires Two pair(s)  - F/S
2.4 Colors of wires 1 pair red/black, 1 pair  - F/S
white/yellow

2.5 Tensile strength Min 100 N Measurement F/S
2.6 Outer shape of
cable

2.7a constructional Cable length for 1000 m max. Measurement S
features, dimensions standardized cable

2.7b Cable length for 1000 m max. Shorter Measurement M
non-standardized length specified by the
cable manufacturer [1]

3.1a electrical properties Loop resistance min. 20 Ω/km Measurement S
for standardized cable

max. 75Ω/km

3.1b electrical properties Loop resistance min. 20 Ω for the Measurement M
for non-standardized specified length
cable

max. 75Ω for the
specified length
max. 150Ω/km

1 For non-standardized cables the manufacturer is obliged to inform on the allowed cable length, e.g. by the
instruction sheet. The following warning shall be used in the product instruction documentation : Warning –
**the maximum usable cable length per line is maximum xxx m. The maximum cable length is normally**
derived from the EMC tests: it s the cable length for which the requirements of item 5.1.2 and 5.1.3 of this
table are complied with.

|No.|Features|Col3|Requirements|Test|M|
|---|---|---|---|---|---|
|1|exclusive<br>designation/ name||TP1 standard cable|-|S|
|2.1|constructional<br>features, dimensions|Wire diameter|min 0,8 mm, max 1,0<br>mm (AWG Cu 20 -<br>18)|Measurement|F/S|
|2.2a|2.2a|Wire material|Copper, solid wires|-|S|
|2.2b|2.2b|Wire material|Copper,  stranded<br>wires|-|F|
|2.3|2.3|Wires|Twopair(s)|-|F/S|
|2.4|2.4|Colors of wires|1 pair red/black, 1 pair<br>white/yellow|-|F/S|
|2.5|2.5|Tensile strength|Min 100 N|Measurement|F/S|
|2.6|2.6|Outer shape of<br>cable||||
|2.7a|constructional<br>features, dimensions|Cable length for<br>standardized cable|1000 m max.|Measurement|S|
|2.7b|2.7b|Cable length for<br>non-standardized<br>cable|1000 m max.  Shorter<br>length specified by the<br>manufacturer1|Measurement|M|
|3.1a|electrical properties<br>for standardized cable|Loop resistance|min. 20Ω/km<br>max. 75Ω/km|Measurement|S|
|3.1b|electrical properties<br>for non-standardized<br>cable|Loop resistance|min. 20Ω for the<br>specified length<br>max. 75Ω for the<br>specified length<br>max. 150Ω/km|Measurement|M|


-----

|No.|Features|Col3|Requirements|Test|M|
|---|---|---|---|---|---|
|3.2||Conductance|Gmax ≤ 1mS/km, fmeasure <br>= 10 kHz|Measurement|M|
|4.1|Electrical Safety|Outer sheath|Required|-|M/S|
|4.2|4.2|Insulation<br>resistance core to<br>outer sheath|100 MΩ/km (20°)<br>respectively 0.011<br>MΩ/km (70°)|Measurement|M/S|
|4.3|4.3|Withstand voltage<br>core/core|800VAC|measurement|M/S|
|4.4|4.4|High voltage<br>withstand|2 kV AC 50Hz<br>4 kV AC 50Hz2|5 minutes<br>1 minute<br>all cores and<br>screen connected<br>together against<br>outer sheath<br>surface, immersed<br>in water<br>according<br>EN50525 (clause<br>7, Table 1)|M/S|
|5.1.1|EMC|twist|Min. 5/m|measurement|F/S|
|5.1.2|5.1.2|Continuous-wave<br>induced<br>differential<br>voltages|U ≤ ± 200 mV peak<br>(50 Hz – 150 kHz)|see 2.1.3|M3|
|5.1.3|5.1.3|Maximum peak<br>bus voltage|U ≤ ± 45 V4 peak:<br>cable length as<br>specified in Chapter<br>3/1/1 and transient<br>voltages according<br>industrial level<br>(according EN 61000-<br>6-2) or home level<br>5(according EN<br>61000-6-1)|2.1.2|M3|
|5.2|5.2|screen|- shall cover entire<br>diameter<br>- drain wire : diameter<br>min. 0,4 mm (AWG<br>Cu 26)|-|F/S|
|6.1|Environmental tests||According to<br>EN50288-2-1 for<br>screened cables and to<br>EN50288-3-1 for<br>unscreened cables6|According to<br>EN50288-2-1 for<br>screened cables<br>and to EN50288-<br>3-1 for<br>unscreened cables|M/S|


2in some countries this 4 kV test is required
3 EMC test only necessary for cables without twist or twists < 5.
4 This implies that for a maximum operating bus DC voltage of 31V, the positive peak may not exceed 14V.
5 Use restricted to home environment level only shall be clearly stated in the instruction sheet.
6 for EU civil buildings, compliance to EN50575 is required. For halogen free cables, IEC EN 61034 shall be
applied for smoke emission and IEC EN 60754-2 for pH and conductivity


-----

10 Connection  -  11 Marking  - See underneath table VI M/S

Logo Color

TP1 standard cable Green RAL 6018

TP1 non-standardized cable EIB/KNX logo Different from green RAL 6018

**Figure 1: Marking of TP1 cable**

###### 2.1.2 Test set-up for transient induced differential voltages

- Devices connected to the bus require a limitation of induced differential voltages to 45V. The
objective of this test is to ensure that the maximum peak bus voltages does not exceed this limit.

- The cable under test shall be laid in parallel with a second one (“primary loop”), into which the
test voltages shall be fed into. Select this cable from a range of practical possible cable types, in
such a way that the highest possible interferences will occur[8].

- Test shall be carried out with a length of 50 m for each cable (primary loop and test cable).

- Both cables shall be laid in such a way that the inductivity is low (straight or with meanders of
approximately 20 cm, not rolled up). A distance of at least 10 cm to each metal plane shall be
ensured.

- The cable causing interference (primary loop: single wire or cable with go and return wire, shortcircuited) shall be laid parallel to the bus cable to be tested over its entire length.

- The distance between the interfering cable and the bus cable shall be chosen in such a way, that
the highest possible coupling (that can arise in the field) is reached.

7 Increasing linearly with the logarithm of the frequency.
8 In case of special applications, the intended use shall be considered, e.g. in case of solutions combining bus and
mains lines, the latter ones shall be used for building the primary loop.

|No.|Features|Col3|Requirements|Col5|Test|M|
|---|---|---|---|---|---|---|
|7.1|mechanical stress||According to<br>EN50288-2-1 for<br>screened cables and to<br>EN50288-3-1 for<br>unscreened cables|According to<br>EN50288-2-1 for<br>screened cables and to<br>EN50288-3-1 for<br>unscreened cables|According to<br>EN50288-2-1 for<br>screened cables<br>and to EN50288-<br>3-1 for<br>unscreened cables|M/S|
|8|software<br>requirements|-|-|-|||
|9.1|Communication for<br>standard cable|capacity wire/wire|min. 10 nF/km<br>max. 100 nF/km<br>(10 kHz)|min. 10 nF/km<br>max. 100 nF/km<br>(10 kHz)|measurement|S|
|9.2|9.2|inductance|min. 450 µH/km<br>max. 850 µH/km<br>(10 kHz)|min. 450 µH/km<br>max. 850 µH/km<br>(10 kHz)|measurement|S|
|9.3|9.3|maximum signal<br>attenuation|≤ 50 kHz|15 dB/km|measurement|S|
||||50-500<br>kHz|15-35<br>dB/km7|15-35<br>dB/km7|S|
||||0,5-5<br>MHz|35-95<br>dB/km10|35-95<br>dB/km10|S|
||||5-25MHz|95-200<br>dB/km10|95-200<br>dB/km10|S|
|10|Connection|-|-|-|||
|11|Marking|-|See underneath table|See underneath table|VI|M/S|

|Col1|Logo|Color|
|---|---|---|
|TP1 standard cable|EIB/KNX logo|Green RAL 6018|
|TP1 non-standardized cable|TP1 non-standardized cable|Different from green RAL 6018|


-----

- The source of the transient voltages shall be connected to the primary loop with respectively
2 Ω/12 Ω and the corresponding coupling capacitor. A combination wave generator according EN
61000-4-5 with 1,2/50 µs impulse shall generate the transient voltages. The generator shall be
coupled to the primary loop as for mains connections according EN 61000-4-5. In order to avoid
errors, the generator and the measuring equipment shall be positioned at either side of the test setup, i.e. the generator and the measuring device shall be separated locally as far as possible.

- On one side the bus cable wires shall be connected to ground with 50 Ω each. On the other side
the bus cable shall be short-circuited (this side shall never be connected to ground). The ground
plane serves as measuring ground and is not specified.

- Values for transient voltages for industry level according EN61000-6-2 or for home level
according EN 61000-6-1

Home Level

♦ peak voltage : 1 kV with Ri = 2 Ω

♦ peak voltage : 2 kV with Ri = 12 Ω

Industry Level

♦ peak voltage : 2 kV with Ri = 2 Ω

♦ peak voltage : 4 kV with Ri = 12 Ω

- The induced voltage on the bus cable shall be measured as differential voltage.

   - The maximum cable length, for which the defined limit of the induced voltages is not
exceeded, shall be measured.


-----

**Figure 2: Test set-up for measurement of continuous and transient magnetic interference**
**(example)**

###### 2.1.3 Test for measurement of continuous-wave induced differential voltages

The Physical Layer specifications define the telegram signal voltage as an AC voltage ± 200 mV peak,
which is modulated onto the analogue bus voltage. The purpose of these tests is to safeguard bus
communication by limiting the influence of continuous-wave noise to this value.

Test set-up is identical to the one specified in clause 2.1.2. However, the short-circuit in the primary
loop shall be replaced by a load causing the nominal cable current and voltage. The generator shall
moreover be replaced with Power Low Frequency Generator from 50 Hz to 150 kHz, inducing on the
primary loop additionally to the nominal rated voltage, current and frequency (e.g. 230 V/16A/50 Hz)
a low frequency AC voltage of

- 10Veff in the frequency range to 3 kHz and

- 3Veff in the frequency range from 3 kHz up to 150 kHz.


-----

The connection to the primary loop shall be done in such a way that the highest possible to be
expected interference on the secondary loop is ensured.

The induced voltage on the cable under test shall not exceed ± 200 mVpeak for the maximum
specified cable length.

The maximum cable length, for which the defined limit of the induced voltages is not exceeded, shall
be measured.

###### 2.1.4 Installation requirements

- See Volume 4 Part 4

- If additional protection measures are needed (e.g. overvoltage protection) for a distinct cable type,
this shall be explicitly stated in the manufacturer’s cable specifications.

- In applications where higher interference voltages (than defined in the tests before) in the range up
to 150 kHz are expected (e.g. luminaries with electronic ballasts, switch mode power supplies, …)
the standardized TP1 cable shall be used. Manufacturers of non-standardized cables shall give an
appropriate hint to the installer in the product documentation.

- If a non-standardized TP1 cable is used in an installation for KNX, then it shall be used for KNX
only (and not additionally for e.g. intercom systems, telephone, …).

 - It is not allowed that one pair of the Twisted Pair cable is used to realize one line, while the other
for another line.


-----

#### 3 Connectors

##### 3.1 Overview
The underneath table gives an overview of the standardized connectors.

The type numbering (x.y) consists of the following information:

  - the first digit (x) denotes the general type

  - the second digit (y) denotes in case of 1 that the connector connects TP bus circuits only
whereas in case of 2 that the connector connects mains and TP bus circuits in parallel.

|Col1|Col2|Col3|x.1|x.2|
|---|---|---|---|---|
|**General connector type and**<br>**description**|**General connector type and**<br>**description**|**General connector type and**<br>**description**|**TP Bus only**|**230 V or 230/400 V**<br>**+ TP Bus**|
||**A. Connection to Equipment**|**A. Connection to Equipment**|**A. Connection to Equipment**|**A. Connection to Equipment**|
|**1.y**|Plug & socket outlets with gateway<br>for movable devices (e.g. appliance<br>interface connector)|6 way Western Plug RJ12|6 way Western Plug RJ12|Standard Connectors according to<br>IEC 60309-2 (Industry) as well as<br>according to CEE 7 (Home)|
|**2.y**|Data-interface to PC/device - wire<br>connections (e.g. RS232 connector)|Sub D9 according to IEC<br>60807-2 and IEC 60807-3.|Sub D9 according to IEC<br>60807-2 and IEC 60807-3.||
|**3.y**|Type 1.1 with optical fibre connection|To be defined|To be defined|__|
||<br>**B. Connection between Application Module and BCU**|<br>**B. Connection between Application Module and BCU**|<br>**B. Connection between Application Module and BCU**|<br>**B. Connection between Application Module and BCU**|
|**4.y**|PEI connector|KNX standard using IEC<br>60603-8|KNX standard using IEC<br>60603-8||
||**C. Connection between BCU, Devices and Bus**|**C. Connection between BCU, Devices and Bus**|**C. Connection between BCU, Devices and Bus**|**C. Connection between BCU, Devices and Bus**|
|**5.y**|Bus connection interface for<br>connection of system devices and for<br>bus wires|TP1 only|TP1 only||
|**6.y**|Data rail connector|TP1only|TP1only||
|**7.y**|plug, socket outlets & couplers<br>without gateway for connection of<br>fixed equipment and connection of<br>bus wires|TP standard|TP standard|KNX-Standard|
|**8.y**|Plug and socket outlets without<br>gateway for consumer access design<br>parts|To be defined|To be defined|__|


-----

The following picture shows the location of the various above connector types on the combination
Application Mode - Bus Access Unit/Bus Coupling Unit.

**Figure 3: Location of Connector Types**

##### 3.2 KNX Connector Type 1.1

The connector is intended for connection of movable devices to wall-outlets containing a gateway to
the TP1 bus, i.e. the appliance interface. It consists of a plug and a socket: the socket is included in the
wall-outlet, whereas the plug is connected to the cable.

This type of connector was never realized in commercial KNX products, hence the requirements were
removed from the specifications.

##### 3.3 KNX Connector Type 1.2

The connector is intended for connection of movable devices to wall-outlets containing a gateway to
the bus and mains. It consists of a standardized mains plug with integrated plastic optical fiber (POF)
and a socket: the socket is included in the wall-outlet, whereas the plug is connected to the cable.

This type of connector was never realized in commercial KNX products, hence the requirements are
still missing in the specifications.

##### 3.4 KNX Connector Type 2.1
This type of connector is intended for integration into RS232 interfaces, to ensure connection between
the bus and a PC.

The connector is a SUBD9 plug and socket complying with IEC 60807-2 and IEC 60807-3.

As this type of connector has been largely replaced by the use of USB interfaces, the requirements are
missing in the specifications.

##### 3.5 KNX Connector Type 3.1

This connector is intended for integration into appliance interfaces also providing a connection to the
POF medium.

The requirements for this type of connector are under consideration.


-----

##### 3.6 KNX Connector Type 4.1

This connector is intended for connection of application modules to the various BCU types.

If the KNX Connector Type 4.1 is accessible, it shall support the full PEI specification, including
communication.

The PEI connector consists of a male connector without housing and a female connector with housing,
both for mounting on printed boards. The male connector is used on application modules, while the
female on BCU's. Two types are defined: 10 respectively 12 pin.

This chapter merely describes the hardware requirements for this KNX connector: the communication
aspects are dealt with in Part 3/6/2.


-----

###### 3.6.1 General Requirements

**No** **Requirements** **Type 4.1** **M**
**Test**

**0** exclusive designation/name PEI-Connector S

**1** Standard IEC 60603-8 F/S

**2** number of contacts/ways 10 or 12 [10] F/S

**4** non-interchangeable with all other non- compliant[11] F/S
standardized connectors

**5** coding measure keying (collar) restricted to 10 F/S
pin PEI used in BCU UP (see
Volume 9 Part 4 chapter 1)

**6** connection of screen --
**7** clamping unit/ terminals --
**8** double contact --
**9** wire cross section, wire type --
**10** No of wires connectable per pole (PEI use restricted to PCB
mounting)

**10a** test probe access ---
**11** pull out force **_---_**

**12** contact force --
**12a** contact security 3.6.2 M/S

**13** extraction force for entire PEI 5-30 N for 10 pin connector M/S IEC 60512-7
6-30 N for 12 pin connector Test 13b

**14** strain relief --
**14a** insertion force for entire PEI max. 30 N for 10 pin connector M/S IEC 60512-7
max. 36 N for 12 pin connector Test 13b

**15** mating cycles with load at rated voltage and --current

**16** mating cycles without load ≥ 50 M/S

**17** Increase of contact resistance after item 16 < 1,5 times of the originally M/S
measured contact resistance

**18** mechanical strength EN50491-2 M/S

9 As the PEI connector is an integrated part of either BCU or Application Module, testing of the PEI shall be
carried out during testing of either BCU or application module
10 Extensions of the standardized 10 pin PEI connector are allowed : however, e.g. a non-standardized two pin
extension shall then not be denominated as 12 pin but 10 + 2 pin.
11 By the integration of the PEI connector into the BCU, non-interchangeability is normally guaranteed. In case
of doubts, the connector shall be clearly marked with the word ‘PEI’.

|No|Requirements|Type 4.1|M|9<br>Test|
|---|---|---|---|---|
|**0 **|exclusive designation/name|PEI-Connector|S|---|
|**1 **|Standard|IEC 60603-8|F/S|VI|
|**2 **|number of contacts/ways|10 or 1210|F/S|VI|
|**4 **|non-interchangeable with all other non-<br>standardized connectors|compliant11|F/S|VI|
|**5 **|coding measure|keying (collar) restricted to 10<br>pin PEI used in BCU UP (see<br>Volume 9 Part 4 chapter 1)|F/S|VI|
|**6 **|connection of screen|---|||
|**7 **|clamping unit/ terminals|---|||
|**8 **|double contact|---|||
|**9 **|wire cross section, wire type|---|||
|**10**|No of wires connectable per pole|(PEI use restricted to PCB<br>mounting)|||
|**10a**|test probe access|----|||
|**11**|pull out force|**_---_**|||
|**12**|contact force|---|||
|**12a**|contact security|3.6.2|M/S|see 3.6.2|
|**13**|extraction force for entire PEI|5-30 N for 10 pin connector<br>6-30 N for 12 pin connector|M/S|IEC 60512-7<br>Test 13b|
|**14**|strain relief|---|||
|**14a**|insertion force for entire PEI|max. 30 N for 10 pin connector<br>max. 36 N for 12 pin connector|M/S|IEC 60512-7<br>Test 13b|
|**15**|mating cycles with load at rated voltage and<br>current|---|||
|**16**|mating cycles without load|≥ 50|M/S|IEC 60512-5<br>Test 9a (speed<br>100 mm per<br>minute max.<br>and rest 30<br>seconds<br>(unmated))|
|**17**|Increase of contact resistance after item 16|< 1,5 times of the originally<br>measured contact resistance|M/S|IEC 60512<br>part 2<br>test 2a|
|**18**|mechanical strength|EN50491-2|M/S|EN50491-2|


-----

|No|Requirements|Type 4.1|M|9<br>Test|
|---|---|---|---|---|
|**19**|vibration/ shock|EN50491-2|M/S|EN50491-2|
|**20**|operation environment, temperature range|3K5|M/S|---|
|**21**|climatic withstand|EN50491-2|M/S|EN50491-2|
|**22**|temperature rise|< 45 K with rated current and<br>with cross section|M/S|IEC 60512-5-1<br>Test 5a|
|**23**|rated insulation voltage for bus|50V|M/S|---|
|**24**|test voltage between live parts bus-bus<br>(Usage class B - basic insulation)|0,8 kV impulse<br>0,6 kV AC|M/S|---|
|**25**|Clearance and creepage distances between<br>bus contacts and outer surface when mated<br>(Usage class B - basic insulation)|for unmated female<br>10 pin connector<br>clearance : 3 mm<br>creepage : 3 mm<br>between front and contact pins|M/S|Test voltage :<br>2,8 kV AC,<br>4kV impulse<br>for other types,<br>electrical safety<br>shall be<br>provided by the<br>product design|
|**26**|Clearance and creepage distances between<br>bus contacts and mains live parts when mated<br>(Usage class B - basic insulation)|provided by the product design|||
|**27**|Clearance and creepage distances between<br>mains contacts and outer surface when mated<br>(Usage class B - basic insulation)|---|||
|**28**|insulation resistance between pins|> 1011 Ω|M/S|100V DC<br>IEC 60512-3-1<br>Test 3a<br>standard<br>conditions|
|**29**|nominal voltage|32V|M/S|---|
|**30**|nominal current|25 mA|M/S|---|
|**31**|pollution degree (or Micro Environmental<br>Class)|2|M/S|---|
|**32**|Contact resistance one pin|≤ 20 mΩ in new condition|M|IEC 60512-2-1<br>Test 2a test<br>conditions|
|**32a**|damage to the contact surface (sliding)|---|||
|**33**|IP degree (outlets, connectors) mated or not<br>mated|(IP20 provided by product )|M/S|Test-finger|
|**34**|marking|KNX Logo opt.|||
|**35**|installation aspects|---|||


###### 3.6.2 Additional Requirements for Contact Security

1. The contact security shall be provided for a 10 years lifetime.

2. The contact pins shall be lubricated

Lubricant: Min.20 Vol.% Fomblin Y25 thinned with 80 Vol.% Galden SV 70 or with other non
resinous grease or oil.


-----

At least one of the contact partners shall be sufficiently lubricated.

Test of lubrication by visual inspection or chemical methods.

###### 3.6.3 Contact material:

Au - the Gold plating shall comply with: Au ≥ 0,7 µm; Hardness > 140 HV,

Ni-intermediate-Layer: > 1,2 µm

In case of introduction of new contact material the manufacturer shall verify that the new material
fulfils the above requirements in all combinations with existing contact material.

###### 3.6.4 Constructional Features

 3.6.4.1 10 pin Physical External Interface
Application pin size: 0,63 x 0,63 mm

BCU Type L1 min L2 max reference 1

BCU N 6,5 mm 10 mm screen surface

BCU UP 4, 1 mm 7,6 mm BCU surface

L1

8,5 +/- 0.2 L2

1)

**Figure 4: 10 pin Physical External Interface**

|BCU Type|L1 min|L2 max|reference 1|
|---|---|---|---|
|BCU N|6,5 mm|10 mm|screen surface|
|BCU UP|4, 1 mm|7,6 mm|BCU surface|

|PCB|Col2|
|---|---|
|**PCB**||


-----

###### 3.6.4.2 12-Pin Physical External Interface
Application male pin size: 0,63 x 0,63 mm

Application male pin length: L1 = 5,5 mm min.

L2 = 12,8 mm min.

L1

8.5 +/- 0.2

L2

15,4 +/- 0.5

BCU Surface

**Figure 5: 12-pin Physical External Interface**

##### 3.7 KNX Connector Type 5.x

The standardized KNX connector Type 5.x shall exclusively be used for KNX TP1 networks.

The connector is intended for connection of any product to the TP1 bus. The underneath requirements
are split up into two parts: one for any type of 5.x connector and another part for the traditional and
standardized 5.1 connector. When submitting a connector type 5.x, the manufacturer shall explicitly
state whether he wishes to comply to the requirements of type 5.x or of these of the standardised
connector 5.1.

###### 3.7.1 Requirements for KNX Connector Type 5.x
The underneath requirements are minimum requirements, hence, the column with the indication M/F/S
is not included in the list of requirements as all listed requirements are M requirement.

|Col1|Col2|
|---|---|
|**PCB**|**PCB**|

|No|Requirements|Type 5.x|Test|
|---|---|---|---|
|**1 **|Standards for<br>connections|Choose one or more applicable standards<br>from :|---|


-----

|Col1|Col2|EN 60947-7-1 for terminal blocks for<br>copper conductors<br>EN 60947-7-4 for PCB terminal blocks for<br>copper conductors<br>EN 60998-2-2 for screw-less type<br>clamping units)<br>EN 60998-2-1 for screw type clamping<br>units<br>EN 61984 for pluggable connectors|Col4|
|---|---|---|---|
|**2 **|bus interruption|connector shall allow disconnecting<br>device without interrupting bus|VI|
|**3 **|wire cross section,<br>wire type of KNX<br>TP bus cable|See Clause 2.1.1 item 2.1|clamping test|
|**4 **|Nr. of wires<br>connectable per<br>pole with identical<br>diameter|≥ 2|VI (clamping test)|
|**5 **|wire pull out force<br>per conductor|> 20 N for 0,5 mm² corresponding to 0,8<br>mm diameter (AWG Cu 20)|see clause 3.7.4.1|
|**612 **|plug extraction<br>force per pole)|> 3 N|see clause 3.7.4.2|
|**716 **|plug insertion<br>force per pole|< 20 N|see clause 3.7.4.2|
|**816 **|mating cycles with<br>load at rated<br>voltage and<br>current|50 cycles at 24 mA and 30 V|IEC 60512-2-1, Test 2a<br>(measurement method)<br>EN 60512-9-3 (test<br>execution)|
|**916 **|mating cycles<br>without load|≥ 50 cycles|≥ 50 cycles|
|**1016 **|Increase of contact<br>resistance after<br>item number 8 or<br>9|< 1,5 times of the originally measured<br>contact resistance or voltage drop|< 1,5 times of the originally measured<br>contact resistance or voltage drop|
|**11**|mechanical<br>strength|EN50491-2|EN 50491-2<br>(environmental<br>conditions)<br>EN 60068-2-31 (test<br>execution)|
|**12**|vibration/ shock|EN 60068-2-31|EN 60068-2-31|
|**13**|environmental<br>class/climatic<br>withstand|3k6 to EN 60721-3-3:1995<br>(-25 °C / +55 °C,light condensation)|EN50491-2|


12 Only applicable in case of pluggable connection


-----

|14|temperature rise|< 45 K with rated current and with cross<br>section|IEC60512-5-1 Test 5a|
|---|---|---|---|
|**15**|rated insulation<br>voltage for bus|50 V|----|
|**16**|test voltage<br>between live parts<br>bus-bus (Usage<br>class B - basic<br>insulation)|0,8 kV impulse<br>0,6 kV AC|---|
|**17**|Clearance and<br>creepage distances<br>between bus<br>contacts and outer<br>surface when<br>mated (Usage<br>class B – basic<br>insulation)|Either measured clearance and creepage<br>of:<br>clearance : 3 mm<br>creepage : 3 mm<br>Or<br>Voltage of 2,8 kV AC, 4kV impulse met|Test voltage:<br>2,8 kV AC, 4kV impulse<br>HB Volume 4/3|
|**18**|insulation<br>resistance between<br>poles (100 V DC)|> 1011 Ω|100VDC<br>IEC 60512-3-1<br>Test 3a standard<br>conditions|
|**19**|nominal voltage|32V|---|
|**20**|nominal current|3A|---|
|**21**|pollution degree<br>(or Micro<br>Environmental<br>Class)|2|---|
|**22**|contact resistance<br>RD (one<br>connection)<br>- for Rc1 and Rc2<br>see Figure 6|conductor-conductor Rc1 < 10 mΩ|see clause 3.7.3.4|
|||conductor-contact pin Rc2 < 10 mΩ|see clause 3.7.3.4|
|**23**|IP degree (outlets,<br>connectors) mated<br>or not mated (not<br>on male contact<br>pins for soldering)|IP20 in both cases|test finger|
|**24**|installation aspects|on site installation possible|test installation|
|**25**|terminal-<br>conductor material|E-Cu or Cu-alloy|---|


-----

###### 3.7.2 Requirements for KNX Connector Type 5.1

|No|Requirements|Type 5.1|M|Test|
|---|---|---|---|---|
|**0 **|exclusive designation/name|none|||
|**1 **|Standard for screw-less connector<br>standard for connector with screw|EN 60998-2-2<br>EN 60998-2-1|M|---|
|**2 **|number of contacts/ways|2|F/S|VI|
|**3 **|bus interruption|connector shall allow<br>disconnecting device<br>without interrupting<br>bus|M/S|VI|
|**4 **|non-interchangeable with all other<br>non-standardized connectors|Compliant by design<br>or color for<br>standardised solution<br>Additional marking<br>shall clearly indicate<br>the bus connection in<br>case of non-<br>standardised solution|M/S|VI|
|**5 **|coding measure|KNX coding : see<br>Figure 7|F/S|VI|
|**6 **|connection of screen|---|||
|**7 **|clamping unit/ terminals|screw-less or with<br>screw|F/S|---|
|**8 **|double contact|---|||
|**9 **|wire cross section, wire type|0,8 mm-1,00 mm dia<br>solid (AWG Cu 20-<br>18)<br>0,5 mm2 (AWG Cu<br>20) stranded|F/S|clamping test|
|**10**|Nr. of wires connectable per pole with<br>identical diameter|≥ 3 x 0,8 mm dia <br>(AWG Cu 20) or≥ 3 x<br>1,0 mm (AWG Cu 18)|<br>F/S|VI (clamping test)|
|**10a**|test probe access|min. 1 mm x 1 mm –<br>shall be accessible in<br>mounted condition|F/S|VI|
|**10b**|male contact pins|1 mm∅ (± 0,05 mm),<br>6 to 8 mm long - tin<br>coated|F/S|VI|
|**11**|wire pull out force per conductor|> 20 N|M/S|see clause 3.7.4.1|
|**12**|contact force|---|||
|**12a**|contact security|---|||
|**13**|plug extraction force per pole|> 3 N|M/S|see clause 3.7.4.2|
|**14**|strain relief|---|||
|**14a**|plug insertion force|< 20 N|M/S|see clause 3.7.4.2|


-----

|No|Requirements|Type 5.1|M|Test|
|---|---|---|---|---|
|**15**|mating cycles with load at rated<br>voltage and current|50|M/S|IECIEC 60512-9-3:<br>2011|
|**16**|mating cycles without load|---|||
|**17**|Increase of contact resistance after<br>item number 15|< 1,5 times of the<br>originally measured<br>contact resistance|M/S|IEC 60512-2-1: 2002|
|**18**|mechanical strength|EN50491-2|M/S|EN50491-2|
|**19**|vibration/ shock|EN50491-2|M/S|EN50491-2|
|**20**|environmental class|EN50491-2:3k6<br>(-10/+85°C, light<br>condensation)|M/S|---|
|**21**|climatic withstand|EN50491-2|M/S|EN50491-2|
|**22**|temperature rise|< 45 K with rated<br>current and with cross<br>section|M/S|IEC60512-5-1 Test 5a|
|**23**|rated insulation voltage for bus|50 V|M/S|----|
|**24**|test voltage between live parts bus-bus<br>(Usage class B - basic insulation)|0,8 kV impulse<br>0,6 kV AC|M/S|---|
|**25**|Clearance and creepage distances<br>between bus contacts and outer<br>surface when mated (Usage class B –<br>basic insulation)|clearance : 3 mm<br>creepage : 3 mm13|M|Test voltage: 2,8 kV<br>AC, 4kV impulse|
|**26**|Clearance and creepage distances<br>between bus contacts and mains live<br>parts when mated (Usage class B -<br>basic insulation)|---|||
|**27**|Clearance and creepage distances<br>between mains contacts and outer<br>surface when mated (Usage class B -<br>basic insulation)|---|||
|**28**|insulation resistance between poles<br>(100 V DC)|> 1011 Ω|M/S|100VDC IEC 60512-3-1<br>Test 3a standard<br>conditions|
|**29**|nominal voltage|32V|M/S|---|
|**30**|nominal current|3A|M/S|---|
|**31**|pollution degree (or Micro<br>Environmental Class)|2|M/S|---|
|**32**|contact resistance RD(one connection)<br>- for Rc1 and Rc2 seeFigure 6|conductor-conductor<br>Rc1 < 10 mΩ|M/S|see clause 3.7.4.4|
|||conductor-contact pin<br>Rc2 < 10 mΩ|M/S|see clause 3.7.4.4|
|**32a**|damage to the contact surface (sliding)|<br>---|||


13These creepage distances can if necessary be provided via an additional cover over the connector surface, if the
connector itself does not provide these required creepage distances.


-----

|No|Requirements|Type 5.1|M|Test|
|---|---|---|---|---|
|**33**|IP degree (outlets, connectors) mated<br>or not mated|IP20 in both cases|M/S|test finger|
|**34**|marking|KNX Logo opt.|||
|**35**|installation aspects|on site installation<br>possible|M/S|test installation|
|**36**|terminal-conductor material|E-Cu|M/S|---|


**Rc2**

**Rc1**

**Conductor additional junction**
**conductor**
**additional junction**

**BUS**

**Figure 6: KNX-Connector Type 5.1 - Principal Diagram**

|tion|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|** tion**|** tion**||||
|** tion**|** tion**||||
|** tion**|||||


-----

###### 3.7.3 Constructional Features for standardized Solution

**Figure 7: Cable Connector**

###### Male socket: Pin diameter: 1 +/- 0,05 mm - Pin length: 6…8 mm

 Cable: Core diameter: 0,8…1,0 mm (no mix of different diameters allowed at same time)

 Strip length: 5…6 mm

**Figure 8: Colour coding of cable connector[14]**

A bus connection block can either consist of two separate parts notched together or of one single
unseparable block. When consisting of one single unseparable block, the colors indicating bus polarity
(dark gray-red) shall be clearly visible to the user and ensure proper and safe connection.

14 In case of white/yellow variation, white corresponds to minus where yellow to plus.


-----

###### 3.7.4 Test Guidelines

 3.7.4.1 Pull-out Test
Pull out test according to EN 60998-2-2: 2004, clause 10.106 for screw-less type clamping units and
according to EN 60998-2-1, 1993, clause 10.105 for screw type clamping units

Specified values of the conductor retention forces according to EN 60998-2-1: 2004, table 103 or to
EN 60998-2-1: 2004, table 104 for conductor

0,5 mm² corresponding to 0,8 mm diameter (AWG Cu 20): 20 N

0,75 mm² corresponding to 1,0 mm diameter (AWG Cu 18): 20 N

The pull is applied on each conductor without jerks (1 min in the direction of the axis of the connector.

**Figure 9: Pull out Test**

During the test the conductor shall not come out of the terminal.

###### 3.7.4.2 Testing of the Insertion and Extraction Forces at one Pole Socket Connector

**Figure 10: Insertion and Extraction Forces**

Contact pin: 1 mm ± 0,05 mm

This test verifies the insertion and extraction forces of the contact pin and the pole of socket connector


-----

**Specified values per pole:** - Insertion force < 20 N

                       - Extraction force                       - 3 N

###### 3.7.4.3 Testing of the Insertion Frequency of the Contact Pin

**Figure 11: Test Arrangement for Insertion Frequency of the Contact Pin**

Contact pin: 1 mm ± 0,05 mm

Conductor diameter: 0,8 mm (AWG Cu 20)

Test current It: 100 mA DC

Test voltage: 1 V (open-circuit voltage)

Before and after 50 mating cycles the through resistance according to IEC 60512-2-1, of the contact
unit and contact pin is measured.

The through resistance is inferred from the voltage drop. When measuring the through resistance with
DC, the arithmetic average from both readings in two directions of current flow is the result of one
measuring cycle.

After 50 mating cycles the through resistance shall not exceed 5 mΩ.


-----

###### 3.7.4.4 Test Arrangement for Contact Resistance

**Figure 12: Test Arrangement for Measuring of Contact Resistance of Cable Connector**

##### 3.8 KNX Data Rail Connectors - Type 6.1

This KNX connector is intended for the automatic connection of TP1 DIN rail devices to the TP1 bus
only when snapped onto the DIN-rail. It consists of a data rail and a contact block, the latter consisting
of a housing and a set of spring contacts.

For ensuring connection between data rail and cable, requirements for a (non-KNX standardized data)
rail to wire connector are specified.

This clause also contains KNX specific test guidelines for this connector type.

###### 3.8.1 KNX Connector Type 6.1 - Contact Block/Data Rail

This connector type consists of two elements: a contact block and a data rail. Compliance to the
underneath requirements shall be verified by either

- integrating the developed contact block into a product and testing it with all at that time existing
data rail types except when the standard coating and shape is used. In this case, execution of the
tests is only required with the standard data rail type;

and/or

- testing the developed data rail with all already certified contact block types except when the
standard coating is used. In this case, execution of the tests is only required with the standard
contact block type.

|No|Requirements|Type 6.1|M|Test|
|---|---|---|---|---|
|**0 **|exclusive designation/name|---|||
|**1 **|Standard|---|||
|**2 **|number of contacts/ways|2 or 4|F/S|VI|
|**4 **|non-interchangeable with all other<br>non-standardized connectors|Compliant by design for<br>standardised solution<br>Additional marking<br>shall clearly indicate the<br>bus connection in case<br>of non-standardised<br>solution|M/S|VI|


-----

|No|Requirements|Type 6.1|M|Test|
|---|---|---|---|---|
|**5 **|coding measure|---|||
|**6 **|connection of screen|---|||
|**7 **|clamping unit/ terminals|--|||
|**8 **|double contact (of contact block)|--|||
|**9 **|wire cross section, wire type|---|||
|**10**|Number of wires connectable per pole|---|||
|**11**|wire pull out force in latched<br>condition|---|||
|**12**|contact force of contact block on data<br>rail (when using the standard coating<br>as laid down in 12b)|2N<K<8N at any<br>position of contact zone<br>The shape of the contact<br>shall be such that the<br>requirements are met<br>and no damage to the<br>contact surface is<br>inflicted.|M/S|spring force measurement;<br>force-distance characteristic<br>precision± 0,1 N (including<br>long-term stability<br>according test VIII of test<br>procedure in clause 3.8.5)|
|**12b**|standard coating of contact pin and<br>data rail tracks|tin - thickness of data<br>rail tracks coating : 10 –<br>25 µm - if any anti-<br>diffusion barrier is<br>necessary owing to the<br>choice of the basic<br>material, it shall be<br>provided|F/S|measurement|
|**13**|plug extraction force|---|||
|**14**|strain relief|---|||
|**14a**|plug insertion force|---|||
|**15**|mating cycles with load at rated<br>voltage and current|50|M/S|EN 60512-2-1 Test 2a|
|**16**|mating cycles without load|---|||
|**17**|Increase of contact resistance after<br>item 15|< 1,5 times of the<br>originally measured<br>contact resistance|M/S|EN 60512-2-1 Test 2a|
|**18**|mechanical strength|EN50491-2|M/S|EN50491-2|
|**19**|vibration/ shock|contact interruption< 1<br>ms ; RD< 50 mΩ|M/S|see test guidelines 3.8.5 :<br>test V|
|**20**|operation environment, temperature<br>range|3k6|M/S|---|
|**21**|climatic withstand|see test guidelines 3.8.5|M/S|see test guidelines 3.8.5|
|**22**|Temperature rise<br>temperature rise of hot spots (power<br>rating)|< 45K with rated current<br>< 60K|<br>M/S|see test guidelines 3.8.5 :<br>test VII|
|**23**|rated insulation voltage for bus|50V|M/S|----|


-----

M/S see test guidelines of clause
3.8.5: test VI combined with
Test I to IV

|No|Requirements|Type 6.1|M|Test|
|---|---|---|---|---|
|**24**|test voltage between live parts bus-bus<br>(Usage class B - basic insulation)|0,8 kV impulse<br>0,6 kV AC|M/S|---|
|**25**|Clearance and creepage distances<br>between bus contacts and outer<br>surface when mated (Usage class B -<br>basic insulation)|clearance : 3 mm<br>creepage : 3 mm|M/S|test voltage 2,8 kV AC - 4<br>kV impulse HB Volume 4/3|
|**25a**|mounting of DIN rail devices in DIN<br>rail without inserted data rail|creepage and clearance<br>between DIN rail and<br>contact block≥ 3 mm or<br>protection of pins with<br>appropriate insulation<br>(seeFigure 13)|M/S|VI and measurement|
|**26**|Clearance and creepage distances<br>between bus contacts and mains live<br>parts when mated (Usage class B -<br>basic insulation)|---|||
|**27**|Clearance and creepage distances<br>between mains contacts and outer<br>surface when mated (Usage class B -<br>basic insulation)|---|||
|**28**|insulation resistance between<br>terminals (100 V DC)|> 1011Ω (built into<br>device)|M/S|100VDC IEC 60512-3-1<br>Test 3a standard conditions|
|**29**|nominal voltage|32V|M/S|---|
|**30**|nominal current|3A|M/S|---|
|**31**|pollution degree (or Micro<br>Environmental Class)|2|M/S|----|
|**32**|contact resistance RD(one connection)|< 50mΩ for 0,5-0,8 A<br>load|M/S|EN 60512-2-1 Test 2a<br>according to test guidelines<br>clause 3.8.5|
|**32a**|damage to the contact surface (sliding)|no damage to the contact<br>surface after sliding|<br>M/S|see test guidelines of clause<br>3.8.5: test VI combined with<br>Test I to IV|
|**33**|IP degree (not mated) (outlets,<br>connectors)<br>mated|---|||
|**34**|marking|standard + KNX Logo<br>opt.|||
|**35**|installation aspects|on site installation<br>possible|F/S|test installation|
|**36**|reference DIN-rail|according EN60715-<br>TH35-7,5|F/S|VI|


-----

###### 3.8.2 Constructional Requirements for standardized Contact Block

**Figure 13: Constructional Requirements**

  - Moreover, the devices shall be constructed/mounted in such a way, that the polarity of the
pin configuration corresponds to the polarity of the data rail as shown in the above figure
("+" upper track, "-" lower track). In case of wrong polarity, the device will not respond to
the bus.

###### 3.8.3 Constructional Features of the Data Rail
Data rail is part of the connector type 6.1. The data rail functions like a back plane that is mounted
inside the DIN rail. The inner two tracks are used for the data transmission of the analog signal of the
physical layer type TP1. The outer tracks may be used for other purposes that shall not disturb the
transmission on the inner tracks according to the second pair requirements as laid down in Volume 4
Part 4.

_Data Rail Cover_

D _Power Supply +_

A _Bus+_

B _Bus-_

C _Power Supply -_

_Data Rail_

**Figure 14: Data Rail and Data Rail Cover**

  - The contact zones provided by the data rail shall comply with the drawing given in Figure
15. In the X-direction, the tracks shall provide at least the given contact range, in the Ydirection, the tracks may not exceed the working range, nor may any other part exceed the
dotted line.


-----

  - The recommended surface of the tracks is smooth and flat (as e.g. the surface of a standard
PCB).

**Figure 15: Constructional Features**

Note: When the length of the data rail exceeds approximately 200 mm, proper transport and

installation guidelines shall ensure that ruptures of the data rail tracks do not occur.

###### 3.8.4 Constructional Features of Data Rail Cover

Parts of the data rail that are not covered by devices, shall be covered with a data rail cover to prevent
the data rail from dirt and to ensure the SELV requirement in case of a mixed installation with mains.

The cover shall be made of plastic material which

 - is sufficiently flexible to allow permanent fixing of the cover to the DIN rail. To test this, the data
rail cover shall be mounted and removed from the DIN rail 30 times;

 - withstands a glow wire temperature of 750°C;

 - shall allow the easy adaptation of the length according to the module width of DIN 43880.

###### 3.8.5 Test Guidelines for Contact Block and Data Rail

A to be certified data rail or contact block shall be submitted to the underneath tests:

###### 3.8.5.1 Overview of Required Tests

Climatic Test I Damp Heat, cyclical according to EN 60068-2-30. The climatic cycle
(Db, variant 1) shall then be combined with an 8 hour bedewment.

Climatic Test II Damp Heat, cyclical according to EN 60068-2-30, Db Test, first
variant, temporary bedewment, 30 cycles

Climatic Test III Sulfur dioxide and hydrogen sulfide for electrical contacts and
connections according to EN 60068-2-60 Method 1

Climatic Test IV Dry Heat according to EN 60068-2-2, Bb Test, level of stringency
80°C, 168 to 2688 hours. The stringency of the test is higher than in
the above quoted standard.


-----

Vibration Test V Vibration test according to EN 60068-2-6

Frequency range: 10 to 150 Hz. From 10 to 57 Hz with a stable
amplitude of 0,15 mm and from 57 to 150 Hz with stable acceleration
of 2,0 g.

1 octave per minute, each time 10 cycles in the three main axes of the
devices

Test VI damage of the contact surface

If the snapped-on contact system is shifted twice across the entire data
rail length, intentional damage is inflicted on the contact surface. This
test shall be carried out on 4 test objects (contact system with at least
16 contact pins) and 4 data rails

Test VII power-rating

Temperature rise test according to EN 60512-5-1 (former IEC 605123). Power is serially conducted through all contact pairs

amperage : 3 A

Test VIII Change in the strength of the springs owing to long-term strain

###### 3.8.5.2 Test Procedure

All Rd - measurements shall be carried out according to the principle of the transit resistance
measurement according to EN 60512-2-1 Test 2a, millivolt method, measurement principle with 4
wires.

**Figure 16: Schematic Representation of RD-Measurement**

RD = ≤ 50 mΩ per contact pin

The sum of the possible track- and transit resistance of the contact system shall be ≤ 50 mΩ per
contact pin.

**Climatic Tests (Test I to IV)**

Each climatic tests shall be carried out on 4 open (snapped-off) systems [4 test objects with contact
systems - at least 16 contacts and 2 data rails] and 4 snapped-on systems [4 test objects with contact
systems - at least 16 contacts - mounted on 2 data rails]. Before the start of the tests, each contact pin
shall be submitted to a Rd-measurement.


-----

Each time the measurements shall be carried out according to 4 test steps:

Test I after 3, 8, 15 and 30 cycles

Test II after 3, 8, 15 and 30 cycles

Test III after 1, 4, 10 and 21 cycles

Test IV after 168, 672, 1176 and 2688 hours

After each test step all snapped-on contact systems shall be submitted to a Rd-measurement. After
each test step a test object of the open systems shall be mounted on a data rail and submitted to a Rdmeasurement. The test object remains snapped on the data rail for the rest of the test procedure. After
completion of the 4 test steps all systems are in a mounted condition.

**Vibration test V (Test V)**

As previously described, four test objects with contact systems (with at least 16 contacts) shall be
mounted on a data rail and submitted to a vibration test.

Before and after each test step a Rd-measurement shall be carried out.

Moreover, during the consecutive tests, it shall be examined if contact between contact pin and data
rail is not interrupted. Short time increase of contact resistance in the limits duration t ≤ 1 ms and
contact resistance RD ≤ 50 mΩ according to item 19 of clause 3.8.1.

**Damage of the contact surface (Test VI)**

The damage inflicted of the contact surface shall be carried out in the above-described way.

Subsequently, one test object of the contact system and one data rail shall be used as open systems in
the test steps I to IV. After completion of the fourth test phase they shall be mounted and submitted to
a Rd-measurement.

**Power-rating (Test VII)**

The previously described measurements shall be carried out on four test objects of the contact system
(with at least 16 contact pins) mounted on a data rail.

**Change in the strength of the springs (Test VIII)**

After completion of the test phases and after having successfully carried out a Rd-measurement, a
spring diagram should be drawn up of the contact pins of all snapped-on test objects of test IV. These
spring diagrams shall be compared to those of new test objects (with at least 16 contact pins).

###### 3.8.5.3 Assessment of the Measurement Results
**Climatic tests I to IV (Test I to IV)**

None of the measured Rd-values may exceed the value indicated in item 32 of clause 3.8.1.

**Vibration Test (Test V)**

None of the measured Rd-values may exceed the value indicated in item 19 of clause 3.8.1. Moreover,
contact may not be interrupted during the tests.

**Damage to the Contact Surface (Test VI)**

None of the measured Rd-values may exceed the value indicated in item 32 of clause 3.8.1. Moreover,
contact may not be interrupted during the tests.

**Power Rating (Test VII)**

The temperature rise should not exceed the value indicated in item 22 of clause 3.8.1.

**Changes in the Spring Strength (Test VIII)**


-----

The differences between the compared spring diagrams should not exceed 5%.


-----

###### 3.8.5.4 Number of Test Samples and their Deployment during the various Tests

**Figure 17: Number of Test Samples and their Deployment**
**during Contact Block/Data Rail Tests**


-----

Note 1: For this number of test samples failures or malfunctions are not allowed. When the

manufacturer decides to carry out the required tests with a higher number of test samples,
statistical techniques shall be used, with the above stated number of test samples as a starting
point (e.g. techniques as laid down in ISO 3951). If such statistical techniques are used, they
shall be stated in the resulting test report.

###### 3.8.6 Data Rail to Wire Connector
This connector shall be exclusively be used for KNX TP1 networks.

The data rail may be connected to the bus cable with a data rail to wire connector: this product is
composed of connector type 5.1 and 6.1. For requirements for this non-standardized data rail to wire
connector, see the requirements of the connector type 5.1 and 6.1.

The entire device shall moreover comply to EN60715-TH35 and to DIN 43880 (CLC TC23E Report
R023-01) and the requirements of EN 60669-1.

##### 3.9 KNX Connector Type 7.1

###### 3.9.1 Requirements
This KNX connector is used in cabling systems (e.g. in ceiling, on wall, in ducts, under floor, ...). This
KNX connector is especially intended for professional use.

The standardized KNX connector Type 7.1 shall exclusively be used for KNX TP networks.

This KNX connector consists of a plug and socket. The plug is intended for connection to cables,
whereas the socket is intended either for connection of cables, for integration into wall outlets without
design parts or for integration into devices.

|No|Requirements|Type 7.1|M|Test|
|---|---|---|---|---|
|**0 **|exclusive designation/name|BST14 connector|---|---|
|**1 **|Standard|---|||
|**2a**|number of contacts/ways|2|F/S|VI|
|**2b**|number of contacts/ways|option: 2+1 or 2+2 or<br>2+2+1<br>2 denotes 1 twisted pair<br>1 denotes screen|F|VI|
|**4 **|non-interchangeable with all<br>other non-standardized<br>connectors|Compliant by design or color<br>(in case of doubt additional<br>marking)|M/S|IEC 60512-13-<br>5 test 13e using<br>reference value<br>14a|
|**5 **|coding measure|coded connector with<br>KNX keying (see Figure<br>18, green color)|F/S|VI|
|**5a**|Locking mechanism|see Figure 18|M/S|VI|
|**6 **|connection of screen|Optional|||
|**7 **|clamping unit/ terminals|according IEC 60999|M/S|clamping test|
|**8 **|double contact|---|||


-----

|No|Requirements|Type 7.1|M|Test|
|---|---|---|---|---|
|**9 **|wire cross section|screen 0,25 mm2 – 0,5<br>mm2 (AWG Cu 23-25) bus<br>0,25 mm2- 0,75 mm2 <br>(AWG Cu 23-18)|F/S|clamping test|
|**10**|No of conductors and type<br>connectable per pole|1 solid or 1 stranded|F/S|clamping test|
|**10a**|test probe access|---|||
|**11**|pull out force in latched<br>condition|≥ 20N|M/S|IEC 60512-13-1<br>test 13a standard<br>conditions (24<br>hours, 24 °C,<br>50%) speed 5<br>mm/sec|
|**12**|contact force|---|||
|**12a**|contact security|---|||
|**14**|strain relief|≥ 40N (higher than<br>latching)|M/S|IEC 60512-17-<br>3 test 17c<br>mounting as<br>specified by the<br>manufacturer|
|**14a**|plug insertion force|measured value shall be<br>reference value in item 4|M/S|IEC 60512-13-1<br>test 13a standard<br>conditions (24<br>hours, 24 °C,<br>50%) speed 5<br>mm/sec|
|**15**|mating cycles with load at rated<br>voltage and current|---|||
|**16**|mating cycles without load|≥ 50|M/S|IEC 60512-9-1<br>test 9a speed<br>5mm per sec max<br>and rest 5<br>seconds min<br>(unmated)|
|**17**|Increase of contact resistance<br>after item 16|< 1,5 times of the originally<br>measured contact resistance|M/S|IEC 60512-2-1<br>Test 2a|
|**18**|mechanical strength|EN50491-2 + tumbling<br>barrel|M/S|EN50491-2 +<br>IEC 61535|
|**19**|vibration/ shock|EN50491-2, IEC 61535|M/S|EN50491-2|
|**20**|operation environment,<br>temperature range|3K6|M/S|---|
|**21**|climatic withstand|EN50491-2 with rated<br>current|M/S|EN50491-2|
|**22**|temperature rise|< 45 K with rated current<br>and with cross section|M/S|IEC60512-5-1<br>Test 5a|
|**23**|rated insulation voltage for bus|50V|M/S|---|


-----

|No|Requirements|Type 7.1|M|Test|
|---|---|---|---|---|
|**24**|test voltage between live parts<br>bus-bus (Usage class B – basic<br>insulation)|0,8 kV impulse<br>0,6 kV AC|M/S|---|
|**25**|Clearance and creepage distances<br>between bus contacts and outer<br>surface when mated (Usage class<br>B – basic insulation)|clearance : 3 mm<br>creepage : 3 mm|M/S|test voltage 2,8<br>kV AC – 4 kV<br>impulse HB<br>Volume 4/3|
|**26**|Clearance and creepage distances<br>between bus contacts and mains<br>live parts when mated (Usage<br>class B – basic insulation)|---|||
|**27**|Clearance and creepage distances<br>between mains contacts and outer<br>surface when mated (Usage class<br>B – basic insulation)|---|||
|**28**|insulation resistance between<br>pins|> 1011 Ω|M/S|100VDC<br>IEC 60512-3-<br>1 Test 3a<br>standard<br>conditions|
|**29**|nominal voltage|32V|M/S|---|
|**30**|nominal current|3A|M/S|---|
|**31**|pollution degree (or Micro<br>Environmental Class)|2|M/S|---|
|**32**|contact resistance|≤ 15 mΩ in new condition|M/S|IEC 60512-2-1<br>Test 2a test<br>conditions wire<br>to wire mated|
|**32a**|damage to the contact surface<br>(sliding)|---|||
|**33**|IP degree (outlets, connectors)<br>mated or not mated|IP20 not-mated<br>IP20C mated|M|Test-Finger<br>IEC 60529 Tab<br>6-2b|
|**34**|marking|standard + KNX Logo opt.|||
|**35**|installation aspects|field installation possible|F/S|test installation|


-----

###### 3.9.2 Constructional Features

**Figure 18: Constructional Features of KNX Connector 7.1 Male and Female**

##### 3.10 KNX Connector Type 7.2

###### 3.10.1 Requirements

The standardized KNX connector Type 7.2 shall exclusively be used for KNX TP networks.

This combined mains and KNX connector consists of a plug and socket. The plug is intended for
connection to mains + bus cables, whereas the socket is intended either for connection of mains + bus
cables or for integration into wall outlets without design parts and for integration into devices.

This mains + TP bus connector is used in cabling systems (e.g. in ceiling, on wall, in ducts, under
floor, …). This mains + TP bus connector is especially intended for professional use.

Cables used with this connector may be constructed as follows:

a) One cable with bus and mains under a common sheath

b) Twin cable with bus and mains

c) Separate cables for bus and mains

|No|Requirements|Type 7.2|M|Test|
|---|---|---|---|---|
|**0 **|exclusive designation /name|Combined connector EST 2I3,<br>EST 2I5|S|---|
|**1 **|Standard|IEC 61535 (mains part)|F/S|---|
|**2 **|number of contacts/ways|mains + Type 7.1|F/S|VI|
|**4 **|non-interchangeable with all other<br>non-standardized connectors|Compliant by design or color (in<br>case of doubt additional marking)|M/S|IEC 60512-13-5<br>test 13e using<br>reference value<br>14a|


-----

|No|Requirements|Type 7.2|M|Test|
|---|---|---|---|---|
|**5 **|coding measure|coded connector with KNX<br>keying (see Figure 19 to Figure<br>22), green color|F/S|VI|
|**5a**|Locking mechanism|see Figure 19 to Figure 22|M/S|VI|
|**6 **|connection of screen|optional|||
|**7 **|clamping unit/ terminals|according IEC 60999|M/S|clamping test|
|**8 **|double contact|---|||
|**9 **|wire cross section|screen 0,25 mm2 – 0,5<br>mm2,(AWG Cu 23-20) bus 0,25<br>mm2- 0,75 mm2 (AWG Cu 23 -<br>18)<br>mains 0,75 mm2- 2,5 mm2 <br>(AWG Cu 18 - 13)|F/S|clamping test|
|**10**|number of conductors and type<br>connectable per pole|1 solid or 1 stranded|F/S|clamping test|
|**10a**|test probe access|---|||
|**11**|pull out force in latched condition|≥ 20N bus<br>mains : IEC 61535|M/S|IEC 60512-13-1<br>test 13a standard<br>conditions (24<br>hours, 24°C,<br>50%) speed<br>5mm/sec|
|**12**|contact force|---|||
|**12a**|contact security|---|||
|**14**|strain relief|cable a)≥ 80N<br>cable b)≥ 80N<br>cable c)≥ 40N for bus and≥ <br>80N for mains|M/S|IEC 60512-17-3<br>test 17c<br>mounting as<br>specified by the<br>manufacturer|
|**14a**|plug insertion force|measured value shall be used as<br>reference value in item 4|M/S|IEC 60512-13-1<br>test 13a standard<br>conditions (24<br>hours, 24°C,<br>50%) speed<br>5mm/sec|
|**15**|mating cycles with load at rated<br>voltage and current|---|||
|**16**|mating cycles without load|≥ 50|M/S|IEC 60512-9-1<br>test 9a speed 5<br>mm per sec max.<br>and rest 5<br>seconds min.|
|**17**|Increase of contact resistance after<br>item 16|< 1,5 times of the originally<br>measured contact resistance|M/S|IEC60512-2-1<br>test2a|


-----

|No|Requirements|Type 7.2|M|Test|
|---|---|---|---|---|
|**18**|mechanical strength|EN50491-2 + tumbling barrel|M/S|EN50491-2 +<br>IEC 61535|
|**19**|vibration/ shock|EN50491-2|M/S|EN50491-2|
|**20**|operation environment, temperature<br>range|3k6|M|---|
|**21**|climatic withstand|EN50491-2|M/S|EN50491-2|
|**22**|temperature rise|< 45K with rated current and<br>rated cross section|M/S|IEC60512-5-1<br>test 5a|
|**23**|rated insulation voltage for bus|250V|M/S|---|
|**24**|test voltage between live parts bus-<br>bus (Usage class B - basic<br>insulation)|0,8 kV impulse<br>0,6 kV AC|M/S|---|
|**25**|Clearance and creepage distances<br>between bus contacts and outer<br>surface when mated (Usage class B -<br>basic insulation)|clearance : 3 mm<br>creepage : 3 mm|M/S|test voltage 2,8<br>kV Ac - 4 kV<br>impulse HB<br>Volume 4/3|
|**26**|Clearance and creepage distances<br>between bus contacts and mains live<br>parts when mated (Usage class B -<br>double insulation)|clearance : 5,5 mm<br>creepage : 5,5 mm|M/S|Test voltage : 4,8<br>kV AC, 6kV<br>impulse<br>see Vol 4/3|
|**27**|Clearance and creepage distances<br>between mains contacts and outer<br>surface when mated (Usage class B -<br>basic insulation)|clearance : 3 mm<br>creepage : 3 mm|M/S|Test voltage : 2,8<br>kV AC, 4kV<br>impulse<br>see Vol 4/3|
|**28**|insulation resistance between pins|> 1011 Ω|M/S|100V DC<br>IEC 60512-3-1<br>test 3a<br>Standard<br>Conditions|
|**29**|nominal voltage|32V bus, mains see standard|M/S|---|
|**30**|nominal current|3A bus, 16 A|M/S|---|
|**31**|pollution degree (or Micro<br>Environmental Class)|2|M/S|---|
|**32**|contact resistance|≤ 15 mΩ in new condition bus|M/S|IEC 60512-2-1<br>test 2a test<br>conditions : wire<br>to wire mated|
|**32a**|damage to the contact surface<br>(sliding)|---|||
|**33**|IP degree (outlets, connectors)<br>mated or not mated|IP20 not-mated<br>IP40 mated|M|IEC 60529 Test<br>finger Tab 6-2b|
|**34**|marking|standard + KNX Logo opt.|||


-----

|No|Requirements|Type 7.2|M|Test|
|---|---|---|---|---|
|**35**|installation aspects|field installation possible|F|test Installation|


###### 3.10.2 Constructional Features

**Figure 19: Constructional Features Connector Type 7.2 Male Single Phase**

**Figure 20: Constructional Features Connector Type 7.2 Female Single Phase**


-----

**Figure 21: Constructional Features Connector Type 7.2 Male Three Phase**

**Figure 22: Constructional Features Connector Type 7.2 Female Three Phase**

##### 3.11 KNX Connector Type 8.1

The connector type 8.1 is intended for direct connection of the Bus in plugs/socket outlets, e.g. for
consumer access design parts. Direct connection means, there is no gateway in the socket outlet (as it
is in Type 1.1), the bus (TP1 twisted pair only) is accessible directly on the connector.

Connector Type 8.1 is also intended for use on device interfaces with direct access to the bus.


-----

As physical component for Connector Type 8.1, the RJ45 Western Plug is used.

###### 3.11.1 Requirements 

 3.11.1.1 General Requirements
The requirements in the following table are based on the requirements for Connector Type 1.1, which
is also a western plug (RJ12).

**No** **Requirements** **Type 8.1** **M** **Test**

**0** exclusive designation/name RJ45 Connector S --
**1** Standard EN 60603-7 F/S --
**2** number of contacts/ways 8 F/S VI [*)]

**3** Bus interruption --
non-interchangeable with all other
**4** See clause 3.11.1.2 M VI
standardized connectors

**5** coding measure none --- --
**6** connection of screen optional

**7** clamping unit/ terminals --
|No|Requirements|Type 8.1|M|Test|
|---|---|---|---|---|
|**0 **|exclusive designation/name|RJ45 Connector|S|---|
|**1 **|Standard|EN 60603-7|F/S|---|
|**2 **|number of contacts/ways|8|F/S|VI*)|
|**3 **|Bus interruption|---|||
|**4 **|non-interchangeable with all other<br>standardized connectors|See clause 3.11.1.2|M|VI|
|**5 **|coding measure|none|---|---|
|**6 **|connection of screen|optional|||
|**7 **|clamping unit/ terminals|---|||


-----

|No|Requirements|Type 8.1|M|Test|
|---|---|---|---|---|
|**8 **|double contact|---|||
|**9 **|wire cross section, wire type|0,09 - 0,14 mm²,<br>AWG Cu 28 -26, stranded|F/S|See 11|
|**10**|No. of wires connectable per pole|1 stranded|F/S|See 11|
|**11**|wire pull out force in latched<br>condition|≥ 40 N|M/S|IEC 60512-8 Test 15e|
|**12**|contact force|---|||
|**13**|plug extraction force|< strain relief|M/S|IEC 60512-7 Test<br>13b, alternatively<br>IEC 60512-8 15d|
|**14**|strain relief|≥ 50 N|M/S|see 11|
|**14**<br>**a **|plug insertion force|measured value shall be used<br>as reference value in item 4|M/S|IEC 60512-13-1 test<br>13a<br>standard conditions<br>(24hours, 24°C, 50%)<br>speed 5mm/sec|
|**15**|mating cycles with load at rated<br>voltage and current|---|||
|**16**|mating cycles without load|750|M/S|IEC 60512-5 Test 9d|
|**17**|Increase of contact resistance after 16|< 1.5 times|M/S|IEC 60512-2 Test 2a|
|**18**|mechanical strength|EN50491-2|M/S|EN50491-2|
|**19**|vibration/shock|EN50491-2|M/S|EN50491-2|
|**20**|operation environment, temperature<br>range|3k5|M/S|---|
|**21**|climatic withstand|EN50491-2|M/S|EN50491-2|
|**22**|temperature rise|< 45K with rated current and<br>with cross section|M/S|IEC 60512-5-1 Test<br>5a|
|**23**|rated insulation voltage for bus|50 V|M/S|---|
|**24**|test voltage between live parts bus-<br>bus (Usage class B - basic insulation)|0.8 kV impulse<br>0.6 kV AC|M/S|---|
|**25**|Clearance and creepage distances<br>between bus contacts and outer<br>surface when mated<br>(Usage class B - basic insulation)|clearance : 3 mm<br>creepage : 3mm|M/S|test voltage : 2.8kV AC -<br>4 kV impulse|
|**26**|Clearance and creepage distances<br>between bus contacts and mains live<br>parts when mated (Usage class B -<br>basic insulation)|---|||


-----

|No|Requirements|Type 8.1|M|Test|
|---|---|---|---|---|
|**27**|Clearance and creepage distances<br>between mains contacts and outer<br>surface when mated (Usage class<br>B - basic insulation)|---|||
|**28**|insulation resistance between<br>terminals|≥ 500Ω|M/S|100VDC IEC 60512-<br>3-1 Test 3a standard<br>conditions|
|**29**|nominal voltage|24 V (bus voltage)|M/S|---|
|**30**|Nominal current|According  EN 60603-7|M/S|---|
|**31**|pollution degree (or Micro<br>Environmental Class)|2|M/S|---|
|**32**|contact resistance|≥ 20 mΩ|M|IEC 60512-2 Test 2a<br>test conditions wire to<br>wire|
|**33**|• <br>IP degree (not mated) (outlets,<br>connectors)<br>• <br>mated|IP 20<br>IP 20|M/S|---|
|**34**|marking|See clause 3.11.1.2|||
|**35**|installation aspects|---|||


###### 3.11.1.2 Pin assignment of connector type 8.1
The bus shall be connected to the pins of the RJ45 connector in the following way:

Pin – No Usage

1 Bus + 1)

2 Bus - 1)

3 Not connected

4 Not connected

5 Not connected

6 Not connected

7 Optional use 2)

8 Optional use 2)

1) It is not allowed to also connect the bus+ to pin 8 and bus- to pin 7.

2) Requirements for optional use:

a) The usage shall be within the frame of SELV/PELV (25V AC / 60 V DC )

b) Max current 1 A. Overcurrent protection is required.

c) Polarity: Pin 7 - ; Pin 8 +

The connection of the RJ 45 - socket outlet to the bus is done by the installer. Therefore, the
manufacturer of a KNX-device using a connector type 8.1 shall provide in the product instruction
sheet clear hints on marking of the RJ 45 – socket outlet by the installer. In case of only using pin 1
and 2 the socket outlet shall be marked with “KNX”. In case of additional use of other pins additional
clear marking shall be ensured. In case of using pins 3 to 6, marking with KNX is not allowed.

|Pin – No|Usage|Col3|
|---|---|---|
|1|Bus +|1)|
|2|Bus -|1)|
|3|Not connected||
|4|Not connected||
|5|Not connected||
|6|Not connected||
|7|Optional use|2)|
|8|Optional use|2)|


-----

#### 4 KNX TP Overvoltage Protector (secondary Protector)

##### 4.1 General Requirements
KNX TP Overvoltage protectors shall comply with the requirements of EN 61643 part 21.

##### 4.2 Requirements for Communication

**Data and**
**No** **Topic** **Test guideline**
**requirements**

1 Insulation resistance - 25 MΩ at 25 EN 61643 part 21
V Clause 6.2.1.2

2 Insertion loss (Operating frequency - 100 kHz EN 61643 part 21
range fg (3dB)) Clause 6.2.3.2

(Z0 = 150 Ω)

3 Impulse reset < 150 ms EN 61643 part 21
Clause 6.2.1.42

##### 4.3 Electrical Safety Requirements
As regards electrical safety, KNX TP Overvoltage protectors shall meet the relevant requirements of
the KNX connector type 5.1 in clause 3.7.

##### 4.4 Environmental Conditions
As regards environmental conditions the relevant requirements of the KNX Connector type 5.1 shall
be met (see clause 3.7).

##### 4.5 EMC

As the TP KNX Overvoltage protector is a passive component, emission tests do not apply.

Clause 4.7 item 1 ‘nominal surge current’ covers the immunity of the TP Overvoltage protector.

##### 4.6 Mechanical, Dimensions

The dimensions shall follow the relevant parts of the KNX Connector type 5.1 (see clause 3.7).

Additionally the following requirements apply:

|No|Topic|Data and<br>requirements|Test guideline|M|
|---|---|---|---|---|
|1|Insulation resistance|> 25 MΩ at 25<br>V|EN 61643 part 21<br>Clause 6.2.1.2|M/S|
|2|Insertion loss (Operating frequency<br>range fg (3dB))|> 100 kHz<br>(Z0 = 150Ω)|EN 61643 part 21<br>Clause 6.2.3.2|M/S|
|3|Impulse reset|< 150 ms|EN 61643 part 21<br>Clause 6.2.1.42|M/S|


-----

|No|Topic|Data and requirements|Test Guidelines|M|
|---|---|---|---|---|
|1|minimum conductor cross<br>section for earthing|0,75 mm2 (AWG Cu 19)|clamping test|M/S|
|2|wire colors and length|connection to the bus :<br>red : + polarity<br>dark gray : - polarity<br>connection to earth :<br>yellow green<br>length : see Figure 23<br>wires shall be affixed to the TP KNX<br>Overvoltage protector at delivery|VI|F/S|
|3|nominal conductor cross<br>section|0,8 - 1 mm diameter solid (AWG Cu<br>18-17)<br>0,5 mm2 stranded (AWG Cu 20)|clamping test|F/S|


**Figure 23: Example of a KNX TP Overvoltage Protector**

##### 4.7 Electrical Requirements

**Data and**
**No** **Topic**
**requirements**

1 Impulse durability (Nominal surge discharge Category C2
current IN (8/20) single line) 5 kA Line-PG

2 Impulse limiting voltage (common mode) < 2 kV

3 rated current IL - 1,5 A

4 Transverse voltage ≤ 500 V
≤ 200 ns

##### 4.8 Testing
See relevant requirements above.

|No|Topic|Data and<br>requirements|Test guidelines|M|
|---|---|---|---|---|
|1|Impulse durability (Nominal surge discharge<br>current IN (8/20) single line)|Category C2<br>5 kA Line-PG|EN 61643 part 21<br>Clause 6.2.1.6|M/S|
|2|Impulse limiting voltage (common mode)|< 2 kV|EN 61643 part 21<br>Clause 6.2.1.3|M/S|
|3|rated current IL|> 1,5 A|EN 61643 part 21<br>Clause 6.2.2.1|M/S|
|4|Transverse voltage|≤ 500 V<br>≤ 200 ns|EN 61643 part 311<br>Clause 7.6||


-----

##### 4.9 Functional Safety

To be completed.

##### 4.10 Interfaces, Connectors

None.

##### 4.11 Symbols
The following symbol shall be used for KNX installation schematics

**Fig. 9/1- 29: Secondary Protector**

##### 4.12 Installation

**Figure 24: Connecting the Overvoltage Protector directly on a BCU,**
**replacing the Connector by the Overvoltage Protector**


-----

**Figure 25: Connecting the Overvoltage Protector at the existing Connector at the BCU**

KNX TP Overvoltage protectors shall be installed closely to the to be protected KNX device.

##### 4.13 Marking
KNX Logo optional.


-----

