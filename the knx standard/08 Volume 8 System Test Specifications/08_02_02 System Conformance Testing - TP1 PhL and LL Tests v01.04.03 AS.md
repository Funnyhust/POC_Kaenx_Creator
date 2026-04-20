## System Conformance Testing

###### Medium Dependant Layers Tests

 TP1 Physical and Link Layer Tests

Summary

This document contains the Physical and Link Layer tests for TP1 KNX.

Version 01.04.03 is a KNX Approved Standard.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.03.13 [- ] Approved Standard

1.1 2005.02.24 [- ] Approved Standard – integration of AN003 clause 1.2, AN023, clause 2 of
AN041

1.2 2009.06 - Readying document for KNX specifications V 2.0 – integration of AN084 –
integration of clause 2.2.2 and 2.2.3 of AN111

1.3 RfV 2009.10 - Clarification test performance Pulse Impedance and Transmitter tests –
updating of incorrect references

1.3 FV 2010.03 - Resolving comments from RfV cycle

1.3 AS 2010.08 - No comments in FV cycle

1.4 AS 2013.09 - **Integration of AN129 and AN156**

01.04.01 AS 2013.10.23 [- ] Editorial updates for the publication of KNX Specifications 2.1.

01.04.02 AS 2013.12.11 [- ] Correction of “Pulse Input Current” figure.

                     - Editorial changes.

01.04.03 AS 2022-04 - Integration of relevant parts of AN187

###### References

[01] Chapter 3/3/1 “Physical Layer General”

[02] Chapter 3/3/2 “Data Link Layer General”

[03] Part 4/1 “Safety and Environmental Requirements – General”

[04] Chapter 8/6/3 “Testing of EMI-IMI (Local Service Testing)”

Filename: 08_02_02 System Conformance Testing - TP1 PhL and LL Tests v01.04.03 AS
Version: 01.04.03
Status: Approved Standard
Savedate: 2022.04.19
Number of pages: 52

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.03.13|- <br>Approved Standard|
|1.1|2005.02.24|- <br>Approved Standard – integration of AN003 clause 1.2, AN023, clause 2 of<br>AN041|
|1.2|2009.06|- <br>Readying document for KNX specifications V 2.0 – integration of AN084 –<br>integration of clause 2.2.2and 2.2.3 of AN111|
|1.3 RfV|2009.10|- <br>Clarification test performance Pulse Impedance and Transmitter tests –<br>updating of incorrect references|
|1.3 FV|2010.03|- <br>Resolving comments from RfV cycle|
|1.3 AS|2010.08|- <br>No comments in FV cycle|
|1.4 AS|2013.09|- <br>**Integration of AN129 and AN156**|
|01.04.01 AS|2013.10.23|- <br>Editorial updates for the publication of KNX Specifications 2.1.|
|01.04.02 AS|2013.12.11|- <br>Correction of “Pulse Input Current” figure.<br>- <br>Editorial changes.|
|01.04.03 AS|2022-04|- <br>Integration of relevant parts of AN187|


-----

###### Contents

 1 Foreword ................................................................................................................................. 6

 2 Abbreviations .......................................................................................................................... 6

 3 General Requirements ........................................................................................................... 7 3.1 Environment ................................................................................................................... 7 3.2 Test Equipment ............................................................................................................... 7 3.3 Important notes ............................................................................................................... 7

 4 Power Conversion .................................................................................................................. 8 4.1 General ............................................................................................................................ 8 4.2 Power Conversion (Switch On Fast) .............................................................................. 8 4.2.1 Test Preparation .................................................................................................. 8 4.2.2 Testing................................................................................................................. 8 4.2.3 Requirements ...................................................................................................... 9 4.3 Power Conversion (Switch On/Off Slow) .................................................................... 10 4.3.1 Test Preparation ................................................................................................ 10 4.3.2 Testing............................................................................................................... 10 4.3.3 Requirements .................................................................................................... 11 4.3.4 Test Preparation for hold-up ............................................................................. 11 4.3.5 Requirements for hold-up (under consideration) .............................................. 11 4.4 Power Conversion (Load Changes) .............................................................................. 12 4.4.1 Test Preparation ................................................................................................ 12 4.4.2 Testing............................................................................................................... 12 4.4.3 Requirements (TP1-64 & TP1-256).................................................................. 13 4.5 Power Conversion (RVP) ............................................................................................. 13 4.5.1 Test Preparation and Testing ............................................................................ 13 4.5.2 Requirements .................................................................................................... 13 4.6 Power Conversion (Impedance).................................................................................... 13

 5 Receiver ................................................................................................................................. 14 5.1 Pulse-Impedance ........................................................................................................... 14 5.1.1 Test Preparation ................................................................................................ 14 5.1.2 Testing............................................................................................................... 15 5.1.3 Requirements (TP1-64) ..................................................................................... 15 5.1.4 Requirements (TP1-256) ................................................................................... 16 5.2 Sensitivity ..................................................................................................................... 16 5.2.1 Test Preparation ................................................................................................ 16 5.2.2 Testing............................................................................................................... 18 5.2.3 Requirements .................................................................................................... 18 5.3 Decoding Rules ............................................................................................................. 18 5.3.1 Test Preparation ................................................................................................ 18 5.3.2 Testing & Requirements ................................................................................... 19

 6 Transmission ......................................................................................................................... 20 6.1 Transmitter Test (Normal Current) - Test 1 ................................................................. 20 6.1.1 Test Preparation ................................................................................................ 20 6.1.2 Testing............................................................................................................... 20 6.1.3 Requirements .................................................................................................... 21 6.2 Transmitter Test (Normal Current) - Test 2 ................................................................. 22 6.2.1 Test Preparation ................................................................................................ 22


-----

###### 6.2.2 Testing............................................................................................................... 22 6.2.3 Requirements .................................................................................................... 22 6.3 Transmitter Test (Maximal Current) ............................................................................ 23 6.3.1 Test Preparation ................................................................................................ 23 6.3.2 Testing............................................................................................................... 23 6.3.3 Requirements .................................................................................................... 23 6.4 Transmitter Test (Minimal Current) ............................................................................. 24 6.4.1 Test Preparation ................................................................................................ 24 6.4.2 Testing............................................................................................................... 24 6.4.3 Requirements .................................................................................................... 25 6.5 Coding Rules ................................................................................................................ 25 6.5.1 Test preparation ................................................................................................ 25 6.5.2 Testing............................................................................................................... 25 6.5.3 Requirements .................................................................................................... 26

 7 Transceiver ........................................................................................................................... 27 7.1 Propagation Delay (Transmitter) .................................................................................. 27 7.1.1 Test Preparation ................................................................................................ 28 7.1.2 Testing............................................................................................................... 28 7.1.3 Requirements .................................................................................................... 28 7.2 Propagation Delay (Receiver) ....................................................................................... 28 7.2.1 Test Preparation ................................................................................................ 29 7.2.2 Testing............................................................................................................... 29 7.2.3 Requirements .................................................................................................... 30

 8 Collision ................................................................................................................................. 31 8.1 General .......................................................................................................................... 31 8.2 Bus free detection (Delay Stepping) ............................................................................. 31 8.2.1 Test Preparation ................................................................................................ 31 8.2.2 Testing & Requirements ................................................................................... 32 8.2.3 Collision of Acknowledge Frame ..................................................................... 32 8.3 Collision (Remote Test) ................................................................................................ 32 8.3.1 Test Preparation ................................................................................................ 33 8.3.2 Testing............................................................................................................... 33 8.3.3 Requirements .................................................................................................... 33 8.4 Collision (System Test) ................................................................................................ 34 8.4.1 Test Preparation ................................................................................................ 34 8.4.2 Testing............................................................................................................... 34 8.4.3 Requirements .................................................................................................... 34

 9 Certification of high impedance power converter ............................................................. 35 9.1 General .......................................................................................................................... 35

 10 Link Layer Tests .................................................................................................................. 37
 10.1 Physical Part of Link Layer .......................................................................................... 38
 10.1.1 Data block ......................................................................................................... 38 10.1.2 Data packet frame and priorities ....................................................................... 39 10.2 Data part of Link Layer ................................................................................................ 43
 10.2.1 Control field ...................................................................................................... 43 10.2.2 Source address .................................................................................................. 44 10.2.3 Destination Address .......................................................................................... 44 10.2.4 Information length ............................................................................................ 46


-----

###### 10.2.5 Check Octet ....................................................................................................... 46 10.2.6 Confirmation Field ............................................................................................ 47 10.2.7 Polling Frames: BDUT is Master ..................................................................... 48 10.2.8 Polling Frames: BDUT is Slave ........................................................................ 48 10.3 Busmonitor Mode of the Link Layer ............................................................................ 49

 11 Bus Load tests ....................................................................................................................... 50
 11.1.1 Requirements for end devices ........................................................................... 50 11.1.2 Requirements on Couplers ................................................................................ 51

 12 Applicable tests for devices with integrated certified system components ..................... 52


-----

###### 1 Foreword
The test methods are based on the assumption that the devices are black boxes and cannot be accessed
internally. However for testing of the collision detection an internal auxiliary test signal is required.

When a device successfully passes the underneath TP1-256 tests, it may also be mounted in TP1-64
installations.

###### 2 Abbreviations

AC Alternating Current

BAU Bus Access Unit (=integrated Bus device)

BCD Bus Connected Device

BCU Bus coupling unit

BDUT Bus Device under test ;

BW Bandwidth

Choke KNX standardised TP 1 Choke module

CP Current Probe

DC Direct Current

DSO Digital Storage Oscilloscope

EED KNX End Device (e.g. BCU, BAU, Router)

HB KNX Handbook Series

PB Push Button

PEI Physical External Interface

PSU Power Supply Unit; DC-Source (do not confuse with standardised KNX TP1-PSU)

RVP Reverse Voltage Protection


-----

###### 3 General Requirements

 3.1 Environment

- Testing shall be conducted in an environment that does not influence the test results.

- Only calibrated test equipment shall be used.

- Test Set-ups shall be as small as possible (if not specified otherwise) to avoid voltage drops along the
wires and parasitic inductions.

- The ambient temperature shall be taken into account for testing. The operating range of the tested
devices, as specified by the manufacturer in the supplied instruction sheets, shall be also taken into
account.

###### 3.2 Test Equipment

- PSU: Adjustable DC-Source ; 0-40 V; I 1 A limited; UPSU (Ripple) < 10 mV

- Choke: Standard KNX-TP1 Choke-Module

- CP: Current Probe (DC-20 MHz)

- DSO: Digital Oscilloscope (BW min. 20 MHz) which is used for Voltage-Ripple and Current-Slope
measurements

- Waveform Generator: programmable

- Function Generator: Standard; Ri < 50 Ω

- Amplifier: used to amplify the signals of waveform generator to bus level

- EITT: PC with KNX Interworking Test tool (for more information see manual) and RS232 Module

- Delay-Unit: Unit to delay digital signals

- Shunt Resistors

###### 3.3 Important notes

- The underneath requirements are given for implementations with a fan-in model of up to 10 mA (see
2.5.4.1 of [03]).
For higher fan-in models, the requirements (not the timing requirements!) of clause 4.2, 4.3 and 4.4
may be increased accordingly. In the same way, the limit and the capacitance value as given in clause
4.3.1 can be multiplied by the same factor and the resistance value may be divided by the same factor.
For instance, in case of a fan in model of up to 20 mA (so twice the 10 mA fan-in model), the
requirements may be doubled, the limit and the capacitance value doubled and the resistance value as
given in clause 4.3.1 halved.

- When this volume requires the measurement of slopes (e.g. in the case of transmitter tests), the
steepest slope shall be measured to check compliance to the requirements.


-----

###### 4 Power Conversion

 4.1 General
A power converter is either part of a KNX-Device or a standalone unit. The main task of a powerconverter is to separate the DC-Part from the bus and to convert it to a lower stabilised voltage.

