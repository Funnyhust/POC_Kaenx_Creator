# Application Description

## Hot Water Heating

 Load Management

Summary:

This document is a part of the HVAC Application Interworking Standard
for Hot Water Heating applications. This chapter of Volume 7-11
describes the overall HWH load management mechanisms using locking
signals for load shedding and forcing signals for the purpose of forced
energy consumption.

Version 01.01.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

0.1 2002.02.22 BKY, document created, TFI approved, KNX Handbook 1.0
1.0 2002.09.12 BKY, editorial corrections, TFI approved,
updated for KNX Handbook 1.1
1.1 2003.08.06 BKY, editorial corrections;
TFI approved, updated for KNX Handbook 1.1
1.1 2009.06.17 Update in view of publication in the KNX Specifications v2.0.
01.01.01 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 3/7/2 “Datapoint Types”

[02] Chapter 7/11/1 “Heat Production”

[03] Chapter 7/11/2 “Heat Distribution”

[04] Chapter 7/11/4 “Room Heating Control”

Filename: 07_11_05 HWH LoadManagement v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 24

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 2 f 24

|Version|Date|Modifications|
|---|---|---|
|0.1|2002.02.22|BKY, document created, TFI approved, KNX Handbook 1.0|
|1.0|2002.09.12|BKY, editorial corrections, TFI approved,<br>updated for KNX Handbook 1.1|
|1.1|2003.08.06|BKY, editorial corrections;<br>TFI approved, updated for KNX Handbook 1.1|
|1.1|2009.06.17|Update in view ofpublication in the KNX Specifications v2.0.|
|01.01.01|2013.10.28|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Objectives ....................................................................................................................... 4 1.3 Abbreviations .................................................................................................................. 5

 2 Distributed load-management functions .............................................................................. 8 2.1 Load shedding ................................................................................................................. 8 2.1.1 Structure and usage of the locking signal (normative) ....................................... 8 2.1.2 Overload of a single boiler .................................................................................. 8 2.1.3 Overload of the Heat Production Segment (boiler sequence) ............................. 9 2.1.4 Usage of Locking Signals in the Heat Distribution system ................................ 9 2.1.5 Reaction to Locking Signals in Heating Zone Controllers ............................... 11 2.1.6 Reaction to Locking Signals in Individual Room Heating Control systems .............................................................................................................. 11 2.1.7 Reaction to Locking Signals in DHW Controllers ........................................... 12 2.1.8 Reaction to Locking Signals in HDAUX .......................................................... 12 2.1.9 Reaction to Locking Signals in Terminal Unit Controllers .............................. 13 2.1.10 Reaction to Locking Signals in Ventilation Controllers ................................... 14 2.1.11 Locking Signals: data chain .............................................................................. 15 2.2 Forced Load .................................................................................................................. 16 2.2.1 Structure and usage of the forcing signal (normative) ...................................... 16 2.2.2 Overheat of a single boiler ................................................................................ 17 2.2.3 Oversupply condition in a single boiler ............................................................ 17 2.2.4 Overheat of the Heat Production Segment (boiler sequence) ........................... 18 2.2.5 Oversupply condition a Heat Production Segment (boiler sequence) .............. 18 2.2.6 Usage of spare energy after load shutdown ...................................................... 18 2.2.7 Usage of Forcing Signals in the Heat Distribution system ............................... 18 2.2.8 Reaction to Forcing Signals in Heating Zone Controllers ................................ 19 2.2.9 Reaction to Forcing Signals in Individual Room Heating Control systems .............................................................................................................. 20 2.2.10 Reaction to Forcing Signals in DHW Controllers ............................................ 20 2.2.11 Reaction to Forcing Signals in HDAUX .......................................................... 21 2.2.12 Reaction to Forcing Signals in Terminal Unit Controllers ............................... 21 2.2.13 Reaction to Forcing Signals in Ventilation Controllers .................................... 22 2.2.14 Forcing Signals: data chain ............................................................................... 23

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 3 f 24


-----

### 1 Introduction

#### 1.1 Scope
This document is a part of the Konnex HVAC Application Interworking Standard. It illustrates the load
management mechanisms between Heat Production – Heat Distribution - Heat Consumers in case of:

- overload of the Heat Production or Heat Distribution system

- overheat or oversupply in the Heat Production system

- overheat in the Heat Distribution system

- efficient usage of remaining energy after load shutdown

- load priority of selected heat consumers

#### 1.2 Objectives
This Document is mainly illustrative and describes the overall concept of HWH load management
whereas in the functional block specifications [02] – [04] only the local usage of forcing and locking
signals is described.

The main parts of this documents are informative only because the normative specification is contained in
the functional block descriptions. Some parts in this document which complement the functional block
specification are however normative and are highlighted.

The implementation of forcing and locking signals is optional and today restricted to LTE mode only.
This document is therefore only relevant if these signals and load management functions are
implemented.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 4 f 24


-----

#### 1.3 Abbreviations

###### Functional Blocks:

**Hot Water Heating (HWH)**
**Abbreviation** **Description**
BUC Burner Controller
BOC Boiler Controller
HPM Heat Production Manager
BST Buffer Storage Tank
HFDM Heating Flow Demand Manager
FTC Flow Temperature Controller
HPM Heat Production Manager
HZC Heating Zone Controller
HIRC Heating Individual Room Controller
HRDM Heating Room Demand Manager
HDTACT Heat Demand Transformer Actuator Position
HDTRT Heat Demand Transformer Room Temperature
HDAUX Auxiliary Heat Demand
DHWC Domestic Hot Water Controller
DHWS Domestic Hot Water Scheduler
DHWCPS Domestic Hot Water Circulation Pump Scheduler
SDHWC Solar Domestic Hot Water Controller
DHWSM Domestic Hot Water Setpoint Manager
DHWCPC Domestic Hot Water Circulation Pump Controller
UDHWSET DHW User Settings

**Ventilation, Air Conditioning and Cold Water (VAC)**

**Abbreviation** **Description**

AHUC Air Handling Unit Controller
CC Chiller Control
CDAUX Auxiliary Cooling Demand
CDAUXPER Auxiliary Cooling Demand Precent
CDTAHU Cooling Demand Transformer Air Handling Unit
CFDM Cooling Flow Demand Manager
CPM Cold Water Production Manager
CRC Re-Cooling Controller
CZC Cooling Zone Controller
HDAUXPER Auxiliary Heating Demand Precent
HDTAHU Heating Demand Transformer Air Handling Unit
SATC Supply Air Temperature Controller

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 5 f 24


-----

**Terminal Units (TU) [13]**
**Abbreviation** **Description**
ACDTTU Air Cooler Energy Demand Transformer Terminal Unit
AHDTTU Air Heater Energy Demand Transformer Terminal Unit
CCDTTU Chilled Ceiling Energy Demand Transformer Terminal Unit
FCC Fan Coil Unit Controller
RCC Radiator and Chilled Ceiling Control
RHDTTU Radiator Heating Energy Demand Transformer Terminal Unit
SPUC Split Unit Control
VAVC Variable Air Volume Control
VDTTU Ventilation Demand Transformer Terminal Unit
WHPC Water Heat Pump Control

