## KNX System Conformance Testing
# 88

### Medium Dependant Layers Tests
# 22

### RF Physical and Data Link Layer Tests
# 55

###### Summary

 This document contains the description of KNX RF conformance Tests.

 Version 02.02.02 is an Approved Standard Version.


-----

##### Document updates

###### Version Date Modifications

 1 2003-01-16 Document creation 2 2003-04-07 Restructuring of the document, Corrections and Modifications 3 2003-05-19 Additions and Modifications  4 2003-06-27 Modifications  5 2003-10-01 Modifications according to KonCert meeting 27 6 2003-10-10 Finalisation of draft for KonCert meeting October 2003 7 2003-12-03 Modifications according to KonCert meeting 28 and some more editorial changes – preparation for release for voting 8 2004-06 Resolution of comments from release for voting – preparation for final voting AS 2004-09 No comments in final voting – publication as AS 1.1 2009-06 Readying document for release of V2.0 of the KNX specifications WD20091223 2009-12-23 Update with KNX RF multi specification WD20100309 2010-03-09 Update after first review WD20100719 2010-07-19 TFRF review WD20100923 2010-09-23 TFRF review after Insta comments WD20101004 2010-10-04 TFRF update after Koncert group review. Addition of KNX RF AU tests WD20101012 2010-10-12 Resolution of Koncert comments WD20111010a 2011-10-10 TFRF update after chapter 3-2-5 update. WD20111010b 2011-10-11 Clause 3.2.1.1.4 value correction WD20111019a 2011-10-19 Final TFRF review WD20111027a 2011-10-27 Editorial comments KonCert 2.1 DP 2011-10.28 Readying for Release for Voting 2.2 AS 2013-08 No comments in Release for Voting – publication as AS and integration of AN 152 and AN 154 – positive check that AN 121 was covered.  02.02.01 2013.10.24 Editorial updates for the publication of KNX Specifications 2.1 02.02.02 2022.04 Integration of AN115

##### References

 _The numbers in the left column are given automatically._
_Each number is also defined as a Word bookmark._
_In the right column, references to these bookmarks are given. Copy these references when you refer any of these_
_documents. This makes that the numbering of the references and the updating of the references is done automatically. (This_
_is an EN and ISO/IEC document drafting requirement!). Make however sure that_

###### [01] Chapter 3/2/5 “Radio Frequency”
 [02] Chapter 3/5/3 “Configuration Procedures”
 [03] Volume 7 “Application Descriptions”
 [04] Volume 8 “KNX System Conformance Testing”
 [05] Chapter 8/3/4 “Transport Layer Tests”

Filename: 08_02_05 System Conformance Testing - RF PhL and LL Tests v02.02.02 AS
Version: 02.02.02
Status: AS
Savedate: 2022.04.19
Number of pages: 147

©C i h 1998 2022 A i i AS 02 02 02 2 f 14

|Version|Date|Modifications|
|---|---|---|
|1|2003-01-16|Document creation|
|2|2003-04-07|Restructuring of the document, Corrections and Modifications|
|3|2003-05-19|Additions and Modifications|
|4|2003-06-27|Modifications|
|5|2003-10-01|Modifications according to  KonCert meeting 27|
|6|2003-10-10|Finalisation of draft for KonCert meeting October 2003|
|7|2003-12-03|Modifications according to KonCert meeting 28 and some more editorial<br>changes –preparation for release for voting|
|8|2004-06|Resolution of comments from release for voting – preparation for final<br>voting|
|AS|2004-09|No comments in final voting –publication as AS|
|1.1|2009-06|Readying document for release of V2.0 of the KNXspecifications|
|WD20091223|2009-12-23|Update with KNX RF multi specification|
|WD20100309|2010-03-09|Update after first review|
|WD20100719|2010-07-19|TFRF review|
|WD20100923|2010-09-23|TFRF review after Insta comments|
|WD20101004|2010-10-04|TFRFupdate after Koncert group review. Addition of KNX RF AU tests|
|WD20101012|2010-10-12|Resolution of Koncert comments|
|WD20111010a|2011-10-10|TFRFupdate after chapter 3-2-5 update.|
|WD20111010b|2011-10-11|Clause 3.2.1.1.4 value correction|
|WD20111019a|2011-10-19|Final TFRF review|
|WD20111027a|2011-10-27|Editorial comments KonCert|
|2.1 DP|2011-10.28|Readying for Release for Voting|
|2.2 AS|2013-08|No comments in Release for Voting – publication as AS and integration<br>of AN 152 and AN 154 –positive check that AN 121 was covered.|
|02.02.01|2013.10.24|Editorial updates for the publication of KNXSpecifications 2.1|
|02.02.02|2022.04|Integration of AN115|


-----

##### Contents

###### 1 Introduction ............................................................................................................................ 6

 2 Abbreviations .......................................................................................................................... 7

 3 RF Common Parts .................................................................................................................. 8 3.1 Physical Layer Tests ....................................................................................................... 8 3.2 Specific Requirements for RF2 .................................................................................... 10 3.2.1 EMC and ERM related test ............................................................................... 10 3.2.2 Testing of Tx Centre Frequency Tolerance ...................................................... 10 3.2.3 Testing of Duty Cycle ....................................................................................... 10 3.2.4 Testing of FSK Deviation ................................................................................. 10 3.2.5 Testing of Chip Rate ......................................................................................... 11 3.2.6 Testing of Rx Frequency Tolerance .................................................................. 11 3.2.7 Testing of Rx Chip Rate Tolerance .................................................................. 11 3.3 Specific Requirements for RF5 .................................................................................... 11 3.3.1 EMC and ERM related test ............................................................................... 11 3.3.2 Testing of Tx Centre Frequency Tolerance ...................................................... 11 3.3.3 Testing of Duty Cycle ....................................................................................... 11 3.3.4 Testing of FSK Deviation ................................................................................. 12 3.3.5 Testing of Chip Rate ......................................................................................... 12 3.3.6 Testing of Rx Frequency Tolerance .................................................................. 12 3.3.7 Testing of Rx Chip Rate Tolerance .................................................................. 12 3.3.8 EMC- and ERM related tests ............................................................................ 13 3.3.9 Bit Error Rate level ........................................................................................... 13 3.3.10 Testing of Tx Centre Frequency Tolerance ...................................................... 13 3.3.11 Testing of max Tx Effective Radiated Power ................................................... 14 3.3.12 Testing of Duty Cycle ....................................................................................... 14 3.3.13 Testing of FSK Deviation ................................................................................. 14 3.3.14 Testing max allowed bandwitdh ....................................................................... 16 3.3.15 Testing of Tx Chip Rate .................................................................................... 16 3.3.16 Testing of Tx Jitter per transition...................................................................... 17 3.3.17 Testing of Rx Blocking Performance ............................................................... 18 3.3.18 Testing of Rx Frequency Tolerance .................................................................. 18 3.3.19 Testing of Rx Chip Rate Tolerance .................................................................. 18 3.3.20 Testing of Rx radiated sensitivity ..................................................................... 19 3.4 Data Link Layer Tests (Physical Part) .......................................................................... 19 3.4.1 Transmitter Tests .............................................................................................. 19 3.4.2 Receiver – Tests ................................................................................................ 21 3.5 Data Link Layer Tests (Data Part) ................................................................................ 23 3.5.1 Transmitter Tests for end devices ..................................................................... 23 3.5.2 Receiver Tests for end devices ......................................................................... 24 3.6 Set-up considerations for Testing System-Software ..................................................... 26 3.6.1 Test Set-up: ....................................................................................................... 26 3.6.2 Format of Telegram sequences: ........................................................................ 26 3.7 Transport Layer tests .................................................................................................... 26 3.7.1 System-Broadcast with different TL Services (UDT, NDT, UCD, NCD) ....... 27 3.7.2 Domain-Broadcast with different TL Services (UDT, NDT, UCD, NCD) ................................................................................................................. 27 3.7.3 Test for T_Disconnect-Response on individual connection-oriented requests. ............................................................................................................ 27 3.8 Management Layer tests ............................................................................................... 28 3.8.1 DomainAddressSernr-Read/-Write/-Response ................................................. 28

©C i h 1998 2022 A i i AS 02 02 02 3 f 14


-----

###### 3.8.2 DeviceDescriptor (type 0 / type 2) .................................................................... 29 3.8.3 FunctionPropertyCommand .............................................................................. 29

 4 RF Retransmitters ................................................................................................................ 31
 4.1.1 Physical Layer ................................................................................................... 31 4.1.2 Data Link Layer ................................................................................................ 31 4.1.3 Network Layer .................................................................................................. 37 4.1.4 Transport Layer, Application Layer, Management Layer ................................ 38

 5 RF PB-Mode ......................................................................................................................... 39 5.1 Characteristics ............................................................................................................... 39 5.1.1 Individual Address ............................................................................................ 39 5.1.2 Group Addresses ............................................................................................... 39 5.1.3 Undirectional Sequences ................................................................................... 39 5.2 Channel Setup for Easy-Mode Tests ............................................................................ 39 5.2.1 E-Mode Channel Configuration for PB-Mode and E-Mode Tests ................... 40 5.3 “Teach-In” and “Teach-Out” of non-generic sensor channel ....................................... 41 5.4 “Teach-In” of generic sensor channel ........................................................................... 41 5.5 “Teach-Out” of generic sensor channel ........................................................................ 42 5.6 Linking generic sensor channel with no matching Datapoints ..................................... 43 5.7 Linking actuator channel .............................................................................................. 43 5.8 Actuator with “single connect” - Datapoints ............................................................... 44 5.9 Timeout behaviour ........................................................................................................ 46 5.10 Behaviour on unexpected Frames ................................................................................. 47 5.11 Incorrect number of Group Objects .............................................................................. 49 5.12 Actuator with full association table .............................................................................. 50 5.13 Sensor with full association table ................................................................................. 51 5.14 StopLink behaviour ...................................................................................................... 52 5.15 Sub function .................................................................................................................. 54 5.16 Unidirectional sensor (normal case) ............................................................................. 55 5.17 Optional PB-Services .................................................................................................... 56 5.18 Unidirectional sensor (error case) ................................................................................. 57 5.19 PB-Mode on unidirectional transmitters ....................................................................... 58
 5.19.1 Link sequence ................................................................................................... 58 5.19.2 Generic channel ................................................................................................ 58 5.19.3 Device Descriptor Type 2 ................................................................................. 59

 6 RF Other EASY-Modes (and S-Mode) .............................................................................. 60 6.1 ObjectValue (PID_PB_OBJVALUE) .......................................................................... 60 6.2 ObjectLink (PID_PB_OBJLINK ) ............................................................................... 61 6.3 SetGetParameter (PID_PB_PARAMETERS) .............................................................. 62 6.4 GetObjectAddress (PID_PB_OBJADDR ) ................................................................. 62

 7 Multi Easy Configuration Tests .......................................................................................... 64 7.1 Generalities ................................................................................................................... 64 7.1.1 Channel configuration for RF Multi Easy tests ................................................ 64 7.1.2 Frame description.............................................................................................. 64 7.2 Easy Controler .............................................................................................................. 65 7.2.1 RF Multi Interface object existence .................................................................. 65 7.2.2 RF Multi Type (PID_RF_MULTI_TYPE) ....................................................... 65 7.2.3 RF Multi Physical Features (PID_RF_MULTI_PHYSICAL_FEATURES) ................................................ 65 7.2.4 RF Multi Call Channel (PID_RF_MULTI_CALL_CHANNEL)..................... 66 7.2.5 RF Multi Object Link (PID_RF_MULTI_OBJECT_LINK) ............................ 68

©C i h 1998 2022 A i i AS 02 02 02 4 f 14


-----

###### 7.2.6 RF Multi Extended Group Address Repeated (PID_RF_MULTI_EXT_GA_REPEATED) .................................................... 77 7.2.7 Compatibility between RF 1.1, RF1.R, RF1.M ................................................ 81 7.2.8 Configuration with mixed links ........................................................................ 85 7.3 Push-button ................................................................................................................... 89 7.3.1 Linking actuator ................................................................................................ 89 7.3.2 Linking sensor ................................................................................................. 107 7.3.3 Linking 2 actuators ......................................................................................... 118 7.3.4 Linking 3 actuators ......................................................................................... 126 7.3.5 Linking sensor with multiple actuators ........................................................... 133 7.3.6 Linking actuator Fast Ack ............................................................................... 139

©C i h 1998 2022 A i i AS 02 02 02 5 f 14


-----

#### 1 Introduction
###### Scope of this document is a description of the different test procedures used to ensure the conformance of devices to the KNX RF specification.

 This document only contains test specifications for the RF extensions RF1, RF2, RF3 (see Volume 3/2/5 for further details) and modifications of the KNX standard system. For tests related to the aspects of RF devices that belong to the standard system, please refer to the existing documents in [04].

 As there are different profiles possible for KNX RF devices, this document is separated in the following parts:

 • clause 3 "RF Common Parts”

 • clause 4 “RF Retransmitters

 • clause 5 “RF PB-Mode”

 • clause 6 “RF Other EASY-Modes (and S-Mode)”

 Clause 2 is divided into several parts related to the RF chosen system KNX RF Ready, BiBat, BiBat 2 or KNX RF Multi.

 Similar to other KNX media, RF implementations are in most cases dividable into a common system component (operating system) and a device specific application.

 The conformity of the RF system component is hereby verified with the help of a test application. A detailed description of this test application follows in clause 3.6.

©C i h 1998 2022 A i i AS 02 02 02 6 f 14


-----

#### 2 Abbreviations

###### Abbreviation Description

 ACKREP Frame transmitted by a KNX RF Multi Retransmitter after the repetition of a frame containing a Fast Ack request.

 BDUT Bus Device Under Test

 BER Bit Error Ratio

 DUT Device Under Test

 EMC ElectroMagnetic Compatibility

 ERM Electronic Radio Matters

 FSK Frequency Shift Keying

 NPRM No Permanent Receiver mod.

 PRM Permanent Receiver

 RF Radio Frequency

 RX Receiver

 TRX Transceiver

 TX Transmitter

©C i h 1998 2022 A i i AS 02 02 02 f 14

|Abbreviation|Description|
|---|---|
|ACKREP|Frame transmitted by a KNX RF Multi Retransmitter after the repetition of a frame<br>containing a Fast Ack request.|
|BDUT|Bus Device Under Test|
|BER|Bit Error Ratio|
|DUT|Device Under Test|
|EMC|ElectroMagnetic Compatibility|
|ERM|Electronic Radio Matters|
|FSK|Frequency Shift Keying|
|NPRM|No Permanent Receiver mod.|
|PRM|Permanent Receiver|
|RF|Radio Frequency|
|RX|Receiver|
|TRX|Transceiver|
|TX|Transmitter|


-----

#### 3 RF Common Parts

##### 3.1 Physical Layer Tests
###### The KNX-specific Physical Layer requirements (see [01]) shall be fulfilled. As such tests shall preferably be performed “on the medium”, this requires the use of accurate RF measurement tools and analyzing equipment.

 If such measuring equipment is not available, calibrated RF devices with well-known accuracy may also be used to perform the underneath tests.

 Table 1 - Conformance table with limits

##### KNX RF2  KNX RF3 KNX RF1 systems 
 systems systems

###### Measurement
 KNX RF1 BiBat KNX RF1 Multi KNX RF1 Multi
 KNX RF1 Ready KNX RF2 Ready  KNX RF3 Ready
 KNX RF1 BiBat 2 Fast channels  Slow channels

 √ [for Europe]

 EMC §3.1.1 √ √ √ √ Otherwise see
 specific local regulation

 BER §3.1.2 √ √ √ √ √ √

 Fc = F1 =
 Fc = F1 =
 TX center Fc = F1 = 868,300 MHz S1 = 869.850MHz
 868,300 MHz Fc = 433.500MHz Fc = 433.500MHz
 frequency 868,300 MHz F2 = 868.950MHz S2 = 869.525MHz
 F4 = 869.525MHz
 ±25ppm ±25ppm
 §3.1.3 ±25ppm F3 = 869.850MHz ±25ppm
 ±25ppm 
 ±25ppm

 TX radiated power Max : +14dBm Max : +14dBm Max : +14dBm Max : +14dBm Max : +10dBm Max : +7dBm §3.1.4
 Min: -3 dBm Min : -3 dBm Min : -3 dBm Min : -3 dBm Min : -3 dBm Min : -3 dBm

©C i h 1998 2022 A i i AS 02 02 02 8 f 14

|Measurement|KNX RF1 systems|Col3|Col4|Col5|KNX RF2<br>systems|KNX RF3<br>systems|
|---|---|---|---|---|---|---|
|**Measurement**|**KNX RF1  Ready**|**KNX RF1 BiBat**<br>**KNX RF1 BiBat 2**|**KNX RF1 Multi**<br>**Fast channels**|**KNX RF1 Multi**<br>** Slow channels**|**KNX RF2 Ready**|**KNX RF3 Ready**|
|EMC §3.1.1|√|√|√|√|√ [for Europe]<br>Otherwise see<br>specific local<br>regulation||
|BER §3.1.2|√|√|√|√|√|√|
|TX center<br>frequency<br>§3.1.3|Fc = F1 =<br>868,300 MHz<br>±25ppm|Fc = F1 =<br>868,300 MHz<br>F4 = 869.525MHz<br>±25ppm|Fc = F1 =<br>868,300 MHz<br>F2 = 868.950MHz<br>F3 = 869.850MHz<br>±25ppm|S1 = 869.850MHz<br>S2 = 869.525MHz<br>±25ppm|Fc = 433.500MHz<br>±25ppm|Fc = 433.500MHz<br>±25ppm|
|TX radiated power<br>§3.1.4|Max : +14dBm<br>Min: -3 dBm|Max : +14dBm<br>Min : -3 dBm|Max : +14dBm<br>Min : -3 dBm|Max : +14dBm<br>Min : -3 dBm|Max : +10dBm<br>Min : -3 dBm|Max : +7dBm<br>Min : -3 dBm|


-----

|Measurement|KNX RF1 systems|Col3|Col4|Col5|KNX RF2<br>systems|KNX RF3<br>systems|
|---|---|---|---|---|---|---|
|**Measurement**|**KNX RF1  Ready**|**KNX RF1 BiBat**<br>**KNX RF1 BiBat 2**|**KNX RF1 Multi**<br>**Fast channels**|**KNX RF1 Multi**<br>** Slow channels**|**KNX RF2 Ready**|**KNX RF3 Ready**|
|Max TX duty cycle<br>§3.1.5|1%|F 1 : 1%<br>F4 : 10%|F1 : 1%<br>F2 : 0.1%<br>F3 : 100% if erp<br>≤5mW else 1%|S1 : 100% if erp<br>≤5mW else 1%<br>S2 : 10%|1%|1%|
|FSK Deviation<br>§3.1.6|±48kHz to±80kHz|±48kHz to±80kHz|±48kHz to±80kHz|±20kHz to±65kHz|±48kHz to±80kHz|±48kHz to±80kHz|
|Max allowed<br>bandwidth<br>§3.1.7|600kHz|F1 : 600kHz<br>F4 : 250kHz|F1 : 500kHz<br>F2 : 500kHz<br>F3 : 300kHz|S1 : 300kHz<br>S2 : 250kHz|500kHz|400kHz|
|TX chip rate §3.1.8|32768cps±1.5%|32768cps±1.5%|32768cps±1.5%|16384cps±1.5%|32768cps±1.5%|32768cps±1.5%|
|TX jitter per<br>transition §3.1.9|±5µs|±5µs|±5µs|±5µs|±5µs|±5µs|
|RX blocking<br>performance<br>§3.1.10|Category 2|Category 2|Category 2|Category 2|Category 2|Category 2|
|RX frequency<br>tolerance §3.1.11|±25ppm<br>±60 ppm in case of<br>metering receiver on<br>Fc|±25ppm<br>±60 ppm in case of<br>metering receiver on<br>Fc|±25ppm<br>±60 ppm in case of<br>metering receiver on<br>Fc|±25ppm|±25ppm|±25ppm|


©C i h 1998 2022 A i i AS 02 02 02 9 f 14


-----

|Measurement|KNX RF1 systems|Col3|Col4|Col5|KNX RF2<br>systems|KNX RF3<br>systems|
|---|---|---|---|---|---|---|
|**Measurement**|**KNX RF1  Ready**|**KNX RF1 BiBat**<br>**KNX RF1 BiBat 2**|**KNX RF1 Multi**<br>**Fast channels**|**KNX RF1 Multi**<br>** Slow channels**|**KNX RF2 Ready**|**KNX RF3 Ready**|
|RX chip rate and<br>minimal tolerance<br>§3.1.12|32768cps±2%|32768cps±2%|32768cps±2%|16384cps±2%|32768cps±2%|32768cps±2%|
|Rx sensitivity<br>§3.1.13|Typ : -95dBm<br>Min : -80dBm|Typ : -95dBm<br>Min : -80dBm|Typ : -95dBm<br>Min : -80dBm|Typ : -95dBm<br>Min : -80dBm|Typ : -95dBm<br>Min : -80dBm|Typ : -95dBm<br>Min : -80dBm|


##### 3.2 Specific Requirements for RF2

###### 3.2.1 EMC and ERM related test EMC and ERM related test for RF2 if used outside Europe, shall be performed according to the local standards where the equipment is intended to be used.

 3.2.2 Testing of Tx Centre Frequency Tolerance Requirements:

 RF2.M, channel F1: 433,500 MHz

 3.2.3 Testing of Duty Cycle Requirements:

 RF2.M: 10 %

 3.2.4 Testing of FSK Deviation Requirements:

 RF2.M Fast channels: 45 kHz -11,25 kHz to 11,25 kHz. Measured in centre of chip (frequency vs. time eye opening) transmitting PN9 sequence, min/max based on rms error value.

©C i h 1998 2022 A i i AS 02 02 02 10 f 14


-----

###### RF2.M Slow channels: 33 kHz -8,25 kHz to 8,25 kHz. Measured in centre of chip (frequency vs. time eye opening) transmitting PN9 sequence, min/max based on rms error value.

 3.2.5 Testing of Chip Rate Requirements:

 RF2.M Fast channels: 32 768 cps - 0,5 % to 32 768 cps+0,5%

 RF2.M Slow channels: 16 384 cps - 0,5 % to 16 384 cps+0,5%

 3.2.6 Testing of Rx Frequency Tolerance Testing:

 RF2.M, channel F1: Centre frequency 433,500 MHz.

 Requirement: 433,500 MHz – 25 ppm to 433,500 MHz +25 ppm.

 3.2.7 Testing of Rx Chip Rate Tolerance Testing:

 RF2.M: Test at TX chiprate-0,5 % and TX chiprate +0,5 %

##### 3.3 Specific Requirements for RF5

###### 3.3.1 EMC and ERM related test EMC and ERM related test for RF5 shall be performed according to the local standards in India.

 3.3.2 Testing of Tx Centre Frequency Tolerance Requirements:

 RF5.M, channel F1: 865,500 MHz

 3.3.3 Testing of Duty Cycle Requirements:

 RF5.M: 10 %

©C i h 1998 2022 A i i AS 02 02 02 11 f 14


-----

###### 3.3.4 Testing of FSK Deviation Requirements:

 RF5.M Fast and Slow channels: 33 kHz - 8,25 kHz to 8,25 kHz. Measured in centre of chip (frequency vs. time eye opening) transmitting PN9 sequence, min/max based on rms error value).

 3.3.5 Testing of Chip Rate Requirements:

 RF5.M Fast channels: 32 768 cps - 0,5 % to 32 768 cps + 0,5 %

 RF5.M Slow channels: 16 384 cps - 0,5 % to 16 384 cps + 0,5 %

 3.3.6 Testing of Rx Frequency Tolerance Testing:

 RF5.M, channel F1: Centre frequency 865,500 MHz

 Requirement: 865,500 MHz- 25 ppm to 865,500 MHz + 25 ppm

 3.3.7 Testing of Rx Chip Rate Tolerance Testing:

 RF5.M: Test at TX chiprate + 0,5 % and TX chiprate -0,5 %

©C i h 1998 2022 A i i AS 02 02 02 12 f 14


-----

###### 3.3.8 EMC- and ERM related tests EMC- and ERM related issues are not part of this test specification. These tests shall be performed according to European Standards listed under the R&TTE directive.

 Primarily the harmonised standards EN 300 220 and EN 301 489 shall be fulfilled. These standards cover principle RF requirements (power, bandwidth, modulation etc.) and EMC-specific requirements for RF short-range devices (SRD).

 At any rate the product-specific (non RF related) European standards shall also be fulfilled.

 3.3.9 Bit Error Rate level Test setup To meet the requirements regarding the minimum input signal level of the receiver, depending on the test setup, the signal may be transmitted by RF Cable (coax cable connection between transmitter and receiver to avoid external influences or may consist in transmitting the RF Signal via an antenna. However, this last method requires a lot of calibration effort and can only be carried out in an absorber room or similar environment.
 • Testing: RF Telegrams are transmitted with a signal level according to the minimum allowed signal level of the DUT plus 3 dB. DUT shall allow to check whether it has received the RF- Telegram without an error e.g. by switching a relay or sending a reply Telegram. It is necessary to transmit enough RF Telegrams in order to get a sufficient number of tests for a statistical evaluation. A number of at least 1000 RF Telegrams shall be transmitted. During the tests the influences of the receiving software are also checked.  The bit error rate is calculated with the following formula : Bit Error Rate = (Number of faulty Telegrams) / (Number of Telegrams*(Bits/Telegram)) Requirements: Bit Error Rate ≤ 10[-4] [For radiated measurement in the optimum antenna direction]

 3.3.10 Testing of Tx Centre Frequency Tolerance

 • Test Set-up: Test temperatures: 0 °C, 25 °C, 45 °C

 Broadband Antenna Spectrum analyzer

 DUT

 Figure 1 - Example Test Set-up Tx Centre Frequency Tolerance

 • Testing: The centre frequency and its tolerance shall be measured with modulation switched off. The manufacturer shall state if the test mode provided allows the centre frequency to be measured directly, or if only the lower and upper modulation frequency can be measured. In the latter case the centre frequency is calculated as fc = (f0 + f1)/2 where f0 = frequency “0”, f1 = frequency “1”, fc = centre frequency


-----

###### • Requirements:  See Table 1 limits. If several RF channels are used, all nominal center frequencies shall be measured at 25 °C and the temperature drift can be done at one single frequency. KNX Physical Layer parameters shall be met on the entire product temperature range declared by the manufacturer in case it exceeds the range 0°C to 45°C (e.g. : -10°C to 70°C for outdoor usage).
 • The manufacturer shall describe in a manufacturer test report how the measured tolerance is influenced by the frequency relevant components used (e.g. aging, temperature, initial tolerance of e.g. the used crystal) do not cause an overstepping of the limits.

 3.3.11 Testing of max Tx Effective Radiated Power

 • Test Setup: See EN 300 220-1
 • Testing: See EN 300 220-1
 • Requirements:  See Table 1. 
 • EN 300-220 test report for the device may replace this test.

 3.3.12 Testing of Duty Cycle

 • Test Set-up: see EN 300 220-1; “Max Tx Duty Cycle”
 • Testing: see EN 300 220-1; “Max Tx Duty Cycle”
 • Requirements: See Table 1 limits. For repeater devices using RF channels with low Duty Cycle at 0,1 %, the duty cycle shall be software controlled.

 3.3.13 Testing of FSK Deviation

 • Test Set-up: see 3.3.10
 • Testing: The DUT shall transmit a normal RF-Telegram. The demodulated FM-Signal shall be measured with a Spectrum Analyser (Option: FM-Demodulator)
 • Requirements:

 See Table 1 limits.

 • For devices using RF channels Fc, F2, F3 or F4 

 The FSK-signal shape shall be within the allowed area. Amplitudes of spikes of maximum 5 µs up to 100 kHz are allowed.  As owing to the baudrate and manchester coding the length of logical signal can change between 30,5 µs and 61 µs, both values shall be tested. w = 2 * π (1/61,02 µs)


-----

fDEV


allowed area for fDEV


sin w*t


t = 0 - 30,5 us


allowed area for fDEV

###### Figure 2 - Allowed FSK-Deviation shape for Fc, F2 to F4

 • For devices using RF channels S1 and S2

 The FSK-signal shape shall be within the allowed area. Amplitudes of spikes of maximum 5 µs up to 80 kHz is allowed.  As owing to the baudrate and manchester coding the length of logical signal can change between 61 µs and 122 µs, both values shall be tested. w = 2 * π (1/122 µs)

|Col1|80 kHz<br>60 kHz<br>48 kHz<br>sin w*t<br>t = 0-30,5 us<br>t<br>length of logic signal<br>sin w<br>-48 kHz<br>-60 kHz<br>-80 kHz<br>allowed area f|
|---|---|


fDEV


allowed area for fDEV


sin w*t


t = 0 - 61 us


allowed area for fDEV

###### Figure 3 - Allowed FSK-Deviation shape for S1 and S2

|Col1|allowed area for f DEV|Col3|Col4|Col5|
|---|---|---|---|---|
||t <br>65 kHz <br>20 kHz <br>33 kHz <br>length of logic signal <br>sin w*t <br>  <br> <br>t = 0 -  61 us <br>- 20 kHz <br>sin w|t <br>65 kHz <br>20 kHz <br>33 kHz <br>length of logic signal <br>sin w*t <br>  <br> <br>t = 0 -  61 us <br>- 20 kHz <br>sin w|t <br>65 kHz <br>20 kHz <br>33 kHz <br>length of logic signal <br>sin w*t <br>  <br> <br>t = 0 -  61 us <br>- 20 kHz <br>sin w|t <br>65 kHz <br>20 kHz <br>33 kHz <br>length of logic signal <br>sin w*t <br>  <br> <br>t = 0 -  61 us <br>- 20 kHz <br>sin w|
||20 kHz|20 kHz|20 kHz|20 kHz|
|||length of logic signal <br>- 20 kHz|||
||-65 kHz <br>- 33 kHz <br>allowed are a f|-65 kHz <br>- 33 kHz <br>allowed are a f|||


-----

###### 3.3.14 Testing max allowed bandwitdh 

 • Test Setup: See modulation range test described in EN 300 220-1
 • Testing: See modulation range test described in EN 300 220-1
 • Requirements:  See Table 1 limits. The modulation range including frequency drift over the whole temperature range shall be inside the designated RF channel bandwidth.

 3.3.15 Testing of Tx Chip Rate

 • Test Set-up: Ambient Temperature: 0 °C, 25 °C, 45 °C

 Oscilloscope/Frequency Counter

 DUT Baseband Signal

 Tx
 Figure 4 - Example Test set up Tx chip rate / tolerance

 • Testing: An electrical access to baseband signal (digital chip stream) shall be provided and measured e.g. with an oscilloscope or frequency counter. In case the baseband signal is not accessible, a calculation demonstrating the compliance shall be provided.
 • Requirements: See Table 1 limits. The manufacturer shall describe in a manufacturer test report how the measured tolerance is influenced by the frequency relevant components used (e.g. ageing, temperature, initial tolerance of e.g. the used crystal) do not cause an overstepping of the limits. KNX Physical Layer parameters shall be met on the entire product temperature range declared by the manufacturer in case it exceeds 0 °C – 45 °C range (e.g. : -10 °C to 70 °C for outdoor usage).


-----

###### 3.3.16 Testing of Tx Jitter per transition

 • Test Set-up: 

 Oscilloscope/Dig. Analyzer Testreceiver


###### Broadband Antenna


###### DUT


OUT IN

|Col1|Col2|Col3|
|---|---|---|
||||
||||
||||
||||
|IN<br>OUT|IN<br>OUT|IN<br>OUT|


FM-Signal
Demodulated-Signal

###### Figure 5 - Example Test set up Tx Jitter per transition

 • Testing: Any FM-test receiver can be used with an appropriate accuracy regarding the demodulation of the FM-signal. The jitter generated by the FM-test receiver shall be ≤ 0,5 µs. The DUT shall transmit an RF-Telegram. The demodulated signal is subsequently evaluated by means of e.g. an oscilloscope or digital analyser.
 • Requirements: 

 See Table 1 limits.  Fc, F2, F3 and F4

 Owing to the baseband signal in the ideal case a stream of positive and negative pulses of 30,5 µs and 61,0 µs will be visible. Each pulse after the first preamble pulse[ 1)] shall be tested and shall be in the following range.

 min. typ. max. chips comment
 25,5 µs 30,5 µs 35,5 µs 1 stream of logical “0” or “1”
 56,0 µs 61,0 µs 66,0 µs 2 change between logical “0” and “1” and vice versa

 Figure 6 - Fc, F2, F3, F4 requirements Tx jitter per transition

 S1 and S2

 Owing to the baseband signal in the ideal case a stream of positive and negative pulses of 61 µs and 122 µs will be visible. Each pulse after the first preamble pulse[ 2)] shall be tested and shall be in the following range.

 min. typ. max. chips comment
 56,0 µs 61,0 µs 66 0µs 1 stream of logical “0” or “1”
 117,0 µs 122,0 µs 127.0 µs 2 change between logical “0” and “1” and vice versa

 Figure 7 - S1 to S2 requirements Tx jitter per transition

