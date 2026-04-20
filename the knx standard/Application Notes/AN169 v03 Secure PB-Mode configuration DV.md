KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

# Application Note 169/16 v03

**Title:** **Secure PB-Mode configuration**

**Status:** **Date:**

Draft for Voting 2016.11.18

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2016.11.18

**Subject:** Secure configuration in PB-Mode.

**Documents** **Modified**

[01] Chapter 3/3/7 “Application Layer”
v1.1 AS of 2008.12.21a

[02] AN158 v02 KNX Data Security DP (updated in KSG638)

[03] Chapter 3/5/1 “Resources”

[04] Chapter 3/5/3 “Configuration Procedures”

[05] Chapter 3/7/3 “Standard Identifier Tables”

[06] Volume 7 “Application Descriptions”

[07] Chapter 8/2/5 “RF Physical and Link Layer Tests”

[08] SEC 1. Elliptic Curve Cryptography. Standards for Efficient
Cryptography Group, September, 1999.
Working Draft. Available from: http://www.secg.org/

[09] GEC 1. Recommended Elliptic Curve Domain Parameters.
Standards for Efficient Cryptography
Group, September, 1999. Working Draft. Available from:
http://www.secg.org/

**Document updates**

**Version** **Date** **Modifications**
KSG579-01 2014.07.03 Document creation.
KSG579-02 2014.07.21 Update
KSG579-03 2014.08.20 Update after KSG class meeting discussions from
2014.07.29
KSG579-04 2014.10.16 Update after KSG class meeting discussions from
2014.08.29 and 2014.09.24

Savedate: Filename: page 1 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Version|Date|Modifications|
|---|---|---|
|KSG579-01|2014.07.03|Document creation.|
|KSG579-02|2014.07.21|Update|
|KSG579-03|2014.08.20|Update after KSG class meeting discussions from<br>2014.07.29|
|KSG579-04|2014.10.16|Update after KSG class meeting discussions from<br>2014.08.29 and 2014.09.24|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Version** **Date** **Modifications**
KSG579-05 2016.02.17 Add several improvement to the PB-Mode configuration:

                           - Support of 2 octets connection codes

                           - Optimize Frame exchanges for efficient linking

                           - Add of a status in the Quit_Config_Mode Frame
PB 1.2 basic Security:

                           - Inversion of two Frames

                           - Change of format of the
PID_PB_KEY_ESTABLISH_REQUEST and
PID_PB_KEY_ESTABLISH_RESPONSE.
2016.04.04 Define SystemNetworkParameterWrite as mandatory for
any PB-Mode configuration v1.1 or higher.
KSG579.05.01 2016.05.10 Integration of feedback from KSG in person meeting from
2016.03.30.
KSG579.05.02 Add compatibility matrix for the use of SBC and BC service.
Add test vectors for Diffie Hellman in Appendix
Add error cases
Add sequence diagram for A_GroupValueRead use
2016.09.12 Add paragraph for the use of S-Mode standardised QR
code containing FDSK and KNX Serial Number. (to be
done: add reference to the QR code specification “KSG639
KNX Security FDSK encoding”)
2016.10.03 Efficient linking feature:

                           - let the number of links in each Frame fully open
from 01 to 255.

                           - reduce the number of additional properties from 6 to
only 1, by using a first byte Service ID.
2016.11.03 Update after KSG Core meeting from 2016.10.21:

                           - reserve value 255 for Efficient linking feature

                           - Replace reference to KSG internal document by
reference to official AN.

                           - Add details in some error handling of
PID_PB_EFFICIENT_LINKING
AN169 v03 2016.11.18 Preparation of the Draft for Voting.

**Contents**

##### 1 Purpose, motivation and scope ................................................................ 4
 1.1 Abbreviation .................................................................................... 4 1.2 Current situation: PB-Mode 1.0 ....................................................... 4 1.2.1 Limitations of PB-Mode 1.0 ............................................................. 4 1.2.2 PB-Mode 1.1 ................................................................................... 4 1.2.3 PB-Mode 1.2 ................................................................................... 5 1.2.4 Overview ......................................................................................... 5 1.2.5 Compatibility .................................................................................... 5

Savedate: Filename: page 2 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Version|Date|Modifications|
|---|---|---|
|KSG579-05|2016.02.17|Add several improvement to the PB-Mode configuration:<br>- <br>Support of 2 octets connection codes<br>- <br>Optimize Frame exchanges for efficient linking<br>- <br>Add of a status in the Quit_Config_Mode Frame<br>PB 1.2 basic Security:<br>- <br>Inversion of two Frames<br>- <br>Change of format of the<br>PID_PB_KEY_ESTABLISH_REQUEST and<br>PIDPBKEYESTABLISHRESPONSE.|
||2016.04.04|____<br>Define SystemNetworkParameterWrite as mandatory for<br>any PB-Mode configuration v1.1 or higher.|
|KSG579.05.01|2016.05.10|Integration of feedback from KSG in person meeting from<br>2016.03.30.|
|KSG579.05.02||Add compatibility matrix for the use of SBC and BC service.<br>Add test vectors for Diffie Hellman in Appendix<br>Add error cases<br>Add sequence diagram for AGroupValueRead use|
||2016.09.12|_<br>Add paragraph for the use of S-Mode standardised QR<br>code containing FDSK and KNX Serial Number. (to be<br>done: add reference to the QR code specification “KSG639<br>KNX Security FDSK encoding”)|
||2016.10.03|Efficient linking feature:<br>- <br>let the number of links in each Frame fully open<br>from 01 to 255.<br>- <br>reduce the number of additional properties from 6 to<br>only 1, by using a first byte Service ID.|
||2016.11.03|Update after KSG Core meeting from 2016.10.21:<br>- <br>reserve value 255 for Efficient linking feature<br>- <br>Replace reference to KSG internal document by<br>reference to official AN.<br>- <br>Add details in some error handling of<br>PIDPBEFFICIENTLINKING|
|AN169 v03|2016.11.18|___<br>Preparation of the Draft for Voting.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

##### 1.3 Summary ......................................................................................... 6

 2 Specification ............................................................................................... 7
 2.1 Terms and definitions ...................................................................... 7 2.2 Stack and communication ............................................................... 7 2.3 Resource definition or used Resources ........................................... 7
 2.3.1 Device Object (Object Type = 0) ............................................... 7 2.3.2 E-Mode Device Object (Object Type = 18) ............................. 13 2.3.3 Security object (Object Type = 17) .......................................... 40 2.4 Management Procedures .............................................................. 43 2.5 Configuration Procedures .............................................................. 44
 2.5.1 Introduction ............................................................................. 44 2.5.2 PB-Mode 1.2 core secure basic (based on PB1.0) ................. 48 2.5.3 PB-Mode 1.2 core secure enhanced (based on PB1.0) .......... 49 2.5.4 PB-Mode 1.2 with basic security ............................................. 50 2.5.5 PB-Mode 1.2 with enhanced security ...................................... 51 2.6 Example of specific sequence ....................................................... 52 2.7 Resynchronization of sequence counters ...................................... 52
 2.7.1 Enhanced security configuration ............................................. 52 2.7.2 Runtime .................................................................................. 53 2.8 Usage and context ........................................................................ 55 2.9 Profile definition ............................................................................. 55
 2.9.1 Security features ..................................................................... 55

 3 Impact and dependencies ....................................................................... 56
 3.1 System specification (“Handbook”) dependencies ........................ 56 3.2 Configuration interworking ............................................................. 56
 3.2.1 FDSK string encoding using QR code .................................... 56 3.3 Runtime Interworking .................................................................... 56
 3.3.1 Busload ................................................................................... 56 3.4 Registration and certification ......................................................... 56 3.5 Integration and common tool impact ............................................. 56
 3.5.1 General ................................................................................... 56 3.5.2 Discovery ................................................................................ 56 3.6 Risks and compatibility issues ....................................................... 56

 4 Appendix .................................................................................................. 57
 4.1 List of functions for a generic input channel .................................. 57
 4.1.1 DPT_PB_Function .................................................................. 57 4.2 Test vectors for Elliptic Curve algorithm ........................................ 58
 4.2.1 Example Using Elliptic Curve Domain Parameters over F2[163] and the Cofactor ..................................................................... 58

Savedate: Filename: page 3 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

## 1 Purpose, motivation and scope

 _This clause is not intended for inclusion in the KNX Specifications._

### 1.1 Abbreviation
BC: Broadcast

FDSK: Factory Default Setup Key

NA: Non Accessible device

PB: Push Button

SBC: System Broadcast

### 1.2 Current situation: PB-Mode 1.0
The existing PB-Mode Configuration Procedure (named 1.0 in the current document) allows
configuring devices without any tool.

This Configuration Procedure is defined only on RF media.

Here are the main characteristics of the PB-Mode 1.0:

   - Configuration starts from output device.

   - Supports RF Ready and RF Multi.

### 1.2.1 Limitations of PB-Mode 1.0
Nevertheless, this PB-Mode 1.0 has some limitations.

These limitations are the following.

   - Start of the procedure only from an output device (actuator) (strong limitation with
semi-directional input device)

   - No simple use of some action (Channel_Function_Actuator,
Channel_Function_Sensor, Set_Channel_Param, Channel_Param_Response)
without the knowledge of channels

   - No selection of the function

   - No support of the security

   - No possibility to use non accessible output devices

   - No explicit add link or delete link action

### 1.2.2 PB-Mode 1.1

- Here are the main characteristics of the PB-Mode 1.1.

   - Reuse of the PB-Mode 1.0 procedure with additional Properties (in another
Interface Object).

   - Selection of the function.

   - Start of the procedure from an input device.

   - Configuration of non-accessible output device.

   - Visualisation of links.

   - HMI to explicitly add or delete a link.

Savedate: Filename: page 4 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

### 1.2.3 PB-Mode 1.2
Here are the main characteristics of the PB-Mode 1.2.

   - Reuse of the PB-Mode 1.0 and PB-Mode 1.1 procedures with additional Properties.

   - Supports two ways of secure configuration:

      - Basic Security:

      - using the Diffie Hellman algorithm to make both devices agree on a shared
key.

      - Advanced Security:

      - using the FDSK key to secure all the configuration.

### 1.2.4 Overview
Here is an overview of every versions of PB-Mode Configuration Procedure.

The vertical direction (up to down) in this drawing represents the time flow of the Frame
exchange.

PB 1.0 PB 1.1 PB 1.2

Push-Button Push-Button
configuration configuration

extensions extensions

KSG579 KSG579

Push-Button Push-Button Push-Button Push-Button
configuration configuration configuration configuration

(RF Ready) (RF Multi) (RF Multi) (RF Multi + Security)

AN147 + AN148 AN147 + AN148 KSG579

Push-Button Push-Button
configuration configuration

extensions extensions

KSG579 KSG579

**Figure 1 – Overview of the different Push-button Configuration Procedures**

### 1.2.5 Compatibility
**Starting from output**

The following table gives the compatibilities between the different PB-Mode versions, in the
case where the output device starts the configuration.

Savedate: Filename: page 5 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


Push-Button
configuration

(RF Ready)


Push-Button
configuration

extensions

KSG579


Push-Button
configuration

extensions

KSG579


Push-Button
configuration
(RF Multi + Security)

KSG579


PB 1.1


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Input

device PB-Mode 1.0 PB-Mode 1.1 PB-Mode 1.2

Output device

PB-Mode 1.0 1.0 1.0 1.0

PB-Mode 1.1 1.0 1.0 1.0

PB-Mode 1.2 1.0* 1.0* 1.0*

**Figure 2 – Compatibility between PB versions (starting from output)**

*: the configuration in this case may not lead to a link establishment ; in the case where the
output device is PB-Mode 1.2, and if one of both devices requires a secure linking, then it
would not be possible to do this secure link because the PB 1.0 is the only style that allows
starting from the output device and PB 1.0 does not support security.

The entire table is PB-Mode 1.0 because this is the only style that allows starting from the
output device)

_Note for PB-Mode 1.0 without RF Multi_

In case of support of PB-Mode 1.0 without RF Multi (that means RF Ready only) in input and
in output devices, the configuration will be done in RF Ready only. For compatibility between
RF Ready and RF Multi device, please refer to [04].

**Starting from input**

The following table gives the compatibilities between the different PB-Mode versions, in the
case where the input device starts the configuration:

Output

device PB-Mode 1.0 PB-Mode 1.1 PB-Mode 1.2

Input device

PB-Mode 1.0     -     -     
PB-Mode 1.1     - 1.1 1.1

PB-Mode 1.2     - 1.1 1.2

Figure 3 – Compatibility between PB versions (starting from input)

### 1.3 Summary

This Application Note specifies several evolutions of the PB-Mode configuration Procedure.

Savedate: Filename: page 6 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Input<br>device<br>Output device|PB-Mode 1.0|PB-Mode 1.1|PB-Mode 1.2|
|---|---|---|---|
|PB-Mode 1.0|1.0|1.0|1.0|
|PB-Mode 1.1|1.0|1.0|1.0|
|PB-Mode 1.2|1.0*|1.0*|1.0*|

|Output<br>device<br>Input device|PB-Mode 1.0|PB-Mode 1.1|PB-Mode 1.2|
|---|---|---|---|
|PB-Mode 1.0|-|-|-|
|PB-Mode 1.1|-|1.1|1.1|
|PB-Mode 1.2|-|1.1|1.2|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

It specifies the extension of existing Properties and also the creation of new Properties.
These extensions are necessary to take into account the following requirements in the PB
configuration:

   - Secure configuration (authentication and confidentiality) using Diffie Hellman
algorithm or FDSK key ;

   - Start configuration from input device ;

   - Selection of function ;

   - Selection of non-accessible output devices.

The goal is to standardise the two procedures PB-Mode 1.1 and PB-Mode 1.2.

## 2 Specification

### 2.1 Terms and definitions

 _This clause is not intended for inclusion in the KNX Specifications._

This document does not introduce neither modify any terms or definitions.

### 2.2 Stack and communication

 _This clause is not intended for inclusion in the KNX Specifications._

This document does not introduce neither modify any stack services.

### 2.3 Resource definition or used Resources

#### 2.3.1 Device Object (Object Type = 0)

##### 2.3.1.1 PID_PB_CONFIG (PID = 59)

2.3.1.1.1 Encoding

 - Object Type: Device Object (Object Type = 0)

 - Property name: PID_PB_CONFIG

 - Property Datatype: PDT_GENERIC_04

 - Datapoint Type: none

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos Action** **7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0**

1 Enter_Config_Mode 0 0 0 1 0 0 0 0 **Version** 00h 00h

2 Start_Link

Number of Group

