KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

# Application Note 200/20 v02

**Title:** **KNX RF4.R**

**Status:** **Date:**

Approved Standard 2020.09.16

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2020.09.16

**Subject:**
Extension of the KNX RF Ready Communication Medium with the
additional frequency subband of 915 MHz for use in further
geographical regions.

**Documents** **Modified**

[01] Chapter 3/2/5 “Radio Frequency” v1.6.03 AS

[02] Chapter 8/2/5 “RF Physical and Data Link Layer Tests” v2.2.01 AS

**Referred**

None.

**Document updates**

**Version** **Date** **Modifications**
KSG248-00 2019.07.31 Creation of the Working Document.
KSG248-01 2020.04.09 Update after the KSG Core meeting of 2020.04.06
AN200 v01 2020.05.05 Creation of the Draft Proposal.
AN200 v02 2020.09.16 Creation of the Approved Standard version.

**Contents**

###### 1 Purpose, motivation and scope ........................................................................ 2

 2 Abbreviations ..................................................................................................... 2

 3 KNX RF4.R .......................................................................................................... 3
 3.1 Physical Layer type RF Ready, 915 MHz band ....................................... 3 3.2 Test specifications ................................................................................... 4
 3.2.1 EMC and ERM related test ............................................................... 5 3.2.2 Testing of Tx Centre Frequency Tolerance ....................................... 5 3.2.3 Testing of max Tx Power .................................................................. 5 3.2.4 Testing of Duty Cycle ........................................................................ 5 3.2.5 Testing of FSK Deviation .................................................................. 5 3.2.6 Testing of Bandwidth ........................................................................ 6

Savedate Filename: page 1 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG248-00|2019.07.31|Creation of the Working Document.|
|KSG248-01|2020.04.09|Update after the KSG Core meeting of 2020.04.06|
|AN200 v01|2020.05.05|Creation of the Draft Proposal.|
|AN200 v02|2020.09.16|Creation of the Approved Standard version.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

###### 3.2.7 Testing of Chip Rate ......................................................................... 6 3.2.8 Testing of Rx Frequency Tolerance .................................................. 7 3.2.9 Testing of Rx Chip Rate Tolerance ................................................... 7

 Annex A (informative) RF4.R background and motivation ................................... 8
 A.1 Bandwidth limits ...................................................................................... 8 A.2 Frequency Deviation limits ...................................................................... 8

### 1 Purpose, motivation and scope

 _This clause is not intended for integration in the KNX Specifications._

This document specifies the RF Physical Layer requirements and test specifications for the
RF4.R extension, which is intended for use in regions such as the United States, Canada
and the Americas in general.

RF4.R is based on the Federal Communications Commission (FCC) regulations for
operation in the 902-928 MHz band, commonly abbreviated as the 915 MHz band, in the
United States. Most of the remaining countries in the Americas have adopted this regulation.
However, the applicable regulations in each country in which the equipment is intended to be
used must be studied on a case-by-case basis. In regions where the local standards are not
compatible with RF4.R, this physical layer cannot be used.

There are two paths to 915 MHz certification:

   - FCC Part 15.247: FHSS and digitally modulated radiators.

   - FCC Part 15.249: All other transmission.

RF1.R might comply with Part 15.249 by simply moving the carrier frequency to the 915 MHz
band. However, the transmission power in that part is restricted to a very low level
(ERP = -3,38 dBm) compared to the European regulation (ERP = +14 dBm). Part 15.247,
however, allows transmission at similar (or even higher) power level, but some further
restrictions must be met in order to apply it.

The range that can be achieved with the power allowed by Part 15.249 is too short, so
RF4.R shall comply with Part 15.247. To avoid implementing complicated modulation
techniques such as FHSS or DSSS, it will be necessary to widen the spectrum and comply
with the restrictions detailed below.

### 2 Abbreviations

BER Bit Error Rate

DSSS Direct Sequence Spread Spectrum

ERP Effective Radiated Power

FCC Federal Communications Commission

FHSS Frequency Hopping Spread Spectrum

OCW Operating Channel Width

PSD Power Spectral Density

Savedate Filename: page 2 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

RBW Resolution Bandwidth

VBW Video Bandwidth

