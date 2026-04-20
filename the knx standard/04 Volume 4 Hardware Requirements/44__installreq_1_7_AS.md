## KNX Hardware Requirements and Tests 4

### Installation Safety Requirements 44

Summary

This document specifies installation Safety Requirements for KNX


-----

###### Document Updates

**Version** **Date** **Modifications**
1.0 1999.08 Approved Standard
1.1RfV 2005.05 Restructuring of Volume 4 – updating of Overvoltage requirements
1.1FV 2005.11 Resolution of comments from RfV cycle – change in clause 5 following
recent standard publications
1.1AS 2007.11 Resolution of comments from FV cycle – taking into account final
publication of AN106 and AN109
1.2RfV 2009.10 Additions to clause 6, addition of clause 4
1.2FV 2010.03 Resolution of comments from Release for Voting – readying document for
final voting
1.3 AS 2011.10 Update taking into account AN 126
1.4 WD 2020.03 Updating standard references
1.5 DP 2020.03 Minor updates KCG meeting – readying for Release for Voting
1.6 DV 2020.06 Resolution of comments from release for voting
1.7 AS 2020.09 Resolution of comments from Final Voting

Filename: 44__installreq_1_7_AS
Version: 1.7
Status: Approved Standard
Savedate: 2020.10.09
Number of pages: 17

|Version|Date|Modifications|
|---|---|---|
|1.0|1999.08|Approved Standard|
|1.1RfV|2005.05|Restructuring of Volume 4 – updating of Overvoltage requirements|
|1.1FV|2005.11|Resolution of comments from RfV cycle – change in clause 5 following<br>recent standardpublications|
|1.1AS|2007.11|Resolution of comments from FV cycle – taking into account final<br>publication of AN106 and AN109|
|1.2RfV|2009.10|Additions to clause 6, addition of clause 4|
|1.2FV|2010.03|Resolution of comments from Release for Voting – readying document for<br>final voting|
|1.3 AS|2011.10|Update taking into account AN 126|
|1.4 WD|2020.03|Updating standard references|
|1.5 DP|2020.03|Minor updates KCG meeting – readying for Release for Voting|
|1.6 DV|2020.06|Resolution of comments from release for voting|
|1.7 AS|2020.09|Resolution of comments from Final Voting|


-----

##### Contents

###### 1 General Rules ..................................................................................................................... 4

 2 Use of Protective Impedances ........................................................................................... 5

 3 Connection of KNX Bus to other SELV/PELV Circuits ............................................... 6

 4 Touch current of KNX devices ......................................................................................... 7

 5 Earthing, Handling of the Screen..................................................................................... 8

 6 Installation of KNX Bus Cables ....................................................................................... 9

 7 Usage of the 2[nd] Twisted Pair (if available) ................................................................... 10

 8 Bus Cable Overcurrent Protection ................................................................................ 11

 9 Overvoltage Protection ................................................................................................... 12
 9.1 Surge protection (Secondary Protection) ............................................................ 12 9.2 Lightning (primary) protection ............................................................................ 12

 10 Installation in special Locations ..................................................................................... 15

 11 Instruction Sheet .............................................................................................................. 17


-----

#### 1 General Rules
The general installation rules are given in EN 61140 and IEC 60364-7-701 respectively their derived
national standards. For TP-cabling the requirements of EN 50491-6-1 and EN 50491-5-2 (or IEC
63044-5-2) apply.

In addition the local or national codes of practice shall be obeyed.

Additional rules and information for the installation of KNX bus are given below. If specification of
separation/insulation is required Overvoltage category and the rated insulation voltage ( UR ) shall be
taken into account.


-----

#### 2 Use of Protective Impedances

Clause 2.1 of Part 4/1 applies.


-----

#### 3 Connection of KNX Bus to other SELV/PELV Circuits

