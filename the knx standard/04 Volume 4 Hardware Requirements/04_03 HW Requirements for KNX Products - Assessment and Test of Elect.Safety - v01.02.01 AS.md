## KNX Hardware Requirements and Tests 4

### Assessment and Test of Electrical Safety

###### Summary

 This document gives guidelines on the assessment and test of electrical safety

 This document is part of the KNX Specifications v2.1.

 Version 01.02.01 is a KNX Approved Standard.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 1999.08 Original version

1.1RfV 2003.09 Restructuring of Volume 4 – correction of cross references

1.1FV 2004.06 No comments received in release for voting – preparation for final voting

1.1AS 2009.02 Preparation of final version for publication as part of V2.0 of specifications –
taking into account approval of AN106 and 109

1.2 AS 2011.10 Update taking into account AN126

01.02.01 2013.10.22 Editorial updates for the publication of KNX Specifications 2.1.

##### References

[01] Part 4/1 “Safety and Environmental Requirements – General”

[02] Part 4/4 “Installation Safety Requirements”

04_03 HW Requirements for KNX Products - Assessment and Test of Elect.Safety Filename:
v01.02.01 AS.docx
Version: 01.02.01
Status: Approved Standard
Savedate: 2013.10.22
Number of pages: 9

|Version|Date|Modifications|
|---|---|---|
|1.0|1999.08|Original version|
|1.1RfV|2003.09|Restructuring of Volume 4 – correction of cross references|
|1.1FV|2004.06|No comments received in release for voting – preparation for final voting|
|1.1AS|2009.02|Preparation of final version for publication as part of V2.0 of specifications –<br>taking into account approval of AN106 and 109|
|1.2 AS|2011.10|Update taking into account AN126|
|01.02.01|2013.10.22|Editorial updates for the publication of KNX Specifications 2.1.|


-----

##### Contents

###### 1 Assessment and Test of Clearances and Creepage Distances ............................................ 4 1.1 Introduction ..................................................................................................................... 4 1.2 Assessment of Safety- and Test Parameters ................................................................... 4 1.3 Assessment of new clean devices ................................................................................... 5 1.4 Assessment of Devices after passing the environmental Tests....................................... 6

 2 Assessment and Test of Solid Insulation .............................................................................. 7

 3 Assessment of special Aspects ............................................................................................... 7

 4 Verification of Electrical Safety Measures for Devices....................................................... 8 4.1 Clearances and Creepage Distances ............................................................................... 8 4.2 High Voltage Test ........................................................................................................... 8 4.2.1 Application of High Voltage Test ....................................................................... 8 4.2.2 Preparation of Samples for High Voltage Test ................................................... 8 4.2.3 Test Voltage and Test Procedure ........................................................................ 8 4.2.4 Tests under abnormal Conditions ....................................................................... 9


-----

#### 1 Assessment and Test of Clearances and Creepage Distances

##### 1.1 Introduction
###### The guidelines for Assessment/verification are intended as guidelines for developers to be used in context with [01].

 When using a product standard according to [01], the assessment/verification of electrical safety is however included in the product standard.

 In any case the requirements for documentation of Safety Parameters shall be complied with.

##### 1.2 Assessment of Safety- and Test Parameters
###### The parameters listed in Table 1 for basic and protective separation for achieving electrical safety by clearances and creepage distances shall be documented in the product data sheet and/or Manufacturers Declarations:

 Table 1 - Verification by Check of the relevant Documentation

|No|Parameter|Definition by|Parameter range|
|---|---|---|---|
|1|Rated insulation Voltage UR|Manufacturer according to<br>Table 9 of [01]|e.g. 32 V, 250 V, 320 V,<br>400V,...|
|2|Rated impulse Voltage|The choice of the usage class|e.g. 4 kV, 2.5 kV, 1.5 kV AC,<br>etc.|
|3|Overvoltage category|Overvoltage category|III|
|4|Pollution degree|Pollution degree|2 or 3|
|5|Usage Class|Manufacturer|A or B|
|6|IP protection class for devices||min IP20 indoors usage<br>IP42 outdoor usage|
|7|Protection measure bus|See [01], clause 2.1.2|SELV or PELV|
|8|Protection measure non-bus|Product Standard|e.g. Class 1 or Class 2|
|9|Operational conditions<br>Altitude<br>Climate/Vibration/ Shock/...|Manufacturer<br>EN 50491-2 and/or Product<br>Standard||
|10|Type of Material<br>Type(s)/CTI index/Storage<br>Temperature/ ....../ glow wire test/|Manufacturer|CTI ≥ 175|
|11|Intended use<br>mounting in boxes/on wall/built-<br>in/built-in/ indoor/ outdoor/<br>bathrooms/wet locations/ in<br>combinations|Manufacturer||


