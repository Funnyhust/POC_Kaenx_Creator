#### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN188 WGI accepted DPTs 07.17

# Application Note 188/17 v02

#### Title: WGI accepted DPTs 07.17

 Status: Date:

 Draft for Voting 2019.10.31

 Transitional period:  Immediate effect after Final Voting.

 Date: 2019.10.31

 Subject: Specification of new Datapoint Types. Documents Modified

[01] Chapter 3/7/2 “Datapoint Types”
**Referred**
None.

#### Document updates

 Version Date Modifications WGI326-01 2017.07.03  Document creation.

                        - Use requirements for Operating Hours: see 2).
                        - Added DPT_Coefficient and DPT_TempRoomSetpSetF16[4].
                        - Added DPT_DateTime_Value_Volume and
DPT_DateTime_Value_Volume_Flux.
#### AN188 v01 2017.07.31  Creation of the Draft Proposal. WGI326-02 2018.02.16  Corrected the range indication of the F16 as concluded in the

WGI topic [WGI00111].

                 - Inclusion of the first proposal of resolution of comments from RfV.

                - Inherited “Elapsed time”, which was for consistency removed

from the AS of AN182.
#### WGI326-03 2019.10.31  Final verification before issuing the Draft for Voting. AN188 v02 2019.10.31  Creation of the Draft for Voting.

 Contents

### 1 Overview .............................................................................................................. 2

 2 Operating Hours .................................................................................................. 2

 3 Elapsed time ........................................................................................................ 2

 4 Datapoint Types “2-Octet Float Value” ............................................................. 3

 5 Datapoint Types F16F16F16F16 .............................................................................. 4

 6 Datapoint Types 4 octets Float with Date and Time ........................................ 5

Savedate: Filename: page 1 of 5
2019 10 31 AN188 v02 WGI accepted DPTs 07 17 DV docx

|Version|Date|Modifications|
|---|---|---|
|WGI326-01|2017.07.03| Document creation.<br>- <br>Use requirements for Operating Hours: see 2).<br>- <br>Added DPT_Coefficient and DPT_TempRoomSetpSetF16[4].<br>- <br>Added DPT_DateTime_Value_Volume and<br>DPTDateTimeValueVolumeFlux.|
|AN188 v01|2017.07.31|____<br> Creation of the Draft Proposal.|
|WGI326-02|2018.02.16| Corrected the range indication of the F16 as concluded in the<br>WGI topic [WGI00111].<br> Inclusion of the first proposal of resolution of comments from RfV.<br> Inherited “Elapsed time”, which was for consistency removed<br>from the AS of AN182.|
|WGI326-03|2019.10.31| Final verification before issuing the Draft for Voting.|
|AN188 v02|2019.10.31| Creation of the Draft for Voting.|


-----

#### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN188 WGI accepted DPTs 07.17

## 1 Overview

 _This is an overview of the new DPTs that are defined in this document._

_This table is intended for integration in the table in clause 2 “Overview” of [01]._

#### DPT_ID Format Name

9.031 F16 DPT_Coefficient
275.100 F16F16F16F16 DPT_TempRoomSetpSetF16[4]
266.076 U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32 DPT_DateTime_Value_Volume
266.077 U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32 DPT_DateTime_Value_Volume_Flux

## 2 Operating Hours

####  DPT_LongDeltaTimeSec (13.100, V32; s)
 - New applications: Mandatory immediately.
 - Reassessment: Mandatory from April 2020 onwards.
 - Minor update[ 1)]: Allowed.

  DPT_LongTimePeriod_nnn (12.10n, U32)
 - Only accepted if 13.100 is also implemented.
 - Allowed immediately.

  DPT_TimePeriodHrs (U16, 7.007)
 - Allowed. (13.100 is mandatory)
 - Minor update[ 1)]: It is still allowed to have DPT_TimePeriodHrs without
 DPT_LongDeltaTimeSec for minor updates.
  Non-standard
 - New applications:

    - Not allowed

#### - Reassessment

    - Only accepted if 13.100 is also implemented.

## 3 Elapsed time
#### For “elapsed time”, also DPT_LongDeltaTimeSec (13.100) shall be used. 

 Additionally, DPT_TimePeriodHrs (7.007) may be used, if the value can be reset and if the overflow is handled properly (like given an overflow indication, via an additional GO for instance). 

 The same transitional period as indicated above applies.