1) It is allowed in that the first preamble pulse does not meet the above requirements due to the ramp up of power
###### amplifiers.
2) It is allowed in that the first preamble pulse does not meet the above requirements due to the ramp up of power
###### amplifiers.

|min.|typ.|max.|chips|comment|
|---|---|---|---|---|
|25,5µs|30,5µs|35,5µs|1|stream of logical “0” or “1”|
|56,0µs|61,0µs|66,0µs|2|change between logical “0” and “1”<br>and vice versa|

|min.|typ.|max.|chips|comment|
|---|---|---|---|---|
|56,0µs|61,0µs|66 0µs|1|stream of logical “0” or “1”|
|117,0µs|122,0µs|127.0µs|2|change between logical “0” and “1”<br>and vice versa|


-----

###### 3.3.17 Testing of Rx Blocking Performance

 • Test Setup: See EN 300 220-1
 • Testing: See EN 300 220-1
 • Requirements:  See Table 1 limits.

 3.3.18 Testing of Rx Frequency Tolerance

 • Test Set-up: see 3.3.9 Bit Error Rate

 e.g. HF-Signal-Generator

 Baseband Signal


###### Broadband Antenna or direct connection via RF-cable


###### DUT


###### FM-Signal


###### Figure 8 - Example Test setup Rx Frequency Tolerance

 • Testing: The test shall be carried out in the same way as 3.3.9 (Bit Error Rate) with nominal Rx frequency (center frequency : Fc), Rx frequency +25 ppm and Rx frequency –25 ppm.
 • Requirements:  Bit Error Rate ≤ 10[-4] [For radiated measurement, in the optimum antenna direction] See Table 1 limits.
 - For devices communicating with metering devices, the test shall also be performed at F1 = 868,300 MHz ± 60 ppm. [Not applicable to KNX RF AU]
 - For devices with RF slow channel feature, the test shall also be perfomed at Rx frequency S1 or S2. See limits in Table 1.

 3.3.19 Testing of Rx Chip Rate Tolerance 

 • Test Set-up: Test Set-up regarding bit error rate see 3.3.9. at 25 °C

 Broadband Antenna or direct connection via RF- cable DUT

 AUX Damping
 FM-Signal with altered chip rate

 Figure 9 - Example Test Setup Rx Chip Rate Tolerance

|Col1|Col2|Col3|DUT cable|
|---|---|---|---|
|AUX||Damping<br>|FM-Signal with altered|
|AUX||||


-----

###### • Testing: The test shall be carried out in the same way as 3.3.9 with an AUX device generating RF Telegrams with the nominal Tx chip rate, Tx chip rate +2 % and Tx chip rate –2 %.
 • Requirements:  Bit Error Rate ≤ 10[-4] For devices with Fast and Slow features, the test shall be performed at both datarates.

 3.3.20 Testing of Rx radiated sensitivity 

 • Test Set-up: Test Set-up regarding bit error rate see 3.3.9. at 25 °C

Spectrumanalyzer

Antenna

DUT

AUX Damping

FM-Signal

###### Figure 10 - Example Test Setup Rx radiated Sensitivity

 • Testing: The test shall be carried out in the same way as 3.3.9 with an AUX device able to generate nominal RF Telegrams. The radiated signal shall be damped down to a level where the bit error rate is just achieved. Subsequently, the radiated signal level is measured with e.g. an antenna and spectrum analyser.
 • Requirements:  The radiated sensitivity level shall be below Table 1 limits in the optimum antenna direction.

##### 3.4 Data Link Layer Tests (Physical Part)

###### 3.4.1 Transmitter Tests To perform these transmitter tests, an accurate measurement unit (with demodulator) or a calibrated receiver shall be used. Tests can be performed on only one single frequency.

 3.4.1.1 Specific parameters

 3.4.1.1.1 KNX RF Ready

|AUX|Col2|Damping|Col4|Col5|Col6|
|---|---|---|---|---|---|
|AUX||||||

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble<br>(Ready)|Count number of preamble bits|76 ≤ number of preamble chip-<br>sequences “01” shall be ≤ 81<br>Typical value = 79|


-----

###### 3.4.1.1.2 KNX RF BiBat and BiBat 2 

 Test Test-Description Expected Behaviour
 Preamble Count number of preamble bits  Number of preamble chip-sequences
 “01” ≥ 15 and not more than 32.
 (Bibat, Bibat2)

 3.4.1.1.3 KNX RF Multi Tests shall be done in relation with the device capability (fast only, slow only or fast & slow) and with the suitable data rate.

 Test for F1, F2 Test-Description Expected Behaviour and F3
 Preamble (Fast) Count number of preamble bits  242 ≤ Number of preamble chip- sequences “01” shall be ≤ 253 

 Typical value = 247

 Medium access The default call channel shall be F1 DUT shall successfully transmit  with one RF Frames in RF channel F2 without
 Put a permanent carrier in F1 at 0dBm
 channel blocked unexpected delay (Fast) Send Telegrams 

 Medium access The default call channel shall be F1 DUT shall successfully transmit  with two RF Frames in RF channel F3 without
 Put two permanent carriers in F1 and in F2 at 0dBm
 channels blocked unexpected delay (Fast) Send Telegrams

 [only applicable to devices with F3 feature]

 Medium access The call channel shall be F1 DUT shall successfully transmit with an ongoing  Frames in RF channel F2 after 500ms 
 Send a long KNX dummy frame of more than 600ms at F1
 metering frame on F1  Send Telegrams

 Test for S1 and Test-Description Expected Behaviour S2
 Preamble (Slow) Count number of preamble bits 4106 ≤ Number of preamble chip- sequences “01” shall be ≤ 4116 

 Typical value = 4111 according Volume 3/2/5

 Medium access The default call channel shall be S1 DUT shall successfully transmit  with one RF Frames in RF channel S2 without
 Put a permanent carrier in S1 at 0dBm 
 channel blocked unexpected delay (Slow) Send Telegrams 

 3.4.1.1.4 Fast Ack service This clause applies if the Fast Ack service is available in the device. Tests shall be done in relation with the device capability (fast only, slow only or fast & slow).

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble<br>(Bibat, Bibat2)|Count number of preamble bits|Number of preamble chip-sequences<br>“01”≥ 15 and not more than 32.|

|Test for F1, F2<br>and F3|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble (Fast)|Count number of preamble bits|242 ≤ Number of preamble chip-<br>sequences “01” shall be ≤ 253<br>Typical value = 247|
|Medium access<br>with one RF<br>channel blocked<br>(Fast)|The default call channel shall be F1<br>Put a permanent carrier in F1 at 0dBm<br>Send Telegrams|DUT shall successfully transmit<br>Frames in RF channel F2 without<br>unexpected delay|
|Medium access<br>with two RF<br>channels blocked<br>(Fast)<br>[only applicable<br>to devices with<br>F3 feature]|The default call channel shall be F1<br>Put two permanent carriers in F1 and in F2 at 0dBm<br>Send Telegrams|DUT shall successfully transmit<br>Frames in RF channel F3 without<br>unexpected delay|
|Medium access<br>with an ongoing<br>metering frame<br>on F1|The call channel shall be F1<br>Send a long KNX dummy frame of more than 600ms at F1<br>Send Telegrams|DUT shall successfully transmit<br>Frames in RF channel F2 after 500ms|

|Test for S1 and<br>S2|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble (Slow)|Count number of preamble bits|4106 ≤ Number of preamble chip-<br>sequences “01” shall be ≤ 4116<br>Typical value = 4111 according<br>Volume 3/2/5|
|Medium access<br>with one RF<br>channel blocked<br>(Slow)|The default call channel shall be S1<br>Put a permanent carrier in S1 at 0dBm<br>Send Telegrams|DUT shall successfully transmit<br>Frames in RF channel S2 without<br>unexpected delay|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Postamble with<br>End of Ack|Inspect signal with the complete postamble sequence for<br>Fast Ack|Number of postamble chips (from start<br>to end) : 320|


-----

|Fast Ack Sync<br>Word|Inspect signal with sync word for Fast Ack|Fast Ask Postamble sync word shall<br>be sent.<br>(chip sequence 011011011011)|
|---|---|---|
|End Of Ack field|Send a Frame requesting 2 Fast Acks|DUT shall transmit the number of Fast<br>Ack expected= “10” in the field EOA|
|Fast Ack End|Inspect signal with end sequence for Fast Ack|Number of End chip sequence: “01”: 4|
|Fast Ack filling|Send a Frame requesting at least 3 Fast Ack. Send Fast<br>Acks in answer but with one missing.|DUT shall transmit the filling<br>sequence during the missing Fast Ack<br>window : 8 to 10 times a sequence of<br>“0011” chips|


###### 3.4.1.2 Other common parameters

 Test Test-Description Expected Behaviour Postamble Count number of postamble bits Number of postamble chips = [2...8]

 [Not applicable when Fast Ack service is enabled]

 Manchester- Inspect signal after preamble Chip-sequence „000111“ shall be sent Violation after preamble
 Syncword Inspect signal after manchester violation  The correct syncword shall be sent: (chip sequence "011010010110")
 Note: For slow RF channels, the data rate is divided by 2 compared to Fast RF channels. 

 3.4.2 Receiver – Tests  To perform these receiver tests use a waveform generator or a calibrated RF device with modified Physical Layer.

 3.4.2.1 KNX RF Ready

 Test Test-Description Expected Behaviour
 Preamble for Send Telegrams with preamble chip-sequence number =15, DUT (Device Under Test) shall KNX RF 1.1 as normally generated by a KNX RF 1.1 device successfully receive Frames with 15 devices preamble-chip-sequences “01” 

 Preamble for  Send Telegrams with preamble chip-sequence number =79, DUT (Device Under Test) shall Ready devices as normally generated by any KNX RF device other than successfully receive Frames with 79
 KNX RF 1.1 preamble-chip-sequences “01” 

 3.4.2.2 KNX RF BiBat, Bibat2

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Postamble<br>[Not applicable<br>when Fast Ack<br>service is<br>enabled]|Count number of postamble bits|Number of postamble chips = [2...8]|
|Manchester-<br>Violation|Inspect signal after preamble|Chip-sequence „000111“ shall be sent<br>after preamble|
|Syncword|Inspect signal after manchester violation|The correct syncword shall be sent:<br>(chip sequence "011010010110")|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble for<br>KNX RF 1.1<br>devices|Send Telegrams with preamble chip-sequence number =15,<br>as normally generated by a KNX RF 1.1 device|DUT (Device Under Test) shall<br>successfully receive Frames with 15<br>preamble-chip-sequences “01”|
|Preamble for<br>Ready devices|Send Telegrams with preamble chip-sequence number =79,<br>as normally generated by any KNX RF device other than<br>KNX RF 1.1|DUT (Device Under Test) shall<br>successfully receive Frames with 79<br>preamble-chip-sequences “01”|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Preamble|Send Telegrams with different amount of preamble-bits|DUT shall successfully receive<br>Frames with≥ 15 preamble-chip-<br>sequences “01”|


-----

###### 3.4.2.3 KNX RF Multi
 One single receiver with several behaviour KNX RF Multi Fast, KNX RF Multi Slow and KNX RF Fast & Slow might be used for these tests or 4 different devices. 

 If the NPRM (no permanent receive mode) is used on the DUT, the tests have to be performed with NPRM and PRM (permanent receive mode) behaviour if not specified.

 Tests for F1, F2, F3 Test-Description Expected Behaviour
 Multi Fast preamble Send Telegrams with preamble chip-sequence number DUT (Device Under Test) shall
 =247 successively on F1, F2 (and F3 if supported) successfully receive Frames with 247
 preamble-chip-sequences “01” 

 Ready preamble Use the device with PRM behaviour DUT (Device Under Test) shall
 successfully receive Frames with 79
 Send Telegrams with preamble chip-sequence number
 preamble-chip-sequences “01” 
 =79 on F1 

 Fast Ack postamble Send Telegram with postamble sequence for Fast Ack DUT shall successfully receive Frames (Fast) with postamble sequence for Fast Ack

 Medium access with Put a permanent carrier in F1 DUT shall successfully receive Frames one RF channel in RF channel F2 without unexpected
 Send Telegrams on F2
 blocked (Fast) delay 

 Medium access with Put two permanent carriers in F1 an F2 DUT shall successfully receive Frames two RF channels in RF channel F3 without unexpected
 Send Telegrams on F3
 blocked (Fast) delay 

 [only applicable to devices with F3 feature]

 Medium access with Send a long KNX Frame of more than 600ms at F1 DUT shall successfully receive Frames a metering KNX in RF channel F2 after 500ms 
 At the same time send Telegrams
 frame (fast)

 Tests for S1, S2 Test-Description Expected Behaviour
 Multi Slow Send Telegrams with preamble chip-sequence number DUT (Device Under Test) shall preamble =4111 successfully receive Frames with 4111
 preamble-chip-sequences “01” 

 Multi Fast preamble Use the device with PRM behaviour DUT (Device Under Test) shall
 successfully receive Frames with 247
 Send Telegrams with preamble chip-sequence number
 preamble-chip-sequences “01” 
 =247 on F1, F2 or F3

 Fast Ack postamble Send Telegram with postamble sequence for Fast Ack DUT shall successfully receive Frames (Slow) with postamble sequence for Fast Ack

 Medium access with Put a permanent carrier in S1 DUT shall successfully receive Frames one RF channel in RF channel S2 without unexpected
 Send Telegrams on S2
 blocked (Slow) delay 

 3.4.2.3.1 Fast Ack service This paragraph applies if the Fast Ack Service is available in the device.

 This service is independent of the used RF channel Fast or Slow.

|Tests for F1, F2, F3|Test-Description|Expected Behaviour|
|---|---|---|
|Multi Fast preamble|Send Telegrams with preamble chip-sequence number<br>=247 successively on F1, F2 (and F3 if supported)|DUT (Device Under Test) shall<br>successfully receive Frames with 247<br>preamble-chip-sequences “01”|
|Ready preamble|Use the device with PRM behaviour<br>Send Telegrams with preamble chip-sequence number<br>=79 on F1|DUT (Device Under Test) shall<br>successfully receive Frames with 79<br>preamble-chip-sequences “01”|
|Fast Ack postamble<br>(Fast)|Send Telegram with postamble sequence for Fast Ack|DUT shall successfully receive Frames<br>with  postamble sequence for Fast Ack|
|Medium access with<br>one RF channel<br>blocked (Fast)|Put a permanent carrier in F1<br>Send Telegrams on F2|DUT shall successfully receive Frames<br>in RF channel F2 without unexpected<br>delay|
|Medium access with<br>two RF channels<br>blocked (Fast)<br>[only applicable to<br>devices with F3<br>feature]|Put two permanent carriers in F1 an F2<br>Send Telegrams on F3|DUT shall successfully receive Frames<br>in RF channel F3 without unexpected<br>delay|
|Medium access with<br>a metering KNX<br>frame (fast)|Send a long KNX Frame of more than 600ms at F1<br>At the same time send Telegrams|DUT shall successfully receive Frames<br>in RF channel F2 after 500ms|

|Tests for S1, S2|Test-Description|Expected Behaviour|
|---|---|---|
|Multi Slow<br>preamble|Send Telegrams with preamble chip-sequence number<br>=4111|DUT (Device Under Test) shall<br>successfully receive Frames with 4111<br>preamble-chip-sequences “01”|
|Multi Fast preamble|Use the device with PRM behaviour<br>Send Telegrams with preamble chip-sequence number<br>=247 on F1, F2 or F3|DUT (Device Under Test) shall<br>successfully receive Frames with 247<br>preamble-chip-sequences “01”|
||||
|Fast Ack postamble<br>(Slow)|Send Telegram with postamble sequence for Fast Ack|DUT shall successfully receive Frames<br>with  postamble sequence for Fast Ack|
|Medium access with<br>one RF channel<br>blocked (Slow)|Put a permanent carrier in S1<br>Send Telegrams on S2|DUT shall successfully receive Frames<br>in RF channel S2 without unexpected<br>delay|

|Tests|Test-Description|Expected Behaviour|
|---|---|---|
|Fast Ack preamble|Inspect preamble of Fast Ack|A preamble of 18 chip sequence “01”|


-----

|Col1|Col2|shall be sent|
|---|---|---|
|Fast Ack synchro<br>word|Inspect signal of Fast Ack after preamble|The correct syncword shall be sent:<br>(chip sequence "011010010110")|
|Fast Ack KNX<br>CTRL field|Sent Fast Ack with different KNX Ctrl values [bit7 to<br>bit4]|DUT shall reject Fast Ack KNX<br>CTRL values <> 0001eeee<br>eeee = EFF field   see Vol 03_03_02<br>Data Link Layer General|


###### 3.4.2.4 Other common parameters

 Test Test-Description Expected Behaviour
 Postamble Send Telegrams with different amount of postamble-bits DUT shall successfully receive
 Frames with [2..8] postamble-chips

 [Not applicable when Fast Ack service is enabled]

##### 3.5 Data Link Layer Tests (Data Part)
###### The data part of the Data Link Layer shall be tested with a device capable of receiving raw FT3 Frames.

 3.5.1 Transmitter Tests for end devices

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Postamble<br>[Not applicable<br>when Fast Ack<br>service is<br>enabled]|Send Telegrams with different amount of postamble-bits|DUT shall successfully receive<br>Frames with  [2..8] postamble-chips|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|FT3 Length|count total numbers of user octets beginning with the C-<br>Field but excluding the CRC’s|The Length shall be correct|
|FT3 C-Byte|Inspect C-Byte in Frame|FT3 C-Byte = 44h|
|ESC-Byte|Inspect ESC-Byte in Frame|ESC-Byte = FFh|
|RF-Info-Byte|inspect RF-Info-Byte in Frame|Bid:   02h  (in case battery good)<br>Uni:   03h  (in case battery good)|
|Serial Number|inspect Serial Number in Frame|Pre-configured SerNr|
|KNX Ctrl-Byte|inspect KNX-Ctrl-Byte in Frame|KNX-Ctrl = 00h for standard<br>KNX-Ctrl =04h .. 07h for LTE<br>(EFF=01xxb for LTE)<br>KNX ctrl = 80h or 90h for Multi<br>other values of the KNX Ctrl field are<br>reserved for RF extensions, e.g. BiBat|
|Indiv. Address|inspect Indiv. Address in Frame|Pre-configured IndAdr|
|CRC|Send Frames with DUT and check the CRC value on<br>receiver or on demodulated signal|CRC correctly calculated (FT3-<br>standard)|
|Telegram length<br>and –assembly|Send Telegrams of different lengths, check positions of<br>CRC (min. length – max. length)|CRC shall appear on expected byte<br>positions|


-----

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Medium access<br>time after<br>reception|Device A continuously sends Telegrams with shorter gap<br>than allowed (<15 ms). Then trigger Telegram on DUT.<br>Finally, stop the continuous transmission of device A.|DUT shall keep a total medium access<br>time and wait until device A stops<br>transmission|
|KNX RF Ready<br>Medium access<br>time on<br>transmission|Trigger several concurrent Telegrams on DUT at the same<br>time (e.g. several transmit requests of communication<br>objects) and measure interFrame gap.|DUT shall keep a total medium access<br>time of :<br>Bidirectional:  15 ms minimum – 30<br>ms maximum between successive<br>Telegrams<br>Unidirectional: 150 ms minimum –<br>160 ms maximum between successive<br>Telegrams|
|KNX RF Multi<br>Fast channels<br>Medium access<br>time on<br>transmission|Trigger several concurrent Telegrams on DUT at the same<br>time (e.g. several transmit requests of communication<br>objects) and measure interFrame gap.|DUT shall keep a total medium access<br>time of :<br>30 ms minimum – 50 ms maximum<br>between successive Telegrams<br>Note: LBT time is not included.|
|KNX RF Multi<br>Slow channels<br>Medium access<br>time on<br>transmission|Trigger several concurrent Telegrams on DUT at the same<br>time (e.g. several transmit requests of communication<br>objects) and measure interFrame gap.|DUT shall keep a total medium access<br>time of :<br>60 ms minimum – 100 ms maximum<br>between successive Telegrams<br>Note: LBT time not included.|
|LFN|Trigger several Telegrams on DUT and inspect the LFN<br>values|LFN shall loop over values 0..7|
|Domain Bit|a) Send A_IndAdrRead to the DUT and inspect the<br>A_IndAdrResponse<br>b) Send A_GroupValueWrite|a) Domain-bit shall be set and the SN<br>fields contain the domain address<br>b) Domain-bit shall not be set, the SN<br>fields shall contain the serial number|


###### 3.5.2 Receiver Tests for end devices

 3.5.2.1 KNX RF Ready  To perform these receiver tests use a transmitter device with modified Data Link Layer

 Test Test-Description Expected Behaviour

 FT3 C-Byte Send Telegrams with different FT3 DUT shall ignore values <> 44h C-Bytes
 KNX CTRL-Byte Send Telegrams with different KNX- DUT shall ignore values <> 00h CTRL-Bytes  (standard), <> 04h .. 07h for LTE

(EFF=01xxb for LTE) [other values of
the KNX CTRL field are reserved for RF
extensions, e.g. BiBat]

###### 3.5.2.2 KNX RF multi

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|FT3 C-Byte|Send Telegrams with different FT3<br>C-Bytes|DUT shall ignore values <> 44h|
|KNX CTRL-Byte|Send Telegrams with different KNX-<br>CTRL-Bytes|DUT shall ignore values <> 00h<br>(standard), <>04h .. 07h for LTE<br>(EFF=01xxb for LTE) [other values of<br>the KNX CTRL field are reserved for RF<br>extensions, e.g. BiBat]|


-----

###### To perform these receiver tests use a transmitter device with modified Data Link Layer.

 Test Test-Description Expected Behaviour

 FT3 C-Byte Send Telegrams with different FT3 DUT shall ignore values <> 44h and C-Byte <>00h

 KNX CTRL-Byte Send Telegrams with KNX CTRL = DUT shall successfully receive RF Ready Asynchronous dataFrame 00h Frames and not discard them. L data KNX-CTRL = 04h .. 07h for LTE

(EFF=01xxb for LTE)

###### KNX CTRL-Byte Send Telegrams with KNX CTRL= DUT shall successfully receive RF multi Asynchronous dataFrame L 10000000b = 80h Frames and not discard them. data KNX-CTRL = 04h .. 07h for LTE

(EFF=01xxb for LTE)

###### KNX CTRL-Byte Send Telegrams with KNX CTRL = DUT shall successfully receive RF multi Asynchronous dataFrame L 10010000b = 90h Frames and not discard them. data with Fast Ack KNX-CTRL = 04h .. 07h for LTE

(EFF=01xxb for LTE)

###### KNX CTRL-Byte Send Telegrams with different KNX- DUT shall ignore values <> 00h, 80h CTRL-Bytes  or 90h
 (standard), <> 04h .. 07h for LTE (EFF=01xxb for LTE) [other values of the KNX CTRL field are reserved for RF extensions, e.g. BiBat]

 3.5.2.3 Other common tests

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|FT3 C-Byte|Send Telegrams with different FT3<br>C-Byte|DUT shall ignore values <> 44h and<br><>00h|
|KNX CTRL-Byte<br>RF Ready Asynchronous dataFrame<br>L data|Send Telegrams with KNX CTRL =<br>00h|DUT shall successfully receive<br>Frames and not discard them.<br>KNX-CTRL =04h .. 07h for LTE<br>(EFF=01xxb for LTE)|
|KNX CTRL-Byte<br>RF multi Asynchronous dataFrame L<br>data|Send Telegrams with KNX CTRL=<br>10000000b = 80h|DUT shall successfully receive<br>Frames and not discard them.<br>KNX-CTRL =04h .. 07h for LTE<br>(EFF=01xxb for LTE)|
|KNX CTRL-Byte<br>RF multi Asynchronous dataFrame L<br>data with Fast Ack|Send Telegrams with KNX CTRL =<br>10010000b = 90h|DUT shall successfully receive<br>Frames and not discard them.<br>KNX-CTRL =04h .. 07h for LTE<br>(EFF=01xxb for LTE)|
|KNX CTRL-Byte|Send Telegrams with different KNX-<br>CTRL-Bytes|DUT shall ignore values <> 00h, 80h<br>or 90h<br>(standard), <> 04h .. 07h for LTE<br>(EFF=01xxb for LTE) [other values<br>of the KNX CTRL field are reserved<br>for RF extensions, e.g. BiBat]|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Undefined<br>Codings|Send Telegrams with other coding than FT3 (e.g. NRZ)|DUT shall ignore Telegrams with<br>incorrect coding|
|CRC|Send Telegrams with invalid CRC values and check if<br>receiver ignores them. For this, use different CRC<br>positions.|DUT shall ignore Telegrams with<br>incorrect CRC (FT3-standard)|
|Telegram length|Send Telegrams of different lengths and check if receiver is<br>able to receive them.|DUT shall successfully receive all<br>valid Telegram lengths and ignore<br>Telegrams with invalid length|
|ESC-Byte|Send Telegrams with different FT3 ESC-Bytes|DUT shall ignore non-KNX values<br>(<> FFh)|
|LFN|Use transmitter that doesn’t increase  LFN|DUT shall only accept first<br>transmission. Subsequent transmissons<br>with wrong LFN shall be ignored.|
|Domain-Bit|a) Send A_PropertyRead to DUT with Domain-Bit not set<br>b) Send A_GroupValueWrite to DUT with Domain-Bit<br>set|a) DUT shall ignore Telegram<br>b) DUT shall ignore Telegram|
|RF Info-Byte|Send Telegrams with different RF-Info-Bytes|Receivers shall accept all values, as<br>this byte is only used for information<br>purposes.|


