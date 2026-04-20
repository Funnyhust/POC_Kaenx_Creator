KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

# Application Note 190/17 v01

**Title:** **Flexible E-Mode Channels extensions**

**Status:** **Date:**

Draft Proposal 2017.11.07

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2017.11.07

**Subject:**

**Documents** **Modified**

[1] Chapter 3/3/7 “Application Layer” v1.1 AS of 2008.12.21a

[2] Chapter 3/2/5 Communication Medium RF v1.6.3 AS

[3] AN161 v01 Coupler Model 2.0 DP

[4] AN134 v04 Flexible E-Mode Channels DV

An updated version (v05) has already been discussed in KSG (2014.06.03)

[5] KSG586-08 Unified return Codes

[6] Chapter 3/5/2 Management Procedures v1.9.2 AS
**Referred**

[7] Chapter 3/5/1 Resources v1.9.3 AS

[8] AN186 v01 RF Multi S-Mode device Profiles DP

**Document updates**

**Version** **Date** **Modifications**
2017.11.07 AN190 v01 Preparation of the Draft Proposal.

**Contents**

##### 1 Purpose, motivation and scope ......................................................................... 2
 1.1 Motivation ................................................................................................. 2 1.2 Scope ....................................................................................................... 3 1.3 Main principle ........................................................................................... 3
 1.3.1 Data Security ..................................................................................... 3 1.3.2 RF Multi ............................................................................................. 4

 2 Specification ........................................................................................................ 4
 2.1 Terms and definitions ............................................................................... 4
 2.1.1 Access Policies .................................................................................. 4 2.2 Stack and communication ........................................................................ 5
 2.2.1 Data Security ..................................................................................... 5 2.2.2 RF Multi support ................................................................................. 6

Savedate: Filename: page 1 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Version|Date|Modifications|
|---|---|---|
|2017.11.07|AN190 v01|Preparation of the Draft Proposal.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

##### 2.3 Resource definition or used Resources.................................................... 6
 2.3.1 Device Descriptor Type 2 ................................................................... 6 2.3.2 Security Resources in end-devices .................................................... 7 2.3.3 RF Multi Resources in end-devices ................................................. 27 2.3.4 Media coupler Resources ................................................................ 27 2.3.5 Flexible E-Mode channel online self description .............................. 41 2.3.6 Size of one element of Property PID_PARAM_VALUES ................. 43 2.3.7 Confirmed restart on one channel .................................................... 43 2.3.8 Normal conditions ............................................................................ 44 2.3.9 Error and exception handling ........................................................... 44 2.4 Configuration Procedures ....................................................................... 44
 2.4.1 Coupler and router discovery ........................................................... 44 2.4.2 Device configuration ........................................................................ 44 2.4.3 Device Reconstruction ..................................................................... 46 2.4.4 Normal conditions ............................................................................ 48 2.4.5 Error and exception handling ........................................................... 48 2.5 Usage and context ................................................................................. 48 2.6 Profile definition ...................................................................................... 48
 2.6.1 End-device ....................................................................................... 48 2.6.2 Media couplers ................................................................................. 49 2.6.3 RF Medium object (19) .................................................................... 50 2.6.4 Security object (17) .......................................................................... 50 2.6.5 E-Mode Channel object (14) ............................................................ 51 2.6.6 Adjusted E-Mode Channel object (15) ............................................. 51 2.6.7 E-Mode Device object (18) .............................................................. 52 2.7 Identifiers and discovery ......................................................................... 52

 3 Impact and dependencies ................................................................................ 52
 3.1 System specification (“Handbook”) dependencies ................................. 52 3.2 Configuration interworking ...................................................................... 52 3.3 Run-time Interworking ............................................................................ 52 3.4 Registration and certification .................................................................. 52 3.5 Integration and common tool impact ...................................................... 52 3.6 Security .................................................................................................. 52
 3.6.1 Discussion of security risks .............................................................. 52 3.7 Risks and compatibility issues ................................................................ 52

 4 Appendix A ........................................................................................................ 53
 4.1 Use cases of for secure or unsecure linking between channels ............. 53

## 1 Purpose, motivation and scope

### 1.1 Motivation
Today, the Data Security is already specified in case of S-Mode and PB-Mode configuration.
It is not specified how to handle Data Security in case of Ctrl-Mode configuration.

Moreover, the specification of Ctrl-Mode with Flexible E-Mode channel only supports RF
Ready devices. It is not specified how to handle RF Multi devices.

Savedate: Filename: page 2 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Other topics**

   - Self-description of FEC Resources: possibility to have them online, instead of
having them in the device

   - Efficient linking: possibility to reduce the number of frames used when linking.

   - Confirmed restart of one channel

   - Size of PID_PARAM_VALUES

### 1.2 Scope
The scope of this Application Note is the Ctrl-Mode (Flexible E-Mode Channel) configuration.

The PB-Mode configuration is out of scope.

### 1.3 Main principle

#### 1.3.1 Data Security
The main principle is to reuse at maximum already defined Resources when possible, e.g. in
Security Interface Object, the security mode, the P2P key table, the security individual
address table, the Tool Key.

The easy configuration (point to point) is done using Tool Key (as in S-Mode). Each device
receives a dedicated Tool Key, unique per device.

The discovery of ex-factory devices is not done with security, but in plain.

The reading of devices and channel data (device identification, FEC channel reading) can be
done with or without security. For legacy compatibility, the corresponding Resources will
need to be defined with the appropriate secure Access Policies.

The network addressing of device (IA and DoA) is done secured with Tool Key (like SMode), which is equal to either the FDSK, when the device is ex-factory, or the Tool Key,
when the device has already been addressed.

The security mode is used. It is disabled in an ex-factory device. The tool enables this mode
after having addressed the device.

The linking is done secured with Tool Key.

The parameterization is done secured with Tool Key.

The localization of devices and channels in devices is done secured with a key (“network”
key, not a Tool Key), with an “Easy configuration” dedicated Role,in broadcast and/or point
to point communication mode. The key is also used by the devices to send response and/or
asynchronous frames for localization.

The multicast communication is secured, by the use of a key unique for each Group
Address.

The reconstruction of an installation (e.g. in case of project data lost, either ETS or Easy-Ctrl
installation) is done by setting the device in a dedicated reconstruction mode (by either a
physical action on the device or by sending a dedicated frame secured with the FDSK of the
device). Then the configuration data (links, parameters only, and no security related data)
are read from device in plain. At the end, the device is set in factory mode using local user
interface, before downloading data securely with new security keys.

Savedate: Filename: page 3 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 1.3.2 RF Multi 
In order to be able to configure RF Multi FEC devices, the linking function Property has to be
extended.

There must be a way to configure the RF channels to be used at runtime (Ready, Fast,
Slow) and the fast acknowledgement (activation, slot numbers for sending and receiving
frames)), in each E-Mode channel interface object (including also Adjustable E-Mode
channel interface objects).


## 2 Specification

### 2.1 Terms and definitions


 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify and terms or definitions.


#### 2.1.1 Access Policies
This document uses the following Access Policies.

Security Mode: **Off** **On**


Client:

Security: none, A, A+C


**Property Name**

17 62 PID_ROLE_TABLE - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 51 PID_CHAN_NUMBER - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 52 PID_CHAN_CODES - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 53 PID_CHAN_FLAGS - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 54 PID_CHAN_FB_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 55 PID_CHAN_ADJ_LISTS - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 61 PID_GO_CCODES_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 62 PID_GO_CFLAGS_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 63 PID_OBJECTLINK - R - R - R WR - R - R - R - R WR - R **15D / 15D**

14 66 PID_OBJECTLINK_EXT - R - R - R WR - R - R - R - R WR - R **15D / 15D**

14 64 PID_GO_SUBUNIT - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 65 PID_GO_NAME_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 70 PID_PARAM_TYPES - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 71 PID_PARAM_FLAGS - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 72 PID_PARAM_NAMES - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 73 PID_PARAM_UNITS - R - R - R - R - R - R - R - R - R - R **155 / 155**

14 79 PID_PARAM_VALUES - R - R - R WR - R - - - R - R WR - R **15D / 05D**

15 52 PID_CHAN_CODES - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 61 PID_GO_CCODES_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 62 PID_GO_CFLAGS_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 63 PID_OBJECTLINK - R - R - R WR - R - R - R - R WR - R **15D / 15D**

|Off<br>plain<br>Rx<br>T<br>none<br>A+C A+C<br>A A|Col2|Col3|Col4|Col5|On<br>plain<br>Rx<br>T<br>None<br>A+C A+C<br>A A|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|WR|- R|- -|- R|- R|WR|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|


Savedate: Filename: page 4 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

Security Mode: **Off** **On**


Client:

Security: none, A, A+C


**Property Name**

15 66 PID_OBJECTLINK_EXT - R - R - R WR - R - R - R - R WR - R **15D / 15D**

15 64 PID_GO_SUBUNIT - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 65 PID_GO_NAME_LIST - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 70 PID_PARAM_TYPES - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 71 PID_PARAM_FLAGS - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 72 PID_PARAM_NAMES - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 73 PID_PARAM_UNITS - R - R - R - R - R - R - R - R - R - R **155 / 155**

15 79 PID_PARAM_VALUES - R - R - R WR - R - - - R - R WR - R **15D / 05D**

18 60 PID_LOCALISATION_MODE - R - R - R WR W R - - WR W R WR W R **15F / 0FF**

18 63 PID_RECONSTRUCTION_MODE - R - R - R WR W R - - WR W R WR W R **15F / 0FF**

19 87 PID_GRP_MULTICAST_TABLE - R - R - R WR - R - R - R - R WR - R **15D / 15D**

When using Roles, the requirements for Access Policies (columns Rx) may need additional
and more precise requirements for specific Roles, using the Role identifiers.

|Off<br>plain<br>Rx<br>T<br>none<br>A+C A+C<br>A A|Col2|Col3|Col4|Col5|On<br>plain<br>Rx<br>T<br>None<br>A+C A+C<br>A A|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|- R|- R|- R|- R|- R|- R|- R|
|- R|- R|- R|WR|- R|- -|- R|- R|WR|- R|
|- R|- R|- R|WR|W R|- -|WR|W R|WR|W R|
|- R|- R|- R|WR|W R|- -|WR|W R|WR|W R|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|


In case the Security Mode is set to ON, and if Roles are used, the Access Policies may
depend on the Role identifier.

The reconstruction Role shall only have write access to PID_RECONSTRUCTION_MODE
(new Resource). The reading of project data (links and parameters) is done in plain. See
detailed procedure in 2.4.3.


The localisation Role shall have write access to the following Property:
PID_LOCALISATION_MODE.

### 2.2 Stack and communication


#### 2.2.1 Data Security
The use of broadcast (and system broadcast) communication without Tool Key is today not
allowed.

The current document makes proposal for using broadcast messages with security, using a
key that is defined commonly to every devices of the same installation.


Savedate: Filename: page 5 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.2.2 RF Multi support

### 2.3 Resource definition or used Resources

#### 2.3.1 Device Descriptor Type 2

##### 2.3.1.1 Device Descriptor Type 2 Format
The Device Descriptor Type 2 shall have the format as specified in the following figure.

Octet 0 Octet 1 Octet 2 Octet 3 Octet 4 Octet 5 Octet 6 Octet 7 Octet 8 Octet 9 Octet 10 Octet 11 Octet 12 Octet 13
(MSB) (LSB)

Application Application Appli- Mgmt Channel Info 1 Channel Info 2 Channel Info 3 Channel Info 4
Manufacturer Identification cation Prof. +

Version reserved

**Figure 1 – Device Descriptor Type 2 format**

The octet 13 (Channel Info 4) of the Device Descriptor Type 2 Format shall denote that the
device (end device, media coupler) supports the profiles defined in this document.

**Table 1 – Management Profile and reserved field - overview**

**Requirements**
**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0 0 0 0 0 No No No These are the Profiles:

− Easy Ctrl fixed DMA, and
− Easy Ctrl reloc DMA
as specified in [04].
This is not allowed for future use.
0 0 1 1 1 1 1 1 No No No Reserved Management Profile.
0 1 0 0 0 0 0 0 Yes No No These are the Profiles:

− Easy Ctrl fixed DMA, and
− Easy Ctrl reloc DMA
as specified in [04] with the support of Link
management Services
This is not allowed for future use.
1 0 0 0 0 0 0 0 No Yes Yes This denotes a Ctrl FEC or PB FEC device.

For this Management Profile, the fields Channel Info
1 to Channel Info 3 shall be 0000h. The field
Channel Info 4 shall be used to indicate additional
support of profiles described in this document.

Savedate: Filename: page 6 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Octet 0<br>(MSB)|Octet 1|Octet 2|Octet 3|Octet 4|Octet 5|Octet 6|Octet 7|Octet 8|Octet 9|Octet 10|Octet 11|Octet 12|Octet 13<br>(LSB)|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Application<br>Manufacturer|Application<br>Manufacturer|Application<br>Identification|Application<br>Identification|Appli-<br>cation<br>Version|Mgmt<br>Prof. +<br>reserved|Channel Info 1|Channel Info 1|Channel Info 2|Channel Info 2|Channel Info 3|Channel Info 3|Channel Info 4|Channel Info 4|

|Management Profile|Col2|Col3|Col4|Col5|reserved|Col7|Col8|Col9|Link services shall be supported|Flexible E-Mode Channels possible|Master Reset|Requirements|
|---|---|---|---|---|---|---|---|---|---|---|---|---|
||**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|||||
|0|0|0|0|0|0|0|0|0|No|No|No|These are the Profiles:<br>− Easy Ctrl fixed DMA, and<br>− Easy Ctrl reloc DMA<br>as specified in [04].<br>This is not allowed for future use.|
|0|0|0|1|1|1|1|1|1|No|No|No|Reserved Management Profile.|
|0|0|1|0|0|0|0|0|0|Yes|No|No|These are the Profiles:<br>− Easy Ctrl fixed DMA, and<br>− Easy Ctrl reloc DMA<br>as specified in [04] with the support of Link<br>management Services<br>This is not allowed for future use.|
|1|1|0|0|0|0|0|0|0|No|Yes|Yes|This denotes a Ctrl FEC or PB FEC device.<br>For this Management Profile, the fields Channel Info<br>1 to Channel Info 3 shall be 0000h. The field<br>Channel Info 4 shall be used to indicate additional<br>support of profiles described in this document.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Octet 12** **Octet 13**

**7** **6** **5** **4** **3** **2** **1** **0** **7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0 0 0 0 0 0 0 0 0 0

