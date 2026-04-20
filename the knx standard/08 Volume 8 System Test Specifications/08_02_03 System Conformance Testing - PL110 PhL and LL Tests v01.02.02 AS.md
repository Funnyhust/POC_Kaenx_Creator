# System Conformance Testing

## Medium Dependant Layers Tests

 PL110 Physical and Link Layer Tests

Summary

This document contains the Physical and Link Layer test specifications
for the PL110 Medium.

This document is part of the KNX Specifications v2.1.

Version 01.02.02 is a KNX Approved Standard.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.12.01 Approved Standard

1.1 2005.02.25 Approved Standard – integration of AN058

1.2 2008.06.02 Integration of AN061

01.02.01 2013.10.23 Editorial updates for the publication of KNX Specifications 2.1.

01.02.02 2013.11.29 Editorial updates.

Filename: 08_02_03 System Conformance Testing - PL110 PhL and LL Tests v01.02.02 AS.docx
Version: 01.02.02
Status: Approved Standard
Savedate: 2013.11.29
Number of pages: 32

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.12.01|Approved Standard|
|1.1|2005.02.25|Approved Standard – integration of AN058|
|1.2|2008.06.02|Integration of AN061|
|01.02.01|2013.10.23|Editorial updates for the publication of KNX Specifications 2.1.|
|01.02.02|2013.11.29|Editorial updates.|


-----

#### Contents

###### 1 Foreword ................................................................................................................................. 5

 2 Abbreviations .......................................................................................................................... 5

 3 General Requirements ........................................................................................................... 6 3.1 Environment ................................................................................................................... 6 3.2 Test-equipment ............................................................................................................... 6 3.2.1 Test Software ...................................................................................................... 6 3.2.2 Test Hardware ..................................................................................................... 8 3.2.3 Special KNX-Test-Equipment: Overview, Circuit Diagrams and Parts Listing ................................................................................................................. 8

 4 RF-Impedance ...................................................................................................................... 12 4.1 Transmitter-Impedance ................................................................................................. 12 4.1.1 Test Preparation ................................................................................................ 12 4.1.2 Testing............................................................................................................... 12 4.1.3 Requirements .................................................................................................... 12 4.2 Receiver-Impedance ..................................................................................................... 12 4.2.1 Test Preparation ................................................................................................ 13 4.2.2 Testing............................................................................................................... 13 4.2.3 Requirements .................................................................................................... 13

 5 Receiver-Sensitivity .............................................................................................................. 14 5.1 Test Preparation ............................................................................................................ 14 5.2 Testing .......................................................................................................................... 14 5.3 Requirements ................................................................................................................ 14

 6 Carrier-Frequency Precision Test ...................................................................................... 15 6.1 Test Preparation ............................................................................................................ 15 6.2 Testing .......................................................................................................................... 15 6.3 Requirements ................................................................................................................ 15

 7 Bit-Timing ............................................................................................................................. 16 7.1 Test Preparation ............................................................................................................ 16 7.2 Testing .......................................................................................................................... 16 7.3 Requirements ................................................................................................................ 17

 8 Power-Test ............................................................................................................................ 18 8.1 230V Power-Dissipation ............................................................................................... 18 8.1.1 Test Preparation ................................................................................................ 18 8.1.2 Testing............................................................................................................... 18 8.1.3 Requirements .................................................................................................... 18 8.2 DC-Power-Output ......................................................................................................... 18 8.2.1 Test Preparation ................................................................................................ 19 8.2.2 Testing............................................................................................................... 19 8.2.3 Requirements .................................................................................................... 19

 9 Link Layer Tests .................................................................................................................. 20 9.1 Test preparation ............................................................................................................ 20 9.1.1 Test setup .......................................................................................................... 20 9.1.2 Indication of the test result: ............................................................................... 21 9.1.3 Single and double bit errors .............................................................................. 21 9.2 Valid Telegrams without bit-errors .............................................................................. 21


-----

###### 9.2.1 Basic test-telegram used for checking test-set up ............................................. 21 9.2.2 Test-telegram with changed destination (group) address ................................. 21 9.2.3 Test-telegram with changed system-ID ............................................................ 22 9.2.4 Telegram with a modified training sequence .................................................... 22 9.2.5 Telegram with invalid Control Field ................................................................. 22 9.2.6 Telegram with invalid length information ........................................................ 22 9.2.7 Telegram with invalid Group Address range .................................................... 22 9.3 Telegrams modified by bit-errors ................................................................................. 22 9.3.1 Telegram with preamble byte modified by bit-error ......................................... 22 9.3.2 Telegram with data byte modified by bit-error ................................................. 23 9.3.3 Telegram with 4-bit error-correction of one data byte modified by bit- error ................................................................................................................... 23 9.3.4 Telegram with checksum-byte modified by bit-error ....................................... 23 9.3.5 Telegram with system-ID-byte modified by bit-error ...................................... 24

 10 Telegram Timing Tests ........................................................................................................ 25
 10.1 Test preparation ............................................................................................................ 25 10.2 Time slot for ACK telegram ......................................................................................... 26
 10.2.1 Test Preparation ................................................................................................ 26 10.2.2 Testing............................................................................................................... 26 10.2.3 Requirements .................................................................................................... 26 10.3 Time between two communication cycles .................................................................... 26
 10.3.1 Telegram with system priority .......................................................................... 26 10.3.2 Telegrams with low priority.............................................................................. 26 10.4 Time between telegram and repeated telegram ............................................................ 27
 10.4.1 Test Preparation ................................................................................................ 27 10.4.2 Testing............................................................................................................... 27 10.4.3 Requirements .................................................................................................... 27

 11 Repeater Test ........................................................................................................................ 28
 11.1 General Test Set-UP ..................................................................................................... 28
 11.1.1 Hardware ........................................................................................................... 28 11.1.2 Software ............................................................................................................ 29 11.2 Repeater Idle Test ......................................................................................................... 29
 11.2.1 Test preparation ................................................................................................ 30 11.2.2 Testing............................................................................................................... 30 11.2.3 Requirements .................................................................................................... 30 11.3 Test Repeated and Acknowledged Frame .................................................................... 30
 11.3.1 Test preparation ................................................................................................ 30 11.3.2 Testing............................................................................................................... 31 11.3.3 Requirements .................................................................................................... 31 11.4 Test Repeated and Not Acknowledged Frame ............................................................. 31
 11.4.1 Test preparation ................................................................................................ 31 11.4.2 Testing............................................................................................................... 31 11.4.3 Requirements .................................................................................................... 32 11.5 Group Speaker Test ...................................................................................................... 32
 11.5.1 Test Preparation ................................................................................................ 32 11.5.2 Requirements .................................................................................................... 32


-----

### 1 Foreword
###### The following document describes the PL110 physical layer tests only. See other documents for twisted pair and radio-frequency physical layers.

 A complete set of all test-programs and helpful software mentioned below is enclosed with the PL110_TESTCD.

 A detailed description of the special equipment used for the PL110 physical layer tests can be found in chapter 3.2.3.

### 2 Abbreviations

AC Alternating Current

BAU Bus Access Unit

BCD Bus Connected Device

BCU Bus coupling unit (Standardised BAU)

BW Bandwidth

DC Direct Current

DSO Digital Storage Oscilloscope

DUT Device under test

