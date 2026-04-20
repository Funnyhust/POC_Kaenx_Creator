KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

# Application Note 122/08 v11

**Title:** **Realisation of OpenTherm on KNX RF**

**Status:** Approved Standard **Date:**

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2009.06.24

**Subject:** Realisation of OpenTherm on KNX RF
**Documents** **_Referred_**

[01] AN 026 ‘Use of domain address on RF’

[02] S08: Distributed Address Assignment

[03] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[04] Chapter 7/11/1 “Hot Water Heating – Heat Production”

[05] Chapter 7/11/3 “Hot Water Heating – Domestic Hot Water
Control ”

**Document updates**

**Version** **Date** **Modifications**
0.3 05.08.08 Mention of DPTs in described channels
0.4 09.08 Intermediate version
0.5 15.10.08 combined channels, details for properties, name and CC of
datapoints
0.6 15.11.08 Reviewed channels
0.7 26.11.08 Readying document for approval by KSG and WGI
0.8 14.01.09 Clearer specification of timing requirements
0.9 19.02.09 Integration of feedback from KSG, readying doc for Release
for voting
0.10 29.04.09 Integration of comments from Release for voting, readying doc
for Final voting
0.11 24.06.09 Publication as Approved Standard – no comments in final
voting cycle

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 1 of 23

|Version|Date|Modifications|
|---|---|---|
|0.3|05.08.08|Mention of DPTs in described channels|
|0.4|09.08|Intermediate version|
|0.5|15.10.08|combined channels, details for properties, name and CC of<br>datapoints|
|0.6|15.11.08|Reviewed channels|
|0.7|26.11.08|Readying document for approval by KSG and WGI|
|0.8|14.01.09|Clearer specification of timing requirements|
|0.9|19.02.09|Integration of feedback from KSG, readying doc for Release<br>for voting|
|0.10|29.04.09|Integration of comments from Release for voting, readying doc<br>for Final voting|
|0.11|24.06.09|Publication as Approved Standard – no comments in final<br>voting cycle|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

Contents

#### 1 Introduction ......................................................................................................... 2

 2 Principles ............................................................................................................. 3

 3 Establishing the Property Client – Server Relation ......................................... 6 3.1 General .................................................................................................... 6 3.2 Setting the Domain address ..................................................................... 6 3.3 Setting the Individual address .................................................................. 6

 4 Channel overview ............................................................................................... 8 4.1 Introduction .............................................................................................. 8 4.2 General .................................................................................................... 8 4.3 Channel Central Heating Controller.......................................................... 9 4.4 Channel Central Heating Producer .......................................................... 9 4.5 Channel Domestic Hot Water Controller .................................................. 9 4.6 Channel Domestic Hot Water Producer ................................................... 9 4.7 Channel Central Heating and Domestic Hot Water Controller .................. 9 4.8 Channel Central Heating and Domestic Hot Water Producer ................... 9

 5 CH_CH_Controller (Channel Code 050Ah) ..................................................... 10

 6 CH_CH_Producer (Channel Code 050Bh) ....................................................... 12

 7 CH_DHW_Controller (Channel Code 050Ch) .................................................. 14

 8 CH_DHW_Producer (Channel Code 050Dh) ................................................... 16

 9 CH_CH_DHW Controller (Channel Code 050Eh) ............................................ 18

 10 CH_CH_DHW_Producer (Channel Code 050Fh) ............................................. 20

 11 New defined Connection codes ....................................................................... 23

## 1 Introduction
OpenTherm (hereafter referred to as OT) is the name of a non-manufacturer-dependent
system of communication between modulating heating appliances (central heating
appliances and air heaters) and room thermostats. The system consists of a communication
protocol and an interface specification[1].

OT products are historically using an own developed TP communication medium. The OT
community has however expressed the wish to be able to also use radio communication for
the link between the room thermostat and the heating appliances.

In order to enable OT manufacturers to use KNX RF in their products and ensuring
compatibility with existing KNX RF products, whilst safeguarding the independence of the
OT community and coding, this AN sets a framework of KNX system and interworking
requirements to ensure the before-said.

1 For more information, see www.opentherm.nl

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 2 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 2 Principles

OT communication is principally P2P: a Central Heating (CH) and Domestic Hot Water
(DHW) controller communicate to a CH/DHW producer.

Principally, OT KNX RF devices shall comply with the KNX Bi-directional system profile
(2010h).

For run-time communication and in order to ensure a maximum interaction with existing KNX
RF products, KNX group objects shall be used.

The data exchange via group communication shall respect the KNX DPTs as laid down in
the underneath specified functional blocks. KNX Certification confirms that conformance.

For exchange of maintenance and visualisation data, interface objects and function
properties[2] shall be used for communication, whereby the CH/DHW controller acts as KNX
property client and the CH/DHW producer acts as property server.

For this type of communication, four KNX application interface objects are reserved (1200d
**to 1203d) in the KNX specifications.**

As is the case in OT, the producer functionality is grouped in one application interface object,
the consumer functionality in another.

In these interface objects, properties within the range of PID 51d to 200d shall be used,
according to the mapping in the underneath table, mapping OT IDs to KNX properties.

Only if OT IDs higher than 127 need to be implemented, the implementation of the
application interface objects 1202d and 1203d are necessary.

