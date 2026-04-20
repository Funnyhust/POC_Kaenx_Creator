# Application Descriptions

## HVAC ObIS

 Temperature On/Off Control

Summary

This object is applicable for room temperature control e.g. in room
thermostats.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2002.04.03 Editorially restyled; based on " 16-01_ObIS_TOOC.doc"
1.0 2009.05.16 Editorial update in view of inclusion in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

None.

Filename: 07_19_04 ObIS TOOC v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 13

|Version|Date|Modifications|
|---|---|---|
|1.0|2002.04.03|Editorially restyled; based on " 16-01_ObIS_TOOC.doc"|
|1.0|2009.05.16|Editorial update in view of inclusion inthe KNXSpecifications v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

**1** **Application Model(s) .............................................................................................................. 4**

**2** **ObIS Function Model(s) ........................................................................................................ 5**
2.1 ObIS Function Model "Temperature ON/OFF Control" ................................................ 5
2.1.1 Aims and objectives ............................................................................................ 5
2.1.2 Functional specification ...................................................................................... 5
2.1.3 Constraints .......................................................................................................... 5
2.1.4 Functional Block ................................................................................................. 6
2.1.5 Properties ............................................................................................................ 7

**3** **Datapoint Type(s) ................................................................................................................. 12**
3.1 1-Bit Datapoint Types ................................................................................................... 12
3.2 Datapoint Type "Controller Status" .............................................................................. 12
3.3 Datapoint Type "8 bit signed integer" .......................................................................... 13
3.4 Datapoint Type "8-bit unsigned multiplier without zero" ............................................ 13
3.5 Datapoint Type "8-bit unsigned multiplier with special function for zero" ................. 13


-----

### 1 Application Model(s)

