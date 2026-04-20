# Application Descriptions

## Ventilation, Air Conditioning and Cold Water

 VAC E-Mode Channels

Summary

This document specifies the standard E-Mode Channels specified for the
VAC Application Domains.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2010.07.22  - Document creation.

              - **AN112 “E-Mode Channels for Fan Coils” integrated.**
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 7/1/4 “Technical Alarm”

[02] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[03] Chapter 7/10/2 “HVAC HMI Functional Blocks”

[04] Chapter 7/10/3 “HVAC Actuator Functional Blocks”

[05] Chapter 7/10/4 “HVAC Common Functional Blocks”

[06] Chapter 7/11/1 “Heat Production”

[07] Chapter 7/13/1 “Controller” (Terminal Unit Functional Blocks)

[08] Chapter 7/14/1 “Ventilation, Air Conditioning”

[09] Chapter 7/14/2 “Cold Water”

Filename: 07_14_11 VAC E-Mode Channels v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 21

|Version|Date|Modifications|
|---|---|---|
|1.0|2010.07.22|• <br>Document creation.<br>• <br>**AN112 “E-Mode Channels for Fan Coils”** integrated.|
|01.00.01|2013.10.29|<br>Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 KNX structure of the fan coil product ............................................................................ 4 1.2 Configuration example of a building .............................................................................. 5 1.3 Output Datapoints affected by Adjustable Channels ...................................................... 5

 2 Channel overview ................................................................................................................... 6 2.1 HMI Channel .................................................................................................................. 6 2.2 Master and Slave Channel .............................................................................................. 6 2.2.1 Introduction ......................................................................................................... 6 2.2.2 Master Fan Coil Channel .................................................................................... 6 2.2.3 Slave Channel ..................................................................................................... 6

 3 CH_FAN_COIL_HMI (Channel Code 0507h) .................................................................... 7

 4 CH_MASTER_FANCOIL_CONTROLLER (Channel Code 0508h) ............................... 8

 5 CH_SLAVE_FANCOIL_CONTROLLER (Channel Code 0509h) ................................ 16


-----

### 1 Introduction

#### 1.1 KNX structure of the fan coil product

Fan coil

HMI Channel

Slave Channel Master Channel

(adjustable channel) (adjustable channel)

**Figure 1 – Fan coil channels**

Depending on the configuration of the controller, some channels will be masked and not accessible.

   - The HMI channel is accessible inside the controller only if a user terminal is hardwired on the
controller. If the user terminal is not integrated in the controller but directly connected to KNX,
then the HMI channel will not be available in the controller.

   - As a controller can not be a slave and a master at the same time, only one of these E-Mode
channel will be available in one controller

Please refer to the examples in clause 1.2.


Fan coil

HMI Channel

Slave Channel Master Channel

(adjustable channel) (adjustable channel)


-----

#### 1.2 Configuration example of a building

HMI

Master / TU TU
sensors Master /

sensors

individual individual

T

KNX TP1 bus

T Room 1 Room 2

T KNX wall terminal

T manufacturer wall terminal T

TU Terminal Unit (fan coil) with an internal KNX controller

Used channel

**Figure 2 – Examples of possible E-Mode Channels in a building**

|Mas<br>sens|ter /<br>ors|
|---|---|


Room 3

|HMI<br>Master / TU TU HMI<br>sensors Master /<br>sensors<br>individual individual<br>Slave /<br>actuators<br>T<br>TU<br>KNX TP1 bus<br>Slave<br>HMI<br>T Room 1 Room 2<br>Master /<br>sensors<br>T KNX wall terminal<br>T manufacturer wall terminal T TU<br>TU Terminal Unit (fan coil) with an internal KNX controller<br>Master<br>Used channel Room 3|Col2|HMI|Col4|Col5|Col6|
|---|---|---|---|---|---|
|KNX TP1 bus<br>Master /<br>sensors<br>Room 1<br>TU<br>individual<br>Master /<br>sensors<br>TU<br>Slave<br>T <br>T <br>Room 2<br>TU<br>individual<br>T <br>TU<br>Master<br>Room 3<br>HMI<br>Slave /<br>actuators<br>HMI<br>Master /<br>sensors<br>HMI<br>T <br>KNX wall terminal<br>T <br>manufacturer wall terminal<br>TU<br>Terminal Unit (fan coil) with an internal KNX controller<br>Used channel|ter /<br>ors<br>Room 1<br>TU<br>individual<br>Mas<br>sen<br>T <br>||||TU<br>Slave<br> <br>T <br>TU<br>Master<br>Room 3<br>HMI<br>Slave /<br>actuators<br>HMI<br>Master /<br>sensors|
|KNX TP1 bus<br>Master /<br>sensors<br>Room 1<br>TU<br>individual<br>Master /<br>sensors<br>TU<br>Slave<br>T <br>T <br>Room 2<br>TU<br>individual<br>T <br>TU<br>Master<br>Room 3<br>HMI<br>Slave /<br>actuators<br>HMI<br>Master /<br>sensors<br>HMI<br>T <br>KNX wall terminal<br>T <br>manufacturer wall terminal<br>TU<br>Terminal Unit (fan coil) with an internal KNX controller<br>Used channel|ter /<br>ors<br>Room 1<br>TU<br>individual<br>Mas<br>sen<br>T <br>|Mas<br>sen|ter /<br>sors|ter /<br>sors|ter /<br>sors|


#### 1.3 Output Datapoints affected by Adjustable Channels
The E-Mode Channels below make use of Adjustable Channels. However, in contradiction to other
E-Mode Channels, in these E-Mode Channels, also the Connection Codes of Output Datapoints shall
change according the AJS parameter value.


-----

### 2 Channel overview

#### 2.1 HMI Channel
This E-Mode Channel shall allow to a final user to set his fan coil

   - with a KNX terminal, or
   - with an internal manufacturer specific terminal (hardwired terminal).

#### 2.2 Master and Slave Channel

##### 2.2.1 Introduction
One controller of a group of related controllers can be programmed to act as master of this group. The rest
of the group is then programmed to be slaves.

The relationship between master and slaves can be more or less intensive, depending on the current
application. Therefore several possibilities are foreseen in the controllers.

##### 2.2.2 Master Fan Coil Channel
This Master Fan Coil Channel shall be used for any stand-alone or master configuration on a fan coil.
Depending on these two types, we used two different operation modes.

1. Stand Alone

The fan coil shall work alone, independently of any other fan coil

EXAMPLE One fan coil in an individual room.

2. Master

