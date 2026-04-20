KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

# Application Note 202/20 v01

**Title:** **KNX RF Multi Slow Low Energy**

**Status:** **Date:**

Draft Proposal 2020.07.14

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2020.07.14

**Subject:** Specification of possibilities for improved energy consumption in
KNX RF Multi Slow.

**Documents** **Modified**

[01] Chapter 3/3/7 “Application Layer” v01.06.05 AS of 2015.07.07

[02] Chapter 3/6/3 “External Message Interface” v01.03.03 of 2013.11.29

**Referred**

[03] Chapter 3/2/5 “Communication Medium RF” v01.06.03 AS of

2013.10.29

[04] AN186 “RF Multi S-Mode device Profiles” v02 DV of 2020.05.08.

**Document updates**

**Version** **Date** **Modifications**
KSG878-01 2019.09.20 - Document creation.
KSG878-02 2020.06.18 - Update after KSG presentation

               - Improve fields of Preamble Pattern

             - Change Slow DataRate
KSG878-03 2020.06.24 - Update after KSG meeting

              - Name the new Slow Mode as Slow LE (Low Energy) mode

               - Add a rule for the sender to use the same DoA + DestA in

Preamble Pattern and the DoA/Sn + Dest A in the payload

              - Use PID_RF_BIDIR_TIMEOUT with some restrictions,

instead of creating a new property.

                - Editorial

               - Update of duty cycle for SLE1, change of interFrame
KSG87-04 2020.07.14 - Editorial update in preparation of the KTB Voting.
AN202 v01 2020.07.14 - Preparation of the Draft Proposal.

Savedate: Filename: page 1 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Version|Date|Modifications|
|---|---|---|
|KSG878-01|2019.09.20| Document creation.|
|KSG878-02|2020.06.18| Update after KSG presentation<br> Improve fields of Preamble Pattern<br> Change Slow DataRate|
|KSG878-03|2020.06.24| Update after KSG meeting<br> Name the new Slow Mode as Slow LE (Low Energy) mode<br> Add a rule for the sender to use the same DoA + DestA in<br>Preamble Pattern and the DoA/Sn + Dest A in the payload<br> Use PID_RF_BIDIR_TIMEOUT with some restrictions,<br>instead of creating a new property.<br> Editorial<br> Update of duty cycle for SLE1, change of interFrame|
|KSG87-04|2020.07.14| Editorial update in preparation of the KTB Voting.|
|AN202 v01|2020.07.14| Preparation of the Draft Proposal.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Contents**

###### 1 Purpose, motivation and scope ........................................................................ 3
 1.1 Introduction ............................................................................................. 3 1.2 Motivation ................................................................................................ 3
 1.2.1 Power consumption influenced by other RF Slow devices ................ 3 1.2.2 Power consumption of Scanning mecanism ..................................... 3 1.2.3 Datarate for Slow Mode .................................................................... 5 1.3 Scope ...................................................................................................... 5
 1.3.1 KNX RF Systems .............................................................................. 6 1.3.2 KNX RF USB Interface ..................................................................... 6

 2 Specification ....................................................................................................... 6
 2.1 Terms and definitions .............................................................................. 6 2.2 Stack and communication ....................................................................... 6
 2.2.1 Slow Datarate ................................................................................... 6 2.2.2 Scanning mechanism (03_02_05 / 6.6.3.1.3.3.2 Fast Rx) ................ 9 2.2.3 Slow Mode Frame coding ............................................................... 10 2.2.4 Receiving use case ......................................................................... 13 2.3 Resource definition or used Resources................................................. 14
 2.3.1 PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK (PID:90) ......... 14 2.4 USB Interface ........................................................................................ 15
 2.4.1 Motivation ....................................................................................... 15 2.4.2 AddInfoType 08h: RF Multi information ........................................... 16 2.4.3 AddInfoType 09h: Preamble and postamble ................................... 20 2.5 Resource definition or used Resources................................................. 21 2.6 Management Procedures ...................................................................... 21 2.7 Configuration Procedures ...................................................................... 21 2.8 Profile definition ..................................................................................... 22 2.9 Identifiers and discovery ........................................................................ 22

 3 Impact and dependencies ............................................................................... 22
 3.1 System specification (“Handbook”) dependencies ................................ 22 3.2 Configuration interworking ..................................................................... 22 3.3 Runtime Interworking ............................................................................ 22 3.4 Integration and common tool impact ..................................................... 22 3.5 Security ................................................................................................. 22 3.6 Risks and compatibility issues ............................................................... 22

 Annex A (informative) KNX RF Slow Frame reception ........................................ 23
 A.1 Frame format ......................................................................................... 23 A.2 RX principle ........................................................................................... 23 A.3 Powerconsumption of RF chipset (ST S2LP) only (no MCU
 consumption) ......................................................................................... 23

 Annex B (informative) KNX Slow power consumption ....................................... 24
 B.1 Heating system: Standalone use case .................................................. 24 B.2 Heating system: Multiple rooms use case ............................................. 25 B.3 Alarm system or Smoke Detectors ........................................................ 26

Savedate: Filename: page 2 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

###### Annex C (informative) KNX SLOW Low Energy consumption ........................... 27
 C.1 Power consumption of RF chipset only (no MCU consumption) ........... 27

 Annex D (informative) Comparison test ............................................................... 28
 D.1 Scenarios .............................................................................................. 28 D.2 Normal Slow Mode : Eitt scripts ............................................................ 28 D.3 Normal Slow Mode : results .................................................................. 29 D.4 Low Energy Slow Mode : EITT scripts ................................................... 29 D.5 Low Energy Slow Mode : results ........................................................... 30 D.6 Comparison table .................................................................................. 30

### 1 Purpose, motivation and scope

 _This clause is not intended for integration in the KNX Specifications._

#### 1.1 Introduction
The purpose of this Application Note is to define an alternative the KNX RF Multi Slow
Frames to allow more sleeping time for RF slow receivers devices.

#### 1.2 Motivation

##### 1.2.1 Power consumption influenced by other RF Slow devices
Currently, the KNX RF Slow reception sleep time is sensible to the number of devices
transmitting Slow Frames in the RF range. For every Slow Frame the device has to detect
the preamble and then to stay in reception to be able to catch the KNX SYNC word and the
payload afterwards. (See Annex A for detailed explanations).

Even with a single home with multiple rooms, the battery lifetime for Slow receivers can be
reduced because they shall wake up even if they are not addressed by the Telegram
(see Annex B).

##### 1.2.2 Power consumption of Scanning mecanism
New RF chipsets are more efficient for “scanning mode” by integrating some sniffing
mechanism, and thus RF scanning requested by KNX RF Multi could be improved to reduce
scan time and power consumption. The current specification (in [03]) specifies the scan
sequence (PRM, NPRM) with timings that are sometimes fixed and other time
**recommended.**

In [03] clause 6.3.1.3.3.2 “Fast RX (Figure 1)” it is specified: “For a PRM fast receiver product
_that has no time constraint, the scanning algorithm shall be the as specified in Figure 37.”_

Savedate: Filename: page 3 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Figure 1 - Existing figure 37 from [03]**

In [03] clause 6.6.3.1.3.3.3 “Slow RX” (Figure 2), it is specified: “A NPRM slow device is a
_product that can only receive 500 ms wake-up Telegrams. This means that it scans only the_
_two Slow RF channels. For these devices, a scanning algorithm can be as specified in_
_Figure 41.”_

Savedate: Filename: page 4 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Figure 2 - Existing figure 41 from [03]**