Bit b0:

      - 1: this shall denote a Ctrl FEC device that supports Data Security.

      - 0: this shall denote a Ctrl FEC device do not supporting Data Security.

Bit b1:

      - 1: this shall denote a Ctrl FEC device where the E-Mode channel selfdescription is only accessible on an online server (no internal description).

      - 0: this shall denote a Ctrl FEC device where every E-Mode channel is
described internally using the E-Mode channel interface object itself.

Bit b2:

      - 1: this shall denote a Ctrl FEC device that supports RF Multi.

      - 0: this shall denote a Ctrl FEC device do not supporting RF Multi.

#### 2.3.2 Security Resources in end-devices

##### 2.3.2.1 Reuse of security Resources
The following existing Resources from the Security Interface Object are reused in the
context of Easy Ctrl secured configuration

   - Tool Key: PID_SKI_TOOL (PID: 56)

   - Security Mode: PID_SECURITY_MODE (PID: 51)

   - P2P key table: PID_P2P_KEY_TABLE (PID: 52)

Savedate: Filename: page 7 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**7**|**6 **|**5 **|**4**|**3**|**2**|**1**|**0**|**7 **|**6 **|**5 **|**4 **|**3 **|**2 **|**1 **|**0 **|
|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|Ctrl FEC device supporting<br>RF Multi|E-Mode channel description<br>available on an online server.|Ctrl FEC device Profile for<br>Security|
|0|0|0|0|0|0|0|0|0|0|0|0|0||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

##### 2.3.2.2 Resource for using the Roles

2.3.2.2.1 PID_ROLE_TABLE (PID: 62)

**●** **Property name:** _Role list_

**●** **Property Datatype:** PDT_GENERIC_04[]

**●** **Datapoint Type:** None

**●** _Access Policies:_ 155/155 (see clause Error! Reference source not found.)

**●** **Access level:** 3/X

2.3.2.2.1.1 Abstract Resource definition
This Property is defined in the Security Interface Object.

This is a read-only Property.

This Property defines which Roles are implemented in a device, and which Role index is
associated to each Role. The index in the Data Property array is interpreted as the Role
index (for example as defined in the point to point key table).

The ETS configuration tool uses Tool Role to read this Property.

The Ctrl-Mode configuration tool also uses the Tool Role.

2.3.2.2.1.2 Format


**Array index**

**(used as**
_Role index)_


_Role identifier_


(4 octets)
1
2
…
16

This table has a variable length. However, if some Roles at some index are not used, the
entry shall be filled with the value reserved for “No Role” (value FFFFFFFFh).

  - _Role identifier_

This is the identifier of the Role that is associated to the index of the array (which is also the
Role index referred in the P2P_KEY_TABLE Resource). Each bit of the 16 bit field defined
for the Roles field in P2P_KEY_TABLE is associated to an entry in this table. Bit b0 (Role
R0) is associated to the index 1, and so Role identifier at index 1. The Role identifier at index
16 (of the current table) is associated to the Role R15 bit in the Roles field (in
P2P_KEY_TABLE).

Ranges are defined for classification of Role identifiers:

Savedate: Filename: page 8 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Range of Role identifier** **Meaning**

From 00000000h to 9FFFFFFFh Standard Role identifiers
From F0000000h to FFFFFFFFh

From A0000000h to DFFFFFFFh Application specific Role identifiers

From E0000000h to EFFFFFFFh Manufacturer specific Role identifiers.
The Role identifier has to be interpreted
together with the manufacturer code.

The following Role identifier values are defined:

**Value of Role identifier** **Role**

00000000h Configuration tool Role

00000001h Localisation Role

00000002h Reconstruction Role

FFFFFFFFh No Role

If no Role is associated to a Role index x, then the table entry at index x shall have value
FFFFFFFFh.

2.3.2.2.1.3 Usage by the MaC (ETS or Ctrl-Mode configuration tool)
The MaC uses this Resource to read in the device on which Role index the Role identifier is
associated. Then the MaC uses the Role index when inserting an entry in the Point-to-point
Key Table of the Security Interface Object with the same Role (Role index 1 in the current
table is referred by Role R0 in the Point-to-point Key Table).

2.3.2.2.1.4 Usage by the MaS
For Ctrl-Mode device, the Role identifier 00h, 01h and 02h shall be present in the
PID_ROLE_TABLE Resource.

##### 2.3.2.3 Localisation Role
It is required that, in FEC Ctrl-Mode end device, the localisation Role is defined, dedicated to
localisation in Ctrl-Mode configuration.

The Resource PID_ROLE_TABLE is used in order to get from the device the Role index
associated to the easy localisation Role. The value 00000001h (localisation Role) shall be
present in the Data Property array.

This Role shall be used for every need to use secured frames without Tool Key but with a
“network” or “installation” key (common for all devices in the same installation). Before using
the secured Role, the configuration tool shall download into every device the “network” key
associated with its fixed individual address, in the P2P key table.

**Standard recommendation for easy configuration IA**

##### Ctrl-Mode configuration IA shall be 15.15.254 

This is only a recommendation. This is not mandatory. Any client can define an IA at its
choice.

Savedate: Filename: page 9 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Range of Role identifier|Meaning|
|---|---|
|From 00000000h to 9FFFFFFFh<br>From F0000000h to FFFFFFFFh|Standard_Role_ identifiers|
|From A0000000h to DFFFFFFFh|Application specific_Role_ identifiers|
|From E0000000h to EFFFFFFFh|Manufacturer specific_Role_ identifiers.<br>The_Role_ identifier has to be interpreted<br>together with the manufacturer code.|

|Value of Role identifier|Role|
|---|---|
|00000000h|Configuration tool_Role_|
|00000001h|Localisation_Role_|
|00000002h|Reconstruction_Role_|
|FFFFFFFFh|No_Role_|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

##### 2.3.2.4 Reconstruction Role
It is required that, in FEC Ctrl-Mode end device, the reconstruction Role is defined,
dedicated to Ctrl-Mode reconstruction.

The Resource PID_ROLE_TABLE is used in order to get from the device the Role index
associated to the easy reconstruction Role. The value 00000002h (Ctrl-Mode reconstruction
_Role) shall be present in the Data Property array._

This Role shall be used for every need to reconstruct an installation, when the Tool Key of
every device has been lost.

The configuration tool shall have downloaded into each device the FDSK key of the device
associated with the dedicated individual address and the dedicated Role for reconstruction,
in the P2P key table. The dedicated individual address for reconstruction must be different
from the individual address of the configuration tool, because it is not possible to have two
different keys associated with the same IA in the P2P key table. Moreover the reconstruction
IA shall be standardised, in order to be able with a tool from manufacturer A to reconstruct
an installation done with a configuration tool from device B.

**Standard recommendation for definition of reconstruction IA**

##### If device IA is x.y.z 

 Then the reconstruction IA shall be: x.y.254

This is only a recommendation. This is not mandatory.

The reconstruction Role will define write access to the Resource PID_RECONSTRUCTION_MODE that will set the reconstruction mode inside the device. The read of project
data (links and parameter) is done further in plain (See definition in clause Error! Reference
**source not found.).**

The complete procedure for reconstruction is described in clause 2.4.3.

2.3.2.4.1 PID_RECONSTRUCTION_MODE (PID: 63)

**●** **Property name:** Reconstruction mode

**●** **Property Datatype:** PDT_BINARY_INFORMATION

**●** **Datapoint Type:** DPT_State (DPT_ID = 1.011)

**●** _Access Policies:_ 15F/0FF (see clause Error! Reference source not found.)

**●** **Access level:** 2/2

2.3.2.4.1.1 Abstract Resource definition
This Property shall control whether the Reconstruction Mode is inactive or active in the
device.

2.3.2.4.1.2 Format
The format is DPT_State.

0 = Inactive

1 = Active.

Savedate: Filename: page 10 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.4.1.3 Usage by the MaC (ETS or Ctrl-Mode configuration tool)
The Management Client shall activate the Reconstruction Mode in the Management Server
by setting PID_RECONSTRUCTION_MODE to 1 = Active via broadcast communication
mode in all devices or via point to point connectionless communication mode in one single
device. As the Reconstruction Mode automatically times out in the Management Server after
10 minutes, the Management Client shall resend the reconstruction request every 5 minutes
as long as it is required by the installer via the Controller user interface

2.3.2.4.1.4 Usage by the MaS
If the Management Client sets PID_RECONSTRUCTION_MODE = Active, then the
Management Server shall immediately activate Reconstruction Mode.

If the Management Client sets PID_RECONSTRUCTION_MODE = Inactive, then the
Management Server shall immediately inactivate Reconstruction Mode.

The default value shall be 0 = Inactive.

Once Reconstruction Mode has become Active, the Management Server shall start a
time-out timer of 10 minutes. This time-out timer shall be restarted with each activation or
repeated activation of the Reconstruction Mode through PID_RECONSTRUCTION_MODE
by the Management Client. If this time-out timer expires, the Management Server shall
autonomously inactivate Reconstruction Mode.

##### 2.3.2.5 Channel security capabilities and requirements
In the E-Mode Channel definition, there is a need to indicate that the E-Mode Channel
supports (is capable of) security or not.

In the channel definition, there is also a need to indicate that a GO requires security or not.

2.3.2.5.1 Security capability (channel level)
In the channel definition, a Property defines the flags that concern the channel.

This is done in Property PID_CHAN_FLAGS (PID=53) in E-Mode channel interface object:

Bit Nr. 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

field symbol r r r r r r r r r ML LR LC SC O I A

0 0 0 0 0 0 0 0 0

   - bit 3:

     - name (abbreviation): Security Capable (SC)

     - description: The SC-field shall indicate whether this channel is
capable of (or supports) security or not.

     - encoding: 0b: This channel does not support security.
1b: This channel supports security.

Savedate: Filename: page 11 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|r|r|r|r|r|r|r|r|r|ML|LR|LC|SC|O|I|A|
|0|0|0|0|0|0|0|0|0||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

   - bit 6:

    - name (abbreviation): Mixable Links (ML)

    - description: The ML-field shall indicate whether this channel is
allowed of mixing secure and unsecure links.

    - encoding: 0b: This channel is not allowed to mix secure and

unsecure links. Such mix of links is detected by the
device and refused.
1b: This channel is allowed to mix secure and unsecure

links. The configuration tool may mix secure and plain
links. The device will not refuse this.

2.3.2.5.2 Security requirement (GO level)
In the E-Mode Channel definition, a Property defines the flags that concern each GO.

The same security requirement may be needed for every GO of the same channel, in order
to be able to not mix secure and unsecure links.

This is done in Property PID_GO_CFLAGS_LIST (PID=62) in E-Mode channel interface
object or in Adjusted E-Mode Channel object:

Bit Nr. 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

field symbol r r r r r r r r r r r RS I O X

0 0 0 0 0 0 0 0 0 0 0

   - bit 3 and 4:

    - name (abbreviation): RS (RS)

    - description: The RS-field shall indicate whether this GO requires
security or not.

    - encoding: 00b: This GO does not require security.
01b: This GO requires authentication only.
10b: This GO requires authentication and confidentiality.

##### 2.3.2.6 Secure linking

2.3.2.6.1 Generalities
The linking is done using function Property PID_OBJECTLINK_EXT.

2 bits are used to indicate if the link is done

   - without security,

   - with authentication only, or

   - with authentication and confidentiality

Savedate: Filename: page 12 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|r|r|r|r|r|r|r|r|r|r|r|RS|RS|I|O|X|
|0|0|0|0|0|0|0|0|0|0|0||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.6.2 Mixing secure and unsecure links

Channel supporting security

Secured link
GO requiring security

unsecured link

GO not requiring security

Secured link

**Figure 2 – Legend for the next drawings**

**Principle**

It is not recommended to mix secure and unsecure links in the same E-Mode Channel.

This principle may be guaranteed by the device (if the flag ML in the channel flags definition
is cleared) or by the controller (if the flag ML in the channel flags is set).

**Security linking rules**

   - All the links between two channels shall have the same security level (all secure or
all unsecure) (= SECURITY ALL-OR-NONE)

   - If the channels already have links, then all the new links shall have the same
security level than the existing ones (= SECURITY ALWAYS-OR-NEVER)
**Vocabulary**

   - A link between channels is considered secured if all its GOs are linked secured

   - A link between channels is considered unsecured if all its GO are linked unsecured.

**Example**

GO1 GO1

1

GO2 GO2

GO3

2

GO3

1) First the links on GO1 and GO2 are done secure.
2) Then, the link on GO3 is not allowed, because it would allow mixing secure and

unsecure links.

NOTE 1 If the link on GO3 is done firstly, then the links on GO1 and GO2 are not allowed because it is not
allowed to mix secure and unsecure links.
Even if the MaC can prevent this, this must, at the end, be guaranteed by the MaS. In case
of adding a secured link to an unsecured channel, or an unsecured link to a secure channel,
the MaS shall answer with a dedicated error
E_MIXING_SECURE_AND_UNSECURE_LINKS_ERROR.

Savedate: Filename: page 13 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


GO1

GO2

GO3


GO3


GO requiring security


Channel supporting security


Secured link


1


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

NOTE 2 On a user point of view, if a device must be linked to both secured and unsecured channels (for
legacy devices), then the device could propose two channels, one supporting security and one without security.
In this case, the plain channel, that cannot be linked secure, could be defined with the information that it is not
capable of security (cf. security capability at channel level in clause 2.3.2.5.1).


2.3.2.6.3 Security and use of KNX Serial Number
The secure linking between channels, using extended Group Addresses based on the KNX
Serial Number, is not allowed. This case shall be handled by the MaS, by answering a
dedicated error E_SECURED_LINK_WITH_SN_NOT_ALLOWED.

2.3.2.6.4 PID_OBJECTLINK_EXT (PID: 66)



**●** **Property name:** Object Link extended

**●** **Property Datatype:** PDT_FUNCTION



**●** **Datapoint Type:** None

**●** _Access Policies:_ 15D/15D (See clause Error! Reference source not found.)



**●** **Access level** 2/2

Security Mode: **Off** **On**


Client:

Security: none, A, A+C


**Property Name**

14 66 PID_OBJECTLINK_EXT - R - R - R WR - R - R - R - R WR - R **15D / 15D**

15 66 PID_OBJECTLINK_EXT - R - R - R WR - R - R - R - R WR - R **15D / 15D**

|Off<br>plain<br>Rx<br>T<br>none<br>A+C A+C<br>A A|Col2|Col3|Col4|Col5|On<br>plain<br>Rx<br>T<br>None<br>A+C A+C<br>A A|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|
|- R|- R|- R|WR|- R|- R|- R|- R|WR|- R|