A power converter may not disturb the signal voltage at the bus in any way. Fast load changes at the
output of the converter shall be transformed (smoothened) to slow slopes at the input of the converter:

**bus**

Input Power Output

Converter

**Figure 1 - Principle of a Power Converter**

###### 4.2 Power Conversion (Switch On Fast)
This test simulates the connecting of a single bus device (EED) to an operating bus segment.

###### 4.2.1 Test Preparation


PB1 R Cable


IIN

|PSU|PB1 RCable IIN<br>+D CP<br>+<br>CH1 CH2<br>UPSU UIN<br>1M<br>DSO|BDUT|
|---|---|---|
|PSU|-C<br>-|-C<br>-|


**Figure 2 - Test Set-up for Switch On/Off Behaviour**

PB1 is a debounced push button: to reduce the risk of side effects e.g. a FET shall be selected instead of a
mechanical switch, of the maximum resistance shall be 100 mΩ.

The 1 MΩ resistor is intended to discharge the capacitors inside of BDUT before testing. The influence of
this resistor to the measuring is negligible. RCable represents the ohmic part of the TP1-Cable.

###### 4.2.2 Testing
UPSU shall be tuned to both 20 V and 30 V. the push button shall be pressed and held. Testing shall be
conducted at RCable =35 Ω and 0 Ω.


-----

## U I
UI N (busvoltage)

UPSU

II N (buscurrent)

###### 0

`start-up` normal operat i on

###### t ready

**Figure 3 - Example of Switch On Graphs**


###### t i me

|I U|Col2|Col3|
|---|---|---|
|t i<br><br><br>UI N` (busvoltage)`<br>II N` (buscurrent)`|t i<br><br><br>UI N` (busvoltage)`<br>II N` (buscurrent)`|t i<br><br><br>UI N` (busvoltage)`<br>II N` (buscurrent)`|
||`start-up`|normal  operat i on|
||||


###### 4.2.3 Requirements
The BDUT shall run up properly (no latch-up may occur). The resulting graph shall be within the grey
shaded area of Figure 3.

Spikes exceeding the current limit are permitted. Two types of acceptable spikes are distinguished

1. Spikes of t < 30 ms shall not exceed 45 mA
2. Spikes of t < 30 µs shall not exceed 500 mA.
The number of spikes during switch on shall not be higher than 5.

**Table 1 - Ratings for Switch On Behaviour of a KNX Power Converter**

**Parameter** **Start-Up** **Operation**

UPSU 20/30 V

Tstart-up [1)] ≤ 10s

IIN (TP1-64 & TP1- < 30 mA see load changes
256)

1) Tstart-up is the time required until the DUT has become operational (normally after execution of Ureset).

|Parameter|Start-Up|Operation|
|---|---|---|
|UPSU20/30 V|||
|Tstart-up1)|≤ 10s||
|IIN (TP1-64 & TP1-<br>256)|< 30 mA|see load changes|


-----

###### 4.3 Power Conversion (Switch On/Off Slow)
This test simulates the powering up of a fully equipped physical segment.

###### 4.3.1 Test Preparation


###### Ilimit


PB1


IIN

|PSU|I limit PB1 IIN<br>+D CP<br>CH1 CH2<br>UPSU<br>1K<br>4,7mF DSO|+<br>BDUT<br>UIN<br>-|
|---|---|---|
|PSU|-C|-C|


**Figure 4 - Test Set-up for Switch On/Off Behaviour**

PB1 is a debounced push button. The resistor, current limiter and capacitor are used to generate slow bus
voltages slopes [2)].


###### 4.3.2 Testing
UPSU shall be tuned to both 20 V and 30 V. The current limiter shall be tuned to 50 mA. Push button
(PB1) shall be pressed, held and released. The time of releasing the PB1 shall be later than the time at
which BDUT is in operation.

## U I
UI N (busvoltage)


###### t i me

```
start-up

```

###### normal operat i on

```
hold-up

```
|U|I U|Col3|Col4|
|---|---|---|---|
||UI N` (busvoltage)`<br>II N (buscurrent )|UI N` (busvoltage)`<br>II N (buscurrent )|UI N` (busvoltage)`<br>II N (buscurrent )|
|||||
||||t i<br>|


PB1


**Figure 5 - Example of Switch On/Off Graph**

2) The resistor and capacitor do not simulate a bus load. They can be used for testing TP1-64 as well as TP1-256
devices.


-----

###### 4.3.3 Requirements
The BDUT shall run up properly (i.e. no latch-up may occur). The resulting graph shall be within the grey
shaded area of Figure 5.

Spikes exceeding the current limit are permitted. Two types of acceptable spikes are distinguished:

1. Spikes of t < 30 ms shall not exceed 45 mA
2. Spikes of t < 30 µs shall not exceed 500 mA.
The number of spikes during switch on shall not be higher than 5.

**Table 2 - Ratings for Switch On Behaviour of a KNX Power Converter**

**Parameter** **Start-Up** **Operation** **Hold-up**

UPSU 20/30 V

Tstart-up ≤ 10s
See Table 3

IIN (TP1-64 & TP1- < 30 mA see load changes
256)

###### 4.3.4 Test Preparation for hold-up
The DUT should be loaded in that way, that the current Iin is 10 mA (FanIn=1) with Uin is 21 V.

###### 4.3.5 Requirements for hold-up (under consideration)

|Start-Up|Operation|Hold-up|
|---|---|---|
|||See Table 3|
|≤ 10s|||
|< 30 mA|see load changes|see load changes|


**Bus voltage Uin/V** **U/I-Characteristic**

35

A B

30

25

C

20

D

15

E

10

5

G F

0

0 0,005 0,01 0,015 0,02 0,02

**Bus consumption Iin/A**

**Figure 6 - U/I Characteristic**

**Table 3 - Requirements**

**Point** **Uin/V** **Iin/mA**

A 31 0

B 31 10

C 21 10

D 16 21

E 10 21

F 6 10

G 0 5

|U/I-Characteristic voltage Uin/V|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
||||||
|A <br>G||B <br>C <br>F||D <br>E|

|Point|Uin/V|Iin/mA|
|---|---|---|
|A|31|0|
|B|31|10|
|C|21|10|
|D|16|21|
|E|10|21|
|F|6|10|
|G|0|5|


-----

###### 4.4 Power Conversion (Load Changes)
Switching from minimal to maximal load and vice versa simulates the changing of load. Maximum load
is manufacturer specific and specified as the maximum load that can be connected to the PEI. The
maximum bus current of 12 mA that may be drawn by the device shall hereby not be exceeded. The bus
current IIN shall be monitored with a storage oscilloscope. A steep slope of the output current (IOUT) shall
be transferred to a flat slope of input current (IIN).


###### I

 4.4.1 Test Preparation


###### t

**Figure 7 - Output Load Changes**

IIN


###### maximal load (S=2)

 minimal load (S=1)


IOUT


CH1 CH2

###### PSU Choke BDUT

Uin

UPSU UOUT

R1 R2

DSO

###### -C 
**Figure 8 - Test Set-up for Switch on/off and static behaviour**

R1& R2: Two resistors are used for load simulation: R1 represents minimum load and R2 maximum load.
R3 = 100 Ω

S1: Is a two-way switch, which is used for evaluating load changes.

###### 4.4.2 Testing
The bus current shall be monitored while switching from max to min load and vice versa. At both
positions, the static bus current and the AC-Part of UIN shall be measured.

|PSU|+D|Choke|IIN<br>CP +<br>R3<br>CH1 CH2<br>Uin<br>DSO|BDUT|IOUT<br>S1 2<br>1<br>UOUT<br>R1|
|---|---|---|---|---|---|
|PSU|UPSU|UPSU|UPSU|UPSU|UPSU|
|PSU|-C|-C|-|-|-|


-----

###### 4.4.3 Requirements (TP1-64 & TP1-256)

**Table 4 - Ratings for Load Change Behaviour of a KNX Power Converter**

**Parameter** **Values**

DC input current (any load) [3)] TP1-64: max. 12 mA for UIN= 20-30 V
TP1-256: max. 12 mA for UIN= 20-30 V

slope of input current max. 0.5 mA/1 ms

slope of input current for manually max. 2.5 mA/1 ms
operated devices (e.g. push
buttons)

###### 4.5 Power Conversion (RVP)
Transceivers that do not support free connection of bus polarity for normal operation shall provide a
protection unit (RVP) for reverse polarity connection.

In case of reverse connection of a bus device, this device may neither have a negative influence to the
bus, nor shall it be damaged, no matter how long this reverse connection lasts.

During reverse connection the BCU current shall be lower than or equal to the current for normal
connection.

###### 4.5.1 Test Preparation and Testing
See 4.2 - Power Conversion (Switch On Fast).

The polarity of the BDUT shall be exchanged.

###### 4.5.2 Requirements
Values shall be lower or equal to “Switch On” limits.

###### 4.6 Power Conversion (Impedance)
See 5.1 - Pulse-Impedance.

3) Currents that are higher than the specified one, are permitted under the condition, that a factor is provided. For
details see the PhL-Specification in [01], under “Non-standardised EEDs”.

|Parameter|Values|
|---|---|
|DC input current (any load)3)|TP1-64: max. 12 mA for UIN= 20-30 V<br>TP1-256: max. 12 mA for UIN= 20-30 V|
|slope of input current|max. 0.5 mA/1 ms|
|slope of input current for manually<br>operated devices (e.g. push<br>buttons)|max. 2.5 mA/1 ms|


-----

###### 5 Receiver
A receiver can be part of an integrated bus device or can be a standalone device. The task of a receiver is
to convert the analogue coded signal from the bus into a digital signal. The value of the impedance is not
constant; it depends on the shape of the bus voltage. A special test method is provided to check the input
impedance of a KNX device. Impedance matching is important to ensure that both signal damping is not
too high and following bits are not distorted by equalisation procedure of preceding bits.

###### 5.1 Pulse-Impedance

 5.1.1 Test Preparation
The combination of waveform generator and PSU shall provide the following signal at BDUT (UIN)

##### U t1

###### T

##### UP1 UIN

###### UDev(max)

##### UPSU UDev


###### 0
t=0


## t

|U|Col2|Col3|t1<br>T<br>U<br>IN<br>U<br>U<br>Dev|Col5|
|---|---|---|---|---|
|P1|||||
|P1|||||


**Figure 9 - Pulse Test voltage**

I P

###### + isolated

amplifier

###### PSU Ushunt 2,2 nF Rshunt 1K 1%

UPSU

###### DSO

UIn

###### - BDUT

UDev

**function**
**generator**

**Figure 10 - Test-Set up for Pulse-Impedance**

The BDUT shall be configured in such a way, that the maximum load current is consumed permanently.
This state can also be evaluated by connecting a load resistor in parallel to the internal power source of
the bus device. The value of UPSU shall be tuned to set the maximum level of UDev to about 25 V. Only
one test voltage of UPSU is designated to simplify this test.

|BD|UT|
|---|---|


-----

###### 5.1.2 Testing
The expected waveform of UShunt is shown below. The diagram indicates the course of the current. The
current is UShunt / RShunt

A1 [0 - t1] and A2 [t1 - T] are the areas which are comprised by the curve.

###### A2
 Ia

 IEND

 Ia2 Ia1 A1

 0 t1 t3 t2 T t

**Figure 11 - Pulse Input Current**

NOTE 1 In the case where an overshoot is established in the equalisation phase, i.e. on time t1, the area of A2 above the 0
reference shall be subtracted from the value of A2 below the reference to come to the final value of A2.

**Table 5 - Test Conditions for Pulse Impedance**

**Parameter** **Value**

UPSU shall be tuned until UDEV(max) = 25 V

UP1 shall be tuned until UP2 = 6 V

f t1=35 µs, t2=104 µs; T=300 µs, t3 = 45 µs

###### 5.1.3 Requirements (TP1-64)

**Table 6 - Impedance limits for TP1- 64**