In clause 2.2.2 new, more energy efficient, scanning cycles are specified.

##### Datarate for Slow Mode
The datarate for Slow Mode was designed to be ½ of the Fast mode datarate. This was
coming from

   - the requirements on Deviation and Max Allowed Bandwitdh on S2, and

   - the ability to distinguish Slow Frame from Fast on F3/S1.

The important point to reduce energy consumption is to sleep the maximum time and to reduce
time of transmitting/receiving Frames. The change of slow datarate to use the same as on the
fast channels, improve the second aspect, and especially for Frames using Fast Acks.

#### 1.3 Scope
With [04], the RF Multi is now usable for S-Mode installations that are mainly designed to
handle multiple-rooms and neighbouring installations. In this case, the proposed RF Slow
format, named RF Slow LE (low energy), makes the devices to have their power
consumption insensible of the number of other RF Slow senders. (see Annex C).

Savedate: Filename: page 5 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

##### 1.3.1 KNX RF Systems
The goal of this document is to redefine KNX RF Slow Frame Format for S-Mode devices.
All KNX Slow Resources will remain as defined in [04], and one additional Resource is
introuced for this new format: PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK.

The existing PID_RF_BIDIR_TIMEOUT is used by ETS to set the device in bidirectional
Fast mode.

##### 1.3.2 KNX RF USB Interface
The use of the new KNX Slow format requires some new information especially for testing
purposes, to be able to send “certifications specific Frames”.

### 2 Specification

#### 2.1 Terms and definitions

 2.2 Stack and communication

##### 2.2.1 Slow Datarate
As the S2 frequency is already defined as F4 for BiBat with 32 768 cps, and S1 is the same
frequency as F3, it makes no problem to also use 32 768 cps for Slow LE Mode. The
parameter that changes is the deviation that has to be adapted to F4 from BiBat with a value
of ± 50 kHz to ± 60 kHz.

###### 2.2.1.1 Change datarate from 8,192 kbps to 16,384 kbps

 _The table for [03] clause 5.2.1 has to be updated as follows._

**signalling** **preamble**

**RF Channel name** **Abbreviation** **speed** **encoding** **length**

kbps ms

Primary fast RF channel F1 16,384 Manchester 15

Second fast RF channel F2 16,384 Manchester 15

Third fast RF channel F3 16,384 Manchester 15

Primary slow LE RF SLE1 16,384 Manchester 500
channel

Second slow LE RF SLE2 16,384 Manchester 500
channel

 _The text has also to be updated_

The RF channels can be divided in two categories.

  - The first category contains channels for “fast” RF Telegrams. The fast Telegrams are
composed of a short 15 ms wake-up at 16,384 kbps signaling speed.

  - The second category contains channels for “slow” RF Telegrams. The slow Telegrams
are composed of a long 500 ms wake-up at 16,384 kbps signaling speed.

  - …

Savedate: Filename: page 6 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|RF Channel name|Abbreviation|signalling<br>speed<br>kbps|encoding|preamble<br>length<br>ms|
|---|---|---|---|---|
|Primary fast RF channel|F1|16,384|Manchester|15|
|Second fast RF channel|F2|16,384|Manchester|15|
|Third fast RF channel|F3|16,384|Manchester|15|
|Primary slow LE RF<br>channel|SLE1|16,384|Manchester|500|
|Second slow LE RF<br>channel|SLE2|16,384|Manchester|500|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

######  Typically, NPRM devices using slow Telegrams can only receive RF Telegrams
 with long wake-up. This enables the NPRM devices to stay in low power mode most of the time and to become periodically active for the reception of a long preamble. It’s suggested that battery powered devices use mainly the new channels SLE1 and SLE2 with the lower data rate.

 2.2.1.2 Change of deviation parameter for SLE1 and SLE2

 _The current parameters are:_

Savedate: Filename: page 7 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

 _The new parameters are_

**Table 9 – RF Channel definitions for RF Multi Channels S1 and S2**

###### Parameter Value Comment

Tx centre frequency Channel SLE1 869,850 MHz Tx:  25 ppm[ a]

Channel SLE2 869,525 MHz Rx:  25 ppm

Tx radiated power Typical: 0 dBm
Min: -3 dBm
Max: +14 dBm

Deviation  48 kHz to  80 kHz For SLE1
 50 kHz to  60 kHz For SLE2

The usage of frequency error
correction may be needed to guarantee
good receiver performances.

Max allowed 300 kHz For SLE1
bandwidth 250 kHz For SLE2

Tx max duty cycle 100 % for SLE1 For SLE1 only, Duty Cycle is 100% up
10 % for SLE2 to a maximum radiated power of 5mW

and restricted to 2.7% from 5mW to
25mW.

Tx chip rate 32 768 chips per second Tx: 1,5 %

Rx: 2 %

1) Is calculated from 100 s per one hour due to compliant minimum transmitter off-time (interFrame) of 100 ms.

###### 2.2.1.3 Timing requirements
The timeouts linked to preamble length, scanning and repeaters are not modified, but the
timing requirements on the Frame and Fast Ack slots become the same as for Fast from
640 ms to 320 ms).

The timings requirements for slow in chapters [03] clauses 6.6.4.3, 6.6.4.4 and 6.6.4.5 shall
be removed.

“The same acknowledgment mechanism applies also to Slow RF channels but with a lower
data rate. All timings are changed accordingly. “

The interFrame for Slow LE shall be according the following table.

**Total medium access**

**InterFrame time** **Random time**
**Type of Frame** **time**

**[Tint]** **[Trd]**

**[Tma]**
Multi Frame (SLOW LE) 100 ms 0 ms ≤ Trd < 40 ms 100 ms ≤ Tma < 140 ms

Savedate: Filename: page 8 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Parameter|Value|Col3|Comment|
|---|---|---|---|
|Tx centre frequency|Channel SLE1|869,850 MHz|Tx: 25 ppm** a** <br>Rx: 25 ppm|
|Tx centre frequency|Channel SLE2|869,525 MHz|869,525 MHz|
|Tx radiated power|Typical: 0 dBm<br>Min: -3 dBm<br>Max: +14 dBm|Typical: 0 dBm<br>Min: -3 dBm<br>Max: +14 dBm||
|Deviation| 48 kHz to 80 kHz<br> 50 kHz to 60 kHz| 48 kHz to 80 kHz<br> 50 kHz to 60 kHz|For SLE1<br>For SLE2<br>The usage of frequency error<br>correction may be needed to guarantee<br>good receiver performances.|
|Max allowed<br>bandwidth|300 kHz<br>250 kHz|300 kHz<br>250 kHz|For SLE1<br>For SLE2|
|Tx max duty cycle|100 % for SLE1<br>10 % for SLE2|100 % for SLE1<br>10 % for SLE2|For SLE1 only, Duty Cycle is 100% up<br>to a maximum radiated power of 5mW<br>and restricted to 2.7% from 5mW to<br>25mW.|
|Tx chip rate|32 768  chips per second|32 768  chips per second|Tx:1,5 %<br>Rx:2 %|
|1) Is calculated from 100 s per one hour due to compliant minimum transmitter off-time (interFrame) of 100 ms.|1) Is calculated from 100 s per one hour due to compliant minimum transmitter off-time (interFrame) of 100 ms.|1) Is calculated from 100 s per one hour due to compliant minimum transmitter off-time (interFrame) of 100 ms.|1) Is calculated from 100 s per one hour due to compliant minimum transmitter off-time (interFrame) of 100 ms.|

