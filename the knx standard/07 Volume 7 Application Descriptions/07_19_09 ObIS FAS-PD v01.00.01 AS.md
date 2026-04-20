# Application Descriptions

## HVAC ObIS

 Fan Actuator Stepwise – Position Driven

Summary

This object is used to control a fan in one or more speed steps depending
on the continuous actuating values. This ObIS allows e.g. in combination
with the other ObIS for HVAC to control a fan coil unit with one or two
heat exchangers.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2002.04.04 Editorially restyled, based on "04-02_ObIS_FAS_PD.doc"
1.0 2009.06.16 Editorial update in view of inclusion in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

None.

Filename: 07_19_09 ObIS FAS-PD v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 17

|Version|Date|Modifications|
|---|---|---|
|1.0|2002.04.04|Editorially restyled, based on "04-02_ObIS_FAS_PD.doc"|
|1.0|2009.06.16|Editorial update in view of inclusion in the KNX Specifications v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

**1** **Application Model(s) .............................................................................................................. 4**

**2** **ObIS Function Model(s) ........................................................................................................ 5**
2.1 ObIS Function Model "Fan Actuator Stepwise-Position Driven" .................................. 5
2.1.1 Aims and objectives ............................................................................................ 5
2.1.2 Functional specification ...................................................................................... 5
2.1.3 Constraints .......................................................................................................... 5
2.1.4 Functional Block ................................................................................................. 6
2.1.5 Priority of the Inputs ........................................................................................... 7
2.1.6 Properties ............................................................................................................ 7

**3** **Datapoint Type(s) ................................................................................................................. 16**
3.1 Datapoint Type "Fan Actuator Status" ......................................................................... 16
3.2 Datapoint Type "8-bit unsigned integer with special function for zero" ...................... 16
3.3 Datapoint Type “Boolean” ........................................................................................... 17


-----

### 1 Application Model(s)

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

**FAS-PD**

**HCS** **Fan**
**Heating** **Actuator**
**Cooling** **Stepwise**
**Switchover** **Pos.-Driven**

**Figure 1 - Application of the ObIS „Fan Actuator Stepwise-Position Driven“**
**for Individual Room Temperature Control with a Fan Coil Unit**


-----

### 2 ObIS Function Model(s)

#### 2.1 ObIS Function Model "Fan Actuator Stepwise-Position Driven"

##### 2.1.1 Aims and objectives
This object is used to control a fan in one or more speed steps depending on the continuous actuating
values. This ObIS allows e.g. in combination with the other ObIS for HVAC (see Figure 1) to control a
fan coil unit with one or two heat exchangers.

##### 2.1.2 Functional specification
This ObIS controls the fan speed in one or more speed steps depending on the continuous actuating
values. The fan speed steps may be the same as well for heating mode as for cooling mode (if no
parameters for cooling mode are defined). The fan speed steps may be different for heating and for
cooling mode if separate parameters are defined.

The actual fan speed step also depends on the optional inputs „Manual Override Enable“ and „Manual
Override Fan Speed“ and on the input „Forced Fan Speed Step Enable“ and the parameter „Forced Fan
Speed Step“. The priority of these inputs is defined in clause 2.1.5 "Priority of the Inputs" below. The
FAS status information is an optional output.

##### 2.1.3 Constraints
No constraints are defined for the ObIS Fan Actuator Stepwise – Position Driven.


-----

##### 2.1.4 Functional Block

**Input(s)** **Fan Actuator Stepwise** **Output(s)**

**Position Driven**

Continuous Actuating Value 5.001 5.010

--------- CAV FSS --------- Fan Speed Step

Continuous Actuating Value 5.001 See 3.1 Fan Actuator Stepwise

Cooling --------- CAVC FASS --------- Status

See 3.3

Manual Override Enable -------- MOE

5.001

Manual Override Fan Speed -------- MOFS

See 3.3

Forced Fan Speed Step Enable -------- FFSSE

**Parameter(s)**

5.010

Number of Fan Speed Steps --------- NOFSS

5.001

CAV for FSS 0 → 1 -------- CAVFSS01

5.001

CAV for FSS 1 → 2 -------- CAVFSS12

5.001

CAV for FSS (n-1) → n -------- CAVFSSn1n

5.001

