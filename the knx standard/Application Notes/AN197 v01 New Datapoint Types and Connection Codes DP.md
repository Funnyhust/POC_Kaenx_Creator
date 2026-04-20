##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

# Application Note 197/19

##### Title: New Datapoint Types and Connection Codes

 Status: Date:

 Draft Proposal 2019.10.31

 Transitional period:  Immediate effect after Final Voting.

 Date: 2019.10.31

 Subject:
 Documents Modified

[01] Chapter 03/07/02 “Datapoint Types” v01.08.03 AS

[02] Volume 7 “Application Descriptions”

##### Document updates

 Version Date Modifications WGIxxxx-01 2019.05.13 Document creation. AN197 v01 2019.10.31 Creation of the Draft Proposal.

 Contents

#### 1 New Datapoint Types .......................................................................................... 2
 1.1 Purpose, motivation and scope ................................................................ 2 1.2 Overview .................................................................................................. 2 1.3 Datapoint Types B1 .................................................................................. 2 1.4 Datapoint Types “4-Octet Float Value” ..................................................... 3 1.5 DPT_Tariff_ReactiveEnergy ..................................................................... 3 1.6 Datapoint Types B1 with Date and Time ................................................... 4 1.7 Datapoint Types “4-Octet Float Value” with Date and Time ..................... 5 1.8 DPT_Tariff_ReactiveEnergy with Date and Time ..................................... 6

 2 New Connection Codes ...................................................................................... 7
 2.1 Purpose, motivation and scope ................................................................ 7 2.2 Connection Codes list .............................................................................. 7

Savedate: Filename: page 1 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|Version|Date|Modifications|
|---|---|---|
|WGIxxxx-01|2019.05.13|Document creation.|
|AN197 v01|2019.10.31|Creation of the Draft Proposal.|


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

## 1 New Datapoint Types

### 1.1 Purpose, motivation and scope
##### In the context of metering application, it is possible to have electrical meters that measure the reactive components (energy, power...).

 The aim of this document is to define the Datapoint Types.

### 1.2 Overview

##### DPT_ID Format Name
 1.1202 B1 DPT_ReactiveLoad_Type 14.081 F32 DPT_Value_ReactivePower 235.002 V32U8B8 DPT_Tariff_ReactiveEnergy 265.1202 U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1 DPT_DateTime_ReactiveLoad_Type 266.081 U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32 DPT_DateTime_Value_ReactivePower 269.1201 U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U8B8 DPT_DateTime_Tariff_ReactiveEnergy

### 1.3 Datapoint Types B1

Format: 1 bit: B1

octet nr. 1

field names b

encoding B

Range: b = {0,1}

Unit none

Resol (not applicable)

PDT: PDT_BINARY_INFORMATION

**Datapoint Types**

ID: Name: Encoding: Use:

1.1202 DPT_ReactiveLoad_Type 0 = Inductive Metering
1 = Capacitive

Savedate: Filename: page 2 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|DPT ID<br>_|Format|Name|
|---|---|---|
|<br>1.1202|B1|DPTReactiveLoadType|
|14.081|F32|__<br>DPTValueReactivePower|
|235.002|V32U8B8|__<br>DPTTariffReactiveEnergy|
|265.1202|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|__<br>DPTDateTimeReactiveLoadType|
|266.081|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|___<br>DPTDateTimeValueReactivePower|
|269.1201|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U8B8|___<br>DPTDateTimeTariffReactiveEnergy|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|b|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Range:<br>Unit<br>Resol<br>PDT:|1 bit: B<br>1<br>1<br>b<br>B<br>b = {0,1}<br>none<br>(not applicable)<br>PDT BINARY INFORMATION<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Use:|
|1.1202|DPT_ReactiveLoad_Type|0 = Inductive<br>1 = Capacitive|Metering|


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

### 1.4 Datapoint Types “4-Octet Float Value”

Format: 4 octets: F32

octet nr. 4 MSB 3 2 1 LSB

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

Encoding: The values are encoded in the IEEE floating point format according IEEE 754.

