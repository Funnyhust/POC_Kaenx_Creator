KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

# Application Note 203/20 v03

**Title:** **USB TL for Secure devices**

**Status:** **Date:**

Approved Standard 2020.12.11

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2020.12.11

**Subject:** Specification of the use of KNX Data Security over the KNX USB
interface.

**Documents** **Modified**

[01] Chapter 3/6/3 “External Message Interface” v01.03.03 AS of

2013.11.29

**Referred**

[02] AN158 “KNX Data Security” v07 AS of 2019.08.20

**Document updates**

**Version** **Date** **Modifications**
KSG907-01 2020.06.22 - First Proposal
KSG907-02 2020.06.30 - Included feedback from online meeting 2020-06-24

                - New error code for “Access denied”
KSG907-03 2020.07.13 - Included feedback from online meeting 2020-07-13

                 - Smaller clarifications
AN203 v01 2020.07.14 - Creation of the Draft Proposal.
KSG907-04 2020.10.01 - Inclusion of the first proposal of resolution of comments.
```
                o “cEMI Local Transport Layer”  “cEMI Transport Layer” 

```
KSG907-05 2020.10.19 - Inclusion of the conclusions of the KSG Core meeting of

2020.10.05.
```
                o Warnings in 3.6.

```
AN203 v02 2020.10.20 - Preparation of the Draft for Voting.
KSG907-05 2020.11.27 - Proposal for the resolution of comments from FV.
AN203 v03 2020.12.11 - Publication of the Approved Standard

Savedate: Filename: page 1 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG907-01|2020.06.22| First Proposal|
|KSG907-02|2020.06.30| Included feedback from online meeting 2020-06-24<br> New error code for“Access denied”|
|KSG907-03|2020.07.13| Included feedback from online meeting 2020-07-13<br> Smaller clarifications|
|AN203 v01|2020.07.14| Creation of the Draft Proposal.|
|KSG907-04|2020.10.01| Inclusion of the first proposal of resolution of comments.<br>`o` “cEMI Local Transport Layer” “cEMI Transport Layer”|
|KSG907-05|2020.10.19| Inclusion of the conclusions of the KSG Core meeting of<br>2020.10.05.<br>`o` Warnings in 3.6.|
|AN203 v02|2020.10.20| Preparation of the Draft for Voting.|
|KSG907-05|2020.11.27| Proposal for the resolution of comments from FV.|
|AN203 v03|2020.12.11| Publication of the Approved Standard|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

**Contents**

##### 1 Purpose, motivation and scope ........................................................................ 2

 2 Specification ....................................................................................................... 3
 2.1 Terms and definitions .............................................................................. 3 2.2 Stack and communication ....................................................................... 3
 2.2.1 Normal conditions ............................................................................. 4 2.3 Resource definition or used Resources................................................... 5 2.4 Management Procedures ........................................................................ 5 2.5 Configuration Procedures ........................................................................ 5
 2.5.1 Normal conditions ............................................................................. 5 2.5.2 Error and exception handling ............................................................ 6 2.6 Usage and context .................................................................................. 6 2.7 Profile definition ....................................................................................... 6 2.8 Identifiers and discovery .......................................................................... 7

 3 Impact and dependencies ................................................................................. 7
 3.1 System specification (“Handbook”) dependencies .................................. 7 3.2 Configuration interworking ....................................................................... 7 3.3 Runtime Interworking .............................................................................. 7 3.4 Registration and certification ................................................................... 7 3.5 Integration and common tool impact ....................................................... 7 3.6 Security ................................................................................................... 7 3.7 Risks and compatibility issues ................................................................. 7

## 1 Purpose, motivation and scope

 _This clause is not intended for integration in the KNX Specifications._

cEMI Transport Layer has been defined to allow a local configuration of a KNX device reusing the same Configuration Procedures as defined via the KNX network. The local
connection can be a link via IP or USB, between a Management Client (ETS) and a KNX
device on medium RF, TP1 or IP.

Also for secure devices the cEMI Transport Layer is possible in principle. While the usage of
cEMI Transport Layer for KNX IP devices is well defined and in use, it is not fully specified
for USB connections. The missing part is the access to some device Resources that are
required to discover the device features and to set communication paths.

Savedate: Filename: page 2 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

The goal is a KNX device with a USB connector that allows secure download of the device
itself via cEMI Transport Layer. The USB connection for access to the KNX medium in Data
Link Layer Mode is not affected by this document.
**Scope**

This document specifies the cEMI Transport Layer access (restrictions) for devices with
enabled Security to the local device. This document does not restrict in any way the access
_to the KNX bus. This specification does not foresee any protection to the bus using the_
standard KNX cEMI Data Link Layer interface. Please refer to 3.6.

## 2 Specification

### 2.1 Terms and definitions

 _This clause is not intended for integration in the KNX Specifications._

There are no new terms and definitions introduced.

### 2.2 Stack and communication
The main communication paths are shown in Figure 1.