|Parameter|Value|
|---|---|
|UPSU|shall be tuned until UDEV(max) = 25 V|
|UP1|shall be tuned until UP2 = 6 V|
|f|t1=35 µs, t2=104 µs; T=300 µs, t3 = 45 µs|

|Parameter|min|typ|max|
|---|---|---|---|
|A1 / A2|0.7|1.5|3|
|Ia1 [mA]|3|4|4,5|
|Ia2 [mA]|3,5|5|5,5|
|IEND / Ia2|0|0,2|0,28|


###### A1


###### IEND


###### Ia


###### 0


-----

###### 5.1.4 Requirements (TP1-256)

**Table 7 - Impedance limits for TP1-256**

**min** **typ** **max**

A1/A2 1,1 2 4

Ia1 [mA] 0,3 1,4 1,9

Ia2 [mA] 0,32 1,4 2

IEND / Ia2 0 0,05 0,18

###### 5.2 Sensitivity
This test is used to check the thresholds and the sensitivity of the receiver. The receiver shall be able to
detect both strong and weak analogue data signals.

Because of the fact, that the output signal of a receiver cannot be accessed within a bus device, an
indication element shall be provided at the bus device. The purpose of an indication element is to signal
whether the bus device has received a certain telegram or not. An indication element can be a port of the
PEI, an LED, an ACK telegram, or any other element that can be used for human or electrical checking.

I[IN]

+

###### BDUT

Waveform **Power** CH1 CH2 Indication
Generator **Amplifier** U[IN] **(Receiver)** Element

DSO

                                           
**Figure 12 - Test Set-up for Receiver**

###### 5.2.1 Test Preparation
The waveform generator shall deliver a telegram signal that is similar to that of normal bus devices
transmitting a KNX DPT 1.001 ON command. The following coding shall be observed:

BC 10 01 10 01 E1 00 81 4)

Control Individual Address Group Address NPCI TPCI APCI Parity

**Figure 13 -‘DPT 1.001 coding’**

See also paragraph 6.5 - Coding Rules.

The combination of waveform generator and amplifier shall provide the test signal at the BDUT (UIN).
For shape and timing of a logical ‘0’ the following adjustment shall be carried out.

4) Calculation of Parity Byte see [01].

|Col1|min|typ|max|
|---|---|---|---|
|A1/A2|1,1|2|4|
|Ia1 [mA]|0,3|1,4|1,9|
|Ia2 [mA]|0,32|1,4|2|
|IEND / Ia2|0|0,05|0,18|

|Waveform<br>Generator|IIN<br>+<br>Power CH1 CH2<br>Amplifier UIN<br>DSO<br>-|BDUT<br>(Receiver)|Col4|
|---|---|---|---|

|BC|10|01|10|01|E1|00|81|4)|
|---|---|---|---|---|---|---|---|---|
||||||||||


-----

Bits

Test
Signal

#### Ua1


###### 0 0 1 0 0

## U

# Ue

### Ua2

###### PSU

active equalisation

###### t1
 T

t=0

**Figure 14 - UIN Pulse Test Voltage**

**Table 8 - Pulse Test Voltage**


###### t

|active|equalisation|
|---|---|
|||

|“0” Coding|Col2|
|---|---|
|UPSU|20 V / 30 V(see testing)|
|Ua1 & Ua2|see requirements , Ue = Ua1|
|f|t1=35 µs; T=104 µs|
|U [0] (active)|UPSU - Ua1|
|U [t1] (active)|UPSU - Ua2|
|U [t1-T] (equalisation)|UPSU + Ue* e-((t-t1)/15µs))|
|<br>rising and falling slopes|<br>1 ≤ V/µs≤ 60|


-----

|“1” Coding|Col2|
|---|---|
|U [0 - T]|UPSU|


###### 5.2.2 Testing
Testing shall be conducted in several steps. Each test step shall be conducted with 20 V and 30 V. The
signal test voltages and the limits for the thresholds are defined in Table 9. Always the same telegram
with different voltages shall be sent while observing the BDUT. The analysis of the indication element
determines whether a telegram was understood by the BDUT or not.

###### 5.2.3 Requirements

**Table 9 - Requirements for Receiver Sensitivity**

**step** **Ua1 [V]** **Ua2 [V]** **Receiving**

1 9 9 Yes

2 0,7 0,5 Yes

3 0,2 0,2 No

###### 5.3 Decoding Rules
This test is carried out to check the function of the receiver and the decoding software. It shall be tested
whether a bus device is able to interpret the bus-signals with their associated distortions correctly.

Owing to the fact, that the output signal of a receiver cannot be accessed within a bus device, an
indication element shall be provided at the bus device. The purpose of an indication element is to signal
whether the bus device has received a certain telegram or not. An indication element can be a port of the
PEI, or an LED or any other element that can be used for human or electrical checking.

Use Figure 12: Test Set-up for Receiver.

###### 5.3.1 Test Preparation
The waveform-generator shall deliver a telegram signal that is similar to that of normal bus devices
transmitting a KNX DPT1.001 On/Off command. The following coding shall be observed:

BC 10 01 10 01 E1 00 81

Control Individual Address Group Address NPCI TPCI APCI+D Parity

**Figure 15 - DPT 1.001 Telegram**

See also paragraph 6.5 - Coding Rules.

The combination of waveform generator and amplifier shall provide the bus-signal at BDUT (UIN). For
details see Figure 14 and step1 of Table 9. The bus-signal shall be modified concerning timing. The
Figure below shows the timing definition within a telegram.

|step|Ua1 [V]|Ua2 [V]|Receiving|
|---|---|---|---|
|1|9|9|Yes|
|2|0,7|0,5|Yes|
|3|0,2|0,2|No|

|BC|10|01|10|01|E1|00|81|Col9|
|---|---|---|---|---|---|---|---|---|
||||||||||


-----

last Byte


t1

T

t2

t3


1st Byte 2nd Byte

t1

T

t2

t3

**Figure 16 - Telegram Timing**

**Meaning** **min**

0-Bit active time 25µs

Bit-time

time from 1st start-bit to following (n bit times) - 7µs n * T
bits (bit-time)

time from start-bit to start-bit of typ - 30µs
consecutive byte

**Figure 17 - Decoding Tolerance**

|Symbol|Meaning|min|typ|max|
|---|---|---|---|---|
|t1|0-Bit active time|25µs|35µs|70µs|
|T|Bit-time||104µs||
|t2|time from 1st start-bit to following<br>bits (bit-time)|(n bit times) - 7µs|n * T|(n bit times)<br>+33µs|
|t3|time from start-bit to start-bit of<br>consecutive byte|typ - 30µs|13 * T|typ +30µs|


NOTE 2 The indicated variation of the time t1 shall be applied only to the start bit in each character. Tests with other bits are
strongly recommended

The indicated variation of the time t2 shall

− First be applied to between the start bit and the next bit in each character

− Secondly to a random bit in each character

The above indicated time variation shall be applied for a random byte.

In all cases the time t3 is kept unchanged, i.e. the second character starts at the normal time.

###### 5.3.2 Testing & Requirements
Testing shall be conducted in several steps:

**Table 10 - Requirements for Decoding**

**test-step** **t1** **t2** **t3**

1 typ typ typ

2 a/b min / max typ typ

3 a/b typ min / max typ

4 a/b typ typ min / max

|test-step|t1|t2|t3|
|---|---|---|---|
|1|typ|typ|typ|
|2 a/b|min / max|typ|typ|
|3 a/b|typ|min / max|typ|
|4 a/b|typ|typ|min / max|


-----

###### 6 Transmission
The objective of this test (current test) is to check the ability of the transmitter to generate proper signals
at different busloads.

In order to transmit a logical ´0´, the transmitter of a bus device shall draw a current from the bus to cause
a certain voltage drop Ua of the analogue signal with a duration of tactive.. During the following
equalisation time, the energy consumed during the active time can be recharged back to the bus and the
connected devices. Owing to free topology of the KNX TP1- System, the transmitter shall support
different line impedances to ensure proper signal amplitudes.

###### 6.1 Transmitter Test (Normal Current) - Test 1
This test represents the sending of one device to the bus, which is equipped only with a few bus-devices.

###### 6.1.1 Test Preparation

 +D +A
 Is +
 S1 CH1 CH2 BDUT
 PSU UPSU Choke C1 US
 R1 DSO
 -C -B 
**Figure 18 - Test Set-up for Transceiver (Normal & Max)**

The BDUT shall be configured in such a way that the device transmits an DPT 1.001 telegram (definition
see Figure 15). Transmission can be initiated automatically or manually.

A telegram repetition, as a consequence of the missing ACK, does not affect the test. S1 shall be open.
R1=22 Ω and C1=1000 µF [5)].

The resulting voltages for the AC-Part are based on the definitions given in Figure 19. The test is carried
out at UPSU = 20 and 30 VDC

###### 6.1.2 Testing
An oscilloscope shall monitor the voltage at BDUT. The relating values can be read out from the curves.
The limits are valid for all zero bits of a telegram. Voltages shall comply with the values in table of
chapter 6.1.3.

The reference for measuring Ua shall be the DC bus voltage level at the beginning of the telegram. This is
the common reference, from which all further amplitudes Ua shall be measured. “Uref” is thus only taken
once for the test.

The following curves are expected by using the configuration of Figure 18: Test Set-up for Transceiver
(Normal & Max).

5) R1 and C1 serve for simulating a bus load to the sending device.


-----

Us Is
###### Ue


#### US


###### 0
t

0 35µs 104

**Figure 19 - Analogue Signal of Logical ´0´**

###### 6.1.3 Requirements 
Values shall be within the grey shaded area.

###### Ua

 valid area

 D C
 Uamax

 B

 Uamin
 A

20V 30V UPSU

**Figure 20 - Global Tolerance Pattern for Transmitter**

**Table 11 - Ua Limits of a Transmitter (TP1-64) {Nominal Current}**

|Is<br>Ue|Col2|Col3|
|---|---|---|
||Ua||

|Col1|vali<br>D C<br>B<br>A|Col3|Col4|
|---|---|---|---|
||vali<br>A<br>B<br>C<br>D|||

|Col1|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|4,5V|6V|9V|9V|
|Ua (rising and<br>falling slopes)|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|


-----

**Table 12 - Ua Limits of a Transmitter (TP1-256) {Nominal Current}**

**Corners** **A** **B** **C** **D**

**[V]** **[V]** **[V]** **[V]**

**UPSU** **20V** **30V** **30V** **20V**

Ua 6V 6V 9V 9V

Ua (rising and 1 < slope < 100 [V/µs]
falling slopes)

###### 6.2 Transmitter Test (Normal Current) - Test 2

 6.2.1 Test Preparation
Test set-up identical to 6.1.

The BDUT shall be configured in such a way that the device transmits a MAXDATA telegram with the
maximum allowed number of 0 bit. Transmission can be initiated automatically or manually.

A telegram repetition, as a consequence of the missing ACK, does not affect the test. S1 shall be open.

The resulting voltages for the AC-Part are based on the definitions given in Figure 19. The test is carried
out at UPSU = 20 and 30 VDC

###### 6.2.2 Testing
Testing identical to 6.1

###### 6.2.3 Requirements 
Values shall be within the grey shaded area. The values shall be checked for the last bit in the
MAXDATA telegram.

###### Ua

 valid area

 D C
 Uamax

 B

 Uamin
 A

20V 30V UPSU

**Figure 21 - Global Tolerance Pattern for Transmitter**

**Table 13 - Ua Limits of a Transmitter (TP1-64) {Nominal Current} Test 2**

|Corners|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|6V|6V|9V|9V|
|Ua (rising and<br>falling slopes)|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|

|Col1|vali<br>D C<br>B<br>A|Col3|Col4|
|---|---|---|---|
||vali<br>A<br>B<br>C<br>D|||

|Col1|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|4.5V|7V|10.5V|10.5V|


-----

**Table 14 - Ua Limits of a Transmitter (TP1-256) {Nominal Current} Test 2**

**Corners** **A** **B** **C** **D**

**[V]** **[V]** **[V]** **[V]**

