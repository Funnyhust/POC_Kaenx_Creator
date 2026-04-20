## Application Descriptions
# 77

### HVAC ObIS
# 1199

### Fan Actuator Continuous – Position Driven
# 1100

Summary

This object is used to control a fan continuously depending on the
continuous actuating values. This ObIS allows e.g. in combination with
the other ObIS for HVAC to control a fan coil unit with one or two heat
exchangers.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

##### Document updates

**Version** **Date** **Modifications**

1.0 2002.04.04 Editorially restyled, based on "05-02_ObIS_FAC-PD.doc"
1.0 2009.06.15 Editorial update in view of inclusion in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

##### References

None.

Filename: 07_19_10 ObIS FAC-PD v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 13

|Version|Date|Modifications|
|---|---|---|
|1.0|2002.04.04|Editorially restyled, based on "05-02_ObIS_FAC-PD.doc"|
|1.0|2009.06.15|Editorial update in view of inclusion in the KNX Specifications v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

##### Contents

**1** **Application Model(s) .............................................................................................................. 4**

**2** **ObIS Function Model(s) ........................................................................................................ 5**
2.1 ObIS Function Model "Fan Actuator Continuous-Position Driven" .............................. 5
2.1.1 Aims and objectives ............................................................................................ 5
2.1.2 Functional specification ...................................................................................... 5
2.1.3 Constraints .......................................................................................................... 5
2.1.4 Functional Block ................................................................................................. 6
2.1.5 Priority of the Inputs ........................................................................................... 6
2.1.6 Properties ............................................................................................................ 7

**3** **Datapoint Type(s) ................................................................................................................. 12**
3.1 Datapoint Type "Fan Actuator Status" ......................................................................... 12
3.2 Datapoint Type "8-bit unsigned integer with special function for zero" ...................... 12
3.3 Datapoint Type “Boolean” ........................................................................................... 13


-----

#### 1 Application Model(s)

**RTV** **TPIC** **CVA**
**Room** **Temperature** **Continuos**
**Temperature** **PI** **Valve**
**Value** **Control** **Actuator**

**_Heating_**

**RTS** **TPIC** **CVA**
**Room** **Temperature** **Continuos**
**Temperature** **PI** **Valve**
**Setpoint** **Control** **Actuator**

**_Cooling_**

**FAC-PD**

**HCS** **Fan**
**Heating** **Actuator**
**Cooling** **Continuous**
**Switchover** **Pos.-Driven**

**Figure 1 - Application of the ObIS „Fan Actuator Continuous-Position Driven“**
**for Individual Room Temperature Control with a Fan Coil Unit**


-----

#### 2 ObIS Function Model(s)

##### 2.1 ObIS Function Model "Fan Actuator Continuous-Position Driven"

###### 2.1.1 Aims and objectives
This object is used to control a fan continuously depending on the continuous actuating values. This ObIS
allows e.g. in combination with the other ObIS for HVAC (see Figure 1) to control a fan coil unit with
one or two heat exchangers.

###### 2.1.2 Functional specification
This ObIS controls the fan speed continuously depending on the continuous actuating values. The fan
speed may be the same as well for heating mode as for cooling mode (if no parameters for cooling mode
are defined). The fan speed will be different for heating and for cooling mode if separate parameters are
defined.

The fan speed also depends on the optional Inputs „Manual Override Enable“ and „Manual Override Fan
Speed“ and on the Input „Forced Fan Speed Enable“ and the parameter „Forced Fan Speed“. The priority
of these Inputs is defined in clause 2.1.5 "Priority of the Inputs" below. The FAC status information is an
optional output.

###### 2.1.3 Constraints
No constraints are defined for the ObIS Fan Actuator Continuous – Position Driven.


-----

###### 2.1.4 Functional Block

**Input(s)** **Fan Actuator**

**Continuous**
**Position Driven**

Continuous Actuating Value DPT

5.001 CAV FSP
--------
Continuous Actuating Value DPT

Cooling 5.001 CAVC FACS

--------
See 3.3

Manual Override Enable -------- MOE

DPT

Manual Override Fan Speed 5.001 MOS

-------
See 3.3

Forced Fan Speed Enable -------- FFSE

**Parameter(s)**

DPT

CAV for FSP = 0% 5.001 CAVFS0

-------
DPT

CAV for FSP = 100% 5.001 CAVFS100

-------
DPT

Cooling CAV for FSP = 0% 5.001 CCAVFS0

-------
DPT

Cooling CAV for FSP = 100% 5.001 CCAVFS10

-------- 0

DPT

Forced Fan Speed 5.001 FFS

-------
DPT

Delta Transmit Fan Speed 5.001 DTFS

-------
See 3.3

