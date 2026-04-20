# Application Descriptions

### Ventilation, Air Conditioning, and Cold Water

 Introduction

Summary

This document is for information only and gives an introduction and
overview to the HVAC Application Interworking Standard for
Ventilation, Air Conditioning and Cold Water applications.

Version 01.01.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

##### Document updates

**Version** **Date** **Modifications**

0.1 2002.01.15 A. Hurschler, document created for introduction in TFI
0.2 2002.02.08 A. Hurschler, correction of comments
0.3 2002.03.05 A. Hurschler, release
1.0 2002.03.28 A. Hurschler, TFI approved
1.1 2002.12.10 A. Hurschler, update handbook v.1.1

                - 4.2.2 overview Cold Water pre-controller
1.1 2009.06.18 Update in view of publication in the KNX Specifications v2.0.
01.01.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

##### References

[01] Part 7/10 “HVAC General Functional Blocks” [01]

[02] Chapter 7/11/1 “HWH Production” [02]

[03] Chapter 7/11/2 “HWH Distribution” [03]

[04] Chapter 7/11/3 “HWH Domestic Hot Water Control” [04]

[05] Chapter 7/11/4 “HWH Room Heating Control” [05]

[06] Chapter 7/11/5 “HWH Load Management” [06]

[07] Chapter 7/11/9 “HWH Property Identifiers” [07]

[08] Part 7/12 “Direct Electric Heating” [08]

[09] Part 7/13 “Terminal Unit Functional Blocks” [09]

[10] Chapter 7/14/1 “VAC Ventilation, Air Conditioning” [10]

[11] Chapter 7/14/2 “VAC Cold Water” [11]

[12] Chapter 7/14/9 “VAC Property Identifiers” [12]

[13] Part 10/1 “Logical Tag Extended” [13]

Filename: 07_14 VAC Introduction v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 23

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 2/23

|Version|Date|Modifications|
|---|---|---|
|0.1|2002.01.15|A. Hurschler, document created for introduction in TFI|
|0.2|2002.02.08|A. Hurschler, correction of comments|
|0.3|2002.03.05|A. Hurschler, release|
|1.0|2002.03.28|A. Hurschler, TFIapproved|
|1.1|2002.12.10|A. Hurschler, update handbook v.1.1<br>- 4.2.2overview Cold Water pre-controller|
|1.1|2009.06.18|Update in view of publication inthe KNXSpecifications v2.0.|
|01.01.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

##### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Objectives ....................................................................................................................... 4 1.3 Abbreviations .................................................................................................................. 5

 2 Overview ................................................................................................................................. 7 2.1 KNX HVAC interworking vision ................................................................................... 7 2.2 Application overview ...................................................................................................... 9

 3 Ventilation and Air Conditioning ....................................................................................... 10 3.1 Ventilation and Air Conditioning system topology ...................................................... 10 3.2 Typical application examples and mapping in KNX-Function Blocks ........................ 11 3.2.1 Residential apartment ventilation ..................................................................... 11 3.2.2 Stand-alone air handling unit with hot water heating and cold water cooling............................................................................................................... 12 Demand-controlled air handling units ............................................................................. 14

 4 Cold Water ............................................................................................................................ 16 4.1 Cold Water system topology ........................................................................................ 16 4.2 Typical application examples and mapping in KNX-Function Blocks ........................ 18 4.2.1 Chilled ceiling zone controller .......................................................................... 18 4.2.2 Cold water pre-controller .................................................................................. 19 4.2.3 Chiller controller ............................................................................................... 20

 5 HVAC System Model ........................................................................................................... 21

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 3/23


-----

#### 1 Introduction

##### 1.1 Scope
This document is an informative part of the KNX HVAC Application Interworking Standard. It illustrates
the following:

- Overall function of the HVAC Ventilation, Air Conditioning and Cold Water (Vol 7-14, see [10] –

[12])

- Links between VAC and Terminal Unit (TU) systems (Vol. 7-13, see [09])