Here are the commands that need to be supported

   - Add/remove Tx links on RF (SN or DoA)

   - Add/remove Rx links on RF (SN)

   - Add/remove Rx links on RF (DoA)

   - Add/remove Rx/Tx links on TP

   - Add/remove association between secure key and GA


2.3.2.6.4.1 Write (A_FunctionPropertyExtCommand-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|


Savedate: Filename: page 14 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Overview Write ServiceIDs**

**Table 2 – Overview PID_OBJECTLINK_EXT WriteServiceIDs**

**WriteServiceID** **Description**

00h Add/remove Tx links on RF (use of SN or DoA)

01h Add/remove Rx links on RF (use of SN)

02h Add/remove Rx links on RF (use of DoA)

03h Add/remove Tx/Rx links on TP

04h Add/remove secure links (key + GA)

2.3.2.6.4.1.1 WriteServiceID 00h: Add/remove Tx links (use of SN or DoA)

octet 10 octet 11 octet 12 octet 13 octet 14- octet 16- octet 18..25 …

15 17

ServiceID ServiceInfo

reserved Add/remove Number Link 1 …
Tx links (use of links

Flags GO GA Ack slot

of SN or

index summary

DoA)

00h 00h

**Figure 3 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 00h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to configure the Tx links. Several links can be defined
in the same frame.

ServiceID: 00h Command “Add/remove Tx links (use of SN or DoA)”

ServiceInfo: Number of links Number of links in the frame; each link consists of
13 octets.

Flags Add / delete (1 bit) : add (0) / delete (1)
AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
RF Multi Physical (3 bits) : ready / fast / slow
Physical acknowledge (1 bit) : used (1) or not (0)

GO Index Index on 2 octets of GO in channel

GA Group Address (2 octets)

Ack slot 8 octets (64 bits), one bit per slot (shall be 0 in case
summary of Ready only link)

Savedate: Filename: page 15 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|WriteServiceID|Description|
|---|---|
|00h|Add/remove Tx links on RF (use of SN or DoA)|
|01h|Add/remove Rx links on RF (use of SN)|
|02h|Add/remove Rx links on RF (use of DoA)|
|03h|Add/remove Tx/Rx links on TP|
|04h|Add/remove secure links (key + GA)|

|octet 10|octet 11|octet 12|octet 13|octet 14-<br>15|octet 16-<br>17|octet 18..25|…|
|---|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>Tx links (use<br>of SN or<br>DoA)|Number<br>of links|Link 1|Link 1|Link 1|Link 1|…|
|reserved|Add/remove<br>Tx links (use<br>of SN or<br>DoA)|Number<br>of links|Flags|GO<br>index|GA|Ack slot<br>summary|Ack slot<br>summary|
|00h|00h|||||||

|ServiceID:|Col2|00h|Command “Add/remove Tx links (use of SN or DoA)”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of<br>13 octets.|
||Flags||Add / delete (1 bit) : add (0) /  delete (1)<br>AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br>RF Multi Physical (3 bits)  : ready / fast / slow<br>Physical acknowledge (1 bit) : used (1) or not (0)|
||GO Index||Index on 2 octets of GO in channel|
||GA||Group Address(2 octets)|
||Ack slot<br>summary||8 octets (64 bits), one bit per slot (shall be 0 in case<br>of Ready only link)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

**Fast and Slow**

If a Group Address must be sent both in Fast and Slow, with acknowledgement at least in
fast or in slow (all 8 octets are not equal to 00h), then two links shall be defined with the
same GA_Value, once with bit Fast set in RF Channel (and not bit Slow), once with bit Slow
set in RF channel (and not with bit Fast).

**Ack slot summary modification**

When configuring Tx links with fast acknowledgement between a sender and several
receivers, the configuration tool may want to add a new receiver. In this case, the link itself
does not need to be modified, but only the ack slot summary (one bit more is set in the bit
field). In this case, the tool shall use the current Write command with bit Add and the final
Ack slot summary (including the newly added slot of the receiver).

**RF Ready only links**

In case RF ready Tx links are added/removed in the device, the WriteServiceID 00h shall be
used with the bit RF Ready set. The field “Ack slot summary” shall be set to 0.

2.3.2.6.4.1.2 WriteServiceID 01h: Add/remove Rx links (use of SN)

octet 10 octet 11 octet 12 octet 13 octet 14- octet 16- octet 18 octet …

15 17 19..24

ServiceID ServiceInfo

reserved Add/remove Number Link 1 …
Rx links (use of links

Flags GO GA Ack slot SN

of SN)

index number

00h 01h

**Figure 4 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 01h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to configure the Rx links in case of SN in RF. Several links
can be defined in the same frame.

Savedate: Filename: page 16 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|AET|Security|Security|RF Ready|RF Fast|RF Slow|Physical acknowledge|
|||||||||

|octet 10|octet 11|octet 12|octet 13|octet 14-<br>15|octet 16-<br>17|octet 18|octet<br>19..24|…|
|---|---|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>Rx links (use<br>of SN)|Number<br>of links|Link 1|Link 1|Link 1|Link 1|Link 1|…|
|reserved|Add/remove<br>Rx links (use<br>of SN)|Number<br>of links|Flags|GO<br>index|GA|Ack slot<br>number|SN|SN|
|00h|01h||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

ServiceID: 01h Command “Add/remove Rx links (use of SN)”

ServiceInfo: Number of links Number of links in the frame; each link consists of
12 octets.

Flags Add/delete (1 bit) : add (0) / delete (1)
Physical acknowledge (1 bit) : used (1) or not (0)
RF Channel for GrpValueRead : Fast (0) or Slow (1)

GO Index Index on 2 octets of GO in channel

GA Group Address (2 octets)

Ack slot One octet: value between 0 and 63 (only interpreted
number if Physical acknowledge bit is set in Flags octet).

(The device only receives on Fast or on Slow).

SN SN on 6 octets

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0 0

**RF Ready only links**

In case RF ready Rx links with SN are added / removed in the device, the WriteServiceID
01h shall be used with no physical acknowledge.

Reminder: no secure link is possible with SN

**Use of A_GroupValue_Read with SN based Group Address**

The Rx links are also used by a device (MaS) to know which extended Group Address to be
sent, and on which RF channel frequency (Fast or Slow).

Savedate: Filename: page 17 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|ServiceID:|Col2|01h|Command “Add/remove Rx links (use of SN)”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of<br>12 octets.|
||Flags||Add/delete (1 bit) : add (0) /  delete (1)<br>Physical acknowledge (1 bit) : used (1) or not (0) <br>RF Channel for GrpValueRead : Fast(0) or Slow(1)|
||GO Index||Index on 2 octets of GO in channel|
||GA||Group Address(2 octets)|
||Ack slot<br>number||One octet: value between 0 and 63 (only interpreted<br>if Physical acknowledge bit is set in Flags octet).<br>(The device only receives on Fast or on Slow).|
||SN||SN on 6 octets|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|reserved|reserved|reserved|reserved|reserved|RF Channel for Read|Physical acknowledge|
||0|0|0|0|0|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.6.4.1.3 WriteServiceID 02h: Add/remove Rx links on RF (use of DoA )

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16- octet 18 …

17

ServiceID ServiceInfo

reserved Add/remove Number Link 1 …
Rx links (use of links

Flags GO index GA Ack slot

of DoA)

number

00h 02h

**Figure 5 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 02h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to configure the Rx links in case of RF with DoA. Several
links could be used in the same frame.

ServiceID: 02h Command “Add/remove Rx links (use of DoA)”

ServiceInfo: Number of links Number of links in the frame; each link consists of 6
octets.
Flags Add/delete (1 bit) : add (0) / delete (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
Physical acknowledge (1 bit) : used (1) or not (0)
RF Channel for GrpValueRead : Fast (0) or Slow (1)
GO Index Index on 2 octets of GO in channel

GA Group Address (2 octets)

Ack slot One octet: value between 0 and 63 (only interpreted
number if Physical acknowledge bit is set in Flags octet).

(The device only receives on Fast or on Slow).

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0

**RF Ready only links**

In case RF ready Rx links with DoA are added/removed in the device, the WriteServiceID
02h shall be used with not physical acknowledge. The field “Ack slot number” shall be set
to 0.

Savedate: Filename: page 18 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-<br>17|octet 18|…|
|---|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>Rx links (use<br>of DoA)|Number<br>of links|Link 1|Link 1|Link 1|Link 1|…|
|reserved|Add/remove<br>Rx links (use<br>of DoA)|Number<br>of links|Flags|GO index|GA|Ack slot<br>number|Ack slot<br>number|
|00h|02h|||||||

|ServiceID:|Col2|02h|Command “Add/remove Rx links (use of DoA)”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of 6<br>octets.|
||Flags||Add/delete (1 bit) : add (0) /  delete (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br>Physical acknowledge (1 bit) : used (1) or not (0)  <br>RF Channel for GrpValueRead : Fast (0) or Slow (1)|
||GO Index||Index on 2 octets of GO in channel|
||GA||Group Address (2 octets)|
||Ack slot<br>number||One octet: value between 0 and 63 (only interpreted<br>if Physical acknowledge bit is set in Flags octet).<br>(The device only receives on Fast or on Slow).|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|reserved|Security|Security|reserved|reserved|RF Channel for Read|Physical acknowledge|
||0|||0|0|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.6.4.1.4 WriteServiceID 03h: Add/remove Tx/Rx links on TP

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16- … …

17

ServiceID ServiceInfo

reserved Add/remove Number Link 1 … …

Tx/Rx links of links

Flags GO index GA

on TP

00h 03h

**Figure 6 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 04h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to configure the Tx/Rx links in case of TP. Several
links could be used in the same frame.

ServiceID: 03h Command “Add/remove Tx/Rx links on TP”

ServiceInfo: Number of links Number of links in the frame; each link consists of
5 octets.

Flags Add / delete (1 bit) : add (0) / delete (1)
Sending (1 bit) : 0 = sending ; 1 = receiving
Security (2 bits) : no (00b) / A (01b) / A+C (10b)

GO Index Index on 2 octets of GO in channel

GA Group Address (2 octets)

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0

Savedate: Filename: page 19 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-<br>17|…|…|
|---|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo||
|reserved|Add/remove<br>Tx/Rx links<br>on TP|Number<br>of links|Link 1|Link 1|Link 1|…|…|
|reserved|Add/remove<br>Tx/Rx links<br>on TP|Number<br>of links|Flags|GO index|GA|GA|GA|
|00h|03h|||||||

|ServiceID:|Col2|03h|Command “Add/remove Tx/Rx links on TP”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of<br>5 octets.|
||Flags||Add / delete (1 bit) : add (0) /  delete (1)<br>Sending (1 bit) : 0 = sending ; 1 = receiving<br>Security (2 bits) : no(00b) / A(01b) / A+C(10b)|
||GO Index||Index on 2 octets of GO in channel|
||GA||Group Address(2 octets)|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|Sending / receiving|Security|Security|reserved|reserved|reserved|reserved|
|||||0|0|0|0|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.6.4.1.5 WriteServiceID 04h: Add/remove secure links (keys + GA )

octet 10 octet 11 octet 12 octet 13-28 octet 29-30 …

ServiceID ServiceInfo

reserved Add/remove Number Link 1 …
secure links of

(keys+GA) security Security GA

links key

00h 04h

**Figure 7 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 04h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to configure the secure links. Several links could be used
in the same frame.

This command shall be used secured, and only if the Security Mode is active in the device. If
the Security Mode is not active, the command shall be refused (with error
E_COMMAND_IMPOSSIBLE)

ServiceID: 04h Command “Add/remove secure links (keys +GA)”

ServiceInfo: Number of Number of security links in the frame; each security
security links link consists of 18 octets.

Security key 16 octets security key

GA Group Address (2 octets)

2.3.2.6.4.2 Read (A_FunctionPropertyExtStateRead-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

ReadServiceID

00h See below. See below.

**Overview Read ServiceIDs**

**Table 3 – Overview PID_OBJECTLINK_EXT ReadServiceIDs**

**ReadServiceID** **Description**

00h Get the maximum number of links for each command.

01h Read the Tx links (RF)

02h Read the Rx links (RF)

03h Read the Rx/Tx links (TP)

Savedate: Filename: page 20 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13-28|octet 29-30|…|
|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>secure links<br>(keys+GA)|Number<br>of<br>security<br>links|Link 1|Link 1|…|
|reserved|Add/remove<br>secure links<br>(keys+GA)|Number<br>of<br>security<br>links|Security<br>key|GA|GA|
|00h|04h|||||

|ServiceID:|Col2|04h|Command “Add/remove secure links (keys +GA)”|
|---|---|---|---|
|ServiceInfo:|Number of<br>security links||Number of security links in the frame; each security<br>link consists of 18 octets.|
||Security key||16 octets security key|
||GA||Group Address(2 octets)|

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||ReadServiceID||
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Get the maximum number of links for each command.|
|01h|Read the Tx links (RF)|
|02h|Read the Rx links (RF)|
|03h|Read the Rx/Tx links (TP)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.2.6.4.2.1 ReadServiceID 00h: Get the maximum number of links supported

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Get maximum number of links supported WriteCommand

00h 00h

**Figure 8 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 00h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to get the maximum number of links supported for each
WriteCommand in the MaS.

ServiceID: 00h Command “Get maximum number of links
supported”

ServiceInfo: WriteCommand Write command for which the maximum number of
links is requested.

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceInfo

00h 00h Maximum
Number of links

**Figure 9 - A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**

**PID_OBJECTLINK_EXT**

ServiceInfo: Maximum Number of The maximum number of links supported for the
links write command given in the read request. In case

the command is not supported, the value 00h is
returned.

2.3.2.6.4.2.2 ReadServiceID 01h: read the RF Tx links

octet 10 octet 11 octets 12-13 octets 14-15 Octet 16-17

ServiceID ServiceInfo

reserved Read the Tx links on GO Index Iterator Nb of links

RF

00h 01h

**Figure 10 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 01h for**

**PID_OBJECTLINK_EXT**

Savedate: Filename: page 21 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Get maximum number of links supported|WriteCommand|
|00h|00h||

|ServiceID:|Col2|00h|Command “Get maximum number of links<br>supported”|
|---|---|---|---|
|ServiceInfo:|WriteCommand||Write command for which the maximum number of<br>links is requested.|

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceInfo|
|00h|00h|Maximum<br>Number of links|

|ServiceInfo:|Maximum Number of<br>links|The maximum number of links supported for the<br>write command given in the read request. In case<br>the command is not supported, the value 00h is<br>returned.|
|---|---|---|

|octet 10|octet 11|octets 12-13|octets 14-15|Octet 16-17|
|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Read the Tx links on<br>RF|GO Index|Iterator|Nb of links|
|00h|01h||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

The MaC shall use this command to get the Tx links (RF) supported in the MaS.

ServiceID: 01h Command “Read the RF Tx links”

ServiceInfo: Go index Group object index in the channel to which one
request the links.

Iterator Iterator for the reading

Nb of links Number of links to be read starting from iterator in
one frame.

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16- octet 19..25 …

17

Return ReadServiceID ServiceInfo

Code

RF Tx links Number Link 1 …

of links

Flags GO index GA ack slot
summary

00h 01h

**Figure 11 - A_FunctionPropertyState_Response-PDU for ReadServiceID 01h for**

**PID_OBJECTLINK_EXT**

ServiceInfo: Number of links The number of links effectively sent in the response.
Each link takes 13 octets.

Flags AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
RF Multi Physical (3 bits) : ready / fast / slow
Physical acknowledge (1 bit) : used (1) or not (0)

GO Index Group object index (2 octets)

GA Group Address of the link (2 octets)

Ack slot number 8 octets (one bit per slot)
(if the link is sent on fast and slow with fast ack, two
links will be sent by MaS; each summary has to be
interpreted with the RF Multi Physical field, e.g. once for
Fast and once for Slow)

Savedate: Filename: page 22 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|ServiceID:|Col2|01h|Command “Read the RF Tx links”|
|---|---|---|---|
|ServiceInfo:|Go index||Group object index in the channel to which one<br>request the links.|
||Iterator||Iterator for the reading|
||Nb of links||Number of links to be read starting from iterator in<br>one frame.|

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-<br>17|octet 19..25|…|
|---|---|---|---|---|---|---|---|
|Return<br>Code|ReadServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
||RF Tx links|Number<br>of links|Link 1|Link 1|Link 1|Link 1|…|
||RF Tx links|Number<br>of links|Flags|GO index|GA|ack slot<br>summary|ack slot<br>summary|
|00h|01h|||||||

|ServiceInfo:|Number of links|The number of links effectively sent in the response.<br>Each link takes 13 octets.|
|---|---|---|
||Flags|AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br>RF Multi Physical (3 bits)  : ready / fast / slow<br>Physical acknowledge (1 bit) : used(1) or not(0)|
||GO Index|Group object index(2 octets)|
||GA|Group Address of the link(2 octets)|
||Ack slot number|8 octets (one bit per slot) <br>(if the link is sent on fast and slow with fast ack, two<br>links will be sent by MaS; each summary has to be<br>interpreted with the RF Multi Physical field, e.g. once for<br>Fast and once for Slow)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0

2.3.2.6.4.2.3 ReadServiceID 02h: read the RF Rx links

octet 10 octet 11 octets 12-13 octets 14-15 Octet 16-17

ServiceID ServiceInfo

reserved Read the Rx links on GO Index Iterator Nb of links

RF

00h 02h

**Figure 12 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 02h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to get the Rx links (RF) supported in the MaS.

ServiceID: 02h Command “Read the RF Rx links”

ServiceInfo: Go index Group object index in the channel to which one
request the links.

Iterator Iterator for the reading

Nb of links Number of links to be read starting from iterator in
one frame.

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

octet 10 octet 11 octet 12 octet 13 octet 14- octet 16- octet 18 octet …

15 17 19..24

Return ReadServiceID ServiceInfo

Code

RF Rx links Number Link 1 …

of links

Flags GO GA ack slot SN
index number

00h 02h

**Figure 13 - A_FunctionPropertyState_Response-PDU for ReadServiceID 02h for**

**PID_OBJECTLINK_EXT**

Savedate: Filename: page 23 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|reserved|AET|Security|Security|RF Ready|RF Fast|RF Slow|Physical acknowledge|
|0||||||||

|octet 10|octet 11|octets 12-13|octets 14-15|Octet 16-17|
|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Read the Rx links on<br>RF|GO Index|Iterator|Nb of links|
|00h|02h||||

|ServiceID:|Col2|02h|Command “Read the RF Rx links”|
|---|---|---|---|
|ServiceInfo:|Go index||Group object index in the channel to which one<br>request the links.|
||Iterator||Iterator for the reading|
||Nb of links||Number of links to be read starting from iterator in<br>one frame.|

|octet 10|octet 11|octet 12|octet 13|octet 14-<br>15|octet 16-<br>17|octet 18|octet<br>19..24|…|
|---|---|---|---|---|---|---|---|---|
|Return<br>Code|ReadServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo||
||RF Rx links|Number<br>of links|Link 1|Link 1|Link 1|Link 1|Link 1|…|
||RF Rx links|Number<br>of links|Flags|GO<br>index|GA|ack slot<br>number|SN|SN|
|00h|02h||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

ServiceInfo: Number of links The number of links effectively sent in the response.
Each link takes 12 octets.

Flags AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
Physical acknowledge (1 bit) : used (1) or not (0)
RF Channel for GrpValueRead : Fast (0) or Slow (1)

GO Index Group object index (2 octets)

GA Group Address of the link (2 octets)

Ack slot number One octet : value between 0 and 63 slot used to
acknowledge the frame on RF

SN KNX Serial Number on 6 octets (to be interpreted only if
Aet bit has value “use of SN”).

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0

2.3.2.6.4.2.4 ReadServiceID 03h: read the TP links (Rx and Tx)

octet 10 octet 11 octets 12-13 octets 14-15 Octet 16-17

ServiceID ServiceInfo

reserved Read the TP links GO Index Iterator Nb of links

00h 03h

**Figure 14 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 03h for**

**PID_OBJECTLINK_EXT**

The MaC shall use this command to get the Rx links (RF) supported in the MaS.

ServiceID: 03h Command “Read TP links”
ServiceInfo: Go index Group object index in the channel to which one
request the links.

Iterator Iterator for the reading

Nb of links Number of links to be read starting from iterator in
one frame.

Savedate: Filename: page 24 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|ServiceInfo:|Number of links|The number of links effectively sent in the response.<br>Each link takes 12 octets.|
|---|---|---|
||Flags|AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br>Physical acknowledge (1 bit) : used (1) or not (0)<br>RF Channel for GrpValueRead : Fast(0) or Slow(1)|
||GO Index|Group object index(2 octets)|
||GA|Group Address of the link(2 octets)|
||Ack slot number|One octet : value between 0 and 63 slot used to<br>acknowledge the frame on RF|
||SN|KNX Serial Number on 6 octets (to be interpreted only if<br>Aet bit has value “use of SN”).|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|reserved|AET|Security|Security|reserved|reserved|RF Channel for Read|Physical acknowledge|
|0||||0|0|||

|octet 10|octet 11|octets 12-13|octets 14-15|Octet 16-17|
|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Read the TP links|GO Index|Iterator|Nb of links|
|00h|03h||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16-17 …

Return ReadServiceID ServiceInfo

Code

TP links Number Link 1 …

of links

Flags GO index GA

00h 03h

**Figure 15 - A_FunctionPropertyState_Response-PDU for ReadServiceID 03h for**

**PID_OBJECTLINK_EXT**

ServiceInfo: Number of links The number of links effectively sent in the response.
Each link takes 5 octets.

Flags Sending (1 bit) : 0 = sending ; 1 = receiving
Security (2 bits) : no (00b) / A (01b) / A+C (10b)

GO Index Group object index (2 octets)

GA Group Address of the link (2 octets)

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0 0

2.3.2.6.4.3 Common error – and exception handling for PID_OBJECTLINK_EXT
In case of any error or exception, the MaS shall return the specified
A_FunctionPropertyExtState_Response-PDU, but with the field Return Code as listed in
Table 4 and repeating the ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyExtState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

Savedate: Filename: page 25 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-17|…|
|---|---|---|---|---|---|---|
|Return<br>Code|ReadServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
||TP links|Number<br>of links|Link 1|Link 1|Link 1|…|
||TP links|Number<br>of links|Flags|GO index|GA|GA|
|00h|03h||||||

|ServiceInfo:|Number of links|The number of links effectively sent in the response.<br>Each link takes 5 octets.|
|---|---|---|
||Flags|Sending (1 bit) : 0 = sending ; 1 = receiving<br>Security (2 bits) : no(00b) / A(01b) / A+C(10b)|
||GO Index|Group object index(2 octets)|
||GA|Group Address of the link(2 octets)|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|reserved|Sending / receiving|Security|Security|reserved|reserved|reserved|reserved|
|0||||0|0|0|0|

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|> 7Fh||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

In the case where several return codes are useful, then the following format shall be used, in
order to get the return code of each command.

Response (A_FunctionPropertyExtState_Response-PDU)

octet 10 octet 11 octet 12 octet 13 … octet x

Return Code ServiceID Number of Return code … Return code

links for link 1 for link n

     - 7Fh

The return code of octet 10 is a global return code of the operation.
The controller is responsible of coherency between links in different devices. In case of
failure concerning one link, the controller shall clear the links to the device to which the failed
links belongs.

The MaS has to continue the evaluation of the links (add or delete) even if it has
encountered an error on one of the first links.

**Table 4 – PID_OBJECTLINK_EXT Return Codes**

 _The following returned codes have to be added to [5]._

**Return Code ErrorName** **ErrorType**

E_SECURE_LINK_WITHOUT_KEY

A1h A link with security feature has been added, without any valid secure key associated

to the GA.

E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK

A2h A secure key is present but its associated Group Address is no more used in any

link.

E_MIXING_SEC_AND_UNSEC_LINKS

A3h A channel is defined with a flag ML (Mixable links) indicating that mixing secure and

unsecure links is not allowed. The configuration tool tries to mix such links.

E_LINK_CANNOT_BE_ADDED
A link cannot be added due to any other reason. The controller shall delete existing

A4h

links of the same channel, and possibly other links in other channels, because the
server cannot guarantee coherency between links.

E_SECURED_LINK_WITH_SN_NOT_ALLOWED
A5h
Secure linking using SN is not allowed.

2.3.2.6.5 Security and RF Ready
In case a FEC device is used and shall be configured securely, then the function Property
PID_OBJECTLINK_EXT shall be used.

For Tx links, in the WriteServiceID 00h, a dedicated bit is defined to denote that the RF
frame shall be sent in RF Ready.

For Rx links using SN, in the WriteServiceID 01h, the Physical acknowledge bit in the Flags
octet shall not be used for RF Ready.

For Rx links using DoA, in the WriteServiceID 02h, the Physical acknowledge bit in the Flags
octet shall not be used for RF Ready.

Savedate: Filename: page 26 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|…|octet x|
|---|---|---|---|---|---|
|Return Code|ServiceID|Number of<br>links|Return code<br>for link 1|…|Return code<br>for link n|
|> 7Fh||||||

|Return Code|ErrorName|ErrorType|
|---|---|---|
|A1h|E_SECURE_LINK_WITHOUT_KEY<br>A link with security feature has been added, without any valid secure key associated<br>to the GA.|E_SECURE_LINK_WITHOUT_KEY<br>A link with security feature has been added, without any valid secure key associated<br>to the GA.|
|A2h|E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK<br>A secure key is present but its associated Group Address is no more used in any<br>link.|E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK<br>A secure key is present but its associated Group Address is no more used in any<br>link.|
|A3h|E_MIXING_SEC_AND_UNSEC_LINKS<br>A channel is defined with a flag ML (Mixable links) indicating that mixing secure and<br>unsecure links is not allowed. The configuration tool tries to mix such links.|E_MIXING_SEC_AND_UNSEC_LINKS<br>A channel is defined with a flag ML (Mixable links) indicating that mixing secure and<br>unsecure links is not allowed. The configuration tool tries to mix such links.|
|A4h|E_LINK_CANNOT_BE_ADDED<br>A link cannot be added due to any other reason.  The controller shall delete existing<br>links of the same channel, and possibly other links in other channels, because the<br>server cannot guarantee coherency between links.|E_LINK_CANNOT_BE_ADDED<br>A link cannot be added due to any other reason.  The controller shall delete existing<br>links of the same channel, and possibly other links in other channels, because the<br>server cannot guarantee coherency between links.|
|A5h|E_SECURED_LINK_WITH_SN_NOT_ALLOWED<br>Secure linking using SN is not allowed.|E_SECURED_LINK_WITH_SN_NOT_ALLOWED<br>Secure linking using SN is not allowed.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.3.3 RF Multi Resources in end-devices

##### 2.3.3.1 RF Multi end-device
For linking with RF Multi functionalities, the function Property PID_OBJECTLINK_EXT (see
definition in clause 2.3.2.6.4) shall be used either for secure linking or unsecure linking.

The configuration of RF Multi channels, and also the fast acknowledge is done via the Flags
octet of the function Property.

##### 2.3.3.2 RF Multi retransmitter
The Resource PID_RF_SMART_RETRANSMITTER (PID=81) in RF Medium interface
object defined for Smart RF retransmitter (in RF Multi S-Mode specification) shall be reused
by a configuration tool

#### 2.3.4 Media coupler Resources
The current FEC Application Note ([4]) does not specify anything concerning media coupler
discovery or configuration, in Ctrl mode.

No new mask version or new profile is planned, but only an extension of the existing S-Mode
coupler profile, with services for discovery.

##### 2.3.4.1 Discovery of a media coupler

2.3.4.1.1 Existing network management procedures
For discovery purpose, the media coupler shall support the same mechanism than for FEC
end device.

The following network management procedure (using PID_SERIAL_NUMBER on Device
Object, and SystemNetworkParameter_Read service) shall be supported

   - NM_Read_SerialNumber_By_ProgrammingMode

   - NM_Read_SerialNumber_By_ExFactoryState

   - NM_Read_SerialNumber_By_PowerReset

2.3.4.1.2 New network management procedure
 _The current paragraph is proposed to be integrated in the volume [6]._

In addition to the existing procedure for discovering new devices, a new network
management procedure is aimed at discovering easily only the routers or couplers in exfactory state in an installation.

Savedate: Filename: page 27 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Overview of the usage**

  - NM_Read_SerialNumber_Of_Routers
To discover the routers or couplers that are in factory state in the network.

object_type: Router Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **00h**


**wait_time:** 1 octet: random wait time expressed in
seconds (0 s to 255 s).
Pending responses can be cancelled. Please
check the specification of
NM_Read_SerialNumber_By_ExFactoryState.

test_result KNX Serial Number of responder (6 octets).
(10 octets) Medium Type of the Primary Side (2 octet).

Medium Type of the Secondary side (2 octet).
random wait time: variable: contained in test_info

**Detailed procedure**

This Network Management Procedure shall be used to read the KNX Serial Number and the
medium types of routers and couplers that are in ex-factory state in the installation.

This procedure shall use system broadcast communication mode and is by that independent
of the configuration of the Domain Addresses and the Individual Addresses of the devices
and the (Media) Couplers.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Router Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 Octet 13
test_info
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

00h

**Figure 16 - A_SystemNetworkParameter_Read-PDU with**

**NM_Read_SerialNumber_Of_Routers**

Savedate: Filename: page 28 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br>                        7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|operand|operand|operand|operand|operand|operand|operand|operand|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|random wait time|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|00h|00h|00h|00h|00h|00h|00h|00h|||||||||
|||||||||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Router Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 Octet 13 … Octet 18 Octet 19 Octet 20
test_info test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

00h KNX Serial Number Medium Type of Primary side

Octet 21 Octet 22
test_result

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Figure 17 - A_SystemNetworkParameter_Response_PDU**

**with NM_Read_SerialNumber_Of_Routers**

**Requirements to the MaS**

The MaS shall only reply to the A_SystemNetworkParameter_Read in this service, if the
device is in ex-factory state and has at least one instance of the Router interface object. If
more than one instance of the Router interface object is present in the device, then the MaS
shall only reply once.

The random wait time for responding in this procedure shall be variable and shall be
contained in the field wait_time in the A_SystemNetworkParameter_Read-PDU as specified
in Figure 16.

If the MaS concludes on responding to this service request, then it shall delay its response
until a random time in the period from 0 s to the number of seconds as indicated in the
wait_time in the request.

   - If during this delay the MaS receives a next A_SystemNetworkParameter_ReadPDU with the same parameters (object_type, PID and operand), but with the
random wait time equal to 255 (FFh), then it shall cancel its response and not send
an A_SystemNetworkParameter_Response PDU.

   - If however the delay has already elapsed and the MaS has already requested the
transmission of its request, then there are no further requirements.

**Requirements to the MaC**

In the case where several routers or couplers are in the installation, the MaC may need
several calls to the procedure for discovering all the routers. The first call will only access the
first media coupler, which will route the route the message to its local management, but not
route it to the other side. After configuration of this first media coupler, the MaC will be able
to access to the other side, because the coupler will route the SBC frame this side.

Savedate: Filename: page 29 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br>                        7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|<br>APCI|<br>APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|Router Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|…|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 18|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 19|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Octet 20|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand||||||||||||||||||||_|||||||||||||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|00h|00h|00h|00h|00h|00h|00h|00h|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|KNX Serial Number|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|Medium Type of Primary side|
|||||||||||||||||||||||||||||||||||||||||||||||||

|Octet 21|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 22|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|
||||||||_|||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|Medium<br>Type of<br>Secondar<br>y Side|
|||||||||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Parameters of the Management Procedure**

NM_Read_SerialNumber_Of_Routers (/* [out] */ mpp_KNX_Serial_Number[],

/* [out] */ mpp_Primary_Side_Medium_Type[],
/* [out] */ mpp_Secondary_Side_Medium_Type[])
mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of
devices that respond to this procedure, that is,
in which a Router object is present
mpp_Primary_Side_Medium_Type [] This shall be the list of Medium types of the
Primary side of devices that respond to this
procedure, that is, in which a Router object is
present
mpp_Secondary_Side_Medium_Type [] This shall be the list of Medium Types of
Secondary side of devices that respond to this
procedure, that is, in which a Router object is
present

##### 2.3.4.2 Standard communication between Fast Media Coupler and Slow extended
The specification [8] describes the motivation for defining two different devices for coupling
TP to RF, in case of RF Multi: one device for Fast communication (Fast Media Coupler), one
device for Slow communication (Slow extender). The same specification also defines a
standard communication between both devices.

The use of Fast Media Couple and Slow extender is also needed in case of Ctrl-Mode. The
same standard communication between devices shall be used in Ctrl-Mode. This uses the
function Property PID_RF_MULTI_FAST_SLOW_COMM.

##### 2.3.4.3 Multicast configuration
The following Resource is defined in the RF Medium interface object

2.3.4.3.1 PID_GRP_MULTICAST_TABLE (PID:87)

**●** **Property name:** Group Multicast table

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** None

**●** _Access Policies:_ 15D/15D (See clause Error! Reference source not found.)

**●** **Access level** 2/2
Here are the commands that need to be supported

   - Add/remove TP to RF links

   - Add/remove RF to TP links

   - Add/remove association between secure key and GA (for security proxy only)

Savedate: Filename: page 30 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.4.3.1.1 Write (A_FunctionPropertyExtCommand-PDU)

**WriteServiceID Description**

00h Add/remove TP to RF links

01h Add/remove RF to TP links (use of SN)

02h Add/remove RF to TP links (use of DoA)

03h Add/remove secure links (key + GA)
(security proxy only)

2.3.4.3.1.1.1 WriteServiceID 00h: Add/remove TP to RF links

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16-23 …

ServiceID ServiceInfo

reserved Add/remove Number of Link 1 …

TP to RF links

Flags GA Ack slot

links

summary

00h 00h

**Figure 18 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 00h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to configure the TP to RF links. Several links can be
defined in the same frame.

ServiceID: 00h Command “add/remove TP to RF links”

ServiceInfo: Number of links Number of links in the frame; each link consists of
11 octets.

Flags Add / delete (1 bit) : add (0) / delete (1)
AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b) (for
security proxy only)
RF Multi Physical (3 bits) : ready / fast / slow
Physical acknowledge (1 bit) : used (1) or not (0)

GA Group Address (2 octets) to be sent on RF

Ack slot 8 octets (64 bits), one bit per slot
summary

Savedate: Filename: page 31 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|WriteServiceID|Description|
|---|---|
|00h|Add/remove TP to RF links|
|01h|Add/remove RF to TP links (use of SN)|
|02h|Add/remove RF to TP links (use of DoA)|
|03h|Add/remove secure links (key + GA)<br>(security proxy only)|

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-23|…|
|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>TP to RF<br>links|Number of<br>links|Link 1|Link 1|Link 1|…|
|reserved|Add/remove<br>TP to RF<br>links|Number of<br>links|Flags|GA|Ack slot<br>summary|Ack slot<br>summary|
|00h|00h||||||

|ServiceID:|Col2|00h|Command “add/remove TP to RF links”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of<br>11 octets.|
||Flags||Add / delete (1 bit) : add (0) /  delete (1)<br>AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b) (for<br>security proxy only)<br>RF Multi Physical (3 bits)  : ready / fast / slow<br>Physical acknowledge (1 bit) : used (1) or not (0)|
||GA||Group Address(2 octets) to be sent on RF|
||Ack slot<br>summary||8 octets (64 bits), one bit per slot|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

**Fast and Slow**

If a Group Address must be sent both in Fast and Slow, with acknowledgement at least in
fast or in slow (all 8 octets are not equal to 00h), then two links shall be defined with the
same GA_Value, once with bit Fast set in RF Channel (and not bit Slow), once with bit Slow
set in RF channel (and not with bit Fast).

**Ack slot summary modification**

When configuring TP to RF links with fast acknowledgement between a sender and several
receivers, the configuration tool may want to add a new receiver. In this case, the link itself
does not need to be modified, but only the ack slot summary (one bit more is set in the bit
field). In this case, the tool shall use the current Write command with bit Add and the final
Ack slot summary (including the newly added slot of the receiver).

**RF Ready only links**

In case TP to RF Ready links are added/removed in the device, the WriteServiceID 00h shall
be used with the bit RF Ready set. The field “Ack slot summary” shall be set to 0.

**Use of GroupValueRead with SN based Group Address**

When receiving A_GroupValue_Read from RF side, with an extended Group Address using
the SN of media coupler, the TP to RF links are also used by the coupler (MaS) to know
whether a TP Group Address exists that is linked to this extended Group Address (SN
based, with SN of the media coupler). This is due to the fact that the original sender of the
extended Group Address is on TP side, and that this extended Group Address will be sent
on RF.

When receiving a A_GroupValueRead from RF side, with an extended Group Address with
another SN than the one of the media coupler, the frame shall be ignored.

As security is not allowed on SN based extended Group Address, such a secured frame
(using SN) shall be ignored.

Savedate: Filename: page 32 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|AET|Security|Security|RF Ready|RF Fast|RF Slow|Physical acknowledge|
|||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.4.3.1.1.2 WriteServiceID 01h: Add/remove RF to TP links (use of SN)

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16-21 …

ServiceID ServiceInfo

reserved Add/remove Number of Link 1 …

RF to TP links

Flags GA SN

links (SN)

00h 01h

**Figure 19 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 01h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to configure the RF to TP links in case of SN in RF.
Several links can be defined in the same frame.

ServiceID: 01h Command “add/remove RF to TP links (use of SN)”

ServiceInfo: Number of links Number of links in the frame; each link consists of 9
octets.

Flags Add/delete (1 bit) : add (0) / delete (1)
Physical acknowledge on Fast (1 bit): used (1) or
not (0)
Physical acknowledge on Slow (1 bit): used (1) or
not (0)

GA Group Address (from extended Group Address)

SN KNX Serial Number (from extended Group Address)

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0 0 0

If the Frame shall be acknowledged (in Fast or in Slow or both), the ack slot number to be
used is fixed to 0 (requirement for the Media Coupler, as in S-Mode).

**RF Ready only links**

In case RF ready to TP links are added / removed in the device, the WriteServiceID 01h
shall be used with no physical acknowledge.

Reminder: no secure link is possible with SN

Savedate: Filename: page 33 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-21|…|
|---|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo||
|reserved|Add/remove<br>RF to TP<br>links (SN)|Number of<br>links|Link 1|Link 1|Link 1|…|
|reserved|Add/remove<br>RF to TP<br>links (SN)|Number of<br>links|Flags|GA|SN|SN|
|00h|01h||||||

|ServiceID:|Col2|01h|Command “add/remove RF to TP links (use of SN)”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of 9<br>octets.|
||Flags||Add/delete (1 bit) : add (0) /  delete (1)<br>Physical acknowledge on Fast (1 bit): used (1) or<br>not (0)<br>Physical acknowledge on Slow (1 bit): used (1) or<br>not (0)|
||GA||Group Address(from extended Group Address)|
||SN||KNX Serial Number(from extended Group Address)|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|reserved|reserved|reserved|reserved|reserved|Physical acknowledge<br>on Fast|Physical acknowledge<br>on Slow|
||0|0|0|0|0|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Use of GroupValueRead with SN based Group Address**

When receiving A_GroupValue_Read from TP side, the RF to TP links are also used by a
device (MaS) to know whether an extended Group Address (and which one) has to be sent
on RF, and on which RF channel frequency (Fast or Slow). This is due to the fact that the
original sender of the extended Group Address is on RF side, and that this extended Group
Address will be sent on TP.

This process has to be done in addition to the analysis of the TP to RF table where the entry
using the TP Group Address has to be searched. If this entry shall be sent on RF using DoA,
then the A_GroupValue_Read shall be further sent on RF with the DoA.

2.3.4.3.1.1.3 WriteServiceID 02h: Add/remove RF to TP links (use of DoA)

octet 10 octet 11 octet 12 octet 13 octet 14-15 …

ServiceID ServiceInfo

reserved Add/remove Number of …

RF to TP links

Flags GA

links (DoA)

00h 02h

**Figure 20 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 02h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to configure the RF to TP links in case of DoA. Several
links can be defined in the same frame.

ServiceID: 02h Command “add/remove RF to TP links (use of
DoA)”

ServiceInfo: Number of links Number of links in the frame; each link consists of 3
octets.

Flags Add/delete (1 bit) : add (0) / delete (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
(for Security proxy only)
Physical acknowledge on Fast (1 bit): used (1) or
not (0)
Physical acknowledge on Slow (1 bit): used (1) or
not (0)

GA Group Address

Savedate: Filename: page 34 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|…|
|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo||
|reserved|Add/remove<br>RF to TP<br>links (DoA)|Number of<br>links|||…|
|reserved|Add/remove<br>RF to TP<br>links (DoA)|Number of<br>links|Flags|GA|GA|
|00h|02h|||||

|ServiceID:|Col2|02h|Command “add/remove RF to TP links (use of<br>DoA)”|
|---|---|---|---|
|ServiceInfo:|Number of links||Number of links in the frame; each link consists of 3<br>octets.|
||Flags||Add/delete (1 bit) : add (0) /  delete (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br> (for Security proxy only)<br>Physical acknowledge on Fast (1 bit): used (1) or<br>not (0)<br>Physical acknowledge on Slow (1 bit): used (1) or<br>not (0)|
||GA||Group Address|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0

If the Frame shall be acknowledged (in Fast or in Slow or both), the ack slot number to be
used is fixed to 0 (requirement for the Media Coupler, as in S-Mode).

**RF Ready only links**

In case RF ready to TP links are added / removed in the device, the WriteServiceID 01h
shall be used with no physical acknowledge.

2.3.4.3.1.1.4 WriteServiceID 03h: Add/remove secure links (for security proxy only)

octet 10 octet 11 octet 12 octet 13-28 octet 29-30 …

ServiceID ServiceInfo

reserved Add/remove Number Secure link 1 …
secure links of

(keys+GA) security Security GA

links key

00h 03h

**Figure 21 - A_FunctionPropertyExtCommand-PDU for Write ServiceID 03h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to configure the secure links. Several links can be defined
in the same frame.

This command shall be used secured, and only if the Security Mode is active in the device. If
the Security Mode is not active, the command shall be refused (with error
E_COMMAND_IMPOSSIBLE).

Savedate: Filename: page 35 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|Add / Delete|reserved|Security|Security|reserved|reserved|Physical acknowledge<br>on Fast|Physical acknowledge<br>on Slow|
||0|||0|0|||

|octet 10|octet 11|octet 12|octet 13-28|octet 29-30|…|
|---|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add/remove<br>secure links<br>(keys+GA)|Number<br>of<br>security<br>links|Secure link 1|Secure link 1|…|
|reserved|Add/remove<br>secure links<br>(keys+GA)|Number<br>of<br>security<br>links|Security<br>key|GA|GA|
|00h|03h|||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

ServiceID: 03h Command “Add/remove secure links”

ServiceInfo: Number of Number of security links in the frame; each security
security links link consists of 18 octets.

Security key 16 octets security key

GA Group Address (2 octets)

2.3.4.3.1.2 Read (A_FunctionPropertyExtStateRead-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

ReadServiceID

00h See below. See below.

**Overview Read ServiceIDs**

**Table 5 – Overview PID_GRP_MULTICAST_TABLE ReadServiceIDs**

**ReadServiceID** **Description**

00h Read the TP to RF links

01h Read the RF to TP links

2.3.4.3.1.2.1 ReadServiceID 00h: Read the TP to RF links

octet 10 octet 11 octets 12-13 octets 14-15

ServiceID ServiceInfo

reserved Read the TP to RF Iterator Nb of links

00h 00h

**Figure 22 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 00h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to get the TP to RF links.

ServiceID: 00h Command “Read the TP to RF links”

ServiceInfo: Iterator Iterator for the reading of TP to RF links (2 octets)

Nb of links Number of links to be read starting from iterator in
one frame (2 octets).

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

Savedate: Filename: page 36 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|ServiceID:|Col2|03h|Command “Add/remove secure links”|
|---|---|---|---|
|ServiceInfo:|Number of<br>security links||Number of security links in the frame; each security<br>link consists of 18 octets.|
||Security key||16 octets security key|
||GA||Group Address(2 octets)|

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||ReadServiceID||
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Read the TP to RF links|
|01h|Read the RF to TP links|

|octet 10|octet 11|octets 12-13|octets 14-15|
|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|
|reserved|Read the TP to RF|Iterator|Nb of links|
|00h|00h|||

|ServiceID:|Col2|00h|Command “Read the TP to RF links”|
|---|---|---|---|
|ServiceInfo:|Iterator||Iterator for the reading of TP to RF links(2 octets)|
||Nb of links||Number of links to be read starting from iterator in<br>one frame(2 octets).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet …
16..23

Return ReadServiceID ServiceInfo

Code

TP to RF links Number of Link 1 …

links

Flags GA ack slot
summary

00h 00h

**Figure 23 - A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**

**PID_GRP_MULTICAST_TABLE**

ServiceInfo: Number of links The number of links effectively sent in the response.
Each link takes 11 octets.

Flags AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
RF Multi Physical (3 bits) : ready / fast / slow
Physical acknowledge (1 bit) : used (1) or not (0)

GA Group Address of the link (2 octets)

Ack slot number 8 octets (one bit per slot)
(if the link is sent on fast and slow with fast ack, two
links will be sent by MaS; each summary has to be
interpreted with the RF Multi Physical field, e.g. once for
Fast and once for Slow)

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0

Savedate: Filename: page 37 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet<br>16..23|…|
|---|---|---|---|---|---|---|
|Return<br>Code|ReadServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
||TP to RF links|Number of<br>links|Link 1|Link 1|Link 1|…|
||TP to RF links|Number of<br>links|Flags|GA|ack slot<br>summary|ack slot<br>summary|
|00h|00h||||||

|ServiceInfo:|Number of links|The number of links effectively sent in the response.<br>Each link takes 11 octets.|
|---|---|---|
||Flags|AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br>RF Multi Physical (3 bits)  : ready / fast / slow<br>Physical acknowledge (1 bit) : used(1) or not(0)|
||GA|Group Address of the link(2 octets)|
||Ack slot number|8 octets (one bit per slot)<br>(if the link is sent on fast and slow with fast ack, two<br>links will be sent by MaS; each summary has to be<br>interpreted with the RF Multi Physical field, e.g. once for<br>Fast and once for Slow)|

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|reserved|AET|Security|Security|RF Ready|RF Fast|RF Slow|Physical acknowledge|
|0||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

2.3.4.3.1.2.2 ReadServiceID 01h: Read the RF to TP links

octet 10 octet 11 octets 12-13 octets 14-15

ServiceID ServiceInfo

reserved Read the RF to TP Iterator Nb of links

links

00h 01h

**Figure 24 - A_FunctionPropertyExtStateRead-PDU for Read ServiceID 01h for**

**PID_GRP_MULTICAST_TABLE**

The MaC shall use this command to get the RF to TP links.

ServiceID: 01h Command “Read the RF to TP links”

ServiceInfo: Iterator Iterator for the reading of RF to TP links. (2 octets)

Nb of links Number of links to be read starting from iterator in
one frame. (2 octets)

If the MaS can successfully respond to the request then it shall respond with an
A_FunctionPropertyState_Response-PDU as in the following figure:

octet 10 octet 11 octet 12 octet 13 octet 14-15 octet 16-21 octet 22 …

Return ReadServiceID ServiceInfo

Code

RF to TP links Number of Link 1 …

links

Flags GA SN ack slot
number

00h 01h

ServiceInfo: Number of links The number of links effectively sent in the response.
Each link takes 10 octets.

Flags AET (1 bit) : use of SN (0) / DoA (1)
Security (2 bits) : no (00b) / A (01b) / A+C (10b)
(only possible if AET bit has value DoA)
Physical acknowledge on Fast (1 bit): used (1) or not
(0)
Physical acknowledge on Slow (1 bit): used (1) or not
(0)

GA Group Address of the link (2 octets)

SN KNX Serial Number on 6 octets (to be interpreted only
if AET bit has value “use of SN”). The value shall be
set to 0 in case AET bit has value “use of DoA”.

Savedate: Filename: page 38 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|octet 10|octet 11|octets 12-13|octets 14-15|
|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|
|reserved|Read the RF to TP<br>links|Iterator|Nb of links|
|00h|01h|||

|ServiceID:|Col2|01h|Command “Read the RF to TP links”|
|---|---|---|---|
|ServiceInfo:|Iterator||Iterator for the reading of RF to TP links.(2 octets)|
||Nb of links||Number of links to be read starting from iterator in<br>one frame.(2 octets)|

|octet 10|octet 11|octet 12|octet 13|octet 14-15|octet 16-21|octet 22|…|
|---|---|---|---|---|---|---|---|
|Return<br>Code|ReadServiceID|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|ServiceInfo|
||RF to TP links|Number of<br>links|Link 1|Link 1|Link 1|Link 1|…|
||RF to TP links|Number of<br>links|Flags|GA|SN|ack slot<br>number|ack slot<br>number|
|00h|01h|||||||

|ServiceInfo:|Number of links|The number of links effectively sent in the response.<br>Each link takes 10 octets.|
|---|---|---|
||Flags|AET (1 bit) : use of SN (0) / DoA (1)<br>Security (2 bits) : no (00b) / A (01b) / A+C (10b)<br> (only possible if AET bit has value DoA)<br>Physical acknowledge on Fast (1 bit): used (1) or not<br>(0)<br>Physical acknowledge on Slow (1 bit): used (1) or not<br>(0)|
||GA|Group Address of the link(2 octets)|
||SN|KNX Serial Number on 6 octets (to be interpreted only<br>if AET bit has value “use of SN”). The value shall be<br>set to 0 in case AET bit has value “use of DoA”.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Format of Flags octet**

**Flags**

**7** **6** **5** **4** **3** **2** **1** **0**

0 0 0

2.3.4.3.1.3 Common error – and exception handling for PID_GRP_MULTICAST_TABLE
In case of any error or exception, the MaS shall return the specified
A_FunctionPropertyExtState_Response-PDU, but with the field Return Code as listed in
Table 4 and repeating the ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyExtState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

In the case where several return codes are useful, then the following format shall be used, in
order to get the return code of each command.

Response (A_FunctionPropertyExtState_Response-PDU)

octet 10 octet 11 octet 12 octet 13 … octet x

Return Code ServiceID Number of Return code … Return code

links for link 1 for link n

     - 7Fh

The return code of octet 10 is a global return code of the operation.

The controller is responsible of coherency between links in different devices, including the
media coupler. In case of failure concerning one link or the media coupler, the controller
shall clear the links to the device to which the failed links belongs or to the media coupler.

The MaS has to continue the evaluation of the links (add or delete) even if it has
encountered an error on one of the first links.

Savedate: Filename: page 39 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Flags|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**7**|**6**|**5**|**4**|**3**|**2**|**1**|**0**|
|reserved|AET|Security|Security|reserved|reserved|Physical acknowledge<br>on Fast|Physical acknowledge<br>on Slow|
|0||||0|0|||

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|> 7Fh||

|octet 10|octet 11|octet 12|octet 13|…|octet x|
|---|---|---|---|---|---|
|Return Code|ServiceID|Number of<br>links|Return code<br>for link 1|…|Return code<br>for link n|
|> 7Fh||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Table 6 – PID_GRP_MULTICAST_TABLE Return Codes**

 _The following returned codes have to be added to [5]._

**Return Code** **ErrorName** **ErrorType**

A1h E_SECURE_LINK_WITHOUT_KEY
A link with security feature has been added, without any valid secure key associated
to the GA.

A2h E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK
A secure key is present but its associated Group Address is no more used in any
link.

A4h E_LINK_CANNOT_BE_ADDED
A link cannot be added due to any other reason.

##### 2.3.4.4 Security : transparent or security proxy 
In the case where the media coupler is used as a transparent device, then the
PID_GRP_MULTICAST_TABLE function Property shall be used. The WriteServiceID 03h
shall not be used.

In the case where the media coupler is used as a security proxy device, then the
PID_GRP_MULTICAST_TABLE function Property shall be used. The WriteServiceID 03h
shall be used to add/remove security keys.

##### 2.3.4.5 RF Ready
For the configuration of links of the media coupler, the MaC shall use the newly defined
function Property PID_GRP_MULTICAST_TABLE, for secure or unsecure links.

For TP to RF links, in the WriteServiceID 00h, a dedicated bit is defined to denote that the
RF frame shall be sent in RF Ready.

For RF to TP links using SN, in the WriteServiceID 01h, the Physical acknowledge bit in the
Flags octet shall not be used for RF Ready.

For RF to TP links using DoA, in the WriteServiceID 02h, the Physical acknowledge bit in the
Flags octet shall not be used for RF Ready.

##### 2.3.4.6 RF Multi
For the configuration of RF Multi specific features of the media coupler, the MaC shall use
the following already defined S-Mode Resources.

   - PID_RF_MULTI_MEDIA_COUPLER_TYPE : get/set the media coupler type

   - PID_RF_MULTI_FAST_SLOW_COMMUNICATION : for the communication
between fast media coupler and slow extender

   - PID_RF_MULTI_UNICAST_CONTROL : for unicast communication

   - PID_RF_MULTI_BROADCAST_CONTROL: for broadcast communication

For the configuration of links of the media coupler, the MaC shall use the newly defined
function Property PID_GRP_MULTICAST_TABLE, for secure or unsecure links.

Savedate: Filename: page 40 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Return Code|ErrorName|ErrorType|
|---|---|---|
|A1h|E_SECURE_LINK_WITHOUT_KEY<br>A link with security feature has been added, without any valid secure key associated<br>to the GA.|E_SECURE_LINK_WITHOUT_KEY<br>A link with security feature has been added, without any valid secure key associated<br>to the GA.|
|A2h|E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK<br>A secure key is present but its associated Group Address is no more used in any<br>link.|E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK<br>A secure key is present but its associated Group Address is no more used in any<br>link.|
|A4h|E_LINK_CANNOT_BE_ADDED<br>A link cannot be added due to any other reason.|E_LINK_CANNOT_BE_ADDED<br>A link cannot be added due to any other reason.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.3.5 Flexible E-Mode channel online self description

##### 2.3.5.1 Overview
The existing FEC device and channel self-descriptive Resources are defined today as
mandatory in the E-Mode FEC devices.

As this costs time to read them and memory to store them in devices, these definition shall
also be stored on an online server, so that the configuration tool is able to access them and
get them, instead of reading them in the devices.

In case the self-description data are publically available on an online server, this shall be
optionally defined in the device.

##### 2.3.5.2 Principles
The definition of channel and device self-description shall be stored in an XML standard
description format.

The storage location shall be the one KNX online server.

The goal is only to have a channel catalogue, not a device catalogue.

The proposal is to define a generic standard file format that could store all the Flexible EMode Channel descriptions of a manufacturer. Each manufacturer providing FEC Ctrl-Mode
devices may register to KNX such a file.

**Concerned data**

   - Channel data: manufacturer code, basic channel code, extended channel code,
channel version, channel flags, functional block list.

   - Datapoint (Group object) data: flags, connection codes, subunits, names.

   - Parameter data: type, flag, name, unit.

**Concerned Resources (from E-Mode Channel object type and Adjusted E-Mode**
**Channel object type):**

**ID Property Name** **Associated data** **Comment**

52 PID_CHAN_CODES Basic channel code, manufacturer code, Identifiers of the FEC
extended channel code, version number channel.

Always mandatory in
the IO.

53 PID_CHAN_FLAGS Channel flags

54 PID_CHAN_FB_LIST Functional block list

55 PID_CHAN_ADJ_LIST Adjustable Channel object list

61 PID_GO_CCODES_LIST Connection codes of each group object

62 PID_GO_CFLAGS_LIST Connection flags of each group object Optional only if channel

is available in FEC

64 PID_GO_SUBUNIT Subunit number of each group object

catalogue, else

65 PID_GO_NAME_LIST Name of each group object mandatory.

70 PID_PARAM_TYPES Type of each parameter

71 PID_PARAM_FLAGS Flags of each parameter

72 PID_PARAM_NAMES Name of each parameter

73 PID_PARAM_UNITS Unit of each parameter

Savedate: Filename: page 41 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|ID|Property Name|Associated data|Comment|
|---|---|---|---|
|52|PID_CHAN_CODES|Basic channel code, manufacturer code,<br>extended channel code, version number|Identifiers of the FEC<br>channel.<br>Always mandatory in<br>the IO.|
|53|PID_CHAN_FLAGS|Channel flags|Optional only if channel<br>is available in FEC<br>catalogue, else<br>mandatory.|
|<br>54|<br> PID_CHAN_FB_LIST|Functional block list|Functional block list|
|<br>55|<br> PID_CHAN_ADJ_LIST|Adjustable Channel object list|Adjustable Channel object list|
|<br>61|<br> PID_GO_CCODES_LIST|Connection codes of eachgroup object|Connection codes of eachgroup object|
|<br>62|<br> PID_GO_CFLAGS_LIST|Connection flags of eachgroup object|Connection flags of eachgroup object|
|<br>64|<br> PID_GO_SUBUNIT|Subunit number of eachgroup object|Subunit number of eachgroup object|
|<br>65|<br> PID_GO_NAME_LIST|Name of eachgroup object|Name of eachgroup object|
|<br>70|<br> PID_PARAM_TYPES|Type of eachparameter|Type of eachparameter|
|<br>71|<br> PID_PARAM_FLAGS|Flags of eachparameter|Flags of eachparameter|
|<br>72|<br> PID_PARAM_NAMES|Name of eachparameter|Name of eachparameter|
|<br>73|<br> PID_PARAM_UNITS|Unit of eachparameter|Unit of eachparameter|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

**Proposal for XML based file format for FEC channel storage**

<ManufacturerId = ‘1234’ >
<FECChannels >
<FECChannel>
<ChannelDefinition Id=‘xxxx’ Name=‘xxx’ BasicChannelCode=‘xx’ ExtendedChannelCode=‘xx’
ManufacturerCode =‘xx’ VersionNumber =‘xx’ ChannelFlags=‘xx’ FunctionalBloc_List=‘xx’ >
<Datapoints>
<Datatpoint Id = ‘yy’ Name=‘yy’ Flags=‘yy’ ConnectionCode=‘yy’ SubUnit=‘yy’>
<Datatpoint Id = ‘yy’ Name=‘yy’ Flags=‘yy’ ConnectionCode=‘yy’ SubUnit=‘yy’>
</Datapoints>
<ChannelParameters>
<ChannelParameter Id = ‘yy’ Name=‘yy’ Type=‘yy’ Flag=‘yy’ Unit=‘yy’>
<ChannelParameter Id = ‘yy’ Name=‘yy’ Type=‘yy’ Flag=‘yy’ Unit=‘yy’>
</ChannelParameters>
</FECChannel>
</FECChannels>
</Manufacturer>

NOTE 3 The list of datapoints and parameters that are defined in the basic channel may be extracted
from the extended channel definition, and be placed in a dedicated section. This would “factorize” the basic
channel content from every extended channel definition using the same basic channel.
The unique identifier of a FEC Channel is based on the extended channel code together with
the manufacturer code, and the version number (i.e. the content of Resource
PID_CHAN_CODES).

How the FEC catalogue is fetched by a manufacturer of a Ctrl-Mode configuration tool?

A manufacturer of a Ctrl-Mode configuration tool may fetch the content of the FEC catalogue
from any manufacturer, as a web service provided by KNX online catalogue server.

The tool manufacturer may either:

   - get all the FEC channel descriptions from any Ctrl-Mode device manufacturer,
or

   - get only a specific extended channel description from any Ctrl-Mode manufacturer
by giving its extended channel code, the manufacturer code and the channel
version number (i.e. the unique identifiers of an extended channel, also contained in
PID_CHAN_CODES).

**How a manufacturer of Ctrl-Mode End-device can update its FEC catalogue?**

Any manufacturer may register this FEC catalogue, at any time.

An automatic check may be run in order to verify that two different descriptions do not exist
with the same extended channel code, same manufacturer and same version number.

Only one version of the FEC catalogue is stored for each manufacturer on the KNX online
server. This means that the file content with a higher version will automatically erase an
older file (with a lower version). For compatibility reasons, the newer version shall contain, in
its XML description, all the older FEC channels definitions.

**Internationalization and names**

Concerning the names of group objects and parameters of each channel, the XML
description shall contain the English wording. In addition, the description may contain the
translations of these wordings in other languages.

Concerning the types of parameters, when using enumeration, the XML description shall
also contain the English wording. In addition, the description may contain the translations of
these wordings in other languages.

Savedate: Filename: page 42 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.3.6 Size of one element of Property PID_PARAM_VALUES

##### 2.3.6.1 Overview
In the existing Flexible E-Mode Channel specification ([4]), only specific size of element of
Property PID_PARAM_VALUES are allowed

   - PDT_GENERIC_01[]

   - PDT_GENERIC_02[]

   - PDT_GENERIC_04[]

   - PDT_GENERIC_10[]

In order to optimize this size with the maximum size of all parameters of a channel, other
size would be more suitable.

##### 2.3.6.2 Modification of the Resource PID_PARAM_VALUES (PID = 79)

 _The following is intended to partially modify, in [4], the definition of PID_PARAM_VALUES in all concerned_

_interface objects._

The existing Resource PID_PARAM_VALUES in E-Mode Channel interface object (Object
Type 14) and Adjusted E-Mode Channel interface object (Object Type 15) shall be modified
as follows:

**●** **Property name:** Parameter Values

**●** **Property Datatype:** PDT_GENERIC_01[], or
PDT_GENERIC_02[], or
PDT_GENERIC_03[], or
PDT_GENERIC_04[], or
PDT_GENERIC_05[], or
PDT_GENERIC_06[], or
PDT_GENERIC_07[], or
PDT_GENERIC_08[], or
PDT_GENERIC_09[], or
PDT_GENERIC_10[]

**●** **Datapoint Type:** None

**●** _Access Policies:_ 15F/05F (see Error! Reference source not found.)

**●** **Access level** 3/3

#### 2.3.7 Confirmed restart on one channel

##### 2.3.7.1 Overview
In the definition of the management procedure ([6]), in the Master Reset definition, the Erase
Code 01h is defined to allow a confirmed restart of the complete device. In this case of
confirmed restart, the parameter Channel Number is fixed to the value 00h, which means the
complete device.

In Ctrl-Mode configuration, when a channel parameter that needs a restart (flag R defined in
PID_PARAM_FLAGS) is modified, the complete device is restarted.

This may have unwanted effects on other channels of the same device. Moreover, this may
take a longer time than a restart of only one channel.

Savedate: Filename: page 43 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

To prevent from that, it is proposed here to extend the “Confirmed Restart” specification in
order to allow restarting only one application channel.

##### 2.3.7.2 Modification of the service 

 _The following is intended to partially modify, in [6], the Table 4 – Definition of Erase Code and Channel_

_Number_

The Table 4 in the existing specification shall be modified as follows:

**Erase Code** **Description**

01h **Confirmed Restart**

No Resource value shall be reset.
This encoding shall allow using the Master Reset as a confirmed alternative to
the unconfirmed Basic Restart.
Both Erase Code values shall have the same effect.
**Channel Number:**

= 00h: the basic restart is executed on the whole device.
≠ 00h: the basic restart is executed only on this given application channel.

#### 2.3.8 Normal conditions

 2.3.9 Error and exception handling

### 2.4 Configuration Procedures

#### 2.4.1 Coupler and router discovery

Before discovering the Ctrl-Mode FEC end-devices, the MaC may first discover the routers
and couplers (e.g. TP/RF media couplers) that are in ex-factory state in the installation.

For that case, the network management procedure NM_Read_SerialNumber_Of_Routers
may be used.

#### 2.4.2 Device configuration
Overview

1. Check the support of security in both channels
2. Check the security requirements on GO level
3. Check security of existing links
4. Conclude on the security for the linking of all GO
5. Download the links and possibly the security keys
6. In case of error sent by MaS, delete the last added links (atomicity of actions)

/* Check the support of security at channel level */
**IF One of the two channels does not support security THEN {**

/* The links shall be done unsecure */
}
**ELSE**

{
/* In this case both channels do support security: the links may be done secure or unsecure */
/* First, check the security requirements at GO level */
**IF Every GOs of at least one channels have A or A+C security requirements THEN**

Savedate: Filename: page 44 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Erase Code|Description|
|---|---|
|01h|**Confirmed Restart** <br>No Resource value shall be reset.<br>This encoding shall allow using the Master Reset as a confirmed alternative to<br>the unconfirmed Basic Restart.<br>Both Erase Code values shall have the same effect.<br>**Channel Number**:<br>= 00h: the basic restart is executed on the whole device.<br>≠ 00h: the basic restart is executed only on thisgiven application channel.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

/* Then, check whether there are already links and if they are secured or not */
**IF No link exists in both FEC Channel THEN**

/* The links shall be done secure: best security */
**ELSE IF Every existing links in both FEC channels are secured THEN**

/* The links shall be done secure */
**ELSE**

/* No link is possible */
**ENDIF**
**ELSE** **IF Every GOs inside each channel have none security requirements THEN**

/* Then, check whether there are already links and if they are secured or not */
**IF No link exists in both FEC Channel THEN**

/* The links shall be done secure: best security */
**ELSE** **IF Every existing links in both FEC Channel are secured THEN**

/* The links shall be done secure */
**ELSE IF Every existing links in both FEC Channel are unsecured THEN**

/* The links shall be done unsecure */
**ELSE THEN**

/* Error: secure and unsecure links are mixed. No link is possible */
**ENDIF**
**ELSE**

/* Error: one GO has not the same security requirement than others. No link is possible */
**ENDIF**

}
Add unsecure link

/* Now, the GAs can be assigned. The Group Object Index shall be the GO number within the E-Mode Channel.*/
/* The flag s (“Sending”) has to be set only if the GA is the sending GA for the GO. */
**FOR every GA to be assigned to the GO**


DM_FunctionProperty_Write_R(dmp_OI = FEC[n]. ECObjectIndex[m], dmp_PID = PID

OBJECTLINK, dmp_command = “Add” + “Sending” + “KNX_Serial_Number” + GA +
GO.number, Return Code = dmp_error)
**NEXT GA**
Add secure link


/* Add secure link in the device */


DMP_ExtFunctionProperty_Write_R(OI = E-Mode Channel Object, PID = PID_OBJECTLINK_EXT, command =
“Add Tx links (use of DoA)”)


**IF The returned code from MaS is E_SECURE_LINK_WITHOUT_KEY THEN {**


/* Add security key in the device. */


DMP_ExtFunctionProperty_Write_R(OI = E-Mode Channel Object, PID = PID_OBJECTLINK_EXT,
command = “Add secure links (key + GA)”)


}


Remove secure link


/* Remove secure link in the device */


DMP_ExtFunctionProperty_Write_R(OI = E-Mode Channel Object, PID = PID_OBJECTLINK_EXT, command =
“Remove Tx links (use of DoA)”)


**IF The returned code from MaS is E_SECURE_KEY_STILL_EXIST_WITHOUT_LINK THEN {**


/* Remove security key in the device. */


Savedate: Filename: page 45 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

DMP_ExtFunctionProperty_Write_R(OI = E-Mode Channel Object, PID = PID_OBJECTLINK_EXT,
command = “remove secure link (key + GA)”)


}


#### 2.4.3 Device Reconstruction
During configuration of the device

1. Download in each MaS, into the P2P key table, the FDSK key of the MaS itself,

together with the Role index associated with the Ctrl-Mode Reconstruction Role
(using the Resource PID_ROLE_TABLE).

Starting reconstruction (Tool Key is lost)

1. Set each device in the reconstruction mode using

a. Physical action on the device
b. Dedicated command (write on PID_RECONSTRUCTION_MODE) sent in

point to point with the reconstruction IA and using the FDSK of the MaS
(which then takes the reconstruction Role), without the Tool Key flag set in
the frame.
c. Same command (write on PID_RECONSTRUCTION_MODE) sent in

broadcast with the localisation IA and using the “network” key (also used for
localisation) without the Tool Key flag set in the frame.
2. Read the project data (device links and parameters) (in plain, not secured)
3. Set the device into factory mode (locally on the device)
4. Download the project data, using other security keys.

Savedate: Filename: page 46 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

Savedate: Filename: page 47 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.4.4 Normal conditions

 2.4.5 Error and exception handling

### 2.5 Usage and context

 2.6 Profile definition

#### 2.6.1 End-device

**Feature**

Data Security M M M
Security Resources in end-device
PID_ROLE_TABLE 2.3.2.2.1 M M M
PID_RECONSTRUCTION_MODE 2.3.2.4.1 M M M
PID_OBJECT_LINK_EXT 2.3.2.6.4 M M M
RF Multi See [8]
RF Multi X X M

The following profiles are not allowed:

   - KNX RF Multi without security.

   - KNX RF Ready without security.

Savedate: Filename: page 48 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Col1|Feature|Col3|Secure Ctrl-Mode FEC TP end device|Secure Ctrl-Mode FEC RF Ready end device|Secure Ctrl-Mode FEC RF Multi end device|
|---|---|---|---|---|---|
||Data Security||M|M|M|
||Security Resources inend-device|||||
||PID_ROLE_TABLE|2.3.2.2.1|M|M|M|
||__<br> PIDRECONSTRUCTIONMODE|2.3.2.4.1|M|M|M|
||__<br> PIDOBJECTLINKEXT|2.3.2.6.4|M|M|M|
||___<br> RF Multi|See [8]||||
||RF Multi||X|X|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.6.2 Media couplers

**Feature**

Data Security M M M
Security Proxy C[a)] C[a)] X
Discovery
NM_Read_SerialNumber_Of_Routers 2.3.4.1.2 M M M[b)]
Security Resources in end-device
PID_ROLE_TABLE 2.3.2.2.1 M M X
PID_RECONSTRUCTION_MODE 2.3.2.4.1 M M X
PID_OBJECTLINK_EXT 2.3.2.6.4 X X X
Media coupler Resources
PID_GRP_MULTICAST_TABLE M M X

WriteServiceID 00h to 02h X

2.3.4.3.1 M M

ReadServiceID 00h to 01h

WriteServiceID 03h C[a) ] C[a) ] X
RF Multi See [8]
RF Multi X M M
PID_RF_MULTI_FAST_SLOW_COMM X M M
a) Mandatory only if Security Proxy feature is available in the device.
b) For that, the slow extender has to support Router interface object.