-----

##### 3.6 Set-up considerations for Testing System-Software

###### 3.6.1 Test Set-up:

 • A Personal Computer running EITT4 or higher[ )], connected to the bus by an RF interface with the serial number "Master" and the Individual Address AFFEh,
 • the BDUT (Bus Device Under Test) with a test-specific application software. The BDUT shall have the serial number "_BDUT_" and the Individual Address 1000h.

 Figure 11 - Test Set-up

 Moreover, the test application may provide means to:

 • delete all links in the BDUT (i.e. delete the association table). This can e.g. be ensured via a user function property,
 • trigger the sensor channel in the BDUT to send the link sequence. This can e.g. be ensured via a user function property,
 • activate the programming mode of an actuator channel of the BDUT. This can e.g. be ensured via a user function property.

 3.6.2 Format of Telegram sequences: The Telegram sequences depicted in the following tests are reduced to the KNX related fields, i.e. the FT3-specific fields (Length, C-Byte, ESC-Byte and CRC’s) are not included:

RF-INFO Serial Number / Domain ID CTRL SRC DST L/NPCI TPCI APCI Data….
(1 octet) (6 octets) (1 octet) (2 octets) (2 octets) (1 octet) (1 octet) (1 octet) (x octets)

###### Since the RF-Info has an informative nature, the values of this field shall not influence the behaviour of the BDUT. Hence, the value 00h (“Battery weak, “Bidirectional device”) has been chosen for Telegrams to be transmitted. Any other value can be chosen instead. 
 As the RF-Info field for received Telegrams moreover includes unpredictable values like the “received signal strength”, the values used in the underneath sequences are just examples. Any other value shall be accepted by the BDUT as well.

##### 3.7 Transport Layer tests
###### The following tests should be used if the implemented KNX RF Transport Layer only supports connectionless services (profiles). If the device supports a connection-oriented Transport Layer, the corresponding tests of the KNX core system shall be carried out (see [05]).

 The following test ensures that
 - in sending direction the TL-service is correctly selected, and - in receiving direction the correct TL-service is checked and split into the different AL-services.

|RF-INFO<br>(1 octet)|Serial Number / Domain ID<br>(6 octets)|CTRL<br>(1 octet)|SRC<br>(2 octets)|DST<br>(2 octets)|L/NPCI<br>(1 octet)|TPCI<br>(1 octet)|APCI<br>(1 octet)|Data….<br>(x octets)|
|---|---|---|---|---|---|---|---|---|


-----

###### All the following tests can be performed on a native RF Ready software stack or a RF Multi software stack compiled in Ready type.

 3.7.1 System-Broadcast with different TL Services (UDT, NDT, UCD, NCD) Test description: seven IndividualAdrSernrRead Telegrams (SerNr = “_BDUT_”) are sent. The BDUT shall accept all Telegrams with the TL – Service “Unnumbered Data” (UDT) and reject arbitrary sequence numbers (1..l5). The BDUT shall answer with IndividualAdrSernrResponse Telegrams. 

 Every other sent TL-service (NDT, UCD, NCD) shall be ignored by the BDUT. The response Telegrams of the BDUT shall always be sent as TL – Service UDT with SequenceNr = 0000. 

- 00 4D4153544552 00 AFFE 0000 E0 03 DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=0_

- 32 5F424455545F 00 1000 0000 E0 03 DD 5F424455545F 00000000 _answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E0 07 DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=1_

- --------- no answer from BDUT

- 00 4D4153544552 00 AFFE 0000 E0 3F DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=15_

- --------- no answer from BDUT

- 00 4D4153544552 00 AFFE 0000 E0 43 DC 5F424455545F _IASerNoRead (_BDUT_), NDT, S=0_

- ---------- _no answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E0 83 DC 5F424455545F _IASerNoRead (_BDUT_), UCD S=0_

- ---------- _no answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E0 C3 DC 5F424455545F _IASerNoRead (_BDUT_), NCD S=0_

- ---------- _no answer from BDUT_

###### 3.7.2 Domain-Broadcast with different TL Services (UDT, NDT, UCD, NCD) Test description: seven IndividualAdrSernrRead Telegrams (SerNr = “_BDUT_”) are sent. The BDUT shall accept all Telegrams with the TL – Service “Unnumbered Data” (UDT) and reject arbitrary sequence numbers (1..l5) The BDUT shall answer with IndividualAdrSernrResponse Telegrams. Every other sent TL – service (NDT, UCD, NCD) shall be ignored by the BDUT. The response Telegrams of the BDUT shall always be sent as TL – Service UDT with SequenceNr = 0000. 

- 00 4D4153544552 00 AFFE 0000 E1 03 DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=0_

- 32 4D4153544552 00 1000 0000 E7 03 DD 5F424455545F 00000000 _answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E1 07 DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=1_

- --------- no answer from BDUT

- 00 4D4153544552 00 AFFE 0000 E1 3F DC 5F424455545F _IASerNoRead (_BDUT_), UDT, S=15_

- --------- no answer from BDUT

- 00 4D4153544552 00 AFFE 0000 E1 43 DC 5F424455545F _IASerNoRead (_BDUT_), NDT, S=0_

- ---------- _no answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E1 83 DC 5F424455545F _IASerNoRead (_BDUT_), UCD, S=0_

- ---------- _no answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E1 C3 DC 5F424455545F _IASerNoRead (_BDUT_), NCD, S=0_

- ---------- _no answer from BDUT_

###### 3.7.3 Test for T_Disconnect-Response on individual connection-oriented requests. When receiving an individual request connection oriented, the BDUT shall answer with a T_Disconnect.req Service to close the connection immediately.

- 00 4D4153544552 00 AFFE 1000 61 03 00 _DDRead Typ 0_

- 32 4D4153544552 00 1000 AFFE 6D 03 40 20 10 _answer from BDUT_


-----

- 00 4D4153544552 00 AFFE 1000 61 43 00 _DDRead Typ 0 connection oriented_

- 32 4D4153544552 00 1000 AFFE 6F 81 _T_Disconnect_

- 00 4D4153544552 00 AFFE 1000 61 83 00 _DDT0 (TPCI <> UDT)_

- 32 4D4153544552 00 1000 AFFE 61 81 _T_Disconnect_

- 00 4D4153544552 00 AFFE 1000 61 C3 00 _DDT0 (TPCI <> UDT)_

- 32 4D4153544552 00 1000 AFFE 63 81 _T_Disconnect_

##### 3.8 Management Layer tests

###### 3.8.1 DomainAddressSernr-Read/-Write/-Response Purpose: DomainAdressSerNr services are sent as system broadcast whereby the addressed serial number is included in the data part of the Telegram. The BDUT shall only react if the received serial number matches its own.

 3.8.1.1 DoAddrSerNoRead Check if BDUT does not send a response if it receives a DomAdrSernrRead service with the wrong SerNo.

- 00 4D4153544552 00 AFFE 0000 E0 03 EC 112233445566 _DoAddrSerNoRead (wrong SerNr)_

- ----------------- _no answer from BDUT_

###### Check if BDUT does not send a response if it receives a DomAdrSernrResponse service with the wrong SerNo.

- 00 4D4153544552 00 AFFE 0000 E0 03 ED 112233445566 _DoAddrSerNoResponse (wrong_
_SerNr)_

- ----------------- _no answer from BDUT_

###### Check if BDUT sends the correct response if it receives a DomAdrSernrRead service containing the SerNo of the BDUT.

- 00 4D4153544552 00 AFFE 0000 E0 03 EC 5F424455545F _DoAddrSerNoRead (correct SerNr)_

- 32 5F424455545F 00 1000 0000 E8 03 ED 5F424455545F 4D4153544552 expected response

###### Check if BDUT does not send a response if it receives a DomAdrSernrResponse containing the SerNo of the BDUT.

- 00 4D4153544552 00 AFFE 0000 E0 03 ED 5F424455545F _DoAddrSerNoResponse (correct_
_SerNr)_

- ----------------- _no answer from BDUT_

###### 3.8.1.2 DoAddrSerNoWrite Check if BDUT changes its domain address correctly if it receives a DoAddrSerNoWrite service containing the serial number of the BDUT.

- 00 4D4153544552 00 AFFE 0000 E0 03 EE 5F424455545F 434845464645 DoAddrSerNoWrite ok

- ----------------- _no answer from BDUT_

- 00 4D4153544552 00 AFFE 0000 E0 03 EC 5F424455545F _DoAddrSerNoRead (correct SerNr)_

- 32 5F424455545F 00 1000 0000 EA 03 ED 5F424455545F 434845464645 expected response

###### Check if BDUT does not change its domain address if it receives a DoAddrSerNoWrite service with the wrong serial number.

- 00 4D4153544552 00 AFFE 0000 E0 03 EE 112233445566 4D4153544552 DoAddrSerNoWrite (wrong SerNr)

- ----------------- _no answer from BDUT_


-----

- 00 4D4153544552 00 AFFE 0000 E0 03 EC 5F424455545F _DoAddrSerNoRead (previous SerNr)_

- 32 5F424455545F 00 1000 0000 EC 03 ED 5F424455545F 434845464645 expected response

###### 3.8.2 DeviceDescriptor (type 0 / type 2) The Device-Descriptor type 0 returns the Mask version, type 2 returns the Easy channel information.

 Check if BDUT sends the correct response to a DDRead type 0:

- 00 4D4153544552 00 AFFE 1000 61 03 00 _DDRead type 0_

- 32 4D4153544552 00 1000 AFFE 63 03 40 20 10 _type 0 response_

###### Check if BDUT sends the correct error response to a DDRead type 1:

- 00 4D4153544552 00 AFFE 1000 61 03 01 _DDRead type 1_

- 32 4D4153544552 00 1000 AFFE 65 03 7F _type 1 response error_

###### Check if BDUT sends the correct response to a DDRead type 2:

- 00 4D4153544552 00 AFFE 1000 61 03 02 _DDRead type 2_

- 32 4D4153544552 00 1000 AFFE 67 03 42 0001ABCD003F0123020104010000 _type 2 response_

###### Check if BDUT sends the correct error response to a DDRead type 3:

- 00 4D4153544552 00 AFFE 1000 61 03 03 _DDRead Type 3_

- 32 4D4153544552 00 1000 AFFE 69 03 7F _type 3 response error_

###### 3.8.3 FunctionPropertyCommand Check that the BDUT executes a FuncPrCmd on the function ObjectValue correctly

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E100 01 _FuncPrCmd ObjValue: E100 to 0x01_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 3E 00 _Response ok (=00h)_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E100 _FuncPrStRead ObjValue E100_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3E 00 01 _Response ok, value = 0x01_

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E100 00 _FuncPrCmd ObjValue: E100 to 00h_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 3E 00 _response ok (=00h)_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E100 _FuncPrStRead ObjValue E100_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 3E 00 00 _response ok, value = 00h_

###### Check that BDUT reacts on a PropertyValueRead on a property, which is of type PDT_Function, with an error response (start index in response may have any value).

- 00 4D4153544552 00 AFFE 1000 61 03 D5 00 3E 10 01 _PropertyRead (not allowed)_

- 32 4D4153544552 00 1000 AFFE 6B 03 D6 00 3E 00 xx _response error (NoE = 00h)_

###### Check that BDUT reacts on a PropertyValueWrite on a property, which is of type PDT_Function, with an error response (start index in response may have any value).

- 00 4D4153544552 00 AFFE 1000 61 03 D7 00 3E 10 01 _PropertyWrite (not allowed)_

- 32 4D4153544552 00 1000 AFFE 6D 03 D6 00 3E 00 xx _response error (NoE = 00h)_

###### Check that BDUT reacts on a FuncPrCmd on a property, which is not of type PDT_Function, with an error response.

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 0B 10 01 _FuncPrCmd (invalid)_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 0B _response error (no data)_

###### Check that BDUT reacts on a FuncPrStRead on a property, which is not of type PDT_Function, with an error response.


-----

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 0B 10 01 _FuncPrStRead (invalid)_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 0B _response error (no data)_


-----

