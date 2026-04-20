## KNX Hardware Requirements and Tests 4

##### EMC Test Set-up 22

Summary

This document describes the Test Set-ups for EMC Testing


-----

###### Document Updates

**Version** **Date** **Modifications**
1.0 1999.08 Approved Standard
1.1RfV 2003.09 Update according modified standards - restructuring of the handbook –
preparation for release for voting
1.1FV 2004.06 Integration of comments from release for voting cycle – preparation for
final voting
1.1 AS 2009.02 Finalisation of chapter for publication in V2.0 of the KNX specifications
(o.a. taking into account approval of AN106 and AN109)
1.2 DP 2020.03 Updating references to standards, no comments KCG Meeting, readying
for Release for Voting
1.3 DV 2020.06 Resolution of comments from Release for Voting
1.4 AS 2020.09 Resolution of comments from Final Voting

Filename: 42__emc_testsetups_1_4 AS
Version: 1.4 AS
Status: Approved Standard
Savedate: 2020.10.09
Number of pages: 31

©C i h 1998 2020 KNX A i i V i 1 4 AS P 2 f 31

|Version|Date|Modifications|
|---|---|---|
|1.0|1999.08|Approved Standard|
|1.1RfV|2003.09|Update according modified standards - restructuring of the handbook –<br>preparation for release for voting|
|1.1FV|2004.06|Integration of comments from release for voting cycle – preparation for<br>final voting|
|1.1 AS|2009.02|Finalisation of chapter for publication in V2.0 of the KNX specifications<br>(o.a. taking into account approval of AN106 and AN109)|
|1.2 DP|2020.03|Updating references to standards, no comments KCG Meeting, readying<br>for Release for Voting|
|1.3 DV|2020.06|Resolution of comments from Release for Voting|
|1.4 AS|2020.09|Resolution of comments from Final Voting|


-----

###### Contents

 1 General Remarks ............................................................................................................... 4

 2 General abbreviations ....................................................................................................... 5

 3 Test set up for immunity ................................................................................................... 6
 3.1 Test set up for powerline ....................................................................................... 6 3.1.1 General ........................................................................................................... 6 3.1.2 EN 61000-4-2 Electrostatic Discharge (ESD) ............................................... 6 3.1.3 EN 61000-4-3 RF Fields ................................................................................ 7 3.1.4 EN 61000-4-4 Fast Transients (Bursts) .......................................................... 8 3.1.5 EN 61000-4-5 Transients (Surge) .................................................................. 9 3.1.6 EN 61000-4-6 Radio Frequency Voltage .................................................... 10 3.1.7 EN 61000-4-8 Power Frequency Magnetic Field ........................................ 11 3.1.8 EN 61000-4-11 Voltage Dips / Voltage Interruption ................................... 11 3.1.9 EN 50065-2-1 Narrow-band Conducted Interference .................................. 11 3.2 Test set up for radio frequency ............................................................................ 11 3.2.1 EN 61000-4-2 Electrostatic discharge (ESD) .............................................. 11 3.2.2 EN 61000-4-3 Radio frequency fields ......................................................... 12 3.2.3 EN 61000-4-4 Fast transients / bursts .......................................................... 14 3.2.4 EN 61000-4-5 Transients / surge ................................................................. 15 3.2.5 EN 61000-4-6 Radio frequency common mode voltage on signal cables ............................................................................................................ 15 3.2.6 EN 61000-4-11 Voltage dips and short interruptions .................................. 16 3.3 Test set up for twisted pair .................................................................................. 17 3.3.1 Introduction .................................................................................................. 17 3.3.2 EN 61000-4-2 Electrostatic Discharge (ESD) ............................................. 17 3.3.3 EN 61000-4-3 RF Fields .............................................................................. 18 3.3.4 EN 61000-4-4 Fast Transients (Bursts) ........................................................ 19 3.3.5 EN 61000-4-5 Transients (Surge) ................................................................ 21 3.3.6 EN 61000-4-6 Radio Frequency Voltage .................................................... 23 3.3.7 EN 61000-4-8 Power Frequency Magnetic Field ........................................ 26 3.3.8 EN 61000-4-11 Voltage Dips / Voltage Interruption ................................... 26

 4 Test set up for emission ................................................................................................... 27
 4.1 Test set up for powerline ..................................................................................... 27 4.1.1 Radio Emission Interference Voltage on Connections and Process Connections .................................................................................................. 27 4.1.2 Radio Frequency Interference Field Strength .............................................. 27 4.2 Test set up for radio frequency ............................................................................ 28 4.2.1 Electromagnetic Interference (EMI): Noise-field intensity ......................... 28 4.2.2 Electromagnetic Interference (EMI): Interference voltage .......................... 28 4.3 Test set up for twisted pair .................................................................................. 29 4.3.1 General ......................................................................................................... 29 4.3.2 Radio Emission Interference Voltage on Power Supply Connections and Process Connections .............................................................................. 29 4.3.3 Radio Frequency Interference Field Strength .............................................. 31