HB KNX Specifications

PEI Physical External Interface

MAU Medium Access Unit, Part of BAU, BCD and BCU

DMM Digital Multimeter


-----

### 3 General Requirements

#### 3.1 Environment

- Testing shall be carried out in an environment, which does not influence the test results.

- Only calibrated test equipment shall be used.

- Test set-ups shall be as small as possible (if not specified otherwise) to avoid voltage drops along the
wires and parasitic induction.

- The ambient temperature shall be taken into account for testing. The operating range of the tested
devices, as specified by the manufacturer in the supplied instruction sheets, shall also be taken into
account.

#### 3.2 Test-equipment

##### 3.2.1 Test Software
###### To carry out the tests described later in this document, the Bus Device under Test (BDUT) must be stimulated to allow measurements at the physical layer level. The conditions for stimulation or observing the behavior are given in the test programs table. For devices providing a PEI a set of helpful programs is available. These programs are loaded into the BDUT by means of a suitable program and a serial interface (EDI). The download can be carried out using the busmonitor program stored on the KNX PL110-Test-CD. Next to the Busmonitor software, the test-CD contains a collection of other required software tools.

 For devices without PEI it can be necessary to have other software or device-modification to stimulate the BDUT for the described tests. In such cases it should be stated in the test report how or by what means the BDUT was stimulated for the test. The column “BDUT without PEI” gives hints for the required stimulation of the BDUT. 

 For simplification the test set-ups are shown with devices providing a PEI.

 The names of all test-programs are made up of 8 characters:

 [medium type][program type, ‘A’ to ‘Z’][version, 01 to99] Example: PL110B01.


-----

###### Unless stated otherwise, following addresses are used in the given test-software:

 1. System-ID: 01

 2. Group-address: 0001

 3. Physical address for Transmitters: 0001

 4. Physical address for receivers 0002

 Other valid addresses can be used under the condition that the error correction nibble and the check octet are calculated accordingly. See sub clause 9.1.1 for more information.

**Table 1 – Test programs**

|DUT with PEI|Col2|DUT without PEI|Usage|
|---|---|---|---|
|**Name**|**Usage/Remarks**|**Description**|**Chapter**|
|PL110A01|Sensor No 6118 to be connected to<br>DUT<br>key ‘↓’ starts frequency ‘0’<br>key ‘↑’ starts frequency ‘1’<br>key ‘I’ starts ‘0011’<br>key ‘O’ stops transmission|Continuous transmitter for frequency<br>”0”<br>Continuous transmitter for frequency<br>”1”<br>Continuous transmitter for frequencies<br>for ‘0011’ (in turns)|6.2<br>6.2<br>7.2|
|PL110B01|Sensor No 6118 to be connected to<br>DUT.<br>key ‘I’ starts cyclic transmission<br>key ‘O’ stops transmission<br>Repeater Flag must be set to ”0” to<br>avoid telegram repetition. Write $EF to<br>BCU-memory-location $101 for this<br>purpose.|Cyclic transmission of telegrams with<br>approx. 2 telegrams/sec. Each<br>telegram is indicated e.g. by a flash of<br>a LED<br>Repeater flag must be set to ”0” to<br>avoid telegram repetition. Write $EF<br>to BCU-memory-location $101 for this<br>purpose.|4.2.1<br>8.1.2|
|PL110C01|receiver for PL110B01; each received<br>telegram is indicated by a flash of the<br>programming LED. Do not connect any<br>device to the receiver´s PEI-connector<br>while testing.|Receiver for telegrams; each received<br>telegram is indicated e.g. by flash of a<br>LED or ACK|5.2<br>9.1.2|
|PL110C02|receiver for PL110B01; each received<br>telegram is indicated by a flash of the<br>programming LED and an ACK. Do not<br>connect any device to the receiver´s<br>PEI-connector while testing.|See PL110C01|5.2<br>9.1.2|
|PL110Dxx|Sensor No 6118 is to be connected to<br>transmitter BCU<br>key ‘I’ transmits one telegram without<br>errors<br>key ‘↑’ transmits changed telegram<br>See chapter 9 for comprehensive<br>details.|Transmitter for valid telegrams with<br>changed parts within the telegram<br>See chapter 9 for comprehensive<br>details.|9.2|
|PL110Exx|Sensor No 6118 is to be connected to<br>transmitter BCU<br>key ‘I’ transmits one telegram without<br>errors<br>key ‘↑’ transmits one telegram with 1<br>error|Transmitter for telegrams with one or<br>two bit errors for link-layer tests<br>See chapter 9 for comprehensive<br>details.|9.3|


-----

|DUT with PEI|Col2|DUT without PEI|Usage|
|---|---|---|---|
|**Name**|**Usage/Remarks**|**Description**|**Chapter**|
||key ‘↓’ transmits one telegram with 2<br>errors<br>See chapter 9 for comprehensive<br>details.|||
|PL110Fxx|Transmitting telegrams for link-layer<br>tests.<br>See chapter 10 for comprehensive<br>details.|Transmitting telegrams for link-layer<br>tests.<br>See chapter 10 for comprehensive<br>details.|10.2<br>10.3<br>10.4|


##### 3.2.2 Test Hardware

- DSO: Digital Oscilloscope, Ri≥1MΩ, BW min. 20 MHz

- Function Generator: Standard; Ri = 50 Ω

- DMM Digital Multi-meter, Standard, Ri ≥ 1MΩ

- Power meter (Real Power meter range < 5W)

- Event-counter, standard, Ri≥10kΩ

##### 3.2.3 Special KNX-Test-Equipment: Overview, Circuit Diagrams and Parts Listing
For the Physical Layer Test of PL110, a set of special test-equipment is necessary. The following chapters
show the schematics and a detailed description of the test-modules.

**Table 2 – Test Devices**

**Test-Device** **Number** **Device used for**

RF-Transformer 1 Transmitter-Impedance Test
Carrier-Frequency Precision Test

RF-Load 2 Transmitter-Impedance Test

Amplifier and Signal-Injector 3 Receiver-Impedance Test

RF-Chokes 4 Receiver-Impedance Test

RF-Probe 5 Receiver-Impedance Test

Attenuator 6 Receiver-Sensitivity Test

Low-Pass-Filter 7 Bit-Duration Test

|Test-Device|Number|Device used for|
|---|---|---|
|RF-Transformer|1|Transmitter-Impedance Test<br>Carrier-Frequency Precision Test|
|RF-Load|2|Transmitter-Impedance Test|
|Amplifier and Signal-Injector|3|Receiver-Impedance Test|
|RF-Chokes|4|Receiver-Impedance Test|
|RF-Probe|5|Receiver-Impedance Test|
|Attenuator|6|Receiver-Sensitivity Test|
|Low-Pass-Filter|7|Bit-Duration Test|


-----

**Figure 1: Circuit Diagrams of Special KNX-Test Equipment**


-----

**Parts Listing for Special KNX-Test equipment**

