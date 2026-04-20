###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master Reset of Resources

# Application Note 194/19 v02

###### Title: Master Reset of Resources Status: Date: Approved Standard 2019.04.01 Transitional period:  Immediate effect. Date: 2019.04.01

 Subject: Update and completion of the requirements for Master Reset for KNX Resources. Documents Modified

[01] Chapter 3/5/2 “Management Procedures” v01.09.02

[02] AN158 “KNX Data Security” v05 DP

[03] AN192 “Coupler Security extensions” v02 DV of 2018.07.29.

###### Referred

[04] AN193 “Access Policies” v02 DV or newer

###### Document updates

 Version Date Modifications KSG832-01  Document started. KSG832-02 2018.10.30  Inclusion of the general considerations and guidelines of
 the KSG Class “Security” meeting of 2018.09.28.
  Preparation of the AN to come. KSG832-03 2019.01.15  Inclusion of the conclusions of the KSG Core meeting of
 2018.12.12-2018.12.13.
```
               o Action “Unchanged” renamed to “Not influenced”.
 KSG832-05 2019.01.25  Inclusion of “KSG803-013a MR - fb KSG 20190118.xlsx”.
  Indications for PID_GRP_MULTICAST_TABLE (was not in
 the xls-file). AN194 v01 2019.02.02  Creation of the Draft Proposal. AN194 v02 2019.04.01  Integration of the resolution of comments from RfV (only
 editorial comments).
  Creation of the Approved Standard.

 Contents

##### 1 Purpose, motivation and scope ........................................................................ 2

 2 Specification ....................................................................................................... 2
 2.1 Terms and definitions .............................................................................. 2 2.2 Stack and communication ....................................................................... 3
 2.2.1 KNX IP and KNXnet/IP ..................................................................... 3

```
Savedate: Filename: page 1 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG832-01|| Document started.|
|KSG832-02|2018.10.30| Inclusion of the general considerations and guidelines of<br>the KSG Class “Security” meeting of 2018.09.28.<br> Preparation of the AN to come.|
|KSG832-03|2019.01.15| Inclusion of the conclusions of the KSG Core meeting of<br>2018.12.12-2018.12.13.<br>`o` Action “Unchanged” renamed to “Not influenced”.|
|KSG832-05|2019.01.25| Inclusion of “KSG803-013a MR - fb KSG 20190118.xlsx”.<br> Indications for PID_GRP_MULTICAST_TABLE (was not in<br>the xls-file).|
|AN194 v01|2019.02.02| Creation of the Draft Proposal.|
|AN194 v02|2019.04.01| Integration of the resolution of comments from RfV (only<br>editorial comments).<br> Creation of the Approved Standard.|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master Reset of Resources

##### 2.3 Resource definition or used Resources................................................... 3
 2.3.1 Device Object – PID_PL110_PARAM (PID 73) ................................ 3 2.3.2 Master Reset requirements for existing Resources .......................... 3 2.4 Management Procedures ...................................................................... 24
 2.4.1 Master Reset................................................................................... 24 2.5 Configuration Procedures ...................................................................... 24 2.6 Usage and context ................................................................................ 24 2.7 Profile definition ..................................................................................... 24 2.8 Identifiers and discovery ........................................................................ 24

 3 Impact and dependencies ............................................................................... 24
 3.1 System specification (“Handbook”) dependencies ................................ 24 3.2 Configuration interworking ..................................................................... 24 3.3 Runtime Interworking ............................................................................ 25 3.4 Registration and certification ................................................................. 25 3.5 Integration and common tool impact ..................................................... 25 3.6 Security ................................................................................................. 25 3.7 Risks and compatibility issues ............................................................... 25

## 1 Purpose, motivation and scope

 _This clause is informative and not intended for integration in the KNX Specifications._

###### The specification of KNX Data Security ([02]) requires the implementing devices to support Master Reset. That document contains some initial requirements on the contained Resources for Master Reset. These are reviewed in this Application Note, and extended to all Resources, so that – if there are any requirements – these are clear and the MaC (ETS) can rely on a certain state after a Master Reset.

## 2 Specification

### 2.1 Terms and definitions

######  Power Cycle The interpretation of this term is implementation specific. The implementation defines what a power cycle means for a given implementation of a Resource.

Savedate: Filename: page 2 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

| Power Cycle|The interpretation of this term is implementation specific. The<br>implementation defines what a power cycle means for a given<br>implementation of a Resource.|
|---|---|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master Reset of Resources

### 2.2 Stack and communication

#### 2.2.1 KNX IP and KNXnet/IP

######  Basic Restart The IP parameters shall be taken over after a Basic Restart, but – as the service parameter process time is not available – the MaC cannot rely on any timing when the parameters become effective. There might be an implementation specific time passing by, until the new IP Parameters get active.

  Confirmed Restart The IP Parameters shall be taken over after a Confirmed Restart. The MaC can rely on the fact that these changed parameters are taken at least after the process time, responded by the server in the “Confirmed Restart Response”.

### 2.3 Resource definition or used Resources

#### 2.3.1 Device Object – PID_PL110_PARAM (PID 73)

 _According feedback by Mr Görlitzer, as indicated a.o. by Mr Adler._

###### The default value of this Property shall be FFh.

#### 2.3.2 Master Reset requirements for existing Resources

##### 2.3.2.1 Definitions
###### Scope

 The below rules apply for standard KNX System Resources. For implementation specific Resources, there are no requirements.

 Actions

 These actions solely and strictly consider the required or possible effect of the Erase Code of the column header, and not any possible side effect of the restart or other events in the MaS.

  Actions for which the value does not change
 - “Not influenced” For the MaS The Master Reset requires that the value does not change because of Master Reset. The value may change because of other reasons than the Master Reset.

 For the MaC The MaC may rely on the fact that the value will not change because of the Master Reset, but may change because of other reasons.

Savedate: Filename: page 3 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

| Basic Restart|The IP parameters shall be taken over after a Basic<br>Restart, but – as the service parameter process time is not<br>available – the MaC cannot rely on any timing when the<br>parameters become effective. There might be an<br>implementation specific time passing by, until the new IP<br>Parameters get active.|
|---|---|
| <br>Confirmed Restart|The IP Parameters shall be taken over after a Confirmed<br>Restart. The MaC can rely on the fact  that these changed<br>parameters are taken at least after the process time,<br>responded by the server in the “Confirmed Restart<br>Response”.|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master Reset of Resources

  Actions for which the value may change
 - recalculate For the MaS The MaS shall calculate the value. This may coincidentally be the same as before. This can in principle every time be a different value.

 For the MaC The MaC shall read the value before using it.

 - KNX default For the MaS The MaS shall set the value back to some default value that is not specified in the KNX Specifications (also known as "Reset"). This is in principle always the same value.

 For the MaC The MaC may assume that the PID has the default value.