|Type of Frame|InterFrame time<br>[Tint]|Random time<br>[Trd]|Total medium access<br>time<br>[Tma]|
|---|---|---|---|
|Multi Frame (SLOW LE)|100 ms|0 ms ≤ Trd < 40 ms|100 ms ≤ Tma < 140 ms|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

##### 2.2.2 Scanning mechanism (03_02_05 / 6.6.3.1.3.3.2 Fast Rx)
The scanning defined in [03] is defined in a way that all the sequence time is fixed. What is
really necessary, is to have a cyclical scan of each frequency to be sure to detect the
preamble of the Telegram to receive.

###### 2.2.2.1 PRM device
For PRM device the scan sequence shall be the following.

###### - F1: the maximum time between two scans shall be 4,8 ms, to detect Ready and
Multi Frames.

   - F2: The maximum time between two scans shall be 14 ms to detect Multi Frames.

   - If F3 is implemented: the maximum time between two scans shall be 14 ms to
detect Multi Frames.

Existing (Figure 1) and New (Figure 3) both scanning mechanisms are compliant.

**Figure 3 - Alternative sequence for PRM Fast receiver**

###### 2.2.2.2 NPRM Fast device
For NPRM fast device the scan sequence shall be the following.

   - F1: The maximum time between two scans shall be 14 ms to detect Multi Frames.

   - F2: The maximum time between two scans shall be 14 ms to detect Multi Frames.

   - If F3 implemented: the maximum time between two scans shall be 14 ms to detect
Multi Frames.

NPRM mode is selected by the MaC or the MaS using the Property
PID_RF_MULTI_RX_RECEIVE_FAST_ONLY.

###### 2.2.2.3 NPRM Slow
For NPRM slow device the scan sequence shall be the following.

###### - SLE1: The maximum time between two scans shall be 489 ms to detect Multi
Frames.

   - SLE2: The maximum time between two scans shall be 489 ms to detect Multi
Frames

Existing (Figure 2) and New (Figure 4) both scanning mechanisms are compliant.

**Figure 4 - Alternative sequence for NPRM Slow receiver**

Savedate: Filename: page 9 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

##### 2.2.3 Slow Mode Frame coding

###### 2.2.3.1 Scope
AN186 ([04]) clause 2.2.3 “Use of Fast Ack and RF Channels at configuration”, clause
2.2.3.1 “General considerations”

_When configuring an RF Multi device, the RF Multi Fast Channel shall be used (either_
_by the Media Coupler or by the RF dongle)._

_In case of RF Ready, the semi-directional devices must be first waken up, by an action_
_of the ETS user. For Slow devices, either ETS sends a slow Frame or an action is_
_performed on the device to wake it up._

There is no requirement to receive system broadcast on Slow Mode. Slow Mode is restricted
to Domain for Multicast or point-to-point communication. If any system broadcast has to be
done, the device shall be set in the fast receive mode by a local action, or by a specific
Telegram to request to switch to fast receive mode.

The slow Frame sent by the MaC to switch to Fast is also defined in this document. It is the
Function Property PID_RF_BIDIR_TIMEOUT that can be used by the MaC to trigger to
switch the reception to fast mode (F1 call channel). After a timeout the device shall go back
to Slow reception mode.

The property PID_RF_BIDIR_TIMEOUT can’t be used as System Broadcast services for
Slow LE receiving devices as the new filter of preamble (see hereafter) is done on DoA only,
as it not possible to not know the SN of the sender.

###### 2.2.3.2 Definition
The preamble is not more defined as only sequence of ‘01’ but as a sequence of preamble
patterns containing information about the following.

   - Information to calculate the time to KNX SYNC word.

   - Part of the DoA.

   - Destination Address (GA, IA).

When receiving a pattern of the preamble, the device knows if the Frame is addressed to it,
and how much time it can sleep until starting Rx again to get the payload.

This format enables more sleeping time because preamble is containing the above
mentioned information.

According to this new information, the receiver may return to sleep

   - and continue scanning, if the Frame is not addressed to it, based on DoA, GA or IA
filtering, or

   - wake up according the time calculated from info to get the payload of the Frame.

The sender shall use the same DoA and Destination Address in the Preamble pattern as the
DoA and Destination Address in the payload.

The minimum length to get a preamble complying with 490 ms scanning rate, is 501 ms
obtained with 114 patterns. In this case, pattern number will start from 113 and go down to 0.

Savedate: Filename: page 10 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Figure 5 - New preamble pattern format**

Every pattern is defined as in Figure 5. All patterns are not Manchester coded.

Between the last packed with Info = 0 and the KNX Frame starting with Manchester Violation
and KNX SYNC word, there shall be a pattern preamble of 96 chips (48x'01'). The total
length is 18 bytes. See example in

Figure 6.

**Table 1- -Preamble pattern description**

**Type Field**

**Pattern** **DoA** **Dest** **Destination** **Pattern**
**Preamble** **Filter** **Reserved** **[Preamble ]** **Address** **Address** **number**

**Type**

**Type**

96 chips 16 chips 6 chips 1 chip 1 chip 16 chips 8 chips
48x“01”

- **Pattern Preamble**

Description: Short preamble for Frame receiver synchronization and detection.

Encoding: Encoding: 48 sequences of “01” chips
‘01010101010101010101010101010101010101010101010
010101010101010101010101010101010101010101010101’

- **DoA filter**

Description: 2 lowest bytes of DoA of the device

Encoding: 8 chips = MSB, 8 chips = LSB

EXAMPLE DoA = 665544332211h is as MSB = 22h and LSB = 11h
 In 16 chips ‘0010 0010 0001 0001’

- **Reserved**

Description: Reserved field for future use.

Encoding: always 6 “0” chips -> ‘000000’

- **Preamble Type**

Description: Indication of the Preamble Type

Encoding: 0: 500 ms preamble pattern composed by preamble pattern
1: Reserved, shall be ignored

Savedate: Filename: page 11 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Pattern<br>Preamble|DoA<br>Filter|Type Field|Col4|Col5|Destination<br>Address|Pattern<br>number|
|---|---|---|---|---|---|---|
|**Pattern**<br>**Preamble**|**DoA**<br>**Filter**|**Reserved**|**Preamble**<br>**Type**|**Dest**<br>**Address**<br>**Type **|**Dest**<br>**Address**<br>**Type **|**Dest**<br>**Address**<br>**Type **|
|96 chips<br>48x“01”|16 chips|6 chips|1 chip|1 chip|16 chips|8 chips|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

- **Destination Address Type**

Description: Indication if the Telegram is a Multicast/Broadcast or point-to-point

Encoding: 1: _Group address_

The receiver shall check if this Destination Address is in its Group
Address Table. If not, it can stop reception and restart the scanning
mechanism
0: _Individual Address_

The receiver shall check if this Destination Address is ist Individual
Address. If not, it can stop reception and restart the scanning
mechanism.

The check of Destination Address can be deactivated by using the Property
PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK. If the value of this Property is
“disable”, then the Physical Layer should go to sleep and start a wakeup timer to get the
payload of the Frame.

- **Destination Address**

Description: Destination Address to be checked according Destination Address

Type.

Encoding: 16 bit

EXAMPLE For IA = 1.2.34 equivalent to 1222h  “0001 0010 0010 0010”

For GA=1/2/34 equivalent to 0A22h  “0000 1010 0010 0010”

- **Pattern number**

Description: decreasing number from 113 to 0, that is decremented for each

