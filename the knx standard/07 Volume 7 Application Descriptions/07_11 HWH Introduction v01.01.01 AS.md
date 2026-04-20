# Application Descriptions

## Hot Water Heating

 Introduction

Summary

This document is for information only and gives an introduction and
overview to the HVAC Application Interworking Standard for Hot Water
Heating applications.

Version 01.01.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

0.1 2001.12.15 BKY, document created
0.2 2002.02.22 BKY, editorial modifications, link to VAC and TU added,
TFI approved, KNX Handbook 1.0
1.0 2002.09.12 BKY, editorial corrections, TFI approved,
updated for KNX Handbook 1.1
1.0 2009.06.17 Update in view of publication in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.01.01 2022.03.01 Preparation for integration in the KNX Specifications v3.0.

#### References

[01] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[02] Chapter 7/10/2 “HVAC HMI Functional Blocks”

[03] Chapter 7/10/3 “HVAC Actuator Functional Blocks”

[04] Chapter 7/10/4 “HVAC Common Functional Blocks”

[05] Chapter 7/10/5 “HVAC Scheduler Functional Blocks”

[06] Chapter 7/11/1 “Heat Production”

[07] Chapter 7/11/9 “Property Identifiers”

[08] Part 7/12 “Direct Electric Heating”

[09] Part 7/13 “Terminal Unit Functional Blocks”

[10] Part 7/14 “Ventilation & Air Conditioning and Cold Water”

[11] Part 10/1 “Logical Tag Extended”

Filename: 07_11 HWH Introduction v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2022.03.01
Number of pages: 27

© C i h 1999 2022 A i i A li i i i 01 01 01 2 f 2

|Version|Date|Modifications|
|---|---|---|
|0.1|2001.12.15|BKY, document created|
|0.2|2002.02.22|BKY, editorial modifications, link to VAC and TU added,<br>TFI approved, KNX Handbook 1.0|
|1.0|2002.09.12|BKY, editorial corrections, TFI approved,<br>updated for KNX Handbook 1.1|
|1.0|2009.06.17|Update in view of publication in the KNX Specifications v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNX Specifications 2.1.|
|01.01.01|2022.03.01|Preparation for integration in the KNX Specifications v3.0.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Objectives ....................................................................................................................... 4 1.3 Abbreviations .................................................................................................................. 5

 2 Overview ................................................................................................................................. 7 2.1 KNX HVAC interworking vision ................................................................................... 7 2.2 Application overview ...................................................................................................... 8 2.3 Hot Water Heating system topology ............................................................................... 9 2.4 Typical application examples ....................................................................................... 10 2.4.1 Single family home, 1 zone heating .................................................................. 10 2.4.2 Single family home, IRC .................................................................................. 12 2.4.3 Multifamily home, apartment control ............................................................... 14 2.4.4 Multifamily home, apartment pre-control + IRC .............................................. 17

 3 HWH System Model ............................................................................................................ 19 3.1 Multifamily home, apartment control ........................................................................... 19 3.2 Multifamily home, individual room control ................................................................. 21 3.3 Multifamily home, domestic hot water control individual room control ..................... 23

 4 HVAC System Model ........................................................................................................... 25

© C i h 1999 2022 A i i A li i i i 01 01 01 3 f 2


-----

### 1 Introduction

#### 1.1 Scope
This document is an informative part of the KNX HVAC Application Interworking Standard. It illustrates
the following.

   - Overall functionality of the HVAC Hot Water Heating System (Vol 7-11, see [06] – [07])

   - Links between HWH and Terminal Unit (TU) systems (Vol 7-13, see [09])

   - Links between HWH and Ventilation/Air-Conditioning and Cold Water (VAC) systems (Vol 712, see [10]).

General purpose Functional Blocks used for HVAC applications such as sensors, actuators, HMI and
common HVAC Functional Blocks are described in Vol 7-10 (HVAC Specification Functional Blocks,
Sensors, MMI, Actuators, Common Controller Functions [01], [02], [03], [04] and [05]).

The target market for the KNX HVAC system is mainly (European) residential and small commercial
buildings.

#### 1.2 Objectives
This document is for information only and gives a short introduction and overview to the HVAC
Application Interworking Standard for Hot Water Heating applications. This document intends to clarify
the overall concept of the KNX HVAC system and dependencies of the different parts of the HWH
system.

The document also contains descriptions of typical application examples (scenarios).

The content of this document is not normative.

© C i h 1999 2022 A i i A li i i i 01 01 01 4 f 2


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
DHWC Domestic Hot Water Controller
DHWS Domestic Hot Water Scheduler
DHWCPS Domestic Hot Water Circulation Pump Scheduler
SDHWC Solar Domestic Hot Water Controller
DHWSM Domestic Hot Water Setpoint Manager
DHWCPC Domestic Hot Water Circulation Pump Controller
UDHWSET DHW User Settings

**Ventilation, Air Conditioning and Cold Water (VAC) [10]**

**Abbreviation** **Description**

AHUC Air Handling Unit Controller
CC Chiller Control
CDTAHU Cooling Demand Transformer Air Handling Unit
CFDM Cooling Flow Demand Manager
CPM Cold Water Production Manager
CRC Re-Cooling Controller
HDTAHU Heating Demand Transformer Air Handling Unit
SATC Supply Air Temperature Controller
CZC Cooling Zone Controller

**Terminal Units (TU) [08]**
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

© C i h 1999 2022 A i i A li i i i 01 01 01 f 2


-----