### 3 KNX RF4.R

 _This table shall be updated in [01] clause 4 Table 2._

Region Frequency sub- KNX RF Ready KNX RF Multi KNX RF BiBat KNX RF BiBat
examples band 2

US 915 MHz **KNX RF4.R** Not defined Not defined Not defined

#### 3.1 Physical Layer type RF Ready, 915 MHz band

 _This clause shall be added to clause 5.1 of [01]._

**Table 1 – General requirements for Physical Layer Type KNX RF4 Ready**

**Parameter** **Value** **Comment**

Tx centre frequency fc = 915,000 MHz

Max allowed bandwidth 500 kHz According EN 300 220-1
measurement method.

Min allowed bandwidth 500 kHz [a] According FCC 15.247 measurement
method: 6 dB BW measured with
RBW = 100 kHz.

Max. Tx frequency tolerance ± 25 ppm [b]

Tx duty cycle max 100 % There are no restrictions on the
applications, content or duration of a
transmission.

Tx modulation type FSK

FSK deviation 160 kHz ± 32 kHz Typical 160 kHz, 80 % to 120 %
tolerance

Tx chip rate 32 768 chips per second

Maximum Tx chip rate ± 1,5 %
tolerance

Maximum Tx jitter per ± 5 μs
transition

Max Tx power +8 dBm (Peak PSD/3 kHz) [c] The PSD of the modulated signal
+30 dBm (Conducted shall not exceed +8 dBm in any
Power) [d] 3 kHz BW.

The maximum conducted power shall
not exceed 1 W (+30 dBm).

Min Tx power -3 dBm ERP

Rx blocking performance Minimum category 2 Category 2 according EN 300 220, is
not a regulatory requirement, but
KNX specific.

Rx frequency tolerance ± 25 ppm [b] KNX Tx to KNX Rx

Savedate Filename: page 3 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Region<br>examples|Frequency sub-<br>band|KNX RF Ready|KNX RF Multi|KNX RF BiBat|KNX RF BiBat<br>2|
|---|---|---|---|---|---|
|US|915 MHz|**KNX RF4.R**|Not defined|Not defined|Not defined|

|Parameter|Value|Comment|
|---|---|---|
|Tx centre frequency|fc = 915,000 MHz||
|Max allowed bandwidth|500 kHz|According EN 300 220-1<br>measurement method.|
|Min allowed bandwidth|500 kHza|According FCC 15.247 measurement<br>method: 6 dB BW measured with<br>RBW = 100 kHz.|
|Max. Tx frequency tolerance|± 25 ppmb||
|Tx duty cycle max|100 %|There are no restrictions on the<br>applications, content or duration of a<br>transmission.|
|Tx modulation type|FSK||
|FSK deviation|160 kHz ± 32 kHz|Typical 160 kHz, 80 % to 120 %<br>tolerance|
|Tx chip rate|32 768 chips per second||
|Maximum Tx chip rate<br>tolerance|± 1,5 %||
|Maximum Tx jitter per<br>transition|± 5 μs||
|Max Tx power|+8 dBm (Peak PSD/3 kHz)c <br>+30 dBm (Conducted<br>Power)d|The PSD of the modulated signal<br>shall not exceed +8 dBm in any<br>3 kHz BW.<br>The maximum conducted power shall<br>not exceed 1 W (+30 dBm).|
|Min Tx power|-3 dBm|ERP|
|Rx blocking performance|Minimum category 2|Category 2 according EN 300 220, is<br>not a regulatory requirement, but<br>KNX specific.|
|Rx frequency tolerance|± 25 ppmb|KNX Tx to KNX Rx|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

**Parameter** **Value** **Comment**

Minimal Rx chip rate tolerance ± 2,0 % At BER = 10[-4] in optimum antenna
direction.

Rx radiated sensitivity -95 dBm typical At BER = 10[-4] in optimum antenna
-80 dBm min direction.

Minimal operating 0°C to 45°C KNX Physical Layer parameters shall
temperature range be met on the entire product

temperature range declared by the
manufacturer. (e.g.: -10°C to 70°C for
outdoor usage).

a FCC section 15.247(a)(2). See Annex A.1.