**UPSU** **20V** **30V** **30V** **20V**

Ua 6V 6V 10.5V 10.5V

###### 6.3 Transmitter Test (Maximal Current)
This test represents the sending of one device to the bus, which is equipped with maximal number of busdevices (EED's).

###### 6.3.1 Test Preparation
Use Figure 18. S1 shall be closed.

The BDUT shall be configured in such a way that the device transmits a DPT 1.001 telegram (definition
see Figure 13). Transmission can be initiated automatically or manually.

A telegram repetition, as a consequence of the missing ACK, does not affect the test.

The resulting voltages for the AC-Part are based on the definitions given in Figure 19. The test is carried
out at UPSU = 20 and 30 VDC.

###### 6.3.2 Testing
An oscilloscope shall monitor the voltage Ua at BDUT. The relating values can be readout from the
curves. The limits shall be measured for the first 0 bit of the first character of a telegram. Voltages shall
comply with the values in table of chapter 6.3.3.

For establishing the values of the rising and falling slopes of Ua the steepest part of the slope shall be
taken into account.

The curves of Figure 19 are expected.

###### 6.3.3 Requirements

**Table 15 - Ua Limits of a Transmitter (TP1-64) {Maximal Current}**

**Corners** **A** **B** **C** **D**

**[V]** **[V]** **[V]** **[V]**

**UPSU** **20V** **30V** **30V** **20V**

Ua 3V 4.5V 9V 9V

Ua (rising and 1 < slope < 100 [V/µs]
falling slopes)

**Table 16 - Ua Limits of a Transmitter (TP1-256) {Maximal Current}**

|Corners|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|6V|6V|10.5V|10.5V|

|Corners|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|3V|4.5V|9V|9V|
|Ua (rising and<br>falling slopes)|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|

|Corners|A<br>[V]|B<br>[V]|C<br>[V]|D<br>[V]|
|---|---|---|---|---|
|**UPSU **|**20V**|**30V**|**30V**|**20V**|
|Ua|3V|4.5V|9V|9V|
|Ua (rising and<br>falling slopes)|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|1 < slope < 100 [V/µs]|


-----

###### 6.4 Transmitter Test (Minimal Current)
This test represents the simultaneous sending of maximum number device at a bus-segment.

This case occurs if e.g. an ACK is transmitted by all bus-devices. Auxiliary devices are used to draw a
certain transmit current. The resulting transmit current (Is) is divided in BDUT current (Is1) and AUX
current (Is2).

###### 6.4.1 Test Preparation


###### BDUT


###### -C -B 
 n

1[2]

###### Is2
 +

 Busdevice

 - AUX

**Figure 22 - Test Set-up for Transceiver (Minimal)**

The BDUT and AUX shall be configured in such a way that the devices transmit a KNX telegram
simultaneously (e.g. ACK). Transmission can be initiated automatically or manually or by another bus
device.

The resulting voltages for the AC-Part are based on the definitions given in Figure 19. The test is carried
out at UPSU = 25 VDC.

###### 6.4.2 Testing
An oscilloscope shall monitor the voltage at BDUT and AUX. The relating values can be read out from
the curves. The limits are valid for all zero bits of a telegram. Voltages shall comply with the values in
table of chapter 6.4.3. As the current depends predominantly on the used components, during this test it is
not measured.

The reference for measuring Ua shall be the DC bus voltage level at the beginning of the telegram. This is
the common reference, from which all further amplitudes Ua shall be measured. “Uref” is thus only taken
once for the test.

The curves of Figure 19 are expected.

|PSU|+D|Col3|Col4|Col5|
|---|---|---|---|---|
|PSU|UPSU|Choke||DSO<br>CH1 CH2<br><br>US|
|PSU|UPSU||||

|Col1|Col2|n<br>2<br>1<br>usdevice<br>AUX|Col4|
|---|---|---|---|
|||usdevice<br>AUX<br>12|usdevice<br>AUX<br>12|
|Busdevice<br>AUX<br>1|Busdevice<br>AUX<br>1|usdevice<br>AUX<br>1|usdevice<br>AUX<br>1|
|Busdevice<br>AUX<br>1|Busdevice<br>AUX<br>1|usdevice<br>AUX<br>1||


-----

###### 6.4.3 Requirements 

**Table 17 - Voltage Limits of a Transmitter (TP1-64)**

**UPSU** **Ua** **Ua** **Ue** **Ue**
**(min)** **(max)** **(min)** **(max)**

25V 4,5 10,5 3,0 14,5

**Table 18 - Voltage Limits of a Transmitter (TP1-256)**

**UPSU** **Ua** **Ua** **Ue** **Ue**
**(min)** **(max)** **(min)** **(max)**

25V 6 10,5 4,0 14,5

###### 6.5 Coding Rules
Purpose of this test is to examine the correct timing of a bus device transmitting a telegram on the bus.

###### 6.5.1 Test preparation
Testing is conducted with a KNX minimal configuration. The BDUT shall be configured in such a way
that the device transmits an EIS-1 Telegram (definition see Figure 13). Transmission can be initiated
automatically or manually.

###### +D +A

+

CH1 CH2

###### BDUT
 PSU UPSU Choke UIN

DSO

###### -C -B 
**Figure 23 - Test Set-up 1: Time Coding**

###### 6.5.2 Testing
The resulting signals of the transmitter caused by the sending of BDUT shall be monitored with the DSO.
The values for timing shall be read out from the graphs of the DSO. Figure 24 shows how the analogue
signal shall be interpreted for this test. It is also possible to use a logic analyser for this test, with a special
receiver. The task of this auxiliary receiver is, to convert KNX analogue signals into standardised TTLsignals. Take also the properties of the auxiliary receiver into account for measured time values.

|U<br>PSU|Ua<br>(min)|Ua<br>(max)|Ue<br>(min)|Ue<br>(max)|
|---|---|---|---|---|
|25V|4,5|10,5|3,0|14,5|

|U<br>PSU|Ua<br>(min)|Ua<br>(max)|Ue<br>(min)|Ue<br>(max)|
|---|---|---|---|---|
|25V|6|10,5|4,0|14,5|

|PSU|+D|Col3|+A<br>+|BDUT|
|---|---|---|---|---|
|PSU|-C<br>UPSU|Choke|UIN<br>DSO<br>CH1 CH2<br><br>-<br>-B|UIN<br>DSO<br>CH1 CH2<br><br>-<br>-B|


-----

t

|U|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|U<br>5 V|U<br>5 V|Analog Signal|Analog Signal|Analog Signal|
||||||
||||||
|||||bit time<br>T|
||||t1|t1|


last Byte


t1

T

t2

t3


0.5 V

bit time T

###### t1

time reference
for consecutive bits

**Figure 24 - Signal Assessment**

1st Byte 2nd Byte

t1

T

t2

t3

**Figure 25 - Telegram Timing**


###### 6.5.3 Requirements

**Table 19 - Timing Tolerances for Coding**

**Symbol** **Meaning** **min** **typ** **Max**

t1 0 bit active time 34µs 35µs 37µs

T Bit-time 104µs

t2 time from start-bit to following bits (bit-time) typ - 2µs n * T typ +2µs

t3 time from start-bit to start-bit of consecutive byte typ - 2µs 13 * T typ +5µs

|Symbol|Meaning|min|typ|Max|
|---|---|---|---|---|
|t1|0 bit active time|34µs|35µs|37µs|
|T|Bit-time||104µs||
|t2|time from start-bit to following bits (bit-time)|typ - 2µs|n * T|typ +2µs|
|t3|time from start-bit to start-bit of consecutive byte|typ - 2µs|13 * T|typ +5µs|


-----

###### 7 Transceiver
A bus device can be regarded as a device consisting normally of two functional blocks: the transceiver
and the micro-controller. If a bus device build with a KNX certified micro-controller and a non-certified
transceiver, it is possible to test only the transceiver properties. The voluminous collision tests are not
mandatory in case of combination of a successful tested transceiver and a KNX certified controller.

Transceiver testing includes 4 sub-tests

1. Power converter test (see 4 - Power Conversion)

2. Receiver test (see 5.1 - Pulse-Impedance & 5.2 - Sensitivity)

3. Transmitter test (see 6.1 & 6.4 Transmitter Current Tests)

4. Propagation delay test (see 7.1 - Propagation Delay (Transmitter))

###### 7.1 Propagation Delay (Transmitter)
The objective of the test is to check the internal delay of transmitter. If this delay exceeds a given value,
the bus-devices (BDUT) will not work properly in case of telegram collision with other bus-devices.

###### BDUT Transceiver µ-Controller
 +D +A DSO +

Tran.

CH1 Rec.

###### PSU UPSU Choke UIN

Ground

###### -C -B 
 Function Generator

**Figure 26 - Transceiver (Transmitter-Part)**

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|UPSU|Choke|UIN<br>CH1||
|UPSU||||


-----

###### 7.1.1 Test Preparation
The function generator shall deliver a signal which is equal to a series of transmitted zero bits.

The following signals are expected.

Us

###### Bussignal (UIN)

 Signal of Functiongen.
 0 t

|s<br>Bu<br>0<br>t<br>td1 td2|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|t<br><br><br>0<br>s<br>~~td~~1<br>~~td~~2<br>Bu||||||
|t<br><br><br>0<br>s<br>~~td~~1<br>~~td~~2<br>Bu||||||
|0||||||
|0|||~~td~~1|||
|0||||||


0


35µ[s] 104µ[s]

**Figure 27 - Transmit Delay**


###### 7.1.2 Testing
Testing shall be conducted with DSO. The values of td (rising and falling) shall be readout and compared
to those of requirements.

UPSU shall be tuned to 30 V and 20 V.

###### 7.1.3 Requirements

**Table 20 - Requirements for Transmitter Delay**

**Parameter** **Value**
**UPSU =[20 V-30 V]**

td1 < 1 µs

td2 < 3 µs

Td1 is measured from the rising edge of signal of the function generator (rise time can be disregarded) to
the start of the active part of the bus signal (i.e. excluding the falling edge of Ua).

Td2 is measured from the falling edge of the signal of the function generator (fall time can be
disregarded) to the start of the rising edge of the active part of the bus signal (i.e. excluding the rising
edge of Ua).

###### 7.2 Propagation Delay (Receiver)
The objective of the test is to check the internal delay of receiver. If the delay exceeds a given value, the
bus device (BDUT) will not work properly in case of telegram collision with other bus-devices.

|Parameter<br>UPSU =[20 V-30 V|Value<br>]|
|---|---|
|td1|< 1 µs|
|td2|< 3 µs|


-----

###### BDUT Transceiver µ-Controller

 +

Tran.

###### Function Power Rec. Amplifier UIN
 Generator
Ground

###### 
CH1 CH2

###### DSO

**Figure 28 - Transceiver (Receiver-Part)**

###### 7.2.1 Test Preparation
An auxiliary device (function generator & power amplifier) is used to generate a continuous series of zero
bits at the bus. This device has the property to vary the signal amplitude (Ua) of zero bits. Make sure to
avoid ground loops with the DSO. Use e.g. isolated amplifiers.

The following signals are expected.

Us

###### Bussignal (UIN) Ua

 VH
 Signal of Receiver
 VL
 0 t

|Col1|Col2|
|---|---|

|Ua<br>H<br>L<br>0<br>td1 td2|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|0<br>H<br>L||Ua|Ua||
|0<br>H<br>L|||||
|0<br>H<br>L|||||
|0<br>H<br>L||||~~td~~2|


0


35µ[s] 104µ[s]

**Figure 29 - Receiver Delay**


###### 7.2.2 Testing
UPSU shall be tuned to 25 V. Testing shall be conducted with Ua=10V and Ua = 0.7 V signal amplitude.

The values of td1 (rising slope) and td2 (falling slope) shall be readout from the DSO and compared to
those of requirements. The output voltages (VH and VL) of receiver shall be measured.


-----

###### 7.2.3 Requirements

**Table 21 - Requirements for Receiver Sensitivity**

**Parameter** **Value at Ua=0.7V** **Value at Ua=10V**

td1 (rising slope) < 5 µs < 3 µs

td2 (falling slope) < 3 µs < 3 µs

Td1 is measured from the bus signal Ua = -0.7V to 50% of the rising edge of the receiver signal.

Td2 is measured from the bus signal Ua = -0.2V to 50% of the falling edge of the receiver signal.

|Parameter|Value at Ua=0.7V|Value at Ua=10V|
|---|---|---|
|td1 (rising slope)|< 5 µs|< 3 µs|
|td2 (falling slope)|< 3 µs|< 3 µs|


-----

###### 8 Collision

 8.1 General
Collision test is a comprehensive test. With this test a lot of sub test are included.

Collision test integrates:

- Physical and data link layer properties

- Sampling of data signal

- Signal dynamic behaviour

- Bus cable delays

- Internal delays

- Arbitrary and priority properties

This test is very important, owing to the CSMA/CA bus access of the KNX Twisted Pair system, to check
whether bus devices behave properly if they are sending simultaneously.

A mechanism shall be included in the collision tests, which shall prevent that the BDUT in the event of a
collision infinitely tries to send the collided telegram on the bus, which then in turn again collides with
the one sent by the Waveform Generator.

###### 8.2 Bus free detection (Delay Stepping)
This test checks the decoding and arbitrary functions of a bus device. An auxiliary bus device is needed to
generate a fixed telegram, which has a certain delay referring to telegram of the BDUT. The contents
(structure) of these two telegrams are equal.

###### 8.2.1 Test Preparation
The BDUT shall be configured in such a way that the device transmits a DPT 1.001 telegram (definition
see Figure 13). Transmission can be initiated automatically or manually. Telegram repetition (in case of
no ACK) shall be switched off. It is mandatory that there is an auxiliary preceding signal at BDUT
accessible, which indicates, that the BDUT is going to send a telegram after a fixed time (td1 > 50µs). If
it is ensured, that there is always a constant delay (td2) between the initiating of a telegram and sending,
the initiating signal can be used instead of the preceding signal.

NOTE 3 The test condition, that the BDUT shall send a telegram after a fixed time, may require a modified source code of its link
layer. The manufacturer shall therefore declare that while allowing this possibility, the physical layer functionality remains
unchanged.

transmission
initiating (DUT)

preceding
signal (DUT)

telegram
of DUT

telegram
of AUX-Device

td3

td1

td2

X
ref. point

**Figure 30 - Delays for Telegram Sending**

|nsmission<br>iating (DUT)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|eceding<br>gnal (DUT)|eceding<br>gnal (DUT)|||||
|legram<br> DUT||||||
|legram<br> DUT||||||
|gram<br> UX-Device||||||
|gram<br> UX-Device||||||
|gram<br> UX-Device|td2|td1||td3<br>|td3<br>|
|gram<br> UX-Device|td2|||||
|gram<br> UX-Device||||||


-----

###### -C  -B

delay
unit

**Figure 31 - Bus free detection Test (Delay stepping)**

###### 8.2.2 Testing & Requirements

**Table 22 - Delayed Stepping of Telegrams**

**Delay** **Required behavior of BDUT**

td3 < -7 µs No sending (BDUT shall recognize that the bus is occupied)

-7 µs < td3 < 0 BDUT may recognize that the bus is occupied or may send in parallel

0 < td3 < 32 µs BDUT shall send in parallel with AUX

###### 8.2.3 Collision of Acknowledge Frame
The same delay stepping test shall be executed for the BDUT sending an acknowledge frame. It shall be
checked, whether the BDUT sends its acknowledge frame (ACK, NACK or BUSY) also if the bus is not
free (because of another acknowledge frame).

Procedure: trigger Waveform Generator with send line of BDUT to generate an ACK frame a time td3
before the BDUT sends an ACK frame.

Acceptance:

For devices inhibiting bus free detection only 35 µs before acknowledge Frame transmission:

**Table 23 - Collision of acknowledge frame**

**Action** **comment**

WG on bus before BDUT BDUT sends ack BDUT sends ack frame even if the bus is not
sends acknowledge frame free during the specified time.
frame -35 µs < td3 < 0µs

###### 8.3 Collision (Remote Test)
This test supplementary checks the combination of weak and strong data signals, which occur if two
devices simultaneously send telegrams with different contents. The sending (=BDUT) device is coded
receding (with a ‘1’ at a determined position). An auxiliary bus device (=AUX) is needed to generate the
same telegram with the exception of coding a ‘0’ at a determined position (= dominant coding). This can
be achieved by triggering a Waveform Generator via the send line of the BDUT. Collision shall be carried
out with telegrams with maximum length, in which all bits before and including the source address are
tested and after the source address only one arbitrary bit of each octet.

|PSU|+D|Col3|+A|Col5|+|BDUT|
|---|---|---|---|---|---|---|
|PSU|UPSU|Choke<br>|DSO<br>CH1 CH2<br>|AUX<br>Device|||
|PSU|UPSU||||||

|Delay|Required behavior of BDUT|
|---|---|
|td3 < -7 µs|No sending (BDUT shall recognize that the bus is occupied)|
|-7 µs < td3 < 0|BDUT may recognize that the bus is occupied or may send in parallel|
|0 < td3 < 32 µs|BDUT shall send in parallel with AUX|

|Col1|Action|comment|
|---|---|---|
|WG on bus before BDUT<br>sends acknowledge<br>frame -35 µs < td3 < 0µs|BDUT sends ack<br>frame|BDUT sends ack frame even if the bus is not<br>free during the specified time.|


-----

Additionally the bus-line shall be equipped with the maximum possible number of bus-devices according
to the declared TP1 class (64 or 256) minus three to evaluate maximum segment configuration. The
devices included in the test set-up shall be copies of the to be certified implementation.

Alternatively and in order to avoid that the bus line of the test set-up has to be equipped with the
maximum possible number of bus devices minus three to evaluate maximum segment configuration, the
‘remote test’ may be carried out with telegrams (as sent by the Waveform Generator) in which the
maximum deviations of paragraph 5.3 (Figure 17 and Table 10) are inserted (bit or byte wise). In all
cases, these telegrams shall cause the BDUT to detect collision. The BDUT shall retract and repeat the
original message up to three times. This alternative test method is not allowed for devices based on a noncertified physical layer implementation.

In case the to be certified physical layer is of a higher fan-in class, the settings of the devices should be
such that from a signalling point of view the devices are connected to the bus but it is avoided that they
consume maximum power. If this is - for whatever reason - not possible, the number of devices may be
reduced but this shall then be stated in the resulting product documentation to inform the installer that the
number of devices on a line segment must be reduced accordingly.

###### 8.3.1 Test Preparation

 maximum number of bus devices - 3

 AUX PSU Choke BDUT Choke PSU

maximum segment length

###### EITT

**Figure 32 - Test set-up for Collision remote Test**

###### 8.3.2 Testing
It shall be ensured, that BDUT and AUX are sending simultaneously.

###### 8.3.3 Requirements
The BDUT shall recognise, that another simultaneous sending device (dominant coded) has overwritten
the determined ‘1’ by a ‘0’ [6)]. The BDUT shall draw back at once. The resulting telegram at the EITT
shall be the one sent by the AUX device.