**Sensor, MMI, Actuators - Common Controller Functions [01], [02], [03], [04] and [05]**
**Abbreviation** **Description**
AHSS Air Humidity Setpoint Setting
AQSS Air Quality Setpoint Setting
COS Change over Status Sensor
DPS Dew Point Status Sensor
FWTS Flow Water Temperature Sensor
HVA Heating Valve
OAD Outside Air Damper
OAHS Outside Air Humidity Sensor
OAQS Outside Air Quality Sensor
OTS Outside Air Temperature Sensor
PRD Presence Detector
RAHS Room Air Humidity Sensor
RAQS Room Air Quality Sensor
RNAHS Return Air Humidity Sensor
RNAQS Return Air Quality Sensor
RNATS Return Air Temperature Sensor
RNWTS Return Water Temperature Sensor
RSMHD Room Setpoint Manager HVAC Mode Driven
RSMT Room Setpoint Manager Temperature Driven
RTS Room Temperature Sensor
RTSA Room Temperature Setpoint Absolute Setting
RTSR Room Temperature Setpoint Relative Setting
SAHS Supply Air Humidity Sensor
SAQS Supply Air Quality Sensor
SATS Supply Air Temperature Sensor
SIS Sun Intensity Sensor
SMAQ Setpoint Manager Air Quality
SMrH Setpoint Manager relative Humitdity
WOS Window Switch
WSS Wind Speed Sensor

**General**
**Abbreviation** **Description**
cs Company specific
NA not allowed / not available
LTE Logical Tag Extended Mode, see [11]
FB Functional Block
DPT Datapoint Type
IO Interface Object

© C i h 1999 2022 A i i A li i i i 01 01 01 6 f 2


-----

### 2 Overview

#### 2.1 KNX HVAC interworking vision
**Interworking of HVAC devices**
In today’s European residential or small commercial buildings market, HVAC systems are either standalone, hard-wired or tightly integrated via a single manufacturers private network. They are installed by
one or more installer and incremental add-on’s require that the installer returns to the site. Also, there is
little ability to intermix products from multiple manufacturers. This is illustrated in Figure 2-1.

**Figure 2-1 Tightly integrated single manufacturers HVAC system**

The interworking concept of the KNX HVAC system allows interoperability among manufacturers
products (multi-vendor systems). The KNX HVAC system model also permits easy installation of entire
HVAC systems or subsequent add-on of HVAC products. It also recognises the need for evolutionary
solutions in the market until such a time that costs for bus connection can compete with direct wiring
(even for simple low cost devices).

The long term vision provides most HVAC product to be connected to the KNX system. This is
illustrated in Figure 2-2

###### KNX

**Figure 2-2 Long term view of Interoperable HVAC systems**

© C i h 1999 2022 A i i A li i i i 01 01 01 f 2


-----

**Interworking with other application domains**

HVAC systems in today’s residential or small commercial market have little or no provisions to
interwork with other systems. Although conventional HVAC systems may maintain a operating mode for
“occupied and unoccupied” and a lighting or shutter & blinds system may have the ability to provide for a
“lived-in-look” when the home is unoccupied, conventional systems of different application domains do
not communicate.

One of the visions of the KNX HVAC model is that “stand-alone” KNX HVAC systems (HVAC only)
may be delivered as today and via HVAC distribution channels. However, these systems have the
additional feature that they may be easily integrated into e.g. a single home control system that is
harmonised with the activities of the occupants and other systems present in the home. This is made
possible by standardised information that is shared among all systems. The KNX model provides data
interfaces to exchange information of common interest with other application domains.

This level of interworking among subsystems (functions of common interest) provides a basic level of
integration. It offers benefits to the user in the form of convenience, peace of mind and savings.
Interworking between application-domains can be expanded using a professional installation tool (ETS).

**Manufacturer-Specific Features**

Although available for the upscale market for many years, “intelligent” HVAC systems or home
automation in the mass market is still evolving. New applications, features, and devices will evolve over
the next years. Therefore, any attempt to provide an industry specification in this market must allow for
manufacturer-specific extensions and evolution of the standard itself.

It is important for each manufacturer to be able to provide features that differentiate their product in the
marketplace.

The KNX HVAC interworking model only defines today’s state of the art functionality and allows
manufacturers to add vendor-specific information for unique functionality.

#### 2.2 Application overview

**Domestic**