Transmit Cycle Time Fan Speed ------- TCTFS

Transmit FACS see 3.4
On Change Enable -------- TFACSE

See 3.3

Transmit Cycle Time FACS ------- TCTFACS


DPT
5.001
--------
See 3.1
--------

**Output(s)**

Fan Speed in Percent

Fan Actuator Continuous
Status


###### 2.1.5 Priority of the Inputs
The Fan Speed is controlled by the Inputs “Manual Override Enable” and “ Forced Fan Speed Enable”.
The priority of these Inputs is shown in the table below:

**Table 1 - Priority rules for the ObIS FAC-PD**

**Manual Override Enable** **Forced Fan Speed Enable**

**Fan Speed**

**MOE** **FFSE**

0 0 Fan Speed in Percent FSP
0 1 Forced Fan Speed FFS
1 0 Manual Override Fan Speed MOS
1 1 Manual Override Fan Speed MOS

|Manual Override Enable<br>MOE|Forced Fan Speed Enable<br>FFSE|Fan Speed|
|---|---|---|
|0|0|Fan Speed in Percent FSP|
|0|1|Forced Fan Speed FFS|
|1|0|Manual Override Fan Speed MOS|
|1|1|Manual Override Fan Speed MOS|


-----

###### 2.1.6 Properties

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**1** **PID_OBJECT_TYPE** Object Type KNX_PropD M
ataType

**Input(s)**

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**<tbd>** **PID_VALUE_ACTUATING_-** CAVH Continuous Actuating DPT 5.001 M
**CONTINUOUS_HEATING** Value Heating

**<tbd>** **PID_VALUE_ACTUATING_-** CAVC Continuous Actuating DPT 5.001 O
**CONTINUOUS_COOLING** Value Cooling

**<tbd>** **PID_OVERRIDE_MANUAL_ENABL** MOE Manual Override Enable See 3.3 O
**E**

**<tbd>** **PID_OVERRIDE_MANUAL_SPEED** MOS Manual Override Fan DPT 5.001 O
**_FAN** Speed

**<tbd>** **PID_FAN_SPEED_FORCED_ENAB** FFSE Forced Fan Speed See 3.3 O
**LE** Enable

**Output(s)**

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**<tbd>** **PID_SPEED_FAN_PERCENT** FSP Fan Speed in Percent DPT 5.001 O
**<tbd>** **PID_STATUS_FAN_ACTUATOR_-** FACS Fan Actuator Continuous See 3.1 O
**CONTINUOUS** Status

**Parameter(s)**

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**<tbd>** **PID_ACTUATING_VALUE_-** CAVFS0 Continuous Actuating DPT 5.001 M
**CONTINUOUS_FSP0** Value for FSP = 0%

**<tbd>** **PID_ACTUATING_VALUE_-** CAVFS100 Continuous Actuating DPT 5.001 M
**CONTINUOUS_FSP100** Value for FSP = 100%

**<tbd>** **PID_ACTUATING_VALUE_-** CCAVFS0 Continuous Actuating DPT 5.001 O
**CONTINUOUS_FSP0_COOLING** Value for FSP = 0 %

at Cooling

**<tbd>** **PID_ACTUATING_VALUE_-** CCAVFS1 Continuous Actuating DPT 5.001 O
**CONTINUOUS_FSP100_COOLING** 00 Value for FSP = 100 %

at Cooling

**<tbd>** **PID_FAN_SPEED_FORCED** FFS Forced Fan Speed DPT 5.001 O
**<tbd>** **PID_TRANSMIT_DELTA_SPEED_-** DTFS Delta Transmit Fan DPT 5.001 O
**FAN** Speed

**<tbd>** **PID_TRANSMIT_CYCLE_TIME_-** TCTFS Transmit Cycle Time See 3.2 O
**SPEED_FAN** Fan Speed

**<tbd>** **PID_ENABLE_TRANSMIT_FACS_** TFACSE Transmit FACS on See 3.3 O
**ON_CHANGE** Change Enable