6) Naturally in the control field, only those bits can be manipulated, which form part of a control field supported by
the BDUT.


-----

###### 8.4 Collision (System Test)
This test checks the handling of received telegrams. All devices except one shall respond with an ACK
and one device with an NACK or BUSY [7)].
The bus-line shall be equipped with the maximum possible number of bus-devices according to the
declared TP 1 class (64 or 256) minus three to evaluate maximum segment configuration. The devices
included in the test set-up shall be copies of the to be certified implementation.
Alternatively and in order to avoid that the bus line of the test set-up has to be equipped with the
maximum possible number of bus devices minus three to evaluate maximum segment configuration, the
‘system test’ may be carried out with NACK respectively Busy telegrams (as sent by the Waveform
Generator) in which the maximum deviations of paragraph 5.3 (Figure 17 and Table 10) are inserted.
These shall then be collided with the ACK signal. In all cases, the BDUT shall recognize a NACK
respectively Busy and repeat the original message up to three times.
This alternative test method is not allowed for devices based on a non-certified physical layer
implementation.
In case the to be certified physical layer is of a higher fan-in class, the settings of the devices should be
such that from a signalling point of view the devices are connected to the bus but it is avoided that they
consume maximum power. If this is - for whatever reason - not possible, the number of devices may be
reduced but this shall then be stated in the resulting product documentation to inform the installer that the
number of devices on a line segment must be reduced accordingly.

###### 8.4.1 Test Preparation

maximum number of
bus devices - 3

400 m 400 m

**_EIB_**

###### PSU Choke BDUT Choke PSU

|EIB|Col2|
|---|---|


AUX


EITT


**Figure 33 - Test Set-up for Collision Receipt Test**

It shall be ensured that the BDUT sends a group telegram to the other devices. AUX shall be configured
in such a way, that a NACK or BUSY will be sent back in case of receiving the related group address
(e.g. by triggering a Waveform Generator via the BDUT send line).

###### 8.4.2 Testing
The BDUT sends a group telegram to the other devices.

###### 8.4.3 Requirements
The BDUT shall recognise that one of the other devices (special coded) has responded with NACK or
BUSY. BDUT shall repeat the message normally 3 times (configurable).

7) It is not mandatory to test both NACK and Busy


-----

###### 9 Certification of high impedance power converter

 9.1 General
When a high impedance power converter is added in parallel to a certified physical layer to draw more
current from the bus, the requirements for clause 5.1 continue to apply. If a power converter is submitted
separately to certification (in order for it to be combinable with any certified physical layer), the
underneath requirements shall be met.

I (Rshunt)

1 k // 2,2nF

A2

###### Idc


###### t0  t1 


###### t2 t3  t4  T


**Figure 34 - Acceptable current tolerances**

t0 = 0; t1 = 10µs; t2 = 35µs; t3 = 45µs; t4 = 104µs; T = 300µs

Idc = i(T) => shall be configured in that way, that the max load current is consumed permanently.

**Table 24 - Impedance limits for high impedance power converter TP1-64**

**Parameter** **Min** **typ** **Max**

Area ratio, A1 / A2    -    -    
i(t0) Idc – 3mA Idc

i(t1 ≤ t < t2) Idc – 1mA Idc

i(t2) Idc – 0,2mA Idc +2mA

i(t3) Idc – 0,2mA Idc+0,15mA

i(t4) Idc – 0,2mA Idc+0,08mA

I(T) Idc

|Parameter|Min|typ|Max|
|---|---|---|---|
|Area ratio, A1 / A2|-|-|-|
|i(t0)|Idc – 3mA||Idc|
|i(t1 ≤ t < t2)|Idc – 1mA||Idc|
|i(t2)|Idc – 0,2mA||Idc +2mA|
|i(t3)|Idc – 0,2mA||Idc+0,15mA|
|i(t4)|Idc – 0,2mA||Idc+0,08mA|
|I(T)||Idc||


-----

**Table 25 - Impedance limits for high impedance power converter TP1-256**

**Parameter** **Min** **typ** **Max**

Area ratio, A1 / A2    -    -    
i(t0) Idc – 1,4mA Idc

i(t1 ≤ t < t2) Idc – 0,3mA Idc

i(t2) Idc – 0,1mA Idc +1,1mA

i(t3) Idc – 0,1mA Idc+0,05mA

i(t4) Idc – 0,1mA Idc+0,03mA

I(T) Idc

It shall be borne in mind that the fan-in of a high impedance power converter is handled in the same way
as that of a normal BCU. The fan-ins of all - BCUs and high impedance power converter – shall be added
up and the sum may never exceed 256.

Next to the above tests, the power converter shall meet the requirements of clauses 4.2 to 4.6 respectively
8.3 and 8.4, for the latter two tests, in conjunction with a certified physical layer implementation. All
other tests from this volume can be skipped.