0 0 1 0 Manufacturer code

Objects to link

Savedate: Filename: page 7 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Pos|Action|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Pos**|** Action**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|**Pos**|** Action**|**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos**|** Action**|**7**|** 6**|**  5**|**   4**|**    3**|**     2**|**      1**|**       0**|**        7**|**         6**|**          5**|**           4**|**            3**|**             2**|**              1**|**               0**|**                7**|**                 6**|**                  5**|**                   4**|**                    3**|**                     2**|**                      1**|**                       0**|**                        7**|**                         6**|**                          5**|**                           4**|**                            3**|**                             2**|**                              1**|**                               0**|
|1|Enter_Config_Mode|0|0|0|1|0|0|0|0|<br>**Version**|<br>**Version**|<br>**Version**|<br>**Version**|<br>**Version**|<br>**Version**|<br>**Version**|<br>**Version**|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|2|<br>Start_Link|0|0|1|0|<br>Flags|<br>Flags|Subfunction|Subfunction|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Manufacturer code|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos Action** **7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0**

3 Channel_Function_Actuator 0 0 1 1 0 0 0 0 0 0 0 Channel Code[1] 00h

4 Channel_Function_Sensor 0 1 0 0 0 0 0 0 0 0 0 Channel Code[1] 00h

5 Set_Channel_Param 0 1 0 1 Flags Parameter Index=1 Value Value

6 Channel_Param_Response 0 1 1 0 Flags Parameter Index Value Value

7 Begin_Connection 0 1 1 1 0 0 0 0 00h 00h 00h

8 Set_Delete_Link Connection Code[2]

1 0 0 0 [Subfunc] or scene number Group Address

tion

or AckSlotNb[3]

9 Link_Response Connection Code
1 0 0 1 Flags Group Address

or AckSlotNb

10 Stop_Link 1 0 1 0 Flags 00h 00h 00h

11 Quit_Config_Mode 1 0 1 1 Flags 00h 00h 00h

12 Reset_Installation 1 1 0 0 0 0 0 0 00h 00h 00h

13 Features RF Multi Physical
1 1 0 1 [Subfuncti] **Security** Efficient linking

on capabilities

1
E-Mode Channel Code = 13 bits
Please refer to the « Channel Information » as part of the DD2-specification in [03].

2 Connection Code = 8 bit

Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for
each E-Mode Channel Specification given in [06]. An overview is given in [05].

For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be
used during configuration.

3 AckSlotNb = 6 bits (lsb)

##### 2.3.1.2 Action description

2.3.1.2.1 Overview
This clause details the different link procedure actions. The table below summarizes all the
described actions.

**Table 1 – Actions encoded on PID_PB_CONFIG - overview**

**Message**
**Pos.** **Action** **Service** **M/O**
**direction**

1 Enter_Config_Mode Actuator to all A_SystemNetworkParameter_Write M

2 Start_Link Sensor to all A_SystemNetworkParameter_Write M

3 Channel_Function_Actuator Actuator to A_SystemNetworkParameter_Write O
sensor

Savedate: Filename: page 8 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Pos|Action|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Pos**|** Action**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|**Pos**|** Action**|**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos**|** Action**|**7**|** 6**|**  5**|**   4**|**    3**|**     2**|**      1**|**       0**|**        7**|**         6**|**          5**|**           4**|**            3**|**             2**|**              1**|**               0**|**                7**|**                 6**|**                  5**|**                   4**|**                    3**|**                     2**|**                      1**|**                       0**|**                        7**|**                         6**|**                          5**|**                           4**|**                            3**|**                             2**|**                              1**|**                               0**|
|3|Channel_Function_Actuator|0|0|1|1|0|0|0|0|0|0|0|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|00h|00h|00h|00h|00h|00h|00h|00h|
|4|<br>Channel_Function_Sensor|0|1|0|0|0|0|0|0|0|0|0|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|<br>Channel Code1|00h|00h|00h|00h|00h|00h|00h|00h|
|5|<br>Set_Channel_Param|0|1|0|1|<br>Flags|<br>Flags|<br>Flags|<br>Flags|Parameter Index=1|Parameter Index=1|Parameter Index=1|Parameter Index=1|Parameter Index=1|Parameter Index=1|Parameter Index=1|Parameter Index=1|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|
|6|<br>Channel_Param_Response|0|1|1|0|<br>Flags|<br>Flags|<br>Flags|<br>Flags|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|
|7|<br>Begin_Connection|0|1|1|1|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|8|<br>Set_Delete_Link|1|0|0|0|Subfunc<br>tion|Subfunc<br>tion|Subfunc<br>tion|Subfunc<br>tion|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Connection Code2 <br>or scene number<br>or AckSlotNb3|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|
|9|Link_Response|1|0|0|1|<br>Flags|<br>Flags|<br>Flags|<br>Flags|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Connection Code<br>or AckSlotNb|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|
|10|Stop_Link|1|0|1|0|<br>Flags|<br>Flags|<br>Flags|<br>Flags|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|11|<br>Quit_Config_Mode|1|0|1|1|<br>Flags|<br>Flags|<br>Flags|<br>Flags|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|12|<br>Reset_Installation|1|1|0|0|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|13|<br>Features|1|1|0|1|Subfuncti<br>on|Subfuncti<br>on|Subfuncti<br>on|Subfuncti<br>on|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|RF Multi Physical<br>capabilities|**Security**|**Security**|**Security**|**Security**|**Security**|**Security**|**Security**|**Security**|Efficient linking|Efficient linking|Efficient linking|Efficient linking|Efficient linking|Efficient linking|Efficient linking|Efficient linking|
|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|1 <br>E-Mode Channel Code = 13 bits<br>Please refer to the « Channel Information » as part of the DD2-specification in [03].<br>2 <br>Connection Code = 8 bit<br>Connection Codes shall indicate which Datapoints can and cannot be linked together. The values Connection Codes are for<br>each E-Mode Channel Specification given in [06]. An overview is given in [05].<br>For the use of two bytes connection codes, six new properties (instead of Set_Delete_Link and Link_Response) shall be<br>used during configuration.<br>3 <br>AckSlotNb = 6 bits (lsb)|

|Pos.|Action|Message<br>direction|Service|M/O<br>M<br>M<br>O|
|---|---|---|---|---|
|1|Enter_Config_Mode|Actuator to all|A_SystemNetworkParameter_Write|A_SystemNetworkParameter_Write|
|<br>2|<br> Start_Link|Sensor to all|<br>A_SystemNetworkParameter_Write|<br>A_SystemNetworkParameter_Write|
|<br>3|<br> Channel_Function_Actuator|Actuator to<br>sensor|<br>A_SystemNetworkParameter_Write|<br>A_SystemNetworkParameter_Write|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Message**
**Pos.** **Action** **Service** **M/O**
**direction**

4 Channel_Function_Sensor Sensor to A_SystemNetworkParameter_Write O
actuator

5 Set_Channel_Param Actuator to A_SystemNetworkParameter_Write O
sensor

6 Channel_Param_Response Sensor to A_SystemNetworkParameter_Write O
actuator

7 Begin_Connection Actuator to A_SystemNetworkParameter_Write M
sensor

8 Set_Delete_Link Sensor to A_SystemNetworkParameter_Write M
actuator

9 Link_Response Actuator to A_SystemNetworkParameter_Write M
sensor

10 Stop_Link Sensor to all A_SystemNetworkParameter_Write M

11 Quit_Config_Mode Actuator to all A_SystemNetworkParameter_Write M

12 Reset_Installation To all A_SystemNetworkParameter_Write O

13 Features Sensor to A_SystemNetworkParameter_Write M
actuator or
actuator to
sensor

The service A_NetworkParameter_Write is used in some existing implementation as similar
to system broadcast communication (SBC) mode, even if it remains a broadcast service
(BC). This was used so because every RF device shall have a default Domain Address that
was equal to its KNX Serial Number. As the linking mechanisms are based on the KNX
Serial Number of the devices, the use of this service in BC allowed to do linking between
devices.

In PB-Mode configuration, no central Domain Address is defined for the installation where
the devices are located. The default Domain Address for RF S-Mode Profile is moreover
defined to 000000000000h. So only the service in SBC communication shall be used in this
case to be able to use the KNX Serial Number of the devices for linking.

For this Property, the support of the service A_SystemNetworkParameter_Write, in SBC
mode, is mandatory for any new system implementation of the PB-Mode procedure 1.1 or
higher. But, for compatibility reasons, the service A_NetworkParameter_Write may also be
used during configuration with devices that have version = 1.0.

**Compatibility between PB-Mode versions and use of SBC/BC for PID_PB_CONFIG:**

**Use of** **Use of**

**PB version used** **A_SystemNetworkParameter_Write** **A_NetworkParameter_Write**

**PB Version 1.0 used** Tx: not allowed Tx: mandatory
**between devices** Rx: not allowed Rx: mandatory

**PB version 1.1 or** Tx: mandatory Tx: not allowed
**higher used between** Rx: mandatory Rx: not allowed
**devices**

Savedate: Filename: page 9 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Pos.|Action|Message<br>direction|Service|M/O|
|---|---|---|---|---|
|4|Channel_Function_Sensor|Sensor to<br>actuator|A_SystemNetworkParameter_Write|O|
|5|Set_Channel_Param|Actuator to<br>sensor|A_SystemNetworkParameter_Write|O|
|6|Channel_Param_Response|Sensor to<br>actuator|A_SystemNetworkParameter_Write|O|
|7|Begin_Connection|Actuator to<br>sensor|A_SystemNetworkParameter_Write|M|
|8|Set_Delete_Link|Sensor to<br>actuator|A_SystemNetworkParameter_Write|M|
|9|Link_Response|Actuator to<br>sensor|A_SystemNetworkParameter_Write|M|
|10|Stop_Link|Sensor to all|A_SystemNetworkParameter_Write|M|
|<br>11|<br> Quit_Config_Mode|Actuator to all|<br>A_SystemNetworkParameter_Write|M|
|<br>12|<br> Reset_Installation|To all|<br>A_SystemNetworkParameter_Write|O|
|<br>13|<br> Features|Sensor to<br>actuator or<br>actuator to<br>sensor|<br>A_SystemNetworkParameter_Write|M|

|PB version used|Use of<br>A SystemNetworkParameter Write<br>_ _|Use of<br>A NetworkParameter Write<br>_ _|
|---|---|---|
|**PB Version 1.0 used**<br>**between devices**|<br>Tx: not allowed<br>Rx: not allowed|<br>Tx: mandatory<br>Rx: mandatory|
|**PB version 1.1 or**<br>**higher used between**<br>**devices**|Tx: mandatory<br>Rx: mandatory|Tx: not allowed<br>Rx: not allowed|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

2.3.1.2.2 PID_PB_CONFIG (Enter_Config_Mode)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos Action** **7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0**

1 Enter_Conf_Mode 0 0 0 1 0 0 0 0 Version 00h 00h

This command shall be sent by a device to be linked when Configuration Mode becomes
active in the device. (The way how Configuration Mode is activated in a device is
implementation specific.)

Next Frame:

PID_PB_CONFIG (Start_Link).

Format:

The octet 12 defines a version:

   - 00h: existing PB 1.0

   - 01h: denotes that the existing PB 1.0 procedure is modified. This means also that
the PB procedure supports security.

Error handling:

   - If a Frame is received with unsupported values of the data fields, then the Frame is
ignored, and the procedure is aborted. If the sender (output device) wants to
continue the procedure, it shall re-send the Frame with another value (e.g. Version
= 00h), that has better chance to be supported by the receiver (input device).

2.3.1.2.3 PID_PB_CONFIG (Features, Subfunction, Physical requirements)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos Action** **7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0**

RF Multi Security

13 Features 1 1 0 1 [Subfun] Physical capabilities and Efficient linking

ction

capabilities requirements

This service shall be sent in both directions.

**Subfunction b3b2b1b0**

   - 0: The device shall use this service with the subfunction 0 to send its RF Multi
physical requirements to the other devices. Octet 12 shall contain the RF Multi
physical requirements of the device.

   - 1: The device shall use this service with the subfunction 1 to send its RF Multi

physical and Security requirements to the other devices. Octet 12 shall contain
the RF Multi physical requirements of the device. Octet 13 shall contain the
Security requirements/capabilities of the device.

Savedate: Filename: page 10 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Pos|Action|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Pos**|<br>** Action**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|**Pos**|<br>** Action**|**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos**|<br>** Action**|**7**|** 6**|**  5**|**   4**|**    3**|**     2**|**      1**|**       0**|**        7**|**         6**|**          5**|**           4**|**            3**|**             2**|**              1**|**               0**|**                7**|**                 6**|**                  5**|**                   4**|**                    3**|**                     2**|**                      1**|**                       0**|**                        7**|**                         6**|**                          5**|**                           4**|**                            3**|**                             2**|**                              1**|**                               0**|
|1|Enter_Conf_Mode|0|0|0|1|0|0|0|0|Version|Version|Version|Version|Version|Version|Version|Version|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|

|Pos|Action|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Pos**|<br>** Action**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|**Pos**|<br>** Action**|**Command**|**Command**|**Command**|**Command**|<br>**Flags**|<br>**Flags**|<br>**Flags**|<br>**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos**|<br>** Action**|**7**|** 6**|**  5**|**   4**|**    3**|**     2**|**      1**|**       0**|**        7**|**         6**|**          5**|**           4**|**            3**|**             2**|**              1**|**               0**|**                7**|**                 6**|**                  5**|**                   4**|**                    3**|**                     2**|**                      1**|**                       0**|**                        7**|**                         6**|**                          5**|**                           4**|**                            3**|**                             2**|**                              1**|**                               0**|
|13|Features|1|1|0|1|Subfun<br>ction|Subfun<br>ction|Subfun<br>ction|Subfun<br>ction|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|RF Multi<br>Physical<br>capabilities|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|Security<br>capabilities and<br>requirements|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|<br>Efficient linking|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

The device shall also use this service with the subfunction 1 to send its RF
Multi physical, its Security requirements and its Efficient Linking features to the
other devices. Octet 14 shall contain the Efficient Linking features.

**Octet 12: RF Multi Physical capabilities**

Flags b7b6b5b4b3b2b1b0:

   - Bit b7-b5: reserved (might be used for encryption and authentication)

   - Bit b4: management (Tx and Rx) of the physical acknowledge (fast Ack)

    - b4 = 0b: The current channel shall not be able to manage a physical

acknowledge if requested in runtime.

    - b4 = 1b: The current channel shall be able to manage a physical acknowledge if

requested in runtime.

   - Bit b3: transmission on the slow Sx RF channels

    - b3 = 0b: The current channel shall not be able to transmit Frames on the slow Sx

