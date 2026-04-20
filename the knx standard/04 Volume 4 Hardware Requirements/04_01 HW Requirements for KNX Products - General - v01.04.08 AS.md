# KNX Hardware Requirements and Tests

## Environmental, Safety, EMC Requirements, – General

Summary

This document specifies the hardware requirements for KNX products

Version 01.04.08 is an Approved Standard version.


-----

#### Document updates

**Version** **Date** **Description**

1.0 1999.08 Approved Standard

1.1RfV 2003.10 Restructuring of Volume 4 - Update according modified standards and RF
requirements

1.1 FV 2004.06 Integration of comments from RfV – preparation for final voting

1.1 AS 2009.02 Finalisation of Version 1.1 for publication in V2.0 of specifications (a.o.
taking into account publication of AN106 and 109)

1.1 AS 2010.03 Editorial update (e.g. missing references)
edup1

1.2 AS 2011.10 Update taking into account AN 126

01.02.01 AS 2013.10.21 Editorial updates for the publication of KNX Specifications 2.1.

01.02.02 AS 2013.12.11 Editorial updates.

01.03.00 2015.08 Update in Ad Hoc Group INSTA/Siemens/KNX
WD

01.03.01 2015.09 Readying update for presentation to KonCert plenary

01.03.02 2015.10 Readying for KonCert plenary

01.03.03 2015.10 Changing the procedure for product standards – readying for Release for
Voting

01.03.04 2015.12 Resolution of comments from Release for voting

01.03.05 2016-06 Resolution of comments from Final voting

01.04.00 2017-04 Preparation for KC meeting 04-17

01.04.01 2017-04 Processing comments from KC meeting

01.04.02 2017-05 Corrected reference to footnote e in Table 1 of EN IEC 63044-3 – last
minute comments from KC members – preparation for RfV

01.04.03 2017-09 Resolution of comments Release for voting

01.04.04 2018-06 Resolution of comments Final Voting

01.04.05 2020-03 Removal of references to EN60950 and (where applicable) reference to
IEC 63044-3

01.04.06 2020-03 Minor adjustments in KCG meeting – readying for release for voting

01.04.07 2020-06 Resolution comments release for voting

01.04.08 2020-06 Resolution comments final voting – publication as AS

#### References

[01] Part 4/3 “Assessment and Test of Electrical Safety”

[02] Volume 5 “KNX Certification of Products”

[03] Volume 9 “Basic and System Components/Devices – Minimum Requirements –
Standardised solutions - Tests KNX System Conformance Testing”

[04] Part 9/1 “Cables and Connectors”

[05] Volume 3/2/x KNX Physical Layer specifications

|Version|Date|Description|
|---|---|---|
|1.0|1999.08|Approved Standard|
|1.1RfV|2003.10|Restructuring of Volume 4 - Update according modified standards and RF<br>requirements|
|1.1 FV|2004.06|Integration of comments from RfV – preparation for final voting|
|1.1 AS|2009.02|Finalisation of Version 1.1 for publication in V2.0 of specifications (a.o.<br>taking into account publication of AN106 and 109)|
|1.1 AS<br>edup1|2010.03|Editorial update (e.g. missing references)|
|1.2 AS|2011.10|Update taking into account AN 126|
|01.02.01 AS|2013.10.21|Editorial updates for the publication of KNX Specifications 2.1.|
|01.02.02 AS|2013.12.11|Editorial updates.|
|01.03.00<br>WD|2015.08|Update in Ad Hoc Group INSTA/Siemens/KNX|
|01.03.01|2015.09|Readying update for presentation to KonCert plenary|
|01.03.02|2015.10|Readying for KonCert plenary|
|01.03.03|2015.10|Changing the procedure for product standards – readying for Release for<br>Voting|
|01.03.04|2015.12|Resolution of comments from Release for voting|
|01.03.05|2016-06|Resolution of comments from Final voting|
|01.04.00|2017-04|Preparation for KC meeting 04-17|
|01.04.01|2017-04|Processing comments from KC meeting|
|01.04.02|2017-05|Corrected reference to footnote e in Table 1 of EN IEC 63044-3 – last<br>minute comments from KC members – preparation for RfV|
|01.04.03|2017-09|Resolution of comments Release for voting|
|01.04.04|2018-06|Resolution of comments Final Voting|
|01.04.05|2020-03|Removal of references to EN60950 and (where applicable) reference to<br>IEC 63044-3|
|01.04.06|2020-03|Minor adjustments in KCG meeting – readying for release for voting|
|01.04.07|2020-06|Resolution comments release for voting|
|01.04.08|2020-06|Resolution comments final voting – publication as AS|


-----