#### 4 RF Retransmitters
###### Retransmitters are used to expand the range of RF transmitters. Incoming RF Telegrams are repeated transparently (with a shorter interFrame time than end devices have), i.e. the original KNX Telegram remains unchanged, except the routing counter, which shall be decremented by Retransmitters. (Further information is given in the RF System specification Volume 3, part 2, chapter 5).

 4.1.1 Physical Layer Requirements for the Physical Layer of Retransmitters are identical to those for end devices. (see 3.1).

 4.1.2 Data Link Layer

 4.1.2.1 KNX RF Ready and KNX RF BiBat The Data Link Layer part of Retransmitters shall be tested using a transmitter device and a tool capable of receiving raw FT3 Frames. The expected behaviour for Retransmitters is identical to end devices (see 3.4), with the following exceptions.

 Test Test-Description Expected Behaviour
 Medium access Use a device continuously sending Telegrams with an The Retransmitter shall keep medium time after interFrame gap <5ms. access time [5..15 ms] and wait until reception the device stops transmission.

 Medium access Use a bidirectional device continuously sending Telegrams. Medium access time between original time random and repeated transmission should vary portion between [5ms – 15 ms] 

 4.1.2.2 KNX RF Multi

 4.1.2.2.1 Telegrams retransmission (except ACKREP) The Data Link Layer part of Retransmitters shall be tested using a transmitter device and a tool capable of receiving Frames. The expected behaviour for Retransmitter is identical to end devices with the following exceptions:

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Medium access<br>time after<br>reception|Use a device continuously sending Telegrams with an<br>interFrame gap <5ms.|The Retransmitter shall keep medium<br>access time [5..15 ms] and wait until<br>the device stops transmission.|
|Medium access<br>time random<br>portion|Use a bidirectional device continuously sending Telegrams.|Medium access time between original<br>and repeated transmission should vary<br>between [5ms – 15 ms]|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|InterFrame-time<br>after reception<br>(Ready frame)|Use a device continuously sending Ready<br>Telegrams with an interFrame gap < 5ms|The Retransmitter shall keep<br>interFrame time [5.. 15ms[ and<br>wait until the device stops<br>transmission.|
|InterFrame-time<br>after reception<br>(Multi frame Fast)|Use a device continuously sending Multi Fast<br>Telegrams with an interFrame gap < 5ms|The Retransmitter shall keep<br>interFrame time [5.. 10ms[ and<br>wait until the device stops<br>transmission.|
|InterFrame-time<br>after reception<br>(Multi frame Slow)|Use a device continuously sending Multi Slow<br>Telegrams with an interFrame gap < 10ms|The Retransmitter shall keep<br>interFrame time [10.. 20ms[ and<br>wait until the device stops<br>transmission.|
|InterFrame-time<br>random portion<br>(Ready frame<br>frame)|Use a bidirectional device sending Ready<br>Telegrams|InterFrame time between original<br>and repeated transmission should<br>vary between [5..15ms[ .|
|InterFrame-time<br>random portion<br>(Multi frame Fast)|Use a bidirectional device sending Multi Fast<br>Telegrams|InterFrame time between original<br>and repeated transmission should<br>vary between [5..10ms[ .|


-----

|InterFrame-time<br>random portion<br>(Multi frame Slow)|Use a bidirectional device sending Multi Slow<br>Telegrams|InterFrame time between original<br>and repeated transmission should<br>vary between [10..20ms[ .|
|---|---|---|
|RF-Info-Byte<br>(signal strength).<br>(Ready frame,<br>Multi frame Fast<br>and Multi frame<br>Slow)|Use a device sending Telegrams with different<br>Retransmitter-signal-strength values in the RF-<br>Info-Byte. Hereby try to lower the received signal<br>strength for the Retransmitter. In all cases, inspect<br>RF-Info-Byte of original and repeated Frame.|If supported, the Retransmitter<br>should insert its measured signal<br>strength into the RF-Info-Byte, but<br>only if the received value is 0<br>(normal sender) or the measured<br>value is lower than the one from<br>the incoming Telegram (from other<br>Retransmiiters).|
|Serial Number,<br>Individual Address.<br>(Ready frame,<br>Multi frame Fast<br>and Multi frame<br>Slow)|Send different valid KNX RF Telegrams and<br>compare them with the repeated ones.|The Serial/Domain address and<br>Individual address shall be<br>unchanged by the Retransmitter.|
|History buffer.<br>(Ready frame,<br>Multi frame Fast<br>and Multi frame<br>Slow)|Use 2 Retransmitters and a device continuously<br>sending Telegrams.|Each Telegram shall be transmitted<br>only once per Retransmitter. (3<br>transmissions: original,<br>Retransmitter 1, Retransmitter 2)|


###### 4.1.2.2.2 ACKREP frame generation in retransmitter These tests use a KNX RF Multi retransmitter (DUT).

 The goal is to check the ACKREP frame that is generated by a retransmitter, after the retransmission of a frame containing a Fast Ack request.

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|C-Byte|Transmit a frame with a Fast Ack request, and<br>inspect C-Byte in the ACKREP frame.|C-Byte = 00h|
|KNX Ctrl-Byte|Transmit a frame with a Fast Ack request, and<br>inspect KNX Ctrl-Byte in the ACKREP frame.|KNX Ctrl-Byte = A0h|
|RC|Transmit a frame with a Fast Ack request, and<br>inspect RC in the ACKREP frame.<br>(For Multi, RC <= 2)|Verify for different generated<br>values of RC that :<br>RC(generated AckRep frame) =<br>                2 – RC(received frame<br>request)|


-----

|Identical fields<br>(Esc, RF-info,<br>SN/DoA, SA, DA,<br>LPCI (except RC),<br>TPCI, Seq.<br>number, APCI)|Transmit a frame with a Fast Ack request, and<br>compare the fields from the ACKREP frame with<br>the initial frame sent by the sensor.|The fields shall be identical.|
|---|---|---|
|64 Fast Ack|Transmit a frame with a 64 Fast Ack request, and<br>check if the ACKREP frame is also generated with<br>64 Fast Ack status bytes.|An ACKREP frame with 64 bytes<br>of data.|


###### 4.1.2.2.3 Medium access time for ACKREP frame To run the next tests, a retransmitter (DUT), that is able to transmit an ACKREP on user action, shall be used.

 The goal is to check the medium access times for an ACKREP frame generated by a retransmitter.

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Total medium<br>access time after<br>reception (Fast)|Use an auxiliary device continuously sending<br>Telegrams with an interframe gap < 10 ms , and<br>request the transmission of an ACKREP on the<br>DUT.|The DUT shall keep medium<br>access time [10..15ms] after the<br>auxiliary device stops<br>transmission.|
|Random medium<br>access time  (Fast)|Trigger several concurrent ACKREP transmissions<br>on DUT at the same time.|DUT shall keep a total medium<br>access time of 10ms minimum –<br>15ms maximum between<br>successive Telegrams.|


-----

###### 4.1.2.2.4 ACKREP management in sender In the next test, the DUT is a KNX RF Multi device (linked with two receivers) that transmits frames with Fast Ack request. A KNX RF Multi retransmitter shall be used to transmit the ACKREP frame, and the 2 receivers shall be configured to answer to the Fast Ack request. They shall also be out of RF range of the sender.

Emitter RF range Retransmitter RF range

###### Figure 12 Test setup

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|Echo Frame time-<br>out (fast)|The DUT transmits a frame with Fast Ack request,<br>and no retransmitter repeats it. The two linked<br>devices are switched off, so that they do not send<br>Fast Ack when the frame is transmitted.|The DUT shall wait at least 75 ms<br>before sending the frame again.|
|Echo detection<br>(fast)|The DUT transmits a frame with Fast Ack request,<br>and the retransmitter repeats it. The two linked<br>devices are switched off, so that they do not send<br>Fast Ack when the frame is transmitted.|The DUT shall wait at least 1000<br>ms before sending the frame again.|
|Echo Frame time-<br>out (slow)|The DUT transmits a frame with Fast Ack request,<br>and no retransmitter repeats it. The two linked<br>devices are switched off, so that they do not send<br>Fast Ack when the frame is transmitted.|The DUT shall wait at least 600 ms<br>before sending the frame again.|
|Echo detection<br>(slow)|The DUT transmits a frame with Fast Ack request,<br>and the retransmitter repeats it. The two linked<br>devices are switched off, so that they do not send<br>Fast Ack when the frame is transmitted.|The DUT shall wait at least 4000<br>ms before sending the frame again.|

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|ACKREP handling<br>(fast)|The DUT shall transmit a frame with Fast Ack<br>request to the linked receivers that are out of direct<br>RF range. The repeater shall repeat this frame, and|Fast Ack status is correctly handled<br>by the DUT (DUT does not<br>resend), even though it was|


Emitter RF range


-----

|Col1|send back the ACKREP to the DUT.|generated by the retransmitter.|
|---|---|---|
|ACKREP handling<br>(slow)|The DUT shall transmit a frame with Fast Ack<br>request to the linked receivers that are out of direct<br>RF range. The repeater shall repeat this frame, and<br>send back the ACKREP to the DUT.|Fast Ack status is correctly handled<br>by the DUT (DUT does not<br>resend), even though it was<br>generated by the retransmitter.|


###### 4.1.2.2.5 ACKREP after reception of Fast Ack

 In the next test, the DUT is a KNX RF Multi device (linked with two receivers) that transmits frames with Fast Ack request. A KNX RF Multi retransmitter shall be used to transmit the ACKREP frame, and the 2 receivers shall be configured to answer to the Fast Ack request. They shall also be in the RF range of the sender.

 Emitter RF range  Retransmitter RF range

 Figure 13 Test setup


###### Retransmitter RF range


-----

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|ACKREP received<br>after Fast Ack<br>(fast).|The DUT shall transmit a frame with Fast Ack<br>request to the linked receivers that are in the RF<br>range of the sender. The receivers successfully<br>respond to the request. The retransmitter repeats<br>the frame.|The ACKREP frame shall be<br>received after reception of all Fast<br>Acks by the sender. The ACKREP<br>frame shall be discarded by the<br>sender.|
|ACKREP received<br>after Fast Ack<br>(slow).|The DUT shall transmit a frame with Fast Ack<br>request to the linked receivers that are in the RF<br>range of the sender. The receivers successfully<br>respond to the request. The retransmitter repeats<br>the frame.|The ACKREP frame shall be<br>received after reception of all Fast<br>Acks by the sender. The ACKREP<br>frame shall be discarded by the<br>sender.|


###### 4.1.2.2.6 Maximum number of Fast Ack In the next test, the DUT is a KNX RF Multi device that transmits frames with 64 Fast Ack request. A KNX RF Multi retransmitter shall be used to transmit the ACKREP frame, and a dedicated device (out of the RF range of sender) shall be able to answer to the 64 Fast Ack request. 

 Emitter RF range  Retransmitter RF range

 Figure 14 Test setup

 Test Test-Description Expected Behaviour

 ACKREP The DUT shall transmit a frame with 64 Fast Ack The DUT does not resend the management (fast) requested, and verify that the emitter correctly original frame.
 understands the ACKREP frame.

 ACKREP The DUT shall transmit a frame with 64 Fast Ack The DUT does not resend the management (slow) requested, and verify that the emitter correctly original frame.
 understands the ACKREP frame.

 4.1.2.2.7 RF Multi frame retransmission These tests use a KNX RF Multi retransmitter as DUT.

 For all the following test cases, no RF disturbance is supposed on any channel.

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|ACKREP<br>management (fast)|The DUT shall transmit a frame with 64 Fast Ack<br>requested, and verify that the emitter correctly<br>understands the ACKREP frame.|The DUT does not resend the<br>original frame.|
|ACKREP<br>management (slow)|The DUT shall transmit a frame with 64 Fast Ack<br>requested, and verify that the emitter correctly<br>understands the ACKREP frame.|The DUT does not resend the<br>original frame.|


###### Retransmitter RF range


-----

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|RF Ready frame|Transmit an RF Ready frame and inspect the<br>retransmitted frame.|The same channel (RF Ready) is<br>used for the retransmission.<br>The preamble is left unchanged.|
|RF Multi Fast F1<br>frame|Transmit an RF Multi Fast frame and inspect the<br>retransmitted frame.|The same channel (RF Multi Fast<br>F1) is used for the retransmission.<br>The preamble is left unchanged.|
|RF Multi Fast F2<br>frame|Transmit an RF Multi Fast frame and inspect the<br>retransmitted frame.|The same channel (RF Multi Fast<br>F2) is used for the retransmission.<br>The preamble is left unchanged.|
|RF Multi Fast F3<br>frame|Transmit an RF Multi Fast frame and inspect the<br>retransmitted frame.|The same channel (RF Multi Fast<br>F3) is used for the retransmission.<br>The preamble is left unchanged.|
|RF Multi Slow S1<br>frame|Transmit an RF Multi Slow frame and inspect the<br>retransmitted frame.|The same channel (RF Multi Slow<br>S1) is used for the retransmission.<br>The preamble is left unchanged.|
|RF Multi Slow S2<br>frame|Transmit an RF Multi Slow frame and inspect the<br>retransmitted frame.|The same channel (RF Multi Slow<br>S2) is used for the retransmission.<br>The preamble is left unchanged.|


###### 4.1.2.3 Other common parameters

 Test Test-Description Expected Behaviour
 RF-Info-Byte Use a device sending Telegrams with different If supported, the Retransmitter should
 Retransmitter-signal-strength values in the RF-Info-Byte. insert its measured signal strength into
 (signal strength)
 Hereby try to lower the received signal strength for the the RF Info-Byte, but only if the Retransmitter. In all cases inspect RF-Info-Byte of original received value is 0 (normal sender) or and repeated Frame.  the measured value is lower than the
 one from the incoming Telegram (from other Retransmitters).

 Serial Number, Send different valid KNX RF Telegrams and compare them The Serial Number/DomainID and Indiv. Address with the repeated ones. Indiv.Addr. shall be unchanged by the
 Retransmitter .

 History buffer Use 2 Retransmitters and a device continuously sending Each Telegram shall be transmitted Telegrams.  only once per Retransmitter. (In all 3
 transmissions: original, Retransmitter 1, Retransmitter 2)

 4.1.3 Network Layer

 4.1.3.1 KNX RF Ready, KNX RF Multi (Fast/Slow), KNX RF BiBat and BiBat 2 Retransmitters use the Routing-Counter field of the NPCI to ensure a maximum number of retransmissions and avoid an avalanche of Frames. When transmitting, end devices use a routing counter with a default value of 6, which is then decremented by every Retransmitter repeating the Telegram.

 The retransmission of an incomimg KNX RF depends on a limit (minimum value) defined for the Retransmitter. This limit (MIN_ROUTING_COUNTER >= 0) can be defined by the manufacturer, thereby influencing the maximum level of retransmission per Telegram.

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|RF-Info-Byte<br>(signal strength)|Use a device sending Telegrams with different<br>Retransmitter-signal-strength values in the RF-Info-Byte.<br>Hereby try to lower the received signal strength for the<br>Retransmitter. In all cases inspect RF-Info-Byte of original<br>and repeated Frame.|If supported, the Retransmitter should<br>insert its measured signal strength into<br>the RF Info-Byte, but only if the<br>received value is 0 (normal sender) or<br>the measured value is lower than the<br>one from the incoming Telegram<br>(from other Retransmitters).|
|Serial Number,<br>Indiv. Address|Send different valid KNX RF Telegrams and compare them<br>with the repeated ones.|The Serial Number/DomainID and<br>Indiv.Addr. shall be unchanged by the<br>Retransmitter .|
|History buffer|Use 2 Retransmitters and a device continuously sending<br>Telegrams.|Each Telegram shall be transmitted<br>only once per Retransmitter. (In all 3<br>transmissions: original, Retransmitter<br>1, Retransmitter 2)|


-----

|Test|Test-Description|Expected Behaviour|
|---|---|---|
|NPCI (Routing<br>Counter)|Use a device sending Telegrams with different routing<br>counter values. Check if the original Telegram is<br>retransmitted and if the routing counter is decremented.|Retransmitter decrements the routing<br>counter, and doesn’t retransmit<br>Frames with a routing counter <=<br>MIN_ROUTING_COUNTER|


###### 4.1.4 Transport Layer, Application Layer, Management Layer

 4.1.4.1 KNX RF Ready, KNX RF BiBat and BiBat 2 Management functionality or Applications are optional for Retransmitters, and if supported, shall fulfil the same requirements as end devices have to (see clause 3).


-----

#### 5 RF PB-Mode

##### 5.1 Characteristics
###### The RF PB-Mode is part of the “E-Modes” and is based on the PB-Mode (see [02]). It is defined to allow configuration of KNX devices without any external tool or controller.

 In spite of the fact that most parts of [02] are also valid for RF PB-Mode, some adaptations are introduced together with the RF system specification, mainly as a consequence of requirements for unidirectional transmitters.

 5.1.1 Individual Address The Individual Address of RF PB-Mode devices is preconfigured by manufacturers (and therefore is shared between devices). This is acceptable, since no point-to-point communication is used in PB-Mode, neither during configuration nor in application runtime.

 5.1.2 Group Addresses Group Addresses (also called object handles) are also pre-assigned by manufacturers. As identical devices share the same Group Addresses, the ‘Extended Group Address’ is defined for RF devices to ensure the uniqueness of Group Objects during runtime. This Extended Group Address is defined as the combination of the KNX Serial Number of the device and the Group Address of the Group Object.

 5.1.3 Undirectional Sequences As unidirectional sensors are not capable of receiving any Frames, the PB link sequence for such devices is a unidirectional sequence, i.e. the actuators do not transmit any responses to PB sensor Telegrams.

 To ensure detection of errors during the link procedure, some additional information is transmitted from unidirectional sensors, allowing the actuators to detect and ignore incomplete or faulty sequences.

 For further information on these RF specific adaptations, please refer to the RF system specification (see [01]).

##### 5.2 Channel Setup for Easy-Mode Tests 
###### The test sequences for PB Mode are based on a sample application including some E-Mode Channels with different Datapoints and parameters. Note that these E-Mode Channels and Datapoints are completely fictituous and not standardised.

 In some of the sequences the Property Functions for E-Mode Management (see clause 6) are used to obtain the results of simulated link procedures. If these functions are not implemented, use another method to ensure the expected results.


-----

###### 5.2.1 E-Mode Channel Configuration for PB-Mode and E-Mode Tests

 Description Non-generic sensor-channel (comparable to switch) Channel-Index 0 ChannelCode 0123h Datapoints Handle Flags Length Conn.-Codes E000 I 1 Bit 11h (Status Info) E001 O 1 Bit 22h (Switching) Parameters (none)

 Description generic sensor-channel (Generic Push Button) Channel-Index 0 ChannelCode 0x0ABC Datapoints Handle Flags Length Conn.-Codes E000 I 1 Bit 11h  E001 O 1 Bit 22h  E002 O 1 Bit 33h E001 O 1 Bit 44h Parameters 1 AJS (Adjustable Selection) 2 Sample Parameter

 Description Sample Actuator Channel Channel-Index 1 ChannelCode 0x2001 Datapoints Handle Flags Length Conn.-Codes E100 I 1 Bit 11h  E101 I 1 Byte 51h, 52h, 53h E102 I 8 Bytes 61h E103 O 1 Bit 11h (Info) Parameters (none)

 Description Sample “Logic”Actuator Channel Channel-Index 2 ChannelCode 0x4001 Datapoints Handle Flags Length Conn.-Codes E200 I,X 1 Bit 22h, 88h E201 I,X 1 Bit 22h, 88h E202 I,X 1 Bit 22h, 88h E203 O 1 Bit 22h, 88h Parameters 1 Logical Function (0 = AND, 1 = OR)

|Description|Non-generic sensor-channel (comparable to switch)|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|0|0|0|0|
|**ChannelCode **|0123h|0123h|0123h|0123h|
|**Datapoints**|**Handle**|** Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|E000|I|1 Bit|11h(Status Info)|
|**Datapoints**|E001|O|1 Bit|22h (Switching)|
|**Parameters **|(none)|(none)|(none)|(none)|

|Description|generic sensor-channel (Generic Push Button)|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|0|0|0|0|
|**ChannelCode **|0x0ABC|0x0ABC|0x0ABC|0x0ABC|
|**Datapoints**|**Handle**|**Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|E000|I|1 Bit|11h|
|**Datapoints**|E001|O|1 Bit|22h|
|**Datapoints**|E002|O|1 Bit|33h|
|**Datapoints**|E001|O|1 Bit|44h|
|**Parameters**|1|AJS (Adjustable Selection)|AJS (Adjustable Selection)|AJS (Adjustable Selection)|
||2|Sample Parameter|Sample Parameter|Sample Parameter|

|Description|Sample Actuator Channel|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|1|1|1|1|
|**ChannelCode**|0x2001|0x2001|0x2001|0x2001|
|**Datapoints**|**Handle**|**Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|E100|I|1 Bit|11h|
|**Datapoints**|E101|I|1 Byte|51h, 52h, 53h|
|**Datapoints**|E102|I|8 Bytes|61h|
|**Datapoints**|E103|O|1 Bit|11h (Info)|
|**Parameters **|(none)|(none)|(none)|(none)|

|Description|Sample “Logic”Actuator Channel|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|2|2|2|2|
|**ChannelCode**|0x4001|0x4001|0x4001|0x4001|
|**Datapoints**|**Handle**|**Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|E200|I,X|1 Bit|22h, 88h|
|**Datapoints**|E201|I,X|1 Bit|22h, 88h|
|**Datapoints**|E202|I,X|1 Bit|22h, 88h|
|**Datapoints**|E203|O|1 Bit|22h, 88h|
|**Parameters**|1|Logical Function (0= AND, 1= OR)|Logical Function (0= AND, 1= OR)|Logical Function (0= AND, 1= OR)|


-----

##### 5.3 “Teach-In” and “Teach-Out” of non-generic sensor channel
###### Purpose: check if sensor channel (CH0) configured as non-generic channel (Chn.Code 0123h) is able to set and delete links correctly.

 Preparation:  Delete Association Table;

 Set Channel 0 to non-generic configuration;

 trigger BDUT to start the link sequence.

- 32 5F424455545F 00 1000 0000 E8 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F424455545F 00 1000 0000 EA 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 70 00 00 00 _begin connection_

- 32 5F424455545F 00 1000 0000 EC 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj is Input)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 91 11 1000 _LinkResp (use address 1000)_

- 32 5F424455545F 00 1000 0000 EE 03 E4 00 00 3B 80 22 E001 _SetDelLink (CC=22, Obj E001)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 90 22 E001 _LinkResp (Link added)_

- 32 5F424455545F 00 1000 0000 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has created the links correctly:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3F 00 00 _read Association 0_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 3F 00 00 4D4153544552 1000 E000
_return (MASTER,1000,E000)_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3F 00 01 _read Association 1_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3F FF _return FF => no more Associations_

###### Preparation: trigger BDUT to start the link sequence.

- 32 5F424455545F 00 1000 0000 E8 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F424455545F 00 1000 0000 EA 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 70 00 00 00 _begin connection_

- 32 5F424455545F 00 1000 0000 EC 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj is Input)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F424455545F 00 1000 0000 EE 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D4153544552 00 AFFE 0000 E0 03 E4 00 00 3B 92 22 E0 01 _LinkResp (Link deleted)_

- 32 5F424455545F 00 1000 0000 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has deleted the links correctly:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3F 00 00 _read Association 0_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 3F FF _return FF => no more Associations_

##### 5.4 “Teach-In” of generic sensor channel 
###### Purpose: check if sensor channel (CH0) configured as generic subchannel (Chn.Code 0x0ABC) is able to set links and adjust the AJS correctly (AJS 2 should be default for actuator channel code 02h15).

 Preparation:  Set Channel 0 to generic configuration;

 set AJS of channel 0 to value 3,

 trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 20 00 01 04 _StartLink (MANU=0001,OBJ=4)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 02 15 00 _ChnFuncAct (CHC=0215)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 40 0A BC 00 _ChnFuncSen (CHC=0ABC)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj is Input)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use my address)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 22 E0 01 _LinkResp (Link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 33 E0 02 _SetDelLink (CC=33, Obj E002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 33 E0 02 _LinkResp (Link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 80 44 E0 03 _SetDelLink (CC=44, Obj E003)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 44 E0 03 _LinkResp (Link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has changed AJS correctly:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 41 00 01 _Read AJS_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 41 00 00 02 _Return AJS = 2_

##### 5.5 “Teach-Out” of generic sensor channel
###### Purpose: check if sensor channel (CH0) configured as generic channel (Chn.Code 0x0ABC) is able to delete links and does not adjust the AJS due to a “Teach-Out” sequence.

 Preparation:  clear association table,

 activate subchannel 1 of channel 0,

 set AJS of channel 0 to value 3

 Trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 20 00 01 04 _StartLink (MANU=0001,OBJ=4)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 02 15 00 _ChnFuncAct (CHC=0215) => AJS2_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 40 0A BC 00 _ChnFuncSen (CHC=0ABC)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj E000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use my address)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 92 22 E0 01 _LinkResp (Link deleted)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 80 33 E0 02 _SetDelLink (CC=33, Obj E002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 92 33 E0 02 _LinkResp (Link deleted)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 44 E0 03 _SetDelLink (CC=44, Obj E003)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 92 44 E0 03 _LinkResp (Link deleted)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT did not change the AJS (because actuator has deleted the links).

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 41 00 01 _Read AJS_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 41 00 00 03 _Return AJS = 3 (hasn’t changed !!)_

###### Check if the association table is still empty.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F FF _Return FF => no Assocs_


-----

##### 5.6 Linking generic sensor channel with no matching Datapoints
###### Purpose: check if sensor channel (CH0) configured as generic channel (Chn.Code 0x0ABC) does not adjust the AJS due to the fact that no Datapoints could be linked during sequence.

 Preparation:  Trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 20 00 01 04 _StartLink (MANU=0001,OBJ=4)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 01 35 00 _ChnFuncAct (CHC=0135) => AJS 1_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 40 0A BC 00 _ChnFuncSen (CHC=0ABC)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj E000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use my adress)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 93 22 E0 01 _LinkResp (Link not added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 80 33 E0 02 _SetDelLink (CC=33, Obj E002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 93 33 E0 02 _LinkResp (Link not added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 80 44 E0 03 _SetDelLink (CC=44, Obj E003)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 93 44 E0 03 _LinkResp (Link not added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT did not change the AJS (because the actuator could not add the links).

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 41 00 01 _Read AJS_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 41 00 00 03 _Return AJS = 3 (hasn’t changed !!)_

###### Check if the association table is still empty.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F FF _Return FF => no Assocs_

##### 5.7 Linking actuator channel 
###### Purpose: Check if actuator channel (CH1) is able to set and delete links correctly. The same link sequence is sent twice to the actuator channel. The first time the actuator shall insert all links, the second time it shall remove the links again. Additionally, it is tested that an actuator also accepts linking with manufacturer code other than the own.

 Preparation:  clear association table,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 04 _StartLink (MANU=1234,OBJ=4)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has generated the links correctly.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 00 E1 00
_Return (MASTER,1000,E100)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F 00 01 4D 41 53 54 45 52 10 01 E1 01
_Return (MASTER,1001,E101)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 2 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 02 4D 41 53 54 45 52 10 02 E1 02
_Return (MASTER,1002,E102)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 03 _Read assoc 3_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F FF _Return FF => no more Assocs_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT,

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 04 _StartLink (MANU=1234,OBJ=4)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 92 22 10 00 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 92 51 10 01 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 92 61 10 02 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has deleted the links correctly.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F FF _Return FF => no Assocs_

##### 5.8 Actuator with “single connect” - Datapoints 
###### Purpose: First the objects, which are "connectable only once" (X flag, see Supplement 12 Channel Codes), with the addresses E200h, E201h, E202h of the logical actuator channel in BDUT (channel 2) are linked to three different devices (A, B, C). A fourth device (D) is unable to link to any of these three objects. B is then unlinked, and D can link to the second object.

 Sensor device A (Ser.Nr. “ANDREA”) gets linked

 Preparation:  delete association table,

 activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 41 4E 44 52 45 41 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 41 4E 44 52 45 41 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_


-----

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 41 4E 44 52 45 41 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 30 00 _SetDelLink (CC=22, Obj 3000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 90 22 30 00 _LinkResp (link added)_

- 00 41 4E 44 52 45 41 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 10 00 _StopLink (Link successful)_

###### Sensor device B (Ser.Nr. “JOSEPH”) gets linked

 Preparation:  activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 40 00 _SetDelLink (CC=22, Obj 4000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 90 22 40 00 _LinkResp (link added)_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Sensor device C (Ser.Nr. “THOMAS”) gets linked

 Preparation:  activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 54 48 4F 4D 41 53 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 54 48 4F 4D 41 53 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 54 48 4F 4D 41 53 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 50 00 _SetDelLink (CC=22, Obj 5000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 90 22 50 00 _LinkResp (link added)_

- 00 54 48 4F 4D 41 53 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Sensor device D (Ser.Nr. “HELMUT”) gets linked, but now no connectable Datapoints exists.

 Preparation:  activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 01 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 60 00 _SetDelLink (CC=22, Obj 6000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 93 22 60 00 _LinkResp (link not added)_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has generated the links correctly.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 00 41 4E 44 52 45 41 30 00 E2 00
_Return (ANDREA,3000,E200)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F 00 01 4A 4F 53 45 50 48 40 00 E2 01
_Return (JOSEPH,4000,E201)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 02 54 48 4F 4D 41 53 50 00 E2 02
_Return (THOMAS,5000,E202)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 03 _Read assoc 3_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F FF _Return FF => no more Assocs_


-----

###### Sensor device B (Ser.Nr. “JOSEPH”) gets linked, actuator should teach it out.

 Preparation: activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 40 00 _SetDelLink (CC=22, Obj 4000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 92 22 40 00 _LinkResp (link deleted)_

- 00 4A 4F 53 45 50 48 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has generated the links correctly.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 00 41 4E 44 52 45 41 30 00 E2 00
_Return (ANDREA,3000,E200)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F 00 01 54 48 4F 4D 41 53 50 00 E2 02
_Return (THOMAS,5000,E202)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F FF _Return FF => no more Assocs_

###### Sensor device D (Ser.Nr. “HELMUT”) gets linked again, now it should be connected to E201.

 Preparation: activate programming mode of channel 2 (logical actuator) in BDUT.

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 20 12 34 01 _StartLink (MANU=1234,OBJ=1)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 30 04 01 00 _ChnFuncAct (CHC=0401)_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 40 11 22 01 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B 80 22 60 00 _SetDelLink (CC=22, Obj 6000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 22 60 00 _LinkResp (link added)_

- 00 48 45 4C 4D 55 54 00 05 FF 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check if BDUT has generated the links correctly.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6B 02 C9 00 3F 00 00 41 4E 44 52 45 41 30 00 E2 00
_Return (ANDREA,3000,E200)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 01 48 45 4C 4D 55 54 60 00 E2 01
_Return (HELMUT,6000,E201)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F 00 02 54 48 4F 4D 41 53 50 00 E2 02
_Return (THOMAS,5000,E202)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 03 _Read assoc 3_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F FF _Return FF => no more Assocs_

##### 5.9 Timeout behaviour
###### Purpose: With BDUT, a sensor channel (CH0) and an actuator channel (CH1) are linked. During the link sequence a Frame is delayed for a specific time (see PIXIT supplied by the manufacturer). Due to this timeout the BDUT shall leave the programming mode automatically and stop to respond.


-----

###### Preparation:  clear association table in BDUT,

 choose subchannel 0 of channel 0,

 trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj. is Input)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

_..................................... (delay)....................................._

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 22 E0 01 _LnkResp delayed=> no answer_

###### Check that no links have been generated in BDUT

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F FF _Return FF => no links_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 04 _StartLink (MANU=1234,OBJ=4)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

_..................................... (delay)....................................._

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _delayed => no answer_

###### Check that no links have been generated in BDUT

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F FF _Return FF => no links_

##### 5.10 Behaviour on unexpected Frames
###### Purpose: In the BDUT, the sensor channel (CH0) and the actuator channel (CH1) are linked. During the link sequence "unexpected" Frames are sent to the BDUT. BDUT shall ignore these and continue executing the link sequence.

 Preparation:  clear association table in BDUT,

 activate programming mode of channel 0 (sensor) in BDUT.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_


-----

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj INPUT)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00
_ChnFuncAct(CHC=1122h)(unexpected)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection (unexpected)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 22 E0 01 _LinkResp (link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B A0 00 00 00 _Stop Link (successful)_

###### Check that the input Datapoints of sensor has been correctly linked

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 00 E0 00
_Return (MASTER;1000;E000)_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 04 _StartLink (MANU=1234,OBJ=4)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122) (unexp.)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection (unexp.)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122) (unexp.)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address) (unexp.)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 00 12 34 _ChnParaResp (unexp.)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use address E103)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink_

###### Check that links have been generated correctly in BDUT

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 00 E0 00
_Return (MASTER;1000;E000)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F 00 01 4D 41 53 54 45 52 10 00 E1 00
_Return (MASTER;1000;E100)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 3F 00 02 4D 41 53 54 45 52 10 01 E1 01
_Return (MASTER;1001;E101)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 03 _Read assoc 3_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F 00 03 4D 41 53 54 45 52 10 02 E1 02
_Return (MASTER;1002;E102)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 04 _Read assoc 4_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 69 02 C9 00 3F FF _Return FF => no more assocs_

##### 5.11 Incorrect number of Group Objects
###### Purpose: Actuator channel (CH1) in BDUT is linked by a link sequence, with a sensor announcing an incorrect number of Group Objects. In this case, the actuator shall declare the link sequence invalid and shall not insert the links.

 Preparation:  clear association table in BDUT,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 05 _StartLink (MANU=1234,OBJ=5)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check that no links have been generated in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6B 02 C9 00 3F FF _Return FF => no assocs_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check that no links have been generated in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 69 02 C9 00 3F FF _Return FF => no assocs_


-----

##### 5.12 Actuator with full association table
###### Purpose: The association table (max. 5 entries) is filled with 4 entries. The actuator channel (CH1) in BDUT is linked by a link sequence, which contains more compatible Group Objects than free entries in the association table. In a second step, two entries are deleted from the association table, and the same link sequence shall then be successfully accepted. A second repetition of this link sequence is again not successful, since the association table is full again.

 Preparation:  clear association table in BDUT,

 enter 4 links in association table:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 00 E1 00

_SetLink (MASTER,A100,E100)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 01 E1 01

_SetLink (MASTER,A101,E101)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 02 E1 02

_SetLink (MASTER,A102,E102)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 AA AA E0 00

_SetLink (MASTER,A103,E103)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F 00 _Return OK_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 94 51 10 01 _LinkResp (link error)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Check that no more than 4 entries are present in the association table of the BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 04 _Read assoc 4_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F FF _Return FF => no assoc_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 A1 00 _SetDelLink (CC=22, Obj A100)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 92 22 A1 00 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 A1 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 92 51 A1 01 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok)_


-----

###### Check that no more than 2 entries are present in the association table of the BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6B 02 C9 00 3F FF _Return FF => no assoc_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok)_

###### Check that more than 2 entries are present in the association table of the BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F 00 02 4D 41 53 54 45 52 A1 02 E1 02
_Return assoc A102,E102_

##### 5.13 Sensor with full association table 
###### Purpose: The association table (max. 5 entries) is filled with 5 entries. The sensor channel (CH0) in BDUT is linked by a link sequence, which contains one status object, so that the sensor shall quit the link sequence (association table full). In a second step, one entry is deleted from the association table, and the same link sequence shall then be successfully when repeated.

 Preparation:  clear association table in BDUT,

 enter 5 links in association table:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 00 E1 00

_SetLink (MASTER,A100,E100)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 01 E1 01

_SetLink (MASTER,A101,E101)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 A1 02 E1 02

_SetLink (MASTER,A102,E102)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 69 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 AA AA E0 00

_SetLink (MASTER,AAAA,E000)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6B 02 C9 00 3F 00 _Return OK_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 3F 00 00 4D 41 53 54 45 52 10 00 E0 00

_SetLink (MASTER,1000,E103)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 _Return OK_

###### Preparation: trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_


-----

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj is Input)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 20 00 _LinkResp (use address 2000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Preparation: trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj is Input)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj A100)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 92 22 E0 01 _LinkResp (link deleted)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok)_

###### Preparation: trigger BDUT to start the link sequence of channel 0.

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj E000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 20 00 _LinkResp (use address 2000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj A100)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 22 E0 01 _LinkResp (link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok)_

###### Check that link has been generated correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 04 _Read assoc 4_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 04 4D 41 53 54 45 52 20 00 E0 00
_assoc (Master;2000;E000)_

##### 5.14 StopLink behaviour
###### Purpose: During linking of the actuator channel (CH1), in various positions of the link sequence a StopLink is sent. The BDUT shall abort the link sequence. It is further checked, that the BDUT reacts correctly on the StopLink flags (error/success), and that the BDUT correctly checks the number of objects.

 Preparation:  clear association table in BDUT,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_


-----

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A4 00 00 00 _StopLink (Link aborted)_

###### Preparation:  activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok, too many Obj=3)_

###### Check that no associations have been generated in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F FF _Return FF => no assoc_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 70 00 00 00 _BeginConnection_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 90 22 10 00 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 90 51 10 01 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link ok)_

###### Check that association has been generated correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6B 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 00 E1 00
_Return assoc 0_

##### 5.15 Sub function
###### Purpose: the actuator channel (CH1) in BDUT receives a link sequence of a sensor twice: the sensor tries to configure the scene number of the actuator via sub function 1 of the SetDelLink service. If this sub- function is not supported, the actuator shall respond with "link not added" and ignore this service when counting offered objects. 

 Preparation:  clear association table,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=2)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 81 22 00 02 _SetDelLink (CC=22, SubFunc 01)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 93 22 00 02 _LinkResp (link not added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 81 22 00 04 _SetDelLink (CC=22, SubFunc 01)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 93 22 00 04 _LinkResp (link not added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 90 61 10 02 _LinkResp (link added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link succesful)_

###### Check that link has been generated correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 02 E1 02
_Return (MASTER,1002,E102)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F FF _Return FF => no more assocs_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 20 12 34 02 _StartLink (MANU=1234,OBJ=4)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B 30 02 01 00 _ChnFuncAct (CHC=0201)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EC 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 81 22 00 02 _SetDelLink (CC=22, SubFunc 01)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EE 03 E4 00 00 3B 93 22 00 02 _LinkResp (link not added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 81 22 00 04 _SetDelLink (CC=22, SubFunc 01)_


-----

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E0 03 E4 00 00 3B 93 22 00 04 _LinkResp (link not added)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 92 61 10 02 _LinkResp (link deleted)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj=INPUT)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 91 11 E1 03 _LinkResp (use my address)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

###### Check that link has been deleted correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 67 02 C9 00 3F FF _Return FF => no more assocs_

##### 5.16 Unidirectional sensor (normal case)
###### Purpose: the actuator channel (CH1) in BDUT receives the link sequence of a unidirectional sensor twice: after the first time the links shall have been created correctly, after the second time the links shall have been deleted again.

 Preparation:  clear association table,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 2C 12 34 02 _StartLink (UNI, MANU=1234,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 40 20 10 _DeviceDecriptorResp Type 0_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 42 00 01 12 34 01 3F 23 00 0F FF 00 00 00 00

_DeviceDecriptorResp Type 2_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 00 01 03 _ChnParaResp (P=0,CH=1,C=3)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 01 00 01 _ChnParaResp (P=1, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 02 00 01 _ChnParaResp (P=2, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 03 00 02 _ChnParaResp (P=3, V=0002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Sequence ok)_

###### Check that links have been created correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 00 3F 00 00 4D 41 53 54 45 52 10 00 E1 00
_Return (MASTER;1000;E100)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F 00 01 4D 41 53 54 45 52 10 01 E1 01
_Return (MASTER;1000;E100)_

00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 02 _Read assoc 2_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 3F FF _Return FF => no more assocs_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 2C 12 34 02 _StartLink (UNI, MANU=1234,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 40 20 10 _DeviceDecriptorResp Type 0_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 42 00 01 12 34 01 3F 23 00 0F FF 00 00 00 00

_DeviceDecriptorResp Type 2_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 00 01 03 _ChnParaResp (P=0,CH=1,C=3)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 01 00 01 _ChnParaResp (P=1, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 02 00 01 _ChnParaResp (P=2, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 03 00 02 _ChnParaResp (P=3, V=0002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Sequence ok)_

###### Check that links have been deleted correctly in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 69 02 C9 00 3F FF _Return FF => no assoc_

##### 5.17 Optional PB-Services
###### Purpose: simulate link sequence for sensor channel (CH0) with optional (not mandatory) PB-services. If the BDUT doesn’t support these optional services, it shall silently discard them.

 Preparation:  clear association table,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 01 04 _Delete AssocTab_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 01 04 00 _Return OK (gelöscht)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 01 05 00 00 01 23 _Select SubChannel 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 01 05 00 00 01 23 _Return SubChannel CHC=0123h_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 10 00 00 00 **_Enter Config Mode_**

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 01 03 01 01 00 _Start LinkSequence Sensor CH0_



- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 01 03 01 01 00 _Return OK_



- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj E000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 90 22 E0 01 _LinkResp (Link added)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successful)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B B0 00 00 00 **_Quit Config Mode_**

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B C0 00 00 00 **_Reset Installation_**

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read Assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F 00 00 4D4153544552 1000 E000
_Return (MASTER,1000,E000)_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 01 _Read Assoc 1_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F FF _Return FF => no Associations left_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 10 00 00 00 **_Enter Config Mode_**

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 01 03 01 01 00 _Start LinkSequence Sensor CH0_



- 32 4D 41 53 54 45 52 00 10 00 AF FE 61 02 C9 01 03 01 01 00 _Return OK_



- 32 5F 42 44 55 54 5F 00 10 00 00 00 E2 03 E4 00 00 3B 20 00 01 02 _StartLink (MANU=0001,OBJ=2)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 30 11 22 00 _ChnFuncAct (CHC=1122)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E4 03 E4 00 00 3B 40 01 23 00 _ChnFuncSen (CHC=0123)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 70 00 00 00 _BeginConnection_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E6 03 E4 00 00 3B 80 11 00 00 _SetDelLink (CC=11, Obj E000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 91 11 10 00 _LinkResp (use address 1000)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 E8 03 E4 00 00 3B 80 22 E0 01 _SetDelLink (CC=22, Obj E001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 92 22 E0 01 _LinkResp (Link deleted)_

- 32 5F 42 44 55 54 5F 00 10 00 00 00 EA 03 E4 00 00 3B A0 00 00 00 _StopLink (Link successfull)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B B0 00 00 00 **_Quit Config Mode_**

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B C0 00 00 00 **_Reset Installation_**

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read Assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6D 02 C9 00 3F FF _Return FF => no associations left_

##### 5.18 Unidirectional sensor (error case)
###### Purpose: the actuator channel (CH1) in BDUT receives an incorrect link sequence of a unidirectional sensor twice: the number of objects given in the StartLink Frame is different from the actual number of objects. In both cases the BDUT shall not generate any links in the association table (the entire link sequence sent to the BDUT is fictitious).

 Preparation:  clear association table,

 activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 2C 12 34 02 _StartLink (UNI, MANU=1234,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 40 20 10 _DeviceDecriptorResp Type 0_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 42 00 01 12 34 01 3F 23 00 0F FF 00 00 00 00

_DeviceDecriptorResp Type 2_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 00 01 03 _ChnParaResp (P=0,CH=1,C=3)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 01 00 01 _ChnParaResp (P=1, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 02 00 01 _ChnParaResp (P=2, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 03 00 02 _ChnParaResp (P=3, V=0002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Sequence ok)_

###### Check that no links have been generated in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 6F 02 C9 00 3F FF _Return FF => no assoc_

###### Preparation: activate programming mode of channel 1 (actuator) in BDUT.

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 2C 12 34 02 _StartLink (UNI, MANU=1234,OBJ=2)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 40 20 10 _DeviceDecriptorResp Type 0_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 42 00 01 12 34 01 3F 23 00 0F FF 00 00 00 00

_DeviceDecriptorResp Type 2_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 40 11 22 00 _ChnFuncSen (CHC=1122)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 00 01 03 _ChnParaResp (P=0,CH=1,C=3)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 01 00 01 _ChnParaResp (P=1, V=0001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 02 00 01 _ChnParaResp (P=2, V=0001)_


-----

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 60 03 00 02 _ChnParaResp (P=3, V=0002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 22 10 00 _SetDelLink (CC=22, Obj 1000)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 51 10 01 _SetDelLink (CC=51, Obj 1001)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B 80 61 10 02 _SetDelLink (CC=61, Obj 1002)_

- 00 4D 41 53 54 45 52 00 AF FE 00 00 E0 03 E4 00 00 3B A0 00 00 00 _StopLink (Sequence ok)_

###### Check that no links have been generated in BDUT:

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C8 00 3F 00 00 _Read assoc 0_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 3F FF _Return FF => no assoc_

##### 5.19 PB-Mode on unidirectional transmitters

###### 5.19.1 Link sequence Check that the BDUT sends the link sequence correctly for all channels of the device:

 Example:

- 23 555042413336 00 05FF 0000 E8 03 E4 00 00 3B 2C 00 01 05 _Start Link_

- 23 555042413336 00 05FF 0000 EA 03 40 21 10 _DD type0_



- 23 555042413336 00 05FF 0000 EC 03 42 00 01 A2 01 11 3F 23 11 00 21 00 00 00 00
_DD type2_



- 23 555042413336 00 05FF 0000 EE 03 E4 00 00 3B 40 03 11 00 _ChFctSensor (0x311)_



- 23 555042413336 00 05FF 0000 E0 03 E4 00 00 3B 60 00 00 03 _ChParamResp (announce nr.of.param)_



- 23 555042413336 00 05FF 0000 E2 03 E4 00 00 3B 60 01 00 01 _ChParamResp (value of Param 1)_



- 23 555042413336 00 05FF 0000 E4 03 E4 00 00 3B 60 02 00 00 _Ch param resp_

- 23 555042413336 00 05FF 0000 E6 03 E4 00 00 3B 60 03 00 01 _Ch param resp_

- 23 555042413336 00 05FF 0000 E8 03 E4 00 00 3B 80 01 00 01 _Set/ delete Link (00h1)_

- 23 555042413336 00 05FF 0000 EA 03 E4 00 00 3B 80 0C 00 02 _Set/ delete Link (00h2)_

- 23 555042413336 00 05FF 0000 EC 03 E4 00 00 3B 80 0B 00 03 _Set/ delete Link (00h3)_

- 23 555042413336 00 05FF 0000 EE 03 E4 00 00 3B 80 05 00 04 _Set/ delete Link (00h4)_

- 23 555042413336 00 05FF 0000 E0 03 E4 00 00 3B 80 08 00 05 _Set/ delete Link (00h5)_



- 23 555042413336 00 05FF 0000 E2 03 E4 00 00 3B A0 00 00 00 _Stop Link_

###### 5.19.2 Generic channel If the BDUT supports generic channels, check that the AJS (adjustable selection) is sent correctly in the link sequence when the local setting is changed.

 Example (AJS is locally set to 2)

- 33 555042413336 00 05FF 0000 E4 03 E4 00 00 3B 2C 00 01 05 _Start Link_

- 33 555042413336 00 05FF 0000 E6 03 40 21 10 _DD type0_



- 33 555042413336 00 05FF 0000 E8 03 42 00 01 A2 01 11 3F 23 11 00 21 00 00 00 00
_DD type2_



- 33 555042413336 00 05FF 0000 EA 03 E4 00 00 3B 40 03 11 0 0 _ChFctSensor (0x311)_



- 33 555042413336 00 05FF 0000 EC 03 E4 00 00 3B 60 00 00 03 _ChParamResp_



- 33 555042413336 00 05FF 0000 EE 03 E4 00 00 3B 60 01 00 02 **_Ch param resp (AJS = 2)_**



- 33 555042413336 00 05FF 0000 E0 03 E4 00 00 3B 60 02 00 00 _ChParamResp_

- 33 555042413336 00 05FF 0000 E2 03 E4 00 00 3B 60 03 00 01 _ChParamResp_



- 33 555042413336 00 05FF 0000 E4 03 E4 00 00 3B 80 01 00 01 _Set/ delete Link (00h1)_


-----

- 33 555042413336 00 05FF 0000 E6 03 E4 00 00 3B 80 0C 00 02 _Set/ delete Link (00h2)_

- 33 555042413336 00 05FF 0000 E8 03 E4 00 00 3B 80 0B 00 03 _Set/ delete Link (00h3)_

- 33 555042413336 00 05FF 0000 EA 03 E4 00 00 3B 80 05 00 04 _Set/ delete Link (00h4)_

- 33 555042413336 00 05FF 0000 EC 03 E4 00 00 3B 80 08 00 05 _Set/ delete Link (00h5)_

- 33 555042413336 00 05FF 0000 EE 03 E4 00 00 3B A0 00 00 00 _Stop Link_

###### 5.19.3 Device Descriptor Type 2 Check that the Group Addresses are assigned to the Group Objects in the order as E-Mode Channels appear in DD2 with respect to the Group Object order in the E-Mode channel definition. (Please refer to the various Chapters with E-Mode Channel definitions in [03].)

 (compare to the example sequences above)


-----

#### 6 RF Other EASY-Modes (and S-Mode)
###### The following test sequences shall be used with RF devices supporting other E-Modes (e.g. Ctrl-Mode) and S-Mode. They are used to approve the implementation of the RF specific management Property- Functions.

 Note: These tests refer to a sample test application as described in clause 5.2.

##### 6.1 ObjectValue (PID_PB_OBJVALUE)
###### The Property – function “ObjectValue” (Property ID = PID_PB_OBJVALUE) is tested, which can be used for reading/writing a Group Object. The addressed object and the length of the data part shall be correct, otherwise the property shall return an error (ReturnCode = FFh).

 Check that the BDUT returns an error if it receives a FuncPrStRead to an invalid object:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E1FF _FuncPrStRead get E1FF_

- 32 4D4153544552 00 1000 AFFE 6B 02 C9 00 3E FF _error (inv. Obj.)_

###### Check that the BDUT reads and writes correctly to a 1 byte object:

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E100 01 _set E100 (1 byte)_

- 32 4D4153544552 00 1000 AFFE 6D 02 C9 00 3E 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E100 _get E100_

- 32 4D4153544552 00 1000 AFFE 6F 02 C9 00 3E 00 01 _return = 01_

###### Check that the BDUT rejects writing 1 byte object with 3 bytes data

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E100 01 02 03 _set E100 (3 Bytes)_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 3E FF _error (length)_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E100 _get E100_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 3E 00 01 _return = 01_

###### Check that the BDUT reads and writes correctly to an 8 byte object:

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E102 0000000000000000 _set E102 (8 bytes)_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3E 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E102 _get E102_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 3E 00 0000000000000000 _return = 8 x 00_

###### Check that the BDUT rejects writing 8 byte object with 9 bytes data (data too long):

- 00 4D4153544552 00 AFFE 1000 61 02 C7 003E E102 010203040506070809 _set E102 (9 bytes)_

- 32 4D4153544552 00 1000 AFFE 6D 02 C9 00 3E FF _error (length)_

###### Check that the BDUT rejects writing 8 byte object with 7 bytes data (data too short):

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 3E E102 01020304050607 set E102 (7 bytes)

- 32 4D4153544552 00 1000 AFFE 6F 02 C9 00 3E FF _error (length)_

###### Check that the value of the 8 byte object did not change:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3E E1 02 _get E102_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 3E 00 0000000000000000 _return = 8 x 00_


-----

##### 6.2 ObjectLink (PID_PB_OBJLINK )
###### The Property – function “ObjectLink” (Property ID = PID_PB_OBJLINK) is tested. This one is used for inserting and removing links. In case of success the function returns with ReturnCode 00h, on errors FFh or 0xFE (=invalid object).

 Preparation: clear association table.

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 4D4153544552 1000 E000 _SetLink_
_(MASTER,1000,E000)_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 4D4153544552 1100 E100 _SetLink_
_(MASTER,1100,E100)_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 4D4153544552 1101 E101 _SetLink_
_(MASTER,1101,E101)_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 4D4153544552 1200 E200 _SetLink_
_(MASTER,1200,E200)_

- 32 4D4153544552 00 1000 AFFE 6B 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 4D4153544552 1201 E201 _SetLink_
_(MASTER,1201,E201)_

- 32 4D4153544552 00 1000 AFFE 6D 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 112233445566 1000 E000 _add Link_

- 32 4D4153544552 00 1000 AFFE 6F 02 C9 00 3F FF _FFh => error (full)_

###### Delete one link and check if it is free:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 01 00 4D4153544552 1201 E201 _delete Link 4_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 3F 00 _return = ok_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 3F 00 04 _read Link 4_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 3F FF _FFh => free_

###### Check that another link can be entered:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 112233445566 1000 E000 _add Link_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3F 00 _return = ok_

###### Delete this link again:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F01004D 4153544552 1000 E000 _delete Link 0_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 3F 00 _return = ok_

###### Check if an error is returned on trying to insert a link to an invalid object:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 00 00 112233445566 1000 ABCD _invalid insertion_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 3F FE _0xFE => invalid object_

###### Check if an error is returned on trying to delete a link from an invalid object:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 01 00 112233445566 1000 ABCD _invalid deletion_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 3F FE _0xFE => invalid object_

###### Check if ok is returned on trying to delete a non existing link from a valid object:

- 00 4D4153544552 00 AFFE 1000 61 02C7 00 3F 01 00 112233445566 7777 E000 _(Link not existing)_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 3F 00 _return = ok_


-----

##### 6.3 SetGetParameter (PID_PB_PARAMETERS)
###### The Property – function “Parameters” (Property ID = PID_PB_PARAMETERS) is tested. It is used for reading / writing parameters of a selected KNX-Easy channel.

 Read existing parameter in existing channel:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 41 02 01 _read Ch 2 / Par 1_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 41 00 0000 _return val = 0000h_

###### Read non-existing parameter in existing channel:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 41 02 02 _read Ch 2 / Par 2_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 41 FF _FFh => error_

###### Read non-existing parameter in non-existing channel:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 41 03 01 _read Ch 3 / Par 2_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 41 FF _FFh => error_

###### Write existing parameter in existing channel, value too long:

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 41 02 01 01 02 _write Ch 2, Par 1 (too long)_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 41 FF _FFh => error_

###### Write existing parameter in existing channel, correct length:

- 00 4D4153544552 00 AFFE 1000 61 02 C7 00 41 02 01 01 _write Ch 2, Par 1 ok (01h)_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 41 00 _return code = 00h (ok)_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 41 02 01 _read Ch 2, Par 1_

- 32 4D4153544552 00 1000 AFFE 6B 02 C9 00 41 00 00 01 _return val = 01h_

##### 6.4 GetObjectAddress (PID_PB_OBJADDR )
###### The Property – function “Object Address” (Property ID = PID_PB_OBJADDR) is tested. It is used for reading the channels and objects and their addresses in the active configuration of the device.

 Read objects until the return code indicates the end of the object list:

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 00 _read with iterator 0_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 42 00 00 00 0123 00 E000 _CH: 0 / 0123h, OBJ: 0 /_
_E000_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 01 _read with iterator 1_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 42 00 01 00 0123 01 E001 _CH: 0 / 0123h, OBJ: 1 /_
_E001_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 02 _read with iterator 2_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 42 00 02 01 0201 00 E100 _CH: 1 / 0201h, OBJ: 0 /_
_E100_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 03 _read with iterator 3_

- 32 4D4153544552 00 1000 AFFE 67 02 C9 00 42 00 03 01 0201 01 E101 _CH: 1 / 0201h, OBJ: 1 /_
_E101_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 04 _read with iterator 4_

- 32 4D4153544552 00 1000 AFFE 69 02 C9 00 42 00 04 01 0201 02 E102 _CH: 1 / 0201h, OBJ: 2 /_
_E102_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 05 _read with iterator 5_

- 32 4D4153544552 00 1000 AFFE 6B 02 C9 00 42 00 05 01 0201 03 E103 _CH: 1 / 0201h, OBJ: 3 /_
_E103_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 06 _read with iterator 6_


-----

- 32 4D4153544552 00 1000 AFFE 6D 02 C9 00 42 00 06 02 0401 00 E200 _CH: 2 / 0401h, OBJ: 0 /_
_E200_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 07 _read with iterator 7_

- 32 4D4153544552 00 1000 AFFE 6F 02 C9 00 42 00 07 02 0401 01 E201 _CH: 2 / 0401h, OBJ: 1 /_
_E201_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 08 _read with iterator 8_

- 32 4D4153544552 00 1000 AFFE 61 02 C9 00 42 00 08 02 0401 02 E202 _CH: 2 / 0401h, OBJ: 2 /_
_E202_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 09 _read with iterator 9_

- 32 4D4153544552 00 1000 AFFE 63 02 C9 00 42 00 09 02 0401 03 E203 _CH: 2 / 0401h, OBJ: 3 /_
_E203_

- 00 4D4153544552 00 AFFE 1000 61 02 C8 00 42 00 0A _read with iterator 10_

- 32 4D4153544552 00 1000 AFFE 65 02 C9 00 42 FF _FF => no more Ojects_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 42 00 00 _FuncPropCmd (iterator 0)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 63 02 C9 00 42 FF _FF => not allowed_

- 00 4D 41 53 54 45 52 00 AF FE 10 00 61 02 C7 00 42 00 0A _FuncPropCmd (iterator 10)_

- 32 4D 41 53 54 45 52 00 10 00 AF FE 65 02 C9 00 42 FF _FF => not allowed_


-----

#### 7 Multi Easy Configuration Tests

##### 7.1 Generalities

###### 7.1.1 Channel configuration for RF Multi Easy tests

 7.1.1.1 Channel configuration for RF Multi Easy Controler tests
 Description Light Actuator Scene Channel-Index 1 ChannelCode 0x0103 Datapoints Handle Flags Length Conn.-Codes 0001 I 1 Bit 0x01  0002 I 1 Bit 0x03 0003 I 2 Bits 0x04 0004 I 1 Byte 0x08 0005 O 1 Bit 0x02 (Info) Parameters (none)

 7.1.1.2 Channel configuration for Push-Button tests The above Light Actuator Scene channel and the following channel are used for the Push-Button tests.

 Description Generic Push-Button ½ info 5 Channel-Index 1 ChannelCode 0x0316 Datapoints Handle Flags Length Conn.-Codes 0001 I 1 Bit 0x02 (Info) 0002 O 1 Bit 0x01 0003 O 1 Bit 0x0B 0004 O 2 Bits 0x04 0005 O 4 Bits 0x05 0006 O 1 Byte 0x08 Parameters (none)

 7.1.2 Frame description The tool used for RF test is EITT4 together with a cEMI interface able to send and receive RF frames.

 The IN and OUT frames listed in this RF Multi section are taken from the EITT4 trace window.

 The bytes displayed between square brackets represent the cEMI additionnal information. This information is defined in the document AN151.

 FA means Fast Acknowledge in the comment of the scripts.

 Example :

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 03 D5 02 01 10 01

###### The cEMI additional info ([08 04 01 00 00 01]) gives the following information : 

 • 08: KNX RF Multi additional information

 • 04 : length = 4 bytes

 • 01 : emission frequency = F1 ready

 • 00 : fast and slow call channel = F1, S1

 • 00 : no fast ack management

©C i h 1998 2022 A i i AS 02 02 02 64 f 14

|Description|Light Actuator Scene|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|1|1|1|1|
|**ChannelCode **|0x0103|0x0103|0x0103|0x0103|
|**Datapoints**|**Handle**|**Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|0001|I|1 Bit|0x01|
|**Datapoints**|0002|I|1 Bit|0x03|
|**Datapoints**|0003|I|2 Bits|0x04|
|**Datapoints**|0004|I|1 Byte|0x08|
|**Datapoints**|0005|O|1 Bit|0x02 (Info)|
|**Parameters**|(none)|(none)|(none)|(none)|

|Description|Generic Push-Button ½ info 5|Col3|Col4|Col5|
|---|---|---|---|---|
|**Channel-Index**|1|1|1|1|
|**ChannelCode**|0x0316|0x0316|0x0316|0x0316|
|**Datapoints**|**Handle**|**Flags**|**Length**|**Conn.-Codes**|
|**Datapoints**|0001|I|1 Bit|0x02 (Info)|
|**Datapoints**|0002|O|1 Bit|0x01|
|**Datapoints**|0003|O|1 Bit|0x0B|
|**Datapoints**|0004|O|2 Bits|0x04|
|**Datapoints**|0005|O|4 Bits|0x05|
|**Datapoints**|0006|O|1 Byte|0x08|
|**Parameters**|(none)|(none)|(none)|(none)|


-----

###### • 01 : reception frequency = F1 ready

##### 7.2 Easy Controler

###### 7.2.1 RF Multi Interface object existence The existence of the KNX RF Multi object is checked by reading the object type of the interface object 2.

 Check that the BDUT returns the value 0x13 when reading the PID_OBJECT_TYPE on object index 02.

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 03 D5 02 01 10 01 :
PropertyValueRead(Obj=02, Prop=01, Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 07 03 D6 02 01 10 01 00 13 :
PropertyValueResponse(Obj=02, Prop=01, Count=1, Start=001, Data=00 13 )

###### 7.2.2 RF Multi Type (PID_RF_MULTI_TYPE) The Property “RF Multi Type” (Property ID = PID_RF_MULTI_TYPE) is tested, which can be used for configuring the KNX RF multi device as “KNX RF Ready” or as “KNX RF Multi” type.

 The reading and writing of this property shall be correct.

 Reading the value of KNX RF type => shall be Ready (0x00) (by default as set in the factory state)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 03 D5 02 33 10 01 :
PropertyValueRead(Obj=02, Prop=33, Count=1, Start=001)

- RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 00 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

###### Writing the value of KNX RF type to Multi (0x01)

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 01 : PropertyValueWrite(Obj=02, Prop=33,
Count=1, Start=001, Data=01 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 01 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=01 )

###### Reading the value of KNX RF type => shall be Multi (0x01)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 05 03 D5 02 33 10 01 : PropertyValueRead(Obj=02, Prop=33,
Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 01 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=01 )

###### Writing the value of KNX RF type to Ready (0x00)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 00 : PropertyValueWrite(Obj=02, Prop=33,
Count=1, Start=001, Data=00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 00 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

###### Reading the value of KNX RF type => shall be Ready (0x00)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 05 03 D5 02 33 10 01 : PropertyValueRead(Obj=02, Prop=33,
Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 00 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

###### 7.2.3 RF Multi Physical Features (PID_RF_MULTI_PHYSICAL_FEATURES) Set the DUT physical feature to all -> 0x1F

 Reading the value of flags of KNX RF Multi device => TxFx and RxFx

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 03 D5 02 34 10 01 : PropertyValueRead(Obj=02, Prop=34,
Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 34 10 01 05 :
PropertyValueResponse(Obj=02, Prop=34, Count=1, Start=001, Data=05 )

###### Writing the value of flags of KNX RF Multi device => Error

©C i h 1998 2022 A i i AS 02 02 02 65 f 14


-----

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 06 03 D7 02 34 10 01 00 : PropertyValueWrite(Obj=02, Prop=34,
Count=1, Start=001, Data=00 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 05 03 D6 02 34 00 00 :
PropertyValueResponse(Obj=02, Prop=34, Count=0, Start=000, Data=)

###### Reading the value of flags of KNX RF Multi device => TxFx and RxFx

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 05 03 D5 02 34 10 01 : PropertyValueRead(Obj=02, Prop=34,
Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 34 10 01 05 :
PropertyValueResponse(Obj=02, Prop=34, Count=1, Start=001, Data=05 )

###### 7.2.4 RF Multi Call Channel (PID_RF_MULTI_CALL_CHANNEL) Preparation: Set the BDUT physical features to all features (value 0x1F).

 Functional test : Add first a link on output datapoint (in transmission mode)

 A RF Multi link is added on Fast frequency without FA (GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x01, FA = 0x00)

 ◄ [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 02
00 05 01 00

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 : _OK_

###### A RF Multi link is added on Slow frequency without FA (GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x02, FA = 0x00)

 ◄ [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 02 00 05 02 00 

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 : _OK_

###### Reading the value of Call Channel by default : F1 and S1

 ◄ [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 03 D5 02 35 10 01 :  Read

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 00 : _Response=00_

###### Writing the value of Call Channel => F1 and S1

 ◄ [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 06 03 D7 02 35 10 01 00 :  Write 00

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 00 : _Response=00_

###### Reading the value of Call Channel => F1 and S1

 ◄ [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 09] 3C 60 AFFE 05FF 05 03 D5 02 35 10 01 :
PropertyValueRead(Obj=02, Prop=35, Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 00 :
PropertyValueResponse(Obj=02, Prop=35, Count=1, Start=001, Data=00 )

###### Make the interaction on the product to send the datapoint

 Check that DUT transmits RF frame (ON) on the F1 channel

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 02] 0C A0 05FF 0002 01 00 81 :

###### Check that DUT transmits RF frame (ON) on the S1 channel

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 05] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Writing the value of Call Channel => F2 and S2

 ◄ [RF: 02 SN: 00090040FF03 2][08 04 00 00 00 09] 3C 60 AFFE 05FF 06 03 D7 02 35 10 01 05 :
PropertyValueWrite(Obj=02, Prop=35, Count=1, Start=001, Data=05 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 05 :
PropertyValueResponse(Obj=02, Prop=35, Count=1, Start=001, Data=05 )

###### Reading the value of Call Channel => F2 and S2

 ◄ [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 03 D5 02 35 10 01 : PropertyValueRead(Obj=02, Prop=35,
Count=1, Start=001)

©C i h 1998 2022 A i i AS 02 02 02 66 f 14


-----

- [RF: 02 SN: 00090040FF03 0] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 05 : PropertyValueResponse(Obj=02,
Prop=35, Count=1, Start=001, Data=05 )

###### Make the interaction on the product to send the datapoint

 Check that DUT transmits RF frame (ON) on the F2 channel

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 03] 0C A0 05FF 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

###### Check that DUT transmits RF frame (ON) on the S2 channel

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 06] 0C A0 05FF 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

###### Writing the value of Call Channel => F3 and S1

- [RF: 02 SN: 00090040FF03 4][08 04 00 00 00 09] 3C 60 AFFE 05FF 06 03 D7 02 35 10 01 08 :
PropertyValueWrite(Obj=02, Prop=35, Count=1, Start=001, Data=08 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 08 :
PropertyValueResponse(Obj=02, Prop=35, Count=1, Start=001, Data=08 )

###### Reading the value of Call Channel => F3 and S1

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 05 03 D5 02 35 10 01 : PropertyValueRead(Obj=02, Prop=35,
Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 35 10 01 08 :
PropertyValueResponse(Obj=02, Prop=35, Count=1, Start=001, Data=08 )

###### Make the interaction on the product to send the datapoint

 Check that DUT transmits RF frame (ON) on the F2 channel

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 04] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Check that DUT transmits RF frame (ON) on the S1 channel

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 05] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

©C i h 1998 2022 A i i AS 02 02 02 6 f 14


-----

###### 7.2.5 RF Multi Object Link (PID_RF_MULTI_OBJECT_LINK) The following tables give the compatibility between features of the device and features requested by the object link function property when adding a link on an output datapoint of a device.

 F1r = F1 ready ; Fx = Fast frequency ; Sx = Slow frequency; FA = Fast Ack (Physical Acknowledge)

No link possible (FDh = physical error)

Link ok

**Link addition**

**Object_**

**RF_Multi_Object_Link**
**link**

F1r(FA),

Sx, F1r, F1r, F1r, Fx Sx F1r Sx(FA), F1r(FA F1r(FA),
Fx Sx F1r Fx Fx Sx Sx, Fx (FA) (FA) (FA) Fx(FA) Fx(FA) Sx(FA Fx(FA), Sx(FA)

**RF**
F1r
**Ready**

                   
TX Sx Sx

F1r,
TX Fx F1r Fx F1r

Fx

F1r,

Sx, F1r, F1r,
TX Sx, TX Fx F1r Fx Sx F1r Sx,

**output** Fx Fx Sx

Fx

**datapoint** **RF Multi**

**Tx**

FA

**features**

Sx
FA, TX Sx Sx
(FA)

F1r, Fx
FA, TX Fx F1r Fx F1r

Fx (FA)

F1r,

F1r, F1r, Fx Sx
FA, TX Sx, TX Fx F1r Fx Sx F1r Sx,Fx Sx,

Fx Sx (FA) (FA)

Fx

###### The following tables give the compatibility between features of the device and features requested by the object link function property when adding a link on an input datapoint of a device.

**Link addition**

**Object_**

**RF_Multi_Object_Link**
**link**

Sx, F1r, F1r, F1r, Fx Sx F1r Sx(FA), F1r(FA F1r(FA), F1r(FA),
Fx Sx F1r Fx Fx Sx Sx, (FA) (FA) (FA) Fx(FA),

Fx Fx(FA) Fx(FA) Sx(FA

Sx(FA)

**RF**
F1r
**Ready**

                   
RX Sx Sx

F1r,
RX Fx F1r Fx F1r

Fx

F1r,

Sx, F1r, F1r,
RX Sx, RX Fx F1r Fx Sx F1r Sx,

**input** Fx Fx Sx

Fx

**datapoint** **RF Multi**

**Rx**
**features** FA

Sx
FA, RX Sx Sx
(FA)

F1r, Fx
FA, RX Fx F1r Fx F1r

Fx (FA)

F1r,

F1r, F1r, Fx Sx
FA, RX Sx, RX Fx F1r Fx Sx F1r Sx,Fx Sx,

Fx Sx (FA) (FA)

Fx

©C i h 1998 2022 A i i AS 02 02 02 68 f 14

|Col1|Col2|Col3|Link addition|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||**Object_**<br>**link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|
|||||Fx|Sx|F1r|Sx,<br>Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx|Fx<br>(FA)|Sx<br>(FA)|F1r<br>(FA)|Sx(FA),<br>Fx(FA)|<br>F1r(FA<br>Fx(FA)|<br>F1r(FA),<br>Sx(FA|F1r(FA),<br>Fx(FA),<br>Sx(FA)|
|**output**<br>**datapoint**|**RF**<br>**Ready**||F1r|||||||||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|-||||||||||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|TX Sx|||Sx|||||||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|TX Fx|F1r|Fx||F1r||F1r,<br>Fx||||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|TX Sx, TX Fx|F1r|Fx|Sx|F1r|Sx,<br>Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|FA||||||||||||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|FA, TX Sx|||Sx|||||||Sx<br>(FA)||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|FA, TX Fx|F1r|Fx||F1r||F1r,<br>Fx|||Fx<br>(FA)|||||||
|**output**<br>**datapoint**|**RF Multi**<br>**Tx**<br>**features**|FA, TX Sx, TX Fx|F1r|Fx|Sx|F1r|Sx,Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx|Fx<br>(FA)|Sx<br>(FA)||||||

|Col1|Col2|Col3|Link addition|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||**Object_**<br>**link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|<br>**RF_Multi_Object_Link**|
|||||Fx|Sx|F1r|Sx,<br>Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx|Fx<br>(FA)|Sx<br>(FA)|F1r<br>(FA)|Sx(FA),<br>Fx(FA)|<br>F1r(FA<br>Fx(FA)|<br>F1r(FA),<br>Sx(FA|F1r(FA),<br>Fx(FA),<br>Sx(FA)|
|**input**<br>**datapoint**|**RF**<br>**Ready**||F1r|||||||||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|-||||||||||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|RX Sx|||Sx|||||||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|RX Fx|F1r|Fx||F1r||F1r,<br>Fx||||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|RX Sx, RX Fx|F1r|Fx|Sx|F1r|Sx,<br>Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|FA||||||||||||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|FA, RX Sx|||Sx|||||||Sx<br>(FA)||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|FA, RX Fx|F1r|Fx||F1r||F1r,<br>Fx|||Fx<br>(FA)|||||||
|**input**<br>**datapoint**|**RF Multi**<br>**Rx**<br>**features**|FA, RX Sx, RX Fx|F1r|Fx|Sx|F1r|Sx,Fx|F1r,<br>Fx|F1r,<br>Sx|F1r,<br>Sx,<br>Fx|Fx<br>(FA)|Sx<br>(FA)||||||


-----

###### Add / Remove link

 Pre-conditions :

   DUT => reset to factory

   DUT Serial Number = 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   PID_RF_MULTI_CALL_CHANNEL is set with F1 and S1 capacities

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

   DUT has a link table of size 5.

 Purpose of the test :

 Add again a new link on an input datapoint.

 Check the returned value : 00 (OK)

 Read the link using the iterator.

 Check that the link is present and the bytes 22 and 23.

 PID_RF_MULTI_OBJETC_LINK => Set RF Multi link on OnOff datapoint on Fast without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 00] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Read 1 link 

 Property Function command Read( Object Link Read iterator 0) --> OnOff link

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 01 00 )

###### Property Function command Read( Object Link Read iterator 1) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Check that DUT correctly understand the command for switching ON

- [RF: 00 SN: 112233445566 0][08 04 02 00 00 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### REMOVE A SIMPLE LINK

 Purpose of the test :

 Remove the link on an input datapoint.

 Check the returned value : 00 (OK)

 Read the link using the iterator.

 Check that the link is no more present and the bytes 22 and 23.

 PID_RF_MULTI_OBJETC_LINK => Delete RF Multi link on OnOff datapoint on Fast without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

©C i h 1998 2022 A i i AS 02 02 02 69 f 14


-----

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 00] 3C 60 AFFE 05FF 11 02 C7 02 36 02 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=02 00 11 22 33 44 55 66 00 02 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Read 0 link  

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Check that DUT do not understand any more the command for switching OFF

- [RF: 00 SN: 112233445566 1][08 04 02 FF 00 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

###### 7.2.5.1 Add link on non existing datapoint Pre-conditions :

   DUT => reset to factory

   DUT serial number = 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   PID_RF_MULTI_CALL_CHANNEL is set with F1 and S1 capacities

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

   DUT has a link table of size 5.

 Purpose of the test :

 Add a link on a non existing object handle.

 Check the returned value : 0xFE (ERR_OBJECT)

 Read the link using the iterator.

 Check that the link is not present

 PID_RF_MULTI_OBJETC_LINK => Set RF Multi link on a non existing object handle on Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0012, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 00] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02
00 12 01 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 12 01 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FE :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FE, Data=)

###### Read 0 link  

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.2.5.2 Add a link when the table is already full Pre-conditions :

   DUT => reset to factory

   DUT serial number = 00090040ff03

©C i h 1998 2022 A i i AS 02 02 02 0 f 14


-----

######   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

   DUT has a link table of size 3.

 Purpose of the test :

 Fill the link table (3 entries) with 3 links.

 Add a link on an input datapoint

 Check the returned value : 0xFF (ERR_TABLE FULL)

 Read the link using the iterator.

 Check that the link is not present

 Fill the link table with three new links 

 PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on an existing object handle on Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on an existing object handle on Fast without FA  (SN =0x112233445577, GA = 0x0003, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 77 00 03 00 01 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 77 00 03 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on an existing object handle on Fast without FA  (SN =0x112233445588, GA = 0x0004, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 88 00 04 00 01 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 88 00 04 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Add another link that must fail

 PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on an existing object handle on Fast without FA  (SN =0x112233445599, GA = 0x0005, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 99 00 05 00 01 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 99 00 05 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Read 3 links  

 Property Function command Read( Object Link Read iterator 0) --> Link with GA 0x0002

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 01 00 )

###### Property Function command Read( Object Link Read iterator 1) --> Link with GA 0x0003

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 77 00 03
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 77 00 03 00 01 01 00 )

©C i h 1998 2022 A i i AS 02 02 02 1 f 14


-----

###### Property Function command Read( Object Link Read iterator 2) --> Link with GA 0x0004

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 88 00 04
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 88 00 04 00 01 01 00 )

###### Property Function command Read( Object Link Read iterator 3) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 05 02 C8 02 36 00 03 : FctPropState_Read(ObjIdx=02, PropId=36,
00 03 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.2.5.3 Add link with incompatible features

 7.2.5.3.1 Physical acknowledge incompatibility Pre-conditions :

   DUT => reset to factory

   DUT SERIAL Number = 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities except FA : FA:no, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x0F

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

 Description of the test :

 Add a link on an input datapoint with Rx Sx with Fast Ack

 Check the returned value : 0xFD (ERR_RF_PHYSICAL)

 Read the link using the iterator.

 Check that the link is not present.

 Add RF Multi link on an existing object handle on Slow frequency with FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x02, FA = 0x40)

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02 00 01 02 40 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 02 40 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 36 FD : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FD, Data=)

###### Read 0 link 

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 36 FF : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FF, Data=)

###### 7.2.5.3.2 Fast frequency transmission incompatibility Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities except TX Fx : FA:yes, TX Fx:no, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1B

   DUT contains a light actuator channel scene containing the following datapoints : OnOff (1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

©C i h 1998 2022 A i i AS 02 02 02 2 f 14


-----

###### Description of the test :

 Add a link on an output datapoint on Fast, without FA 

 Check the returned value : 0xFD (ERR_RF_PHYSICAL)

 Read the link using the iterator.

 Check that the link is not present

 PID_RF_MULTI_OBJETC_LINK => Set RF Multi link on an existing object handle on Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 11 22 33 44 55 66 00 02 00 05 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 11 22 33 44 55 66 00 02 00 05 01 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 36 FD : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FD, Data=)

###### Read 0 link  

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 36 FF : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FF, Data=)

###### 7.2.5.3.3 Slow frequency reception incompatibility Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities except RX Sx : ACK:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : no ==> 0x1D

   DUT contains a light actuator channel scene containing the following datapoints : OnOff (1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

 Description of the test :

 Add a link on an INPUT datapoint on SLOW, without FA 

 Check the returned value : 0xFD (ERR_RF_PHYSICAL)

 Read the link using the iterator.

 Check that the link is not present

 Add RF Multi link on an existing object handle on slow without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0002, Physical features = 0x02, FA = 0x00)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02 00 02 02 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 02 02 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 36 FD : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FD, Data=)

###### Read 0 link

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 36 FF : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FF, Data=)

###### 7.2.5.3.4 Fast and Slow frequency transmission with fast physical acknowledge Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

©C i h 1998 2022 A i i AS 02 02 02 3 f 14


-----

######   PID_PHYSICAL_FEATURES is set with all capabilities except RX Sx : ACK:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : no ==> 0x1D

   DUT contains a light actuator channel scene containing the following datapoints : OnOff (1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

 Description of the test :

 Add a link on an OUTPUT datapoint on SLOW, AND FAST with FA 

 Check the returned value : 0xFD (ERR_RF_PHYSICAL)

 Read the link using the iterator.

 Check that the link is not present

 Add RF Multi link on an existing object handle on slow and fast with FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x03, FA = 0x40)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 11 22 33 44 55 66 00 02 00 05 03 40 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 11 22 33 44 55 66 00 02 00 05 03 40 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 36 FD : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FD, Data=)

###### Read 0 link

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 36 FF : FctPropState_Rsp(ObjIdx=02, PropId=36,
RetCode=FF, Data=)

###### 7.2.5.3.5 Attempt to modify ack slot number of an existing link with physical acknowledge Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities except RX Sx : ACK:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : no ==> 0x1D

   DUT contains a light actuator channel scene containing the following datapoints : OnOff (1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

 Description of the test :

 Add a link on an OUTPUT datapoint on SLOW with FA (ack slot number 3)

 Check the returned value : 0x00 (OK)

 Add a link on an OUTPUT datapoint on SLOW with FA (ack slot number 4)

 Check the returned value : 0xFD (ERR_RF_PHYSICAL)

 Read the link using the iterator.

 Check that the second link is not present

 PID_RF_MULTI_OBJETC_LINK => Set RF Multi link on an existing object handle on Slow with FA, ack slot number 3 (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x02, FA = 0x42)

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 11 22 33 44 55 66 00 02
00 05 02 42 : FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 11 22 33 44 55 66 00 02 00 05 02 42 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJETC_LINK => Set RF Multi link on an existing object handle on Slow with FA, ack slot number 4 (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0005, Physical features = 0x02, FA = 0x43)

©C i h 1998 2022 A i i AS 02 02 02 4 f 14


-----

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 11 22 33 44 55 66 00 02
00 05 02 43 : FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 11 22 33 44 55 66 00 02 00 05 02 43 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FD :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FD, Data=)

###### Read 1 link 

 Property Function command Read( Object Link Read iterator 1) --> Link in Sx with Fast ack (ack slot number = 3)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 02
00 05 02 42 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 02 00 05 02 42 )

###### Property Function command Read( Object Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 01 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.2.5.4 Remove non existing link Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

   DUT has a link table of size 5.

 Purpose of the test :

 Remove a non exiting link on an input datapoint.

 Check the returned value : 00 (OK)

 Read the link using the iterator.

 Check that the link is no more present and the bytes 22 and 23.

 PID_RF_MULTI_OBJETC_LINK => Delete a non existing RF Multi link on OnOff datapoint on Fast without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 11 02 C7 02 36 02 00 11 22 33 44 55 66 00 02 00 01 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=02 00 11 22 33 44 55 66 00 02 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Read 0 link  

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.2.5.5 Remove link on non existing datapoint Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

©C i h 1998 2022 A i i AS 02 02 02 5 f 14


-----

######   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   DUT contains a light actuator channel scene containing the following datapoints : OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

 Purpose of the test :

 Remove a link on a non existing datapoint.

 Check the returned value : 0xFE (ERR_OBJECT)

 Read the link using the iterator.

 Check that the link is no more present and the bytes 22 and 23.

 PID_RF_MULTI_OBJETC_LINK => Delete RF Multi link on non existing datapoint on Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0012, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 11 02 C7 02 36 02 00 11 22 33 44 55 66 00 02 00 12 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=02 00 11 22 33 44 55 66 00 02 00 12 01 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FE :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FE, Data=)

###### Read 0 link  

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.2.5.6 Read the number of links in the device Pre-conditions :

   DUT => reset to factory

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   DUT contains a light actuator channel scene containing the following datapoints: OnOff, TimedStartStop, Forced, Scene Number, InfoOnOff

 Purpose of the test :

 Read the numbers of links and check them.

 Add a link on an input datapoint.

 Read the numbers of links and check them.

 Remove the link.

 Read the numbers of links and check them.

 Property Function command Read (with code = 01) --> Read the numbers of links in the device and check them

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 01 00 : FctPropState_Read(ObjIdx=02, PropId=36,
01 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 00 05 00 05 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 05 00 05)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on an input datapoint on Fast without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 00] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 01 00 )

©C i h 1998 2022 A i i AS 02 02 02 6 f 14


-----

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Property Function command Read (with code = 01) --> Read the numbers of links in the device and check them

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 01 00 : FctPropState_Read(ObjIdx=02, PropId=36,
01 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 00 04 00 05 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 04 00 05)

###### PID_RF_MULTI_OBJETC_LINK => Delete RF Multi link on input datapoint on Fast without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x00)

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 11 02 C7 02 36 02 00 11 22 33 44 55 66 00 02 00 01 01 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=02 00 11 22 33 44 55 66 00 02 00 01 01 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Property Function command Read (with code = 01) --> Read the numbers of links in the device and check them

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 01 00 : FctPropState_Read(ObjIdx=02, PropId=36,
01 00 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 00 05 00 05 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 05 00 05)

###### 7.2.6 RF Multi Extended Group Address Repeated (PID_RF_MULTI_EXT_GA_REPEATED)

 7.2.6.1 Add and remove an extended group address in the repetition table Pre-conditions :

 DUT => Reset to factory

       KNX RF type = Ready

 Purpose of the test :

 Add an extended group address in the repetition table

 Check the returned value : 0xFF (OK)

 Read back the group address using the iterator.

 Check that the extended group address is in the table

 Remove the extended group address from the repetition table

 Check the return code : 00 (ok)

 Read back the repetition table using the iterator

 Check that the extended group address is no more in the repetition table

 PID_RF_MULTI_EXT_GA_REPEATED => Add an extended group address in the repetition table (SN =0x112233445566, GA = 0x4321)

- [RF: 02 SN: 00090040FF03 0][08 04 00 00 00 00] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 66 43 21
: FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 66 43 21 )
- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### Read the repetition table (1 entry)

 Property Function command Read( Object Link Read iterator 0) --> first extended group address

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )

- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 66 43 21 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 66 43 21 )

©C i h 1998 2022 A i i AS 02 02 02 f 14


-----

###### Property Function command Read( Object Link Read iterator 1) --> Shall answer: no more extended group address in the repetition table

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 05 02 C8 02 37 00 01 : FctPropState_Read(ObjIdx=02, PropId=37,
00 01 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### REMOVE THE EXTENDED GROUP ADDRESS

 PID_RF_MULTI_EXT_GA_REPEATED => Remove the added extended group address in the repetition table (SN =0x112233445566, GA = 0x4321)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 0D 02 C7 02 37 01 00 11 22 33 44 55 66 43 21 :
FctPropCmd(ObjIdx=02, PropId=37, Data=01 00 11 22 33 44 55 66 43 21 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### Read the repetition table : 0 entry

 Property Function command Read( Object Link Read iterator 0) --> Shall answer: no more extended group address in the repetition table

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### 7.2.6.2 Add and remove a serial number in the repetition table DUT => Reset to factory

       KNX RF type = Ready

 Purpose of the test :

 Add a serial number in the repetition table

 Check the returned value : 0xFF (OK)

 Read back the serial number using the iterator.

 Check that the serial number is in the table

 Remove the serial number from the repetition table

 Check the return code : 00 (ok)

 Read back the serial number using the iterator

 Check that the serial number is no more in the repetition table

 PID_RF_MULTI_EXT_GA_REPEATED => Add a serial number in the repetition table (SN =0x112233445577, GA = 0x0000)

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 77 00 00 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 77 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### Property Function command Read( Object Link Read iterator 0) --> first serial number

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )
- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 77 00 00 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 77 00 00 )

###### Property Function command Read( Object Link Read iterator 1) --> Shall answer: no more serial number in the repetition table

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 05 02 C8 02 37 00 01 : FctPropState_Read(ObjIdx=02, PropId=37,
00 01 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

©C i h 1998 2022 A i i AS 02 02 02 8 f 14


-----

###### REMOVE THE EXTENDED GROUP ADDRESS

 PID_RF_MULTI_EXT_GA_REPEATED => Remove the added serial number in the repetition table (SN =0x112233445577, GA = 0x0000)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 0D 02 C7 02 37 01 00 11 22 33 44 55 77 00 00 :
FctPropCmd(ObjIdx=02, PropId=37, Data=01 00 11 22 33 44 55 77 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### Read the repetition table : 0 entry

 Property Function command Read( Object Link Read iterator 1) --> Shall answer: no more serial number in the repetition table

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### 7.2.6.3 Add / remove several elements in the repetition table DUT => Reset to factory

       The SIZE of the repetition table is set to 5.

 Purpose of the test :

 Add 5 elements (extended group address or serial number) in the repetition table

 Check the returned value : 0x00 (OK)

 Add another element to the repetition table and check that the returned code is 0xFF (ERR_TABLEFULL)

 Read back the 5 elements using the iterator.

 Check that the last added element is not in the table

 Remove all the elements from the repetition table

 Check the return code : 00 (ok)

 Read back the elements using the iterator

 Check that the repetition table is empty

 PID_RF_MULTI_EXT_GA_REPEATED => Add a serial number in the repetition table (SN =0x112233445577, GA = 0x0000)

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 00] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 77 00 00
: FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 77 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### PID_RF_MULTI_EXT_GA_REPEATED => Add an extended group address in the repetition table (SN =0x112233445566, GA = 0x4321)

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 66 43 21 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 66 43 21 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### PID_RF_MULTI_EXT_GA_REPEATED => Add a serial number in the repetition table (SN =0x112233445588, GA = 0x0000)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 88 00 00 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 88 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### PID_RF_MULTI_EXT_GA_REPEATED => Add an extended group address in the repetition table (SN =0x112233445544, GA = 0x5555)

©C i h 1998 2022 A i i AS 02 02 02 9 f 14


-----

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 44 55 55 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 44 55 55 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### PID_RF_MULTI_EXT_GA_REPEATED => Add a serial number in the repetition table (SN =0x112233445599, GA = 0x0000)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 11 22 33 44 55 99 00 00 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 11 22 33 44 55 99 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 00 : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=00, Data=)

###### PID_RF_MULTI_EXT_GA_REPEATED => Add an extended group address in the repetition table (SN =0x010203040506, GA = 0x1234)

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 0D 02 C7 02 37 00 00 01 02 03 04 05 06 12 34 :
FctPropCmd(ObjIdx=02, PropId=37, Data=00 00 01 02 03 04 05 06 12 34 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### Read the repetition table (5 entry)

 Property Function command Read( Object Link Read iterator 0) --> first serial number

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )

- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 77 00 00 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 77 00 00 )
###### Property Function command Read( Object Link Read iterator 1) --> second entry of the repetition table

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 37 00 01 : FctPropState_Read(ObjIdx=02, PropId=37,
00 01 )

- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 66 43 21 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 66 43 21 )

###### Property Function command Read( Object Link Read iterator 2) --> 3rd entry of the repetition table

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 05 02 C8 02 37 00 02 : FctPropState_Read(ObjIdx=02, PropId=37,
00 02 )

- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 88 00 00 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 88 00 00 )

###### Property Function command Read( Object Link Read iterator 3) --> 4th entry of the repetition table

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 05 02 C8 02 37 00 03 : FctPropState_Read(ObjIdx=02, PropId=37,
00 03 )
- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 44 55 55 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 44 55 55 )

###### Property Function command Read( Object Link Read iterator 4) --> 5th entry of the repetition table

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 05 02 C8 02 37 00 04 : FctPropState_Read(ObjIdx=02, PropId=37,
00 04 )

- [RF: 02 SN: 00090040FF03 4] 1C 60 05FF AFFE 0D 02 C9 02 37 00 00 11 22 33 44 55 99 00 00 :
FctPropState_Rsp(ObjIdx=02, PropId=37, RetCode=00, Data=00 11 22 33 44 55 99 00 00 )

###### Property Function command Read( Object Link Read iterator 5) --> Shall answer: no more serial number in the repetition table

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 37 00 05 : FctPropState_Read(ObjIdx=02, PropId=37,
00 05 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### REMOVE THE EXTENDED GROUP ADDRESS

 PID_RF_MULTI_EXT_GA_REPEATED => Remove all elements from the repetition table 

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 0F 02 C7 02 37 02 00 00 00 00 00 00 00 00 00 00 00 :
FctPropCmd(ObjIdx=02, PropId=37, Data=02 00 00 00 00 00 00 00 00 00 00 00 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### Read the repetition table : 0 entry

©C i h 1998 2022 A i i AS 02 02 02 80 f 14


-----

###### Property Function command Read( Object Link Read iterator 1) --> Shall answer: no more serial number in the repetition table

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 05 02 C8 02 37 00 00 : FctPropState_Read(ObjIdx=02, PropId=37,
00 00 )

- [RF: 02 SN: 00090040FF03 1] 1C 60 05FF AFFE 04 02 C9 02 37 FF : FctPropState_Rsp(ObjIdx=02, PropId=37,
RetCode=FF, Data=)

###### 7.2.7 Compatibility between RF 1.1, RF1.R, RF1.M

 7.2.7.1 Compatibility between RF 1.1 and RF1.R Pre-conditions :

   DUT => reset to factory

   Serial Number of DUT : 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   PID_RF_MULTI_CALL_CHANNEL is set with F1 and S1 capacities

   DUT contains a light actuator channel scene containing the following datapoints : OnOff(1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

   DUT has a link table of size 5.

 ==================== TEST SCRIPT =====================

 Purpose of the test :

 Set the RF Multi device in RF Ready mode.

 Add one link on input datapoint using the PID_OBJECT_LINK function property command : check that the result is OK (0x00).

 Add one link on output datapoint using the PID_OBJECT_LINK function property command : check that the result is OK (0x00).

 Check that an emitted frame on RF 1.1 is correctly understood by DUT (in RF Ready mode).

 Check that the DUT sends the correct frame using RF Ready format.

 Add one link on input datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Check that an emitted frame on RF 1.1 is correctly understood by DUT (in RF Ready mode).

 Check that the DUT sends the correct frame using RF Ready format.

 Writing the value of KNX RF type => Ready

- [RF: 02 SN: 00090040FF03 0][08 04 01 FF 00 01] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 00 :
PropertyValueWrite(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 00 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

###### PID_OBJECT_LINK => Set RF link on OnOff datapoint (SN =0x112233445566, GA = 0x0008, Obj Handle = 0x0001)

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 0F 02 C7 00 3F 00 00 11 22 33 44 55 66 00 08 00 01 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=00 00 11 22 33 44 55 66 00 08 00 01 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

©C i h 1998 2022 A i i AS 02 02 02 81 f 14


-----

###### PID_OBJECT_LINK => Set RF link on InfoOnOff datapoint (SN =00090040ff03, GA = 0x0009, Obj Handle = 0x0005)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 0F 02 C7 00 3F 00 00 00 09 00 40 FF 03 00 09 00 05 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=00 00 00 09 00 40 FF 03 00 09 00 05 )

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

###### Check that DUT correctly understand the command for switching ON using RF 1.1 (Preamble with 1 ms = 16 number of sequences of "01" chips)

 And correctly sends the InfoOnOff datapoint value

- [RF: 00 SN: 112233445566 0][08 04 01 FF 00 00 09 03 00 10 00] 2C E0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 0C E0 05FF 0009 01 00 81 : DPT 1.xxx Boolean (switch on)
###### remove links

 PID_OBJECT_LINK => Set RF link on OnOff datapoint (SN =0x112233445566, GA = 0x0008, Obj Handle = 0x0001)

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 3C 60 AFFE 05FF 0F 02 C7 00 3F 01 00 11 22 33 44 55 66 00 08
00 01 : FctPropCmd(ObjIdx=00, PropId=3F, Data=01 00 11 22 33 44 55 66 00 08 00 01 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 00 3F 00 : FctPropState_Rsp(ObjIdx=00, PropId=3F,
RetCode=00, Data=)

###### PID_OBJECT_LINK => Set RF link on InfoOnOff datapoint (SN =00090040ff03, GA = 0x0009, Obj Handle = 0x0005)

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 0F 02 C7 00 3F 01 00 00 09 00 40 FF 03 00 09 00 05 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=01 00 00 09 00 40 FF 03 00 09 00 05 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on OnOff datapoint on RF Ready Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x04, FA = 0x00)

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02
00 01 04 00 : FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 04 00 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on InfoOnOff datapoint on RF Ready Fast without FA (SN =00090040ff03, GA = 0x0003, Obj Handle = 0x0005, Physical features = 0x04, FA = 0x00)

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 03 00 05 04 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 00 40 FF 03 00 03 00 05 04 00 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Check that DUT correctly understand the command for switching ON using RF 1.1 (Preamble with 1 ms = 16 number of sequences of "01" chips)

 And correctly sends the InfoOnOff datapoint value

- [RF: 00 SN: 112233445566 1][08 04 01 00 00 01 09 03 00 10 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean
(switch off)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 0C E0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

###### 7.2.7.2 Compatibility between RF1.R and RF1.M The tests would also apply for the other RFx.R and RFx.M devices according to vol. 3.2.5 clause 9.

 Pre-conditions :

   DUT => reset to factory

   Serial Number of DUT : 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

©C i h 1998 2022 A i i AS 02 02 02 82 f 14


-----

######   PID_RF_MULTI_CALL_CHANNEL is set with F1 and S1 capacities

   DUT contains a light actuator channel scene containing the following datapoints : OnOff(1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

   DUT has a link table of size 5.

 Purpose of the test :

 Set the RF Multi device in RF Multi mode.

 Add one link on input datapoint using the PID_OBJECT_LINK function property command : check that the result is OK (0x00).

 Add one link on output datapoint using the PID_OBJECT_LINK function property command : check that the result is OK (0x00).

 Check that an emitted frame on RF Ready is correctly understood by DUT.

 Check that the DUT sends the correct frame using RF Ready format.

 Add one link on input datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Check that an emitted frame on RF Ready is correctly understood by DUT.

 Check that the DUT sends the correct frame using RF Ready format.

 Writing the value of KNX RF type => Ready

- [RF: 02 SN: 00090040FF03 0][08 04 01 FF 00 01] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 00 :
PropertyValueWrite(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 00 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=00 )

###### PID_OBJECT_LINK => Set RF link on OnOff datapoint (SN =0x112233445566, GA = 0x0008, Obj Handle = 0x0001)

- [RF: 02 SN: 00090040FF03 1] 3C 60 AFFE 05FF 0F 02 C7 00 3F 00 00 11 22 33 44 55 66 00 08 00 01 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=00 00 11 22 33 44 55 66 00 08 00 01 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

###### PID_OBJECT_LINK => Set RF link on InfoOnOff datapoint (SN =DUT SN, GA = 0x0009, Obj Handle = 0x0005)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 0F 02 C7 00 3F 00 00 00 09 11 22 33 44 00 09 00 05 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=00 00 00 09 11 22 33 44 00 09 00 05 )

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

###### Check that DUT correctly understand the command for switching ON using RF Ready

 And correctly sends the InfoOnOff datapoint value

- [RF: 00 SN: 112233445566 0][08 04 01 FF 00 01] 2C E0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 0C E0 05FF 0009 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Remove the two links

 PID_OBJECT_LINK => Set RF link on OnOff datapoint (SN =0x112233445566, GA = 0x0008, Obj Handle = 0x0001)

- [RF: 02 SN: 00090040FF03 3][08 04 01 FF 00 01] 3C 60 AFFE 05FF 0F 02 C7 00 3F 01 00 11 22 33 44 55 66 00 08
00 01 : FctPropCmd(ObjIdx=00, PropId=3F, Data=01 00 11 22 33 44 55 66 00 08 00 01 )

- [RF: 02 SN: 00090040FF03 3] 1C 60 05FF AFFE 04 02 C9 00 3F 00 : FctPropState_Rsp(ObjIdx=00, PropId=3F,
RetCode=00, Data=)

###### PID_OBJECT_LINK => Set RF link on InfoOnOff datapoint (SN =DUT SN, GA = 0x0009, Obj Handle = 0x0005)

©C i h 1998 2022 A i i AS 02 02 02 83 f 14


-----

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 0F 02 C7 00 3F 01 00 00 09 11 22 33 44 00 09 00 05 :
FctPropCmd(ObjIdx=00, PropId=3F, Data=01 00 00 09 11 22 33 44 00 09 00 05 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F 00 :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=)

###### RF MULTI

 PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on OnOff datapoint on RF Ready Fast without FA  (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x04, FA = 0x00)

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02 00 01 04 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 04 00 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on InfoOnOff datapoint on RF Ready Fast without FA (SN =DUT SN, GA = 0x0003, Obj Handle = 0x0005, Physical features = 0x04, FA = 0x00)

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 11 22 33 44 00 03 00 05 04 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 11 22 33 44 00 03 00 05 04 00 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Check that DUT correctly understand the command for switching ON using RF Ready.

 And correctly sends the InfoOnOff datapoint value

- [RF: 00 SN: 112233445566 1][08 04 01 FF 00 07] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 0C E0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

###### 7.2.7.3 Compatibility between RF1.M and RF1.M The tests would also apply for the other RFx.M and RFx.M devices according to vol. 3.2.5 clause 9.

 Purpose of the test :

 Set the RF Multi device in RF Multi mode.

 Add one link on input datapoint in Slow mode using the PID_RF_MULTI_LINK function property command (with Sx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint in Slow mode using the PID_RF_MULTI_LINK function property command (with Sx bit set in Physical Features) : check that the result is also ok (00).

 Check that an emitted frame on Multi with Sx is correctly understood by DUT.

 Check that the DUT sends the correct frame using RF Multi Sx format.

 Writing the value of KNX RF type => Multi

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 01 : PropertyValueWrite(Obj=02, Prop=33,
Count=1, Start=001, Data=01 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 01 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=01 )

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on OnOff datapoint on Slow mode without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x02, FA = 0x00)

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02 00 01 02 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 02 00 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on InfoOnOff datapoint on Slow mode without FA  (SN = 00090040ff03, GA = 0x0003, Obj Handle = 0x0005, Physical features = 0x02, FA = 0x00)

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 03 00 05 02 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 00 40 FF 03 00 03 00 05 02 00 )

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Check that DUT correctly understand the command for switching ON using RF Sx

 And correctly sends the InfoOnOff datapoint value using Sx

©C i h 1998 2022 A i i AS 02 02 02 84 f 14


-----

- [RF: 00 SN: 112233445566 0][08 04 05 00 00 05] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 00 05] 0C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

###### 7.2.8 Configuration with mixed links Pre-conditions :

   DUT => reset to factory

   Serial Number of DUT : 00090040ff03

   PID_RF_MULTI_TYPE is set to RF Multi

   PID_PHYSICAL_FEATURES is set with all capabilities : FA:yes, TX Fx:yes, TX Sx:yes, RX Fx : yes, RX Sx : yes ==> 0x1F

   PID_RF_MULTI_CALL_CHANNEL is set with F1 and S1 capacities

   DUT contains a light actuator channel scene containing the following datapoints : OnOff(1), TimedStartStop(2), Forced(3), Scene Number(4), InfoOnOff(5)

   DUT has a link table of size 5.

 Purpose of the test :

 Set the RF Multi device in RF Multi mode.

 Ready :

 Add one link on input datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint using the PID_RF_MULTI_LINK function property command (with RF Ready bit set in Physical Features) : check that the result is also ok (00).

 Check that an emitted frame on RF Ready is correctly understood by DUT.

 Check that the DUT sends the correct frame using RF Ready format.

 Multi Fast :

 Add one link on input datapoint in Fast mode using the PID_RF_MULTI_LINK function property command (with Fx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on input datapoint in Fast mode using the PID_RF_MULTI_LINK function property command with FA slot n°10 (with Fx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint in Fast mode using the PID_RF_MULTI_LINK function property command (with Fx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint in Fast mode using the PID_RF_MULTI_LINK function property command with FA slot n° 10(with Fx bit set in Physical Features) : check that the result is also ok (00).

 Check that emitted frame on Multi with Fx are correctly understood by DUT.

 Check that the DUT sends the correct frame using RF Multi Fx format.

 Multi Slow

 Add one link on input datapoint in Slow mode using the PID_RF_MULTI_LINK function property command (with Sx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on input datapoint in Slow mode using the PID_RF_MULTI_LINK function property command with FA slot n° 10 (with Sx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint in Slow mode using the PID_RF_MULTI_LINK function property command (with Sx bit set in Physical Features) : check that the result is also ok (00).

 Add one link on output datapoint in Slow mode using the PID_RF_MULTI_LINK function property command with FA slot n° 10(with Sx bit set in Physical Features) : check that the result is also ok (00).

 Check that emitted frame on Multi with Sx are correctly understood by DUT.

©C i h 1998 2022 A i i AS 02 02 02 85 f 14


-----

###### Check that the DUT sends the correct frame using RF Multi Sx format.

 Writing the value of KNX RF type => Multi

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 00] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 01 :

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 01 :

###### Check that the DUT is able to do everything

 Reading the value of flags of KNX RF Multi device =>1F

- [RF: 02 SN: 00090040FF03 5] 3C 60 AFFE 05FF 05 03 D5 02 34 10 01 :

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 34 10 01 1F :

###### Add RF Multi link on OnOff datapoint on Fast, Slow and Ready mode without FA (SN =0x112233445566, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x07, FA = 0x00)

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 66 00 02 00 01 07 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 66 00 02 00 01 07 00 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Add RF Multi link on InfoOnOff datapoint on Fast, Slow and Ready mode without FA (SN =00090040ff03, GA = 0x0003, Obj Handle = 0x0005, Physical features = 0x07, FA = 0x00)

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 03 00 05 07 00 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 00 40 FF 03 00 03 00 05 07 00 )

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Check the links : read 2 links using iterators 

 Property Function command Read( Object Link Read iterator 0) --> OnOff link without fast ack

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 07 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 07 00 )

###### Property Function command Read( Object Link Read iterator 1) --> InfoOnOff link without fast ack

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 03 00 03
00 05 07 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 03 00 03 00 05 07 00 )

###### Property Function command Read( Object Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 4] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### WITHOUT FAST ACK

 Check that DUT correctly understand the command for switching ON using RF Sx

 And correctly sends the InfoOnOff datapoint value

 F1 Ready frame is send at first.

 F1 (multi) frame is then sent.

 Last frame is Sx frame.

- [RF: 00 SN: 112233445566 0][08 04 05 00 00 09] 2C A0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 5][08 04 05 00 00 01] 0C E0 05FF 0003 01 00 81 :

- [RF: 02 SN: 00090040FF03 5][08 04 05 00 00 02] 0C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 5][08 04 05 00 00 05] 0C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)
###### Check that DUT correctly understand the command for switching OFF using RF Fx

 And correctly sends the InfoOnOff datapoint value

 F1 Ready frame is send at first

 F1 (multi) frame is then sent

©C i h 1998 2022 A i i AS 02 02 02 86 f 14


-----

###### Last frame is Sx frame.

- [RF: 00 SN: 112233445566 1][08 04 02 00 00 09] 2C A0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 6][08 04 02 00 00 01] 0C E0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 6][08 04 02 00 00 02] 0C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 6][08 04 02 00 00 05] 0C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)
###### Check that DUT correctly understand the command for switching ON using RF Ready

 And correctly sends the InfoOnOff datapoint value

 F1 Ready frame is send at first

 F1 (multi) frame is then sent

 Last frame is Sx frame.

- [RF: 00 SN: 112233445566 2][08 04 01 00 00 09] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 01] 0C E0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 02] 0C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 7][08 04 01 00 00 05] 0C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

###### WITH FAST ACK

 Writing the value of KNX RF type => Multi

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 00] 3C 60 AFFE 05FF 06 03 D7 02 33 10 01 01 :
PropertyValueWrite(Obj=02, Prop=33, Count=1, Start=001, Data=01 )

- [RF: 02 SN: 00090040FF03 3][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 33 10 01 01 :
PropertyValueResponse(Obj=02, Prop=33, Count=1, Start=001, Data=01 )

###### Check that the DUT is able to do everything

 Reading the value of flags of KNX RF Multi device =>1F

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 3C 60 AFFE 05FF 05 03 D5 02 34 10 01 :
PropertyValueRead(Obj=02, Prop=34, Count=1, Start=001)

- [RF: 02 SN: 00090040FF03 4][08 04 01 00 00 01] 1C 60 05FF AFFE 06 03 D6 02 34 10 01 1F :
PropertyValueResponse(Obj=02, Prop=34, Count=1, Start=001, Data=1F )

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on OnOff datapoint on Fast mode with FA (SN =0x112233445577, GA = 0x0002, Obj Handle = 0x0001, Physical features = 0x01, FA = 0x49)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 77 00 02 00 01 01 49 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 77 00 02 00 01 01 49 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on OnOff datapoint on Slow mode with FA (SN =0x112233445577, GA = 0x0004, Obj Handle = 0x0001, Physical features = 0x02, FA = 0x49)

- [RF: 02 SN: 00090040FF03 2] 3C 60 AFFE 05FF 11 02 C7 02 36 00 00 11 22 33 44 55 77 00 04 00 01 02 49 :
FctPropCmd(ObjIdx=02, PropId=36, Data=00 00 11 22 33 44 55 77 00 04 00 01 02 49 )

- [RF: 02 SN: 00090040FF03 5][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on InfoOnOff datapoint on Fast mode with FA (SN =00090040ff03, GA = 0x0003, Obj Handle = 0x0005, Physical features = 0x01, FA = 0x49)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 03 00 05 01 49 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 00 40 FF 03 00 03 00 05 01 49 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### PID_RF_MULTI_OBJECT_LINK => Set RF Multi link on InfoOnOff datapoint on Slow mode with FA  (SN =00090040ff03, GA = 0x0005, Obj Handle = 0x0003, Physical features = 0x02, FA = 0x49)

- [RF: 02 SN: 00090040FF03 3] 3C 60 AFFE 05FF 11 02 C7 02 36 01 00 00 09 00 40 FF 03 00 03 00 05 02 49 :
FctPropCmd(ObjIdx=02, PropId=36, Data=01 00 00 09 00 40 FF 03 00 03 00 05 02 49 )

- [RF: 02 SN: 00090040FF03 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 00 :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=)

###### Check the links : read 4 links  

 Property Function command Read( Object Link Read iterator 0) --> OnOff link with fast ack

©C i h 1998 2022 A i i AS 02 02 02 8 f 14


-----

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 : FctPropState_Read(ObjIdx=02, PropId=36,
00 00 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 77 00 02
00 01 01 49 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 77 00 02 00 01 01 49 )

###### Property Function command Read( Object Link Read iterator 1) --> OnOff link with fast ack

- [RF: 02 SN: 00090040FF03 6] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 00090040FF03 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 77 00 04
00 01 02 49 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 77 00 04 00 01 02 49 )

###### Property Function command Read( Object Link Read iterator 2) --> InfoOnOff link with fast ack

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 03 00 03
00 05 01 49 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 03 00 03 00 05 01 49 )

###### Property Function command Read( Object Link Read iterator 3) --> InfoOnOff link with fast ack

- [RF: 02 SN: 00090040FF03 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 03 : FctPropState_Read(ObjIdx=02, PropId=36,
00 03 )

- [RF: 02 SN: 00090040FF03 1][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 03 00 03
00 05 02 49 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 03 00 03 00 05 02 49 )

###### Property Function command Read( Object Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF03 0] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 : FctPropState_Read(ObjIdx=02, PropId=36,
00 04 )

- [RF: 02 SN: 00090040FF03 2][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)
###### Check that DUT correctly understand the command for switching ON using RF Sx

 And correctly sends the InfoOnOff datapoint value

 F1 (multi) frame is then sent

 Last frame is Sx frame.

- [RF: 00 SN: 112233445577 0][08 04 05 00 0A 09] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00] 2C A0 AFFE 0004 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 02] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 03] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 04] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 05] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 06] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF03 0][08 04 05 00 0A 05] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Check that DUT correctly understand the command for switching OFF using RF Fx

 And correctly sends the InfoOnOff datapoint value

 F1 (multi) frame is then sent

 Last frame is Sx frame.

- [RF: 00 SN: 112233445577 3][08 04 02 00 0A 09] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 02] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 03] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 04] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 05] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

©C i h 1998 2022 A i i AS 02 02 02 88 f 14


-----

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 06] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF03 0][08 04 02 00 0A 05] [0A 14 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00] 2C A0 05FF 0003 01 00 80 : DPT 1.xxx Boolean (switch off)