pattern. Time to sleep to the KNX SYNC word detection is (pattern
number-1)*4,39 ms with data rate tolerance (+2 %)

Encoding: 8 chips

Recommendation 1:

In case the receiver has detected a preamble pattern, it should start a timeout
corresponding to the time to sleep to KNX SYNC word. It consists of the
transmission time of 96 chips pattern preamble (2,928 ms) and the transmission
time of (DoA field + reserved/type fields + address field + pattern number field)
(1,464 ms) reduced by the datarate tolerance (2 %).
_Time to wake up_ _= (pattern number - 1) * 4,392 ms x 0,98 + 2,928 ms/2_
_= (pattern number - 1) * 4,3 ms + 1,45 ms._

Recommendation 2:

After pattern number = 0 has been read, the device can stay in RX and wait directly
for the KNX SYNC word. The wait time consists of the transmission time of 96 chips
pattern preamble (2,928ms) and the transmission time of KNX SYNC word, i.e.
Manchester violation and SYNC (1,098ms), increased by the datarate tolerance
(2%).

_Timeout for KNX SYNC word = (2,928 ms + 1,098 ms) * 1,02 = 4,2 ms._

Savedate: Filename: page 12 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Figure 6 - Example Slow Frame Format**

##### 2.2.4 Receiving use case

###### 2.2.4.1 Foreign RF System - Ignore non-KNX neighbours with different modulation,
 preamble or datarate
Detection of RSSI will start detection of 10101010 + DoA. But as the Frame is not in the
correct format, the device will switch back to sleep mode for 490 ms after the time equivalent
to 18 bytes corresponding to preamble pattern length (Figure 7).

**Figure 7 - Transceiver and microcontroller activation in,on-KNX neighbours case**

###### 2.2.4.2 Foreign KNX RF system - ignore KNX/M-Bus neighbours with different DoAs
Detection of RSSI will start detection of 01010101 + DoA. Due to the use of the DoA as
SYNC word, the transceiver can go back in sleep mode if Telegrams with neighbour DoAs
are transmitted (Figure 8).

**Figure 8 - Transceiver and microcontroller activation in KNX/M-Bus neighbours with different**

**DoA case**

###### 2.2.4.3 Own KNX RF system - Ignore KNX communication with the correct DoA but
 with wrong Destination Address
After a valid DoA has been detected, the receiver automatically starts to read the address
bytes and the Info byte. At the same time, it wakes up the µC to inform it about a valid DoA
reception.

The µC then reads the address, checks if it is addressed and uses the length information
from the Info field to calculate the next sleep duration.

Savedate: Filename: page 13 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

There are two cases for the next step:

1. If the receiver is addressed, sleep until the preamble block just before the Frame

starts and start the normal reception of the FT3 Frame (Figure 9).

**Figure 9 - Transceiver and microcontroller activation in correct DoA and correct Destination**

**Address case**

2. If the receiver is not addressed, sleep until the current Telegram has been

transmitted and start the next Telegram reception after it (Figure 10).

**Figure 10 - Transceiver and microcontroller activation in correct DoA and wrong Destination**

**Address case**

#### 2.3 Resource definition or used Resources

##### 2.3.1 PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK (PID:90)

**●** **Property name:** PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK

**●** **Property Datatype:** PDT_BINARY_INFORMATION

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/05C

**●** **Access level** 2/2

###### 2.3.1.1 Format
This Property shall be located in the RF Medium Object.

The value of the Property PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK shall be
formatted as an 8 bit datatype and shall be interpreted as specified in the following table.

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

Name Check of Destination Address during

preamble scanning
0 : Disabled
1 : Enabled

Values 0 0 0 0 0 0 0 0, 1 (default)

Savedate: Filename: page 14 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|reserved|reserved|Check of Destination Address during<br>preamble scanning<br>0 : Disabled<br>1 : Enabled|
|Values|0|0|0|0|0|0|0|0, 1 (default)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

###### 2.3.1.1 Usage by the MaS
In case of value is “Enabled”, the Physical Layer in Slow Mode, shall filter the Destination
Address in the preamble pattern. In this case, if the DA + Destination Address type is not the
IA of the device, or not the part of the Group Address Table, the device can go back to sleep
and wait the next scanning timeout. If the IA or the GA are valid, then the device can sleep
until the wakeup timeout corresponding to the pattern number received to get the payload of
the Frame.

In case the value is “Disabled” then the Physical Layer in Slow Mode, shall not filter the
Destination Address in the preamble pattern. In this way, the device can sleep until the
wakeup timeout corresponding to the pattern Number received to get the payload of the
Frame.

###### 2.3.1.2 Usage by the MaC 
The MaC shall use this Property to control the check of Destination Address in the Physical
Layer. This is useful if for ETS - Bus monitoring analysis or for the EITT being in RAW-Mode.

Working with Destination Address Checking disabled is not recommended as the default
setting.

###### 2.3.1.3 Master Reset

**Table 2 Master Reset effect on PID_SLOW_LE_DISABLE_DEST_ADDR_CHECK**

**Resource** **-** **02h** **07h** **01h** **None**
**Local Reset** **Reset to** **Reset to** **Confirmed** **Basic** **Power**

**to default** **default** **default** **Restart** **Restart** **Cycle**

**state** **state** **without IA**

87 PID_SLOW_LE_DISABLE KNX Default KNX KNX Not Not Not
_DEST_ADDR_CHECK Default Default influenced influenced influenced

#### 2.4 USB Interface

##### 2.4.1 Motivation

 _This clause is not intended for integration in the KNX Specifications._

A USB RF interface may be used for S-Mode and PB-Mode configuration. In this case, the
support or 'Normal Slow Mode can't be replaced by S-Mode. Thus, Resources and cEMI
AddInfo are extended to support the S-Mode.

Savedate: Filename: page 15 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Col1|Resource|-<br>Local Reset<br>to default<br>state|02h<br>Reset to<br>default<br>state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|
|87|PID_SLOW_LE_DISABLE<br>_DEST_ADDR_CHECK|KNX Default|KNX<br>Default|KNX<br>Default|Not<br>influenced|Not<br>influenced|Not<br>influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

##### 2.4.2 AddInfoType 08h: RF Multi information

###### 2.4.2.1 Usage for KNX RF Ready and KNX RF Multi messages, message format
The “KNX RF Multi information” is optional for KNX RF Ready messages. If the cEMI
message does not include the “KNX RF Multi information”, then the cEMI Server shall
transmit the RF message with the parameters of a KNX RF Ready message; this is as
follows.

   - Default preamble of a KNX RF Ready Frame.

   - Default KNX CTRL field.

   - Default postamble of a KNX RF Ready Frame.

   - Transmission on the F1 frequency.

   - No Fast Ack management.

The “KNX RF Multi’ information” is mandatory for KNX RF Multi messages. The “KNX RF
Multi information” can also be used to transmit a KNX RF Ready message by setting the
frequency to the value 1: F1 (RF1.R).

**Table 3 - KNX RF Multi information AddInfo**

cEMI Additional Information

KNX RF Multi KNX RF Multi

Type KNX RF Multi Call KNX RF Multi

Len Transmission Reception
ID Channel Fast Ack

Frequency Frequency

1
1 octet 1 octet 1 octet 1 octet 1 octet
octet

08h 04h

###### 2.4.2.2 Transmission frequency

 _Table 3 in [02] shall be updated as follows._

**Table 4 Transmission Frequency description**