File Name 04_01 HW Requirements for KNX Products - General - v01.04.08 AS
Version: 01.04.08
Status: Approved Standard
Savedate: 2020.10.09
Number of pages: 23


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 5 1.1 General ............................................................................................................................ 5 1.2 Applicable European Directives ..................................................................................... 8

 2 General requirements ............................................................................................................ 9 2.1 Introduction ..................................................................................................................... 9 2.2 Environmental Conditions .............................................................................................. 9 2.2.1 Introduction ......................................................................................................... 9 2.2.2 Specific requirements.......................................................................................... 9 2.3 Electrical safety .............................................................................................................. 9 2.3.1 Introduction ......................................................................................................... 9 2.3.2 Specific requirements.......................................................................................... 9 2.3.3 Galvanic connection of external circuits to KNX TP1 bus. ................................ 9 2.3.4 Use of protective impedances in TP1 circuits................................................... 11 2.4 EMC Requirements ...................................................................................................... 11 2.4.1 General .............................................................................................................. 11 2.4.2 EMC Requirements for media Twisted Pair ..................................................... 11 2.4.3 EMC Requirements for media Powerline ......................................................... 11 2.4.4 EMC Requirements for RF medium ................................................................. 11 2.5 Assignment of KNX bus devices to relevant Product Standards ................................. 11 2.6 Useful Life/Life Cycles ................................................................................................ 11 2.7 TP1 Bus Power Consumption of Application Products /Fan-in-model for TP1 .......... 12 2.8 Feeding a bus device from unfiltered voltage ............................................................... 13 2.9 Connection of Bus Wires and 2nd Pair ......................................................................... 13 2.10 Length of PEI ................................................................................................................ 13

 3 Informative Annex – Electrical Safety ............................................................................... 14 3.1 Introduction ................................................................................................................... 14 3.2 General Conditions ....................................................................................................... 14 3.2.1 Protective Separation ........................................................................................ 14 3.2.2 Terminals .......................................................................................................... 14 3.3 Definitions .................................................................................................................... 15 3.3.1 Device Group .................................................................................................... 15 3.3.2 Combinations .................................................................................................... 15 3.4 Group 1 KNX devices .................................................................................................. 15 3.5 Group 2 KNX devices .................................................................................................. 16 3.6 Group 3 KNX devices .................................................................................................. 16 3.7 Group 4 KNX devices .................................................................................................. 16 3.8 Dimensioning of Insulation .......................................................................................... 17 3.8.1 Realization of protective Separation for SELV Protection Measures .............. 17 3.8.2 Dimensioning Parameters ................................................................................. 19 3.8.3 Determination of Rated Insulation Voltage UR ................................................ 19 3.8.4 Basic and Protective Separation realized by means of Clearances and Creepage Distances ........................................................................................... 21


-----

### 1 Introduction

#### 1.1 General
This part of the handbook contains all requirements for KNX products related to Electrical Safety (i.e.
protection against electric shock), environmental conditions and EMC. Any other requirements that may
be nationally or internationally imposed (e.g. environmental protection measures) are currently not within
the scope of KNX certification.

This part of the handbook does not contain any requirements related to the different KNX media, these
are part of [05].

Specific KNX requirements for Basic and System components/devices are given in [03] of these
specifications.

The following general KNX requirements for electrical safety, environmental conditions and EMC apply:

   - If an appropriate harmonized EN or IEC product standard exist, in which HBES/BACS is
mentioned in the scope of the standard, this product standard may be applied during hardware
conformity tests, however for electrical safety always in conjunction with the EN IEC 63044 -3
or EN50491-3 standard, whereby the latter constitutes the minimum requirements that shall be
fulfilled by the product[1].
   - If an appropriate harmonized EN or IEC product standard exists, in which HBES/BACS is not
mentioned in the scope of the standard, this product standard may be applied during hardware
conformity tests, however always in conjunction with the IEC 63044-x and the EN 50491-2 (or
the rest of the EN50491-x) standard, whereby these constitute the minimum requirements that
shall be fulfilled by the product.
For environmental conditions, the requirements as given by EN 50491-2 apply.
For electrical safety, the requirements as given by EN IEC 63044-3 or EN50491-3 apply.
For EMC, the requirements as given by IEC 63044-5-x or EN50491-5-x apply (if for use in
residential & light commercial 5-2, for use in industry 5-3 – manufacturer decision).
For specific KNX media, some additional medium-dependant standards may be applicable in
addition for EMC testing, see Table 1.

       - **Table 1 – additional medium dependant EMC standards (example PL and RF)**

**PL** **RF**

            - for industry environment : EN 50065-1

ETSI EN 301489-3[2]

Cl 134 and EN 50065-2-2

            - for residential, commercial, light
industry environment: EN 50065-1 Cl
122 and EN 50065-2-1

   - If no appropriate harmonized EN or IEC product standard exists, generic standards (see clause
2.2.1, 2.3.1 and 2.4.1) may be applied during hardware conformity tests, however always in
conjunction with the IEC 63044-x standard series, the EN 50491-2 standard (or the rest of the
EN50491-x), whereby these constitute the minimum requirements that shall be fulfilled by the
product.
For environmental conditions, the requirements as given by EN 50491-2 apply.
For electrical safety, the requirements as given by EN IEC 63044-3 or EN50491-3 apply.
For EMC, the requirements as given by IEC 63044-5-x or EN50491-5-x apply (if for use in
residential & light commercial 5-2, for use in industry 5-3 – manufacturer decision).
For specific KNX media, some additional medium-dependant standards may be applicable in
addition for EMC testing, see Table 1.

1 If a KNX TP product is intended for installation only within a single equipotential earthing system and the rated impulse voltages
are reduced (according footnote e of Table 1 of EN IEC 63044-3 or EN50491-3), then this shall be described in the product
documentation. This rule applies to KNX products with connection to earth only.
2 Is currently under revision

|PL|RF|
|---|---|
|- <br>for industry environment : EN 50065-1<br>Cl 134 and EN 50065-2-2<br>- <br>for residential, commercial, light<br>industry environment: EN 50065-1 Cl<br>122 and EN 50065-2-1|ETSI EN 301489-32|


-----

The compliance of the product to the above hardware requirements is checked during KNX product
certification and completed by an appropriate market surveillance, of which the concept is documented in
[02].

**Figure 1 – Selection of appropriate standards for hardware testing of KNX devices (Start)**


-----

**Figure 2 – Selection of appropriate standards for hardware testing of KNX devices (continued)**


-----

#### 1.2 Applicable European Directives
The type of EU directive that needs to be applied to the KNX product to be tested depends on the type of
device.

   - The EMC Directive (2014/35/EC and amendments (if any))

   - The Low Voltage Directive (2014/30/EC and amendments (if any))

   - Radio Equipment Directive (RED) (2014/53/EC and amendments (if any))

   - RoHS Directive (2011/65/EC and amendments (if any))

   - ErP Directive (2009/125/EC and amendments (if any))


-----

### 2 General requirements

#### 2.1 Introduction

If not stated otherwise the requirements are specified for 230/400 V mains power networks (including
115/220 V and 277/480 V).

