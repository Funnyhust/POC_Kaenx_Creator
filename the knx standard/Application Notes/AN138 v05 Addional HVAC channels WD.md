KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

# Application Note 138/10 v5

**Title:** **Additional HVAC Channels**

**Status** Working Document **Date:**

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2013.10.29

**Subject:** Additional HVAC channels
**Documents** **_Referred_**

[01] Volume 7/10/11 HVAC Channels v1.0 AS

[01] Application Note 112 v03 E-Mode Channels for Fan Coils AS

[03] Application Note 122 v11 Realisation of OpenTherm on KNX RF
AS

**Document updates**

**Version** **Date** **Modifications**

Contents

### 1 Abbreviations used ................................................................................................ 2

 2 Introduction .......................................................................................................... 3

 3 Channel general overview ...................................................................................... 3

 4 CH_Room Regulator Type B (RRTB si) (Channel Code 0512h) .............................. 6

 5 CH_Room Regulator Type B (RRTB so) (Channel Code 0513h) ............................. 8

 6 CH_Heating Cooling Actuator Type A (HCA A) (Channel Code 0514h) ............... 10

 7 CH_Heating Cooling Actuator Type B (HCA B) (Channel Code 0515h) ................ 12

 8 CH_Heating Actuator (HA) (Channel Code 0516h) .............................................. 14

 9 CH_Cooling Actuator (CA) (Channel Code 0517h) ............................................... 16

 10 CH_HVAC_Mode_Scheduler (SCHED si) (Channel Code 0518h) ......................... 18

 11 CH_Outside Temperature Sensor (Channel Code 0519h) ..................................... 19

 12 CH_Maximum Position Selector Sink (MPSEL si) (Channel Code 051Ah) ............ 20

 13 CH_Maximum Position Selector Source (MPSEL so) (Channel Code 051Bh) ........ 22

 14 CH_Set pointController_Source (SETPCONTR so) (Channel code 051Ch) ........... 23

 15 CH_Set pointController_Sink (SETPCONTR si) (Channel code 051Dh) ............... 26

 16 CH_Heat Circuit/Pump/Mixer Controller Source (HCPM so) (Channel code 051Eh) ................................................................................................................. 28

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 1 of 46

|Version|Date|Modifications|
|---|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

### 17 CH_Heat Circuit/Pump/Mixer Actuator (HCPM act) (Channel code 051Fh) ........ 30

 18 CH_SolarController Source (SOLARC so) (Channel code 0520h) ......................... 32

 19 CH_Solar Controller Sink (SOLARC si) (Channel code 0521h) ............................ 34

 20 CH_Solar Temperature Sensor (STS) (Channel code 0522h)................................. 36

 21 CH_Solar Temperature Sink (STS si) (Channel code 0523h) ................................. 37

 22 CH_Heat Pump Source (HPUMP so) (Channel code 0524h) ................................. 38

 23 CH_Heat Pump Sink (HPUMP si) (Channel code 0525h) ...................................... 40

 24 CH_Heat Meter Source (Channel code 0526h) ...................................................... 42

 25 CH_Heat Meter Sink (Channel code 0527h) ......................................................... 44

## 1 Abbreviations used

Abbreviation Meaning

si Channel type sink

so Channel type source

WC Window Contact

CA Cooling Actuator

HA Heating Actuator

HCA A Heat/Cool Actuator type A

HCA B Heat/Cool Actuator type B

PDB Presence Detector Basic

MPSEL Maximum Position Selector

RRTB Room Regulator Type B

CHC Central Heating Controller

OTS Outside Temperature Sensor

SCHED Scheduler

SETPCONTR Set Point Controller

HPUMP Heat pump

STS Solar Temperature Sensor

SOLARC Solar Controller

HCPM Heat Circuit/Pump/Mixer Controller

CHDHWC Central Heating Domestic Hot Water Controller

CHDHWP Central Heating Domestic Hot Water Producer

CHC Central Heating Controller

DHWC Domestic Hot Water Controller

HM Heating Meter

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 2 of 46

|Abbreviation|Meaning|
|---|---|
|si|Channel type sink|
|so|Channel type source|
|WC|Window Contact|
|CA|Cooling Actuator|
|HA|Heating Actuator|
|HCA A|Heat/Cool Actuator type A|
|HCA B|Heat/Cool Actuator type B|
|PDB|Presence Detector Basic|
|MPSEL|Maximum Position Selector|
|RRTB|Room Regulator Type B|
|CHC|Central Heating Controller|
|OTS|Outside Temperature Sensor|
|SCHED|Scheduler|
|SETPCONTR|Set Point Controller|
|HPUMP|Heat pump|
|STS|Solar Temperature Sensor|
|SOLARC|Solar Controller|
|HCPM|Heat Circuit/Pump/Mixer Controller|
|CHDHWC|Central Heating Domestic Hot Water Controller|
|CHDHWP|Central Heating Domestic Hot Water Producer|
|CHC|Central Heating Controller|
|DHWC|Domestic Hot Water Controller|
|HM|Heating Meter|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 2 Introduction
Currently a number of HVAC related channels are defined in [1], complemented by those that are
documented in [2] to [4].

These channels are however insufficient to model a full-fledged central heating system, including hot
water production and taking into account systems like heat pumps and solar panels. The current
available channels also do not allow influencing heat/cool production depending on the valve
positions in the individual rooms.

This application note contains a description of such a full-fledged heating system: the introduction of
these new channels however also oblige an extension of the (optional) part of the channels as
described in [3], of which an update is published at the same time as drafting this Application Note.

## 3 Channel general overview
An overview of the application model is given in Figure 1, showing the different involved channels
as well as the principal links between the individual channels.

The application principally works as follows:

   - The core of the system consists of a Room Regulator Type B (RRTB) and a Central Heating
Controller (CHC), to which a number of devices are linked, all modelled as easy (extendable)
channels.

   - A room is equipped with a RRTB, containing a source and sink channel[1].

The RRTB sink channel is linked amongst others to:

`o` A scheduler (SCHED) informing about the current HVAC Mode;

`o` Several Window/door contacts (WC) which are internally logically OR-ed;

`o` A Presence Detector Basic (PDB), informing on presence in the individual rooms;

`o` A Room Temperature sensor (RTS) (if not already available hard-wired) and Outside
Temperature sensor (OTS);

The corresponding RRTB source channel controls the connected heating or cooling valves
and provides several status information (e.g. effective HVAC Mode, Room Temperature, ...).

Different channel flavours of heating/cooling actuators are specified: actuators that simply
heat (HA) or simply cool (CA) and a combination thereof, again in two flavours (HCA A and
HCA B).

The application can be extended with a Maximum Position Selector, which collects via its
sink channel the valve positions as sent by the available RRTB source channels. The MPSEL
then calculates the maximum position and provides this as input to via its source channel to
another MPSEL sink channel directly in the central heating controller.

   - The CHC device may support the following source and sink channels[2]:

`o` A MPSEL sink channel to immediately receive the calculated maximum position of
the installed valves;

`o` A SCHED sink channel to directly receive the current HVAC mode from a SCHED
source;

1 If desired, these channels could be realised as separate devices.
2 It is left up to the manufacturers which of the channels depicted in figure 1 are implemented in the central
heating controller.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 3 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

`o` An OTS sink channel to link an outside temperature source directly to the central
heating controller;

`o` A SETPCONTR sink channel that can calculate on the basis of outside temperature
and the central heating flow temperature a shift/correction of the central heating, if
desired complemented by amongst others the received maximum position of the
valves;

`o` A Heat Pump sink channel (HPUMP) allowing to turn off the central heating if
decided by the linked HPUMP source;

`o` A Solar Controller sink channel (SOLARC) allowing turning off the domestic hot
water production if decided by the linked SOLARC source. This SOLARC source
may in turn receive the actual temperature of the solar collector via a linked Solar
Temperature Sensor (STS).

`o` A Heat Circuit/Pump/Mixer Controller source channel (HCPMC), which is able to
influence the set point of the revolution speed ratio of the heating pump, containing
the corresponding HCPMC sink channel.

`o` The controller and producer channels as described in [2] to regulate the actual central
heating and the domestic hot water production[3].

`o` A Heat Meter source channel, allowing to inform on the actual consumed heat.

**Note:**

The dotted lines surrounding two or more channels indicate that these channels are typically
combined into one single physical device.