USB / cEMI

# 

Resources
LDM

Application Layer

# 
 

cEMI TL

Transport Layer

# 

DLL Network Layer

Data Link Layer

Physical Layer

**KNX TP / KNX RF**

**Figure 1 – Communication paths in the cEMI server device**

Savedate: Filename: page 3 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx


Physical Layer


Application Layer


Resources


Network Layer


**KNX TP / KNX RF**


# 


DLL


# 


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

The download via the cEMI Transport Layer can be secured via Data Security algorithms
using the Tool Key of the device. The fields Control field 1, Control field 2, Source Address
and Destination Address are not present in cEMI Transport Layer messages. The 6 octets at
the corresponding byte positions are named “reserved” and shall be set to 00h. Nevertheless
these fields shall be included into the encryption/decryption process.

See [02] clause 2.2.1.1.3.2 Common requirements, text for B0:

_“The source address, destination address and TL sequence number are not available_
_when the MaS is accessed via a local TL connection. In this case, these fields shall be_
_set to 0 in the B0 and Ctrj blocks.”_

The medium access via Data Link Layer (LL) services should be plain as usual for USB
interfaces. The Local device management (LDM) that is required to setup the connection is
done via the Services for Local Device Management (“M_Prop-services”, [01] clause 4.1.7)
with no access protection defined. So this communication path has to be limited to essential
and non-critical data.

#### 2.2.1 Normal conditions
KNX devices with cEMI Server over USB allow the access to Interface Objects via the
Services for Local Device Management. Devices with Security Mode “Disabled” provide the
same read and write capabilities as via the KNX network but without access protection.

For devices in with Security Mode “Enabled” this access has to be limited. As there is no access
protection defined for the Services for Local Device Management, only those Properties shall
be accessible that are essential for USB communication and that shall not expose a security risk.
As soon as the Security Mode is enabled in a device, all read and write access via the Services
for Local Device Management shall be denied besides the following exceptions.

**Table 1 – Accessibility of Properties for cEMI services for Local Device Management**

**Object** **Security Mode**
**Interface Object**

**Type** **disabled** **enabled**

**Property** **PID** **read** **write** **read** **write**
Device Object 0
PID_SERIAL_NUMBER 11 M (X) M X
PID_PROGMODE 54 M M M M
PID_MAX_APDULENGTH 56 M X M X
PID_SUBNET_ADDR 57 M M M X
PID_DEVICE_ADDR 58 M M M X
PID_RF_DOMAIN_ADDR (RF only) 82 M M M X

cEMI Server Object 8
PID_MEDIUM_TYPE 51 M X M X
PID_COMM_MODE 52 M M M M
PID_COMM_MODES_SUPPORTED 64 M X M X

The Property PID_COMM_MODE shall in any case be writable because it is required to switch
between the different use cases of the USB interface.

The Property PID_SERIAL_NUMBER is currently not read by the MaC (ETS) for USB connection
but could be used to identify the device in the future. So this Property is set to readable also if
Security Mode is enabled.

Savedate: Filename: page 4 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx

|Interface Object|Object<br>Type|Security Mode|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Interface Object**|**Object**<br>**Type **|**disabled**|**disabled**|**enabled**|**enabled**|
|**Property **|**PID**|**read**|**write**|**read**|**write**|
|Device Object|0|||||
|PIDSERIALNUMBER|11|M|(X)|M|X|
|__<br>PIDPROGMODE|54|M|M|M|M|
|_<br>PIDMAXAPDULENGTH|56|M|X|M|X|
|__<br>PIDSUBNETADDR|57|M|M|M|X|
|__<br>PIDDEVICEADDR|58|M|M|M|X|
|__<br>PIDRFDOMAINADDR(RFonly)|82|M|M|M|X|
|___||||||
|cEMIServer Object|8|||||
|PIDMEDIUMTYPE|51|M|X|M|X|
|__<br>PIDCOMMMODE|52|M|M|M|M|
|__<br>PIDCOMMMODESSUPPORTED|64|M|X|M|X|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

The device addresses (PID_RF_DOMAIN_ADDR, PID_SUBNET_ADDR and
PID_DEVICE_ADDR) shall in any case be readable via the cEMI services for Local Device
Management, but can be written only if Security Mode is disabled. As soon as Security Mode
is enabled in the cEMI Server device these addresses shall no longer be writable via the
cEMI services for Local Device Management. The cEMI Client can modify them only via
cEMI Transport Layer services, which shall be secured.

### 2.3 Resource definition or used Resources

 _This clause is not intended for integration in the KNX Specifications._

No new resources are defined.

### 2.4 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Management Procedures.

### 2.5 Configuration Procedures

#### 2.5.1 Normal conditions