Range: S (Sign) = {0,1}
##### Exponent = [0 … 255] Fraction = [0 … 8 388 607]
PDT: PDT_FLOAT

**Datapoint Types**

ID: Name: Unit: Resol.: Comment: Use:

14.081 DPT_Value_ReactivePower VAR 1 VAR Reactive power G

### 1.5 DPT_Tariff_ReactiveEnergy

Format: 6 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U8B8

octet nr. 6 MSB 5 4 3

field names ReactiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

235.002 DPT_Tariff_ReactiveEnergy G

Savedate: Filename: page 3 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

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

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|4 octets: F<br>32<br>4 3 2 1<br>MSB LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>The values are encoded in the IEEE floating point format according IEEE 754.<br>S (Sign) = {0,1}<br>Exponent = [0 … 255]<br>Fraction = [0 … 8 388 607]<br>PDT FLOAT<br>_|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|Comment:|Use:|
|14.081|DPT_Value_ReactivePower|VAR|1 VAR|Reactivepower|G|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|6 octets: U [r U ][r U ][U U ][r U ][r U ]B V U B<br>8 4 4 3 5 3 5 2 6 2 6 16 32 8 8<br>6 5 4 3<br>MSB<br>ReactiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>PDT GENERIC 06<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|235.002|DPT_Tariff_ReactiveEnergy|G|


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

**Field** **Description** **Encoding** **Unit** **Range** **Resol.**

ReactiveElectrical- Reactive energy See VARh [-2 147 483 648 … 1 VARh
Energy measured in the tariff DPT_ReactiveEne 2 147 483 647] Wh

indicated in the field rgy (DPT_ID =
_Tariff (13.012)_ 13.012)

Tariff Tariff associated to the See DPT_Tariff none [0 … 254] 1
energy indicated in the (DPT_ID = 5.006)
field
ActiveElectricalEnergy

Validity Bitset used for the validity of other data.

- validity of the Tariff b0 T 0: valid none {0, 1} none

data 1: not valid

- validity of the b1 E 0: valid none {0, 1} none

ActiveElectrical- 1: not valid
Energy data

- reserved b2 to b7 reserved shall be 0 none {0} none

### 1.6 Datapoint Types B1 with Date and Time

Format: 9 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1

octet nr. 9 MSB 8 7 6

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]

Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 5 4 3 2

field names 0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r

octet nr. 1 LSB

field names Binary Information

encoding B

PDT: PDT_DateTime_Binary_Information

**Datapoint Types**

ID: Name: Use:

265.1202 DPT_DateTime_ReactiveLoad_Type Metering

Field Description Encoding Range Unit Resol.:

Date and Time Same as DPT 19.001 none none

Binary Same as DPT 1.xxx {0,1} none none
Information

Savedate: Filename: page 4 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|Field|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|ReactiveElectrical-<br>Energy|Reactive energy<br>measured in the tariff<br>indicated in the field<br>_Tariff_ (13.012)|See<br>DPT_ReactiveEne<br>rgy (DPT_ID =<br>13.012)|VARh|[-2 147 483 648 …<br>2 147 483 647] Wh|1 VARh|
|Tariff|Tariff associated to the<br>energy indicated in the<br>field<br>ActiveElectricalEnergy|See DPT_Tariff<br>(DPT_ID = 5.006)|none|[0 … 254]|1|
|Validity<br>- validity of the Tariff<br>data<br>- validity of the<br>ActiveElectrical-<br>Energy data<br>- reserved|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0}<br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0}<br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0}<br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0}<br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0}<br>none|

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|9 octets: U [r U ][r U ][U U ][r U ][r U ]B B<br>8 4 4 3 5 3 5 2 6 2 6 16 1<br>9 8 7 6<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>5 4 3 2<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ<br>r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r<br>1<br>LSB<br>Binary Information<br>B<br>PDT DateTime Binary Information<br>_ _ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|265.1202|DPT_DateTime_ReactiveLoad_Type|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Binary<br>Information||Same as DPT 1.xxx|{0,1}|none|none|


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

### 1.7 Datapoint Types “4-Octet Float Value” with Date and Time

Format: 12 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32