**<tbd>** **PID_TRANSMIT_CYCLE_TIME_-** TCTFACS Transmit Cycle Time See 3.2 O
**FACS** FACS

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**1**|**PID_OBJECT_TYPE**||Object Type|KNX_PropD<br>ataType|M|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_VALUE_ACTUATING_-**<br>**CONTINUOUS_HEATING **|CAVH|Continuous Actuating<br>Value Heating|<br>DPT 5.001|M|
|**<tbd>**|<br>**PID_VALUE_ACTUATING_-**<br>**CONTINUOUS_COOLING **|CAVC|Continuous Actuating<br>Value Cooling|DPT 5.001|O|
|**<tbd>**|<br>**PID_OVERRIDE_MANUAL_ENABL**<br>**E **|MOE|Manual Override Enable|See 3.3|O|
|**<tbd>**|<br>**PID_OVERRIDE_MANUAL_SPEED**<br>**_FAN**|MOS|Manual Override Fan<br>Speed|DPT 5.001|O|
|**<tbd>**|<br>**PID_FAN_SPEED_FORCED_ENAB**<br>**LE**|FFSE|Forced Fan Speed<br>Enable|See 3.3|O|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd> **|**PID_SPEED_FAN_PERCENT**|FSP|Fan Speed in Percent|DPT5.001|O|
|<br>**<tbd>**|<br>**PID_STATUS_FAN_ACTUATOR_-**<br>**CONTINUOUS **|FACS|Fan Actuator Continuous<br>Status|See 3.1|O|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_ACTUATING_VALUE_-**<br>**CONTINUOUS_FSP0 **|CAVFS0|Continuous Actuating<br>Value for FSP =0%|DPT 5.001|M|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_-**<br>**CONTINUOUS_FSP100 **|CAVFS100|Continuous Actuating<br>Value for FSP = 100%|DPT 5.001|M|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_-**<br>**CONTINUOUS_FSP0_COOLING**|CCAVFS0|Continuous Actuating<br>Value for FSP = 0 %<br>at Cooling|DPT 5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_-**<br>**CONTINUOUS_FSP100_COOLING**|CCAVFS1<br>00|Continuous Actuating<br>Value for FSP = 100 %<br>at Cooling|DPT 5.001|O|
|**<tbd> **|**PID_FAN_SPEED_FORCED**|FFS|Forced Fan Speed|DPT5.001|O|
|<br>**<tbd>**|<br>**PID_TRANSMIT_DELTA_SPEED_-**<br>**FAN**|DTFS|Delta Transmit Fan<br>Speed|DPT 5.001|O|
|**<tbd>**|**PID_TRANSMIT_CYCLE_TIME_-**<br>**SPEED_FAN**|TCTFS|Transmit Cycle Time<br>Fan Speed|See 3.2|O|
|**<tbd>**|<br>**PID_ENABLE_TRANSMIT_FACS_**<br>**ON_CHANGE **|TFACSE|Transmit FACS on<br>Change Enable|See 3.3|O|
|**<tbd>**|<br>**PID_TRANSMIT_CYCLE_TIME_-**<br>**FACS **|TCTFACS|Transmit Cycle Time<br>FACS|See 3.2|O|


-----

**2.1.6.1** **Property PID_VALUE_ACTUATING_CONTINUOUS** **CAV**
Unit: %
Range: 0..100
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: Fan Coil Units may be supplied by two pipes or three/four pipes.
Fan Coil Units with two pipes:
This is the positioning command used for calculating the fan speed based on
the parameters CAVFS0 .. CAVFS100.
Fan Coil Units with three/four pipes:
This is the positioning command for the heating valve, used for calculating
the fan speed steps based on the parameters CAVFS0…CAVFS100.

**2.1.6.2** **Property PID_VALUE_ACTUATING_CONTINUOUS_COOLING** **CAVC**
Unit: %
Range: 0 ... 100
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: This is the positioning command for the cooling valve (see ObIS TPIC). It is
used for calculating the fan speed either based on the parameters CAVFS0
and CAVFS100 or (in case of different speeds for the cooling mode) based
on the parameters CCAVFS0 and CCAVFS100. This communication object
CAVC is only available in Fan Coil Units with three/four pipes.

**2.1.6.3** **Property PID_OVERRIDE_MANUAL_ENABLE** **MOE**
Unit    Range: 0,1
Default Value: 0
Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: This object serves to switch over the fan from automatic mode (0) to manual
mode (1). In manual mode the Input Manual Override Fan Speed MOS is
used for the Fan Speed in Percent FSP.

**2.1.6.4** **Property PID_OVERRIDE_MANUAL_SPEED_FAN** **MOS**
Unit %
Range: 0 .:. 100
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: The Input Manual Override Fan Speed MOS is used for manual control of
the Fan Speed in Percent FSP.


-----

**2.1.6.5** **Property PID_FAN_SPEED_FORCED_ENABLE** **FFSE**
Unit    Range: 0,1
Default Value: 0
Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: This Input Forced Fan Speed Enable FFSE is used to switch the Fan Speed
in Percent FSP to a predefined value. This value is defined as parameter
FFS (see 2.1.6.12).

**2.1.6.6** **Property PID_SPEED_FAN_PERCENT** **FSP**
Unit: %
Range: 0-100
Default Value:    Communication Object/Parameter: C
Input/Output: O
R/W Rate >> 1/day
Description: .This is the actual fan speed in percent.