Before 60d, the application interface objects in the clients/controllers (1200d and 1202d)
shall foresee properties amongst other for the following management data, documenting
which producer(s) is (are) linked to which controller. These properties would for instance
allow a tool such as ETS to establish the links between interface objects.
These following properties shall be supported:

   - The individual address of the respective server (PDT_UNSIGNED_INT, 2 bytes) on
property ID 51d

   - The index of the Interface Object of the respective server (PDT_UCHAR, 1 byte) on
property ID 52d

   - Serial number of the respective server (PDT_Gen_6, 6 byte) on property ID 11d

   - Serial number of the communication partner (PDT_Gen_6, 6 byte) on property ID 53d

   - The further properties are currently reserved (shall not be used).

The corresponding properties in the application interface objects of the producer(s) 1201d
and 1203d are currently reserved (shall not be used), as only the controller shall store the
data of his communication partner, not the producer.

Summarized: the interface objects shall be implemented in both the server as well as the
client, whereby

   - the interface objects in the client shall at least contain the properties before 60d

   - the interface objects in the server shall contain all properties except for those before
60d.

2 The OT specification allows writing of data, which is answered by a response with data different than what was
written. In KNX, such behaviour requires the support of function properties

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 3 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

Application Significance Mapping OT to KNX
Interface
Object
Number

1200d OT Controller_Part1 OT ID 0 to PID60d

1201d OT Producer_Part1 OT ID 127 to PID187d

1202d OT Controller_Part2[3] OT ID 128 to PID60d

1203d OT Producer_Part2[3] OT ID 255 to PID187d

Any properties with higher values shall be used for OT manufacturer specific extensions.

The data exchange via properties does not respect any KNX DPT definitions. The coding is
OT specific and in accordance with the OT specifications of the individual OT ID: any
extensions or modifications completely falls within the responsibility of the OT community
and is not part of the KNX specifications.
For KNX conformity, the implementation of the OT specific data exchange is optional, group
data exchange is mandatory. If the OT properties are implemented, some of the functionality
will therefore be accessible via group and interface objects.

An OT write access shall be mapped to a KNX property function command service, an OT
read access to a KNX property function read state service.

**Coding of the data in property function command:**

#### The service ‘A_Property_Function_Command-PDU’ shall be used to execute a write access to an OT ID. The values of OT IDs shall always be coded in 2 octets.

 Octet 10 Octet 11 Octet 11

 Status OT high byte data[4] OT low byte data[3]

 Status coding

 Bit 0 LSB = 0 data invalid

 Bit 0 LSB = 1 data valid

 Bit 1..7 reserved, shall be set to ‚0’ by the sender, shall be ignored by the receiver

3 Optional, if OT Ids higher than 127 need to be implemented
4 For further info please consult the OT protocol specification

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 4 of 23

|Application<br>Interface<br>Object<br>Number|Significance|Mapping OT to KNX|
|---|---|---|
|1200d|OT Controller_Part1|OT ID 0 to PID60d<br>OT ID 127 to PID187d|
|1201d|<br>OT Producer_Part1|<br>OT Producer_Part1|
|1202d|<br>OT Controller_Part23 <br>|OT ID 128 to PID60d<br>OT ID 255 to PID187d|
|1203d|<br>OT Producer_Part23|<br>OT Producer_Part23|

|Octet 10|Octet 11|Octet 11|
|---|---|---|
|Status|OT high byte data4|OT low byte data3|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

**Coding of the property function response:**

A property server (e.g. boiler) shall respond to a function command service with a
#### ‘A_Property_Function_Response-PDU’.

(identical for property function command and property function state read)

#### Octet 10 Octet 11 Octet 11

 Return Code OT high byte data[3] OT low byte data[3]

Return Codes:

(00h) = SUCCESS (value successfully written/read)

(06h) = data invalid³

(07h) = unknown OT ID³

(08h) = wait, retry later (only for read service)

**Note: The return code wait/retry shall indicate that the server shall retrieve the data from the**
OT slave. The client may retry only after at least 2 seconds. The server shall ignore a
second request for the same data during the wait state. The server shall use the wait return
code in case the data is not cached in the server and a response cannot be sent within 500
ms. In general both server and client shall respect the duty cycle.

**Coding of the property function state read:**

Same format shall be used as for the function command service.

The CH/DHW controller may be battery powered. In order to allow saving battery status, it is
allowed that the controller goes into sleep mode. The update of input data shall be initiated
on the controller upon user stimulus, triggering a read of the corresponding property[5]. In
order to keep itself informed about cyclical sent server information, the controller may initiate
an automatic wake up at regular intervals. The controller may return to sleep mode
immediately after receiving the requested property service response. Should the property
service response still be missing after 800 ms, the controller may also return to sleep mode.
During the link sequence the controller shall never go into sleep mode.

A mechanism shall be provided to set a device in permanent receive mode, to ensure
configuration by a tool.

Links between KNX OT products are established using KNX PB mode. For this, 6 new KNX
Easy Channels are defined, two for the Central heating functionality and two for the direct
hot water heating functionally and two combining the before-said functionality. Some of the
data points in these channels are marked as optional. The usage of optional data points is
only possible if the product complies with the Flexible E-Mode channel concept. If such
mechanism are not supported only the mandatory data points may be implemented in the
channels

During the start-up of the OT-producer, it shall be checked if CH and/or DHW are available
at the connected boiler. Depending on this result the corresponding channel shall be
supplied in the DD2 response.

5 Reading of data through group value read messages is not recommended on KNX RF: if reading of data stored
in a group object is necessary, the group data shall always also be implemented additionally as a property.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 5 of 23