©C i h 1998 2020 KNX A i i V i 1 4 AS P 3 f 31


-----

###### 1 General Remarks
This chapter is divided into several clauses describing the test arrangements for different media.
Devices connected to different media such as media-coupler shall be tested according the requirements
of all implemented media.

All tests shall be carried out with the KNX bus minimum standard configuration enabling testing the
proper function of an Equipment Under Test (EUT).

In order to verify performance criterion A, the EUT shall be stimulated at least every second
respectively a bus transmission is needed every second.

EUT's with two bus connections (e.g. line coupler) shall be active on both paths.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 4 f 31


-----

###### 2 General abbreviations

A Attenuation

AN Artificial Mains Network

AFS Additional Filter Section

AT Antenna

C Coupling Network

CC Capacitive coupling clamp

CDN Coupling-decoupling network

CU Communication unit

D Device needed for functional test of the EUT

DF Decoupling filter

EUT Equipment under Test

F Filters decoupling the D from the test signal. These filters may not reduce the test
signal for the EUT.

G Generator

HF High frequency

M Measuring set 50 Ω

MEQU Measurement equipment

PF Passing filter

PSU Power supply unit

R Reference Ground (EN 55032, metal wall)

RF Radio frequency

T/R Transmitter/receiver

UN+S Mains Voltage with coupled test signals

VN Artificial mains V-network

©C i h 1998 2020 KNX A i i V i 1 4 AS P 5 f 31


-----

###### 3 Test set up for immunity

 3.1 Test set up for powerline

 3.1.1 General 
The EUT and the corresponding device CU (the stimulus), used to establish that communication
between the two devices is possible, are supplied via two artificial networks AN A and AN B. Two
660 µH inductors F are connected between each of the two conductors of AN A and AN B and are
used for signalling purposes, i.e. to provide a controlled signal coupling between the EUT and CU.

This test-set-up is only applicable for testing the behaviour of the communication part and process
connections of a device.

For power-parts of switches or dimmers - if any - additional EMC tests can be necessary according to
the relevant product-standard.

The power source for all tests is Port A, if not otherwise stated. This ensures stable conditions for the
communication between the stimulus (CU) and the EUT. All test set-ups are shown with the
connection at the mains entry point Port A instead of the complete general test set-up according to Fig.
4/2- 1 .

If the communication between EUT and the stimulus CU is not possible during the test caused by the
additional attenuation of the coupling network C and the generator G, the stimulus CU can be
connected to port A.

###### Supply
 AFS A AN A CU
 Mains

 50 Ω
 F

 AFS B AN B Port A

 50 Ω

**Fig. 4/2- 1: General Test set-up**

###### 3.1.2 EN 61000-4-2 Electrostatic Discharge (ESD)
The test procedure and test set-up shall follow EN 61000-4-2.

The EUT shall be active in connection with the auxiliary device D. The test set-up is isolated from and
located at 10 cm above an earthed metal plane (reference ground).

©C i h 1998 2020 KNX A i i V i 1 4 AS P 6 f 31

|Col1|Col2|Col3|AFS A|AN A|Col6|Col7|Col8|CU|
|---|---|---|---|---|---|---|---|---|
||||||||||
|||<br> <br>50Ω|||||||

|Col1|Col2|
|---|---|
|AFS B|AN B|


-----

1 contact discharge on perpendicular metal test plane

The discharge tip shall be contacted to the middle of the test plane. The discharge voltage shall be
switched on.

2a air discharge (only for devices with a surface which can be touched in normal use)

The ESD generator shall be adjusted to its relevant discharge voltage. The air discharge tip shall be
conducted along the touchable surface of the EUT.

2b contact discharge (only for devices with earthed conductive surface that can be touched in
normal use)

The discharge tip shall be contacted to earthed conductive surfaces of the EUT. The discharge voltage
shall be switched on.

perpendicular metal test plane

50x50 cm

R

###### 1 2 10 cm

EUT

Port A
distance between

l = 1 m

metal plane and EUT

metal plane

**Fig. 4/2- 2: Test at the enclosure**