#### 2.2 Environmental Conditions

##### 2.2.1 Introduction

This clause includes requirements for withstanding climate, temperature and mechanical stress.

##### 2.2.2 Specific requirements

In case generic standards are used (for conditions see clause 1), EN 60068-2 shall be applied.
The protection class according to EN 60529 shall be at least IP 20 for indoor use.

For outdoor use the protection class may be realised by an appropriate enclosure. The IP Protection Class
shall be at least IP 42.

The test shall be carried out in accordance to EN 60529.

#### 2.3 Electrical safety

##### 2.3.1 Introduction

This clause includes general electrical safety requirements.

##### 2.3.2 Specific requirements

- In case generic standards are used (for conditions see clause 1), EN 60664 and EN 61140 shall be
applied.

- The Twisted Pair bus TP1 shall use Safety Extra Low Voltage (SELV) max. 32 V DC (Protection
Measure).

- If a KNX TP product is intended for installation only within a single equipotential earthing system
and the rated impulse voltages are reduced (according footnote e of Table 1 of EN IEC 63044-3 or
EN50491-3), then this shall be described in the product documentation. This rule applies to KNX
products with connection to earth only.

##### 2.3.3 Galvanic connection of external circuits to KNX TP1 bus.

- In order to protect KNX TP1 bus installations against unforeseeable disturbances from external
circuits, the following requirements apply for connection of other circuits to KNX TP1 bus:
1. Generally circuits powered by external feeding (not complying with those described in 2) shall be
galvanically separated from the KNX TP1 bus circuits.
2. Ancillary circuits may be connected galvanically to KNX TP1 bus circuits if the following
requirements are met, for which compliance shall be declared in the KNX datasheet
(see Figure 3):
a. Ancillary power feeding shall provide SELV according EN 61140 (see NOTE 1)

b. Galvanic coupling shall be provided on the application side of a device or the PEI (Physical
External Interface – if available) only if

i. The bus circuits with power feeding and the power feeding circuits are in the same
housing of the Application Module or


-----

ii. The power feeding may be in an individual device that shall be closely mounted to the
Application Module. ‘Closely’ in this case means the relation of the power-feeding device to the
KNX TP1 bus device shall be evident. A location outside the same room/cabinet is not allowed
for direct coupling.

c. It shall be assured that the power feeding cannot influence the TP1 bus voltage in normal
operation, i.e. cause no breakdown and/or no increase above the specified limits.

d. The extraction of power from the TP1 bus shall be kept within the specified limits (see 2.7).

e. In case of a single fault, components of the device circuits shall not be damaged by overvoltage
or overload. Verification shall be carried out in accordance with the applicable safety standard.

f. For EMC, the device plus ancillary power-feeding unit (installed as in proper usage) shall
comply with the KNX requirements.

NOTE 1 Power Feeding transformers for SELV shall comply with EN 61558-1 respectively EN 61558-2-6 and EN61558-2-16.


KNX
SELV

KNX
SELV


Application &
External SELV Power Supply


KNX PEI
SELV

BAU Applic Application &
TP1 1 External SELV

Power Supply

230V
not allowed connectionnot allowed connection


AUX power /
Input / Output


Application &
External Power Supply


KNX
SELV

KNX

SELV


**Figure 3 - Examples of galvanic connection of external circuits to KNX bus**


-----

##### 2.3.4 Use of protective impedances in TP1 circuits
1. Use of protective impedances in TP1 circuits is limited to centralised power supplies, devices providing
decentralised power supply and ancillary power feeding. (see 2.3.3.2.a.)
Protective impedances shall be used that comply with EN 61140.
2. If more than one protective impedance is used for one bus circuit, all impedances together shall comply
with EN 61140 requirements (current limitation in particular!).
3.The use of protective impedances (type, connection between which parts/circuits, etc.) shall be declared
in the KNX datasheet.

#### 2.4 EMC Requirements

##### 2.4.1 General

- A product comprising of a KNX system component and an application module (or a product with
integrated bus access unit (BAU)) shall be regarded as a single device. As a consequence, the entire
device shall comply with the EMC requirements.

- General test and performance requirements

When degradation of performance according the performance criterion of the relevant product
standard for certain functions of the device is permitted, the device shall not disturb other
devices/equipment connected to the KNX bus. For instance, each telegram is answered by the device
with a NACK (not acknowledge) or the device sends BUSY telegrams.

##### 2.4.2 EMC Requirements for media Twisted Pair

- In case generic standards are used (for conditions see clause 1), EN 61000-6-x shall be applied (6-1
and 6-3 for residential/light commercial, 6-2 and 6-4 for industrial – according manufacturer
decision).

- If the 2[nd] pair of the Twisted Pair is used for other purposes, the limits as set by EN 61000-6-1 and 63 for residential/light commercial shall be applied.

##### 2.4.3 EMC Requirements for media Powerline
No additional KNX requirements other than those listed under clause 1.

##### 2.4.4 EMC Requirements for RF medium

- In case generic standards are used (for conditions see clause 1), EN 61000-6-x shall be applied (6-1
and 6-3 for residential/light commercial, 6-2 and 6-4 for industrial – according manufacturer
decision).

#### 2.5 Assignment of KNX bus devices to relevant Product Standards
The manufacturer is responsible for the selection of the appropriate product standard for his KNX bus
product.

However the scope of the chosen product standard and/or the assignment of the product to the product
standard shall cover the KNX bus product type.

In case of an evident mismatch of the chosen product standard to the product type, the KNX Association
is entitled to refuse KNX certification of the product, until the product has been tested on the basis of an
appropriate product standard.

#### 2.6 Useful Life/Life Cycles
Useful life of a product shall also be considered as a quality parameter during the planning and design
phase of a product. A declaration on the useful life shall be made in the KNX datasheet.


-----