|Octet 10|Octet 11|Octet 11|
|---|---|---|
|Return Code|OT high byte data3|OT low byte data3|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 3 Establishing the Property Client – Server Relation

### 3.1 General
In the Easy Push button procedure, a property client can be linked automatically to a
property server.

During the push button procedure the serial numbers of the communication partners are
exchanged as well as the channel codes. In this way, as a property client, a device shall
store the serial number of a potential property server. The returned channel code indicates
that the communication partner is an OT device, in turn suggesting that this device
implements special OT application interface objects and properties. The knowledge of the
serial number of a KNX device is sufficient to set up a point to point communication based
on domain address and individual address.

In S-Mode the client-server relation can be established by writing the property 51d and 52d
as part of the OT controller application interface object.

In the case where one client can manage multiple servers, several instances of the relevant
application interface objects shall be implemented.

### 3.2 Setting the Domain address
In order to be able to exchange individual addressed frames on KNX-RF, both devices shall
use the same domain address.

In push button mode the domain address is not used. As there is no central tool to set the
domain addresses, the following procedure shall be followed.

All devices shall be shipped with the domain address set to 0.

The sensor (client) device shall read the domain address from the actuator (server) via the
service A_DomainAddressSerialNumber_Read/Response (as described in [1]).

If the domain address of the server is programmed (not equal 0), the client shall also use this
domain address.

If only the domain address of the client is programmed, this address shall be written to the
actuator using the service A_DomainAddressSerialNumber_Write.

If both domain addresses (from client and server) are not programmed (equal 0), the client
shall write the serial number of the server as domain address to the server and also use this
number as own domain address.

After the client has written a domain address to the server the result shall be verified via the
service A_DomainAddressSerialNumber_Read/Response.

In S-Mode the domain address is set by the tool.

### 3.3 Setting the Individual address
After assigning the domain address, the individual addresses (IA) of sensor and actuator
shall be programmed.

After assigning the individual addresses, each device shall have a unique address within the
domain and different from the default address 0x05FF (see [2]).

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 6 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

First the sensor shall check its own individual address. If this address is not programmed
(0x05FF), it shall select another address within the range of 0x0501 to 0x05FE and shall
check whether the selected address is unused within the domain via the services
A_DeviceDescriptor_Read/Response.

An implemented random generator shall ensure that the sensor makes a random address
selection within the before said range, to limit the possibility of duplication of individual
addresses when sent A_DeviceDescriptor_Response messages should not reach the
sender on the open RF medium.

If the sensor establishes that the individual address is not free, the procedure shall be
repeated until a free IA is found.

If the individual address of the sensor had already been programmed before, the device
shall keep the existing IA.

After programming the IA of the sensor, the current IA of the actuator shall be read by the
sensor using the service A_IndividualAddressSerialNumber_Read/Response. As alternative
this address may also be derived from any services received from the actuator before. If the
IA of the actuator is already programmed, it shall be left untouched. If it is not programmed
(0x05FF), the same procedure shall be used to find an unused IA as described above for the
sensor. A new IA address can be programmed via the service
A_IndividualAddressSerialNumber_Write. After the client has written an individual address to
the server the result shall be verified via the service
A_IndividualAddressSerialNumber_Read/Response.

In S-Mode the individual addresses are set by the tool.


**Sensor/Client (A, knows SN of B)**
**SN:A, DoA:0, IA:0x05FF**


**Actuator/Server (B)**
**SN:B, DoA:0, IA:0x05FF**


A_DomainAddressSerialNumber_Read (SN: B)

A_DomainAddressSerialNumber_Resp (SN: B, DoA: 0)

A_DomainAddressSerialNumber_Write (SN: B, DoA: B)

A_DomainAddressSerialNumber_Read (SN: B)

A_DomainAddressSerialNumber_Resp (SN: B, DoA: B)

Store DoA

Select 0x0501
A_DeviceDescriptor_Read (Dst. IA: 0x0501)
as own IA

Sensor receives no response


Store IA

Select 0x0502
as IA for act.


A_IndividualAddressSerialNumber_Read (SN: B)

A_IndividualAddressSerialNumber_Resp (SN: B, Src: 0x05FF)

A_DeviceDescriptor_Read (Dst. IA: 0x0502)

Sensor receives no response

A_IndividualAddressSerialNumber_Write (SN: B, IA: 0x0502)

A_IndividualAddressSerialNumber_Read (SN: B)

A_IndividualAddressSerialNumber_Resp (SN: B)


Store DoA

Store IA


**SN:A, DoA:B, IA:0x0501** **SN:B, DoA:B, IA:0x0502**

**Figure 1: Sequence with two unprogrammed devices without address conflicts**

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 7 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

This procedure can also be used to setup the client/server relation in the other direction.

The manufacturer shall ensure that a simultaneous execution of the set-up of the
client/server relation is excluded.

## 4 Channel overview

### 4.1 Introduction
OpenTherm is a point-to-point communication system and connects boilers with room
controllers.

The room controller calculates a heating demand signal in the form of a water temperature
Control Set point based on room temperature (or other control from, e.g. OTC) and transmits
this heating demand signal to the boiler, thus controlling its output.

The boiler in turn may transmit fault and system information to the room controller for display
or diagnostics purposes. A large number of data items are defined in the OT/+ Application
Layer Protocol, covering these and many other types of system data.

### 4.2 General