|Parameter|Min|typ|Max|
|---|---|---|---|
|Area ratio, A1 / A2|-|-|-|
|i(t0)|Idc – 1,4mA||Idc|
|i(t1 ≤ t < t2)|Idc – 0,3mA||Idc|
|i(t2)|Idc – 0,1mA||Idc +1,1mA|
|i(t3)|Idc – 0,1mA||Idc+0,05mA|
|i(t4)|Idc – 0,1mA||Idc+0,03mA|
|I(T)||Idc||


-----

###### 10 Link Layer Tests

 PSU Choke

|Col1|Col2|Col3|Waveform Generator|Col5|Col6|Col7|Waveform Generator|Col9|Col10|Col11|Col12|Col13|
|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger|trigger|trigger|trigger|trigger|trigger|
||||trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger<br>Transceiver modules|trigger|trigger|||||
||||||||||||E<br>|E<br>~~D~~<br>I|
||||||||||||||


###### BDUT


###### Logic Analyzer

**Figure 35 - Test set-up for link layer test**

The following test equipment is required.

- A power supply unit and choke.


###### EITT



- A PC running EITT (version 2.3 or upward compatible), connected to the bus by two EDI’s (KNX
Data Interface) both based on BCU2 technology (allowing polling). For the data part of Link Layer,
one of the EDI’s is replaced by a terminal BCU. This EDI is based on BIM112 Technology, with a
special application program allowing faulty telegram transmission. A copy of the application program
can be obtained from the KNX association.

- A Logic Analyser connected to the bus by a transceiver module.

- A Waveform Generator connected to the bus by a transceiver module.

The BDUT shall have the individual address 1001h and the group address 1002h. If the BDUT can be
configured as a polling slave, it shall respond to polling group 1003h.

NOTE 4 The wording ‘stimulate BDUT to send frame’ signifies in case of a BCU (with available PEI) that the BDUT shall be
stimulated via local services, whereas in case of a BAU (without available PEI) the BDUT shall be stimulated according to the
manufacturer’s PIXIT. The underneath telegrams are merely examples (based on the case where the BDUT is a BCU) and may be
replaced by appropriate other frames.


-----

###### 10.1 Physical Part of Link Layer

 10.1.1 Data block

 10.1.1.1 Transceiver Fault
Purpose Check that the BDUT does not send a telegram in case of a transceiver fault

Procedure Disconnect transceiver receive line from BDUT. Stimulate BDUT to send telegram (e.g.
switch to Link layer and send a L_DATA.req).

Result No telegram shall appear on the bus (the BDUT shall at the latest stop transmission after
the first byte)

###### 10.1.1.2 Parity Bit
Purpose Check reaction of BDUT to incorrect parity bit

Procedure Send telegram addressed to the device with correct and incorrect parity bit in the check
sum octet (via Waveform Generator) and check with EITT if BDUT sends ACK or
NACK. This test shall be carried out once with a physical addressed and once with a
group addressed frame.

IN    BC AFFE 1001 60 80 :T-Connect(Addr=1001)

IN    BC AFFE 1002 E1 00 80 : ValueWrite (Grp=1002, 00)

Result BDUT sends NACK if at least one parity bit in the frame was incorrect and an ACK if
all parity bits in the sent frame were correct. Check that the BDUT does not update the
sent value (in the case of an actuator by visual check or in the case of a sensor by reading
out the value of the addressed object)

###### 10.1.1.3 Stop Bit
Purpose Check reaction of BDUT to incorrect stop bit

Procedure Send telegram addressed to the device with correct and incorrect stop bit in the check
sum octet (via Waveform Generator)p and check with EITT if BDUT sends ACK or
NACK. This test shall be carried out once with a physical addressed and once with a
group addressed frame.

IN    BC AFFE 1001 60 80 :T-Connect(Addr=1001)

IN    BC AFFE 1002 E1 00 80 : ValueWrite (Grp=1002, 00)

Result BDUT sends NACK if at least one stop bit in the frame was incorrect and an ACK if all
stop bits in the sent frame were correct. Check that the BDUT does not update the sent
value (in the case of an actuator by visual check or in the case of a sensor by reading out
the value of the addressed object)


-----

###### 10.1.1.4 Send Telegram
Purpose Check correct setting of parity and stop bits if BDUT sends telegram.

Procedure Stimulate BDUT to send a physical and group addressed telegram

OUT    BC 1001 1002 E1 00 80 ValueWrite (Grp=1002, 00)

OUT    BC 1001 AFFE 64 42 41 01 16 01 :MemoryResponse(Count=01, Addr=0116,
Data=01)

Result Parity and Stop bits shall be set correctly (Logic Analyser) in the entire frame (including
check octet).

###### 10.1.2 Data packet frame and priorities

 10.1.2.1 Start of Low and Normal priority Frame: Send
Purpose Check that start of telegram (with low and normal priority) is sent at least 53 bit times
after preceding telegram frame

Procedure Stimulate BDUT to send telegram, which triggers the Waveform Generator via the send
line of the BDUT to send a valid frame on the bus. BDUT detects collision and sends its
frame with a delay after the bus is free again. Check this delay with the Logic Analyser.

Result BDUT waits at least 53 bit times after the Waveform Generator has terminated its
transmission [8)].

###### 10.1.2.2 Start of Repeated/Polling/System/Alarm Frame: Send
Purpose Check that a repeated telegram, polling telegram and a telegram with system/alarm
priority is sent at least 50 bit times after preceding telegram frame.

Procedure Stimulate BDUT to send an unacknowledged telegram. Check time between first frame
and repeated frame with the Logic Analyser.

Stimulate BDUT to send an unacknowledged telegram, which triggers via the send line
of the BDUT the Waveform Generator to send a valid frame after a delay corresponding
to the duration of the frame sent by the BDUT plus 50 bit times. Check that the BDUT
detects collision and waits to send its repeated frame at least 50 bit times after the
Waveform Generator has terminated its transmission.

Stimulate BDUT to send polling telegram / telegram with system/alarm priority, which
shall trigger the Waveform Generator via the send line of BDUT to send a valid frame
on the bus. Check that the BDUT detects collision and waits to send its frame at least 50
bit times after the Waveform Generator has terminated its transmission.

Result BDUT waits at least 50 bit times after the Waveform Generator has terminated its
transmission.

8) The time between the end of a telegram and the start of a telegram of normal/low priority is 53 bit times, including
the two separation characters. In other words, measurements have to be done of the time between the addressed
stop bit of the preceding telegram and the start bit of the following telegram with normal/low priority and this time
shall be at least 53 bit times.


-----

###### 10.1.2.3 Start of Frame: Receive (optional)
Purpose Check that BDUT rejects a repeated telegram, a polling telegram or a telegram with
system/alarm priority telegram when received less than 40 bit times after preceding
telegram frame

Procedure Stimulate Waveform Generator to send two consecutive frames (polling frames, repeated
telegram frame, frame with system /alarm priority) on the bus of which the second is
addressed to the BDUT. Repeated telegram frames and frames with system/alarm
priority shall be sent once physically addressed and once group addressed. The delay
time between both frames is less than 40 bit times.

CASE 1 Physical addressed

IN    BC AFFE 1004 60 80 :T-Connect(Addr=1004)

IN    9C AFFE 1001 60 80 :T-Connect(Addr=1001) (repeated)

IN    BC AFFE 1001 60 80 :T-Connect(Addr=1001) (Low)

IN    B4 AFFE 1001 60 80 :T-Connect(Addr=1001) (High)

IN    B8 AFFE 1001 60 80 :T-Connect(Addr=1001) (Alarm)

IN    B0 AFFE 1001 60 80 :T-Connect(Addr=1001) (System)

CASE 2 Group addressed

IN    BC AFFE 1005 E1 00 80 ValueWrite (Grp=1005, 00)

IN    9C AFFE 1002 E1 00 80 ValueWrite (Grp=1002, 00) (repeated)

IN    BC AFFE 1002 E1 00 80 ValueWrite (Grp=1002, 00) (Low)

IN    B4 AFFE 1002 E1 00 80 ValueWrite (Grp=1002, 00) (High)

IN    B8 AFFE 1002 E1 00 80 ValueWrite (Grp=1002, 00) (Alarm)

IN    B0 AFFE 1002 E1 00 80 ValueWrite (Grp=1002, 00) (System)

CASE 3 Polling

IN    F0 AFFE 1001 01    :Polling request

IN    F0 AFFE 1003 01    :Polling request

Result BDUT does not react on the frame (sends no ACK / fills no polling slots).

###### 10.1.2.4 Start of Frame after BUSY resp. overlapping Busy/Nack [9)]: Send
Purpose Check that start of telegram is sent at least 150 bit times after preceding BUSY or
overlapping Busy/NACK

Procedure Stimulate BDUT to send telegram, which triggers via its send line the Waveform
Generator to answer with a Busy-frame or overlapping Busy/Nack. The BDUT repeats
the previously sent frame after a delay. Check this delay with the Logic Analyser. The
test shall be carried out with physically addressed, group addressed and frames with
different priorities and repeated frames (if supported by the BDUT).

Result BDUT shall not repeat its frame before 150 bits after the Waveform Generator has
terminated its transmission.

9) This overlapping Busy and Nack may occur in case devices deactivate CSMA/CA detection during transmission
of ACK telegrams. This is currently the case in TP1 BCU1.


-----

###### 10.1.2.5 Separation of characters inside a frame: Send
Purpose Check that characters inside a frame sent by the BDUT are separated by at least two bit
times

Procedure Stimulate BDUT to send physically addressed, group addressed and frames with
different priorities and repeated frames (if supported by the BDUT).

Result Check timing between characters in frame sent by BDUT: these shall be separated by at
least two bit times.

###### 10.1.2.6 Separation of characters inside a frame: Receive (optional)
Purpose Check that frames are rejected by the BDUT, in which the characters are separated by
less than two bit times

Procedure Send frame to BDUT via Waveform Generator, in which the characters are separated by
less than two bit times.

Result If supported, a frame may be interpreted with less than 2 bit times between two
characters if the deviation does not exceed 1 bit time.

###### 10.1.2.7 ACK timing: Send
Purpose Check that ACK is sent at least 15 bit times after preceding telegram (allowed deviation
+20/- 5 µs)

Procedure Send physically and group addressed frame from EITT to BDUT. Check time between
end of frame to ACK sent by BDUT with Logic Analyser.

IN      BC AFFE 1001 60 80 :T-Connect(Addr=1001)

IN      BC AFFE 1002 E1 00 80 :ValueWrite(Grp=1002, 00)

Result BDUT waits 15 bit times (allowed deviation +20/- 5 µs) after end of frame to send ACK.

###### 10.1.2.8 ACK timing: Receive (optional)
Purpose Check if device accepts the acknowledge Frame if it is received

a) after 15 bit times – 10 µs after preceding Telegram

b) before 15 bit times + 30 µs after preceding telegram

Procedure Stimulate BDUT to send a Telegram, which triggers the Waveform Generator via the
send line of BDUT to transmit an ACK Frame

a) more than 15 bit times – 10 µs after end of BDUT Telegram.

b) less than 15 bit times + 30 µs after and of BDUT Telegram

Result BDUT shall accept the ACK Frame (does not repeat its own Telegram)


-----

###### 10.1.2.9 BDUT is polling slave
Purpose Check that slave sends polling data after 5 bit times (allowed deviation +/- 50 µs) after
end of polling request frame, preceding polling data or fill character

Procedure Switch the EDI to link layer via EITT and stimulate EDI to send L_Polldata.req with
length 5.

IN  A9 00 18 34 56 78 0A (PEI_Switch.req)

IN  13 00 00 00 10 03 05 (L_Polldata.req)

Configure BDUT to answer in first polling slot, in a slot after a master fill byte, and in a
slot following the answer of another slave configured for the same polling group.

Check timing with Logic Analyser.

Result BDUT answers in all cases after a delay of 5 bit times (allowed deviation +/- 50 µs).