**Sensor, MMI, Actuators - Common Controller Functions [14]**
**Abbreviation** **Description**
CFWTS Condensor Flow Temperature Sensor
CRNWTS Condensor Retrun Water Temperature Sensor
DPS Dew Point Status Sensor
FWTS Flow Water Temperature Sensor
HVA HVAC Valve
OAD Outside Air Damper
ORHS Outside Relative Humidity Sensor
OAQS Outside Air Quality Sensor
OTS Outside Air Temperature Sensor
PRD Presence Detector
RRHS Room Relative Humidity Sensor
RAQS Room Air Quality Sensor
RNARHS Return Air Relative Humidity Sensor
RNAQS Return Air Quality Sensor
RNATS Return Air Temperature Sensor
RNWTS Return Water Temperature Sensor
RSMHD Room Setpoint Manager HVAC-Mode Driven
RSMTD Room Setpoint Manager Temperature Driven
RTS Room Temperature Sensor
SARHS Supply Air Relative Humidity Sensor
SAQS Supply Air Quality Sensor
SATS Supply Air Temperature Sensor
SIS Sun Intensity Sensor
SMAQ Setpoint Manager Air Quality
SMRH Setpoint Manager relative Humidity
UAQSS Air Quality Setpoint Setting
URHSS Air Relative Humidity Setpoint Setting
UHRS User HVAC Room Setting
UHD User HVAC Display
WCOS Water Change over Status Sensor
WOS Window Switch
WSS Wind Speed Sensor

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 6 f 24


-----

**General**
**Abbreviation** **Description**
cs Company specific
NA not allowed / not available
LTE Logical Tag Extended Mode, see [18] Volume 10, LTE Specification
FB Functional Block
DPT Datapoint Type
IO Interface Object
IR LTE InfoReport Input / Output
IR/P LTE InfoReport Input with Polling capability (LTE property client)
W LTE Write Input / Output

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 7 f 24


-----

### 2 Distributed load-management functions
This chapter describes some specific HWH load-management functions which concern the whole HWH
process chain: from the boiler to the heat-consumers. Here the overall functionality is described whereas
in the functional block specification only the local black-box behavior is considered.

#### 2.1 Load shedding 
This chapter gives an overview about the usage and handling of locking signals. Locking signals are used
in case of:
– overload protection
– consumer priority handling / load shedding

##### 2.1.1 Structure and usage of the locking signal (normative)
**Dependencies of attributes - allowed combinations (cases A – C):**
see also HVAC Datapoint Types [01]

**Description**

X= don’t care

no locking condition, all fields except ‘LockRequest’ are void: the sender
**Normal case**
of the signal shall set PwrReduction =0 % and Type = 0 (uncritical). The
**A)** X X **0** receiver shall ignore them.

unconditional locking command: all heat consumers shall (if locking
**Protection (critical overload)**
signals are supported) observe the lock request and reduce their energy
consumption according to the PwrReduction value:
**B)** 0...100% **1** **1** -  0 %: no reduction;

                           - 100%: max. reduction

conditional locking command: those heat consumers without load priority

**Load shedding according to load**

shall (if locking signals are supported) observe the lock request and may

**priority (uncritical overload)** reduce their energy consumption according to the PwrReduction value:

                               -  0 %: no reduction;
**C)** 0...100% **0** **1** - 100%: max. reduction

##### 2.1.2 Overload of a single boiler
The Boiler Controller BOC may generate locking signal if the boiler is overloaded. Two types of boiler
overload situations are distinguished:

– critical overload because the boiler temperature is below a critical limit (risk of corrosion): this may
happen in case of boiler startup or startup of cold heat consumers.
– uncritical overload if the requested boiler temperature can not be provided but the boiler temperature
is above a critical limit

In both cases the extent of overload (or vice versa the requested reduction of power consumption) is
indicated with a percent value.

Locking signals from BOC are only evaluated in the corresponding Heat Producer Manager HPM

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 8 f 24

|PwrReduction|Type|LockRequest|Description<br>X= don’t care|
|---|---|---|---|
|**Normal case**|**Normal case**|**Normal case**|no locking condition, all fields except ‘LockRequest’ are void: the sender<br>of the signal shall set PwrReduction =0 % and Type = 0 (uncritical). The<br>receiver shall ignore them.|
|X|X|**0 **|**0 **|
|**Protection (critical overload)**|**Protection (critical overload)**|**Protection (critical overload)**|unconditional locking command: all heat consumers shall  (if locking<br>signals are supported) observe the lock request and reduce their energy<br>consumption according to the PwrReduction value:<br>-     0 %: no reduction;<br>- 100%: max. reduction|
|0...100%|**1 **|**1 **|**1 **|
|**Load shedding according to load**<br>**priority (uncritical overload)**|**Load shedding according to load**<br>**priority (uncritical overload)**|**Load shedding according to load**<br>**priority (uncritical overload)**|conditional locking command: those heat consumers without load priority<br>shall (if locking signals are supported) observe the lock request andmay <br>reduce their energy consumption according to the PwrReduction value:<br>-     0 %: no reduction;<br>- 100%: max. reduction|
|0...100%|**0 **|**1 **|**1 **|


-----

##### 2.1.3 Overload of the Heat Production Segment (boiler sequence)
The Heat Producer Manager HPM collects the locking signals of all connected boilers. These signals can
be used in the HPM for boiler sequence control (manufacturer-specific mechanisms). Normally other
boilers (if available) will be activated in case of overload of one or more boilers.

If the whole heat production system is overloaded (overload condition in the whole boiler cascade or in a
system with only one boiler) the HPM may generate a locking signal which indicates the amount of
requested power reduction in the heat consumers. Like in the locking signal of a single BOC the locking
signal of the HPM contains information whether the overload is critical or uncritical.

##### 2.1.4 Usage of Locking Signals in the Heat Distribution system
**LTE routing mechanism:**
Locking signals from the HPM are received by the HFDM in its primary Heat Distribution Segment and
they must be transparently routed by the HFDM to its Secondary Heat Distribution Segment without
changing data value or datapoint addressing. I.e. only the LTE binding group is changed by the HFDM
This routing mechanism is necessary for LTE easy configuration. Because of this LTE routing
mechanism, the heat consumers connected to a Heat Distribution Segment do not need to know to which
Heat Production Segment or HPM they are connected.

**Power reduction in the HFDM:**
– If the HFDM receives a critical locking signal (type “protection”) from the HPM the flow
temperature in the Secondary Heat Distribution Segment will be normally reduced according to the %
reduction factor (manufacturer specific behavior)
– In case of an uncritical locking signal from the HPM the HFDM will usually not react (manufacturer
specific behavior) and will provide the demand dependent flow temperature.
– If the HFDM receives a uncritical locking signal from the HFDM in its primary Heat Distribution
Segment the flow temperature in the Secondary Heat Distribution Segment may be reduced according
to the % reduction factor.
The translation oft the % value (0% means no reduction, 100% means stop energy consumption) to the
corresponding reduction of flow temperature is manufacturer specific.

The specific behavior of the HFDM can be enabled/disabled/controlled by company specific parameters.

In all cases a reduction of flow temperature by the HFDM is only possible if an FTC is connected to the
HFDM. This is an optional feature of the HFDM.

Any power reduction in the HFDM due to locking signals shall not have an influence on the calculated
resulting heat demand signal in the HFDM! Otherwise the system could oscillate.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 9 f 24


-----

**Local generation of Locking Signals by the HFDM**

The HFDM itself may also generate its own locking signal which is sent to the Secondary Heat
Distribution Segment. This is an optional feature of the HFDM and the method to calculate the power
reduction value is company specific.

The HFDM may generate a locking signal in the following cases:
– Some consumers in the secondary Heat Distribution Segment request absolute load priority. This
feature is normally used for DHW load priority. Load priority information is contained in specific
attributes in the incoming heat demand signals which are evaluated by the HFDM (see [03]).
In this case the locking signal from HFDM indicates that consumers without load priority stop energy
consumption (100% reduction)