**Field** **Bit** **Description** **Coding**
Transmission This octet shall be set in cEMI L_Data.req
Frequency to indicate the Transmission Frequency 0: Use previous
and (together with the preamble length and the frequency
transmission KNX Ctrl Octet) on which the RF message

1: F1 Ready

type shall be sent.

(RF1.R)

           - L_Data.req:

2: F1 (RF1.M)

                    - Previous: the cEMI Server uses

3: F2 (RF1.M)

the frequency defined in

4: F3 (RF1.M)

PID_TRANSMISSION_MODE
Property. 5: S1 (RF1.M)

                    - F1 (RF1.R): the cEMI Server shall 6: S2 (RF1.M)
transmit the RF message in Ready 7: Fx (RF1.M)
mode.

8: Sx (RF1.M)
9: Reserved for
future use of the
KNX system
10: F1 Ready
(RF2.R)

Savedate: Filename: page 16 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Table 3 - KNX RF Multi information AddInfo|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|cEMI Additional Information|cEMI Additional Information|cEMI Additional Information|cEMI Additional Information|cEMI Additional Information|cEMI Additional Information|
|Type<br>ID|Len|KNX RF Multi<br>Transmission<br>Frequency|KNX RF Multi Call<br>Channel|KNX RF Multi<br>Fast Ack|KNX RF Multi<br>Reception<br>Frequency|
|1 octet|1 <br>octet|1 octet|1 octet|1 octet|1 octet|
|08h|04h|||||

|Field|Bit|Description|Coding|
|---|---|---|---|
|Transmission<br>Frequency<br>and<br>transmission<br>type||This octet shall be set in cEMI L_Data.req<br>to indicate the Transmission Frequency<br>(together with the preamble length and the<br>KNX Ctrl Octet) on which the RF message<br>shall be sent.<br> <br>L_Data.req:<br>- <br>Previous: the cEMI Server uses<br>the frequency defined in<br>PID_TRANSMISSION_MODE<br>Property.<br>- <br>F1 (RF1.R): the cEMI Server shall<br>transmit the RF message in Ready<br>mode.|0:<br>Use previous<br>frequency<br>1:<br>F1 Ready<br>(RF1.R)<br>2:<br>F1 (RF1.M)<br>3:<br>F2 (RF1.M)<br>4:<br>F3 (RF1.M)<br>5:<br>S1 (RF1.M)<br>6:<br>S2 (RF1.M)<br>7:<br>Fx (RF1.M)<br>8:<br>Sx (RF1.M)<br>9:<br>Reserved for<br>future use of the<br>KNX system<br>10:<br>F1 Ready<br>(RF2.R)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

                    - Fx (RF1.M): the cEMI Server shall 11: F1 (RF2.M)
use one of the fast frequencies

12: F2 (RF2.M)

according to the RF media

13: F3 (RF2.M)

occupancy. The cEMI Server shall
transmit the RF message in Multi- 14: S1 (RF2.M)
mode. 15: S2 (RF2.M)

                    - F1/F2/F3 (RF1.M): the cEMI 16: Fx (RF2.M)
Server shall transmit the RF

17: Sx (RF2.M)

message on the specified

18: reserved

frequency. The cEMI Server shall
transmit the RF message in Multi- 19: F1 (RF5.M)
mode. 20: F2 (RF5.M)

                    - Sx (RF1.M): the cEMI Server shall 21: F3 (RF5.M)
use one of the slow frequencies

22: S1 (RF5.M)

according to the RF media

23: S2 (RF5.M)

occupancy. The cEMI Server shall

24: Fx (RF5.M)

transmit the RF message in Multimode. 25: Sx (RF5.M)

                    - S1/S2 (RF1.M): the cEMI Server 26: reserved
shall transmit the RF message on 27: SLE1 (RF1.M)
the specified frequency. The cEMI

28: SLE2 (RF1.M)

Server shall transmit the RF

29: SLEx (RF1.M)

message in Multi-mode.

30 to Reserved for

                    - SLE1/SLE2 (RF1.M): the cEMI

255: future use of the

Server shall transmit the RF

KNX system

message on the specified
frequency using the current DoA
(or the one in ADDInfo 02) and use
the Destination Address and
Address type from the Telegram.

           - L_Data.con: depending on the capacity
of the Physical Layer of the cEMI
Server, it shall contain the same value
as the L_Data.req or shall contain the
real frequency used for transmission (in
this case, value “Previous frequency”,
Sx, SLEx and Fx are not used).

           - L_Data.ind: shall contain the frequency
value contained in the PID_TRANSMISSION_MODE Property.

###### 2.4.2.3 Fast and Slow Call Channel
The second octet of the cEMI Additional Information shall be used to set the RF Call
Channel for the fast - and the slow frequencies.

If the first octet defines a frequency different than SLEx and Fx, then the second octet shall
define the RF call channel for next transmission request using Fx or SLEx frequency.

If the first octet defines a frequency SLEx or Fx, then the second octet shall define the RF
call channel for current transmission request.

Savedate: Filename: page 17 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Col1|Col2|- Fx (RF1.M): the cEMI Server shall<br>use one of the fast frequencies<br>according to the RF media<br>occupancy. The cEMI Server shall<br>transmit the RF message in Multi-<br>mode.<br>- F1/F2/F3 (RF1.M): the cEMI<br>Server shall transmit the RF<br>message on the specified<br>frequency. The cEMI Server shall<br>transmit the RF message in Multi-<br>mode.<br>- Sx (RF1.M): the cEMI Server shall<br>use one of the slow frequencies<br>according to the RF media<br>occupancy. The cEMI Server shall<br>transmit the RF message in Multi-<br>mode.<br>- S1/S2 (RF1.M): the cEMI Server<br>shall transmit the RF message on<br>the specified frequency. The cEMI<br>Server shall transmit the RF<br>message in Multi-mode.<br>- SLE1/SLE2 (RF1.M): the cEMI<br>Server shall transmit the RF<br>message on the specified<br>frequency using the current DoA<br>(or the one in ADDInfo 02) and use<br>the Destination Address and<br>Address type from the Telegram.<br> L Data.con: depending on the capacity<br>_<br>of the Physical Layer of the cEMI<br>Server, it shall contain the same value<br>as the L Data.req or shall contain the<br>_<br>real frequency used for transmission (in<br>this case, value “Previous frequency”,<br>Sx, SLEx and Fx are not used).<br> L Data.ind: shall contain the frequency<br>_<br>value contained in the PID TRANS-<br>_<br>MISSION MODE Property.<br>_|11: F1 (RF2.M)<br>12: F2 (RF2.M)<br>13: F3 (RF2.M)<br>14: S1 (RF2.M)<br>15: S2 (RF2.M)<br>16: Fx (RF2.M)<br>17: Sx (RF2.M)<br>18: reserved<br>19: F1 (RF5.M)<br>20: F2 (RF5.M)<br>21: F3 (RF5.M)<br>22: S1 (RF5.M)<br>23: S2 (RF5.M)<br>24: Fx (RF5.M)<br>25: Sx (RF5.M)<br>26: reserved<br>27: SLE1 (RF1.M)<br>28: SLE2 (RF1.M)<br>29: SLEx (RF1.M)<br>30 to Reserved for<br>255: future use of the<br>KNX system|
|---|---|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

If this AddInfo is not sent to the cEMI Server, the RF Call Channel defined in the Property
PID_RF_MULTI_CALL_CHANNEL shall be used. By default, this shall have the value F1
and SLE1 (RF1.M).