**Figure 2 – Overview of Open Therm KNX regulation**

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 8 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

### 4.3 Channel Central Heating Controller
This channel allows receiving information from a CH producer for controlling and/or
displaying purposes. On the basis of information stored in the controller (clock program,
heating curve etc.), it controls the producer by sending an enable signal and a supply
temperature set-point.

### 4.4 Channel Central Heating Producer
This channel allows receiving information from a CH controller in order to generate the
demanded supply temperature for a CH system. It also provides the controller with status
information.

### 4.5 Channel Domestic Hot Water Controller
This channel allows receiving information from a DHW producer for controlling and/or
displaying purposes. On the basis of information stored in the controller (clock program, setpoint etc.), it controls the producer by sending an enable signal, and a DHW temperature
set-point.

### 4.6 Channel Domestic Hot Water Producer
This channel allows receiving commands from a DHW controller in order to generate the
demanded DHW temperature. It also provides the controller with status information.

### 4.7 Channel Central Heating and Domestic Hot Water Controller
This channel combines the functionality of the channels explained under 4.3 and 4.5.

### 4.8 Channel Central Heating and Domestic Hot Water Producer
This channel combines the functionality of the channels explained under 4.4 and 4.6.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 9 of 23


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 5 CH_CH_Controller (Channel Code 050Ah)

- **Name:** CH_CH_Controller

- **ID:** 50Ah

- **Classification:** Central heating controller (sensor)

- **Functional Block:**

� Chapter 7/10/1 “HVAC Sensor Functional Blocks” (see [3])
� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_CH_**
**Controller**


FlameState (128.BUC) CH_Enable
CH_Enable_Info CH_TempSetPoint (136.HPM)
BoilerFault (129.BOC)
ServiceIndication
TempRoom (321.TR)
TempOutside (320.OTS)

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 10 of 23

|Col1|CH CH<br>_ _<br>Controller|Col3|
|---|---|---|
||||
|<br>|<br>||
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

- **Datapoint list:**

**Mandatory datapoints**

FB / Flags reference

Sub- Additional

Index Datapoint Name Main CC (i/o,x,v….. to OT
unit CCs

ID ) ID

1 CH_Enable 1 CC_Heating_Enable CC_Enable O, L ID 0
(33) (16) HB 0

Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to
CH_TempContrSetPoint.

2 136.HPM CH_TempSetPoint 1 CC_CH_Temp --- O ID 1
Setpoint (101)

The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is
enabled.

**Optional datapoints**

FB / Flags reference

Sub- Additional

Index Datapoint Name Main CC (i/o,x,v….. to OT
unit CCs

ID ) ID

128.BUC FlameState 1 CC_Switch_OnOff --- I, X ID 0
_Status (2) LB 3

Flame status indicating that the producer flame is on or off

CH_Enable_Info 1 CC_CH_Enable_Info --- I, X ID 0
(102) LB 1

Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the
CH system.

129.BOC BoilerFault 1 CC_Fault (103) --- I, X ID 0
LB 0

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

ServiceIndication 1 CC_Service (104) --- I, X ID 0
LB 6

Flag indicating that the producer needs service. The producer may still function, possibly with reduced
functionality.

321.TR TempRoom 1 CC_TR (37) CC_Temp I, X ID 24
(34)

Measured room temperature. Used for room temperature control or heat curve correction.

320.OTS TempOutside 1 CC_TO (36) --- I, X ID 27

Measured outside temperature. Used for heat curve or just for displaying purposes on the controller

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 11 of 23

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||CH_Enable|1|CC_Heating_Enable<br>(33)|CC_Enable<br>(16)|O, L|ID 0<br>HB 0|1.003|
|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer shall heat up the CH system to<br>CH_TempContrSetPoint.|
|<br>2|<br>136.HPM|<br> CH_TempSetPoint|1|CC_CH_Temp<br>Setpoint (**101)**|---|O|ID 1|9.001|
|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer shall use this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
||128.BUC|FlameState|1|CC_Switch_OnOff<br>_Status (2)|---|I, X|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
|||CH_Enable_Info|1|CC_CH_Enable_Info<br>(**102**)|---|I, X|ID 0<br>LB 1|1.001|
|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it is providing heat to the<br>CH system.|
||129.BOC|BoilerFault|1|CC_Fault (**103**)|---|I, X|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|
|||ServiceIndication|1|CC_Service (**104**)|---|I, X|ID 0<br>LB 6|1.005|
|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|
||321.TR|TempRoom|1|CC_TR (37)|CC_Temp<br>(34)|I, X|ID 24|9.001|
|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|
||320.OTS|TempOutside|1|CC_TO (36)|---|I, X|ID 27|9.001|
|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 6 CH_CH_Producer (Channel Code 050Bh)

- **Name:** CH_CH_Producer

- **ID:** 50Bh

- **Classification:** Central heating producer (actuator)

- **Functional Block:**

� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Cen_**
**Heat_Producer**


CH_Enable FlameState (128.BUC)
CH_TempSetPoint (136.HPM) CH_Enable_Info
BoilerFault (129.BOC)
ServiceIndication

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 12 of 23

|Col1|CH Cen<br>_ _<br>Heat Producer<br>_|Col3|
|---|---|---|
|<br>|<br>||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

- **Datapoint list:**

**Mandatory datapoints**

FB /

Flags reference

Data Sub- Additional

Index Name Main CC (i/o,x,v….. to OT
point unit CCs

) ID

ID