– An overload condition in the Secondary Heat Distribution Segment occurs i.e. the requested flow
temperature can not be provided and some consumers request shift load priority in their heat demand
signal. In this case the HFDM may also generate a locking signal which leads to load priority between
heat consumers. Heat consumers without priority will reduce their energy consumption according to
the requested power reduction value.

– A locking signal is received from the HFDM in the primary Heat Distribution Segment. This signal is
evaluated in the HFDM and can be combined with the locally calculated locking signal.
E.g. the received power reduction value from the preceding HFDM and the locally calculated value
are compared and the higher power reduction value is sent by the HFDM in the resulting locking
signal. The specific behavior in this case can be enabled/disabled/controlled by company specific
parameters.

Constraint:
In all three cases the locking signals from HFDM have normally the type ‘uncritical’– only the % power
reduction value varies. At the moment no useful applications for critical locking signals from HFDM are
known. But in principle it is allowed that a HFDM could also generate critical locking signals.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 10 f 24


-----

##### 2.1.5 Reaction to Locking Signals in Heating Zone Controllers
**Usage of Locking Signals from HPM by the HZC:**
In the LTE implementation the HZC is logically connected to a Heat Distribution Segment and the HZC
receives routed HPM locking signals from the HFDM in this distribution segment (routing mechanism
see 2.1.4.).

The usage and reaction to locking signals from HPM is an optional feature of the HZC.
– If the HZC receives a critical locking signal from the HPM the HZC will reduce the flow according to
the % reduction factor in any case.

– If the HZC receives a uncritical locking signal from the HPM the HZC will reduce the flow according
to the % reduction factor if the HZC has not requested load priority.

**Usage of Locking Signals from HFDM by the HZC:**
The usage and reaction to locking signals from HFDM is an optional feature of the HZC.
Same behavior as for locking signals from HPM, see above.

The translation oft the % value (0% means no reduction, 100% means stop energy consumption) to the
corresponding reduction of flow temperature is manufacturer specific.

Important: Any power reduction or load shedding in the HZC due to locking signals MUST NOT have an
influence on the calculation of the flow temperature demand signal.

##### 2.1.6 Reaction to Locking Signals in Individual Room Heating Control systems
**LTE routing mechanism:**
In the LTE implementation the individual room heating control system of one apartment is linked
logically by the HDTRT functional block to a Heat Distribution Segment and the HDTRT receives HPM
and HFDM locking signals from the HFDM in this distribution segment.

Since the HDTRT has no built-in pre-controller functionality these signals have no functional effect on
the HDTRT itself. But these locking signals are transferred to the individual room controllers HIRC of
one apartment. These signals are transparently routed by the HDTRT to the LTE binding group
‘Apartment’ without changing the datapoint values or datapoint addressing. Because of this routing
mechanism, the HIRC do not need to know to which Heat Production Segment or Heat Distribution
Segment they are connected.

**Usage of Locking Signals from HPM and HFDM by the HIRC:**
Locking signals can be utilized by the HIRC in order to reduce the energy consumption by closing the
valve. But normally this has no big effect because the heat consumption is already reduced before the
HIRC system (e.g. in a pre-controller).The usage and reaction to locking signals from HPM and HFDM is
therefore an optional feature of the HIRC.

– If the HZC receives a critical locking signal from the HPM or HFDM the HIRC will reduce the flow
according to the % reduction factor in any case.

– If the HIRC receives a uncritical locking signal from the HPM or HFDM the HIRC will reduce the
flow according to the % reduction factor if the HIRC has not requested load priority.

The translation oft the % value (0% means no reduction, 100% means stop energy consumption) to the
corresponding valve position is manufacturer specific.

Important: Any power reduction or load shedding in the HIRC due to locking signals MUST NOT have
an influence on the calculation of the heat demand signal.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 11 f 24


-----

##### 2.1.7 Reaction to Locking Signals in DHW Controllers
**Usage of Locking Signals from HPM by the DHWC:**
In the LTE implementation the DHWC is logically connected to a Heat Distribution Segment and the
DHWC receives routed HPM locking signals from the HFDM in this distribution segment (routing
mechanism see 2.1.4.).

The usage and reaction to locking signals from HPM is an optional feature of the DHWC.
– If the DHWC receives a critical locking signal from the HPM the DHWC will reduce the flow
according to the % reduction factor in any case.

– If the DHWC receives a uncritical locking signal from the HPM the DHWC will may reduce the flow
according to the % reduction factor if the DHWC has not requested load priority. DHW load will
often request absolute or shift load priority (peak-load condition). In some DHW applications it is not
useful to reduce/stop DHW load in case of uncritical boiler overload, therefore the DHWC will not
react.

**Usage of Locking Signals from HFDM by the DHWC:**
The usage and reaction to locking signals from HFDM is an optional feature of the DHWC.
Same behavior as for locking signals from HPM, see above.

The translation oft the % value (0% means no reduction, 100% means stop energy consumption) to the
actual DHW load behavior is manufacturer specific.

Important: Any power reduction or load shedding in the DHWC due to locking signals MUST NOT have
an influence on the calculation of the flow temperature demand signal.

##### 2.1.8 Reaction to Locking Signals in HDAUX
The auxiliary heat demand functional block HDAUX connects an auxiliary “multi-purpose” heat
consumer to the heat distribution system. The HDAUX can be used to model very specific / “exotic” heat
consumers which do not belong to the category “Room Heating” or “Domestic Hot Water Control” (e.g.
heating of a swimming pool etc.).

In the LTE implementation the HDAUX is logically connected to a Heat Distribution Segment and the
HDAUX receives locking signals from HPM or HFDM in this distribution segment (same as for HZC or
DHWC).

Due to the nature of the HDAUX the reaction to locking signals is manufacturer specific and depending
on the specific application of the HDAUX.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 12 f 24


-----

##### 2.1.9 Reaction to Locking Signals in Terminal Unit Controllers
Overview:


**DistrSegmH2**


**DistrSegmH1**


BUC BOC HPM HFDM

|H|P|M|
|---|---|---|

|H|FDM|
|---|---|


**DistrSegmH3**


**DistrSegmC2**


**DistrSegmC1**


CRC CC CPM CFDM

|C|P|M|
|---|---|---|

|C|FDM|
|---|---|


**DistrSegmC3**

|Col1|Col2|Col3|Col4|TUC|Col6|Col7|
|---|---|---|---|---|---|---|
|||||TUC|TUC|TUC|
|||||TUC|TUC|TUC|
||||TUC|TUC|TUC|TUC|
||||||||
||||||||
||||||||
||||||||
||||||||
||||||||
||||||||
||||||||


In the LTE implementation the terminal unit controllers TUC are linked to the '... demand transformer
TU' (RHDTTU, CCDTTU, AHDTTU or ACDTTU). These transformers are in a Heat or a Cold
Distribution Segment. These distribution segments link to the HFDM/CFDM.
The terminal unit controllers receive HPM/CPM and HFDM/CFDM locking signals from the
HFDM/CFDM in this distribution segments.

The transformers have no built-in pre-controller functionality. Therefore these signals have no functional
effect on them.

So the locking signals may directly be used by the terminal unit controllers TUC.

**Usage of Locking Signals from HPM and HFDM by the TUC:**
Locking signals can be utilized by the TUC in order to reduce the energy consumption by closing the
valves. But normally this has no big effect because the energy consumption is already reduced before in a
pre-controller. The usage and reaction to locking signals from HPM and HFDM is therefore an optional
feature of the TUC.