###### 3.1.3 EN 61000-4-3 RF Fields
The test procedure shall follow EN 61000-4-3.

The antenna is located at the marked position (See Fig. 4/2- 3). The measurement shall be carried out
with various EUT positions. During each constant phase of the test signal (e.g. 1 s interval), one
transmission or EUT stimulation shall be carried out.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 7 f 31


-----

###### MEQU and EUT connections

 PF

shielded enclosure

**Fig. 4/2- 3: Measurement in the shielded enclosure**

1.0 m 1.0 m

###### EUT

0.8 m

###### DF DF

insulated area
(e.g. wooden table)

**Fig. 4/2- 4: Side view**

###### 3.1.4 EN 61000-4-4 Fast Transients (Bursts)
The test procedure shall follow EN 61000-4-4.

If there is a metallic mounting plate (DIN rail), the test shall be carried out with isolated rail 10 cm
above the reference ground plane and with the mounting plane directly contacted to the reference
ground.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 8 f 31


-----

metal plane

**Fig. 4/2- 5: Test at the Mains Connection of the PL-Device**

total length of wire 2m

Port A

C EUT F D

50 ohms

G

metal plane

**Fig. 6-2-5: Test at the Process Connections of the PL-Device**

###### 3.1.5 EN 61000-4-5 Transients (Surge)
The test procedure and test set-up shall follow EN 61000-4-5.

All tests shall be carried out with a combination wave (hybrid) generator (1.2/50 µs). The EUT shall
be mounted as in practical use. Existing metal mounting plates shall be grounded to the reference
ground (generator ground connector).

©C i h 1998 2020 KNX A i i V i 1 4 AS P 9 f 31

|max. cable length 1 m<br>Port A C EUT<br>U<br>N+S<br>G|Col2|
|---|---|
|||

|F|D|
|---|---|

|total length of wire 2m<br>Port A<br>C EUT F D<br>50 ohms<br>G|Col2|
|---|---|
|||


-----

Test at the mains and process connection of the PL-device:

max. cable length 1 m

Port A C EUT

U N+S

###### G

insulated plane (e.g. wooden table)

**Fig. 4/2- 6: Test at the mains and process connections of PL device**

###### 3.1.6 EN 61000-4-6 Radio Frequency Voltage
The test procedure shall follow EN 61000-4-6.

All tests shall be carried out with a RF generator as specified in EN 61000-4-6.

The EUT shall be mounted as in practical use. Existing metal mounting plates shall be grounded to the
reference ground.

The test set-up shall be isolated from and located at 10 cm above an earthed metal plane (reference
ground).


metal plane

|Port A CDN-network EUT<br>RF<br>generator|Col2|
|---|---|
|||


**Fig. 4/2- 7: Test at the Mains Connection of the PL-Device**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 10 f 31


-----

|F|D|
|---|---|


metal plane

|Port A<br>CDN EUT CDN or EM-clamp F D<br>50 ohm<br>RF<br>generator|Col2|
|---|---|
|||


**Fig. 4/2- 8: Test at the Process Connection of the PL-Device**

###### 3.1.7 EN 61000-4-8 Power Frequency Magnetic Field
Applicable only to devices containing components susceptible to magnetic fields, e.g. Hall elements,
electro-dynamic microphones, etc.

The test procedure shall follow EN 61000-4-8.

###### 3.1.8 EN 61000-4-11 Voltage Dips / Voltage Interruption
The test procedure shall follow EN 61000-4-11.

A Power line device is not able to transmit information during mains interruption. As a consequence
the EUT cannot be stimulated during the test. The test is therefore carried out without the stimulus
CU. After the test the stimulus CU shall be connected to the EUT: It has passed the test if the
communication is possible.

###### 3.1.9 EN 50065-2-1 Narrow-band Conducted Interference
The test procedure shall follow EN 50065-2-1.

The EUT shall be mounted as in practical use. Existing metal mounting plates have to be grounded to
the reference ground.

The test set-up shall be isolated from and located at 10 cm above an earthed metal plane (reference
ground).

For this test the 50 ohms resistor at AN B shall be replaced by a generator and a measurement device,
each with an impedance of 50 ohms. The EUT is connected to Port A. During the calibration of the
voltage level, the EUT is disconnected from Port A.

###### 3.2 Test set up for radio frequency

 3.2.1 EN 61000-4-2 Electrostatic discharge (ESD)
The general test requirements and test procedure shall follow EN 61000-4-2. The test arrangement
shall be in accordance with Fig. 4/2- 9