##### 7.3 Push-button

###### 7.3.1 Linking actuator The aim is to link a sensor (EITT4) to an actuator (DUT) with various combinations of features.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

 no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 89 f 14


-----

###### RX Features

 no FA, no RX Sx, no RX Fx case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x

 no FA, no RX Sx, RX Fx case 2_1 case 2_2 case 2_3 case 2_4 case 2_5 case 2_6 case 2_7 case 2_8 case 2_9

 no FA, RX Sx, no RX Fx case 3_1 case 3_2 case 3_3 case 3_4 case 3_5 case 3_6 case 3_7 case 3_8 case 3_9

 no FA, RX Sx, RX Fx case 4_1 case 4_2 case 4_3 case 4_4 case 4_5 case 4_6 case 4_7 case 4_8 case 4_9
 DUT =  1 native
 FA, no RX Sx, no RX Fx case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x
 RF Multi Actuator case 6_7 case 6_9
 FA, no RX Sx, RX Fx case 6_1 case 6_2 case 6_3 case 6_4 case 6_5 case 6_6 (FA) case 6_8 (FA)

 case 7_8 case 7_9
 FA, RX Sx, no RX Fx case 7_1 case 7_2 case 7_3 case 7_4 case 7_5 case 7_6 case 7_7 (FA) (FA)

 case 8_7 case 8_8 case 8_9
 FA, RX Sx, RX Fx case 8_1 case 8_2 case 8_3 case 8_4 case 8_5 case 8_2 (FA) (FA) (FA)

 Sx link

 Fx link

 Ready link

 no link

