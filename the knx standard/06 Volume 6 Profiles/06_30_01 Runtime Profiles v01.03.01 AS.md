# Profiles

## Interworking

 Runtime Profiles

Summary

This document specifies the Profiles of features that are relevant for
runtime Interworking.

Version 01.03.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

WGI214-01 2010.04.15 Document creation. New document based on the contents of

WGI214-04 FB compliance for S-Mode devices.doc.
WGI2140-02 2010.04.19 See tracked changes: added FB IBS and FB ILS.
WGI2140-07 2011.12.05 Inclusion of feedback of WGI meeting of 2011.05.12.

                           - Removed “Room Light Controller 2”
                           column “yes”/”no”.
Removal of Functional Blocks that do not contains FB profiles.
Column “FB Profiles exist” consequently removed.
WGI214-08 2011.12.09 Inclusion of feedback of WGI meeting of 2011.12.09.

                           - Added FBs for DALI.
                           2012.03.08 Moved the syntax to the paper WGI237-05.
06/02 v01.00.00 2012.03.22 Creation of the Draft Proposal.
WGI214-09 2012.06.13 Proposal for resolution of comments from RfV.
06/02 v01.01.00 2012.11.07 Creation of the Draft for Voting.
06/30/01 v01.01.01 2013.11.29 Creation of the Approved Standard.
v01.02.01 2020.02.25 Inclusion of references to the FB Profiles for sensors and actuators

for colour control.
v01.03.01 2021.05.28 Inclusion of the FB Profiles for DALI Emergency Lighting and DALI

Proxy Colour Control.

#### References

[01] Chapter 3/7/1 “Interworking Model”

[02] Volume 6 “Profiles”

[03] Volume 7 “Application Descriptions”

Filename: 06_30_01 Runtime Profiles v01.03.01 AS.docx
Version: 01.03.01
Status: Approved Standard
Savedate: 2021.05.28
Number of pages: 6

|Version|Date|Modifications|
|---|---|---|
|WGI214-01|2010.04.15|Document creation. New document based on the contents of<br>WGI214-04 FBcompliance for S-Mode devices.doc.|
|WGI2140-02|2010.04.19|See tracked changes: added FB IBS and FB ILS.|
|WGI2140-07|2011.12.05|Inclusion of feedback of WGI meeting of 2011.05.12.<br>- <br>Removed “Room Light Controller 2”<br>- <br>Removed FBs for which no FB Profile exists and removed<br>column “yes”/”no”.<br>Removal of Functional Blocks that do not contains FB profiles.<br>Column “FB Profiles exist” consequently removed.|
|WGI214-08|2011.12.09|Inclusion of feedback of WGI meeting of 2011.12.09.<br>- <br>Added FBs for DALI.<br>- <br>Added syntax explanation and repeated used symbols.|
|WGI214-08|2012.03.08|Moved the syntax to the paper WGI237-05.|
|06/02 v01.00.00|2012.03.22|Creation of the Draft Proposal.|
|WGI214-09|2012.06.13|Proposal for resolution of comments from RfV.|
|06/02 v01.01.00|2012.11.07|Creation of the Draft for Voting.|
|06/30/01 v01.01.01|2013.11.29|Creation of the Approved Standard.|
|v01.02.01|2020.02.25|Inclusion of references to the FB Profiles for sensors and actuators<br>for colour control.|
|v01.03.01|2021.05.28|Inclusion of the FB Profiles for DALI Emergency Lighting and DALI<br>Proxy Colour Control.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4 1.1 Goals and definition of Runtime Profiles .............................................................. 4 1.2 Scope ...................................................................................................................... 4 1.3 Syntax .................................................................................................................... 4

 2 FB Profiles ............................................................................................................................... 5


-----

### 1 Introduction

#### 1.1 Goals and definition of Runtime Profiles
The goal of Runtime Profiles is to guarantee an expected level of Runtime Interworking between KNX
products.

KNX defines standard solutions for certain applications, modelled as Functional Blocks. These are
specified in [03].

Runtime Profiles specify what standard application level functionality shall be implemented in KNX
devices. This is mainly done by specifying the mandatory to be implemented functionality of FBs. The
main means of specifying Runtime Profiles are the FB Profiles.

In the case a standard KNX solution is defined for an application then this document may define or refer
to mandatory features or combinations thereof.

#### 1.2 Scope
This document does not specify the FB Profiles themselves. The FB Profiles are part of the FB
specifications in [03]. This document solely lists all FBs and indicates whether any Runtime Profiles are
specified.

This document focuses on the application aspects of the KNX products. Aspects that are related to the
Configuration of KNX products or to the KNX communication stack until the Application Interface Layer
are specified in [02].