CAV for FSS n → (n-1) -------- CAVFSSnn1

5.001

CAV for FSS 2 → 1 -------- CAVFSS21

5.001

CAV for FSS 1 → 0 -------- CAVFSS10

5.001

Cooling CAV for FSS 0 → 1 -------- CCAVFSS01

5.001

Cooling CAV for FSS 1 → 2 -------- CCAVFSS12

5.001

Cooling CAV for FSS (n-1) → n -------- CCAVFSSn1n

5.001

Cooling CAV for FSS n → (n-1) -------- CCAVFSSnn1

5.001

Cooling CAV for FSS 2 → 1 -------- CCAVFSS21

5.001

Cooling CAV for FSS 1->0 -------- CCAVFSS10

5.010

Forced Fan Speed Step -------- FFSS

Transmit Cycle Time See 3.2

Fan Speed Step ------- TCTFSS

Transmit FASS See 3.3
On Change Enable -------- TFASSE

See 3.2

Transmit Cycle Time FASS ------- TCTFASS


-----

##### 2.1.5 Priority of the Inputs
The Fan Speed Step is controlled by the Inputs “Manual Override Enable” and “Forced Fan Speed Step
Enable”. The priority of these inputs is shown in the table below:

**Table 1 – Priority rules for the ObIS FAS-PD**

**Manual Override Enable** **Forced Fan Speed**

**Fan Speed Step**

**MOE** **Step Enable FFSSE**

0 0 Fan Speed Step FSS
0 1 Forced Fan Speed Step FFSS
1 0 Manual Override Fan Speed
MOFS
1 1 Manual Override Fan Speed
MOFS

##### 2.1.6 Properties

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**1** **PID_OBJECT_TYPE** Object Type KNX_PropD M
ataType

**Input(s)**

**Datapoint**
**ID** **Name** **Abbr.** **Description** **M/O**

**Type**

**<tbd>** **PID_VALUE_ACTUATING_-** CAV Continuous 5.001 M
**CONTINUOUS** Actuating Value

**<tbd>** **PID_VALUE_ACTUATING_-** CAVC Continuous 5.001 O
**CONTINUOUS_COOLING** Actuating Value

Cooling

**<tbd>** **PID_OVERRIDE_MANUAL_ENABL** MOE Manual Override See 3.3 O
**E** Enable

**<tbd>** **PID_OVERRIDE_MANUAL_SPEED** MOFS Manual Override 5.001 O
**_FAN** Fan Speed

**<tbd>** **PID_FAN_SPEED_STEP_FORCED** FFSSE Forced Fan Speed See 3.3 O
**_ENABLE** Step Enable

**Output(s)**

|Manual Override Enable<br>MOE|Forced Fan Speed<br>Step Enable FFSSE|Fan Speed Step|
|---|---|---|
|0|0|Fan Speed Step FSS|
|0|1|Forced Fan Speed Step FFSS|
|1|0|Manual Override Fan Speed<br>MOFS|
|1|1|Manual Override Fan Speed<br>MOFS|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**1**|**PID_OBJECT_TYPE**||Object Type|KNX_PropD<br>ataType|M|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_VALUE_ACTUATING_-**<br>**CONTINUOUS **|CAV|Continuous<br>Actuating Value|5.001|M|
|**<tbd>**|<br>**PID_VALUE_ACTUATING_-**<br>**CONTINUOUS_COOLING**|CAVC|Continuous<br>Actuating Value<br>Cooling|5.001|O|
|**<tbd>**|**PID_OVERRIDE_MANUAL_ENABL**<br>**E **|MOE|Manual Override<br>Enable|See 3.3|O|
|**<tbd>**|<br>**PID_OVERRIDE_MANUAL_SPEED**<br>**_FAN**|MOFS|Manual Override<br>Fan Speed|5.001|O|
|**<tbd>**|<br>**PID_FAN_SPEED_STEP_FORCED**<br>**_ENABLE**|FFSSE|Forced Fan Speed<br>Step Enable|See 3.3|O|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd> **|**PID_SPEED_STEP_FAN**|FSS|Fan Speed Step|5.010|O|
|<br>**<tbd>**|<br>**PID_STATUS_FAN_ACTUATOR_-**<br>**STEPWISE **|FASS|Fan Actuator<br>Stepwise Status|See 3.1|O|