– If the TUC receives a critical locking signal from the HPM or HFDM the TUC will reduce the flow
according to the % reduction factor in any case.

– If the TUC receives a uncritical locking signal from the HPM or HFDM the TUC will reduce the flow
according to the % reduction factor if the TUC has not requested load priority.

The translation oft the % value (0% means no reduction, 100% means stop energy consumption) to the
corresponding valve position is manufacturer specific.

**Important: Any power reduction or load shedding in the TUC due to locking signals MUST NOT have**
an influence on the calculation of the demand signals.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 13 f 24


-----

##### 2.1.10 Reaction to Locking Signals in Ventilation Controllers
**Usage of Locking Signals from HPM by the AHUC, SATC, HDAUXPER:**
In the LTE implementation the AHUC, SATC and HDAUXPER are logically connected to a Heat
Distribution Segment and these functional blocks receive optionally routed HPM locking signals from the
HFDM in this distribution segment (routing mechanism see 2.1.4.).

The usage and reaction to locking signals from HPM is an optional feature of the AHUC, SATC and
HDAUXPER.
– If the AHUC, SATC, HDAUXPER receive a critical locking signal from the HPM these functional
blocks will reduce the flow according to the % reduction factor in any case.

– If the AHUC, SATC, HDAUXPER a uncritical locking signal from the HPM these functional blocks
will reduce the flow according to the % reduction factor if there is no load priority demand.

**Usage of Locking Signals from HFDM by the AHUC, SATC, HDAUXPER:**
The usage and reaction to locking signals from HFDM is an optional feature of these functional blocks.
– If the AHUC, SATC, HDAUXPER receive a locking signal from the HFDM these functional blocks
will reduce their power consumption according to a manufacturer specific algorithm.

Important: Any power reduction or load shedding due to locking signals MUST NOT have an influence
on the calculation of the flow temperature demand signal.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 14 f 24


-----

##### 2.1.11 Locking Signals: data chain

**Situation** **Reason (examples)** **Signal (source)** **Destination** **Reaction**

**Critical boiler overload:** - system startup BOC: sends HPM -> HPM will first activate other boilers. If all boilers are

- low boiler temp. or - start „cold“ consumers LockSignBOC HFDM-> HFDM -> .... overloaded it may generate a ‘critical’ LockSignHPM

- low return temp. type ‘critical’ HZC

LockSignHPM is routed by HFDM

X % reduction HDTRT ->HIRC

=> boiler protection

DHWC Heat consumers including HFDM+FTC reduce flow
etc temperature according to % reduction value in any case

(if locking signal is supported)
**Uncritical boiler overload:** - system startup BOC: sends HPM-> HPM will first activate other boilers. If all boilers are

                     - start „cold“ consumers LockSignBOC HFDM-> overloaded it may generate a ‘uncritical’ LockSignHPM

- requested flow temp is not reached

                   - start DHW load type ‘uncritical’ HFDM -> ....

and LockSignHPM is routed by HFDM

X % reduction HZC

- some heat consumers have heat

=> ShiftLoadPriority or HDTRT ->HIRC Heat consumers without load priority reduce the flow

demand with load priority

AbsLoadPriority attribute is set (DHWC) temperature according to % reduction value (if locking

=> load management

in demand signal (normally set etc signal is supported)
by DHW)

**Uncritical boiler overload** - system startup BOC: sends HPM HPM will first activate other boilers.

                     - start „cold“ consumers LockSignBOC

- requested flow temp is not reached If all boilers are overloaded it will NOT generate a

                     - general overload type ‘uncritical’

and locking signal

                      - no priority of heat X % reduction

- no heat consumers request load consumers
priority in their heat demand

**Peak demand within a Heat** - e.g. DHW load with HFDM: sends all heat consumers except those requesting absolute load
**Distribution Segment:** absolute priority LockSignHFDM HFDM -> .... priority (e.g. DHW) stop their heat consumption

- heat consumers with absolute type ‘uncritical’ HZC (if locking signal is supported)

=> AbsLoadPriority attribute is

load priority 100% reduction HDTRT ->HIRC

set in demand signal

(DHWC)

=> load shedding

etc

**Overload within a Heat** - system startup HFDM: sends Consumers without load priority reduce their heat
**Distribution Segment:** - start „cold“ consumers LockSignHFDM HFDM -> .... consumption according to % reduction value

                   - start DHW load type ‘uncritical’ HZC

- requested flow temp is not reached

X % reduction HDTRT ->HIRC

- some heat consumers request load

=> ShiftLoadPriority attribute is (DHWC)

priority in their heat demand

set in (DHW) demand signal etc

=> load management

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 15 f 24

|Situation|Reason (examples)|Signal (source)|Destination|Reaction|
|---|---|---|---|---|
|**Critical boiler overload**: <br>- low boiler temp. or<br>- low return temp.<br>=> boiler protection|- system startup<br>- start „cold“ consumers|BOC: sends<br>LockSignBOC<br>type ‘critical’<br>X % reduction|HPM -><br>HFDM-><br>HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|HPM will first activate other boilers. If all boilers are<br>overloaded it may generate a ‘critical’ LockSignHPM<br>LockSignHPM is routed by HFDM<br>Heat consumers including HFDM+FTC reduce flow<br>temperature according to % reduction value in any case<br>(if locking signal is supported)|
|**Uncritical boiler overload**: <br>- requested flow temp is not  reached<br>and<br>- some heat consumers have heat<br>demand with load priority<br>=> load management|- system startup<br>- start „cold“ consumers<br>- start DHW load<br>=> ShiftLoadPriority or<br>AbsLoadPriority attribute is set<br>in demand signal (normally set<br>by DHW)|BOC: sends<br>LockSignBOC<br>type ‘uncritical’<br>X % reduction|HPM-><br>HFDM-><br>HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>(DHWC)<br>  etc|HPM will first activate other boilers. If all boilers are<br>overloaded it may generate a ‘uncritical’ LockSignHPM<br>LockSignHPM is routed by HFDM<br>Heat consumers without load priority reduce the flow<br>temperature according to % reduction value (if locking<br>signal is supported)|
|**Uncritical boiler overload**<br>- requested flow temp is not  reached<br>and<br>- no heat consumers request load<br>priority in their heat demand|- system startup<br>- start „cold“ consumers<br>- general overload<br>- no priority of heat<br>  consumers|BOC: sends<br>LockSignBOC<br>type ‘uncritical’<br>X % reduction|HPM|HPM will first activate other boilers.<br>If all boilers are overloaded it will NOT generate a<br>locking signal|
|**Peak demand within a Heat**<br>**Distribution Segment:** <br>- heat consumers with absolute<br>  load priority<br>=> load shedding|- e.g. DHW load with<br>  absolute priority<br>=> AbsLoadPriority attribute is<br>set in demand signal|HFDM: sends<br>LockSignHFDM<br>type ‘uncritical’<br>100% reduction|HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>(DHWC)<br>  etc|all heat consumers except those requesting absolute load<br>priority (e.g. DHW) stop their heat consumption<br>(if locking signal is supported)|
|**Overload within a Heat**<br>**Distribution Segment:**<br>- requested flow temp is not reached<br>- some heat consumers request load<br>priority in their heat demand<br>=> load management|- system startup<br>- start „cold“ consumers<br>- start DHW load<br>=> ShiftLoadPriority attribute is<br>set in (DHW) demand signal|HFDM: sends<br>LockSignHFDM<br>type ‘uncritical’<br>X % reduction|HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>(DHWC)<br>  etc|Consumers without load priority reduce their heat<br>consumption according to % reduction value|


-----