Arrows between channels indicate the links: in case these lines are dotted, this signifies that
alternative links are possible. As an example, the RRTB source channel can be combined with a
heating or cooling actuator channel or a channel supporting both.

In the underneath description, the mandatory data points are given in bold in the graphical
representation of the channels.

3 See update of AN 122 for extensions of the optional data points.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 4 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

**Figure 1 – Overview of Application Model**

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 5 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 4 CH_Room Regulator Type B (RRTB si) (Channel Code 0512h)

- **Name:** CH_Room Regulator Type B

- **ID:** 0512h

- **Classification:** Functional Module (Sink)

- **General functional**

**description:**

The RRTB sink channel collects information amongst others on the applicable HVAC Mode, status of
windows or door contacts, presence in the area it controls. It will typically be combined with the
corresponding source channel in the same device.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Room Regulator**

**Type B_Si**

**HVAC Mode**
**WindowStatus** WS1
**WindowStatus** WS2
**WindowStatus** WS3
**WindowStatus** WS4
**Presence**
HVACHeatingEnabled
Forced
Scene Number
TempRoomSetpUserAbs
TempOutside
TempRoom

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 6 of 46

|Inputs|Col2|
|---|---|
|**HVAC Mode**|**CH_Room Regulator**<br>**Type B_Si**|
|**WindowStatus**<br>WS1 <br>**WindowStatus**<br>WS2<br>**WindowStatus**<br>WS3 <br>**WindowStatus**<br>WS4||
|**Presence**<br>HVACHeatingEnabled<br>Forced<br>Scene Number<br>TempRoomSetpUserAbs<br>TempOutside<br>TempRoom|**Presence**<br>HVACHeatingEnabled<br>Forced<br>Scene Number<br>TempRoomSetpUserAbs<br>TempOutside<br>TempRoom|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 HVACMode 1 CC_HVAC_Mode --- I 20.102
(31)

This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or
clock

2 WindowStatus 1 CC_Window_Status --- I,X 1.019
(30)

3 WindowStatus 2 CC_Window_Status --- I,X 1.019
(30)

4 WindowStatus 3 CC_Window_Status --- I,X 1.019
(30)

5 WindowStatus 4 CC_Window_Status --- I,X 1.019
(30)

Via this data point information is provided to the room controller on open doors or windows, as supplied by a
connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.

6 PresenceHeating 1 CC_PresenceStatus --- I 1.001
(54)

Via this data point a connected PDB provides information on presence in the area controlled by the room
regulator. The behaviour of the room regulator is manufacturer specific.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

HVACHeating 1 CC_Heating_Enable CC_Enable I 1.003
Enabled d (33) (16)

Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut
down during summer months).

Forced 1 CC_Forced (4) --- I 2.001

The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC
Mode.

Scene Number 1 CC_SceneNumber --- I 17.001
(8)

Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to
influence the HVAC mode.

TempRoomSetp 1 CC_TRSUA (43) --- I 9.001
UserAbs

This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or
display).

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 7 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|HVACMode|1|CC_HVAC_Mode<br>(31)|---|I|20.102|
|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|This data point would be typically linked to a Scheduler channel (0207h), as implemented in a central display or<br>clock|
|2|WindowStatus|1|CC_Window_Status<br>(30)|---|I,X|1.019|
|3|WindowStatus|2|CC_Window_Status<br>(30)|---|I,X|1.019|
|4|WindowStatus|3|CC_Window_Status<br>(30)|---|I,X|1.019|
|5|WindowStatus|4|CC_Window_Status<br>(30)|---|I,X|1.019|
|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|Via this data point information is provided to the room controller on open doors or windows, as supplied by a<br>connected Window Contact channel (0023h). The 4 subunits shall be internally ORed.|
|6|PresenceHeating|1|CC_PresenceStatus<br>(54)|---|I|1.001|
|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|Via this data point a connected PDB provides information on presence in the area controlled by the room<br>regulator. The behaviour of the room regulator is manufacturer specific.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||HVACHeating<br>Enabled|1|CC_Heating_Enable<br>d (33)|CC_Enable<br>(16)|I|1.003|
|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|Via this data point, the regulator can be informed whether or not the central heating system is active (e.g. shut<br>down during summer months).|
||Forced|1|CC_Forced (4)|---|I|2.001|
|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|<br>The data point allows setting the room regulator in forced mode, resulting in the setting of a predefined HVAC<br>Mode.|
||Scene Number|1|CC_SceneNumber<br>(8)|---|I|17.001|
|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|Via this data point, a connected scene controller can set scenes as pre-programmed into the regulator to<br>influence the HVAC mode.|
||TempRoomSetp<br>UserAbs|1|CC_TRSUA (43)|---|I|9.001|
|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|This data point allows the user to set a dedicated room temperature set point (e.g. via another room module or<br>display).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