###### - implementation default


###### For the MaS The MaS shall set the value back to some default value that not in the KNX standard, but that is implementation specific (also known as "Reset"). This is in principle always the same value.

 For the MaC If the value is given in the product description then the MaC may rely on this; otherwise, the MaC has to read the value.



######  Further actions
 - not applicable There is no reason for specifying an action. This is then motivated. This is the typical setting for Function Properties and for Properties that are not allowed for secure devices.

  Runtime behaviour

 - Constant This means that the value does not change for Erase Code for which this is given and for none of the other Erase Codes.

 - Runtime The MaS may already also change at any time, independent of the restart. The MaS may thus after restart exhibit a different value as before the restart. The value can be different after every restart. The MaC has to read out the value from the MaS if it needs it.

NOTE 1 For the MaC, “runtime” is the same as “recalculate”;
“runtime” is only an extra addition that the value may anyhow already
change during runtime.

###### Interpretation

 Master Reset is the functionality of a MaS to set itself, one or more parts of its configuration back to an internal kept state, without these being set by the MaC. These internal states are default values that may differ from the state of the MaS as delivered. The below defined Erase Codes “ex-factory” shall thus be understood as “set back a default state” rather than “set back to the delivery state”.

Savedate: Filename: page 4 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master Reset of Resources

 There are no requirements on whether or not an application may be running in the MaS after a Master Reset: it is possible that the MaS restores a default application. This has consequences for the requirements of certain Resources, like Address Table, Load State Machine and other.

 Compound data (for Function Property or Data Property)

 If a Property (Function Property or Data Property) gives access to more than one piece of data and if all fields have the same behaviour for Master Reset and co, then this Property will not be split up and the common requirements will be defined. If the components however differ in their requirements, then that Property has to be split up in one row per field or component and for each the requirements for Master Reset and co will have to be defined.

 Function Properties

 For Function Properties, the Action shall be set to “Not applicable”.

  If the Function Property affect another Resource that is not available as a PID, then it needs to be defined what the Master Reset behaviour for that Resource shall be.

EXAMPLE 1 Log files in KNX Data Security.

######  If there is no Resource behind the Function Property, then the answer of the Property after the Master Reset shall be specified.

Savedate: Filename: page 5 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.2 Object Type 0: Device Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

8 PID_SERVICE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