#### 2.2 Forced Load
The following chapter gives an overview about the usage and handling of forcing signals. Forcing
signals are used in case of:
– overheat protection
– energy over-supply
– usage of remaining energy after load shutdown

##### 2.2.1 Structure and usage of the forcing signal (normative)
**Dependencies of attributes - allowed combinations (cases A – T):**

**Description**

X= don’t care

no forcing condition, all attributes except ‘ForceRequest’ are void: the
**Normal case**
sender of the signal shall set these attributes to ‘0’. The receiver shall
**A)** X X X X X X X **0** ignore them.


**Protection (critical overheat)**


**B)** 1 0 0 0 maximum flow temperature if necessary).

**C)** 0 1 0 0 room heating shall be activated with ‘Comfort’ setpoint

**D)** 0 0 1 0 DHW load shall be activated with ‘LegioProtect’ setpoint.

**E)** 0 0 0 1 DHW load shall be activated with ‘Normal’ setpoint.

**F)** 1 0 1 0 **X** **0 [*)]** **1** **1** combination of B) and D)

**G)** 1 0 0 1 combination of B) and E)

**H)** 0 1 1 0 combination of C) and D)

**I)** 0 1 0 1 combination of C) and E)

critical overheat – type of heat consumers is unspecified: to be used in

**J)** **0** **0** **0** **0** ForceSignBOC signal only (between BOC and HPM), see 2.2.2


**Oversupply (uncritical overheat)**


**K)** 1 0 0 0 maximum flow temperature if necessary). Forced load can be inhibited if

room heating is “off” e.g. in energy saving mode

forced room heating with ‘Comfort’ setpoint. Forced load can be inhibited

**L)** 0 1 0 0 if room heating is “off” e.g. in energy saving mode

forced DHW load with ‘LegioProtect’ setpoint. Forced load can be

**M)** 0 0 1 0 inhibited if the DHW controller is “off” e.g. solar DHW load only

**X** **1** **0** **1**

forced DHW load with ‘Normal’ setpoint. Forced load can be inhibited if

**N)** 0 0 0 1 the DHW controller is “off” e.g. solar DHW load only

**O)** 1 0 1 0 combination of K) and M)

**P)** 1 0 0 1 combination of K) and N)

**Q)** 0 1 1 0 combination of L) and M)

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 16 f 24

|RoomHMax|RoomHComf|DHWLegio|DHWNorm|Overrun|Oversupply|Protection|ForceRequest|Description<br>X= don’t care|
|---|---|---|---|---|---|---|---|---|
|**Normal case**|**Normal case**|**Normal case**|**Normal case**|**Normal case**|**Normal case**|**Normal case**|**Normal case**|no forcing condition, all attributes except ‘ForceRequest’ are void: the<br>sender of the signal shall set these attributes to ‘0’. The receiver shall<br>ignore them.|
|X|X|X|X|X|X|X|**0 **|**0 **|
|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|**Protection (critical overheat)**|unconditional load: heat consumers shall observe the force request;<br>***)**priority mechanism: in case of ‘Protection’ the flag ‘Oversupply’ is<br>meaningless and shall be set to ‘0’ by the sender and shall be ignored by<br>the receiver.|
|1|0|0|0|**X **|**0 *) **|**1 **|**1 **|room heatingshallconsume as much energy as possible (respecting the<br>maximum flow temperature if necessary).|
|0|1|0|0|0|0|0|0|room heatingshallbe activated with ‘Comfort’ setpoint|
|0|0|1|0|0|0|0|0|DHW loadshall be activated with ‘LegioProtect’ setpoint.|
|0|0|0|1|1|1|1|1|DHW loadshall be activated with ‘Normal’ setpoint.|
|1|0|1|0|0|0|0|0|combination of B) and D)|
|1|0|0|1|1|1|1|1|combination of B) and E)|
|0|1|1|0|0|0|0|0|combination of C) and D)|
|0|1|0|1|1|1|1|1|combination of C) and E)|
|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|critical overheat – type of heat consumers is unspecified: to be used in<br>ForceSignBOC signal only (between BOC and HPM), see 2.2.2|
|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|**Oversupply (uncritical overheat)**|conditional load: heat consumers can ignore the force request;<br>priority mechanism: ‘Protection’ has priority over ‘Oversupply’, see above|
|1|0|0|0|**X **|**1 **|**0 **|**1 **|room heating may consume as much energy as possible (respecting the<br>maximum flow temperature if necessary). Forced load can be inhibited if<br>room heating is “off” e.g. in energy saving mode|
|0|1|0|0|0|0|0|0|forced room heating with ‘Comfort’ setpoint. Forced load can be inhibited<br>if room heating is “off” e.g. in energy saving mode|
|0|0|1|0|0|0|0|0|forced DHW load with ‘LegioProtect’ setpoint. Forced load can be<br>inhibited if the DHW controller is “off” e.g. solar DHW load only|
|0|0|0|1|1|1|1|1|forced DHW load with ‘Normal’ setpoint. Forced load can be inhibited if<br>the DHW controller is “off” e.g. solar DHW load only|
|1|0|1|0|0|0|0|0|combination of K) and M)|
|1|0|0|1|1|1|1|1|combination of K) and N)|
|0|1|1|0|0|0|0|0|combination of L) and M)|


-----

|R)<br>S)|RoomHMax|RoomHComf|DHWLegio|DHWNorm|Overrun|Oversupply|Protection|ForceRequest|Description<br>X= don’t care|
|---|---|---|---|---|---|---|---|---|---|
|**R)**<br>**S)**|0|1|0|1|||||combination of L) and N)|
|**R)**<br>**S)**|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|**0 **|uncritical overheat – type of heat consumers is unspecified: to be used in<br>ForceSignBOC signal only (between BOC and HPM) ), see 2.2.3|
|**T)**|**RoomHMax**|**RoomHComf**|**DHWLegio**|**DHWNorm**|**Overrun**|**Oversupply**|**Protection**|**ForceRequest**|**Description (continued)**<br>X= don’t care|
|**T)**|**Overrun**|**Overrun**|**Overrun**|**Overrun**|**Overrun**|**Overrun**|**Overrun**|**Overrun**|‘Overrun’ can be set e.g. after load shutdown if there is remaining energy<br>in the heat producer. ‘Overrun’ is independent of ‘Protection’,<br>‘Oversupply’, ‘DHWNorm’, ‘DHWLegio’, ‘RoomHComf’, ‘RoomHMax’<br>All heat consumers which were active immediately**) before the overrun<br>condition occurred continue their energy consumption using their last<br>setpoint (which was active before load-shutdown)<br>**) immediately means within 1..2 minutes|
|**T)**|X|X|X|X|**1 **|**X **|**X **|**1 **|**1 **|


**Priority combinations** below

X X **1** **1** ‘DHWLegio’ has priority => the receiver will ignore ‘DHWNorm’
**U)**

**0** **1**
**0** **1**

**V)** **1** **1** X X **1** **0** ‘RoomHMax’ has priority => the receiver will ignore ‘RoomHComf’

**Illegal combination** unspecified forcing condition: not allowed in the sender and to be ignored
by the receiver.
W) X X X X **0** **0** **0** **1**

**Support of RoomHMax, RoomHComf, DHWLegio and DHWNorm attributes:**

- Heat consumers like HZC, HIRC and DHWC shall support these attributes and shall react
accordingly.

- Situation dependent “intelligent” selection of the class of heat consumers and the forced load level
is an optional feature of the HPM or HFDM. If this functionality is not supported, the attributes
RoomHMax, RoomHComf, DHWLegio and DHWNorm shall be set to a reasonable fixed value
by the sender. At least one of the attributes shall be set ‘1’ respecting the allowed combinations.