The fan coil shall act as a controller and shall communicate with and control one or more slave
fan coils so that a same group can work together.

##### 2.2.3 Slave Channel
Depending on the operation mode, a Slave Fan Coil Channel shall use its own Inputs or the ones from the
master. It shall be able to operate in three different operation modes.

1. Slave by hot/cold authorization (HCA)
This shall be the loosest coupling from a Slave Fan Coil Channel to its Master Fan Channel.
The Master Fan Coil Channel shall only control whether the Slave Fan Coil Channel shall be in
heating mode or cooling mode. The rest of the fan coil functionality is controlled independently
by the Slave Fan Coil Channel.

2. Slave by internal temperature (IT)
This shall be a tighter coupling from a Save Fan Coil Controller to a Master Fan Coil
Controller.
The Master Fan Coil Controller shall give the current temperature and the Slave Fan Coil
Controllers shall control their outputs accordingly.

3. Slave by final commands (FC)

This shall be the tightest coupling from a Slave Fan Coil Controller to a Master Fan Coil
Controller.
The Master Fan Coil Controller shall directly control the outputs of the Slave Fan Coil
Controller, which shall not autonomously conclude on any action.


-----

### 3 CH_FAN_COIL_HMI (Channel Code 0507h)

- **Name:** CH_FAN_COIL_HMI

- **ID:** 0507h

- **Classification:** heating actuator

- **Functional Block:**

      - 321 - Room Temperature Sensor (RTS) (See [02].)

      - 384 - User HVAC Room Settings (UHRS) (See [03].)

      - 393 – User Fan Speed Setting (UFS) (See [03].)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_FAN_COIL_HMI**


TR 321.TempRoom
TRSUO 384.TempRoomSetpUserOffset
CPB 384.ComfortPushButton
FSU 393.FanSpeedUser
FM 393.FanManual

- **Datapoint list:**

FB / Sub- Additional Flags
Index Name Main CC
Datapoint ID unit CCs (i/o,x,v…..)

1 321.TR TempRoom 1 CC_Room_Temperature --- OL
(37)

2 384.TRSUO TempRoomSetpUserOffs 1 CC_TemperatureD (44) --- O

et

3 384.CPB ComfortPushButton 1 CC_Trigger (45) --- O

4 393.FSU FanSpeedUser 1 CC_Fan_Speed (46) --- O

5 393.FM FanManual 1 CC_Enable_Fan (47) --- O

|CH FAN COIL HMI<br>_ _ _|TR|
|---|---|
|**CH_FAN_COIL_HMI**|TRSUO|
|**CH_FAN_COIL_HMI**|CPB|
|**CH_FAN_COIL_HMI**|FSU|
|**CH_FAN_COIL_HMI**|FM|
|**CH_FAN_COIL_HMI**||

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|321.TR|TempRoom|1|CC_Room_Temperature<br>(37)|---|OL|
|2|384.TRSUO|TempRoomSetpUserOffs<br>et|1|CC_TemperatureD (44)|---|O|
|3|384.CPB|ComfortPushButton|1|CC_Trigger (45)|---|O|
|4|393.FSU|FanSpeedUser|1|<br>CC_Fan_Speed (46)|---|O|
|5|393.FM|FanManual|1|<br>CC_Enable_Fan (47)|---|O|


-----

### 4 CH_MASTER_FANCOIL_CONTROLLER (Channel Code 0508h)

- **Name:** CH_MASTER_FAN_COIL_CONTROLLER

- **ID:** 0508h

- **Classification:** heating actuator

- **Functional Block:**

      - 324 - Flow Water Temperature Sensor (FWTS) (See [02].)

      - 342 - Water Change Over Status (WCOS) (See [02].)

      - 343 - Window switch (WOS) (See [02].)

      - 345 - Presence detector (PRD) (See [02].)

      - 104 - Programme to HVAC Mode conversion (PMC) (See [05].)

      - 323 - Return Air Temperature Sensor (RNATS) (See [02].)

      - 328 - Discharge Air Temperature Sensor (DATS) (See [02].)

      - 100 - Room SetPoint Manager HVAC – Mode Driven (RSMHD) (See [05].)

      - 102 - SetPoint Manager Air Quality (SMAQ) (See [05].)

      - 103 - Setpoint Manager Relative Humidity (SMRH) (See [05].)

      - 115 - HVAC Optimiser (HVAC OPT) (See [05].)

      - 258 -Fan Coil Control (Basic Part and Additions for Air Quality) (FCC) (See [07].)

      - 240 - Air Handling Unit Controller (AHUC) (See [08].)

      - 1002 - Alarm Source (ALSrc) (See [01].)

      - 369 - Electrical Heating Element Actuator (EHEA) (See [04].)

      - 352 - HVAC Valve Actuator (HVA) (See [04].)

      - 372 - Fan Speed Actuator (FSA) (See [04].)

      - 362 - Air Damper Actuator (ADA) (See [04].)

      - 199 – Cold Water Producer Manager (CPM) (See [09].)

      - 136 – Heat Producer Manager (HPM) (See [06].)


-----

 - **Graphical representation**

Legend:

Info for a controller or a BMS

Remote control which come from some KNX equipments or BMS

Slave or actuators (M/S management)

**_Inputs_** **_Outputs_**

**CH_MASTER_FAN_**

**COIL_CTRL**

104.BuildingMode
104.OccMode
258.HVACModeOptim 258.EnergyDemAC
258.ContrMode 258.EnergyDemAH
258.EnableHeat 258.EnergyDemAir
258.EnableCool 258.ActPosSetpHeatStageA
258.ChangeOverStatusWater 258.ActPosSetpHeatStageB
258.TempOutside 258.ActPosSetpCoolStageA
258.FanSpeedUser 258.FanSpeedSetp
258.FanManual 258.ActPosSetpFreshAir
258.TempRoom
258.AQRoom
240.HumRelRoom
100.HVACMode 100.HVACModeEff
100.TempRoomSetpSetHeat 100.TempRoomSetpSetHeatEff
100.TempRoomSetpSetCool 100.TempRoomSetpSetCoolEff
100.TempRoomSetpSetHeatShift
100.TempRoomSetpSetCoolShift
100.TempRoomSetpUserAbs
100.TempRoomSetpUserOffset
100.ComfortPushButton
100.HVACModeUser
100.WindowStatus
100.PresenceStatus
102.AQSetpUser 102.AQSetpEff
103.HumRelSetpUser 103.HumRelSetpDehumEff
323.TempReturnAir
328.TempDischargeAir
324.TempFlowWater
345.PresenceStatus
343.WindowStatus
343.WindowSwitch 343.WindowSwitch
LA.OnOff LA.InfoOnOff
S.OnOff