The useful life of a product is the time period in which the failure rate is approximately constant; it is
represented by the bottom period of the ‘bathtub curve’, which is shown in Figure 4. For KNX bus
products, the useful life shall be at least 10 years.
```
 failure
                  useful life

###### rate λ

##### t
        early constant failure wear out
        failure rate period failure period
        period

```
**Figure 4 - Time dependence of failure rate**

#### 2.7 TP1 Bus Power Consumption of Application Products /Fan-in-model for TP1 
It is recommended that the power consumption from the bus for devices is limited to the real needs. The
power consumption and the transmission characteristics of the device shall be documented in the product
datasheet and shall be provided in the KNX database according to the following Fan-in-Model.

The Fan-in-Model describes the relevant ‘combination’ characteristics: How many devices can be
connected to one physical segment as regards transmission characteristic and the (nominal) output current
of the Power Supply Unit(s)

a) The transmission characteristic fan-in Wt

   - Wt = 1 for TP1 256 products

   - Wt = 4 for TP1 64 products

If not otherwise specified, a Wt = 4 is taken per default. If necessary, this model may be extended in
future.

b) The current consumption I

The maximum current consumption (e.g. with LEDs switched on) of a device (BAU + application
module) shall be tested at the nominal bus voltage of

   - UN = 24 V and classified according to the classes below.

   - The next higher value of the following table shall be taken, which is the relevant current class of
the device.


-----

**Table 2 - Classes**

2,5 [mA] 5 [mA] 7,5 [mA] 10 [mA] 12.5 [mA] 15 [mA]

17,5 [mA] 20 [mA] 25 [mA] 30 [mA] 35 [mA]

(continue in steps of 5 mA)

For a given TP1 physical segment (bus line), the two following conditions shall be met at the same time:

1. Requirement for max. current consumption:

The total current consumption shall not be higher than the nominal output current of the power
supply:
```
    N

```
Σ `IC(n) < IN`
**n=1**

N = Number of connected devices to bus line.

IC = Current class of the device (e.g. 5 mA).

IN = Nominal output current of used power supply.

2. Requirement for transmission characteristics:

The maximum transmission fan-in (Wt) of all devices of one bus line shall not exceed 256:
```
    N

```
Σ Wt(n) < 257
```
    n=1

```
N = Number of connected devices to bus line.
Wt = Transmission characteristics.

#### 2.8 Feeding a bus device from unfiltered voltage
Feeding a bus device from the unfiltered voltage is not allowed as parts of the transmission circuit of the
bus coupling unit can possibly be short-circuited.

#### 2.9 Connection of Bus Wires and 2nd Pair
For connection of TP1 devices, connector types 5.1 – 7.1 – 7.2 shall preferably be used (see [04]). If the
above connectors are not used, the characteristics of the used connector shall at least comply with the
requirements as marked with ‘M’ in the appropriate sections of [04].

The 2nd pair (yellow & white) shall be connected by yellow and white connectors (similar but not
compatible with the TP1 bus connector) or other appropriate connectors that are non-interchangeable with
the TP1 bus connectors (also not in the colour).

#### 2.10 Length of PEI
When connecting an application module via a flat cable to the PEI of a bus access unit, the length of this
‘extended PEI’ shall be limited to 100 mm (a.o. to limit EMC susceptibility).

|2,5 [mA]|5 [mA]|7,5 [mA]|10 [mA]|12.5 [mA]|15 [mA]|
|---|---|---|---|---|---|
|17,5 [mA]|20 [mA]|25 [mA]|30 [mA]|35 [mA]||


-----

### 3 Informative Annex – Electrical Safety

#### 3.1 Introduction
This clause shall be regarded as a further elucidation of EN IEC 63044-3 or EN50491-3 when using this
standard as a basis when testing compliance of KNX devices to electrical safety conditions.

#### 3.2 General Conditions

##### 3.2.1 Protective Separation
1. The KNX SELV bus devices shall provide the required protective separation for the rated insulation
voltage UR

   - to the outer surface.

   - between all internal non-KNX bus circuits and the KNX SELV bus circuits.

   - to conductive parts according to Table 3.

2. The device Group of the device shall be stated in the datasheet.
3. Galvanic Separation of circuits for ancillary SELV power supply from KNX SELV bus: the
requirements as stipulated under clause 2.3.3 apply.

**Table 3 – Separation**

**Parts not connected to PE** **Parts connected to PE**

**No** **If : conductive parts from** **Then: Additional required** **Basic separation is**

**mains already provides the** **separation for KNX SELV** **required (see Table 7; 5A)**
**underneath separation** **bus TP1 circuits**

1 Protective separation no safety insulation required
(UR ≥ 250V [3])

2 Basic separation (UR ≥ 250V [3]) Basic separation (UR ≥ 250V [3])

3 less than Basic separation Protective separation
(UR ≥ 250V [3]) (UR ≥ 250V [3])

##### 3.2.2 Terminals
Terminals for KNX SELV bus devices and equipment shall comply with the following requirements:

- Terminals for all circuits shall be protected against direct contact, unless they are for SELV or PELV
circuits with voltages below 25 V AC and 60 V DC.

- All terminals shall be clearly marked.

- Terminals for connection of Protection Earth (PE) shall comply with IEC 60364-5-54 or with the
harmonised European or national standard respectively.

3) For 230/400V, respectively 320V for 277/480V or 400V for 230V/400V IT supply system networks.

|Col1|Parts not connected to PE|Col3|Parts connected to PE|
|---|---|---|---|
|**No**|**If: conductive parts from**<br>**mains already provides the**<br>**underneath separation**|**Then: Additional required**<br>**separation for KNX SELV**<br>**bus TP1 circuits**|**Basic separation is**<br>**required (see Table 7; 5A)**|
|1|Protective separation<br>(UR ≥ 250V3)|no safety insulation required||
|2|Basic separation (UR ≥ 250V3)|Basic separation (UR ≥ 250V3)|Basic separation (UR ≥ 250V3)|
|3|less than Basic separation<br>(UR ≥ 250V3)|Protective separation<br>(UR ≥ 250V3)|Protective separation<br>(UR ≥ 250V3)|