1 CH_Enable 1 CC_CH_Enable (33) CC_Enable I, X, L ID 0
(16) HB 0

Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to
CH_TempContrSetPoint.

2 136. CH_TempSetPoint 1 CC_CH_TempSet --- I,X ID1
HPM point(101)

The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is
enabled.

3 128. FlameState 1 CC_Switch_OnOff --- O ID 0
BUC _Status (2) LB 3

Flame status indicating that the producer flame is on or off

4 CH_Enable_Info 1 CC_CH_Enable_Info --- O, LA ID 0
(102) LB 1

Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH
system.

5 129. BoilerFault 1 CC_Fault (103) --- O ID 0
BOC LB 0

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)
or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the
controller therefore needs to continue controlling the producer.

**Optional datapoints**

FB /

Flags reference

Data Sub- Additional

Index Name Main CC (i/o,x,v….. to OT
point unit CCs

) ID

ID

ServiceIndication 1 CC_Service (104) --- O ID 0
LB 6

Flag indicating that the producer needs service. The producer may still function, possibly with reduced
functionality.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 13 of 23

|Index|FB /<br>Data<br>point<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||CH_Enable|1|CC_CH_Enable (33)|CC_Enable<br>(16)|I, X, L|ID 0<br>HB 0|1.003|
|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint.|
|2|136.<br>HPM|CH_TempSetPoint|1|CC_CH_TempSet<br>point(**101**)|---|I,X|ID1|9.001|
|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|
|3|128.<br>BUC|FlameState|1|CC_Switch_OnOff<br>_Status (2)|---|O|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
|4||CH_Enable_Info|1|CC_CH_Enable_Info<br>(**102**)|---|O, LA|ID 0<br>LB 1|1.001|
|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|
|5|129.<br>BOC|BoilerFault|1|CC_Fault (**103**)|---|O|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|

|Index|FB /<br>Data<br>point<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|||ServiceIndication|1|CC_Service (**104**)|---|O|ID 0<br>LB 6|1.011|
|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 7 CH_DHW_Controller (Channel Code 050Ch)

- **Name:** CH_DHW_Controller

- **ID:** 50Ch

- **Classification:** Hot water controller (sensor)

- **Functional Block:**

� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])
� Chapter 7/11/3 “Hot Water Heating – Domestic Hot Water Control ” (see [5])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_DHW_**

**Controller**


FlameState (128.BUC) DHW_Enable
DHW_Enable_Info DHW_TempSetPoint (177.DHWC)
BoilerFault (177.DHWC)t
ServiceIndication

- **Datapoint list:**

**Mandatory datapoints**

- **Datapoint list:**

FB / Flags reference

Sub- Additional

Index Datapoint Name Main CC (i/o,x,v….. to OT
unit CCs

ID ) ID

1 DHW_Enable 1 CC_DHW_Enable CC_Enable O, L ID 0
(105) (16) HB 1

This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the
tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled
is generally used to save energy.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 14 of 23

|Col1|CH DHW<br>_ _<br>Controller|Col3|
|---|---|---|
||||
||||
||||
||||

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||DHW_Enable|1|CC_DHW_Enable<br>(**105**)|CC_Enable<br>(16)|O, L|ID  0<br>HB 1|1.003|
|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

**Optional datapoints**

FB / Flags reference

Sub- Additional

Index Datapoint Name Main CC (i/o,x,v….. to OT
unit CCs

ID ) ID

128.BUC FlameState 1 CC_Switch_OnOff --- I, X ID 0
_Status (2) LB 3

Flame status indicating that the producer flame is on or off

DHW_Enable_Info 1 CC_DHW_Enable_ --- I, X ID 0
Info (106) LB 2

Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to
the DHW system.

177. DHW_TempSet 1 CC_DHW_Temp --- O ID 56
DHWC Point Setpoint (107)

This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no
DHW temperature set point has been sent, the DHW producer shall use its default value.

177. BoilerFault 1 CC_Fault (103) --- I, X ID 0
DHWC LB 0

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

ServiceIndication 1 CC_Service (104) --- I, X ID 0
LB 6

Flag indicating that the producer needs service. The producer may still function, possibly with reduced
functionality.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 15 of 23

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
||128.BUC|FlameState|1|CC_Switch_OnOff<br>_Status (2)|---|I, X|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
|||DHW_Enable_Info|1|CC_DHW_Enable_<br>Info (**106**)|---|I, X|ID 0<br>LB 2|1.001|
|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|
||177.<br>DHWC|DHW_TempSet<br>Point|1|CC_DHW_Temp<br>Setpoint (**107**)|---|O|ID 56|9.001|
|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|
||177.<br>DHWC|BoilerFault|1|CC_Fault (**103**)|---|I, X|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|
|||ServiceIndication|1|CC_Service (**104**)|---|I, X|ID 0<br>LB 6|1.005|
|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|Flag indicating that the producer needs service. The producer may still function, possibly with reduced<br>functionality.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 8 CH_DHW_Producer (Channel Code 050Dh)

- **Name:** CH_DHW_Producer

- **ID:** 50Dh

- **Classification:** Hot water producer (actuator)

- **Functional Block:**

� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])
� Chapter 7/11/3 “Hot Water Heating – Domestic Hot Water Control ” (see [5])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**Producer**


DHW_Enable FlameState (128.BUC)
DHW_TempSetPoint (177.DHWC) DHW_Enable_Info
DHW_Block BoilerFault (177.DHWC)
ServiceIndication

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 16 of 23