|Col1|CH MASTER FAN<br>_ _ _<br>COIL CTRL<br>_|Col3|
|---|---|---|
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||


-----

352.ActPosHeatStageA
352.ActPosCoolStageA
369.ElectricalPowerLimitation 369.ActPosHeatStageB
372.FanSpeed
362.ActPosFreshAir
1002.EnableAlarmInfo 1002.InAlarm
1002.EnableAlarmText 1002.AlarmInfo
1002.AlarmAck 1002.AlarmText
199.PRelChiller CoilConsumptionAC
136.PRelBurner CoilConsumptionAH
ElectricConsumption
FanConsumption
InfoEnergyDemAC
InfoEnergyDemAH
InfoEnergyDemAir
InfoEnableHeat
InfoEnableCool

**_Parameters_**
Adjustable select for Master / Slave AJS

  - **Description**

**Explanations about some specifics connections codes**

    - Coil consumption AC: This information shall be an estimation of the total thermal
consumption of the cooling coil. This value (in kWh), sent to a
BMS, will be very useful for a fitter or a manager of a building.

    - Coil consumption AH: This information shall be an estimation of the total thermal
consumption of the heating coil. This value (in kWh), sent to a
BMS, will be very useful for a fitter or a manager of a building.

    - Electric consumption: This information shall be an estimation of the total electric
consumption of the electric heater. This value (in kWh), sent to a
BMS, will be very useful for a fitter or a manager of a building.

    - Fan consumption: This information shall be an estimation of the total electric
consumption of the fan motor. This value (in kWh), sent to a
BMS, will be very useful for a fitter or a manager of a building.

    - PRelProdCool: This shall be information from the BMS or the chiller to indicate
the relative power of the cold water production. This value will be
taken into account by the fan coil controller to calculate its coil
consumption AC.

    - PRelProdHeat: This shall be information from the BMS or the boiler to indicate
the relative power of the hot water production. This value will be
take into account by the fan coil controller to calculate its coil
consumption AH.

|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>Parameters<br>aster / Slave AJS|Col2|Col3|
|---|---|---|
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||
|rLimitation<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>**_Parameters_** <br>   aster / Slave<br>AJS|||


-----

**Specific information for Master / Slave by final commands:**

A slave by final commands (slave by FC) don’t have any sensor, the master says exactly what needs
to be done. For this reason a slave by FC can’t calculate its own energy demand. That’s why the
Master has to send to slaves by FC their energy demand value by using InfoEnergyDemAC,
InfoEnergyDemAH and InfoEnergyDemAir.

**Specific information for Master / Slave by hot cold authorisation:**

Master / Slave by hot cold authorisation (slave by HCA) is the loosest Master / Slave connection.

In this configuration, the slave has is own sensors, and it is autonomous facing the Master.

To avoid that a fan coil is cooling when another one is heating (or vice versa), the master has to say
whether cooling or heating is allowed by using Info Enable Heat and Info Enable Cool.

- **Datapoint list:**

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additio-<br>nal CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|104.BM|BuidingMode|1|CC_Building_Mode (62)|---|I|
|2|104.OM|OccMode|1|<br>CC_Occupancy_Mode (63)|---|I|
|3|100.HM|HVACMode|1|<br>CC_HVAC_Mode (31)|---|I|
|4|258.HMO|HVACModeOptim|1|<br>CC_HVAC_Mode_Optim (93)|<br>---|I|
|5|258.CM|ContrMode|1|<br>CC_Control_Mode (53)|<br>---|I|
|6|258.EH|EnableHeat|1|<br>CC_Heating_Enabled (33)|---|I|
|7|258.EC|EnableCool|1|<br>CC_Cooling_Enabled (52)|---|I|
|8|258.COSW|ChangeOverStatusWater|1|<br>CC_HeatCool (41)|---|I|
|9|258.TO|TempOutside|1|<br>CC_Temperature_Outside (36)|<br>---|I|
|10|100.TRSSH|TempRoomSetpSetHeat|1|<br>CC_Temperature_SetpSet_He<br>at (48)|<br>---|I|
|11|100.TRSSC|TempRoomSetpSetCool|1|CC_Temperature_SetpSet_Co<br>ol (49)|---|I|
|12|100.TRSSHS|TempRoomSetpSetHeatS<br>hift|1|CC_TemperatureD_SetpSet_H<br>eat (50)|---|I|
|13|100.TRSSCS|TempRoomSetpSetCool<br>Shift|1|CC_TemperatureD_SetpSet_C<br>ool (51)|---|I|
|14|100.TRSUA|TempRoomSetpUserAbs|1|CC_Temperature_Setpoint<br>(43)|---|I|
|15|100.TRSUO|TempRoomSetpUserOffs<br>et|1|CC_TemperatureD (44)|---|I|
|16|100.CPB|ComfortPushButton|1|CC_Trigger (45)|---|I|
|17|100.HMU|HVACModeUser|1|<br>CC_HVAC_Mode_User (61)|---|I|
|18|258.FSU|FanSpeedUser|1|<br>CC_Fan_Speed (46)|---|I|
|19|258.FM|FanManual|1|<br>CC_Enable_Fan (47)|---|I|
|20|102.AQSU|AQSetpUser|1|<br>CC_AQ_Setpoint (56)|---|I|
|21|103.HRSU|HumRelSetpUser|1|<br>CC_HumRel_Setpoint (58)|---|I|