-----

#### 3.3 Definitions

##### 3.3.1 Device Group
The Device Group indicates where in the device protective separation is required and in which electrical
environment the device is used.

**Table 4 – Device groups and their protective separation**

**Group** **Device contains the following** **Electrical environment, combination of devices**

**circuit types**

1 Bus (KNX SELV bus) + mains power Mains 230V environment [5)] - Combinations with
or derived circuits [4)]. mains devices.

2 Bus (KNX SELV bus) only.

3 Bus (KNX SELV bus) only. Bus SELV/PELV environment - Combinations with
SELV/PELV devices only.

4a Bus (KNX SELV bus) + other SELV or Mains 230V environment[4][)]- Combinations with
PELV circuits or similar. mains devices.

4b Bus SELV/PELV environment - Combinations with
SELV/PELV devices only.

##### 3.3.2 Combinations
Combination of devices denotes that KNX SELV bus devices are mounted in close contact with mains
devices or with devices connected to other networks, e.g. in distribution boards or in wall boxes.

#### 3.4 Group 1 KNX devices

The requirements shall be met in accordance with the parameters defined/selected from Table 6.
1. Group 1 devices shall comply with clause 3.2.
2. Group 1 devices shall provide protective separation to the user.
3. In the case of ‘combinations’ of Group 1 devices with devices connected to other circuits, Protective

Separation is considered to be provided if each of the devices provides basic separation for the (same)
rated insulation voltage (UR).
4. The possibility of usage of Group 1 devices in combinations shall explicitly be stated in the
instruction/data sheet (see [02]).
5. Group 1 devices shall at least provide Basic Insulation for ≥ 250 V [3)] to the outer surface.
6. For Group 1 devices (including terminals) not providing protective separation themselves protective
separation shall be provided by installation measures. Proper instructions for the installation shall be
provided in the instruction/datasheet (see [02]).
7. KNX SELV bus devices not providing protective separation themselves shall not be installed in
contact with life parts of any other circuit unless this circuit uses SELV/PELV.
8. Insulation between mains and other non-bus circuits shall not be less than Basic separation for UR if
not otherwise specified in product standards.
9. Between terminals for non-KNX bus circuits and the KNX SELV bus terminals, protective separation
for the rated insulation voltage UR shall be provided.

4) A Powerline device normally complies with Group 1 characteristics. In this case the application module and its
corresponding supply circuit shall be regarded as KNX TP bus.
5) For 230/400V, respectively 320V for 277/480V or 400V for 230V/400V IT supply system networks.

|Group|Device contains the following<br>circuit types|Electrical environment, combination of devices|
|---|---|---|
|1|Bus (KNX SELV bus) + mains power<br>or derived circuits4).|Mains 230V environment5) - Combinations with<br>mains devices.|
|2|Bus (KNX SELV bus) only.|Bus (KNX SELV bus) only.|
|3|Bus (KNX SELV bus) only.|Bus SELV/PELV environment - Combinations with<br>SELV/PELV devices only.|
|4a|Bus (KNX SELV bus) + other SELV or<br>PELV circuits or similar.|Mains 230V environment4)- Combinations with<br>mains devices.|
|4b|4b|Bus SELV/PELV environment - Combinations with<br>SELV/PELV devices only.|


-----

10. KNX bus terminals of Group 1 devices shall either provide protective separation themselves
according to the rated insulation voltage or shall be protected by an additional cover after proper
installation.

#### 3.5 Group 2 KNX devices
1. Group 2 devices shall comply with clause 3.2 (clause 3.2.1 is not applicable).
2. In the case of ‘combinations’ of Group 2 devices with devices connected to other circuits, Protective

Separation is considered to be provided if each of the devices provides basic separation for the (same)
rated insulation voltage (UR).
3. The possibility of usage of Group 2 devices in combinations shall be stated explicitly.
4. Group 2 devices shall at least provide Basic Insulation for UR ≥ 250V to the outer surface.
5. For Group 2 devices not providing protective separation themselves, protective separation shall be
provided by installation measures. Proper instructions for the installation shall be provided.
6. KNX SELV bus devices not providing protective separation themselves shall not be installed in
contact with life parts of any other circuit unless this circuit uses SELV/PELV.
7. KNX SELV bus terminals of Group 2 devices shall either provide protective separation themselves
according to the rated insulation voltage or shall be protected by an additional cover after proper
installation.

#### 3.6 Group 3 KNX devices
1. Group 3 devices shall not be used in combinations unless they are combined with devices connected
to SELV/PELV only.
2. For Group 3 devices proper instructions for the installation in a non-hazardous electrical environment
shall be provided.
3. Group 3 devices shall comply with clause 3.2.1 item 3.

#### 3.7 Group 4 KNX devices

- Group 4a devices
1. Group 4a devices shall comply with 3.5.
2. In case of local (see 2.3.2) SELV/PELV circuits protective separation according to UR shall be
provided between the circuits.
3. In case of circuits not covered by item 2 above (e.g. SELV/PELV networks) protective separation
for UR ≥ 250 V shall be provided.

- Group 4b devices
1. Group 4b devices shall comply with clause 3.6.
2. Group 4b devices shall comply with items 2 and 3 of the clause for Group 4a devices.


-----

#### 3.8 Dimensioning of Insulation

##### 3.8.1 Realization of protective Separation for SELV Protection Measures

- Insulation
The required protective separation to meet the SELV requirements can be achieved by the following types
of insulation (see EN 60664-1 and EN 61140).

**Table 5 – Insulation types**

**No** **Insulation type** **Description** **Protection for**

1 Mechanical separation

2 Double insulation (DI) a) Basic +Supplementary Insulation Insulation specified for the
b) 2x Basic Insulation highest occurring voltage

between the circuits