- Links between VAC and Hot Water Heating (HWH) systems (Vol. 7-11, see [02] – [06]).

General purpose Functional Blocks used for HVAC applications such as sensors, actuators, HMI, and
common HVAC Functional Blocks are described in Vol. 7-10 (HVAC Specification Functional Blocks,
Sensors, HMI, Actuators, Common Controller Functions [01]).

The target market for the KNX HVAC system is mainly (European) residential and small commercial
buildings.

##### 1.2 Objectives
This document is for information only and gives a short introduction and overview to the HVAC
Application Interworking Standard for Ventilation, Air Conditioning, and Cold Water applications. This
document intends to clarify the overall concept of the KNX HVAC system and codependencies of the
different parts of the VAC system.

The document also contains descriptions of typical application examples (scenarios).

The content of this document is not normative.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 4/23


-----

##### 1.3 Abbreviations
###### Functional Blocks:
**Hot Water Heating (HWH) [02] - [06]**
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
HDAUX Auxiliary Heating Demand
HDTACT Heat Demand Transformer Actuator Position
HDTRT Heat Demand Transformer Room Temperature
DHWC Domestic Hot Water Controller
DHWS Domestic Hot Water Scheduler
DHWCPS Domestic Hot Water Circulation Pump Scheduler
SDHWC Solar Domestic Hot Water Controller
DHWSM Domestic Hot Water Setpoint Manager
DHWCPC Domestic Hot Water Circulation Pump Controller
UDHWSET DHW User Settings

**Ventilation, Air Conditioning, and Cold Water (VAC) [11] - [12]**

**Abbreviation** **Description**

AHUC Air Handling Unit Controller
CC Chiller Control
CDAUX Auxiliary Cooling Demand
CDAUXPER Auxiliary Cooling Demand Percent
CDTAHU Cooling Demand Transformer Air Handling Unit
CFDM Cooling Flow Demand Manager
CPM Cold Water Production Manager
CRC Re-Cooling Controller
CZC Cooling Zone Controller
HDAUXPER Auxiliary Heating Demand Percent
HDTAHU Heating Demand Transformer Air Handling Unit
SATC Supply Air Temperature Controller

**Terminal Units (TU) [09]**
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

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 5/23


-----

**Sensor, HMI, Actuators - Common Controller Functions [01]**
**Abbreviation** **Description**
CFWTS Condenser Flow Temperature Sensor
CRNWTS Condenser Return Water Temperature Sensor
DPS Dew Point Status Sensor
FWTS Flow Water Temperature Sensor
HVA HVAC Valve
HVACOPT HVAC Optimiser
HVACEMS HVAC Emergency Source
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

**General**
**Abbreviation** **Description**
cs Company-Specific
DPT Datapoint Type
FB Functional Block
GO Group Object
IO Interface Object
IR LTE-Service InfoReport
LTE Logical Tag Extended Mode, see [13] Volume 10, LTE Specification
NA Not Available
M Mandatory
W LTE-Service Write

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 6/23


-----

#### 2 Overview

##### 2.1 KNX HVAC interworking vision
**Interworking of HVAC devices**
In today’s European residential or small commercial buildings market, HVAC systems are either standalone, hard-wired, or fully integrated via a single manufacturer private network. They are installed by one
or more installers, and add-ons require that the installer return to the site. Also, mixing products from
multiple manufacturers as illustrated in Figure 2.1-1 is not possible for the most part.

**Figure 2.1-1 Tightly integrated single manufacturers HVAC system**

The interworking concept of the KNX HVAC system allows for interoperability among products of
different manufacturers (multi-vendor systems). The KNX HVAC system model also permits easy
installation of entire HVAC systems or subsequent add-on of HVAC products. It also recognises the need
for evolutionary solutions in the market until such time that costs for bus connection can compete with
direct wiring (even for simple low-cost devices).
The long-term vision provides for most HVAC products to be connected to the KNX system as illustrated
in Figure 2.1-2.