-----

##### 1.3 Assessment of new clean devices
###### The Assessment Report shall contain the following items:

 Table 2 – Assessment report information

**No** **Item name** **Information**

1 Product identification - Product name.
or Hardware identification   - Order number.

                           - Date code (or step in the development process).

2 Intended use See item 11 of Table 1.

3 Structure of the Hardware - Parts of the housing.
                           - Modules and their Connections.
                           - BCU type used.
                           - Connections to Load and Bus.

4 Material Data For all parts providing clearances or creepage distances:

                           - Glow wire capability.
                           - Ball pressure capability.
                           - Temperature storage.
                           - CTI Value.

5 Safety relevant distances Between

                           - Life parts of the Bus to the surface of the device.
                           - (Joints, gaps, holes).
                           - Bus circuit and all adjacent other circuits.
                           - Auxiliary circuits and adjacent other circuits.
                           - Terminals to their surrounding (user, other terminals, other
components, etc.).
                           - Behaviour when mounting and connecting the device
according to data/instruction sheet.
                           - Coatings used for printed boards.

6 Components for basic - Type.
and/or protective separation   - Product standard.
(Optocoupler, relays,   - Component Manufacturers declaration on: withstand Voltage
protective impedances, etc.), and/or clearance and creepage distances within the

component.

7 Failure of insulation of ‘other Consequences of failure of insulation in case it is specified less than
circuits’ safety insulation. The failure is simulated by short –circuiting.

8 Requirements, Test Voltage The requirements shall be derived for every safety relevant item of
and method/equipment, etc. item 5 from

                           - The intended use.
                           - The Datasheet.
                           - See [01] clause 3.8.
                           - See [02] installation related.
                           - Product standard if required.

9 Result of distance - Statement for every item from item 5.
measurement   - Effect of tolerances on clearances and creepage distances

shall be taken into account.
                           - In cases of non-compliance, see [01] clause 3.8.4 may be
taken into account.

10 Result of High Voltage tests Test Voltage used and result for the HV-measurements.

|No|Item name|Information|
|---|---|---|
|1|Product identification<br>or Hardware identification|- <br>Product name.<br>- <br>Order number.<br>- <br>Date code (or step in the development process).|
|2|Intended use|See item 11 of Table 1.|
|3|Structure of the Hardware|- <br>Parts of the housing.<br>- <br>Modules and their Connections.<br>- <br>BCU type used.<br>- <br>Connections to Load and Bus.|
|4|Material Data|For all parts providing clearances or creepage distances:<br>- <br>Glow wire capability.<br>- <br>Ball pressure capability.<br>- <br>Temperature storage.<br>- <br>CTI Value.|
|5|Safety relevant distances|Between<br>- <br>Life parts of the Bus to the surface of the device.<br>- <br>(Joints, gaps, holes).<br>- <br>Bus circuit and all adjacent other circuits.<br>- <br>Auxiliary circuits and adjacent other circuits.<br>- <br>Terminals to their surrounding (user, other terminals, other<br>components, etc.).<br>- <br>Behaviour when mounting and connecting the device<br>according to data/instruction sheet.<br>- <br>Coatings used for printed boards.|
|6|Components for basic<br>and/or protective separation<br>(Optocoupler, relays,<br>protective impedances, etc.),|<br>- <br>Type.<br>- <br>Product standard.<br>- <br>Component Manufacturers declaration on: withstand Voltage<br>and/or clearance and creepage distances within the<br>component.|
|7|Failure of insulation of ‘other<br>circuits’|Consequences of failure of insulation in case it is specified less than<br>safety insulation. The failure is simulated by short –circuiting.|
|8|Requirements, Test Voltage<br>and method/equipment, etc.|The requirements shall be derived for every safety relevant item of<br>item 5 from<br>- <br>The intended use.<br>- <br>The Datasheet.<br>- <br>See [01] clause 3.8.<br>- <br>See [02] installation related.<br>- <br>Product standard if required.|
|9|Result of distance<br>measurement|- <br>Statement for every item from item 5.<br>- <br>Effect of tolerances on clearances and creepage distances<br>shall be taken into account.<br>- <br>In cases of non-compliance, see [01] clause 3.8.4 may be<br>taken into account.|
|10|Result of High Voltage tests|Test Voltage used and result for the HV-measurements.|