|Part Value<br>BU1 BNC-connector female<br>BU2 BNC-connector female<br>BU3 BNC-connector female<br>BU4 BNC-connector female<br>BU5 BNC-connector female<br>BU6 BNC-connector female<br>C1 220n/400V<br>C10 8.2nF<br>C11 47nF<br>C12 47nF<br>C13 3µF/400V<br>C2 1µF/25V<br>C3 2µF/400V<br>C4 100µF Tantal<br>C5 100µF Tantal<br>C6 470nF/400V<br>C7 470nF/400V<br>C8 470nF/400V<br>C9 470nF/400V<br>D1 BZW06/13 Suppressor diode<br>D2 LED, IF=2mA<br>IC1 LM4700<br>K1 4mm-connector female<br>K10 0,6mm Pin<br>K11 4mm-connector female<br>K12 4mm-connector female<br>K2 4mm-connector female<br>K3 4mm-connector female<br>K4 4mm-connector female<br>K5 4mm-connector female<br>K6 4mm-connector female<br>K7 4mm-connector female<br>K8 4mm-connector female<br>K9 0,6mm Pin<br>L1 96µH/1%<br>R1 100R/1W<br>R10 60R0<br>R11 37R5|Part Value<br>R12 37R5<br>R13 82R<br>R14 15R<br>R15 15R<br>R16 130R<br>R17 6R5<br>R18 6R5<br>R19 240R<br>R2 50R<br>R20 3R1<br>R21 3R1<br>R22 470R<br>R23 1k5<br>R24 100R/5W<br>R25 1R0/1W<br>R3 2k<br>R4 1k<br>R5 1k<br>R6 1k<br>R7 50R5<br>R8 135R<br>R9 135R<br>S1 Switch<br>S10 Switch<br>S11 switch<br>S12 switch<br>S2 switch<br>S3 switch<br>S4 switch<br>S5 switch<br>S6 switch<br>S7 switch<br>S8 switch<br>S9 switch<br>TR1 Siemens T38/R16 2x12 turns<br>TR2 Siemens T38/R16 2x14 turns<br>TR3 Siemens N27/R25-10 2x12 tns|
|---|---|
|All resistors have 1W power-dissipation and 1% tolerance unless otherwise stated.<br>All capacitors have 10% tolerance.|All resistors have 1W power-dissipation and 1% tolerance unless otherwise stated.<br>All capacitors have 10% tolerance.|


-----

###### 3.2.3.1 RF-Transformer
The RF-Transformer suppresses low frequency (50Hz and harmonics) disturbances as it is dimensioned
for a frequency-range from 50kHz to 200kHz. The transformer is a Siemens R16 toroid of T38 ferrite
with two windings of 12 turns, approx. 1mH each. A measurement-error of –1dB maximum should be
taken into account.

###### 3.2.3.2 RF-Load
The RF-Load is used for the transmitter-impedance test. It consists of a 1Ω/1W-resistor in series with a
3µF/400V capacitor.

###### 3.2.3.3 Amplifier and Signal-Injector
This device is used for coupling RF-Signals coming from a standard function generator on the 230VAC
mains line. The wideband transformer suitable for frequencies from 80kHz to 150kHz consists of a
Siemens R25/10 toroid, N27 ferrite, with 2x20 turns resulting in 2x1,2mH approximately. Other ferrites
such as 3C65-material may also be used. In this case core size and the number of turns has to be worked
out separately.

###### 3.2.3.4 RF-Chokes
The RF-chokes are used for impedance decoupling between the DUT and the artificial network for the
receiver-impedance measurement. In each conductor, L1 and Neutral one of the following chokes is
connected in series: Siemens R16 toroid, T38 ferrite, 20 turns, 3,3mH.

###### 3.2.3.5 RF-Probe
The RF-Probe allows the measurement of the RF-Signal with the receiver impedance test where the
measurement port of the CISPR16 artificial network is not accessible due to the usage of the RF-chokes.
The RF-Probe has a 100Ω input-impedance and is designed for connection to a high-impedance
measuring equipment of 10k or more input-impedance.
Note: The RF-Probe features no spike-protection. Disconnect the RF-Probe from the measuring device
before switching the 230V mains supply.

###### 3.2.3.6 RF-Attenuator
The RF-Attenuator is used for reduction of RF-signal-level on the 230VAC-line for the receiversensitivity test. It is designed for a symmetrical 50Ω-system. In case this attenuator is not terminated with
50Ω, the resulting attenuation deviates from the calculated value. This fact is unimportant as the true
signal level is measured by means of a measurement receiver or a spectrum analyser. The purpose of this
attenuator is the reduction of the signal level on the 230VAC-line only, a precise attenuation of each stage
is not necessary.

###### 3.2.3.7 Low-Pass-Filter
This filter is used to check the duration of high- and low-bits on the 230VAC mains. It shows a higher
signal amplitude at 105kHz than at 115kHz which makes high- or low-bits visible on an oscilloscope’s
screen. The filter was designed with “Rudolf Saal, Handbook of Filter Design”, filter no. c325/30.


-----

### 4 RF-Impedance 
To limit the influence of connected MAUs on the characteristic of the PL110 bus the impedance in
receiving mode shall be high. For signal-injection with minimum losses the impedance in transmitting
mode shall be low.

For easier measuring a load test is performed instead of a direct measurement of the impedance.

#### 4.1 Transmitter-Impedance

##### 4.1.1 Test Preparation

L1 L1

Supply CISPR16 DUT

Mains N Artificial N Transmit
Network Mode

50Ω Sensor-Module
Termination 6118

RF-Transformer

RF Load
1Ω+3µF
DSO
Hi-Z-Input

**Figure 2: Test circuit transmitter impedance**

###### Remark:

 See chapter 3.2.3 for equipment details.

##### 4.1.2 Testing
The device under test (DUT) is set to transmit mode using Test-Software PL110B01 and sensor-module
6118. Transmission is started with key “I”. The signal level is monitored with the digital storage
oscilloscope (DSO). Subsequently, a load impedance consisting of 1Ω in series with 3µF / 400V is
connected to the mains as shown above. The signal with and without the external load shall be recorded.

##### 4.1.3 Requirements
The signal level without the extra load shall be at least 112 dBµV.

With the 1Ω+3µF load the signal level shall not drop below 90dBµV.

The maximum signal level shall not exceed 122dBµV according EN 50065-1.

#### 4.2 Receiver-Impedance
Similar to the transmitter impedance test, also here a load test is conducted for simplification.

|L1 L1|Col2|L1|Col4|Col5|Col6|
|---|---|---|---|---|---|
|L1<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>RF Load<br>1Ω+3µF<br>DSO<br>Hi-Z-Input<br>50Ω<br>Termination<br>RF-Transformer<br>L1<br>N<br>N<br>Sensor-Module<br>6118|CISPR16<br>Artificial<br>Network|L1<br>N|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|
|L1<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>RF Load<br>1Ω+3µF<br>DSO<br>Hi-Z-Input<br>50Ω<br>Termination<br>RF-Transformer<br>L1<br>N<br>N<br>Sensor-Module<br>6118|CISPR16<br>Artificial<br>Network|L1<br>N|DUT<br>Transmit-<br>Mode|||
|L1<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>RF Load<br>1Ω+3µF<br>DSO<br>Hi-Z-Input<br>50Ω<br>Termination<br>RF-Transformer<br>L1<br>N<br>N<br>Sensor-Module<br>6118|CISPR16<br>Artificial<br>Network|L1<br>N|Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|


-----

##### 4.2.1 Test Preparation

Supply CISPR16 DUT

Mains Artificial RF-Chokes Receive
Network Mode