**Table 5 Call channels description**
**Field** **Bit** **Description** **Coding**
Fast Call bits These bits shall be set in cEMI L_Data.req to 0: set F1 as the
Channel 7 … 4 indicate the Fast Call Channel that shall be current Fast Call

used by the cEMI sever to transmit the RF channel
message. 1: set F2 as the

          - L_Data.req: current Fast Call

channel

                   - 15: the cEMI Server shall use the

2: set F3 as the

current Fast Call Channel, defined in

current Fast Call

the Property PID_RF_MULTI_CALL_
channel

CHANNEL.

3 to 14: Reserved

                   - 0/1/2: the cEMI Server sets the current

for future use of

Fast Call Channel to F1/F2/F3.

the KNX system

          - L_Data.con: shall contain the actual value 15: use current Fast
of the Fast Call Channel (except the Call Channel
“Current Fast Call Channel”).

          - L_Data.ind: shall contain the actual value
of the Fast Call Channel (except the
“Current Fast Call Channel”).

Slow bits These bits shall be set in cEMI L_Data.req to 0: set S1 as the
Call 3 … 0 indicate the Slow Call Channel that shall be current Slow Call
Channel used by the cEMI sever to transmit the RF channel

message. 1: set S2 as the

          - L_Data.req: current Slow Call

channel

                   - 15: the cEMI Server shall use the

2: set SLE1 as the

current Slow Call Channel, defined in

current Slow Call

the Property

channel

PID_RF_MULTI_CALL_CHANNEL.

3: set SLE2 as the

                   - 0/1/2/3: the cEMI Server sets the

current Slow Call

current Slow Call Channel to

channel

S1/S2/SLE1, SLE2.

          - L_Data.con: shall contain the actual value 4 to 14: Reserved
of the Slow Call Channel (except the for future use of the
“Current Slow Call Channel”). KNX system

          - L_Data.ind: shall contain the actual value 15: use current
of the Slow Call Channel (except the Slow Call Channel
“Current Slow Call Channel”).

Savedate: Filename: page 18 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Field|Bit|Description|Coding|
|---|---|---|---|
|Fast Call<br>Channel|bits<br>7 … 4|These bits shall be set in cEMI L_Data.req to<br>indicate the Fast Call Channel that shall be<br>used by the cEMI sever to transmit the RF<br>message.<br> <br>L_Data.req:<br>- <br>15: the cEMI Server shall use the<br>current Fast Call Channel, defined in<br>the Property PID_RF_MULTI_CALL_-<br>CHANNEL.<br>- <br>0/1/2: the cEMI Server sets the current<br>Fast Call Channel to F1/F2/F3.<br> <br>L_Data.con: shall contain the actual value<br>of the Fast Call Channel (except the<br>“Current Fast Call Channel”).<br> <br>L_Data.ind: shall contain the actual value<br>of the Fast Call Channel (except the<br>“Current Fast Call Channel”).|0: set F1 as the<br>current Fast Call<br>channel<br>1: set F2 as the<br>current Fast Call<br>channel<br>2: set F3 as the<br>current Fast Call<br>channel<br>3 to 14:  Reserved<br>for future use of<br>the KNX system<br>15: use current Fast<br>Call Channel|
|Slow<br>Call<br>Channel|bits<br>3 … 0|These bits shall be set in cEMI L_Data.req to<br>indicate the Slow Call Channel that shall be<br>used by the cEMI sever to transmit the RF<br>message.<br> <br>L_Data.req:<br>- <br>15: the cEMI Server shall use the<br>current Slow Call Channel, defined in<br>the Property<br>PID_RF_MULTI_CALL_CHANNEL.<br>- <br>0/1/2/3: the cEMI Server sets the<br>current Slow Call Channel to<br>S1/S2/SLE1, SLE2.<br> <br>L_Data.con: shall contain the actual value<br>of the Slow Call Channel (except the<br>“Current Slow Call Channel”).<br> <br>L_Data.ind: shall contain the actual value<br>of the Slow Call Channel (except the<br>“Current Slow Call Channel”).|0: set S1 as the<br>current Slow Call<br>channel<br>1: set S2 as the<br>current Slow Call<br>channel<br>2: set SLE1 as the<br>current Slow Call<br>channel<br>3: set SLE2 as the<br>current Slow Call<br>channel<br>4 to 14: Reserved<br>for future use of the<br>KNX system<br>15:  use current<br>Slow Call Channel|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

###### 2.4.2.4 Reception frequency
After the cEMI Server has sent the Frame, it shall use the reception frequency octet to
initialize the new reception frequency of the cEMI Server.

If this AddInfo is not sent to the cEMI Server, the reception frequency defined in the Property
PID_RECEPTION_MODE shall be used after the Frame transmission. By default this shall
have the value RF1.R.

**Table 6 Reception frequency description**
**Field** **Bit Description** **Coding**
Reception This octet shall be set in cEMI L_Data.req to 0: Use previous
frequency indicate the reception frequency to set in the frequency

cEMI Server after the transmission of the 1: F1 Ready (RF1.R)
Frame. 2: F1 (RF1.M)

          - L_Data.req: 3: F2 (RF1.M)

4: F3 (RF1.M)

                  - Previous: the cEMI Server uses the

5: S1 (RF1.M)

frequency defined in PID_RECEP
6: S2 (RF1.M)

TION_MODE Property.

7: Fx (RF1.M)

                  - F1 (RF1.R): the cEMI Server shall

8: Sx (RF1.M)

scan the RF message in Ready

9: Fx and Sx (RF1.M)

mode.

10: F1 Ready (RF2.R)

                  - F1/F2/F3 (RF1.M): the cEMI Server 11: F1 (RF2.M)
shall scan the RF message on the 12: F2 (RF2.M)
specified frequency. 13: F3 (RF2.M)

                  - S1/S2 (RF1.M): the cEMI Server 14: S1 (RF2.M)
shall scan the RF message on the 15: S2 (RF2.M)
specified frequency. 16: Fx (RF2.M)

                  - Fx (RF1.M): the cEMI Server shall 17: Sx (RF2.M)

18: Fx and Sx (RF2.M)

scan the fast frequencies.

19: F1 (RF5.M)

                  - Sx (RF1.M): the cEMI Server shall

20: F2 (RF5.M)

scan the slow frequencies.

21: F3 (RF5.M)

                  - Fx and Sx (RF1.M): the cEMI Server

22: S1 (RF5.M)

shall scan the fast and the slow

23: S2 (RF5.M)

frequencies.

24: Fx (RF5.M)

                  - In case of reception on SLE1, SLE2 25: Sx (RF5.M)
or SLEx, the 2 lowest bytes of 26: Fx and Sx (RF5.M)
current DoA of the dongle will be 27: SLE1 (RF1.M)
used for do a Filter. 28: SLE2 (RF1.M)

          - L_Data.con: shall contain the frequency 29: SLEx (RF1.M)
value contained in the 30 to 255: Reserved
PID_RECEPTION_MODE Property. for future use of the

          - L_Data.ind, shall contain the frequency KNX system
value based on the reception frequency
(“Previous frequency”, Fx, Sx and SLEx
not used, shall be the real RF channel)
and the KNX CTRL field from RF
message.