**Hot water heating** **hot water** **Heat Distribution/** **Combustion/**
**zone control** **Load management** **burner control**

**Individual** **Boiler control /**
**room control** **boiler sequence control**

**Alternative heat sources** **[Complementary ]**
Ventilation **HVAC Applications** **Applications**

Link to                                           - Lighting
complementary                                    - Blinds

Air conditioning **Open standard** applications  - Security

**Private data**

                                                              - Metering

                                                                               - etc.

Pump-control Scheduler /

Remote Management etc.

Fan-coil

Direct electrical
heating

**Figure 2-3 Field of Applications**

© C i h 1999 2022 A i i A li i i i 01 01 01 8 f 2


-----

#### 2.3 Hot Water Heating system topology

###### Heat generation Heat distribution Heat consumers Plant management

**- Burner controller** **- Pre-controller** **- Zone controller** **- Room unit**

**- Boiler controller** **- Heat exchanger** **- IRC, Terminal Units** **- Servicetool/PC-MMI**

**- Tel. gateway /**

**- Boiler sequence controller** **- DHW**

**Management Station**

**- Heat pump, solar ....** **- Ventilation** **- Scheduler**

**- Alarming**

**- etc.**

**Figure 2-4 HWH system**

The Figure 2-4 shows a distributed heating system that consists of

   - heat generation

   - heat distribution

   - heat consumption

   - and a part for plant management / remote control

HVAC devices connected to the KNX system will work as a distributed system. Runtime-interworking
data is exchanged between the devices for higher functionality and more comfort.

EXAMPLES

     - demand-dependent heat production and heat distribution => energy savings

     - load management functions, load shedding, forced load

     - optimisation of the operation of the plant, automation of repetitive processes

     - sharing of common sensors

     - connection of intelligent actuators

     - visualisation of status information (e.g. on a Room Unit)

     - management and remote control functions of the HVAC system (Room Unit, Scheduler, PC-MMI, Servicetool etc.)

**Heat generation**

Runtime interworking with the Heat Production part in a distributed heating system has mainly 2 targets:

   - energy savings due to demand-dependent heat production

   - load management / load shedding in case of boiler overload or boiler overheat conditions

A heat producer is usually a boiler which consists of a burner controller (BUC) and a boiler controller
(BOC). There are different types of boilers with e.g. 1- or 2-stage or modulating oil or gas burners
including burner control. Also e.g. wood fired boilers are used for heat production.

For higher power requirements boilers can be sequenced which gives special requirements (boiler
sequence strategies) to the Heat Producer Manager (HPM) which controls the boilers according to the
current heat demand.

© C i h 1999 2022 A i i A li i i i 01 01 01 9 f 2

|Heat generation<br>- Burner controller<br>- Boiler controller<br>- Boiler sequence controller<br>- Heat pump , solar ....|Col2|Heat distribution<br>- Pre-controller<br>- Heat exchanger|Heat consumers<br>- Zone controller<br>- IRC, Terminal Units<br>- DHW<br>- Ventilation|
|---|---|---|---|
|**Heat generation**<br>**- Burner controller**<br>**- Boiler controller**<br>**- Boiler sequence controller**<br>**- Heat pump , solar ....**||||


-----

Other heat generation types like solar energy or heat pumps or heat supply by district heating systems are
taken into consideration too.

**Heat distribution**

In more complex systems the heat consumers are not directly connected to the boiler. Different levels of
hot water distribution are possible (e.g. like high voltage - low voltage electrical distribution network).
Each distribution level has its own hot water pipe and is managed by a Heat Flow Demand Manager
(HFDM).

Heat distribution is done by hot water pipes and pumps with or without pre-control of the flow
temperature for several heating zones or groups of them.

**Heat consumers: room heating**

In the today’s typical hot water heating systems room heating is done by radiators, under floor heating or
a combination of both.

The water flow through these radiators or under floor heating pipes can be controlled by valves or
variable speed pumps.

The flow temperature is controlled either directly by the boiler temperature or by mixing valves. For
different groups of consumers there also can be a pre-control of the flow temperature per group and a
final control for each consumer.

Two types of room heating principles are differentiated:

   - each room is controlled individually by an Individual Room Controller (HIRC)

   - multiple rooms or a part of a building are controlled together by a Heating Zone Controller
(HZC)

**Heat consumers: domestic hot water control**

In the HWH application model those systems are considered, where the domestic hot water (DHW)
preparation is done with the same heat production system used for the hot water room heating.

So the DHW and the hot water heating is interconnected and has to be handled in an proper way (e.g.
time schedules; load management due to max. available power of the boilers etc.).

There are many types of DHW-plant schemes and it is not the scope of the HWH specification to describe
all of these.

#### 2.4 Typical application examples

##### 2.4.1 Single family home, 1 zone heating
A typical single family home with several rooms has a boiler (oil or gas) for heat generation, a domestic
hot water preparation and a hydronic heating system with radiators or/and under floor heating. There can
also be valves for each radiator or room.

The heat demand for the hydronic heating is calculated by outside temperature compensation (OTC) with
or without room temperature influence.

The boiler produces the requested hot water temperature by means of a 1- or 2-stage or modulating
burner.

The example in Figure 2-5 shows a single family home with 1 zone heating, DHW-preparation and direct
pump heating circuit

© C i h 1999 2022 A i i A li i i i 01 01 01 10 f 2


-----

Domestic Hot Water Zone heating TT

Room temp. TT Outside temperature

DHW temp.
T sensor

Boiler

Boiler temp.

T

**Figure 2-5 Single family home with 1 zone heating without mixing valve**

The example in Figure 2-6 shows a single family home with 1 zone heating, DHW-preparation and a
heating circuit with mixing valve

Domestic Hot Water Zone Heating TT

Room temp. TT Outside Temperature

DHW temp. T Flow temp. Sensor

TT

Boiler

TA

Boiler temp.

T

**Figure 2-6 Single family home with 1 zone heating with mixing valve**

The example in Figure 2-7 shows a single family home, with DHW-preparation and IRC (see also next
clause).

Domestic Hot Water Pre- Control IRC 1 ... n TT

Outside Temperature

DHW temp. T Sensor

Boiler

Flow temp.

Boiler temp. TA TT

T

**Figure 2-7 Single family home, with DHW-preparation and IRC**

© C i h 1999 2022 A i i A li i i i 01 01 01 11 f 2

|TT|Col2|
|---|---|

|Col1|Col2|Domestic Hot Water|Col4|Zone heating|
|---|---|---|---|---|
|||<br>T<br>DHW temp.|<br>T<br>DHW temp.|T<br>T<br>Room temp.|
|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|
|T<br>Boiler temp.|||||
|T<br>Boiler temp.|||||

|TT|Col2|
|---|---|

|Col1|Col2|Domestic Hot Water|Col4|Zone Heating|
|---|---|---|---|---|
|||<br>T<br>DHW temp.|<br>T<br>DHW temp.|TT<br>TT<br>Room temp.<br>Flow temp.<br>T~~A~~|
|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|
|T<br>Boiler temp.|||||
|T<br>Boiler temp.|||||

|TT|Col2|
|---|---|

|Col1|Col2|Col3|Domestic Hot Water|Col5|Pre- Control|Col7|IRC 1 ... n|Col9|Col10|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
||||<br>T<br>DHW temp.|<br>T<br>DHW temp.|TT<br>Flow temp.<br>TA|TT<br>Flow temp.<br>TA|||||
|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|T<br>Boiler temp.|
|T<br>Boiler temp.|T|T|T|T|T|T|T|T|T|T|
|T<br>Boiler temp.|T||||||||||
|T<br>Boiler temp.|T||||||||||


-----

##### 2.4.2 Single family home, IRC
A typical single-family home has 5 - 10 rooms with heating. Room heating is done with radiators or/and
under floor heating. Each individual room has at least one radiator (or under floor heating pipe loop).
Some larger rooms (e.g. dining room, living room) have 2 - 4 radiators. To control the hot water flow
through the radiator a valve close to the radiator or in a central distribution box is used. For under floor
heating control the valves are always in a distribution box. To drive the valves thermostatic actuators or
motor actuators are used. In each room there is a room temperature sensor. To control the room
temperature of an individual room there is typically a room unit with setpoint adjustment provided in each
room and an individual setpoint time program in a central device. More comfortable systems do also have
a presence sensor and a window open sensor in one or more rooms to save energy. Heat for the rooms is
directly provided by the boiler or pre controlled via a three or four way mixing valve. For optimized
on/off control the room temperature controller may need an outdoor temperature sensor.
Small systems have 1 - 2 devices including all functionality to control the room heating. The sensors,
actuators and room units are directly wired or connected via bus. The room control devices and the heatgeneration devices are communicating via bus.
Large systems have a control device for each room. There may also be separate devices for actuators,
room units and sensors or combination of these functions in one device.

The example in Figure 2-9 shows a Single Family Home with 5 rooms, 2 rooms with Presence and
Window Sensors and 1 room with 3 radiators.

The example in Figure 2-10 shows a Single Family Home with 6 rooms and 1 room with Presence and
Window Sensors.

© C i h 1999 2022 A i i A li i i i 01 01 01 12 f 2


-----

|Boiler/DHW/Zone Control|Col2|Single Family Home IRC|
|---|---|---|
|See<br>Figure 2-7|See<br>Figure 2-7|See<br>Figure 2-9<br>or<br>Figure 2-10|


See
Figure 2-7


**Boiler/DHW/Zone Control**


**Figure 2-8 Single Family Home Heating with IRC**

**Single Family Home IRC**

**Room 2** **Room 3** **Room 4**

T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor

Setpoint adjust Setpoint adjust p Presence Sensor

W Window Sensor

Setpoint adjust

A A A A A

**Figure 2-9 Single Family Home Heating with IRC**

|Col1|Single Family Home IRC|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|
||**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|**Room 1**|**Room 1**|**Room 2**|**Room 2**|**Room 3**|**Room 3**|**Room 4**|**Room 4**|**Room 4**|**Room 4**|**Room 5**|**Room 5**|
||**Room 5**<br>A<br>**Room 4**<br>A<br>A<br>A<br>**Room 3**<br>**Room 2**<br>**Room 1**<br>A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>T Room  Temp. Sensor<br>Setpoint adjust<br>06:00 Setpoint Time Programs|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>A<br>A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|
|||||||||||||||
|||||||||||||||


See
Figure 2-9
or
Figure 2-10


**Single Family Home IRC**


**Single Family Home IRC**


06:00 Setpoint Time Programs

|Col1|Room 1|Col3|Room 2|Col5|Room 3|Col7|Room 4|Col9|Room 5|Col11|Room 6|Col13|
|---|---|---|---|---|---|---|---|---|---|---|---|---|
||T Room  Temp. Sensor<br>Setpoint adjust<br>A|T Room  Temp. Sensor<br>Setpoint adjust<br>A|T Room  Temp. Sensor<br>Setpoint adjust<br>A|T Room  Temp. Sensor<br>Setpoint adjust<br>A|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|
||||||||||||||
||||||||||||||


**Figure 2-10 Single Family Home Heating with IRC**

© C i h 1999 2022 A i i A li i i i 01 01 01 13 f 2


-----

##### 2.4.3 Multifamily home, apartment control
Most of the multifamily homes (multifamily means 2 to about 60 apartments) have a heating system
which is very similar to the concepts of the single family home.

Typically there is a hot water heating system with radiators and/or under floor heating, DHW preparation
and boilers with oil or gas burners for heat generation.

**Room Heating Control**

In case of a Heating Zone Control System (HZC) the heat demand for each apartment is calculated by
outside temperature compensation (OTC) with or without room temperature influence.

In case of Individual Room Control (HIRC) the heat demand for each apartment is calculated according
to the current room temperature setpoint or valve position of each room temperature controller.

**DHW Control**

The domestic hot water is either prepared for all apartments together in one DHW zone with one big
DHW storage tank or each apartment can have a separate DHW zone with and individual DHW storage
tank and DHW controller.

**Demand dependent Heat Production/Distribution**

Out of all room heating demands of the apartments and the heat demands from all DHW zones the
resulting heat demand for the boiler is calculated.

The heat generation is either done by one big boiler or by a sequence of smaller boilers.

The example in Figure 2-11 shows a multifamily home with apartments controlled by mixing valves, 1
DHW storage tank and 1 boiler.

TT

Domestic Hot Water Apartment 1

Room temp. TT Outside Temperature

DHW temp. T Flow temp. Sensor

TT

Boiler

Boiler temp. TA

T

**Figure 2-11 Multi family home, 1 boiler**

The example in Figure 2-12 shows a multifamily home with apartments controlled by mixing valves, 1
DHW storage tank per apartment, pre-control for a group of apartments (heat distribution) and heat
production by one boiler sequence.

© C i h 1999 2022 A i i A li i i i 01 01 01 14 f 2

|TT|Col2|
|---|---|

|Boiler|Domestic Hot Water|Apartment 1|Col4|
|---|---|---|---|
|Boiler|T<br>DHW temp.|TT<br>TT<br>Room temp.<br>Flow temp.<br>||
|T<br>Boiler temp.||T~~A~~||
|T<br>Boiler temp.||||


-----

|Col1|Col2|
|---|---|
|TT||

|TT<br>Domestic Hot Water Apartment 1<br>Room temp. T<br>Outside Temperature<br>DHW temp. T<br>Sensor Flow temp.<br>T<br>Boiler<br>Boiler temp. TA<br>T<br>TA<br>Boiler<br>Boiler temp.<br>T PreControl Domestic Hot Water Apartment 2<br>Room temp. T<br>TA<br>DHW temp. T<br>Flow temp.<br>T<br>Boiler<br>Flow temp.<br>Boiler temp. TA T TA<br>T<br>TA|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Domestic Hot Water|Col11|Apartment 1|
|---|---|---|---|---|---|---|---|---|---|---|---|
|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|TT<br>Domestic Hot Water<br>T<br>DHW temp.<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Apartment  1<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~<br>Domestic Hot Water<br>T<br>DHW temp.<br>PreControl<br>**T**<br>Flow temp.<br>TA<br>Apartment  2<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Boiler<br>T<br>Boiler temp.<br>TA<br>Outside Temperature<br>Sensor|<br>T<br>DHW temp.|<br>T<br>DHW temp.|<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>~~TA~~|
|Boiler|Boiler|Boiler||||||||||
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA||||||||||
|T<br>Boiler temp.<br>TA|T|T|T|T|T|T|T|T|T|T|T|
|T<br>Boiler temp.<br>TA|T|TA||||||||||
|T<br>Boiler temp.<br>TA|T|TA||||||||||
|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|
|T<br>Boiler temp.<br>TA|T|T|T|T|T|PreControl|PreControl|PreControl|Domestic Hot Water|Domestic Hot Water|Apartment  2|
|T<br>Boiler temp.<br>TA|T|TA||||||||||
|T<br>Boiler temp.<br>TA|T|TA||||**T**<br>Flow temp.<br>TA|**T**<br>Flow temp.<br>TA|**T**<br>Flow temp.<br>TA|<br>T<br>DHW temp.|<br>T<br>DHW temp.|<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~|
|T<br>Boiler temp.<br>TA|T|TA||||||||||
|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|
|T<br>Boiler temp.<br>TA|T|TA|TA|TA|TA|||||||

|Domestic Hot Water|Col2|Apartment n|
|---|---|---|
|<br>T<br>DHW temp.|<br>T<br>DHW temp.|<br>**T**<br>**T**<br>Room temp.<br>Flow temp.<br>T~~A~~|
||||
||||


**Figure 2-12 Multifamily home, boiler sequence**

The example in Figure 2-13 shows a multifamily home with apartments controlled by IRC (see next
clause), 1 DHW common storage tank, pre-controls (heat distribution) for two apartments at a time and
heat production by one boiler sequence.

© C i h 1999 2022 A i i A li i i i 01 01 01 1 f 2


-----

Outside Temperature

DHW temp. T Sensor

Boiler

Flow temp. Apartment 2; IRC 1 ... n

Boiler temp. TA TT

T

TA

Boiler

Boiler temp.

T

TA

PreControl 2 Apartment 3; IRC 1 ... n

Boiler

Boiler temp.

T

Flow temp. Apartment 4; IRC 1 ... n

TA

TA TT

**Figure 2-13 Multifamily home, boiler sequence, IRC**

© C i h 1999 2022 A i i A li i i i 01 01 01 16 f 2

|Col1|Col2|Col3|Col4|Col5|Domestic Hot Water|Col7|Col8|PreControl 1|Col10|Col11|Apartment 1; IRC 1 ... n|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||||<br>T<br>DHW temp.|<br>T<br>DHW temp.|<br>T<br>DHW temp.|<br>TT<br>Flow temp.<br>TA|<br>TT<br>Flow temp.<br>TA|<br>TT<br>Flow temp.<br>TA|||||
|Boiler|Boiler|Boiler|||||||||||||
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|||||||||||||
|T<br>Boiler temp.<br>TA|T|T|T|T|T|T|T|T|T|T|T|T|T|T|
|T<br>Boiler temp.<br>TA|T|TA|TA|TA|||||||||||
|T<br>Boiler temp.<br>TA|T|TA|||||||||||||
|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|
|T<br>Boiler temp.<br>TA|T|T|T|T|T|T|T|T|T|T|T|T|T|T|
|T<br>Boiler temp.<br>TA|T|TA|||||||||||||
|T<br>Boiler temp.<br>TA|T|TA|||||||||||||
|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|Boiler|
|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|T<br>Boiler temp.<br>TA|
|T<br>Boiler temp.<br>TA|T|T|T|T|T|T|T|T|T|T|T|T|T|T|
|T<br>Boiler temp.<br>TA|T|TA|TA|TA|TA|TA|TA|TA|TA|TA|TA|TA|TA|TA|

|PreControl 2|Col2|Col3|Apartment 3; IRC 1 ... n|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**T**<br>Flow temp.<br>TA|<br>**T**<br>Flow temp.<br>TA|<br>**T**<br>Flow temp.<br>TA|||||
||||||||
||||||||


-----

##### 2.4.4 Multifamily home, apartment pre-control + IRC
The heating for a multifamily home is the same as for a single family home but with following
differences:
Heat for the rooms is provided by a pre-controlled zone. Each apartment typically has a central device
with time program functionality for all rooms of one apartment. In this device the room heat demands are
collected and the resulting apartment heat demand is reported to the device with the pre-control function.

In this application, communication between devices of one apartment can be logically isolated from
devices of an other apartment to guarantee privacy (e.g. by a Router device). If there is also a physical
isolation between apartments the communication on the isolated bus segments will still work when there
is an electrical problem on the bus in one apartment.

The example in Figure 2-14 and Figure 2-15 shows an Apartment Building IRC with 4 Apartments
supplied by 2 pre controlled zones.

**Boiler/DHW/Zone Control** **Multi-Apartment IRC**

See See
Figure 2-13 Figure 2-15

**Figure 2-14 Apartment Building, IRC**

© C i h 1999 2022 A i i A li i i i 01 01 01 1 f 2

|Boiler/DHW/Zone Control|Col2|Multi-Apartment IRC|
|---|---|---|
|See<br>Figure 2-13|See<br>Figure 2-13|See<br>Figure 2-15|


See
Figure 2-13


**Multi-Apartment IRC**


-----

**To pre-control 1**

**Apartment 1**

06:00 Setpoint Time Programs

**Room 1** **Room 2** **Room 3** **Room 4** **Room 5** **Room 6**

T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor

p Presence Sensor Setpoint adjust Setpoint adjust Setpoint adjust Setpoint adjust Setpoint adjust

W Window Sensor

Setpoint adjust

A A A A A A

**Apartment 2**

06:00 Setpoint Time Programs

**Room 1** **Room 2** **Room 3** **Room 4**

T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor

Setpoint adjust p Presence Sensor Setpoint adjust Setpoint adjust

W Window Sensor

Setpoint adjust

A A A A A A A

**To pre-control 2**

**Apartment 3**

06:00 Setpoint Time Programs

**Room 1** **Room 2** **Room 3** **Room 4**

T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor

p Presence Sensor Setpoint adjust Setpoint adjust Setpoint adjust

W Window Sensor

Setpoint adjust

A A A A A A A

**Apartment 4**

06:00 Setpoint Time Programs

**Room 1** **Room 2** **Room 3** **Room 4** **Room 5** **Room 6**

T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor T Room Temp. Sensor

Setpoint adjust Setpoint adjust p Presence Sensor Setpoint adjust Setpoint adjust Setpoint adjust

W Window Sensor

Setpoint adjust

A A A A A A

**Figure 2-15 Apartment IRC**

© C i h 1999 2022 A i i A li i i i 01 01 01 18 f 2

|Room 2|Room 3|Room 4|Room 5|Room 6|
|---|---|---|---|---|
|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|
||||||

|Col1|Col2|Col3|Col4|Col5|Room 2|Col7|Col8|Room 3|Col10|Col11|Room 4|Col13|
|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||||A<br>A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|
||||||||||||||
||||||||||||||

|Col1|Col2|Room 2|Col4|Room 3|Col6|Room 4|Col8|Room 5|Col10|Room 6|Col12|
|---|---|---|---|---|---|---|---|---|---|---|---|
|||A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>p Presence Sensor<br>W Window Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|A<br>T Room  Temp. Sensor<br>Setpoint adjust|
|||||||||||||
|||||||||||||


-----

### 3 HWH System Model

In the following section some typical application examples and the corresponding KNX application
model are described. The figures show the HVAC application diagram (simplified) and the mapping to
functional blocks. In addition the grouping of functional blocks using LTE zoning is shown.

#### 3.1 Multifamily home, apartment control
The figure on the next page shows a heating system for a multifamily home with apartment zone
**control (see also application scenario in clause 2.4.3.). Remark: for reasons of simplicity Domestic Hot**
Water supply is not shown in this example.

The system in the example contains a heat production segment with multiple heat producers (boiler
sequence) which are co-ordinated by the Heat Prod. Manager HPM. In a system with only one boiler, the
HPM functionality would be reduced to a minimum. Each heat producer contains a Burner Controller
BUC and a Boiler Controller BOC which have a 1:1 relationship. They are often integrated into one
device – otherwise BUC and BOC are linked by the LTE group ProdSegmH_x.Producer_y.

The HPM receives the resulting overall heat flow demand in the heating system from the „first“ Flow
Demand Manager HFDM in the primary Heat Distribution Segment. HPM and „first“ HFDM have
always a 1:1 relationship and are usually located in the same device (and therefore data flow between
HPM and HFDM is normally purely device-internal).

The HPM controls the heat producers according to the actual resulting overall heat flow demand (from
HFDM) by sending the appropriate flow temperature demand or power demand to each Boiler Controller
BOC which then controls the Burner Controller BUC accordingly.

For boiler overheat protection or in case of oversupply the BOC can send a forcing signal to the HPM.
Contrary, locking signals from BOC are used for boiler startup and overload protection. Forcing and
locking signals from each BOC are collected in the HPM and the resulting forcing and locking signals for
the heat production system are calculated. These resulting forcing and locking signals as well as HPM
status information are distributed along the heat distribution system to the heat consumers (HZC) in the
system. The heat consumers react accordingly by increasing or reducing of their energy consumption.

In more complex systems (like in this example) the heat consumers are not linked to the primary Heat
Distribution Segment (directly connected to the boiler). Different levels of hot water distribution are
possible. Each distribution level has its own hot water pipe which provides demand compensated hot
water flow. In the LTE system functional blocks connected to one Heat Distribution Segment belong to
the same LTE group DistrSegmH_..

In this example the HFDM collects the flow temperature demand signals from all apartments (i.e. heat
consumers HZC) in the secondary Heat Distribution Segment, calculates the resulting heat demand and
sends it to the preceding primary Heat Distribution Segment. In addition a demand compensated precontroller (HFDM + FTC) provides the requested hot water flow in the secondary Heat Distribution
Segment according to the resulting heat demand. The hot water flow temperature in the secondary Heat
Distribution Segment is pre-controlled by the FTC. The FTC and the HFDM have a 1:1 relationship and
are often located in the same device. Otherwise in LTE implementations the 1:1 functional binding is
established by setting a specific 1:1 unassigned peripheral link GenPeripheral_x

The room temperature of one Apartment is controlled by one Heating Zone Controller (HZC) which
calculates and controls the corresponding flow temperature of the zone. The apartment heating system
does not comprise (bus connected) individual room controllers.

The flow temperature setpoint is calculated by the HZC according to the actual HVACMode and the
corresponding room temperature setpoint. These information are provided by the Room Temperature
Setpoint Manager (RSMHD). The HVACMode from RSMHD may depend on automatic time schedule,
local user operation (MMI) presence detection, window status, Comfort Prolongation etc.

© C i h 1999 2022 A i i A li i i i 01 01 01 19 f 2


-----

**Thermostatic** **Thermostatic**
**valve** **valve**

**T** **T**

**Heating circuit** **Heating circuit**
**weather** **weather**
**compensated** **compensated**
**for Apartment a** **for Apartment b**

**T** **Secondary Heat Distribution n**

**Pre-control**
**demand**
**compensated**

**Primary Heat Distribution m**

**T**

**Heat**
**Production**
**demand**
**dependent** **Grp_Apartment_b . Room_.. . Subzone_..**

**Grp_Apartment_a . Room_r . Subzone_z**

**Grp_ProdSegmH_x** MMI

TempFlowWaterAct
TempRoomSetpHeatAct

**Grp_Producer_y** **Grp_DistrSegmH_m** **Grp_DistrSegmH_n** HVACModeAct

StatusHZC

ValueDemBOCFuelSelect PowerFlowDemHPM TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsHZC(n) RTS

BUC StatusBUCOpHrsBurnerStage1OpHrsBurnerStage2BurnerSpecBurnerReset BOC StatusBOCOpHrsBurnerLockSignBOCForceSignBOC HPM HFDM LockSignHPMForceSignHPMStatusHPM HFDM LockSignHFDMLockSignHPMForceSignHPMForceSignHFDMStatusHPM HZC HVACModeEffTempRoom RSMHD

HVACModeEffNext
TempRoomSetpHeatEff
TempRoomSetpSetHeatEff(4)

FTC

© C i h 1999 2022 A i i A li i i i 01 01 01 20 f 2

|HP|Col2|M|
|---|---|---|

|HFD|Col2|M|
|---|---|---|

|Col1|HFDM|Col3|
|---|---|---|

|Col1|Col2|
|---|---|
|H|ZC|


-----

#### 3.2 Multifamily home, individual room control
The figure on the next page shows a heating system for a multifamily home with individual room
control per apartment (see also application scenario in clause 2.4.4.). Remark: for reasons of simplicity
Domestic Hot Water supply is not shown in this example.

Heat Production and Heat Distribution are the same as in the preceding example in clause 3.1

Each room (or subzone of a room) in an apartment is controlled individually by an heating controller
HIRC according to the actual HVACMode and the corresponding room temperature setpoint. These
information are provided by the Room Temperature Setpoint Manager (RSMHD).

The actual room temperature setpoint and the HVACMode in each room are calculated by the
RSMHD. The HVACMode may depend on automatic time schedule, local user operation (MMI),
presence detection, window status, Comfort Prolongation etc.

The HIRC calculates and controls the position of the valve(s) in the room (or subzone of a room).
Within one room (or subzone of a room) all valves HVA are controlled together by the HIRC. The
method of calculation of the valve position in the HIRC is company-specific.

The actual room temperature value (provided by RTS) is used for room temperature control loop
mechanism. It is a mandatory input for HIRC.

All HIRC of the same Apartment are connected to one Heat Distribution Segment which provides
demand dependent hot water flow.

The HIRC calculates the room heating demand to enable demand-dependant heat production. The heat
demand calculation is based on the same mechanisms as room temperature control (see above). The
heat demand is either expressed as a (rated) room temperature setpoint or (rated) valve position
setpoint.

The Heating Room Demand Manager (HRDM) collects the room demands from all HIRC’s in the
same apartment and calculates the resulting heating room demand which is transmitted to the “Heating
Demand Transformer” (HDT). The HDT translates the resulting heating room demand to the
corresponding hot water heat demand (requested water flow temperature) which is then transmitted to
the HFDM in the corresponding Heat Distribution Segment. HRDM and “HDT” functional blocks are
often located in the same device.

A room MMI can be used for remote control of the HIRC and may also contain the RSMHD and the
room temperature sensor RTS. A user interface in the apartment (apartment MMI) can be used for
centralised remote control of the RSMHD‘s and HIRC‘s.

Constraints:

This Individual Room Control model is less suitable for large commercial applications because the
hydraulic system may be different from the geographical structure of the building. The Rooms of one
Floor could be connected to different Heat Distribution Segments. Therefore collection and
management of the heat demand from all rooms within one floor can usually not be done centrally at
the level of one Floor. The Terminal Unit (TU) application model is more flexible for IRC
applications in commercial buildings but additional configuration of the Heat Distribution Segment
per Individual Room Controller is necessary.

© C i h 1999 2022 A i i A li i i i 01 01 01 21 f 2


-----

**_Heating application in residential buildings_**
**_Individual Room Control_** **Apartment_a** **Apartment_b** **Apartment_c**

**T** **T** **T** **T** **T** **T**

**_with radiator heating_**


**Grp_ProdSegmH_x**

**Grp_Producer_y**

ValueDemBOC
FuelSelect

BUC BurnerReset

StatusBUC
OpHrsBurnerStage1
OpHrsBurnerStage2
BurnerSpec


StatusBOC
OpHrsBurner
LockSignBOC
ForceSignBOC

|ValueDemBOC PowerFlowDemHPM<br>FuelSelect<br>BUC BurnerReset BOC HP<br>StatusBUC StatusBOC|M HFD|Col3|
|---|---|---|

|HFDM|TempFlowWaterDemAbsHZC(n)<br>HD<br>LockSignHFDM<br>LockSignHPM<br>ForceSignHPM<br>ForceSignHFDM<br>StatusHPM|T|Ac<br>Te|tPo<br>mp|
|---|---|---|---|---|


© C i h 1999 2022 A i i A li i i i 01 01 01 22 f 2


-----

#### 3.3 Multifamily home, domestic hot water control individual room control
The figure on the next page shows a heating system for a multifamily home with apartment zone
**control (same as in clause 3.1) and centralised DHW preparation**

Heat Production and Heat Distribution are the same as in the preceding example in clause 3.1

A Domestic Hot Water circuit is controlled by a DHW Controller (DHWC) according to the current hot
water temperature setpoint. The DHW setpoint depends on the actual DHW operating mode and a set of
DHW temperature setpoints, each corresponding to one of the DHW operating modes. These information
are inputs for the DHWC which are provided by the DHW Setpoint Manager (DHWSM). The DHW
operating mode from DHWSM may depend on automatic time schedule or user operation (MMI).In
simple systems the DHWSM may not support different DHW modes and will only provide the actual
DHW setpoint

The current DHW temperature (normally a set of 2 different sensor values: DHWTS start/stop sensors) is
also a mandatory for DHW control loop. DHW sensor(s) are usually hard-wired to the device containing
the DHWC.

More sophisticated DHW applications may include solar DHW preparation (SDHWC) and optimized
circulation pump control (DHWCPC). The DHW control system is composed of multiple functional
blocks (some functional blocks are optional). Usually all of these functional blocks – except DHWSM or
SDHWC - are located in the same device.

The DHWC is connected to one Heat Distribution Segment and sends its heat demand to the
corresponding HFDM which provides demand dependent hot water flow.

DHW controls are often connected to the primary Distribution Segment or are located in a specific
Distribution Segment.

Usually DHW load requests load priority

   - „absolute load priority“: if DHW load requests all available power in the Distribution Segment

   - „shifting load priority“: DHW load has priority in case of boiler overload

Load priority between DHWC and other consumers is controlled by the HFDM according to priority
attributes in the heat demand signals. If load priority is requested by one or a class of consumers, the
HFDM will send a locking signal to the consumers in the distribution segment.

Forcing signal must also be handled by the DHWC. In case of boiler overheat, DHW load will usually be
activated first.

In LTE implementations of a DHW system all functional blocks used for DHW control are belonging to
the specific group DWHZone. DHW zoning is completely independent of the building structure /
geographical zones.

© C i h 1999 2022 A i i A li i i i 01 01 01 23 f 2


-----

##### Centralised DHW control T T

**Room unit** **Room unit**
**(in reference room)** **(in reference room)**

**Thermostatic** **Thermostatic**
**valve** **valve**

**T** **T**

**Heating circuit** **Heating circuit**
**weather** **weather**

**T** **compensated** **compensated**

**for Apartment a** **for Apartment b**

**T** **Secondary Heat Distribution n**

**Pre-control**
**demand**
**compensated**

**Primary Heat Distribution m** **Grp_DHWZone_d**

TempDHW DHWTS

StatusSDHWC

**Heat** **T** DHWC TempCollectorAct SDHWC TempCollector COLTS
**Production** StatusDHWCTempDHWSensorHigh
**demand** TempDHWSensorLow
**dependent** etc.

**Grp_ProdSegmH_x** DHWModeEff

DHWCPC DHWModeEffNext

StatusDHWC

**Grp_Producer_y** **Grp_DistrSegmH_m**

ValueDemBOCFuelSelectBurnerReset PowerFlowDemHPM TempFlowWaterDemAbsDHWTempFlowWaterDemAbsHFDM DHWModeEffDHWModeEffNext DHWSM

BUC BOC HPM HFDM TempDHWSetpSetEff (4)

StatusBUCOpHrsBurnerStage1 StatusBOCOpHrsBurner LockSignHPM TempDHWSetpEffDHWPush
OpHrsBurnerStage2 LockSignBOC ForceSignHPM
BurnerSpec ForceSignBOC StatusHPM

**Grp_Apartment_b . Room_.. . Subzone_..**

**Grp_Apartment_a . Room_r . Subzone_z**

MMI

TempFlowWaterAct

**Grp_DistrSegmH_n** TempRoomSetpHeatActHVACModeAct

StatusHZC

TempFlowWaterDemAbsHZC(n) RTS

HFDM LockSignHFDM HZC TempRoom

LockSignHPMForceSignHPM RSMHD
ForceSignHFDM HVACModeEff

FTC StatusHPM HVACModeEffNextTempRoomSetpHeatEff

TempRoomSetpSetHeatEff(4)

© C i h 1999 2022 A i i A li i i i 01 01 01 24 f 2

|HFD|Col2|M|
|---|---|---|

|HFD|Col2|M|
|---|---|---|
|HFD|||


-----

### 4 HVAC System Model

The figures on the following pages represent HVAC applications and the corresponding KNX
application model

They show interworking between different HVAC application areas such as Hot Water Heating
Ventilation, Air Conditioning, and Cold Water and Terminal Units.

# DEH

**RHDTTU**

# HWH

**AHDTTU**

**HDTAHU**

# TU

**VDTTU**

# VAC ACDTTU

**CCDTTU**

**Figure 4-1 Interworking**

The figure on the next page shows hot water and cold water consumers, distribution and production level.

Not on the pictures are the stand alone heating zone controllers (HZC), chilled ceiling controllers (CZC)
and stand alone air handling units (AHUC) as well as domestic hot water Functional Blocks.

© C i h 1999 2022 A i i A li i i i 01 01 01 2 f 2


-----

**HVAC Architecture**


##### n-rooms

## HWHHWH TU Radiator

weather / demand
compensated Radiator

demand
compensated

##### Hot WaterHot Water

Unit
(FCU, VAV,..)

AHU
## VACVAC

demand
compensated

##### AirAir

demand
compensated Chilled

##### Cold Water Ceiling

weather / demand
compensated

##### ProductionProduction Distribution ConsumerConsumer

© C i h 1999 2022 A i i A li i i i 01 01 01 26 f 2

|Col1|Col2|
|---|---|
|||


-----

**HVAC Functional Blocks**


## TU

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


##### n-rooms

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

##### ProductionProduction Distribution ConsumerConsumer

© C i h 1999 2022 A i i A li i i i 01 01 01 2 f 2

|HWH<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsRHDTTU<br>BUC BOC HPM HFDM-0 HFDM-m RHDT<br>1 n 1 1<br>1<br>FTC<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsAHDTTU<br>Hot Water HFDM-n AHDT<br>n 1 1<br>FTC<br>TempFlowWaterDemAbsHFDM TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>HFDM-o HDTAHU<br>n 1 1 1|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|RHDT|TU|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|RHDT||
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|AHDT|TU|
|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|**_Hot Water_**<br>**_HWH_**<br>RHDT<br>AHDT<br>HDTAHU<br>HFDM-m<br>FTC<br>HFDM-n<br>FTC<br>HFDM-o<br><br>HFDM-0<br>BUC<br>BOC<br>HPM<br>TempFlowWaterDemAbsRHDTTU<br>TempFlowWaterDemAbsAHDTTU<br>TempFlowWaterDemAbsHDTAHU<br>EnergyDemHeatSATC<br>TempFlowWaterDemAbsHFDM<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>1<br>TempFlowWaterDemAbsHFDM<br>TempFlowWaterDemAbsHFDM|AHDT||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|U|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|ACDT|TU|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|ACDT||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|CCDTT|U|
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|||||
|**_Air_**<br>**_Cold Water_**<br>**_VAC_**<br>VDTT<br>CDTAHU<br>ACDT<br>CCDTT<br>FTC<br>CFDM-r<br>FTC<br>CFDM-s<br>FTC<br>CFDM-t<br><br>TempFlowWaterDemAbsCDTAHU<br>EnergyDemCoolSATC<br>TempSupplyAirSetpSet (2)<br>ValueFreshAirSetp<br>CFDM-0<br>CC<br>CPM<br>SMRH<br>SMAQ<br>SATC<br>TempFlowWaterDemAbsCFDM<br>n<br>1<br>1<br>n<br>1<br>1<br>1<br>1<br>1<br>1<br>1<br>n<br>n<br>n<br>1<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsCFDM<br>TempFlowWaterDemAbsACDTTU<br>TempFlowWaterDemAbsCCDTTU|||||
|**_Production_**|FTC|FTC|FTC|FTC|


-----