-----

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additio-<br>nal CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|22|258.TR|TempRoom|1|CC_Room_Temperature (37)|---|I|
|23|258.AQR|AQRoom|1|<br>CC_AQ_Room (55)|---|I|
|24|240.HRR|HumRelRoom|1|<br>CC_HumRel_Room (57)|---|I|
|25|100.PS|PresenceStatus|1|<br>CC_Presence_Status (54)|---|I|
|26|343.WSw|WindowSwitch|1|<br>CC_Window_Switch (84)|---|I|
|27|100.Wst|WindowStatus|1|<br>CC_Window_Status (30)|---|I|
|28|LA.OO|OnOff|1|<br>CC_Switch_OnOff (1)|---|I|
|29|1002.EAI|EnableAlarmInfo|1|<br>CC_Enable_AlarmInfo (59)|---|I|
|30|1002.EAT|EnableAlarmText|1|<br>CC_Enable_AlarmText (94)|---|I|
|31|1002.AA|AlarmAck|1|<br>CC_AlarmAck (60)|---|I|
|32|369.EPL|ElectricalPowerlimitation|1|<br>CC_Elect_Power_Limit (64)|---|I|
|33|199.PRC|PRelChiller|1|<br>CC_PowerRel_Production_Co<br>ol (77)|---|I|
|34|136.PRB|PRelBurner|1|CC_PowerRel_Production_He<br>at (78)|---|I|
|35|258.EDAC|EnergyDemAC|1|CC_EnergyDemAC (95)|---|O|
|36|258.EDAH|EnergyDemAH|1|<br>CC_EnergyDemAH (96)|---|O|
|37|258.EDA|EnergyDemAir|1|<br>CC_EnergyDemAir (97)|---|O|
|38|352.APHSA|ActPosHeatStageA|1|<br>CC_Heating_ValueA_Status<br>(68)|---|OV|
|39|369.APHSB|ActPosHeatStageB|1|CC_Heating_ValueB_Status<br>(69)|---|OV|
|40|352.APCSA|ActPosCoolStageA|1|CC_Cooling_ValueA_Status<br>(70)|---|OV|
|41|372.FS|FanSpeed|1|CC_Fan_Speed_Status (72)|---|OVLA|
|42|362.APFA|ActPosFreshAir|1|<br>CC_Fresh_Air_Status (71)|---|OV|
|43|352.CCAC|CoilConsumptionAC|1|<br>CC_Coil_Consumption_AC<br>(75)|---|OV|
|44|352.CCAH|CoilConsumptionAH|1|CC_CoilConsumptionAH (76)|---|OV|
|45|369.EC|ElectricConsumption|1|<br>CC_ElectricConsumption (73)|---|OV|
|46|372.FC|FanConsumption|1|<br>CC_Fan_Consumption (74)|---|OV|
|47|100.HME|HVACModeEff|1|<br>CC_HVAC_Mode_Status (39)|---|OV|
|48|100.TRSSHE|TempRoomSetpSetHeat<br>Eff|1|<br>CC_Temp_SetpSet_Heat_Stat<br>us (82)|---|OV|
|49|100.TRSSCE|TempRoomSeptSetCool<br>Eff|1|CC_Temp_SetpSet_Cool_Stat<br>us (83)|---|OV|
|50|102.AQSE|AQSetpEff|1|CC_Air_Quality_Status (85)|---|OV|


-----

72 InfoEnableCool 1 CC_Enable_Info_Cool (92) --- O

 - **Parameter table**

Index Identifier Name Recommended default Value Bit-Offset

1 AJS Adjustable selection for Master / Slave 0 (Stand alone)

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additio-<br>nal CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|51|103.HRSDE|HumRelSetpDehumEff|1|CC_HumRelDehum_Status<br>(86)|---|OV|
|52|323.TRA|TempReturnAir|1|CC_Temperature_Retour_Air<br>(79)|---|OV|
|53|328.TDA|TempDischargeAir|1|CC_Temperature_Discharge_<br>Air (80)|---|OV|
|54|324.TFW|TempFlowWater|1|CC_Temperature_Flow_Water<br>(81)|<br>---|OV|
|55|345.PS|PresenceStatus|1|CC_Presence_Status (54)|---|OV|
|56|343.WSw|WindowSwitch|1|<br>CC_Window_Switch (84)|---|O|
|57|343.WSt|WindowStatus|1|<br>CC_Window_Status (30)|---|OV|
|58|LA / IOO|InfoOnOff|1|<br>CC_Switch_OnOff_Status (2)|---|O|
|59|S / OO|OnOff|1|<br>CC_Switch_OnOff (1)|---|O|
|60|1002.IA|InAlarm|1|<br>CC_Alarm (67)|---|OV|
|61|1002.AI|AlarmInfo|1|<br>CC_AlarmInfo (65)|---|OV|
|62|1002.AT|AlarmText|1|<br>CC_AlarmText (66)|---|OV|
|63||InfoEnergyDemAC|1|<br>CC_EnergyDemAC_Status<br>(98)|---|OV|
|64||InfoEnergyDemAH|1|CC_EnergyDemAH_Status<br>(99)|---|OV|
|65||InfoEnergyDemAir|1|CC_EnergyDemAir_Status<br>(100)|---|OV|
|66|258.APSHSA|ActPosSetpHeatStageA|1|CC_Heating_ValueA (35)|---|OV|
|67|258.APSHSB|ActPosSetpHeatStageB|1|<br>CC_Heating_ValueB (87)|---|OV|
|68|258.APSCSA|ActPosSetpCoolStageA|1|<br>CC_Cooling_ValueA (88)|---|OV|
|69|258.FSS|FanSpeedSetp|1|<br>CC_Fan_Speed_Setpoint (90)|---|OV|
|70|258.APSFA|ActPosSetpFreshAir|1|<br>CC_Fresh_Air_Setpoint (89)|---|OV|
|71||InfoEnableHeat|1|<br>CC_Enable_Info_Heat (91)|---|O|
|72||InfoEnableCool|1|<br>CC_Enable_Info_Cool (92)|---|O|

|Index I|dentifier|Name|Recommended default Value|Bit-Offset|
|---|---|---|---|---|
|1 <br>|AJS|Adjustable selection for Master / Slave|0 (Stand alone)||


-----

- **Adjustable table:**