©C i h 1998 2020 KNX A i i V i 1 4 AS P 11 f 31


-----

For the test with contact discharge, the electro-static discharge switch will be set on the surface of the
metal test plane and the test voltage will be switched on.

For the test with air discharge, the electro-static discharge switch generator will be adjusted to a test
voltage and the discharge electrode then will be approached fast to the surface of the equipment under
test.

conductive bonded
EUT
copper coating
470 kΩ 470 kΩ

insulating mat

470 kΩ

wooden table at an altitude of 0.8m
with horizontal coupling plate 470 kΩ

metal plane

**Fig. 4/2- 9: Electrostatic discharge**

###### 3.2.2 EN 61000-4-3 Radio frequency fields
The test procedure shall follow EN 61000-4-3. The test arrangements shall be in accordance with Fig.
4/2- 10 and Fig. 4/2- 11.

The decoupling filter and the passing filter shall be designed for the frequency range 80 MHz to 1000
MHz and 1400 MHz to 2000 MHz.

For test field strength shall be provided an unmodulated carrier signal. For testing of equipment, this
carrier signal is 80 % amplitude modulated with 1 kHz sine wave to simulate actual threats.

Because of the magnitude of the field strengths generated, the tests shall be made in an anechoic
chamber.

The transmitting antenna shall be placed at a distance sufficient to allow a calibration area of 1.5m x
1.5m to fall within the beam width of the transmitted field. If the area intended to be occupied by the
face of actual EUT is larger than 1.5m x 1.5m, then a calibration at different radiation positions will be
necessary in order that the area to be occupied by the EUT may be illuminated in a series of tests
(“partial illumination”).

©C i h 1998 2020 KNX A i i V i 1 4 AS P 12 f 31


-----

###### MEQU and EUT connections

 PF

shielded enclosure

**Fig. 4/2- 10: Measurement in the shielded enclosure**

1.0 m 1.0 m

###### EUT

0.8 m

###### DF DF

insulated area
(e.g. wooden table)

**Fig. 4/2- 11: Side view**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 13 f 31


-----

###### 3.2.3 EN 61000-4-4 Fast transients / bursts
The general test set-ups and the test procedure shall follow EN 61000-4-4. The test arrangements shall
be in accordance with Fig. 4/2- 12 and Fig. 4/2- 13.

If there is a metallic mounting plate at the equipment under test, the test shall be done both with the
mounting plate not connected and connected to earth by a HF connection (low inductance).

The equipment under test shall be set in operation with the communication unit(s).

The connection of the test equipment ground cables to the ground reference plane and all bondings
shall provide minimum inductance.

The connection of the capacitive coupling clamp to the metal plane / earth shall have a 50 Ω
impedance with minimum lead connection. This resistance avoids reflections, which can cause false
test strength.

CC

###### C EUT D

AC
230 V
50 Hz **G**

50 Ω

metal plane

**Fig. 4/2- 12: Fast transients**

CC

###### C EUT D

AC
230 V
50 Hz

50 Ω **G**

metal plane

**Fig. 4/2- 13: Fast transients**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 14 f 31


-----

###### 3.2.4 EN 61000-4-5 Transients / surge
The general test setups and the test procedure shall follow EN 61000-4-5. The test arrangements shall
be in accordance with Fig. 4/2- 14.

The equipment under test shall be mounted in a similar way as it is done in the field. If the equipment
under test has a metallic mounting plate this plate shall be connected to earth.

The surges have to be applied line to line and line(s) and earth. When testing line to earth the test
voltage has to be applied successively between each of the lines and earth, if there is no other
specification.

max. cable length 2m

###### C EUT insulated plane

AC
(e.g. wooden table)
230 V
50 Hz **G**

**Fig. 4/2- 14: Transients**

###### 3.2.5 EN 61000-4-6 Radio frequency common mode voltage on signal cables
The test procedure shall follow EN 61000-4-6. The test arrangement shall be in accordance with Fig.
4/2- 15.

The test object is placed on a 0.1 m thick support of isolating material, placed on a metal ground plane.
A 150 Ω common mode coupling-decoupling network (CDN) is used as coupling network. The total
generator impedance is 150 Ω. The CDN includes a filter, which isolates the auxiliary equipment from
radio frequency voltage.

The test set-up is calibrated to the open terminal voltage (without modulation) corresponding to the
specified test voltage.

A sweep is performed in the frequency range of 0.15 MHz to 80 MHz. The generator is amplitude
modulation modulated, 1 kHz modulation frequency, 80 % modulation depth.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 15 f 31