3 Reinforced insulation (RI)

4 Basic Insulation (BI) + screen
connected to Protection Earth
(PE)

A survey on the required insulation is given in Figure 5. The rated insulation voltage UR is given between
brackets.

- Realisation of protective separation by coupling components
Such coupling components are e.g. power feeding transformers or optocouplers. If for such coupling
components valid harmonized product standards exist (EN or IEC, e) and protective separation for the
appropriate rated voltage is specified in these product standards, these components shall comply with and
shall be tested according to these components product standards.

Power Feeding transformers for SELV shall comply with in EN 61558-1 respectively EN 61558-2-6.

|No|Insulation type|Description|Protection for|
|---|---|---|---|
|1|Mechanical separation|||
|2|Double insulation (DI)|a) Basic +Supplementary Insulation<br>b) 2x Basic Insulation|Insulation specified for the<br>highest occurring voltage<br>between the circuits|
|3|Reinforced insulation (RI)|||
|4|Basic Insulation (BI) + screen<br>connected to Protection Earth<br>(PE)|||


-----

##### 1) sum of voltages of both
 circuits 2) depends on SELV/PELV voltage 3) sum of voltages of both
 circuits plus 50 V 4) for IT supply systems: 400 V

**Figure 5 - Overview of insulation scheme**


-----

##### 3.8.2 Dimensioning Parameters
The design of protective separation of KNX SELV bus circuits from hazardous other circuits inside and
outside KNX SELV bus devices shall take into account the Safety Parameters and general selection
criteria as stated in Table 6.

**Table 6 - Safety parameters and general selection criteria**

**No** **Parameter** **Definition/purpose** **Selection criteria /KNX requirements**

1 Overvoltage Indicates the ‘availability’ (life 1) Overvoltage category III (general) or
category time) of electrical insulation 2) Overvoltage category II + appropriate Overvoltage

under specified stress by protection of the installation
overvoltage impulses or by

(see usage class)

AC high voltages.

2 Rated Withstand voltage (peak) for The rated impulse voltage of the device shall not be
Impulse impulse over-voltages less than the impulse voltage specified for the
Voltage (1,2/µs). overvoltage category.

3 Pollution Indicates macro environment Pollution degree 2 for indoor use.
degree pollution. Pollution degree 3 for outdoor use.

(see usage class)

4 Rated Withstand voltage for long- See Figure 5 and Table 7.
Insulation term voltage stress.
Voltage (UR)

5 Usage class Combination of pollution Minimum requirements for use in environmental
for the degree and overvoltage conditions:
relevant UR category.

**Usage** **Overvoltage** **Pollution** **Indoor** **Outdoor** **Outdoor** **Overvoltage**

**Class** **category** **degree** **use** **use In** **use,** **protection**

**enclosure** **bathroo**

**ms [6)]**

A III 3 O O M O

B III 2 M M --- O

O = optional

M = mandatory/minimum requirement

##### 3.8.3 Determination of Rated Insulation Voltage UR
Examples for the Rated Insulation Voltage (UR) are given in Table 7 (see also Figure 5) together with the
overvoltage category and the required quality of separation.

KNX SELV TP1 has a maximum value of 32 V.

NOTE 2 The KNX SELV TP1 SELV is a mixed voltage of 32 V DC and an approximate 10 kHz AC voltage (signalling voltage)
with max. 12 V peak.

a) KNX SELV is within the SELV frame according to sub-clause 5.2.13 of EN 50178 - see also IEC 63044-3.

6) Protected area in bathrooms.

|Usage<br>Class|Overvoltage<br>category|Pollution<br>degree|Indoor<br>use|Outdoor<br>use In<br>enclosure|Outdoor<br>use,<br>bathroo<br>ms 6)|Overvoltage<br>protection|
|---|---|---|---|---|---|---|
|A|III|3|O|O|M|O|
|B|III|2|M|M|---|O|
||||O = optional<br>M = mandatory/minimum requirement|O = optional<br>M = mandatory/minimum requirement|O = optional<br>M = mandatory/minimum requirement|O = optional<br>M = mandatory/minimum requirement|

|No|Parameter|Definition/purpose|Selection criteria /KNX requirements|
|---|---|---|---|
|1|Overvoltage<br>category|Indicates the ‘availability’ (life<br>time) of electrical insulation<br>under specified stress by<br>overvoltage impulses or by<br>AC high voltages.|1) Overvoltage category III (general) or<br>2) Overvoltage category II + appropriate Overvoltage<br>protection of the installation<br>(see usage class)|
|2|Rated<br>Impulse<br>Voltage|Withstand voltage (peak) for<br>impulse over-voltages<br>(1,2/µs).|The rated impulse voltage of the device shall not be<br>less than the impulse voltage specified for the<br>overvoltage category.|
|3|Pollution<br>degree|Indicates macro environment<br>pollution.|Pollution degree 2 for indoor use.<br>Pollution degree 3 for outdoor use.<br>(see usage class)|
|4|Rated<br>Insulation<br>Voltage (UR)|Withstand voltage for long-<br>term voltage stress.|See Figure 5 and Table 7.|
|5|Usage class<br>for the<br>relevant UR|Combination of pollution<br>degree and overvoltage<br>category.<br>Minimum requirements for use in environmental<br>conditions:<br>**Usage**<br>**Class**<br>**Overvoltage**<br>**category**<br>**Pollution**<br>**degree**<br>**Indoor**<br>**use**<br>**Outdoor**<br>**use In**<br>**enclosure**<br>**Outdoor**<br>**use,**<br>**bathroo**<br>**ms6) **<br>**Overvoltage**<br>**protection**<br>A <br>III<br>3 <br>O <br>O <br>M <br>O <br>B <br>III<br>2 <br>M <br>M <br>---<br>O <br>O = optional<br>M = mandatory/minimum requirement|Combination of pollution<br>degree and overvoltage<br>category.<br>Minimum requirements for use in environmental<br>conditions:<br>**Usage**<br>**Class**<br>**Overvoltage**<br>**category**<br>**Pollution**<br>**degree**<br>**Indoor**<br>**use**<br>**Outdoor**<br>**use In**<br>**enclosure**<br>**Outdoor**<br>**use,**<br>**bathroo**<br>**ms6) **<br>**Overvoltage**<br>**protection**<br>A <br>III<br>3 <br>O <br>O <br>M <br>O <br>B <br>III<br>2 <br>M <br>M <br>---<br>O <br>O = optional<br>M = mandatory/minimum requirement|