###### 10.1.2.10 BDUT is polling master (Send)
Purpose a) Check that master sends fill data 6 bit times (allowed deviation +/- 50 µs) after end of
polling request frame, preceding polling data or fill character (in case of missing polling
data)

b) Check that master sends polling data 5 bit times (allowed deviation +/- 50 µs) if it is
configured to additionally act as a polling slave (if supported).

Procedure a) Stimulate BDUT to send polling master frame with length 5 (in case of BCU with

PEI via local services, otherwise see PIXIT).
Configure polling slave to answer in third slot.

b) Stimulate BDUT to send polling master frame with length 5 (in case of BCU with
PEI via local services, otherwise see PIXIT).
Configure BDUT to answer in second polling slot (in case of BCU with PEI via
local services, otherwise see PIXIT).

Check timing with Logic Analyser.

Result a) BDUT answers in all slots except 3 with fill byte FEh after a delay of 6 bit times

(allowed deviation +/- 50 µs)

b) BDUT answers in all slots except 2 with fill byte FEh after a delay of 6 bit times
(allowed deviation +/- 50 µs) and in slot 2 after a delay of 5 bit times (allowed
deviation +/- 50 µs).

###### 10.1.2.11 BDUT is polling master (Receive - optional)
Purpose Check that BDUT rejects the answer of a polling slave if the latter is sent with incorrect
timing

Procedure Stimulate BDUT to send polling master frame with length 5 (in case of BCU with PEI
via local services, otherwise see PIXIT), which triggers the Waveform Generator via the
send line of the BDUT to transmit a polling value in slot 2

a) starting 5 bit times – 30 µs after the first fill byte

b) starting 6 bit times + 30 µs after the first fill byte

Result The BDUT rejects in all cases the answer of the polling slave (in case of a BCU, check
the L_polldata.con, in case of a BAU check reaction according PIXIT)


-----

###### 10.2 Data part of Link Layer

 10.2.1 Control field

 10.2.1.1 Valid and Invalid Control field - Receive
Purpose Verify if BDUT rejects frames with invalid or unsupported control fields (including
rejection of telegrams with Ack control field)

Verify if BDUT acknowledges frames with valid or supported control fields (e.g. correct
priorities, repetition flag set, polling request…)

Procedure Send Group Value Read telegrams [10)] via Interface supporting sending of Raw Frames to
the BDUT with valid and invalid control fields to a supported group address – observe a
waiting time of 1 seconds between telegrams to check BDUT reaction

IN      00 AFFE 1001 E1 00 00 :Value Read

IN      01 AFFE 1001 E1 00 00 :Value Read

…

IN      B0 AFFE 1001 E1 00 00 :Value Read

IN      B4 AFFE 1001 E1 00 00 :Value Read

IN      B8 AFFE 1001 E1 00 00 :Value Read

IN      BC AFFE 1001 E1 00 00 :Value Read

….

IN      90 AFFE 1001 E1 00 00 :Value Read

…

IN      98 AFFE 1001 E1 00 00 :Value Read

…..

IN      FF AFFE 1001 E1 00 00 :Value Read

Result BDUT does not send ACK for invalid/unsupported control fields

BDUT sends ACK for valid control fields (including control fields with repetition flag
set) and returns a Value Response [11)].
The control fields that shall be interpreted as valid by the BDUT are given in the KNX
specifications and in the product documentation.

###### 10.2.1.2 Priorities: Send
Purpose Check that the BDUT can send telegrams with all priorities

Procedure Stimulate BDUT to send telegrams with all priorities

a) in case of BCU with PEI : switch to Link Layer and send L_Data.req-services with
different priorities.

OUT    BC 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

10) For devices not supporting Group Value Read, send TL-Connect and observe minimum 6 seconds between
telegrams to check for TL-Disconnect messages in case of valid or supported control fields (same behaviour also
applies to devices with TL connection oriented minimal implementations).
11) The TP1 BCU with mask 1.2 reacts on LL telegrams with the invalid control field ‘AC’ (and also updates values
in AL). This is not allowed for future implementations.


-----

OUT    B4 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

OUT    B8 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

OUT    B0 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

b) in case of a BAU without PEI : send Value Read to implemented communication
objects (config flags to be set to ensure generation of a response).

Result BDUT sends frames with

a) Priorities according to those set in the L_Data.req-services

b) Priorities corresponding to those set in the Value Read frames

###### 10.2.1.3 Repetition flag : send
**See clause 10.2.6.2**

###### 10.2.1.4 Repetition flag : receive
Purpose Check handling of telegrams with repetition flag set.

Procedure Send a frame to the BDUT, in which the repetition flag is not set, followed by the same
frame with repetition flag set. Check whether the BDUT writes the value when receiving
the first frame and does not again write the value when receiving the second frame.

Result The BDUT writes the value when receiving the first frame and ignores the second [12)]

###### 10.2.2 Source address
Purpose Check the correct setting of the source address in a frame sent by the BDUT.

Procedure Stimulate BDUT to send a frame.

OUT     BC 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

Result The source address corresponds to the individual address of the BDUT.

###### 10.2.3 Destination Address

 10.2.3.1 Individual Address
Purpose Check the acceptance of individually addressed telegrams by the BDUT.

Procedure Use EITT to send the following frame addressed to the BDUT:

IN      BC AFFE 1001 60 80 :T-Connect(Addr=1001)

Result BDUT accepts the frame (sends ACK).

###### 10.2.3.2 Unused Individual Address
Purpose Check the rejection of telegrams not addressed to the BDUT.

Procedure Use EITT to send the following frame addressed to the BDUT:

IN      BC AFFE 1002 60 80 :T-Connect(Addr=1001)

Result BDUT does not accept the frame (sends no ACK).

12) The verification whether the BDUT only writes the value when receiving the first frame and not in case of the
second frame can only be checked in case of BCU’s (in view of availability of External Message Interface) and
not in case of closed devices.


-----

###### 10.2.3.3 Used Group Address
Purpose Send telegram with used group address or broadcast and check if ACK is sent by BDUT.

Procedure Use EITT to send the following frames addressed to the BDUT:

IN     BC AFFE 1002 E1 00 81

IN     BC AFFE 0000 E3 00 C0 12 34 :SetPhysAddr(Addr=1234)

Result BDUT accepts the frames (sends ACK).

###### 10.2.3.4 Unused Group Address
Purpose Send telegram with unused group address and check if ACK is not sent

Procedure Ensure that the group address 2222h is not contained in the BDUT’s address table.

Use EITT to send the following frame addressed to the BDUT:

IN     BC AFFE 2222 E1 00 81

Result BDUT does not accept the frame (sends no ACK).

###### 10.2.3.5 Send telegrams
Purpose Check that BDUT can send a group telegram and (if implemented) a broadcast and an
individually addressed telegram.

Procedure Stimulate BDUT to send a group telegram, a broadcast telegram and an individually
addressed telegram. Check telegrams with EITT.

OUT     BC 1001 1002 E1 00 81

OUT     BC 1001 0000 E3 00 C0 12 34 :SetPhysAddr(Addr=1234)

OUT     B0 1001 AFFE 60 80 :T-Connect(Addr=AFFE)

Result BDUT sends all telegrams correctly.

###### 10.2.3.6 BDUT is a Router
Purpose Check routing of telegrams.

Procedure Send an individually addressed telegram to the BDUT.

Send a group addressed telegram to the BDUT.

Send a broadcast telegram to the BDUT.

Result BDUT routes the individually addressed frame according to its own individual address,
the group telegram according to the setting of the filter tables, and the broadcast telegram
in any case.

(Examples of Test sequences : to be completed)


-----

###### 10.2.4 Information length

 10.2.4.1 Info Length: Send
Purpose Check that BDUT can send frames with different (minimum and maximum supported)
info lengths.

Procedure Stimulate BDUT to send a

a) T-Disconnect

b) A memory response with maximum info length (check with EITT):

OUT     BC 1001 AFFE 60 81 (T-Disconnect)

OUT     BC 1001 AFFE 6F 42 52 01 16 01 02 03 04 05 06 07 08 09 00A 0B OC
(Memory Response, Count =12, Addr=0116, Data : 01 02 03 04 05 06 07 08 09 0A 0B
OC)

Result BDUT creates frames with information length set correctly.

###### 10.2.4.2 Info Length: Receive
Purpose Check that BDUT receives frames with different (minimum and maximum supported)
info lengths.

Procedure Send frames from EITT to BDUT with different info lengths:

IN     BC AFFE 1001 60 80 (T-Connect)

IN     BC AFFE 1001 6F 42 52 01 16 01 02 03 04 05 06 07 08 09 00A 0B OC
(Memory Response, Count =12, Addr=0116, Data : 01 02 03 04 05 06 07 08 09 0A 0B
OC):

Result BDUT accepts frames (sends ACK).

###### 10.2.4.3 Incorrect Info Length: Receive (Optional)
Purpose Check that BDUT does not accept frames with incorrectly set info length.

Procedure Send frames from EITT to BDUT with information length not corresponding to number
of sent data:

IN     BC AFFE 1002 EF 00 81

IN     BC AFFE 1002 E2 00 80 00 00 00 00 00 00 00 00 00 00 00 00 00 00 :

Result BDUT does not accept frames (sends no ACK).

###### 10.2.5 Check Octet

 10.2.5.1 Checksum: Send
Purpose Check if BDUT sets the checksum byte correctly when sending a frame.

Procedure Stimulate BDUT to send a frame. Use the BCU Terminal connected to EITT to check
the correct calculation of the checksum.

OUT     BC 1001 1002 E1 00 81

Result BDUT sets checksum correctly.


-----

###### 10.2.5.2 Checksum: Receive
Purpose Check if BDUT rejects a frame with incorrect checksum.

Procedure Use Waveform Generator to send a frame addressed to the BDUT with incorrect
checksum.

OUT     BC 1001 1002 E1 00 81

Result BDUT sends NACK. Check that the BDUT does not update the sent value (in the case of
an actuator by visual check or in the case of a sensor by reading out the value of the
addressed object)

###### 10.2.6 Confirmation Field

 10.2.6.1 Sending of Ack, Nack, Busy
Purpose Check if BDUT is always able to respond to frames addressed to it by means of the
appropriate acknowledge frame (ACK, Nack or Busy [13)]. This shall be ensured for
physically and group addressed frames.

Procedure Send frame to BDUT and check correct generation of acknowledge frame. Check in
PICS under which conditions which a Busy signal is transmitted (e.g. in case of BCU2
device: program EEPROM and send group telegram addressed to BDUT)

Result BDUT sends correct acknowledgement frame.

###### 10.2.6.2 Repetition
Purpose Check if BDUT is able to repeat a frame.

Procedure Stimulate BDUT to send telegram, which triggers via the sent line of the BDUT the
Waveform Generator to send

a) a NACK

b) Busy

c) no frame

d) overlapping NACK and Busy

Result BDUT repeats frame with the repetition flag set.

###### 10.2.6.3 Receive ACK
Purpose Check if BDUT does not repeat a frame if it receives an ACK.

Procedure Stimulate BDUT to send a frame to which another device responds with ACK.

Result BDUT does not repeat frame.

13) The applicant shall declare in the supplied PICS-proforma how a busy signal can be invoked. In some cases (e.g.
the use of sufficiently fast microprocessors), the generation of a Busy might never be possible. However, the fact
that a device does not send a busy, does not imply that it shall not repeat messages when receiving a busy. This
is tested in clause 10.2.6.2.


-----

###### 10.2.7 Polling Frames: BDUT is Master

 10.2.7.1 Sending legal Length
Purpose Check if BDUT generates valid master frames with different lengths and no slave
answers.

Procedure Stimulate BDUT to send master frames to non-existing polling group.

OUT      F0 1001 1004 00

OUT      F0 1001 1004 01 FE

...

OUT      F0 1001 1004 0F FE FE FE FE FE ...

Result BDUT sends frames correctly and fills all slots with the fill byte FEh.