©C i h 1998 2022 A i i AS 02 02 02 90 f 14

|TX<br>Features<br>RX Features|Col2|Col3|EITT4 = 1 sensor<br>(output datapoint)|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|
|---|---|---|---|---|---|---|---|---|---|---|---|
|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**Native**<br>**RF Ready**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|**Native RF Multi**|
|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**||no FA<br>no TX Sx<br>no TX Fx|no FA<br>no TX Sx<br>**TX Fx**|no FA<br>**TX Sx** <br>no TX Fx|no FA<br>**TX Sx**<br>**TX Fx**|**FA** <br>no TX Sx<br>no TX Fx|**FA** <br>no TX Sx<br>**TX Fx**|**FA** <br>**TX Sx** <br>no TX Fx|**FA** <br>**TX Sx** <br>**TX Fx**|
|**TX**<br>**Features**<br>**RX Features**|**RX Features**|||||||||||
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|no FA, no RX Sx, no RX<br>Fx||case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|no FA, no RX Sx,**RX Fx**||case 2_1|case 2_2|case 2_3|case 2_4|case 2_5|case 2_6|case 2_7|case 2_8|case 2_9|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|no FA,**RX Sx**, no RX Fx||case 3_1|case 3_2|case 3_3|case 3_4|case 3_5|case 3_6|case 3_7|case 3_8|case 3_9|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|no FA,**RX Sx**, **RX Fx**||case 4_1|case 4_2|case 4_3|case 4_4|case 4_5|case 4_6|case 4_7|case 4_8|case 4_9|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|**FA**, no RX Sx, no RX Fx||case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|**FA**, no RX Sx,**RX Fx**||case 6_1|case 6_2|case 6_3|case 6_4|case 6_5|case 6_6|case 6_7<br>(FA)|case 6_8|case 6_9<br>(FA)|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|**FA**, **RX Sx**, no RX Fx||case 7_1|case 7_2|case 7_3|case 7_4|case 7_5|case 7_6|case 7_7|case 7_8<br>(FA)|case 7_9<br>(FA)|
|**DUT =**<br>**1 native**<br>**RF Multi**<br>**Actuator**|**FA**, **RX Sx**, **RX Fx**||case 8_1|case 8_2|case 8_3|case 8_4|case 8_5|case 8_2|case 8_7<br>(FA)|case 8_8<br>(FA)|case 8_9<br>(FA)|