TempOutside 1 CC_TO (36) --- I 9.001

Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source
channel (0024h, e.g. for summer compensation in air conditioning applications.

TempRoom I CC_TR (37) --- I 9.001

Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source
channel (0025h) or hardwired.

## 5 CH_Room Regulator Type B (RRTB so) (Channel Code 0513h)

- **Name:** CH_Room Regulator Type B

- **ID:** 0513h

- **Classification:** Functional Module (Source)

- **General functional**

**description:**

The corresponding RRTB source channel controls the connected heating or cooling valves and
provides several status information (e.g. effective HVAC Mode, Room Temperature, ...).

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Room Regulator**

**Type B_Source**

**ActPosSetpHeatStageA**
HVACModeEff
HeatCoolMode
OnOffHeatStageA
ActPosSetpCoolStageA
TempRoomSetEff
TempRoom

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 8 of 46

|Col1|TempOutside|1|CC TO (36)<br>_|---|I|9.001|
|---|---|---|---|---|---|---|
|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|<br>Via this data point the room regulator is informed about the outside temperature, as supplied by an OTS source<br>channel (0024h, e.g. for summer compensation in air conditioning applications.|
||TempRoom|I|CC_TR (37)|---|I|9.001|
|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|<br>Via this data point the room regulator is informed about the room temperature, as supplied by an RTS source<br>channel (0025h) or hardwired.|

|CH Room Regulator<br>_<br>Type B Source<br>_|Col2|
|---|---|
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||
|**CH_Room Regulator**<br>**Type B_Source**||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**

**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- O 5.001
Stage A (35)

Via this data point the room regulator sets the position of the linked heating valve.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

HVACModeEff 1 CC_HVAC_Mode_ --- O 20.102
Status (39)

This data point can be linked to a visualization to inform the user on the effective HVAC mode.

HeatCoolMode 1 CC_HeatCool (41) --- O 1.100

This data point informs the connected heating and/or cooling valve whether the room regulator is currently in
heat or cool mode.

OnOffHeatStageA 1 CC_Switch (01) --- O 1.001

This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the
mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).

ActPosSetpCool 1 CC_Cool_ --- O 5.001
StageA Scaling(88)

Via this data point the room regulator sets the position of the linked cooling valve.

TempRoomSetEff 1 CC_TRSUA (43) --- O 9.001

Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type
A, who take into account the effective set room temperature and the actual room temperature during calculation
of the van positions.

TempRoom 1 CC_TR (37) --- O 9.001

Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type
A, who take into account the effective set room temperature and the actual room temperature during calculation
of the van positions.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 9 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>Stage A|1|CC_Heat_Scaling<br>(35)|---|O|5.001|
|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|Via this data point the room regulator sets the position of the linked heating valve.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||HVACModeEff|1|CC_HVAC_Mode_<br>Status (39)|---|O|20.102|
|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|This data point can be linked to a visualization to inform the user on the effective HVAC mode.|
||HeatCoolMode|1|CC_HeatCool (41)|---|O|1.100|
|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|<br>This data point informs the connected heating and/or cooling valve whether the room regulator is currently in<br>heat or cool mode.|
||OnOffHeatStageA|1|CC_Switch (01)|---|O|1.001|
|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|<br>This data point can be linked to a simple switching actuator: this is the pulse width modulation equivalent of the<br>mandatory data point ActPosSetpHeatStageA (open (1) or closed (0)).|
||ActPosSetpCool<br>StageA|1|CC_Cool_<br>Scaling(88)|---|O|5.001|
|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|Via this data point the room regulator sets the position of the linked cooling valve.|
||TempRoomSetEff|1|CC_TRSUA (43)|---|O|9.001|
|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|
||TempRoom|1|CC_TR (37)|---|O|9.001|
|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to heating/cooling actuators of type<br>A, who take into account the effective set room temperature and the actual room temperature during calculation<br>of the van positions.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 6 CH_Heating Cooling Actuator Type A (HCA A) (Channel Code
 0514h)

- **Name:** CH_Heating Cooling Actuator Type A

- **ID:** 0514h

- **Classification:** Functional Module (Actuator)

- **General functional**

**description:**

Different channel flavours of heating/cooling actuators are specified: actuators that simply heat (HA)
or simply cool (CA) and a combination thereof, again in two flavours (HCA A and HCA B).

The underneath specifies the type A with heating and cooling.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heating**
**Cooling Actuator**

**Type A**

**ActPosSetpHeatStageA**
**ActPosSetpCoolStageA**
**TempRoomSetEff**
Forced
TempRoom
HeatCoolMode
Window Contact WS1
Window Contact WS2
Window Contact WS3
Window Contact WS4

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 10 of 46

|ActPosSetpHeatStageA<br>ActPosSetpCoolStageA<br>TempRoomSetEff<br>Forced<br>TempRoom<br>HeatCoolMode|CH Heating<br>_<br>Cooling Actuator<br>Type A|
|---|---|
|Window Contact<br>WS1<br>Window Contact<br>WS2 <br>Window Contact<br>WS3<br>Window Contact<br>WS4|Window Contact<br>WS1<br>Window Contact<br>WS2 <br>Window Contact<br>WS3<br>Window Contact<br>WS4|
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**
Whether the device heats or cools shall depend on local settings on the device.
Whether the device takes into account own regulation inputs (e.g. TempRoomSetEff, TempRoom) or not may
also depend on local settings on the device.

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- I 5.001
StageA (35)

Via this data point the room regulator sets the position of the heating valve.

2 ActPosSetpCool 4 CC_Cool_Scaling --- I 5.001
StageA (88)

Via this data point the room regulator sets the position of the cooling valve.

3 TempRoomSetEff 1 CC_TRSUA (43) --- I 9.001

Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into
account the effective set room temperature during calculation of the van positions.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Forced 1 CC_Forced (4) --- I 2.001

The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.
(forced on).

TempRoom I CC_TR (37) --- I 9.001

Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally
take into account the actual room temperature during calculation of the van positions.

HeatCoolMode 1 CC_HeatCool (41) --- I 1.100

Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is
currently in heat or cool mode.

WindowStatus 1 CC_Window_Status --- I,X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected
Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are
especially favourable in case the RRTB and the window contacts are battery powered.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 11 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I|5.001|
|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|
|2|ActPosSetpCool<br>StageA|4|CC_Cool_Scaling<br>(88)|---|I|5.001|
|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|
|3|TempRoomSetEff|1|CC_TRSUA (43)|---|I|9.001|
|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can take into<br>account the effective set room temperature during calculation of the van positions.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Forced|1|CC_Forced (4)|---|I|2.001|
|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|
||TempRoom|I|CC_TR (37)|---|I|9.001|
|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|<br>Via this data point the room regulator can provide the necessary input data to the HCA A, who can optionally<br>take into account the actual room temperature during calculation of the van positions.|
||HeatCoolMode|1|CC_HeatCool (41)|---|I|1.100|
|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I,X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 7 CH_Heating Cooling Actuator Type B (HCA B) (Channel Code
 0515h)

- **Name:** CH_Heating Cooling Actuator Type B

- **ID:** 0515h

- **Classification:** Functional Module (Actuator)

- **General functional**

**description:**

Different channel flavours of heating/cooling actuators are specified: actuators that simply heat (HA)
or simply cool (CA) and a combination thereof, again in two flavours (HCA A and HCA B).

The underneath specifies the type B with heating and cooling. Type B can be regarded as a downsized
version of Type A.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heating**

**Cooling**
**Actuator Type B**

**ActPosSetpHeatStageA**
**ActPosSetpCoolStageA**
Forced
HeatCoolMode
Window Contact WS1
Window Contact WS2
Window Contact WS3
Window Contact WS4

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 12 of 46

|ActPosSetpHeatStageA<br>ActPosSetpCoolStageA<br>Forced<br>HeatCoolMode|CH Heating<br>_<br>Cooling<br>Actuator Type B|
|---|---|
|<br>Window Contact<br>WS1<br>Window Contact<br>WS2 <br>Window Contact<br>WS3 <br>Window Contact<br>WS4||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- I 5.001
StageA (35)

Via this data point the room regulator sets the position of the heating valve.

2 ActPosSetpCool 4 CC_Cool_Scaling --- I 5.001
StageA (88)

Via this data point the room regulator sets the position of the cooling valve.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Forced 1 CC_Forced (4) --- I 2.001

The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.
(forced on).

HeatCoolMode 1 CC_HeatCool (41) --- I 1.100

Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is
currently in heat or cool mode.

WindowStatus 1 CC_Window_Status --- I,X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected
Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are
especially favourable in case the RRTB and the window contacts are battery powered.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 13 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I|5.001|
|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|
|2|ActPosSetpCool<br>StageA|4|CC_Cool_Scaling<br>(88)|---|I|5.001|
|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Forced|1|CC_Forced (4)|---|I|2.001|
|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|
||HeatCoolMode|1|CC_HeatCool (41)|---|I|1.100|
|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I,X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 8 CH_Heating Actuator (HA) (Channel Code 0516h)

- **Name:** CH_Heating Actuator

- **ID:** 0516h

- **Classification:** Functional Module (Actuator)

- **General functional**

**description:**

Different channel flavours of heating/cooling actuators are specified: actuators that simply heat (HA)
or simply cool (CA) and a combination thereof, again in two flavours (HCA A and HCA B).

The underneath specifies the actuator that only intended for heating applications.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heating**

**Actuator**

**ActPosSetpHeatStageA**
Forced
HeatCoolMode
Window Contact WS1
Window Contact WS2
Window Contact WS3
Window Contact WS4

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 14 of 46

|ActPosSetpHeatStageA<br>Forced<br>HeatCoolMode|CH Heating<br>_<br>Actuator|
|---|---|
|Window Contact<br>WS1<br>Window Contact<br>WS2 <br>Window Contact<br>WS3 <br>Window Contact<br>WS4||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- I 5.001
StageA (35)

Via this data point the room regulator sets the position of the heating valve.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Forced 1 CC_Forced (4) --- I 2.001

The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.
(forced on).

The data point allows setting the heat/cool actuator in a predefined position.

HeatCoolMode 1 CC_HeatCool (41) --- I 1.100

Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is
currently in heat or cool mode.

WindowStatus 1 CC_Window_Status --- I,X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected
Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are
especially favourable in case the RRTB and the window contacts are battery powered.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 15 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I|5.001|
|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|Via this data point the room regulator sets the position of the heating valve.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Forced|1|CC_Forced (4)|---|I|2.001|
|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|
|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|
||HeatCoolMode|1|CC_HeatCool (41)|---|I|1.100|
|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I,X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 9 CH_Cooling Actuator (CA) (Channel Code 0517h)

- **Name:** CH_Cooling Actuator

- **ID:** 0517h

- **Classification:** Functional Module (Actuator)

- **General functional**

**description:**

Different channel flavours of heating/cooling actuators are specified: actuators that simply heat (HA)
or simply cool (CA) and a combination thereof, again in two flavours (HCA A and HCA B).

The underneath specifies the actuator that is only intended for cooling applications.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Cooling**

**Actuator**

**ActPosSetpCoolStageA**
Forced
HeatCoolMode
Window Contact WS1
Window Contact WS2
Window Contact WS3
Window Contact WS4

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 16 of 46

|ActPosSetpCoolStageA<br>Forced<br>HeatCoolMode|CH Cooling<br>_<br>Actuator|
|---|---|
|Window Contact<br>WS1<br>Window Contact<br>WS2 <br>Window Contact<br>WS3 <br>Window Contact<br>WS4||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpCool 4 CC_Cool_Scaling --- I 5.001
StageA (88)

Via this data point the room regulator sets the position of the cooling valve.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Forced 1 CC_Forced (4) --- I 2.001

The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.
(forced on).

The data point allows setting the heat/cool actuator in a predefined position.

HeatCoolMode 1 CC_HeatCool (41) --- I 1.100

Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is
currently in heat or cool mode.

WindowStatus 1 CC_Window_Status --- I,X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

WindowStatus 1 CC_Window_Status --- I, X 1.019
(30)

Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected
Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are
especially favourable in case the RRTB and the window contacts are battery powered.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 17 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpCool<br>StageA|4|CC_Cool_Scaling<br>(88)|---|I|5.001|
|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|Via this data point the room regulator sets the position of the cooling valve.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Forced|1|CC_Forced (4)|---|I|2.001|
|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|<br>The data point allows setting the heat/cool actuator in a predefined position, e.g. 0 (forced off) and 100 %.<br>(forced on).|
|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|The data point allows setting the heat/cool actuator in a predefined position.|
||HeatCoolMode|1|CC_HeatCool (41)|---|I|1.100|
|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|<br>Via this data point the room regulator informs the connected heating/cooling valve whether the room regulator is<br>currently in heat or cool mode.|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I,X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
||WindowStatus|1|CC_Window_Status<br>(30)|---|I, X|1.019|
|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|Via this data point information is provided to the HCA A on open doors or windows, as supplied by a connected<br>Window Contact channel (0023h). The 4 subunits shall be internally ORed. These optional data points are<br>especially favourable in case the RRTB and the window contacts are battery powered.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 10 CH_HVAC_Mode_Scheduler (SCHED si) (Channel Code 0518h)

- **Name:** CH_HVAC_Mode_Scheduler

- **ID:** 0518h

- **Classification:** Functional Module (Sink)

- **General functional**

**description:**

This channel is the sink counterpart of the already defined Scheduler source channel, i.e. 0207h. This
channel can be realized in the central heating controller device to inform the latter directly of the
currently active HVAC Mode (e.g. to realize overall night reduction mode of a heating system).

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_HVAC_**
**Mode_Scheduler**

**_Sink**

**HVAC Mode**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 HVAC Mode 1 CC_HVAC_Mode --- I, X 20.102
(31)

Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on
the active HVAC Mode

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 18 of 46

|Col1|CH HVAC<br>_ _<br>Mode Scheduler<br>_<br>Sink<br>_|
|---|---|
|||

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|HVAC Mode|1|CC_HVAC_Mode<br>(31)|---|I, X|20.102|
|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|Via this data point a scheduler (e.g. as realized in a channel 0207h) can inform the central heating controller on<br>the active HVAC Mode|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 11 CH_Outside Temperature Sensor (Channel Code 0519h)

- **Name:** CH_Outside Temperature Sensor

- **ID:** 0519h

- **Classification:** Functional Module (Sink)

- **General functional**

**description:**

This channel is the sink counterpart of the already defined Outside Temperature Sensor source
channel, i.e. 0024h. This channel can be realized in the central heating controller device to inform the
latter directly of the current Outside Temperature.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_OTS_Sink**

**Outside Temperature**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Outside Temperature 1 CC_TO (36) --- I, X 9.001

Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller
on the current outside temperature

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 19 of 46

|Col1|CH OTS Sink<br>_ _|
|---|---|
|||

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Outside Temperature|1|CC_TO (36)|---|I, X|9.001|
|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|<br>Via this data point an OTS source (e.g. as realized in a channel 0024h) can inform the central heating controller<br>on the current outside temperature|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 12 CH_Maximum Position Selector Sink (MPSEL si) (Channel Code
 051Ah)

- **Name:** CH_Maximum Position Selector Sink

- **ID:** 051Ah

- **Classification:** Functional Module (Sink)

- **General functional**

**description:**

This channel with up to maximum 8 subunits is intended to collect the position of the linked heating
valves as sent out by the room regulators controlling these valves.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_MaxPosSel**


**ActPosSetpHeatStageA** APSHS1
**ActPosSetpHeatStageA** APSHS2
**ActPosSetpHeatStageA** APSHS3
**ActPosSetpHeatStageA** APSHS4
**ActPosSetpHeatStageA** APSHS5
**ActPosSetpHeatStageA** APSHS6
**ActPosSetpHeatStageA** APSHS7
**ActPosSetpHeatStageA** APSHS8

|ActPosSetpHeatStageA APSHS1<br>ActPosSetpHeatStageA APSHS2<br>ActPosSetpHeatStageA APSHS3<br>ActPosSetpHeatStageA APSHS4<br>ActPosSetpHeatStageA APSHS5<br>ActPosSetpHeatStageA APSHS6<br>ActPosSetpHeatStageA APSHS7<br>ActPosSetpHeatStageA APSHS8|CH MaxPosSel<br>_<br>Sink|
|---|---|


Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 20 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

2 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

3 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

4 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

5 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

6 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

7 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

8 ActPosSetpHeat 1 CC_Heat_Scaling --- I, X 5.001
StageA (35)

The output by means of which the room regulator communicates the position of the heating valves can be linked
to one sub unit input of the maximum position selector sink channel.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 21 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|2|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|3|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|4|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|5|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|6|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|7|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|8|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I, X|5.001|
|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|The output by means of which the room regulator communicates the position of the heating valves can be linked<br>to one sub unit input of the maximum position selector sink channel.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 13 CH_Maximum Position Selector Source (MPSEL so) (Channel Code 051Bh)

- **Name:** CH_Maximum Position Selector Source

- **ID:** 051Bh

- **Classification:** Functional Module (Source)

- **General functional**

**description:**

This channel sends out the calculated maximum position of the connected heating valves, as received
via the room regulator.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_MaxPosSel**

**Source**

**ActPosSetpHeatStageA**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 ActPosSetpHeat 1 CC_Heat_Scaling --- O 5.001
StageA (35)

As a result of the values received via the maximum position selector sink channel, the corresponding source
channel is able to inform the central heating controller on the maximum position of the connected heating
valves: the calculation of the output value is based on manufacturer specific algorithms.
In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed
into a maximum position selector sink before feeding it into the central heating controller.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 22 of 46

|CH MaxPosSel<br>_<br>Source|Col2|
|---|---|
|**CH_MaxPosSel**<br>**Source**||

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|O|5.001|
|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|As a result of the values received via the maximum position selector sink channel, the corresponding source<br>channel is able to inform the central heating controller on the maximum position of the connected heating<br>valves: the calculation of the output value is based on manufacturer specific algorithms.<br>In case of buildings with multiple flats, the output of the maximum position selector sources shall again be fed<br>into a maximum position selector sink before feeding it into the central heating controller.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 14 CH_Set pointController_Source (SETPCONTR so) (Channel code
 051Ch)

- **Name:** CH_Set pointController_Source

- **ID:** 051Ch

- **Classification:** Functional Module (Source)

 - **General functional**

**description:**

This channel is responsible for the calculation of a correction factor for the central heating
temperature set point. This shall be done on the basis of the outside temperature and the central
heating flow temperature as provided by the set point controller sink, if desired extended with other
factors, e.g. the maximum position of the valves as also provided by the set point controller sink.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Set Point**

**Controller_**

**Source**

**Central Heating Temp Set**

**Outside Temperature** **Shift/Correction**

**Central Heating Flow** Central Heating Temperature Set
**Temperature** Point

ActPosSetpHeatStageA
Central Heating Return
Temperature


Boiler Fault State
Current Power Ratio of
heating pump

HVAC Mode

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 23 of 46

|Col1|CH Set Point<br>_<br>Controller<br>_<br>Source|Col3|
|---|---|---|
||||
||||
||||
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Outside Temperature 1 CC_TO (36) --- I 9.001

Via this data point the set point controller sink provides the current outside temperature value. This avoids
having to link the set point controller source to the current outside temperature sensor. This data will be one
element in the correction of the central heating temperature set point correction, as calculated by the set point
controller source and provided to the central heating controller.

2 Central Heating Flow 1 CC_Temperature_ --- I 5.001
Temperature Flow_Water (81)

Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on
the current temperature of the flow water. This data will be one element in the central heating temperature set
point correction, as calculated by the set point controller source and provided to the central heating controller.

3 Central Heating Temp Set 1 CC_TemperatureD --- O 9.002
Shift/Correction (44)

On the basis of the received mandatory information on the current value of the outside temperature and the flow
water, the set point controller source via this data point shifts the temperature of the central heating. The
algorithms how the value is calculated is manufacturer specific.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

ActPosSetpHeat 1 CC_Heat_Scaling --- I 5.001
StageA (35)

Via this optional data point the set point controller sink channel provides information on the set positions of the
available vans. Also this information can be used by the set point controller source to shift the temperature of the
central heating.

Central Heating Return I CC_Temperature_ --- I 9.001
Temperature Return_Water (115)

Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides
information on the current temperature of the return water, through the set point controller sink. This data may
be an additional element in the correction of the central heating temperature set point correction, as calculated by
the set point controller source and provided to the central heating controller.

Boiler Fault State 1 CC_Fault (103) --- I 1.005

Via this data point the set point controller source is informed about a boiler fault, as communicated t through he
set point controller sink.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 24 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Outside Temperature|1|CC_TO (36)|---|I|9.001|
|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|<br>Via this data point the set point controller sink provides the current outside temperature value. This avoids<br>having to link the set point controller source to the current outside temperature sensor. This data will be one<br>element in the correction of the central heating temperature set point correction, as calculated by the set point<br>controller source and provided to the central heating controller.|
|2|Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|I|5.001|
|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|<br>Via this data point the central heating producer (CHP) or the heat meter (HM) channel provides information on<br>the current temperature of the flow water. This data will be one element in the central heating temperature set<br>point correction, as calculated by the set point controller source and provided to the central heating controller.|
|3|Central Heating Temp Set<br>Shift/Correction|1|CC_TemperatureD<br>(44)|---|O|9.002|
|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|On the basis of the received mandatory information on the current value of the outside temperature and the flow<br>water, the set point controller source via this data point shifts the temperature of the central heating. The<br>algorithms how the value is calculated is manufacturer specific.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||ActPosSetpHeat<br>StageA|1|CC_Heat_Scaling<br>(35)|---|I|5.001|
|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|
||Central Heating Return<br>Temperature|I|CC_Temperature_<br>Return_Water (**115**)|---|I|9.001|
|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water, through the set point controller sink. This data may<br>be an additional element in the correction of the central heating temperature set point correction, as calculated by<br>the set point controller source and provided to the central heating controller.|
||Boiler Fault State|1|CC_Fault (103)|---|I|1.005|
|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|<br>Via this data point the set point controller source is informed about a boiler fault, as communicated t through he<br>set point controller sink.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

Current Power Ratio of 1 CC_Pump_Speed_ --- I 5.001
heating pump Ratio_Status (116)

Via this data point the set point controller source is informed about the current power ratio of the heating pump,
as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink
channel.

HVAC Mode 1 CC_HVAC_Mode --- I 20.102
(31)

Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night
reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The
additional information on the active HVAC mode may then be used by the central heating controller to shift the
temperature of the central heating.

Central Heating 1 CC_CH_TempSet ---- O 9.001
Temperature Set Point point (101)

Via this data point the set point controller source may additionally set the central heating temperature set point
directly instead of shifting it, by sending this information to the set point controller sink.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 25 of 46

|Col1|Current Power Ratio of<br>heating pump|1|CC Pump Speed<br>_ _ _<br>Ratio Status (116)<br>_|---|I|5.001|
|---|---|---|---|---|---|---|
|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|<br>Via this data point the set point controller source is informed about the current power ratio of the heating pump,<br>as provided by the heat circuit/pump/mixer controller and communicated by the set point controller sink<br>channel.|
||HVAC Mode|1|CC_HVAC_Mode<br>(31)|---|I|20.102|
|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|Via this data point the set point controller sink channel informs on the current active HVAC mode (e.g. night<br>reduction). This avoids having to link additionally the set point controller source to a scheduler channel. The<br>additional information on the active HVAC mode may then be used by the central heating controller to shift the<br>temperature of the central heating.|
||Central Heating<br>Temperature Set Point|1|CC_CH_TempSet<br>point (101)|----|O|9.001|
|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|Via this data point the set point controller source may additionally set the central heating temperature set point<br>directly instead of shifting it, by sending this information to the set point controller sink.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 15 CH_Set pointController_Sink (SETPCONTR si) (Channel code
 051Dh)

- **Name:** CH_Set pointController_Sink

- **ID:** 051Dh

- **Classification:** Functional Module (Sink)

 - **General functional**

**description:**

This channel receives the calculated correction factor for the central heating temperature set point.
This factor is calculated by the corresponding set point controller source, on the basis of elements
provided by the sink, a.o. the outside temperature and the central heating flow temperature.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Set Point**

**Controller_**

**Sink**

**Central Heating Temp**
**Set Shift/Correction** **Outside Temperature**

Central Heating **Central Heating Flow**
Temperature Set Point **Temperature**

Central Heating Return Temperature
Boiler Fault State


Current Power Ratio of heating
pump
ActPosSetpHeatStageA
HVAC Mode

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 26 of 46

|Col1|CH Set Point<br>_<br>Controller<br>_<br>Sink|Col3|
|---|---|---|
||||
||||
||||
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Central Heating Temp Set 1 CC_TemperatureD --- I 9.002
Shift/Correction (44)

The set point controller source will use this data point to inform about the calculated shift for the central heating
temperature.

2 Outside Temperature 1 CC_TO (36) --- O 9.001

Via this data point the set point controller sink provides the current outside temperature value (as already
available in the central heating controller). This avoids having to establish an explicit link between the set point
controller source and the outside temperature sensor.

2 Central Heating Flow 1 CC_Temperature_ --- O 5.001
Temperature Flow_Water (81)

Via this data point the set point controller sink informs the set point controller source about the central heating
flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating 1 CC_CH_TempSet ---- I 9.001
Temperature Set Point point (101)

Via this data point the set point controller source may set the central heating temperature set point explicitly,
instead of shifting the value.

Central Heating Return I CC_Temperature_ --- O 9.001
Temperature Return_Water (115)

Via this data point the set point controller sink informs about the current temperature of the return water as
provided by the central heating producer (CHP) or the heat meter (HM) channel.

Boiler Fault State 1 CC_Fault (103) --- O 1.005

Via this data point the set point controller sink informs about a possible boiler fault to the set point controller
source, as provided by the central heating (domestic hot water) producer.

Current Power Ratio of 1 CC_Pump_Speed_ --- O 5.001
heating pump Ratio_Status (116)

Via this data point the set point controller sink informs about the current power ratio of the heating pump, as
provided by the heat circuit/pump/mixer controller.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 27 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Central Heating Temp Set<br>Shift/Correction|1|CC_TemperatureD<br>(44)|---|I|9.002|
|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|The set point controller source will use this data point to inform about the calculated shift for the central heating<br>temperature.|
|2|Outside Temperature|1|CC_TO (36)|---|O|9.001|
|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|<br>Via this data point the set point controller sink provides the current outside temperature value (as already<br>available in the central heating controller). This avoids having to establish an explicit link between the set point<br>controller source and the outside temperature sensor.|
|2|Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|O|5.001|
|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs the set point controller source about the central heating<br>flow temperature as measured by the central heating producer (CHP) or the heat meter (HM) channel.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating<br>Temperature Set Point|1|CC_CH_TempSet<br>point (101)|----|I|9.001|
|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|Via this data point the set point controller source may set the central heating temperature set point explicitly,<br>instead of shifting the value.|
||Central Heating Return<br>Temperature|I|CC_Temperature_<br>Return_Water (**115**)|---|O|9.001|
|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|<br>Via this data point the set point controller sink informs about the current temperature of the return water as<br>provided by the central heating producer (CHP) or the heat meter (HM) channel.|
||Boiler Fault State|1|CC_Fault (103)|---|O|1.005|
|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|<br>Via this data point the set point controller sink informs about a possible boiler fault to the set point controller<br>source, as provided by the central heating (domestic hot water) producer.|
||Current Power Ratio of<br>heating pump|1|CC_Pump_Speed_<br>Ratio_Status (**116**)|---|O|5.001|
|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|<br>Via this data point the set point controller sink informs about the current power ratio of the heating pump, as<br>provided by the heat circuit/pump/mixer controller.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

ActPosSetpHeat 1 CC_Heat_Scaling --- O 5.001
StageA (35)

Via this optional data point the set point controller sink channel provides information on the set positions of the
available vans. Also this information can be used by the set point controller source to shift the temperature of the
central heating.

HVAC Mode 1 CC_HVAC_Mode --- O 20.102
(31)

Via this data point the set point controller sink provides the currently active HVAC Mode (as already available
in the central heating controller). This avoids having to establish an explicit link between the set point controller
source and a scheduler channel

## 16 CH_Heat Circuit/Pump/Mixer Controller Source (HCPM so) (Channel code 051Eh)

- **Name:** CH_Heat Circuit/Pump/Mixer Controller Source

- **ID:** 051Eh

- **Classification:** Functional Module (Source)

 - **General functional**

**description:**

This channel controls the set point revolution speed ratio of a heating pump, as connected to the
channel sink counterpart. The channel source calculates the before said ratio on the central heating
flow temperature as received via the HCPM sink channel.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat**
**Circuit/Pump/**
**Mixer Controller**

**Source**

**Central Heating Flow** **Set point revolution speed ratio of**
**Temperature** **heating pump**

Central Heating Return
Temperature Mixer Position

Pump Fault
Current Power Ratio of
heating pump

|Col1|ActPosSetpHeat<br>StageA|1|CC Heat Scaling<br>_ _<br>(35)|---|O|5.001|
|---|---|---|---|---|---|---|
|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|Via this optional data point the set point controller sink channel provides information on the set positions of the<br>available vans. Also this information can be used by the set point controller source to shift the temperature of the<br>central heating.|
||HVAC Mode|1|CC_HVAC_Mode<br>(31)|---|O|20.102|
|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|Via this data point the set point controller sink provides the currently active HVAC Mode (as already available<br>in the central heating controller). This avoids having to establish an explicit link between the set point controller<br>source and a scheduler channel|

|Col1|CH Heat<br>_<br>Circuit/Pump/<br>Mixer Controller<br>Source|Col3|
|---|---|---|
||||
||||
||||
||||


Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 28 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Central Heating Flow 1 CC_Temperature_ --- I 9.001
Temperature Flow_Water (81)

Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured
temperature of the flow water, as provided by the corresponding controller sink channel. This information will
be used to adjust the set point of the speed ratio of the pump through the controller sink.

2 Set point revolution speed 1 CC_Pump_Setp_ --- O 5.001
ratio of heating pump Speed_ratio_Setp

(119)

This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Return I CC_Temperature_ --- I 9.001
Temperature Return_Water (115)

Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides
information on the current temperature of the return water. This data may be an additional element in the
adjustment of the speed ratio of the connected pump.

Pump Fault 1 CC_Fault (103) --- I 1.005

Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected
pump.

Current Power Ratio of 1 CC_Pump_Speed_ --- I 5.001
heating pump Ratio_Status (116)

Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the
connected heating pump.

Mixer Position 1 CC_Mixer_Setp_ --- O 5.001
ratio (118)

Via this data point the heat circuit/mixer/pump controller source may set the mixer position

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 29 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|I|9.001|
|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|<br>Via this data point the heating circuit/pump/mixer controller source channel is informed about the measured<br>temperature of the flow water, as provided by the corresponding controller sink channel. This information will<br>be used to adjust the set point of the speed ratio of the pump through the controller sink.|
|2|Set point revolution speed<br>ratio of heating pump|1|CC_Pump_Setp_<br>Speed_ratio_Setp<br>(**119**)|---|O|5.001|
|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|This data point is used to adjust the set point of the speed ratio of the pump through the controller sink.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Return<br>Temperature|I|CC_Temperature_<br>Return_Water (**115**)|---|I|9.001|
|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump.|
||Pump Fault|1|CC_Fault (103)|---|I|1.005|
|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about possible faults of the connected<br>pump.|
||Current Power Ratio of<br>heating pump|1|CC_Pump_Speed_<br>Ratio_Status (**116**)|---|I|5.001|
|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump controller sink may inform about the current power ratio of the<br>connected heating pump.|
||Mixer Position|1|CC_Mixer_Setp_<br>ratio (**118**)|---|O|5.001|
|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|Via this data point the heat circuit/mixer/pump controller source may set the mixer position|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 17 CH_Heat Circuit/Pump/Mixer Actuator (HCPM act) (Channel code 051Fh)

- **Name:** CH_Heat Circuit/Pump/Mixer Actuator

- **ID:** 051Fh

- **Classification:** Functional Module (Actuator)

 - **General functional**

**description:**

This channel is responsible for receiving the revolution speed of the heating pump as calculated by
the corresponding source channel. This ratio is calculated on the basis of the central heating flow
temperature as provided by this channel to its source counterpart.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat**
**Circuit/Pump/**

**Mixer**
**Actuator**

**Set point revolution**
**speed ratio of heating** **Central Heating Flow**
**pump** **Temperature**

Central Heating Flow Central Heating Return Temperature
Pump Fault

Current Power Ratio of heating
pump

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 30 of 46

|Col1|CH Heat<br>_<br>Circuit/Pump/<br>Mixer<br>Actuator|Col3|
|---|---|---|
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Set point revolution speed 1 CC_Pump_Setp_ --- I 5.001
ratio of heating pump Speed_ratio_Setp

(119)

Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the
HCPM actuator.

2 Central Heating Flow 1 CC_Temperature_ --- O 9.001
Temperature Flow_Water (81)

Via this data point the heating circuit/pump/mixer actuator informs about the measured temperature of the flow
water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Flow 1 CC_HeatFlow_ --- I 5.001
Scaling (117)

Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.

Central Heating Return I CC_Temperature_ --- O 9.001
Temperature Return_Water (115)

Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides
information on the current temperature of the return water. This data may be an additional element in the
adjustment of the speed ratio of the connected pump by the source channel receiving this value.

Pump Fault 1 CC_Fault (103) --- O 1.005

Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected
pump.

Current Power Ratio of 1 CC_Pump_Speed_ --- O 5.001
heating pump Ratio_Status (116)

Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the
connected heating pump.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 31 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Set point revolution speed<br>ratio of heating pump|1|CC_Pump_Setp_<br>Speed_ratio_Setp<br>(**119**)|---|I|5.001|
|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|Via this data point the controller source adjusts the set point of the speed ratio of the pump connected to the<br>HCPM actuator.|
|2|Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|O|9.001|
|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|<br>Via this data point the heating circuit/pump/mixer actuator  informs about the measured temperature of the flow<br>water to the source channel, who then adjusts the set point of the speed ratio of the pump accordingly.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Flow|1|CC_HeatFlow_<br>Scaling (**117**)|---|I|5.001|
|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|Via this data point the heat circuit/mixer/pump controller source may inform about the heating flow ratio.|
||Central Heating Return<br>Temperature|I|CC_Temperature_<br>Return_Water (**115**)|---|O|9.001|
|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|<br>Via this optional data point the central heating producer (CHP) or the heat meter (HM) channel provides<br>information on the current temperature of the return water. This data may be an additional element in the<br>adjustment of the speed ratio of the connected pump by the source channel receiving this value.|
||Pump Fault|1|CC_Fault (103)|---|O|1.005|
|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about possible faults of the connected<br>pump.|
||Current Power Ratio of<br>heating pump|1|CC_Pump_Speed_<br>Ratio_Status (**116**)|---|O|5.001|
|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|<br>Via this data point the heat circuit/mixer/pump actuator may inform about the current power ratio of the<br>connected heating pump.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 18 CH_SolarController Source (SOLARC so) (Channel code 0520h)

- **Name:** CH_Solar Controller Source

- **ID:** 0520h

- **Classification:** Functional Module (Source)

 - **General functional**

**description:**

Depending on the production of sufficient hot water by the solar collectors, this channel may
influence the further production of hot water for the central heating and/or the domestic hot water
by the central heating controller.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Solar**
**Controller**


Solar Collector
Temperature


**Domestic Hot Water Enable**
Central Heating Enable

Central Heating Temp Set point
Shift Correction

Domestic Hot Water Temperature
Set point Shift Correction

|Col1|CH Solar<br>_<br>Controller<br>Source|Col3|
|---|---|---|
||||
||||
||||
||||


Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 32 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Domestic Hot Water Enable 1 CC_DHW_Enable --- O 1.003
(105)

Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot
water by the central heating system, depending on the available of sufficient solar power.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Enable I CC_CH_Enable (33) --- O 1.003

Via this data point the solar controller source channel is able to activate or deactivate the central heating,
depending on the available of sufficient solar power.

Central Heating Temp Set 1 CC_TemperatureD --- O 9.002
point Shift Correction (44)

Via this data point the solar controller source channel is able to shift/correct the current central heating
temperature set point.

Domestic Hot Water Temp 1 CC_TemperatureD_ --- O 9.002
Set point Shift Correction DHW (122)

Via this data point the solar controller source channel is able to shift/correct the current domestic hot water
temperature set point.

Temperature Solar Collector 1 CC_TempSolar (121) --- I 9.001

Via this data point the solar controller source is informed about the current temperature of the solar collector via
a bus enabled solar temperature sensor.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 33 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Domestic Hot Water Enable|1|CC_DHW_Enable<br>(105)|---|O|1.003|
|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Enable|I|CC_CH_Enable (33)|---|O|1.003|
|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|
||Central Heating Temp Set<br>point Shift Correction|1|CC_TemperatureD<br>(44)|---|O|9.002|
|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|
||Domestic Hot Water Temp<br>Set point Shift Correction|1|CC_TemperatureD_<br>DHW (**122**)|---|O|9.002|
|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|
||Temperature Solar Collector|1|CC_TempSolar (**121**)|---|I|9.001|
|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|<br>Via this data point the solar controller source is informed about the current temperature of the solar collector via<br>a bus enabled solar temperature sensor.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 19 CH_Solar Controller Sink (SOLARC si) (Channel code 0521h)

- **Name:** CH_Solar Controller Sink

- **ID:** 0521h

- **Classification:** Functional Module (Sink)

 - **General functional**

**description:**

This channel is typically realised in the central heating controller to inform on the sufficient
production of hot water by the solar collector, so as to influence the further production of hot water
for the central heating and/or the domestic hot water by the central heating controller.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Solar**
**Controller Sink**

**Domestic Hot Water**
**Enable**

Central Heating Enable
Central Heating Temp Set
point Shift Correction

Domestic Hot Water
Temperature Set point
Shift Correction

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 34 of 46

|Col1|CH Solar<br>_<br>Controller Sink|
|---|---|
|||
|||
|||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**

**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Domestic Hot Water Enable 1 CC_DHW_Enable --- I 1.003
(105)

Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot
water by the central heating system, depending on the available of sufficient solar power.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Enable I CC_CH_Enable (33) --- I 1.003

Via this data point the solar controller source channel is able to activate or deactivate the central heating,
depending on the available of sufficient solar power.

Central Heating Temp Set 1 CC_TemperatureD --- I 9.002
point Shift Correction (44)

Via this data point the solar controller source channel is able to shift/correct the current central heating
temperature set point.

Domestic Hot Water Temp 1 CC_TemperatureD_ --- I 9.002
Set point Shift Correction DHW (122)

Via this data point the solar controller source channel is able to shift/correct the current domestic hot water
temperature set point.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 35 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Domestic Hot Water Enable|1|CC_DHW_Enable<br>(105)|---|I|1.003|
|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|Via this data point the solar controller source channel is able to activate or deactivate production of domestic hot<br>water by the central heating system, depending on the available of sufficient solar power.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Enable|I|CC_CH_Enable (33)|---|I|1.003|
|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|<br>Via this data point the solar controller source channel is able to activate or deactivate the central heating,<br>depending on the available of sufficient solar power.|
||Central Heating Temp Set<br>point Shift Correction|1|CC_TemperatureD<br>(44)|---|I|9.002|
|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current central heating<br>temperature set point.|
||Domestic Hot Water Temp<br>Set point Shift Correction|1|CC_TemperatureD_<br>DHW (**122**)|---|I|9.002|
|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the solar controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 20 CH_Solar Temperature Sensor (STS) (Channel code 0522h)

- **Name:** CH_Solar Temperature Sensor

- **ID:** 0522h

- **Classification:** Functional Module (Sensor)

 - **General functional**

**description:**

This channel can be used to communicate the current solar temperature by a bus enabled solar
collector sensor.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Solar**
**Temperature**

**Sensor**

**Solar Collector Temperature**

- **Data point list:**
**Mandatory data points**

1 Temperature Solar Collector 1 CC_TempSolar (121) --- O 9.001

Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar
collector.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 36 of 46

|CH Solar<br>_<br>Temperature<br>Sensor|Col2|
|---|---|
|**CH_Solar**<br>**Temperature**<br>**Sensor**||

|1|Temperature Solar Collector|1|CC TempSolar (121)<br>_|---|O|9.001|
|---|---|---|---|---|---|---|
|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 21 CH_Solar Temperature Sink (STS si) (Channel code 0523h)

- **Name:** CH_Solar Temperature Sink

- **ID:** 0523h

- **Classification:** Functional Module (Sink)

 - **General functional**

**description:**

This channel can be used to feed the current solar temperature into a central heating controller, as
measured by a bus enabled solar collector sensor.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Solar**
**Temperature**

**Sink**

**Solar Collector**
**Temperature**

- **Data point list:**
**Mandatory data points**

1 Temperature Solar Collector 1 CC_TempSolar (121) --- I, X 9.001

Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar
collector, e.g. directly to a central heating controller.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 37 of 46

|Col1|CH Solar<br>_<br>Temperature<br>Sink|
|---|---|
|||

|1|Temperature Solar Collector|1|CC TempSolar (121)<br>_|---|I, X|9.001|
|---|---|---|---|---|---|---|
|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|<br>Via this data point a bus enabled solar temperature sensor informs about the current temperature of the solar<br>collector, e.g. directly to a central heating controller.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 22 CH_Heat Pump Source (HPUMP so) (Channel code 0524h)

- **Name:** CH_Heat Pump Source

- **ID:** 0524h

- **Classification:** Functional Module (Source)

 - **General functional**

**description:**

Depending on the production of sufficient heat by a heat pump, this channel may influence the
further production of hot water for the central heating and/or the domestic hot water by the central
heating controller.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat Pump**

**Source**

Public Utility Lock **Central Heating Enable**


Outside Temperature


Central Heating Temp Set point
Shift Correction
Domestic Hot Water Enable

Domestic Hot Water Temperature
Set point Shift Correction

|Col1|CH Heat Pump<br>_<br>Source|Col3|
|---|---|---|
||||
||||
||||
||||


Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 38 of 46


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Central Heating Enable I CC_CH_Enable (33) --- O 1.003

Via this data point the heat pump controller is able to activate or deactivate the central heating.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Public Utility Lock 1 CC_SwitchOnOff (1) --- I 1.001

Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).

Outside Temperature 1 CC_TO (36) --- I 9.001

Via this data point the pump controller sink informs on the current outside temperature, as this information is
already available in the central heating controller. This avoids having to establish an extra link with an outside
temperature sensor.

Central Heating Temp Set 1 CC_TemperatureD --- O 9.002
point Shift Correction (44)

Via this data point the heat pump source channel is able to shift/correct the current central heating temperature
set point.

Domestic Hot Water Enable 1 CC_DHW_Enable --- O 1.003
(105)

Via this data point the heat pump controller source channel is able to activate or deactivate production of
domestic hot water by the central heating system.

Domestic Hot Water Temp 1 CC_TemperatureD_ --- O 9.002
Set point Shift Correction DHW (122)

Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water
temperature set point.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 39 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Central Heating Enable|I|CC_CH_Enable (33)|---|O|1.003|
|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller is able to activate or deactivate the central heating.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Public Utility Lock|1|CC_SwitchOnOff (1)|---|I|1.001|
|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|<br>Via this data point it is possible to deactivate the heat pump (e.g. in case of a public utility lock).|
||Outside Temperature|1|CC_TO (36)|---|I|9.001|
|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|
||Central Heating Temp Set<br>point Shift Correction|1|CC_TemperatureD<br>(44)|---|O|9.002|
|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|
||Domestic Hot Water Enable|1|CC_DHW_Enable<br>(105)|---|O|1.003|
|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|
||Domestic Hot Water Temp<br>Set point Shift Correction|1|CC_TemperatureD_<br>DHW (**122**)|---|O|9.002|
|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 23 CH_Heat Pump Sink (HPUMP si) (Channel code 0525h)

- **Name:** CH_Heat Pump Sink

- **ID:** 0525h

- **Classification:** Functional Module (Sink)

 - **General functional**

**description:**

This channel is typically realised in the central heating controller to inform on the sufficient heat
production by a heat pump, so as to influence the further production of hot water for the central
heating and/or the domestic hot water by the central heating controller.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat Pump**

**Source**

**Central Heating Enable** Outside Temperature
Central Heating Temp Set
point Shift Correction

Domestic Hot Water
Enable

Domestic Hot Water
Temperature Set point
Shift Correction

- **Data point list:**

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 40 of 46

|Col1|CH Heat Pump<br>_<br>Source|Col3|
|---|---|---|
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Central Heating Enable I CC_CH_Enable (33) --- I 1.003

Via this data point the heat pump controller source is able to activate or deactivate the central heating.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Temp Set 1 CC_TemperatureD --- I 9.002
point Shift Correction (44)

Via this data point the heat pump source channel is able to shift/correct the current central heating temperature
set point.

Domestic Hot Water Enable 1 CC_DHW_Enable --- I 1.003
(105)

Via this data point the heat pump controller source channel is able to activate or deactivate production of
domestic hot water by the central heating system.

Domestic Hot Water Temp 1 CC_TemperatureD_ --- I 9.002
Set point Shift Correction DHW (122)

Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water
temperature set point.

Outside Temperature 1 CC_TO (36) --- O 9.001

Via this data point the pump controller sink informs on the current outside temperature, as this information is
already available in the central heating controller. This avoids having to establish an extra link with an outside
temperature sensor.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 41 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Central Heating Enable|I|CC_CH_Enable (33)|---|I|1.003|
|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|<br>Via this data point the heat pump controller source is able to activate or deactivate the central heating.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Temp Set<br>point Shift Correction|1|CC_TemperatureD<br>(44)|---|I|9.002|
|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|Via this data point the heat pump source channel is able to shift/correct the current central heating temperature<br>set point.|
||Domestic Hot Water Enable|1|CC_DHW_Enable<br>(105)|---|I|1.003|
|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|Via this data point the heat pump controller source channel is able to activate or deactivate production of<br>domestic hot water by the central heating system.|
||Domestic Hot Water Temp<br>Set point Shift Correction|1|CC_TemperatureD_<br>DHW (**122**)|---|I|9.002|
|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|Via this data point the heat pump controller source channel is able to shift/correct the current domestic hot water<br>temperature set point.|
||Outside Temperature|1|CC_TO (36)|---|O|9.001|
|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|<br>Via this data point the pump controller sink informs on the current outside temperature, as this information is<br>already available in the central heating controller. This avoids having to establish an extra link with an outside<br>temperature sensor.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 24 CH_Heat Meter Source (Channel code 0526h)

- **Name:** CH_Heat Meter Source

- **ID:** 0525h

- **Classification:** Functional Module (Source)

 - **General functional**

**description:**

This channel informs on heat consumption of a heating circuit, as measured by the connected heat
meter.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat Meter**

**Source**

**Heat Consumption**
Central Heating Flow
Central Heating Flow Temperature
Central Heating Return Temperature

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 42 of 46

|CH Heat Meter<br>_<br>Source|Col2|
|---|---|
|**CH_Heat Meter**<br>**Source**||
|**CH_Heat Meter**<br>**Source**||
|**CH_Heat Meter**<br>**Source**||
|**CH_Heat Meter**<br>**Source**||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Heat Consumption I CC_Heat_ --- O 13.013
Consumption (123)

Via this data point the heat meter controller informs on the consumed heat.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Flow 1 CC_Volume_Flow --- O 9.025
(124)

Via this data point the heat meter controller communicates the measured volume of the flow water of the central
heating.

Central Heating Flow 1 CC_Temperature_ --- O 9.001
Temperature Flow_Water (81)

Via this data point the heat meter controller communicates the measured central heating flow temperature.

Central Heating Return 1 CC_Temperature_ --- O 9.001
Temperature Return_Water (115)

Via this data point the heat meter controller communicates the measured central heating return temperature.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 43 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Heat Consumption|I|CC_Heat_<br>Consumption (**123**)|---|O|13.013|
|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Flow|1|CC_Volume_Flow<br>(**124**)|---|O|9.025|
|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|
||Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|O|9.001|
|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|
||Central Heating Return<br>Temperature|1|CC_Temperature_<br>Return_Water (115)|---|O|9.001|
|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

## 25 CH_Heat Meter Sink (Channel code 0527h)

- **Name:** CH_Heat Meter Sink

- **ID:** 0526h

- **Classification:** Functional Module (Sink)

 - **General functional**

**description:**

This channel is typically realised in a device wishing to display and/or further process the
information on heat consumption of a heating circuit.

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heat Meter**

**Source**

**Heat Consumption**
Central Heating Flow
Central Heating Flow
Temperature

Central Heating Return
Temperature

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 44 of 46

|Col1|CH Heat Meter<br>_<br>Source|
|---|---|
|||
|||
|||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

- **Data point list:**
**Mandatory data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

1 Heat Consumption I CC_Heat_ --- I 13.013
Consumption (123)

Via this data point the heat meter controller informs on the consumed heat.

**Optional data points**

Flags

Sub- Additional
Index Name Main CC (i/o,x,v….. DPT

unit CCs

)

Central Heating Flow 1 CC_Volume_Flow --- I 9.025
(124)

Via this data point the heat meter controller communicates the measured volume of the flow water of the central
heating.

Central Heating Flow 1 CC_Temperature_ --- I 9.001
Temperature Flow_Water (81)

Via this data point the heat meter controller communicates the measured central heating flow temperature.

Central Heating Return 1 CC_Temperature_ --- I 9.001
Temperature Return_Water (115)

Via this data point the heat meter controller communicates the measured central heating return temperature.

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 45 of 46

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
|1|Heat Consumption|I|CC_Heat_<br>Consumption (**123**)|---|I|13.013|
|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|Via this data point the heat meter controller informs on the consumed heat.|

|Index|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|DPT|
|---|---|---|---|---|---|---|
||Central Heating Flow|1|CC_Volume_Flow<br>(**124**)|---|I|9.025|
|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|Via this data point the heat meter controller communicates the measured volume of the flow water of the central<br>heating.|
||Central Heating Flow<br>Temperature|1|CC_Temperature_<br>Flow_Water (81)|---|I|9.001|
|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|<br>Via this data point the heat meter controller communicates the measured central heating flow temperature.|
||Central Heating Return<br>Temperature|1|CC_Temperature_<br>Return_Water (115)|---|I|9.001|
|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|<br>Via this data point the heat meter controller communicates the measured central heating return temperature.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN138** **Additional HVAC channels**

New defined Connection codes

**Connection code** **Based on DPT:**

Name Identifier Abbrev. Name DTP
Dec. type

Central Heating Return Temperature **115** CC_Temperature_ DPT_Temp 9.001
Return_Water

Status Power Ratio of heating Pump **116** CC_Pump_Speed_ DPT_Scaling 5.001
Ratio_Status

Central Heating Flow **117** CC_HeatFlow_ DPT_Scaling 5.001
Scaling

Mixer Position Set point **118** CC_Mixer_Setp_ratio DPT_Scaling 5.001

Set point Power Ratio of heating Pump **119** CC_Pump_Speed_ DPT_Scaling 5.001
Ratio_Setp

See revision of AN 122 **120**

Temperature Solar Collector **121** CC_TempSolar DPT_Temp 9.001

Domestic Hot Water Temperature Set **122** CC_TemperatureD_ DPT_TemperatureD 9.002
point Shift Correction DHW

Heat Consumption **123** CC_Heat_ DPT_ActiveEnergy 13.013
Consumption _kWh

Central Heating Flow **124** CC_Volume_Flow DPT_Value_Volum 9.025
e_Flow

Savedate: Filename: AN138 v05 Addional HVAC channels WD -fb WGI 20110112a.doc page 46 of 46

|Connection code|Col2|Col3|Based on DPT:|Col5|
|---|---|---|---|---|
|Name|Identifier<br>Dec.|Abbrev.|Name|DTP<br>type|
|Central Heating Return Temperature|**115**|CC_Temperature_<br>Return_Water|DPT_Temp|9.001|
|Status Power Ratio of heating Pump|**116**|<br>CC_Pump_Speed_<br>Ratio_Status|DPT_Scaling|5.001|
|Central Heating Flow|**117**|<br>CC_HeatFlow_<br>Scaling|DPT_Scaling|5.001|
|Mixer Position Set point|**118**|CC_Mixer_Setp_ratio|DPT_Scaling|5.001|
|Set point Power Ratio of heating Pump|**119**|<br>CC_Pump_Speed_<br>Ratio_Setp|<br>DPT_Scaling|5.001|
|See revision of AN 122|**120**||||
|Temperature Solar Collector|**121**|CC_TempSolar|DPT_Temp|9.001|
|Domestic Hot Water Temperature Set<br>point Shift Correction|**122**|<br>CC_TemperatureD_<br>DHW|<br>DPT_TemperatureD|9.002|
|Heat Consumption|**123**|CC_Heat_<br>Consumption|DPT_ActiveEnergy<br>_kWh|13.013|
|Central Heating Flow|**124**|CC_Volume_Flow|<br>DPT_Value_Volum<br>e_Flow|9.025|


-----