|Col1|Col2|Selection and Parameter Value|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||**Stand**<br>**Alone**|**Master**|**Slave**<br>**by HCA**|**Slave**<br>**by IT**|**Slave**<br>**by FC**|
|**Datapoint Nr.**||**0 **|**1 **|**2 **|**3 **|**4 **|
|Datapoint 1|Input 1octet|BM|BM|-|-|-|
|Datapoint 2|Input 1 octet|OM|OM|-|-|-|
|Datapoint 3|Input 1 octet|HM|HM|-|-|-|
|Datapoint 4|Input 1octet|HMO|HMO|-|-|-|
|Datapoint 5|Input 1octet|CM|CM|-|-|-|
|Datapoint 6|Input 1 bit|EH|EH|-|-|-|
|Datapoint 7|Input 1 bit|EC|EC|-|-|-|
|Datapoint 8|Input 1bit|COSW|COSW|-|-|-|
|Datapoint 9|Input 2 octets|TO|TO|-|-|-|
|Datapoint 10|Input 6 octets|TRSSH|TRSSH|-|-|-|
|Datapoint 11|Input 6 octets|TRSSC|TRSSC|-|-|-|
|Datapoint 12|Input 6 octets|TRSSHS|TRSSHS|-|-|-|
|Datapoint 13|Input 6 octets|TRSSCS|TRSSCS|-|-|-|
|Datapoint 14|Input 2octets|TRSUA|TRSUA|-|-|-|
|Datapoint 15|Input 2 octets|TRSUO|TRSUO|-|-|-|
|Datapoint 16|Input 1 bit|CPB|CPB|-|-|-|
|Datapoint 17|Input 1octet|HMU|HMU|-|-|-|
|Datapoint 18|Input 1 octet|FSU|FSU|-|-|-|
|Datapoint 19|Input 1 bit|FM|FM|-|-|-|
|Datapoint 20|Input 2octets|AQSU|AQSU|-|-|-|
|Datapoint 21|Input 2 octets|HRSU|HRSU|-|-|-|
|Datapoint 22|Input 2 octets|TR|TR|-|-|-|
|Datapoint 23|Input 2octets|AQR|AQR|-|-|-|
|Datapoint 24|Input 2 octets|HRR|HRR|-|-|-|
|Datapoint 25|Input 1 bit|PS|PS|-|-|-|
|Datapoint 26|Input 1bit|WSw|WSw|-|-|-|
|Datapoint 27|Input 1bit|WSt|WSt|-|-|-|
|Datapoint 28|Input 1 bit|OO|OO|-|-|-|
|Datapoint 29|Input 1 bit|EAI|EAI|-|-|-|
|Datapoint 30|Input 1bit|EAT|EAT|-|-|-|
|Datapoint 31|Input 1 bit|AA|AA|-|-|-|
|Datapoint 32|Input 1 octet|EPL|EPL|-|-|-|
|Datapoint 33|Input 1octet|PRC|PRC|-|-|-|
|Datapoint 34|Input 1 octet|PRB|PRB|-|-|-|
|Datapoint 35|Output 1 octet|EDAC|EDAC|-|-|-|
|Datapoint 36|Output 1octet|EDAH|EDAH|-|-|-|
|Datapoint 37|Output 1 octet|EDA|EDA|-|-|-|
|Datapoint 38|Output 1 octet|APHSA|APHSA|-|-|-|
|Datapoint 39|Output 1octet|APHSB|APHSB|-|-|-|
|Datapoint 40|Output 1 octet|APCSA|APCSA|-|-|-|
|Datapoint 41|Output 1 octet|FS|FS|-|-|-|
|Datapoint 42|Output 1octet|APFA|APFA|-|-|-|
|Datapoint 43|Output 4 octets|CCAC|CCAC|-|-|-|
|Datapoint 44|Output 4 octets|CCAH|CCAH|-|-|-|
|Datapoint 45|Output 4octets|EC|EC|-|-|-|
|Datapoint 46|Output 4octets|FC|FC|-|-|-|
|Datapoint 47|Output 1 octet|HME|HME|-|-|-|
|Datapoint 48|Output 6 octets|TRSSHE|TRSSHE|-|-|-|


-----

Datapoint 49 Output 6 octets TRSSCE TRSSCE - - Datapoint 50 Output 2 octets AQSE AQSE - - Datapoint 51 Output 2 octets HRSDE HRSDE - - Datapoint 52 Output 2 octets TRA TRA - - Datapoint 53 Output 2 octets TDA TDA - - Datapoint 54 Output 2 octets TFW TFW - - Datapoint 55 Output 1 bit PS PS - - Datapoint 56 Output 1 bit WSw WSw - - Datapoint 57 Output 1 bit WSt WSt - - Datapoint 58 Output 1 bit IOO IOO - - Datapoint 59 Output 1 bit OO OO - - Datapoint 60 Output 1 bit IA IA - - Datapoint 61 Output 6 octets AI AI - - Datapoint 62 Output 14 octets AT AT - - Datapoint 63 Output 1 octet - IEDAC - - Datapoint 64 Output 1 octet - IEDAH - - Datapoint 65 Output 1 octet - IEDA - - Datapoint 66 Output 1 octet - APSHSA - - Datapoint 67 Output 1 octet - APSHSB - - Datapoint 68 Output 1 octet - APSCSA - - Datapoint 69 Output 1 octet - FSS - - Datapoint 70 Output 1 octet - APSFA - - Datapoint 71 Output 1 bit - IEH - - Datapoint 72 Output 1 bit - IEC - - 
|Col1|Col2|Selection and Parameter Value|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||**Stand**<br>**Alone**|**Master**|**Slave**<br>**by HCA**|**Slave**<br>**by IT**|**Slave**<br>**by FC**|
|**Datapoint Nr.**||**0 **|**1 **|**2 **|**3 **|**4 **|
|Datapoint 49|Output 6 octets|TRSSCE|TRSSCE|-|-|-|
|Datapoint 50|Output 2octets|AQSE|AQSE|-|-|-|
|Datapoint 51|Output 2 octets|HRSDE|HRSDE|-|-|-|
|Datapoint 52|Output 2 octets|TRA|TRA|-|-|-|
|Datapoint 53|Output 2octets|TDA|TDA|-|-|-|
|Datapoint 54|Output 2 octets|TFW|TFW|-|-|-|
|Datapoint 55|Output 1 bit|PS|PS|-|-|-|
|Datapoint 56|Output 1 bit|WSw|WSw|-|-|-|
|Datapoint 57|Output 1bit|WSt|WSt|-|-|-|
|Datapoint 58|Output 1 bit|IOO|IOO|-|-|-|
|Datapoint 59|Output 1 bit|OO|OO|-|-|-|
|Datapoint 60|Output 1bit|IA|IA|-|-|-|
|Datapoint 61|Output 6 octets|AI|AI|-|-|-|
|Datapoint 62|Output 14 octets|AT|AT|-|-|-|
|Datapoint 63|Output 1octet|-|IEDAC|-|-|-|
|Datapoint 64|Output 1 octet|-|IEDAH|-|-|-|
|Datapoint 65|Output 1 octet|-|IEDA|-|-|-|
|Datapoint 66|Output 1octet|-|APSHSA|-|-|-|
|Datapoint 67|Output 1 octet|-|APSHSB|-|-|-|
|Datapoint 68|Output 1 octet|-|APSCSA|-|-|-|
|Datapoint 69|Output 1octet|-|FSS|-|-|-|
|Datapoint 70|Output 1 octet|-|APSFA|-|-|-|
|Datapoint 71|Output 1 bit|-|IEH|-|-|-|
|Datapoint 72|Output 1 bit|-|IEC|-|-|-|


-----

### 5 CH_SLAVE_FANCOIL_CONTROLLER (Channel Code 0509h)