RF channels.

    - b3 = 1b: The current channel shall be able to transmit Frames on the slow Sx RF

channels.

   - Bit b2: transmission on the fast Fx RF channels

    - b2 = 0b: The current channel shall not be able to transmit Frames on the fast Fx

RF channels.

    - b2 = 1b: The current channel shall be able to transmit Frames on the fast Fx RF

channels.

   - Bit b1: scan of the slow Sx RF channels

    - b1 = 0b: The current channel shall not scan the slow Sx RF channels in runtime

and thus shall not be able to receive Frames transmitted on a slow Sx
RF channel.

    - b1 = 1b: The current channel shall not scan the slow Sx RF channels in runtime

and thus shall be able to receive Frames transmitted on a slow Sx RF
channel.

   - Bit b0: scan of the fast Fx RF channels

    - b0 = 0b: The current channel shall not scan the fast Fx RF channels in runtime

and shall thus not be able to receive Frames transmitted on a fast Fx
RF channel.

    - b0 = 1b: The current channel shall scan the fast Fx RF channels in runtime and

shall thus be able to receive Frames transmitted on a fast Fx RF
channel.

**Octet 13: Security capabilities or requirements**

This defines the capabilities or the requirements of the current channel concerning security.

This defines the same characteristics for every Tx Datapoints (outputs) and for Rx of the
same channel. In other words, either all the links are secure either all the links are non
secure. (There cannot be a mixture between secure and non secure links.)

The device capabilities are always at least identical or greater than the device requirements.

Savedate: Filename: page 11 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

A device may refuse a link if the communication partner does not offer the required
capabilities. The requirements of Tx of the sender are compared with the Rx requirements of
the receiver: if these do not match or are higher, then the link is refused.

Concerning the key definition algorithm, it is required in a device that supports security to
support both FDSK as well as DH procedure (in other words basic and enhanced
procedures).

Flags b7b6b5b4b3b2b1b0:

   - Bit b7-b5: reserved

   - Bit b4: security capabilities for configuration and runtime

      - 0b: nothing

      - 1b: the device supports security encryption and decryption (both
authentication or authentication + confidentiality are supported) (it is not
possible to support authentication only as capabilities)

   - Bit b3-b2: security requirement for Tx Datapoints for configuration and runtime

      - 00b: nothing

      - 01b: every Datapoints of this channel require authentication only

      - 10b: every Datapoints of this channel require authentication and
confidentiality

      - 11b: reserved

   - Bit b1-b0: security requirement for Rx Datapoints for configuration and runtime

      - 00b: nothing

      - 01b: every Datapoints of this channel require authentication only

      - 10b: every Datapoints of this channel require authentication and
confidentiality

      - 11b: reserved

**Octet 14: Efficient linking features**

   - 00: the device does not support the efficient linking feature.

   - 01 ... 254: the device supports the efficient linking feature, and the number of
links done in each Frame is the value of this byte. This is used in Property
PID_EFFICIENT_LINKING. Depending on the Service ID of this Property, the
number of bytes per link may differ. In the current version of the specification, the
maximum size of one link is 5 bytes (case of Service ID
ADD_TX_LINK_REQUEST).

EXAMPLE 1 The value 4 means that each efficient linking Frame shall contain 4 links.

   - 255: reserved value. This shall not be used.

NOTE 1 The number of links done in each efficient Frame shall also respect the requirement concerning
the maximum APDU length (defined by PID_MAX_APDU_LENGTH). In other words, the longest Frame sent on
PID_EFFICIENT_LINKING, using the number of links defined by this parameter, shall not be longer than the
maximum APDU length.
Next Frame:

PID_PB_KEY_ESTABLISH_REQUEST (in Security Object Type).

Savedate: Filename: page 12 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Compatibility with PB 1.0:

   - If input device do not send any response to the request from output device with
subfunction = 1, then this means that the input device is 1.0. The output device shall
then send the Feature Frame with subfunction = 0.

   - If the input device receives this Frame from the output device with subfunction = 0,
then it shall send its features with subfunction = 0.

Optional:

Yes.

Error handling:

   - If this Frame is not received, then this means that the corresponding device has no
requirement concerning RF Multi and Security.

   - If the Frame is received with unsupported values, then

    - the device shall reply with the minimum of requirement between the other
device and itself (for example “authentication only” + “authentication and
confidentiality” => “authentication only”)

    - if the device has already sent its features, then it shall consider for the rest of
the procedure the minimum of requirement between both devices.

2.3.1.2.4 PID_PB_CONFIG (Quit_Config_Mode)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos Action** **7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0**

11 Quit_Config_Mode 1 0 1 1 Flags 00h 00h 00h

This action shall be sent by the actuator and shall indicate to the sensor that the link process
for the selected channel shall be finished.

In case of abort, all devices shall immediately return to normal mode.

Flags:

0 a c t

0 = no error
1 = timer expiration

0 = no error
1 = no corresponding parameter / channel code

0 = no error
1 = abort

#### 2.3.2 E-Mode Device Object (Object Type = 18)
In the E-Mode Device Object, new Properties are defined in order to be able to support the
PB 1.1 and 1.2 procedures.

Savedate: Filename: page 13 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Pos|Action|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Pos**|<br>** Action**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|**Pos**|<br>** Action**|**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos**|<br>** Action**|**7**|** 6**|**  5**|**   4**|**    3**|**     2**|**      1**|**       0**|**        7**|**         6**|**          5**|**           4**|**            3**|**             2**|**              1**|**               0**|**                7**|**                 6**|**                  5**|**                   4**|**                    3**|**                     2**|**                      1**|**                       0**|**                        7**|**                         6**|**                          5**|**                           4**|**                            3**|**                             2**|**                              1**|**                               0**|
|11|Quit_Config_Mode|1|0|1|1|Flags|Flags|Flags|Flags|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|

|0|a|c|t|
|---|---|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Table 2 – Properties of the E-Mode Device Object, used for PB 1.1 and PB 1.2 - overview**

**Property identifier (PID)** **Property Datatype** **Description** **O/M**
90 PID_PB_START_CONFIG PDT_GENERIC_05 Start a PB 1.1 M
configuration session

91 PID_PB_INPUT_SENSOR PDT_GENERIC_06 Input channel M
information

92 PDT_GENERIC_06 Accessible output O
PID_PB_OUTPUT_ACTUATOR channel information

93 PID_PB_OUTPUT_- PDT_GENERIC_06 Link request from an M
ACTUATOR_SET_LINK output channel

94 PDT_GENERIC_06 Non accessible output O
PID_PB_NA_OUTPUT_ACTUAT channel information
OR

95 PDT_GENERIC_04 Number of channels in a O
PID_PB_NA_OUTPUT_ACTUAT non-accessible output
OR_NB device for numbering

process

96 PID_PB_START_LINK PDT_GENERIC_06 Start the standard 1.0 M
Push-Button
configuration process

97 PID_PB_STOP_LINK PDT_GENERIC_06 Abort the current link M
request

98 PID_PB_QUIT_CONFIG PDT_GENERIC_02 Stop the current PB 1.1 M
configuration session

99 PID_PB_DELETE_CHANNEL PDT_GENERIC_05 Delete a channel link or O
all channels product

100 PDT_GENERIC_06 Number allocated to the O
PID_PB_NA_OUTPUT_ACTUAT first channel of a nonOR_NB_RESP accessible output device

101 PDT_GENERIC_06 Link request from an O
PID_PB_INPUT_SENSOR_SET_ input channel
LINK

102 PID_PB_START_CONFIG_- PDT_GENERIC_16 Start a PB 1.1 O
REMOTE configuration session

from remote using the
input security key

103 PDT_VARIABLE_LENGTH Efficient add/remove of O
PID_PB_EFFICIENT_LINKING links

The use of the service A_SystemNetworkParameter_Write, in SBC mode, is mandatory for
these Properties and for any new system implementation of the PB-Mode procedure 1.1 or
higher.

**Sequence Number in secured Frames**

In every received secured Frame, the Sequence Number Field (SNF) is checked. The value
of the SNF of the received Frame is compared to the one that the device has stored for the
distant device.

If both devices did not know each other before the starting of the procedure, then the device
shall accept the received SNF from the distant and store it for later communication.

Savedate: Filename: page 14 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Property identifier (PID)|Property Datatype|Description|O/M|
|---|---|---|---|
|90 PID_PB_START_CONFIG|PDT_GENERIC_05|Start  a PB 1.1<br>configuration session|M|
|91 PID_PB_INPUT_SENSOR|PDT_GENERIC_06|Input channel<br>information|M|
|92<br>PIDPBOUTPUTACTUATOR|PDT_GENERIC_06|Accessible output<br>channel information|O|
|___<br>93 PID_PB_OUTPUT_-<br>ACTUATORSETLINK|PDT_GENERIC_06|Link request from an<br>output channel|M|
|__<br>94<br>PID_PB_NA_OUTPUT_ACTUAT<br>OR|PDT_GENERIC_06|Non accessible output<br>channel information|O|
|95<br>PID_PB_NA_OUTPUT_ACTUAT<br>OR_NB|PDT_GENERIC_04|Number of channels in a<br>non-accessible output<br>device for numbering<br>process|O|
|96 PID_PB_START_LINK|PDT_GENERIC_06|Start the standard 1.0<br>Push-Button<br>configuration process|M|
|97 PID_PB_STOP_LINK|PDT_GENERIC_06|Abort the current link<br>request|M|
|98 PID_PB_QUIT_CONFIG|PDT_GENERIC_02|Stop the current PB 1.1<br>configuration session|M|
|99 PID_PB_DELETE_CHANNEL|PDT_GENERIC_05|Delete a channel link or<br>allchannels product|O|
|100<br>PID_PB_NA_OUTPUT_ACTUAT<br>ORNBRESP|PDT_GENERIC_06|Number allocated to the<br>first channel of a non-<br>accessible output device|O|
|__<br>101<br>PID_PB_INPUT_SENSOR_SET_<br>LINK|PDT_GENERIC_06|Link request from an<br>input channel|O|
|102 PID_PB_START_CONFIG_-<br>REMOTE|PDT_GENERIC_16|Start a PB 1.1<br>configuration session<br>from remote using the<br>input security key|O|
|103<br>PIDPBEFFICIENTLINKING|PDT_VARIABLE_LENGTH|Efficient add/remove of<br>links|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

If both devices already know each other, the following shall apply.

   - In the case where the two SNF values are equal, then a resynchronization of the
SNF has to be started..

   - In the case where the stored SNF is smaller than the received value, then the
procedure can continue also and the stored SNF has to be updated with the
received one.

   - In the case where the stored SNF is greater than the received value, then a
resynchronization of the SNF has to be started.

For all details concerning resynchronisation of Sequence Numbers, please refer to [02].

**Tool key use**

Every time a Frame is sent encrypted, it shall set the T bit (Tool Access) of the Security
Control Field (SCF), in order to denote that a Tool Key is used (and not a run-time key).

##### 2.3.2.1 PID_PB_START_CONFIG (PID = 90)

**●** **Property name:** PB Start Config

**●** **Property Datatype:** PDT_GENERIC_05

**●** **Datapoint Type:** None

Mandatory/optional:

Mandatory.

Description:

This message is used to set all the devices in the PB configuration state. Any output device
receiving this message may enter its configuration mode and displays any MMI to show that
to the user.

Security:

This Frame may be used encrypted or not, depending on the reception of the PID_PB_START_CONFIG_REMOTE Frame or not.

If the Property PID_PB_START_CONFIG_REMOTE is received then the enhanced security
mode is activated, and the next Frames shall be sent encrypted. If this Frame is used
encrypted, the used key is the FDSK of the input device.

If the Property PID_PB_START_CONFIG_REMOTE is not received, then the rest of the
procedure shall be sent unencrypted.

Direction:

Input device to all devices.

Next Frame:

PID_PB_INPUT_SENSOR or PID_PB_NA_OUTPUT_ACTUATOR_NBFormat:

Octet 11 Octet 12 Octet 13 Octet 14 Octet 15

Manufacturer Manufacturer Device type Device type

Protocol Version