Savedate: Filename: page 19 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Field|Bit|Description|Coding|
|---|---|---|---|
|Reception<br>frequency||This octet shall be set in cEMI L_Data.req to<br>indicate the reception frequency to set in the<br>cEMI Server after the transmission of the<br>Frame.<br> <br>L_Data.req:<br>- <br>Previous: the cEMI Server uses the<br>frequency defined in PID_RECEP-<br>TION_MODE Property.<br>- <br>F1 (RF1.R): the cEMI Server shall<br>scan the RF message in Ready<br>mode.<br>- <br>F1/F2/F3 (RF1.M): the cEMI Server<br>shall scan the RF message on the<br>specified frequency.<br>- <br>S1/S2 (RF1.M): the cEMI Server<br>shall scan the RF message on the<br>specified frequency.<br>- <br>Fx (RF1.M): the cEMI Server shall<br>scan the fast frequencies.<br>- <br>Sx (RF1.M): the cEMI Server shall<br>scan the slow frequencies.<br>- <br>Fx and Sx (RF1.M): the cEMI Server<br>shall scan the fast and the slow<br>frequencies.<br>- <br>In case of reception on SLE1, SLE2<br>or SLEx, the 2 lowest bytes of<br>current DoA of the dongle will be<br>used for do a Filter. <br> <br>L_Data.con: shall contain the frequency<br>value contained in the<br>PID_RECEPTION_MODE Property.<br> <br>L_Data.ind, shall contain the frequency<br>value based on the reception frequency<br>(“Previous frequency”, Fx, Sx and SLEx<br>not used, shall be the real RF channel)<br>and the KNX CTRL field from RF<br>message.|0: Use previous<br>frequency<br>1:<br>F1 Ready (RF1.R)<br>2:<br>F1 (RF1.M)<br>3:<br>F2 (RF1.M)<br>4:<br>F3 (RF1.M)<br>5:<br>S1 (RF1.M)<br>6:<br>S2 (RF1.M)<br>7:<br>Fx (RF1.M)<br>8:<br>Sx (RF1.M)<br>9:<br>Fx and Sx (RF1.M)<br>10: F1 Ready (RF2.R)<br>11: F1 (RF2.M)<br>12: F2 (RF2.M)<br>13: F3 (RF2.M)<br>14: S1 (RF2.M)<br>15: S2 (RF2.M)<br>16: Fx (RF2.M)<br>17: Sx (RF2.M)<br>18: Fx and Sx (RF2.M)<br>19: F1 (RF5.M)<br>20: F2 (RF5.M)<br>21: F3 (RF5.M)<br>22: S1 (RF5.M)<br>23: S2 (RF5.M)<br>24: Fx (RF5.M)<br>25: Sx (RF5.M)<br>26: Fx and Sx (RF5.M)<br>27: SLE1 (RF1.M)<br>28: SLE2 (RF1.M)<br>29: SLEx (RF1.M)<br>30 to 255:<br> Reserved<br>for future use of the<br>KNX system|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

##### 2.4.3 AddInfoType 09h: Preamble and postamble
This optional cEMI Additional Information may be used for debugging and manufacturer
specific purposes. The possible value range and the possibility to modify the preamble and
postamble length are closely linked to the Physical Layer implementation in the USB RF
interface.

**Table 7 - Preamble and postamble AddInfo description**

**cEMI Additional Information**

KNX RF

Type Ready/Multi

Len KNX RF Ready/Multi Postamble length
ID Preamble

length

1
1 octet 2 octets 1 octet
octet

09h 03h High low

**Table 8 - Preamble and postamble description**
**Field** **Bit** **Description** **Coding**
Preamble 2 These 2 octets shall indicate the number of 0000h default value
Length octets “01” chip sequences in the preamble that xxxxh number of “01”

the cEMI Server shall transmit for the RF chip
Telegram. The most significant octet shall sequences in
be transmitted firstly. the preamble

           - L_Data.req: in case the Frame is

                    - The value 0000h shall indicate sent of Slow IEN:
that the cEMI Server shall use the                 - High byte:
default preamble length according pattern
to the type of the RF message number to
(Ready, Multi fast or slow). start

                    - The possible value range depends                     - Low byte.bit 0:
on the capacity of the Physical Preamble type
Layer of the cEMI Server and the
RF chip used for the USB
interface.

           - L_Data.con: the same value shall be
used as in L_Data.req.

           - L_Data.ind, L_Busmon.ind: shall
contain the effective value of the
number of “01” chip sequences
detected in the RF message.
The possible value range depends on the
capacity of the Physical Layer of the cEMI
Server and the RF chip used for the USB
interface. If the preamble cannot be
detected by the Physical Layer, the value
0000h shall be set.

Postamble 1 This octet shall indicate the number of “01” 00h: default value
Length octet chip sequences in the postamble that the

cEMI Server shall transmit for the RF
message.

Savedate: Filename: page 20 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|cEMI Additional Information|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Type<br>ID|Len|KNX RF<br>Ready/Multi<br>Preamble<br>length|KNX RF<br>Ready/Multi<br>Preamble<br>length|KNX RF Ready/Multi Postamble length|
|1 octet|1 <br>octet|2 octets|2 octets|1 octet|
|09h|03h|High|low||

|Field|Bit|Description|Coding|
|---|---|---|---|
|Preamble<br>Length|2 <br>octets|These 2 octets shall indicate the number of<br>“01” chip sequences in the preamble that<br>the cEMI Server shall transmit for the RF<br>Telegram. The most significant octet shall<br>be transmitted firstly.<br> <br>L_Data.req:<br>- <br>The value 0000h shall indicate<br>that the cEMI Server shall use the<br>default preamble length according<br>to the type of the RF message<br>(Ready, Multi fast or slow).<br>- <br>The possible value range depends<br>on the capacity of the Physical<br>Layer of the cEMI Server and the<br>RF chip used for the USB<br>interface.<br> <br>L_Data.con: the same value shall be<br>used as in L_Data.req.<br> <br>L_Data.ind, L_Busmon.ind: shall<br>contain the effective value of the<br>number of “01” chip sequences<br>detected in the RF message.<br>The possible value range depends on the<br>capacity of the Physical Layer of the cEMI<br>Server and the RF chip used for the USB<br>interface. If the preamble cannot be<br>detected by the Physical Layer, the value<br>0000h shallbe set.|0000h default value<br>xxxxh number of “01”<br>chip<br>sequences in<br>the preamble<br>in case the Frame is<br>sent of Slow IEN:<br> <br>High byte:<br>pattern<br>number to<br>start<br> <br>Low byte.bit 0:<br>Preamble type|
|Postamble<br>Length|1 <br>octet|This octet shall indicate the number of “01”<br>chip sequences in the postamble that the<br>cEMI Server shall transmit for the RF<br>message.|00h: default value|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

**Field** **Bit** **Description** **Coding**

           - L_Data.req: xxh: number of “01”

chip sequences

                    - The value 00h shall indicate that

in the

the cEMI Server shall use the

postamble

default postamble length
according to the type of the RF
message (Ready, Multi fast or
slow).

                    - The possible value range depends
on the capacity of the Physical
Layer of the cEMI Server and the
RF chip used for the USB
interface.

           - L_Data.con: the same value shall be
used as in L_Data.req.

           - L_Data.ind, L_Busmon.ind: shall
contain the effective value of the
number of “01” chip sequences
postamble detected in the RF
message.
The possible value range depends on the
capacity of the Physical Layer of the cEMI
Server and the RF chip used for the USB
interface. If the postamble cannot be
detected by the Physical Layer, the value
00h shall be set.

#### 2.5 Resource definition or used Resources
After factory reset, the default DoA is used and ETS should take care of this.

#### 2.6 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Management Procedures.

#### 2.7 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Configuration Procedures.