|Col1|CH DHW<br>_ _<br>Producer|Col3|
|---|---|---|
|<br>|<br>||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

- **Datapoint list:**

**Mandatory datapoints**

FB / Flags

Sub- Additional reference

Index Datapoint Name Main CC (i/o,x,v DPT

unit CCs to OT-ID

ID …..)

1 DHW_Enable 1 CC_DHW_ CC_Enable I, X, L ID 0
Enable (105) (16) HB 1 1.003

This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening
the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW
enabled is generally used to save energy.

2 DHW_Block 1 CC_SwithOnOff --- I ID 0
(01) HB 6 1.003

This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other
devices take over DHW production (e.g. solar systems).

3 128.BUC FlameState 1 CC_Switch_ --- O ID 0
OnOff_Status (2) LB 3 1.001

Flame status indicating that the producer flame is on or off

4 DHW_Enable_Info 1 CC_DHW_Mode --- O, LA ID 0
(106) LB 2 1.001

Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to
the DHW system.

5 177.DHWC BoilerFault 1 CC_Fault (103) --- O ID 0
LB 0 1.005

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

**Optional datapoints**

FB / Flags

Sub- Additiona reference

Index Datapoint Name Main CC (i/o,x,v… DPT

unit l CCs to OT-ID

ID ..)

177.DHWC DHW_TempSet 1 CC_DHW_Temp --- I, X ID 56
Point Setpoint (107) 9.001

This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no
DHW temperature set point has been sent, the DHW producer shall use its default value.

ServiceIndication 1 CC_Service --- O ID 0
(104) LB 6 1.011

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 17 of 23

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v<br>…..)|reference<br>to OT-ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||DHW_Enable|1|CC_DHW_<br>Enable (**105**)|CC_Enable<br>(16)|I, X, L|ID 0<br>HB 1|1.003|
|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening<br>the tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW<br>enabled is generally used to save energy.|
|2||DHW_Block|1|CC_SwithOnOff<br>(01)|---|I|ID 0<br>HB 6|1.003|
|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|
|3|128.BUC|FlameState|1|CC_Switch_<br>OnOff_Status (2)|---|O|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
|4||DHW_Enable_Info|1|CC_DHW_Mode<br>(**106**)|---|O, LA|ID 0<br>LB 2|1.001|
|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|
|5|177.DHWC|BoilerFault|1|CC_Fault (**103**)|---|O|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additiona<br>l CCs|Flags<br>(i/o,x,v…<br>..)|reference<br>to OT-ID|DPT|
|---|---|---|---|---|---|---|---|---|
||177.DHWC|DHW_TempSet<br>Point|1|CC_DHW_Temp<br>Setpoint (**107**)|---|I, X|ID 56|9.001|
|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no<br>DHW temperature set point has been sent, the DHW producer shall use its default value.|
|||ServiceIndication|1|CC_Service<br>(**104**)|---|O|ID 0<br>LB 6|1.011|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 9 CH_CH_DHW Controller (Channel Code 050Eh)

- **Name:** CH_CH_DHW_Controller

- **ID:** 50Eh

- **Classification:** Central heating and domestic hot water controller (sensor)

- **Functional Block:**

� Chapter 7/10/1 “HVAC Sensor Functional Blocks” (see [3])
� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])
� Chapter 7/11/3 “Hot Water Heating – Domestic Hot Water Control ” (see [5])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_CH_DHW_**

**Controller**


CH_Enable_Info CH_Enable
DHW_Enable_Info CH_TempSetPoint (136.HPM)
FlameState (128.BUC) DHW_Enable
BoilerFault (129.BOC) DHW_TempSetPoint (177.DHWC)
ServiceIndication
TempRoom (321.TR)
TempOutside (320.OTS)

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 18 of 23

|Col1|CH CH DHW<br>_ _ _<br>Controller|Col3|
|---|---|---|
|<br>|<br>||
|<br>|<br>||
||||
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

- **Datapoint list:**
**Mandatory datapoints**

FB / Flags reference

Sub- Additional

Index Data Name Main CC (i/o,x,v….. to OT- DPT

unit CCs

point ID ) ID

1 CH_Enable_ 1 CC_CH_Enable (33) CC_Enable O, L ID 0
(16) HB 0 1.003

Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to
CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).

2 136. CH_TempSetPoint 1 CC_CH_TempSet --- O ID 1
HPM Point (101) 9.001

The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is
enabled.

3 DHW_Enable 1 CC_DHW_Enable --- O, ID 0
(105) HB 1 1.003

This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the
tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled
is generally used to save energy.

**Optional datapoints**

FB / Flags reference

Sub- Additional

Index Data Name Main CC (i/o,x,v….. to OT- DPT

unit CCs

point ID ) ID

177. DHW_TempSet 1 CC_DHW_Temp --- O ID 56
DHWC Point SetPoint (107) 9.001

This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW
temperature set point has been sent, the DHW producer shall use its default value.

CH_Enable_Info 1 CC_CH_Enable_Info --- I, X ID 0
(102) LB 1 1.001

Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the
DHW system.

DHW_Enable_Info 1 CC_DHW_Enable --- I, X ID 0
_Info (106) LB 2 1.001

Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to
the DHW system.

128. FlameState 1 CC_Switch_OnOff --- I, X ID 0
BUC _Status (2) LB 3 1.001

Flame status indicating that the producer flame is on or off