##### 2.2.2 Overheat of a single boiler
The Boiler Controller BOC may generate a forcing signal (type ‘Protection’) if the boiler temperature
is above a critical limit. This situation may occur if the boiler is (by some reason, e.g. in case of boiler
inspection) providing much more energy than requested but there are no or only a few consumers
taking hot water from the boiler.

The signal is evaluated in the Heat Producer Manager HPM only. See chapter 2.2.4

##### 2.2.3 Oversupply condition in a single boiler
The Boiler Controller BOC may generate a forcing signal (type ‘Oversupply’) if the boiler temperature
is higher than requested by the HPM but below a critical limit. This situation may occur e.g. in wood
fired boilers or solar supported heat production systems.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 17 f 24

|Priority combinations|Col2|Col3|Col4|Col5|Col6|Col7|Col8|the sender shall not use these combinations; reaction of the receiver see<br>below|
|---|---|---|---|---|---|---|---|---|
|X|X|**1 **|**1 **|**0 **|**0 **<br>**1 **|**1 **<br>**0 **|**1 **|‘DHWLegio’ has priority => the receiver will ignore ‘DHWNorm’|
|**1 **|**1 **|X|X|X|X|X|X|‘RoomHMax’ has priority => the receiver will ignore ‘RoomHComf’|

|Illegal combination|Col2|Col3|Col4|Col5|Col6|Col7|Col8|unspecified forcing condition: not allowed in the sender and to be ignored<br>by the receiver.|
|---|---|---|---|---|---|---|---|---|
|X|X|X|X|**0 **|**0 **|**0 **|**1 **|**1 **|


-----

The signal is evaluated in the Heat Producer Manager HPM only. See chapter 2.2.5

##### 2.2.4 Overheat of the Heat Production Segment (boiler sequence)
The Heat Producer Manager HPM collects the forcing signals of all connected boilers. The reaction to
these signals is manufacturer-specific.

- Forcing signals from BOC can be used in the HPM for boiler sequence control. Active boilers can
be shut down in case of critical overheat of one or more boilers.

- If the critical overheat condition persists in one or more boilers, the HPM may generate a forcing
signal (type ‘Protection’) in order to trigger forced heat consumption. Critical forcing signals shall
be considered by the heat consumers (unconditional load).

- HPM with higher functionality may indicate whether DHW load and/or Room Heating should be
activated. Details see chapter 2.2.1

##### 2.2.5 Oversupply condition a Heat Production Segment (boiler sequence)
The Heat Producer Manager HPM collects the forcing signals of all connected boilers. The reaction to
these signals is manufacturer-specific.

- Forcing signals from BOC can be used in the HPM for boiler sequence control. The number of
active boilers / boiler stages will normally be reduced in case of uncritical oversupply condition.

- If the oversupply condition persists in the boiler sequence, the HPM may generate a forcing signal
(type ‘Oversupply’) in order to trigger forced heat consumption. Uncritical forcing signals can be
considered by the heat consumers (conditional load).

- HPM with higher functionality may indicate whether DHW load and/or Room Heating should be
activated. Details see chapter 2.2.1

##### 2.2.6 Usage of spare energy after load shutdown
After load shutdown (no more heat demand by the heat consumers) the HPM will disable the boilers in
the heat production segment but some boilers may still have spare energy for a certain time. Individual
BOC can indicate the presence of spare energy by a forcing signal (type ‘Overrun’). It is normally
desirable to use this remaining energy in the heat consumers.

If there is a significant amount of remaining energy in the heat production system after load shutdown,
the HPM may generate a forcing signal (type ‘Overrun’). Heat consumers which were active
immediately before load shutdown continue their energy consumption using their last setpoint (which
was active before load-shutdown). Details see chapter 2.2.1

##### 2.2.7 Usage of Forcing Signals in the Heat Distribution system
**LTE routing mechanism:**
Forcing signals from the HPM are received by the HFDM in its primary Heat Distribution Segment
and they must be transparently routed by the HFDM to its secondary Heat Distribution Segment
without changing data value or datapoint addressing. I.e. only the LTE binding group is changed by
the HFDM This routing mechanism is necessary for LTE easy configuration. Because of this LTE
routing mechanism, the heat consumers connected to a Heat Distribution Segment do not need to
know to which Heat Production Segment or HPM they are connected.

**Reaction to Forcing Signals by the HFDM:**
– If the HFDM receives a forcing signal with the type ‘Protection’ or ‘Oversupply’ from the HPM,
the HFDM will increase the flow temperature in the Secondary Heat Distribution Segment until a
max. flow temperature (parameter of the HFDM) is reached. I.e. the pre-controller FTC will open
the valve accordingly. The attributes DHWNorm’, ‘DHWLegio’, ‘RoomHComf’, ‘RoomHMax’
are normally ignored because they are not relevant for the heat distribution system.
This is an optional feature of the HFDM.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 18 f 24


-----

– If the HFDM receives a forcing signal with the type ‘Overrun’ from the HPM, the HFDM will
restore the last flow temperature setpoint (which was valid before load shutdown) in the secondary
Heat Distribution Segment. This is an optional feature of the HFDM.
– If the HFDM receives a forcing signal from the HFDM in its primary Heat Distribution Segment,
the behavior of the HFDM is the same as for forcing signals from HPM, see above.
The specific reaction of the HFDM to forcing signals can be enabled/disabled/controlled by company
specific parameters.

In all cases an increase of flow temperature by the HFDM is only possible if an FTC is connected to
the HFDM. This is an optional feature of the HFDM.

Any increase of flow temperature by the HFDM due to forcing signals shall not have an influence on
the calculated resulting heat demand signal in the HFDM! Otherwise the system could oscillate.

**Local generation of Forcing Signals by the HFDM**

Overheat conditions may also occur in a HFDM in specific situations (e.g. in a heat-exchanger).
Therefore the HFDM can in principle also generate its own forcing signal which is independent from
the forcing signal from HPM.

The locally generated forcing signal is sent to the secondary Heat Distribution Segment. This is an
optional feature of the HFDM and the method to generate the signal is company specific.

The HFDM may generate a forcing signal in the following cases (same mechanism as in the HPM):
– critical overheat in heat exchanger => type ‘Protection’
– oversupply: uncritical overheat in heat exchanger. The heat-exchanger temperature is much higher
than requested by heat demand => type ‘Oversupply’
– overrun: indicates that remaining energy is available in the heat-exchanger after load shutdown
=> type ‘Overrun’
– An external forcing signal received from the HFDM in the primary Heat Distribution Segment is
evaluated in the HFDM. Its value can be combined with the locally calculated forcing signal.

HFDM with higher functionality may indicate whether DHW load and/or Room Heating should be
activated. Details see chapter 2.2.1

Generation of forcing signals by the HFDM can be enabled/disabled/controlled by company specific
parameters.

##### 2.2.8 Reaction to Forcing Signals in Heating Zone Controllers
The reaction of the Heating Zone Controller HZC to forcing signals from HPM and HFDM is
identical.

Forcing signals of the type ‘Protection’ or ‘Oversupply’ are only accepted by the HZC if either the
attribute RoomHMax or RoomHComf is set (activate room heating).

- If the HZC receives a critical forcing signal (type ‘Protection’) it will react in any case
(unconditional load).
=> RoomHMax attribute is set: the HZC will increase the flow until a max. flow temperature
(parameter) is reached
=> RoomHComf attribute is set: room heating shall be temporarily activated with ‘Comfort’ room
temperature setpoint (HVACMode = Comfort)