The following profiles are not allowed:

   - KNX RF Multi without security.

   - KNX RF Ready without security.

Savedate: Filename: page 49 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Col1|Feature|Col3|Secure Ctrl-Mode RF Ready media coupler|Secure Ctrl-Mode RF Multi media coupler (Fast or Fast/Slow)|Secure Ctrl-Mode RF Multi Slow extender|
|---|---|---|---|---|---|
||Data Security||M|M|M|
||Security Proxy||Ca)|Ca)|X|
||Discovery|||||
||NMReadSerialNumberOfRouters|2.3.4.1.2|M|M|Mb)|
||____<br> Security Resources inend-device|||||
||PID_ROLE_TABLE|2.3.2.2.1|M|M|X|
||__<br> PIDRECONSTRUCTIONMODE|2.3.2.4.1|M|M|X|
||__<br> PIDOBJECTLINKEXT|2.3.2.6.4|X|X|X|
||__<br> Media coupler Resources|||||
||PIDGRPMULTICASTTABLE|2.3.4.3.1|M|M|X|
||___<br>    WriteServiceID 00h to 02h <br>    ReadServiceID00h to 01h|___<br>    WriteServiceID 00h to 02h <br>    ReadServiceID00h to 01h|M|M|X|
||WriteServiceID03h|WriteServiceID03h|Ca)|Ca)|X|
||RF Multi|See [8]||||
||RF Multi||X|M|M|
||PIDRFMULTIFASTSLOWCOMM||X|M|M|
|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|_____<br>a) Mandatory only if Security Proxy feature is available in the device.<br>b) For that, the slow extender has to support Router interface object.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.6.3 RF Medium object (19)