129. BoilerFault 1 CC_Fault (103) --- I, X ID 0
BOC LB 0 1.005

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 19 of 23

|Index|FB /<br>Data<br>point ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||CH_Enable_|1|CC_CH_Enable (33)|CC_Enable<br>(16)|O, L|ID 0<br>HB 0|1.003|
|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|
|<br>2|<br>136.<br>HPM|<br>CH_TempSetPoint|<br> 1|<br>CC_CH_TempSet<br>Point (**101)**|<br>---|<br>O|<br>ID 1|<br>9.001|
|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|
|3||DHW_Enable|1|CC_DHW_Enable<br>(**105**)|---|O,|ID  0<br>HB 1|1.003|
|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user by opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled<br>is generally used to save energy.|

|Index|FB /<br>Data<br>point ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
||177.<br>DHWC|DHW_TempSet<br>Point|1|CC_DHW_Temp<br>SetPoint (**107**)|---|O|ID 56|9.001|
|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|
|||CH_Enable_Info|1|CC_CH_Enable_Info<br>(**102**)|---|I, X|ID 0<br>LB 1|1.001|
|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the<br>DHW system.|
|||DHW_Enable_Info|1|CC_DHW_Enable<br>_Info (**106**)|---|I, X|ID 0<br>LB 2|1.001|
|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|<br>Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to<br>the DHW system.|
||128.<br>BUC|FlameState|1|CC_Switch_OnOff<br>_Status (2)|---|I, X|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
||129.<br>BOC|BoilerFault|1|CC_Fault (**103**)|---|I, X|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

ServiceIndication 1 CC_Service (104) --- I, X ID 0
LB 6

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is
needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still
function: the controller therefore needs to continue controlling the producer.

321.TR TempRoom 1 CC_TR (37) CC_Temp I, X ID 24
(34)

Measured room temperature. Used for room temperature control or heat curve correction.

320. TempOustide 1 CC_TO (36) --- I, X ID 27
OTS

Measured outside temperature. Used for heat curve or just for displaying purposes on the controller

## 10 CH_CH_DHW_Producer (Channel Code 050Fh)

- **Name:** CH_CH_DHW_Producer

- **ID:** 50Fh

- **Classification:** Central heating and domestic hot water producer (actuator)

- **Functional Block:**

� Chapter 7/11/1 “Hot Water Heating – Heat Production” (see [4])
� Chapter 7/11/3 “Hot Water Heating – Domestic Hot Water Control ” (see [5])

- **Graphical representation:**

**_Inputs_** **_Outputs_**

|Col1|Col2|ServiceIndication|1|CC Service (104)<br>_|---|I, X|ID 0<br>LB 6|1.005|
|---|---|---|---|---|---|---|---|---|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is<br>needed) or recoverable (no intervention needed). Depending on the type of fault the producer may still<br>function: the controller therefore needs to continue controlling the producer.|
||321.TR|TempRoom|1|CC_TR (37)|CC_Temp<br>(34)|I, X|ID 24|9.001|
|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|Measured room temperature. Used for room temperature control or heat curve correction.|
||320.<br>OTS|TempOustide|1|CC_TO (36)|---|I, X|ID 27|9.001|
|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|Measured outside temperature. Used for heat curve or just for displaying purposes on the controller|


CH_CH_DHW_

Producer


CH_Enable FlameState (128.BUC)
CH_TempSetPoint (136.HPM) CH_Enable_Info
DHW_Enable BoilerFault (129.BOC)
DHW_Block ServiceIndication
DHW_TempSetPoint (177.DHWC) DHW_Enable_Info

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 20 of 23

|Col1|CH CH DHW<br>_ _ _<br>Producer|Col3|
|---|---|---|
|<br>|<br>||
||||
|<br>|<br>||
|<br>|<br>||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

- **Datapoint list:**

**Mandatory datapoints**

FB /

Flags reference

Data Sub- Additional

Index Name Main CC (i/o,x,v….. to OT- DPT

point unit CCs

) ID

ID

1 CH_Enable 1 CC_CH_Enable (33) CC_Enable I, X, L ID 0
(16) HB 0 1.003

Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to
CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).

2 136. CH_TempSetPoint 1 CC_CH_TempSetpoint --- I, X ID1
HPM (101) 9.001

The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is
enabled.

3 DHW_Enable 1 CC_DHW_Enable (105) CC_Enable I, X ID 0
(16) HB 1 1.003

This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the
tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is
generally used to save energy.

4 DHW_Block 1 CC_SwithOnOff (01) --- I ID 0
HB 6 1.003

This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other
devices take over DHW production (e.g. solar systems).

5 128. FlameState 1 CC_Switch_OnOff --- O ID 0
BUC _Status (2) LB 3 1.001

Flame status indicating that the producer flame is on or off

6 CH_Enable_Info 1 CC_CH_Enable_Info --- O, LA ID 0
(102) LB 1 1.001

Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH
system.

7 129. BoilerFault 1 CC_Fault (103) --- O ID 0
BOC LB 0 1.005

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)
or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the
controller therefore needs to continue controlling the producer.

8 DHW_Enable_Info 1 CC_DHW_Enable_Info --- O ID 0
(106) LB 2 1.001

Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the
DHW system.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 21 of 23