Signal-Injector

50Ω

+ Amplifier

Termination

Zout=100Ω

Function
RF-Probe,

Generator

Z=100Ω

DSO
Hi-Z-Input

**Figure 3: Test circuit receiver impedance**

NOTE 1 See chapter 3.2.3 for test equipment details.

##### 4.2.2 Testing
With the signal injector several mono-frequent sinusoidal signals are coupled on the mains line after the
CISPR16 artificial network. The chokes provide an impedance-decoupling between the DUT and the
artificial network.

First the chokes, the signal-injector and the RF-Probe are connected to the artificial mains network as
shown in Figure 3. The amplitude of the signal injector shall be adjusted to 1V peak-peak at the RFProbe for each frequency while the 230V AC mains supply is ON.

If the 230VAC causes interference the envelope signal is used for measuring.

Second the device under test (DUT) in receiving mode is connected to the mains as shown above. The
level of the injected signal with and without the DUT connected shall be recorded.

**Test-Description:**

Both the signal-injector and the RF-probe have an impedance of 100Ω each at 110kHz. If the connected
DUT has an impedance of 100Ω the signal seen at the DSO shows one third of the amplitude of the
signal-injector without any load. If the measured signal is below one third of the unloaded injector the
impedance of the DUT is less than 100Ω.

**Note:To check the test set-up a calibration can be made using a 100Ω/0.5W-resistor in series with a**
0.47µF/250VAC X7-capacitor instead of using the DUT. This test should be made with and without
230V mains supply at the artificial network.

##### 4.2.3 Requirements
The test is conducted at 100kHz, 105kHz, 110kHz, 115kHz, 120kHz

For each frequency the injected signal shall not drop below 0,50Vpp on connection of DUT.

|Signal-Injector<br>+ Amplifier<br>Z =100Ω<br>out|Col2|Col3|
|---|---|---|
|Signal-Injector<br>+ Amplifier<br>Zout=100Ω|||
|Function-<br>Generator|Function-<br>Generator|Function-<br>Generator|

|Preparation|Col2|Col3|
|---|---|---|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Signal-Injector<br>+ Amplifier<br>Zout=100Ω<br>50Ω<br>Termination<br>RF-Chokes<br>DSO<br>Hi-Z-Input<br>RF-Probe,<br>Z=100Ω<br>Function-<br>Generator||DUT<br>Receive-<br>Mode|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Signal-Injector<br>+ Amplifier<br>Zout=100Ω<br>50Ω<br>Termination<br>RF-Chokes<br>DSO<br>Hi-Z-Input<br>RF-Probe,<br>Z=100Ω<br>Function-<br>Generator||DSO<br>Hi-Z-Input|


-----

### 5 Receiver-Sensitivity

#### 5.1 Test Preparation

L1 L1

###### CISPR16 BCU

Supply

Artificial Transmit
Mains N N

Network Mode

50Ω

Sensor-Module

RF-Attenuator
Termination

6118

L1

###### CISPR16 DUT

Artificial Receive
N

Network Mode

RF-Transformer

Message

Counter

Analyser / (optional, see text
Meassuring-Receiver below)

with 50Ω
Termination

**Figure 4: Test circuit receiver sensitivity**

NOTE 2 See chapter 3.2.3 for details in test hardware.

#### 5.2 Testing
The transmitter is continuously sending messages using test program PL110B01. Pressing key “I” at the
connected sensor-module 6118 starts transmission. The receiver is running test-program PL110C01. The
transmitter indicates each telegram with one flash of the sensor-module´s build in LED. The receiver
indicates each correctly decoded telegram with one flash of the programming LED.

The signal is then reduced by the attenuator until messages are missing. The signal level where at least 98
of 100 messages are received shall be recorded.

If the connection of event-counters are desired, the indicating LEDs mentioned above are substituted by a
high-amplification optocoupler like a CNY17-4 or similar. The counting signal can be taken at the
collector of the optocoupler’s transistor when connecting the emitter to ground and supplying the
collector with a +5V-Source via a 20kΩ-Resistor.

#### 5.3 Requirements
The sensitivity of the receiver shall be better than 60dBµV.

|Col1|Col2|
|---|---|
|N||

|DUT<br>Receive-<br>Mode|Col2|Col3|
|---|---|---|
|DUT<br>Receive-<br>Mode|||
|Message<br>Counter<br>(optional, see text<br>below)|Message<br>Counter<br>(optional, see text<br>below)|Message<br>Counter<br>(optional, see text<br>below)|

|t Preparation L1 L1|ation|L1|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|CISPR16<br>Artificial<br>Network<br>BCU<br>Transmit-<br>Mode<br>RF-Attenuator<br>50Ω<br>Termination<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Analyser /<br>Meassuring-Receiver<br>with 50Ω<br>Termination<br>Sensor-Module<br>6118<br>Message<br>Counter<br>(optional, see text<br>below)<br>RF-Transformer<br>L1<br>L1<br>L1<br>N<br>N<br>N|CISPR16<br>Artificial<br>Network|L1|L1|L1|BCU<br>Transmit-<br>Mode|BCU<br>Transmit-<br>Mode|BCU<br>Transmit-<br>Mode|
|CISPR16<br>Artificial<br>Network<br>BCU<br>Transmit-<br>Mode<br>RF-Attenuator<br>50Ω<br>Termination<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Analyser /<br>Meassuring-Receiver<br>with 50Ω<br>Termination<br>Sensor-Module<br>6118<br>Message<br>Counter<br>(optional, see text<br>below)<br>RF-Transformer<br>L1<br>L1<br>L1<br>N<br>N<br>N|CISPR16<br>Artificial<br>Network|N|N|||||
|CISPR16<br>Artificial<br>Network<br>BCU<br>Transmit-<br>Mode<br>RF-Attenuator<br>50Ω<br>Termination<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Analyser /<br>Meassuring-Receiver<br>with 50Ω<br>Termination<br>Sensor-Module<br>6118<br>Message<br>Counter<br>(optional, see text<br>below)<br>RF-Transformer<br>L1<br>L1<br>L1<br>N<br>N<br>N|CISPR16<br>Artificial<br>Network|N||||||
|CISPR16<br>Artificial<br>Network<br>BCU<br>Transmit-<br>Mode<br>RF-Attenuator<br>50Ω<br>Termination<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Analyser /<br>Meassuring-Receiver<br>with 50Ω<br>Termination<br>Sensor-Module<br>6118<br>Message<br>Counter<br>(optional, see text<br>below)<br>RF-Transformer<br>L1<br>L1<br>L1<br>N<br>N<br>N|CISPR16<br>Artificial<br>Network|N||||||
|CISPR16<br>Artificial<br>Network<br>BCU<br>Transmit-<br>Mode<br>RF-Attenuator<br>50Ω<br>Termination<br>CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>Analyser /<br>Meassuring-Receiver<br>with 50Ω<br>Termination<br>Sensor-Module<br>6118<br>Message<br>Counter<br>(optional, see text<br>below)<br>RF-Transformer<br>L1<br>L1<br>L1<br>N<br>N<br>N|CISPR16<br>Artificial<br>Network|N|||Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|


-----

### 6 Carrier-Frequency Precision Test

#### 6.1 Test Preparation

###### L1 L1
 DUT

Supply CISPR16 Transmit-Mode