###### 10.2.7.2 Slave sends FEh
Purpose Check if BDUT does not evaluate the value FEh as a slave answer.

Procedure Stimulate BDUT to send polling request on existing polling group with number of
expected poll data = 1. A slave sends the value FEh in the first slot.

Result BDUT treats the answer identical to a master fill byte.

###### 10.2.8 Polling Frames: BDUT is Slave

 10.2.8.1 Other polling group
Purpose Check if BDUT does not answer on a master frame with a polling group not supported
by the BDUT.

Procedure Generate master frames with polling group not supported by the BDUT.

IN      F0 1001 1005 00

IN      F0 1001 1005 01 FE

...

IN      F0 1001 1005 0F FE FE FE FE FE ...

Result BDUT does not answer in any slot.

###### 10.2.8.2 Length = 0
Purpose Check if BDUT does not answer to a master frame with number of slots = 0.

Procedure Generate master frames with number of slots = 0.

IN      F0 1001 1004 00

Result BDUT does not answer.


-----

###### 10.2.8.3 Length > 0
Purpose Check if BDUT does not answer to a master frame with number of slots lower than own
slot number (e.g. requested number of poll data from master is 6 and slave’s slot number
is 6). Note that the slot number is counted from 0 to 14 whereas the number of requested
slots from 1 to 15.

Procedure Generate master frames with number of slots = 6.

IN      F0 1001 1004 06

Result BDUT does not answer.

###### 10.2.8.4 Length > 15
Purpose Check if BDUT does not answer to a master frame with number of slots > 15.

Procedure Generate master frames with number of slots = 16.

IN      F0 1001 1004 11

Result BDUT does not answer.

###### 10.2.8.5 Legal Length
Purpose Check if BDUT answers to a master frame with legal length.

Procedure Generate master frames with number of slots = 1 ... 15. BDUT answers in the slot for
which it was configured (e.g. in underneath example configured for slot number 0).

IN      F0 1001 1004 01

OUT        FF

IN      F0 1001 1004 02

OUT        FF FE

IN      F0 1001 1004 0F

OUT FF FE FE FE FE FE FE FE FE FE FE FE FE FE FE

Result BDUT answers correctly.

###### 10.3 Busmonitor Mode of the Link Layer
The Busmonitor mode is tested in [04].


-----

###### 11 Bus Load tests

 11.1.1 Requirements for end devices
It shall be ensured that bus devices can cope with a minimum busload and do not disturb bus by e.g.
generating unneeded L2-BUSY characters. Busload shall be generated and measured using the formula
given in [02]. Appropriate software tools that do so are currently manufacturer specific.

###### 11.1.1.1 Requirements when device is receiving
A device shall be able to receive high busload. There shall be no different behaviour for different busload
types.

**Table 26 - Testing high busload only receiving**

**Busload** **Busload** **Expected**

**Busload composition** **Test objective**

**type** **level** **behaviour**

1 Uniform High Point to Point (device is not IGNORE[ 14)] Device shall not disturb onaddressed) going point to point

communication if it is not
addressed

2 Uniform High Multicast (device is not ACK[ 15)]/ Device shall not disturb onaddressed) IGNORE going multicast

communication, if it is not
addressed.

3 Uniform High Point to Point (device is not IGNORE (only for Device shall not disturb onaddressed) in addition to 1 not addressed/ going point to point
frame Point to Point (device ACK (only for communication if it is not
is addressed) addressed addressed even when it is

frames) evaluating a point-to-point

frame.

4 Uniform High Multicast (device is not ACK [14)]/ Device shall not disturb onaddressed) in addition to 1 IGNORE (only if going multicast
frame Multicast (device is not addressed) communication, if it is not
addressed) addressed even when it is

evaluating a multicast
frame

5 Uniform High Multicast (device is not IGNORE (only if Device shall not disturb onaddressed) in addition to 1 not addressed)/ going multicast
frame Broadcast (device is ACK [14)] communication, if it is not
addressed) addressed even when it is

evaluating a Broadcast
frame

14) IGNORE: DUT sends no Acknowledge frame
15) Devices are allowed to send Data Link Layer acknowledge frames on multicast traffic in a non-selective way.

|Col1|Busload<br>type|Busload<br>level|Busload composition|Expected<br>behaviour|Test objective|
|---|---|---|---|---|---|
|1|Uniform|High|Point to Point (device is not<br>addressed)|IGNORE 14)|Device shall not disturb on-<br>going point to point<br>communication if it is not<br>addressed|
|2|Uniform|High|Multicast (device is not<br>addressed)|ACK 15)/ <br>IGNORE|Device shall not disturb on-<br>going multicast<br>communication, if it is not<br>addressed.|
|3|Uniform|High|Point to Point (device is not<br>addressed) in addition to 1<br>frame Point to Point (device<br>is addressed)|IGNORE (only for<br>not addressed/<br>ACK (only for<br>addressed<br>frames)|Device shall not disturb on-<br>going point to point<br>communication if it is not<br>addressed even when it is<br>evaluating a point-to-point<br>frame.|
|4|Uniform|High|Multicast (device is not<br>addressed) in addition to 1<br>frame Multicast (device is<br>addressed)|ACK14)/<br>IGNORE (only if<br>not addressed)|Device shall not disturb on-<br>going multicast<br>communication, if it is not<br>addressed even when it is<br>evaluating a multicast<br>frame|
|5|Uniform|High|Multicast (device is not<br>addressed) in addition to 1<br>frame Broadcast (device is<br>addressed)|IGNORE (only if<br>not addressed)/<br>ACK14)|Device shall not disturb on-<br>going multicast<br>communication, if it is not<br>addressed even when it is<br>evaluating a Broadcast<br>frame|


-----

###### 11.1.1.2 Requirements when device is receiving and transmitting
At medium busload level the device shall be able to send during on-going bus traffic.

**Table 27 - Testing receiving and transmitting at medium busload**

**Busload** **Busload** **Expected**

**Busload composition** **Test objective**

**type** **level** **behaviour**

1 Uniform Medium Point to Point (device is ACK / Device shall not disturb on-going
not addressed) in addition IGNORE point to point communication, if it
to 1 frame Point to Point (only if not is not addressed. It shall be able
(device is addressed and addressed) + to evaluate 1frame point to point
answers to this frame) answer communication without

generating BUSY. It shall be able
to send point to point frames at
medium busload.

2 Uniform Medium Multicast (device is not ACK / Device shall not disturb on-going
addressed) in addition to IGNORE multicast communication, if it is
1 frame Multicast (device (only if not not addressed. It shall be able to
is addressed and answers addressed) + evaluate 1frame multicast
to this frame, e.g. value answer communication without
read) generating BUSY. It shall be able

to send multicast frames at
medium busload.

3 Uniform Medium Multicast (device is not ACK / Device shall not disturb on-going
addressed) in addition to IGNORE multicast communication, if it is
1 frame Broadcast (only if not not addressed. It shall be able to
(device is addressed and addressed) + evaluate 1frame broadcast
answers to this frame, answer communication without
e.g. PH Address read and generating BUSY. It shall be able
device is in programming to send broadcast frames at
mode) medium busload.

###### 11.1.2 Requirements on Couplers

 11.1.2.1 Common requirements
In addition to the test suite for normal end devices, a coupler shall fulfil the additional requirements given
in this clause.

###### 11.1.2.2 Requirements receiving and transmitting
A coupler is required to route a high busload to its other side if the medium of the other line has the same
or a bigger speed. For all tests the coupler never needs to send repetitions because of missing L2-ACK on
the other side of the coupler. This can be done by either putting an L2-ACK generator on the other side of
the coupler or by setting the parameters to “no repetitions on routing” if this is possible.

|Col1|Busload<br>type|Busload<br>level|Busload composition|Expected<br>behaviour|Test objective|
|---|---|---|---|---|---|
|1|Uniform|Medium|Point to Point (device is<br>not addressed) in addition<br>to 1 frame Point to Point<br>(device is addressed and<br>answers to this frame)|ACK /<br>IGNORE<br>(only if not<br>addressed) +<br>answer|Device shall not disturb on-going<br>point to point communication, if it<br>is not addressed. It shall be able<br>to evaluate 1frame point to point<br>communication without<br>generating BUSY. It shall be able<br>to send point to point frames at<br>medium busload.|
|2|Uniform|Medium|Multicast (device is not<br>addressed) in addition to<br>1 frame Multicast (device<br>is addressed and answers<br>to this frame, e.g. value<br>read)|ACK /<br>IGNORE<br>(only if not<br>addressed) +<br>answer|Device shall not disturb on-going<br>multicast communication, if it is<br>not addressed. It shall be able to<br>evaluate 1frame multicast<br>communication without<br>generating BUSY. It shall be able<br>to send multicast frames at<br>medium busload.|
|3|Uniform|Medium|Multicast (device is not<br>addressed) in addition to<br>1 frame Broadcast<br>(device is addressed and<br>answers to this frame,<br>e.g. PH Address read and<br>device is in programming<br>mode)|ACK /<br>IGNORE<br>(only if not<br>addressed) +<br>answer|Device shall not disturb on-going<br>multicast communication, if it is<br>not addressed. It shall be able to<br>evaluate 1frame broadcast<br>communication without<br>generating BUSY. It shall be able<br>to send broadcast frames at<br>medium busload.|


-----

**Table 28 - Receiving and transmitting at high busload**

**Busload** **Busload** **Expected**

**Busload level** **Test objective**
**type** **composition** **behaviour**

1 Uniform High (on one side) Point to Point ACK + frame Coupler shall route point to point
(device is not sent to other communication at high busload
addressed) line without generating BUSY

2 Uniform High (on one side) Multicast ACK + frame Coupler shall route multicast
(device is not sent to other communication at high busload
addressed) line without generating BUSY

3 Uniform Both sides 35 % Point to Point ACK + frame Coupler shall route point to point
(frames must be (device is not sent to other communication from both sides
routed). This leads addressed) line simultaneously without
to a doubled generating BUSY if total busload
busload on both exceeds not the maximum
sides. busload for the media

4 Uniform Half of the high Multicast ACK + frame Coupler shall route multicast
busload at both (device is not sent to other communication from both sides
sides (frames must addressed) line simultaneously without
be routed). This generating BUSY if total busload
leads to a doubled exceeds not the maximum
busload on both busload for the media
sides.

###### 12 Applicable tests for devices with integrated certified system components
In the case where devices are submitted to the KNX certification process containing a certified system
component realizing the TP1 Physical Layer and/or (part of) the Data Link Layer, the KNX certification
department shall be contacted to obtain a list of the tests from this volume part that still need to be
performed for the used system component.

|Col1|Busload<br>type|Busload level|Busload<br>composition|Expected<br>behaviour|Test objective|
|---|---|---|---|---|---|
|1|Uniform|High (on one side)|Point to Point<br>(device is not<br>addressed)|ACK + frame<br>sent to other<br>line|Coupler shall route point to point<br>communication at high busload<br>without generating BUSY|
|2|Uniform|High (on one side)|Multicast<br>(device is not<br>addressed)|ACK + frame<br>sent to other<br>line|Coupler shall route multicast<br>communication at high busload<br>without generating BUSY|
|3|Uniform|Both sides 35 %<br>(frames must be<br>routed). This leads<br>to a doubled<br>busload on both<br>sides.|Point to Point<br>(device is not<br>addressed)|ACK + frame<br>sent to other<br>line|Coupler shall route point to point<br>communication from both sides<br>simultaneously without<br>generating BUSY if total busload<br>exceeds not the maximum<br>busload for the media|
|4|Uniform|Half of the high<br>busload at both<br>sides (frames must<br>be routed). This<br>leads to a doubled<br>busload on both<br>sides.|Multicast<br>(device is not<br>addressed)|ACK + frame<br>sent to other<br>line|Coupler shall route multicast<br>communication from both sides<br>simultaneously without<br>generating BUSY if total busload<br>exceeds not the maximum<br>busload for the media|


-----