|1|Other circuits shall not be connected to the (SELV/PELV) bus even if they are SELV or PELV<br>circuits.|
|---|---|
|2|For connection to other circuits Bus Coupling Units, Line Couplers or KNX Data Interfaces shall<br>be used.|
|3|For connections of ancillary power feeding circuits to KNX bus, see clause 2.1 of Part 4/1|


-----

#### 4 Touch current[1] of KNX devices

1 The touch current of a KNX product between mains and SELV shall be in line with the

61140.

1 Sometimes also referred to as ‘leakage current’

|1|The touch current of a KNX product between mains and SELV shall be in line with the<br>requirements of EN 63044-3 and shall be declared in the product instruction sheet. The sum of the<br>touch currents of all devices within a line segment shall not exceed 3,5 mA according to EN<br>61140.|
|---|---|


-----

#### 5 Earthing, Handling of the Screen

|1|KNX SELV circuits shall not be connected to ground or PE.|
|---|---|
|2|If a device is screened and the screen is part of the bus circuit, the same protective separation as<br>for the bus circuit shall be provided between the device screen and other circuits or ground (in<br>case of SELV).<br>If a device is screened and the screen is connected to ground, protective separation shall be<br>provided between the device screen and the bus circuit.|
|3|The KNX TP1 bus cable also contains a screen, which shall neither be connected to the bus<br>circuit nor to PE or ground (the latter only permitted in case 4). In this case, the following<br>separation shall be provided:<br>1.<br>basic separation between bus circuit and screen for  UR ≥ 50V.<br>2. <br>basic separation between PE and screen for  UR ≥ 50V.<br>For non specified ground see requirements in the relevant IEC standards.|
|4|If the cable screen is included in the lightning protection measure, all parts of the cable screen<br>shall be connected together and shall be connected to ground/PE as often as possible.|
|5|The earth terminal of the TP1 Power Supply Unit may be connected to PE with a cable, which<br>is marked with**yellow/green**providing the required cross-section. Cables marked with green or <br>yellow shall not be used.|


-----

#### 6 Installation of KNX Bus Cables
For the installation of KNX bus cables the following requirements shall be complied with

|1|KNX bus cables as specified in Part 9/1 "Cables and Connectors" may be installed in close<br>contact with:<br>• Mains cables<br>• Other cables for control networks with voltages not higher than the mains supply voltage<br>• Cables for SELV/PELV or data and multimedia networks|
|---|---|
|2|The uninsulated cores of the KNX bus cable and the uninsulated cores of mains cables or other<br>cables (excluding SELV cables) shall be separated by at least 6 mm|
|3|In the case where TP1 standardised bus cable is combined with non-standardised and**un**twisted<br>cable (e.g. to hook up movable device with cable to a bus access unit in a wall outlet), the total<br>length of this type of cable shall be negligible in comparison to the length of the standardised<br>cable length of the line to which the device is connected to. All characteristics of the cable shall<br>moreover comply with the M requirements for TP1 cable as set out in Volume 9/1 of the KNX<br>standard.|


-----

#### 7 Usage of the 2[nd] Twisted Pair (if available)
The second twisted pair provided by a KNX bus cable shall be used as follows:

|Col1|Use of 2nd Pair|Requirements|Installation Note|
|---|---|---|---|
|1|Let free|The free ends of the cable shall be<br>protected against direct contact to<br>live parts of all other circuits or<br>ground.|Use e.g. Bus Connection Block|
|2|2nd pair in parallel to the<br>bus pair<br>(for reducing Voltage<br>Drop)||1. Connect yellow/white and<br>red/dark grey respectively for<br>correct polarity in case of KNX<br>bus cable.|
|2|2nd pair in parallel to the<br>bus pair<br>(for reducing Voltage<br>Drop)||2. Although the voltage drop is<br>reduced by the parallel 2nd pair,<br>the limits of total cable length<br>remain valid.|
|3|Supporting bus<br>applications|1.<br>The usage shall be within the<br>frame of SELV/PELV<br>(25V AC / 60 V DC)||
|3|Supporting bus<br>applications|2.<br>Max current 2.5 A<br>Overcurrent protection is<br>required.|Overcurrent protection may be<br>provided by the Power Supply Unit or<br>an extra limiter or circuit<br>breaker/fuse.|
|3|Supporting bus<br>applications|3.<br>Voice communication is<br>allowed on the 2nd pair||
|3|Supporting bus<br>applications|4.<br>The voltage level chosen for<br>the 2nd pair shall be the same<br>throughout one autonomous<br>bus installation|Example:<br>same voltage level for<br>- one building or home<br>- one workshop with few separate<br>buildings<br>- one floor of a big building|
|3|Supporting bus<br>applications|5.<br>No undue generation of EMI<br>or of overvoltages shall occur<br>on the 2nd pair|additional/extra suppression measures<br>may be required|
|3|Supporting bus<br>applications|6.<br>Both ends of the 2nd pair<br>wires shall be marked<br>(durable and legible)||
|4|2nd KNX Bus line on 2nd <br>pair or other TP medium|tbd|tbd|