- If the HZC receives a uncritical forcing signal (type ‘Oversupply’) it may react or may ignore the
signal (conditional load). Forcing signal could e.g. be ignored if the HZC is in an energy saving
mode. If the signal is accepted, the reaction is the same as for type ‘Protection’, see above

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 19 f 24


-----

If the HZC receives a forcing signal with the type ‘Overrun’ immediately after load shutdown it will
temporarily keep the last flow temperature setpoint (used before shutdown) for control loop (pump
overrun). So remaining energy in the heat producer / heat exchanger is efficiently used after load
shutdown.

Forcing signals must NOT have an influence on the calculation of the flow temperature demand signal
of the HZC (otherwise system may „oscillate“)

The implementation of forcing signals is an optional feature of the HZC

##### 2.2.9 Reaction to Forcing Signals in Individual Room Heating Control systems
**LTE routing mechanism:**
In the LTE implementation the individual room heating control system of one apartment is linked
logically by the HDTRT functional block to a Heat Distribution Segment and the HDTRT receives
HPM and HFDM forcing signals from the HFDM in this distribution segment.

Since the HDTRT has no built-in pre-controller functionality these signals have no functional effect on
the HDTRT itself. But these forcing signals are transferred to the individual room controllers HIRC of
one apartment. These signals are transparently routed by the HDTRT to the LTE binding group
‘Apartment’ without changing the datapoint values or datapoint addressing. Because of this routing
mechanism, the HIRC do not need to know to which Heat Production Segment or Heat Distribution
Segment they are connected.

**Usage of Forcing Signals from HPM and HFDM by the HIRC:**
The reaction of the HIRC to forcing signals from HPM and HFDM is identical.

Forcing signals of the type ‘Protection’ or ‘Oversupply’ are only accepted by the HIRC if either the
attribute RoomHMax or RoomHComf is set (activate room heating).

- If the HIRC receives a critical forcing signal (type ‘Protection’) it will react in any case
(unconditional load).
=> RoomHMax attribute is set: the HIRC will open the valve (100% flow).
=> RoomHComf attribute is set: room heating shall be temporarily activated with ‘Comfort’ room
temperature setpoint (HVACMode = Comfort)

- If the HIRC receives a uncritical forcing signal (type ‘Oversupply’) it may react or may ignore the
signal (conditional load). Forcing signal could e.g. be ignored if the HIRC is in an energy saving
mode. If the signal is accepted, the reaction is the same as for type ‘Protection’, see above

If the HIRC receives a forcing signal with the type ‘Overrun’ immediately after load shutdown it will
temporarily keep the last flow temperature setpoint (used before shutdown) for control loop (pump
overrun). So remaining energy in the heat producer is efficiently used after load shutdown.

Forcing signals must NOT have an influence on the calculation of the heat demand signal of the HIRC
or HDTRT (otherwise system may „oscillate“)

The implementation of forcing signals is an optional feature of the HIRC

##### 2.2.10 Reaction to Forcing Signals in DHW Controllers
The reaction of the DHW Controller DHWC to forcing signals from HPM and HFDM is identical.

Forcing signals of the type ‘Protection’ or ‘Oversupply’ are only accepted by the DHWC if either the
attribute DHWLegio or DHWNorm is set (activate DHW load).

- If the DHWC receives a critical forcing signal (type ‘Protection’) it will react in any case
(unconditional load).
=> DHWLegio attribute is set: DHW load shall be activated with ‘LegioProtect’ setpoint
=> DHWNorm attribute is set: DHW load shall be activated with ‘Normal’ setpoint

- If the DHWC receives a uncritical forcing signal (type ‘Oversupply’) it may react or may ignore
the signal (conditional load). Forcing signal could e.g. be ignored if solar DHW load is currently
active. If the signal is accepted, the reaction is the same as for type ‘Protection’, see above

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 20 f 24


-----

If the DHWC receives a forcing signal with the type ‘Overrun’ immediately after load shutdown it will
temporarily keep the last flow temperature setpoint (used before shutdown) for control loop (pump
overrun). So remaining energy in the heat producer / heat exchanger is efficiently used after load
shutdown.

Forcing signals must NOT have an influence on the calculation of the flow temperature demand signal
of the DHWC (otherwise system may „oscillate“)

The implementation of forcing signals is an optional feature of the DHWC

##### 2.2.11 Reaction to Forcing Signals in HDAUX
The auxiliary heat demand functional block HDAUX connects an auxiliary “multi-purpose” heat
consumer to the heat distribution system. The HDAUX can be used to model very specific / “exotic”
heat consumers which do not belong to the category “Room Heating” or “Domestic Hot Water
Control” (e.g. heating of a swimming pool etc.).

In the LTE implementation the HDAUX is logically connected to a Heat Distribution Segment and the
HDAUX receives forcing signals from HPM or HFDM in this distribution segment (same as for HZC
or DHWC).

Due to the nature of the HDAUX the reaction to forcing signals is manufacturer specific and
depending on the specific application of the HDAUX.

Depending on the installation or application HDAUX may:

- react like a room heating system

- react like a DHW system

- react in any case (if RoomHMax or RoomHComf or DHWLegio or DHWNorm attribute is set)

- react only on forcing signals with type ‘Overrun’

- ignore all types of forcing signals

- etc.

##### 2.2.12 Reaction to Forcing Signals in Terminal Unit Controllers
Overview:
See also picture in chapter 2.1.9

In the LTE implementation the terminal unit controllers TUC are linked to the '... demand transformer
TU' (RHDTTU, CCDTTU, AHDTTU or ACDTTU). These transformers are in a Heat or a Cold
Distribution Segment. These distribution segments link to the HFDM/CFDM.
The terminal unit controllers receive HPM/CPM and HFDM/CFDM forcing signals from the
HFDM/CFDM in this distribution segments.

The transformers have no built-in pre-controller functionality. Therefore these signals have no
functional effect on them.

So the forcing signals may directly be used by the terminal unit controllers TUC.

**Usage of Forcing Signals from HPM and HFDM by the TUC:**

The implementation of forcing signals is an optional feature of the TUC.

The reaction of the TUC to forcing signals from HPM and HFDM is identical.

Forcing signals of the type ‘Protection’ or ‘Oversupply’ are only accepted by the TUC if either the
attribute ‘RoomHMax’ or ‘RoomHComf’ is set (activate room heating).

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 21 f 24


-----

- If the TUC receives a critical forcing signal (type ‘Protection’) it will react in any case
(unconditional load).
=> RoomHMax attribute is set: the TUC will open the valve (100% flow).
=> RoomHComf attribute is set: room heating shall be temporarily activated with ‘Comfort’ room
temperature setpoint (HVACMode = Comfort)

- If the TUC receives a uncritical forcing signal (type ‘Oversupply’) it may react or may ignore the
signal (conditional load). Forcing signal could e.g. be ignored if the TUC is in an energy saving
mode. If the signal is accepted, the reaction is the same as for type ‘Protection’, see above

If the TUC receives a forcing signal with the type ‘Overrun’ immediately after load shutdown it will
temporarily keep the last flow temperature setpoint (used before shutdown) for control loop (pump
overrun). So remaining energy in the heat producer is efficiently used after load shutdown.

Forcing signals MUST NOT have an influence on the calculation of the heat demand signal of the
TUC (otherwise system may „oscillate“)