-----

b) The signalling voltage is disregarded in the following specification of insulation.

**Table 7 - Examples for the Rated Insulation Voltage (UR)**

|‘Other circuit’<br>and related|Separation|Over-<br>voltage|Rated Insulation<br>Voltage|Remarks/Examples<br>UR|Col6|Col7|
|---|---|---|---|---|---|---|
|**‘Supply System’**||**Category**|**UR (r.m.s)=**|**other**<br>**bus**|**SELV**<br>**50V**|**SELV**<br>**50V**|
|1. SELV<br>a)≤ 50 V<br>b)≤ 100 V<br>c)≤ 150 V|Basic<br>separation||max KNX bus voltage<br>+ <br> max voltage of "other<br>circuit"|SELV<br>32 V<br>(TP1)|a) 80V<br>b) 125V|a) 80V<br>b) 125V|
|2. PELV<br>a)≤ 50 V<br>b)≤ 100 V<br>c)≤ 150 V|||max KNX bus voltage<br>+ <br>max voltage "other<br>circuit"<br>+ 50 V max PE Voltage|SELV<br>32 V<br>(TP1)|a) 125V<br>b) 160 V|a) 125V<br>b) 160 V|
|3. TNV supply<br>systems≤ 135 V|Protective<br>Separation||≥ 160 V||||
|4. Mains||III|||||
|230/400 V|||≥ 250 V|TN,TT supply systems|TN,TT supply systems|TN,TT supply systems|
|127/220 V|||≥ 250 V|"|"|"|
|240/415 V|||≥ 250 V|"|"|"|
|277/480 V|||≥ 320 V|"|"|"|
|IT supply<br>system 230/400 V|||≥ 400 V||||
|5A.<br>Protection<br>Earth≤ 50 V|Basic<br>Separation||≥ 50 V<br> + max KNX SELV-<br>Voltage 32 V|32 V<br>18 V|PE = 50 V|PE = 50 V|
|5B.<br>Non<br>specified Earth<br>(Ground)<br>The relevant<br>voltage has to be<br>specified from the<br>local conditions.|≥ 50 V<br>Protective<br>Separation||≥ 250 V||||
|5B.<br>Non<br>specified Earth<br>(Ground)<br>The relevant<br>voltage has to be<br>specified from the<br>local conditions.|≤ 50 V<br>Basic<br>Separation||≥ 50 V<br>+ max KNX SELV/PELV<br>bus voltage|32 V<br>18 V|PE = 50 V|PE = 50 V|
|6. FELV Type with<br>protective<br>separation from<br>mains.|Basic<br>Separation||max KNX bus voltage<br>+ max voltage of FELV<br>circuit|Supply system:<br>see SELV / PELV|Supply system:<br>see SELV / PELV|Supply system:<br>see SELV / PELV|
|7. FELV Type with<br>basic separation<br>from mains.|||≥ 250 V<br>Respectively for 320 V<br>or 400 V|Supply system = mains|Supply system = mains|Supply system = mains|
|8. FELV Type with<br>< basic separation<br>from mains.|Protective<br>Separation||≥ 250 V<br>Respectively for 320 V<br>or 400 V|Supply system = mains|Supply system = mains|Supply system = mains|


-----

##### 3.8.4 Basic and Protective Separation realized by means of Clearances and Creepage Distances
For the usage classes specified in 3.8, in the following figures Basic and Protective Separation as realised
by means of clearances and creepage distances are specified for material class III (III a) on the basis of
EN 60664-1.

usage class A Fig. 4/1- 2

usage class B Fig. 4/1- 3

**Fig. 4/1- 1**

**Please note that the values in these figures are given for information only and should be verified on**
**the basis of the most recent standards.**

For the usage classes specified in 3.8 Basic and Protective Separation as realised by means of clearances
and creepage distances can be calculated on the basis of EN 60664-1.

The rule shall thereby be taken into account that the creepage is always equal or greater than the clearance
distance.

|1.|Col2|
|---|---|
|usage class A|Fig. 4/1- 2|
|usage class B|Fig. 4/1- 3|


-----

Usage Class A clearances and creepage distances of KNX SELV/PELV bus to other circuits

Clearances Supply voltage 0- ≤ 50V   - 50- ≤ 100V   - 100- ≤ 150V   - 150- ≤ 300   - 300- ≤ 600
Voltage to ground --> 230/400V

(other systems) (127/220V ) IT supply system

(277/480V) 3ph 400V

♠[7] ♥ o oo

♣
Rated Impulse Voltage 0.8kV 1.5 kV 2.5kV 4kV 6kV
Basic Clearance **0.8 mm** **1.0 mm** **1.5 mm** **3 mm** **5.5 mm**
Separation

Test Voltage Impulse 0.8kV 1.5 kV 2.5kV 4kV 6 kV
AC 0.6kV 1 kV 1.8 kV 2.8 kV 4 kV
Protective Clearance **1.0 mm** **1.5 mm** **3 mm** **5.5 mm** **8 mm**
Separation

Test Voltage Impulse 1.5 kV 2.5 kV 4 kV 6 kV 8 kV
AC 1 kV 1.8 kV 2.8 kV 4 kV 6 kV