##### 2.5.1.1 Network Configuration
As one of the first steps of the Network Configuration, the MaC searches the KNX network
for devices with enabled Programming Mode (NM_IndividualAddress_Read). It shall
additionally (in parallel or afterwards) check if the Programming Mode is enabled in the local
device. This shall be done by using the “cEMI services for local device management”
(M_Prop) accessing PID_PROGMODE in the Device Object.

   - If it is found that the Programming Mode is enabled in more than one device, then
the MaC shall not continue the Network Configuration, as today, but warn the MaC
user. In this, it may be indicated if Programming Mode is enabled in the local
device.

   - If it is found that the Programming Mode is enabled in only one device, other than
the local device, then the Network Configuration shall continue with that remote
device.

   - If it is found that the Programming Mode is enabled only in the local device, then the
MaC shall not give indications to the MaC user but shall perform the Network
Configuration on the local device with the “cEMI services for local devices
management”.

##### 2.5.1.2 Download application via USB cEMI Transport Layer

   - The MaC identifies local parameters of the USB connection (e.g. IA) via cEMI
Services for Local Device Management.

   - On download the MaC compares local device address with target IA.

   - If both are equal the MaC shows a dialog whether local download should be
executed.

   - If confirmed the MaC switches the CommMode to cEMI Transport Layer.

   - The MaC executes the complete download via the cEMI Transport Layer.

Savedate: Filename: page 5 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

#### 2.5.2 Error and exception handling
If a cEMI Client tries to access any Property that is not in the exception list (Table 1) then the
cEMI Server shall respond with error code “Access denied”, regardless whether the
addressed Property exists in the device or not and regardless of any other error code that
might be returned by the Property without security.

 _This error code is not yet defined in [01]. The error code for Access denied shall be 0Bh._

_Table 12 in [01] shall be adapted as follows (new text in blue font)._
_(Spelling mistakes in Description of Error codes 02h and 03h corrected.)_

**Error Code Error Type** **Description** **Service**
00h Unspecified Error unknown error R/W
01h Out of Range write value not allowed (general, if not error 2 W
or 3)

02h Out of MaxRange write value too high W
03h Out of MinRange write value too low W
04h Memory Error memory cannot be written or only with fault(s) W
05h Read Only write access to a ‘read only’ or a write W
protected Property

06h Illegal COMMAND COMMAND not valid or not supported W
07h Void DP read or write access to an non existing R/W
Property

08h Type Conflict write access with a wrong data type (Datapoint W
length)

09h Prop. Index Range read or write access to a non-existing Property R/W
Error array index

0Ah Value temporarily The Property exists but can at this moment not W
not writeable be written with a new value

0Bh Access denied Property access not allowed due to enabled R/W
security

**For Function Properties**

If the Interface Object Property accessed by M_FuncPropCommand.req or by
M_FuncPropStateRead.req is not accessible due to enabled Security Mode, then the cEMI
Server shall respond with a M_FuncPropCommand.con or M_FuncPropStateRead.con
respectively, with return_code “Access denied” and no data (i.e. the returned PDU shall not
contain the field data). This error handling shall apply regardless whether the addressed
Property exists in the device or not.

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

None.

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

None.

Savedate: Filename: page 6 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx

|Error Code|Error Type|Description|Service|
|---|---|---|---|
|00h|Unspecified Error|unknown error|R/W|
|01h|Out of Range|write value not allowed (general, if not error 2<br>or 3)|W|
|02h|Out of MaxRange|write value too high|W|
|03h|Out of MinRange|write value too low|W|
|04h|Memory Error|memory cannot be written or only with fault(s)|W|
|05h|Read Only|write access to a ‘read only’ or a write<br>protected Property|W|
|06h|Illegal COMMAND|COMMAND not valid or not supported|W|
|07h|Void DP|read or write access to an non existing<br>Property|R/W|
|08h|Type Conflict|write access with a wrong data type (Datapoint<br>length)|W|
|09h|Prop. Index Range<br>Error|read or write access to a non-existing Property<br>array index|R/W|
|0Ah|Value temporarily<br>not writeable|The Property exists but can at this moment not<br>be written with a new value|W|
|0Bh|Access denied|Property access not allowed due to enabled<br>security|R/W|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN203** **USB TL for Secure devices**

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

None.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

Indications are given in this document about the integration in the KNX Specifications.

### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

None.

### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

None.

### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

None.

### 3.5 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

None.

### 3.6 Security

 _This clause is not intended for integration in the KNX Specifications._

Next to the cEMI Transport Layer access, the KNX USB interface may also provide a Data
Link Layer access to the bus. This “USB Transport Layer for secure devices” does not
foresee any standard means to prevent this access. Additionally, this access is not governed
by any authentication or authorisation of the cEMI Client. Without further measures, such
KNX USB interface will thus give an easy, unprotected access to the KNX bus.

If this risk exists, then this should be made clear to the ETS user, the installer and the end
user. This should be done in the product documentation. KNX Association will make clear
that this is included in the training documentation.

### 3.7 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

None.

Savedate: Filename: page 7 of 7
2020 12 11 AN203 v03 USB Local TL for Secure devices AS docx


-----