1) “Minor update”: minor modification of an existing Application Program version for bugfixing; this shall not add

additional Group Objects or Parameters.

Savedate: Filename: page 2 of 5
2019 10 31 AN188 v02 WGI accepted DPTs 07 17 DV docx

|DPT ID<br>_|Format|Name|
|---|---|---|
|<br>9.031|F16|DPTCoefficient|
|275.100|F16F16F16F16|_<br>DPTTempRoomSetpSetF16[4]|
|266.076|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|_<br>DPTDateTimeValueVolume|
|266.077|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|___<br>DPTDateTimeValueVolumeFlux|


-----

#### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN188 WGI accepted DPTs 07.17

## 4 Datapoint Types “2-Octet Float Value”

Format: 2 octets: F16

octet nr 2 MSB 1 LSB

field names FloatValue

encoding M E E E E M M M MM M M M M MM M

Encoding:

#### FloatValue = (0,01*M)*2[(E)]
 E = [0 … 15] M = [-2 048 … 2 047], two’s complement notation For all Datapoint Types 9.xxx, the encoded value 7FFFh shall always be used to denote invalid data.
Range: [-671 088,64 … 670 760,96]

PDT: PDT_KNX_FLOAT

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

9.031 DPT_Coefficient 0 … 670 760 none 0,01

USE:      - Dimensionless coefficient, dimensionless ratio.

                - heat pump “coefficient of performance” (COP)

                - heat pump “Heating Seasonal Performance Factor” (HSPF)

Savedate: Filename: page 3 of 5
2019 10 31 AN188 v02 WGI accepted DPTs 07 17 DV docx

|M|E|E|E|E|M|M|M|
|---|---|---|---|---|---|---|---|

|MM|M|M|M|M|M|M|M|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|2 octets: F<br>16<br>2 1<br>MSB LSB<br>FloatValue<br>M E E E E M M M MM M M M M MM M<br>(E)<br>FloatValue = (0,01*M)*2<br>E = [0 … 15]<br>M = [-2 048 … 2 047], two’s complement notation<br>For all Datapoint Types 9.xxx, the encoded value 7FFFh shall always be used to<br>denote invalid data.<br>[-671 088,64 … 670 760,96]<br>PDT KNX FLOAT<br>_ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|
|9.031|DPT_Coefficient|0 … 670 760|none|0,01|
|9.031|<br>USE:<br>- <br>Dimensionless coefficient, dimensionless ratio.<br>- <br>heat pump “coefficient of performance” (COP)<br>- <br>heatpump “Heating Seasonal Performance Factor”(HSPF)|<br>USE:<br>- <br>Dimensionless coefficient, dimensionless ratio.<br>- <br>heat pump “coefficient of performance” (COP)<br>- <br>heatpump “Heating Seasonal Performance Factor”(HSPF)|<br>USE:<br>- <br>Dimensionless coefficient, dimensionless ratio.<br>- <br>heat pump “coefficient of performance” (COP)<br>- <br>heatpump “Heating Seasonal Performance Factor”(HSPF)|<br>USE:<br>- <br>Dimensionless coefficient, dimensionless ratio.<br>- <br>heat pump “coefficient of performance” (COP)<br>- <br>heatpump “Heating Seasonal Performance Factor”(HSPF)|


-----

#### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN188 WGI accepted DPTs 07.17

## 5 Datapoint Types F16F16F16F16

Format: 8 octet; F16F16F16F16

8 MSB 7 LSB 6 MSB 5 LSB
TempSetp TempSetp TempSetp TempSetp

Comf Comf Stdby Stdby

FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF

4 MSB 3 LSB 2 MSB 1 LSB
TempSetp TempSetp TempSetp TempSetp

Eco Eco BProt BProt

FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF

Encoding: see below

For all fields “Comfort”, “Standby” and “Economy” and “Building Protection”, only the value
7FFFh shall be used to denote invalid data.

Range: see below

Unit: °C

**Datapoint Types**

ID: Name: Range: Unit:

275.100 DPT_TempRoomSetpSetF16[4] see below see below

USE:      - Transfer of multiple temperature setpoints in a single Telegram.

**Data fields** **Description** **Unit / Range**

TempSetpComf room temperature setpoint comfort F16, –273°C to 670 433,28°C
0,01°C resolution