-----

###### 7.3.1.1 Linking actuator: case 4_9 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:no, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x0F

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 07 00 00 00] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 0F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0F 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

©C i h 1998 2022 A i i AS 02 02 02 91 f 14


-----

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Fx

- [RF: 02 SN: 00090040FF02 1] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 : FctPropState_Read(ObjIdx=02, PropId=36,
00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 : FctPropState_Read(ObjIdx=02, PropId=36,
00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 6][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 7][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 0] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 0F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0F 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.1.2 Linking actuator: case 6_3 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x1D

   DUT Serial Number = 00090040ff02

©C i h 1998 2022 A i i AS 02 02 02 92 f 14


-----

######   EITT4: Sensor  Capacities: FA:no, TX Sx:no, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x04

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 04 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 04 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )
###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 01 00 )

©C i h 1998 2022 A i i AS 02 02 02 93 f 14


-----

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 6][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 7][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 04 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 04 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 4] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.1.3 Linking actuator: case 6_5 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x1D

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:no, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x0C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

©C i h 1998 2022 A i i AS 02 02 02 94 f 14


-----

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT to ON

©C i h 1998 2022 A i i AS 02 02 02 95 f 14


-----

- [RF: 00 SN: 112233445566 6][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 7][08 04 07 FF 00 09] 2C A0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0C 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 FF 00 01] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.1.4 Linking actuator: case 6_9 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x1D

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

©C i h 1998 2022 A i i AS 02 02 02 96 f 14


-----

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA Slot=FF, Switch OnOff GA=0000)

 A=>S Link resp (link added FA Slot=FF GA=0000)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF02 4] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

###### S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

 A=>S Link resp (link added FA Slot=00 GA=0000)

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

©C i h 1998 2022 A i i AS 02 02 02 9 f 14


-----

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Fx with FA

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 01 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx with Fast Ack requested telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 0][08 04 07 FF 01 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 00 SN: 00090040FF02 0] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx with Fast Ack requested telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 1][08 04 07 FF 01 09] 2C A0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF02 0] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 2][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

©C i h 1998 2022 A i i AS 02 02 02 98 f 14


-----

###### 7.3.1.5 Linking actuator: case 7_5 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no --> 0x1E

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:no, TX Sx:yes, TX Fx:no, RX Sx:no, RX Fx:no --> 0x0C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

S=>A Stop link with no error

A=>S Quit config mode

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

©C i h 1998 2022 A i i AS 02 02 02 99 f 14


-----

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Sx

- [RF: 02 SN: 00090040FF02 1][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 02 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 02 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 08 00 00 05] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Sx telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 6][08 04 08 FF 00 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 08 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Sx telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 7][08 04 08 FF 00 09] 2C A0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 08 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0C 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 08 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 08 00 00 05] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

©C i h 1998 2022 A i i AS 02 02 02 100 f 14


-----

###### 7.3.1.6 Linking actuator: case 7_9 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT: Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no --> 0x1E

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA Slot=FF, Switch OnOff GA=0000)

 A=>S Link resp (link added FA Slot=FF GA=0000)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 00 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

©C i h 1998 2022 A i i AS 02 02 02 101 f 14


-----

###### S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

 A=>S Link resp (link added FA Slot=00 GA=0000)

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Sx with FA

- [RF: 02 SN: 00090040FF02 1][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 1][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 02 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 02 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 2][08 04 08 00 00 05] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Sx telegram to switch the DUT to ON with 1 expected FA

- [RF: 00 SN: 112233445566 0][08 04 08 FF 01 09] 2C A0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 00 SN: 00090040FF02 0] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Sx telegram to switch the DUT to OFF with 1 expected FA

- [RF: 00 SN: 112233445566 1][08 04 08 FF 01 09] 2C E0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF02 0] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 2][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

©C i h 1998 2022 A i i AS 02 02 02 102 f 14


-----

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 08 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 08 00 00 05] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.1.7 Linking actuator: case 8_1 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x1F

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  native Ready sensor

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 ► [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

©C i h 1998 2022 A i i AS 02 02 02 103 f 14


-----

###### A=>S Link resp (link added CC=01 GA=0008)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF02 0][08 04 01 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 04 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF02 1][08 04 01 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 04 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 01 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Ready telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 5][08 04 01 FF 00 09] 2C E0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 6][08 04 01 FF 00 09] 2C E0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 7][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

- [RF: 02 SN: 00090040FF02 2] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 0] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- F: 02 SN: 00090040FF02 4] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

©C i h 1998 2022 A i i AS 02 02 02 104 f 14


-----

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.1.8 Linking actuator: case 8_4 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Receiver Capacities: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x1F

   DUT Serial Number = 00090040ff02

   EITT4: Sensor  Capacities: FA:no, TX Sx:yes, TX Fx:no, RX Sx:no, RX Fx:no --> 0x08

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel 

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 08 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 08 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=1007)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0008)

 A=>S Link resp (link added CC=01 GA=0008)

©C i h 1998 2022 A i i AS 02 02 02 105 f 14


-----

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 08 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Sx

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 03 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 08
00 01 02 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 08 00 01 02 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Sx telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 6][08 04 08 FF 00 09] 2C E0 AFFE 0008 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 08 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Sx telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 7][08 04 08 FF 00 09] 2C E0 AFFE 0008 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 2][08 04 08 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 08 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 08 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 10 07 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 10 07 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 02 00 05 )

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 08 )

©C i h 1998 2022 A i i AS 02 02 02 106 f 14


-----

- [RF: 02 SN: 00090040FF02 5] 0C E0 05FF 0000 08 03 E4 00 00 3B 92 01 00 08 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=92 01 00 08 )

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

- [RF: 02 SN: 00090040FF02 3][08 04 07 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### 7.3.2 Linking sensor The aim is to link a sensor (DUT) to an actuator (EITT4) with various combinations of features.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

 no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 10 f 14


-----

###### TX Features

 no FA, no TX Sx, no TX Fx case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x case 1_x

 no FA, no TX Sx, TX Fx case 2_1 case 2_2 case 2_3 case 2_4 case 2_5 case 2_6 case 2_7 case 2_8 case 2_9

 no FA, TX Sx, no TX Fx case 3_1 case 3_2 case 3_3 case 3_4 case 3_5 case 3_6 case 3_7 case 3_8 case 3_9
 DUT = 
 no FA, TX Sx, TX Fx case 4_1 case 4_2 case 4_3 case 4_4 case 4_5 case 4_6 case 4_7 case 4_8 case 4_9
 1 native
 FA, no TX Sx, no TX Fx case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x case 5_x
 RF Multi case 6_7 case 6_9 Sensor FA, no TX Sx, TX Fx case 6_1 case 6_2 case 6_3 case 6_4 case 6_5 case 6_6 (FA) case 6_8 (FA)

 case 7_8 case 7_9
 FA, TX Sx, no TX Fx case 7_1 case 7_2 case 7_3 case 7_4 case 7_5 case 7_6 case 7_7 (FA) (FA)

 case 8_7 case 8_8 case 8_9
 FA, TX Sx, TX Fx case 8_1 case 8_2 case 8_3 case 8_4 case 8_5 case 8_6 (FA) (FA) (FA)

 Sx link

 Fx link

 Ready link

 no link

 (FA) : means that the Fast Acknowledge is managed in the link

©C i h 1998 2022 A i i AS 02 02 02 108 f 14

|RX<br>Featur<br>es<br>TX Features|Col2|Col3|EITT4 = 1 actuator<br>(input datapoint)|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|
|---|---|---|---|---|---|---|---|---|---|---|---|
|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**Native**<br>**RF**<br>**Ready**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|**Native**<br>**RF Multi (RX features)**|
|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**RX**<br>**Featur**<br>**es**||no FA<br>no RX Sx<br>no RX Fx|no FA<br>no RX Sx<br>**RX Fx**|no FA<br>**RX Sx** <br>no RX Fx|no FA<br>**RX Sx**<br>**RX Fx**|**FA** <br>no RX Sx<br>no RX Fx|**FA** <br>no RX Sx<br>**RX Fx**|**FA** <br>**RX Sx** <br>no RX Fx|**FA** <br>**RX Sx** <br>**RX Fx**|
|**RX**<br>**Featur**<br>**es**<br>**TX Features**|**TX Features**|||||||||||
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|no FA, no TX Sx, no TX<br>Fx||case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|case 1_x|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|no FA, no TX Sx,**TX Fx**||case 2_1|case 2_2|case 2_3|case 2_4|case 2_5|case 2_6|case 2_7|case 2_8|case 2_9|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|no FA,**TX Sx**, no TX Fx||case 3_1|case 3_2|case 3_3|case 3_4|case 3_5|case 3_6|case 3_7|case 3_8|case 3_9|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|no FA,**TX Sx**, **TX Fx**||case 4_1|case 4_2|case 4_3|case 4_4|case 4_5|case 4_6|case 4_7|case 4_8|case 4_9|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|**FA**, no TX Sx, no TX Fx||case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|case 5_x|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|**FA**, no TX Sx,**TX Fx**||case 6_1|case 6_2|case 6_3|case 6_4|case 6_5|case 6_6|case 6_7<br>(FA)|case 6_8|case 6_9<br>(FA)|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|**FA**, **TX Sx**, no TX Fx||case 7_1|case 7_2|case 7_3|case 7_4|case 7_5|case 7_6|case 7_7|case 7_8<br>(FA)|case 7_9<br>(FA)|
|**DUT =**<br>**1 **<br>**native**<br>**RF**<br>**Multi**<br>**Sensor**|**FA**, **TX Sx**, **TX Fx**||**case 8_1**|case 8_2|**case 8_3**|**case 8_4**|**case 8_5**|case 8_6|**case 8_7**<br>**(FA)**|**case 8_8**<br>**(FA)**|case 8_9<br>(FA)|


-----

###### 7.3.2.1 Linking sensor: case 8.1 =========== TEST SETUP ================

 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  native Ready

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 112233445566 1][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 04 00 )

©C i h 1998 2022 A i i AS 02 02 02 109 f 14


-----

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 04 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Ready mode.

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### 7.3.2.2 Linking sensor: case 8.3 --------------------------------------
 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  FA:no, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x0D

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0D 00 00 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

©C i h 1998 2022 A i i AS 02 02 02 110 f 14


-----

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 1][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Multi Fx mode.

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 02] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### 7.3.2.3 Linking sensor: case 8.4 =========== TEST SETUP ================

 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  FA:no, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no --> 0x0E

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

©C i h 1998 2022 A i i AS 02 02 02 111 f 14


-----

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0E 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Sx

- [RF: 02 SN: 112233445566 1] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 02 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 02 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

©C i h 1998 2022 A i i AS 02 02 02 112 f 14


-----

###### Press the Push-Button of the DUT.

 A telegram is sent in Multi Sx mode.

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 05] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### 7.3.2.4 Linking sensor: case 8.5 =========== TEST SETUP ================

 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  FA:no, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x0F

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 0F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0F 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

©C i h 1998 2022 A i i AS 02 02 02 113 f 14


-----

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Fx

- [RF: 02 SN: 112233445566 1] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Multi Fx mode.



- [RF: 02 SN: 112233445566 0][08 04 01 00 00 02] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)



- [RF: 02 SN: 112233445566 1][08 04 01 00 00 02] 0C A0 05FF 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

###### 7.3.2.5 Linking sensor: case 8.7 =========== TEST SETUP ================

 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x1D

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

©C i h 1998 2022 A i i AS 02 02 02 114 f 14


-----

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(no FA Slot=FF, Switch OnOff status with GA=0000)

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

###### A=>S Link resp (link added FA Slot=FF GA=0000)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

###### A=>S Link resp (link added FA Slot=000 GA=0000)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

-  06:31:10.8 [RF: 02 SN: 00090040FF02 7] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 1][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Fx with Ack Slot=00

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

©C i h 1998 2022 A i i AS 02 02 02 115 f 14


-----

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 01 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Multi Fx mode with one Fast Ack requested.

- [RF: 02 SN: 112233445566 6][08 04 01 00 01 02][0A 02 01 00] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

###### 7.3.2.6 Linking sensor: case 8.8 =========== TEST SETUP ================

 DUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 00090040ff02

   EITT4: Actuator Reception Features:  FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no --> 0x1E

   EITT4 Serial Number = 112233445566

 =======================================

 Linking Sensor

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(no FA Slot=FF, Switch OnOff status with GA=0000)

©C i h 1998 2022 A i i AS 02 02 02 116 f 14


-----

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

###### A=>S Link resp (link added FA Slot=FF GA=0000)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

###### A=>S Link resp (link added FA Slot=000 GA=0000)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 7] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 1][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi x with Ack Slot=00

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 02 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 02 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Multi Sx mode with one Fast Ack requested.

- [RF: 02 SN: 112233445566 6][08 04 01 00 01 05][0A 02 01 00] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

©C i h 1998 2022 A i i AS 02 02 02 11 f 14


-----

###### 7.3.3 Linking 2 actuators The aim is to link 2 actuators (DUT1 and DUT2) to a sensor (EITT4) with various combinations of features.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

 no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 118 f 14


-----

###### RX Features

 DUT1 : Native Ready

 DUT2: Multi: no FA, RX Sx, no RX Fx case 1_1 case 1_2 case 1_3 case 1_4 case 1_5

 DUT1 : Native Ready
 2 DUTs =  1 x native
 DUT2: Multi: no FA, no RX Sx, RX Fx case 2_1 case 2_2 case 2_3 case 2_4 case 2_5
 RF Ready + 
 1 x Multi
 DUT1 : Native Ready
 Actuator (input
 DUT2 : Multi: FA, RX Sx, no RX Fx case 3_1 case 3_2 case 3_3 case 3_4 case 3_5 (FA)
 datapoint)

 DUT1 : Native Ready

 DUT2 : Multi: FA, no RX Sx, RX Fx case 4_1 case 4_2 case 4_3 (FA) case 4_4 case 4_5 (FA)

 Sx link

 Fx link

 Ready link

 no link

 (FA) : means that the Fast Acknowledge is managed in the link

©C i h 1998 2022 A i i AS 02 02 02 119 f 14

|TX<br>Features<br>RX Features|Col2|Col3|EITT4 = 1 sensor<br>(output datapoint)|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**native**<br>**RF Ready**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|
|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**<br>**RX Features**|**TX**<br>**Features**||**FA** <br>no TX Sx<br>no TX Fx|**FA** <br>no TX Sx<br>**TX Fx**|**FA** <br>**TX Sx** <br>no TX Fx|**FA** <br>**TX Sx** <br>**TX Fx**|
|**TX**<br>**Features**<br>**RX Features**|**RX Features**|||||||
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA,**RX Sx**, no RX Fx|||||||
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA,**RX Sx**, no RX Fx||case 1_1|case 1_2|case 1_3|case 1_4|case 1_5|
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx**|||||||
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx**||case 2_1|case 2_2|case 2_3|case 2_4|**case 2_5**|
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, **RX Sx**, no RX Fx|||||||
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, **RX Sx**, no RX Fx||case 3_1|case 3_2|case 3_3|case 3_4|**case 3_5 (FA)**|
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx**|||||||
|**2 DUTs =**<br>**1 x native**<br>**RF Ready +**<br>**1 x Multi**<br>**Actuator**<br>**(input**<br>**datapoint)**|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx**||case 4_1|case 4_2|case 4_3 (FA)|case 4_4|case 4_5 (FA)|


-----

###### 7.3.3.1 Linking 2 actuators: case 2.5 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT1 : Native Ready Actuator

   DUT1 Serial Number = 00090040ff00

   DUT2 : Native Multi Actuator: Receiver Features: FA:no, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes - > 0x0D

   DUT2 Serial Number = 00090040ff02

   EITT4: native Multi sensor: Transmitter Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no - > 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel  (DUT1)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF00 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF00 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF00 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF00 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

©C i h 1998 2022 A i i AS 02 02 02 120 f 14


-----

###### Property Function command Read( Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF00 0] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 00 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 00 )

- [RF: 02 SN: 00090040FF00 5][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 00 11 22 33 44 55 66 00 05
00 05 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=02 11 22 33 44 55 66 00 05 00 05 )

###### Property Function command Read( Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF00 1] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 01 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 01 )

- [RF: 02 SN: 00090040FF00 6][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 01 11 22 33 44 55 66 00 02
00 01 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=03 11 22 33 44 55 66 00 02 00 01 )

###### Property Function command Read( Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF00 2] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 02 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 02 )

- [RF: 02 SN: 00090040FF00 7][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F FF :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=FF, Data=)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 5][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to OFF

- [RF: 00 SN: 112233445566 6][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel (DUT2)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 7][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 0D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 0D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

©C i h 1998 2022 A i i AS 02 02 02 121 f 14


-----

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Fx

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 03 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 01 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT2 to ON

- [RF: 00 SN: 112233445566 0][08 04 07 FF 00 00] 2C A0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 1][08 04 01 FF 00 09] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF00 3][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

Send a Multi Fx telegram to switch the DUT2 to OFF

- [RF: 00 SN: 112233445566 2][08 04 07 FF 01 09] 2C A0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

Send a Ready telegram to switch the DUT1 to OFF

- [RF: 00 SN: 112233445566 3][08 04 01 FF 00 09] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF00 6][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

©C i h 1998 2022 A i i AS 02 02 02 122 f 14


-----

###### 7.3.3.2 Linking 2 actuators: case 3.5 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT1 : Native Ready Actuator

   DUT1 Serial Number = 00090040ff00

   DUT2 : Native Multi Actuator: Receiver Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x1E

   DUT2 Serial Number = 00090040ff02

   EITT4: native Multi sensor: Transmitter Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no - > 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel  (DUT1)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

x► [RF: 02 SN: 00090040FF00 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF00 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF00 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF00 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF00 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

©C i h 1998 2022 A i i AS 02 02 02 123 f 14


-----

###### Property Function command Read( Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF00 0] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 00 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 00 )

- [RF: 02 SN: 00090040FF00 7][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 00 11 22 33 44 55 66 00 05
00 05 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=02 11 22 33 44 55 66 00 05 00 05 )

###### Property Function command Read( Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF00 1] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 01 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 01 )

- [RF: 02 SN: 00090040FF00 0][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 01 11 22 33 44 55 66 00 02
00 01 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=03 11 22 33 44 55 66 00 02 00 01 )

###### Property Function command Read( Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF00 2] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 02 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 02 )

- [RF: 02 SN: 00090040FF00 1][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F FF :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=FF, Data=)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 5][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF00 2][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to OFF

- [RF: 00 SN: 112233445566 6][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF00 5][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel  (DUT2)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

©C i h 1998 2022 A i i AS 02 02 02 124 f 14


-----

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA=FF Switch OnOff status with GA=0000)

 A=>S Link resp (use existing FA=FF=02 GA=0000)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A SetDelLink(FF=00 Switch OnOff GA=0000)

 A=>S Link resp (link added FA=00 GA=0000)

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Sx with FA=00

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 01 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 01 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 02 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 02 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Sx telegram to switch the DUT2 to ON with nb of expected FA=01

- [RF: 00 SN: 112233445566 0][08 04 08 FF 01 00][0A 02 01 00] 2C A0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 01] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Sx telegram to switch the DUT2 to OFF wit nb of expected FA=01

©C i h 1998 2022 A i i AS 02 02 02 125 f 14


-----

- [RF: 00 SN: 112233445566 1][08 04 08 FF 01 09][0A 02 01 00] 2C A0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean
(switch off)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 01] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### 7.3.4 Linking 3 actuators The aim is to link 3 actuators (DUT1, DUT2 and DUT3) to a sensor (EITT4) with various combinations of features.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

 no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 126 f 14