-----

##### 1.4 Assessment of Devices after passing the environmental Tests 
###### After each single test according to EN 50491-3 and/or appropriate product standard, the device/equipment under test shall be assessed on damages that may impair electrical safety.

 The High Voltage tests shall be repeated not later than 2 hours after the above tests were completed.

**1 Product Name:** **Hardware ID:**
Prototype Test Pilot Production    Date
**Series** **Series** Code

**Device Structure**

2 Material: Housing Base: Glow Wire/ignition class:
Housing Top: Ball pressure:
Cover: Temperature storage:
Printed Board: CTI
**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**
**(e.g. relays, optocoupler, etc.)**
a
b
c

**4 Requirements for items from item 3** **Device Group :**
Items Usage Class Type of Insulation UR (V) Requirements, e.g. test Voltages
from item 3

**5-1 Results of Assessment : device in new condition** Compliance

a
b
c

**5-2 High Voltage test** Test Voltage Result

a
b
c
**6-1 Results of Assessment after climatic tests in EN 50491-3 and/or appropriate** Compliance
**product standard**

a
b
c
**6-2 High Voltage test** Test Voltage Result

a
b
c

###### Date: signature:

|1 Product Name:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Hardware ID:|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Prototype**<br>**Series**|**Prototype**<br>**Series**|**Prototype**<br>**Series**|**Prototype**<br>**Series**|**Test**<br>**Series**|**Test**<br>**Series**|**Pilot Production**|**Pilot Production**|**Pilot Production**|||||||||Date<br>Code|
|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|**Device Structure**|
|2 Material:|2 Material:|Housing Base:|Housing Base:|Housing Base:|Housing Base:|Housing Base:|||||Glow Wire/ignition class:|Glow Wire/ignition class:|Glow Wire/ignition class:|Glow Wire/ignition class:|Glow Wire/ignition class:|||
|||Housing Top:|Housing Top:|Housing Top:|Housing Top:|Housing Top:|||||Ballpressure:|Ballpressure:|Ballpressure:|Ballpressure:|Ballpressure:|||
|||Cover:|Cover:|Cover:|Cover:|Cover:|||||Temperature storage:|Temperature storage:|Temperature storage:|Temperature storage:|Temperature storage:|||
|||Printed Board:|Printed Board:|Printed Board:|Printed Board:|Printed Board:|||||CTI|CTI|CTI|CTI|CTI|||
|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|**3 Safety relevant Clearances and Creepage Distances/solid insulation/ components for separation**<br>**(e.g. relays, optocoupler, etc.)**|
|a||||||||||||||||||
|b||||||||||||||||||
|c||||||||||||||||||
|||||||||||||||||||
|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**4 Requirements for items from item 3**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|**Device Group :**|
|Items<br>from item 3|Items<br>from item 3|Items<br>from item 3|Usage Class|Usage Class|Usage Class|Type of Insulation|Type of Insulation|Type of Insulation|UR (V)|UR (V)|UR (V)|Requirements, e.g. test Voltages|Requirements, e.g. test Voltages|Requirements, e.g. test Voltages|Requirements, e.g. test Voltages|Requirements, e.g. test Voltages|Requirements, e.g. test Voltages|
|||||||||||||||||||
|||||||||||||||||||
|||||||||||||||||||
|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|**5-1 Results of Assessment : device in new condition**|Compliance|Compliance|Compliance|
|a||||||||||||||||||
|b||||||||||||||||||
|c||||||||||||||||||
|||||||||||||||||||
|**5-2 High Voltage test**|**5-2 High Voltage test**|**5-2 High Voltage test**|**5-2 High Voltage test**|**5-2 High Voltage test**|Test Voltage|Test Voltage|Test Voltage|Test Voltage|Test Voltage|Result|Result|Result|Result|Result|Result|Result|Result|
|a||||||||||||||||||
|b||||||||||||||||||
|c||||||||||||||||||
|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|**6-1 Results of Assessment  after climatic tests in EN 50491-3 and/or appropriate**<br>**product standard**|Compliance|Compliance|Compliance|
|a||||||||||||||||||
|b||||||||||||||||||
|c||||||||||||||||||
|**6-2 High Voltage test**|**6-2 High Voltage test**|**6-2 High Voltage test**|**6-2 High Voltage test**|**6-2 High Voltage test**|Test Voltage|Test Voltage|Test Voltage|Test Voltage|Test Voltage|Result|Result|Result|Result|Result|Result|Result|Result|
|a||||||||||||||||||
|b||||||||||||||||||
|c||||||||||||||||||