Code (MSB) Code (LSB) (MSB) (LSB)

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Savedate: Filename: page 15 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Octet 11|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 12|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 13|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 14|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 15|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (MSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Manufacturer<br>Code (LSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(MSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Device type<br>(LSB)|Protocol Version|Protocol Version|Protocol Version|Protocol Version|Protocol Version|Protocol Version|Protocol Version|Protocol Version|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

ManufCode 2 octets Manufacturer Code.

DevId 2 octets Device Identifier

Version 1 octet Maximum Protocol version supported by the device.

1. 00h: PB-Mode 1.1
2. 01h: PB-Mode 1.2

Error handling:

   - If protocol version value is not supported by the output device, then the output
device sends back the minimum common standard procedure to be used (for
example 1.1 in its PID_PB_OUTPUT_ACTUATOR message).

##### 2.3.2.2 PID_PB_INPUT_SENSOR (PID = 91)

**●** **Property name:** PB Input Sensor

**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** none

Mandatory/optional:

Mandatory.

Description:

This message is sent by an input channel to inform the output devices of the currently
selected input channel.

The MMI used by the installer to select the input channel is implementation specific.

This message is also sent after the execution of the PB-Mode 1.0 procedure, in order to
inform the output devices about the result of PB 1.0 procedure (success or error).

Security:

May be sent encrypted or not.

Next Frame:

PID_PB_OUTPUT_ACTUATOR or PID_PB_NA_OUTPUT_ACTUATOR.

Direction:

Input device to all devices.

Savedate: Filename: page 16 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|msb lsb|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Msb lsb|Col10|Col11|Col12|Col13|Col14|Col15|Col16|msb lsb|Col18|Col19|Col20|Col21|Col22|Col23|Col24|msb lsb|Col26|Col27|Col28|Col29|Col30|Col31|Col32|msb lsb|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|ManufCode|2 octets|Manufacturer Code.|
|DevId|2 octets|Device Identifier|
|Version|1 octet|Maximum Protocol version supported by the device.<br>1. 00h: PB-Mode 1.1<br>2. 01h: PB-Mode 1.2|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Format:

octet 11 octet 12 octet 13 octet 14 octet 15 octet 16

Reserved PV FRCounter INx Function NbOfLink NaNbSel

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Name** **Size** **Description**

Reserved 5 bits Reserved

Protocol 3 bits Version of the protocol:
Version (PV) 000 = KNX RF Ready stack implemented in the device (PB 1.0 on

RF Ready)
001 = KNX RF Multi stack implemented in the device (PB 1.0 on
RF Multi)
010 = PB-Mode 1.1
011 = PB-Mode 1.2

FRCounter 1 octet Factory restore counter, it’s the value of the factory restore counter
in the input device. This value is used by the output device to
check its associations in its table and clean the table if necessary.

INx 5 bits Index of the input channel to link.
Each channel inside the input device must have a unique index to
identify it.
The input number INx indicates which input channel has been
selected in the input device. For example if an input device is made
of 4 inputs channels, they are numbered 0 to 3 so that the output
device can make the difference between the input channels.

FixedVar 1 bit Indicates if the the PB function is a fixed PB function (e.g.
temperature sensor) or is variable function (e.g. generic pushbutton. The PB function can take several different values).
0 = variable PB function
1 = fixed PB function

Reserved 2 bits Reserved

Function 1 octet Current PB function set in the input channel.
This is an enumerated value (see DPT_PB_Function in appendix A
for the list).

Savedate: Filename: page 17 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|PV|PV|PV|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter||||INx|INx|INx|INx|INx|Function|Function|Function|Function|Function|Function|Function|Function|NbOfLink|NbOfLink|NbOfLink|NbOfLink|NbOfLink|NbOfLink|NbOfLink|NbOfLink|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Protocole<br>version|Protocole<br>version|Protocole<br>version|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|Reserved<br>Reserved|Reserved<br>Reserved|FixedVar|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Reserved|5 bits|Reserved|
|Protocol<br>Version (PV)|<br>3 bits|Version of the protocol:<br>000 = KNX RF Ready stack implemented in the device (PB 1.0 on<br>RF Ready)<br>001 = KNX RF Multi stack implemented in the device (PB 1.0 on<br>RF Multi)<br>010 = PB-Mode 1.1<br>011 = PB-Mode 1.2|
|FRCounter|1 octet|Factory restore counter, it’s the value of the factory restore counter<br>in the input device. This value is used by the output device to<br>check its associations in its table and clean the table if necessary.|
|INx|5 bits|Index of the input channel to link.<br>Each channel inside the input device must have a unique index to<br>identify it.<br>The input number INx indicates which input channel has been<br>selected in the input device. For example if an input device is made<br>of 4 inputs channels, they are numbered 0 to 3 so that the output<br>device can make the difference between the input channels.|
|FixedVar|1 bit|Indicates if the the PB function is a fixed PB function (e.g.<br>temperature sensor) or is variable function (e.g. generic push-<br>button. The PB function can take several different values).<br>0 = variable PB function<br>1 = fixed PB function|
|Reserved|2 bits|Reserved|
|Function|1 octet|Current PB function set in the input channel.<br>This is an enumerated value (see DPT_PB_Function in appendix A<br>for the list).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

NbOfLink 1 octet Number of output channels already linked with this input channel
This parameter is used by the output channel to check whether it
can request a change of the current PB function of the input
channel during the configuration. This is useful especially when it
remains only one link and that this link is made with the current
output channel. In this case, the installer does not need to remove
the last link before he changes the PB function (valid only if it is a
variable PB function).

NaNbSel 1 octet Non-accessible output channel selector
The NaNbSel parameter is the number of the non-accessible
output channel which is currently selected by the input device. It is
used during the process of cycling through the non-accessible
output channels. This number is one of the numbers allocated by
the master input device during the numbering of the nonaccessible output devices. This parameter is not significant and set
to 0xFF during a configuration with accessible output devices.
See chapter on the non-accessible devices for more details.

Error handling:

   - If this Frame is not received by an output device after a certain time, then the output
device shall quit its configuration mode and abort the procedure.

##### 2.3.2.3 PID_PB_OUTPUT_ACTUATOR (PID = 92)

**●** **Property name:** PB Output Actuator

**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** none

Mandatory/optional:

Optional.

Description:

This message is sent by the output channel (selected for the link) to inform the input channel
of the currently selected output channel and the function actually selected. This is sent only if
the output device is in configuration mode. This is sent each time another function is selected.

The MMI used to choose the function is implementation specific.

Another output device (with another function) may be selected and send this Frame. In this
case the first selected output device shall automatically update its MMI to reflect that it is no
more selected.

Security:

This Frame may be sent encrypted or not.

If sent encrypted, the used key is the FDSK of the input device.

Direction:

Output device to input device.

Savedate: Filename: page 18 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Name|Size|Description|
|---|---|---|
|NbOfLink|1 octet|Number of output channels already linked with this input channel<br>This parameter is used by the output channel to check whether it<br>can request a change of the current PB function of the input<br>channel during the configuration. This is useful especially when it<br>remains only one link and that this link is made with the current<br>output channel. In this case, the installer does not need to remove<br>the last link before he changes the PB function (valid only if it is a<br>variable PB function).|
|NaNbSel|1 octet|Non-accessible output channel selector<br>The NaNbSel parameter is the number of the non-accessible<br>output channel which is currently selected by the input device. It is<br>used during the process of cycling through the non-accessible<br>output channels. This number is one of the numbers allocated by<br>the master input device during the numbering of the non-<br>accessible output devices. This parameter is not significant and set<br>to 0xFF during a configuration with accessible output devices.<br>See chapter on the non-accessible devices for more details.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Next Frame:


PID_PB_OUTPUT_ACTUATOR_SET_LINK.

Format:


7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Name Size Description

DevId 2 octets Device Identifier

INx 5 bits Index of the input channel to link. Each input channel in the input
device must have a unique index to identify it.

Protocol 3 bits Version of the protocol:
Version 000 = KNX RF Ready stack implemented in the device (PB 1.0 on
(PV) RF Ready)

001 = KNX RF Multi stack implemented in the device (PB 1.0 on
RF Multi)
010 = PB-Mode 1.1
011 = PB-Mode 1.2

OUTx 5 bits Index of the output channel to link.
Each channel in the output device must have a unique index to
identify it.
The output number OUTx indicates which output channel has
been selected in the output device. For example if an output
device is made of 4 outputs channels, they are numbered 0 to 3 so
that the input device can make the difference between the output
channels.

Reserved 3 bits Reserved

Function 1 octet Current selected PB function in the OUTx channel.
The PB function index is the value of one of the PB functions. It
can be one of the PB functions supported by the output channel or
the PB function imposed by the input channel. See
DPT_PB_Function list of function in appendix A.

FRCounter 1 octet Factory restore counter, it’s the number of the channel factory
restore.

Savedate: Filename: page 19 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|PV|PV|PV|INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>Protocole<br>Version|<br>Protocole<br>Version|<br>Protocole<br>Version|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|DevId|2 octets|Device Identifier|
|INx|5 bits|Index of the input channel to link. Each input channel in the input<br>device must have a unique index to identify it.|
|Protocol<br>Version<br>(PV)|3 bits|Version of the protocol:<br>000 = KNX RF Ready stack implemented in the device (PB 1.0 on<br>RF Ready)<br>001 = KNX RF Multi stack implemented in the device (PB 1.0 on<br>RF Multi)<br>010 = PB-Mode 1.1<br>011 = PB-Mode 1.2|
|OUTx|5 bits|Index of the output channel to link.<br>Each channel in the output device must have a unique index to<br>identify it.<br>The output number OUTx indicates which output channel has<br>been selected in the output device. For example if an output<br>device is made of 4 outputs channels, they are numbered 0 to 3 so<br>that the input device can make the difference between the output<br>channels.|
|Reserved|3 bits|Reserved|
|Function|1 octet|Current selected PB function in the OUTx channel.<br>The PB function index is the value of one of the PB functions. It<br>can be one of the PB functions supported by the output channel or<br>the PB function imposed by the input channel. See<br>DPT_PB_Function list of function in appendix A.|
|FRCounter|1 octet|<br>Factory restore counter, it’s the number of the channel factory<br>restore.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Error handling:



   - If the input device that has sent the PID_PB_INPU_SENSOR Frame has not
received any PID_PB_OUTPUT_ACTUATOR during a certain time, then it shall quit
its configuration mode and abort the procedure.

##### 2.3.2.4 PID_PB_OUTPUT_ACTUATOR_SET_LINK (PID = 93)



**●** **Property name:** PB Output Actuator Set Link

**●** **Property Datatype:** PDT_GENERIC_06



**●** **Datapoint Type:** None

Mandatory/optional:

Mandatory.


Description:

This message is sent by the output channel (selected for the link) to inform the input channel
that a link is requested by the user between the currently selected input channel (with given
channel input index) and the output channel (with given channel output index), and using the
given function identifier.

The output device shall send this Frame only after having checked the compatibility between
the current selected function from input device (if any) and the actually selected function by
the user.


When the input device receives this Frame, it shall first check all the information and decide
if the link procedure shall be launched or not.

Security:


Encrypted or not.

Direction:


Output device to input device.

Next Frame:


PID_START_LINK

Format:


7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Savedate: Filename: page 20 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|PV|PV|PV|INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|FRCounter|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|Msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>msb<br> <br>lsb|<br>Protocole<br>Version|<br>Protocole<br>Version|<br>Protocole<br>Version|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

DevId 2 octets Device Identifier

INx 5 bits Index of the input channel to link. Each input channel in the input device
must have a unique index to identify it.

Protocol 3 bits Version of the protocol:
Version (PV) 000b = KNX RF Ready stack implemented in the device

001b = KNX RF Multi stack implemented in the device
010b = PB-Mode 1.1
011b = PB-Mode 1.2

OUTx 5 bits Index of the output channel to link.
Each channel in the output device must have a unique index to identify it.
The output number OUTx indicates which output channel has been
selected in the output device. For example if an output device is made of 4
outputs channels, they are numbered 0 to 3 so that the input device can
make the difference between the output channels.

Reserved 3 bits Reserved

Function 1 octet Current selected PB function in the OUTx channel.
The PB function index is the value of one of the PB functions. It can be
one of the PB functions supported by the output channel or the PB
function imposed by the input channel. See DPT_PB_Function list of
function in appendix A.

FRCounter 1 octet Factory restore counter, it’s the number of the channel factory restore.

Error handling:

   - If the input device that has sent the PID_PB_INPU_SENSOR Frame has not
received any PID_PB_OUTPUT_ACTUATOR during a certain time, then it shall quit
its configuration mode and abort the procedure.

##### 2.3.2.5 PID_PB_NA_OUTPUT_ACTUATOR (PID = 94)

**●** **Property name:** PB Non Accessible Output Actuator

**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** none

Mandatory/optional:

Optional.

Description:

This message is sent by the non-accessible output channel after it has been selected by the
input device. It informs the input channel that the output channel has been successfully
selected in the output device.

Security:

Encrypted or not.

Savedate: Filename: page 21 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Name|Size|Description|
|---|---|---|
|DevId|2 octets|Device Identifier|
|INx|5 bits|Index of the input channel to link. Each input channel in the input device<br>must have a unique index to identify it.|
|Protocol<br>Version (PV)|<br>3 bits|Version of the protocol:<br>000b = KNX RF Ready stack implemented in the device<br>001b = KNX RF Multi stack implemented in the device<br>010b = PB-Mode 1.1<br>011b = PB-Mode 1.2|
|OUTx|5 bits|Index of the output channel to link.<br>Each channel in the output device must have a unique index to identify it.<br>The output number OUTx indicates which output channel has been<br>selected in the output device. For example if an output device is made of 4<br>outputs channels, they are numbered 0 to 3 so that the input device can<br>make the difference between the output channels.|
|Reserved|3 bits|Reserved|
|Function|1 octet|Current selected PB function in the OUTx channel.<br>The PB function index is the value of one of the PB functions. It can be<br>one of the PB functions supported by the output channel or the PB<br>function imposed by the input channel. See DPT_PB_Function list of<br>function in appendix A.|
|FRCounter|1 octet|Factory restore counter, it’s the number of the channel factory restore.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Direction:


Non accessible output device to input device.

Next Frame:


Format:

Octet 11 Octet 12 Octet 13 Octet 14 Octet 15 Octet 16

Reserved Reserved INx OUTx Function NaNbSel

7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0

**Name** **Size** **Description**

Reserved 2 octets Reserved

INx 5 bits Index of the input channel to link. Each input channel in the input device
must have a unique index to identify it.

Reserved 3 bits Reserved

OUTx 5 bits Index of the output channel to link.
Each channel in the output device must have a unique index to identify it.
The output number OUTx indicates which output channel has been
selected in the output device. For example if an output device is made of 4
outputs channels, they are numbered 0 to 3 so that the input device can
make the difference between the output channels.

InGroup 1 bit Indicates if the OUTx is currently linked with the INx

Reserved 2 bits Reserved

Function 1 octet Current PB function selected in the OUTx channel.
The PB function index is the value of the PB function (unique for a nonaccessible output channel). See DPT_PB_Function list of function in
appendix A.

NaNbSel 1 octet Number of the non-accessible output channel. This number is the one
which has been allocated by the master input device during the numbering
process.

Error handling:

Savedate: Filename: page 22 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 13|Octet 13|Octet 13|Octet 13|Octet 13|Octet 13|Octet 13|Octet 13|Octet 14|Octet 14|Octet 14|Octet 14|Octet 14|Octet 14|Octet 14|Octet 14|Octet 15|Octet 15|Octet 15|Octet 15|Octet 15|Octet 15|Octet 15|Octet 15|Octet 16|Octet 16|Octet 16|Octet 16|Octet 16|Octet 16|Octet 16|Octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved||||INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved|<br>Reserved<br>Reserved|<br>InGroup|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Reserved|2 octets|Reserved|
|INx|5 bits|Index of the input channel to link. Each input channel in the input device<br>must have a unique index to identify it.|
|Reserved|3 bits|Reserved|
|OUTx|5 bits|Index of the output channel to link.<br>Each channel in the output device must have a unique index to identify it.<br>The output number OUTx indicates which output channel has been<br>selected in the output device. For example if an output device is made of 4<br>outputs channels, they are numbered 0 to 3 so that the input device can<br>make the difference between the output channels.|
|InGroup|1 bit|Indicates if the OUTx is currently linked with the INx|
|Reserved|2 bits|Reserved|
|Function|1 octet|Current PB function selected in the OUTx channel.<br>The PB function index is the value of the PB function (unique for a non-<br>accessible output channel). See DPT_PB_Function list of function in<br>appendix A.|
|NaNbSel|1 octet|Number of the non-accessible output channel. This number is the one<br>which has been allocated by the master input device during the numbering<br>process.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

##### 2.3.2.6 PID_PB_NA_OUTPUT_ACTUATOR_NB (PID = 95)



**●** **Property name:** PB Non Accessible Output Actuator Numbering

**●** **Property Datatype:** PDT_GENERIC_04



**●** **Datapoint Type:** none

Mandatory/optional:

Optional.


Description:

Only the non-accessible output device sends this message during the numbering process.
The non-accessible output device whose timeout has elapsed sends this message. This
message contains the number of channels to be numbered by the n-a output device for its
output channels.


The message informs also the other n-a devices that are not yet numbered that a n-a output
device is requesting allocation numbers to the master input device and thus should stop their
current temporization.

When the not yet numbered n-a output device receives the number allocation message from
the master input device, they restart their temporization.

The numbering process is initiated after reception of the PID_PB_START_CONFIG message.

Security:


Encrypted or not.

Direction:


Non-accessible output device to all.

Next Frame:


Format:

octet 11 octet 12 octet 13 octet 14

DevId (MSB) DevId (LSB) Reserved CurrNaNb

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Savedate: Filename: page 23 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|octet 11|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 12|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 13|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 14|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|CurrNaNb|CurrNaNb|CurrNaNb|CurrNaNb|CurrNaNb|CurrNaNb|CurrNaNb|CurrNaNb|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|Msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

DevId 2 octets Device Identifier

Reserved 1 octet Reserved

NaChannelNb 1 octet Number of non-accessible output channel that are located in
the non-accessible device. This value is used by the master
input device to determine the last auto-auto number of the last
non-accessible output channel.

Error handling:

|Name|Size|Description|
|---|---|---|
|DevId|2 octets|Device Identifier|
|Reserved|1 octet|Reserved|
|NaChannelNb|1 octet|Number of non-accessible output channel that are located in<br>the non-accessible device. This value is used by the master<br>input device to determine the last auto-auto number of the last<br>non-accessible output channel.|


##### 2.3.2.7 PID_PB_START_LINK (PID = 96)

**●** **Property name:** PB Start Link



**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** none

Mandatory/optional:


Mandatory.

Description:


The master input channel sends this message to the currently selected output channel.
When the output channel receives this message, it starts the PB 1.0 procedure.

Security:


Encrypted or not.

Direction:


Input device to output device.

Next Frame:


PB 1.0 procedure: PID_PB_CONFIG (Enter_Config_Mode)

Format:

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved||||INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||


Savedate: Filename: page 24 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

Reserved 2 octets Reserved

INx 5 bits Index of the input channel to link

OUTx 5 bits Index of the output channel to link
The output number OUTx indicates which output channel has
been chosen in the output device. For example if an output device
is made of 4 outputs channels (relays), they are numbered 0 to 3
so that the input device can make the difference between the
various output channels

Function 1 octet Current selected PB function in the OUTx channel.
The PB function index is the value of one of the PB functions. It
can be one of the PB functions supported by the output and the
input channels. See DPT_PB_Function list of function in appendix
A.

NaNbSel 1 octet Number of the non-accessible output channel in case of a link
between an input channel and a non-accessible output channel.
Not significant in case of a link between an input channel and an
accessible output channel.

Error handling:

##### 2.3.2.8 PID_PB_STOP_LINK (PID = 97)

**●** **Property name:** PB Stop Link

**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** none

Mandatory/optional:

Mandatory.

Description:

This message is sent by the master input device to inform the selected output device that the
currently set/delete link request is not possible from the input channel point of view.

Security:

Encrypted or not.

Direction:

Input to output.

Savedate: Filename: page 25 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Name|Size|Description|
|---|---|---|
|Reserved|2 octets|Reserved|
|INx|5 bits|Index of the input channel to link|
|OUTx|5 bits|Index of the output channel to link<br>The output number OUTx indicates which output channel has<br>been chosen in the output device. For example if an output device<br>is made of 4 outputs channels (relays), they are numbered 0 to 3<br>so that the input device can make the difference between the<br>various output channels|
|Function|1 octet|Current selected PB function in the OUTx channel.<br>The PB function index is the value of one of the PB functions. It<br>can be one of the PB functions supported by the output and the<br>input channels. See DPT_PB_Function list of function in appendix<br>A.|
|NaNbSel|1 octet|Number of the non-accessible output channel in case of a link<br>between an input channel and a non-accessible output channel.<br>Not significant in case of a link between an input channel and an<br>accessible output channel.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Next Frame:

Format:

octet 11 octet 12 octet 13 octet 14 octet 15 octet 16

Statu
Reserved Reserved INx OUTx Function NaNbSel

s

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Name** **Size** **Description**

Reserved 2 Reserved
octets

INx 5 bits Index of the input channel to link

OUTx 5 bits Index of the output channel to link
The output number OUTx indicates which output channel has been
chosen in the output device. For example if an output device is made of 4
outputs channels (relays), they are numbered 0 to 3 so that the input
device can make the difference between the various output channels

Function 1 octet Current selected PB function in the OUTx channel.
The PB function index is the value of one of the PB functions. It can be
one of the PB functions supported by the output and the input channels.
See DPT_PB_Function list of function in appendix A.

NaNbSel 1 octet Number of the non-accessible output channel in case of a link between an
input channel and a non-accessible output channel.
Not significant in case of a link between an input channel and an
accessible output channel.

Status 3 bits Status of the link abort.

Error handling:

##### 2.3.2.9 PID_PB_QUIT_CONFIG (PID = 98)

**●** **Property name:** PB Quit Config

**●** **Property Datatype:** PDT_GENERIC_02

**●** **Datapoint Type:** none

Mandatory/optional:

Mandatory.

Savedate: Filename: page 26 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Statu<br>s|Statu<br>s|Statu<br>s|INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Reserved|2 <br>octets|Reserved|
|INx|5 bits|Index of the input channel to link|
|OUTx|5 bits|Index of the output channel to link<br>The output number OUTx indicates which output channel has been<br>chosen in the output device. For example if an output device is made of 4<br>outputs channels (relays), they are numbered 0 to 3 so that the input<br>device can make the difference between the various output channels|
|Function|1 octet|Current selected PB function in the OUTx channel.<br>The PB function index is the value of one of the PB functions. It can be<br>one of the PB functions supported by the output and the input channels.<br>See DPT_PB_Function list of function in appendix A.|
|NaNbSel|1 octet|<br>Number of the non-accessible output channel in case of a link between an<br>input channel and a non-accessible output channel.<br>Not significant in case of a link between an input channel and an<br>accessible output channel.|
|Status|3 bits|Status of the link abort.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Description:

When the input device is in the PB configuration mode, it can quit the PB configuration mode
by sending this message. When the output devices receive this message, they all return in
runtime mode.

This message is always sent by an input device. The output devices never send this
message.

Security:

In the case of basic security, this message is sent twice: once encrypted and once in plain.

   - The encrypted Frame is needed for the device that is currently being linked.

   - The plain Frame is needed for all other devices to quit the config mode.

In the case of enhanced security, this message is sent with FDSK key only once.

Direction:

Input device to output device.

Next Frame:

No next Frame.

Format:

octet 11 octet 12

reserved Rreserved

7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0

Error handling:

##### 2.3.2.10 PID_PB_DELETE_CHANNEL (PID = 99)

**●** **Property name:** PB Delete Channel

**●** **Property Datatype:** PDT_GENERIC_05

**●** **Datapoint Type:** none

Mandatory/optional:

Optional.

Description:

The product sends the delete channel before a factory restore to clean the others product’s
association table.

Savedate: Filename: page 27 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|octet 11|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 12|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|Rreserved|Rreserved|Rreserved|Rreserved|Rreserved|Rreserved|Rreserved|Rreserved|
|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|
|||||||||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

It is not necessary to be in Push-Button configuration mode, but the product must have been
configured in the PB mode.


Security:

Encrypted or not.


Direction:

input to output or output to input


Next Frame:

Format:


7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Name** **Size** **Description**

DevId 2 octets Device Identifier

ChannelNb 8 bits Index of the channel to delete, if ChannelNb value is 0xFF
then we must delete the complete product.

Reserved 1 octet Reserved

NaNbSel 1 octet Number of the non-accessible output channel in case of a link
between an input channel and a non-accessible output
channel.
Not significant in case of a link between an input channel and
an accessible output channel.

Error handling:

##### 2.3.2.11 PID_PB_NA_OUTPUT_ACTUATOR_NB_RESP (PID = 100)

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|
|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(MSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|DevId(LSB)|ChannelNb|ChannelNb|ChannelNb|ChannelNb|ChannelNb|ChannelNb|ChannelNb|ChannelNb|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|DevId|2 octets|Device Identifier|
|ChannelNb|8 bits|Index of the channel to delete, if ChannelNb value is 0xFF<br>then we must delete the completeproduct.|
|Reserved|1 octet|Reserved|
|NaNbSel|1 octet|Number of the non-accessible output channel in case of a link<br>between an input channel and a non-accessible output<br>channel.<br>Not significant in case of a link between an input channel and<br>an accessible output channel.|



**●** **Property name:** PB Non Accessible Output Actuator Numbering Response

**●** **Property Datatype:** PDT_GENERIC_06



**●** **Datapoint Type:** none

Mandatory/optional:

Optional.


Description:

This message shall be sent by the master input device after the reception of the PID_PB_NA_OUTPUT_DEVICE from a non-accessible output device.


Savedate: Filename: page 28 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

The message contains the three octets of the KNX Serial Number of the non-accessible
output device that has requested a number. It contains also the first number allocated to the
first channel of the non-accessible output device. The other output channels have the
following numbers.

EXAMPLE 2 If a 3 non-accessible output channels device receives the number 4 from the master input device,
then the channels are numbered like the following:

            - First non-accessible output channel has number 4.

            - Second non-accessible output channel has number 5.

            - Third non-accessible output channel has number 6.

Security:

Encrypted or not.

Direction:

input device to non –accessible output device

Next Frame:

Format:

octet 11 octet 12 octet 13 octet 14 octet 15 octet 16

Reserved Reserved SN[3] SN[4] SN[5] NaAllocNb

7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0 7 6 5 4 0 2 1 0

**Name** **Size** **Description**

Reserved 2 octets Reserved

KNX Serial 3 octets The last significant three bytes of the KNX Serial Number of the
Number last non-accessible channel is used check that the allocated numbers
part are for the non-accessible channel.

NaAllocNb 1 octet This parameter contains the allocated number of the first channel
of the non-accessible device.

Error handling:

Savedate: Filename: page 29 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|SN[3]|SN[3]|SN[3]|SN[3]|SN[3]|SN[3]|SN[3]|SN[3]|SN[4]|SN[4]|SN[4]|SN[4]|SN[4]|SN[4]|SN[4]|SN[4]|SN[5]|SN[5]|SN[5]|SN[5]|SN[5]|SN[5]|SN[5]|SN[5]|NaAllocNb|NaAllocNb|NaAllocNb|NaAllocNb|NaAllocNb|NaAllocNb|NaAllocNb|NaAllocNb|
|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|7|6|5|4|0|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Reserved|2 octets|Reserved|
|KNX Serial<br>Number last<br>part|3 octets|The last significant three bytes of the KNX Serial Number of the<br>non-accessible channel is used check that the allocated numbers<br>are for the non-accessible channel.|
|NaAllocNb|1 octet|This parameter contains the allocated number of the first channel<br>of the non-accessible device.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

##### 2.3.2.12 PID_PB_INPUT_SENSOR_SET_LINK (PID = 101)



**●** **Property name:** PB Input Sensor Set Link

**●** **Property Datatype:** PDT_GENERIC_06



**●** **Datapoint Type:** none

Mandatory/optional:

Optional.


Description:

This message is sent by an input channel, which wants to be linked with the currently
selected output channel and PB function. It is used primarily for the linking with nonaccessible output channels.


Security:

Encrypted or not.


Direction:

Input device to output device.


Next Frame:

Format:

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|octet 16|
|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved|Reserved||||INx|INx|INx|INx|INx||||OUTx|OUTx|OUTx|OUTx|OUTx|Function|Function|Function|Function|Function|Function|Function|Function|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|NaNbSel|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>Reserved<br>Reserved<br>Reserved|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|<br>msb<br>lsb|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Reserved|2 octets|Reserved|
|INx|5 bits|Index of the input channel to link|
|OUTx|5 bits|Index of the output channel to link<br>The output number OUTx indicates which output channel has<br>been chosen in the output device. For example if an output device<br>is made of 4 outputs channels (relays), they are numbered 0 to 3<br>so that the input device can make the difference between the<br>various output channels|
|Function|1 octet|Current selected PB function in the OUTx channel.<br>The PB function index is the value of one of the PB functions. It<br>can be one of the PB functions supported by the output and the<br>input channels. See DPT_PB_Function list of function in appendix<br>A.|


Savedate: Filename: page 30 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

NaNbSel 1 octet Number of the non-accessible output channel in case of a link
between an input channel and a non-accessible output channel.
Not significant in case of a link between an input channel and an
accessible output channel.

Error handling:

##### 2.3.2.13 PID_PB_START_CONFIG_REMOTE (PID = 102)

**●** **Property name:** PB Start Config Remote

**●** **Property Datatype:** PDT_GENERIC_16

**●** **Datapoint Type:** none

Mandatory/optional:

Optional.

Description:

This Frame shall only be supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the output device in order to start the configuration from
the output side.

The data contained in the Frame is 00. This byte is reserved for future use.

If the input device receives it, it shall start the PB-Mode 1.2 procedure with the enhanced
security.

Security:

   - If used, this Frame shall be sent encrypted (with authentication and confidentiality).
The key used for encryption is the FDSK key of the input device.

   - Moreover, the Frame shall set the T bit (Tool Access) of the Security Control Field
(SCF), in order to denote that a Tool Key is used (and not a run-time key).

   - When a device receives the Frame, it shall decrypt the Frame with its device key.
The only device that is able to decrypt the Frame is the input device to which the
output device wants to make a link.

Direction:

Output device to input device.

Next Frame:

PID_START_CONFIG

Format:

|Name|Size|Description|
|---|---|---|
|NaNbSel|1 octet|Number of the non-accessible output channel in case of a link<br>between an input channel and a non-accessible output channel.<br>Not significant in case of a link between an input channel and an<br>accessible output channel.|


octet 1


reserved


00h


Savedate: Filename: page 31 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

##### 2.3.2.14 PID_PB_EFFICIENT_LINKING (PID = 103)

**●** **Property name:** PB Efficient Linking

**●** **Property Datatype:** PDT_VARIABLE_LENGTH

**●** **Datapoint Type:** none

2.3.2.14.1 Service ID: ADD_TX_LINK_REQUEST = 00h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the input device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

Each Frame shall contain the maximum possibly number of TX links, except for the last
Frame that may have less than the maximum number of TX links (value defined in
parameter Efficient Linking feature in PID_PB_CONFIG). This number of links is negotiated
between the sensor and the actuator device, through their respective supported value of the
efficient linking parameter sent in the Features Frame. In case where the sensor and
actuator have different supported values, the value that is the smaller one shall be used.

Security:

Encrypted or not.

Direction:

Input device to output device.

Next Frame:

PID_PB_EFFICIENT_LINKING with Service ID = ADD_TX_LINK_RESPONSE

Savedate: Filename: page 32 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Format:

octet 11 octet 12 octet 13 octet 14 octet 15

Service ID Nb of links (n) Frame id Connection Code of link 1

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 0

octet 16 octet 17 octet 18 …

Ack Slot of link …
Group Address of link 1

1

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

….

octet m octet m+1 octet m+2 octet m+3 octet m+4

Ack Slot of link
Connection Code of link n Group Address of link n

n

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Name** **Size** **Description**

Service ID 1 octet 00h = ADD_RX_LINK_REQUEST

Nb of links 1 octet Number of links sent in the Frame

Frame id 1 octet This is an identifier of the Frame PID_EFFICIENT_LINKING with
ServiceID = ADD_TX_LINK_REQUEST. It is used to identify clearly
the Frame, especially in case of repetitions.

CC of link n 2 octets Connection code on 16 bits of the link n

Group Address of link n 2 octets Group address on 16 bits of the link n

Ack slot of link n 1 octet Ack slot on 8 bits of the link n (ignored for TP devices and RF Ready
devices):

0..63: indicates the ack slot number for this link.
64..254: reserved.
255: indicates that no fast ack is required for this link.

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

Savedate: Filename: page 33 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|0|0|||||||||||||||||||||||||||||||||

|octet 16|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 17|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 18|Col18|Col19|Col20|Col21|Col22|Col23|Col24|…|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|Ack Slot of link<br>1|…|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0||
||||||||||||||||||||||||||
|||||||||||||||||||||||||….|

|octet m|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet m+1|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet m+2|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet m+3|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet m+4|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|Ack Slot of link<br>n|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|00h = ADD_RX_LINK_REQUEST|
|Nb of links|1 octet|<br>Number of links sent in the Frame|
|Frame id|1 octet|This is an identifier of the Frame PID_EFFICIENT_LINKING with<br>ServiceID = ADD_TX_LINK_REQUEST. It is used to identify clearly<br>the Frame, especially in case of repetitions.|
|CC of link n|2 octets|Connection code on 16 bits of the link n|
|Group Address of link n|2 octets|Group address on 16 bits of the link n|
|Ack slot of link n|1 octet|Ack slot on 8 bits of the link n (ignored for TP devices and RF Ready<br>devices):<br>0..63:<br>indicates the ack slot number for this link.<br>64..254:<br>reserved.<br>255:<br>indicates that no fast ack is required for this link.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

2.3.2.14.2 Service ID: ADD_TX_LINK_RESPONSE = 01h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the output device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

Security:

Encrypted or not.

Direction:

output device to input device.

Next Frame:

Format:

octet 11 octet 12 octet 13 octet 14 octet 15 …

Service ID Nb of links (n) Frame id Frame status Status of link 1 …

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 1 Flags

octet m

Status of link n

7 6 5 4 3 2 1 0

0 0 0 0 Flags

**Name** **Size** **Description**

Service ID 1 octet 01h = ADD_TX_LINK_RESPONSE

Nb of links 1 octet Number of links sent in the Frame

Frame id 1 octet This is an identifier of the Frame PID_EFFICIENT_LINKING
with ServiceID= ADD_TX_LINK_RESPONSE. It is used to
identify clearly the Frame, especially in case of repetitions.

Frame status 1 octet Status of the Frame
00h: Success (E_SUCCESS).
A1h: Invalid command (E_COMMAND_INVALID): unexpected
Frame id or unsupported number of links
FFh: Error (E_ERROR)

Status of link n 1 octet Status of the link n. See hereunder.

Savedate: Filename: page 34 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|…|…|…|…|…|…|…|…|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|…|…|…|…|…|…|…|…|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|0|1|||||||||||||||||||||||||||||Flags|Flags|Flags|Flags|||||||||

|octet m|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|
|7|6|5|4|3|2|1|0|
|||||||||
|0|0|0|0|Flags|Flags|Flags|Flags|

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|01h = ADD_TX_LINK_RESPONSE|
|Nb of links|1 octet|<br>Number of links sent in the Frame|
|Frame id|1 octet|This is an identifier of the FramePID_EFFICIENT_LINKING<br>with ServiceID= ADD_TX_LINK_RESPONSE. It is used to<br>identify clearly the Frame, especially in case of repetitions.|
|Frame status|1 octet|Status of the Frame<br>00h:<br>Success (E_SUCCESS).<br>A1h:<br>Invalid command (E_COMMAND_INVALID): unexpected<br>Frame id or unsupported number of links<br>FFh:<br>Error (E_ERROR)|
|Status of link n|1 octet|<br>Status of the link n. See hereunder.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Status of link (Flags):

0 s s s

sss: 000b: Link or AckSlotNb added

001b: use existing Group Address or existing AckSlotNb

010b: link deleted

011b: link or AckSlotNb not added. (The link procedure can be
continued).

100b: Error. The link procedure shall be stopped. In this case,
the field Frame status of the current Frame shall contain
value FFh (E_ERROR).

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

   - If a Frame is received by the output device with an unexpected Frame id or
unsupported number of links, then the output device shall ignore the Frame and
answer with the appropriate error (E_COMMAND_INVALID) in the Frame status.
When receiving this answer, the input device may correct the content of the Frame
(Frame id or number of links) and send a new request or stop the current
procedure.

2.3.2.14.3 Service ID: ADD_RX_LINK_REQUEST = 02h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the input device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

Each Frame shall contain the maximum possibly number of RX links, except for the last
Frame that may have less than the maximum number of RX links (value defined in
parameter Efficient Linking feature in PID_PB_CONFIG).. This number of links is negotiated
between the sensor and the actuator device, through their respective supported value of the
Efficient linking parameter sent in the Features Frame. In case where the sensor and
actuator have different supported values, the value that is the smaller one shall be used.

Security:

Encrypted or not.

Direction:

Input device to output device.

Next Frame:

PID_PB_EFFICIENT_LINKING with Service ID = ADD_RX_LINK_RESPONSE.

Savedate: Filename: page 35 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|0|s|s|s|
|---|---|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Format:

octet 11 octet 12 octet 13 octet 14 octet 15

Service ID Nb of links (n) Frame id Connection Code of link 1

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 1 0

… … octet m octet m+1

… Connection Code of link n

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Name** **Size** **Description**

Service ID 1 octet 02h = ADD_RX_LINK_REQUEST

Nb of links 1 octet Number of links sent in the Frame

Frame id 1 octet This is an identifier of the Frame PID_EFFICIENT_LINKING
with Service ID = ADD_RX_LINK_REQUEST. It is used to
identify clearly the Frame, especially in case of repetitions.

CC of link n 2 octets Connection code on 16 bits of the link n.

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

2.3.2.14.4 Service ID: ADD_RX_LINK_RESPONSE = 03h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the output device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

Security:

Encrypted or not.

Direction:

output device to input device

Savedate: Filename: page 36 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|octet 15|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|Connection Code of link 1|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|1|0|||||||||||||||||||||||||||||||||

|…|Col2|Col3|Col4|Col5|Col6|Col7|Col8|…|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet m|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet m+1|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|…|…|…|…|…|…|…|…|…|…|…|…|…|…|…|…|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|Connection Code of link n|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|02h = ADD_RX_LINK_REQUEST|
|Nb of links|1 octet|<br>Number of links sent in the Frame|
|Frame id|1 octet|This is an identifier of the Frame PID_EFFICIENT_LINKING<br>with Service ID = ADD_RX_LINK_REQUEST. It is used to<br>identify clearly the Frame, especially in case of repetitions.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Next Frame:

Format:

octet 11 octet 12 octet 13 octet 14

Service ID Nb of links (n) Frame id Frame status

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 1 1

octet 15 octet 16 octet 17 octet 18 …

Group Address of link 1 Ack slot 1 Status of link 1 …

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 …

0 0 0 0 Flags

octet m octet m+1 octet m+2 octet m+3

Group Address of link n Ack slot n Status of link n

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 Flags

Name Size Description

Service ID 1 octet 03h = ADD_RX_LINK_RESPONSE

Nb of links 1 octet Number of links sent in the Frame

Frame id 1 octet This is an identifier of the Frame PID_EFFICIENT_LINKING
with ServiceID = ADD_RX_LINK_RESPONSE. It is used to
identify clearly the Frame, especially in case of repetitions.

Frame status 1 octet Status of the Frame
00h: Success (E_SUCCESS).
A1h: Invalid command (E_COMMAND_INVALID):
unexpected Frame id or unsupported number of links
FFh: Error (E_ERROR)

Group Address of link n 2 octets Group address of the link n.

Ack slot of link n 1 octet Ack slot of the link n.

Status of link n 1 octet Status of the link n (see hereunder).

Savedate: Filename: page 37 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 13|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|octet 14|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Nb of links(n)|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame id|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|Frame status|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|1|1|||||||||||||||||||||||||

|octet 15|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 16|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 18|Col26|Col27|Col28|Col29|Col30|Col31|Col32|…|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Group Address of link 1|Ack slot 1|Ack slot 1|Ack slot 1|Ack slot 1|Ack slot 1|Ack slot 1|Ack slot 1|Ack slot 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|Status of link 1|…|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|…|
||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||0|0|0|0|Flags|Flags|Flags|Flags||

|octet m|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet m+1|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet m+2|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet m+3|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Group Address of link n|Ack slot n|Ack slot n|Ack slot n|Ack slot n|Ack slot n|Ack slot n|Ack slot n|Ack slot n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|Status of link n|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||0|0|0|0|Flags|Flags|Flags|Flags|

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|03h = ADD_RX_LINK_RESPONSE|
|Nb of links|1 octet|<br>Number of links sent in the Frame|
|Frame id|1 octet|This is an identifier of the Frame PID_EFFICIENT_LINKING<br>with ServiceID = ADD_RX_LINK_RESPONSE. It is used to<br>identify clearly the Frame, especially in case of repetitions.|
|Frame status|1 octet|Status of the Frame<br>00h:<br>Success (E_SUCCESS).<br>A1h:<br>Invalid command (E_COMMAND_INVALID):<br>unexpected Frame id or unsupported number of links<br>FFh:<br>Error (E_ERROR)|
|Group Address of link n|2 octets|<br>Group address of the link n.|
|Ack slot of link n|1 octet|Ack slot of the link n.|
|Status of link n|1 octet|Status of the link n (see hereunder).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Status of link:

0 s s s

sss: 000b: Link or AckSlotNb added

001b: use existing Group Address or existing AckSlotNb

010b: link deleted

011b: link or AckSlotNb not added. (The link procedure can be
continued).

100b: Error. The link procedure shall be stopped.

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

   - If a Frame is received by the output device with an unexpected Frame id or
unsupported number of links, then the output device shall ignore the Frame and
answer with the appropriate error (E_COMMAND_INVALID) in the Frame status.
When receiving this answer, the input device may correct the content of the Frame
(Frame id or number of links) and send a new request or stop the current
procedure.

2.3.2.14.5 Service ID: DELETE_LINK_REQUEST = 04h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the input device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

This Frame is sent by the sensor to request for a deletion of every links already done
between the current channel of the sensor and the current channel of the actuator. The
channel identifiers of sensor resp. of actuator are given through INx resp. OUTx in the
Frame PID_PB_OUTPUT_ACTUATOR_SET_LINK.

Security:

Encrypted or not.

Direction:

Input device to output device.

Next Frame:

PID_EFFICIENT_LINKING with ServiceID = DELETE_LINK_RESPONSE.

Savedate: Filename: page 38 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|0|s|s|s|
|---|---|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Format:

octet 11 octet 12

Service ID Data

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0

Name Size Description

Service ID 1 octet 04h = DELETE_LINK_REQUEST

Data 1 octet 00h = reserved

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

2.3.2.14.6 Service ID: DELETE_LINK_RESPONSE = 05h
Mandatory/optional:

Optional.

Description:

This Frame is only supported as optional in PB-Mode 1.2.

If used, this Frame shall be sent by the output device in order to reduce the amount of
exchanged Frame during the linking of each Datapoint.

Security:

Encrypted or not.

Direction:

Output device to input device.

Next Frame:

Format:

octet 11 octet 12

Status of link
Service ID

deletion

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 1 0 1

Savedate: Filename: page 39 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Data|Data|Data|Data|Data|Data|Data|Data|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||
|0|0|0|0|0|1|0|0|0|0|0|0|0|0|0|0|

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|04h = DELETE_LINK_REQUEST|
|Data|1 octet|<br>00h = reserved|

|Format:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 11|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|octet 12|
|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Service ID|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|Status of link<br>deletion|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||
|0|0|0|0|0|1|0|1|||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Name** **Size** **Description**

Service ID 1 octet 05h = DELETE_LINK_RESPONSE

Status of link deletion 1 octet Status of the link deletion.
00h: Success (E_SUCCESS).
A1h: Invalid command (E_COMMAND_INVALID):
invalid data
FFh = Error (E_ERROR)

Error handling:

   - In case this Frame is received and decrypted with security errors, then the
procedure is not started by the input device. No Frame is sent.

2.3.2.14.7 Common error handling
If the same Add Tx/Rx Request Frame (same Frame id and same bytes of data) is received
again, the output device shall resend the same Add Tx/Rx Response Frame.

#### 2.3.3 Security object (Object Type = 17)
In the Security object, new properties are defined for the Diffie Hellman procedure

**Table 3 – Properties of the Security object, used for PB 1.2 - overview**

|Name|Size|Description|
|---|---|---|
|Service ID|1 octet|05h = DELETE_LINK_RESPONSE|
|Status of link deletion|1 octet|<br>Status of the link deletion.<br>00h:<br>Success (E_SUCCESS).<br>A1h:<br>Invalid command (E_COMMAND_INVALID):<br>invalid data<br>FFh = Error (E_ERROR)|


key encrypted using the temporary
key.

|Property identifier (PID)|Property Datatype|Description|
|---|---|---|
|70 PID_PB_KEY_ESTABLISH_REQUEST|PDT_GENERIC_22|Diffie Hellman request|
|<br>71 PID_PB_KEY_ESTABLISH_-<br>RESPONSE|<br>PDT_GENERIC_22|<br> Diffie Hellman response|
|72 PID_PB_SECURITY_CONFIRM|PDT_GENERIC_16|Confirmation by sending the device<br>key encrypted using the temporary<br>key.|


##### 2.3.3.1 PID_PB_KEY_ESTABLISH_REQUEST (PID = 70)

**●** **Property name:** PB Key Establish Request

**●** **Property Datatype:** PDT_GENERIC_22

**●** **Datapoint Type:** None
 _The PDT_GENERIC_22 is a new Property Datatype. This shall be integrated into [05]._

Mandatory/optional:

Mandatory.

Description:

In case of the basic security procedure, where the FDSK of the input device is not known,
the input device sends this Frame in order to start the Diffie Hellman communication
exchange. The goal of this exchange is to define a shared and temporary key that is only
known by the two devices. This procedure is vulnerable regarding the Man-in-the-Middle
attack.

As proposed in the recommendation made in DHEC Report and due to the real-time
constraints of the PB procedure, only the parameter sect163k1 shall be used. The Elliptic
Curve Domain Parameters over F2[163] and the Cofactor Diffie-Hellman Primitive are used.

Savedate: Filename: page 40 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

 _For details on the difference between ECDH with and without cofactor key, see the following explanations:_

_[http://crypto.stackexchange.com/questions/18222/difference-between-ecdh-with-cofactor-key-and-ecdh-](http://crypto.stackexchange.com/questions/18222/difference-between-ecdh-with-cofactor-key-and-ecdh-without-cofactor-key)_
_[without-cofactor-key](http://crypto.stackexchange.com/questions/18222/difference-between-ecdh-with-cofactor-key-and-ecdh-without-cofactor-key)_
_[http://interop.cryptsoft.com/pkcs11doc/v211/group__SEC__12__4__6__ELLIPTIC__CURVE__DIFFIE__](http://interop.cryptsoft.com/pkcs11doc/v211/group__SEC__12__4__6__ELLIPTIC__CURVE__DIFFIE__HELLMAN__WITH__COFACTOR__KEY__DERIVATION.html)_
_[HELLMAN__WITH__COFACTOR__KEY__DERIVATION.html](http://interop.cryptsoft.com/pkcs11doc/v211/group__SEC__12__4__6__ELLIPTIC__CURVE__DIFFIE__HELLMAN__WITH__COFACTOR__KEY__DERIVATION.html)_

_In this case, the payload length is 22 octets._

 _Use of CERTICOM patent: this seems to be usable._

_[See https://en.wikipedia.org/wiki/Elliptic_curve_cryptography:](https://en.wikipedia.org/wiki/Elliptic_curve_cryptography)_
_[While the RSA patent expired in 2000, there may be patents in force covering certain aspects of ECC](https://en.wikipedia.org/wiki/ECC_patents)_
_[technology, though some (including RSA Laboratories[3] and Daniel J. Bernstein[4]) argue that the](https://en.wikipedia.org/wiki/ECC_patents)_
_Federal elliptic curve digital signature standard (ECDSA; NIST FIPS 186-3) and certain practical ECC-_
_based key exchange schemes (including ECDH) can be implemented without infringing them._

It is recommended to use the sect163k1 because it the runtime execution (10 seconds) is
more compatible with the timing requirements of a push-button procedure.

In both case the data sent into the Frame is: X = xG, where x is randomly computed by the
input device and G is defined by the set of parameter.

A time-out (duration 10 seconds) is started when this Frame is sent.

Security:

No encryption.

Direction:

Input to output.

Savedate: Filename: page 41 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Next Frame:

PID_PB_KEY_ESTABLISH_RESPONSE.

Format:

octet 1 octet 2 … octet 22

Y X

Error handling:

In the case where the Frame PID_PB_KEY_ESTABLISH_RESPONSE is not received, when
the time-out expires, then the procedure is aborted, and the message PID_QUIT_CONFIG is
sent and an error is displayed in the MMI of the device.

##### 2.3.3.2 PID_PB_KEY_ESTABLISH_RESPONSE (PID = 71)

**●** **Property name:** PB Key Establish Response

**●** **Property Datatype:** PDT_GENERIC_22

**●** **Datapoint Type:** None

Mandatory/optional:

Mandatory.

Description:

As proposed in the recommendation made in DHEC Report and due to the real-time
constraints of the PB procedure, only the parameter sect163k1 shall be used. The Elliptic
Curve Domain Parameters over F2[163] and the Cofactor Diffie-Hellman Primitive are used.

In this case, the payload length is 21 octets.

In both case the data sent into the Frame is: Y = yG, where y is randomly computed by the
output device and G is defined by the set of parameter.

A time-out (duration 10 seconds) is started when this Frame is sent.

Security:

No encryption.

Direction:

Output to input.

Next Frame:

PID_PB_SECURITY_CONFIRM.

Format:

octet 1 octet 2 … octet 22

Y X

Error handling:

In the case where the Frame PID_PB_SECURITY_CONFIRM is not received, when the
time-out expires, then the procedure is aborted. The message PID_QUIT_CONFIG is in this
case sent and an error is displayed in the MMI of the device.

Savedate: Filename: page 42 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|octet 1|octet 2|…|octet 22|
|---|---|---|---|
|Y|X|X|X|

|octet 1|octet 2|…|octet 22|
|---|---|---|---|
|Y|X|X|X|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

##### 2.3.3.3 PID_PB_SECURITY_CONFIRM (PID = 72)

**●** **Property name:** PB Security Confirm

**●** **Property Datatype:** PDT_GENERIC_16

**●** **Datapoint Type:** none

Mandatory/optional:

Mandatory.

Description:

This Frame is used to confirm that the shared and temporary key has been successfully
calculated. This Frame is also used to exchange the runtime key between each device.

Each runtime device key is sent in this Frame (16 bytes). The input device sends its device
key to the output device first. Then the output device sends its device key to the input
device.

Security:

This Frame is sent encrypted:

   - with the shared key resulted from the Diffie Hellman algorithm in case of basic
security;

   - with the FDSK key in case of enhanced security.

Direction:

Input to output and output to input.

Next Frame:

PID_PB_SECURITY_CONFIRM or the rest of the PB-Mode 1.0 procedure.

Format:

octet 1 … octet 16

Device key

Error handling:

In the case where the Frame PID_PB_SECURITY_CONFIRM is expected and is not
received, when the time-out expires, then the procedure is aborted. The message
PID_QUIT_CONFIG is in this case sent and an error is displayed in the MMI of the device.

### 2.4 Management Procedures

 _This clause is not intended for integration in the KNX Specification._

This document does not introduce neither modify any Management Procedures.

Savedate: Filename: page 43 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|octet 1|…|octet 16|
|---|---|---|
|Device key|Device key|Device key|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

### 2.5 Configuration Procedures

#### 2.5.1 Introduction 

##### 2.5.1.1 Procedure with accessible device
The main steps of the procedure with accessible devices are (in the following order)

1. Selection of the input device and the channel in the input device

2. Selection of the output device and the channel in the output device

3. Selection of the function in the output device and confirmation of the link creation

**Push-Button function selection**

It is recommended to select the function on the output channel. The principle is to provide
the user with only the functions that are supported by the output channel. The function is
defined by an enumerated value (see DPT_PB_Function in Appendix A).

If the function were selected on the input channel, the list of function would have been longer
than on the output channel (because every most of the input device are generic, and support
every functions)) and a lot of incompatible functions (the ones that the input device supports
but the output device does not) would have been proposed to the user.

When a link is performed between an input channel in factory state and an output channel in
factory state, the user is allowed to cycle through all the functions proposed by the output
device. He can select the function in the list (MMI implementation specific).

As soon as the first link is realized with the selected function of the input channel, a next new
link between the already configured input channel and a next further output channel is only
possible with the current function of the input channel. The user can only select this single
function unless he clears the first link through a dedicated action at the HMI of the input
channel.

This behaviour prevents the user from choosing a new function, which could not be
compatible with the previous link.

The choice of the function determines automatically the AJS of the generic input channel. In
some cases, it also set the value of other parameters of the input or output channel. This is
done in both cases by the devices (input device or output device) themselves.

The choice of function is possible with generic input channel. In this case the field FixedVar
of PID_PB_INPUT_SENSOR Frames is set to 0.

If it is not possible to change the function (non generic input channel), then the field FixedVar
of PID_PB_INPUT_SENSOR Frame is set to 1.

**Link deletion**

When the installer wants to delete a link, he performs the same configuration operation and
he selects the action in MMI for deletion. The link is deleted in the output device. The current
function in the input device is not modified (except if this is the last link, where the function is
undefined again). This means that the other output devices linked to the input device are not
modified in their functions.

Savedate: Filename: page 44 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Link visualization**

When the user enters the configuration mode on an input device, all the accessible output
devices that are linked with this input, display the current function on their MMI.

**Function modification**

When the installer wants to change the function of a link, he first has to delete all the links
with the various other output channels linked with the selected input channel. When all the
links are deleted, the user can perform a new link with a new function.

When only one link exists between the selected input channel and the selected output
channel, then the user does not need to remove the last link, he can select a new function
and perform immediately a new link. The new link with the new function replaces the
previous link with the previous function.

This special process of the last link modification requires that the information of the number
of output channel linked with the input channel should be transferred between the input
channel and the output channel (see details in the field NbOfLink of the message
PID_PB_INPUT_SENSOR).

**Factory restore counter**

When the factory restore operation is performed in a device, the other devices linked to the
input device may not know that the input device has cleared its links, thus associations
remaining in other devices may still be sensitive to deleted group addresses and possibly
leading to malfunction during subsequent linking with the devices.

This is due to group addresses that are fixed for each Datapoint. In order to reduce side
effects during subsequent configurations and factory restore operations, the group
addresses have the following format:

   - High significant byte of the group address = factory restore counter of the device

   - Low significant byte of the group address = index of the Datapoint

The factory restore counter is a byte which is incremented by one each time the device
performs a factory restore operation. This means that the group address of each Datapoint is
changed (in the MSB) at each factory restore counter. This means that after a factory restore
counter, the previous group address is no more used and the associations remaining in the
other devices are no more valid and cannot be used by accident (at least during the next 256
factory restore operations).

When a device receives a Frame on the same SN with the same LSB of the GA, but with a
different factory restore counter, the device may clear its link.

##### 2.5.1.2 Procedure with non accessible devices 
There is no local MMI (led, push-button) on this kind of devices (for example a shutter
actuator).
The user cannot select them explicitly.

**Assumption**

The non-accessible output devices are all powered by the mains. It is not a constraint as
they are generally shutter devices.

Savedate: Filename: page 45 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

How to individualize and select one NA device ?

A mechanism based on a specific sequence of power switch OFF / ON is defined in order to
select one or more non accessible devices. This sequence is implementation specific.

Only output devices that have identified this sequence are authorized to perform a
numbering process with the input device.

The numbering process allows an individualization of each output channel of the nonaccessible output device. The number is given by the input device and is only valid for one
PB configuration session.

**Drawback of the procedure:**

There is a risk to launch a non-wanted numbering process and then to select unwanted nonaccessible devices if the mains sequence is performed at the same time in two different
installations by two different installers.

##### 2.5.1.3 Security impact on procedure
**Linking secure and non secure**

If the output (resp. input) Datapoints of a device are already linked secure, a second and
further non secure link with the same output (resp. input) Datapoints of the same device
shall be refused.

In a symmetrical view, if the output (resp. input) Datapoints of a device have already non
secured links, they should not accept any new secure link.

**Security capabilities and requirements**

In push-button configuration with security, the security requirements and capabilities apply at
the level of the channel.

In general, a secure device cannot require more security than what it is capable of
supporting itself. This means the following predicate:

_Capabilities ≥ Requirements_

Before deciding to establish a link, the secure devices shall take into account its capabilities,
its requirements and the requirements of the communication partner.

This may make that a device refuses a link if the communication partner does not offer the
required capabilities.

Each device (cf. PID_PB_CONFIG (Features)) defines the requirements for Tx Datapoint
and for Rx Datapoints.

A link (between a sending Datapoint and a receiving Datapoint) can only be established if
the Tx security requirements of the channel of the sending Datapoint are at least identical to
the Rx requirement of the channel of the receiving Datapoint.

_Tx requirements ≥ Rx requirements_

Savedate: Filename: page 46 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Security keys in a secure device**

A secure device contains two different secure keys:

   - The FDSK key: this is used for configuration, when encrypting configuration
Frames. In the case of push-button configuration, this key is only used in the
enhanced security procedure (and not in the basic security procedure). This key is
stored by manufacturer at production time, and can never be changed (even at
master reset). This key is also made available to the installer by any mean. This key
is never transmitted by the device

   - The runtime key: this key is used for runtime communication. In case of push-button
configuration, this key is generated by the device itself when linking. This key may
be newly generated when doing a master reset.

##### 2.5.1.4 DH procedure with already known device
In the case two device already know each other (a link exists between both), with basic
security mode, then the further links between the two device, will still use the Diffie Hellman
procedure.

Savedate: Filename: page 47 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

#### 2.5.2 PB-Mode 1.2 core secure basic (based on PB1.0)

Savedate: Filename: page 48 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

#### 2.5.3 PB-Mode 1.2 core secure enhanced (based on PB1.0)

Savedate: Filename: page 49 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

#### 2.5.4 PB-Mode 1.2 with basic security 

Savedate: Filename: page 50 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

#### 2.5.5 PB-Mode 1.2 with enhanced security

Savedate: Filename: page 51 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

### 2.6 Example of specific sequence
The following sequence is analysed (in basic and enhanced security):

1. Link two devices (A and B) with security;
2. Make a reset to ex-factory mode on device A;
3. Re-establish a link between A and B.

In the step 3, the device B recognises the KNX SN from device A and assumes that it knows
the security runtime key of A. This is based on the FRCounter that is exchanged several
times. The comparison is done between the FRCounter of the Frame and the last
FRCounter registered by the device for its partner.

If the two FRCounter are different, then the runtime keys shall be again exchanged using
DH.

If the two FRCounter are equal, then the runtime keys are also still valid, and the linking
procedure may be processed without DH (in case of basic security). In the case of enhanced
security, the runtime keys do not need to be exchanged.

### 2.7 Resynchronization of sequence counters
One of the main aspects of KNX Data Security is the sequence counter. This counter
guarantees the freshness of data, and prevents from replay attacks. There are several use
cases in Push Button mode with RF devices where the sequence numbers of device need to
be resynchronized to guarantee features of data security.

Use cases of sequence number resynchronization:

   - At configuration, during PB enhanced:

   - At runtime:

Semi-directional devices
GroupValueRead

#### 2.7.1 Enhanced security configuration 
When two devices that are already linked together start a new PB enhanced security
procedure, they shall firstly, before the start of procedure, resynchronize their sequence
numbers.

For that purpose, the output device shall send the S-A_Sync_Req service, in System
Broadcast (SBC) communication mode, and with KNX Serial Number field set with the one
of the input device.

Savedate: Filename: page 52 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

In the previous schema, IA1 = IA2 = 05FFh because of push button mode.

#### 2.7.2 Runtime 

##### 2.7.2.1 Semi-directional device with toggle function 
In some cases, a sensor device that is linked with an actuator device may need to read a
group object value of the actuator device.

In push button, as linking is based on KNX Serial Number, the sensor device shall use the
SN of actuator in order to send a A_GroupValue_Read Frame on the extended group
address used for sending in the actuator device.

Moreover, in case of secured linking, the security key of the actuator shall also be used.
Finally, the sequence number of the actuator shall also be used. If the sensor is a semidirectional device, it may have stored a not up-to-date value of the actuator’s last sequence
number.

So, in this case, the sensor shall first resynchronize the sequence number with actuator
before sending the A_GroupValue_Read Frame.

This is done by using S-A_Sync_Req service, in System Broadcast (SBC) communication
mode, and with KNX Serial Number field set with the one of the actuator device.

Savedate: Filename: page 53 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

Example with a remote control:

In the previous schema, IA1 = IA2 = 05FFh because of push button mode.

##### 2.7.2.2 Visualisation tool 
A visualisation tool may also, at startup wants to read the output status of the output devices.
Then, it needs first to synchronize the sequence counter before sending the
A_GroupValueRead.

This is done by using S-A_Sync_Req service, in System Broadcast (SBC) communication
mode, and with KNX Serial Number field set with the one of the actuator device.

Savedate: Filename: page 54 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

In the previous schema, IA1 = 05FFh because of PB-Mode.

### 2.8 Usage and context

 2.9 Profile definition

#### 2.9.1 Security features

**Feature**

1 Security Mode O O

Enabled ex-factory X X

Disabled ex-factory M M

2 Secure key transfer M M

FDSK M M

Diffie-Hellman X M

Savedate: Filename: page 55 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Col1|Feature|All S-Mode Profiles|PB-Mode Profile|
|---|---|---|---|
|1|Security Mode|O|O|
||Enabled ex-factory|X|X|
||Disabled ex-factory|M|M|
|2|Secure key transfer|M|M|
||FDSK|M|M|
||Diffie-Hellman|X|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies
To be completed.

### 3.2 Configuration interworking

#### 3.2.1 FDSK string encoding using QR code 
In the case of enhanced security, the manufacturer needs to indicate on the input device its
FDSK. The same requirement is defined for Push button security as for S-Mode security.
The FDSK string encoding using QR code as defined in [02] can be used. This defines how
the KNX Serial Number and the FDSK of the device are encoded, with a CRC.

The manufacturer of the output device shall provide an MMI that allows the user to enter the
QR code (including FDSK and KNX Serial Number) or enter the data (FDSK and KNX Serial
Number), so that the device itself shall decode and extract the FDSK of the input device to
which it shall be linked.

### 3.3 Runtime Interworking

 _It is assumed that Runtime Interworking is not affected by the contained specification._

#### 3.3.1 Busload

### 3.4 Registration and certification
For the new services, the certification shall foresee additional system test specifications. Is
this registration relevant?

### 3.5 Integration and common tool impact

#### 3.5.1 General

 3.5.2 Discovery

### 3.6 Risks and compatibility issues

Savedate: Filename: page 56 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

## 4 Appendix 

### 4.1 List of functions for a generic input channel

#### 4.1.1 DPT_PB_Function

 _This clause shall be integrated in Chapter 3/7/2 “Datapoint Types” ([01])._

Format: 1 octet: N8

octet nr. 1

field names _field1_

encoding N N N N N N N N

Encoding: Encoding absolute value N = [0 … 255]

Unit: none

Resol.: none

PDT: PDT_ENUM8 (alt: PDT_UNSIGNED_CHAR)

**Datapoint Types**

ID: Name: Encoding: Range:

20.1005 DPT_PB_Function _field1 = PB function_ [1..55] FB

(Action1 / Action2: Action 1 on first interaction e.g.
press, and Action 2 on second interaction e.g. release)

0 : reserved
1 : default function
2 : ON
3 : OFF
4 : Toggle
5 : Dimming Up Down
6 : Dimming Up
7 : Dimming Down
8 : On / Off
9 : Timed On Off
10 : Forced On
11 : Forced Off
12 : Shutter Up (for PB)
13 : Shutter Down (for (PB)
14 : Shutter Up Down (for PB)
15 : reserved
16 : Forced Up
17 : Forced Down
18 : Wind Alarm
19 : Rain Alarm
20 : HVAC Mode Comfort / Economy
21 : HVAC Mode Comfort / 22 : HVAC Mode Economy / 23 : HVAC Mode Building protection / HVAC

mode auto
24 : Shutter Stop
25 : Timed Comfort Standby

Savedate: Filename: page 57 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|
|---|---|

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.1005|DPT_PB_Function|_field1_ = PB function<br>(Action1 / Action2: Action 1 on first interaction e.g.<br>press, and Action 2 on second interaction e.g. release)<br>0 <br>: reserved<br>1 <br>: default function<br>2 <br>: ON<br>3 <br>: OFF<br>4 <br>: Toggle<br>5 <br>: Dimming Up Down<br>6 <br>: Dimming Up<br>7 <br>: Dimming Down<br>8 <br>: On / Off<br>9 <br>: Timed On Off<br>10<br>: Forced On<br>11<br>: Forced Off<br>12<br>: Shutter Up (for PB)<br>13<br>: Shutter Down (for (PB)<br>14<br>: Shutter Up Down (for PB)<br>15<br>: reserved<br>16<br>: Forced Up<br>17<br>: Forced Down<br>18<br>: Wind Alarm<br>19<br>: Rain Alarm<br>20<br>: HVAC Mode Comfort / Economy<br>21<br>: HVAC Mode Comfort / -<br>22<br>: HVAC Mode Economy / -<br>23<br>: HVAC Mode Building protection / HVAC<br>mode auto<br>24<br>: Shutter Stop<br>25 <br>: Timed Comfort Standby|[1..55]|FB|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Datapoint Types**

ID: Name: Encoding: Range: Use:
26 : Forced Comfort
27 : Forced Building protection
28 : Scene 1
29 : Scene 2
30 : Scene 3
31 : Scene 4
32 : Scene 5
33 : Scene 6
34 : Scene 7
35 : Scene 8
36 : Absolute dimming 25 %
37 : Absolute dimming 50 %
38 : Absolute dimming 75 %
39 : Absolute dimming 100 %
40 : Shutter Up / - (for switch)
41 : Shutter Down / - (for switch)
42 : Shutter Up / Down (for switch)
43 : Shutter Down / Up (for switch)
44 : Light sensor
45 : System clock
46 : Battery status
47 : HVAC Mode Standby / 48 : HVAC Mode Auto / 49 : HVAC Mode Comfort / Standby
50 : HVAC Mode Building protection / 51 : Timed toggle
52 : Dimming Absolute switch
53 : Scene switch
54 : Smoke alarm
55 : Sub detector
56 to 255 : reserved

### 4.2 Test vectors for Elliptic Curve algorithm

The following test vectors are extracted from §4.3 in the document: “GEC 2: Test vectors for
SEC 1” (available at the following location
[http://read.pudn.com/downloads168/doc/772358/TestVectorsforSEC%201-gec2.pdf)](http://read.pudn.com/downloads168/doc/772358/TestVectorsforSEC%201-gec2.pdf)

#### 4.2.1 Example Using Elliptic Curve Domain Parameters over F2[163] and
 the Cofactor
**Diffie-Hellman Primitive**

This section provides test vectors for ECDH using elliptic curve domain parameters over
F2[163] and the cofactor Diffie-Hellman primitive. U and V use ECDH as follows.

##### 4.2.1.1 Scheme Setup
_U and V decide to use the key derivation function ANSI-X9.63-KDF with SHA-1, the cofactor_
elliptic curve Diffie-Hellman primitive, and the elliptic curve domain parameters sect163k1 as
specified in GEC 1 [09].

Savedate: Filename: page 58 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|||26<br>: Forced Comfort<br>27<br>: Forced Building protection<br>28<br>: Scene 1<br>29<br>: Scene 2<br>30<br>: Scene 3<br>31<br>: Scene 4<br>32<br>: Scene 5<br>33<br>: Scene 6<br>34<br>: Scene 7<br>35<br>: Scene 8<br>36<br>: Absolute dimming 25 %<br>37<br>: Absolute dimming 50 %<br>38<br>: Absolute dimming 75 %<br>39<br>: Absolute dimming 100 %<br>40<br>: Shutter Up / - (for switch)<br>41<br>: Shutter Down / - (for switch)<br>42<br>: Shutter Up  / Down (for switch)<br>43<br>: Shutter Down / Up (for switch)<br>44<br>: Light sensor<br>45<br>: System clock<br>46<br>: Battery status<br>47<br>: HVAC Mode Standby / -<br>48<br>: HVAC Mode Auto / -<br>49<br>: HVAC Mode Comfort / Standby<br>50<br>: HVAC Mode Building protection  / -<br>51<br>: Timed toggle<br>52<br>: Dimming Absolute switch<br>53<br>: Scene switch<br>54<br>: Smoke alarm<br>55<br>: Sub detector<br>56 to 255 : reserved|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

##### 4.2.1.2 Key Deployment for U
_U selects a key pair (dU;QU) as follows using the key generation primitive specified Section_
3.2.1 of SEC 1 .

**Input: The elliptic curve domain parameters sect163k1 as specified in GEC 1.**

**Actions: U selects a key pair.**

1. Generate an integer dU.

1.1. Randomly or pseudorandomly select an integer dU in the interval [1;n-1].

_dU = 5321230001203043918714616464614664646674949479949_

1.2. Convert dU to the octet string dUS.

_dUS = 03 A41434AA 99C2EF40 C8495B2E D9739CB2 155A1E0D_

2. Calculate QU = (xU;yU) = dU x G.

_xU = 03 7D529FA3 7E42195F 10111127 FFB2BB38 644806BC_

_yU = 04 47026EEE 8B34157F 3EB51BE5 185D2BE0 249ED776_

As an octet string with point compression we have:

_QUS = 0303 7D529FA3 7E42195F 10111127 FFB2BB38 644806BC_

**Output: The elliptic curve key pair (dU;QU) with:**

_dU = 5321230001203043918714616464614664646674949479949_

_QU = ( 03 7D529FA3 7E42195F 10111127 FFB2BB38 644806BC;_

04 47026EEE 8B34157F 3EB51BE5 185D2BE0 249ED776)

_U conveys QU to V. V should check that QU is at least partially valid._

##### 4.2.1.3 Key Deployment for V
_V selects a key pair (dV ;QV ) as follows using the key generation primitive specified in_
Section 3.2.1 of SEC 1 [01].

**Input: The elliptic curve domain parameters sect163k1 as specified in GEC 1.**

**Actions: V selects a key pair.**

1. Generate an integer dV .

1.1. Randomly or pseudo randomly select an integer dV in the interval [1;n-1].

_dV = 501870566195266176721440888203272826969530834326_

1.2. Convert dV to an octet string dVS .

_dVS = 57E8A78E 842BF4AC D5C315AA 0569DB17 03541D96_

2. Calculate QV = (xV ;yV) = dV x G.

_xV = 07 2783FAAB 9549002B 4F13140B 88132D1C 75B3886C_

_yV = 05 A976794E A79A4DE2 6E2E1941 8F097942 C08641C7_

As an octet string with point compression we have:

_QV = 0307 2783FAAB 9549002B 4F13140B 88132D1C 75B3886C_

Savedate: Filename: page 59 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Output: The key pair (dV ;QV ).**

_dV = 501870566195266176721440888203272826969530834326_

_QV = ( 07 2783FAAB 9549002B 4F13140B 88132D1C 75B3886C;_

05 A976794E A79A4DE2 6E2E1941 8F097942 C08641C7)

_V conveys QV to U. U should check that QV is at least partially valid._

##### 4.2.1.4 4.3.4 Key Agreement Operation forU
To agree on keying data, U and V simultaneously perform the key agreement operation. U
establishes keying data as follows.

**Input: The key agreement operation takes the following input.**

1. The integer keydatalen = 20 which is the number of octets of keying data to be produced.

2. The optional string SharedInfo is absent.

**Actions: U establishes keying data.**

1. Compute the shared secret field element z.

1.1. Compute P = (xP;yP) = h x dU x QV .

_xP = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

_yP = 00 6C1EBD49 57115DE5 F033D926 7F35875A 44AF87E9_

1.2. P <> _O, OK._

1.3. Set z = xP.

_z = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

1.4. Convert z to an octet string.

_Z = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

2. Use the key derivation function ANSI-X9.63-KDF with SHA-1 to generate keying data K of
length 20 octets from Z.

2.1. Append Counter1 = 00000001 to the right of Z.

_Z1 = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D 00000001_

2.2. Compute Hash1 = SHA-1(Z1).

_Hash1 = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

2.3. Get K = Hash1.

_K = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

**Output: The keying data K.**

_K = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

##### 4.2.1.5 Key Agreement Operation for V
To agree on keying data, U and V simultaneously perform the key agreement operation. V
establishes keying data as follows.

Savedate: Filename: page 60 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN169** **Secure PB-Mode Configuration**

**Input: The key agreement operation takes the following input.**

1. The integer keydatalen = 20 which is the number of octets of keying data to be produced.

2. The optional string SharedInfo is absent.

**Actions: V establishes keying data.**

1. Compute the shared secret field element z.

1.1. Compute P = (xP;yP) = h x dV x QU.

_xP = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

_yP = 00 6C1EBD49 57115DE5 F033D926 7F35875A 44AF87E9_

1.2. P <> _O, OK._

1.3. Set z = xP.

_z = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

1.4. Convert z to an octet string.

_Z = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D_

2. Use the key derivation function ANSI-X9.53-KDF with SHA-1 to generate keying data K of
length 20 octets from Z.

2.1. Append Counter1 = 00000001 to the right of Z.

_Z1 = 04 CB89474B 33A518E1 C3CD11BE B6E2B0CF 48BEE64D 00000001_

2.2. Compute Hash1 = SHA-1(Z1).

_Hash1 = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

2.3. Get K = Hash1.

_K = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

**Output: The keying data K.**

_K = 59798528 083F50B0 7528353C DA99D0E4 60A7229D_

Savedate: Filename: page 61 of 61
2016 11 18 AN169 v03 Secure PB-Mode configuration DV docx


-----