**Property Identifier**

78 PID_RF_MULTI_MEDIA_COUPLER_TYPE X M M 3FF/00C 2/2
79 PID_RF_MULTI_UNICAST_CONTROL X M X 3FF/00C 2/2
80 PID_RF_MULTI_BROADCAST_CONTROL X M X 3FF/00C 2/2
81 PID_RF_SMART_RETRANSMITTER C[(1)] X X 3FF/0FC 2/2
84 PID_RF_MULTI_FAST_SLOW_COMM X M M 3FF/05C 2/2
85 PID_RF_MULTI_FAST_MC_IA X X M 3FF/05C 2/2
86 PID_RF_MULTI_SLOW_EXTENDER_IA X M X 3FF/05C 2/2
87 PID_GRP_MULTICAST_TABLE X M X 15D/15D 2/2
(1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the
Resource.

#### 2.6.4 Security object (17)

**Property Identifier**

51 PID_SECURITY_MODE M M X 00C/00C 2/2
52 PID_P2P_KEY_TABLE M M X 00C/00C 2/2
53 PID_GRP_KEY_TABLE X X X 00C/00C 2/2
54 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE M M X 00C/00C 2/2
55 PID_SECURITY_FAILURES_LOG O O X 15D/15D 3/2
56 PID_TOOL_KEY M M X 008/008 X/2
57 PID_SECURITY_REPORT O O X 15D/15D 3/2
58 PID_SECURITY_REPORT_CONTROL O O X 00C/00C 2/2
59 PID_SEQUENCE_NUMBER_SENDING M M X 00C/00C 2/2
61 PID_GO_SECURITY_FLAGS O O X 00C/00C 2/2
62 PID_ROLE_TABLE M M X 155/155 3/X
Configuration tool Role M O X
Localisation Role M O X
Reconstruction Role O O X

Savedate: Filename: page 50 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Col1|Property Identifier|RF Multi Ctrl-Mode device profile|RF Multi Ctrl-Mode media coupler (Fast only or Fast / Slow)|Slow extender|Access policy|Access levels|
|---|---|---|---|---|---|---|
|78|PIDRFMULTIMEDIACOUPLERTYPE|X|M|M|3FF/00C|2/2|
|79|_____<br> PIDRFMULTIUNICASTCONTROL|X|M|X|3FF/00C|2/2|
|80|____<br>PIDRFMULTIBROADCASTCONTROL|X|M|X|3FF/00C|2/2|
|81|____<br> PIDRFSMARTRETRANSMITTER|C(1)|X|X|3FF/0FC|2/2|
|84|___<br> PIDRFMULTIFASTSLOWCOMM|X|M|M|3FF/05C|2/2|
|85|_____<br> PIDRFMULTIFASTMCIA|X|X|M|3FF/05C|2/2|
|86|_____<br> PIDRFMULTISLOWEXTENDERIA|X|M|X|3FF/05C|2/2|
|87|_____<br> PIDGRPMULTICASTTABLE|X|M|X|15D/15D|2/2|
|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|___<br> (1) Optional in case of retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|

|Col1|Property Identifier|Secure Ctrl-Mode device profile|RF Multi Ctrl-Mode media coupler (Fast only of Fast/Slow)|Slow extender|Access policy|Access levels|
|---|---|---|---|---|---|---|
|51|PIDSECURITYMODE|M|M|X|00C/00C|2/2|
|52|__<br> PIDP2PKEYTABLE|M|M|X|00C/00C|2/2|
|53|___<br> PIDGRPKEYTABLE|X|X|X|00C/00C|2/2|
|54|___<br> PIDSECURITYINDIVIDUALADDRESSTABLE|M|M|X|00C/00C|2/2|
|55|____<br> PIDSECURITYFAILURESLOG|O|O|X|15D/15D|3/2|
|56|___<br> PIDTOOLKEY|M|M|X|008/008|X/2|
|57|__<br> PIDSECURITYREPORT|O|O|X|15D/15D|3/2|
|58|__<br> PIDSECURITYREPORTCONTROL|O|O|X|00C/00C|2/2|
|59|___<br> PIDSEQUENCENUMBERSENDING|M|M|X|00C/00C|2/2|
|61|___<br> PIDGOSECURITYFLAGS|O|O|X|00C/00C|2/2|
|62|___<br> PID_ROLE_TABLE|M|M|X|155/155|3/X|
||__<br>     Configuration tool_Role_|M|O|X|||
||Localisation_Role_|M|O|X|||
||Reconstruction_Role_|O|O|X|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.6.5 E-Mode Channel object (14)

**Property Identifier**

52 PID_CHAN_CODES M 155/155 2/2
53 PID_CHAN_FLAGS C[(1)] 155/155 2/2
54 PID_CHAN_FB_LIST C[(1)] 155/155 2/2
55 PID_CHAN_ADJ_LIST C[(1)] 155/155 2/2
61 PID_GO_CCODES_LIST C[(1)] 155/155 2/2
62 PID_GO_CFLAGS_LIST C[(1)] 155/155 2/2
63 PID_OBJECTLINK M 15D/15D 2/2
64 PID_GO_SUBUNIT C[(1)] 155/155 2/2
65 PID_GO_NAME_LIST C[(1)] 155/155 2/2
66 PID_OBJECTLINK_EXT M 15D/15D 2/2
70 PID_PARAM_TYPES C[(1)] 155/155 2/2
71 PID_PARAM_FLAGS C[(1)] 155/155 2/2
72 PID_PARAM_NAMES C[(1)] 155/155 2/2
73 PID_PARAM_UNITS C[(1)] 155/155 2/2
79 PID_PARAM_VALUES M 15D/05D 3/3
(1) Optional only if the content of this Resource (channel self-description data)
is available online on a KNX server (in this case bit1 of Octet 13 of DD2
response has value 1), else mandatory.

#### 2.6.6 Adjusted E-Mode Channel object (15)

**Property Identifier**

61 PID_GO_CCODES_LIST C[(1)] 155/155 2/2
62 PID_GO_CFLAGS_LIST C[(1)] 155/155 2/2
63 PID_OBJECTLINK M 15D/15D 2/2
64 PID_GO_SUBUNIT C[(1)] 155/155 2/2
65 PID_GO_NAME_LIST C[(1)] 155/155 2/2
66 PID_OBJECTLINK_EXT M 15D/15D 2/2
70 PID_PARAM_TYPES C[(1)] 155/155 2/2
71 PID_PARAM_FLAGS C[(1)] 155/155 2/2
72 PID_PARAM_NAMES C[(1)] 155/155 2/2
73 PID_PARAM_UNITS C[(1)] 155/155 2/2
79 PID_PARAM_VALUES M 15D/05D 3/3
(1) Optional only if the content of this Resource (channel self-description data) is
available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has
value 1), else mandatory.