-----

#### 2 Assessment and Test of Solid Insulation
###### Under consideration

#### 3 Assessment of special Aspects

###### Table 3 – Assessment of special aspects

**No** **Item name** **Information**

1 Coatings → Type B Is the coating adhesive?
See [01] clause 3.8.6 (pencil test IEC 60664-3)

Are there changes in the appearance or in high Voltage test after
climate tests?
Is the datasheet for the coating material available?
Is the coating part of the production process or a special action?
Does the dimension of thickness a or c correspond to the
required withstand capability? (Figure 5)

2 Mains, power feeding- or Can the bus circuit be influenced by faults in the other circuits
auxiliary circuits originated (overheating, melting or blowing of a conductor)?
from mains

3 Combination of devices If a bus device is not providing protective separation itself and is
not a Group 3 device, is the mounting and usage in combinations
described in the instruction sheet? Is the usage in combinations
stated explicitly?

4 Group 3 devices Is the exclusive usage in a SELV/PELV environment documented
in appropriate instructions?

5 Class I,-II,-III devices The assessment shall be based on an appropriate product
standard. It is not necessary that the product covers the KNX
device exactly; the same type of stress and environment is
important.
The KNX Handbook is not sufficient even if e.g. Reinforced
Insulation is provided.

6 Usage of material group I or II If the material group is clearly stated and documented by a
material data sheet, the creepage distances may be reduced but
they should not be less than those in Table 4 in EN 60664-1 for
the relevant material group without changing all other parameters.

7 Protective impedances It shall be checked that the protective impedances are consisting
of two equal parts in series each of them able to cope with the
requirements for basic separation.

8 Mechanical stress in case of Can hazardous life parts become accessible by handling,
mounting and usage mounting and operation of the device?

9 Movable or flexible parts The worst case in position shall be regarded. A force of 5 N shall
providing separation be applied.

10 Abnormal conditions See product standard.

|No|Item name|Information|
|---|---|---|
|1|Coatings→ Type B<br>See [01] clause 3.8.6|Is the coating adhesive?<br>(pencil test IEC 60664-3)<br>Are there changes in the appearance or in high Voltage test after<br>climate tests?<br>Is the datasheet for the coating material available?<br>Is the coating part of the production process or a special action?<br>Does the dimension of thickness a or c correspond to the<br>required withstand capability? (Figure 5)|
|2|Mains, power feeding- or<br>auxiliary circuits originated<br>from mains|Can the bus circuit be influenced by faults in the other circuits<br>(overheating, melting or blowing of a conductor)?|
|3|Combination of devices|If a bus device is not providing protective separation itself and is<br>not a Group 3 device, is the mounting and usage in combinations<br>described in the instruction sheet? Is the usage in combinations<br>stated explicitly?|
|4|Group 3 devices|Is the exclusive usage in a SELV/PELV environment documented<br>in appropriate instructions?|
|5|Class I,-II,-III devices|The assessment shall be based on an appropriate product<br>standard. It is not necessary that the product covers the KNX<br>device exactly; the same type of stress and environment is<br>important.<br>The KNX Handbook is not sufficient even if e.g. Reinforced<br>Insulation is provided.|
|6|Usage of material group I or II|If the material group is clearly stated and documented by a<br>material data sheet, the creepage distances may be reduced but<br>they should not be less than those in Table 4 in EN 60664-1 for<br>the relevant material group without changing all other parame-<br>ters.|
|7|Protective impedances|It shall be checked that the protective impedances are consisting<br>of two equal parts in series each of them able to cope with the<br>requirements for basic separation.|
|8|Mechanical stress in case of<br>mounting and usage|Can hazardous life parts become accessible by handling,<br>mounting and operation of the device?|
|9|Movable or flexible parts<br>providing separation|The worst case in position shall be regarded. A force of 5 N shall<br>be applied.|
|10|Abnormal conditions|See product standard.|