Artificial

Mains N N Continous Tone

Network

###### 50Ω
Termination

Sensor-Module

6118

RF-Transformer

Frequency

Counter

**Figure 5: Test Set-up for Carrier-Frequency Precision Test**

#### 6.2 Testing
First of all test-program PL110A01 is loaded into DUT and a sensor-module 6118 is connected to the
DUT’s PEI Interface.

The usage of the test-program is explained in chapter 3.2.1.

The two carrier frequencies are measured with the frequency counter. The signal is taken via the RFtransformer to eliminate unwanted 50kHz and harmonics.

#### 6.3 Requirements

Frequency 1 is 105,5990 kHz ±100ppm (±10,6Hz)

Frequency 2 is 115,1989 kHz ±100ppm (±11,5Hz)


-----

### 7 Bit-Timing
With this test both the duration of one bit and the delay between the mains zero crossing and the start of a
bit is checked.

#### 7.1 Test Preparation 

L1 L1

###### CISPR16 DUT

Supply

Artificial Receive
Mains N N

Network Mode

Channel 2

###### 50Ω
Voltage Probe
###### Termination DSO

Channel 1

**Figure 6: Test Set-up for Bit Delay Test**

L1 L1

Supply CISPR16 DUT

Mains N Artificial N Transmit
Network Mode

Low-Pass Filter

Sensor-Module

6118

50Ω Termination

RF-Transformer

DSO
Hi-Z-Input

**Figure 7: Test Set-up for Bit-Duration Test**

NOTE 3 See Chapter 3.2.3 for test hardware details.

#### 7.2 Testing
**Testing Delay:**

With the DSO the time is measured between the mains zero-crossing (rising edge) and the beginning of a
bit. If no bit-clock signal is available a port pin shall provide this signal.

This test has to be carried out with a BCU in receive-mode without communication on the line.

|L1 L1|Col2|Col3|Col4|
|---|---|---|---|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>DSO<br>Chan<br>Voltage Probe<br>50Ω<br>Termination<br>L1<br>L1<br>N<br>N|DUT<br>Receive-<br>Mode|DUT<br>Receive-<br>Mode|DUT<br>Receive-<br>Mode|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>DSO<br>Chan<br>Voltage Probe<br>50Ω<br>Termination<br>L1<br>L1<br>N<br>N|DUT<br>Receive-<br>Mode||Chan|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Receive-<br>Mode<br>DSO<br>Chan<br>Voltage Probe<br>50Ω<br>Termination<br>L1<br>L1<br>N<br>N|DSO|DSO|DSO|

|L1 L1|Col2|Col3|Col4|
|---|---|---|---|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>DSO<br>Hi-Z-Input<br>Low-Pass Filter<br>RF-Transformer<br>50Ω Termination<br>L1<br>N<br>L1<br>N<br>Sensor-Module<br>6118|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>DSO<br>Hi-Z-Input<br>Low-Pass Filter<br>RF-Transformer<br>50Ω Termination<br>L1<br>N<br>L1<br>N<br>Sensor-Module<br>6118|DUT<br>Transmit-<br>Mode|||
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode<br>DSO<br>Hi-Z-Input<br>Low-Pass Filter<br>RF-Transformer<br>50Ω Termination<br>L1<br>N<br>L1<br>N<br>Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|


-----

**Testing Bit Duration:**

Test-program PL110A01 is loaded into the DUT and the transmission of a 00110011-endless-bit
sequence is initiated by pressing key ‘I’ of the connected sensor-module 6118. See chapter 3.2.1 for
software-details.

The duration for both 1- and 0- bits is measured with the digital storage oscilloscope.

Due to the filter the amplitudes of the two FSK-signals are different.

The transmitter sends two 0- and two 1-bits in turns in order to continuously get 0011 or 1100- transition.
This allows a more precise measuring than with single 10- or 01-transitions. Consequently the resulting
times for 0- and 1-bits have to be divided by two.

#### 7.3 Requirements
The delay between a bit sequence and the mains zero-crossing shall be less than 100µs.

The bit-duration for one shall be 833µs ± 8µs.


-----

### 8 Power-Test

#### 8.1 230V Power-Dissipation

##### 8.1.1 Test Preparation

Supply CISPR16 DUT

Artificial Power Transmit
Mains Network Meter Mode

Sensor-Module

6118

**Figure 8: Test setup for power consumption test**

NOTE 4 See chapter 3.2.3. for equipment details.

##### 8.1.2 Testing
The value of the real power consumption is recorded in receive and transmit mode.

For this test the mains voltage should be 230V ± 1% and no additional application hardware is connected
to the DUT.

In transmitting mode a continuous data stream is required. To ensure this the DUT is loaded with the
software PL110B01. Connecting a sensor-module 6118 to the DUT and pressing key “I” starts data
transmission.

##### 8.1.3 Requirements

###### 8.1.3.1 Transmit-Mode
The power consumption shall be less than 2W.

###### 8.1.3.2 Receive-Mode
The power consumption shall be less than 1.5 W.

#### 8.2 DC-Power-Output
With this test the DC-power-output of the PEI-connector is checked. KNX-applications like switches,
displays e.g. are supplied via this connector.

|st Preparation|Col2|Col3|Col4|
|---|---|---|---|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode <br>Power<br>Meter <br>Sensor-Module<br>6118|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|DUT<br>Transmit-<br>Mode|
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode <br>Power<br>Meter <br>Sensor-Module<br>6118|DUT<br>Transmit-<br>Mode|||
|CISPR16<br>Artificial<br>Network<br>DUT<br>Transmit-<br>Mode <br>Power<br>Meter <br>Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|Sensor-Module<br>6118|


CISPR16

Artificial
Network


Sensor-Module

6118


Supply

Mains


-----

##### 8.2.1 Test Preparation

L1 L1

CISPR16

Supply Artificial

Mains N Network N

50Ω
Termination

**Figure 9: Test setup for DC-Power-out-test**

|L1<br>N|CISPR16<br>Artificial<br>Network|L1<br>N|DUT<br>Transmit-<br>Mode|
|---|---|---|---|

|DC-Load<br>see text for details|Col2|Col3|
|---|---|---|
|DC-Load<br>see text for details|||
|DSO<br>Hi-Z-input|DSO<br>Hi-Z-input|DSO<br>Hi-Z-input|


I/O or

24V CTS PEI Type


GND


I/O or
RTS or
LED


GND I/O or I/O or I/O or 5V

RDI Clock TDO

**Figure 10: PEI-Connector**

##### 8.2.2 Testing
The DUT is set in receive-mode. A 510Ω-resistor is connected between the 5V and ground PEI-terminals.
The voltage at the 510Ω-resistor shall be recorded by the DMM .

Subsequently, the 510Ω-resistor is removed and a 12kΩ-resistor is connected between the 24V and the
ground-terminal of the PEI-connector. The voltage at the 12kΩ resistor shall be recorded by the DMM.

##### 8.2.3 Requirements

With the 510Ω-test the 5V-output shall not drop below 4.75V.

With the 12kΩ-test the 24V-output shall not drop below 20V.


-----

### 9 Link Layer Tests

#### 9.1 Test preparation

Bit Generator

L L

CISPR16 BCU

Supply Artificial Transmit
Mains N Network N Mode