|Index|FB /<br>Data<br>point<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|1||CH_Enable|1|CC_CH_Enable (33)|CC_Enable<br>(16)|I, X, L|ID 0<br>HB 0|1.003|
|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|Flag to demand the CH mode of the producer. When enabled the producer will heat up the CH system to<br>CH_TempContrSetPoint. It is however allowed to give priority to DHW_enable (see data point with index 3).|
|<br>2|<br>136.<br>HPM|<br>CH_TempSetPoint|<br>1|<br>CC_CH_TempSetpoint<br>(**101**)|<br>---|<br>I, X|<br>ID1|<br>9.001|
|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|The producer uses this temperature as set-point to make CH supply water. It shall only do so when CH is<br>enabled.|
|3||DHW_Enable|1|CC_DHW_Enable (**105**)|CC_Enable<br>(16)|I, X|ID 0<br>HB 1|1.003|
|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|This flag indicates to producer to be ready to produce DHW when it is demanded by the user when opening the<br>tap. When DHW is not enabled, the producer is not obliged to react on a user opening the tap. DHW enabled is<br>generally used to save energy.|
|4||DHW_Block|1|CC_SwithOnOff (01)|---|I|ID 0<br>HB 6|1.003|
|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|This flag shall indicate the DHW producer to immediately stop producing DHW. Can be used is case other<br>devices take over DHW production (e.g. solar systems).|
|5|128.<br>BUC|FlameState|1|CC_Switch_OnOff<br>_Status (2)|---|O|ID 0<br>LB 3|1.001|
|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|<br>Flame status indicating that the producer flame is on or off|
|6||CH_Enable_Info|1|CC_CH_Enable_Info<br>(**102**)|---|O, LA|ID 0<br>LB 1|1.001|
|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|Status flag indicating the CH mode of the producer. Producer is CH enabled when it providing heat to the CH<br>system.|
|7|129.<br>BOC|BoilerFault|1|CC_Fault (**103**)|---|O|ID 0<br>LB 0|1.005|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|
|8||DHW_Enable_Info|1|CC_DHW_Enable_Info<br>(**106**)|---|O|ID 0<br>LB 2|1.001|
|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|Status flag indicating the DHW mode of the producer. Producer is DHW enabled when it is providing heat to the<br>DHW system.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

**Optional datapoints**

FB /

Flags reference

Data Sub- Additional

Index Name Main CC (i/o,x,v….. to OT- DPT

point unit CCs

) ID

ID

ServiceIndication 1 CC_Service (104) --- O ID 0
LB 6 1.011

Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)
or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the
controller therefore needs to continue controlling the producer.

177. DHW_TempSetPoint 1 CC_DHW_TempSet --- I,X ID 56
DH Point (107)

9.001

WC

This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW
temperature set point has been sent, the DHW producer shall use its default value.

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 22 of 23

|Index|FB /<br>Data<br>point<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..<br>)|reference<br>to OT-<br>ID|DPT|
|---|---|---|---|---|---|---|---|---|
|||ServiceIndication|1|CC_Service (**104**)|---|O|ID 0<br>LB 6|1.011|
|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|Flag indicating that the producer has a fault. This can be both non recoverable (manual intervention is needed)<br>or recoverable (no intervention needed). Depending on the type of fault the producer may still function: the<br>controller therefore needs to continue controlling the producer.|
||177.<br>DH<br>WC|DHW_TempSetPoint|1|CC_DHW_TempSet<br>Point (**107**)|---|I,X|ID 56|9.001|
|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|This DHW temperature set point is used by the DHW producer as set-point for providing DHW. When no DHW<br>temperature set point has been sent, the DHW producer shall use its default value.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN122** **Realisation of OpenTherm on KNX RF**

## 11 New defined Connection codes

**Connection code** **Based on DPT:**

Name Identifier Abbrev. Name DTP
Dec. type

Central Heating Temperature **101** CC_CH_TempSet DPT_ValueTemp 9.001
Setpoint point

Central Heating Enable Info **102** CC_CH_Enable_Info DPT_Switch 1.001

Boiler Fault **103** CC_Fault DPT_Alarm 1.005

Service Indication **104** CC_Service DPT_Alarm 1.005

Domestic Hot Water Enable **105** CC_DHW_Enable DPT_Enable 1.003

Domestic Hot Water Enable Info **106** CC_DHW_Enable DPT_Switch 1.001
_Info

Domestic Hot Water Setpoint **107** CC_DHW_TempSet DPT_ValueTemp 9.001
point

Savedate: Filename: AN122 v11 Realisation of OpenTherm on KNX RF AS.doc page 23 of 23

|Connection code|Col2|Col3|Based on DPT:|Col5|
|---|---|---|---|---|
|Name|Identifier<br>Dec.|Abbrev.|Name|DTP<br>type|
|Central Heating Temperature<br>Setpoint|**101**|CC_CH_TempSet<br>point|DPT_ValueTemp|9.001|
|Central Heating Enable Info|**102**|CC_CH_Enable_Info|DPT_Switch|1.001|
|Boiler Fault|**103**|<br>CC_Fault|<br>DPT_Alarm|1.005|
|Service Indication|**104**|<br>CC_Service|<br>DPT_Alarm|1.005|
|Domestic Hot Water Enable|**105**|<br>CC_DHW_Enable|<br>DPT_Enable|1.003|
|Domestic Hot Water Enable Info|**106**|<br>CC_DHW_Enable<br>_Info|<br>DPT_Switch|1.001|
|Domestic Hot Water Setpoint|**107**|<br>CC_DHW_TempSet<br>point|DPT_ValueTemp|9.001|


-----