Savedate: Filename: page 51 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Col1|Property Identifier|Ctrl-Mode device profile|Access policy|Access levels|
|---|---|---|---|---|
|52|PIDCHANCODES|M|155/155|2/2|
|53|__<br> PIDCHANFLAGS|C(1)|155/155|2/2|
|54|__<br> PIDCHANFBLIST|C(1)|155/155|2/2|
|55|___<br> PIDCHANADJLIST|C(1)|155/155|2/2|
|61|___<br> PIDGOCCODESLIST|C(1)|155/155|2/2|
|62|___<br> PIDGOCFLAGSLIST|C(1)|155/155|2/2|
|63|___<br> PIDOBJECTLINK|M|15D/15D|2/2|
|64|_<br> PIDGOSUBUNIT|C(1)|155/155|2/2|
|65|__<br> PIDGONAMELIST|C(1)|155/155|2/2|
|66|___<br> PIDOBJECTLINKEXT|M|15D/15D|2/2|
|70|__<br> PIDPARAMTYPES|C(1)|155/155|2/2|
|71|__<br> PIDPARAMFLAGS|C(1)|155/155|2/2|
|72|__<br> PIDPARAMNAMES|C(1)|155/155|2/2|
|73|__<br> PIDPARAMUNITS|C(1)|155/155|2/2|
|79|__<br> PIDPARAMVALUES|M|15D/05D|3/3|
|__<br>(1)<br>Optional only if the content of this Resource (channel self-description data)<br>is available online on a KNX server (in this case bit1 of Octet 13 of DD2<br>response has value 1), else mandatory.|__<br>(1)<br>Optional only if the content of this Resource (channel self-description data)<br>is available online on a KNX server (in this case bit1 of Octet 13 of DD2<br>response has value 1), else mandatory.|__<br>(1)<br>Optional only if the content of this Resource (channel self-description data)<br>is available online on a KNX server (in this case bit1 of Octet 13 of DD2<br>response has value 1), else mandatory.|__<br>(1)<br>Optional only if the content of this Resource (channel self-description data)<br>is available online on a KNX server (in this case bit1 of Octet 13 of DD2<br>response has value 1), else mandatory.|__<br>(1)<br>Optional only if the content of this Resource (channel self-description data)<br>is available online on a KNX server (in this case bit1 of Octet 13 of DD2<br>response has value 1), else mandatory.|