-----

#### 8 Bus Cable Overcurrent Protection

The current in a TP1 bus line is limited to 3A.


-----

#### 9 Overvoltage Protection
For further information see also the KNX installation handbook available from KNX Association.

##### 9.1 Surge protection (Secondary Protection)

In a KNX bus installation, it shall be ensured, e.g. by surge protection devices (secondary protection),
that surges are not greater than 2 kV.

Protection devices for secondary protection:

♦ Requirements for Overvoltage arresters connected to mains:

Protection level: Common Mode: <2 kV

Differential Mode: <1 kV

Nominal discharge current (8/20, single line to ground): 5 kA according to EN 61643-11.

♦ Requirements for Overvoltage arresters connected to data and signal lines:

Protection level: Common Mode: <2 kV

Differential Mode: no requirements for media interface, for other
interfaces < 0,5 kV

Nominal discharge current (8/20, single line to ground): 5 kA according to EN 61643-21.

If bus devices are connected to networks of different topology (mains-bus, bus-bus, bustelephone, bus-pipeline), loops shall be avoided or surge protective devices (SPD) shall be
installed.

##### 9.2 Lightning (primary) protection

In case the Secondary Protection cannot withstand the high-energy interference (such as e.g. switching
or lightning overvoltage), additional protective measures are required. This is denoted as Primary
Protection.

Protection devices for Primary Protection:

♦ Requirements for Lightning arresters connected to mains, data or signal lines :

Protection level: <4 kV for mains, < 2 kV for data and signal lines

Nominal discharge current (10/350): mains -> in accordance with lightning protection
level: Level I: 100 kA

Level II: 75 kA

Level III/IV: 50 kA

data and signal lines: 5 kA according EN 62305-4

SPD’s for Secondary and Primary Protection shall be co-ordinated according EN 61643-22, EN
61643-12 and EN 62305-4. An easy way to achieve co-ordination is the use of co-ordinated SPD
families. In this case, the manufacturer of the SPD shall prove the co-ordination.


-----

|Col1|Col2|KNX (*)|Col4|Col5|
|---|---|---|---|---|
||||||
||||||
||||||
||||||
||||**DVC 1**|**DVC 1**|
||||**DVC 1**||
||||DVC n|DVC n|


**Fig. 4/4- 1: Primary and secondary protection – no bus connection with other building**

Lighting arrester, primary
protector

Surge arrester,
secondary protector

**KNX**

DVC DVC 1

PE **230/400 V**

Equipotential bonding bar

**Fig. 4/4- 2: Primary and secondary protection –bus connection with other building – KNX not**
**installed in metal channels or pipes**

|Col1|Col2|Col3|230/400 V|
|---|---|---|---|
|||||
|||||


-----

|Col1|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
||||||**230/400 V**|
|||||||
|||||||
|Equipotential bonding bar|Equipotential bonding bar|Equipotential bonding bar|Equipotential bonding bar|Equipotential bonding bar|Equipotential bonding bar|