50Ω Sensor-Module
Termination 6118

###### DUT
Receive
Mode

**Figure 11: Test setup for error-correction test**

##### 9.1.1 Test setup
The bit-generator and the DUT are connected to an artificial network according CISPR 16. The bitgenerator can be build up in different ways. To perform the tests described below the bit-generator should
be able to generate telegrams containing invalid parts e.g. error correction, checksum, control-field etc.
This can be done by using a waveform generator connected via the amplifier and signal-injector (test
device no. 3) to the mains. Frequencies and bit timing shall be chosen from Vol. 3 Part 2 Chapter 3
Clause 1. The calculation of the error correction must be done manually according Vol. 3 Part 2 Chapter 3
Clause 1.7.5. The check octet byte is calculated according Vol. 3 Part 2 Chapter 2 Clause 2.1.3.6.

As an alternative a bit-generator using a PL110 BCU, an application module 6118 and a set of software
can be used. The software is loaded into the BCU of the bit-generator. The contents of the telegrams
transmitted for the tests is located at the following memory-locations and are assigned to the 3 push
buttons connected to the PEI:

I : (transition from high to low at PEI pin 2 ) memory-location 01C5h to 01D6h (last 4 bits unused)

↑: (transition from high to low at PEI pin 3 ) memory-location 01D7h to 01E8h (last 4 bits unused)

↓: (transition from high to low at PEI pin 7 ) memory-location 01E9h to 01FAh (last 4 bits unused)

For each test the basic telegram is given at memory location from 01C5h to 01D6h .

The telegram with modifications is located in the memory from 01D7h to 01E8h .

For bit error tests the telegram with single bit error is located in memory from 01D7h to 01E. Telegram
with double bit error is located in memory from 01E9h to 01FAh .

The modified parts are underlined

When modifying, it shall be taken into account that the error correction and the check octet must be
calculated manually. The contents of those telegrams can be directly exchanged in the memory at the
above given locations using EITT or other tools.


-----

For simplification the method using the bit generator (BCU, Application module and test software) is
described in the test given below.

##### 9.1.2 Indication of the test result:
The DUT shall be able to indicate the correct reception and interpretation of a received telegram as a
positive result. This can be done by transmitting an ACK (program PL110C02) or by a flash of the
programming LED (program PL110C01).

**Positive result: The tests mentioned below will indicate a positive result by a flash of the programming**
LED at the DUT (PL110C01) or transmitting an ACK (PL110C02).

**Negative result:** A negative test is considered if the programming LED of the DUT remains
dark or no ACK is transmitted, depending on the loaded test program (PL110C01 or PL110C02).

##### 9.1.3 Single and double bit errors
The telegrams given below are examples and can be modified accordingly provided the error correction
nibble and the checksum octet are calculated. The single bit or double bit errors must be chosen very
carefully in a bit by bit method. The change from 01 to 03 is a single bit error while the change from 01 to
02 will lead to a double bit error:

###### 01: 0000 0001 basic value 02: 0000 0010 double bit error (0 changed to 1 and 1 changed to 0)
03: 0000 0011 single bit error (0 changed to 1)
To calculate the value for the error correction nibble the program PL110EC.EXE can be used.

#### 9.2 Valid Telegrams without bit-errors
Each test-program of the PL110Dxx series transmits a valid telegram when pressing key ‘I’ at the sensormodule. This allows a quick check of the correct test-setup. The transmitter sends a valid but partly
changed telegram when pressing key ‘↑’. The DUT shall acknowledge this as described in the tests given
below.

The changed parts within the telegrams are underlined.

##### 9.2.1 Basic test-telegram used for checking test-set up
Test-program PL110D01 is loaded into the transmitter BCU. Pressing ‚I‘-key at the sensor-module
transmits the basic telegram:

A B0 B0 B02 000 _01C 000 01C E1C 000 81F_ 2F2 01C

A Training sequence No error correction
B0 B0 Preamble No error correction
B0 LL Control field Error correction nibble 2
00 01 Source address Error correction nibbles 0, C
00 01 Group Address Error correction nibbles 0, C
E1 NL Control field Error correction nibble C
00 TL Control field Error correction nibble 0
81 AL Control field Error correction nibble F
2F Check octet * Error correction nibble 2
01 System –ID Error correction nibble C

- The check octet is calculated only for the part printed in italic characters.

Transmitting of this telegram shall cause a positive result at the DUT.

##### 9.2.2 Test-telegram with changed destination (group) address
Test-program PL110D02 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

|A B0 B0 B02 000 01C 000 01C E|E1C 000 81F 2F2 01C|Col3|
|---|---|---|
|A|Training sequence|No error correction|
|B0 B0|Preamble|No error correction|
|B0|LL Control field|Error correction nibble**2**|
|00 01|Source address|Error correction nibbles**0**, **C**|
|00 01|Group Address|Error correction nibbles**0**, **C**|
|E1|NL Control field|Error correction nibble**C**|
|00|TLControl field|Error correction nibble**0**|
|81|AL Control field|Error correction nibble**F**|
|2F|Check octet *|Error correction nibble**2**|
|01|System –ID|Error correction nibble**C**|


-----

A B0 B0 B02 000 01C 000 02B E1C 000 81F 2C5 01C

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.2.3 Test-telegram with changed system-ID
Test-program PL110D03 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E1C 000 81F 2F2 02B

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.2.4 Telegram with a modified training sequence
Test-program PL110D04 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

5 B0 B0 B02 000 01C 000 01C E1C 000 81F 2F2 01C

Transmitting of this telegram shall cause a positive result at the DUT because the training sequence is not
communication relevant.

##### 9.2.5 Telegram with invalid Control Field

Test-program PL110D05 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 A05 000 01C 000 01C E1C 000 81F 3F5 01C

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.2.6 Telegram with invalid length information

Test-program PL110D06 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E2B 000 81F 2C5 01C

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.2.7 Telegram with invalid Group Address range

Test-program PL110D07 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 803 01C E1B 000 81F AF1 01C

Transmitting of this telegram shall cause a negative result at the DUT.

#### 9.3 Telegrams modified by bit-errors
Each test-program of the PL110Exx-series transmits a valid telegram when pressing key ‘I’ at the sensormodule. This allows a quick check of the correct test-setup.

The transmitter sends a telegram with one 1-bit-error when pressing key ‘↑’

The transmitter sends a telegram with one 2-bit-error when pressing key ‘↓’.

The modified bytes within the telegrams are underlined.

##### 9.3.1 Telegram with preamble byte modified by bit-error 
Test-program PL110E01 is loaded into the transmitter BCU. Pressing ‚↓‘-key at the sensor-module
transmits the telegram:

A B3 B0 B02 000 01C 000 01C E1C 000 81F 2F2 01C


-----

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.3.2 Telegram with data byte modified by bit-error 

###### 9.3.2.1 Single Bit-Error Test
Test-program PL110E02 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 03C E1C 000 81F 2F2 01C

Transmitting of this telegram shall cause a positive result at the DUT.

###### 9.3.2.2 Double Bit-Error Test
Test-program PL110E02 is loaded into the transmitter BCU. Pressing ‚↓‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 02C E1C 000 81F 2F2 01C

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.3.3 Telegram with 4-bit error-correction of one data byte modified by bit-error 