|max. cable length 2m<br>C EUT<br>AC<br>230 V<br>50 Hz G|insulated plane<br>(e.g. wooden table)|
|---|---|


-----

**Fig. 4/2- 15: Test arrangement for EN 61000-4-6**

###### 3.2.6 EN 61000-4-11 Voltage dips and short interruptions
The general test requirements and the test procedure shall follow EN 61000-4-11. The test
arrangement shall be in accordance with Fig. 4/2- 16.

The test shall be done with a minimum configuration from the power supply point of view.

U

###### EUT D

AC
230 V
50 Hz

test instrumentation using
a variable transformer

**Fig. 4/2- 16: Test arrangement for voltage dips and variations**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 16 f 31


-----

###### 3.3 Test set up for twisted pair

 3.3.1 Introduction
All tests shall be done with a minimum HBACS configuration. A minimum HBACS configuration is a
set of devices, which makes it possible to test the proper function of an equipment under test (EUT).
The EUT shall be stimulated at least every second respectively there shall be a bus transmission every
second in order to verify performance criterion A condition.

The attenuation of the signals shall be specified in the test report.

The filters for test signals are optional but they should be used in order to make the test independent of
possible influences/malfunction of the Communication units caused by the test signals. The
implementations of these filters are test dependent. If filters are used they shall be specified in the test
report.

The impedance Z (R=50 ohms, C=0,47 microFarad) shall be connected to each wire of a cable or of a
set of wires (e.g. all wires of a bus cable connected to the EUT, all wires of the UI) at the location as
shown in the test arrangements. In case that the I/Os are Mains or PELV connections, Z shall be
replaced by a direct connection to earth.

NOTE: Z is a load to have a defined impedance to ground.

In the test arrangements of this part dotted lines are drawn from the EUT to the ground plane/earth.
This means, that the maximum capacity or distance of the EUT to the ground plane/earth shall be
specified and that in cases where the EUT has an accessible metal surface or shielding, the test shall be
done with and without connecting this metal surface or shielding to earth.

###### 3.3.2 EN 61000-4-2 Electrostatic Discharge (ESD)
The test procedure shall follow EN 61000-4-2.

The EUT must be active in connection with the CU, and if applicable, with auxiliary device D. The
test set-up is isolated from and located at 10 cm above an earthed metal plane (reference ground).

1. contact discharge on perpendicular metal test plane

The discharge tip shall be contacted in the centre of the test plane. The discharge voltage will be
switched on.

2.a air discharge (only for devices with a non-conductive surface, which can be touched in normal
use)

The ESD generator shall be adjusted to its relevant discharge voltage. The air discharge tip shall be
conducted along the touchable surface of the EUT.

2.b contact discharge (only for devices with earthed conductive surface that can be touched in normal
use)

The discharge tip shall be contacted to earthed conductive surfaces of the EUT. The discharge voltage
shall be switched on.

The encircled 1 in the drawing refers to item 1, where the encircled 2 refers to item 2a and 2b above.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 17 f 31


-----

|F|T/R|
|---|---|


metal plane

**Fig. 4/2- 17: Test at the Enclosure**

###### 3.3.3 EN 61000-4-3 RF Fields
The test procedure shall follow EN 61000-4-3.

The antenna is located at the marked position (Fig. 4/2- 18). The measurement shall be carried out
with various EUT positions (for more details, see EN 61000-4-3).

###### PF

**AT** distance

HF between AT

###### MEQU and EUT connections

 PF

shielded enclosure

**Fig. 4/2- 18: Measurement in the shielded enclosure**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 18 f 31


-----

1.0 m 1.0 m

###### EUT

0.8 m

###### DF DF

insulated area
(e.g. wooden table)

**Fig. 4/2- 19: Side view**

###### 3.3.4 EN 61000-4-4 Fast Transients (Bursts)

The test procedure shall follow EN 61000-4-4.

If there is a metallic mounting plate (DIN rail), the test must be carried out with an insulated rail 10
cm above the reference ground plane and with the mounting plane directly contacted to the reference
ground.

The dotted line between the EUT and the metal plane respectively an asterisk in the underneath figures
signifies: ‘Optional – use depends on type of EUT’.

The optional CC can be replaced by a device causing the same RF load.

F T / R bus cable

total length 2m

U

C C

EUT
A F T / R

AC 230 V ~

C

50 Hz

U N+ S

G 50 ohms

metal plane

**Fig. 4/2- 20: Test at the mains connection of the power supply**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 19 f 31

|F|T / R|
|---|---|

|F|T / R|
|---|---|


-----