b Includes tolerances due to temperature variations within the operating temperature range and
tolerances due to crystal aging.

c FCC section 15.247(e).

d FCC section 15.247(b)(3).

#### 3.2 Test specifications

 _This clause shall be integrated in [02] clause 3.1 “Physical Layer tests”._

**KNX RF4 systems**

**Measurement** **KNX RF4 Ready**

EMC §3.1.1 See specific local regulation

BER §3.1.2 √

TX centre frequency Fc = 915,000 MHz
§3.1.3 ±25 ppm

TX radiated power §3.1.4 Max: +8 dBm (PSD/3 kHz)
Max: +30 dBm (Conducted Power)
Min: -3 dBm (ERP)

Max TX duty cycle §3.1.5 100 %

FSK Deviation §3.1.6 ±128 kHz to ±192 kHz

Max allowed bandwidth 500 kHz (EN 300 220-1 method)
§3.1.7.1

Min allowed bandwidth 500 kHz (FCC method)
§3.1.7.2

TX chip rate §3.1.8 32 768 cps ±1,5 %

TX jitter per transition §3.1.9 ± 5 μs

RX blocking performance §3.1.10 Category 2

RX frequency tolerance §3.1.11 ±25 ppm

RX chip rate and minimal tolerance §3.1.12 32 768 cps ± 2 %

Rx sensitivity §3.1.13 Typ: -95 dBm
Min: -80 dBm

Savedate Filename: page 4 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Parameter|Value|Comment|
|---|---|---|
|Minimal Rx chip rate tolerance|± 2,0 %|At BER = 10-4 in optimum antenna<br>direction.|
|Rx radiated sensitivity|-95 dBm typical<br>-80 dBm min|At BER = 10-4 in optimum antenna<br>direction.|
|Minimal operating<br>temperature range|0°C to 45°C|KNX Physical Layer parameters shall<br>be met on the entire product<br>temperature range declared by the<br>manufacturer. (e.g.: -10°C to 70°C for<br>outdoor usage).|
|a <br>FCC section 15.247(a)(2). See Annex A.1.<br>b <br>Includes tolerances due to temperature variations within the operating temperature range and<br>tolerances due to crystal aging.<br>c <br>FCC section 15.247(e).<br>d <br>FCC section 15.247(b)(3).|a <br>FCC section 15.247(a)(2). See Annex A.1.<br>b <br>Includes tolerances due to temperature variations within the operating temperature range and<br>tolerances due to crystal aging.<br>c <br>FCC section 15.247(e).<br>d <br>FCC section 15.247(b)(3).|a <br>FCC section 15.247(a)(2). See Annex A.1.<br>b <br>Includes tolerances due to temperature variations within the operating temperature range and<br>tolerances due to crystal aging.<br>c <br>FCC section 15.247(e).<br>d <br>FCC section 15.247(b)(3).|

|Measurement|KNX RF4 systems|
|---|---|
|**Measurement**|**KNX RF4 Ready **|
|EMC§3.1.1|See specific local regulation|
|BER§3.1.2|√|
|TX centre frequency<br>§3.1.3|Fc = 915,000 MHz<br>±25ppm|
|TX radiated power §3.1.4|Max: +8 dBm (PSD/3 kHz)<br>Max: +30 dBm (Conducted Power)<br>Min: -3 dBm(ERP)|
|Max TX duty cycle§3.1.5|100 %|
|FSK Deviation§3.1.6|±128 kHz to ±192 kHz|
|Max allowed bandwidth<br>§3.1.7.1|500 kHz (EN 300 220-1 method)|
|Min allowed bandwidth<br>§3.1.7.2|500 kHz (FCC method)|
|TX chip rate§3.1.8|32 768 cps ±1,5 %|
|TXjitterper transition§3.1.9|± 5μs|
|RX blocking performance§3.1.10|Category 2|
|RX frequency tolerance§3.1.11|±25ppm|
|RX chip rate and minimal tolerance§3.1.12|32 768 cps ± 2 %|
|Rx sensitivity §3.1.13|Typ: -95 dBm<br>Min: -80 dBm|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

##### 3.2.1 EMC and ERM related test

 _This clause shall be integrated in [02] clause 3.1.1 “EMC- and ERM related tests”._