###### 9.3.3.1 Single Bit-Error Test
Test-program PL110E03 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E14 000 81F 2F2 01C

Transmitting of this telegram shall cause a positive result at the DUT.

###### 9.3.3.2 Double Bit-Error Test
Test-program PL110E03 is loaded into the transmitter BCU. Pressing ‚↓‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E1A 000 81F 2F2 01C

Transmitting of this telegram shall cause a negative result at the DUT.

##### 9.3.4 Telegram with checksum-byte modified by bit-error 

###### 9.3.4.1 Single Bit-Error Test

Test-program PL1120E04 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E1C 000 81F 2E2 01C

Transmitting of this telegram shall cause a positive result at the DUT.

###### 9.3.4.2 Double Bit-Error Test
Test-program PL110E04 is loaded into the transmitter BCU. Pressing ‚↓‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E1C 000 81F 252 01C

Transmitting of this telegram shall cause a negative result at the DUT.


-----

##### 9.3.5 Telegram with system-ID-byte modified by bit-error 

###### 9.3.5.1 Single Bit-Error Test
Test-program PL110E05 is loaded into the transmitter BCU. Pressing ‚↑‘-key at the sensor-module
transmits the telegram:

A B0 B0 B02 000 01C 000 01C E1C 000 81F 2F2 11C

Transmitting of this telegram shall cause a positive result at the DUT.

###### 9.3.5.2 Double Bit-Error Test
Test-program PL110E05 is loaded into the transmitter BCU. Pressing ‚↓‘-key at the sensor-module
transmits the following telegram:
A B0 B0 B02 000 01C 000 01C E1C 000 81F 2F2 51C
Transmitting of this telegram shall cause a negative result at the DUT.


-----

### 10 Telegram Timing Tests

#### 10.1 Test preparation

###### BAU B

L L

CISPR16 BAU A

Supply Artificial

Mains N Network N

50Ω

PEI-Interface

Termination

Connection
(see text below)

RFTransformer

DUT

DSO

Trigger Input

(Hi-Z-Input)

**Figure 12: Test setup for telegram timing test**

###### The devices used in the test setup for measuring of telegram timing shall be able to influence each other to provoke transmissions. This can be achieved by synchronizing the BAU A and the DUT as specified in the timing diagram below. If there is a PEI available at the DUT as well as at BAU, the following connections can be made. In combination with the software mentioned in the test below the telegrams are transmitted in the required manner.

 Telegram Timing:

|N|Col2|Col3|
|---|---|---|

|t preparation|Col2|Col3|
|---|---|---|
|CISPR16<br>Artificial<br>Network<br>BAU A<br>50Ω<br>Termination<br>DUT<br>PEI-Interface<br>Connection<br>(see text below)<br>N<br>N<br>RF-<br>Transformer<br>DSO<br>(Hi-Z-Input)<br>L<br>L<br>Trigger Input<br>BAU B|CISPR16<br>Artificial<br>Network<br>BAU A<br>50Ω<br>Termination<br>DUT<br>PEI-Interface<br>Connection<br>(see text below)<br>N<br>N<br>RF-<br>Transformer<br>DSO<br>(Hi-Z-Input)<br>L<br>L<br>Trigger Input<br>BAU B|CISPR16<br>Artificial<br>Network<br>BAU A<br>50Ω<br>Termination<br>DUT<br>PEI-Interface<br>Connection<br>(see text below)<br>N<br>N<br>RF-<br>Transformer<br>DSO<br>(Hi-Z-Input)<br>L<br>L<br>Trigger Input<br>BAU B|
|CISPR16<br>Artificial<br>Network<br>BAU A<br>50Ω<br>Termination<br>DUT<br>PEI-Interface<br>Connection<br>(see text below)<br>N<br>N<br>RF-<br>Transformer<br>DSO<br>(Hi-Z-Input)<br>L<br>L<br>Trigger Input<br>BAU B|DSO<br>(Hi-Z-Input)|DSO<br>(Hi-Z-Input)|
|CISPR16<br>Artificial<br>Network<br>BAU A<br>50Ω<br>Termination<br>DUT<br>PEI-Interface<br>Connection<br>(see text below)<br>N<br>N<br>RF-<br>Transformer<br>DSO<br>(Hi-Z-Input)<br>L<br>L<br>Trigger Input<br>BAU B|DSO<br>(Hi-Z-Input)||

|Col1|Telegram of BAU A|Col3|
|---|---|---|

|Col1|Synchronization|Col3|
|---|---|---|

|Col1|ACK|Col3|
|---|---|---|

|Col1|Telegra|
|---|---|


Start of this telegram in
different time slots


Telegram of DUT


ACK


-----

**Table 3 - PEI-Connections between BAU A and DUT (see 8.2.1 for PEI-connector details)**

**BAU A** **DUT** **Remark**

**Pin** **Pin**

1 1 ground wire

9 2 wire, connect to DSO-trigger input also

5,6 - 430kΩ PEI-Type-Resistor BCU; no connection to DUT allowed from these
pins

- 5,6 430kΩ PEI-Type-Resistor DUT; no connection to BCU allowed from these
pins.

#### 10.2 Time slot for ACK telegram

##### 10.2.1 Test Preparation
The test-setup used is shown in Figure 12. For this test BAU B is omitted.

##### 10.2.2 Testing
###### BAU A is loaded with test program PL110F02 and DUT is loaded with test program PL110C02. 
With the DSO the time between the transmitted telegram and ACK shall be recorded.

##### 10.2.3 Requirements
The time between the telegram and ACK shall be between 1 and 5 bit times (0.833 ms up to 4.167 ms).

#### 10.3  Time between two communication cycles

##### 10.3.1 Telegram with system priority

###### 10.3.1.1 Test Preparation
The test-setup used is shown in Figure 12.

###### 10.3.1.2 Testing BAU A is loaded with test program PL110F02, BAU B is loaded with test program PL110C02 and DUT is loaded with test program PL110F03. 

BAU A sends a telegram. BAU B confirms the receipt with an ACK. The DUT is triggered by an impulse
via a connection between BAU A and the DUT. This will start a new communication cycle with system
priority (PL110F03).

With the DSO the time between the ACK of the first cycle and the telegram of the new cycle shall be
recorded.

###### 10.3.1.3 Requirements
The time between the ACK and the new telegram shall be 22 ± 2 bit times  (16.67 ms up to 20 ms).

##### 10.3.2 Telegrams with low priority

###### 10.3.2.1 Test Preparation
The test-setup used is shown in Figure 12.

|BAU A<br>Pin|DUT<br>Pin|Remark|
|---|---|---|
|1|1|ground wire|
|9|2|wire, connect to DSO-trigger input also|
|5,6|-|430kΩ PEI-Type-Resistor BCU; no connection to DUT allowed from these<br>pins|
|-|5,6|430kΩ PEI-Type-Resistor DUT; no connection to BCU allowed from these<br>pins.|


-----

###### 10.3.2.2 Testing BAU A is loaded with test program PL110F02, BAU B is loaded with test program PL110C02 and DUT is loaded with test program PL110F04. 

BAU A sends a telegram. BAU B will send an ACK. The DUT is triggered by an impulse via a
connection between BAU A and the DUT. This will start a new communication cycle with low priority
(PL110F04).

With the DSO the time between the ACK of the first cycle and the telegram of the new cycle shall be
recorded.