|F|T/R|
|---|---|

|F|T/R|
|---|---|


metal plane

**Fig. 4/2- 21: Test at the bus connection of the power supply**

CU

F T/R

max
distance
1 m

F

##### = EUT U C

N+S

G

50 ohms

m e t al pl a n e

**Fig. 4/2- 22: Test at the mains connection of bus devices**

CU

F T/R

F

EUT

G 50 ohms

metal plane

**Fig. 4/2- 23: Test at the bus connection of bus devices**

|F|T/R|
|---|---|

|PSU|Col2|
|---|---|
|=<br>~|F|
|=<br>~||

|CU|Col2|
|---|---|
|F<br>T/R|F<br>T/R|
|F|T/R|

|PSU|Col2|
|---|---|
|=<br>~|F|
|=<br>~||


optional


©C i h 1998 2020 KNX A i i V i 1 4 AS P 20 f 31


-----

|F|T/R|
|---|---|

|~<br>=|Col2|
|---|---|

|F|Col2|
|---|---|


m etal plane optional

**Fig. 4/2- 24: Test at the process connection of bus devices**

The auxiliary device D and the coupling clamp CC shall be connected to the EUT if necessary to test
other interfaces. Device D can contain other interfaces e.g. a power supply. Examples for such EUT's
are RS232 interfaces, binary inputs, binary outputs, etc.

###### 3.3.5 EN 61000-4-5 Transients (Surge)
The test procedure and the test set-up shall follow EN 61000-4-5.

All tests will be carried out with combination wave (hybrid) generator (1.2/50 µs).

The EUT is mounted as in practical use. Existing metal mounting plates have to be grounded to the
reference ground (generator ground connector).

Test at the mains connection of the power supply:

max
cable
length
1 m

EUT U

AC 230 V~ C bus cable
50 Hz UN+S

G Z

insulated plane (e.g. wooden table)

**Fig. 4/2- 25: Test at the mains connection of the power supply**

During the common mode test, the test voltage shall be applied in between each mains wire and earth
separately in accordance with EN 61000-4-5, Fig. 7.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 21 f 31


-----

During the differential mode test, the test voltage shall be applied in between the mains wires in
accordance with EN 61000-4-5, Fig. 6.

The output voltage shall be measured with a differential probe providing sufficient common mode
rejection or two high voltage probes measuring to ground and a differential indication.

The resulting output voltage on the bus side may not exceed 45 V.

Test at the bus connection of the power supply:

RL

###### Busvoltage
 Choke (TP1)
 V

Bus Cable

C
EUT

AC

230 V~

G

50 Hz

**Fig. 4/2- 26: Test at the bus connection of the power supply**

During the common mode test, the test voltage shall be applied in between the bus wires and earth in
accordance with EN 61000-4-5 Fig. 12 - switch position 0.

At the differential mode test, the test voltage shall be applied in between the bus wires in accordance
with EN 61000-4-5, Fig. 10 with decoupling network as used in Fig. 12.

Test at the mains connection and process connections of bus devices:

CU

F T/R

max

###### PSU cable length

1 m

###### ~
 F
 = EUT C

AC UN+S AC

230 V~ 230V~

bus cable G

50 Hz 50 Hz

Z

insulated plane (e.g. wooden table)

**Fig. 4/2- 27: Test at the mains connection and process connections of bus devices**

The auxiliary device D or auxiliary power supply shall be connected to the EUT if necessary.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 22 f 31

|F|T / R|
|---|---|

|~<br>=|F|
|---|---|


-----

During the common mode test, the test voltage shall be applied in between each wire and earth
separately in accordance with EN 61000-4-5.

During the differential mode test, the test voltage shall be applied in between the wires in accordance
with EN 61000-4-5.

Test at the bus connection of bus devices:

CU

F T/R max

cable

###### PSU length
 ~ 1 m = EUT

AC C

230 V~
50 Hz bus cable G

###### Z

insulated plane (e.g. wooden table)

**Fig. 4/2- 28: Test at the bus connection of bus devices**

The auxiliary device D together with the impedance Z and a power supply shall be connected to the
EUT, if necessary.

During the common mode test, the test voltage shall be applied in between the bus wires and earth in
accordance with EN 61000-4-5 figure 12 - switch position 0.

###### 3.3.6 EN 61000-4-6 Radio Frequency Voltage
The test procedure shall follow EN 61000-4-6

All tests shall be carried out with a RF generator as specified in EN 61000-4-6.

The EUT shall be mounted as in practical use. Existing metal mounting plates shall be grounded to the
reference ground (metal plane).