EMC and ERM related test for RF4.R shall be performed according to the local standards in
the US.

##### 3.2.2 Testing of Tx Centre Frequency Tolerance

 _This clause shall be integrated in [02] clause 3.1.3 “Testing of Tx Centre Frequency Tolerance”._

Requirements:

RF4.R: 915,000 MHz

##### 3.2.3 Testing of max Tx Power

 _This clause shall be integrated in [02] clause 3.1.4 “Testing of max Tx Effective Radiated Power”._

 _The maximum Tx power in the US standard is not based on the ERP. The name of clause 3.1.1 shall be_

_changed to a more general one, valid for both Europe and the US: “Testing of max Tx power”._

RF4.R:

- Test Setup:
Tx power measurements to prove conformity must be conducted. That is, they must be
carried out with a direct connection via RF-cable between the DUT and the spectrum
analyzer.

- Testing:
See the FCC document Guidance for Performing Compliance Measurements on Digital
Transmission Systems (DTS) Operating Under § 15.247.

- Requirements:
To comply with FCC regulation, the DUT must meet the following Tx power
requirements:

**Requirement** **FCC Section** **Comment**

Power Spectral Density 15.247(e) The PSD of the modulated signal shall
not exceed +8 dBm in any 3 kHz BW.

Conducted power 15.247(b)(3) The maximum conducted power shall not
exceed 1 W (+30 dBm).

##### 3.2.4 Testing of Duty Cycle

 _This clause shall be integrated in [02] clause 3.1.5 “Testing of Duty Cycle”_

Requirements:

RF4.R: 100 %, there are no restrictions to the duty cycle.

##### 3.2.5 Testing of FSK Deviation

 _This clause shall be integrated in [02] clause 3.1.6 “Testing of FSK Deviation”._

Requirements:

RF4.R: 160 kHz ± 32 kHz (20 %) = ±128 kHz to ±192 kHz

Savedate Filename: page 5 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Requirement|FCC Section|Comment|
|---|---|---|
|Power Spectral Density|15.247(e)|The PSD of the modulated signal shall<br>not exceed +8 dBm in any 3 kHz BW.|
|Conducted power|15.247(b)(3)|The maximum conducted power shall not<br>exceed 1 W (+30 dBm).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

##### 3.2.6 Testing of Bandwidth

 _This clause shall be integrated in [02] clause 3.1.7 “Testing max allowed bandwidth”._

 _US regulations also set a limit for minimum bandwidth. The name of clause 3.1.7 shall be renamed as_

_follows: "Testing allowed bandwidth" and two subsections shall be created: 3.1.7.1 “Testing max allowed_
_bandwidth” and 3.1.7.2 “Testing min allowed bandwidth”._

3.1.7.1 Testing max allowed bandwidth

 _This new clause will contain the current content on [02] clause 3.1.7 “Testing max allowed bandwidth”._

_Max allowed bandwidth in RF4.R shall be tested according EN 300 220. It is not a regulatory requirement,_
_but a KNX specific._

3.1.7.2 Testing min allowed bandwidth

Only for RF4.R:

- Test Setup:
DUT connected with the spectrum analyzer via RF-cable.

- Testing:
See the FCC document Guidance for Performing Compliance Measurements on Digital
Transmission Systems (DTS) Operating Under § 15.247.

- Requirements:

**Requirement** **FCC Section** **Comment**

Min BW6dB 15.247(a)(2) The 6 dB BW of the modulated signal
shall be at least 500 kHz.

Configure the spectrum analyzer as indicated in the Compliance Measurements Guide:

**Settings**

RBW 100 kHz

VBW ≥ 3*RBW

Detector Peak

Sweep Auto

Trace Mode Max Hold

Allow the resulting trace to fully stabilize.

Measure the width between the two outermost frequency points whose amplitudes are
attenuated by 6 dB, relative to the maximum level measured in the fundamental
emission.

##### 3.2.7 Testing of Chip Rate

 _This clause shall be integrated in [02] clause 3.1.8 “Testing of Tx Chip Rate”._

Requirements:

RF4.R: 32 768 cps - 1,5 % to 32 768 cps + 1,5 %