-----

|TX<br>Features<br>RX Features<br>DUT1 : Native Ready<br>DUT2: Multi: no FA, no RX Sx, RX Fx<br>DUT3: Multi: no FA, RX Sx, no RX Fx<br>DUTs =<br>DUT1 : Native Ready<br>1 x native<br>RF Ready DUT2: Multi: no FA, no RX Sx, RX Fx<br>+ 2 RF<br>DUT3 : Multi: FA, RX Sx, no RX Fx<br>Multi<br>Actuators DUT1 : Native Ready<br>(input<br>DUT2 : Multi: FA, no RX Sx, RX Fx<br>datapoint)<br>DUT3: Multi: no FA, RX Sx, no RX Fx<br>DUT1 : Native Ready<br>DUT2 : Multi: FA, no RX Sx, RX Fx<br>DUT3 : Multi: FA, RX Sx, no RX Fx|Col2|Col3|Col4|EITT4 = 1 sensor<br>(output datapoint)|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**native**<br>**RF Ready**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|**Native**<br>**RF Multi (TX features)**|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**TX**<br>**Features**||**FA -**no TX Sx - no TX<br>Fx|**FA -**no TX Sx -**TX Fx**|**FA - TX Sx -**no TX Fx|**FA - TX Sx - TX Fx**|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**RX Features**|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx||case 5_1|case 5_2|case 5_3|case 5_4|case 5_5|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx||case 6_1|case 6_2|case 6_3|case 6_4 (FA)|case 6_5 (FA)|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx||||(FA)||(FA)|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx||case 7_1|case 7_2|case 7_3|case 7_4|case 7_5|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|||||||
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx||||(FA)||**(FA)**|
|**TX**<br>**Features**<br>**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **<br>**RX Features**<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2**: Multi: no FA, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3**: Multi: no FA,**RX Sx**, no RX Fx<br>**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx|**DUTs =**<br>**1 x native**<br>**RF Ready**<br>**+ 2 RF**<br>**Multi**<br>**Actuators**<br>**(input**<br>**datapoint) **|**DUT1** : Native Ready<br>**DUT2** : Multi:**FA**, no RX Sx,**RX Fx** <br>**DUT3** : Multi:**FA**, **RX Sx**, no RX Fx||case 8_1|case 8_2|case 8_3|case 8_4 (FA)|**case 8_5 (FA)**|
||Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|Sx link<br>Fx link<br>Ready link<br>no link|
||||||||||
||||||||||
||||||||||


###### (FA) : means that the Fast Acknowledge is managed in the link

©C i h 1998 2022 A i i AS 02 02 02 12 f 14


-----

###### 7.3.4.1 Linking 3 actuators: case 8.5 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT1 : Native Ready Actuator

   DUT1 Serial Number = 00090040ff00

   DUT2 : Native Multi Actuator: Receiver Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes - -> 0x1D

   DUT2 Serial Number = 00090040ff01

   DUT3 : Native Multi Actuator: Receiver Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no - -> 0x1E

   DUT3 Serial Number = 00090040ff02

   EITT4: native Multi sensor: Transmitter Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no - > 0x1C

   EITT4 Serial Number = 112233445566

 =======================================

 Linking actuator channel  (DUT1)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF00 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF00 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF00 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A Stop link with no error

 A=>S Quit config mode

©C i h 1998 2022 A i i AS 02 02 02 128 f 14


-----

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF00 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF00 0] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 00 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 00 )

- [RF: 02 SN: 00090040FF00 5][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 00 11 22 33 44 55 66 00 05
00 05 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=02 11 22 33 44 55 66 00 05 00 05 )

###### Property Function command Read( Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF00 1] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 01 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 01 )

- [RF: 02 SN: 00090040FF00 6][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 01 11 22 33 44 55 66 00 02
00 01 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=03 11 22 33 44 55 66 00 02 00 01 )

###### Property Function command Read( Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF00 2] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 02 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 02 )

- [RF: 02 SN: 00090040FF00 7][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F FF :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=FF, Data=)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 5][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to OFF

- [RF: 00 SN: 112233445566 6][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel (DUT2)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 7][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF01 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF01 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF01 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

©C i h 1998 2022 A i i AS 02 02 02 129 f 14


-----

###### A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF01 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA=FF Switch OnOff status with GA=0000)

 A=>S Link resp (use existing AF=FF GA=0000)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF01 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF01 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A SetDelLink(FA=00 Switch OnOff GA=0000)

 A=>S Link resp (link added FA=00 GA=0000)

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF01 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF01 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF01 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 00090040FF01 0][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Fx with Fast Ack=00

- [RF: 02 SN: 00090040FF01 1][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 01 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 01 )

- [RF: 02 SN: 00090040FF01 1][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 01 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF01 2][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF01 2][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT2 to ON with 1 expected Fast Ack

- [RF: 00 SN: 112233445566 7][08 04 07 FF 01 09][0A 02 01 00] 2C A0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

©C i h 1998 2022 A i i AS 02 02 02 130 f 14


-----

- [RF: 00 SN: 00090040FF01 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 00 SN: 00090040FF00 0][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT2 to OFF with 1 expected Fast Ack

- [RF: 00 SN: 112233445566 1][08 04 07 FF 01 09][0A 02 01 00] 2C A0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean
(switch off)

- [RF: 00 SN: 00090040FF01 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### Send a Ready telegram to switch the DUT1 to OFF

- [RF: 00 SN: 112233445566 2][08 04 01 FF 00 09] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF00 1][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel (DUT3)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA=FF Switch OnOff status with GA=0000)

 A=>S Link resp (use existing AF=FF GA=0000)

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

©C i h 1998 2022 A i i AS 02 02 02 131 f 14


-----

- [RF: 02 SN: 112233445566 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A SetDelLink(FA=00 Switch OnOff GA=0000)

 A=>S Link resp (link added FA=00 GA=0000)

- [RF: 02 SN: 112233445566 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 66 00 05
00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 66 00 05 00 05 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Multi Sx with FA=00

- [RF: 02 SN: 00090040FF02 1][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 01 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 01 )

- [RF: 02 SN: 00090040FF02 1][08 04 08 00 00 05] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 66 00 02
00 01 02 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 66 00 02 00 01 02 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 08 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 00090040FF02 2][08 04 08 00 00 05] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Sx telegram to switch the DUT3 to ON with 1 expected Fast Ack

- [RF: 00 SN: 112233445566 0][08 04 08 FF 01 09][0A 02 01 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 00 SN: 00090040FF02 0][08 04 08 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT2 to ON with 1 expected Fast Ack

- [RF: 00 SN: 112233445566 1][08 04 07 FF 01 09][0A 02 01 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 00 SN: 00090040FF01 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT1 to ON

- [RF: 00 SN: 112233445566 2][08 04 01 FF 00 09] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF00 4][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

©C i h 1998 2022 A i i AS 02 02 02 132 f 14


-----

###### 7.3.5 Linking sensor with multiple actuators The aim is to link 1 sensor (DUT) to 2 or three actuators simulated by EITT4 with various combinations of features.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

 no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 133 f 14


-----

|S1<br>RX<br>S2<br>Features<br>S3<br>TX Features|Col2|Col3|Col4|EITT4 = 1 x Native Ready + (1or2) RF Multi actuators<br>(input datapoint)|Col6|Col7|Col8|Col9|Col10|Col11|Col12|
|---|---|---|---|---|---|---|---|---|---|---|---|
|**S1**<br>**RX**<br>**Features**<br>**S2**<br>**S3**<br>**TX Features**|**S1**<br>**RX**<br>**Features**<br>**S2**<br>**S3**<br>**TX Features**|**RX**<br>**Features**|**S1**<br>**S2**<br>**S3**|Native Ready<br>Multi Fx<br>|Native Ready<br>Multi Sx|Native Ready<br>Multi Fx (FA)|Native Ready<br>Multi Sx (FA)|Native Ready<br>Multi Sx<br>Multi Fx|Native Ready<br>Multi Sx (FA)<br>Multi Fx|Native Ready<br>Multi Sx<br>Multi Fx (FA)|Native Ready<br>Multi Sx (FA)<br>Multi Fx (FA)|
|**S1**<br>**RX**<br>**Features**<br>**S2**<br>**S3**<br>**TX Features**|**TX Features**|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx, no TX<br>Fx|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx, no TX<br>Fx|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx, no TX<br>Fx|||case 1_1|case 1_2|case 1_3|case 1_4|case 1_5|case 1_6|case 1_7|case 1_8|
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx,**TX Fx**|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx,**TX Fx**|||case 2_1|case 2_2|(FA)<br>case 2_3|case 2_4|||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, no TX Sx,**TX Fx**|||case 2_1|case 2_2|(FA)<br>case 2_3|case 2_4|case 2_5|case 2_6|case 2_7 (FA)|case 2_8 (FA)|
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, no TX Fx|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, no TX Fx|||case 3_1|case 3_2|case 3_3|case 3_4|||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, no TX Fx|||case 3_1|case 3_2|case 3_3|case 3_4|case 3_5|case 3_6|case 3_7 (FA)|case 3_8|
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, **TX Fx**|||||||||||
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, **TX Fx**|||case 4_1|case 4_2|(FA)<br>case 4_3|(FA)<br>case 4_4||(FA)||(FA)|
|**DUT =**<br>**1 RF Multi**<br>**Sensor**<br>**(output**<br>**datapoint)**|**FA**, **TX Sx**, **TX Fx**|||case 4_1|case 4_2|(FA)<br>case 4_3|(FA)<br>case 4_4|case 4_5|case 4_6|case 4_7 (FA)|**case 4_8 (FA)**|


###### Sx link

 Fx link

 Ready link

 no link

 (FA) : means that the Fast Acknowledge is managed in the link

©C i h 1998 2022 A i i AS 02 02 02 134 f 14


-----

###### 7.3.5.1 Linking sensor: case 4.8 =========== TEST SETUP ================

 BDUT = Sensor

   reset to factory

   DUT : Sensor Transmission Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   DUT Serial Number = 112233445566

   EITT4: Actuator1 Reception Features:  native Ready

   EITT4 Acutator1 Serial Number = 00090040FF00

   EITT4 :Actuator2 Reception Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:yes --> 0x1D

   EITT4 Actuator2 Serial Number = 00090040FF01

   EITT4 :Actuator3 Reception Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:no --> 0x1E

   EITT4 Actuator3 Serial Number = 00090040FF02

 =======================================

 Linking DUT with Actuator1

 =======================================

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF00 0] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF00 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF00 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF00 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

©C i h 1998 2022 A i i AS 02 02 02 135 f 14


-----

- [RF: 02 SN: 00090040FF00 4] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 112233445566 1][08 04 01 FF 00 09] 3C 60 AFFE 05FF 05 02 C8 02 36 00 00 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 00 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 00 10 01
00 01 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 00 10 01 00 01 04 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 112233445566 2] 3C 60 AFFE 05FF 05 02 C8 02 36 00 01 : FctPropState_Read(ObjIdx=02, PropId=36,
00 01 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 00 00 02
00 02 04 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 00 00 02 00 02 04 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 3] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 : FctPropState_Read(ObjIdx=02, PropId=36,
00 02 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Ready mode.

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

###### =======================================

 Linking DUT with Actuator2

 =======================================

 S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF01 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1D 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1D 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF01 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF01 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(no FA Slot=FF, Switch OnOff status with GA=0000)

©C i h 1998 2022 A i i AS 02 02 02 136 f 14


-----

- [RF: 02 SN: 00090040FF01 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

###### A=>S Link resp (link added FA Slot=FF GA=0000)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF01 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

- [RF: 02 SN: 00090040FF01 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

###### A=>S Link resp (link added FA Slot=000 GA=0000)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF01 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF01 7] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 2) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 3][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 02 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 02 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 01 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 01 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 3) --> Switch OnOff link on Multi Fx with Ack Slot=00

- [RF: 02 SN: 112233445566 4] 3C 60 AFFE 05FF 05 02 C8 02 36 00 03 : FctPropState_Read(ObjIdx=02, PropId=36,
00 03 )

- [RF: 02 SN: 112233445566 7][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 01 00 02
00 02 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 01 00 02 00 02 01 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 5] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 : FctPropState_Read(ObjIdx=02, PropId=36,
00 04 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Ready mode.

 A telegram is sent in Multi Fx mode with one Fast Ack requested.



- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)



- [RF: 02 SN: 112233445566 2][08 04 01 00 01 02][0A 02 01 00] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

###### =======================================

©C i h 1998 2022 A i i AS 02 02 02 13 f 14


-----

###### Linking DUT with Actuator3

 =======================================

S=>A Start link Manuf code and 2 datapoint to be linked Bidirectionnal device and no additional frames

- [RF: 02 SN: 112233445566 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

###### A=>S Features from the Actuator

 S=>A Features from the Sensor

- [RF: 02 SN: 00090040FF02 0] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1E 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1E 00 00 )

- [RF: 02 SN: 112233445566 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

 S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

- [RF: 02 SN: 00090040FF02 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

- [RF: 02 SN: 112233445566 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

###### A=>S Begin Connection

 S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

- [RF: 02 SN: 00090040FF02 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

- [RF: 02 SN: 112233445566 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

###### A=>S Link resp (use existing CC=02 GA=1001)

 S=>A SetDelLink(no FA Slot=FF, Switch OnOff status with GA=0000)

- [RF: 02 SN: 00090040FF02 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 02 10 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 10 01 )

- [RF: 02 SN: 112233445566 6] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

###### A=>S Link resp (link added FA Slot=FF GA=0000)

 S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

- [RF: 02 SN: 00090040FF02 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

###### A=>S Link resp (link added CC=01 GA=0002)

 S=>A SetDelLink(FA Slot=00, Switch OnOff GA=0000)

- [RF: 02 SN: 00090040FF02 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

- [RF: 02 SN: 112233445566 6] 0C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

###### A=>S Link resp (link added FA Slot=000 GA=0000)

 S=>A Stop link with no error

- [RF: 02 SN: 00090040FF02 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

©C i h 1998 2022 A i i AS 02 02 02 138 f 14


-----

###### A=>S Quit config mode

- [RF: 02 SN: 00090040FF02 7] 2C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 112233445566 5][08 04 01 FF 00 00] 3C 60 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 112233445566 0][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 00 00 09 00 40 FF 02 10 01
00 01 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 00 09 00 40 FF 02 10 01 00 01 01 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 5) --> Switch OnOff link on Multi x with Ack Slot=00

- [RF: 02 SN: 112233445566 6] 3C 60 AFFE 05FF 05 02 C8 02 36 00 05 : FctPropState_Read(ObjIdx=02, PropId=36,
00 05 )

- [RF: 02 SN: 112233445566 1][08 04 01 00 00 01] 1C 60 05FF AFFE 11 02 C9 02 36 00 01 00 09 00 40 FF 02 00 02
00 02 02 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 00 09 00 40 FF 02 00 02 00 02 02 40 )

###### Property Function command Read( Multi_Object_Link Read iterator 6) --> Shall answer: no more link

- [RF: 02 SN: 112233445566 7] 3C 60 AFFE 05FF 05 02 C8 02 36 00 06 : FctPropState_Read(ObjIdx=02, PropId=36,
00 06 )

- [RF: 02 SN: 112233445566 2][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Press the Push-Button of the DUT.

 A telegram is sent in Ready mode.

 A telegram is sent in Multi Fx mode with one Fast Ack requested.

 A telegram is sent in Multi Sx mode with one Fast Ack requested.



- [RF: 00 SN: 112233445566 0][08 04 01 00 00 01] 0C E0 05FF 0002 01 00 81 : DPT 1.xxx Boolean (switch on)



- [RF: 00 SN: 112233445566 0][08 04 01 00 01 02][0A 02 01 00] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 00 SN: 112233445566 0][08 04 01 00 01 05][0A 02 01 00] 0C A0 05FF 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

###### 7.3.6 Linking actuator Fast Ack The aim is to link 1 actuator (DUT) to 3 sensors (EITT4) with various combinations of features and Fast Ack numbers.

 The following table shows the possible combination between the transmit features of the sensor and the receive features of the actuator. Not all the combinations are checked. Only the most representative and realistic cases are verified.

 The cases in bold in the table are verified.

 FA = Fast Acknowledge management

 TX Sx = the device is capable of transmitting on the slow frequencies

 TX Fx = the device is capable of transmitting on the fast frequencies

 RX Sx = the device is capable of scanning the slow frequencies (reception)

 RX Fx = the device is capable of scanning on the fast frequencies (reception)

 no FA = no Fast Acknowledge management

 no TX Sx = the device is not capable of transmitting on the slow frequencies

 no TX Fx = the device is not capable of transmitting on the fast frequencies

©C i h 1998 2022 A i i AS 02 02 02 139 f 14


-----

###### no RX Sx = the device is not capable of scanning the slow frequencies (reception)

 no RX Fx = the device is not capable of scanning on the fast frequencies (reception)

©C i h 1998 2022 A i i AS 02 02 02 140 f 14


-----

###### RX Features


###### S2 Multi Fx n°1 (FA=0) Multi Sx n°1 (FA=0)

 S3 Multi Fx n°2 (FA=63) Multi Sx n°2 (FA=63)

 (FA) (FA)

 case 1_1 (FA) case 1_2 (FA)


###### (FA)


###### (output
 case 2_1 case 2_2 (FA)
 datapoint)

 FA, RX Sx, RX Fx (FA) (FA)

 case 3_1 (FA) case 3_2 (FA)

 Sx link

 Fx link

 Ready link

 no link

 (FA) : means that the Fast Acknowledge is managed in the link

©C i h 1998 2022 A i i AS 02 02 02 141 f 14

|S1<br>S2<br>TX<br>Features S3<br>RX Features|Col2|Col3|Col4|EITT4 = 1 Native Ready + 2 RF Multi sensors<br>(output datapoint)|Col6|
|---|---|---|---|---|---|
|**TX**<br>**Features**<br>**S1**<br>**S2**<br>**S3**<br>**RX Features**|**TX**<br>**Features**<br>**S1**<br>**S2**<br>**S3**<br>**RX Features**|**TX**<br>**Features**|**S1**<br>**S2**<br>**S3**|Native Ready<br>Multi Fx n°1 (FA=0)<br>Multi Fx n°2 (FA=63)|Native Ready<br>Multi Sx n°1 (FA=0)<br>Multi Sx n°2 (FA=63)|
|**TX**<br>**Features**<br>**S1**<br>**S2**<br>**S3**<br>**RX Features**|**RX Features**|||||
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, no RX Sx,**RX Fx**|||||
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, no RX Sx,**RX Fx**|||(FA)|(FA)|
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, no RX Sx,**RX Fx**|||case 1_1 (FA)|case 1_2 (FA)|
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, no RX Fx|||||
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, no RX Fx||||(FA)|
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, no RX Fx|||case 2_1|case 2_2 (FA)|
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, **RX Fx**|||||
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, **RX Fx**|||**(FA)**|(FA)|
|**DUT =**<br>**1 RF Multi**<br>**Actuator**<br>**(output**<br>**datapoint)**|**FA**, **RX Sx**, **RX Fx**|||**case 3_1 (FA)**|case 3_2 (FA)|


-----

###### 7.3.6.1 Linking actuator: case 3.1 =========== TEST SETUP ================

 DUT = Actuator

   reset to factory

   DUT : Native Multi Actuator: Receiver Features: FA:yes, TX Sx:yes, TX Fx:yes, RX Sx:yes, RX Fx:yes --> 0x1F

   DUT Serial Number = 00090040FF02

   EITT4: native ready Sensor1

   EITT4 Serial Number Sensor1= 112233445566

   EITT4 : Native Multi Sensor2: Transmitter Features: ACK:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   EITT4 Serial Number Sensor2 = 112233445567

   EITT4 : Native Multi Sensor3: Transmitter Features: ACK:yes, TX Sx:yes, TX Fx:yes, RX Sx:no, RX Fx:no --> 0x1C

   EITT4 Serial Number Sensor3 = 112233445568

 =======================================

 Linking actuator channel  (DUT with EITT4 sensor1)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445566 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

###### A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445566 1] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445566 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445566 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )


-----

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445566 4] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Object_Link Read iterator 0) --> Switch OnOff Status link on Ready

- [RF: 02 SN: 00090040FF02 0] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 00 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 00 11 22 33 44 55 66 00
05 00 05 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=02 11 22 33 44 55 66 00 05 00 05 )

###### Property Function command Read( Object_Link Read iterator 1) --> Switch OnOff link on Ready

- [RF: 02 SN: 00090040FF02 1] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 01 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 01 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 1C 60 05FF AFFE 0F 02 C9 00 3F 00 01 11 22 33 44 55 66 00
02 00 01 : FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=00, Data=03 11 22 33 44 55 66 00 02 00 01 )

###### Property Function command Read( Object_Link Read iterator 2) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2] 3C 60 AFFE 05FF 05 02 C8 00 3F 00 02 : FctPropState_Read(ObjIdx=00,
PropId=3F, 00 02 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 1C 60 05FF AFFE 04 02 C9 00 3F FF :
FctPropState_Rsp(ObjIdx=00, PropId=3F, RetCode=FF, Data=)

###### Send a Ready telegram to switch the DUT to ON

- [RF: 00 SN: 112233445566 5][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Ready telegram to switch the DUT to OFF

- [RF: 00 SN: 112233445566 6][08 04 01 FF 00 00] 2C E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel (DUT with EITT4 sensor2)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445567 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445567 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5


-----

###### A=>S Begin Connection

- [RF: 02 SN: 112233445567 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445567 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA=FF Switch OnOff status with GA=0000)

 A=>S Link resp (use existing AF=FF GA=0000)

- [RF: 02 SN: 112233445567 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445567 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A SetDelLink(FA=00 Switch OnOff GA=0000)

 A=>S Link resp (link added FA=00 GA=0000)

- [RF: 02 SN: 112233445567 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 00 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 00 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445567 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 4) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 04 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 04 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 67 00
05 00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 67 00 05 00 05 01
00 )

###### Property Function command Read( Multi_Object_Link Read iterator 5) --> Switch OnOff link on Multi Fx with Fast Ack=00

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 05 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 05 )


-----

- [RF: 02 SN: 00090040FF02 0][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 67 00
02 00 01 01 40 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 67 00 02 00 01 01
40 )

###### Property Function command Read( Multi_Object_Link Read iterator 6) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 00] 3C 20 AFFE 05FF 05 02 C8 02 36 00 06 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 06 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT to ON with 1 expected Fast Ack

- [RF: 00 SN: 112233445567 0][08 04 07 FF 01 09][0A 02 01 00] 2C A0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean
(switch on)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT to OFF with 1 expected Fast Ack

- [RF: 00 SN: 112233445567 1][08 04 07 FF 01 09][0A 02 01 00] 2C A0 AFFE 0002 01 00 80 : DPT 1.xxx
Boolean (switch off)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)

###### =======================================

 Linking actuator channel (DUT with EITT4 sensor3)

 =======================================

 S=>A Start link Manuf code and 2 datapoints to be linked Bidirectionnal device and no additional frames

 A=>S Features from the Actuator

- [RF: 02 SN: 112233445568 0][08 04 01 FF 00 09] 2C E0 05FF 0000 08 03 E4 00 00 3B 20 00 09 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=20 00 09 02 )

- [RF: 02 SN: 00090040FF02 0][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B D0 1F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1F 00 00 )

###### S=>A Features from the Sensor

 A=>S Channel function actuator 0x0103 OnOff Actuator Scene

- [RF: 02 SN: 112233445568 1] 2C E0 05FF 0000 08 03 E4 00 00 3B D0 1C 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=D0 1C 00 00 )

- [RF: 02 SN: 00090040FF02 1][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 30 01 03 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=30 01 03 00 )

###### S=>A Channel Function Sensor 0x316 generic PB 1/2 info 5

 A=>S Begin Connection

- [RF: 02 SN: 112233445568 2] 2C E0 05FF 0000 08 03 E4 00 00 3B 40 03 16 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=40 03 16 00 )

- [RF: 02 SN: 00090040FF02 2][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 70 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=70 00 00 00 )

###### S=>A SetDelLink(CC=02 Switch OnOff status with GA=0001)

 A=>S Link resp (use existing CC=02 GA=0005)

- [RF: 02 SN: 112233445568 3] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 02 00 01 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 02 00 01 )

- [RF: 02 SN: 00090040FF02 3][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 02 00 05 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 02 00 05 )

###### S=>A SetDelLink(FA=FF Switch OnOff status with GA=0000)

 A=>S Link resp (use existing AF=FF GA=0000)


-----

- [RF: 02 SN: 112233445568 4] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 FF 00 00 )

- [RF: 02 SN: 00090040FF02 4][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 91 FF 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=91 FF 00 00 )

###### S=>A SetDelLink(CC=01 Switch OnOff GA=0002)

 A=>S Link resp (link added CC=01 GA=0002)

- [RF: 02 SN: 112233445568 5] 2C E0 05FF 0000 08 03 E4 00 00 3B 80 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=80 01 00 02 )

- [RF: 02 SN: 00090040FF02 5][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 01 00 02 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 01 00 02 )

###### S=>A SetDelLink(FA=3F Switch OnOff GA=0000)

 A=>S Link resp (link added FA=3F GA=0000)

- [RF: 02 SN: 112233445568 6] 2C E0 05FF 0000 08 03 E4 00 00 3B 82 3F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=82 3F 00 00 )

- [RF: 02 SN: 00090040FF02 6][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B 90 3F 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=90 3F 00 00 )

###### S=>A Stop link with no error

 A=>S Quit config mode

- [RF: 02 SN: 112233445568 7] 2C E0 05FF 0000 08 03 E4 00 00 3B A0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=A0 00 00 00 )

- [RF: 02 SN: 00090040FF02 7][08 04 01 00 00 01] 0C E0 05FF 0000 08 03 E4 00 00 3B B0 00 00 00 :
NetworkParameterWrite(ObjType=0000, PID=3B, Value=B0 00 00 00 )

###### Property Function command Read( Multi_Object_Link Read iterator 6) --> Switch OnOff Status link on Multi Fx

- [RF: 02 SN: 00090040FF02 0][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 06 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 06 )

- [RF: 02 SN: 00090040FF02 7][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 01 11 22 33 44 55 68 00
05 00 05 01 00 : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=01 11 22 33 44 55 68 00 05 00 05 01
00 )

###### Property Function command Read( Multi_Object_Link Read iterator 7) --> Switch OnOff link on Multi Fx with FA=00

- [RF: 02 SN: 00090040FF02 1][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 07 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 07 )

- [RF: 02 SN: 00090040FF02 1][08 04 07 00 00 02] 1C 20 05FF AFFE 11 02 C9 02 36 00 00 11 22 33 44 55 68 00
02 00 01 01 7F : FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=00, Data=00 11 22 33 44 55 68 00 02 00 01
01 7F )

###### Property Function command Read( Multi_Object_Link Read iterator 8) --> Shall answer: no more link

- [RF: 02 SN: 00090040FF02 2][08 04 07 FF 00 09] 3C 20 AFFE 05FF 05 02 C8 02 36 00 08 :
FctPropState_Read(ObjIdx=02, PropId=36, 00 08 )

- [RF: 02 SN: 00090040FF02 2][08 04 07 00 00 02] 1C 20 05FF AFFE 04 02 C9 02 36 FF :
FctPropState_Rsp(ObjIdx=02, PropId=36, RetCode=FF, Data=)

###### Send a Multi Fx telegram to switch the DUT to ON with 64 expected Fast Ack

- [RF: 00 SN: 112233445568 0][08 04 07 FF 40 09][0A 80 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00] 2C
E0 AFFE 0002 01 00 81 : DPT 1.xxx Boolean (switch on)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 81 : DPT 1.xxx Boolean (switch on)

###### Send a Multi Fx telegram to switch the DUT to OFF with 64 expected Fast Ack


-----

- [RF: 00 SN: 112233445568 1][08 04 07 FF 40 09][0A 80 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00] 2C
E0 AFFE 0002 01 00 80 : DPT 1.xxx Boolean (switch off)

- [RF: 00 SN: 00090040FF02 0][08 04 07 00 00 02] 0C A0 05FF 0005 01 00 80 : DPT 1.xxx Boolean (switch off)


-----