Creepage Distances
UR (V) 50 63 80 80 100 125 125 160 200 200 250 320 320 400
♠ ♥ o oo ♣
Basic 1.9 2 2.1 2.1 2.2 2.4 2.4 2.5 3.2 3.2 4 5 5.5 ° 6.3
Separation (mm)

Protective 2.2 2.4 2.5 2.5 3.2 4 4 5 6.3 6.3 8 10 10 12.5
Separation (mm)

**Fig. 4/1- 2**

7 ♠/♥/°/°° refer to corresponding sections of the above and underneath table

|Clearances|Supply voltage<br>Voltage to ground --><br>(other systems)|0- ≤ 50V<br>♠7|> 50- ≤ 100V<br>♥|> 100- ≤ 150V<br>o|> 150- ≤ 300<br>230/400V<br>(127/220V )<br>(277/480V)<br>oo|> 300- ≤ 600<br>IT supply system<br>3ph 400V<br>♣|
|---|---|---|---|---|---|---|
|Rated Impulse Voltage|Rated Impulse Voltage|0.8kV|1.5 kV|2.5kV|4kV|6kV|
|Basic<br>Separation|Clearance|**0.8  mm**|**1.0  mm**|**1.5 mm**|**3 mm**|**5.5 mm**|
|Basic<br>Separation|Test Voltage  Impulse|0.8kV|1.5 kV|2.5kV|4kV|6 kV|
|Basic<br>Separation|AC|0.6kV|1 kV|1.8 kV|2.8 kV|4 kV|
|Protective<br>Separation|Clearance|**1.0 mm**|**1.5 mm**|**3 mm**|**5.5 mm**|**8 mm**|
|Protective<br>Separation|Test  Voltage  Impulse|1.5 kV|2.5 kV|4 kV|6 kV|8 kV|
|Protective<br>Separation|AC|1 kV|1.8 kV|2.8 kV|4 kV|6 kV|

|Creepage Distances|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|UR(V)|50|63|80|80|100|125|125|160|200|200|250|320|320|400|
||♠|♠|♠|♥|♥|♥|o|o|o|oo|oo|oo|♣|♣|
|Basic<br>Separation(mm)|1.9|2|2.1|2.1|2.2|2.4|2.4|2.5|3.2|3.2|4|5|5.5 °|6.3|
|Protective<br>Separation(mm)|2.2|2.4|2.5|2.5|3.2|4|4|5|6.3|6.3|8|10|10|12.5|


-----

Usage Class B clearances and creepage distances of KNX SELV/PELV bus to other circuits

Clearances Supply voltage 0- ≤ 50V   - 50- ≤ 100V   - 100- ≤ 150V   - 150- ≤ 300   - 300- ≤ 600
voltage to ground --> 230/400V

(other systems) (127/220V ) IT supply system

(277/480V) 3ph 400V

♠ ♥ o oo

♣
Rated Impulse Voltage 0.8kV 1.5 kV 2.5kV 4kV 6kV
Basic Clearance **0.8 mm** **1.0 mm** **1.5 mm** **3 mm** **5.5 mm**
Separation

Test Voltage Impulse 0.8kV 1.5 kV 2.5kV 4kV 6 kV
AC 0.6kV 1 kV 1.8 kV 2.8 kV 4 kV
Protective Clearance **1.0 mm** **1.5 mm** **3 mm** **5.5 mm** **8 mm**
Separation

Test Voltage Impulse 1.5 kV 2.5 kV 4 kV 6 kV 8 kV
AC 1 kV 1.8 kV 2.8 kV 4 kV 6 kV

Creepage Distances
UR (V) 50 63 80 80 100 125 125 160 200 200 250 320 320 400
♠ ♥ o oo ♣
Basic 1.2 1.25 1.3 1.3 1.4 1.5 1.5 1.6 2 3 ° 3 ° 3.2 5.5 ° 5.5 °
Separation (mm)

Protective 1.4 1.5 1.6 1.6 2 2.5 3 ° 3.2 4 5.5° 5.5° 6.3 8 ° 8
Separation (mm)

° adapted to clearance

**Fig. 4/1- 3**

|Clearances|Supply voltage<br>voltage to ground --><br>(other systems)|0- ≤ 50V<br>♠|> 50- ≤ 100V<br>♥|> 100- ≤ 150V<br>o|> 150- ≤ 300<br>230/400V<br>(127/220V )<br>(277/480V)<br>oo|> 300- ≤ 600<br>IT supply system<br>3ph 400V<br>♣|
|---|---|---|---|---|---|---|
|Rated Impulse Voltage|Rated Impulse Voltage|0.8kV|1.5 kV|2.5kV|4kV|6kV|
|Basic<br>Separation|Clearance|**0.8  mm**|**1.0  mm**|**1.5 mm**|**3 mm**|**5.5 mm**|
|Basic<br>Separation|Test Voltage  Impulse|0.8kV|1.5 kV|2.5kV|4kV|6 kV|
|Basic<br>Separation|AC|0.6kV|1 kV|1.8 kV|2.8 kV|4 kV|
|Protective<br>Separation|Clearance|**1.0 mm**|**1.5 mm**|**3 mm**|**5.5 mm**|**8 mm**|
|Protective<br>Separation|Test  Voltage  Impulse|1.5 kV|2.5 kV|4 kV|6 kV|8 kV|
|Protective<br>Separation|AC|1 kV|1.8 kV|2.8 kV|4 kV|6 kV|

|Creepage Distances|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|UR(V)|50|63|80|80|100|125|125|160|200|200|250|320|320|400|
||♠|♠|♠|♥|♥|♥|o|o|o|oo|oo|oo|♣|♣|
|Basic<br>Separation(mm)|1.2|1.25|1.3|1.3|1.4|1.5|1.5|1.6|2|3 °|3 °|3.2|5.5 °|5.5 °|
|Protective<br>Separation(mm)|1.4|1.5|1.6|1.6|2|2.5|3 °|3.2|4|5.5°|5.5°|6.3|8 °|8|


-----