- **Name:** CH_SLAVE_FANCOIL_CONTROLLER

- **ID:** 509h

- **Classification:** heating actuator

- **Functional Block:**

      - 324 - Flow Water Temperature Sensor (FWTS) (See [02].)

      - 342 - Water Change Over Status (WCOS) (See [02].)

      - 343 - Window switch (WOS) (See [02].)

      - 323 - Return Air Temperature Sensor (RNATS) (See [02].)

      - 328 - Discharge Air Temperature Sensor (DATS) (See [02].)

      - 258 - Fan Coil Control (Basic Part and Additions for Air Quality) (FCC) (See [07].)

      - 240 - Air Handling Unit Controller (AHUC) (See [08].)

      - 1002 - Alarm Source (ALSrc) (See [01].)

      - 369 - Electrical Heating Element Actuator (EHEA) (See [04].)

      - 352 - HVAC Valve Actuator (HVA) (See [04].)

      - 372 - Fan Speed Actuator (FSA) (See [04].)

      - 362 - Air Damper Actuator (ADA) (See [04].)

      - 199 – Cold Water Producer Manager (CPM) (See [09].)

      - 136 – Heat Producer Manager (HPM) (See [06].)

- **Graphical representation**

Legend:

Info for a controller or a BMS

Remote control which come from some KNX equipments or BMS

Slave or actuators (M/S management)

**_Inputs_** **_Outputs_**

**CH_SLAVE_FAN_-**

**COIL_CTRL**
258.HVACModeEff 258.EnergyDemAC
258.HVACModeOptim 258.EnergyDemAH
258.ContrMode 258.EnergyDemAir
258.EnableHeat
258.EnableCool
258.ChangeOverStatusWater
258.TempOutside
258.TempRoomSetpSetHeatEff
258.TempRoomSetpSetCoolEff
258.FanSpeedUser
258.FanManual
258.AQSetpEff

|Col1|CH SLAVE FAN -<br>_ _ _<br>COIL CTRL<br>_|Col3|
|---|---|---|
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||
||||


-----

258.TempRoom
258.TempReturnAir
258.AQRoom
240.HumRelSetpDehumEff
240.HumRelRoom
352.ActPosSetpHeatStageA 352.ActPosHeatStageA
352.ActPosSetpCoolStageA 352.ActPosCoolStageA
369.ActPosSetpHeatStageB 369.ActPosHeatStageB
369.ElectricalPowerLimitation
372.FanSpeedSetp 372.FanSpeed
362.ActPosSetpFreshAir 362.ActPosFreshAir
323.TempReturnAir
328.TempDischargeAir
342.TempFlowWater
324.TempFlowWater
343.WindowSwitch 343.WindowSwitch
LA.OnOff LA.InfoOnOff
S.OnOff
1002.EnableAlarmInfo 1002.InAlarm
1002.EnableAlarmText 1002.AlarmInfo
1002.AlarmAck 1002.AlarmText
199.PRelChiller CoilConsumption AC
136.PRelBurner CoilConsumptionAH
ElectricConsumption
FanConsumption
InfoEnergyDemAC
InfoEnergyDemAH
InfoEnergyDemAir
InfoEnableHeat
InfoEnableCool

**_Parameters_**
Adjustable select for Master / Slave AJS

- **Datapoint list:**

FB / Sub- Additional Flags
Index Name Main CC
Datapoint ID unit CCs (i/o,x,v…..)

|TempRoom<br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck<br>PRelChiller<br>PRelBurner<br>rgyDemAC<br>rgyDemAH<br>rgyDemAir<br>EnableHeat<br>EnableCool<br>Parameters<br>aster / Slave AJS|Col2|Col3|
|---|---|---|
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||
|TempRoom <br>pReturnAir<br>8.AQRoom<br>pDehumEff<br>mRelRoom<br>HeatStageA<br>CoolStageA<br>HeatStageB<br>rLimitation<br>nSpeedSetp<br>etpFreshAir<br> <br>FlowWater<br>dowSwitch<br>LA.OnOff<br>eAlarmInfo<br>eAlarmText<br>2.AlarmAck <br>PRelChiller<br>PRelBurner<br> <br> <br> <br>rgyDemAC<br> <br>rgyDemAH<br> <br>rgyDemAir<br> <br>EnableHeat<br> <br>EnableCool<br> <br>**_Parameters_** <br>   aster / Slave <br>AJS|<br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>||

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|258.HME|HVACModeEff|1|CC_HVAC_Mode_Status (39)|**---**|I|
|2|258.HMO|HVACModeOptim|1|<br>CC_HVAC_Mode_Optim (93)|<br>**---**|I|
|3|258.CM|ContrMode|1|<br>CC_Control_Mode (53)|<br>**---**|I|
|4|258.EH|EnableHeat|1|<br>CC_Heating_Enabled (33)|**---**|I|


-----

Flags
(i/o,x,v…..)

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|5|258.EC|EnableCool|1|CC_Cooling_Enabled (52)|**---**|I|
|6|258.COSW|ChangeOverStatusWater|1|<br>CC_HeatCool (41)|**---**|I|
|7|258.TO|TempOutside|1|<br>CC_Temperature_Outside (36)|<br>**---**|I|
|8|258.TRSSHE|TempRoomSetpSetHeatE<br>ff|1|<br>CC_Temp_SetpSet_Heat_-<br>Status (82)|<br>**---**|I|
|9|258.TRSSCE|TempRoomSeptSetCoolE<br>ff|1|CC_Temp_SetpSet_Cool_-<br>Status (83)|**---**|I|
|10|258.FSU|FanSpeedUser|1|CC_Fan_Speed (46)|**---**|I|
|11|258.FM|FanManual|1|<br>CC_Enable_Fan (47)|**---**|I|
|12|258.AQSE|AQSetpEff|1|<br>CC_Air_Quality_Status (85)|**---**|I|
|13|240.HRSDE|HumRelSetpDehumEff|1|<br>CC_HumRelDehum_Status<br>(86)|**---**|I|
|14|258.TR|TempRoom|1|CC_Room_Temperature (37)|**---**|I|
|15|258.TRA|TempReturnAir|1|<br>CC_Temperature_Return_Air<br>(79)|**---**|I|
|16|342.TFW|TempFlowWater|1|CC_Temperature_Flow_Water<br>(81)|**---**|I|
|17|258.AQR|AQRoom|1|CC_AQ_Room (55)|**---**|I|
|18|240.HRR|HumRelRoom|1|<br>CC_HumRel_Room (57)|**---**|I|
|19|LA.OO|OnOff|1|<br>CC_Switch_OnOff (1)|**---**|I|
|20|1002.EAI|EnableAlarmInfo|1|<br>CC_Enable_AlarmInfo (59)|**---**|I|
|21|1002.EAT|EnableAlarmText|1|<br>CC_Enable_AlarmText (94)|**---**|I|
|22|1002.AA|AlarmAck|1|<br>CC_AlarmAck (60)|**---**|I|
|23|369.EPL|ElectricalPowerlimitation|1|<br>CC_Elect_power_Limit (64)|**---**|I|
|24|199.PRC|PRelChiller|1|<br>CC_PowerRel_Production_-<br>Cool (77)|**---**|I|
|25|136.PRB|PRelBurner|1|CC_PowerRel_Production_-<br>Heat (78)|**---**|I|
|26||InfoEnergyDemAC|1|CC_EnergyDemAC_Status<br>(98)|**---**|I|
|27||InfoEnergyDemAH|1|CC_EnergyDemAH_Status<br>(99)|**---**|I|
|28||InfoEnergyDemAir|1|CC_EnergyDemAir_Status<br>(100)|**---**|I|
|29|352.APSHSA|ActPosSetpHeatStageA|1|CC_Heating_ValueA (35)|**---**|I|
|30|369.APHSB|ActPosSetpHeatStageB|1|<br>CC_Heating_ValueB (87)|**---**|I|
|31|352.APSCSA|ActPosSetpCoolStageA|1|<br>CC_Cooling_ValueA (88)|**---**|I|
|32|372.FSS|FanSpeedSetp|1|<br>CC_Fan_Speed_Setpoint (90)|**---**|I|


