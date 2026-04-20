# Application Description

## Terminal Unit Functional Blocks

 Interworking of Functional Blocks

###### Summary

 This document is a part of the HVAC Application Interworking Standard for HVAC applications. This Chapter describes the Interworking of the Functional Blocks.

 Version 02.02.01 is a KNX Approved Standard.

 This document is part of the KNX Specifications v2.1.


-----

##### g

#### Document updates

###### Version Date Modifications
 001.21 2001.08.07 Excerpt from former document TU_FB_18C Adapted to the Template Partly adapted to other documents 001.22 2.00 2002.11.29 Header and footer adapted Version adapted Completed 2.01 2003.10.15 --- 2.02 2004.01.15 --- 2.2 2009.06.17 Update in view of publication in the KNX Specifications v2.0. 02.02.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

###### None.

 Filename: 07_13_00 HVAC Interworking v02.02.01 AS.docx Version: 02.02.01 Status: Approved Standard Savedate: 2013.10.29 Number of pages: 27

 © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 2 f 27

|Version|Date|Modifications|
|---|---|---|
|001.21|2001.08.07|Excerpt from former document TU_FB_18C<br>Adapted to the Template<br>Partly adapted to other documents|
|001.22|||
|2.00|2002.11.29|Header and footer adapted<br>Version adapted<br>Completed|
|2.01|2003.10.15|---|
|2.02|2004.01.15|---|
|2.2|2009.06.17|Update in view of publication inthe KNXSpecifications v2.0.|
|02.02.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

##### g

#### Contents

##### 1 General Remarks ................................................................................................................... 4 1.1 Description ...................................................................................................................... 4

 2 Examples ................................................................................................................................. 4 2.1 Simple Fancoil (Heating only, Temperature Driven) ..................................................... 5 2.2 Simple Fancoil (Heating only, "Clock" Driven) ............................................................. 6 2.3 Simple Fancoil (Heating only, HVAC-Mode Driven) ................................................... 7 2.4 Simple Fancoil (Heating only, with "Management Station") ......................................... 8 2.5 Simple Fancoil (Cooling only, Temperature Driven) ..................................................... 9 2.6 Simple Fancoil (Heating/Cooling, HVAC-Mode/Temperature Driven) ...................... 10 2.7 Fancoil (Heating/Cooling, HVAC-Mode Driven) ........................................................ 11 2.8 Fancoil (with "Management Station" and Energy Demand) ........................................ 12 2.9 Fancoil with Optimiser (HVAC-Mode Driven, with Energy Demand) ....................... 13 2.10 Fancoil with Optimiser (with "Mgmt Station", Tariff Opt. and Energy Demand) ....... 14 2.11 Fancoil with Optimiser and Air Quality ....................................................................... 15 2.12 Simple Radiator Heating (Temperature Driven) .......................................................... 16 2.13 Simple Radiator Heating (HVAC-Mode Driven) ......................................................... 17 2.14 Simple Radiator Heating (with "Management Station") .............................................. 18 2.15 Simple Chilled Ceiling (Temperature Driven) ............................................................. 19 2.16 Simple Chilled Ceiling (with "Management Station") ................................................. 20 2.17 Radiator and Chilled Ceiling with integrated Optimiser .............................................. 21 2.18 VAV, Radiator, Chilled Ceiling without integrated Optimiser .................................... 22 2.19 VAV, Radiator, Chilled Ceiling with integrated Optimiser ......................................... 23 2.20 VAV, Radiator, Chilled Ceiling with HVAC Optimiser .............................................. 24

 3 Interworking of Setpoint Managers (Temperature, Relative Humidity, Air Quality) .. 26 3.1 Temperature Setpoints from Rooms, Relative Humidity and Air Quality centralised. .................................................................................................................... 26 3.2 Temperature and Air Quality Setpoints from Rooms, Relative Humidity centralised. .................................................................................................................... 27

###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 3 f 27


-----

##### g

### 1 General Remarks
###### The purpose of this document is to verify the co-operation of the different Functional Blocks. Where is the information coming from, where is it going to.

 For details of the Functional Blocks, please refer to the corresponding documents (see 1.1).

#### 1.1 Description

###### Binding Group Binding Group

**-- Data Point** **--------------MMM**   Data Point    OOO
**-- Data Point** **---------------OOO** Functional Block **-- Data Point** **----------MMM** Functional Block
**-- Data Point** **---------------OOO** **-- Data Point** **-----------OOO**
**– Diagnostic Data** **--------XXX**

###### The grey fields represent a Binding Group with different Datapoints.

 The white fields represent the Functional Blocks with the corresponding Datapoints.

 Normally the information flow is from left to right, although some exceptions are especially marked with arrows.

 –MM represents a mandatory “connection” of the “variable” –OO represents an optional “connection” of the “variable” –XX represents diagnostic data

### 2 Examples
###### See following pages

 © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 4 f 27

|M<br>O F<br>O<br>X|unctional Block|Col3|
|---|---|---|

|F|unctional Block|
|---|---|


-----

##### g


#### 2.1 Simple Fancoil (Heating only, Temperature Driven)


###### Simple Fancoil (Heating only, Temperature Driven)

 Apartment; Room; Sub_Zone (u.v.w)


###### Calendar


**-- TempRoomSetpAbs** **-------------------MMM** Setpoint