9 PID_FIRMWARE_REVISION (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
10 PID_SERVICES_SUPPORTED (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
11 PID_SERIAL_NUMBER (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
12 PID_MANUFACTURER_ID (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
14 PID_DEVICE_CONTROL KNX default KNX default KNX default KNX default KNX default KNX default
15 PID_ORDER_INFO (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
16 PID_PEI_TYPE recalculate recalculate recalculate recalculate recalculate recalculate
17 PID_PORT_CONFIGURATION (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
18 PID_POLL_GROUP_SETTINGS KNX default KNX default KNX default not influenced not influenced not influenced
19 PID_MANUFACTURER_DATA (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
21 PID_DESCRIPTION implementation implementation implementation not influenced not influenced not influenced

default default default

25 PID_VERSION (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
29 PID_OBJECT_INDEX (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
30 PID_DOWNLOAD_COUNTER recalculate recalculate recalculate not influenced not influenced not influenced
51 PID_ROUTING_COUNT implementation implementation implementation not influenced not influenced not influenced

default default default

52 PID_MAX_RETRY_COUNT KNX default KNX default KNX default not influenced not influenced not influenced
53 PID_ERROR_FLAGS implementation implementation implementation not influenced not influenced not influenced

default default default

54 PID_PROG_MODE (PID_PROGMODE) KNX default KNX default KNX default KNX default KNX default KNX default
55 PID_PRODUCT_ID (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
56 PID_MAX_APDU_LENGTH (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced

Savedate: Filename: page 6 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|8|PID_SERVICE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|9|PIDFIRMWAREREVISION (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|10|__<br>PIDSERVICESSUPPORTED(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|11|__<br>PIDSERIALNUMBER(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|12|__<br>PIDMANUFACTURERID(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|14|__<br>PIDDEVICECONTROL|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|15|__<br>PIDORDERINFO (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|16|__<br>PIDPEITYPE|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|17|__<br>PIDPORTCONFIGURATION (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|18|__<br>PIDPOLLGROUPSETTINGS|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|19|___<br>PIDMANUFACTURERDATA(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|21|__<br>PID_DESCRIPTION|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|25|PIDVERSION (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|29|_<br>PIDOBJECTINDEX(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|30|__<br>PIDDOWNLOADCOUNTER|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|51|__<br>PID_ROUTING_COUNT|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|52|PIDMAXRETRYCOUNT|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|53|___<br>PID_ERROR_FLAGS|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|54|PIDPROGMODE(PIDPROGMODE)|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|55|___<br>PIDPRODUCTID(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|56|__<br>PIDMAXAPDULENGTH(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

57 PID_SUBNET_ADDR KNX default KNX default not influenced not influenced not influenced not influenced
58 PID_DEVICE_ADDR KNX default KNX default not influenced not influenced not influenced not influenced
59 PID_PB_CONFIG to be defined to be defined to be defined to be defined to be defined to be defined
67 PID_PSU_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
68 PID_PSU_STATUS (RUNTIME value) not influenced not influenced not influenced not influenced not influenced not influenced
69 PID_PSU_ENABLE implementation implementation implementation not influenced not influenced not influenced

default default default

70 PID_DOMAIN_ADDRESS implementation implementation not influenced not influenced not influenced not influenced

default default

71 PID_IO_LIST recalculate recalculate recalculate not influenced not influenced not influenced
72 PID_MGT_DESCRIPTOR_01 (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
73 PID_PL110_PARAM KNX default KNX default not influenced not influenced not influenced not influenced
74 PID_RF_REPEAT_COUNTER implementation implementation not influenced not influenced not influenced not influenced

default default

75 PID_RECEIVE_BLOCK_TABLE to be defined to be defined to be defined to be defined to be defined to be defined
76 PID_RANDOM_PAUSE_TABLE to be defined to be defined to be defined to be defined to be defined to be defined
77 PID_RECEIVE_BLOCK_NR to be defined to be defined to be defined to be defined to be defined to be defined
78 PID_HARDWARE_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
79 PID_RETRANSMITTER_NUMBER to be defined to be defined to be defined to be defined to be defined to be defined
80 PID_SERIAL_NR_TABLE to be defined to be defined to be defined to be defined to be defined to be defined
81 PID_BIBAT_MASTER_ADDRESS to be defined to be defined to be defined to be defined to be defined to be defined
82 PID_RF_DOMAIN_ADDRESS implementation implementation not influenced not influenced not influenced not influenced

default default

83 PID_DEVICE_DESCRIPTOR (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
84 PID_METERING_FILTER_TABLE to be defined to be defined to be defined to be defined to be defined to be defined
85 PID_GROUP_TELEGR_RATE_ LIMIT_TIME_BASE implementation implementation implementation not influenced not influenced not influenced

default default default

86 PID_GROUP_TELEGR_RATE_ implementation implementation implementation not influenced not influenced not influenced
LIMIT_NO_OF_TELEGR default default default

Savedate: Filename: page 7 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|57|PIDSUBNETADDR|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|58|__<br>PIDDEVICEADDR|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|59|__<br>PIDPBCONFIG|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|67|__<br>PIDPSUTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|68|__<br>PIDPSUSTATUS (RUNTIME value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|69|__<br>PID_PSU_ENABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|70|PID_DOMAIN_ADDRESS|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|71|PIDIOLIST|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|72|__<br>PIDMGTDESCRIPTOR01 (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|73|___<br>PIDPL110PARAM|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|74|__<br>PID_RF_REPEAT_COUNTER|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|75|PIDRECEIVEBLOCKTABLE|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|76|___<br>PIDRANDOMPAUSETABLE|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|77|___<br>PIDRECEIVEBLOCKNR|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|78|___<br>PIDHARDWARETYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|79|__<br>PIDRETRANSMITTERNUMBER|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|80|__<br>PIDSERIALNRTABLE|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|81|___<br>PIDBIBATMASTERADDRESS|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|82|___<br>PID_RF_DOMAIN_ADDRESS|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|83|PIDDEVICEDESCRIPTOR (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|84|__<br>PIDMETERINGFILTERTABLE|to be defined|to be defined|to be defined|to be defined|to be defined|to be defined|
|85|___<br>PID_GROUP_TELEGR_RATE_ LIMIT_TIME_BASE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|86|PID_GROUP_TELEGR_RATE_<br>LIMITNOOFTELEGR|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

89 PID_FEATURES_SUPPORTED (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
101 PID_CHANNEL_01_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
102 PID_CHANNEL_02_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
103 PID_CHANNEL_03_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
104 PID_CHANNEL_04_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
105 PID_CHANNEL_05_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
106 PID_CHANNEL_06_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
107 PID_CHANNEL_07_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
108 PID_CHANNEL_08_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
109 PID_CHANNEL_09_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
110 PID_CHANNEL_10_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
111 PID_CHANNEL_11_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
112 PID_CHANNEL_12_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
113 PID_CHANNEL_13_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
114 PID_CHANNEL_14_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
115 PID_CHANNEL_15_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
116 PID_CHANNEL_16_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
117 PID_CHANNEL_17_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
118 PID_CHANNEL_18_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
119 PID_CHANNEL_19_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
120 PID_CHANNEL_20_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
121 PID_CHANNEL_21_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
122 PID_CHANNEL_22_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
123 PID_CHANNEL_23_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable

1) PID_CHANNEL_01_PARAM to PID_CHANNEL_32_PARAM are used in Static E-Mode Channels. These should no longer be used, in favour of the Flexible E-Mode

Channels (FEC). These PIDs shall not be used in combination with Master Reset.

Savedate: Filename: page 8 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|89|PIDFEATURESSUPPORTED(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|101|__<br> PIDCHANNEL01PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|102|___<br> PIDCHANNEL02PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|103|___<br> PIDCHANNEL03PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|104|___<br> PIDCHANNEL04PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|105|___<br> PIDCHANNEL05PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|106|___<br> PIDCHANNEL06PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|107|___<br> PIDCHANNEL07PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|108|___<br> PIDCHANNEL08PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|109|___<br> PIDCHANNEL09PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|110|___<br> PIDCHANNEL10PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|111|___<br> PIDCHANNEL11PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|112|___<br> PIDCHANNEL12PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|113|___<br> PIDCHANNEL13PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|114|___<br> PIDCHANNEL14PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|115|___<br> PIDCHANNEL15PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|116|___<br> PIDCHANNEL16PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|117|___<br> PIDCHANNEL17PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|118|___<br> PIDCHANNEL18PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|119|___<br> PIDCHANNEL19PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|120|___<br> PIDCHANNEL20PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|121|___<br> PIDCHANNEL21PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|122|___<br> PIDCHANNEL22PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|123|___<br> PIDCHANNEL23PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

124 PID_CHANNEL_24_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
125 PID_CHANNEL_25_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
126 PID_CHANNEL_26_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
127 PID_CHANNEL_27_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
128 PID_CHANNEL_28_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
129 PID_CHANNEL_29_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
130 PID_CHANNEL_30_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
131 PID_CHANNEL_31_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable
132 PID_CHANNEL_32_PARAM[ 1)] not applicable not applicable not applicable not applicable not applicable not applicable

##### 2.3.2.3 Object Type 1:Addresstable

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

Group Address Table implementation implementation implementation not influenced not influenced not influenced

default default default

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

7 PID_TABLE_REFERENCE recalculate recalculate recalculate not influenced not influenced not influenced
23 PID_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

25 PID_VERSION (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced

Savedate: Filename: page 9 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|124|PIDCHANNEL24PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|125|___<br> PIDCHANNEL25PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|126|___<br> PIDCHANNEL26PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|127|___<br> PIDCHANNEL27PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|128|___<br> PIDCHANNEL28PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|129|___<br> PIDCHANNEL29PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|130|___<br> PIDCHANNEL30PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|131|___<br> PIDCHANNEL31PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|132|___<br> PIDCHANNEL32PARAM 1)|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||Group Address Table|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|7|PIDTABLEREFERENCE|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|23|__<br>PID_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|25|PIDVERSION (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

27 PID_MCB_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

29 PID_OBJECT_INDEX (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
30 PID_DOWNLOAD_COUNTER recalculate recalculate recalculate not influenced not influenced not influenced
51 PID_EXT_FRAMEFORMAT (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
52 PID_ADDRTAB1 recalculate recalculate recalculate not influenced not influenced not influenced
53 PID_GROUP_RESPONSER_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

##### 2.3.2.4 Object Type 2: Associationtable Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

Association Table memory implementation implementation implementation not influenced not influenced not influenced

default default default

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

7 PID_TABLE_REFERENCE recalculate recalculate recalculate recalculate recalculate recalculate
23 PID_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

27 PID_MCB_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

Savedate: Filename: page 10 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|27|PID_MCB_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|29|PIDOBJECTINDEX(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|30|__<br>PIDDOWNLOADCOUNTER|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|51|__<br>PIDEXTFRAMEFORMAT(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|52|__<br>PIDADDRTAB1|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|53|_<br>PID_GROUP_RESPONSER_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||Association Table memory|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|7|PIDTABLEREFERENCE|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|23|__<br>PID_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|27|PID_MCB_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

##### 2.3.2.5 Object Type 3: Applicationprogram

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

Application Program memory implementation implementation implementation not influenced not influenced not influenced

default default default

Application Paramater memory implementation implementation implementation not influenced not influenced not influenced

default default default

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

6 PID_RUN_STATE_CONTROL recalculate recalculate recalculate recalculate recalculate recalculate
7 PID_TABLE_REFERENCE recalculate recalculate recalculate recalculate recalculate recalculate
13 PID_PROGRAM_VERSION implementation implementation implementation not influenced not influenced not influenced

default default default

16 PID_PEI_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
27 PID_MCB_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

52 PID_OPERATION_MODE KNX default KNX default KNX default KNX default KNX default KNX default

Savedate: Filename: page 11 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||Application Program memory|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
||Application Paramater memory|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|6|PIDRUNSTATECONTROL|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|7|___<br>PIDTABLEREFERENCE|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|13|__<br>PID_PROGRAM_VERSION|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|16|PIDPEITYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|27|__<br>PID_MCB_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|52|PIDOPERATIONMODE|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.6 Object Type 4: Application Program 2 Object

**-** **02h** **07h** **01h** **None**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

Application Program memory implementation implementation implementation not influenced not influenced not influenced

default default default

Application Paramater memory implementation implementation implementation not influenced not influenced not influenced

default default default

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

6 PID_RUN_STATE_CONTROL recalculate recalculate recalculate recalculate recalculate recalculate
7 PID_TABLE_REFERENCE recalculate recalculate recalculate recalculate recalculate recalculate
13 PID_PROGRAM_VERSION (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
16 PID_PEI_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
27 PID_MCB_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

Savedate: Filename: page 12 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|None<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||Application Program memory|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
||Application Paramater memory|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|6|PIDRUNSTATECONTROL|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|7|___<br>PIDTABLEREFERENCE|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|13|__<br>PIDPROGRAMVERSION (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|16|__<br>PIDPEITYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|27|__<br>PID_MCB_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.7 Object Type 6: Router Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

System Broadcast Routing Mode
0 Filter Table implementation implementation implementation not influenced not influenced not influenced

default default default

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

29 PID_OBJECT_INDEX (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
30 PID_DOWNLOAD_COUNTER recalculate recalculate recalculate not influenced not influenced not influenced
51 PID_LINE_STATUS (RUNTIME value) recalculate recalculate recalculate recalculate recalculate recalculate
52 PID_MAIN_LCCONFIG - PHYS_FRAME[ 2)] implementation KNX default not influenced not influenced not influenced not influenced

default

52 PID_MAIN_LCCONFIG - PHYS_REPEAT implementation KNX default not influenced not influenced not influenced not influenced

default

52 PID_MAIN_LCCONFIG - BROADCAST_LOCK implementation KNX default not influenced not influenced not influenced not influenced

default

52 PID_MAIN_LCCONFIG - BROADCAST_REPEAT implementation KNX default not influenced not influenced not influenced not influenced

default

52 PID_MAIN_LCCONFIG - GROUP_IACK_ROUT implementation KNX default not influenced not influenced not influenced not influenced

default

52 PID_MAIN_LCCONFIG - PHYS_IACK implementation KNX default not influenced not influenced not influenced not influenced

default

2) For Erase Code 07h, it may be a security issue if after a Master Reset the handling of point-to-point communication messages and the handling of broadcast messages

changes; these shall therefore be "Unchanged"; for ease of implementation, also the other fields are required to be "Unchanged".

Savedate: Filename: page 13 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||System Broadcast Routing Mode|||||||
|0|Filter Table|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|29|PIDOBJECTINDEX(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|30|__<br>PIDDOWNLOADCOUNTER|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|51|__<br>PIDLINESTATUS (RUNTIME value)|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|52|__<br>PID_MAIN_LCCONFIG - PHYS_FRAME 2)|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|52|PID_MAIN_LCCONFIG - PHYS_REPEAT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|52|PID_MAIN_LCCONFIG - BROADCAST_LOCK|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|52|PID_MAIN_LCCONFIG - BROADCAST_REPEAT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|52|PID_MAIN_LCCONFIG - GROUP_IACK_ROUT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|52|PID_MAIN_LCCONFIG - PHYS_IACK|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

53 PID_SUB_LCCONFIG - PHYS_FRAME implementation KNX default not influenced not influenced not influenced not influenced

default

53 PID_SUB_LCCONFIG - PHYS_REPEAT implementation KNX default not influenced not influenced not influenced not influenced

default

53 PID_SUB_LCCONFIG - BROADCAST_LOCK implementation KNX default not influenced not influenced not influenced not influenced

default

53 PID_SUB_LCCONFIG - BROADCAST_REPEAT implementation KNX default not influenced not influenced not influenced not influenced

default

53 PID_SUB_LCCONFIG - GROUP_IACK_ROUT implementation KNX default not influenced not influenced not influenced not influenced

default

53 PID_SUB_LCCONFIG - PHYS_IACK implementation KNX default not influenced not influenced not influenced not influenced

default

54 PID_MAIN_LCGRPCONFIG implementation KNX default KNX default not influenced not influenced not influenced

default

55 PID_SUB_LCGRPCONFIG implementation KNX default KNX default not influenced not influenced not influenced

default

56 PID_ROUTETABLE_CONTROL (refers to the Filter implementation implementation implementation not influenced not influenced not influenced
Table) default default default

57 PID_COUPL_SERV_CONTROL implementation KNX default not influenced not influenced not influenced not influenced

default

58 PID_MAX_APDULENGTH_ROUTING (CONSTANT not influenced not influenced not influenced not influenced not influenced not influenced
value)

59 PID_L2_COUPLER_TYPE implementation KNX default not influenced not influenced not influenced not influenced

default

61 PID_HOP_COUNT implementation implementation not influenced not influenced not influenced not influenced

default default

63 PID_MEDIUM (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
67 PID_FILTER_TABLE_USE implementation implementation implementation not influenced not influenced not influenced

default default default

80 PID_SECURITY_ROUTING_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced

Savedate: Filename: page 14 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|53|PID_SUB_LCCONFIG - PHYS_FRAME|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|53|PID_SUB_LCCONFIG - PHYS_REPEAT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|53|PID_SUB_LCCONFIG - BROADCAST_LOCK|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|53|PID_SUB_LCCONFIG - BROADCAST_REPEAT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|53|PID_SUB_LCCONFIG - GROUP_IACK_ROUT|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|53|PID_SUB_LCCONFIG - PHYS_IACK|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|54|PID_MAIN_LCGRPCONFIG|implementation<br>default|<br>KNX default|KNX default|not influenced|not influenced|not influenced|
|55|PID_SUB_LCGRPCONFIG|implementation<br>default|<br>KNX default|KNX default|not influenced|not influenced|not influenced|
|56|PID_ROUTETABLE_CONTROL (refers to the Filter<br>Table)|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|57|PID_COUPL_SERV_CONTROL|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|58|PID_MAX_APDULENGTH_ROUTING (CONSTANT<br>value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|59|PID_L2_COUPLER_TYPE|implementation<br>default|<br>KNX default|not influenced|not influenced|not influenced|not influenced|
|61|PID_HOP_COUNT|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|63|PIDMEDIUM (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|67|_<br>PID_FILTER_TABLE_USE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|80|PIDSECURITYROUTINGCONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

81 PID_SECURITY_PROXY_GRP_KEY_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
82 PID_SECURITY_PROXY_ZONE_KEY_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
83 PID_SECURITY_PROXY_INDIVIDUAL_ADDRESS_T KNX default KNX default KNX default not influenced not influenced not influenced
ABLE

84 PID_UNICAST_ROUTING_CONTROL implementation implementation implementation implementation implementation implementation

default default default default default default

84 PID_BROADCAST_ROUTING_CONTROL implementation implementation implementation implementation implementation implementation

default default default default default default

104 PID_PL110_SBC_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced
105 PID_PL110_DOA KNX default KNX default not influenced not influenced not influenced not influenced
112 PID_RF_SBC_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced
120 PID_IP_SBC_CONTROL implementation implementation implementation implementation implementation implementation

default default default default default default

##### 2.3.2.8 Object Type 7: LTE Address Routing Table Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

51 PID_LTE_ROUTESELECT implementation implementation implementation not influenced not influenced not influenced

default default default

52 PID_LTE_ROUTETABLE implementation implementation implementation not influenced not influenced not influenced

default default default

Savedate: Filename: page 15 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|81|PIDSECURITYPROXYGRPKEYTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|82|_____<br>PIDSECURITYPROXYZONEKEYTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|83|_____<br>PID_SECURITY_PROXY_INDIVIDUAL_ADDRESS_T<br>ABLE|KNX default|KNX default|KNX default|not influenced|not influenced|not influenced|
|84|PID_UNICAST_ROUTING_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|84|PID_BROADCAST_ROUTING_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|104|PIDPL110SBCCONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|105|___<br> PIDPL110DOA|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|112|__<br> PIDRFSBCCONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|120|___<br> PID_IP_SBC_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|51|PID_LTE_ROUTESELECT|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|52|PID_LTE_ROUTETABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.9 Object Type 8: cEMI Server Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

51 PID_MEDIUM_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
52 PID_COMM_MODE implementation implementation implementation implementation implementation implementation

default default default default default default

53 PID_MEDIUM_AVAILABILITY (RUNTIME value) not influenced not influenced not influenced not influenced not influenced not influenced
54 PID_ADD_INFO_TYPES (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
55 PID_TIME_BASE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
57 PID_CEMI_SERVER_SNA (PID_CLIENT_SNA) KNX default KNX default not influenced not influenced not influenced not influenced
58 PID_CEMI_SERVER_DEVICE_ADDRESS KNX default KNX default not influenced not influenced not influenced not influenced
(PID_CLIENT_DEVICE_ADDRESS)

59 PID_BIBAT_NEXTBLOCK not applicable not applicable not applicable not applicable not applicable not applicable
60 PID_RF_MODE_SELECT implementation implementation implementation implementation implementation implementation

default default default default default default

61 PID_RF_MODE_SUPPORT (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
62 PID_RF_FILTERING_MODE_SELECT KNX default KNX default not influenced not influenced not influenced not influenced
63 PID_RF_FILTERING_MODE_SUPPORT not influenced not influenced not influenced not influenced not influenced not influenced
(CONSTANT value)

64 PID_COMM_MODES_SUPPORTED (CONSTANT not influenced not influenced not influenced not influenced not influenced not influenced
value)

65 PID_FILTERING_MODE_SELECT KNX default KNX default implementation implementation implementation implementation

default default default default

66 PID_FILTERING_MODE_SUPPORT (CONSTANT not influenced not influenced not influenced not influenced not influenced not influenced
value)

Savedate: Filename: page 16 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|51|PIDMEDIUMTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|52|__<br>PID_COMM_MODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|53|PIDMEDIUMAVAILABILITY(RUNTIME value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|54|__<br>PIDADDINFOTYPES (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|55|___<br>PIDTIMEBASE (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|57|__<br>PIDCEMISERVERSNA(PIDCLIENTSNA)|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|58|_____<br>PID_CEMI_SERVER_DEVICE_ADDRESS<br>(PIDCLIENTDEVICEADDRESS)|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|
|59|___<br>PIDBIBATNEXTBLOCK|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|60|__<br>PID_RF_MODE_SELECT|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|61|PIDRFMODESUPPORT(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|62|___<br>PIDRFFILTERINGMODESELECT|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|63|____<br>PID_RF_FILTERING_MODE_SUPPORT<br>(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|64|PID_COMM_MODES_SUPPORTED (CONSTANT<br>value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|65|PID_FILTERING_MODE_SELECT|KNX default|KNX default|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|66|PID_FILTERING_MODE_SUPPORT (CONSTANT<br>value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

68 PID_MAX_INTERFACE_APDU_LENGTH not influenced not influenced not influenced not influenced not influenced not influenced
(CONSTANT value)

69 PID_MAX_LOCAL_APDU_LENGTH (CONSTANT not influenced not influenced not influenced not influenced not influenced not influenced
value)

70 PID_RF_MULTI_SENDING_ACK KNX default KNX default KNX default not influenced not influenced not influenced

##### 2.3.2.10 Object Type 9:Group Object Table

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL implementation implementation implementation not influenced not influenced not influenced

default default default

7 PID_TABLE_REFERENCE recalculate recalculate recalculate not influenced not influenced not influenced
23 PID_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

27 PID_MCB_TABLE implementation implementation implementation not influenced not influenced not influenced

default default default

28 PID_ERROR_CODE implementation implementation implementation not influenced not influenced not influenced

default default default

51 PID_GRPOBJTABLE implementation implementation implementation not influenced not influenced not influenced

default default default

52 PID_EXT_GRPOBJREFERENCE implementation implementation implementation not influenced not influenced not influenced

default default default

66 PID_GO_DIAGNOSTICS implementation implementation implementation implementation implementation implementation

default default default default default default

Savedate: Filename: page 17 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|68|PID_MAX_INTERFACE_APDU_LENGTH<br>(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|69|PID_MAX_LOCAL_APDU_LENGTH (CONSTANT<br>value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|70|PIDRFMULTISENDINGACK|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PID_LOAD_STATE_CONTROL|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|7|PIDTABLEREFERENCE|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|23|__<br>PID_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|27|PID_MCB_TABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|28|PID_ERROR_CODE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|51|PID_GRPOBJTABLE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|52|PID_EXT_GRPOBJREFERENCE|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|66|PID_GO_DIAGNOSTICS|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.11 Object Type 11: KNXnet/IP Parameter Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

29 PID_OBJECT_INDEX (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
30 PID_DOWNLOAD_COUNTER recalculate recalculate recalculate not influenced not influenced not influenced
51 PID_PROJECT_INSTALLATION_ID KNX default KNX default not influenced not influenced not influenced not influenced
52 PID_KNX_INDIVIDUAL_ADDRESS KNX default KNX default not influenced not influenced not influenced not influenced
53 PID_ADDITIONAL_INDIVIDUAL_ADDRESSES implementation implementation not influenced not influenced not influenced not influenced

default default

54 PID_CURRENT_IP_ASSIGNMENT_METHOD recalculate recalculate recalculate recalculate recalculate recalculate
55 PID_IP_ASSIGNMENT_METHOD implementation implementation not influenced not influenced not influenced not influenced

default default

56 PID_IP_CAPABILITIES (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
57 PID_CURRENT_IP_ADDRESS recalculate recalculate recalculate recalculate recalculate recalculate
58 PID_CURRENT_SUBNET_MASK recalculate recalculate recalculate recalculate recalculate recalculate
59 PID_CURRENT_DEFAULT_GATEWAY recalculate recalculate recalculate recalculate recalculate recalculate
60 PID_IP_ADDRESS implementation implementation not influenced not influenced not influenced not influenced

default default

61 PID_SUBNET_MASK implementation implementation not influenced not influenced not influenced not influenced

default default

62 PID_DEFAULT_GATEWAY implementation implementation not influenced not influenced not influenced not influenced

default default

63 PID_DHCP_BOOTP_SERVER recalculate recalculate recalculate recalculate recalculate recalculate
64 PID_MAC_ADDRESS (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
65 PID_SYSTEM_SETUP_MULTICAST_ADDRESS not influenced not influenced not influenced not influenced not influenced not influenced
(CONSTANT value)

Savedate: Filename: page 18 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|29|PIDOBJECTINDEX(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|30|__<br>PIDDOWNLOADCOUNTER|recalculate|recalculate|recalculate|not influenced|not influenced|not influenced|
|51|__<br>PIDPROJECTINSTALLATIONID|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|52|___<br>PIDKNXINDIVIDUALADDRESS|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|53|___<br>PID_ADDITIONAL_INDIVIDUAL_ADDRESSES|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|54|PIDCURRENTIPASSIGNMENTMETHOD|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|55|____<br>PID_IP_ASSIGNMENT_METHOD|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|56|PIDIPCAPABILITIES (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|57|__<br>PIDCURRENTIPADDRESS|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|58|___<br>PIDCURRENTSUBNETMASK|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|59|___<br>PIDCURRENTDEFAULTGATEWAY|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|60|___<br>PID_IP_ADDRESS|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|61|PID_SUBNET_MASK|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|62|PID_DEFAULT_GATEWAY|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|63|PIDDHCPBOOTPSERVER|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|64|___<br>PIDMACADDRESS (CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|65|__<br>PID_SYSTEM_SETUP_MULTICAST_ADDRESS<br>(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

66 PID_ROUTING_MULTICAST_ADDRESS KNX default KNX default not influenced not influenced not influenced not influenced
67 PID_TTL KNX default KNX default not influenced not influenced not influenced not influenced
68 PID_KNXNETIP_DEVICE_CAPABILITIES not influenced not influenced not influenced not influenced not influenced not influenced
(CONSTANT value)

69 PID_KNXNETIP_DEVICE_STATE recalculate recalculate recalculate recalculate recalculate recalculate
70 PID_KNXNETIP_ROUTING_CAPABILITIES not influenced not influenced not influenced not influenced not influenced not influenced
(CONSTANT value)

71 PID_PRIORITY_FIFO_ENABLED implementation implementation not influenced not influenced not influenced not influenced

default default

72 PID_QUEUE_OVERFLOW_TO_IP KNX default KNX default implementation implementation implementation implementation

default default default default

73 PID_QUEUE_OVERFLOW_TO_KNX KNX default KNX default implementation implementation implementation implementation

default default default default

74 PID_MSG_TRANSMIT_TO_IP KNX default KNX default implementation implementation implementation implementation

default default default default

75 PID_MSG_TRANSMIT_TO_KNX KNX default KNX default implementation implementation implementation implementation

default default default default

76 PID_FRIENDLY_NAME implementation implementation not influenced not influenced not influenced not influenced

default default

78 PID_ROUTING_BUSY_WAIT_TIME KNX default KNX default not influenced not influenced not influenced not influenced
79 PID_TUNNELLING_ADDRESSES (CONSTANT not influenced not influenced not influenced not influenced not influenced not influenced
value)

91 PID_BACKBONE_KEY KNX default KNX default not influenced not influenced not influenced not influenced
92 PID_DEVICE_AUTHENTICATION_CODE KNX default KNX default not influenced not influenced not influenced not influenced
93 PID_PASSWORD_HASHES - A. Management KNX default KNX default not influenced not influenced not influenced not influenced
password hash

93 PID_PASSWORD_HASHES - B. User level hashes KNX default KNX default KNX default not influenced not influenced not influenced
94 PID_SECURED_SERVICE_FAMILIES - 03h KNX default KNX default not influenced not influenced not influenced not influenced
KNXnet/IP Device Management

Savedate: Filename: page 19 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|66|PIDROUTINGMULTICASTADDRESS|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|67|___<br>PIDTTL|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|68|_<br>PID_KNXNETIP_DEVICE_CAPABILITIES<br>(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|69|PIDKNXNETIPDEVICESTATE|recalculate|recalculate|recalculate|recalculate|recalculate|recalculate|
|70|___<br>PID_KNXNETIP_ROUTING_CAPABILITIES<br>(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|71|PID_PRIORITY_FIFO_ENABLED|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|72|PID_QUEUE_OVERFLOW_TO_IP|KNX default|KNX default|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|73|PID_QUEUE_OVERFLOW_TO_KNX|KNX default|KNX default|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|74|PID_MSG_TRANSMIT_TO_IP|KNX default|KNX default|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|75|PID_MSG_TRANSMIT_TO_KNX|KNX default|KNX default|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|
|76|PID_FRIENDLY_NAME|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|78|PIDROUTINGBUSYWAITTIME|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|79|____<br>PID_TUNNELLING_ADDRESSES (CONSTANT<br>value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|91|PIDBACKBONEKEY|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|92|__<br>PIDDEVICEAUTHENTICATIONCODE|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|93|___<br>PID_PASSWORD_HASHES - A. Management<br>password hash|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|
|93|PIDPASSWORDHASHES - B.User level hashes|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|94|__<br>PID_SECURED_SERVICE_FAMILIES - 03h<br>KNXnet/IP Device Management|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**PID Property Name** **without IA**

94 PID_SECURED_SERVICE_FAMILIES - 04h KNX default KNX default not influenced not influenced not influenced not influenced
KNXnet/IP Tunnelling

94 PID_SECURED_SERVICE_FAMILIES - 05h KNX default KNX default not influenced not influenced not influenced not influenced
KNXnet/IP Routing

Secured services KNX default KNX default not influenced not influenced not influenced not influenced
95 PID_MULTICAST_LATENCY_TOLERANCE KNX default KNX default not influenced not influenced not influenced not influenced
96 PID_SYNC_LATENCY_FRACTION KNX default KNX default not influenced not influenced not influenced not influenced
97 PID_TUNNELLING_USERS KNX default KNX default not influenced not influenced not influenced not influenced

##### 2.3.2.12 Data Security

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**Resource** **without IA**

Sequence Number Sending not influenced not influenced not influenced not influenced not influenced not influenced
used Key for Management KNX default KNX default not influenced not influenced not influenced not influenced
Sequence Number for Tool Access KNX default KNX default not influenced not influenced not influenced not influenced

##### 2.3.2.13 Object Type 17: Security Interface Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**Resource** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced

Savedate: Filename: page 20 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|PID|Property Name|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|94|PID_SECURED_SERVICE_FAMILIES - 04h<br>KNXnet/IP Tunnelling|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|
|94|PID_SECURED_SERVICE_FAMILIES - 05h<br>KNXnet/IP Routing|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|
||Secured services|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|95|PIDMULTICASTLATENCYTOLERANCE|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|96|___<br>PIDSYNCLATENCYFRACTION|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|97|___<br>PIDTUNNELLINGUSERS|KNX default|KNX default|not influenced|not influenced|not influenced|not influenced|

|Col1|Resource|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
||Sequence Number Sending|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
||used Key for Management|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
||Sequence Number for Tool Access|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|

|Col1|Resource|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**Resource** **without IA**

59 PID_SEQUENCE_NUMBER_SENDING [3] not influenced not influenced not influenced not influenced not influenced not influenced
55 PID_SECURITY_FAILURES_LOG KNX default KNX default KNX default not influenced not influenced not influenced
57 PID_SECURITY_REPORT KNX default KNX default KNX default not influenced not influenced not influenced
58 PID_SECURITY_REPORT_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced
51 PID_SECURITY_MODE KNX default KNX default not influenced not influenced not influenced not influenced
56 PID_TOOL_KEY KNX default KNX default not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

5 PID_LOAD_STATE_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced
52 PID_P2P_KEY_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
53 PID_GRP_KEY_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
54 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
60 PID_ZONE_KEY_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
61 PID_GO_SECURITY_FLAGS KNX default KNX default KNX default not influenced not influenced not influenced
62 PID_ROLE_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
70 PID_PB_KEY_ESTABLISH_REQUEST not applicable not applicable not applicable not influenced not influenced not influenced
71 PID_PB_KEY_ESTABLISH_RESPONSE not applicable not applicable not applicable not influenced not influenced not influenced
72 PID_PB_SECURITY_CONFIRM not applicable not applicable not applicable not influenced not influenced not influenced

3) See the special handling in case of values above FF0000000000h however (AN158 v05 “Data Security” DP clause 2.2.1.3.1).

Savedate: Filename: page 21 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|Col1|Resource|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|59|PIDSEQUENCENUMBERSENDING 3|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|55|___<br>PIDSECURITYFAILURESLOG|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|57|___<br>PIDSECURITYREPORT|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|58|__<br>PIDSECURITYREPORTCONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|51|___<br>PIDSECURITYMODE|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|56|__<br>PIDTOOLKEY|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|5|PIDLOADSTATECONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|52|___<br>PIDP2PKEYTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|53|___<br>PIDGRPKEYTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|54|___<br>PIDSECURITYINDIVIDUALADDRESSTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|60|____<br>PIDZONEKEYTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|61|___<br>PIDGOSECURITYFLAGS|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|62|___<br>PIDROLETABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|70|__<br>PIDPBKEYESTABLISHREQUEST|not applicable|not applicable|not applicable|not influenced|not influenced|not influenced|
|71|____<br>PIDPBKEYESTABLISHRESPONSE|not applicable|not applicable|not applicable|not influenced|not influenced|not influenced|
|72|____<br>PIDPBSECURITYCONFIRM|not applicable|not applicable|not applicable|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

##### 2.3.2.14 Object Type 19: RF Medium Object

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**Resource** **without IA**

1 PID_OBJECT_TYPE (CONSTANT value) not influenced not influenced not influenced not influenced not influenced not influenced
2 PID_OBJECT_NAME implementation implementation implementation not influenced not influenced not influenced

default default default

51 PID_RF_MULTI_TYPE KNX default KNX default KNX default not influenced not influenced not influenced
52 PID_RF_MULTI_PHYSICAL_FEATURES not influenced not influenced not influenced not influenced not influenced not influenced
53 PID_RF_MULTI_CALL_CHANNEL KNX default KNX default KNX default not influenced not influenced not influenced
54 PID_RF_MULTI_OBJECT_LINK KNX default KNX default KNX default not influenced not influenced not influenced
55 PID_RF_MULTI_EXT_GA_REPEATED KNX default KNX default KNX default not influenced not influenced not influenced
56 PID_RF_DOMAIN_ADDRESS implementation implementation not influenced not influenced not influenced not influenced

default default

57 PID_RF_RETRANSMITTER KNX default KNX default KNX default not influenced not influenced not influenced
58 PID_RF_FILTERING_MODE_SUPPORT not influenced not influenced not influenced not influenced not influenced not influenced
59 PID_RF_FILTERING_MODE_SELECT KNX default KNX default KNX default not influenced not influenced not influenced
60 PID_RF_BIDIR_TIMEOUT KNX default KNX default KNX default not influenced not influenced not influenced
61 PID_RF_DIAG_SA_FILTER_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
62 PID_RF_DIAG_QUALITY_TABLE[] KNX default KNX default KNX default not influenced not influenced not influenced
63 PID_RF_DIAG_PROBE KNX default KNX default KNX default KNX default KNX default KNX default
70 PID_TRANSMISSION_MODE KNX default KNX default KNX default KNX default KNX default KNX default
71 PID_RECEPTION_MODE KNX default KNX default KNX default KNX default KNX default KNX default
72 PID_TEST_SIGNAL KNX default KNX default KNX default KNX default KNX default KNX default
73 PID_FAST_ACK KNX default KNX default KNX default KNX default KNX default KNX default
74 PID_FAST_ACK_ACTIVATE KNX default KNX default KNX default KNX default KNX default KNX default
75 PID_RF_TYPES_SUPPORTED not influenced not influenced not influenced not influenced not influenced not influenced
76 PID_GRP_TX_MULTI_INFO_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
77 PID_GRP_RX_MULTI_INFO_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
78 PID_RF_MULTI_MEDIA_COUPLER_TYPE KNX default KNX default KNX default not influenced not influenced not influenced
79 PID_RF_MULTI_UNICAST_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced
80 PID_RF_MULTI_BROADCAST_CONTROL KNX default KNX default KNX default not influenced not influenced not influenced

Savedate: Filename: page 22 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|Col1|Resource|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|1|PIDOBJECTTYPE(CONSTANT value)|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|2|__<br>PID_OBJECT_NAME|implementation<br>default|<br>implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|
|51|PIDRFMULTITYPE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|52|___<br>PIDRFMULTIPHYSICALFEATURES|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|53|____<br>PIDRFMULTICALLCHANNEL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|54|____<br>PIDRFMULTIOBJECTLINK|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|55|____<br>PIDRFMULTIEXTGAREPEATED|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|56|_____<br>PID_RF_DOMAIN_ADDRESS|implementation<br>default|<br>implementation<br>default|<br>not influenced|not influenced|not influenced|not influenced|
|57|PIDRFRETRANSMITTER|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|58|__<br>PIDRFFILTERINGMODESUPPORT|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|59|____<br>PIDRFFILTERINGMODESELECT|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|60|____<br>PIDRFBIDIRTIMEOUT|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|61|___<br>PIDRFDIAGSAFILTERTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|62|_____<br>PIDRFDIAGQUALITYTABLE[]|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|63|____<br>PIDRFDIAGPROBE|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|70|___<br>PIDTRANSMISSIONMODE|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|71|__<br>PIDRECEPTIONMODE|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|72|__<br>PIDTESTSIGNAL|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|73|__<br>PIDFASTACK|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|74|__<br>PIDFASTACKACTIVATE|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|KNXdefault|
|75|___<br>PIDRFTYPESSUPPORTED|not influenced|not influenced|not influenced|not influenced|not influenced|not influenced|
|76|___<br>PIDGRPTXMULTIINFOTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|77|_____<br>PIDGRPRXMULTIINFOTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|78|_____<br>PIDRFMULTIMEDIACOUPLERTYPE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|79|_____<br>PIDRFMULTIUNICASTCONTROL|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|80|____<br>PIDRFMULTIBROADCASTCONTROL|KNX default|KNX default|KNX default|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

**-** **02h** **07h** **01h** **none**

**Reset to**

**Local Reset to** **Reset to** **Confirmed**

**default** **Basic Restart Power Cycle**

**default state** **default state** **Restart**

**Resource** **without IA**

81 PID_RF_SMART_RETRANSMITTER KNX default KNX default KNX default not influenced not influenced not influenced
82 PID_GRP_TP_RF_MULTICAST_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
83 PID_GRP_RF_TP_MULTICAST_TABLE KNX default KNX default KNX default not influenced not influenced not influenced
84 PID_RF_MULTI_FAST_SLOW_COMM not applicable not applicable not applicable not applicable not applicable not applicable
85 PID_RF_MULTI_FAST_MC_IA KNX default KNX default KNX default not influenced not influenced not influenced
86 PID_RF_MULTI_SLOW_EXTENDER_IA KNX default KNX default KNX default not influenced not influenced not influenced
87 PID_GRP_MULTICAST_TABLE not applicable not applicable not applicable not influenced not influenced not influenced

Savedate: Filename: page 23 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx

|Col1|Resource|-<br>Local Reset to<br>default state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|none<br>Basic Restart|Power Cycle|
|---|---|---|---|---|---|---|---|
|81|PIDRFSMARTRETRANSMITTER|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|82|___<br>PIDGRPTPRFMULTICASTTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|83|_____<br>PIDGRPRFTPMULTICASTTABLE|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|84|_____<br>PIDRFMULTIFASTSLOWCOMM|not applicable|not applicable|not applicable|not applicable|not applicable|not applicable|
|85|_____<br>PIDRFMULTIFASTMCIA|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|86|_____<br>PIDRFMULTISLOWEXTENDERIA|KNXdefault|KNXdefault|KNXdefault|not influenced|not influenced|not influenced|
|87|_____<br>PIDGRPMULTICASTTABLE|not applicable|not applicable|not applicable|not influenced|not influenced|not influenced|


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

### 2.4 Management Procedures

#### 2.4.1 Master Reset

 _The definitions of clause 2.3.2.1 are to be integrated in [01] clause 3.7.1.2 “Master Reset”._

### 2.5 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not modify or introduce any Configuration Procedures. If the MaC supports Master Reset, then existing Configuration Procedures for unload may be more efficient and the reading out of some Resource data can be omitted if the value after Master Reset is known.

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

###### Master Reset is mandatory for devices supporting KNX Data Security. The implementation is however free for other Profiles.

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

###### This document does not introduce – neither modify any Profiles.

 Additionally, the requirements on the reset values for the given Resources are independent of the Profile.

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

###### The definition of Master Reset and the discovery are not modified by this Application Note.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

###### Indications are given in this paper directing the integration in the KNX Specifications.

### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

###### In the existing Configuration Procedure for unloading a KNX device, the MaC (ETS) concludes on the order in which the Resources are reset and their values. Master Reset with ex-factory state offers an alternative method, in which the device itself concludes on the values and order. The same goal is reached with potentially more freedom for the implementation, as many Resource are allowed to assume an implementation default value.

 However, by requiring KNX default values for the Resources that are relevant for a subsequent access by ETS, compatibility with the tool where necessary is guaranteed.

Savedate: Filename: page 24 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx


-----

###### KNX CERTIFICATION AND LICENCE SYSTEM KNX AN194 Master of Resources

### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

###### KNX Master Reset may clear the Resources that influence the runtime communication of the MaSs. This is however not different from the existing explicit “unload” Configuration Procedure used by the MaC today.

### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

###### The above required values for Master Reset shall be tested in certification tests. However, these tests may be limited to the testing of values that are set to “not influenced” and “KNX default”, as these are either necessary for security reasons and/or for compatibility with the MaC (ETS).

### 3.5 Integration and common tool impact

######  The requirements for PID_UNICAST_ROUTING_CONTROL in AN192 “AN192 Coupler security extensions” ([03]) are missing. These shall be set to “KNX default” as specified in this document.

### 3.6 Security

 _This clause is not intended for integration in the KNX Specifications._

###### The access to the Master Reset functionality itself is specified in [04].

 The requirements to the reset values as specified in this document are selected with security as a primary criterion.

EXAMPLE 2 It is made sure that after a Master Reset to any default state, no project specific information
remains in the MaS.

### 3.7 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

###### No risk nor compatibility issues are seen.

 The use of Master Reset builds an alternative method compared to the explicit method of unloading, which is still required and unchanged. Compatibility with legacy ETS versions is thus not seen.

Savedate: Filename: page 25 of 25
2019 04 01 AN194 v02 Master Reset of Resources AS docx


-----