-----

**Parameter(s)**

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_NUMBER_OF_FAN_SPEED_-**<br>**STEPS **|NOFSS|Number of Fan<br>Speed Steps|EIS 14|M|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_0_TO_1 **|CAVFSS01|Continuous Actuating<br>Value for FSS 0 to 1|5.001|M|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_1_TO_2 **|CAVFSS12|Continuous Actuating<br>Value for FSS 1to 2|5.001|O|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_N-1_TO_N**|CAVFSSn1n|Continuous Actuating<br>Value for FSS (n-1)<br>to n|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_N_TO_N-1**|CAVFSSnn1|Continuous Actuating<br>Value for FSS n to n-<br>1|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_2_TO_1 **|CAVFSS21|Continuous Actuating<br>Value for FSS 2to 1|5.001|O|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_**<br>**CONTINUOUS_FSS_1_TO_0 **|CAVFSS10|Continuous Actuating<br>Value for FSS 1to 0|5.001|M|
|**<tbd>**|<br>**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_0_TO_1**|CCAVFSS01|Continuous Actuating<br>Value Cooling for<br>FSS 0 to 1|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_1_TO_2**|CCAVFSS12|Continuous Actuating<br>Value Cooling for<br>FSS 1 to 2|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_N-1_TO_N**|CCAVFSSn1<br>n|Continuous Actuating<br>Value Cooling for<br>FSS (n-1) to n|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_N_TO_N-1**|CCAVFSSnn<br>1|Continuous Actuating<br>Value Cooling for<br>FSS n to n-1|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_2_TO_1**|CCAVFSS21|Continuous Actuating<br>Value Cooling for<br>FSS 2to 1|5.001|O|
|**<tbd>**|**PID_ACTUATING_VALUE_CONTIN**<br>**UOUS_COOLING_FSS_1_TO_0**|CCAVFSS10|Continuous Actuating<br>Value Cooling for<br>FSS 1 to 0|5.001|O|
|**<tbd>**|**PID_FAN_SPEED_STEP_FORCED**|FFSS|Forced Fan Speed<br>Step|5.010|O|
|**<tbd>**|**PID_TRANSMIT_CYCLE_TIME_-**<br>**SPEED_STEP_FAN**|TCTFSS|Transmit Cycle Time<br>Fan Speed Step|See 3.2|O|
|**<tbd>**|<br>**PID_ENABLE_TRANSMIT_FASS_**<br>**ON_CHANGE **|TFASSE|Transmit FASS on<br>Change Enable|See 3.3|O|
|**<tbd>**|<br>**PID_TRANSMIT_CYCLE_TIME_-**<br>**FASS **|TCTFASS|Transmit Cycle Time<br>FASS|See 3.2|O|


-----

**2.1.6.1** **Property PID_VALUE_ACTUATING_CONTINUOUS** **CAV**
Unit: %
Range: 0..100
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: Fan Coil Units may be supplied by two pipes or three/four pipes.
Fan Coil Units with two pipes:
This is the positioning command used for calculating the fan speed steps
based on the parameters CAVFSS01 .. CAVFSSn1n and CAVFSSnn1 ..
CAVFSS10.
Fan Coil Units with three/four pipes:
This is the positioning command for the heating valve, used for calculating
the fan speed steps based on the parameters CAVFSS01 .. CAVFSSn1n and
CAVFSSnn1 .. CAVFSS10.

**2.1.6.2** **Property PID_VALUE_ACTUATING_CONTINUOUS_COOLING** **CAVC**
Unit: %
Range: 0 ... 100
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: This is the positioning command for the cooling valve (see ObIS TPIC). It is
used for calculating the fan speed steps either based on the parameters
CAVFSS01 .. CAVFSSn1n and CAVFSSnn1 .. CAVFSS10 or (in case of
different speeds for the cooling mode) based on the parameters
CCAVFSS01 .. CCAVFSSn1n and CCAVFSSnn1 .. CCAVFSS10.
This communication object CAVC is only available in Fan Coil Units with
three/four pipes.

**2.1.6.3** **Property PID_OVERRIDE_MANUAL_ENABLE** **MOE**
Unit    Range: 0,1
Default Value: 0
Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: This object serves to switch over the fan from automatic mode (0) to manual
mode (1).
In manual mode the input object Manual Override Fan Speed MOFS is used
for calculating the fan speed step.