**Fig. 4/4- 3: Primary and secondary protection –bus connection with other building – KNX**
**installed in metal channels or pipes**

Lighting arrester, primary
protector

Surge arrester,
secondary protector

**Telecom, other bus, IP, ….**

DVCDVC DVC 1DVC 1 **KNX**

PE **230/400 V**

Equipotential bonding bar

**Fig. 4/4- 4: Primary and secondary protection – bus device with connection to mains and other**
**data network (telephone, external sensor, other bus, IP, ….)**


-----

#### 10 Installation in special Locations
Equipment that is used in locations other than indoors shall comply with the requirements (under
further consideration) listed in Fig. 4/4- 5.

|Col1|Location|Requirements|
|---|---|---|
|1|Humid and wet<br>locations, outdoor<br>Installation|1.<br>Equipment not suitable for use in these locations shall be<br>protected by enclosures or similar|
|1|Humid and wet<br>locations, outdoor<br>Installation|2.<br>The IP protection class shall comply with the product standard|
|1|Humid and wet<br>locations, outdoor<br>Installation|3.<br>Enclosures, boxes, … shall have a drain for condensed water|
|1|Humid and wet<br>locations, outdoor<br>Installation|4.<br>Cables shall be sheathed and shall be suitable for use in this<br>environment.<br>The TP cable screen shall be omitted or connected to the<br>equipotential bonding.|
|2|Installation of TP1 bus<br>cable in bathrooms|Standardised KNX TP1 cable may be used in bathrooms under the<br>following conditions:<br>The installation may be carried out in zones 1 to 3 as TP1 is based on<br>SELV acc to IEC 61140<br>As<br> the TP1 cabling network is an extended network in close vicinity<br>to mains,<br> the screen of the TP1 standard cable is normally not connected to<br>ground nor PE<br> the use of screened cables is not excluded in IEC 60364-7-701<br>the installation of the TP1 cable shall comply with one of  the<br>following requirements, in order to avoid carrying of hazardous<br>voltages.<br>1) the screen of the TP1 standard cable shall be connected to the<br>equipotential bonding or<br>2) an unscreened but sheathed cable stub shall be used in Zones 1, 2 or<br>3. This is in line with e.g. IEC 364-7-701. This measure should<br>only be used if 1) is not feasible.|
|3|Installation in furniture|1.<br>Wall boxes for installations in hollow walls shall only be used if<br>marked with "H"|
|3|Installation in furniture|2.<br>The devices for mounting in wall boxes shall not be fixed with<br>claws|
|3|Installation in furniture|3.<br>Equipment (in particular lamps) which can cause overheating or<br>fire shall be installed with the adequate protection|
|3|Installation in furniture|4.<br>Cables shall be sheathed and shall be suitable for use in this<br>environment|
|4|Class Rooms etc.|SELV circuits are recommended|
|5|Locations exposed to<br>fire hazards|under consideration|


-----

|Col1|Location|Requirements|
|---|---|---|
|6|Hospitals and medical<br>use|under consideration|
|7|Communal facilities|under consideration|
|8|Agricultural premises|under consideration|


**Fig. 4/4- 5**


-----

#### 11 Instruction Sheet
If an instruction sheet is required to maintain electrical safety (and proper functioning) after mounting
and installation, this is part of the device. In addition to the product specific and the market specific
requirements, the instruction sheet of a KNX product shall be established at least in one of the three
official KNX languages (French, German or English). The instruction sheet shall inform on (where
applicable):

1 Manufacturers identification

2 Product name

3 Additional equipment and tools for installation etc.

4 Intended use, restrictions, risks

5 Installation guidelines for reaching required safety, steps of working, safety measures during the
work

6 Persons permitted to do the work

**Fig. 4/4- 6**

|1|Manufacturers identification|
|---|---|
|2|Product name|
|3|Additional equipment and tools for installation etc.|
|4|Intended use, restrictions, risks|
|5|Installation guidelines for reaching required safety , steps of working, safety measures during the<br>work|
|6|Persons permitted to do the work|


-----