The test set-up shall be isolated from and located at 10 cm above an earthed metal plane (reference
ground ).

Test at the mains connection of the power supply:

©C i h 1998 2020 KNX A i i V i 1 4 AS P 23 f 31

|Col1|T / R|
|---|---|
|F|F|


-----

|F|T/R|
|---|---|

|F|T/R|
|---|---|


Metal Plane

**Fig. 4/2- 29: Test at the mains connection of the power supply**

Test at the bus connection of the power supply:

CU
PS

AC 230V
50Hz CDN-M3 netw. EUT CDN-T2 netw. F T/R

CU

RF

50 ohms

generator F T/R

Metal Plane

**Fig. 4/2- 30: Test at the bus connection of the power supply**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 24 f 31

|PS CU<br>AC 230V CDN-M3 netw. EUT CDN-T2 netw. F T/R<br>50Hz<br>CU<br>RF F T/R<br>50 ohms<br>generator|Col2|
|---|---|
|Metal Plane||

|F|T/R|
|---|---|

|CU|Col2|
|---|---|
|||
|F|T/R|
|||

|CU<br>PS<br>AC 230V<br>CDN-M3 netw. EUT CDN-T2 netw. F T/R<br>50Hz<br>CU<br>RF<br>50 ohms<br>generator F T/R|Col2|
|---|---|
|Metal Plane||


-----

Test at the bus connection of bus devices:

###### CU

 F T/R

 PS

AC 230V50Hz ~ F CDN-T2 netw. EUT D

###### =

 RF generator

Metal Plane

**Fig. 4/2- 31: Test at the bus connection of bus devices**

Test at the mains connection of bus devices:

CU

F T/R D

PS

AC 230V50Hz ~ F CDN-T2 netw. EUT CDN-M3 netw.

**=** AC 230V

50Hz

RF

50 ohms generator

Metal Plane

**Fig. 4/2- 32: Test at the mains connection of bus devices**

©C i h 1998 2020 KNX A i i V i 1 4 AS P 25 f 31

|F|T/R|
|---|---|

|~<br>=|F|
|---|---|

|CU<br>F T/R<br>PS<br>AC 230V ~ F CDN-T2 netw. EUT D<br>50Hz<br>=<br>RF<br>generator|Col2|
|---|---|
|||

|F|T/R|
|---|---|

|~<br>=|F|
|---|---|


-----

Test at the process connection of bus devices:

CU

F T/R

PS

AC 230V **~** F CDN-T2 netw. EUT CDN or EM-clamp F D

50Hz **=**

RF

50 ohms generator

Metal Plane

**Fig. 4/2- 33: Test at the process connection of bus devices**

###### 3.3.7 EN 61000-4-8 Power Frequency Magnetic Field
Applicable only to devices containing components susceptible to magnetic fields, e.g. Hall elements,
electro-dynamic microphones, etc.

The test procedure shall follow EN 61000-4-8.

###### 3.3.8 EN 61000-4-11 Voltage Dips / Voltage Interruption
The test procedure shall follow EN 61000-4-11.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 26 f 31

|F|T/R|
|---|---|

|~<br>=|F|
|---|---|

|F|D|
|---|---|


-----

###### 4 Test set up for emission

 4.1 Test set up for powerline
The tests shall be carried out in accordance with EN 50065-x.

All tests shall be carried out with a minimum configuration enabling testing the emission of a single
EUT.

The EUT has to be stimulated at least every second - respectively a bus transmission shall be carried
out every second.

EUT's with two bus connections shall be active on both paths (e.g. line coupler, gateways, media
coupler).

###### 4.1.1 Radio Emission Interference Voltage on Connections and Process Connections
The EUT has passed the test if the limits of applicable EN 50065-x are not exceeded. The limits apply
to frequencies outside the band in which the PL-System operates.

For devices with an output (relays or dimmer) the relevant requirements of the product standard shall
be taken into account.

wooden table

ground plane (> 2 X 2 m) R

40 cm
80 cm

AC AN EUT
230V,
50 Hz

MEQU

**Fig. 4/2- 34: Test Set-up for Radio Emission Interference Voltage**

1. Test: The EUT is loaded with a software creating no data output.

2. Test: The EUT is loaded with a software creating a continuous data stream with the used
frequencies for “0” and “1” signal.

###### 4.1.2 Radio Frequency Interference Field Strength

The test shall be carried out in accordance with EN 50065-x and relevant product standards.

The EUT has passed the test if the limits of relevant EN 50065-x are not exceeded.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 27 f 31