###### KNX

**Figure 2.1-2 Long-term view of interoperable HVAC systems**

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 7/23


-----

**Interworking with other application domains**

HVAC systems in today’s residential or small commercial market feature little or no provisions to
interwork with other systems. Although conventional HVAC systems may maintain an operating mode
for “occupied and unoccupied”, and a lighting or shutter & blinds system may have the ability to provide
for a “lived-in-look” when the home is unoccupied, conventional systems of different application
domains do not communicate.

One of the visions of the KNX HVAC model is to deliver stand-alone KNX HVAC systems (HVAC
only) as practised today as well as via HVAC distribution channels. In addition, these systems can easily
be integrated into e.g. a single home control system customised to the occupants’ activities and other
systems present in the home. Standardised information shared among all systems makes this possible. The
KNX model provides data interfaces to exchange information of common interest with other application
domains.

This level of interworking among subsystems (functions of common interest) provides a basic level of
integration. It offers benefits to the user in the form of convenience, peace of mind, and savings.
Interworking between application domains can be expanded using a professional installation tool (ETS).

**Manufacturer-specific features**
Although in upscale market for many years, “intelligent” HVAC systems or home automation in the mass
market is still an evolving market. New applications, features, and devices will be developed over the
next few years. Therefore, any attempt to provide an industry standard in this market must allow for
manufacturer-specific extensions and further development of the standard itself.
It is important for each manufacturer to be able to provide features that differentiate their products in the
marketplace.
The KNX HVAC interworking model only defines today’s state-of-the-art functions and enables
manufacturers to add vendor-specific information for unique functions.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 8/23


-----

##### 2.2 Application overview

**Cold water**

**Cold water** **distribution** **Cold water** **Domestic**
**zone control** **production** **Hot Water**

**Individual** **Hot water**
**room control** **production, distirbution**

**Ventilation** **HVAC Applications** **Alternative cold water sources** **[Complementary ]Applications**

Link to                                           - Lighting
complementary                                   - Blinds

**Air conditioning** **Open standard** applications - Security

**Private data**

                                                             - Metering

                                                                              - etc.