-----

**2.1.6.4** **Property PID_OVERRIDE_MANUAL_SPEED_FAN** **MOFS**
Unit    Range: 0 ... n
Default Value:    Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: The input Manual Override Fan Speed MOFS is used for manual control of
the Fan Speed Step FSS.

**2.1.6.5** **Property PID_FAN_SPEED_STEP_FORCED_ENABLE** **FFSSE**
Unit    Range: 0,1
Default Value: 0
Communication Object/Parameter: C
Input/Output: I
R/W Rate < 1/day
Description: This input Forced Fan Speed Step Enable FFSSE is used to switch the Fan
Speed Step to the predefined speed step. This speed step is defined as
parameter FFSS (see 2.1.6.21)

**2.1.6.6** **Property PID_SPEED_STEP_FAN** **FSS**
Unit:    Range: 0 ... n
Default Value:    Communication Object/Parameter: C
Input/Output: O
R/W Rate >> 1/day
Description: This is the actual fan speed step.

**2.1.6.7** **Property PID_STATUS_FAN_ACTUATOR_STEPWISE** **FASS**
Unit:    Range:   Default Value:    Communication Object/Parameter: C
Input/Output: O
R/W Rate >> 10/day
Description: This object contains several information about the fan actuator status (see
3.1).

**2.1.6.8** **Property PID_NUMBER_OF_FAN_SPEED_STEPS** **NOFSS**
Unit:    Range: min: 1 .. 255
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the number of the fan speed steps.


-----

**2.1.6.9** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_0_TO_1**
**CAVFSS01**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched to step 1. This parameter is used for both heating and
cooling if no separate parameters for cooling (CCAVFSS01 ...
CCAVFSSn1n) are available or in case of a two pipes fan coil unit.

**2.1.6.10** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_1_TO_2**
**CAVFSS12**
Unit: %
Range: min 0 ... 60
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched to step 2. This parameter is used for both heating and
cooling if no separate parameters for cooling (CCAVFSS01 ...
CCAVFSSn1n) are available or in case of a two pipes fan coil unit.

**2.1.6.11** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_N-1_TO_N**
**CAVFSSn1n**
Unit: %
Range: min 0 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched to step n. This parameter is used for both heating and
cooling if no separate parameters for cooling (CCAVFSS01 ...
CCAVFSSn1n) are available or in case of a two pipes fan coil unit.


-----

**2.1.6.12** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_N_TO_N-1**
**CAVFSSnn1**
Unit: %
Range: min 0 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step n to step n-1. This parameter is used
for both heating and cooling if no separate parameters for cooling
(CCAVFSS01 ... CCAVFSSn1n) are available or in case of a two pipes
fan coil unit.

**2.1.6.13** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_2_TO_1**
**CAVFSS21**
Unit: %
Range: min 0 ... 60
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step 2 to step 1. This parameter is used
for both heating and cooling if no separate parameters for cooling
(CCAVFSS01 ... CCAVFSSn1n) are available or in case of a two pipes
fan coil unit.

**2.1.6.14** **Property PID_ACTUATING_VALUE_CONTINUOUS_FSS_1_TO_0**
**CAVFSS10**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step 1 to step 0 (off) . This parameter is
used for both heating and cooling if no separate parameters for cooling
(CCAVFSS01 ... CCAVFSSn1n) are available or in case of a two pipes
fan coil unit.


-----

**2.1.6.15** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_ FSS_0_TO_1**
**CCAVFSS01**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value for cooling up from
which the fan speed is switched to step 1. This parameter is only used in
case of a three/ four pipes fan coil unit and if different steps for cooling are
necessary.

**2.1.6.16** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_FSS_1_TO_2**
**CCAVFSS12**
Unit: %
Range: min 0 ... 60
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value for cooling up from
which the fan speed is switched to step 2. This parameter is only used in
case of a three/ four pipes fan coil unit and if different steps for cooling are
necessary.

**2.1.6.17** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_FSS_N-**
**1_TO_N**
**CCAVFSSn1n**
Unit: %
Range: min 0 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value for cooling up from
which the fan speed is switched to step n. This parameter is only used in
case of a three/ four pipes fan coil unit and if different steps for cooling are
necessary.