-----

#### 4 Verification of Electrical Safety Measures for Devices

##### 4.1 Clearances and Creepage Distances
###### Clearances and creepage distances will be verified by distance measurement.

 The measurement and assessment shall take into account subclause 4.2 in EN 60664-1.

 In general grooves may be added to the creepage distance if they have a minimum width (see subclause 4.2 in EN 60664-1) and if the pollution can be expected to be the same as for the other parts of the creepage distance. If the pollution is expected to be higher the groove shall be omitted /not be counted. 

##### 4.2 High Voltage Test

###### 4.2.1 Application of High Voltage Test The High Voltage tests are intended for verification of

 • Withstand of Transient Overvoltages of clearances - Impulse Test: in the case of smaller clearances than specified, or in case of doubt (see [01] clause 3.8.4). - AC HV Test: insulation stressed directly or indirectly by 230 V mains (see [01] clause 3.8.1).

 • Withstand of Temporary Overvoltages (mainly stressing solid insulation; insulation stressed directly or indirectly by 230 V mains, (see [01] clause 3.8.1).

 • If other voltages stresses are expected additional tests according to EN 60664-1 shall be applied.

 The High Voltage test may be carried out for the whole device or only for the safety relevant parts (e.g. the housing). In particular it is not required to include electronic components (with the risk of damage) in the High Voltage test if they do not contribute to or influence safety separation.

 4.2.2 Preparation of Samples for High Voltage Test The ‘body’ shall be covered by metal foil that is pressed into grooves, openings and gaps by the IEC test finger. If housing is tested without electronics the metal foil shall also be affixed to the relevant ‘inside’ parts. All inputs or outputs of the same polarity shall be connected together (see Figure 1).

 4.2.3 Test Voltage and Test Procedure The High Voltage test shall be carried out for a new clean device and after the test in EN 50491-3 and/or an appropriate product standard; the High Voltage test shall be carried out not later than 1h after the end of this test.

 4.2.3.1 Impulse Test (Transient Overvoltages, clearances) The impulse test shall follow the relevant subclause 4.1.1 of EN 60664-1. The test voltage shall be taken from [01], clause 3.8.3. The test shall be carried out for at least three impulses of each polarity.

4.2.3.1.1 AC HV Test
###### The AC HV test voltage (r.m.s) values shall be taken from [01], clause 3.8.3. The AC shall be 50 Hz sin wave. The output of the transformer shall not be less than 200 mA. The overcurrent relay indicating the breakdown shall be set to 100 mA tripping current. The test duration shall be at least three cycles (50 Hz) but not more than 5 s.

 4.2.3.2 HV Test of Temporary Overvoltages
 • Step 1: AC HV test with Test Voltage =UN +1 200 V, 5 sec ; is deemed covered by 4.2.3.1.1, if the UN+1 200 V is ≤ Test voltage from 4.2.3.1.1.


-----

###### • Step 2: AC HV test with Test Voltage = UN + 250 V > 6 h

NOTE 1 Samples tested with High Voltage may be damaged or pre-damaged and should not be used further more.

###### 4.2.4 Tests under abnormal Conditions Tests under abnormal conditions shall verify that no fire can be caused by faults in the functional insulation or that no over temperature occurs during operation that may affect the safety insulation.

 Figure 1 - Connections

 High Voltage measuring path


-----