|Col1|Property Identifier|Ctrl-Mode device profile|Access policy|Access levels|
|---|---|---|---|---|
|61|PIDGOCCODESLIST|C(1)|155/155|2/2|
|62|___<br> PIDGOCFLAGSLIST|C(1)|155/155|2/2|
|63|___<br> PIDOBJECTLINK|M|15D/15D|2/2|
|64|_<br> PIDGOSUBUNIT|C(1)|155/155|2/2|
|65|__<br> PIDGONAMELIST|C(1)|155/155|2/2|
|66|___<br> PIDOBJECTLINKEXT|M|15D/15D|2/2|
|70|__<br> PIDPARAMTYPES|C(1)|155/155|2/2|
|71|__<br> PIDPARAMFLAGS|C(1)|155/155|2/2|
|72|__<br> PIDPARAMNAMES|C(1)|155/155|2/2|
|73|__<br> PIDPARAMUNITS|C(1)|155/155|2/2|
|79|__<br> PIDPARAMVALUES|M|15D/05D|3/3|
|__<br>(1) Optional only if the content of this Resource (channel self-description data) is<br>available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has<br>value 1), else mandatory.|__<br>(1) Optional only if the content of this Resource (channel self-description data) is<br>available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has<br>value 1), else mandatory.|__<br>(1) Optional only if the content of this Resource (channel self-description data) is<br>available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has<br>value 1), else mandatory.|__<br>(1) Optional only if the content of this Resource (channel self-description data) is<br>available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has<br>value 1), else mandatory.|__<br>(1) Optional only if the content of this Resource (channel self-description data) is<br>available online on a KNX server (in this case bit1 of Octet 13 of DD2 response has<br>value 1), else mandatory.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