**RTV** **TOOC** **OVA**
**Room** **Temperature** **On/Off**
**Temperature** **ON/** **Valve**
**Value** **OFF** **Actuator**

**Control**

**_Heating_**

**RTS** **TOOC** **OVA**
**Room** **Temperature** **On/Off**
**Temperature** **ON/** **Valve**
**Setpoint** **OFF** **Actuator**

**Control**

**_Cooling_**

**HCS**
**Heating**
**Cooling**
**Switchover**

**Figure 1 - Example for Individual Room Temperature Control**
**with Heating and Cooling with ON/OFF Control**


-----

### 2 ObIS Function Model(s)

#### 2.1 ObIS Function Model "Temperature ON/OFF Control"

##### 2.1.1 Aims and objectives
This object is applicable for room temperature control e.g. in room thermostats.

##### 2.1.2 Functional specification
This object can be used for ON/OFF control of a temperature e.g. of a room temperature. The actuating
value Y has only two discrete states: ON and OFF. Y depends on the controlled value X (temperature)
and the setpoint value W. The hysteresis may be defined as symmetrical or asymmetrical. Furthermore
the actuating value Y can be activated or deactivated by an optional Group Object. The type of control
(heating or cooling) is defined by a parameter.

Lower Setpoint
Hysteresis

Upper

X limit

Y

W

Lower
limit

Upper Hysteresis

**Figure 2 – On/Off control by a hysteresis**

##### 2.1.3 Constraints
No constraints are defined for the ObIS Temperature On/Off Control.


-----

##### 2.1.4 Functional Block

**Input(s)** **Temperature On/Off**

**Control**


**Output(s)**


Actual Room Temperature DPT 9.001 EIS 1 ON/OFF Actuating

Value -------- ARTV OAC --------- Command

Actual Temperature Setpoint DPT 9.001 ATSVH/ See 3.1

Value Heating/Cooling -------- ATSVC RA --------- Range Alarm

See 3.1 See 3.2

Heating/Cooling Mode -------- HCM CS --------- Controller Status

**Parameter(s)**

KNX 5.020

Lower Hysteresis See 3.3 LH

--------
KNX 5.020

Upper Hysteresis See 3.3 UH

--------
DPT 9.001

Lower Limit Controlled Value --------- LLCV

DPT 9.001

Upper Limit Controlled Value --------- ULCV

DPT 9.001

Lower Limit Setpoint Value --------- LLSV

DPT 9.001

Upper Limit Setpoint Value --------- ULSV

See 3.1

Controller Type --------- CT

Actuating EIS 1
Value if Controller Inactive --------- AVCI

See 3.4

Control Cycle Time --------- CCT

See 3.5

Cycle Time Transmit Y --------- CTTY


-----

##### 2.1.5 Properties

**Datapoint**
**ID** **Name** **Abbr. Description** **M/O**

**Type**

**1** **PID_OBJECT_TYPE** Object Type KNX_PropD M
ataType

**Input(s)**

**Datapoint**
**ID** **Name** **Abbr. Description** **M/O**

**Type**

**PID_VALUE_ACTUAL_ROOM_TEMP**
**<tbd>** ARTV [Actual Room Temperature ] DPT 9.001 M
**ERATURE** Value

Actual Room Temperature

ATSV

**PID_SETPOINT_VALUE_ACTUAL_** Setpoint Heating or
**<tbd>** H/ATS DPT 9.001 M
**TEMPERATURE_HEATING/COOLING** Actual Room Temperature

VC

Setpoint Cooling

**<tbd>** **PID_MODE _HEATING_COOLING** HCM Heating/Cooling Mode See 3.1 O
**Output(s)**

**Datapoint**
**ID** **Name** **Abbr. Description** **M/O**

**Type**

**<tbd>** **PID_COMMAND_ACTUATING_ON/OF** OAC ON/OFF Command EIS 1 M
**F**

**<tbd>** **PID_ALARM_RANGE** RA Range Alarm See 3.1 O
**PID_STATUS_CONTROLLER** CS Controller Status See 3.2 O
**Parameter(s)**

**Datapoint**
**ID** **Name** **Abbr. Description** **M/O**

**Type**

**<tbd>** **PID_HYSTERESIS_LOWER** LH Lower Hysteresis KNX 5.020 M/O
See 3.3

**<tbd>** **PID_HYSTERESIS_UPPER** UH Upper Hysteresis KNX 5.020 M/O
See 3.3

**<tbd>** **PID_VALUE_CONTROLLED_LOWER** LLCV Lower Limit Controlled DPT 9.001 O
**_LIMIT** Value

**<tbd>** **PID_VALUE_CONTROLLED_UPPER_** ULCV Upper Limit Controlled DPT 9.001 O
**LIMIT** Value

**<tbd>** **PID_VALUE_SETPOINT_LOWER_-** LLSV Lower Limit Setpoint DPT 9.001 O
**LIMIT** Value

**<tbd>** **PID_VALUE_SETPOINT_UPPER_LIMI** ULSV Upper Limit Setpoint DPT 9.001 O
**T** Value

**<tbd>** **PID_TYPE_CONTROLLER** CT Controller Type See 3.1 O
**<tbd>** **PID_VALUE_ACTUATING_CONTROL** AVCI Actuating Value if Control EIS 1 O
**_INACTIVE** Inactive

**<tbd>** **PID_TIME_CYCLE_CONTROL** CCT Control Cycle Time See 3.4 O
**<tbd>** **PID_TIME_CYCLE_TRANSMIT_Y** CTTY Cycle Time Transmit Y See 3.5 O

**2.1.5.1** **Property PID_** **VALUE_ACTUAL_ROOM_TEMPERATURE** **ARTV**
Unit: °C
Range: min. 5 … 35
Default Value:    Group Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: This value is the controlled value of the ON/OFF controller e.g. the actual
room temperature value.

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**1**|**PID_OBJECT_TYPE**||Object Type|KNX_PropD<br>ataType|M|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_VALUE_ACTUAL_ROOM_TEMP**<br>**ERATURE**|ARTV|Actual Room Temperature<br>Value|DPT 9.001|M|
|**<tbd>**|**PID_SETPOINT_VALUE_ACTUAL_**<br>**TEMPERATURE_HEATING/COOLING**|ATSV<br>H/ATS<br>VC|Actual Room Temperature<br>Setpoint Heating or<br>Actual Room Temperature<br>Setpoint Cooling|DPT 9.001|M|
|**<tbd> **|**PID_MODE_HEATING_COOLING **|HCM|Heating/Cooling Mode|See 3.1|O|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_COMMAND_ACTUATING_ON/OF**<br>**F **|OAC|ON/OFF Command|EIS 1|M|
|**<tbd> **|<br>**PID_ALARM_RANGE **|RA|Range Alarm|See 3.1|O|
||<br>**PID_STATUS_CONTROLLER**|CS|Controller Status|See 3.2|O|

|ID|Name|Abbr.|Description|Datapoint<br>Type|M/O|
|---|---|---|---|---|---|
|**<tbd>**|**PID_HYSTERESIS_LOWER**|LH|Lower Hysteresis|KNX 5.020<br>See 3.3|M/O|
|**<tbd>**|**PID_HYSTERESIS_UPPER**|UH|Upper Hysteresis|KNX 5.020<br>See 3.3|M/O|
|**<tbd>**|**PID_VALUE_CONTROLLED_LOWER**<br>**_LIMIT**|LLCV|Lower Limit Controlled<br>Value|DPT 9.001|O|
|**<tbd>**|<br>**PID_VALUE_CONTROLLED_UPPER_**<br>**LIMIT**|ULCV|Upper Limit Controlled<br>Value|DPT 9.001|O|
|**<tbd>**|<br>**PID_VALUE_SETPOINT_LOWER_-**<br>**LIMIT**|LLSV|Lower Limit Setpoint<br>Value|DPT 9.001|O|
|**<tbd>**|<br>**PID_VALUE_SETPOINT_UPPER_LIMI**<br>**T **|ULSV|Upper Limit Setpoint<br>Value|DPT 9.001|O|
|**<tbd> **|<br>**PID_TYPE_CONTROLLER**|CT|Controller Type|See 3.1|O|
|<br>**<tbd>**|<br>**PID_VALUE_ACTUATING_CONTROL**<br>**_INACTIVE**|AVCI|Actuating Value if Control<br>Inactive|EIS 1|O|
|**<tbd> **|<br>**PID_TIME_CYCLE_CONTROL **|CCT|Control Cycle Time|See 3.4|O|
|<br>**<tbd> **|<br>**PID_TIME_CYCLE_TRANSMIT_Y **|CTTY|Cycle Time Transmit Y|See 3.5|O|


-----

**2.1.5.2** **Property PID_SETPOINT_VALUE_ACTUAL_TEMPERATURE_HEATING**
**or PID_SETPOINT_VALUE_ACTUAL_TEMPERATURE_COOLING**
**ATSVH/ATSVC**
Unit: °C
Range: min. 5 … 35
Default Value:    Group Object/Parameter: C
Input/Output: I
R/W Rate >> 10/day
Description: This value is the setpoint value of the ON/OFF controller.

**2.1.5.3** **Property PID_MODE_HEATING_COOLING HCM**

Unit:    Range: 0;1
Default Value:    Group Object/Parameter: C
Input/Output: I
R/W Rate   - 1/day
Description: HCM is used in combination with the parameter CT (Controller Type) to
activate or deactivate the controller. The controller is active, if CT and
HCM have the same value. If the controller becomes inactive the actuating
value (OAC) is set to the state defined by the property „Actuating value if
controller is inactive“ (AVCI). (Coding of HCM see 3.1)

**2.1.5.4** **Property PID_COMMAND_ACTUATING_ON/OFF_** **OAC**
Unit:    Range: 0;1
Default Value:    Group Object/Parameter: C
Input/Output: O
R/W Rate >> 10/day
Description: This is the actuating value of the Temperature ON/OFF Control (TOOC).
OAC = f(ARTV,ATSVH/C,LH,UH,IO,CI,AVCI)
After reset/restart OVAY remains „0“ and will not be transmitted until
ATSVH/C and ARTV have been updated.

**2.1.5.5** **Property PID_ALARM_RANGE** **RA**
Unit:    Range: 0;1
Default Value: 0
Group Object/Parameter: C
Input/Output: O
R/W Rate < 1/day
Description: If either the setpoint value ATSVH/C or the controlled value ARTV are
below their minimum value or above their maximum value the „Range
Alarm“ RA will be set and bit 3 to bit 7 in the „Controller Status“ CS will
be set accordingly. (Coding of RA see: 3.1)
RA = 1: Range Alarm
RA = 0: no Range Alarm


-----

**2.1.5.6** **Property PID_STATUS_CONTROLLER** **CS**
Unit:    Range:   Default Value:    Group Object/Parameter: C
Input/Output: O
R/W Rate < 10/day
Description: Controller Status CS is an optional Group Object, which is read only
(coding of CS see 3.2).

**2.1.5.7** **Property PID_HYSTERESIS_LOWER LH**
Unit: 0,1 K
Range: min. 10 ... 20 (positive values only)
Default Value: free
Group Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The lower limit of the ON/OFF Control is defined as the difference of
setpoint value ATSVH/C minus lower hysteresis LH (see figure 2).
LH or UH can be set to zero, but at least one of them must be greater than
zero LH + UH > 0 !

**2.1.5.8** **Property PID_ HYSTERESIS_UPPER** **UH**
Unit: 0,1 K
Range: min. 10 ... 20 (positive values only)
Default Value: free
Group Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The upper limit of the ON/OFF Control is defined as the sum of setpoint
value ATSVH/C plus upper hysteresis UH (see figure 2).
LH or UH can be set to zero, but at least one of them must be greater than
zero LH + UH > 0 !

**2.1.5.9** **Property PID_VALUE_CONTROLLED_LOWER_LIMIT LLCV**
Unit: °C
Range:   Default Value: free
Group Object/Parameter: P
Input/Output: R
R/W Rate <<1/day
Description: This parameter is the minimum value of the Controlled Value ARTV which
can be operated by the TOOC. This value is read only and must be defined
by the manufacturer. If ARTV is lower than LLCV, ARTV must be set to
LLCV.


-----

**2.1.5.10** **Property PID_VALUE_CONTROLLED_UPPER_LIMIT** **ULCV**
Unit: °C
Range:   Default Value: free
Group Object/Parameter: P
Input/Output: R
R/W Rate <<1/day
Description: This parameter is the maximum value of the Controlled Value ARTV which
can be operated by the TOOC. This value is read only and must be defined
by the manufacturer. If ARTV is higher than ULCV, ARTV must be set to
ULCV.

**2.1.5.11** **Property PID_VALUE_SETPOINT_LOWER_ LIMIT** **LLSV**
Unit: °C
Range:   Default Value: free
Group Object/Parameter: P
Input/Output: R
R/W Rate <<1/day
Description: This parameter is the minimum value of the Setpoint Value SVY which can
be operated by the TOOC. This value is read only and must be defined by
the manufacturer. If SVY is lower than LLSV, SVY must be set to LLSV.

**2.1.5.12** **Property PID_VALUE_SETPOINT_UPPER_LIMIT ULSV**

Unit: °C
Range:   Default Value: free
Group Object/Parameter: P
Input/Output: R
R/W Rate <<1/day
Description: This parameter is the maximum value of the Setpoint Value SVY which can
be operated by the TOOC. This value is read only and must be defined by
the manufacturer. If SVY is higher than ULSV, SVY must be set to ULSV.

**2.1.5.13** **Property PID_TYPE_CONTROLLER CT**

Unit:    Range: 0;1
Default Value: free
Group Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: This Parameter defines whether the controller is used for heating
(CT = 1) or for cooling (CT = 0) and in combination with the object HCM if
the controller is active or inactive. The controller is active if
CT = HCM.


-----

**2.1.5.14** **Property PID_VALUE_ACTUATING_CONTROLLER_INACTIVE** **AVCI**
Unit:    Range: 0;1
Default Value: free
Group Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: When TOOC is switched in the inactive state, the actuating value (OAC) is
set to the state defined by this property (AVCI). This state is transmitted one
times only.

**2.1.5.15** **Property PID_TIME_CYCLE_CONTROL** **CCT**
Unit: s
Range: free
Default Value: free
Group Object/Parameter: P
Input/Output: O
R/W Rate >> 10/day
Description: This parameter determines the time interval after which the control
algorithm is executed again. (Coding see 3.4)

**2.1.5.16** **Property PID_TIME_CYCLE_TRANSMIT_Y CTTY**

Unit: minutes ("0" = no transmission)
Range: min 0; 15 … 60 minutes
Default Value: free
Group Object/Parameter: P
Input/Output: R/W
R/W Rate << 1/day
Description: The actuating value OAC will be transmitted cyclically after the given cycle
time. It will not be transmitted cyclically, if CTTY is set to “0”.
In this case OAC is only transmitted if OAC has changed. (Coding see 3.5)


-----

### 3 Datapoint Type(s)

#### 3.1 1-Bit Datapoint Types

Format: 1 bit

V

Encoding: See below

Range: V = {0,1}

Unit: 
**Datapoint Types**

Code: Symbol: Encoding: V = 0

1.100 DPT_Heat/Cool Cooling Heating

1.005 DPT_Alarm No Alarm Alarm

#### 3.2 Datapoint Type "Controller Status"

|3.1 1-Bit Datapoint Types|Col2|Col3|Col4|
|---|---|---|---|
|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|Format:<br>1 bit<br>V <br>Encoding:<br>See below<br>Range: <br>V = {0,1}<br>Unit: <br>-|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding: V = 0|V = 1|
|1.100|DPT_Heat/Cool|Cooling|Heating|
|1.005|<br>DPT_Alarm|No Alarm|Alarm|

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>HGFEDCBA<br>See below<br>A ...H = {0,1}<br>-|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|
|<tbd>|<tbd>|A =1 :<br>B =1 :<br>C:<br>D=1 :<br>E=1 :<br>F=1 :<br>G=1 :<br>H=1 :<br>Control is inactive<br>Output is inverted<br>Not used, always zero<br>ARTV>ULCV<br>ARTV<LLCV<br>SVY>ULSV<br>SVY<LLSV<br>Range Alarm|


-----

#### 3.3 Datapoint Type "8 bit signed integer"

Format: 1 octet

VVVVVVVV

Encoding: See below

Range: V = [-128 … 127] binary encoded

Unit: See below

**Datapoint Types**

Code: Symbol: Encoding: Range: Unit:

KNX DPT_TempHVACRel8 "temperature" -128…127 0,1 K
5.020

This Datapoint Type shall only be used for the encoding of parameters. It shall not be used for the
encoding of any temperature value (real temperatures, shift values, offset values, …) that are transmitted
on the bus using group communication.

#### 3.4 Datapoint Type "8-bit unsigned multiplier without zero"

Format: 1 octet

VVVVVVVV

Encoding: See below

Range: V = [1…255] binary encoded

Unit: See below

**Datapoint Types**

Code: Symbol: Encoding: Range: Unit:

<tbd> <tbd> "time" 1…255 1 s

#### 3.5 Datapoint Type "8-bit unsigned multiplier with special function for zero"

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>VVVVVVVV<br>See below<br>V = [-128 … 127] binary encoded<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|Range:|Unit:|
|KNX<br>5.020|DPT_TempHVACRel8|"temperature"|-128…127|0,1 K|

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>VVVVVVVV<br>See below<br>V = [1…255] binary encoded<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|Range:|Unit:|
|<tbd>|<tbd>|"time"|1…255|1 s|

|Format:<br>Encoding:<br>Range:<br>Unit:|1 octet<br>VVVVVVVV<br>See below<br>V = [0…255] binary encoded<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|Code:|Symbol:|Encoding:|Range:|Unit:|
|<tbd>|<tbd>|"time"|1…255<br>0 =<br>corresponding<br>function<br>disabled|1 min|


-----