**2.1.6.7** **Property PID_STATUS_FAN_ACTUATOR_CONTINUOUS** **FACS**
Unit:    Range:   Default Value:    Communication Object/Parameter: C
Input/Output: O
R/W Rate >> 10/day
Description: This object contains several information about the fan actuator status (see
3.1).

**2.1.6.8** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSP0** **CAVFS0**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up to which the fan
speed is 0 %. This parameter is used for both heating and cooling if no
separate parameters for cooling (CCAVFS0 and CCAVFS100) are
available.


-----

**2.1.6.9** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSP100** **CAVFS100**
Unit: %
Range: min 1 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value at which the fan
speed becomes 100 %. This parameter is used for both heating and cooling
if no separate parameters for cooling (CCAVFS0 and CCAVFS100) are
available.

**2.1.6.10** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSP0_COOLING**
**CCAVFS0**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value for cooling mode up
to which the fan speed is 0 %.

**2.1.6.11** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSP100_COOLING**
**CCAVFS100**
Unit: %
Range: min 1 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value for cooling mode at
which the fan speed becomes 100 %.

**2.1.6.12** **Property PID_FAN_SPEED_FORCED** **FFS**
Unit %
Range: 0 .. 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter is used as Fan Speed in Percent FSP if the Forced Fan
Speed Enable FFSE object is set.


-----

**2.1.6.13** **PID_TRANSMIT_DELTA_SPEED_FAN** **DTFS**
Unit: %
Range: min 0 ... 20
Default Value: 5
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The Fan Speed in Percent FSP will be transmitted automatically if the
difference between the last transmitted FSP and the current FSP is greater
than the given delta value. It will not be transmitted automatically if DTFS
is set to “0”.

**2.1.6.14** **PID_TRANSMIT_CYCLE_TIME_SPEED_FAN** **TCTFS**
Unit: minutes
Range: min 0, 15..60
Default Value: 0
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The Fan Speed in Percent FSP will be transmitted cyclically after the given
cycle time. It will not be transmitted cyclically if the cycle time is set to
“0”.

**2.1.6.15** **PID_ENABLE_TRANSMIT_FACS_ON_CHANGE** **TFACSE**
Unit:    Range: 0,1
Default Value: 1
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The parameter defines whether the Fan Actuator Continuous Status FACS
will be transmitted on change (1) or not (0).

**2.1.6.16** **PID_TRANSMIT_CYCLE_TIME_FACS** **TCTFACS**
Unit: minutes
Range: min 0, 15..60
Default Value: 0
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The status object Fan Actuator Continuous Status FACS will be
transmitted cyclically after the given cycle time. It will not be transmitted
cyclically if the cycle time is set to “0”.


-----

#### 3 Datapoint Type(s)

##### 3.1 Datapoint Type "Fan Actuator Status"

Format: 1 octet

EEEE DCBA

Encoding: See below

Range: A..D= {0,1}

Unit: 
**Datapoint Types**

Code: Symbol: Encoding:

<tbd> <tbd> A : 0 = automatic; 1 = manual/forced (1)
B : 0 = heating; 1 cooling
C : 0 =CAV = 0 1 = CAV > 0 (0 = heating valve closed)
D : 0 =CAVC = 0 1 = CAVHC> 0 (0 = cooling valve closed)
E reserved; shall be 0

(1)   B = 1 if MOE or FFSE = 1

##### 3.2 Datapoint Type "8-bit unsigned integer with special function for zero"

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>EEEE DCBA<br>See below<br>A..D= {0,1}<br>-|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|
|<tbd>|<tbd>|A :<br>B :<br>C :<br>D :<br>E <br>0 = automatic; 1 = manual/forced (1)<br>0 = heating; 1 cooling<br>0 =CAV = 0 1 = CAV > 0 (0 = heating valve closed)<br>0 =CAVC = 0 1 = CAVHC> 0 (0 = cooling valve closed)<br>reserved; shall be 0|

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>VVVVVVVV<br>See below<br>V = [0…255] binary encoded<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|Range:|Unit:|
|<tbd>|<tbd>|"time"|1…255<br>0 = corresponding function disabled|1 min|


-----

1.003 FFSE (Forced Fan Speed Enable) disable enable

|3.3 Datapoint Type “Boolean”|Col2|Col3|Col4|
|---|---|---|---|
|Format:<br>1 bit<br>V <br>Encoding<br>: <br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding<br>: <br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding<br>: <br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding<br>: <br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding: V = 0|V = 1|
|1.003|MOE (Manual_Overide_Enable)|disable|enable|
|1.003|<br>TFACSE (Transmit On Change Enable)|disable|enable|
|1.003|FFSE (Forced Fan Speed Enable)|disable|enable|


-----