-----

###### 4.2 Test set up for radio frequency

 4.2.1 Electromagnetic Interference (EMI): Noise-field intensity
The test procedure shall follow ETSI EN 301 489-1. The Fig. 4/2- 35 and Fig. 4/2- 36 describe
examples of test arrangements. An attempt shall be made to maximize the emission consistent with the
typical applications by varying the configuration of the test sample.

The measurements shall be arranged by a receiver with quasi-peak-value-detector in a frequency range
of 30 MHz to 1000 MHz.

###### PF

 AT distance

between AT

###### MEQU and EUT connections

 PF

shielded enclosure

**Fig. 4/2- 35: Example of a test arrangement in the shielded enclosure**

###### EUT

0.8 m

###### DF DF

insulated area

earth potential area

(e.g. wooden table)

**Fig. 4/2- 36: Side view**

###### 4.2.2 Electromagnetic Interference (EMI): Interference voltage
The test procedure shall follow ETSI EN 301 489-1. The test arrangements are described in Fig. 7-3-3.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 28 f 31

|DF|DF|
|---|---|


-----

The interference voltage measurements may be carried out in a shielded room, too. In this case the
shielded room wall is used like a ground plane.

The measurements shall be arranged in a frequency range of 0.15 MHz to 30 MHz.

metal plane (> 2m x 2m)

0.4m

0.8m 0.8m

###### VN EUT VN

AC
230 V
50 Hz

###### D

wooden table at
an altitude of 0.8 m

###### MEQU

**Fig. 4/2- 37: Test arrangement of interference voltage**

###### 4.3 Test set up for twisted pair

 4.3.1 General
Test procedure shall follow EN 55032. Tests have to be performed according to the method defined in
EN 55032. Examples of test arrangements are described in figure 22 to 26. An attempt shall be made
to maximize the emission consistent with the typical applications by varying the configuration of the
test sample.

###### 4.3.2 Radio Emission Interference Voltage on Power Supply Connections and Process Connections
Test procedure shall follow EN 55032.

The asterisk * in the underneath figures signifies: ‘optional – use depends on type of EUT’.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 29 f 31

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|||||


-----

Test set-up for radio emission interference voltage:

CU

40 cm F T/R 40 cm 40 cm

0,8 m 0,8 m 0,8 m

PSU 2) *)

TN

1)
VN ~ EUT VN D

Bus cable TN

AC =

230 V~
50 Hz

3)
3)

wooden table
height 80 cm

MEQU

**Fig. 4/2- 38: Test set-up for radio emission interference voltage**

3) Test Points

1) or 2) are alternatively used:

1) On bus, only the asymmetric radio frequency voltage has to be measured.

2) On bus, the asymmetric radio frequency voltage of the entire minimum configuration has to
be measured.

Artificial network used as line termination has to be terminated with 50 Ω at the measurement output.

The CU is shown in Fig. 4/2- 38 for the execution of a bus device test. When testing a power supply
device, the CU shall be mounted beside the bus device.

The device D in combination with the V-network VN is needed for process connections. Instead of D,
a power supply can be connected if necessary.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 30 f 31

|F|T/R|
|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
||||||||||

|PSU|Col2|
|---|---|
|=<br>~||
|=<br>~||


-----

Test Set-up for common mode noise current test:

CU

40 cm F T/R 40 cm 40 cm

10 cm

PSU *)

VN ~ = E U T VN D

wooden table
height 80 cm

MEQU

**Fig. 4/2- 39: Test Set-up for common mode noise current test**

An artificial network used as line termination shall be terminated with 50 Ω at the measurement
output.

###### 4.3.3 Radio Frequency Interference Field Strength
The test is carried out in accordance with EN 55032 and relevant product standard.

©C i h 1998 2020 KNX A i i V i 1 4 AS P 31 f 31

|F|T/R|
|---|---|

|~<br>=|Col2|
|---|---|

|Col1|Col2|Col3|
|---|---|---|
|||E U T|

|Col1|Col2|
|---|---|
|||
|=<br>~<br>F<br>E U T<br>T/R<br>CU<br>D<br>*)<br>40 cm<br>VN<br>VN<br>40 cm<br>40 cm<br>10 cm<br>MEQU<br>wooden table<br>height 80 cm<br>PSU|=<br>~<br>F<br>E U T<br>T/R<br>CU<br>D<br>*)<br>40 cm<br>VN<br>VN<br>40 cm<br>40 cm<br>10 cm<br>MEQU<br>wooden table<br>height 80 cm<br>PSU|


-----