-----

**2.1.6.18** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_FSS_N_TO_**
**N-1**
**CCAVFSSnn1**
Unit: %
Range: min 0 ... 100
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step n to step n-1. This parameter is only
used in case of a three/four pipes fan coil unit and if different steps for
cooling are necessary.

**2.1.6.19** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_FSS_2_TO_1**
**CCAVFSS21**
Unit: %
Range: min 0 ... 60
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step 2 to step 1. This parameter is only
used in case of a three/four pipes fan coil unit and if different steps for
cooling are necessary.

**2.1.6.20** **Property PID_ACTUATING_VALUE_CONTINUOUS_COOLING_FSS_1_TO_0**
**CCAVFSS10**
Unit: %
Range: min 0 ... 30
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines the continuous actuating value up from which the
fan speed is switched down from step 1 to step 0 (off). This parameter is
only used in case of a three/four pipes fan coil unit and if different steps
for cooling are necessary.

**2.1.6.21** **Property PID_FAN_SPEED_STEP_FORCED** **FFSS**
Unit    Range: 0 ... n
Default Value:    Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter is used as Fan Speed Step FSS if the Forced Fan Speed
Step Enable FFSSE object is set.


-----

**2.1.6.22** **PID_TRANSMIT_CYCLE_TIME_SPEED_STEP_FAN** **TCTFSS**
Unit: minutes
Range: min 0, 15..60
Default Value: 0
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The Fan Speed Step FSS will be transmitted cyclically after the given
cycle time. It will not be transmitted cyclically if the cycle time is set to
“0”.

**2.1.6.23** **PID_ENABLE_TRANSMIT_FASS_ON_CHANGE** **TFASSE**
Unit:    Range: 0,1
Default Value: 1
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This parameter defines whether the Fan Actuator Stepwise Status FASS
will be transmitted on change (1) or not (0).

**2.1.6.24** **PID_TRANSMIT_CYCLE_TIME_FASS** **TCTFASS**
Unit: minutes
Range: min 0, 15..60
Default Value: 0
Communication Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The status object Fan Actuator Stepwise Status FASS will be transmitted
cyclically after the given cycle time. It will not be transmitted cyclically if
the cycle time is set to “0”.


-----

### 3 Datapoint Type(s)

#### 3.1 Datapoint Type "Fan Actuator Status"

Format: 1 octet

EEEE DCBA

Encoding: See below

Range: A..D= {0,1}

Unit: 
**Datapoint Types**

Code: Symbol: Encoding:

<tbd> <tbd> A : 0 = automatic; 1 = manual/forced [(1)]
B : 0 = heating; 1 cooling
C : 0 =CAV = 0 1 = CAV > 0 (0 = heating valve closed)
D : 0 =CAVC = 0 1 = CAVHC > 0 (0 = cooling valve closed)
E : reserved; shall be 0.

(1)   B = 1 if MOE or FFSSE = 1

#### 3.2 Datapoint Type "8-bit unsigned integer with special function for zero"

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>EEEE DCBA<br>See below<br>A..D= {0,1}<br>-|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|
|<tbd>|<tbd>|A :<br>B :<br>C :<br>D :<br>E :<br>0 = automatic; 1 = manual/forced(1) <br>0 = heating; 1 cooling<br>0 =CAV = 0 1 = CAV > 0 (0 = heating valve closed)<br>0 =CAVC = 0 1 = CAVHC > 0 (0 = cooling valve closed)<br>reserved; shall be 0.|

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>VVVVVVVV<br>See below<br>V = [0…255] binary encoded<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|Range:|Unit:|
|<tbd>|<tbd>|"time"|1…255<br>0 = corresponding function disabled|1 min|


-----

1.003 FFSSE (Forced Fan Speed Step Enable) disable enable

|3.3 Datapoint Type “Boolean”|Col2|Col3|Col4|
|---|---|---|---|
|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding: V = 0|V = 1|
|1.003|MOE (Manual Override Enable)|disable|enable|
|1.003|HCM (Heating/ Cooling Mode)|cooling|heating|
|1.003|TFASSE (Transmit On Change Enable)|disable|enable|
|1.003|FFSSE (Forced Fan Speed Step Enable)|disable|enable|


-----