-----

FB / Sub- Additional Flags
Index Name Main CC
Datapoint ID unit CCs (i/o,x,v…..)

33 362.APSFA ActPosSetpFreshAir 1 CC_Fresh_Air_Setpoint (89) **---** I

34 InfoEnableHeat 1 CC_Enable_Info_Heat (91) **---** I

35 InfoEnableCool 1 CC_Enable_Info_Cool (92) **---** I

36 343.WSw WindowSwitch 1 CC_Window_Switch (84) **---** I

37 258.EDAC EnergyDemAC 1 CC_EnergyDemAC (95) **---** O

38 258.EDAH EnergyDemAH 1 CC_EnergyDemAH (96) **---** O

39 258.EDA EnergyDemAir 1 CC_EnergyDemAir (97) **---** O

40 352.APHSA ActposHeatStageA 1 CC_Heating_ValueA_Status **---** OV
(68)

41 369.APHSB ActposHeatStageB 1 CC_Heating_ValueB_Status **---** OV
(69)

42 352.APCSA ActposCoolStageA 1 CC_Cooling_ValueA_Status **---** OV
(70)

43 372.FS FanSpeed 1 CC_Fan_Speed_Status (72) **---** OVLA

44 362.APFA ActPosFreshAir 1 CC_Fresh_Air_Status (71) **---** OV

45 352.CCAC CoilConsumptionAC 1 CC_Coil_Consumption_AC **---** O
(75)

46 352.CCAH CoilConsumptionAH 1 CC_CoilConsumptionAH (76) **---** O

47 369.EC ElectricConsumption 1 CC_ElectricConsumption (73) **---** O

48 372.FC FanConsumption 1 CC_Fan_Consumption (74) **---** O

49 323.TRA TempReturnAir 1 CC_Temperature_Retour_Air **---** OV
(79)

50 328.TDA TempDischargeAir 1 CC_Temperature_Discharge_- **---** OV
Air (80)

51 324.TFW TempFlowWater 1 CC_Temperature_Flow_Water **---** OV
(81)

52 LA.IOO InfoOnOff 1 CC_Switch_OnOff_Status (2) **---** O

53 S.OO OnOff 1 CC_Switch_OnOff (1) **---** O

54 1002.IA InAlarm 1 CC_Alarm (67) **---** OV

55 1002.AI AlarmInfo 1 CC_AlarmInfo (65) **---** OV

56 1002.AT AlarmText 1 CC_AlarmText (66) **---** OV

57 343.WSw WindowSwitch 1 CC_Window_Switch (84) **---** O

- **Parameter table**

Index Identifier Name Recommended default Value Bit-Offset

1 AJS Adjustable selection for Master / Slave 0 (Stand alone)

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|33|362.APSFA|ActPosSetpFreshAir|1|CC_Fresh_Air_Setpoint (89)|**---**|I|
|34||InfoEnableHeat|1|<br>CC_Enable_Info_Heat (91)|**---**|I|
|35||InfoEnableCool|1|<br>CC_Enable_Info_Cool (92)|**---**|I|
|36|343.WSw|WindowSwitch|1|<br>CC_Window_Switch (84)|**---**|I|
|37|258.EDAC|EnergyDemAC|1|<br>CC_EnergyDemAC (95)|**---**|O|
|38|258.EDAH|EnergyDemAH|1|<br>CC_EnergyDemAH (96)|**---**|O|
|39|258.EDA|EnergyDemAir|1|<br>CC_EnergyDemAir (97)|**---**|O|
|40|352.APHSA|ActposHeatStageA|1|<br>CC_Heating_ValueA_Status<br>(68)|**---**|OV|
|41|369.APHSB|ActposHeatStageB|1|CC_Heating_ValueB_Status<br>(69)|**---**|OV|
|42|352.APCSA|ActposCoolStageA|1|CC_Cooling_ValueA_Status<br>(70)|**---**|OV|
|43|372.FS|FanSpeed|1|CC_Fan_Speed_Status (72)|**---**|OVLA|
|44|362.APFA|ActPosFreshAir|1|<br>CC_Fresh_Air_Status (71)|**---**|OV|
|45|352.CCAC|CoilConsumptionAC|1|<br>CC_Coil_Consumption_AC<br>(75)|**---**|O|
|46|352.CCAH|CoilConsumptionAH|1|CC_CoilConsumptionAH (76)|**---**|O|
|47|369.EC|ElectricConsumption|1|<br>CC_ElectricConsumption (73)|**---**|O|
|48|372.FC|FanConsumption|1|<br>CC_Fan_Consumption (74)|**---**|O|
|49|323.TRA|TempReturnAir|1|<br>CC_Temperature_Retour_Air<br>(79)|**---**|OV|
|50|328.TDA|TempDischargeAir|1|CC_Temperature_Discharge_-<br>Air (80)|**---**|OV|
|51|324.TFW|TempFlowWater|1|CC_Temperature_Flow_Water<br>(81)|**---**|OV|
|52|LA.IOO|InfoOnOff|1|CC_Switch_OnOff_Status (2)|**---**|O|
|53|S.OO|OnOff|1|<br>CC_Switch_OnOff (1)|**---**|O|
|54|1002.IA|InAlarm|1|<br>CC_Alarm (67)|**---**|OV|
|55|1002.AI|AlarmInfo|1|<br>CC_AlarmInfo (65)|**---**|OV|
|56|1002.AT|AlarmText|1|<br>CC_AlarmText (66)|**---**|OV|
|57|343.WSw|WindowSwitch|1|<br>CC_Window_Switch (84)|**---**|O|