Savedate Filename: page 6 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Requirement|FCC Section|Comment|
|---|---|---|
|Min BW6dB|15.247(a)(2)|The 6 dB BW of the modulated signal<br>shall be at least 500 kHz.|

|Settings|Col2|
|---|---|
|RBW|100 kHz|
|VBW|≥ 3*RBW|
|Detector|Peak|
|Sweep|Auto|
|Trace Mode|Max Hold|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

##### 3.2.8 Testing of Rx Frequency Tolerance

 _This clause shall be integrated in [02] clause 3.1.11 “Testing of Rx Frequency Tolerance”._

Testing:

RF4.R: Centre frequency 915,000 MHz.

Requirements: 915,000 MHz – 25 ppm to 915,000 MHz + 25 ppm

##### 3.2.9 Testing of Rx Chip Rate Tolerance

 _This clause shall be integrated in [02] clause 3.1.12 “Testing of Rx Chip Rate Tolerance”._

Testing:

RF4.R: Test at TX chip rate – 2 % and TX chip rate + 2 %

Savedate Filename: page 7 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN200** **KNX RF4.R**

## Annex A
(informative)

## RF4.R background and motivation

 _This new clause shall be integrated at the end of [02] as “Annex A (informative) RF4.R background and_

_motivation”._

#### A.1 Bandwidth limits
The two limits for the allowed bandwidth in Table 1, min and max, seem to specify the same
bandwidth but are in fact values that cannot be directly compared since each limit must be
measured with a different spectrum analyzer configuration.

**Test** **Regulation** **BW definition** **RBW**

Min BW FCC 15.247 The width between the two outermost frequency 100 kHz
points whose amplitudes are attenuated by 6 dB,
relative to the maximum level measured in the
fundamental emission.

Max BW EN 300 220 The occupied bandwidth is the frequency range in 1 % to 3 % of
which 99 % of the total mean power of a given OCW without
emission falls. being below 100

Hz

For the European standard, if OCW = 500 kHz, RBW must be set between 5 kHz and
15 kHz. Note that RBW in the minimum bandwidth test (according to FCC) is significantly
higher than the RBW used in the maximum bandwidth test (according to EN 300 220),
resulting in an apparently wider bandwidth.

#### A.2 Frequency Deviation limits
The maximum frequency deviation allowed (192 kHz) ha s been set to ensure that the
signal does not exceed the OCW (500 kHz). According to Carson’s rule, it can be estimated
as follows:

OCW = Max BW + Max frequency tolerance ≈ 2 * (fdev max + chipratemax) + 2 * fctolerance

   - chipratemax: 32 768 cps + 1,5 % = 33 259 cps

   - fctolerance: Tx to Rx carrier tolerance = 25 ppm of 915 MHz = 22,875 kHz

OCW ≈ 2 * (fdev max + 33,259 + 22,875) ≤ 500 kHz;

The limit is reached with fdev = 193,866 kHz. Therefore, if the maximum frequency deviation
allowed is 192 kHz, the signal from any RF4.R transmitter will be within the OCW.

Some transceivers produce peaks in their spectral shape using certain frequency deviation
values. These should be avoided in order to flatten the spectrum and be able to transmit with
a higher power without exceeding the PSD limit set by the regulations. Therefore, it is
necessary to allow a certain range in the FSK deviation. It has been proven that some
transceivers meet the minimum bandwidth requirement using fdev = 140 kHz, while others
need a larger deviation (i.e. 180 kHz). The proposed range (128 kHz to 192 kHz) is wide
enough to cover all particular needs.

Savedate Filename: page 8 of 8
2020 09 16 AN200 v02 KNX RF4 R AS docx

|Test|Regulation|BW definition|RBW|
|---|---|---|---|
|Min BW|FCC 15.247|The width between the two outermost frequency<br>points whose amplitudes are attenuated by 6 dB,<br>relative to the maximum level measured in the<br>fundamental emission.|100 kHz|
|Max BW|EN 300 220|The occupied bandwidth is the frequency range in<br>which 99 % of the total mean power of a given<br>emission falls.|1 % to 3 % of<br>OCW without<br>being below 100<br>Hz|


-----