**Pump-control** **Scheduler /**

**Remote Management etc.**

**Fan-coil**

**Direct electrical**
**heating**

**Figure 2.2-1 Field of applications**

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 9/23


-----

#### 3 Ventilation and Air Conditioning 

##### 3.1 Ventilation and Air Conditioning system topology 

###### Ventilation, Plant management Air Conditioning

**- Room unit**

**- Air handler unit** **- Servicetool/PC-HMI**
**controller**

**- Tel. gateway /**

**- Supply air temperature** **Management Station**
**controller**

**- Scheduler**

**- Alarming**

**- etc.**

**Figure 3-1 VAC system Ventilation, Air Conditioning**

Figure 3-1 shows a distributed heating system that consists of:

- Ventilation and air conditioning

- and a part for plant management / remote control

HVAC devices connected to the KNX system will work as a distributed system. Runtime interworking
data is exchanged between the devices for higher functionality and more comfort. Example:

- Energy demand-dependent cold / hot water signals => energy savings

- Load management functions, load shedding, forced load

- Optimisation of plant operation, automation of repetitive processes

- Sharing of common sensors

- Connection of intelligent actuators

- Visualisation of status information (e.g. on a Room Unit)

- Management and remote control functions of the HVAC system (Room Unit, Scheduler, PC-HMI,
Servicetool, etc.)

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 10/23

|Ventilation,<br>Air Conditioning<br>- Air handler unit<br>controller<br>- Supply air temperature<br>controller|Col2|Col3|Plant management<br>- Room unit<br>- Servicetool/PC-HMI<br>- Tel. gateway /<br>Management Station<br>- Scheduler<br>- Alarming<br>- etc.|
|---|---|---|---|
|**Ventilation,**<br>**Air Conditioning**<br>**- Air handler unit**<br>**     controller**<br>**- Supply air temperature**<br>**      controller**||||


-----

**Ventilation and Air Conditioning**

Ventilation and air conditioning systems are:

- Stand-alone (independent) temperature and/or humidity and/or air quality controller applications
(AHUC), which control a single room or a reference room.

- Demand controlled air handler (SATC), supply air temperature controller in connection with terminal
units (variable air volume systems, etc).

##### 3.2 Typical application examples and mapping in KNX-Function Blocks

###### 3.2.1 Residential apartment ventilation
A single-family home with ventilation system (residential apartment ventilation) with air heat exchanger.
This stand-alone system has an outside air intake system, a heat exchanger (energy recovery system),
electrical heating, supply air fan, exhaust air fan and air relief. The temperature is controlled.

**T**

**Grp_Apartment**

TempRoom

###### RTS

 AHUC

 RSMHD

HVACModeEff
HVACModeEffNext
TempRoomSetpSetHeatEff(1,4)
TempRoomSetpSetCoolEff(1,4)

**Figure 3.2-1 Residential apartment ventilation**

The air handling unit is represented by the Functional Block Air Handling Unit Controller (AHUC), with
temperature control algorithm. The value of the room temperature (RTS) is transmitted via KNX to the air
handling unit temperature controller. The Room Setpoint Manager (RSMHD), which may be part of a
room unit, sends its HVACMode and setpoints via KNX-signals to the AHUC.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 11/23

|AH|UC|
|---|---|


-----

###### 3.2.2 Stand-alone air handling unit with hot water heating and cold water cooling
Stand-alone temperature and/or humidity control using heating and cooling coils for air treatment.

**Apartment_a**

**T**

Room unit
(in reference
room)

Air-handling
unit

**T**

Heating circuit Cooling circuit
demand demand
compensated compensated

to to
Hot water Cold water
production production

**Grp_DistrSegmH_n** **Grp_Apartment_c**

EnergyDemHeatAHUC

TempFlowWaterDemAbsHDTAHU **Grp_Apartment_b**

1 1
HFDM HDTAHU **Grp_Apartment_a**

###### HMI

StatusHPM
ForceSignHPM TempRoom
LockSignHPMForceSignHFDM RTS-a
LockSignHFDM

FTC StatusCPMForceSignCPM AHUC-a

LockSignCPM
ForceSignCFDM RSMHD-a
LockSignCFDM HVACModeEff

HVACModeEffNext
TempRoomSetpSetHeatEff(1,4)
TempRoomSetpSetCoolEff(1,4)

CFDM 1 1 CDTAHU SMRH-a

TempFlowWaterDemAbsCDTAHU EnergyDemCoolAHUC HumRelSetpHumEff

HumRelSetpDehumEff

**Grp_DistrSegmC_q**

###### SMAQ-a

AQSetpEff

FTC

**Figure 3.2-2 Stand-alone air handling unit**

The air handling unit is represented by the Functional Block AHUC. Depending on the requirements, this
air handling unit controls:

- temperature

- humidity

- air quality
Therefore are the different setpoint managers: RSMHD for temperature, SMRH for humidity, SMAQ for
air quality requirements.
The room temperature (RTS) value may be transmitted via KNX to the air handling unit temperature
controller and to the additional display (HMI) functions.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 12/23

|Col1|Col2|Col3|Col4|Col5|T|
|---|---|---|---|---|---|
||||||Cool<br>dem<br>com|
|||||||
|||||||
|||||||

|Grp_GenPeriph FlowTempWaterSetp|StatusFTC|
|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||||||
||||||||
||||||||
||AHUC|HU|||||
|||||-|||
||||||||


-----

Hot water and cold water demands as a percentage value are transformed into temperature demand signals
in the Heating Demand Transformer Air Handling Unit (HDTAHU) or in the Cooling Demand
Transformer Air Handling Unit (CDTAHU) respectively. The demand from the different consumers
(refer to chapter 5) are collected in the Heating Flow Demand Manager (HFDM) or Cooling Flow
Demand Manager (CFDM) respectively, and control a pre-controller.

As shown in the example for the Functional Blocks (Figure 3.2-2), it is possible to connect 3 (or n) Air
Handling Units Controllers (AHUC) to the transformer(s), whereby each transformer represents a
hydraulic circuit of a pre-controller and therefore a 1 : 1 connection between HDTAHU and HFDM as
well as between CDTAHU and CFDM.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 13/23


-----

###### Demand-controlled air handling units
Demand-controlled air handlers (SATC), supply air temperature controllers in connection with terminal
units (variable air volume systems, etc).

**Apartment_a** **Apartment_a**
**Room_m** **Room_n**

**T** **TT**

Room unit Room unit

VAV

**T**

Air-handling
unit

Heatling curcuit Cooling curcuit
demand demand
compensated compensated

to to

**Grp_DistrSegmH_n** Hot water Cold water

TempFlowWaterDemAbsHDTAHU EnergyDemHeatSATC production production

HFDM 1 1 HDTAHU

**Grp_DistrSegmV_x** FCC

StatusHPM
ForceSignHPM
LockSignHPM
ForceSignHFDM TempSupplyAirSetpSet EnergyDemAir WHPC
LockSignHFDM ValueFreshAirSetp ValueFreshAirDem

StatusCPM SATC 1 1 [VDTTU]

FTC ForceSignCPM SPUC

LockSignCPM
ForceSignCFDM StatusSATC
LockSignCFDM TempSupplyAirSATC

VAVC

CFDM 1 1 CDTAHU

TempFlowWaterDemAbsCDTAHU

EnergyDemCoolSATC

**Grp_DistrSegmC_q**

FTC

**Figure 3.2-3 Air handling unit with terminal units**

A number of Terminal Unit Controllers (e.g. variable air volume controllers (VAV), refer to [09]) are
connected via Ventilation Demand Transformer (VDDTU) to the Supply Air Temperature Controller
(SATC).

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 14/23

|Col1|Col2|Col3|
|---|---|---|
||AT|AT|
||||

|Col1|Col2|FCC|Col4|Col5|
|---|---|---|---|---|
||||||
|||WHPC|||
||||||
|||SPUC|SPUC||
||||||
|||VAVC|||

|CFDM|Col2|
|---|---|
|**Grp_GenPeriph**<br>FTC<br>TempFlowWaterSetp|**Grp_GenPeriph**<br>FTC<br>TempFlowWaterSetp|
|**Grp_GenPeriph**<br>FTC<br>TempFlowWaterSetp|FTC|


-----

The supply air handling unit is represented by the Functional Block SATC. Depending on the
requirements, this air handling unit controls:

- temperature

- humidity

- air quality
The supply air temperature setpoint is calculated by the Ventilation Demand Transformer (VDTTU). Air
quality setpoints are determinated via ValueFreshAirDem by the VDTTU. SMRH for humidity.

Hot water and cold water demands as a percentage value are transformed into temperature demand signals
in the Heating Demand Transformer Air Handling Unit (HDTAHU) or in the Cooling Demand
Transformer Air Handling Unit (CDTAHU) respectively. The demand from the different consumers
(refer to chapter 5) are collected in the Heating Flow Demand Manager (HFDM) or Cooling Flow
Demand Manager (CFDM) respectively, and control a pre-controller.

As shown in the example of the Functional Blocks (Figure 3.2-3), it is possible to connect 3 (or n) Supply
Air Temperature Controllers (SATC) to the transformer(s), whereby each transformer represents a
hydraulic circuit of a pre-controller and therefore a 1 : 1 connection between HDTAHU and HFDM as
well as between CDTAHU and CFDM.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 15/23


-----

#### 4 Cold Water 

##### 4.1 Cold Water system topology 

###### Cold Water Cold Water Cold Water Plant management Production Distribution Consumers - Room unit

**- Chiller controller** **- Pre-controller** **- Zone controller** **- Servicetool/PC-HMI**

**- Chiller sequence** **- Cooling Coils** **- Tel. gateway /**
**controller** **(Ventilation)** **Management Station**

**- Scheduler**

**- Re-cooling controller**

**- Alarming**

**- etc.**

**Figure 4-1 VAC system Cold Water**

Figure 4-1 shows a distributed cold water system that consists of:

- cold water production

- cold water distribution

- cold water consumption

- and a part for plant management / remote control

HVAC devices connected to the KNX system will work as a distributed system. Runtime-interworking
data is exchanged between the devices for higher functionality and more comfort. Example:

- Demand-dependent cold water production and cold water distribution => energy savings

- Load management functions, load shedding, forced load

- Optimisation of plant operation, automation of repetitive processes

- Sharing of common sensors

- Connection of intelligent actuators

- Visualisation of status information (e.g. on a Room Unit)

- Management and remote control functions of the HVAC system (Room Unit, Scheduler, PC-HMI,
Servicetool etc.)

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 16/23

|Cold Water<br>Production<br>- Chiller controller<br>- Chiller sequence<br>controller<br>- Re-cooling controller|Col2|Cold Water<br>Distribution<br>- Pre-controller|Cold Water<br>Consumers<br>- Zone controller<br>- Cooling Coils<br>(Ventilation)|
|---|---|---|---|
|**Cold Water**<br>**Production**<br>**- Chiller controller**<br>**- Chiller sequence**<br>**      controller**<br>**- Re-cooling controller**||||


-----

**Cold Water Production**

A cold water producer usually is a chiller, consisting of a chiller controller (CC) and a re-cooling
controller (CRC). There are different types of chillers with e.g. 1-stage or n-stages, or modulating. For
higher power requirements, chillers can be sequenced which gives special requirements (chiller sequence
strategies) to the Cold Water Producer Manager (CPM), which controls the chillers according to the
current cold water demand.

**Cold Water Distribution**

In more complex systems, the cold water consumers are not directly connected to the chiller. Different
levels of cold water distribution are possible (e.g. like high voltage - low voltage electrical distribution
network). Each distribution level has its own cold water pipe and is managed by a Cold Water Flow
Demand Manager (CFDM).

Cold water distribution is implemented by using cold water pipes and pumps with or without pre-control
of the flow temperature for several cooling zones or groups of zones.

**Cold Water Consumers**

Different types of cold water consumers:

- Cold water coils of ventilation and air conditioning systems

- Chilled ceiling cold water consumers, fixed setpoint, dew point or weather-compensated systems

All the consumers are connected via hydraulic cold water pipes to a pre-controller (cold water
distribution) or directly to a chiller unit.

The water flow through these consumers can be controlled by valves or variable speed pumps.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 17/23


-----

##### 4.2 Typical application examples and mapping in KNX-Function Blocks

###### 4.2.1 Chilled ceiling zone controller
A chilled ceiling controller calculates the cold water flow temperature according to the room conditions.


**Apartment_a**

|T|Col2|Col3|
|---|---|---|
||||
||||

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||||||
||CZ||||||
||CZ||||||
||CZ||||||


**Figure 4.2-1 Chilled ceiling zone controller**

The Functional Block Cooling Zone Controller (CZC) represents the chilled ceiling with temperature
control algorithm. The room temperature (RTS) value is transmitted via KNX to the Cooling Zone
Controller (CZC). The Room Setpoint Manager (RSMHD), which may be part of a room unit, sends its
HVACMode and setpoints via KNX-signals to the CZC.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 18/23


-----

###### 4.2.2 Cold water pre-controller
A pre-controller calculates the required cold water flow temperature according to the consumers. These
may be chilled ceiling controllers, air handling units (AHUC, SATC), or terminal unit controllers (VAV,
etc).

Consumers

Pre-controller

**T**

**Grp_DistrSegmC_u**

CZC-n

CFDM-n

**Grp_DistrSegmC_x** TempFlowWaterDemAbsCZC(n)

TempFlowWaterDemAbsCFDM(n) CDAUX-n
TempFlowWaterDemAbsCDAUX(n)

**Grp_DistrSegment_uTempFlowWaterDemAbsCDTAHU**

TempFlowWaterDemAbsACDTTU

TempFlowWaterDemAbsCFDM(n) TempFlowWaterDemAbsCCDTTU

###### CFDM-u CDTAHU

LockSignCFDM
ForceSignCFDM LockSignCFDM
LockSignCPM ForceSignCFDM ACDTTU
ForceSignCPM LockSignCPM
StatusCPM ForceSignCPM

StatusCPM

(Primary Distribution level d-1)

(Scondary Distribution level d) CCDTTU

###### FTC

**Figure 4.2-2 Cold water pre-controller**

The Cooling Flow Demand Manager (CFDM) collects the cooling demand in the Secondary Cold Water
Distribution Segment. This may be:

- Chilled ceiling zone controllers (CZC)

- Other pre-controllers (CFDM)

- Auxiliary cooling demands, like process cooling devices (CDAUX)

- Ventilation cooling demand from air handling units (CDTAHU)

- Air cooling demand from terminal units (ACDTTU)

- Chilled ceiling cooling demand from terminal units (CCDTTU)

And controls to the calculated flow temperature setpoint by Functional Block Flow Temperature
Controller (FTC).

Additionally, cooling demand of the Primary Cold Water Distribution Segment is sent to the Cold Water
Production Manager (CPM).

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 19/23

|C|Z|C-n|Col4|Col5|
|---|---|---|---|---|
|C|||||

|Col1|CF|DM-n|Col4|Col5|
|---|---|---|---|---|
||||||

|Col1|CD|AUX-n|Col4|Col5|
|---|---|---|---|---|
||||||

|Col1|CFDM-u|
|---|---|


-----

###### 4.2.3 Chiller controller
Chilled sequence control system with two chillers and a common cooling tower system with two wet
cooling towers.

ϑ

ϑ

M M

ϑ ϑ ϑ ϑ

VSD VSD ϑM M ϑ ϑM M ϑ

M ϑ

ϑ

**Grp_ProdSegmC_x**

**Grp_DistrSegmC_n**

TempFlowWaterDemAbsCZC(n)

***)** TempFlowWaterDemAbsCFDM(n)

**Grp_Producer_y** **Grp_DistrSegmC** TempFlowWaterDemAbsCDTAHUTempFlowWaterDemAbsACDTTU

TempReturnWaterCondSetp PowerFlowWaterDemCPM TempFlowWaterDemAbsCFDM TempFlowWaterDemAbsCCDTTU

###### CRC StatusCRC CC StatusCC CPM LockSignCPM CFDM LockSignCFDM

LockSignCC ForceSignCPM LockSignCPM
ForceSignCC StatusCPM ForceSignCFDM

ForceSignCPM
StatusCPM

_*) normally CPM and first CFDM are in the same device_

###### CRC

**Figure 4.2-3 Chiller controller**

The Functional Block Cold Water Flow Demand Manager CFDM collects all cold water requirements
and sends the calculated demand to the Cold Water Production Manager CPM. The CPM is
controlling/scheduling one or more Chiller Controllers CC. A Chiller Controller CC is a stand-alone
chilled water production unit. Control of the condensed water circuit may be implemented via:

- Package unit (within the Chiller Controller CC)

- Split unit, remote location from the Chiller Controller CC (on the roof). For this scenario, a ReCooling Controller CRC is connected to the Chiller Controller CC.

- With a common Re-Cooling Controller, e.g. cooling tower (wet, dry) or seawater re-cooling. For this
scenario a Re-Cooling Controller CRC is connected directly to the Cold Water Production Manager
CPM. (refer to Figure 4.2-3)

The functions of a cold water system with buffer storage tanks are incorporated in the Cold Water
Production Manager CPM.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 20/23

|ϑ ϑ<br>ϑ ϑ<br>M M|Col2|
|---|---|
|M<br>ϑ<br>M<br>ϑ<br>ϑ<br>ϑ||

|CF|D|M|
|---|---|---|

|PM|Col2|Col3|
|---|---|---|
||CPM|CPM|
||**Grp_GenPeriph**<br>TempReturnWaterCondSetp|StatusCRC|
||CRC|CRC|


-----

#### 5 HVAC System Model
The figures on the following pages represent HVAC applications and the corresponding KNX
application model

They show interworking between different HVAC application areas such as Hot Water Heating [02] –

[06], Ventilation, Air Conditioning, and Cold Water [10] – [11] and Terminal Units [09].

## DEH

**RHDTTU**

## HWH

**AHDTTU**

**HDTAHU**

## TU

**VDTTU**

## VAC ACDTTU

**CCDTTU**

**Figure 5-1 Interworking**

The figures on the next pages show hot water and cold water consumers, distribution and production
level.

Not on the figures are the stand alone heating zone controllers (HZC), chilled ceiling controllers (CZC),
and stand alone air handling units (AHUC) as well as domestic hot water Functional Blocks.

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 21/23


-----

###### HVAC Architecture


###### n-rooms

### HWHHWH TU Radiator

weather / demand
compensated Radiator

demand
compensated

###### Hot WaterHot Water

Unit
(FCU, VAV,..)

AHU

### VACVAC

demand
compensated

###### AirAir

demand
compensated Chilled

###### Cold WaterCold Water Ceiling

weather / demand
compensated

###### ProductionProduction DistributionDistribution ConsumerConsumer

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 22/23

|Col1|Col2|
|---|---|
|||


-----

###### HVAC Functional Blocks


### TU

TempFlowWaterDemAbsRHDTTU EnergyDemRD

RHDTTU

1 n

TempFlowWaterDemAbsAHDTTU EnergyDemAH

AHDTTU

1 n

EnergyDemHeatSATC

HDTAHU

1

TempSupplyAirSetpSet (2) EnergyDemAir

n ValueFreshAirSetp ValueFreshAirDem

SATC VDTTU

1 1 n

n

SMRH

CDTAHU SMAQ

1

EnergyDemCoolSATC

TempFlowWaterDemAbsACDTTU EnergyDemHC

ACDTTU

1 n

TempFlowWaterDemAbsCCDTTU EnergyDemCC

CCDTTU

1 n


###### n-rooms

Radiator

Radiator

Unit
(FCU, VAV,..)

Chilled
Ceiling

|Col1|Col2|
|---|---|
|FTC|FTC|

|Col1|Col2|
|---|---|
|||
|FTC|FTC|

|Col1|Col2|
|---|---|
|FTC|FTC|

|Col1|Col2|
|---|---|
|FTC|FTC|


FTC

###### ProductionProduction Distribution ConsumerConsumer

© C i h 2000 2013 KNX A i i A li i D i i 01 01 01 23/23

|HWH<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsRHDTTU<br>BUC BOC HPM HFDM-0 HFDM RHDT<br>1 n 1 1<br>1<br>FTC<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsAHDTTU<br>Hot Water HFDM AHDT<br>n 1 1<br>FTC<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>HFDM HDTAHU<br>n 1 1 1|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|RHDT|TU|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|RHDT||
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|AHDT|TU|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM<br>FTC<br>HFDM<br>FTC<br>HFDM<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|AHDT||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|U|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|ACDT|TU|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|ACDT||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|CCDTT|U|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|||||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM<br>FTC<br>CFDM<br>FTC<br>CFDM<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|||||
|**_Production_**|FTC|FTC|FTC|FTC|


-----