###### 10.3.2.3 Requirements
The telegrams must be recorded according the following structure:

The first valid time slot for the telegram start of a new communication cycle is at 38 ± 2 bit times (30 ms
up to 33.33 ms). The telegram start shall be within a grid of at least 7 different positions each separated
by at least 16 bit times (13.33 ms). The different positions shall appear at a random order. See also Fig. 27
of Vol. 3, Part 2, Chapter 3 for additional information.

#### 10.4 Time between telegram and repeated telegram

##### 10.4.1 Test Preparation
The test-setup used is shown in Figure 12. BAU A and BAU B are omitted.

##### 10.4.2 Testing
The DUT is loaded with test program PL110F03.

The DUT sends a telegram and a repeated telegram e.g. started with a high to low transition at PEI pin 2.
With the DSO the delay between telegrams shall be recorded.

##### 10.4.3 Requirements
The delay time between the first and the repeated telegram must be 40 ± 2 bit times (31.5 ms up to 35
ms).


-----

### 11 Repeater Test

#### 11.1 General Test Set-UP

##### 11.1.1 Hardware
The test set-up is depicted in the underneath figure and consists of:

  - one repeater as Bus Device Under Test (BDUT)

  - one additional BAU used as acknowledge generator (BAU B)

  - the KNX Interworking Test Tool, hereafter called EITT running on a PC, which is connected to
the bus via BAU A by an EDI (KNX data interface, PEI-Type 16)

  - an artificial network 50Ω / 50µH + 5Ω according CISPR 16 (Second Edition, Clause 8.2.1) shall
be installed next to the BDUT.

  - two attenuators, see description below for details

  - two KNX RF-Probes as described in clause 3.2.3

  - one RF-transformer as described in clause 3.2.3

  - one Digital Storage Oscilloscope (DSO) with at least 3 independent differential input channels for
measuring

EITT

BAU repeater BAU B

+
```
                               ACK 
```
230V EDI ( BDUT ) `gener`
```
                                tor
```
Supply
CISPR
artifcial
networ

230V 230V

Attenuator A Attenuator B

50 Ω KNX KNX
termination RF-Probe RF-Probe7

RF transform

DSO with differential Inputs

**Figure 13: Test Set-up for a repeater black-box test**


-----

DSO differential inputs:

Connecting three KNX RF-probes to an ordinary oscilloscope as shown above can reduce the effect of the
attenuators.

To avoid this unwanted effect, differential inputs or differential probes should be used.

Details of the attenuators:

The two attenuators mentioned above can be implemented as line filter sections of switched power
supplies. The value of the actual attenuation is unimportant – it should be high enough to prevent direct
communication between BAU A and BAU B. On the other hand BAU A and BAU B need to
communicate with the repeater (BDUT).

Schematic of an example of one attenuator

###### Phase Phase

 230V C1 C2 C3 230V Input Output
 L1 L2 L3
 Neutral Neutral

**Figure 14: Example of an attenuator**

Typical values for L1 = L2 = L3 = 2x6,8mH current compensated coil, C1 = 1µF, C2 = C3 = 220nF, X2
foil capacitors, 275V AC rated voltage. These values may be altered to reach the desired attenuation.

##### 11.1.2 Software
During the test the only tool used is the KNX Interworking Test Tool (EITT)

By means of EITT (in send mode) the BDUT and the BAU B are stimulated. The timing between
stimulus and reply telegram can be observed via a DSO.

Before carrying out the various tests or test steps, several values have to be set in the BDUT by means of
EITT. These relate amongst others to:

  - the individual address of the BDUT shall be set to 1101hex

  - the BAU A (EDI) shall have the individual address 1102 hex

  - the BAU B shall have the individual address 1103 hex

  - the domain address FEh shall be loaded into BAU A, BAU B and the BDUT

  - specific data (e.g. repeater mode), which has to be downloaded into a fixed memory area of the
BDUT

NOTE 5 The actual application software stored inside of BAU A, BAU B, and BDUT has to be provided with the corresponding
test report.

#### 11.2 Repeater Idle Test
###### A stimulus is sent by the EDI (group oriented communication).

 The time between the end of the stimulus and the beginning of the acknowledgement shall be measured.


-----

##### 11.2.1 Test preparation

  - BCU B shall be loaded with the address-table, association-table and group object table

  - Remove Attenuation A and Attenuation B

##### 11.2.2 Testing
The following telegrams shall be used:

DPT 1.001 telegram, source address 1102, destination address 1001, system priority:
```
IN  B0 1102 1001 E1 00 81 

```
DPT 1.001 telegram, source address 1102, destination address 1001, low priority:
```
IN  BC 1102 1001 E1 00 81

```
**Figure 15: Stimulus without repetition with acknowledge**

##### 11.2.3 Requirements
###### The BAU B shall start an acknowledgement frame within 5 bit times after the reception of the stimulus. 

 The BDUT shall not react!

#### 11.3 Test Repeated and Acknowledged Frame
###### A stimulus is sent by the EDI (group oriented communication). 

 The time between the end of the stimulus and the beginning of the repeated telegram shall be measured as well as the time between the end of the repeated telegram and the beginning of the acknowledgement frame.

##### 11.3.1 Test preparation
Install the attenuation A and the attenuation B.


-----

##### 11.3.2 Testing
DPT 1.001 telegram, source address 1102, destination address 1001, system priority:
```
IN  B0 1102 1001 E1 00 81 

```
DPT 1.001 telegram, source address 1102, destination address 1001, low priority:
```
IN  BC 1102 1001 E1 00 81

```
**Figure 16: Stimulus with repetition and acknowledge**

##### 11.3.3 Requirements
###### The BDUT shall start the repetition of the stimulus after 40±2 bit times. The BAU B shall start an acknowledgement frame within 5 bit times after the reception of the repeated stimulus. A Not Acknowledgement frame shall not be sent by the BDUT.

#### 11.4 Test Repeated and Not Acknowledged Frame
###### A stimulus is sent by the EDI (group oriented communication). The BDUT shall start the repetition of the stimulus. The BAU B shall not react. A not acknowledgement frame shall be sent by the BDUT.

##### 11.4.1 Test preparation
Remove BAU B, remove attenuation A and attenuation B.

##### 11.4.2 Testing
DPT 1.001 telegram, source address 1102, destination address 1001, system priority:
```
IN  B0 1102 1001 E1 00 81 

```
DPT 1.001 telegram, source address 1102, destination address 1001, low priority:
```
IN  BC 1102 1001 E1 00 81

```

-----

**Figure 17: Stimulus with repetition and not acknowledge**

##### 11.4.3 Requirements
The BDUT shall repeat the stimulus within 40±2 bit times and send a not acknowledgement frame within
22±2 bit times.

#### 11.5 Group Speaker Test
The usage of group speakers minimizes the number of acknowledges necessary when a group of BCUs is
addressed

##### 11.5.1 Test Preparation
For testing the group speaker functionality the test described in chapter 11.2 can be used where an
acknowledge frame is sent by BCU B.

The second test is done with group speaker functionality disabled.

##### 11.5.2 Requirements
With the group speaker functionality enabled an acknowledge frame is to be transmitted as described in
chapter 11.2.

With the group speaker functionality disabled an acknowledgement frame may not be sent.


-----