octet nr. 12 MSB 11 10 9

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]

Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 8 7 6 5

field names 0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r

octet nr. 4 3 2 1 LSB

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

PDT: PDT_DateTime_Float

**Datapoint Types**

ID: Name: Use:

266.081 DPT_DateTime_Value_ReactivePower (14.081) G

Field Description Encoding Range Unit Resol.:

Date and Time Same as DPT 19.001 none none

Float Same as DPT 14.xxx

Savedate: Filename: page 5 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
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

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|12 octets: U [r U ][r U ][U U ][r U ][r U ]B F<br>8 4 4 3 5 3 5 2 6 2 6 16 32<br>12 11 10 9<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>8 7 6 5<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ<br>r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r<br>4 3 2 1<br>LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>PDT DateTime Float<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|266.081|DPT_DateTime_Value_ReactivePower (14.081)|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Float||Same as DPT 14.xxx||||


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

### 1.8 DPT_Tariff_ReactiveEnergy with Date and Time

Format: 14 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U8B8

octet nr. 14 MSB 13 12 11

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]

Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 10 9 8 7

field names 0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r

octet nr. 6 5 4 3

field names ReactiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

PDT: PDT_DateTime_Tariff_ReactiveEnergy

**Datapoint Types**

ID: Name: Use:

269.1201 DPT_DateTime_Tariff_ReactiveEnergy G

Field Description Encoding Range Unit Resol.:

Date and Time Same as DPT 19.001 none none

Tariff Reactive Same as DPT 235.002 none none
energy

Savedate: Filename: page 6 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|14 octets: U [r U ][r U ][U U ][r U ][r U ]B V U B<br>8 4 4 3 5 3 5 2 6 2 6 16 32 8 8<br>14 13 12 11<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>10 9 8 7<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ<br>r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r<br>6 5 4 3<br>ReactiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>PDT DateTime Tariff ReactiveEnergy<br>_ _ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|269.1201|DPT_DateTime_Tariff_ReactiveEnergy|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Tariff Reactive<br>energy||Same as DPT 235.002||none|none|


-----

##### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN197 New Datapoint Types and Connection Codes

## 2 New Connection Codes

### 2.1 Purpose, motivation and scope
##### In the context of E-Mode Configuration, it should be possible to connect Datapoints for

 - getting the geographical position to manage uses cases depending on the location,
 - controlling the colour temperature or colour via LED controllers or DALI gateways.

### 2.2 Connection Codes list

**Value** **Value**

**Connection Code** **Datapoint Type**

**(Dec)** **(Hex)**

350 15E CC_GeographicalLocation 255.001 DPT_GeographicalLocation
351 15F CC_RGBW_Value_Set 251.600 DPT_Colour_RGBW
352 160 CC_RGBW_Value_Status 251.600 DPT_Colour_RGBW
353 161 CC_Colour_Temperature_Ctrl 3.007 DPT_Control_Dimming
354 162 CC_Colour_Temperature_Value 7.600 DPT_Absolute_Colour_Temperat

ure
355 163 CC_Colour_Temperature_Value_ 7.600 DPT_Absolute_Colour_Tempera
Status ture

Savedate: Filename: page 7 of 7
2019 10 31 AN197 v01 New Datapoint Types and Connection Codes DP docx

|Value<br>(Dec)|Value<br>(Hex)|Connection Code|Datapoint Type|Col5|
|---|---|---|---|---|
|350|15E|CCGeographicalLocation|255.001|DPTGeographicalLocation|
|351|15F|_<br>CCRGBWValueSet|<br>251.600|_<br> DPTColourRGBW|
|352|160|___<br>CCRGBWValueStatus|<br>251.600|__<br> DPTColourRGBW|
|353|161|___<br>CCColourTemperatureCtrl|<br>3.007|__<br> DPTControlDimming|
|354|162|___<br>CC_Colour_Temperature_Value|<br>7.600|__<br> DPT_Absolute_Colour_Temperat<br>ure|
|355|163|CC_Colour_Temperature_Value_<br>Status|7.600|DPT_Absolute_Colour_Tempera<br>ture|


-----