Savedate: Filename: page 21 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx

|Field|Bit|Description|Coding|
|---|---|---|---|
||| <br>L_Data.req:<br>- <br>The value 00h shall indicate that<br>the cEMI Server shall use the<br>default postamble length<br>according to the type of the RF<br>message (Ready, Multi fast or<br>slow).<br>- <br>The possible value range depends<br>on the capacity of the Physical<br>Layer of the cEMI Server and the<br>RF chip used for the USB<br>interface.<br> <br>L_Data.con: the same value shall be<br>used as in L_Data.req.<br> <br>L_Data.ind, L_Busmon.ind: shall<br>contain the effective value of the<br>number of “01” chip sequences<br>postamble detected in the RF<br>message.<br>The possible value range depends on the<br>capacity of the Physical Layer of the cEMI<br>Server and the RF chip used for the USB<br>interface. If the postamble cannot be<br>detected by the Physical Layer, the value<br>00h shall be set.|xxh: number of “01”<br>chip sequences<br>in the<br>postamble|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

#### 2.8 Profile definition

 2.9 Identifiers and discovery

### 3 Impact and dependencies

#### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

Indications for the integration of this document in the KNX Specifications are give throughout
this paper.

#### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The specifications in this document guarantee the Configuration Interworking.

#### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

Test have been done on existing PB-Mode implementation without impact on Slow
receivers.

#### 3.4 Integration and common tool impact

 3.5 Security

 3.6 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

With the given specifications, no compatbility issues remain.

Savedate: Filename: page 22 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

## Annex A
###### (informative)

## KNX RF Slow Frame reception

#### A.1 Frame format

With preamble length of 4 111 chip sequence “01” for a time of 500 ms.

#### A.2 RX principle
When a receiver scans S1 and S2 and detects a preamble, it has to stay in RX to detect the
KNX SYNC word. This is because it doesn’t know at which position it is in the preamble.

After detecting a preamble, the device has to stay in RX mode until the Destination Address
has been read, to know if it is addressed by the Telegram. In PB-Mode it could be shorted to
the KNX SN.

#### A.3 Powerconsumption of RF chipset (ST S2LP) only (no MCU consumption)

Savedate: Filename: page 23 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

## Annex B
###### (informative)

## KNX Slow power consumption[ 2)]

#### B.1 Heating system: Standalone use case
The lifetime of the valves is simulated in both scenarios using a developed tool VBA and
Matlab for battery lifetime calculation. The current consumed by the digital LCD interface of
the valve is assumed to be 3 μA. Besides, both valves are equipped with a motor that
consumes about 63 μAh average current. As only Slow devices are used, the latency of the
heating system is 500 milliseconds.

The exchanges of KNX RF Frames in this scenario are presented Figure 11. In fact, the nonthermostatic valve receives 110 “Slow” Frames per day from the thermostat. The 110
Frames consist of 10 command Frames and 100 additional Frames for regulating the room
temperature (updates).

**Figure 11 - Heating system : Standalone use case: exchanged KNX RF Frames**

2) From hager publication : High Lifetime Performances Of a Full RadioFrequency Battery-Powered System

_using the ISO KNX Multi for Home and Building Application: Heating Systems and Alarms._

Savedate: Filename: page 24 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

#### B.2 Heating system: Multiple rooms use case
For every Frame sent by the thermostat, any heating valve will detect the preamble, and has
to receive the whole Telegram (or a big part of it) to know if it is addressed or not. In
PB-Mode, it has to check minimal the SN and the Destination Address. In S-Mode it has to
check DoA and Destination Address.

   - So in real life in a house with multiple rooms, the power consumption will be
reduced by the number of thermostats in the RF range. This is also the case with
any other slow device.

   - Even if 4 years for one device are announced, if there are a larger number of
devices in the installation, batteries have to be replaced more often.

   - For one thermostat the calculation is OK, because it will send slow Frame only to
the associated valve and the feedback is done using info from Fack. If it really
listens to slow Frame, it will also receive Telegram from other thermostats.

Savedate: Filename: page 25 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

#### B.3 Alarm system or Smoke Detectors

This use case is less influenced as there is normally “one” keypad, “one” siren and “one”
central alarm in a home, but multiple window open and movement sensor. As all
communication is done in Slow Mode, every movemement or window sensor will request the
other devices (Siren, Keypad, Central Alarm) also to enter receive mode and reduce their
battery lifetimes.

In case of smoke detector application, which is more decentralized and without a central
point, slow Telegrams will affect every device.

Savedate: Filename: page 26 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

## Annex C
###### (informative)

## KNX SLOW Low Energy consumption

#### C.1 Power consumption of RF chipset only (no MCU consumption)
The following graph shows the electric current consumption.

1. Sniff on SLE2: no energy detected during 200 µs then go back to sleep.

2. Sniff on SLE1: energy detected on adjacent channel (SLE2). RF chipset remains
longer in RX (~6,5 ms) to try catching an enriched KNX SYNC word (DoA).

3. Sniff on SLE2: energy detected and stay in Send one KNX Frame on S2 with
enriched preamble.

4. Rx. Enriched KNX SYNC word detected and receive 3 bytes for valid GroupAddress
and InfoByte (= 37).

5. Rx on SLE2: KNX SYNC word detected and receive 15 bytes. The event appears
after a delay of 37 times an enriched pattern delay (~4,394 ms) as expected from
the previous Rx.

6. Sniff on SLE1: no energy detected during 200 µs

Savedate: Filename: page 27 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

## Annex D
###### (informative)

## Comparison test

#### D.1 Scenarios
The goal of the test is to compare the current consumption during the script duration with a
device that supports the enriched preamble and one that does not, so that we can see the
benefits of the enriched preamble idea.

The EITT script sends KNX Frames on S1 and simulates communication on 2 houses with
different Domain Address, different rooms with Group Addresses that the device does not
support, and different Group Addresses that the device support.

   - House 1 with 4 rooms. The test device shall only support Group Addresses
concerning room 1: DoA LSB = 0201h, Group Addresses: 1234h and 4567h.

   - House 2 with 3 rooms.

The current measurement is done with DMM6500 and Kickstart PC software with the
following settings: digitize current, 10 mA range, 50 ksps, infinite measurement and
start/stop measurement by hand just before/after EITT script execution.

#### D.2 Normal Slow Mode : Eitt scripts

Savedate: Filename: page 28 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

#### D.3 Normal Slow Mode : results
The DMM trace shows the current peaks. We can see long current peak even when
receiving messages because the RF chipset stays in RX during all preamble duration.

#### D.4 Low Energy Slow Mode : EITT scripts
Script that transmits 49 KNX Frames with enriched preamble. Special AddInfo field has
been used to set DoA, GA to be used for generation of enriched Telegrams

Savedate: Filename: page 29 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN202** **KNX RF Multi Slow Low Energy**

#### D.5 Low Energy Slow Mode : results
The DMM trace shows the current peaks. We can see no long current peaks due to Rx even
when receiving complete messages since we don't stay in Rx all preamble long.

#### D.6 Comparison table
The simulation tables shows the following benefits of enriched compared to normal RF Slow.

   - The neighbour communication has almost no impact on the power consumption.

   - The communication in other rooms has only little impact on the power consumption.

   - The power consumption due to the communication with the valve is slightly
improved.

   - The more foreign devices there are (other rooms, neighbour), the better the gain is.

Savedate: Filename: page 30 of 30
2020 07 14 AN202 v01 KNX RF Multi Slow LE DP docx


-----