|Index|Identifier|Name|Recommended default Value|Bit-Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection for Master / Slave|0 (Stand alone)||


-----

- **Adjustable table:**

|Col1|Col2|Selection and Parameter Value|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||**Stand**<br>**Alone**|**Master**|**Slave**<br>**by HCA**|**Slave**<br>**by IT**|**Slave**<br>**by FC**|
|**Datapoint Nr.**||**0 **|**1 **|**2 **|**3 **|**4 **|
|Datapoint 1|Input 1octet|-|-|HME|HME|-|
|Datapoint 2|Input 1 octet|-|-|HMO|HMO|-|
|Datapoint 3|Input 1 octet|-|-|CM|CM|-|
|Datapoint 4|Input 1bit|-|-|EH|EH|-|
|Datapoint 5|Input 1bit|-|-|EC|EC|-|
|Datapoint 6|Input 1 bit|-|-|COSW|COSW|-|
|Datapoint 7|Input 2 octets|-|-|TO|TO|-|
|Datapoint 8|Input 6 octets|-|-|TRSSHE|TRSSHE|-|
|Datapoint 9|Input 6 octets|-|-|TRSSCE|TRSSCE|-|
|Datapoint 10|Input 1 octet|-|-|FSU|FSU|-|
|Datapoint 11|Input 1bit|-|-|FM|FM|-|
|Datapoint 12|Input 2 octets|-|-|AQSE|AQSE|-|
|Datapoint 13|Input 2 octets|-|-|HRSDE|HRSDE|-|
|Datapoint 14|Input 2octets|-|-|TR|TR|-|
|Datapoint 15|Input 2 octets|-|-|TRA|TRA|-|
|Datapoint 16|Input 2 octets|-|-|-|TFW|-|
|Datapoint 17|Input 2octets|-|-|AQR|AQR|-|
|Datapoint 18|Input 2 octets|-|-|HRR|HRR|-|
|Datapoint 19|Input 1 bit|-|-|OO|OO|OO|
|Datapoint 20|Input 1bit|-|-|EAI|EAI|EAI|
|Datapoint 21|Input 1 bit|-|-|EAT|EAT|EAT|
|Datapoint 22|Input 1 bit|-|-|AA|AA|AA|
|Datapoint 23|Input 1octet|-|-|EPL|EPL|-|
|Datapoint 24|Input 1 octet|-|-|PRC|PRC|PRC|
|Datapoint 25|Input 1 octet|-|-|PRB|PRB|PRB|
|Datapoint 26|Input 1octet|-|-|-|-|IEDAC|
|Datapoint 27|Input 1octet|-|-|-|-|IEDAH|
|Datapoint 28|Input 1 octet|-|-|-|-|IEDA|
|Datapoint 29|Input 1 octet|-|-|-|-|APSHSA|
|Datapoint 30|Input 1octet|-|-|-|-|APSHSB|
|Datapoint 31|Input 1 octet|-|-|-|-|APSCSA|
|Datapoint 32|Input 1 octet|-|-|-|-|FSS|
|Datapoint 33|Input 1octet|-|-|-|-|APSFA|
|Datapoint 34|Input 1 bit|-|-|IEH|-|-|
|Datapoint 35|Input 1 bit|-|-|IEC|-|-|
|Datapoint 36|Input 1bit|-|-|WSw|WSw|WSw|
|Datapoint 37|Output 1 octet|-|-|EDAC|EDAC|EDAC|
|Datapoint 38|Output 1 octet|-|-|EDAH|EDAH|EDAH|
|Datapoint 39|Output 1octet|-|-|EDA|EDA|EDA|
|Datapoint 40|Output 1 octet|-|-|APHSA|APHSA|APHSA|
|Datapoint 41|Output 1 octet|-|-|APHSB|APHSB|APHSB|
|Datapoint 42|Output 1octet|-|-|APCSA|APCSA|APCSA|
|Datapoint 43|Output 1 octet|-|-|FS|FS|FS|
|Datapoint 44|Output 1 octet|-|-|APFA|APFA|APFA|
|Datapoint 45|Output 4octets|-|-|CCAC|CCAC|CCAC|
|Datapoint 46|Output 4octets|-|-|CCAH|CCAH|CCAH|
|Datapoint 47|Output 4 octets|-|-|EC|EC|EC|
|Datapoint 48|Output 4 octets|-|-|FC|FC|FC|


-----

Datapoint 49 Output 2 octets - - TRA - Datapoint 50 Output 2 octets - - TDA TDA Datapoint 51 Output 2 octets - - TFW - Datapoint 52 Output 1 bit - - IOO IOO IOO
Datapoint 53 Output 1 bit - - OO - Datapoint 54 Output 1 bit - - IA IA IA
Datapoint 55 Output 6 octets - - AI AI AI
Datapoint 56 Output 14 octets - - AT AT AT
Datapoint 57 Output 1 bit - - WSw WSw WSw

|Col1|Col2|Selection and Parameter Value|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||**Stand**<br>**Alone**|**Master**|**Slave**<br>**by HCA**|**Slave**<br>**by IT**|**Slave**<br>**by FC**|
|**Datapoint Nr.**||**0 **|**1 **|**2 **|**3 **|**4 **|
|Datapoint 49|Output 2octets|-|-|TRA|-|-|
|Datapoint 50|Output 2 octets|-|-|TDA|TDA|-|
|Datapoint 51|Output 2 octets|-|-|TFW|-|-|
|Datapoint 52|Output 1bit|-|-|IOO|IOO|IOO|
|Datapoint 53|Output 1 bit|-|-|OO|-|-|
|Datapoint 54|Output 1 bit|-|-|IA|IA|IA|
|Datapoint 55|Output 6 octets|-|-|AI|AI|AI|
|Datapoint 56|Output 14octets|-|-|AT|AT|AT|
|Datapoint 57|Output 1 bit|-|-|WSw|WSw|WSw|


-----