##### 2.2.13 Reaction to Forcing Signals in Ventilation Controllers
**Usage of Forcing Signals from HPM or HFDM by the AHUC, SATC, HDAUXPER:**
In the LTE implementation the AHUC, SATC and HDAUXPER are logically connected to a Heat
Distribution Segment and these functional blocks receive routed HPM forcing signals or HFDM
forcing signals from the HFDM in this distribution segment (routing mechanism see 2.2.7.).

The usage and reaction to forcing signals is an optional feature of the AHUC, SATC and
HDAUXPER. The handling of forcing signals from HPM and HFDM is identical.

If a force request with the type ‘Protection’, ‘Oversupply’ or ‘Overrun’ is demanded by the HPM or
HFDM the AHUC, SATC and HDAUXPER may be force to consume energy according to a company
specific algorithm.
Forcing signals of the type ‘Protection’ or ‘Oversupply’ are usually only accepted by ventilation
controllers if either the attribute RoomHMax or RoomHComf is set (activate room heating).

Note: To be able to consume energy, the ventilation has to be started. In some cases this may reduce
user comfort and requires additional electrical energy. Therefore it is usually recommended to use
spare energy for DHW load or hot water heating.

Any forced power consumption MUST NOT have an influence on the calculation of the heat demand
signals of the ventilation system.

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 22 f 24


-----

##### 2.2.14 Forcing Signals: data chain

**Situation** **Reason (examples)** **Signal (source)** **Destination** **Reaction**

**Critical boiler overheat:** – solar energy BOC sends HPM -> HPM will first deactivate other boilers if possible. If the
energy production is too high and a – wood fired boiler ForceSignBOC HFDM-> HFDM -> .... overheat condition persists the HPM will generate a
critical temperature limit is reached – boiler inspection type ‘Protection’ HZC ForceSignHPM with type ‘Protection’ and the attributes
=> avoid activation of safety HDTRT ->HIRC for the selected class of consumers and load levels set
temperature limiter DHWC (RoomHMax, RoomHComf, DHWLegio, DHWNorm).

etc

ForceSignHPM is routed by HFDM

All addressed heat consumers shall increase flow
temperature according to load level attributes
(unconditional load)
Pre-controller HFDM+FTC open valve until max. flow
temp (parameter) is reached

**Energy oversupply:** – solar energy BOC sends HPM -> HPM will first deactivate other boilers if possible. If the
energy production is too high but the – wood fired boiler ForceSignBOC HFDM-> HFDM -> .... oversupply condition persists the HPM will generate a
boiler temperature is uncritical type ‘Oversupply’ HZC ForceSignHPM with type ‘Oversupply’ and the

HDTRT ->HIRC attributes for the selected class of consumers and load
DHWC levels set (RoomHMax, RoomHComf, DHWLegio,
etc DHWNorm).

ForceSignHPM is routed by HFDM

Addressed heat consumers may increase flow
temperature according to load level attributes
(conditional load)
Pre-controller HFDM+FTC open valve until max. flow
temp (parameter) is reached

**Overrun:** - no advanced scheduling BOC sends HPM -> HPM generates ForceSignHPM
Boiler has remaining energy after information available ForceSignBOC HFDM-> HFDM -> ....

ForceSignHPM is routed by HFDM

load shutdown - unexpected load shedding type ‘Overrun’ HZC

HDTRT ->HIRC all heat consumers that were consuming energy just

=> use remaining energy in DHWC before keep the last setpoint for control loop (pump
boiler etc overrun)

=> pre-controller HFDM+FTC keeps last setpoint

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 23 f 24

|Situation|Reason (examples)|Signal (source)|Destination|Reaction|
|---|---|---|---|---|
|**Critical boiler overheat**: <br>energy production is too high and a<br>critical temperature limit is reached<br>=> avoid activation of safety<br>      temperature limiter|– solar energy<br>– wood fired boiler<br>– boiler inspection|BOC sends<br>ForceSignBOC<br>type ‘Protection’|HPM -><br>HFDM-><br>HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|HPM will first deactivate other boilers if possible. If the<br>overheat condition persists the HPM will generate a<br>ForceSignHPM with type ‘Protection’ and the attributes<br>for the selected class of consumers and load levels set<br>(RoomHMax, RoomHComf, DHWLegio, DHWNorm).<br>ForceSignHPM is routed by HFDM<br>All addressed heat consumers shall increase flow<br>temperature according to load level attributes<br>(unconditional load)<br>Pre-controller HFDM+FTC open valve until max. flow<br>temp (parameter) is reached|
|**Energy oversupply:**<br>energy production is too high but the<br>boiler temperature is uncritical|– solar energy<br>– wood fired boiler|BOC sends<br>ForceSignBOC<br>type ‘Oversupply’|HPM -><br>HFDM-><br>HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|HPM will first deactivate other boilers if possible. If the<br>oversupply condition persists the HPM will generate a<br>ForceSignHPM with type ‘Oversupply’ and the<br>attributes for the selected class of consumers and load<br>levels set (RoomHMax, RoomHComf, DHWLegio,<br>DHWNorm).<br>ForceSignHPM is routed by HFDM<br>Addressed heat consumers may increase flow<br>temperature according to load level attributes<br>(conditional load)<br>Pre-controller HFDM+FTC open valve until max. flow<br>temp (parameter) is reached|
|**Overrun:** <br>Boiler has remaining energy after<br>load shutdown|- no advanced scheduling<br>  information available<br>- unexpected load shedding<br>=> use remaining energy in<br>boiler|BOC sends<br>ForceSignBOC<br>type ‘Overrun’|HPM -><br>HFDM-><br>HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|HPM generates ForceSignHPM<br>ForceSignHPM is routed by HFDM<br>all heat consumers that were consuming energy just <br>beforekeep the last setpoint for control loop (pump<br>overrun)<br>=> pre-controller HFDM+FTC keeps last setpoint|


-----

|Situation|Reason (examples)|Signal (source)|Destination|Reaction|
|---|---|---|---|---|
|**Critical overheat of heat exchanger**: <br>a critical temperature limit is reached|- unexpected load shedding|HFDM sends<br>ForceSignHFDM<br>type ‘Protection’ and<br>the attributes for the<br>selected class of<br>consumers and load<br>levels set<br>(RoomHMax,<br>RoomHComf,<br>DHWLegio,<br>DHWNorm).|HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|All addressed heat consumers shall increase flow<br>temperature according to load level attributes<br>(unconditional load)<br>Pre-controller HFDM+FTC open valve until max. flow<br>temp (parameter) is reached|
|**Energy oversupply in the heat**<br>**exchanger:**<br>flow temperature in the secondary<br>heat distribution segment is too high<br>but uncritical|- unexpected load shedding<br>- system failure|HFDM sends<br>ForceSignHFDM<br>type ‘Oversupply’<br>and the attributes for<br>the selected class of<br>consumers and load<br>levels set<br>(RoomHMax,<br>RoomHComf,<br>DHWLegio,<br>DHWNorm)|HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|Addressed heat consumers may increase flow<br>temperature according to load level attributes<br>(conditional load)<br>Pre-controller HFDM+FTC open valve until max. flow<br>temp (parameter) is reached|
|**Overrun:** <br>Heat exchanger has remaining energy<br>after load shutdown|- no advanced scheduling<br>  information available<br>- unexpected load shedding<br>=> use remaining energy in the<br>heat exchanger|HFDM sends<br>ForceSignHFDM<br>type ‘Overrun’|HFDM -> ....<br>HZC<br>HDTRT ->HIRC<br>DHWC<br>  etc|All heat consumers that were consuming energy just <br>beforekeep the last setpoint for control loop (pump<br>overrun)<br>=> pre-controller HFDM+FTC keeps last setpoint|


© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 24 f 24


-----