###### Manager
 (Temp Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff ----------------------MMMM

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **-----------------------------------------------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserOffs -------------OOO**
**-- EnabTempRoomSetpAlt --------------OOO**
**-- FanSpeedUser -----------------------------------** **-----------------------------------------------------------------OOO**

|Abs<br>Room<br>Temp<br>Schedul|er|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**
**-- FanSpeedSetp ----------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>O|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(Temp<br>Driven)|Col2|Fancoil<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 5 f 27


-----

##### g


#### 2.2 Simple Fancoil (Heating only, "Clock" Driven)


###### Simple Fancoil (Heating only, „Clock“ Driven)

 Apartment; Room; Sub_Zone (u.v.w)

 Room Setpoint Manager
 (Temp Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff ----------------------MMMM
 „Clock“ -- EnableRoomTempAlt -------------------OOO

 Sensors -- TempRoom -------------------------------------X -----------------------------------------------------------------MMM

**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **-----------------------------------------------------------------OOO**
**-- WindowStatus ----------------------------OOO**

###### HMI -- TempRoomSetpUserAbs -------------OOO

**-- TempRoomSetpUserOffset** **---------OOO**
**-- FanSpeedUser** **----------------------------------** **-----------------------------------------------------------------OOO**

|„Clock|“|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**
**-- FanSpeedSetp ----------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>O|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>Setpoint<br>Manager<br>(Temp<br>Driven)|Col2|Fancoil<br>Control|
|---|---|---|
||||
|**  O**<br>**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**--**<br>**-**|**  O**<br>**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**--**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 6 f 27


-----

##### g


#### 2.3 Simple Fancoil (Heating only, HVAC-Mode Driven)


###### Simple Fancoil (Heating only, HVAC-Mode Driven)

 Apartment; Room; Sub_Zone (u.v.w)

 Room
 HVAC-Mode -- HVACMode -------------------------------MMM Setpoint
 Scheduler Manager
 (HVAC-M
 Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff -----------------------MMMM

 Sensors -- TempRoom -------------------------------------X -----------------------------------------------------------------MMM

**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **-----------------------------------------------------------------OOO**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

###### HMI -- TempRoomSetpUserOffs -------------OOO

**-- ComfProlongUser -----------------------OOO**
**– FanSpeedUser -----------------------------------** **-----------------------------------------------------------------OOO**

|HVAC-M<br>Schedul|ode<br>er|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**
**-- FanSpeedSetp ---------------------------MMM**
**-- ActPosSetpFreshAir** **-------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>O|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(HVAC-M<br>Driven)|Col2|Fancoil<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 7 f 27


-----

##### g

#### 2.4 Simple Fancoil (Heating only, with "Management Station")


###### Simple Fancoil (Heating only, with „Management Station“)

 Apartment; Room; Sub_Zone (u.v.w)


**-- BuildingMode** **--------------OOO**
**-- OccupancyMode** **----------OOO**

###### Scheduler Zone


**-- HVACMode** **-------------------------------MMM** Setpoint
**-- EnableComfort ---------------------------OOO** Manager

###### (HVAC-M
 Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- HVACModeEff ------------------------------------MMMM
**-- TempRoomSetpSetHeatEff(4) --------------MMMM**

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **-----------------------------------------------------------------OOO**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserAbs -------------OOO**
**-- TempRoomSetpUserOffs -------------OOO**
**-- HVACModeUser --------------------------OOO**
**-- ComfProlongUser -----------------------OOO**
**– FanSpeedUser -----------------------------------** **------------------------------------------------------------------OOO**

|Prog t<br>HVAC<br>Conver|o<br>s|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**
**-- FanSpeedSetp ----------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**
**-- HVACModeAct ----------------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>O|uators|
|---|---|

|X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>OManager<br>(HVAC-M<br>Driven)|Col2|Fancoil<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**--**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**--**|**M**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 8 f 27


-----

##### g


#### 2.5 Simple Fancoil (Cooling only, Temperature Driven)


###### Simple Fancoil (Cooling only, Temperature Driven)

 Apartment; Room; Sub_Zone (u.v.w)


###### Calendar


**-- TempRoomSetpAbs** **-------------------MMM** Setpoint

###### Manager
 (Temp Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpCoolEff ----------------------MMMM

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **-----------------------------------------------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserOffs -------------OOO**
**-- EnabTempRoomSetpAlt --------------OOO**
**-- FanSpeedUser -----------------------------------** **-----------------------------------------------------------------OOO**

|Abs<br>Room<br>Temp<br>Schedul|er|
|---|---|


**-- ActPosSetpCoolStageA ---------------MMM**
**-- FanSpeedSetp ----------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>O|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(Temp<br>Driven)|Col2|Fancoil<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  ---**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 9 f 27


-----

##### g

#### 2.6 Simple Fancoil (Heating/Cooling, HVAC-Mode/Temperature Driven)


###### Simple Fancoil (Heating/Cooling, HVAC-Mode/Temperature Driven)

 Apartment; Room; Sub_Zone (u.v.w)

 Room
 HVAC-Mode -- HVACMode -------------------------------MMM Setpoint
 Scheduler Manager
 (HVAC-M
 Driven)

 DistrSegmH or DistrSegmC Sensors

**-- ChangeOverStatusWater** **-------------------** **-----------------------------------------------------------------OOO**

###### Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff -----------------------MMMM
**-- TempRoomSetpCoolEff -----------------------MMMM**

###### Sensors -- TempRoom -------------------------------------X -----------------------------------------------------------------MMM

**-- TempDischargeAir -----------------------------** **-----------------------------------------------------------------OOO**
**– TempReturnAir ----------------------------------** **----------------------------------------------------------------OOO**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

###### HMI -- TempRoomSetpUserOffs -------------OOO

**-- ComfProlongUser -----------------------OOO**
**– FanSpeedUser** **----------------------------------** **-----------------------------------------------------------------OOO**

|HVAC-M<br>Schedul|ode<br>er|
|---|---|

|Sensor|s|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**
**-- ActPosSetpCoolStageA ---------------MMM**
**– FanSpeedSetp** **---------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**
**-- HVACModeAct ----------------------------XXX**
**-- HeatCoolMode** **----------------------------XXX**

|Sensor|s|
|---|---|

|MAct<br>M<br>M<br>O|uators|
|---|---|

|X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(HVAC-M<br>Driven)|Col2|Fancoil<br>Control<br>O|
|---|---|---|
||||
|**---**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
||||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 10 f 27


-----

##### g


#### 2.7 Fancoil (Heating/Cooling, HVAC-Mode Driven)


###### Fancoil (Heating/Cooling, HVAC-Mode Driven)

 Sensors -- TempOutside ----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO

 Apartment; Room; Sub_Zone (u.v.w)

 Room
 HVAC -- HVACMode -------------------------------MMM Setpoint Scheduler -- EnableComfort ---------------------------OOO Manager
 (HVAC-M
 Driven)

 DistrSegmH or DistrSegmC Sensors


###### Outside Sensor
 Zone

**-- ActPosSetpHeatStageA ---------------MMM**
**-- ActPosSetpHeatStageB ---------------OOO**
**-- ActPosSetpCoolStageA ---------------MMM**
**-- ActPosSetpCoolStageB ---------------OOO**
**–FanSpeedSetp ----------------------------MMM**
**-- ActPosSetpFreshAir --------------------OOO**

**-- TempRoomSetpAct ----------------------XXX**
**-- HVACModeAct ----------------------------XXX**
**-- HeatCoolMode** **----------------------------XXX**

|Sensors|Col2|
|---|---|

|HVAC<br>Schedul|er|
|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O<br>M<br>O|uators|
|---|---|

|X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|OFancoil<br>Control|
|---|---|---|---|
||||**O**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_||||
|**-- ChangeOverStatusWater**<br>**----------------**<br>_DistrSegmH or DistrSegmC_<br>s|**---**<br>**-**|**----------------------------------------------------------------OO**|**O**|
|**-- ChangeOverStatusWater**<br>**----------------**<br>_DistrSegmH or DistrSegmC_<br>s||||
|**-- ChangeOverStatusWater**<br>**----------------**<br>_DistrSegmH or DistrSegmC_<br>s|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**--**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  --**<br>**--**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-**|**M**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 11 f 27


-----

##### g

#### 2.8 Fancoil (with "Management Station" and Energy Demand)


###### Fancoil (with „Management Station“ and Energy Demand)


###### Sensors


**-- TempOutside** **----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO** Fancoil **----------------------------------------------------------------------------OO**


###### Outside Sensor
 Zone

 DistrSegmH_b

**--** **TmpFlWDHAbsTU** **---**
-- **LockSignHFDM** 
-- **ForceSignHFDM** 
------- **StatusHPM** **---- **

###### DistrSegmC_d

**--** **TmpFlWDCAbsTU** **---**
-- **LockSignCFDM** 
-- **ForceSignCFDM** 
-------- StatusCPM **---- **


**-- BuildingMode** **--------------OOO**
**-- OccupancyMode** **----------OOO**

###### Scheduler Zone

|O<br>O<br>C|Prog t<br>HVAC<br>onver|o<br>s|
|---|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O<br>M|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|OFancoil -<br>Control|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||**O**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAH**<br>**-------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**-------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- EnableComfort ---------------------------OOO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 12 f 27


-----

##### g

#### 2.9 Fancoil with Optimiser (HVAC-Mode Driven, with Energy Demand)


###### Fancoil with integrated Optimiser (HVAC-Mode Driven withEnergy Demand

 Sensors -- TempOutside ----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO Fancoil ----------------------------------------------------------------------------OO


###### Outside Sensor
 Zone

 DistrSegmH_b

**--** **TmpFlWDHAbsTU** **---**
-- **LockSignHFDM** 
-- **ForceSignHFDM** 
------- **StatusHPM** **---- **

###### DistrSegmC_d

**--** **TmpFlWDCAbsTU** **---**
-- **LockSignCFDM** 
-- **ForceSignCFDM** 
-------- StatusCPM **---- **

|Sensors|Col2|
|---|---|

|HVAC<br>Schedul|er|
|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O<br>M|uators|
|---|---|

|X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|OFancoil -<br>Control|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||**O**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br><br>er<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 13 f 27


-----

##### g

#### 2.10 Fancoil with Optimiser (with "Mgmt Station", Tariff Opt. and Energy Demand)


###### Fancoil with integrated Optimiser EnergyManagement "Manager"
 Zone (m.n.o)


###### Sensors


**-- TempOutside** **----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO** **----------------------------------------------------------------------------OO**


###### Outside Sensor
 Zone

 DistrSegmH_b

**--** **TmpFlWDHAbsTU** **---**
-- **LockSignHFDM** 
-- **ForceSignHFDM** 
------- **StatusHPM** **---- **

###### DistrSegmC_d

**--** **TmpFlWDCAbsTU** **---**
-- **LockSignCFDM** 
-- **ForceSignCFDM** 
-------- StatusCPM **---- **


**-- BuildingMode** **--------------OOO**
**-- BuildingModeNext --------OOO**
**-- OccupancyMode** **----------OOO**
**-- OccupancyModeNext ----OOO**
**– ContrMode -------------------OOO**

###### Scheduler Zone

|O<br>O<br>OC<br>O<br>O|Prog t<br>HVAC<br>onver|o<br>s|
|---|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O<br>M|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|O Fancoil<br>O Control|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|
||||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**||
||||**O**<br>**O**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**  X**<br>**-**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 14 f 27


-----

##### g


#### 2.11 Fancoil with Optimiser and Air Quality


###### Fancoil with integrated Optimiser and Air Quality


###### Energy Management Zone (m.n.o)


###### Sensors


**-- TempOutside** **----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO** **----------------------------------------------------------------------------OO**
**-- AQOutside** **------------------------------------------------------------------------------------------------------------------------------------------------------------------O O-O**


###### Outside Sensor
 Zone

 DistrSegmH_b

**--** **TmpFlWDHAbsTU** **---**
-- **LockSignHFDM** 
-- **ForceSignHFDM** 
------- **StatusHPM** **---- **

###### DistrSegmC_d

**--** **TmpFlWDCAbsTU** **---**
-- **LockSignCFDM** 
-- **ForceSignCFDM** 
-------- StatusCPM **---- **


**-- BuildingMode** **--------------OOO**
**-- BuildingModeNext --------OOO**
**-- OccupancyMode** **----------OOO**
**-- OccupancyModeNext ----OOO**
**– ContrMode -------------------OOO**

###### Scheduler Zone

|O<br>O<br>OC<br>O<br>O|Prog t<br>HVAC<br>onver|o<br>s|
|---|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O<br>M<br>O|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|O Fancoil<br>O Control|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||** O**<br>**-**<br>** -O**|** O**<br>**-**<br>** -O**|** O**<br>**-**<br>** -O**|** O**<br>**-**<br>** -O**|
||||** O**<br>**-**<br>** -O**|** O**<br>**-**<br>** -O**|** O**<br>**-**<br>** -O**||
||||**O**<br>**O**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>Air Heat<br>Energy<br>Dem Trf TU||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|Manager||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**<br><br>AQ|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**<br><br>AQ|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**<br><br>AQ|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**<br><br>AQ|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>**-**<br>**-**<br>**-**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>+<br>Setpoint<br>_Apartment; Room; Sub_Zone (u.v.w)_|**  X**<br>**-**<br>**--**<br>**----**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**<br>**O**|**  X**<br>**-**<br>**--**<br>**----**<br>**  ---**<br>**---**<br>**--**<br>**--**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**--**<br>**-----**<br>**O**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**<br>**OO**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**<br>**OO**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**<br>**OO**|**M**<br>**O**<br>**O**<br>**O**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**<br>**OO**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 15 f 27


-----

##### g


#### 2.12 Simple Radiator Heating (Temperature Driven)


###### Simple Radiator Heating (Temperature Driven)


###### Apartment; Room; Sub_Zone (u.v.w)

 Room

**-- TempRoomSetpAbs --------------------MMM** Setpoint

###### Manager
 (Temp Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff --------------MMMM

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserOffs -------------OOO**
**-- EnableRoomTempAlt ------------------OOO**

|Abs<br>Room<br>Temp<br>Schedul|er|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(Temp<br>Driven)|Col2|Radiator<br>Room<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 16 f 27


-----

##### g


#### 2.13 Simple Radiator Heating (HVAC-Mode Driven)


###### Simple Radiator Heating (HVAC-Mode Driven)


###### Apartment; Room; Sub_Zone (u.v.w)

 Room

**-- HVACMode** **------------------------------MMM** Setpoint

###### Manager (HVAC-M
 Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpHeatEff --------------MMMM

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserOffs -------------OOO**
**-- ComfProlongUser** **----------------------OOO**

|HVAC<br>Mode<br>Schedul|er|
|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(HVAC-M<br>Driven)|Col2|Radiator<br>Room<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**O**|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**O**|**M**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 17 f 27


-----

##### g

#### 2.14 Simple Radiator Heating (with "Management Station")


###### Simple Radiator Heating (with „Management Station“)

**-- BuildingMode** **--------------OOO** Prog toHVAC
**-- OccupancyMode** **----------OOO** HVACMode

###### SchedulerConvers

 Scheduler Zone


###### Apartment; Room; Sub_Zone (u.v.w)

 Room

**-- HVACMode** **------------------------------MMM** Setpoint
**– EnableComfort** **---------------------------OOO** Manager

###### (HVAC-M
 Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- HVACModeEff ------------------------------------MMMM
**-- TempRoomSetpSetHeatEff(4)** **-------------MMMM**

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserAbs** **------------OOO**
**-- TempRoomSetpUserOffs -------------OOO**
**-- HVACModeUser** **------------------------OOO**
**-- ComfProlongUser** **----------------------OOO**

|O<br>O<br>SC|PHrVogA Ct<br>HMVoAdCe<br>cohnevdeurl|o<br>ser|
|---|---|---|


**-- ActPosSetpHeatStageA ---------------MMM**

**-- TempRoomSetpAct ----------------------XXX**
**-- HVACModeAct** **---------------------------XXX**

|Sensor|s|
|---|---|

|MAct|uators|
|---|---|

|X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>OManager<br>(HVAC-M<br>Driven)|Col2|Radiator<br>Room<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**  O**<br>**O**<br>**O**|**  X**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**  O**<br>**O**<br>**O**|**M**<br>**  MM**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 18 f 27


-----

##### g


#### 2.15 Simple Chilled Ceiling (Temperature Driven)


###### Simple Chilled Ceiling (Temperature Driven)


###### Apartment; Room; Sub_Zone (u.v.w)

 Room

**-- TempRoomSetpAbs --------------------MMM** Setpoint

###### Manager
 (Temp Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- TempRoomSetpCoolEff --------------MMMM

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserOffs -------------OOO**
**-- EnableRoomTempAlt ------------------OOO**

|Abs<br>Room<br>Temp<br>Schedul|er|
|---|---|


**-- ActPosSetpCoolStageA ---------------MMM**

**-- TempRoomSetpAct ----------------------XXX**

|Sensor|s|
|---|---|

|MAct|uators|
|---|---|

|X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>Manager<br>(Temp<br>Driven)|Col2|Radiator<br>Room<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 19 f 27


-----

##### g

#### 2.16 Simple Chilled Ceiling (with "Management Station")


###### Simple Chilled Ceiling (with „Management Station“)

**-- BuildingMode** **--------------OOO** Prog toHVAC
**-- OccupancyMode** **----------OOO** HVACMode

###### SchedulerConvers

 Scheduler Zone


###### Apartment; Room; Sub_Zone (u.v.w)

 Room

**-- HVACMode** **------------------------------MMM** Setpoint
**– EnableComfort** **---------------------------OOO** Manager

###### (HVAC-M
 Driven)

 Apartment; Room; Sub_Zone (x.y.z) -- HVACModeEff ------------------------------------MMMM
**-- TempRoomSetpSetCoolEff(4)** **-------------MMMM**

**-- TempRoom -------------------------------------X** **-----------------------------------------------------------------MMM**
**-- PresenceStatus --------------------------OOO**
**-- WindowStatus ----------------------------OOO**

**-- TempRoomSetpUserAbs** **------------OOO**
**-- TempRoomSetpUserOffs -------------OOO**
**-- HVACModeUser** **------------------------OOO**
**-- ComfProlongUser** **----------------------OOO**

|O<br>O<br>SC|PHrVogA Ct<br>HMVoAdCe<br>cohnevdeurl|o<br>ser|
|---|---|---|


**-- ActPosSetpCoolStageA ---------------MMM**

**-- TempRoomSetpAct ----------------------XXX**
**-- HVACModeAct** **---------------------------XXX**

|Sensor|s|
|---|---|

|MAct|uators|
|---|---|

|X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Room<br>MSetpoint<br>OManager<br>(HVAC-M<br>Driven)|Col2|Radiator<br>Room<br>Control|
|---|---|---|
||||
|**  X**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**  O**<br>**O**<br>**O**|**  X**<br>**-**<br>**  O**<br>**  O**<br>**O**<br>**  O**<br>**O**<br>**O**|**M**<br>**  MM**<br>**MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 20 f 27


-----

##### g

#### 2.17 Radiator and Chilled Ceiling with integrated Optimiser


###### Radiator and Chilled Ceiling with integrated Optimiser


###### Energy Management Zone (m.n.o)


###### Sensors


**-- TempOutside** **----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO** **----------------------------------------------------------------------------OO**


###### Outside Sensor
 Zone

 DistrSegmH_a

**--** **TmpFlWDHAbsTU** **---**
-- **LockSignHFDM** 
-- **ForceSignHFDM** 
------- **StatusHPM** **---- **

###### DistrSegmC_c

**--** **TmpFlWDCAbsTU** **---**
-- **LockSignCFDM** 
-- **ForceSignCFDM** 
-------- StatusCPM **---- **


**-- BuildingMode** **--------------OOO**
**-- BuildingModeNext --------OOO**
**-- OccupancyMode** **----------OOO**
**-- OccupancyModeNext ----OOO**
**– ContrMode -------------------OOO**

###### Scheduler Zone

|O<br>O<br>OC<br>O<br>O|Prog t<br>HVAC<br>onver|o<br>s|
|---|---|---|

|Sensor|s|
|---|---|

|Sensor|s|
|---|---|

|MAct<br>O<br>M<br>O|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|Col3|ORadiator<br>O &<br>Chilled<br>Ceiling<br>Control|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
||||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|
||||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**||
||||**O**<br>**O**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemRD**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>RAD Heat<br>Energy<br>Dem Trf TU|**-- EngDemRD**<br>**------------------------------OOO**<br>**-- LockSignHFDM**<br>**-------------------------****-**<br>**-- ForceSignHFDM**<br>**------------------------****-**<br>**-- StatusHPM**<br>**-------------------------------****-**<br>RAD Heat<br>Energy<br>Dem Trf TU||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**------**<br>**-**|**----------------------------------------------------------------OO**|**----------------------------------------------------------------OO**||**O**<br>**-**<br>**-**<br>**-**<br>CLC Cool<br>Energy<br>Dem Trf TU|**O**<br>**-**<br>**-**<br>**-**<br>CLC Cool<br>Energy<br>Dem Trf TU|
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|||||||
|**-- HVACMode**<br>**-------------------------------MMM**<br>**-- HVACModeNext --------------------------OOO**<br>**-- EnableComfort ---------------------------OOO**<br>**-- ContrMode**<br>**---------------------------------------**<br>**------------------------------------------------------------------------OO**<br> o<br><br>s<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)<br>_Apartment; Room; Sub_Zone (u.v.w)_|**  X**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**---**<br>**--**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**---**<br>**--**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**M**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**M**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**M**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**M**<br>**O**<br>**M**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 21 f 27


-----

##### g

#### 2.18 VAV, Radiator, Chilled Ceiling without integrated Optimiser


###### VAV, Radiator, Chilled Ceiling without integrated Optimiser


###### Energy Management Zone (m.n.o)


###### "Manager"


###### Outside Sensor
 Sensors -- TempOutside ----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO ----------------------------------------------------------------------------OO Zone

 Apartment; Room; Sub_Zone (u.v.w)
 DistrSegmH_b
 Room -- EngDemAH ------------------------------OOO Air HeatEnergy ------ TmpFlWDHAbsTULockSignHFDM --
**-- BuildingMode-- OccupancyMode--------------OOO----------OOO** Prog toHVAC **-- HVACMode-- EnableComfort ---------------------------OOO-------------------------------MMM** ManagerSetpoint Dem Trf TU ---------ForceSignHFDMStatusHPM **---- **
**– ContrMode -------------------OOO** Convers **-- ContrMode** **---------------------------------------(HVAC-M------------------------------------------------------------------------OOO** _DistrSegmC_d_

###### Driven) -- EngDemAC ------------------------------OOO Air CoolEnergy ---- TmpFlWDCAbsTULockSignCFDM -- Dem Trf TU ---------ForceSignCFDMStatusCPM ---- 
 EmergencyHVAC -- EmergMode -------------------------------------- ------------------------------------------------------------------------OOO -- EngDemRD ------------------------------OOORAD Heat -- TmpFlWDHAbsTUDistrSegmH_a-- Source Dem Trf TUEnergy -----------ForceSignHFDMLockSignHFDMStatusHPM ---- 
 DistrSegmC_c

**-- EngDemCC** **------------------------------OOOCLC Cool** **--** **TmpFlWDCAbsTU** **---**

**-- HVACModeEff ------------------------------------MMMM** Energy -- **LockSignCFDM** 

###### Scheduler -- TempRoomSetpSetHeatEff(4) --------------MMMM-- TempRoomSetpSetCoolEff(4) --------------MMMM Dem Trf TU ---------- StatusCPMForceSignCFDM ----  Zone -- EngDemAir ------------------------OOOVentilation - TmpSupplAirSetpSetDistrSegmV_e
**-- VaFreshAirDem --------------------------OOODem Trf TU** **--** **ValFreshAirDemTU** **---**
-- StatusSATC ------------------------------- ---- **ForceSignSATCLockSignSATC** 

-------- StatusSATC **----- **

###### Sensors -- TempRoom -------------------------------------X -----------------------------------------------------------------MMM

**-- TempDischargeAir ------------------------------- PresenceStatus --------------------------OOO** **-----------------------------------------------------------------OOO** **-- ActPosSetpDischargeAir** **------------MMMActuators**
**-- WindowStatus ----------------------------OOO** **-- ActPosSetpHeatStageA ---------------OOO**

**-- ActPosSetpHeatStageB ---------------OOO**
**-- ActPosSetpCoolStageA ---------------OOO**
**-- ActPosSetpCoolStageB ---------------OOO**

###### HMI -- TempRoomSetpUserAbs -------------OOO -- TempRoomSetpAct ----------------------XXX HMI

**-- TempRoomSetpUserOffs -------------OOO** **-- HVACModeAct ----------------------------XXX**
**-- HVACModeUser --------------------------OOO** **-- ContrModeAct -----------------------------XXX**
**-- ComfProlongUser -----------------------OOO** **-- HeatCoolMode** **----------------------------XXX**

**-- AirFlowMSExtr ---------------------------OOO** VAV
###### Control
 EA

 Apartment; Room; Sub_Zone (x.y.z)

|Sensors|Col2|
|---|---|

|Prog t<br>HVAC<br>Conver|o<br>s|
|---|---|
|||
|HVAC<br>mergen<br>Source|cy<br>|

|Sensor|s|
|---|---|

|MAct<br>O<br>O<br>O<br>O|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|O VAV<br>Control<br>DA|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|
|||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**||
|||**O**<br>**O**|||||
|||**O**<br>**O**|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU||
|||**O**<br>**O**|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU||
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemRD**<br>**------------------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**-- EngDemRD**<br>**------------------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**-- EngDemRD**<br>**------------------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU||
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemRD**<br>**------------------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU||
|||||**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**  MM**<br>**  MM**<br>**  MM**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**  MM**<br>**  MM**<br>**  MM**|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**  MM**<br>**  MM**<br>**  MM**|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|**O**<br>**  O**<br>**-**<br>Ven<br>Dem|tilation<br> Trf TU|tilation<br> Trf TU|

|O V<br>Co|AV<br>ntrol<br>EA|
|---|---|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 22 f 27


-----

##### g

#### 2.19 VAV, Radiator, Chilled Ceiling with integrated Optimiser


###### VAV, Radiator, Chilled Ceiling with integrated Optimiser


###### Energy Management Zone (m.n.o)


###### "Manager"


###### Outside Sensor
 Sensors -- TempOutside ----------------------------------------------------------------------------------------------------------------------------------------------------------------O OO ----------------------------------------------------------------------------OO Zone

 Apartment; Room; Sub_Zone (u.v.w)
 DistrSegmH_b
 Room -- EngDemAH ------------------------------OOO Air HeatEnergy ------ TmpFlWDHAbsTULockSignHFDM --
**-- BuildingMode-- BuildingModeNext --------OOO--------------OOO** Prog toHVAC **-- HVACMode-- HVACModeNext --------------------------OOO-------------------------------MMM** ManagerSetpoint Dem Trf TU ---------ForceSignHFDMStatusHPM **---- **
**-- OccupancyMode** **----------OOO** Convers **-- EnableComfort ---------------------------OOO(HVAC-M** _DistrSegmC_d_
**-- OccupancyModeNext ----OOO– ContrMode -------------------OOO** **-- ContrMode** **---------------------------------------** Driven)------------------------------------------------------------------------OOO **-- EngDemAC** **------------------------------OOO** Air CoolEnergy **----** **TmpFlWDCAbsTULockSignCFDM** --
###### Dem Trf TU ---------ForceSignCFDMStatusCPM ---- 
 EmergencyHVAC -- EmergMode -------------------------------------- ------------------------------------------------------------------------OOO -- EngDemRD --------.----------------------OOORAD Heat -- TmpFlWDHAbsTUDistrSegmH_a-- Source Dem Trf TUEnergy -----------ForceSignHFDMLockSignHFDMStatusHPM ---- 
 DistrSegmC_c

**-- EngDemCC** **------------------------------OOOCLC Cool** **--** **TmpFlWDCAbsTU** **---**

**-- HVACModeEff ------------------------------------MMMM** Energy -- **LockSignCFDM** 

###### Scheduler -- HVACModeEffNext ------------------------------OOOO-- TempRoomSetpSetHeatEff(4) --------------MMMM Dem Trf TU ---------- StatusCPMForceSignCFDM ----  Zone -- TempRoomSetpSetCoolEff(4) --------------MMMM -- EngDemAir ------------------------OOOVentilation - TmpSupplAirSetpSetDistrSegmV_e
**-- VaFreshAirDem --------------------------OOODem Trf TU** **--** **ValFreshAirDemTU** **---**
-- StatusSATC ------------------------------- ---- **ForceSignSATCLockSignSATC** 

-------- StatusSATC **----- **

###### Sensors -- TempRoom -------------------------------------X -----------------------------------------------------------------MMM

**-- TempDischargeAir ------------------------------- PresenceStatus --------------------------OOO** **-----------------------------------------------------------------OOO-----------------------------------------------------------------OOO** **-- ActPosSetpDischargeAir** **------------MMMActuators**
**-- WindowStatus ----------------------------OOO** **-- ActPosSetpHeatStageA ---------------OOO**

**-- ActPosSetpHeatStageB ---------------OOO**
**-- ActPosSetpCoolStageA ---------------OOO**
**-- ActPosSetpCoolStageB ---------------OOO**

###### HMI -- TempRoomSetpUserAbs -------------OOO -- TempRoomSetpAct ----------------------XXX HMI

**-- TempRoomSetpUserOffs -------------OOO** **-- HVACModeAct ----------------------------XXX**
**-- HVACModeUser --------------------------OOO** **-- ContrModeAct -----------------------------XXX**
**-- ComfProlongUser -----------------------OOO** **-- HeatCoolMode** **----------------------------XXX**

**-- AirFlowMSExtr ---------------------------OOO** VAV
###### Control
 EA

 Apartment; Room; Sub_Zone (x.y.z)

|Sensors|Col2|
|---|---|

|Prog t<br>HVAC<br>Conver|o<br>s|
|---|---|
|||
|HVAC<br>mergen<br>Source|cy<br>|

|Sensor|s|
|---|---|

|MAct<br>O<br>O<br>O<br>O|uators|
|---|---|

|X<br>X<br>X<br>X|HMI|
|---|---|

|HMI|Col2|
|---|---|

|Col1|Col2|O VAV<br>O Control<br>DA|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|
|||** O**<br>**-**|** O**<br>**-**|** O**<br>**-**|** O**<br>**-**||
|||**O**<br>**O**|||||
|||**O**<br>**O**|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU||
|||**O**<br>**O**|**-- EngDemAH**<br>**------------------------------OOO**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|**O**<br>Air Heat<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU||
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemAC**<br>**------------------------------OOO**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|**O**<br>Air Cool<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemRD**<br>**--------.----------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**-- EngDemRD**<br>**--------.----------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**-- EngDemRD**<br>**--------.----------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU||
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemRD**<br>**--------.----------------------OOO**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|**O**<br>RAD Heat<br>Energy<br>Dem Trf TU|
|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**M**<br>**  O**<br>**  O**<br>**--**<br>**--------**<br>**---**<br>**--------**<br>Room<br>Setpoint<br>Manager<br>(HVAC-M<br>Driven)|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU|**-- EngDemCC**<br>**------------------------------OOO**<br>CLC Cool<br>Energy<br>Dem Trf TU||
|||||**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|**O**<br>CLC Cool<br>Energy<br>Dem Trf TU|
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|**-- EngDemCC**<br>**------------------------------OO**|
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|||
|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**  X**<br>**-**<br>**  ---**<br>**-**<br>**  O**<br>**-**<br>**  O**<br>**  O**<br>**  O**<br>**  O**<br>**  O**|**M**<br>**O**<br>**O**<br>**  MM**<br>**  OO**<br>**  MM**<br>**  MM**|**-- EngDemAir**<br>**------------------------OOO**<br>**-- VaFreshAirDem --------------------------OOO**<br>**-- StatusSATC ------------------------------****-**<br>Ven<br>Dem|**O**<br>**  O**<br>**-**<br>Ven<br>Dem|tilation<br> Trf TU|tilation<br> Trf TU|

|O V<br>Co|AV<br>ntrol<br>EA|
|---|---|


###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 23 f 27


-----

##### g

#### 2.20 VAV, Radiator, Chilled Ceiling with HVAC Optimiser

###### VAV, Radiator, Chilled Ceiling Tariff Zone "Manager" -- Tariff -----------------------------OO HVAC with HVAC Optimiser -- TariffNext ----------------------OO Optimiser

 Outside Sensor
 Sensors -- TempOutside ------------------------------------------------------------------------------------------------------------------------OO ----------------------------------------------------------------------------------------------------------------------------------OO Zone

**-- BuildingMode-- BuildingModeNext-- OccupancyMode-- OccupancyModeNext-----------OOO--------OOO------OOO---OOO** ConversProg toHVAC **-- HVACMode-- HVACModeNext-- EnableComfort-- ContrMode** **-------------MMM----------------------------OOO--------OOO(HVAC-MManagerSetpointRoom** **-----------------------------------------------** **-------------------------------------------OO** DischargeControlVAVAir **-- EngDemAH** **-----------------OOODem Trf TUAir HeatEnergy** **---------------TmpFlWDHAbsTUForceSignHFDMLockSignHFDMStatusHPMDistrSegmH_b---- ---**

###### Driven) DistrSegmH_d

**-- HVACModeEff** **-------------OOO** **---------------------------------------------MM** **-- EngDemAC** **-----------------OOO** Air Cool **--** **TmpFlWDCAbsTU** **---**
**-- HVACModeEffNext-- TempRStpSetHEff(4)** **------OOO----OOO** **---------------------------------------------MM** Dem Trf TUEnergy -----------ForceSignCFDMLockSignCFDMStatusCPM **---- **
**-- TempRStpSetCEff(4)** **----OOO** **---------------------------------------------MM**

###### DistrSegmC_a
 HVAC -- HVACEmergencyMode-------------- ------------------------------------------------- --------------------------------------------OO -- EngDemRD -----------------OOORAD HeatEnergy ---- TmpFlWDHAbsTULockSignHFDM --- EmergencySource -- HVACModeOpt-- TempRStpOptHeatShift --OOO-- TempRStpOptCoolShift --OOO-- TmpRStpSetHeatShift(3) -OOO-- TmpRStpSetCoolShift(3)-OOO---------OOO -- EngDemCC -----------------OOODem Trf TUDem Trf TUCLC CoolEnergy ----------------------- StatusCPMTmpFlWDCAbsTUForceSignCFDMForceSignHFDMLockSignCFDMStatusHPMDistrSegmC_c---- ---- -- SchedulerZone -- SplitHeat-- SplitCool-- EnableHeat -------------------OOO-------------------OOO---------------OOO -- EngDemAir-- VaFreshAirDem-----------------OOO--------OOODem Trf TUVentilation --- TmpSupplAirSetpSetValFreshAirDemTUDistrSegmV_e---
**-- EnableCool** **---------------OOO** -- LockSignSATC-- ForceSignSATC **-------------------------** ------------ForceSignSATCLockSignSATCStatus??? **----- **

-- StatusSATC -----------------
###### Sensors -- TempRoom -------------------X ------------------------------------------------------------------------------------------------------------MM

**-- TempDischargeAir ---------------** **------------------------------------------------------------------------------------------------------------OO**
**-- PresenceStatus** **--------OOO** **-- ActPosSetpDischAir** **----MMMActuators**
**-- WindowStatus** **----------OOO** **-- ActPosSetpHeatStA** **----OOO**

**-- ActPosSetpHeatStB** **----OOO**
**-- ActPosSetpCoolStA** **----OOO**
**-- ActPosSetpCoolStB** **----OOO**

**-- TempRmSetpAct** **-------XXX** HMI

###### MMI -- TmpRmSetpUserAbs ---OOO -- HVACModeAct-- ContrModeAct ----------XXX----------XXX

**-- TmpRmSetpUserOffs** **---OOO** **-- HeatCoolMode** **----------XXX**
**-- HVACModeUser** **---------OOO** **-- AirFlowDischarge** **-------XXX**
**-- ComfProlUser** **-----------OOO** **-- ValueEnergyDem** **--------XXX**

**-- AirFlowMSExtr** **------------XXX[VAV-Contr]**

###### Extr Air
 Apartment; Room; Sub_Zone

 © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 24 f 27

|Sensors|Col2|
|---|---|

|Prog to<br>HVAC<br>Conver|s|
|---|---|
|||
|HVAC<br>mergen<br>Source|cy<br>|

|Sensor|s|
|---|---|

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|||||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAH**<br>**-----------------OOO**<br>D|||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAH**<br>**-----------------OOO**<br>D|Air Heat<br>Energy<br>em Trf TU|Air Heat<br>Energy<br>em Trf TU|
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAC**<br>**-----------------OOO**<br>D|||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAC**<br>**-----------------OOO**<br>D|Air Cool<br>Energy<br>em Trf TU|Air Cool<br>Energy<br>em Trf TU|
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemRD**<br>**-----------------OOO**<br> <br>D|||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemRD**<br>**-----------------OOO**<br> <br>D|RAD Heat<br>Energy<br>em Trf TU|RAD Heat<br>Energy<br>em Trf TU|
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemCC**<br>**-----------------OOO**<br> <br>D|||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemCC**<br>**-----------------OOO**<br> <br>D|CLC Cool<br>Energy<br>em Trf TU|CLC Cool<br>Energy<br>em Trf TU|
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAir**<br>**-----------------OOO**<br>**-- VaFreshAirDem**<br>**--------OOO**<br>**-- LockSignSATC**<br>**-----------****--**<br>**-- ForceSignSATC**<br>**----------****--**<br>**-- StatusSATC ----------------****--**<br><br>D|||
|**O**<br>**  O**<br>**  O**<br>**  O**<br>** O**<br>**O**<br>**O**<br>**O**<br>**O**<br><br><br><br>VAV<br>Control<br>Discharge<br>Air|**-- EngDemAir**<br>**-----------------OOO**<br>**-- VaFreshAirDem**<br>**--------OOO**<br>**-- LockSignSATC**<br>**-----------****--**<br>**-- ForceSignSATC**<br>**----------****--**<br>**-- StatusSATC ----------------****--**<br><br>D|Ventilation<br>em Trf TU|Ventilation<br>em Trf TU|

|MMI|Col2|
|---|---|


-----

##### g

###### Scheduler Interworking

 Scheduler Interworking

 Prog to -- xxxMode -------------------XXX Room xxx xxx
 xxx xxx

 Prog to -- xxxMode ------------------XXX Room xxx xxx
 xxx xxx

**-- BuildingMode** **-----------OOO** Prog to **-- HVACModeApartment; Room; Sub_Zone-------------XXX** Room Room xxx
**-- BuildingModeNext** **------OOO** HVAC **-- HVACModeNext** **---------XXX** Setpoint Optimiser Control
**-- OccupancyMode** **--------OOO** Convers **-- EnableComfort** **----------XXX** Manager
**-- OccupancyModeNext** **---OOO** **-- ContrModeApartment; Room; Sub_Zone-------------------** **----XX** **-------XX**

###### Apartment; Room; Sub_Zone

 Calendar HVAC -- HVACMode -------------XXX Room Room xxx
 Scheduler -- HVACModeNext ---------XXX Setpoint Optimiser Control

**-- EnableComfort** **----------XXX** Manager

###### Apartment; Room; Sub_Zone

 Calendar Abs -- TempRmSetpAbs --------XXX Room Room xxx
 RoomTemp -- TempRmSetpAbsNext --XXX Setpoint Optimiser Control
 Scheduler Manager
 TempDriven

 Apartment; Room; Sub_Zone

 © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 25 f 27

|Col1|Col2|Col3|Col4|Col5|o -- xxxMode -------------------XXX Room xxx xxx<br>xxx<br>- xxxMode ------------------XXX Room xxx xxx<br>xxx<br>ACAMpoadrtement; -R---o--o--m---;- -SXuXbX_ZRonoeom Room xxx|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||Prog t<br>xxx<br>**-**<br>og to<br>|Prog t<br>xxx<br>**-**<br>og to<br>|Prog t<br>xxx<br>**-**<br>og to<br>|o|o|o|**X**<br>Room<br>xxx|**X**<br>Room<br>xxx|**X**<br>Room<br>xxx|**X**<br>Room<br>xxx|**X**<br>Room<br>xxx|xxx|xxx|xxx|xxx|xxx|xxx<br>xx|xxx<br>xx|xxx<br>xx|
|||Prog t<br>xxx<br>**-**<br>og to<br>|**-**<br> o|**-**<br> o|**- xxx**|**- xxx**|**- xxx**|oom<br>xx|oom<br>xx|oom<br>xx|oom<br>xx||xxx|xxx|xxx|xxx||xx|xx|xx|
||Prog t<br>xxx|og t<br>|o|o|o|o|**X**<br>R<br>x|oom<br>xx|oom<br>xx|oom<br>xx|||xxx|xxx|xxx||x|xx|xx|xx|
||Prog t<br>xxx|og t<br>|||||||||||||||||||
||Prog t<br>xxx||**-- H**<br>|**-- H**<br>|_Apartment; Room; Sub_Z_<br>** ACMode**<br>**-------------XXX**<br> <br><br><br>|_Apartment; Room; Sub_Z_<br>** ACMode**<br>**-------------XXX**<br> <br><br><br>|_  one_<br>Room<br>|_  one_<br>Room<br>|_  one_<br>Room<br>||Room<br>|Room<br>|Room<br>|Room<br>||xxx<br>|xxx<br>|xxx<br>|xxx<br>||
|**O**<br>**O**<br>**O**<br>**O**<br> <br><br>C|Prog t<br>|o<br>|o<br>|o<br>|o<br>|_  b_Z_<br>**X**<br><br><br>|_  one_<br>Room<br>|_  one_<br>Room<br>|_  one_<br>Room<br>||Room<br>|Room<br>|Room<br>|Room<br>||xxx<br>|xxx<br>|xxx<br>|xxx<br>|xxx<br>|
|**O**<br>**O**<br>**O**<br>**O**<br> <br><br>C|HVAC<br>onver|s|s|s|s|<br>_  ne_<br>**X**<br>**X**<br>**---**<br><br>Setpoint<br>Manager|<br>etpoint|<br>etpoint||**X**<br>**----**<br>Optimiser|ptimiser|ptimiser|ptimiser||**X**<br>Control|ontrol|ontrol|ontrol|||
|**O**<br>**O**<br>**O**<br>**O**<br> <br><br>C|HVAC<br>onver|s|s|s|s|<br>_  ne_<br>**X**<br>**X**<br>**---**<br><br>Setpoint<br>Manager|<br>etpoint|<br>etpoint|**----X**|**----X**|**----X**|**----X**|**----X**|**---X**|**---X**|**---X**|**---X**|**---X**|||
|**O**<br>**O**<br>**O**<br>**O**<br> <br><br>C|HVAC<br>onver|s|s|s|s||||||||||||||||

|HVAC<br>Schedu|ler|
|---|---|

|Abs<br>RoomTe<br>Schedu|mp<br>ler|
|---|---|


-----

##### g

### 3 Interworking of Setpoint Managers (Temperature, Relative Humidity, Air Quality)

#### 3.1 Temperature Setpoints from Rooms, Relative Humidity and Air Quality centralised.

###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 26 f 27


-----

##### g

#### 3.2 Temperature and Air Quality Setpoints from Rooms, Relative Humidity centralised.

###### © C i ht 1999 2013 KNX A i ti A li ti D i ti 02 02 01 27 f 27


-----