#### 2.6.7 E-Mode Device object (18)

**Property Identifier**

60 PID_LOCALISATION_MODE M 15F/0FF 2/2
63 PID_RECONSTRUCTION_MODE O 15F/0FF[(1)] 2/2
(1) The reconstruction Role shall have write access to this Resource.

### 2.7 Identifiers and discovery

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 3.2 Configuration interworking

 3.3 Run-time Interworking

 3.4 Registration and certification

 3.5 Integration and common tool impact

 3.6 Security

#### 3.6.1 Discussion of security risks

### 3.7 Risks and compatibility issues

Savedate: Filename: page 52 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx

|Col1|Property Identifier|Ctrl-Mode device profile|Access policy|Access levels|
|---|---|---|---|---|
|60|PIDLOCALISATIONMODE|M|15F/0FF|2/2|
|63|__<br> PIDRECONSTRUCTIONMODE|O|15F/0FF(1)|2/2|
|__<br>(1) The reconstruction_Role_ shall have write access to this Resource.|__<br>(1) The reconstruction_Role_ shall have write access to this Resource.|__<br>(1) The reconstruction_Role_ shall have write access to this Resource.|__<br>(1) The reconstruction_Role_ shall have write access to this Resource.|__<br>(1) The reconstruction_Role_ shall have write access to this Resource.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

## 4 Appendix A

### 4.1 Use cases of for secure or unsecure linking between channels
**Use case A: 2 channel supporting security, GOs not requiring security**

Strategy A1: offer best security level (preferred)

OnOff OnOff

InfoOnOff InfoOnOff

**Figure 25 – Secure links between two channels supporting security**

Strategy A2: no security per default (possible if this is the installer’s choice)

OnOff OnOff

InfoOnOff InfoOnOff

**Figure 26 – Unsecure links between two channels supporting security**

**Use case B: 2 channel supporting security, one GO requiring security, one GO not**
**requiring security**

Strategy: offer best security level (recommended)

OnOff OnOff

InfoOnOff InfoOnOff

**Figure 27 – Secure links between two channels supporting security**

**Use case C:**

**one channel supporting security, one GO requiring security, one GO not**
**requiring security**

**one channel not supporting security**

C1: output channel is unsecure

Savedate: Filename: page 53 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

OnOff OnOff

InfoOnOff InfoOnOff

OnOff OnOff

InfoOnOff InfoOnOff

**Figure 28 – unsecure links between one secure input and one unsecure output**

C2: input channel is unsecure

OnOff OnOff

InfoOnOff InfoOnOff

OnOff OnOff

InfoOnOff InfoOnOff

**Figure 29 – unsecure links between one secure output and one unsecure input**

**Use case D:**

**two channels supporting security, already linked secured**

**a third channel not supporting security**

D1: second output channel is unsecure: no link is possible with second output channel

Savedate: Filename: page 54 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

OnOff OnOff

InfoOnOff InfoOnOff

OnOff

InfoOnOff

OnOff OnOff

InfoOnOff InfoOnOff

OnOff

InfoOnOff

**Figure 30 – D1 : link is refused with third channel**

D2: second output channel is unsecure: first link is modified to be unsecured, second link is
possible with second output channel

OnOff OnOff

InfoOnOff InfoOnOff

OnOff

InfoOnOff

**Figure 31 – D2 : all link are downgraded unsecure (if possible)**

**Use case E:**

**two channels, already linked unsecured**

**a third channel supporting security**

E1: second output channel is secure: second link is possible unsecure with second output
channel

Savedate: Filename: page 55 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN190** **Flexible E-Mode Channels extensions**

OnOff OnOff

InfoOnOff InfoOnOff

OnOff

InfoOnOff

**Figure 32 – E1 : link is done unsecure with third channel**

E2: second output channel is secure: first unsecure link is removed, other link is secured
with second output channel

OnOff OnOff

InfoOnOff InfoOnOff

OnOff

InfoOnOff

**Figure 33 – E2 : all link are downgraded unsecure**

Savedate: Filename: page 56 of 56
2017 11 07 AN190 v01 Flexible E-Mode Channels extensions DP docx


OnOff

InfoOnOff


OnOff

InfoOnOff


OnOff

InfoOnOff


-----