TempSetpStdby room temperature setpoint standby F16, –273°C to 670 433,28°C
0,01°C resolution
TempSetpEco room temperature setpoint economy F16, –273°C to 670 433,28°C
0,01°C resolution
TempSetpBProt room temperature setpoint building F16, –273°C to 670 433,28°C
protection 0,01°C resolution

 _In the specification of DPT_TempRoomSetpSet[4] (213.100) the indication on the corresponding Standard_

_Mode DPT has to be replaced by a reference to this new DPT._

Savedate: Filename: page 4 of 5
2019 10 31 AN188 v02 WGI accepted DPTs 07 17 DV docx

|Format:<br>Encoding:<br>Range:<br>Unit:|8 octet; F F F F<br>16 16 16 16<br>8 MSB 7 LSB 6 MSB 5 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Comf Comf Stdby Stdby<br>FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF<br>4 MSB 3 LSB 2 MSB 1 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Eco Eco BProt BProt<br>FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF<br>see below<br>For all fields “Comfort”, “Standby” and “Economy” and “Building Protection”, only the value<br>7FFFh shall be used to denote invalid data.<br>see below<br>°C|Col3|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|
|275.100|DPT_TempRoomSetpSetF16[4]|see below|see below|
|275.100|<br>USE:<br>- <br>Transfer of multiple temperature setpoints ina single Telegram.|<br>USE:<br>- <br>Transfer of multiple temperature setpoints ina single Telegram.|<br>USE:<br>- <br>Transfer of multiple temperature setpoints ina single Telegram.|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpComf|room temperature setpoint comfort|F16,–273°C to670 433,28°C <br>0,01°C resolution|
|TempSetpStdby|room temperature setpoint standby|F16,–273°C to670 433,28°C <br>0,01°C resolution|
|TempSetpEco|room temperature setpoint economy|F16,–273°C to670 433,28°C <br>0,01°C resolution|
|TempSetpBProt|room temperature setpoint building<br>protection|F16,–273°C to670 433,28°C <br>0,01°C resolution|


-----

#### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN188 WGI accepted DPTs 07.17

## 6 Datapoint Types 4 octets Float with Date and Time

Format: 12 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32

octet nr. 12 MSB 11 10 9

field names
Year r r r r Month r r r DayOfMonth [DayOf-]

Week [HourOfDay ]

encoding U U U U U U U U 0 0 0 0 U U U U 0 0 0 U U U U U U U U U U U U U

octet nr. 8 7 6 5

field names r r Minutes r r Seconds r r r r r r r

encoding 0 0 U U U U U U 0 0 U U U U U U B B B B B B B B B 0 0 0 0 0 0 0

octet nr. 4 3 2 1 LSB

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

PDT: PDT_GENERIC_12

**Datapoint Types**

ID: Name:

266.076 DPT_DateTime_Value_Volume (14.076)

USE: Metering: accumulated volume (gas, water and other).

266.077 DPT_DateTime_Value_Volume_Flux (14.077)

USE: Metering: volume flux (gas, water and other).

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001 none none

Float Same as DPT 14.xxx

Savedate: Filename: page 5 of 5
2019 10 31 AN188 v02 WGI accepted DPTs 07 17 DV docx

|r|r|r|r|Month|
|---|---|---|---|---|

|r|r|r|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|Minutes|
|---|---|---|

|r|r|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|0|0|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|12 octets: U [r U ][r U ][U U ][r U ][r U ]B F<br>8 4 4 3 5 3 5 2 6 2 6 16 32<br>12 11 10 9<br>MSB<br>DayOf-<br>Year r r r r Month r r r DayOfMonth HourOfDay<br>Week<br>U U U U U U U U 0 0 0 0 U U U U 0 0 0 U U U U U U U U U U U U U<br>8 7 6 5<br>r r Minutes r r Seconds r r r r r r r F WD NWD NY ND NDoW NT SUTI CLQ<br>0 0 U U U U U U 0 0 U U U U U U B B B B B B B B B 0 0 0 0 0 0 0<br>4 3 2 1<br>LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>PDT GENERIC 12<br>_ _|
|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|
|266.076|DPT_DateTime_Value_Volume (14.076)|
|266.076|<br>USE:<br>Metering: accumulated volume (gas, water and other).|
|266.077|DPT_DateTime_Value_Volume_Flux (14.077)|
|266.077|<br>USE: <br>Metering: volume flux (gas, water and other).|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Float||Same as DPT 14.xxx||||


-----