Runtime Interworking requirements are not exclusively specified in this document. Please refer as well to
the following papers.

  - Chapter 3/7/1 “Interworking Model” ([01]) in general, and more specifically the “Meta-Rules
for Interworking”.

EXAMPLE 1 This document specifies for instance that if information is to be transmitted over KNX for
which a standard DPT exists, that this standard DPT shall then be used. This applies even if for the functionality
no FB or FB Profile exists.

#### 1.3 Syntax
In the specification of any FB Profile, the following statements are possible, as listed in Table 1.

**Table 1 – Syntax elements of the FB Profiles**

**Expression** **Description**

Functionality … { … } Block definition

IF <condition> { … } if / else statement for the evaluation of conditions
ELSE { … }

SELECT 1 OF n { … } One of a list has to be considered

// <Text, italic> Comment, e.g. to clarify contexts

In addition, the symbols as uniquely defined in [02] shall apply.

In the FB Profiles, additionally the following notation style shall apply.

**Symbol** **Definition**

GO It is mandatory to implement this Datapoint and it shall be a Group Object.

(GO) It is optional to implement this Datapoint as a Group Object.

|Expression|Description|
|---|---|
|Functionality …{ …}|Block definition|
|IF  <condition> { … }<br>ELSE{ …}|if / else statement for the evaluation of conditions|
|SELECT 1 OF n{ …}|One of a list has to be considered|
|//_<Text, italic>_|Comment, e.g. to clarify contexts|

|Symbol|Definition|
|---|---|
|GO|It is mandatory to implement this Datapoint and it shall be a Group Object.|
|(GO)|It is optional to implement this Datapoint as a Group Object.|


-----

### 2 FB Profiles
Table 2 lists the FBs for which FB Profiles exist. If an application realises functionality that is covered by
this FB then it shall comply with the functionality of one FB Profile as marked in the FB specification.

NOTE 1 This concerns the functionality of the FB. For the coding of the data, S-Mode applications have to use standard DPTs if
available.

Table 2 does not list FBs for which no FB Profile exists.

Volume 7 “Application Descriptions” ([03]) contains multiple specifications for HVAC Interworking in
LTE-Mode. For these FBs, there is typically a “Standard Mode Interface” specified. This “Standard Mode
Interface” shall be respected if the functionality is implemented that is standardised by this FB. These FB
are not included in the list in Table 2.

**Table 2 – List of FBs for which one or more FB Profiles exist**

|Interface<br>Object<br>Type|Functional Block|Abbrev.|
|---|---|---|
||**Chapter 7/1/1“System Clock” **||
|1001|System Clock|SCLO|
||**Chapter 7/1/2“Common Sensors” **||
|403|Scene Sensor|SCS|
||**Chapter 7/1/3“Common schedulers and controllers” **||
|1010|Scene Controller|(none)|
||**Chapter 7/10/1“HVAC Sensor Functional Blocks” **||
|320|Outside Temperature Sensor|OTS|
|321|Room Temperature Sensor|RTS|
||**Chapter 7/20/1“Lighting Sensors” **||
|409|Indoor Brightness Sensor|IBS|
|410|Indoor Luminance Sensor|ILS|
|414|Movement Detector for Lighting|MDL|
|420|Dimming Sensor Basic|DSB|
|421|Switching Sensor Basic|SSB|
|424|Colour Setting Sensor RGB(W)|CSSRGB|
|425|Colour Setting Sensor xyY|CSSXYY|
|426|Colour Temperature Setting Sensor|CTSS|
||**Chapter 7/20/2 “Lighting Actuators” **||
|417|Light Switching Actuator Basic|LSAB|
|418|Dimming Actuator Basic|LDAB|
|422|Colour Actuator xyY|CAXYY|
|423|Colour Actuator RGB(W)|CARGB|
|427|Colour Temperature Actuator|CTA|
||**Chapter 7/20/3“DALI interfaces” **||
|440|DALI Proxy Basic Light Application|DPBLA|
|441|DALI Proxy Basic Scene Application|DPBSA|
|442|DALI Proxy Basic Device Specific|DPDS|
|-|DALI Emergency Light Monitoring|DELM|
|-|DALI Proxy Colour Control<br>• <br>DALI Proxy Colour Temperature<br>• <br>DALI Proxy RGB(W)<br>• <br>DALI Proxy xyY|-|
||**Chapter 7/50/1 “Shutters and Blinds Sensors” **||
|801|Sunblind Sensor Basic|SSSB|
||**Chapter 7/50/2 “Shutters and Blinds Actuators” **||
|800|Sunblind Actuator Basic|SAB|


-----

-----

