# System Specifications

## Management

 Management Procedures

Summary

The Management Procedures describe the common set of procedures
for Network - and Device Management shared by and independent of
the Configuration Procedures.


-----

**Document Updates**

|Version|Date|Modifications|
|---|---|---|
|1.2|2001.12.20|Preparation of the Approved Standard v1.2.|
|1.3|2003.11.25|Integrated from S22:|
||2005.08.22|Inclusion of 3.2.7 “Procedure: DM_DeviceDescriptor_InfoReport” from<br>AN045.|
||2005.09.09|From S06 “Individual Address Assignment by Serial Number”<br>S06 clause 2.1 2.24<br>S06 clause 2.3 2.5<br>S06 clause 2.4 2.4|
||2005.11.02|Editorial correction of Verify Mode control: is not in bit 4 of<br>PIDDEVICECONTROL but in bit 2.|
||2006.02.20|__<br>Integration of NMNetworkParameterRead|
||2006.04.07|__<br>Integrated Managemen Procedures of S04 “Reduced Interface Objects”.<br>See clause 3.25.3, 3.27.3 and 3.28.3.|
||2006.07.27|Integration of the Load Event Relative Allocation|
||2006.10.02|Integration of AN089: DMIdentifyRCo2|
||2007.01.19|__<br>• S08 “Distributed Address Assignment”<br>-|
||2007.05.09|Added NM_SubnetworkAddress_Write<br>Restructured first part on Network Managament (first all DoA, then all IA,<br>then all DA).|
||2007.05.14|• S09 “Subnetwork Address Management”<br>Added NMIndividualAddressSerialNumberReport|
||2007.08.21|___<br>• AN092“APropertyDescriptionResponse-PDU”|
||2007.08.28|__ <br>• AN026 “Use of Domain Address on RF”<br>NM_IndividualAddress_Write2 replaced by<br>NM_DomainAddressAndIndividualAddress_Write2.<br>New: DMFunctionPropertyWriteR|
||2007.09.18|___ <br>• AN030“SNA Read from Router”|
||2007.09.19|<br>• AN034“Connectionless ARestart”|
||2007.09.20|_ <br>• AN065“Number field in memory services” added the indication|
||2007.11.06|<br>• Introduction of general procedure NM_NetworkParameter_Write_R.<br>See 2.22.1.|
||2007.11.26|• Replaced PEI_Memory_Write by PC_SET_VAL<br>• Inserted clause|
||2008.01.14|• DMDomainAndIndividualAddressWrite3|
||2008.01.17|__<br>• AN044 “RF Specification Complements” extended<br>NMDomainAndIndividualAddressWrite2 with ARestart.|
||2008.05.06|__  _ <br>• S15 “Easy Common Parts” <br>AN071“DMA and Link Services: see 3.37|
||2008.05.07|<br>• AN072“AAuthorize” integrated.|
||2008.05.14|_ <br>• Editorial review.<br>• AN046“Device Descriptor error handling” integrated.|
||2008.05.20|<br>• AN057 “System B” added the Load Event 03h Subtype 0Bh “Data<br>Relative Allocation”: see clause 3.31.3.4|
||2008.08.01|• AN081“2-level topology” integrated.|
||2008.08.04|<br>• Moved NM_SubnetworkAddress_Read_R to Chapter 3/5/3<br>“Configuration Procedures”|
||2008.08.12|• AN103“Structure of PIDMGTDESCRIPTOR01” integrated.|
|1.4|2009.01.09|___ <br>• Preparation of the Approved Standard v1.4|
|1.4.01<br>AS|2009.10.13|Editorial update|
|1.5.00|2009.11.09|• AN118“cEMI Transport Layer” integrated.|
|1.5.01|2010.10.22|<br>• AN127“Master Reset” integrated.|
|1.5.01|2011.01.05|• AN124“Interface Object index Discovery” integrated.|


-----

completed.
2021.09.29      - Editorial corrections.

              - Preparation for inclusion in the KNX Specifications v3.0.

**References**

[01] Chapter 3/2/6 “KNX IP”

[02] Chapter 3/3/4 “Transport Layer”

[03] Chapter 3/3/7 “Application Layer”

[04] Chapter 3/4/1 “Application Interface Layer”

[05] Chapter 3/5/1 “Resources”

[06] Chapter 3/5/3 “Configuration Procedures”

[07] Chapter 3/6/3 “External Message Interface”

[08] Chapter 3/7/2 “Datapoint Types”

[09] Chapter 3/8/1 “KNXnet/IR Remote Diagnosis and Configuration”

[10] Chapter 3/8/2 “KNXnet/IP Core”

[11] Chapter 3/8/3 “KNXnet/IP Management”

[12] Chapter 3/8/4 “KNXnet/IP Tunnelling”

[13] Chapter 8/3/7 “Application (Interface) Layer Testing – Network
Management Server/Client Testing”

[14] Volume 6 “Profiles”

[15] Part 9/3 “Couplers”

[16] Part 9/4 “BCUs and BIMs”

[17] AN160 “RF S-Mode Device Profiles”

[18] AN161 “Coupler Model 2.0”

|Version|Date|Modifications|
|---|---|---|
|01.06.00|2012.09.11|• Revision of the integration of AN127 “Master Reset” according the<br>updated AN127“Master Reset” v05.|
|01.07.00<br>01.07.01|2013.07.17|• AN139 "Procedures for the assignment of IAs to KNXnet/IP Tunnelling<br>connections" integrated|
|01.07.00<br>01.07.01|2013.07.17|• Editorial review.|
|01.08.00|2013.07.22|• AN132"ANetworkParameterInfoReport" integrated.|
|01.08.01|2013.09.10|__<br>• Editorial review.|
|01.09.00|2013.10.23|• AN162"System aspects of RF S-Mode" integrated.|
|01.09.01|2013.10.29|Editorial updates for the publication of KNX Specifications 2.1.|
|01.09.02|2013.11.29|Editorial updates.|
|02.01.01|2019.11.19|• Accepted all preceding tracked changes.<br>• AN134 “Flexible E-Mode Channels” v04 integrated: replacement of<br>DMPConnectRCl in clause 3.2.2.|
|02.01.01|2019.12.23|__<br>• AN163“Extended Interface Object addressing” integrated.|
|02.01.01|2020.01.07|• AN158“KNX Data Security” integrated.|
|02.01.01|2020.01.07|• AN177“Extended Memory addressing” integrated.|
|02.01.01|2020.10.14|• AN170“Group Object Diagnostics” integrated.|
|02.01.01|2020.10.14|• AN176 v03“PIDFEATURESSUPPORTED” integrated.|
|02.01.01|2020.10.14|__<br>• AN178“Specification of services using EFF” integration started.|
|02.01.02|2021.01.04|• AN184“KNXnet/IP Core v2” integration started and completed.|
|02.01.02|2021.01.04|• AN185“KNXnet/IP Tunnelling v2” integration started and completed.|
|02.01.02|2021.04.22|• AN196“Erase Code for persistent application data” integration started.|
|02.01.02|2021.08.30|• AN160 “KNX RF S-Mode device Profiles” integration started and<br>completed.|
|02.01.02|2021.09.29|• Editorial corrections.<br>• Preparation for inclusion inthe KNXSpecifications v3.0.|


-----

Filename: 03_05_02 Management Procedures v02.01.02 AS.docx
Version: 02.01.02
Status: Approved Standard
Savedate: 2021.09.29
Number of pages: 203


-----

#### Contents

###### 1 Introduction ..................................................................................................................... 10 1.1 Definitions ............................................................................................................... 10 1.2 Naming conventions ................................................................................................ 10 1.3 Timing aspects of Management Procedures ............................................................ 11

 2 Network Management Procedures ................................................................................ 12 2.1 Scope ........................................................................................................................ 12 2.2 NM_IndividualAddress_Read ................................................................................. 12 2.3 NM_IndividualAddress_Write ................................................................................ 13 2.4 NM_IndividualAddress_SerialNumber_Read ......................................................... 16 2.5 NM_IndividualAddress_SerialNumber_Write ........................................................ 16 2.6 NM_IndividualAddress_SerialNumber_Write2 ...................................................... 17 2.7 NM_DomainAddress_Read ..................................................................................... 18 2.8 NM_DomainAndIndividualAddress_Read ............................................................. 19 2.9 NM_DomainAndIndividualAddress_Write ............................................................ 20 2.10 NM_DomainAndIndividualAddress_Write2 .......................................................... 23 2.11 NM_DomainAndIndividualAddress_Write3 .......................................................... 25 2.12 NM_DomainAddressSerialNumber_Write ............................................................. 25 2.13 NM_DomainAddressSerialNumber_Secure_Write ................................................ 26 2.14 Procedures with A_DomainAddressSelective_Read ............................................... 27 2.15 NM_Router_Scan .................................................................................................... 30 2.16 NM_SubnetworkDevices_Scan ............................................................................... 31 2.17 NM_SubnetworkDevices_Scan2 ............................................................................. 32 2.18 NM_IndividualAddress_Reset ................................................................................ 33 2.19 NM_IndividualAddress_Check ............................................................................... 34 2.20 Procedures with A_SystemNetworkParameter_Read ............................................. 36 2.21 Procedures with A_SystemNetworkParameter_Write ............................................ 46 2.22 Procedures with A_NetworkParameter_Write ........................................................ 47
 2.22.1 NM_NetworkParameter_Write_R ............................................................... 47 2.22.2 Overview of accepted usage of A_NetworkParameter_Write ..................... 49 2.22.3 NM_IndividualAddress_Check_LocalSubNetwork .................................... 50 2.22.4 NM_IndividualAddress_SerialNumber_Report .......................................... 52 2.23 Procedures with A_NetworkParameter_Read ......................................................... 53
 2.23.1 General Procedure: NM_NetworkParameter_Read_R ................................ 53 2.23.2 Overview of the accepted usage of A_NetworkParameter_Read (informative) ................................................................................................ 56 2.23.3 NM_GroupAddress_Scan ............................................................................ 60 2.23.4 NM_ObjectIndex_Read ............................................................................... 61 2.23.5 NM_Coupler_Scan_LocalSubnetwork ........................................................ 64 2.23.6 Procedure with PID_FEATURES_SUPPORTED ....................................... 65 2.24 NM_SerialNumberDefaultIA_Scan ........................................................................ 66

 3 Device Management Procedures .................................................................................... 68 3.1 Introduction .............................................................................................................. 68 3.2 DM_Connect ............................................................................................................ 68 3.2.1 DMP_Connect_RCo .................................................................................... 68 3.2.2 Procedure: DMP_Connect_RCl ................................................................... 69 3.2.3 Procedure: DMP_Connect_LEmi1 .............................................................. 70 3.2.5 DMP_Connect_LcEMI ................................................................................ 71 3.2.6 DMP_Connect_R_KNXnetIPDeviceManagement ...................................... 71


-----

###### 3.2.7 Procedure: DM_DeviceDescriptor_InfoReport ........................................... 71 3.3 DM_Disconnect ....................................................................................................... 72 3.3.1 Use ............................................................................................................... 72 3.3.2 Procedure: DMP_Disconnect_RCo ............................................................. 72 3.3.4 Procedure: DMP_Disconnect_LEmi1 ......................................................... 72 3.4 DM_Identify ............................................................................................................ 73 3.4.1 General ......................................................................................................... 73 3.4.2 DM_Identify_R ............................................................................................ 73 3.4.3 DM_Identify_RCo2 ..................................................................................... 74 3.5 DM_Authorize ......................................................................................................... 75 3.5.1 Procedure: DMP_Authorize_RCo ............................................................... 75 3.5.2 DM_Authorize2_RCo .................................................................................. 75 3.6 DM_SetKey ............................................................................................................. 76 3.6.1 Procedure: DM_SetKey_RCo ...................................................................... 77 3.7 DM_Restart .............................................................................................................. 77 3.7.1 Definition ..................................................................................................... 77 3.7.2 Procedure: DM_Restart_RCl ....................................................................... 86 3.7.3 Procedure: DM_Restart_RCo ...................................................................... 88 3.7.4 Procedure: DMP_Restart_LEmi1 ................................................................ 90 3.8 DM_Delay ............................................................................................................... 91 3.8.1 Use ............................................................................................................... 91 3.8.2 Procedure: DMP_Delay ............................................................................... 91 3.9 DM_IndividualAddressRead ................................................................................... 91 3.9.1 Use ............................................................................................................... 91 3.9.2 Procedure: DMP_IndividualAddressRead_LEmi1 ...................................... 92 3.10 DM_IndividualAddressWrite .................................................................................. 92
 3.10.1 Use ............................................................................................................... 92 3.10.2 Procedure: DMP_IndividualAddressWrite_LEmi1 ..................................... 92 3.11 DM_DomainAddress_Read ..................................................................................... 93
 3.11.1 Use ............................................................................................................... 93 3.11.2 Procedure: DMP_DomainAddressRead_LEmi1 ......................................... 93 3.12 DM_DomainAddressWrite ...................................................................................... 94
 3.12.1 Use ............................................................................................................... 94 3.12.2 Procedure: DMP_DomainAddressWrite_LEmi1 ........................................ 94 3.13 DM_ProgMode_Switch ........................................................................................... 94
 3.13.1 Use ............................................................................................................... 94 3.13.2 Procedure: DMP_ProgModeSwitch_RCo ................................................... 95 3.13.3 Procedure: DMP_ProgModeSwitch_LEmi1 ............................................... 95 3.14 DM_PeiTypeVerify ................................................................................................. 96
 3.14.1 Use ............................................................................................................... 96 3.14.2 Procedure: DMP_PeiTypeVerify_RCo_ADC ............................................. 96 3.14.3 Procedure: DMP_PeiTypeVerify_R_IO ...................................................... 97 3.15 DM_PeiTypeRead ................................................................................................... 98
 3.15.1 Use ............................................................................................................... 98 3.15.2 Procedure: DMP_PeiTypeRead_RCo_ADC ............................................... 98 3.15.3 Procedure: DMP_PeiTypeRead_R_IO ........................................................ 99 3.16 DM_MemWrite ....................................................................................................... 99
 3.16.1 Use ............................................................................................................... 99 3.16.2 Procedure: DMP_MemWrite_RCo ............................................................ 100 3.16.3 Procedure: DMP_MemWrite_RCoV ......................................................... 101


-----

###### 3.16.4 Procedure: DMP_MemWrite_LEmi1 ........................................................ 103 3.17 DM_MemVerify .................................................................................................... 104
 3.17.1 Use ............................................................................................................. 104 3.17.2 Procedure: DMP_MemVerify_RCo .......................................................... 105 3.17.3 Procedure: DMP_MemVerify_LEmi1....................................................... 106 3.18 DM_MemRead ...................................................................................................... 106
 3.18.1 Use ............................................................................................................. 106 3.18.2 Procedure: DMP_MemRead_RCo............................................................. 107 3.18.3 Procedure: DMP_MemRead_LEmi1 ......................................................... 107 3.19 DM_UserMemWrite .............................................................................................. 109
 3.19.1 Use ............................................................................................................. 109 3.19.2 Procedure: DMP_UserMemWrite_RCo .................................................... 109 3.19.3 Procedure: DMP_UserMemWrite_RCoV ................................................. 110 3.20 DM_UserMemVerify ............................................................................................ 112
 3.20.1 Use ............................................................................................................. 112 3.20.2 Procedure: DMP_UserMemVerify_RCo ................................................... 112 3.21 DM_UserMemRead ............................................................................................... 113
 3.21.1 Use ............................................................................................................. 113 3.21.2 Procedure: DMP_UserMemRead_RCo ..................................................... 114 3.22 DMP_MemWrite_Extended_R ............................................................................. 114 3.23 DMP_MemVerify_Extended_R ............................................................................ 115 3.24 Procedure: DMP_MemRead_Extended_R ............................................................ 116 3.25 DM_InterfaceObjectWrite ..................................................................................... 117
 3.25.1 Use ............................................................................................................. 117 3.25.2 Procedure: DMP_InterfaceObjectWrite_R ................................................ 117 3.25.3 Procedure: DMP_ReducedInterfaceObjectWrite_R .................................. 119 3.25.4 Procedure: DMP_ExtInterfaceObjectWriteCon_R .................................... 119 3.25.5 Procedure: DMP_ExtInterfaceObjectWriteUnCon_R ............................... 120 3.26 DM_InterfaceObjectVerify .................................................................................... 120
 3.26.1 Use ............................................................................................................. 120 3.26.2 Procedure: DMP_InterfaceObjectVerify_R ............................................... 121 3.26.3 Procedure: DMP_ExtInterfaceObjectVerify_R ......................................... 122 3.27 DM_InterfaceObjectRead ...................................................................................... 123
 3.27.1 Use ............................................................................................................. 123 3.27.2 Procedure: DMP_InterfaceObjectRead_R ................................................. 124 3.27.3 Procedure: DMP_ReducedInterfaceObjectRead_R ................................... 125 3.27.4 Procedure: DMP_ExtInterfaceObjectRead_R ........................................... 126 3.28 DM_InterfaceObjectScan ...................................................................................... 127
 3.28.1 Use ............................................................................................................. 127 3.28.2 Procedure: DMP_InterfaceObjectScan_R ................................................. 127 3.28.3 Procedure: DMP_ReducedInterfaceObjectScan_R ................................... 129 3.28.4 Procedure: DMP_ExtInterfaceObjectScan_R ............................................ 129 3.29 DM_InterfaceObjectInfoReport ............................................................................ 130
 3.29.1 Use ............................................................................................................. 130 3.30 DM_FunctionProperty_Write_R ........................................................................... 132
 3.30.1 Use ............................................................................................................. 132 3.30.2 Procedure: DMP_ExtFunctionProperty_Write_R ..................................... 132 3.31 DM_LoadStateMachineWrite ................................................................................ 133
 3.31.1 Use ............................................................................................................. 133 3.31.2 Procedure: DMP_LoadStateMachineWrite_RCo_Mem ........................... 134


-----

###### 3.31.3 Procedure: DMP_LoadStateMachineWrite_RCo_IO ................................ 138 3.31.4 Procedure: DMP_DownloadLoadablePart_RCo_IO ................................. 142 3.31.5 Procedure: DMP_ExtLoadStateMachineWrite_RCo_IO .......................... 143 3.32 DM_LoadStateMachineVerify .............................................................................. 144
 3.32.1 Use ............................................................................................................. 144 3.32.2 Procedure: DM_LoadStateMachineVerify_RCo_Mem ............................ 144 3.32.3 Procedure: DM_LoadStateMachineVerify_R_IO ..................................... 145 3.32.4 Procedure: DMP_ExtLoadStateMachineVerify_RCo_IO ......................... 146 3.33 DM_LoadStateMachineRead ................................................................................ 147
 3.33.1 Use ............................................................................................................. 147 3.33.2 Procedure: DMP_LoadStateMachineRead_RCo_Mem ............................ 147 3.33.3 Procedure: DMP_LoadStateMachineRead_R_IO ..................................... 148 3.33.4 Procedure: DMP_ExtLoadStateMachineRead_RCo_IO ........................... 149 3.34 DM_RunStateMachineWrite ................................................................................. 149
 3.34.1 Use ............................................................................................................. 149 3.34.2 Procedure: DMP_RunStateMachineWrite_RCo_Mem ............................. 150 3.34.3 Procedure: DMP_RunStateMachineWrite_R_IO ...................................... 151 3.34.4 Procedure: DMP_ExtRunStateMachineWrite_RCo_IO ............................ 153 3.35 DM_RunStateMachineVerify ................................................................................ 154
 3.35.1 Use ............................................................................................................. 154 3.35.2 Procedure: DMP_RunStateMachineVerify_RCo_Mem ............................ 154 3.35.3 Procedure: DMP_RunStateMachineVerify_R_IO ..................................... 155 3.35.4 Procedure: DMP_ExtRunStateMachineVerify_RCo_IO .......................... 156 3.36 DM_RunStateMachineRead .................................................................................. 156
 3.36.1 Use ............................................................................................................. 156 3.36.2 Procedure: DMP_RunStateMachineRead_RCo_Mem .............................. 157 3.36.3 Procedure: DMP_RunStateMachineRead_R_IO ....................................... 157 3.36.4 Procedure: DMP_ExtRunStateMachineRead_RCo_IO ............................. 158 3.37 Procedures with Link Services .............................................................................. 159
 3.37.1 Basic requirements ..................................................................................... 159 3.37.2 DM_GroupObjectLink_Read_RCl ............................................................ 159 3.37.3 DM_GroupObjectLink_Write_RCl ........................................................... 160 3.38 DM_LCSlaveMemWrite ....................................................................................... 161
 3.38.1 Use ............................................................................................................. 161 3.38.2 Procedure: DMP_LCSlaveMemWrite_Rco ............................................... 162 3.39 DM_LCSlaveMemVerify ...................................................................................... 163
 3.39.1 Use ............................................................................................................. 163 3.39.2 Procedure: DMP_LCSlaveMemVerify_RCo ............................................ 164 3.40 DM_LCSlaveMemRead ........................................................................................ 165
 3.40.1 Use ............................................................................................................. 165 3.40.2 Procedure: DMP_LCSlaveMemRead_RCo............................................... 165 3.41 DM_LCExtMemWrite ........................................................................................... 166
 3.41.1 Use ............................................................................................................. 166 3.41.2 Procedure: DMP_LCExtMemWrite_Rco .................................................. 167 3.42 DM_LCExtMemVerify ......................................................................................... 168
 3.42.1 Use ............................................................................................................. 168 3.42.2 Procedure: DMP_LCExtMemVerify_RCo ................................................ 168 3.43 DM_LCExtMemRead ............................................................................................ 169
 3.43.1 Use ............................................................................................................. 169 3.43.2 Procedure: DMP_LCExtMemRead_Rco ................................................... 170


-----

###### 3.44 DM_LCExtMemOpen ........................................................................................... 170
 3.44.1 Use ............................................................................................................. 170 3.44.2 Procedure: DMP_LCExtMemOpen_RCo ................................................. 171 3.45 DM_LCRouteTableStateWrite .............................................................................. 171
 3.45.1 Use ............................................................................................................. 171 3.45.2 Procedure: DMP_LCRouteTableStateWrite_RCo .................................... 171 3.46 DM_LCRouteTableStateVerify ............................................................................. 172
 3.46.1 Use ............................................................................................................. 172 3.46.2 Procedure: DMP_LCRouteTableStateVerify_RCo ................................... 172 3.47 DM_LCRouteTableStateRead ............................................................................... 173
 3.47.1 Use ............................................................................................................. 173 3.47.2 Procedure: DMP_LCRouteTableStateRead_RCo ..................................... 173

 4 Security related Management Procedures .................................................................. 174 4.1 DM_SecureSync_SBC .......................................................................................... 174 4.2 DM_SecureSync_RCl ............................................................................................ 176

 5 Group Object Diagnostics ............................................................................................ 180 5.1 DMP_GO_DIAGNOSTICS_RCl .......................................................................... 180 5.2 DMP_GA_DIAGNOSTICS_RCl .......................................................................... 182

 6 KNXnet/IP Management Procedures .......................................................................... 184 6.1 NM_SearchRequestExtended_Multicast ............................................................... 184 6.2 DM_SearchRequestExtended_Unicast .................................................................. 184 6.3 DMP_KNXnet/IP_Connect ................................................................................... 185 6.4 DMP_InterfaceObjectWrite_IP ............................................................................. 186 6.5 DMP_InterfaceObjectRead_IP .............................................................................. 187 6.6 NM_TunnellingFeature_Read ............................................................................... 189 6.7 NM_TunnellingFeature_Set .................................................................................. 190 6.8 NM_TunnellingFeature_Info ................................................................................. 190

 7 RF Management Procedures ........................................................................................ 191 7.1 NMP_LinkQuality_Measure ................................................................................. 191

 8 File Transfer Procedures .............................................................................................. 194 8.1 Preconditions and error handling ........................................................................... 194 8.1.1 Preconditions.............................................................................................. 194 8.1.2 Common error and exception handling ...................................................... 194 8.2 FTP_RetrieveFile ................................................................................................... 194 8.3 FTP_StoreFile ........................................................................................................ 196 8.4 FTP_ListDirectory ................................................................................................. 197 8.5 FTP_Rename (consisting of Rename From and Rename To) ............................... 197 8.6 FTP_Delete ............................................................................................................ 199 8.7 FTP_RemoveDirectory .......................................................................................... 200 8.8 FTP_MakeDirectory .............................................................................................. 200 8.9 FTP_FileSize ......................................................................................................... 201 8.10 FTP_EmptyDiskSpace ........................................................................................... 201 8.11 FTP_Abort ............................................................................................................. 202 8.12 hTTP_GetFile ........................................................................................................ 202 8.13 hTTP_PostFile ....................................................................................................... 203


-----

### 1 Introduction

#### 1.1 Definitions
The Management Procedures capture the dynamics of managing distributed Resources on the network
in terms of abstract procedures. On the network itself, a procedure consists of a sequence of telegrams,
exchanged between two partners: the Management Client and the Management Server.

The Management Client is a powerful device with 'controller' functionality, typically but not
exclusively PC-based. Except for Network Management, the Management Server is always one
particular 'target device'. In the former case, it is in fact the network as a whole that acts as partner or
server. Ultimately of course, the response to a Management Client request is always generated by the
individual devices connected to the network, either one or many. In addition to its runtime behaviour
(based on group communication), every device moreover supports a rich Management Server profile
to this purpose. One important objective of this Chapter “Management Procedures” is precisely to
allow a concise description of such a Profile (see [14]). It is clear that the information about the full set
of Management Procedures supported by a particular device or implementation, tells us significantly
more about the device than merely the list of services through which this is realised.

Note that in general, one single device may well implement both Management Client - as well as
Management Server functionality. For and during the execution of one particular Management
Procedure however, one device takes on one single role.

###### Network Management Procedures and Device Management Procedures

So, in conclusion, there are two main classes of Management Procedures.

1. **Network Management Procedures describe the device independent Management Procedures on**
the network. These are e.g. reading / writing the Individual Address, scanning the network. For
these procedures no knowledge of the single devices is required.

2. **Device Management Procedures describe the Management Procedures to access one specific**
device. These Management Procedures describe e.g. the load procedures, reading the state. For
these Management Procedures a detailed knowledge of the device is required.

#### 1.2 Naming conventions
The majority of the common, runtime communication on KNX bases on point-to-multipoint,
connectionless communication mode (multicast).

- **_Remote Management_** denotes the management of a device via the bus. For this, the Management
Procedures mainly base on the other communication modes as specified in the Transport Layer
specifications in [02]. The main communication mode used in a Management Procedure is
reflected as a suffix in the name of the Management Procedure, as indicated in Table 1.

- **_Local Management denotes the management of a device via its possible EMI-interface (EMI1,_**
EMI2 or cEMI) as specified in [07]. This makes use of the local services, as provided by the
device’s EMI-flavour, which is again indicated by a suffix in the name of the Management
Procedure, as indicated in Table 1.


-----

**Table 1 – Indications in names of Management Procedures**

**Suffix** **Communication Mode**

RCo Remote Management, using point-to-point connection-oriented communication mode

RCoV Remote Management, using point-to-point connection-oriented communication mode.
Additionally, the Verify Mode is used.

NOTE Verify Mode is specified in [05].

RCl Remote Management, using point-to-point connectionless communication mode

LEmi1 Local Management using EMI1.

LEmi2 Local Management using EMI2.

LcEmi Local Management using cEMI.

#### 1.3 Timing aspects of Management Procedures
The timings in this document are in certain cases multiplied by a medium dependent factor Tmedia. This
factor is specified in Table 2.

**Table 2 – Overview Tmedia**

**Medium Tmedia**

TP1 20 ms

PL110 390 ms

|Suffix|Communication Mode|
|---|---|
|RCo|Remote Management, using point-to-point connection-oriented communication mode|
|RCoV|Remote Management, using point-to-point connection-oriented communication mode.<br>Additionally, the Verify Mode is used.<br>NOTE<br>Verify Mode is specified in [05].|
|RCl|Remote Management, using point-to-point connectionless communication mode|
|LEmi1|Local Management using EMI1.|
|LEmi2|Local Management using EMI2.|
|LcEmi|Local Management using cEMI.|

|Medium|T<br>media|
|---|---|
|TP1|20 ms|
|PL110|390 ms|


-----

### 2 Network Management Procedures

#### 2.1 Scope
The Network Management Procedures describe the device independent Management Procedures.
These procedures are used to configure the network, and to get the information about the configuration
of the network and connected devices.

For these procedures no knowledge of the single devices is required. They will work with every device
connected to the network[ 1)].

These Management Procedures work independent of the location of the Management Client in the
network. Some of these Network Management Procedures require the preceding configuration of
Routers and Domain Addresses via other Management Procedures.

#### 2.2 NM_IndividualAddress_Read
**Use**

This Network Management Procedure shall be used to read out the Individual Addresses of all the
devices that are in Programming Mode.

This procedure shall work independently of the configuration of the Individual Address of the Routers.
When applicable this procedure shall be preceded by the configuration of the Domain Address.

**Used Application Layer Services for Management**

  - A_IndividualAddress_Read
**Parameters of the Management Procedure**

NM_IndividualAddress_Read(/* [out] */ individual_addresses[])

individual_addresses[]: The collection of all the Individual Addresses of the devices that are
in Programming Mode.
**Service parameters**

None.
**Variables**

IAn: The IA of one device n that responds to the A_IndividualAddress_Read-PDU. The
Management Client shall collect all IAn of the individual responses and report these via
individual_addresses[].
**Sequence**


Management
Client

A_IndividualAddress_Read-PDU

()

A_IndividualAddress_Response-PDU

(source_address = IAn)...

…

1) The Management Server functionality has to be implemented.


Network /
Management
Server


remark

the devices, one or more, that are
in Programming Mode shall
respond
time-out: 3 s


-----

**Exception handling**

The Management Client shall always wait until the time-out has elapsed. It shall collect all responses
IAn during this time-out.

   - If no A_IndividualAddress_Response-PDU is received, no device is in Programming Mode.
   - If one A_IndividualAddress_Response-PDU is received, exactly one device is in
Programming Mode.
   - If more than one response is received, several devices are in Programming Mode.
   - If two or more responses with the same Individual Address are received, there is more than
one device with the same Individual Addresses.

The Management Client shall not evaluate Layer-2 repetitions.

#### 2.3 NM_IndividualAddress_Write
**Use**

This Network Management Procedure shall be used to write the Individual Address of one single
device that is in Programming Mode.

The procedure shall wait until exactly one device is in Programming Mode. It shall check that no other
device has the same Individual Address. The procedure shall check if the programming is successful
and shall deactivate the Programming Mode by executing a restart of the device.

When applicable this procedure shall be preceded by the configuration of the Individual Addresses of
the installed Routers and the Domain Addresses.

**Used Application Layer Services for Management**

  - A_IndividualAddress_Read

  - A_IndividualAddress_Write

  - A_DeviceDescriptor_Read

  - A_Restart

  - A_Connect
**Parameters of the Management Procedure**

NM_IndividualAddress_Write(/* [in] */ IA_new)

IA_new: The new IA that shall be assigned to the device in Programming Mode.
**Service parameters**

None.
**Variables**

IA_current: The current IA of the device that is in Programming Mode prior to the assignment

of IA_new.


-----

**Sequence**

Management
Client

1. Verify whether the Individual Address IA_new is already occupied

on the network.

A_Connect-PDU
(destination_address = IA_new)


Network /
Management
Server


remark


if negative A_Connect.Lcon ⇒ IA_new is not occupied; end procedure.
else (this is, a positive A_Connect.Lcon is received)

If the device that occupies the IA IA_new
does not support Transport Layer connections,

it shall send a T_Disconnect-PDU.
A_Disconnect-PDU

()

if A_Disconnect-PDU is received then IA_new shall be regarded as occupied; end procedure.
else (no A_Disconnect-PDU is received)

If a device that occupies IA_new is present on the network,

and does support Transport Layer connections,

it shall have no other reaction on the bus
than the Layer-2 acknowledge that initiates the above A_Connect.Lcon
The A_DeviceDescriptor_Read-PDU shall use DD0.
A_DeviceDescriptor_Read-PDU

(destination_address = IA_new,
descriptor_type = 0000h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

**a)**

If the Management Client receives an A_DeviceDescriptor_Response-PDU it shall
conclude that the Individual Address IA_new is occupied.
If no A_DeviceDescriptor_Response-PDU is received after time-out ⇒ IA_new is not
occupied
endif

A_Disconnect-PDU
(destination_address = IA_new)

2. wait until device is in Programming Mode:
repeat until one A_IndividualAddress_Response-PDU is received

A_IndividualAddress_Read-PDU

()


A_IndividualAddress_Response-PDU

(source_address = IA_current)

...

if more than one response is received ⇒ more than one device in Programming Mode
end repeat


one or more responses may be
received from different devices
time-out: 1 s


-----

3.set Individual Address
if IA_new!= IA_current

A_IndividualAddress_Write-PDU

(new_address = IA_new)

endif
4. verify and deactivate programming mode:

A_Connect-PDU
(destination_address = IA_new)

A_DeviceDescriptor_Read-PDU

(descriptor_type = 00h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

**b)**

A_Restart-PDU

()

Abort the connection of the client side Transport Layer.

**Exception handling**

to 1.: If an A_Disconnect-PDU is received instead of an A_DeviceDescriptor_Response-PDU, than a
device with this Individual Address exists but it may either already have another Transport
Layer connection open and not accept any further Transport Layer connections, or does not
support connection oriented communication mode.
The Management Client shall continue with the Management Procedure in every case.

**a)** The Management Client shall accept any value of descriptor_type, also values ≠ 0, and any value
of device_descriptor.

to 2.: The Management Client shall always wait until the time-out has elapsed. It shall collect all the
responses during this time-out.
This procedure shall wait until exactly one device is in Programming Mode[ 2)].

Following case may occur at this point:

   - A device with the Individual Address IA_new to be assigned exists, but it is not the one
that is in Programming Mode.
⇒ The Management Client shall not continue with the Management Procedure.

   - A device with the Individual Address IA_new to be assigned exists, and it is the one that is
in Programming Mode.
⇒ The Management Client shall continue with the Management Procedure.

   - No device with the Individual Address IA_new to be assigned exists.
⇒ The Management Client shall continue with the Management Procedure.

to 4.: If no A_DeviceDescriptor_Response-PDU is received, than the programming of the Individual
Address may have failed, or the system (Router) is not configured correctly.

2) The user of the Management Client should get an information in how many devices are Programming Mode
is active (none or more than one).


-----

#### 2.4 NM_IndividualAddress_SerialNumber_Read
**Use**

This Network Management Procedure shall be used to read the Individual Address of one single
device of which the KNX Serial Number is known.

The KNX Serial Number of the device (SN_Device) must be known in advance.

If the Individual Address of more than one device has to be read, this Network Management Procedure
“NM_IndividualAddress_SerialNumber_Read” has to be repeated for each device, using each device’s
KNX Serial Number.

**Used Application Layer Services for Management**

  - A_IndividualAddressSerialNumber_Read
**Parameters of the Management Procedure**

NM_IndividualAddress_SerialNumber_Read(/* [in] */ SN_Device, /* [out] */ DoA_current,
/* [out] */ IA_current)
SN_Device: KNX Serial Number of the device of which the Individual Address is to be read.
DoA_Device: The Domain Address of the device of which the Individual Address is read;
it is contained in the response if the device is on Powerline.
IA_Device: The Individual Address of the device, in the response.
**Sequence**


Management
Client

1.Get the Individual Address of the Management Server.

A_IndividualAddressSerialNumber_Read-PDU

(serial_number = SN_Device)

A_IndividualAddressSerialNumber_Response-PDU

(source_address = IA_current,
serial_number = SN_Device,
domain_address = DoA_Device)


Management
Server


remark


No answer received ⇒ Error

The Individual Address is contained as the Source Address of the
A_IndividualAddressSerialNumber_Response-PDU.

**Exception handling**

If no answer is received, there is no device present in the network with the given KNX Serial Number.

#### 2.5 NM_IndividualAddress_SerialNumber_Write
**Use**

This Network Management Procedure shall be used to write the Individual Address of one single
device of which the KNX Serial Number is known.

The procedure shall ensure that the assigned Individual Address is unique. The procedure shall check
if the programming has been successful.

If applicable this procedure shall be preceded by the configuration of the Individual Addresses of the
installed Routers and the Domain Addresses.

The KNX Serial Number of the device to be programmed must be known in advance. Either by the
mechanism NM_SerialNumberDefaultIA_Scan or by any other means.


-----

If the Individual Address of more than one device has to be programmed, this Network Management
Procedure NM_IndividualAddress_SerialNumber_Write has to be repeated for each device, using that
device’s KNX Serial Number.

**Used Application Layer Services for Management**

  - A_IndividualAddressSerialNumber_Write

  - A_IndividualAddressSerialNumber_Read
**Parameters of the Management Procedure**

NM_IndividualAddress_SerialNumber_Write(/* [in] */ SN_device, /* [in] */ IA_new,
/* [out] */ DoA_Device)
SN_Device: KNX Serial Number of device to which the Individual Address will be
assigned.
IA_new: Individual Address to be programmed.
DoA_Device: The Domain Address of the device if the device is on an open medium
supporting a Domain Address.
**Sequence**

Management Management
Client Server

1.Set Individual Address of Server

A_IndividualAddressSerialNumber_Write-PDU The server shall set its
(serial_number = SN_Device, new_address = IA_new) Individual Address according

to the received value

2. Verify

A_IndividualAddressSerialNumber_Read-PDU

(serial_number = SN_Device)

A_IndividualAddressSerialNumber_Response-PDU Different or no answer received
(source_address = IA_new, serial number = SN_Device, ⇒ Error

domain_address = DoA_Device)


NOTE - Opposite to the procedures NM_IndividualAddress_Write and

NM_DomainAndIndividualAddress_Write, both requiring that the Programming Mode be active in the device and using the
service A_IndividualAddress_Write, this procedure does not reset the device after assigning the Individual Address.

**Exception handling**

The default exception handling shall apply.

#### 2.6 NM_IndividualAddress_SerialNumber_Write2
**Use**

NOTE The beginning of the procedure is identical to the link sequence of PB-Mode. A central Management Client shall
react to the Start_Link command by sending a Stop_Link. The device shall stop the link sequence.

At this point the Management Client shall know the KNX Serial Number of the device and shall
assign the Individual Address with A_IndividualAddressSerialNumber_Write. Finally the Device
Descriptor shall be read.


-----

Sensor Central Unit

sensor in config mode
CC_Config_Link
(Start_Link, manufacturer code,
Number of objects)

enter config mode
CC_Config_Link

(Stop_Link)

leaves config mode stop link sequence
write Individual Address
A_IndividualAddressSerialNumber_Write-PDU

(serial_number, new_address)

A_IndividualAddressSerialNumber_Read-PDU

(serial_number)

A_IndividualAddressSerialNumber_Response-P

DU
(serial_number)

read DD2 (point-to-point)
A_DeviceDescriptor_Read-PDU

(descriptor_type = 2)

A_DeviceDescriptor_Response-PDU
(descriptor_type = 2, device_descriptor)

See note a)

**Notes**

a) In the context of this Management Procedure NM_IndividualAddress_SerialNumber_Write2, the
A_DeviceDescriptor_Read-service is only applied to check whether the Sensor can be addressed
using its new Individual Address. The Management Client is only interested in whether it
receives a response or not; the contents, this is, the value of descriptor_type and device_descriptor
should not be evaluated at this point.

#### 2.7 NM_DomainAddress_Read
**Use**

This Network Management Procedure shall be used to read out the Domain Addresses of all the
devices in which Programming Mode is active.

This procedure works independently of the configuration of the Domain Address and the Individual
Address of the Router.

**Used Application Layer Services for Management**

  - A_DomainAddress_Read
**Parameters of the Management Procedure**

NM_DomainAddress_Read (/* [out] */ individual_addresses[], /* [out] */ domain_addresses[])

individual_addresses[]: The collection of all the Individual Addresses of the devices in which
Programming Mode is active.
domain_addresses[]: The collection of all theDomain Addresses of the devices in which
Programming Mode is active.
**Variables**

IAn: The IA of one device n that responds to the A_DomainAddress_Read-PDU. The
Management Client shall collect all IAn of the individual responses and report these via
individual_addresses[].


-----

DoAn: The DoAn of one device n that responds to the A_DomainAddress_Read-PDU. The

Management Client shall collect all DoAn of the individual responses and report these
via domain_addresses[].
**Sequence**


Management
Client

A_DomainAddress_Read-PDU

()

A_DomainAddress_Response-PDU
(source_address =IAn, domain_address = DoAn)

…

**Exception handling**


Network /
Management
Server


remark

one or more responses may be
received from different devices
time-out: 3 s


The Management Client shall always wait until the time-out has elapsed. It shall collect all responses
during this time-out.

   - If no A_DomainAddress_Response is received, there is no device in which Programming
Mode is active.
   - If one A_DomainAddress_Response is received, there is exactly one device in which
Programming Mode is active.
   - If more than one response is received, there are several devices in which Programming Mode
is active.
   - If two or more responses with the same Domain Address and Individual Addresses are
received, there is more than one device with the same Domain Address and the same
Individual Addresses.

The Management Client shall not evaluate Layer-2 repetitions.

#### 2.8 NM_DomainAndIndividualAddress_Read
**Use**

This Network Management Procedure shall be used to read the Domain Address and the Individual
Address of one or more devices in which the Programming Mode is active.

**Used Application Layer Services for Management**

 - A_DomainAddress_Read

 - A_IndividualAddress_Read
**Parameters of the Management Procedure**

NM_DomainAndIndividualAddress_Read(/* [out] */ individual_addresses[],
/* [out] */ domain_addresses)
individual_addresses[]: The collection of all the Individual Addresses of the devices in which

Programming Mode is active.
domain_addresses[]: The collection of all theDomain Addresses of the devices in which
Programming Mode is active.


-----

**Variables**

IAn: The IA of one device n that responds to the A_DomainAddress_Read-PDU. The
Management Client shall collect all IAn of the individual responses and report these via
individual_addresses[].
DoAn: The DoAn of one device n that responds to the A_DomainAddress_Read-PDU. The

Management Client shall collect all DoAn of the individual responses and report these
via domain_addresses[].
**Sequence**


Management Network / remark
Client Management

Server

A_DomainAddress_Read-PDU

()
comm_mode = comm_mode = system broadcast

A_DomainAddress_Response-PDU
(source_address = IAn, domain_address= DoAn)
comm_mode = system broadcast

A_IndividualAddress_Read-PDU

()
comm_mode = system broadcast

A_IndividualAddress_Response-PDU

(source_address = IAn)
comm_mode = system broadcast

#### 2.9 NM_DomainAndIndividualAddress_Write
**Use**

This Network Management Procedure shall be used to set the Domain Address and the Individual
Address of one single device that is in Programming Mode.

This procedure shall ensure that no other device has the same Individual Address and shall wait until
there is exactly one device in which Programming Mode is active. It shall verify whether the
programming is successful and shall switch deactivate the Programming Mode in the device into by
executing a restart of the device.

For this procedure the Management Server has to provide a free Domain Address.

**Used Application Layer Services for Management**

  - A_Connect

  - A_DeviceDescriptor_Read

  - A_DomainAddress_Read

  - A_DomainAddress_Write

  - A_IndividualAddress_Write

  - A_Restart


-----

**Parameters of the Management Procedure**

NM_DomainAndIndividualAddress_Write(/* [in] */ DoA_new, /* [in] */ IA_new)

DoA_new: The Domain Address to be assigned to the device.
IA_new: The new Individual Address to be assigned to the device.
**Variables**

IA_current: The current IA of the device in which Programming Mode is active prior to the
assignment of IA_new.
DoA_current: The current IA of the device that in which Programming Mode is active prior to

the assignment of IA_new.
**Sequence**

Management Network / remark
Client Management

Server

1. Verify whether the Individual Address IA_new is already occupied

on the network.

A_Connect-PDU
(destination_address = IA_new)

if negative A_Connect.Lcon ⇒ IA_new is not occupied; continue with 2.
else (this is, a positive A_Connect.Lcon is received)

If the device that occupies the IA IA_new
does not support Transport Layer connections,

it shall send a T_Disconnect-PDU.
A_Disconnect-PDU
(destination_address = IA_new)

If an A_Disconnect-PDU is received then IA_new shall be regarded as occupied; end procedure.
else (no A_Disconnect-PDU is received)

If a device that occupies IA_new is present on the network,

and does support Transport Layer connections,

it shall have no other reaction on the bus
than the Layer-2 acknowledge that initiates the above A_Connect.Lcon
The A_DeviceDescriptor_Read-PDU shall use DD0.
A_DeviceDescriptor_Read-PDU

(destination_address = IA_new,
descriptor_type = 0000h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

If the Management Client receives an A_DeviceDescriptor_Response-PDU it shall
conclude that the Individual Address IA_new is occupied.

The Management Client shall accept any value of descriptor_type, also values ≠ 0.
If no A_DeviceDescriptor_Response-PDU is received after time-out
⇒ IA_new is not occupied
endif

A_Disconnect-PDU
(destination_address = IA_new)


-----

_2. wait until Programming Mode is active in the device:_
repeat until one A_IndividualAddress_Response-PDU is received

A_DomainAddress_Read-PDU

()

A_DomainAddress_Response-PDU

(source_address = IA_current,
domain_addres= DoA_current)

…


one or more responses may be
received from different devices
time-out: 1 s


if more than one response is received ⇒ than Programming Mode is active in more than one device
end repeat

3.set Domain Address and Individual Address
if Domain Address DoA_current != DoA_new

A_DomainAddress_Write-PDU

(domain_address = DoA_new)

endif
if IA_current != IA_new

A_IndividualAddress_Write-PDU

(new_address = IA_new)

endif

4. verify and inactivate programming mode

A_Connect-PDU
(destination_address = IA_new)

A_DeviceDescriptor_Read-PDU

(descriptor_type = 0000h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

A_Restart-PDU

()

Abort the connection of the Management Client side Transport Layer.
**Exception handling**

to 1.: If an A_Disconnect-PDU is received instead of an A_DeviceDescriptor_Response-PDU, then a
device with this Individual Address exists but it may either already have another Transport
Layer connection open and not accept any further Transport Layer connections, or does not
support connection oriented communication mode.
⇒ The Management Client shall continue with the Management Procedure in every case.


-----

to 2.: The Management Client shall always wait until the time-out has elapsed. It shall collect all
responses during this time-out.
This Management Procedure shall wait until Programming Mode is active in only exactly one
device[ 3)].

The following cases may occur at this point.

   - A device with the Individual Address exists, but it is not the one in which Programming
Mode is active.
⇒ The Management Client shall not continue with the Management Procedure.

   - A device with the Individual Address exists, and it is the one in which Programming Mode
is active.
⇒ The Management Client shall continue with the Management Procedure.

   - No device with the Individual Address exists.
⇒ The Management Client shall continue with the Management Procedure.

to 4.: If no A_DeviceDescriptor_Response-PDU is received, then the programming of the Individual
Address may have failed or the system (Router) has not been configured correctly.

#### 2.10 NM_DomainAndIndividualAddress_Write2
**Use**

This procedure NM_DomainAndIndividualAddress_Write2 differs from the above procedure
NM_DomainAndIndividualAddress_Write in the following.

   - It shall not check whether the Individual Address that shall be assigned is already present in
the network. As a result, it does not need the service A_Connect.
   - After assignment of the Individual Address it reads out the Device Descriptor
connectionless.
   - The Management Server is not restarted at the end of the procedure. As a result, it does not
need the service A_Restart.

**Used Application Layer Services for Management**

  - A_IndividualAddress_Read

  - A_DomainAddress_Write

  - A_IndividualAddress_Write

  - A_DeviceDescriptor_Read
**Parameters of the Management Procedure**

NM_DomainAndIndividualAddress_Write2(/* [in] */ NmpDoANew, /* [in] */ NmpIANew,
/* [out] */ NmpIACurrent)
NmpDoANew: The Domain Address to be assigned to the device
NmpIANew: The new Individual Address to be assigned to the device.
NmpIACurrent: Individual Address used by the device before the start of the Management
Procedure.

3) The user of the Management Client should get an information, how many devices are in Programming Mode
(none or more than one)


-----

**Sequence**

Management Management remark
Client Server

(Device)

Enter Programming Mode

(Manufacturer specific)
1. Wait until Programming Mode is active in the device.

Repeat until one A_IndividualAddress_Response-PDU is received.

A_IndividualAddress_Read-PDU

()
comm_mode = system broadcast

A_IndividualAddress_Response-PDU

(source_address = NmpIACurrent)

The Management client shall store the KNX Serial Number of the device.
If more than one response is received:
⇒ Programming Mode is active in more than one device
end repeat

2. Set Domain Address

A_DomainAddress_Write-PDU
(domain_address = NmpDoANew)
comm_mode = system broadcast

The device shall store and use the received Domain Address NmpDoANew.

3. Set Individual Address

if NmpIANew ≠ NmpIACurrent

A_IndividualAddress_Write-PDU

(new_address = NmpIANew)
comm_mode = system broadcast

The device shall store the received Individual Address.
endif

4. verify

A_DeviceDescriptor_Read-PDU
(destination address = NmpIANew,
descriptor_type = 0)
comm_mode = point-to-point connectionless

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)
comm_mode = point-to-point connectionless

See note a)

A_Restart-PDU

()

The device shall quit Programming Mode.


-----

**Notes**

a) In the context of this Management Procedure NM_DomainAndIndividualAddress_Write2, the
A_DeviceDescriptor_Read-service is only applied to check whether the Management Server
(device) can be addressed using its new Individual Address. The Management Client is only
interested in whether it receives a response or not; the contents, this is, the value of
descriptor_type and device_descriptor should not be evaluated at this point.

#### 2.11 NM_DomainAndIndividualAddress_Write3
This Network Management Procedure is not yet specified.

#### 2.12 NM_DomainAddressSerialNumber_Write
**Use**

This Network Management Procedure shall be used to write the Domain Address of one single device
of which the KNX Serial Number is known.

All timeouts are counted from the time when the sending of the preceding message is confirmed
locally.

NOTE 1 This is relevant mainly for the use case where the MaC is connected via satellite to a Tunnelling
Server in the installation.
NM_DomainAddressSerialNumber_Write(/* [in] */ SerNo, /* [in] */ DoANew)

SerNo: The KNX Serial Number of the device.

DoANew: The Domain Address to be assigned to the device. In case of IP devices this is a

4 octet DoA consisting of the KNXnet/IP routing multicast address (21 octet
DoA can be loaded only with the secure procedure in 2.13).

1. If there is a KNXnet/IP Router between the MaC and the MaS, the MaC sets the IP System
_Broadcast Routing Mode of the router to “Enable” by sending an_
A_FunctionPropertyCommand(…) or A_FunctionPropertyExtCommand(…).

2. The MaC sends an A_DomainAddressSerialNumber_Write with SerNo and DoANew. If the
MaC is on the same IP network, the Frame shall be sent as IP system broadcast; otherwise
the Frame will be transformed to an IP system broadcast by the KNXnet/IP Router.

3. To verify, the MaC waits 1 second and then sends repeatedly an
A_IndividualAddressSerialNumber_Read with SerNo on broadcast until the MaS responds
with A_IndividualAddressSerialNumber_Response-PDU or the timeout elapses (see [01]
clause 4.3.5.3.4 “A_DomainAddressSerialNumber_Write”).

4. If the IP System Broadcast Routing Mode of a router has been set to “Enable” in step 1, set it
back to “Disable” by sending an A_FunctionPropertyCommand(…) or
A_FunctionPropertyExtCommand(…).

**Error handling**

If no A_IndividualAddressSerialNumber_Response-PDU in 3 is received within the timeout (see [01]
clause 4.3.5.3.4 “A_DomainAddressSerialNumber_Write”), the MaC first repeats from 2 after a delay
of 1 second.

If this entire Management Procedure fails, the MaC (ETS) shall not automatically repeat it. This may
only be repeated after indication or confirmation by the user.


-----

#### 2.13 NM_DomainAddressSerialNumber_Secure_Write
**Use**

This Network Management Procedure shall be used to write the Domain Address of one single secure
device of which the KNX Serial Number is known.

All timeouts are counted from the time when the sending of the preceding message is confirmed
locally.

NOTE 2 This is relevant mainly for the use case where the MaC is connected via satellite to a Tunnelling
Server in the installation.
NM_DomainAddressSerialNumber_Secure_Write(/* [in] */ SerNo, /* [in] */ Key, /* [in] */ DoANew)

SerNo: The KNX Serial Number of the device.

Key The current Tool Key, or the FDSK for ex-factory devices, of the device.

DoANew: The Domain Address to be assigned to the device. In case of IP devices this
is either a 4 octet DoA consisting of the KNXnet/IP routing multicast
address, or a 21 octet DoA consisting of the KNXnet/IP routing multicast
address,the routing security version, and the security Backbone Key.

1. If there is a KNXnet/IP Router between the MaC and the MaS, the MaC shall set the IP System
_Broadcast Routing Mode of the router to “Enable” by sending an_
A_FunctionPropertyCommand(…) or A_FunctionPropertyExtCommand(…).

2. If the current Data Security sequence number of the device is not known, the MaC executes
DM_SecureSync_SBC (4.1) firstly.

3. The MaC sends an A_DomainAddressSerialNumber_Write with SerNo and DoANew, as SA_Data, with the SBC bit in SCF field set to 1, encrypted with the Tool Key.
If the MaC is on the same IP network, the Frame shall be sent as IP system broadcast;
otherwise, the Frame will be transformed to an IP system broadcast by the KNXnet/IP Router.

4. The MaS now shall execute a timer synchronisation procedure using the new routing multicast
address and Backbone Key. This can in general not be observed by the MaC [4][)] so the MaC shall
wait for the maximum time needed for the timer synchronisation.

5. To verify, the MaC shall wait for another 1 second and then repeatedly send an
A_IndividualAddressSerialNumber_Read with SerNo on broadcast until the MaS responds
with A_IndividualAddressSerialNumber_Response or the timeout elapses (see [01]
clause 4.3.5.3.4 “A_DomainAddressSerialNumber_Write”).

**Error handling**

If no A_IndividualAddressSerialNumber_Response in step 5 is received within the timeout, the MaC
shall firstly repeat from step 4 after a delay of 1 second.

If this entire Management Procedure fails, the MaC (ETS) shall not automatically repeat it. This may
only be repeated after indication or confirmation by the user.

4) E.g. if the MaC is on TP1


-----

#### 2.14 Procedures with A_DomainAddressSelective_Read
The Management Client (this is the local of Application Layer user) shall apply the A_DomainAddressSelective_Read.req primitive to read the KNX PL110 - or KNX RF DoA of one or more
devcies without using a specific Domain Address.

The type of network Resources that shall be read shall be indicated by field Type in the ASDU. The
following network Resources can be read.

   - Type 0: The Domain Address of one or more KNX PL110 MaS.
   - Type 1: The Domain Address of one or more KNX RF MaS.
This service is particularly used to check the existence of any open media devices with the specified
Domain Address in possibly neighbouring installations.

There is no common general behaviour specified for the MaS. The reaction of the MaS has to be
specified case per case. In case the MaS receives an A_DomainAddressSelective_Read-PDU with a
value of the field Type that it does not support, or with further service parameters for which no
reaction is specified, then the MaS shall not react.


###### 2.14.1.1 Type 00h – single octet DoA
The ASDU of the A_DomainAddressSelective_Read-PDU shall contain the following fields.

 - type: This shall be the type of call of the A_DomainAddressSelective_Readservice. This field shall have the value 00h.



- start_address: This shall be the start_address of the range of Individual Addresses to
which the Management Server shall compare its own Individual Address.



 - range: This shall be the range of Individual Addresses, starting from
start_address and ending at start_address + range to which a
Management Server shall compare its own Individual Address.

octet 8 octet 9 octet 10 octet 11 octet 12

start_address start_address
type = 00 domain_addres range

(high) (low)

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 0

**Figure 1 - A_DomainAddressSelective_Read-SDU – Type 00h (example)**

The Management Server shall ignore the A_DomainAddressSelective_Read.ind primitive with Type
00h, if its Domain Address does not match with the argument domain_address, or its Individual
Address is lower than the argument start_address or its Individual Address is higher than the
(start_address + range).

|octet 8|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 10|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 11|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 12|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|type = 00|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|domain_addres|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(high)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|start_address<br>(low)|range|range|range|range|range|range|range|range|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||||||||||||||||||
|0|0|0|0|0|0|0|0|||||||||||||||||||||||||||||||||


If Management Server accepts the A_DomainAddressSelective_Read.ind primitive it shall respond to
the Application Layer with an A_DomainAddress_Read.res primitive after a wait time:
(individual_address - start_address) x Tmedia[ 5)]. If the received argument range is lower than FFh and
the Management Server receives during the waiting time an A_DomainAddress_Response-PDU then
it shall terminate the transmission of its own response.

The A_DomainAddress_Response-PDU shall contain the fields Type and domain_address as show in
Figure 2.

5) Tmedia is specified in [05].


-----

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|type = 00h|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|domain_address|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|<br>                         6|<br>                          5|<br>                           4|<br>                            3|<br>                             2|<br>                              1|0|
|||||||APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|||||||||||||||||
|||||||1|1|1|1|1|0|0|0|1|0|||||||||||||||||


**Figure 2 - A_DomainAddress_Response-PDU for a type 0 (1 octet DoA) (example)**

###### 2.14.1.2 Type 01h – six octet DoA


2.14.1.2.1 General requirements
The ASDU of the A_DomainAddressSelective_Read-PDU shall contain the following fields.

 - type: This shall be the type of call of the A_DomainAddressSelective_Readservice. This field shall have the value 01h.



 - domain_address_start: This shall be the start_address of the range of Domain Addresses to

which the Management Server shall compare its own Domain Address.

 - domain_address_end: This shall be the end_address of the range of Domain Addresses to

which the Management Server shall compare its own Domain Address.

octet 8 octet 9 octet 14 octet 15 octet 20 octet 21


type = 01h domain_address_start domain_address_end reserved

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0


0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0

**Figure 3 - A_DomainAddressSelective_Read-SDU – Type 01h (example)**

|octet 8|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|type = 01h|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|domain_a|
|7|6|5|4|3|2|1|0|7|6|5|4|3|<br>             2|<br>              1|<br>               0|<br>|
||||||||||||||||||
|0|0|0|0|0|0|0|1||||||||||

|Col1|octet 14|Col3|Col4|Col5|Col6|Col7|Col8|Col9|octet 15|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|ress_start|ress_start|ress_start|ress_start|ress_start|ress_start|ress_start|ress_start|ress_start|domain_|domain_|domain_|domain_|domain_|domain_|domain_|domain_|domain_|
|<br>|<br> 7|<br>  6|<br>   5|4|3|2|1|0|7|6|5|4|3|<br>              2|<br>               1|<br>                0|<br>|
|||||||||||||||||||
|||||||||||||||||||

|Col1|octet 20|Col3|Col4|Col5|Col6|Col7|Col8|Col9|octet 21|Col11|Col12|Col13|Col14|Col15|Col16|Col17|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|dress_end|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|
|<br>|<br> 7|<br>  6|<br>   5|4|3|2|1|0|7|6|5|4|3|2|1|0|
||||||||||||||||||
||||||||||0|0|0|0|0|0|0|0|


The Management Server shall only accept the A_DomainAddressSelective_Read.ind primitive with
_Type 01h if its Domain Address is within the range domain_address_start to domain_address_end;_
else, it shall ignore the service.

If Management Server accepts the A_DomainAddressSelective_Read.ind primitive it shall respond to
the Application Layer with an A_DomainAddress_Read.res primitive after a random wait time from
0 s to 2 s.


EXAMPLE 1 To have an equal spreading of the responses, this random wait time may for instance be based on the least
significant octet to the KNX Serial Number of the Management Server device.

The A_DomainAddress_Response-PDU shall contain the fields Type and domain_address as show in
Figure 4.


octet 6 octet 7 octet 8 octet 13

APCI domain_address


7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 … 7 6 5 4 3 2 1 0

1 1 1 1 1 0 0 0 1 0

**Figure 4 - A_DomainAddress_Response-PDU for a type 1 (6 octet DoA) (example)**

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|do|do|do|do|do|do|do|do|do|do|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|||
|||||||APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI<br>APCI|||||||||||
|||||||1|1|1|1|1|0|0|0|1|0|||||||||||

|Col1|Col2|octet 13|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|ss|ss|ss|ss|ss|ss|ss|ss|ss|ss|
|||7|6|5|4|3|2|1|0|
|||||||||||
|||||||||||


-----

2.14.1.2.2 NM_DomainAddress_Scan2
**Use**

This Management Procedure shall be used by a Management Client to scan for the presence of any
devices with a 6 octet Domain Address that lies within a given range.


It returns whether or not there are any devices with a Domain Address in the scanned range. The
devices respond with their Individual Address in the Source Address field of the responses, so the
Individual Addresses are known by this as well. Additionally, on KNX RF, as the devices shall
respond in system broadcast communication mode, the AET shall be 0 and the response shall contain
the KNX Serial Number of the responding device. This is actually the key data retrieved by this
procedure.

The MaC shall not execute this Management Procedure with values of any DoA in which the MSB
differs from 00h.


**Used Application Layer Services for management**

- A_DomainAddressSelective_Read
(please note that this service responds with the A_DomainAddress_Response-PDU).


**Parameters of the Management Procedure**

NM_DomainAddress_Scan2(/* [in] */ mpp_DoA_start, /* [in] */ mpp_DoA_end,
/* [out] */ mmp_KNX_SN[],/* [out] */ mmp_IA[], /* [out] */ mpp_DoA_response[])


mpp_DoA_start: This shall be lower limit of the range of Domain Addresses in
which the presence of devices shall be searched.

mpp_DoA_end: This shall be upper limit of the range of Domain Addresses in
which the presence of devices shall be searched.

mpp_KNX_SN[]: This shall be the collection of all KNX Serial Number values that
have been used by the responding devices.


mpp_IA[]: This shall be the collection of all Individual Address values that
have been used by the responding devices.

mpp_DoA_response[]: This shall be the DoA with which the Management Server has
responded. There can be 0, 1 or multiple answers with the same
of different DoA-values.

The A_DomainAddressSelective_Read-PDU shall be transmitted with priority System.


Management
Client


Management
Server (device)

A_DomainAddressSelective_Read-PDU
(type = 01h, domain_address_start = mmp_DoA_start

domain_address_end = mpp_DoA_end)


If the Management Server finds the conditions for replying to the message fulfilled,

then it shall transmit a response.
A_DomainAddress_Response-PDU
(mpp_DoA_response= domain_address)


-----

#### 2.15 NM_Router_Scan
**Use**

This Network Management Procedure shall be used to determine what Routers are installed in a
network.

The Management Client shall try to build up a connection to each possible Router. To this, it shall
issue an A_Connect-PDU to each possible Router Individual Address. The Destination Address of this
A_Connect-PDU shall be composed of:

   - the Subnetwork Address field that shall start with 00h and be incremented by one for each
next transmission of the A_Connect-PDU, and
   - the Device Address field that shall have the fixed value 00h for each call of the
A_Connect-PDU.

In this way, 255 A_Connect-PDUs will be transmitted.

The Management Client shall collect all A_Disconnect-PDUs. All Routers from which an
A_Disconnect-PDU is received exist in the network.

For this procedure the Individual Address of the Routers and the Domain Address have to be
configured.

**Used Application Layer Services for Management**

  - A_Connect

**Variables**

SNA_Current: The current Subnetwork Address of the current Subnetwork in which the
presence of a Router is searched.

**Sequence**


Management
Client


Network /
Management
Server


remark


for (SNA_Current = 0; SNA_Current = 255; SNA_Current = SNA_Current+1)

A_Connect-PDU collect all received
(destination_address.SNA = SNA_Current; A_Disconnect-PDUs
destination_address.DA = 00h)

delay for 0,1 s

collect
A_Disconnect-PDU
(destination_address.SNA = SNA_Current;
destination_address.DA = 00h)

endfor

collect time-out: 6s after last sent
A_Disconnect-PDU A_Connect

|A Connect-PDU<br>_<br>(destination address.SNA = SNA Current;<br>_ _<br>destination address.DA = 00h)<br>_<br>delay for 0,1 s<br>collect<br>A Disconnect-PDU<br>_<br>(destination address.SNA = SNA Current;<br>_ _<br>destination address.DA = 00h)<br>_|Col2|
|---|---|
|<br>A_Connect-PDU<br>(destination_address.SNA = SNA_Current;<br>destination_address.DA = 00h)<br>delay for 0,1 s<br>collect<br>A_Disconnect-PDU<br>(destination_address.SNA = SNA_Current;<br>destination_address.DA = 00h)||

|collect<br>A Disconnect-PDU<br>_<br>(destination address.SNA = any;<br>_<br>destination address.DA = 00h)<br>_|Col2|
|---|---|
|collect<br>A_Disconnect-PDU<br>(destination_address.SNA = any;<br>destination_address.DA = 00h)||


-----

#### 2.16 NM_SubnetworkDevices_Scan
**Use**

This Network Management Procedure shall be used to determine which devices exist on a
Subnetwork.

The Management Client shall try to build up a connection using every possible correct Individual
Address in this Subnetwork. It shall collect all A_Disconnect-PDUs. All devices from which an
A_Disconnect-PDU is received shall be considered as existing on the Subnetwork.

For this procedure the Individual Address of the used Routers and the Domain Address have to be
configured.

**Used Application Layer Services for Management**

  - A_Connect

**Parameters of the Management Procedure**

NM_SubnetworkDevices_Scan(/* [in] */ SNA, /* [out] */ DA[])

SNA: Subnetwork Address of the Subnetwork in which the occupied
Individual Addresses are to be scanned.
DA[]: The collection of all Device Addresses of the devices discovered in
the investigated Subnetwork.

**Variables**

DA_Current: The current Device Address of which it will be checked whether a device
with this Device Address exists on the Subnetwork that is being checked.

**Sequence**


Management
Client


Network /
Management
Server


remark


for (DA_Current = 0; DA_Current = 255; DA_Current = DA_Current+1)

A_Connect-PDU
(destination_address.SNA =SNA,
destination_address.DA = DA_Current)

delay for 0,1 s

collect all
A_Disconnect-PDU()

The Device Address part of all possible received
A_Disconnect-PDUs shall be collected in DA[].

endfor

wait longer Transport Layer time-out (>6 s) after last

sent A_Connect-PDY

|A Connect-PDU<br>_<br>(destination address.SNA =SNA,<br>_<br>destination address.DA = DA Current)<br>_ _<br>delay for 0,1 s<br>collect all<br>A Disconnect-PDU()<br>_<br>ice Address part of all possible received<br>onnect-PDUs shall be collected in DA[].|Col2|
|---|---|
|<br>A_Connect-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>delay for 0,1 s<br>collect all<br>A_Disconnect-PDU()<br> ice Address part of all possible received<br>onnect-PDUs shall be collected in DA[].||


-----

#### 2.17 NM_SubnetworkDevices_Scan2
**Use**

This Network Management Procedure shall be used to determine which devices exist on a
Subnetwork.

The MaC shall to this one after the other address each possible Individual Address in the Subnetwork
by reading the Device Descriptor Type 0 with the service A_DeviceDescriptor_Read, using point-topoint connectionless communication mode. If the MaC does not receive a response within one second,
it shall repeat the request once and wait again for one second for a possible response.

- If the MaC receives a response then it shall assume that the tested IA is occupied.

- If the MaC receives no response, then it shall assume that the tested IA is not occupied.

For this procedure the Individual Address of the used Routers and the Domain Address have to be
configured.

**Used Application Layer Services for Management**

  - A_DeviceDescriptor_Read

**Parameters of the Management Procedure**

NM_SubnetworkDevices_Scan2(/* [in] */ SNA, /* [out] */ DA[])

SNA: Subnetwork Address of the Subnetwork in which the occupied
Individual Addresses are to be scanned.
DA[]: The collection of all Device Addresses of the devices discovered in
the investigated Subnetwork.

**Variables**

DA_Current: The current Device Address of which it will be checked whether a device
with this Device Address exists on the Subnetwork that is being checked.


-----

**Sequence**

Management
Client

**FOR (DA_Current = 0; DA_Current = 255; DA_Current = DA_Current+1)**

start time-out timer of 1 s

A_DeviceDescriptor_Read-PDU
(destination_address.SNA =SNA,
destination_address.DA = DA_Current)

A_DeviceDescriptor_Response-PDU

(DD0)

If the MaC receives a response, then it shall add SNA.DA to the list in
DA[].

**IF the timer expires without response THEN the MaC shall repeat the**
request one time.

start time-out timer of 1 s

A_DeviceDescriptor_Read-PDU
(destination_address.SNA =SNA,
destination_address.DA = DA_Current)

A_DeviceDescriptor_Response-PDU

(DD0)

If the MaC receives a response, then it shall add SNA.DA to the list in
DA[].

**ENDFOR**

**Constraints**


Network /
Management
Server


remark

If there is a MaS with IA = SNA.DA
then it will respond.

If there is a MaS with IA = SNA.DA
then it will respond.

|A DeviceDescriptor Read-PDU<br>_ _<br>(destination address.SNA =SNA,<br>_<br>destination address.DA = DA Current)<br>_ _<br>A DeviceDescriptor Response-PDU<br>_ _<br>(DD0)<br>C receives a response, then it shall add SNA.DA to the list in<br>er expires without response THEN the MaC shall repeat the<br>e time.<br>ime-out timer of 1 s<br>A DeviceDescriptor Read-PDU<br>_ _<br>(destination address.SNA =SNA,<br>_<br>destination address.DA = DA Current)<br>_ _<br>A DeviceDescriptor Response-PDU<br>_ _<br>(DD0)<br>MaC receives a response, then it shall add SNA.DA to the list in|Col2|
|---|---|
|A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  C receives a response, then it shall add SNA.DA to the list in<br>  er expires without response**THEN** the MaC shall repeat the<br> e time.<br> ime-out timer of 1 s<br>A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  MaC receives a response, then it shall add SNA.DA to the list in<br>||
|A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  C receives a response, then it shall add SNA.DA to the list in<br>  er expires without response**THEN** the MaC shall repeat the<br> e time.<br> ime-out timer of 1 s<br>A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  MaC receives a response, then it shall add SNA.DA to the list in<br>||


1. This procedure uses the connectionless communication mode for the service A_DeviceDescriptor_Read. This service will therefore give incomplete results if there are KNX devices in
the Subnetwork that do not support this service in connectionless communication mode.
2. Additionally, this procedure does not use the T_Connect-service. Devices that do not react to
A_DeviceDescriptor_Read but only negatively react to a T_Connect-PDU by sending a
T_Disconnect-PDU, will not be discovered with this procedure.

EXAMPLE 2 Certain KNX Profiles support multiple Individual Addresses in one device, like the KNXnet/IP Tunnelling
Server. These Additional IA may not be discovered.

3. The MaC shall only apply this Management Procedure if the target Subnetwork is of the KNX RF
Communication Medium.

#### 2.18 NM_IndividualAddress_Reset
**Use**

This Network Management Procedure shall be used to reset the Individual Address of one or more
devices in which Programming Mode is active to the default Individual Address FFFFh.

**Used Application Layer Services for Management**

  - A_IndividualAddress_Write

  - A_Restart


-----

  - A_IndividualAddress_Read

  - A_Connect

  - A_Disconnect

**Parameters of the Management Procedure**

This Management Procedure does not require any procedure parameters.

**Sequence**

Management Network / remark
Client Management

Server

repeat

reset Individual Address of all devices in which the Programming Mode is active

A_IndividualAddress_Write-PDU

(newaddress= FFFFh)

reset all devices with Individual Address FFFFh (deactivate Programming Mode)

A_Connect-PDU

()
destination_address= FFFFh

A_Restart-PDU

()
destination_address = FFFFh

A_Disonnect-PDU

()
destination_address = FFFFh

verify, that all devices are reset

A_IndividualAddress_Read-PDU

()

A_IndividualAddress_Response-PDU one or more responses may be

() received from different devices

...

until no A_IndividualAddress_Response-PDU is received

Do not evaluate any local confirmation, or received telegrams, except the
A_IndividualAddress_Read.Lcon and the A_IndividualAddress_Response-PDU.

#### 2.19 NM_IndividualAddress_Check

NOTE This procedure has also been named NM_IndividualAddress_Scan.

**Use**

This Network Management Procedure shall be used by a network Management Client to check
whether a given Individual Address is occupied on the network or not.

**Used Application Layer Services for Management**

  - A_Connect

  - A_DeviceDescriptor_Read

  - A_Disconnect

|hat all devices are reset|Col2|
|---|---|
|<br>A_IndividualAddress_Read-PDU<br>()<br>A_IndividualAddress_Response-PDU<br>()<br>...||
|<br>A_IndividualAddress_Read-PDU<br>()<br>A_IndividualAddress_Response-PDU<br>()<br>...||
|<br>A_IndividualAddress_Read-PDU<br>()<br>A_IndividualAddress_Response-PDU<br>()<br>...||


-----

**Parameters of the Management Procedure**

NM_IndividualAddress_Check(/* [in] */ IA_test, /* [out] */ result, /* [out] */ DDType,
/* [out] */ DDx)

IA_test: Individual Address of which the occupation on the network has to be tested.

result: Result back to the user of the Management Procedure to indicate whether the IA_test is
occupied on the network or not.

DDType: The Device Descriptor Type as reported by the device

DDx: The Device Descriptor value according the format DDType as reported by the device.

**Sequence**


Management
Client


Network /
Management
Server


remark


A_Connect-PDU
(destination_address = IA_test)

if negative A_Connect.Lcon ⇒ IA_test occupied; end procedure.
else (this is, a positive A_Connect.Lcon is received)

If the device that occupies the IA_test
does not support Transport Layer connections,

it shall send a T_Disconnect-PDU.
A_Disconnect-PDU

()

if A_Disconnect-PDU is received then IA_test shall be regarded as occupied; end procedure.
else (no A_Disconnect-PDU is received)

If a device that occupies IA_test is present on the network,

and does support Transport Layer connections,

it shall have no other reaction on the bus
than the Layer-2 acknowledge that initiates the above A_Connect.Lcon
The A_DeviceDescriptor_Read-PDU shall use DD0.

A_DeviceDescriptor_Read-PDU

(destination_address = IA_test,
descriptor_type = 0000h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

1), 2)

If the Management Client receives an A_DeviceDescriptor_Response-PDU it shall conclude that the Individual Address IA_test is
_occupied._
if no A_DeviceDescriptor_Response-PDU is received after time-out ⇒ IA_test is not occupied
endif
3) A_Disconnect-PDU
(destination_address = IA_test)

**Possible reactions**

1) If the Network Management Server reacts on the connection oriented
A_DeviceDescriptor_Read-PDU then the Management Client shall assume that the IA IA_test is
occupied on the network and that the device that occupies this IA_test supports the
connection-oriented Transport Layer.


-----

2) The descriptor_type and the device_descriptor in the response by the device shall be reported
back via DDType respectively DDx. The Device Descriptor Type may differ from 0 and the
format of the Device Descriptor may be encoded accordingly as well.

3) If the Network Management Client receives an A_Disconnect-PDU and no A_DeviceDescriptor_Response-PDU, then the Management Client shall assume that the IA_test is occupied
on the network and that the device that occupies this IA_test does not support the
connection-oriented Transport Layer.

#### 2.20 Procedures with A_SystemNetworkParameter_Read

###### 2.20.1.1 Introduction (informative)
This procedure shall be the alternative to the procedure NM_NetworkParameter_Read_R on system
broadcast communication mode.

###### 2.20.1.2 General Procedure
**Precondition**

This procedure shall be executed on system broadcast communication mode. This service is designed
for the management (discovery, setting and diagnostics) of KNX open medium specific parameters.
This is typically done at the beginning of the Configuration, when the Individual Addresses of the
devices in the communication path between MaC and MaS have not yet been established. It is thus not
possible to execute the procedure “Discovery of maximal Frame length” as specified in [06]. If using
this procedure, the MaC shall thus make sure that the size request – and response-PDUs remains
limited to an APDU of 14 octets at maximum.

**Use**

The MaC shall use this Management Procedure to find if a system- or device parameter of a given type
and value is used in the network or not, using system broadcast communication mode on KNX open
media.

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read

The ASDU of the A_SystemNetworkParameter_Read-PDU shall contain the following fields.

 - object_type: Value that shall be used by the MaC for the subfield object_type of the
field parameter_type of the A_SystemNetworkParameter_Read-PDU.

 - PID: Value that shall be used by the MaC for the subfield PID of the field
parameter_type of the A_SystemNetworkParameter_Read-PDU.

 - test_info: Value that shall be used by the MaC for the field test_info of the
A_SystemNetworkParameter_Read-PDU.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11 ... n
APCI parameter_type test_info
object_type PID reserved operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 0 0 0 0 0

**Figure 5 - A_SystemNetworkParameter_Read-PDU (example)**

The conditions for the MaS to respond to this service depend on the specific use and are given in the
detailed procedures below.

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11 ... n|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|reserved|reserved|reserved|reserved|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|||||||||


-----

- If the MaS receives an A_SystemNetworkParameter_Read PDU of which it does not support any
of the service parameters (object_type, PID or further) or the reaction for these service parameters
is not specified, then it shall not react.

- If the MaS finds the conditions for replying are not fulfilled, this is if the check of its investigated
parameters against the test information is negative, then it shall ignore the service.

- If the MaS does accept the service, it shall respond with an A_SystemNetworkParameter_Read.res
primitive after a random wait time. This random wait time is specified either per parameter_type
in the detailed procedures below; additionally or alternatively, it is possible that the random wait
time is communication by the MaC as part of the test_info. The data in the response shall depend
on the network parameter type being read. The TSDU shall be an
A_SystemNetworkParameter_Response-PDU as shown in Figure 6.

- The MaC shall not call this service with any service parameters (parameter_type, test_info) that
are not specified in this paper.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 1 1 1 0 0 1 0 0 1

octet 12 ... n octet n + 1 ... m
test_info
test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

**Figure 6 - A_SystemNetworkParameter_Response-PDU (example)**

###### 2.20.1.3 Overview of the accepted usage (informative)
All values are decimal, unless indicated otherwise. Indexes denote the bit length.

 - **NM_Read_SerialNumber_By_ProgrammingMode**

To read the KNX Serial Numbers of all devices in which Programming Mode is active.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **01h**
The MaS shall respond only if its Programming Mode
is active.
test_result: KNX Serial Number of responder
random wait time: constant: 0 s to 1 s

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||||||

|octet 12 ... n|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet n + 1 ... m|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|test_result|test_result|test_result|test_result|test_result|test_result|test_result|test_result|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||
|||||||||||||||||


-----

 - **NM_Read_SerialNumber_By_ExFactoryState**

To discover the devices in the network that have the factory default Domain Address and the
factory default Individual Address.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **02h**
The MaS shall respond only if its Domain Address and
its Individual address both have their factory default
value.
**wait_time:** 1 octet: random wait time expressed in seconds (0 s
to 255 s).
Pending responses can be cancelled. Please check
the specification of NM_Read_SerialNumber_By_ExFactoryState.
test_result: KNX Serial Number of responder
random wait time: variable: contained in test_info

 - **NM_Read_SerialNumber_By_PowerReset**

To discover the devices in the network of that have just been powered off and on again.
object_type: Device Object
PID: 11 (PID_SERIAL_NUMBER)
test_info: **operand:** **03h**
The MaS shall respond only if it has just been
powered on.
**wait_time:** 1 octet: random wait time expressed in seconds (0 s
to 255 s).
Pending responses can be cancelled. Please check
the specification of NM_Read_SerialNumber_By_PowerReset.
test_result: KNX Serial Number of responder
random wait time: variable: contained in test_info

 - **Manufacturer specific use of A_SystemNetworkParameter_Read**

To perform manufacturer specific operations on system broadcast communication mode.
object_type: any Interface Object Type: manufacturer and use specific
PID: any Property Identifier: manufacturer and use specific
test_info: **operand:** **FEh**
The use and response conditions are implementation
specific.
**manufacturer_id:** Manufacturer Code of the MaS that may react to the

service.
The test_info may contain additional implementation specific fields.
test_result: manufacturer and use specific
random wait time: manufacturer and use specific
The cancellation of pending responses is optionally possible; the methods
are implementation specific without further requirements.

Other tests will be added in the future when needed.

###### 2.20.1.4 Detailed procedure 1 – NM_Read_SerialNumber_By_ProgrammingMode
**Use**

This Network Management Procedure shall be used to read the KNX Serial Number of devices in
which Programming Mode is active.

This procedure shall use system broadcast communication mode and is by that independent of the
configuration of the Domain Addresses and the Individual Addresses of the devices and the (Media)
Couplers.


-----

If the expected device is an IP device supporting IP System Broadcast, then, if there is a KNXnet/IP
Router between the MaC and the MaS, the MaC sets the IP System Broadcast Routing Mode of the
router to “Enable” by sending an A_FunctionPropertyCommand(…) or
A_FunctionPropertyExtCommand(…). The Management Procedure shall then continue as below. In
situations where it is not known beforehand if the device(s) in which Programming Mode is “enabled”
support IP system broadcasts, or if also non-IP devices need to be found, the procedure shall be
executed once with - and once without step 1.

The test_info shall consist of a single octet operand 01h.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12
test_info
operand
7 6 5 4 3 2 1 0

01h

**Figure 7 - A_SystemNetworkParameter_Read-PDU**
**with NM_Read_SerialNumber_By_ProgrammingMode**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 18
test_info test_result
operand
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

01h KNX Serial Number

**Figure 8 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_ProgrammingMode**

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read

**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read in this service, if its Programming
Mode is active.

The random wait time for responding in this procedure shall be between 0 s and 1 s.

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|
|7|6|5|4|3|2|1|0|
|01h|01h|01h|01h|01h|01h|01h|01h|
|||||||||
|||||||||

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|<br>                     2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|_<br>operand|||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|01h|01h|01h|01h|01h|01h|01h|01h|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
|||||||||||||||||||
|||||||||||||||||||

|Col1|Col2|octet 18|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||


-----

**Parameters of the Management Procedure**

NM_Read_SerialNumber_By_ProgrammingMode(/* [out] */ mpp_KNX_Serial_Number[])


mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that respond
to this procedure, that is, in which Programming Mode is active.
This Management Procedure does not have input parameters.

The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.


Management
Client


Management
Server (device)


A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 01h)


If Programming Mode is active in the MaS, then the MaS shall respond with the KNX Serial Number of the MaS

in the response, else, the MaS shall ignore the service.
A_SystemNetworkParameter_Response-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 01h,
test_result = KNX Serial Number)

NOTE 3 The value 01h of test_info identifies this specific use of A_SystemNetworkParameter_Read with the PID_SERIAL_NUMBER. It shall not be mistaken for a comparison between the state of the Programming Mode (‘1’ = ‘active’) and the value
01h.


###### 2.20.1.5 Detailed procedure 2 – NM_Read_SerialNumber_By_ExFactoryState
**Use**

This Network Management Procedure shall be used to scan for devices in the network of which both
the Domain Address (if available) and the Individual Address have their factory default value.


The factory default values are specified here:

   - for the DoA Realisation Type 1 (2 octets): in [18] clause 2.4.4.3.2.1.4 “Default
value and Master Reset” in the
specification of PID_PL110_DOA

   - for the DoA Realisation Type 2 (6 octets): in [05] clause 3.2.4



     - for the Individual Address: in [05] clause 3.3

This procedure shall use system broadcast communication mode and is by that independent of
the configuration of the Domain Addresses and the Individual Addresses of the devices and the
(Media) Couplers.


**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Read


**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read-PDU in this service, if both its
Domain Address (if available) and its Individual Address have the factory default value.


-----

The random wait time for responding in this procedure shall be variable and shall be contained in the
field wait_time in the A_SystemNetworkParameter_Read-PDU as specified in Figure 9.

If the MaS concludes on responding to this service request, then it shall delay its response until a
random time in the period from 0 s to the number of seconds as indicated in the wait_time in the
request.

- If during this delay the MaS receives a next A_SystemNetworkParameter_Read-PDU with the
same parameters (object_type, PID and operand), but with the random wait time equal to 255
(FFh), then it shall cancel its response and not send an A_SystemNetworkParameter_Response
PDU.

- If however the delay has already elapsed and the MaS has already requested the transmission of its
request, then there are no further requirements.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13
test_info
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

02h

**Figure 9 - A_SystemNetworkParameter_Read-PDU**
**with NM_Read_SerialNumber_By_ExFactoryState**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 14 octet 19
test_info test_result
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

02h KNX Serial Number

**Figure 10 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_ExFactoryState**

NM_Read_SerialNumber_By_ExFactoryState(/* [out] */ mpp_KNX_Serial_Number[])

mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that
respond to this procedure, that is, which have the factory default
DoA and IA.
This Management Procedure does not have input parameters.

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|02h|02h|02h|02h|02h|02h|02h|02h|||||||||
|||||||||||||||||
|||||||||||||||||

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|<br>                     2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 14|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|02h|02h|02h|02h|02h|02h|02h|02h|||||||||KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
|||||||||||||||||||||||||||
|||||||||||||||||||||||||||

|Col1|Col2|octet 19|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||


-----

The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.


Management
Client

**Risks**


Management
Server (device)
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER, test_info = operand

02h + random_wait_time)

If MaS has the factory default DoA (if available) and the factory default IA,

then the MaS shall respond with the KNX Serial Number of the MaS in the
response, else the MaS shall ignore the service. The response shall be sent at a

random time in between 0 s and wait_time.
start random wait
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER, test_info = operand

02h + random_wait_time = 255)

If during the random wait period an identical request is received with the field

random_wait_time = 255, then the MaS shall not respond.

end random wait
If the random wait time elapses with a 2[nd] identical request with
random_wait_time = 255 is received, then the MaS shall request the

transmission of its response.
A_SystemNetworkParameter_Read-PDU
(operand = 02h, object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info =operand 02h + random_wait_time,
test_result = KNX Serial Number)



- As this procedure uses system broadcast communication mode, if there are devices in ex-factory
state outside the managed network, in neighbouring networks, these will respond as well.

###### 2.20.1.6 Detailed procedure 3 – NM_Read_SerialNumber_By_PowerReset
**Use**

This Network Management Procedure shall be used to scan for devices in the network of which have
just been powered on.

This procedure shall help identifying and addressing “inaccessible devices”.

Opposite to the procedure NM_Read_SerialNumber_By_ExFactoryState, this procedure requires a
human activity on the device and therefore has a better probability of excluding devices in neighbouring installations.

This procedure shall use system broadcast communication mode and is by that independent of the
configuration of the Domain Addresses and the Individual Addresses of the devices and the (Media)
Couplers.

**Used Application Layer Services for Management**

  - A_DomainAddressSelective_Read


-----

**Requirements to the MaS (device)**

The MaS shall only reply to the A_SystemNetworkParameter_Read-PDU in this service, if it has been
powered on since less than 4 minutes. After 4 minutes, the device shall no longer react to this service
with this operand. To these 4 minutes, there may be a tolerance of 30 seconds.

Additionally, the MaS shall not react if it has already replied to a preceding request since it has last
powered on. This requires that the MaS keeps track of this.

If the MaS concludes on responding to this service request, then it shall delay its response until a
random time in the period from 0 s to the number of seconds as indicated in the wait_time in the
request.

- If during this delay the MaS receives a next A_SystemNetworkParameter_Read-PDU with the
same parameters (object_type, PID and operand), but with the random wait time equal to 255
(FFh), then it shall cancel its response and not send an A_SystemNetworkParameter_Response
PDU.

- If however the delay has already elapsed and the MaS has already requested the transmission of its
request, then there are no further requirements.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13
test_info
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

03h

**Figure 11 - A_SystemNetworkParameter_Read-PDU**
**(Domain Parameter Read) with NM_Read_SerialNumber_By_PowerReset**

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object PID_SERIAL_NUMBER

0 1 1 1 0 0 1 0 0 1 0 0 0 0

octet 12 octet 13 octet 14 octet 19
test_info test_result
operand random wait time
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 1 0 7 6 5 4 3 2 1 0

03h KNX Serial Number

**Figure 12 - A_SystemNetworkParameter_Response-PDU**
**with NM_Read_SerialNumber_By_PowerReset**

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|03h|03h|03h|03h|03h|03h|03h|03h|||||||||
|||||||||||||||||
|||||||||||||||||

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|<br>                     2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|PID_SERIAL_NUMBER|||||
|||||||0|1|1|1|0|0|1|0|0|1|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 14|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|||||||||||
|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>operand|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|<br>random wait time|||||||||||
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|
|03h|03h|03h|03h|03h|03h|03h|03h|||||||||KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|KNX|
|||||||||||||||||||||||||||
|||||||||||||||||||||||||||

|Col1|Col2|octet 19|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||
|||||||||||
|1|0|7|6|5|4|3|2|1|0|
|ber|ber|ber|ber|ber|ber|ber|ber|ber|ber|
|||||||||||
|||||||||||


-----

**Requirements to the MaC**

The MaC shall send the A_SystemNetworkParameter_Read-PDU in this procedure
NM_Read_SerialNumber_By_PowerReset and repeat every 30 s during 4 minutes. It shall collect all
the answers that arrive.

EXAMPLE 3 It is possible that the installer resets the MaS firstly and that the MaS completes its power up
procedure before the installer triggers the procedure on the MaC (ETS). In this case, the MaS
(device) will react immediately.

A_SystemNetworkParameter_Read-PDU

MaC

t

A_SystemNetworkParameter_Response-PDU

MaS

t

**Figure 13 – The MaC triggers the procedure**
**well after the MaS completes its power up**

EXAMPLE 4 If the installer firstly triggers the procedure on the MaC (ETS) and then only resets the power of
the MaS, then the MaS will not react.

A_SystemNetworkParameter_Read-PDU

MaC

t

The MaS has not The MaS is restarjust powered and ting and does not
does not respond. receive the request.

MaS

t

**Figure 14 – The MaC triggers the procedure**
**before the MaS completes its power up**

Therefore, the MaC shall repeat the A_ SystemNetworkParameter_Read-PDU with a period of
30 s.

A_SystemNetworkParameter_Read-PDU

MaC

t

A_SystemNetworkParameter_Response-PDU

MaS

t

**Figure 15 – The MaC repeats the request periodically. The MaS responds**
**on the first request that it receives after power up.**

To make sure that the MaS reacts, the MaC repetition period shall be sufficiently smaller (30 s) than
the after powering up during which the MaS reacts to the request.

|MaS|Col2|Col3|Col4|
|---|---|---|---|

|MaC|Col2|Col3|
|---|---|---|
||||
|||t|
|MaS <br>The MaS has not<br>just powered and<br>does not respond. <br>The MaS is<br>ting and doe<br>receive the r|MaS <br>The MaS has not<br>just powered and<br>does not respond. <br>The MaS is<br>ting and doe<br>receive the r|restar-<br>  s not<br>  equest.|
|MaS <br>The MaS has not<br>just powered and<br>does not respond. <br>The MaS is<br>ting and doe<br>receive the r|||

|MaC|Col2|Col3|
|---|---|---|
|MaC|MaC||
|MaS|MaS|t <br>A_SystemNetworkParameter_Re|
|MaS|||
|||t|


The MaS has not
just powered and
does not respond.


A_SystemNetworkParameter_Response-PDU


A_SystemNetworkParameter_Read-PDU


A_SystemNetworkParameter_Read-PDU


MaS


MaC


MaC


t


t


t


-----

NM_Read_SerialNumber_By_PowerReset(/* [out] */ mpp_KNX_Serial_Number[])

mpp_KNX_Serial_Number[] This shall be the list of KNX Serial Numbers of devices that
respond to this procedure, that is, which are powered up in the
preceding 4 minutes.
This Management Procedure does not have input parameters.


The A_SystemNetworkParameter_Read-PDU shall be transmitted with priority System.


Management
Client

**Risks**


Management
Server (device)


A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h + random_wait_time)


If MaS is powered up in the last 4 minutes, then the MaS shall respond with

the KNX Serial Number of the MaS in the response, else, the MaS shall
ignore the service. The response shall be sent at a random time in between 0 s

and wait_time.
start random wait
A_SystemNetworkParameter_Read-PDU

(object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h + random_wait_time = FFh)

If during the random wait period an identical request is received with the field

random_wait_time = 255, then the MaS shall not respond.

end random wait
If the random wait time elapses with a 2[nd] identical request with
random_wait_time = 255 is received, then the MaS shall request the

transmission of its response.
A_SystemNetworkParameter_Read-PDU

(test_info = operand = 02h,
object_type = Device Object,
PID = PID_SERIAL_NUMBER,
test_info = operand 03h + random_wait_time,
test_result = KNX Serial Number)



- As this procedure uses system broadcast communication mode, in the unlikely case that also
devices outside the managed network, in neighbouring networks have just been powered on, these
will respond as well.


-----

###### 2.20.1.7 Operand FEh – Manufacturer specific use of A_SystemNetworkParameter_Read
This procedure shall be used for manufacturer specific Network Configuration Procedures.

This allows for the manufacturer specific support of A_SystemNetworkParameter_Read

   - for standard Properties for which no standard use of A_SystemNetworkParameter_Read is
specified, and
   - for non-standard Interface Objects and - Properties.

In the A_SystemNetworkParameter_Read-PDU, the ASDU shall be composed of the Interface Object
Type, the PID, the operand FEh and the 2 octet manufacturer code; further manufacturer specific
service parameters may follow.

The A_SystemNetworkParameter_Read-PDU for manufacturer specific use shall thus be formatted as
specified in Figure 16.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11
APCI parameter_type test_info
object_type PID reserved
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Device Object

0 1 1 1 0 0 1 0 0 0 0 0 0 0

octet 12 octet 13 octet 14 (octet 15 to n)
test_info
operand manufacturer code …
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

FEh

**Figure 16 - A_SystemNetworkParameter_Read-PDU – Type FEh (example)**

The A_SystemNetworkParameter_Response-PDU for this operand FEh shall repeat all the fields of
the A_SystemNetworkParameter_Read-PDU which may be followed by further manufacturer specific
response fields.

There are no further requirements concerning fields, use or timing for this manufacturer specific use. It
is allowed to foresee the cancellation of pending responses by implementation specific means.

#### 2.21 Procedures with A_SystemNetworkParameter_Write

###### 2.21.1.1 General Procedure
**Precondition**

This procedure shall be executed on system broadcast communication mode. This service is mainly
designed for the management (discovery, setting and diagnostics) of KNX open medium specific
parameters. This is typically done at the beginning of the Configuration, when the Individual
Addresses of the devices in the communication path between MaC and MaS have not yet been
established. It is thus not possible to execute the procedure “Discovery of maximal Frame length” as
specified in [06]. If using this procedure, the MaC shall thus make sure that the size request – and
response-PDUs remains limited to an APDU of 14 octets at maximum.

**Use**

The MaC shall use this Management Procedure to set a system – or device parameter of a given type
to a given value, using system broadcast communication model on KNX open media.

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|APCI|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|testinfo|testinfo|testinfo|testinfo|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|<br>PID|_<br>reserved|_<br>reserved|_<br>reserved|_<br>reserved|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|_<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|Device Object|||||||||||||||||
|||||||0|1|1|1|0|0|1|0|0|0|||||||||||||||||||||||||||||0|0|0|0|

|octet 12|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 13|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 14|Col18|Col19|Col20|Col21|Col22|Col23|Col24|(octet 15 to n)|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|operand|operand|operand|operand|operand|operand|operand|operand|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|_<br>manufacturer code|…|…|…|…|…|…|…|…|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|FEh|FEh|FEh|FEh|FEh|FEh|FEh|FEh|||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||


-----

**Used Application Layer Services for Management**

  - A_SystemNetworkParameter_Write

The ASDU of the A_SystemNetworkParameter_Write-PDU shall contain the following fields.

 - object_type: Value that shall be used by the MaC for the subfield object_type of the
field parameter_type of the A_SystemNetworkParameter_Write-PDU.

 - PID: Value that shall be used by the MaC for the subfield PID of the field
parameter_type of the A_SystemNetworkParameter_Write-PDU.

 - value: Value that shall be used by the MaC and that shall be interpreted by the
MaS when accessing the Property indicated in the object_type and PID.

###### 2.21.1.2 Overview of the accepted usage (informative)
All values are decimal, unless indicated otherwise. Indexes denote the bit length.

 - **Keep the bidrectional mode actwive in more than one KNX RF S-Mode device**

To keep the bidirectional model enabled in KNX RF S-Mode semi-directional devices
object_type: RF Medium Object
PID: 60 (PID_RF_BIDIR_TIMEOUT)
value: New value for the bidirectional mode time-out timer.

Please refer to the specification of PID_RF_BIDIR_TIMEOUT in [17]In case the MaC is requested to
perform the Network – and Device Configuration Procedures of multiple KNX RF S-Mode devices
together, then it may happen that, while the MaC is handling one device, the bidirectional mode time
out in one or more other devices. To prevent from this, the MaC may keep the bidirectional mode
enabled by accessing PID_RF_BIDIR_TIMEOUT over system broadcast communication.

/* Set the Bidirectional Mode Time-out in all semi-directional devices */
/* in which bidirectional mode is currently enabled. */
A_SystemNetworkParameter_Write(object_type = “RF Medium Object”, PID = PID_RF_BIDIR_TIMEOUT,

value = “new bidirectional mode time-out”)

The MaC shall set the value of the new bidirectional mode time-out to a value that it estimates to need
before it can handle the first next device (in point-to-point communication). This action may be
repeated as long as necessary to keep the bidirectional mode enabled in further devices.

#### 2.22 Procedures with A_NetworkParameter_Write

##### 2.22.1 NM_NetworkParameter_Write_R 
**Use**

This Management Procedure shall be used by a Management Server to report the value of a parameter
related to network configuration to any interested communication partner.

**Used Application Layer Services for Management**

 - A_NetworkParameter_Write


-----

**Parameters of the Management Procedure**

NM_NetworkParameter_Write_R(/* [in] */ ASAP, /* [in] */ comm_mode,
/* [in] */ hop_count_type_req, /* [in] */ object_type, /* [in] */ PID, /* [in] */ priority, /* [in] */ value)

ASAP: The parameter ASAP shall only be evaluated if the parameter
comm_mode equals point-to-point connectionless. It shall in this case
contain the Individual Address of the communication partner to which
the A_NetworkParameter_Write-PDU shall be sent.

comm_mode: Communication mode that shall be used by the Management Server
for transmission of the A_NetworkParameter_Write-PDU. It can be
− point-to-all-points connectionless (this is broadcast), or
− point-to-point connectionless.

hop_count_type_req: Value of the hop_count that shall be used to transmit the
A_NetworkParameter_Write-PDU.
NOTE This value shall be fixed in function of the specific Property of which the value
shall be reported via this Management Procedure as specified in [05].

object_type: Value that shall be used by the Management Server for the subfield
object_type of the field parameter_type of the
A_NetworkParameter_Write-PDU.

PID: Value that shall be used by the Management Server for the subfield
PID of the field parameter_type of the
A_NetworkParameter_Write-PDU.

priority: The priority that shall be used for the transmission of the
A_NetworkParameter_Write-PDU.

value: This shall be the contents of the field value of the
A_NetworkParameter_Write-PDU.

The A_NetworkParameter_Write-PDU shall be transmitted with priority System.

**Sequence**


Management
Client


Management
Server


remark


A_NetworkParameter_Write-PDU
(ASAP, comm_mode, hop_count_type_req,, priority,
object_type, PID, priority, value)


-----

##### 2.22.2 Overview of accepted usage of A_NetworkParameter_Write

 - **NM_NetworkParameter_Write_R**

Abstract procedure to report or set the value of a network parameter.
This is only a model, not a real Management Procedure. Do not use this like this in real life.
intended sender: not specified (abstract procedure)
intended receiver: not specified (abstract procedure)
specification: clause 2.22.1
test: Chapter 8/3/7 “AIL and Management Tests” ([13] clause 2.19.1)
ASAP: not specified (abstract procedure)
comm_mode request not specified (abstract procedure)
hop_count_type_req: not specified (abstract procedure)
object_type: not specified (abstract procedure)
PID: not specified (abstract procedure)
priority: system
value: not specified (abstract procedure)

 - **NM_IndividualAddress_Check_LocalSubNetwork**

The procedure shall be used by a Management Client to check whether a given Individual
Address is occupied on the Subnetwork where it is itself located (the “local” Subnetwork)
intended sender: E-Mode Client (device, controller)
intended receiver: E-Mode device
specification: clause 2.22.3
test: No test specifications are available.
ASAP: IA that is tested
comm_mode request point-to-point connectionless
hop_count_type_req: 0
object_type: 0000h = Device Object
PID: 61 = PID_ADDR_CHECK
priority: system
value: 00h

 - **NM_IndividualAddress_SerialNumber_Report**

This Management Procedure shall be used by a Management Server in order to announce its
(new) Individual Address.
intended sender: E-Mode device
intended receiver: Other E-Mode devices
specification: clause 2.22.4
test: No test specifications are available. (Subnetwork Address
Assignment is optional for all Profiles.)
ASAP: not applicable (broadcast)
comm_mode request broadcast
hop_count_type_req: Network Layer parameter
object_type: 0000h = Device Object
PID: 60 = PID_ADDR_REPORT
priority: system
value: KNX Serial Number of the sender


-----

 - **SNA update on IA change**
**SNA update on power-up**
**SNA heart beat**
**SNA update on SNA inconsistency**
“SNA update on IA change” is a procedure executed by the Router, in which it shall update the
SNA on its secondary side if the Router’s own Individual Address changes.
intended sender: Coupler
intended receiver: E-Mode devices
Coupler Model 2.0
specification:
test:

**Spec** **Test**
**Ch. 3/5/3** **Part 9/3**

**Procedure** **[06]** [15]

**SNA update on IA change** §1.3.4 §4.7.5.3
**SNA update on power-up** §1.3.5 §4.7.5.3 (nr. 5)
**SNA heart beat** §1.3.6 §4.7.5.3 (nr. 6)
**SNA update on SNA inconsistency §1.3.7** §4.7.5.5
§4.7.5.6

NOTE 4 This is actually always the same “Management Procedure” (actually only
a single Telegram) that is triggered for different reasons.

NOTE 5 §4.7.5.1 in [15] tests the SNA Read.

ASAP: not applicable (broadcast communication mode)
comm_mode request broadcast
hop_count_type_req: 0
object_type: 0000h = Device Object
PID: 57 = PID_SUBNET_ADDR
priority: system
value: Router.SNA

 - **PB-Mode Configuration Procedures**

This makes intense use of A_NetworkParameter_Write.
This is not documented here in further detail.

##### 2.22.3 NM_IndividualAddress_Check_LocalSubNetwork
**Use**

The procedure shall be used by a Management Client to check whether a given Individual Address is
occupied on the Subnetwork where it is itself located (the “local” Subnetwork).

To check whether an Individual Address is occupied on a local Subnetwork the Management Client
shall transmit an A_NetworkParameter_Write-PDU on point-to-point connectionless communication
mode addressed at the Individual Address PPPP under test.

The result of this check will be Occupied or NotOccupied.

In order to have this procedure not perturb any other Subnetwork than the one on which the
Management Client is mounted, the A_NetworkParameter_Write-PDU shall be sent with the
parameter hop_count = 0, so that Routers do not pass this message.

The Subnetwork Address is assumed to be set.

**Individual Address handling during the procedure**

The Source Address in the A_NetworkParameter_Write-PDU used in the below sequence shall be set
to the current Individual Address of the device, this is the one stored in NVRAM. During the
procedure, the device shall acknowledge every telegram sent to this current Individual Address.

|Procedure|Spec|Test|
|---|---|---|
|**Procedure **|<br>**Ch. 3/5/3**<br>**[06] **|<br>**Part 9/3**<br>[15]|
|<br>**SNAupdate on IAchange**|<br>§1.3.4|<br>§4.7.5.3|
|<br>**SNAupdate on power-up**|§1.3.5|§4.7.5.3 (nr.5)|
|<br>**SNA heart beat**|§1.3.6|§4.7.5.3 (nr.6)|
|<br>**SNA update on SNA inconsistency**|§1.3.7|§4.7.5.5<br>§4.7.5.6|
||||


-----

At that time, the Individual Address PPPP checked is not valid for the device. So the device shall not
acknowledge any telegram sent to this Individual Address PPPP.

**Possible situations and reactions during the Management Procedure**

According to the specification of the Data Link Layer, the user layer of the MAC layer will receive an
L_Data.con with the possible values of the parameter l_status:

  - _ok_

  - _not_ok._

- Value ok means that a Layer-2 acknowledge has been received and that the Individual Address is
occupied.

- Value not_ok means that:

  - a BUSY-acknowledge is received (on TP 1 only): there is a Management Server (device) that
occupies the Individual Address that is checked but for internal reasons it cannot handle the
frame transporting the A_NetworkParameter_Write-PDU.

  - a NACK-acknowledge is received (on TP 1 only): due to frame errors the frame transporting
the A_NetworkParameter_Write-PDU has not been interpreted.

  - absence of acknowledge. This case demonstrates that the Individual Address is not occupied at
this moment.

The probability that the flag l_status is set to not_ok, due to BUSY- or NACK-acknowledges,
after the specified Layer-2 repetitions, can be neglected compared to the probability that this
value not_ok is caused by the absence (no acknowledge) of a Layer-2 acknowledge. Therefore,
the value not_ok shall always lead to the conclusion that the checked Individual Address is free.
The cases where this is caused by unsuccessful transmission including BUSY and NACK
retransmissions shall be recovered from by a constant Individual Address conflict detection
procedure of the Configuration Mode that uses
NM_IndividualAddress_Check_LocalSubnetwork.

**Used Application Layer Services for Management**

 - A_NetworkParameter_Write

**Inputs**

    - PPPP: Individual Address of which the occupation on the Subnetwork has to be tested.


-----

**Sequence**

Management

Client

A_NetworkParameter_Write-PDU
(ASAP = PPPP, comm_mode = point-to-point connectionless,
hop_count_type = 0, object_type = 0 = Device Object,
Property_id = PID_ADDR_CHECK = 61, priority = system,
value = 00h)

The value of a_status in the local confirmation of the
A_NetworkParameter_Write-service will depend on the occupancy of
PPPP on the Subnetwork.

A_NetworkParameter_Write.Lcon
(ASAP = PPPP, comm_mode = point-to-point connectionless,
hop_count_type = 0, object_type = 0 = Device Object,
Property_id = PID_ADDR_CHECK = 61, priority = system,
value = 00h,
a_status)

If a_status = OK then IA PPPP Occupied
_else IA PPPP is Not Occupied_


Management
Server remark


##### 2.22.4 NM_IndividualAddress_SerialNumber_Report
**Use**

This Management Procedure shall be used by a Management Server in order to announce its (new)
Individual Address. The Management Server shall be identified by its KNX Serial Number.

The communication mode shall be broadcast. The hop_count_type shall be the default Network Layer
value. The priority shall be set to “system”.

NOTE Most E-Mode devices that support this Management Procedure will have a KNX Serial Number and may report.

**Used Application Layer messages for Management**

 - A_NetworkParameter_Write

**Parameters of the Management Procedure**

NM_IndividualAddress_SerialNumber_Report(Device_SN)

Device_SN KNX Serial Number of the device that reports its Individual Address

**Sequence**


Management

Client


Management
Server remark


-----

#### 2.23 Procedures with A_NetworkParameter_Read

##### 2.23.1 General Procedure: NM_NetworkParameter_Read_R
**Precondition**

The use of the point-to-point connectionless communication mode for the response requires the
preceding correct configuration of Individual Address in the communication path between requester
and receiver(s). This shall be guaranteed by other preceding Management Procedures.

**Risks**

The MaC shall use this Management Procedure with care, considering the following criteria for the
responses.

a) The number of expected responding devices.
b) The communication mode of the response: point-to-point connectionless or broadcast.
c) The hop count of the response: 0, 6 or 7.

Improper use of this service may lead to very high and high busload in the local Subnetwork, all over
the KNX installation, in the communication path between requester and responder(s) and on the Mainand Backbone Lines. The resulting bandwidth may for a short - or longer time hamper the runtime
communication and may also make that responses to this service are lost.

Because of this, this service shall only be supported and be used as specified in the KNX
Specifications.

**Use**

This Management Procedure shall be used by a Management Client to find if a system- or device
parameter of a given type and value is used in the network or not.

**Used Application Layer Services for Management**

  - A_NetworkParameter_Read

**Parameters of the Management Procedure**

NM_NetworkParameter_Read_R(/* [in] */ ASAP, /* [in] */ hop_count_type_req,
/* [in] */ object_type, /* [in] */ PID, /* [in] */ test_info, /* [in] */ comm_mode_req,
/* [in] */ comm_mode_res, /* [in] */ hop_count_type_res, /* [out] */ result_data[])

ASAP: The parameter ASAP shall only be evaluated if the parameter
comm_mode_req equals point-to-point connectionless. It shall in this
case contain the Individual Address of the communication partner to
which the A_NetworkParameter_Read-PDU shall be sent.

hop_count_type_req: Value of the hop_count that shall be used by the Management Client
for the transmission of the A_NetworkParameter_Read-PDU.
NOTE This value shall be fixed in function of the specific Property that shall be
accessible via this Management Procedure as specified in [05].

object_type: Value that shall be used by the Management Client for the subfield
object_type of the field parameter_type of the
A_NetworkParameter_Read-PDU.

PID: Value that shall be used by the Management Client for the subfield
PID of the field parameter_type of the
A_NetworkParameter_Read-PDU.

test_info: Value that shall be used by the Management Client for the field
test_info of the A_NetworkParameter_Read-PDU.


-----

comm_mode_req: Communication mode that shall be used by the Management Client for
transmission of the A_NetworkParameter_Read-PDU. It can be
− point-to-all-points connectionless (this is broadcast), or
− point-to-point connectionless.

comm_mode_res: Communication mode that shall be used by the Management Server(s)
for transmission of the A_NetworkParameter_Response-PDU.

hop_count_type_res: Value of the hop_count that shall be used by the Management
Server(s) for the transmission of the A_NetworkParameter_Response-PDU.
NOTE This value shall be fixed in function of the specific Property that shall be
accessible via this Management Procedure as specified in [05].

result_data[]: The collection of all test_result data collected by the Management
Client as result of the Management Procedure
**Service parameters**

test_info: Value that shall be used by the Management Server(s) for the field
test_info of the A_NetworkParameter_Read-PDU.
NOTE This value shall be fixed in function of the specific Property that shall be
accessible via this Management Procedure as specified in [05].

**Sequence**


Management
Client

A_NetworkParameter_Read-PDU
(hop_count_type, parameter_type, priority, test_info)

A_NetworkParameter_Response-PDU
(ASAP, hop_count_type, individual_address,
parameter_type, priority, test_info, test_result)

…

A_NetworkParameter_Response-PDU
(ASAP, hop_count_type, individual_address,
parameter_type, priority, test_info, test_result)

Multiple answers may be received if the parameter_type is supported more than
once by one device or by more than one device.

The Management Client shall collect the answers of test_result in
dmp_result_data[] as result of this Management Procedure for further processing.

**Management Server support**


Management
Server


remark


if the parameter_type is
supported and the test is
positive, the Management
Server shall respond

According the specification of
the parameter_type in [05], the
Management Server may send
1 or multiple responses.


The remote Application Layer User, this is the management in the remote device, may respond with
either no, one or several responses.

0. **No response:**
If the parameter_type is not supported or the test_info leads to a negative result, the device
shall not answer.


-----

1. **One response:**
If the parameter_type can, due to its nature, only be supported once by the device. This is the
case for instance for a group address. This Link Layer parameter can be shared inside the
device between multiple Group Objects, but is supported only once.
2. **Several responses:**
If the parameter_type can be supported several times in the device. This can be the case for
the Functional Block scan: a device can have the identical Functional Block supported more
than once. E.g. a double-channel heating regulator, a double audio cassette-deck.

**Error handling**

Wait until the time-out has expired. This time-out is the sum of the following and has to be taken into
account for each KNX device (Management Client, Management Server, Couplers…) and for each
physical segment in the communication path between Management Client and Management Server.

- The maximum delay time in the device.

This is the time that the Management Server in the device needs to handle this request. This
may depend on the specific Network Parameter that is read.

- Random wait times in the device.

In order to avoid a very high busload due to the usage of this procedure, in many cases it
may be specified that the Management Server in the device delays its response by a random
wait time, in order to spread in time the responses by many devices.

- Bus access times.

This is the time that may be needed to access the bus, due to bus free detection and possible
collision avoidance if other devices are transmitting.

- Medium times

This is the actual time that the telegram occupies the medium and the short signalling
difference between sender and receiver.

- Delay times in Couplers.

This is the time that Repeaters, Line- and Backbone Couplers, Media Couplers and
Interfaces may need to receive, evaluate and forward a telegram.

Therefore, the time-out should be defined for each specific use case of this Management Procedure.

If no response is received, the Management Client shall assume the system or device parameter for the
checked value to be free.


-----

##### 2.23.2 Overview of the accepted usage of A_NetworkParameter_Read (informative)

 - **NM_NetworkParameter_Read_R**

Abstract procedure to read the value of a network parameter.
This is only a model, not a real Management Procedure. Do not use this like this in real life.
intended responder: not specified (abstract procedure)
specification: See 2.23.1
test: Chapter 8/3/7 “AIL and Management tests” ([13] clause 2.18)
ASAP: not specified (abstract procedure)
comm_mode request not specified (abstract procedure)
                      - point-to-all-points connectionless, or
                      - point-to-point connectionless
hop_count_type_req: not specified (abstract procedure)
object_type: not specified (abstract procedure)
PID: not specified (abstract procedure)
test_info: not specified (abstract procedure)
comm_mode response not specified (abstract procedure)
hop_count_type_res: not specified (abstract procedure)
test_result: not specified (abstract procedure)

Except for the dedicated and well-specified cases below, A_NetworkParameter_Read is also
required for the following Properties. Assumed is the use with the following parameter
settings.

**Comment**

R any 01 ? ? ? ? ? ?

R any 29 ? ? ? ? ? ? acc. NM_ObjectIndex_Read

T 6 51 bc 6 Property n/a n/a n/a PID_MEDIUM_STATUS
value

R 0 71 PID_IO_LIST

W 0 71

|R/W/T|Object Type|PID|req.|hc req|test/value|res.|hc res|test_result|Comment|
|---|---|---|---|---|---|---|---|---|---|
|R|any|01|?|?|?|?|?|?||
|R|any|29|?|?|?|?|?|?|acc. NM_ObjectIndex_Read|
|T <br>R <br>W|6 <br>0 <br>0|51<br>71<br>71|bc|6|Property<br>value|n/a|n/a|n/a|<br>PID_MEDIUM_STATUS|
|T <br>R <br>W|6 <br>0 <br>0|51<br>71<br>71|bc|6|Property<br>value|n/a|n/a|n/a|PID_IO_LIST|


-----

- **NM_Coupler_Scan_LocalSubnetwork**

Find whether a Coupler is installed in the Subnetwork where the MaC is installed.
intended responder: Coupler
specification: This document.
test: Part 9/3 “Couplers” ([15] §4.7.5.2)
ASAP: void. The request is sent on broadcast.
comm_mode request point-to-all-points, connectionless (broadcast)
hop_count_type_req: 0
object_type: 06h = Router Object
PID: 01h = PID_OBJECT_TYPE
test_info: octet 11: 00h
comm_mode response point-to-all-points, connectionless (broadcast)

                          - The response shall be sent on the Medium Interface on which the
request has arrived.

                          - The response may additionally be sent on further Medium
Interfaces.
hop_count_type_res: Network Layer parameter
test_result: octet 12 and 13: 06h = Object Type of the Router Object

- **SNA read**

Read the SNA of the Subnetwork in which the MaC (requester) is installed.
intended responder: Coupler
specification: Chapter 3/5/3 “Configuration Procedures” ([06]) clause 1.3.3
test: Part 9/3 “Couplers” ([15] §4.7.5.1)
ASAP: void. The request is sent on broadcast.
comm_mode request point-to-all-points, connectionless (broadcast)
hop_count_type_req: 0
object_type: 0 = Device Object
PID: 57 = PID_SUBNET_ADDR
test_info: 00h
comm_mode response point-to-all-points, connectionless (broadcast)
Whether or not the Coupler responds and what value it responds
depends on the Medium Interface on which the request has arrived,
on the IA of the Coupler and of possible parameter settings.
If the Coupler responds, then it shall respond on the Medium
Interface on which the request has arrived.
hop_count_type_res: 0
test_result: 1 (Router Object)
One response shall be sent of each Object Instance present in the
MaS.


-----

- **NM_GroupAddress_Scan**

Check the usage of a Group Address or a range of Group Addresses (Group Address Check) in
the network.
intended responder: E-Mode end devices
specification: clause 2.23.3
test: Chapter 8/3/7 “Application (Interface) Layer Testing – Network
Management Server/Client Testing” ([13] clause 2.18: this is not a
specific test, but only a requirement for declaration and testing).
ASAP: not applicable (broadcast request)
comm_mode request point-to-all-points, connectionless (broadcast)
hop_count_type_req: not specified (6?)
object_type: 01h = Group Address Table
PID: 23 = PID_TABLE (List of Group Addresses)
test_info: range (8 bit) + start_address (16 bit)
comm_mode response point to point, connectionless
At maximum one single response is sent, even if more than one GA
is used in the checked range
hop_count_type_res: not specified (6?)
test_result: none: field is not present in the response

- **NM_ObjectIndex_Read**

Discover the Object Index(es) of a certain Interface Object in one device.
intended responder: FEC end device ([06] clause 5.7.6 “FEC Channel reading”
specification: clause 2.23.4
test: Chapter 8/3/7 “Application (Interface) Layer Testing – Network
Management Server/Client Testing” ([13] clause 2.18: this is not a
specific test, but only a requirement for declaration and testing).
ASAP: IA of target device
comm_mode request point-to-point, connectionless
hop_count_type_req: not specified (Network Layer parameter?)
object_type: any Interface Object Type
PID: PID_OBJECT_INDEX = 29
test_info: Octet 11: start_instance of object_type
Octet 12: number_of_instances
comm_mode response point-to-point, connectionless
hop_count_type_res: not specified (Network Layer parameter?)
test_result: Octet 13 … N: Object Index(es) of target Object_Type


-----

- **Scan for the presence of PSU and DPSU in the network**

This is an application of the general procedure and can be used by a Management Client to
scan presence of PSUs/DPSUs in a system, which will report with their nominal current, in
order to calculate the total available supply current or to activate/deactivate individual
PSU/DPSU.
intended responder: KNX PSUs with communication stack supporting Properties
KNX DPSU implementations
specification: Chapter 3/5/1 “Resources” clause 4.3.18 “PID_PSU_TYPE (PID =
67)”
test: common test: Chapter 8/3/7 “AIL and Management tests” ([13]
clause 2.18)
ASAP: not applicable (broadcast request)
comm_mode request point-to-all-points, connectionless (broadcast)
hop_count_type_req: 0 or standard Network Parameter
object_type: Device Object
PID: PID_PSU_TYPE
test_info: Octet 11: 00h
comm_mode response point-to-point, connectionless
hop_count_type_res: as in the request
test_result: Octet 12, 13: value of PID_PSU_TYPE

- **Retrieve the status of all PSUs and DPSUs in a system**

This is an application of the general procedure and can be used by a Management Client to
retrieve the status of all PSUs and DPSUs in a system with communication capabilities to check
the state of the bus power supply feeding functionality.
intended responder: KNX PSUs with communication stack supporting Properties
KNX DPSU implementations
specification: Chapter 3/5/1 “Resources” clause 4.3.19 “PID_PSU_STATUS
(PID = 68)”
test: common test: Chapter 8/3/7 “AIL and Management tests” ([13]
clause 2.18)
ASAP: not applicable (broadcast request)
comm_mode request point-to-all-points, connectionless (broadcast)
hop_count_type_req: 0 or standard Network Parameter
object_type: Device Object
PID: PID_PSU_STATUS
test_info: Octet 11: 00h
comm_mode response point-to-point, connectionless
hop_count_type_res: as in the request
test_result: Octet 12: value of PID_PSU_STATUS


-----

##### 2.23.3 NM_GroupAddress_Scan
**Use**

This Network Management Procedure shall allow testing whether a Group Address is used within the
range start_address to start_address+range-1. To check for a single Group Address, the range shall be
set to 1. The service request shall be handled via broadcast communication mode.

This Network Management Procedure shall be used by a Management Client to find if a Group
Address is used in the network or not. In general, it shall be used to find a free Group Address before
assigning it in a subsequent Management Procedure to one or more Management Servers (devices).

**Used Application Layer Services for Management**

  - A_NetworkParameter_Read

**Parameters of the Management Procedure**

NM_GroupAddress_Scan (/* [in] */ GAchecked, /* [in] */ rangedchekced, /* [out] */ test_result)

**Service parameters**

object_type: 1 (Group Address Table)
PID: PID_TABLE = 23 (List of Group Addresses)
comm_mode response: point-to-point, connectionless

**Sequence**


Management
Client

range = range

range = range

**Management Server support**


Network /
Management
Server


remark


If Group Addresses are
supported and the investigated
Group Address is linked to one
or more Group Objects, one
single response is sent by the
device.


If a Management Server (device) supports Group Addresses (multicast communication mode) and
supports this service, it shall support this service without any limitation. When thus receiving this
request, the Management Server shall test the contained Group Address(es) against all the Group
Addresses it was assigned to, independent of their value, usage or status.

- Number of Responses

If the number of Group Addresses supported by the Management Server, within the range GAChecked to
GAChecked+rangechecked-1

= 0 then the Management Server device shall send no answer
≠ 0 then the device shall send 1 single response
even
     - if one Group Address is assigned to more than one Group Object, or
     - if more than one Group Address within the indicated range is supported, or
     - if the Group Address appears in the Group Address Table of the receiver but no associations
to it exist in the Group Association Table.


-----

- Response

There is no test-result field in the response PDU. The response shall be sent using point-to-point
connectionless communication mode.

NOTE The field test_info (= range and Group Address) from the request shall be repeated in the response.

**Management Client support**

- Error Handling

The Management Client shall wait until the time-out has expired. This time-out is the sum of the
maximum delay time in the device, in function of the medium and the frame transmission times. If no
response is received, the Management Client shall assume that no Group Address in the range
GAchecked to GAchecked + rangechecked-1 is used in the network. If one or more responses are received, the
Management Client shall conclude that at least one Group Address in the range the GAchecked GAchecked
+ rangechecked-1 is be occupied.

- Usability of this Management Procedure

The support of the A_NetworkParameter_Read service is not mandatory for all Profiles. This means
that if a Group Address is checked in a range that is typically used by devices of a Profile that does not
require the support of this service, the result of this procedure may be less reliable.

##### 2.23.4 NM_ObjectIndex_Read
This Network Management Procedure shall allow discovery of the index of a certain Interface Object
Type in one device. The service request shall be handled via point-to-point communication mode.

This Network Management Procedure shall be used by a Management Client to find the Object
Index(es) of one Object Type in one device.

NM_ObjectIndex_Read (/* [in] */ ASAP, /* [in] */ comm_mode_req, /* [in] */ object_type,
/* [in] */ PID, /* [in] */ test_info, /* [out] */ test_result, /* [in] */ comm_mode_res)

ASAP PPPP = Individual Address of the Device in which the index of an
Interface Object Type shall be discovered
comm_mode_req point-to-point, connectionless
object_type: nm_object_type: Interface Object Type of which the presence in the
Management Server is to be discovered
PID: PID_OBJECT_INDEX = 29 (see [05])
test_info: Octet 11: start_instance of object_type
Octet 12: number_of_instances
test_result: Octet 13 … N: Object Index(es) of target object_type
comm_mode_res: point-to-point, connectionless

**Used Application Layer services for Management**

  - A_NetworkParameter_Read


-----

**Sequence**

Management
Client


Network /
Management
Server


remark

Only one response shall be
given to one read request. If
one response is not enough to
deliver all indexes, than the
Management Client shall
read again with a higher start
instance within the test_info.

|A NetworkParameter Read.req<br>_ _<br>(ASAP = PPPP, comm mode req = point-to-point<br>_ _<br>connectionless, object type = nm object type,<br>_ _ _<br>PID = 29, test info = start instance +<br>_ _<br>number of instances)<br>_ _<br>A NetworkParameter Read.res<br>_ _<br>(object type = nm object type, PID = 29,<br>_ _ _<br>test info = start instance + number of instances,<br>_ _ _ _<br>test result = Object Index(es))<br>_|N<br>M<br>S|
|---|---|
|<br> <br> <br>A_NetworkParameter_Read.req<br>(ASAP = PPPP, comm_mode_req = point-to-point<br>connectionless, object_type = nm_object_type,<br>PID = 29, test_info = start_instance +<br>number_of_instances)<br>A_NetworkParameter_Read.res<br>(object_type = nm_object_type, PID = 29,<br>test_info = start_instance + number_of_instances,<br>test_result = Object Index(es))||


###### 2.23.4.1 Management Server support
If a Management Server receives this request, it shall answer with the total number of instances of
object_type that are present in the Management Server device. Further, it shall answer with the
requested number of Object Indexes.

The indexes in the response shall be sorted in ascending order. The numbering of instances shall with
‘1’, i.e. an Object Instance ‘0’ shall never exist. Instances of the same Object Type shall be numbered
in ascending order of their indexes, i.e. instance 1 shall be the Interface Object with the lowest index
of object_type, instance 2 shall be the interface with the next higher Object Index of the same
object_type etc.

If a Management Server receives this request that is in point-to-point communication mode it shall
answer with only one response. If not all requested indexes can be delivered in one response due to
e.g. max. frame length, then the Management Server shall deliver as many indexes as fit in the frame
with number_of_instances set to the number of instances delivered with the response. The
Management Client can detect the total number of instances by setting start_instance and number of
instances each to ‘0’ in the request, refer to case (d) in the table below (2.23.4.3).

###### 2.23.4.2 Management Client support
If a Management Client does not know whether the Management Server supports long frames or not, it
shall send a request only for 9 or less Object Instances at once. The response shall then fit in a short
frame.

If a Management Client wants to know the indexes of all Object Instances and not all of them fit in
one frame, then it shall repeat the procedure. It shall then send the repeated request with an adjusted
test_info (higher value for the start_instance, adjusted value for number_of_instances). The
Management Client can detect the total number of instances with an own request, i.e. start_instance
and number of instances each set to ‘0’ in the request, refer to case (d) in the table below (2.23.4.3).

The responsibility and control of this lies entirely with the Management Client; there are no
requirements towards the Management Server.

See also 2.23.4.3 for error and exception handling.


-----

###### 2.23.4.3 Error and exception handling
**Management Server**

The following table gives an overview about the behaviour of the Management Server in the normal
cases (a), (b) as well as in various exception cases. The left columns specify the possible combinations
of the test_info in the A_NetworkParameter_Read-PDU of NM_ObjectIndex_Read. The right 4
columns specify how the Management Server shall answer with test_info and test_result in the
A_NetworkParameter_Response-PDU of NM_ObjectIndex_Read.

**Table 3 – Management Server side error handling**

**test_info in Read-PDU** **test_result in Response-PDU** **Remark**

**start_** **number_of_** **start_** **number_of_** **Object**
**instance** **instances** **instance** **instances** **Index(es)**

as requested in
(a) 1  - 0 1 Read_PDU As many indexes This is the most typical case.
as requested with
number_of_- This allows reading with an offset, in case more

as requested in as requested in instances of the Object Type are available in the
(b)  - 1  - 0 Read_PDU Read_PDU instances Management Server than what can be reported in

a single A_NetworkParameter_Response-PDU.

This is a “lazy client” style: the Management
Client does not specify the number of instances it

= number of wants, either because it expects that the number

as requested in All indexes starting will fit in an L_Data_Standard frame, or expects
(c)  - 0 0 Read_PDU delivered Object from start_instance that it can handle a possible L_Data_Extended

Indexes frame, or is ready to send more requests if the

Server would signal the availability of potential
other instances.

current This is a standard exception allowing the Client

to firstly detect the total number of instances and

(d) 0 0 0 total_number_ then have a systematic discovery without any of

of_instances the risks of case (c).

This is an error by the Management Client: 0 is
not a valid start_instance. The Server does not

(e) 0 x 0 0 none give information in the response but possibly

adjusts the number_of_instances in the response.

       - current This is an error by the Management Client, which

it may make if it has not discovered the total

(f) total_number_ x 0 0 number of instances: the start_index has a value

of_instances larger than the number of instances.

requested = number of indexes starting The Management Client attempts to read more

as requested in instances than what is available. The

(g)  - 0 number exceeds Read_PDU delivered object from start_instance Management Server returns all instances it has

highest instance indexes until last instance and corrects the number_of_instances.

= number of Indexes starting The Management Client attempts to read more

               - number fitting as requested in delivered object from instances than what the Management Server can

(h)  - 0 in response indexes, as start_instance, as hold in its response frame. The Management

frame Read_PDU many as fit in many as fit in the Server returns as many as possible and corrects

the frame frame the number_of_instances.

0, but total Indexes starting

number of as requested in = number of from This is a combination of (c) and (h): again, the

(i)  - 0 instances > delivered object start_instance, as Management Server returns the maximal set of

number fitting in Read_PDU indexes many as fit in the instances and corrects the number_of_instances.

response frame frame

**Management Client**

If no response is received, the Management Client shall wait until the time-out has expired. This
time-out shall be 3 s[ 6)]. If no response is received, the Management Client shall assume that the
requested Object Type is not present in the Management Server device.

NOTE 6 It is assumed here that a Management Client uses the NM_ObjectIndex_Read-Procedure only for devices
supporting the NM_ObjectIndex_Read-Procedure as Management Servers. The support of NM_ObjectIndex_Read by
Management Servers shall be defined in the corresponding device Profiles, see also [14].

6) 3 s is the Application Layer time-out typically used for confirmed AL-services with response on point-topoint connectionless communication mode.

|Col1|test info in Read-PDU<br>_|Col3|Col4|test result in Response-PDU<br>_|Col6|Col7|Remark|
|---|---|---|---|---|---|---|---|
|**case**|**start_**<br>**instance**|**number_of_**<br>**instances**||**start_**<br>**instance**|**number_of_**<br>**instances**|**Object**<br>**Index(es)**||
|(a)|1|> 0||1|as requested in<br>Read_PDU|As many indexes<br>as requested with<br>number_of_-<br>instances|This is the most typical case.|
|(b)|> 1|> 0||as requested in<br>Read_PDU|as requested in<br>Read_PDU|as requested in<br>Read_PDU|This allows reading with an offset, in case more<br>instances of the Object Type are available in the<br>Management Server than what can be reported in<br>a single A_NetworkParameter_Response-PDU.|
|(c)|> 0|0||as requested in<br>Read_PDU|= number of<br>delivered Object<br>Indexes|All indexes starting<br>from start_instance|This is a “lazy client” style: the Management<br>Client does not specify the number of instances it<br>wants, either because it expects that the number<br>will fit in an L_Data_Standard frame, or expects<br>that it can handle a possible L_Data_Extended<br>frame, or is ready to send more requests if the<br>Server would signal the availability of potential<br>other instances.|
|(d)|0|0||0|current<br>total_number_<br>of_instances|none|This is a standard exception allowing the Client<br>to firstly detect the total number of instances and<br>then have a systematic discovery without any of<br>the risks of case(c).|
|(e)|0|x||0|<br>0|<br>0|This is an error by the Management Client: 0 is<br>not a valid start_instance. The Server does not<br>give information in the response but possibly<br>adjusts the number_of_instances in the response.|
|(f)|> current<br>total_number_<br>of_instances|x||0|0|0|This is an error by the Management Client, which<br>it may make if it has not discovered the total<br>number of instances: the start_index has a value<br>larger than the number of instances.|
|(g)|<br>> 0|requested<br>number exceeds<br>highest instance||as requested in<br>Read_PDU|= number of<br>delivered object<br>indexes|indexes starting<br>from start_instance<br>until last instance|The Management Client attempts to read more<br>instances than what is available. The<br>Management Server returns all instances it has<br>and corrects the number_of_instances.|
|(h)|> 0|> number fitting<br>in response<br>frame||as requested in<br>Read_PDU|= number of<br>delivered object<br>indexes, as<br>many as fit in<br>the frame|Indexes starting<br>from<br>start_instance, as<br>many as fit in the<br>frame|The Management Client attempts to read more<br>instances than what the Management Server can<br>hold in its response frame. The Management<br>Server returns as many as possible and corrects<br>the number_of_instances.|
|(i)|> 0|0, but total<br>number of<br>instances ><br>number fitting in<br>response frame||as requested in<br>Read_PDU|= number of<br>delivered object<br>indexes|Indexes starting<br>from<br>start_instance, as<br>many as fit in the<br>frame|This is a combination of (c) and (h): again, the<br>Management Server returns the maximal set of<br>instances and corrects the number_of_instances.|


-----

##### 2.23.5 NM_Coupler_Scan_LocalSubnetwork

NOTE 7 This procedure was named NM_Coupler_Scan before.

###### 2.23.5.1 Procedure
This Network Management Procedure shall allow detecting a Coupler in the local Subnetwork in
which the MaC is installed. The service request and the service response shall be handled via point-toall-points, connectionless (broadcast) communication mode.

NM_Coupler_Scan_LocalSubnetwork (/* [in] */ ASAP, /* [in] */ comm_mode_req,
/* [in] */ hop_count_type_req, /* [in] */ object_type, /* [in] */ PID,
/* [in] */ test_info, /* [in] */ comm_mode_res, /* [in] */ hop_count_type_res,
/* [out] */ test_result)

ASAP: not applicable: the communication mode of the request is broadcast

comm_mode_req point-to-all-points, connectionless (broadcast)

hop_count_type_req: Value of the hop_count that shall be used by the Management Client
for the transmission of the A_NetworkParameter_Read-PDU.
0: to find the presence of any Coupler in the local Subnetwork.

object_type: 6 = Router Object

PID: 01 = PID_OBJECT_TYPE

test_info: octet 11: 00h

comm_mode_res: point-to-all-points, connectionless (broadcast)

                - The response shall be sent on the Medium Interface of the
Coupler on which the request has arrived.

                - The response may additionally be sent on further Medium
Interfaces of the Coupler. This is the recommended behaviour.

hop_count_type_res: Network Layer parameter

test_result: octet 12 a 13: 0006h = Object Type of the Router Object

**Used Application Layer services for Management**

  - A_NetworkParameter_Read

**Sequence**


Management
Client


Network /
Management
Server


remark


If the MaS is a Coupler, then it shall at least send a response on the
Medium Interface on which the request has arrived; it should send
additional responses on the other Medium Interface(s)

The response(s) shall contain Object Type of the Router Object.

If the MaS is not a Coupler, then it shall not respond.


-----

A_NetworkParameter_Response-PDU
(comm_mode_res = point-to-all-points connectionless
object_type = Router Object, PID = 01h,
test_info = 00h, test_result = Object Type of the Router

Object = 0006h).

###### 2.23.5.2 Management Server support



- The MaS shall verify that the test_info equals 0. If this is not the case, the MaS shall ignore the
request.

- If the MaS (Coupler) implements more than one Router Object, then it shall only give one single
response, on the Medium Interface[ 7)] on which the request is received.

###### 2.23.5.3 Management Client support



- The MaC shall take into account that the requirements to the MaS do not require that the MaS
(Coupler) be used as a Router (Line Coupler or Backbone Coupler), this is, this Management
Procedure will be responded upon as well by the Coupler implementations configured as KNX
_TP1 Bridge or as KNX TP1 Repeater._

##### 2.23.6 Procedure with PID_FEATURES_SUPPORTED


###### 2.23.6.1 A_NetworkParameter_Read-PDU
The A_NetworkParameter_Read on PID_FEATURES_SUPPORTED can be applied on point-to-point
connectionless or – connection-oriented communication mode or on broadcast - mode with the
following parameter.

octet 6 octet 7 octet 8 octet 9 octet 10 octet 11 octet 12
APCI parameter_type
test_info[0] Or mask[0] (Bit 0-7)
object_type PID
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 1 1 1 0 1 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

octet 13 …octet 14 octet 15-21
Or mask[1] OR mask[2] OR mask [3-9]

(Bit 8-15) (Bit 16-23) (Bit 24-80)

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|octet 12|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|||||||parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|test_info[0]|test_info[0]|test_info[0]|test_info[0]|test_info[0]|test_info[0]|test_info[0]|test_info[0]|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|Or mask[0] (Bit 0-7)|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||Bit7|<br>Bit6|<br>Bit5|<br>Bit4|<br>Bit3|<br>Bit2|<br>Bit1|<br>Bit0|
|||||||1|1|1|1|0|1|1|0|1|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|||||||||0|0|0|0|0|0|0|0|||||||||


x x x x x x x x x 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

**Figure 17 - A_NetworkParameter_Read-PDU with PID_FEATURES_SUPPORTED (example)**

|octet 13|Col2|Col3|Col4|Col5|Col6|Col7|Col8|…octet 14|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 15-21|Col18|Col19|Col20|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|Or mask[1]<br> (Bit 8-15)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask[2]<br> (Bit 16-23)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|OR mask [3-9]<br>(Bit 24-80)|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|Bit 15<br>Bit 9<br>Bit 8|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|||||||||
|x|x|x|x|x|x|x|x|x|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|


object_type: 0 (Device Object)
PID: 89 (PID_FEATURES_SUPPORTED
test_info: **Field** **Size** **Definition and encoding**

[octets]

Control Info 1 0: Or-Mask is used
1 to 255: reserved, shall not be used

7) The terminology of [8] is used here.


-----

Mask 10 mask with the required Bits of PID_FEATURES_SUPPORTED for the searched functionality set.

###### 2.23.6.2 A_NetworkParameter_Response-PDU
If the A_NetworkParameter_Read-PDU is received on broadcast communication mode or the
A_NetworkParameter_Read-PDU is received on point-to-point connectionless or connection-oriented
communication mode thn the device shall reply with an A_NetworkParameter_Response-PDU on
unicast communication if the condition is fulfilled (with Testinfo=0/Or-Mask, if one of the requested
bits in the PID_FEATURES_SUPPORTED is set).The service shall use the following parameter.


1 1 1 1 0 1 1 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

octet 13 …octet 14 octet 15-21
FeatureSupported[1] FeatureSupported[2] Feature Supported

(Bit 8-15) (Bit 16-23) [3-9] (Bit 24-80)

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

x x x x x x x x x 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|octet 12|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|||||||parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|test_info|test_info|test_info|test_info|test_info|test_info|test_info|test_info|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|FeatureSupported[0]<br>(Bit 0-7)|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|PID|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|<br>                      1|<br>                       0|<br>                        7|<br>                         6|<br>                          5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||Bit 7|<br>Bit 6|<br>Bit 5|<br>Bit 4|<br>Bit 3|<br>Bit 2|<br>Bit 1|<br>Bit 0|
|||||||1|1|1|1|0|1|1|0|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|||||||||0|0|0|0|0|0|0|0|||||||||

|octet 13|Col2|Col3|Col4|Col5|Col6|Col7|Col8|…octet 14|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 15-21|Col18|Col19|Col20|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|FeatureSupported[1]<br>(Bit 8-15)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|<br>FeatureSupported[2]<br>(Bit 16-23)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|Feature Supported<br>[3-9] (Bit 24-80)|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|Bit 15<br>Bit 14<br>Bit 13<br>Bit 12<br>Bit 11<br>Bit 10<br>Bit 9<br>Bit 8|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|<br>Bit 23<br>Bit 22<br>Bit 21<br>… <br>… <br>… <br>… <br>Bit 16|||||||||
|x|x|x|x|x|x|x|x|x|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|


**Figure 18 - A_NetworkParameter_Response-PDU (example)**


object_type: 0 (Device Object)
PID: 89 (PID_FEATURES_SUPPORTED
test_info: **Field** **Size** **Definition and encoding**

[octets]

test_info: 1 00h
test_result: 10 Value of PID_FEATURES_SUPPORTED

#### 2.24 NM_SerialNumberDefaultIA_Scan
**Use**


This Network Management Procedure shall be used to obtain the KNX Serial Number of each device
of which the Individual Address (IA) is the default Individual Address for the given medium
(Subnetwork address as specified in [05], this is, with the Device Address FFh..

**Used Application Layer Services for Management**



- A_PropertyValue_Read


-----

**Sequence**

Management
Client

**Exception handling**


Network /
Management
Server


remark

Responses may be received from
none, one or more devices.


Time-out: 7 sec
If no response is received, no

…

device has the default Individual
Address.
A_PropertyValue_Response-PDU


The general exception handling applies.


-----

### 3 Device Management Procedures

#### 3.1 Introduction
The device Management Procedures describe the rules and procedures for managing a single device.
These procedures are device dependent. Therefore a detailed knowledge of the device is required.

The following paragraphs describe the general device Management Procedures. Some parameters
depend on the actual BAU-type of the Management Server. The standardized BAU-types can be found
in the chapters of [16].

The device Management Procedures can be used to read out the state of a device, write parameters and
to load or unload a device with an application.

**General Exception handling**

In general if an error is detected, the download shall be interrupted and an error-message shall be
raised.

If there is another exception handling for a device Management Procedure, this is stated in the
description of the procedure.

#### 3.2 DM_Connect
**Use**

This device Management Procedure shall be used to establish a connection to a Management Server
with a specific Individual Address and to check the existence by reading the mask version.

The connection is closed with a DM_Disconnect.

**Parameters of the Management Procedure**

DM_Connect (flags)

flags bit 0 use connection oriented / connectionless communication
0: connection oriented communication
1: connectionless communication
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

##### 3.2.1 DMP_Connect_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_Connect

  - A_DeviceDescriptor_Read

**Sequence**


Management
Client

A_Connect-PDU
(destination_address = IA_target)

if negative A_Connect.Lcon ⇒ error: no connection established
else (this is, a positive A_Connect.Lcon is received)


Network /
Management
Server


remark


If the device that occupies the IA_target
does not support Transport Layer connections,

it shall send a T_Disconnect-PDU.


-----

if A_Disconnect-PDU is received ⇒ error: the device refuses the connection-oriented connection
else (no A_Disconnect-PDU is received)

If a device that occupies IA_target is present on the network,

and does support Transport Layer connections,

it shall have no other reaction on the bus
than the Layer-2 acknowledge that initiates the above A_Connect.Lcon
The A_DeviceDescriptor_Read-PDU shall use DD0.

A_DeviceDescriptor_Read-PDU

(destination_address = IA_test,
descriptor_type = 0000h)

A_DeviceDescriptor_Response-PDU

(descriptor_type, device_descriptor)

If the Management Client receives an A_DeviceDescriptor_Response-PDU it shall conclude that the Transport Layer connection has
been established successfully.
If no A_DeviceDescriptor_Response-PDU is received after time-out ⇒ error: no connection established
endif

**Exception handling**

There are several error situations when building up a connection oriented communication.

- If the T_Connect.req telegram is not acknowledged by a Link Layer acknowledge (negative
A_Connect.Lcon) then the Management Server with the Individual Address does not exist or the
system is not configured correctly. (e.g. coupler, Domain Address ...)

- If a T_Disconnect-telegram is sent out by the Management Server but no
A_DeviceDescriptor_Response, the device with the Individual Address exists. The reason for this
may either be that the Management Server is already using another connection, doesn't support
connection oriented mode, or the time-out has elapsed.

- If a T_Disconnect-telegram is sent out by the transport layer of the Management Client, then the
system may not be configured correctly, or the Management Server doesn't exist.

- If more than one A_DeviceDescriptor_Response-PDU is received, there is more than one device
with the target address.

If the above indicates the network may be configured incorrectly, than the network topology shall be
checked. In all other cases, the DM_Connect may be repeated several times. If this procedure is not
successful, the depending procedures shall be aborted.

##### 3.2.2 Procedure: DMP_Connect_RCl
This Management Procedure shall be used to read the Device Descriptor of one Management Server
(device). It shall allow differentiating between requesting DD0 and DD2 and is capable of handling
both DD-types expected and unexpected.

This Management Procedure shall use the point-to-point connectionless communication mode.

DMP_Connect_RCl (/* [in] */ nm_ASAP, /* [in] */ nm_desc_type_req,
/* [out] */ nm_desc_type_res, /* [out] */ nm_desc_value_res)

nm_ASAP: The parameter shall contain the IA of the communication partner of
which the Device Descriptor is to be read.

nm_desc_type_req: This parameter shall contain the requested Device Descriptor Type; it
can be DD0 or DD2.


-----

nm_desc_type_res: This result shall contain the DD-type with which the Management
Server has responded. This may be different from nm_desc_type_req.
Please refer to the exception handling.

nm_desc_value_res: This result shall contain the Device Descriptor value responded by the
Management Server.

###### Used Application Layer services for Management

- A_DeviceDescriptor_Read

###### Sequence


Management
Client


Management
Server


remark


The Management Client shall send the A_DeviceDescriptor_Read-PDU to the Management
Server. The ASAP shall equal nm_ASAP.

A_DeviceDescriptor_Read-PDU
(descriptor_type = nm_desc_type_req)

A_DeviceDescriptor_Response-PDU
(descriptor_type = nm_desc_type_res,
device_descriptor = nm_desc_value_res)

###### Exception handling

There are several error situations when building up a connectionless communication.

- If no A_DeviceDescriptor_Response-PDU is received, the Management Server with the Individual
Address does not exist or the network is not configured correctly.
- If more than one A_DeviceDescriptor_Response-PDU is received, there is more than one device
with the target address.

If the above indicates the network may be configured incorrectly, than the network topology shall be
checked. In all other cases, the DM_Connect_RCl may be repeated several times. If this procedure is
not successful, the depending procedures shall be aborted.

##### 3.2.3 Procedure: DMP_Connect_LEmi1
**Use**

This Management Procedure shall use the local communication with EMI 1. The Device Descriptor
Type 0 shall be read from the memory location 4Eh – 4Fh.

**Used EMI-services for Management**

  - PC_Get_Value

**Parameters of the Management Procedure**

DMP_Restart_LEmi1(/* [out] */ DD0, /* [out] */ DmpError)

DD0: Value of the Device Descriptor 0 as returned by the device.

DmpError: Possible error indication.


-----

**Sequence**

Management
Client


Management
Server


remark


PC_Get_Value.con message
(Length = 2 octet, Address = 004Eh, Data = DD0)

**Exception handling**

The general exception handling is applicable

##### 3.2.5 DMP_Connect_LcEMI
If local management via the cEMI interface is required, the Management Client shall connect to the
local device via cEMI and switch the communication mode to cEMI Transport Layer by setting
PID_COMM_MODE to “cEMI Transport Layer”. Further discovery (Device Descriptor,
manufacturer…) is then done by the classic Application Layer services transferred via cEMI
T_Data_Connected and T_Data_Individual.

##### 3.2.6 DMP_Connect_R_KNXnetIPDeviceManagement
The Management Client establishes a KNXnet/IP Device Management connection to the KNX IP - or
KNXnet/IP device. The device shall by this autonomously switch its cEMI communication mode to
cEMI Transport Layer mode. Further discovery (Device Descriptor, manufacturer…) is then done by
the classic Application Layer services transferred via cEMI T_Data_Connected and
T_Data_Individual via KNXnet/IP DEVICE_CONFIGURATION_REQUEST frames.

##### 3.2.7 Procedure: DM_DeviceDescriptor_InfoReport
**Use**

This Management Procedure shall be used to spontaneously send a Device Descriptor value. This
procedure is typically spontaneously executed by the Manegement Server (device) and not by the
Management Client!

On KNX RF, the A_DeviceDescriptor_InfoReport-PDU shall betransmitted in a RF
AddrExtensionType = 0; the frame shall then contain the KNX Serial Number of the sender.

**Used Application Layer Services for Management**

  - A_DeviceDescriptor_InfoReport

**Parameters of the Management Procedure**

DM_DeviceDescriptor_InfoReport (/* [in] */ DM_DDType, /* [in] */ DM_DD)

DM_DDType type of the Device Descriptor
DM_DD the Device Descriptor of the device

This Management Procedure shall use the system broadcast communication mode.


-----

**Sequence**

Management

Server


Management Client remark

Set client in teaching mode.


A_DeviceDescriptor_InfoReport-PDU

(descriptor_type = DM_DDType,
device_descriptor = DM_DD)

**Error and exception handling**

Not applicable.

#### 3.3 DM_Disconnect

##### 3.3.1 Use
This device Management Procedure shall be used to close a connection to the Management Server,
which was built up with DM_Connect.

A DM_Connect shall be executed before executing this Management Procedure.

DM_Disconnect (flags)

flags All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

##### 3.3.2 Procedure: DMP_Disconnect_RCo
This method shall use the connection oriented remote communication.

**Used Application Layer Services for Management**

  - A_Disconnect

**Sequence**


Management

Client

A_Disconnect_Req ()

**Exception handling**

The general exception handling shall apply.

##### 3.3.4 Procedure: DMP_Disconnect_LEmi1
**Use**


Management
Server


remark


This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

None

**Parameters of the Management Procedure**

DMP_Disconnect_LEmi1()

**Sequence**

None.


-----

**Exception handling**

The general exception handling shall apply.

#### 3.4 DM_Identify

##### 3.4.1 General
This Management Procedure shall be used to retrieve data from the Management Server in order to be
able to uniquely identify this Management Server and differentiate it from other Management Servers.

##### 3.4.2 DM_Identify_R
**Use**

This Device Management Procedure shall be used to identify devices with the value 0300h for Device
Descriptor type 0. This method shall point-to-point connection oriented - or point-to-point
connectionless remote communication mode.

This procedure shall use a two-step device discovery.

Step 1: Read Device Descriptor Type 0

Step 2: Read PID_MGT_DESCRIPTOR_01

**Used Application Layer Services for Management**

  - A_DeviceDescriptor_Read

  - A_PropertyValue_Read

**Sequence**


Management
Client


Management
Server

A_DeviceDescriptor_Read-PDU

(descriptor_type = 0)

A_DeviceDescriptor_Response-PDU
(descriptor_type = 0 =DD0, device_descriptor = 0300h)


remark


If DD0 ≠ 0300h then continue with
identified management
A_PropertyValue_Read-PDU If DD0 = 0300h then
(object_index = 00h, Property_id = 48h,
start_index = 01h, nr_of_elem = 01h)

A_PropertyValue_Response-PDU
(object_index = 00h, Property_id = 48h,
start_index = 01h, nr_of_elem = 01h,
data = 01h 00h 00h 00h 00h 00h 00h 00h 00h 00h)

If data = 01000000000000000000h
or data = 01000001000000000000h
continue with specified management
model


-----

##### 3.4.3 DM_Identify_RCo2
This Management Procedure shall use the point-to-point connection-oriented communication mode.

DM_Identify_RCo2 (destination_address)
server IA Individual Address of the Management Server

device descriptor type 0 device descriptor of the Management Server
manufacturer id identification of the manufacturer of the Management
Server
hardware type hardware type of the Management Server

**Used Application Layer Services for Management**

  - A_Connect

  - A_DeviceDescriptor_Read

  - A_PropertyValue_Read

**Sequence**

If no Transport Layer connection exists between the Management Server and the Management Client,
the Management Client shall execute the procedure DM_Connect_RCo prior to this procedure.

NOTE DM_Connect_RCo already returns the value of the Device Descriptor Type 0 of the Management Server. This result
is part of the return of this procedure NM_Identify_RCo2.


Management
Client


Network /
Management
Server


remark


(source_address = server IA
object_index = PID_HARDWARE_TYPE,
nr_of_elem = 1, start_index = 1, data = hardware type)

**Exception handling**

The default error handling applies. If any of these services fails (time-out, negative response, no
response) then the request shall be repeated up to three times. On further failure, the Management
Procedure and the encompassing Configuration Procedure shall be interrupted.


-----

#### 3.5 DM_Authorize
**Use**

This device Management Procedure shall be used to obtain access authorization. The authorization
shall be executed only when it is required by the Management Server.

Whether or not a Management Server supports authorisation can directly be retrieved from the Device
Descriptor Type 0 (mask version). In [14] it is specified for which Profiles authorisation is mandatory.

DM_Connect shall be executed before executing this Management Procedure.

DM_Authorize (flags, keys)

flags All bits are reserved. These shall be set to 0. This shall be tested
by the Management Client.
key key for authorization

##### 3.5.1 Procedure: DMP_Authorize_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A Authorize

**Sequence**


Management
Client

if authorization is required (key != FFFF FFFFH)

A_Authorize_Request-PDU (key)

A_Authorize_Response-PDU (key, level)

endif

**Exception handling**

The general exception handling shall apply.

##### 3.5.2 DM_Authorize2_RCo
**Use**


Management
Server


remark

A_Disconnect.ind ⇒
error: connection was broken
down


This device Management Procedure DM_Authorize2_RCo shall be used to obtain access
authorization. It shall assume that the Management Client has an access key provided by its user. If the
Management Client does not have an access key, it shall not be executed.

Opposite to the Management Procedure DM_Authorize_RCo, this Management Procedure
DM_Authorize2_RCo does not presume that the device has been locked with the key that is provided
to the procedure. Therefore, it authorizes subsequently with the key FFFFFFFFh and with the key
client_key and continues with the key that gives the maximal access rights.

NOTE This is the case when the ETS User enters a key to be used to lock the devices and uninitialised devices fresh from
the factory are used.

DM_Connect shall be executed before executing this Management Procedure.


-----

**Use**

 - Profiles System 2
BIM M112

 - Conditions Write access, i.e. modifying memory- or Property contents
A key must be available
**Used Application Layer Services for Management**

  - A_Authorize_Request

**Sequence**

###### Client Server
The Management Server (device) shall according the specification of
A_Auhorize in [03] have granted the access rights associated to the key
FFFFFFFFh. This level is however unknown to the Management Client.
Therefore, the client re-authorizes explicitly with key FFFFFFFFh to obtain the
free access level.

A_Authorize_Request-PDU

(key = FFFFFFFFh)

A_Authorize_Response-PDU

(level = free_level)

If the free access level is not the highest level (lowest numerical value,
maximum access rights)

A_Authorize_Request-PDU

(key = client_key)

A_Authorize_Response-PDU

(level = client_level)

The level obtained now with access_key is compared to the one obtained for free
access. If free access gave higher access level (lower numerical value), a new
authorisation with free access level is done.

if client_level > free_level
A_Authorize_Request-PDU

(key = FFFFFFFFh)

A_Authorize_Response-PDU

(level = FFFFFFFFh)

endif
endif
**Error and exception handling**

Failure of any of the contained Application Layer Services shall lead to failure of the entire
Configuration Procedure.

The general exception handling shall apply.

#### 3.6 DM_SetKey
**Use**

This device Management Procedure shall be used to set the key in the Management Server.

A DM_Connect shall be executed before executing this Management Procedure.

DM_SetKey (flags, keys, level)

flags All bits are reserved. These shall be set to 0. This shall be tested
by the Management Client.
key key for authorization
level level for which the key is to be set


-----

##### 3.6.1 Procedure: DM_SetKey_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_Key_Write

**Sequence**


Management
Client

**Exception handling**


Management
Server


remark


A_Key_Response(level) A_Disconnect.ind ⇒
error,
requested level != returned
level ⇒ operation failed


If the level returned in A_Key_Response is not the same as in the A_Key_Write, the operation was not
successful. Possibly an authorization is required.

#### 3.7 DM_Restart

##### 3.7.1 Definition
This Management Procedure can be used in a point-to-point connectionless communication mode
(DM_Restart_RCl) or point-to-point connection-oriented communication mode (DM_Restart_RCo).

DM_Restart (flags)

flags All bits are reserved. These shall be set to 0. This shall be tested
by the Management Client.

This Management Procedure shall be used to execute in the Management Server a Basic Restart or a
Master Reset.


-----

###### 3.7.1.1 Basic Restart

3.7.1.1.1 Definition
To perform a Basic Restart the Management Server shall

   - switch off Programming Mode

   - clear runtime errors

   - reset all access levels

This is, the access levels possibly granted to the Management Client shall be set to the
highest access level set with FFFFFFFFh.

   - switch off safe state

   - send an appropriate LM_Reset.ind message through the EMI interface

   - reset its KNX communication system

   - close all KNX Transport Layer connections

   - close all KNXnet/IP connections (Device Management, Tunnelling or other)

   - close all KNX Secure Sessions

   - close all KNX TCP connections

   - apply changed configuration Parameters at the latest 30 s after completing the restart
(see [11] clause 2.5.1 - “Coming into effect of changed KNXnet/IP Parameters – general
rule”).
Please refer to the respective protocol specifications for the requirements. The above list is mandatory
but may not be complete.

It is recommended to

   - break down any Transport Layer connection[ 8)]

The Management Server should send a T_Disconnect-PDU to the Management Client.

3.7.1.1.2 Timing (Management Client and Management Server)

t0 t t
1 2

**Figure 19 – Timing of the restart**

**Time** **MaC** **MaS**

t0 = 0 s

The MaC sends out the A_Restart-PDU The MaS shall start the actions included
(unconfirmed) or receives the in the Basic Restart.
A_Restart_Response-PDU.

t1 – t0 The MaC shall not make any assumptions The MaS may react under the pre-reset
on the MaS. conditions, may not react at all, or may

already react according the post-reset
conditions.

8) Due to the required restart of the communication system, a possible Transport Layer connection will break. It
is however recommended that a T_Disconnect-PDU is sent to any communication partner to whom a
TL-connection may be established at that time.
Devices have been reported that hold the Transport Layer connection throughout a restart and send a
T_Disconnect-PDU when they experience the normal Transport Layer timeout after restart.

|Time|MaC|MaS|
|---|---|---|
|t0|= 0 s||
|t0|The MaC sends out the A_Restart-PDU<br>(unconfirmed) or receives the<br>A_Restart_Response-PDU.|The MaS shall start the actions included<br>in the Basic Restart.|
|t1 –t0|The MaC shall not make any assumptions<br>on the MaS.|The MaS may react under the pre-reset<br>conditions, may not react at all, or may<br>already react according the post-reset<br>conditions.|


t
2


t
1


-----

|Time|MaC MaS<br>NOTE 8 With “pre-reset conditions” are meant all access and Permissions, all Session keys,<br>authorisations, access levels and parameter values as active before the reset.|Col3|
|---|---|---|
||||
|t1|= 1 s, unless specified differently for any service or Resource.<br>This is the earliest point at which the MaC<br>may expect the MaS to successfully have<br>executed a Basic Restart.<br>The MaC may start connecting to the<br>MaS again (TCP connections, KNX IP<br>Sessions, KNXnet/IP connections, TL<br>connections). <br>The MaS shall**not** react anymore<br>according the pre-reset conditions.|= 1 s, unless specified differently for any service or Resource.<br>This is the earliest point at which the MaC<br>may expect the MaS to successfully have<br>executed a Basic Restart.<br>The MaC may start connecting to the<br>MaS again (TCP connections, KNX IP<br>Sessions, KNXnet/IP connections, TL<br>connections). <br>The MaS shall**not** react anymore<br>according the pre-reset conditions.|
|t1|= 1 s, unless specified differently for any service or Resource.<br>This is the earliest point at which the MaC<br>may expect the MaS to successfully have<br>executed a Basic Restart.<br>The MaC may start connecting to the<br>MaS again (TCP connections, KNX IP<br>Sessions, KNXnet/IP connections, TL<br>connections). <br>The MaS shall**not** react anymore<br>according the pre-reset conditions.|The MaS shall**not** react anymore<br>according the pre-reset conditions.|
|t2 –t1|The MaC may try to connect to the MaS<br>again.<br>The MaS may be unresponsive or it<br>may already react with the post-reset<br>conditions.<br>NOTE 9<br>With “post-reset” conditions are meant all access and Permissions, all Session keys,<br>authorisations, access levels and parameter values as active after the reset. These are typically<br>cleared or have default values; configuration Parameters shall assume the values as possibly set<br>before the reset.<br>EXAMPLE 5<br>If the MaC changes the IP multicast address then it shall at the latest become active<br>after the reset.|The MaC may try to connect to the MaS<br>again.<br>The MaS may be unresponsive or it<br>may already react with the post-reset<br>conditions.<br>NOTE 9<br>With “post-reset” conditions are meant all access and Permissions, all Session keys,<br>authorisations, access levels and parameter values as active after the reset. These are typically<br>cleared or have default values; configuration Parameters shall assume the values as possibly set<br>before the reset.<br>EXAMPLE 5<br>If the MaC changes the IP multicast address then it shall at the latest become active<br>after the reset.|
|t2|= 5 s, unless specified differently for any service or Resource, or unless responded<br>differently by the MaS in the A_Restart_Response-PDU if it is larger than 5 s:<br>see 3.7.1.2.2<br>The MaS shall be responsive again with<br>thepost restart conditions.|= 5 s, unless specified differently for any service or Resource, or unless responded<br>differently by the MaS in the A_Restart_Response-PDU if it is larger than 5 s:<br>see 3.7.1.2.2<br>The MaS shall be responsive again with<br>thepost restart conditions.|
|> t2|If there is further communication between<br>the MaC and the restarted MaS, the<br>reaction failure of successive communi-<br>cation due to longer MaS restart timing<br>depends on the error handling of the<br>Configuration Procedure in which this<br>DM_Restart is used.||


3.7.1.1.3 Calling a Basic Restart through A_Restart (Management Client and Management Server)
The Basic Restart shall be identified by an A_Restart-PDU

   - with the field Response cleared, and
   - with all bits 4 to 1 of the APCI/ASDU cleared, and
   - with the field restart_type cleared, and
   - without the field erase_code, and
   - without the field channel_number.


-----

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|Response|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|Restart Type|
|||||||1|1|1|0|0|0|0|0|0|0|


**Figure 20 - A_Restart-PDU (example with restart_type = 0)**

The Application Layer of the Management Server shall not confirm the A_Restart-service if a Basic
Restart is called; to obtain the same result with an AL-confirmation, the Management Client should
instead call a Master Reset with Erase Code 00h.


###### 3.7.1.2 Master Reset

3.7.1.2.1 Definition
To perform a Master Reset, the Management Server shall reset its configuration data according the
following, if supported and as requested by the Management Client.



- In the Group Address Table and the Group Object Association Table the following link
information shall be cleared.
   - If the field Channel Number equals 00h then all link information in these tables shall be
cleared.
   - If the field Channel Number differs from 00h, then only the link information in these tables
for the Group Objects of the indicated application Channel Number shall be cleared.
For the error handling concerning invalid values of the field Channel Number, please refer to the
specification of the A_Restart-service in [03].

- The application parameters are set to their default value.
   - If the field Channel Number equals 00h then all parameters shall be reset.
   - If the field Channel Number differs from 00h, then only the parameters of the indicated
application Channel Number shall be cleared.
   - In case of an E-Mode device with one or more Adjustable E-Mode Channels, this means that
the Adjustable Parameter shall for each E-Mode Channel be set back to its default value,
which shall be 0. Consequently, other E-Mode Channel configuration data (Channel Codes,
Connection Codes and Connection Flags) shall be reset to their default value as well.

- The application is reset to the default application.

- The IA is reset to the devices’ medium dependent default IA.

- A Basic Restart is executed.


3.7.1.2.2 Timing (Management Client and Management Server)
To execute the requested Master Reset, the Management Server may need some time, during which it
may not be accessible to the Management Client. Therefore, the Management Server shall use the
Process Time to report on the time that it needs in worst case for the execution of the requested Master
Reset.

This field shall be encoded as a 2 octet unsigned integer value expressed in seconds. This shall comply
with the encoding of DPT_TimePeriodSec (DPT_ID = 7.005).


-----

The Management Server user shall fill in the Process Time if this time exceeds 5 s. If not, this field
may

   - either be left to its default value 0000h, or
   - be filled with the correct process time. The MaC is however not required to respect this
received process time if this is shorter than the standard process time for the Management
Procedure that it is executing. The process time is thus a minimal time for the MaC to wait,
not a maximal time.

EXAMPLE 6 If the MaS indicates it can be available after a Confirmed Restart already after 2 s and the MaS
handles a default waiting time of 3 s, then the MaC may still wait for 3 s.

If the Management Server confirms the Master Reset negatively (Error Code ≠ 00h), then it shall set
the Process Time to 0000h in the A_Restart_Response-PDU.

If this field is different from 0000h, then the Management Client shall consider it in the error handling
(pauses, retries, attempts to reconnect) of its possible further Application Layer services. If the Process
Time expires without reaction by the Management Server, then the Management Client shall try to
call the failed next Application Layer service one last time before it may consider the related
Configuration Procedure as failed.

The Management Server shall execute the Master Reset only after the A_Restart_Response-PDU has
been sent on the bus.

NOTE 10 This shall guarantee that the Master Reset is in all cases a confirmed service: the A_Restart_Response-PDU shall
in all cases by sent by the Management Server and received by the Management Client and not go lost due to the possible
reset of the communication stack of the Management Server.

NOTE 11 This shall also guarantee that in case the Master Reset changes the Indvidual Address of the Management Server,
that the A_Restart_Response-PDU is transmitted on the bus with the current IA of the Management Server prior to calling this
service.

3.7.1.2.3 Calling a Master Reset through A_Restart (Management Client and Management Server)

3.7.1.2.3.1 General requirements
The Master Reset shall be identified by an A_Restart-PDU

   - with the field Response cleared, and
   - with all bits 4 to 1 of the APCI/ASDU cleared, and
   - with the field restart_type set to 1, and
   - with the field erase_code encoded, and
   - with the field Channel Number.

Octet 6 Octet 7 Octet 8 Octet 9

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Erase Code Channel Number

1 1 1 0 0 0 0 0 0 1

**Figure 21 – A_Restart-PDU (example)**

The Erase Code shall indicate which Resource value shall be reset in the Management Server. The
Channel Number shall indicate to which application channel the reset applies. These fields shall be
encoded and used as specified in Table 4.

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|Response|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|Restart Type|Erase Code|Erase Code|Erase Code|Erase Code|Erase Code|Erase Code|Erase Code|Erase Code|Channel Number|Channel Number|Channel Number|Channel Number|Channel Number|Channel Number|Channel Number|Channel Number|
|||||||1|1|1|0|0|0|0|0|0|1|||||||||||||||||


-----

**Table 4 – Definition of Erase Code and Channel Number**

|Erase<br>Code|Description|
|---|---|
|01h|**Confirmed Restart** <br>No Resource value shall be reset.<br>This encoding shall allow using the Master Reset as a confirmed alternative to the<br>unconfirmed Basic Restart.<br>Both Erase Code values shall have the same effect.<br>NOTE 12<br>This encoding uses the same values for the_Erase Code_ **as** for the_Reset Command_ in [09].<br>**Channel Number**: Fixed: 00h|
|02h|**Factory Reset**<br>This shall reset the device to its ex-factory state.<br>Which Resources are reset and their value after reset are implementation dependent.<br>However, for “Factory Reset” and “Factory Reset without IA” there are requirements<br>concerning the effect on system network Resources. See 3.7.1.2.3.2.<br>**Channel Number**: <br>= 00h:<br>The Resources of all Channels shall be reset.<br>≠ 00h:<br>Only the Resources of the Channel with this given Channel Number shall<br>be reset.|
|03h|**ResetIA**<br>The IA shall be reset to the medium specific default IA when this A_Restart is<br>executed.<br>**Channel Number**: Fixed: 00h|
|04h|**ResetAP**<br>Application Program Memory shall be reset to the default application when an<br>A_Restart-PDU is received.<br>**Channel Number**: Fixed: 00h|
|05h|**ResetParam**<br>Application Parameter Memory shall be reset to its default value when an<br>A_Restart-PDU is received.<br>**Channel Number**: <br>= 00h:<br>The application parameters of all Channels shall be reset.<br>≠ 00h: <br>The application parameters of only this given Channel shallbe reset.|
|06h|**ResetLinks**<br>Link information for Group Objects (Group Address Table, Group Object Association<br>Table) shall be reset to default state when an A_Restart-PDU is received.<br>**Channel Number**: <br>= 00h:<br>The link information of all Channels shall be reset.<br>≠ 00h:<br>The link information of only this given Channel shall be reset.|
|07h|**Factory Reset without IA**<br>This shall reset the device to its ex-factory state.<br>Which Resources are reset and their value after reset are implementation dependent.<br>Opposite to Erase Code 02h, the Individual Address shall not be reset. Further specific<br>requirements as specified in 3.7.1.2.3.2 shall apply.<br>**Channel Number**: <br>= 00h:<br>The Resources of all Channels shall be reset.<br>≠ 00h:<br>Only the Resources of the Channel with this given Channel Number shall<br>be reset.|


-----

|Erase<br>Code|Description|
|---|---|
|08h|**Erase persistently stored application data**<br>Persistently stored application data (definition in 3.7.1.2.3.2.4) shall become invalid when an<br>A_Restart-PDU is received.<br>**Channel Number**:<br>= 00h:<br>The persistently stored application data of all channels shall be reset.<br>≠ 00h:<br>The persistently stored application data of only this given Channel shall be reset.|
|00h<br>09h to<br>FFh|These values are reserved.<br>The Management Client shall not use these Erase Codes.<br>The Management Server shall on reception of an A_Restart-PDU with an Erase Code<br>value in this range<br>- neither execute a Basic Restart nor any Master Reset, and<br>- respond with an A_Restart.res with Error Code “Unsupported Erase Code”.<br>**Channel Number:** not defined|


The Management Server shall handle the requested Master Reset as specified above and shall respond
with an A_Restart_Response-PDU as follows:

   - with the field Response set to 1, and
   - with all bits 4 to 1 of the APCI/ASDU cleared, and
   - with the field restart_type set to 1, and
   - with the field Error Code, and
   - with the field Process Time.

Octet 6 Octet 7 Octet 8 Octet 9 Octet 10

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Error Code Process Time

1 1 1 0 1 0 0 0 0 1

**Figure 22 - A_Restart_Response-PDU (example)**

The Error Code shall indicate to the Management Client the result of the requested A_Restart from the
Management Server. The field Error Code shall be encoded and sent as specified in Table 5.

**Table 5 – Error Code**

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|APCI<br>APCI<br>APCI<br>APCI|Response|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|reserved<br>reserved<br>reserved<br>reserved|Restart Type|<br>Error Code|<br>Error Code|<br>Error Code|<br>Error Code|<br>Error Code|<br>Error Code|<br>Error Code|<br>Error Code|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|Process Time|
|||||||1|1|1|0|1|0|0|0|0|1|||||||||||||||||||||||||

|Error<br>Code|Description|
|---|---|
|00h:|**No Error**<br>The Management Server has properly received the A_Restart-PDU and will execute it.|
|01h|**Access denied**<br>The Management Server has properly received the A_Restart-PDU.<br>Master Reset functionality is in this Management Server protected by authorization and<br>the requesting Management Client is not properly authorized.<br>It is recommended that this Error Code be responded only if Resources are involved<br>that are protected by an access level of 2 and higher.|
|02h|**Unsupported Erase Code**<br>The Management Server has properly received the A_Restart-PDU; the Management<br>Client may have the required authorization; the requested Erase Code is not supported.|


-----

|Error<br>Code|Description|
|---|---|
|03h|**Invalid Channel Number**<br>This Erase Code value shall be responded in the following cases.<br>- The requested Erase Code requires the Channel Number to be 00h but it is not.<br>- A Channel Number different from 00h is requested but the Management Server<br>does not support application channels.<br>- The Channel Number is used for an application channel that is not supported.|
|04h to<br>255h|These values are reserved. The Management Server shall not use any value in this range.|


3.7.1.2.3.2 Specific requirements

3.7.1.2.3.2.1 Factory Reset and Factory Reset without IA
Some system network Resources shall or shall not be reset, as specified in Table 6.

**Table 6 – Reset of network Resources in function of the Erase Code**

**Erase Code**

**Factory Reset**
**Factory Reset**

**without IA**

**Parameter** **02h** **07h**

 - IA

 - Domain Address (RF and PL)

 - IP address

 - IP address mask

 - IP multicast address shall be reset shall NOT be reset

 - IP address assignment method

 - IP default gateway

 - KNXnet/IP Tunnelling PID_ADDITIONAL_INDIVIDUAL_ADDRESSES

After a Factory Reset the IP device obviously assumes an IP address that is implementation specific. It
may be a default fixed IP address, or it may depend on the default assignment method.

3.7.1.2.3.2.2 “Reset to default” and KNX Security
In the below, for “Reset to default”, this is, Master Reset with the Erase Codes 02h “Reset to default
state”, 07h “Reset to default without IA” and “Local Reset to default state” the requirements shall be
interpreted as follows.

**Effect** **Length shall be set Still used memory** **Unused memory**

**cleared** to 0 does not exist shall be set to 00h

**reset to default value** as appropriate implementation shall be set to 00h
specific values

So, not-only the length of the array Property Values may be set back to 0, but also that the unused
memory shall be set to 00h.

|Parameter|Erase Code|Col3|
|---|---|---|
|**Parameter**|**Factory Reset**|**Factory Reset**<br>**without IA**|
|**Parameter**|**02h**|**07h**|
|• IA|shall be reset|shall NOT be reset|
|• Domain Address(RF and PL)|• Domain Address(RF and PL)|• Domain Address(RF and PL)|
|• IP address|• IP address|• IP address|
|• IP address mask|• IP address mask|• IP address mask|
|• IP multicast address|• IP multicast address|• IP multicast address|
|• IP address assignment method|• IP address assignment method|• IP address assignment method|
|• IP defaultgateway|• IP defaultgateway|• IP defaultgateway|
|• KNXnet/IP Tunnelling PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES|• KNXnet/IP Tunnelling PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES|• KNXnet/IP Tunnelling PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES|

|Effect|Length shall be set|Still used memory|Unused memory|
|---|---|---|---|
|**cleared**|to 0|does not exist|shall be set to 00h|
|**reset to default value**|as appropriate|implementation<br>specific values|shall be set to 00h|


-----

NOTE 13 Otherwise, if only the length would be set to 0, a malicious Client could after the “Reset to default”
use the FDSK to set the length back and read any possible remaining data that was not wiped, like Group Keys,
etc.

3.7.1.2.3.2.3 “Reset to default” and Authorisation Keys
NOTE 14 The below concerns the keys used in the services A_Key_Write and A_Authorise and should not
be confused with the keys specified further in this paper related to KNX Secure.
If the MaS performs a Master Reset, then the following shall apply.

**Erase Code** **Effect on the Authorisation Keys**

**01h** **Confirmed Restart** not influenced: the Authorisation Keys shall not
change.

**02h** **Reset to default state** The MaS shall set the Authorisation Keys of the
access level to which the requesting MaC is
authorised and higher level (higher numerical value)
to their default settings.

EXAMPLE 7 According [04][ 9)], the MaC will typically be
authorised for the access level 2. If it requests a “Reset to
_default” or a “Reset to default without IA”, then the MaS shall_
sets all Authorisation Keys of level 2 to level 16 (or maximum
supported level) to default values.
NOTE 15 The ex-factory value for an Authorisation Key is
typically FFFFFFFFh.

**03h** **ResetIA** not influenced: the Authorisation Keys shall not
change.

**04h** **ResetAP** See Erase Code 03h “ResetIA”.

**05h** **ResetParam** See Erase Code 03h “ResetIA”.

**06h** **ResetLinks** See Erase Code 03h “ResetIA”.

**07h** **Reset to default without** See Erase Code 02h “Reset to default state”.
**IA**

**n.a.** **Local Reset to default** See Erase Code 02h “Reset to default state”.
**state** _Additionally, the Authorisation Keys for the lower_

levels (lower numerical value) may either remain
unchanged or be reset to their default values; the
behaviour is implementation specific.

3.7.1.2.3.2.4 Persistently stored application data and Erase Code 08h

9) See [03] Table 1 – “Use of access levels for different purposes and Profiles”.

|Erase Code|Effect on the Authorisation Keys|
|---|---|
|**01h**<br>**Confirmed Restart**|not influenced: the Authorisation Keys shall not<br>change.|
|**02h**<br>**Reset to default state**|The MaS shall set the Authorisation Keys of the<br>access level to which the requesting MaC is<br>authorised and higher level (higher numerical value)<br>to their default settings.<br>EXAMPLE 7<br>According [04] 9), the MaC will typically be<br>authorised for the access level 2. If it requests a_“Reset to_<br>_default”_ or a_“Reset to default without IA”_, then the MaS shall<br>sets all Authorisation Keys of level 2 to level 16 (or maximum<br>supported level) to default values.<br>NOTE 15<br>The ex-factory value for an Authorisation Key is<br>typically FFFFFFFFh.|
|**03h**<br>**ResetIA**|not influenced: the Authorisation Keys shall not<br>change.|
|**04h**<br>**ResetAP**|See Erase Code 03h “ResetIA”.|
|**05h**<br>**ResetParam**|See Erase Code 03h “ResetIA”.|
|**06h**<br>**ResetLinks**|See Erase Code 03h “ResetIA”.|
|**07h**<br>**Reset to default without**<br>**IA**|See Erase Code 02h “Reset to default state”.|
|**n.a.**<br>**Local Reset to default**<br>**state**|See Erase Code 02h “Reset to default state”.<br>_Additionally,_ the Authorisation Keys for the lower<br>levels (lower numerical value) may either remain<br>unchanged or be reset to their default values; the<br>behaviour is implementation specific.|


-----

**Definition**

In the context of Erase Code 08h, additionally, the expression “Persistently stored application data” is
used. Characteristics of these data are the following.

   - They are stored persistently in a device in such a way that they are not erased by interruption
of mains or bus voltage, or a basic restart.

   - They are application specific; they are not KNX system data (like load states, run states,
security settings…), they are not standardised.

   - They are no data of the download image from the MaC.
They can be changed data from the download image of the MaC but after erasing the
persistently stored data the originally downloaded data from the MaC must be valid again.

   - It is application specific which data will be erased on reception of a Master Reset with the
Erase Code 08h.

EXAMPLE 08 Temperature sensor calibration data that took effort to be measured and calculated
most likely shall not be erased.
EXAMPLE 09 an adapted set point temperature value
EXAMPLE 10 a fan speed level of a room temperature controller device
EXAMPLE 11 an adapted dimmer characteristic in a dimmer

   - Their handling via Master Reset and the Erase Code 08h are recommended to be subject to
the device documentation. The documentation should list the data that are persistently stored
and those that are erased on reception of Master Reset with the Erase Code 08h.

**Procedure**

To erase persistently stored application data with the help of the Master Reset the installer operates the
MaC to issue a Master Reset with type “Erase persistently saved application data”.

The MaC shall issue an A_Restart with restart type = 1 (Master Reset) with Erase Code “Erase
persistently saved application data”. A channel number may be used to define a device channel for the
erasing action.

If the device receives the message, it shall execute a Basic Restart. After starting-up the memory
content of the persistently stored application data is invalid. So, the device application starts working
without use of the formerly persistently stored application data.

If a channel number ≠ 00h is set in the A_Restart and the channel number is present in the device, then
only the persistently stored application data of the referred channel are invalid at start-up.

The device starts normal working.

The affected data from this procedure are the persistently stored application data and runtime data that
are changed by a basic restart.

The target device shall support channel number 00h for all channels or for general erasing of persistent
application data. It may support further channel numbers > 00h. If the requested channel number in the
A_Restart is not supported by the target device, it shall respond with an A_Restart_Response-PDU
with the Error Code “Invalid Channel Number”.

##### 3.7.2 Procedure: DM_Restart_RCl
**Use**

This method shall use the point-to-point connectionless communication mode.

The Management Client shall prior to calling this Management Procedure with a Master Reset verify
that this feature is effectively supported by the Management Server. If not, the procedure shall only be
called with a Basic Restart[ 10)].

10) Existing implementations may not check bit 0 of octet 7 and may not react as expected. They may ignore the
service entirely, only perform a Basic Restart if a Master Reset is called or exhibit another behaviour.


-----

###### Used Application Layer services for Management

  - A_Restart

**Parameters of the Management Procedure**

DM_Restart_RCl (/* [in] */ mpp_RestartType, /* [in] */ mpp_EraseCode,
/* [in] */ mpp_ChannelNumber, /* [out] */ mpp_ErrorCode,
/* [out] */ mpp_ProcessTime)

mpp_RestartType: This Management Procedure Parameter shall indicate whether a Basic
Restart or a Master Reset shall be executed.
mpp_EraseCode: This Management Procedure Parameter shall indicate which
Resource(s) shall be reset to its (their) default value. This is void in case
only a Basic Restart is executed.
mpp_ChannelNumber: The number of the application channel that shall be reset or 00h.
mpp_ErrorCode This Management Procedure Parameter shall contain the Error Code
returned by the Management Client.
mpp_ProcessTime This Management Procedure Parameter shall return to the Management
Client the Process Time needed by the Management Server. The
Management Client shall consider this mpp_ProcessTime as time-out
after which communication attempts following a Master Reset shall be
considered without success.

**Variables**

None.
**Sequence**


Management
Client

The Management Client shall send an A_Restart-PDU to the Management Server in point-to-point connectionless communication
mode; the fields of the A_Restart-PDU shall be set according the
values of the Parameters of this Management Procedure. Reserved
and unused fields shall be set to 0.

A_Restart-PDU
(restart_type = mpp_RestartType,
erase_code = mpp_EraseCode
channel_number = mpp_ChannelNumber)


Management
Server


remark


The Management Server shall confirm with an A_Restart_Response-PDU if a
Master Reset is requested. It shall then execute a Basic Restart or Master Reset as
requested.
A_Restart_Response-PDU
(restart_type = mpp_RestartType,
mpp_ErrorCode = error_code,
mpp_ProcessTime = process_time)

The Management Server shall reset the Resource(s) as indicated in the
A_Restart-PDU. The Management Server shall additionally restart.
The Management Client shall interpret any error.
If further Management Procedures follow, the Management Client has
to poll the Management Server for at least the period given by the
mpp_ProcessTime. If mpp_ProcessTime expires without reaction
from the Management Server, then the Management Client shall try
the subsequent Management Procedure one last time, before it may
conclude that the Management Server does no longer respond.


-----

**Exception handling**

The general exception handling shall be applicable.

The following errors and exceptions shall be checked in the below given priority.

(1) If the Management Server receives an A_Restart-PDU with a reserved field with a value

different from 0, then this service request shall be ignored.

(2) If the Management Server receives an A_Restart-PDU but the Management Client does not

have the required access rights (KNX Authorization) then it shall respond with an
A_Restart_Response-PDU with Error Code = 01h “Access Denied”.

(3) If the Management Server receives an A_Restart-PDU with an Erase Code that it does not

support or that is specified as “reserved” then it shall respond with an A_Restart_ResponsePDU with Error Code = 02h “Unsupported Erase Code”.

(4) The Management Server shall respond with the Error Code 03h = “Invalid Channel Number”

in any of the following cases.

      - It receives an A_Restart-PDU with a Channel Number that is not 00h with an Erase
Code for which the Channel Number shall be 00h.
      - It receives an A_Restart-PDU with an Erase Code that allows the Channel Number to be
different from 00h; the Channel Number is different from 00h but the Management
Server does not support application channels.
      - It receives an A_Restart-PDU with an Erase Code that allows the Channel Number to be
different from 00h; the Channel Number is different from 00h and the Management
Server does support application channels but does not have a channel with the requested
channel number.

##### 3.7.3 Procedure: DM_Restart_RCo
**Use**

This method shall use the point-to-point connection oriented remote communication.

The Management Client shall prior to calling this Management Procedure with a Master Reset verify
that this feature is effectively supported by the Management Server. If not, the procedure shall only be
called with a Basic Restart[ 11)].

A DM_Connect shall be executed before executing this Management Procedure.

After reception of the A_Restart-PDU this Transport Layer connection breaks down with the
execution of the A_Restart service; nevertheless an explicit DM_Disconnect procedure shall follow.

**Used Application Layer services for Management**

 - A_Restart

**Parameters of the Management Procedure**

DM_Restart_RCo (/* [in] */ mpp_RestartType, /* [in] */ mpp_EraseCode,
/* [in] */ mpp_ChannelNumber, /* [out] *mpp_ErrorCode,
/* [out] */ mpp_ProcessTime)

mpp_RestartType: This Management Procedure Parameter shall indicate whether a Basic
Restart or a Master Reset shall be executed.

11) Existing implementations may not check bit 0 of octet 7 and may not react as expected. They may ignore the
service entirely, only perform a Basic Restart if a Master Reset is called or exhibit another behaviour.


-----

mpp_EraseCode: This Management Procedure Parameter shall indicate which
Resource(s) shall be reset to its (their) default value. This is void in
case only a Basic Restart is executed.
mpp_ChannelNumber: The number of the application channel that shall be reset or 00h.
mpp_ErrorCode This Management Procedure Parameter shall contain the Error Code
returned by the Management Client.
mpp_ProcessTime This Management Procedure Parameter shall return to the Management
Client the Process Time needed by the Management Server. The
Management Client shall consider this mpp_ProcessTime as time-out
after which communication attempts following a Master Reset shall be
considered without success.

**Variables**

None.

###### Sequence


Management
Client

The Management Client shall send an A_Restart-PDU to the Management
Server in point-to-point connection-oriented communication mode; the fields of
the A_Restart-PDU shall be set according the values of the Parameters of this
Management Procedure. Reserved and unused fields shall be set to 0.

A_Restart-PDU
(restart_type = mpp_RestartType,
erase_code = mpp_EraseCode,
channel_number = mpp_ChannelNumber)


Management
Server


remark


The Management Server shall confirm with an A_Restart_Response-PDU if a Master
Reset is requested. It shall then execute a Basic Restart or Master Reset as requested.
A_Restart_Response-PDU
(restart_type = mpp_RestartType,
mpp_ErrorCode = error_code,
mpp_ProcessTime = process_time))

The Management Server shall reset the related Resource as indicated in the

A_Restart-PDU (1). The Management Server shall additionally restart.
It is recommended that the execution of the Basic Restart includes closing the Transport Layer connection.

This is however not required.
Additionally, it may be that the reset of the Management Server’s communication system
leads to the effect that the handling of the T_Disconnect in the Management Server’s communication stack

“down” is not completed and that no T_Disconnect –frame is sent on the bus.
(5) T_Disconnect-PDU

()

abort the connection of the client side Transport Layer

T_Disconnect-PDU

()


-----

###### Exception handling

The general exception handling shall be applicable.

(1) If the Management Server receives an A_Restart-PDU with a reserved field with a value

different from 0, then this service request shall be ignored.

(2) If the Management Server receives an A_Restart-PDU but the Management Client does not

have the required access rights (KNX Authorization) then it shall respond with an
A_Restart_Response-PDU with Error Code = 01h “Access Denied”.

(3) If the Management Server receives an A_Restart-PDU with an Erase Code that it does not

support then it shall respond with an A_Restart_Response-PDU with Error Code = 02h
“Unsupported Erase Code”.

(4) The Management Server shall respond with the Error Code 03h = “Invalid Channel Number”

in any of the following cases.

      - It receives an A_Restart-PDU with a Channel Number that is not 00h with an Erase
Code for which the Channel Number.
      - It receives an A_Restart-PDU with an Erase Code that allows the Channel Number to be
different from 00h; the Channel Number is different from 00h but the Management
Server does not support application channels.
      - It receives an A_Restart-PDU with an Erase Code that allows the Channel Number to be
different from 00h; the Channel Number is different from 00h and the Management
Server does support application channels but does not have a channel with the requested
channel number.
(5) All telegrams sent out by the Management Server shall be ignored, except negative

TL-confirmations.
In particular, the recommended T_Disconnect-PDU from the Management Server may or may
not be sent on the bus. The Management Client shall take that into account.
1 Regardless of whether or not a T_Disconnect-PDU is received from the Management
Server, the Management Client shall issue a T_Disconnect-PDU to the Management
Server.
2 The Management Client shall wait for a possible T_Disconnect-PDU for
6 seconds.(See NOTE 16)
       - If after this time no T_Disconnect-PDU is received, then this shall not be regarded as
a protocol error.
       - If the Management Client receives a T_Disconnect-PDU then it shall ignore this
message. This T_Disconnect-PDU may be received before or after the “own”
mandatory T_Disconnect-PDU from the Management Client specified under 1.
In both cases, at first after this time-out has elapsed, the Management Client shall
continue the possible further configuration of the Management Server: the configuration
shall not be continued while this time-out has not elapsed.

NOTE 16 This is because a possible subsequent T_Connect-PDU from the MaC and the awaited
T_Disconnect-PDU from the MaS may miss each other on the network. Cause and consequence are then
unclear to both MaS and MaC, which will leave the TL state machines in an unpredictable state.

##### 3.7.4 Procedure: DMP_Restart_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

  - PC_Set_Value


-----

**Parameters of the Management Procedure**

DMP_Restart_LEmi1(/* [out] */ DmpError)

DmpError: Possible error indication.

**Sequence**

Management
Client

PC_Set_Value.req message
(Length = 1 octet, Address = 0060h, data = C0h)

wait until Management Server was restarted

**Exception handling**

The general exception handling shall apply.

#### 3.8 DM_Delay


Management
Server


remark


##### 3.8.1 Use
This device Management Procedure shall be used to wait a specified time before starting the next
action.

DM_Delay (flags, delay time)

delay time Time in milliseconds
flags All bits are reserved. These shall be set to 0. This shall be tested
by the Management Client.

##### 3.8.2 Procedure: DMP_Delay
**Used Application Layer Services for Management**

None.

**Sequence**


Management
Client


Management
Server


remark


delay for specified time

**Exception handling**

The general exception handling shall apply.

#### 3.9 DM_IndividualAddressRead

##### 3.9.1 Use
This device Management Procedure shall be used to read out the Individual Addresses of the local
device, independent of the Programming Mode. For remote procedures please refer to the clause 2
"Network Management Procedures".

A DM_Connect shall be executed before executing this Management Procedure.

DM_IndividualAddressRead (Individual Address)

Individual Address contains the Individual Address of the device


-----

##### 3.9.2 Procedure: DMP_IndividualAddressRead_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

  - PC_Get_Value.req
**Sequence**


Management
Client

PC_Get_Value.req (Addr = 117h, Length = 2)

PC_Get_Value.con
(Addr = 117h, Length = 2, Data = PPPP)

**Exception handling**

The general exception handling shall apply.

#### 3.10 DM_IndividualAddressWrite


Management
Server


remark

different or no data received
⇒ error


##### 3.10.1 Use
This device Management Procedure shall be used to write the Individual Addresses of the local device,
independent of the Programming Mode. For remote procedures please refer to the clause 2 "Network
Management Procedures".

A DM_Connect shall be executed before executing this Management Procedure.

DM_IndividualAddressWrite (Individual Address)
Individual Address contains the Individual Address of the device

##### 3.10.2 Procedure: DMP_IndividualAddressWrite_LEmi1
This Management Procedure shall use the local communication with EMI 1.

###### Used EMI-services for Management

 - PC_Get_Value

 - PC_Set_Value

**Parameters of the Management Procedure**

DMP_IndividualAddressWrite_LEmi1(/* [in] */ IAnew, /* [out] */ IAresult)

IAnew: The Individual Address that shall be written in the device.

IAresult: The Individual Address as read back from the device after writing
IAnew


-----

**Sequence**

Management
Client

PC_Set_Value.req message
(Length = 2, Address = 0117h, Data = IAnew)

PC_Get_Value.req message
(Length = 2, Address = 0117h,)

PC_Get_Value.con message
(Length = 2, Address = 0117h, Data = IAresult)

**Exception handling**

The general exception handling shall apply.

#### 3.11 DM_DomainAddress_Read


Management
Server


remark

If IAresult differs from IAnew
or if no data received ⇒ error


##### 3.11.1 Use
This device Management Procedure shall be used to read the Domain Address of the local device,
independent of the Programming Mode. For remote procedures please refer to the clause 2 "Network
Management Procedures".

A DM_Connect shall be executed before executing this Management Procedure.

DM_DomainAddressRead (Domain Address)
Domain Address contains the Domain Address of the device

##### 3.11.2 Procedure: DMP_DomainAddressRead_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management for Management**

  - PC_Get_Value.req

**Sequence**


Management
Client

PC_Get_Value.req (Addr = 0102h Length = 2)

PC_Get_Value.con
(Addr = 0102h Length = 2, Data =

**Exception handling**

The general exception handling shall apply.


Management
Server


remark

different or no data received
⇒ error


-----

#### 3.12 DM_DomainAddressWrite

##### 3.12.1 Use
This device Management Procedure shall be used to write the Domain Address of the local device,
independent of the Programming Mode. For remote procedures please refer to the clause 2 "Network
Management Procedures".

A DM_Connect shall be executed before executing this Management Procedure.

DM_DomainAddressWrite (Domain Address)

Domain Address contains the Domain Address of the device

##### 3.12.2 Procedure: DMP_DomainAddressWrite_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

  - PC_Get_Value.req

  - PEI_Memory_Write

**Sequence**


Management
Client

PEI_Memory_Write
(Addr = 0102h, Length = 2, Data = BBBB)

PC_Get_Value.req (Addr = 0102h Length = 2)

PC_Get_Value.con
(Addr = 0102h,Length = 2, Data = BBBB)

**Exception handling**

The general exception handling shall apply.

#### 3.13 DM_ProgMode_Switch


Management
Server


remark

different or no data received
⇒ error


##### 3.13.1 Use
This device Management Procedure shall switch the Programming Mode of the device.

A DM_Connect shall be executed before executing this Management Procedure.

DM_ProgMode_Switch (flags, mode)

flags All bits are reserved. These shall be set to 0. This shall be tested
by the Management Client.
mode 0: switch Programming Mode off
1: switch Programming Mode on


-----

##### 3.13.2 Procedure: DMP_ProgModeSwitch_RCo
This Management Procedure shall use the connection oriented communication mode.

The Programming Mode shall be realised as “Programming Mode – Realisation Type 2” as specified
in [05].

NOTE This means that the state of the Programming Mode is located at memory address 60h.

**Used Application Layer Services for Management**

  - A_Memory_Read

  - A_Memory_Write

**Sequence**


Management
Client


Management
Server


A_Memory_Response-PDU
(Addr = 60h, Length = 1, Data = DD)

A_Memory_Write-PDU
(Addr = 60h, Length = 1, Data = DD)

**Exception handling**

The general exception handling shall apply.

##### 3.13.3 Procedure: DMP_ProgModeSwitch_LEmi1
This Management Procedure shall use the local communication with EMI 1.


remark

A_Disconnect.ind ⇒ error,
different or no data received
⇒ error

In the data (DD) bit 0 has to
be set according to the mode.
The parity (bit 7) has to be
calculated.


The Programming Mode shall be realised as “Programming Mode – Realisation Type 2” as specified
in [05].

NOTE This means that the state of the Programming Mode is located at memory address 60h.

**Used EMI-services for Management**

  - PC_Get_Value.req

  - PEI_Memory_Write


-----

**Sequence**

Management
Client

PC_Get_Value-PDU
(Addr = 60h, Length = 1)

PC_Get_Value-PDU
(Addr = 60h, Length = 1, Data = DD)

PEI_Memory_Write-PDU
(Addr = 60h, Length = 1, Data = DD)

**Exception handling**

The general exception handling shall apply.

#### 3.14 DM_PeiTypeVerify


Management
Server


remark

different or no data received
⇒ error

In the data (DD) bit 0 has to
be set according to the mode.
The parity (bit 7) has to be
calculated.


##### 3.14.1 Use
This device Management Procedure shall read the current PEI type of the device and compare it with
the specified data. The data shall be located either in the management control or in the data block.

A DM_Connect shall be executed before executing this Management Procedure.

DM_PeiTypeVerify (flags, data)

flags bit 0 location of data
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0.
data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure

##### 3.14.2 Procedure: DMP_PeiTypeVerify_RCo_ADC
This Management Procedure shall use the connection oriented communication mode.
The value shall be read via the service A_ADC_Read.

**Used Application Layer Services for Management**

  - A_ADC_Read


-----

###### Sequence

Management
Client


Management
Server


remark


A_ADC_Response-PDU A_Disconnect.ind ⇒

(AD-channel, Data) error,

different or no data received
⇒ error

The formula to calculate the PEI type is:

###### 10 ⋅ ADC _Value + 60 PEI _ Type = 128


**Exception handling**

The general exception handling shall apply.

##### 3.14.3 Procedure: DMP_PeiTypeVerify_R_IO
This Management Procedure shall use the connection oriented or connectionless communication
mode.
The value shall be read via the Interface Objects.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read

**Sequence**


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist⇒
error

A_Disconnect.ind ⇒ error,
no data received ⇒ error


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU
(object_index = 00h, PID = PID_PEI_TYPE)

A_PropertyDescription_Response-PDU
(object_index = 00h, PID = PID_PEI_TYPE,
type = …, ...)

endif

A_PropertyValue_Read-PDU
(object_index = 00h, PID = PID_PEI_TYPE,
start_index = 01h, element_count = 01h)

A_PropertyValue_Response-PDU
(object_index = 0h, PID = PID_PEI_TYPE,
start index = 01h, element_count = 01h,
data = PEI-Type)

endfor


-----

**Exception handling**

The general exception handling shall apply.

#### 3.15 DM_PeiTypeRead

##### 3.15.1 Use
This device Management Procedure shall read the current PEI type of the device and store the value in
the specified data block.

A DM_Connect shall be executed before executing this Management Procedure.

DM_PeiTypeRead (flags, dataBlockStartAddress, data)

flags bit 0 location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
data the data read by this Management Procedure

##### 3.15.2 Procedure: DMP_PeiTypeRead_RCo_ADC
This Management Procedure shall use the connection oriented communication mode.
The value shall be read via the service A_ADC_Read.

**Used Application Layer Services for Management**

  - A_ADC_Read

**Sequence**


Management
Client

A_ADC_Read-PDU
(AD-channel = 4, count = 1)

A_ADC_Response-PDU

(AD-channel, Data)

The formula to calculate the PEI type is:


Management
Server


remark

A_Disconnect.ind ⇒
error,
no data received ⇒ error


###### 10 ⋅ ADC _Value + 60 PEI _ Type = 128

**Exception handling**

The general exception handling shall apply.


-----

##### 3.15.3 Procedure: DMP_PeiTypeRead_R_IO
This Management Procedure shall use the connection oriented or connectionless communication
mode.
The value shall be read via the Interface Objects.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read

###### Sequence


Management
Client


Management
Server


remark


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU
(object_index = DeviceObject, PID = PID_PEI_TYPE)

A_PropertyDescription_Response-PDU
(object_index = DeviceObject, PID = PID_PEI_TYPE,

type = .., ...)

endif

A_PropertyValue_Read-PDU
(object_index = DeviceObject, PID = PID_PEI_TYPE,

start_index = 01H, element_count = 01h)

A_PropertyValue_Response-PDU
(object_index = DeviceObject, PID = PID_PEI_TYPE,

start_index = 01H, element_count = 01h,
data = PEI-Type)

endfor

**Exception handling**

The general exception handling shall apply.

#### 3.16 DM_MemWrite


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
no data received ⇒ error


##### 3.16.1 Use
This device Management Procedure shall write a contiguous block of data to the specified memory
addresses.

The data shall be located either in the management control or in the data block. Only the data that is
specified in the data block shall be written. Depending on the flag the data shall be verified
immediately. If the deviceStartAddress is higher than the deviceEndAddress this Management
Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.


-----

DM_MemWrite (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in Management Procedure
bit 1 verify enabled / disabled
0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0.
deviceStartAddress address of first memory octet that is written by this Management
Procedure
deviceEndAddress address of the last octet that is written by this Management
Procedure
data the data that are transferred by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.
**Data Format**

code flags dataBlockStartAddress deviceStartAddress deviceEndAddress reserved /
data

20h FFh BBBB BBBB SSSS SSSS EEEE EEEE 00h / DDh

1 octet 1 octet 4 octet 4 octet 4 octet 18 octet

##### 3.16.2 Procedure: DMP_MemWrite_RCo
**Use**

This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall not be used.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs and/or A_Memory_Write-PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 12 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_Memory_Write

  - A_Memory_Read

|code|flags|dataBlockStartAddress|deviceStartAddress|deviceEndAddress|reserved /<br>data|
|---|---|---|---|---|---|
|20h|FFh|BBBB BBBB|SSSS SSSS|EEEE EEEE|00h / DDh|
|1 octet|1 octet|<br>4 octet|4 octet|4 octet|18 octet|


-----

**Sequence**

Management
Client


Management
Server


remark


for each datablock (data size ≤ maximal size), until all data are transmitted

A_Memory_Write-PDU

(Addr, Length, Data)

if verify = enabled

A_Memory_Read-PDU

(Addr, Length)

A_Memory_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

different or no data received
⇒ error
else


delay for programming the memory in the device[12]
endif
endfor

**Exception handling**

The general exception handling shall apply.

##### 3.16.3 Procedure: DMP_MemWrite_RCoV
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall be used.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs and/or A_Memory_Write-PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 12 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_Memory_Write

12) The delay time depends on the Management Server and on the amount of written octets (see [08]).


-----

**Sequence**

Management
Client

if Verify Mode is not active


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
if no data received ⇒ error

In the data (DD) bit 2
(Verify Mode) has to be set.

A_Disconnect.ind ⇒ error,
if verify = enabled and
different or no data received
⇒ error


if Property of device control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, type = .., ...)

endif

A_PropertyValue_Read-PDU
(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL,
start_index = 01h, element_count = 01h)

A_PropertyValue_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL,
start_index = 01h, element_count = 01h,
data = DDh, ..)

A_PropertyValue_Write-PDU
(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL,
start_index = 01h, element_count = 01h,
data = DDh, ..)

A_PropertyValue_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL,
start_index = 01h, element_count = 01,
data = XX, ..)

endif

for each data block (data size ≤ maximal size), until all data are transmitted


A_Memory_Response A_Disconnect.ind ⇒

(Addr, Length, Data) error,

if verify = enabled and
different or no data received
⇒ error
endfor

**Exception handling**

The general exception handling shall apply.


-----

##### 3.16.4 Procedure: DMP_MemWrite_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

  - PC_Get_Value

  - PC_Set_Value

**Parameters of the Management Procedure**

DMP_MemWrite_LEmi1(/* [in] */ DmpStartAddr, /* [in]*/ DmpEndAddr, /* [in]*/ DmpData,
/* [out] */ DmpError)

DmpStartAddr: The start address in the memory of the device into which the Data
shall be written.

DmpEndAddr: The end address in the memory of the device into which the Data shall
be written.

DmpData: The Data to be written in the device.

DmpError: Possible error indication.

**Service parameters**

SrvDataIn: The data that shall be written in the device in one call of the service
PC_Set_Value.

SrvDataOut: The data as read back from the device for each call of the service
PC_Set_Value.

SrvDBLen: The length of the datablock written in one call of the service
PC_Set_Value. This shall be 12 octets for all datablocks except for the
last one, which may be smaller.

SrvDBAddr: The start address in the memory of the device where the current
datablock shall be written.


-----

**Sequence**

Management
Client

for each datablock (≤12 octet), until all data are transmitted

PC_Set_Value.req message
(Length = SrvDBLen, Address = SrvDBAddr,
Data = SrvDBIn)

if verify = enabled

PC_Get_Value.req message
(Length = SrvDBLen, Address = SrvDBAddr)

PC_Get_Value.con message
(Length = SrvDBLen, Address = SrvDBAddr;
Data = SrvDBOut)

else

delay for programming the memory in the device[ 13)]
endif
endfor

**Exception handling**

The general exception handling shall apply.

#### 3.17 DM_MemVerify


Management
Server


remark


If SrvDBOut differs from
SrvDBIn or if no data
received ⇒ error


##### 3.17.1 Use
This device Management Procedure shall read a contiguous block of memory and compare it with the
specified data. The data shall be located either in the management control or in the data block. Only
the data that are specified in the data block shall be compared. If the deviceStartAddress is higher than
the deviceEndAddress this Management Procedure is skipped.

A DM_Connect shall be executed before executing this Management Procedure.

13) The delay time shall depend on the Management Server and on the amount of written octets (see [08]).


-----

DM_MemVerify (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0.
deviceStartAddress address of first memory octet that is compared by this
Management Procedure
deviceEndAddress address of the last octet that is compared by this Management
Procedure
data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.17.2 Procedure: DMP_MemVerify_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs and/or A_Memory_Write-PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 12 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_Memory_Read

**Sequence**


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒
error,
different or no data received
⇒ error


for each data block (data size ≤ maximal size), until all data are transmitted

A_Memory_Read-PDU

(Addr, Length)

A_Memory_Response-PDU

(Addr, Length, Data)

endfor


-----

**Exception handling**

The general exception handling shall apply.

##### 3.17.3 Procedure: DMP_MemVerify_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used Application Layer Services for Management**

  - PC_Get_Value

**Sequence**


Management
Client

for each data block (≤12 octet), until all data are transmitted

PC_Get_Value-PDU

(Addr, Length)

PC_Get_Value-PDU
(Addr, Length, Data)

endfor

**Exception handling**

The general exception handling shall apply.

#### 3.18 DM_MemRead


Management
Server


remark

different or no data received
⇒ error


##### 3.18.1 Use
This device Management Procedure shall read a contiguous block of memory and store it in the data
block. If the deviceStartAddress if higher than the deviceEndAddress this Management Procedure
shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

DM_MemRead (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0
deviceStartAddress address of first memory octet that is read by this Management
Procedure
deviceEndAddress address of the last octet that is read by this Management
Procedure
data the data that are read by this Management Procedure. The data are
stored in the data block.


-----

##### 3.18.2 Procedure: DMP_MemRead_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs and/or A_Memory_Write-PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 12 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_Memory_Read

**Sequence**


Management
Client


Management
Server


for each data block (data size ≤ maximal size), until all data are transmitted

A_Memory_Read-PDU

(Addr, Length)

A_Memory_Response-PDU

(Addr, Length, Data)

endfor

**Exception handling**

The general exception handling shall apply.

##### 3.18.3 Procedure: DMP_MemRead_LEmi1
This Management Procedure shall use the local communication with EMI 1.

**Used EMI-services for Management**

  - PC_Get_Value


remark

A_Disconnect.ind ⇒
error,
no data received ⇒ error


-----

**Parameters of the Management Procedure**

DMP_MemRead_LEmi1(/* [in] */ DmpStartAddr, /* [in] */ DmpEndAddr, /* [out] */ DmpData,
/* [out] */ DmpError)

DmpStartAddress: The start address of the memory of the device from which the Data
shall be read.

DmpEndAddress: The end address of the memory of the device from which the Data
shall be read.

DmpData: The contents of the memory as returned by the device.

DmpError: Possible error indication.

**Service parameters**

SrvDataOut: The data as read from the device for each call of the service
PC_Get_Value.

SrvDBLen: The length of the datablock that shall be in one call of the service
PC_Get_Value. This shall be 12 octets for all datablocks except for the
last one, which may be smaller.

SrvDBAddr: The start address in the memory of the device from which the current
datablock shall be read.

**Sequence**


Management
Client

for each data block (≤12 octet), until all data are transmitted

PC_Get_Value.req message
(Length = SrvDBLen, Addr = SrvDBAddr)

PC_Get_Value.con
(Length = SrvDBLen, Addr = SrvDBAddr,
Data = SrvDataOut)

endfor

**Exception handling**

The general exception handling shall apply.


Management
Server


remark

no data received ⇒ error


-----

#### 3.19 DM_UserMemWrite

##### 3.19.1 Use
This device Management Procedure shall write a contiguous block of data to the specified memory
addresses of the user memory in the Management Server. The data shall be located either in the
management control or in the data block. Only the data that are specified in the data block shall be
written. Depending on the flag the data shall be verified immediately. If the deviceStartAddress if
higher than the deviceEndAddress this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

DM_UserMemWrite (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in Management Procedure
bit 1 verify enabled / disabled
0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0.
deviceStartAddress address of first user memory octet that is written by this
Management Procedure
deviceEndAddress address of the last user memory octet that is written by this
Management Procedure
data the data that are transferred by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.19.2 Procedure: DMP_UserMemWrite_RCo
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall not be used.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs and/or A_Memory_Write-PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 11 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_UserMemory_Write

  - A_UserMemory_Read


-----

**Sequence**

Management
Client


Management
Server


remark


for each data block (data size ≤ maximal size), until all data are transmitted

A_UserMemory_Write-PDU

(Addr, Length, Data)

if verify = enabled

A_UserMemory_Read-PDU

(Addr, Length)

A_UserMemory_Response-PDU A_Disconnect.ind ⇒ error,

(Addr, Length, Data) if verify = enabled and

different or no data received
⇒ error
else

delay for programming the memory in the device[ 14)]
endif
endfor

**Exception handling**

The general exception handling shall apply.

##### 3.19.3 Procedure: DMP_UserMemWrite_RCoV
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall be used.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_UserMemory_Read-PDUs and/or A_UserMemory_Write-PDUs, as specified below, all of which
except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size
that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 11 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_UserMemory_Write

14) The delay time depends on the Management Server and on the amount of written octets (see [08]).


-----

**Sequence**

Management
Client

if Verify Mode is not active


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
if no data received ⇒ error

In the data (DD) bit 2 (Verify
Mode) has to be set.

A_Disconnect.ind ⇒ error,
if verify = enabled and
different or no data received
⇒ error


if Property of device control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, type = .., ...)

endif

A_PropertyValue_Read-PDU
(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, start_index = 01h,

element_count = 01h)

A_PropertyValue_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, start_index = 01h,

element_count = 01h, data = DD, ..)

A_PropertyValue_Write-PDU
(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, start_index = 01h,

element_count = 01h, data = DD, ..)

A_PropertyValue_Response-PDU

(object_index = DeviceObject,
PID = PID_DEVICE_CONTROL, start_index = 01h,

element_count = 01h, data = XX, ..)

endif

for each data block (data size ≤ maximal size), until all data are transmitted

A_UserMemory_Write-PDU

(Addr, Length, Data)


A_UserMemory_Response-PDU A_Disconnect.ind ⇒ error,

(Addr, Length, Data) if verify = enabled and

different or no data received
⇒ error
endfor

**Exception handling**

The general exception handling shall apply.


-----

#### 3.20 DM_UserMemVerify

##### 3.20.1 Use
This device Management Procedure shall read a contiguous block of user memory in the Management
Server and compare it with the specified data. The data shall be located either in the management
control or in the data block. Only the data that are specified in the data block shall be compared. If the
deviceStartAddress if higher than the deviceEndAddress this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

DM_UserMemVerify (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
If the data are located in the Management Procedure, this field is
set to 0.
deviceStartAddress address of first user memory octet that is compared by this
Management Procedure
deviceEndAddress address of the last user memory octet that is compared by this
Management Procedure
data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.20.2 Procedure: DMP_UserMemVerify_RCo
This Management Procedure shall use the connection oriented communication mode.

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_UserMemory_Read-PDUs and/or A_UserMemory_Write-PDUs, as specified below, all of which
except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size
that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 12 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_Memory_Read


-----

**Sequence**

Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
different or no data received
⇒ error


for each data block (data size ≤ maximal size), until all data are transmitted

A_UserMemory_Read-PDU

(Addr, Length)

A_UserMemory_Response-PDU

(Addr, Length, Data)

endfor

**Exception handling**

The general exception handling shall apply.

#### 3.21 DM_UserMemRead


##### 3.21.1 Use
This device Management Procedure shall read a contiguous block of memory in the Management
Server and store it in the data block. If the deviceStartAddress if higher than the deviceEndAddress
this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

DM_UserMemRead (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
deviceStartAddress address of first memory octet that is read by this Management
Procedure
deviceEndAddress address of the last octet that is read by this Management
Procedure
data the data that are read by this Management Procedure. The data are
stored in the data block.


-----

##### 3.21.2 Procedure: DMP_UserMemRead_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**
This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_Memory_Read-PDUs, as specified below, all of which except possibly the last PDU, shall have a
data field (ASDU) with a size equal to the maximum size that can be transported over the
communication path consisting of the Management Client, the Management Server and Couplers and
Routers in between these two.

   - If the Management Server does not support the L_Data_Extended frame format, then this
maximal size shall be 11 octets.
   - If the Management Server supports L_Data_Extended frames, then the maximal size shall be
adapted in function of the capabilities of the Management Server and possible Couplers and
Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_UserMemory_Read

**Sequence**


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
no data received ⇒ error


for each data block (data size ≤ maximal size), until all data are transmitted

A_UserMemory_Read-PDU

(Addr, Length)

A_UserMemory_Response-PDU

(Addr, Length, Data)

endfor

**Exception handling**

The general exception handling shall apply.

#### 3.22 DMP_MemWrite_Extended_R
**Use**


This Management Procedure shall use the connection oriented or connectionless communication
mode.

The Verify Mode of the Management Server shall not be used.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_MemoryExtended_Read-PDUs and/or A_MemoryExtended_Write-PDUs, as specified below, all of
which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum
size that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 10 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06]


-----

**Used Application Layer Services for Management**

- A_MemoryExtended_Write

- A_MemoryExtended_Write_Response

Management
Client


Management
Server


remark


for each datablock (data size ≤ maximal size), until all data are transmitted

A_MemoryExtended_Write -PDU

(Addr, Length, Data)

A_MemoryExtended_Write_Response -PDU A_Disconnect.ind ⇒

(Return Code, Addr) error,

negative Return Code
received ⇒ error
endfor

**Exception handling**


The general exception handling shall apply.

#### 3.23 DMP_MemVerify_Extended_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_MemoryExtended_Read-PDUs and/or A_MemoryExtended_Write-PDUs, as specified below, all of
which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum
size that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

The usage of this procedure instead of the DMP_MemWrite_Extended_R procedure will produce the
same amount of data on the bus. It still can be a useful procedure if the Server has no optimization in
his write algorithm and writes Data no matter if the same data is already stored in the memory.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 10 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

- A_MemoryExtended_Read

- A_MemoryExtended_Read_Response


-----

Management
Client


Management
Server


remark

A_Disconnect.ind ⇒
error,
negative Return Code
received ⇒ error


for each data block (data size ≤ maximal size), until all data are transmitted

A_MemoryExtended_Read -PDU

(Addr, Length)

A_MemoryExtended_Read_Response-PDU

(Return Code, Addr, Data)

endfor

**Exception handling**

The general exception handling shall apply.


#### 3.24 Procedure: DMP_MemRead_Extended_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Preconditions**

This Management Procedure shall transfer the data in datablocks and transmit these in subsequent
A_MemoryExtended_Read-PDUs and/or A_MemoryExtended_Write-PDUs, as specified below, all of
which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum
size that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 10 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

- A_MemoryExtended_Read

- A_MemoryExtended_Read_Response


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒
error,
negative Return Code
received ⇒ error


for each data block (data size ≤ maximal size), until all data are transmitted

A_MemoryExtended_Read -PDU

(Addr, Length)

A_MemoryExtended_Read_Response-PDU

(Return Code, Addr, Data)

endfor

**Exception handling**

The general exception handling shall apply.


-----

#### 3.25 DM_InterfaceObjectWrite

##### 3.25.1 Use
This device Management Procedure shall write to the specified Property value of an Interface Object.
The data shall be located either in the management control or in the data block. Depending on the flag
the data shall be verified immediately. The Interface Object can be addressed via the Object Type and
index (e.g. first Interface Object of type ´polling master´) or via the Object Index independent of the
type.

**Remark**

Existing implementations of Interface Object Servers in existing Management Servers may have fixed
Object Indexes for the Interface Objects for Device- and Network Management. This restriction shall
not be implemented in new developments. New developments of Management Clients shall instead
obtain the object_index by a preceding DM_InterfaceObjectScan-procedure if the object_index is not
known.

A DM_Connect shall be executed before executing this Management Procedure.

DM_InterfaceObjectWrite (flags, dataBlockStartAddress, object_type, object_index, PID,
start_index, noElements, data)

flags bit 0: location of data
0: in data block
1: in management control
bit 1: verify enabled / disabled
0: disabled
1: enabled
bit 2: address mode
0: address via Object Type / index
1: address via object index
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

object_type type of the Interface Object

object_index index of the Interface Object of one type. This index starts
counting from 0.

PID ID of the Property

start_index start element of the Property

noElements number of elements that are transferred

data the data that are transferred by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.25.2 Procedure: DMP_InterfaceObjectWrite_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.


-----

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Write

**Sequence**

Management
Client


Management
Server


remark


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = OO, PID = PH)

A_PropertyDescription_Response-PDU A_Disconnect.ind ⇒ error,
(object_index = OO, PID = PP, type = .., ...) Property does not exist ⇒

error
endif
for each data block, until all data are transmitted


A_PropertyValue_Response-PDU
(object_index = OOH, PID = PP, start_index = SSSS,

element_count = EE,
data = XX, ..)

endfor

**Exception handling**

The general exception handling shall apply.


A_Disconnect.ind ⇒ error,
if verify = enabled and
different or no data received
⇒ error


The Management Client shall not interpret the value of the Property Index contained in the
A_PropertyDescription_Response-PDU at the level of this Management Procedure. Possibly, error
handling in case an unexpected value of the Property Index can be handled at the level of the
Configuration Procedure in which this Management Procedure is used.


-----

##### 3.25.3 Procedure: DMP_ReducedInterfaceObjectWrite_R
Prior to this procedure the procedure DMP_Connect_RCl can be executed to identify the remote
device.

**Sequence**


Management
Client

for each data block, until all data is transmitted

A_PropertyValue_Write-PDU

(objectNr = OO, PID = PP,
start_index = SSSS, element_count = EE,
data = DD, ..)

A_PropertyValue_Reponse-PDU

(objectNr = 00, PID = PP,
start_index = SSSS, element_count = EE,
data = XX, …)

endfor


Management
Server


remark


A_Disconnect.ind ⇒ error,
if verify = enabled and
different or no data received
⇒ error


##### 3.25.4 Procedure: DMP_ExtInterfaceObjectWriteCon_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyExtDescription_Read

  - A_PropertyExtValue_WriteCon

**Sequence**


Management Management
Client Server

If Property of management control is unknown to the Management Client

A_PropertyExtDescription_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0)

A_PropertyExtDescription_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0, …)

endif
for each data block, until all data are transmitted

A_PropertyExtValue_WriteCon-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE, data = DD,…)

A_PropertyExtValue_WriteConRes-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE, return_code =
RR)

endfor


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
RR ≠ 0 ⇒ error


-----

**Exception handling**

The general exception handling shall apply.


The MaC shall not interpret the value of the Property Index contained in the A_Property_Description_Response-PDU at the level of this Management Procedure. Possibly, error handling in
case an unexpected value of the Property Index can be handled at the level of the Configuration
Procedure in which this Management Procedure is used.

##### 3.25.5 Procedure: DMP_ExtInterfaceObjectWriteUnCon_R
This Management Procedure shall use the connection oriented - or connectionless communication
mode.


**Used Application Layer Services for Management**

  - A_PropertyExtDescription_Read



  - A_PropertyExtValue_WriteUnCon

**Sequence**


Management Management
Client Server

If Property of management control is unknown to the Management Client

A_PropertyExtDescription_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0)

A_PropertyExtDescription_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0, …)

endif
for each data block, until all data are transmitted

A_PropertyExtValue_WriteUnCon-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE, data = DD,…)


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error


A_Disconnect.ind ⇒ error


endfor

**Exception handling**


The general exception handling shall apply.

The MaC shall not interpret the value of the Property Index contained in the A_Property_Description_Response-PDU at the level of this Management Procedure. Possibly, error handling in
case an unexpected value of the Property Index can be handled at the level of the Configuration
Procedure in which this Management Procedure is used.


#### 3.26 DM_InterfaceObjectVerify

##### 3.26.1 Use
This device Management Procedure shall read the Property value of an Interface Object and compare
it with the specified data. The data shall be located either in the management control or in the data
block. The Interface Object can be addressed via the Object Type and index (e.g. first object of type
´polling master´) or via the Object Index independent of the type.


-----

**Remark**

Existing implementations of Interface Object Servers in existing Management Servers may have fixed
Object Indexes for the Interface Objects for Device- and Network Management. This restriction shall
not be implemented in new developments. New developments of Management Clients shall instead
obtain the object_index by a preceding DM_InterfaceObject_Scan-procedure if the object_index is not
known.

A DM_Connect shall be executed before executing this Management Procedure.

DM_InterfaceObjectVerify (flags, dataBlockStartAddress, object_type, object_index, PID,
start_index, noElements, data)

flags bit 0: location of data
0: in data block
1: in management control
bit 2: address mode
0: address via Object Type / index
1: address via object index
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

object_type type of the Interface Object

object_index index of the Interface Object of one type. This index starts
counting from 0.

PID ID of the Property

start_index start element of the Property

noElements number of elements, which are compared

data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.26.2 Procedure: DMP_InterfaceObjectVerify_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read


-----

**Sequence**

Management
Client


Management
Server


remark


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = OO, PID = PP)

A_PropertyDescription_Response-PDU A_Disconnect.ind ⇒ error,
(object_index = OO, PID = PP, type = .., ...) Property does not exist ⇒

error
endif
for each data block, until all data are transmitted

A_PropertyValue_Read-PDU
(object_index = OO, PID = PP, start_index = SSSS,
element_count = EE)

A_PropertyValue_Response-PDU A_Disconnect.ind ⇒ error,
(object_index = OO, PID = PP, start_index = SSSS, different or no data received
element_count = EE, ⇒ error
data = XX, ..)

endfor

**Exception handling**

The general exception handling shall apply.

The Management Client shall not interpret the value of the Property Index contained in the
A_PropertyDescription_Response-PDU at the level of this Management Procedure. Possibly, error
handling in case an unexpected value of the Property Index can be handled at the level of the
Configuration Procedure in which this Management Procedure is used.

##### 3.26.3 Procedure: DMP_ExtInterfaceObjectVerify_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyExtDescription_Read

  - A_PropertyExtValue_Read

**Sequence**


Management Management
Client Server

If Property of management control is unknown to the Management Client

A_PropertyExtDescription_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0)

A_PropertyExtDescription_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0, …)


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error


-----

endif
for each data block, until all data are transmitted

A_PropertyExtValue_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE)

A_PropertyExtValue_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE, data = XX,…)

endfor


A_Disconnect.ind ⇒ error,
different or no data
received ⇒ error


**Exception handling**

The general exception handling shall apply.


The Management Client shall not interpret the value of the Property Index contained in the
A_PropertyDescription_Response-PDU at the level of this Management Procedure. Possibly, error
handling in case an unexpected value of the Property Index can be handled at the level of the
Configuration Procedure in which this Management Procedure is used.

#### 3.27 DM_InterfaceObjectRead


##### 3.27.1 Use
This device Management Procedure shall read the Property value of an Interface Object and store it in
the data block. The Interface Object can be addressed via the Object Type and Object Index (e.g. first
Interface Object of type ´polling master´) or via the Object Index independent of the type.

**Remark**


Existing implementations of Interface Object Servers in existing Management Servers may have fixed
Object Indexes for the Interface Objects for Device- and Network Management. This restriction shall
not be implemented in new developments. New developments of Management Clients shall instead
obtain the object_index by a preceding DM_InterfaceObject_Scan-procedure if the object_index is not
known.

A DM_Connect shall be executed before executing this Management Procedure.


-----

DM_InterfaceObjectRead (flags, dataBlockStartAddress, object_type, object_index, PID,
start_index, noElements, data)

flags bit 0: location of data
0: in data block
1: bit 2: address mode
0: address via Object Type / index
1: address via object index
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

object_type type of the Interface Object

object_index index of the Interface Object of one type. This index starts
counting from 0.

PID ID of the Property

start_index start element of the Property

noElements number of elements that are read

data the data that are read by this Management Procedure. The data
are stored in the data block.

##### 3.27.2 Procedure: DMP_InterfaceObjectRead_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read


-----

###### Sequence

Management
Client


Management
Server


remark


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = OO, PID = PP)

A_PropertyDescription_Response-PDU A_Disconnect.ind ⇒ error,
(object_index = OO, PID = PP, type = .., ...) Property does not exist ⇒

error
endif
for each data block, until all data are transmitted


A_PropertyValue_Response-PDU
(object_index = OO, PID = PP, start_index = SSSS,
element_count = EE,
data = XX, ..)


A_Disconnect.ind ⇒ error,
no data received ⇒ error


endfor

**Exception handling**

The general exception handling shall apply.

The Management Client shall not interpret the value of the Property Index contained in the
A_PropertyDescription_Response-PDU at the level of this Management Procedure. Possibly, error
handling in case an unexpected value of the Property Index can be handled at the level of the
Configuration Procedure in which this Management Procedure is used.

##### 3.27.3 Procedure: DMP_ReducedInterfaceObjectRead_R
Prior to this procedure the procedure DMP_Connect_RCl can be executed to identify the remote
device.

**Sequence**


Management
Client

for each data block, until all data is transmitted

A_PropertyValue_Read-PDU
(objectNr = OO, PID = PP, start_index = SSSS,
element_count = EE)

A_PropertyValue_Response-PDU
(objectNr = OO, PID = PP, start_index = SSSS,
element_count = EE, data = XX, ..)

endfor


Management
Server


remark


A_Disconnect.ind ⇒ error,
no data received ⇒ error


-----

##### 3.27.4 Procedure: DMP_ExtInterfaceObjectRead_R
This Management Procedure shall use the connection oriented - or connectionless communication
mode.

**Used Application Layer Services for Management**



  - A_PropertyExtDescription_Read

  - A_PropertyExtValue_Read

**Sequence**


**Management** **Management**
**Client** **Server**

If Property of management control is unknown to the Management Client

A_PropertyExtDescription_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0)

A_PropertyExtDescription_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
type = 0, …)

endif
for each data block, until all data are transmitted

A_PropertyExtValue_Read-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE)


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ no
data received ⇒ error


A_PropertyExtValue_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
start_index = SSSS, nr_of_elem = EE, data = XX,…)


endfor

**Exception handling**


The general exception handling shall apply.

The MaC shall not interpret the value of the Property Index contained in the A_Property_Description_Response-PDU at the level of this Management Procedure. Possibly, error handling in
case an unexpected value of the Property Index can be handled at the level of the Configuration
Procedure in which this Management Procedure is used.


-----

#### 3.28 DM_InterfaceObjectScan

##### 3.28.1 Use
This device Management Procedure shall scan for the available the Interface Objects in one
Management Server and return the description of each found Interface Object.

A DM_Connect shall be executed before executing this Management Procedure.

DM_InterfaceObjectScan (flags, dataBlockStartAddress, object_index, data)

flags bit 0: location of data
0: in data block
1: no data returned
bit 2: scan all properties
0: read only the type of the Interface Object
1: scan all the properties of the Interface Object
bit 3: scan Interface Objects
0: read only the data of one object
1: scan all Interface Objects
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

object_index index of the Interface Object. If Interface Object scan is enabled
the value shall be 0.

data the data that are read by this Management Procedure. The data
are stored in the data block.

For each found Interface Object the following data is returned - the end of the list is marked by
Interface Object nr. 0:

   - object_index
   - object_type
   - PropertyCount

For each found Property the following data shall be returned:

   - PropertyIndex
   - PID
   - Data Type
   - Number of elements
   - Access rights / write enable

##### 3.28.2 Procedure: DMP_InterfaceObjectScan_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read


-----

**Sequence**

Management
Client

object_index = 0;
repeat if Interface Object scan is enabled

A_PropertyDescription_Read-PDU
(object_index, PID = 0, Property_index = 0)

A_PropertyDescription_Response-PDU
(object_index, Property_index = 0, PID)

if Interface Object exists (Property ID <> 0)

A_PropertyValue_Read-PDU
(object_index, PID = 01h, start_index = 01h,
element_count = 01h)

A_PropertyValue_Response-PDU
(object_index, PID = 01h, start_index = 01h,
element_count = 01h, data = object_type)

endif
Property_index = 0;

repeat if Property scan is enabled

A_PropertyDescription_Read-PDU
(object_index, PID = 0, Property_index = 0)

A_PropertyDescription_Response-PDU
(object_index, Property_index = 0, PID)

Property_index ++

until PID = 0
object_index ++
until PID = 0


Management
Server


remark

A_Disconnect.ind ⇒ error,
no data received ⇒ error


-----

##### 3.28.3 Procedure: DMP_ReducedInterfaceObjectScan_R
**Use**

This Management Procedure shall scan the Interface Objects in a device with Reduced Interface
Objects. Prior to this Management Procedure the Management Procedure DMP_Connect_RCl can be
executed to identify the remote device.

**Sequence**


Management
Client

objectNr = 0;
repeat if Interface Object scan is enabled

A_PropertyValue_Read-PDU
(object_index = objectNr, PID = 01h,
start_index = 01h, element_count = 01h)

A_PropertyValue_Response-PDU
(object_index = objectNr, PID = 01h, start_index = 01h,
element_count = 01h, data =

endif
objectNr ++
until PID = 0

**Exception handling**

The general exception handling shall apply.


Management
Server


remark


PID 01h is the Object Type

A_Disconnect.ind ⇒ error,
no data received ⇒ error


##### 3.28.4 Procedure: DMP_ExtInterfaceObjectScan_R
This Management Procedure shall use the connection oriented - or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_PropertyExtDescription_Read

  - A_PropertyExtValue_Read

**Sequence**


**Management** **Management**
**Client** **Server**

If Property of management control is unknown to the Management Client

A_PropertyExtDescription_Read-PDU
(object_type = 0, object_instance = 1, PID =
PID_IO_LIST, type = 0)

A_PropertyExtDescription_Response-PDU
(object_type = 0, object_instance = 1, PID =
PID_IO_LIST, type = 0, …)

endif


A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error


-----

**Management** **Management**
**Client** **Server**

io_list = new[]{}
for each data block, until all data are transmitted

A_PropertyExtValue_Read-PDU
(object_type = 0, object_instance = 0, PID =
PID_IO_LIST, start_index = SSSS, nr_of_elem = EE)

A_PropertyExtValue_Response-PDU
(object_type = 0, object_instance = 0, PID =
PID_IO_LIST, start_index = SSSS, nr_of_elem = EE,

data = object_types)


A_Disconnect.ind ⇒ error,
no data received ⇒ error


io_list.Add(object_types)
endfor
Calculate Object Informations from io_list (object_index, object_type, object_instance)
foreach (object_index, object_type, object_instance) in io_list

Property_index = 0
repeat if Property scan is enabled

A_PropertyExtDescription_Read-PDU
(object_type, object_instance, PID = 0,
Property_index, type = 0)

A_PropertyExtDescription_Response-PDU
(object_type, object_instance, PID, Property_index,
type = 0, …)

Property_index ++
Until PID = 0
endfor

**Exception handling**


The general exception handling shall apply.

#### 3.29 DM_InterfaceObjectInfoReport


##### 3.29.1 Use
This Management Procedure shall be used by a Management Server to report the value of an Interface
Object Property to any interested communication partner.

**Used Application Layer Services for Management**



 - A_NetworkParameter_InfoReport

**Parameters of the Management Procedure**


DMP_InterfaceObjectInfoReport_RCl (/* [in] */ mpp_ASAP, /* [in] */ mpp_comm_mode,
/* [in] */ mpp_hop_count_type, /* [in] */ mpp_object_type, /* [in] */ mpp_PID,
/* [in] */ mpp_priority, /* [in] */ mpp_test_info, /* [in] */ mpp_test_result)

mpp_ASAP: The parameter ASAP shall only be evaluated if the parameter
mpp_comm_mode equals point-to-point connectionless. It shall in this
case contain the Individual Address of the communication partner to
which the A_NetworkParameter_InfoReport-PDU shall be sent.


-----

mpp_comm_mode: Communication mode that shall be used by the Management Server
for transmission of the A_NetworkParameter_InfoReport-PDU. It can
be
− point-to-all-points connectionless (this is broadcast), or
− point-to-point connectionless.

mpp_hop_count_type: Value of the hop_count that shall be used to transmit the
A_NetworkParameter_InfoReport-PDU.
NOTE 17 This value shall be fixed in function of the specific Property of which the value
shall be reported via this Management Procedure..

mpp_object_type: Value that shall be used by the Management Server for the subfield
object_type of the field parameter_type of the
A_NetworkParameter_InfoReport-PDU.

mpp_PID: Value that shall be used by the Management Server for the subfield
PID of the field parameter_type of the
A_NetworkParameter_InfoReport-PDU.

mpp_priority: The priority that shall be used for the transmission of the
A_NetworkParameter_InfoReport-PDU.

mpp_test_info: This shall be the contents of the field tests_info of the
A_NetworkParameter_InfoReport-PDU.

mpp_test_result: This shall be the contents of the field tests_result of the
A_NetworkParameter_InfoReport-PDU.

**Sequence**


Management
Client


Management
Server


remark


This procedure shall be initiated by the Management Server.
According the Management Procedure Parameter mpp_comm_mode,
it shall send the A_NetworkParameter_InfoReport-PDU

                         - on broadcast communication mode

                         - or on point-to-point connectionless communication mode to the Individual
Address given in mpp_ASAP
as given below. The priority shall be as requested in mpp_priority.
The hop_count_type shall be requested as in the Parameter
mpp_hop_count_type.
A_NetworkParameter_InfoReport-PDU

(object_type = mpp_object_type,
property_id = mpp_PID, test_info = mpp_tests_info,
test_result = mpp_test_result)

**Example use (informative)**

EXAMPLE 12 The A_NetworkParameter_InfoReport is used in Flexible E-Mode Channels (see [06]) to report a human
localisation action of an E-Mode Channel, using PID_LOCALISATION_REPORT ([05]) as follows:

/* Report on a localisation action on E-Mode Channel n. */
DMP_InterfaceObjectInfoReport_RCl(mpp_ASAP = Controller.IA, mpp_Obj.Type = E-Mode Device Object,

mpp_Prop.ID = PID_LOCALISATION_REPORT, mpp_Test_Info = 00h,
mpp_Test_Result = Channel Number)


-----

#### 3.30 DM_FunctionProperty_Write_R

##### 3.30.1 Use
This Management Procedure shall use point-to-point connection-oriented or point-to-point
connectionless communication mode. In case the point-to-point connection-oriented communication
mode is used, a DMP_Connect_RCo shall be performed preceding this procedure.

**Used Application Layer Services for Management**

  - A_FunctionPropertyCommand

**Parameters used during this Management Procedure**

 - OI: Object Index of the Interface Object in which the Function Property is located.

 - PID: Property Identifier of the Function Property

 - command: The command that is requested of the Function Property. The coding shall be

Function Property specific and is specified in [05]

 - error: Error code returned by the Function Property Server.

**Sequence**


Management

Client

**Error handling**


Management
Server remark

The Management Server shall execute
the Function Property and return the
result and error indication to the
Management Client.


The error shall be Function Property specific and is specified in [05]. The handling of this error
depends on the Configuration Procedure in which this Management Procedure is used.

##### 3.30.2 Procedure: DMP_ExtFunctionProperty_Write_R
This Management Procedure shall use the connection oriented or connectionless communication
mode.

**Used Application Layer Services for Management**

  - A_FunctionPropertyExtCommand


-----

**Sequence**

**Management**
**Client**

A_ FunctionPropertyExtCommand-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = command)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
return_code = RC, data = output data)

**Exception handling**


**Management**
**Server**


The Management Server
shall execute the Function
Property and return the
result and error indication
to the Management Client


The error shall be Function Property specific and is specified in [05]. The handling of this error
depends on the Configuration Procedure in which this Management Procedure is used.

#### 3.31 DM_LoadStateMachineWrite

##### 3.31.1 Use
This device Management Procedure shall be used to write to the Load State Machine of a Management
Server. The data are located in the Management Procedure. Depending on the flag the resulting state
shall be verified immediately.

The Load State Machines are specified in [05].

A DM_Connect shall be executed before executing this Management Procedure.

DM_LoadStateMachineWrite (flags, stateMachineType, stateMachineNr, event, eventData)

flags bit 0 : location of data

0: 1: in management control
bit 1 : verify resulting state enabled / disabled

0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be tested by
the Management Client.
stateMachineType type of the object that contains the state machine:

type state machine
0001 address table
0002 association table
0003 application program
0004 PEI program

stateMachineNr index to the state machine. For this index only the state machines of this
type are relevant. This index starts counting from 0.
event code of the event
eventData data of the event

Different events can be sent to the Load State Machines.

|type|state machine|
|---|---|
|0001<br>0002<br>0003<br>0004|address table<br>association table<br>application program<br>PEI program|


-----

|State Machine type<br>Event|address<br>table|association<br>table|application<br>program|PEI<br>program|
|---|---|---|---|---|
|Unload|X|X|X|X|
|Load|X|X|X|X|
|LoadCompleted|X|X|X|X|
|AllocAbsDataSeg|X|X|X|X|
|AllocAbsStackSeg|||X|X|
|AllocAbsTaskSeg|X|X|X|X|
|TaskPtr|||X||
|TaskCtrl1|||X||
|TaskCtrl2|||X||


##### 3.31.2 Procedure: DMP_LoadStateMachineWrite_RCo_Mem
**Use**

This Management Procedure shall use the connection oriented communication mode.

The control and state of the Load State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

The Verify Mode of the Management Server shall not be used.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address of the management control is 0104h. The address (AAAA) of the load state
depends on the Load State Machine.

**address of load**

**state machine** **state**

**(AAAA)**

address table B6EAh

association table B6EBh

application program B6ECh

PEI program B6EDh

This Management Procedure shall not be used for further developments of Management Servers.

**Used Application Layer Services for Management**

  - A_Memory_Write

  - A_Memory_Read

|state machine|address of load<br>state<br>(AAAA)|
|---|---|
|address table|B6EAh|
|association table|B6EBh|
|application program|B6ECh|
|PEI program|B6EDh|


-----

**Sequence**

Management
Client

A_Memory_Write (addr =0104h, length = 0Bh,

data = depends on event)

repeat

A_Memory_Read (addr = AAAA, length = 01h)

A_Memory_Response (addr = AAAA, length = 01h,

data = loadstate)

until loadstate is correct (for max. 3 times)

The transmitted data depend on the event.

  - LoadEvent: Unload

data

state
machine / reserved

event

_L4_ 00h

1 octet 10 octets

  - LoadEvent: Load

data

state
machine / reserved

event

_L1_ 00h

1 octet 10 octets

  - LoadEvent: LoadComplete

data

state
machine / reserved

event

_L2_ 00h

1 octet 10 octets


Management
Server


remark

A_Disconnect.ind ⇒ error,
Wrong state ⇒ error

|• LoadEvent: Unload|Col2|
|---|---|
|data|data|
|state<br>machine /<br>event|<br>reserved|
|_L_4|00h|
|1 octet|10 octets|

|• LoadEvent: Load|Col2|
|---|---|
|data|data|
|state<br>machine /<br>event|<br>reserved|
|_L_1|00h|
|1 octet|10 octets|

|• LoadEvent: LoadComplete|Col2|
|---|---|
|data|data|
|state<br>machine /<br>event|<br>reserved|
|_L_2|00h|
|1 octet|10 octets|


-----

state
machine /


memory
attributes [reserved ]


1 octet 1 octet 1 octet 2 octets 2 octets 1 octet 1 octet 1 octet 1 octet

Access Attributes contains the access level of the segment
bit 0…3 write access level
bit 4…7 read access level
Memory type contains the type of the memory of the segment
bit 0…2 memory type
1 Zero page RAM
2 RAM
3 EEPROM
bit 3…7 Reserved. Shall be zero
Memory Attributes additional memory configuration
bit 0…6 Reserved. Shall be zero
bit 7 0 Checksum control disabled
1 Checksum control enabled

|• LoadEvent: AllocAbsDataSeg (segment type 0)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|data|data|
|state<br>machine /<br>event|<br>segment<br>type|<br>segment<br>ID|<br>start address|length|access<br>attributes|<br>memory<br>type|memory<br>attributes|reserved|
|_L_3|00h|00h|_SSSS_|_EEEE_  -_SSSS_ +1|_AA_|_TT_|_MM_|00h|
|1 octet|1 octet|1 octet|2 octets|2 octets|1 octet|1 octet|1 octet|1 octet|


state
machine /


memory
attributes [reserved ]


1 octet 1 octet 1 octet 2 octets 2 octets 1 octet 1 octet 1 octet 1 octet

Access Attributes contains the access level of the segment
bit 0…3 write access level
bit 4…7 read access level
Memory type contains the type of the memory of the segment
bit 0…2 memory type
1 Zero page RAM
2 RAM
3 EEPROM
bit 3…7 Reserved. Shall be zero
Memory Attributes additional memory configuration
bit 0…6 Reserved. Shall be zero
bit 7 0 Checksum control disabled
1 Checksum control enabled

|• LoadEvent: AllocAbsStackSeg (segment type 1)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|data|data|
|state<br>machine /<br>event|<br>segment<br>type|<br>segment<br>ID|<br>start address|length|access<br>attributes|<br>memory<br>type|memory<br>attributes|reserved|
|_L_3|01h|00h|_SSSS_|_EEEE - SSSS +1_|_AA_|_TT_|_MM_|00h|
|1 octet|1 octet|1 octet|2 octets|2 octets|1 octet|1 octet|1 octet|1 octet|


-----

state

segment segment

machine / start address PEI type application ID / table ID - Version

type ID

event

_L3_ 02h 00h _SSSS_ _PP_ _MM MM TT TT VV_

1 octet 1 octet 1 octet 2 octets 1 octet 5 octets

|• LoadEvent: AllocAbsTaskSeg (segment type 2)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|data|data|data|data|data|data|
|state<br>machine /<br>event|segment<br>type|<br>segment<br>ID|<br>start address|PEI type|<br>application ID / table ID - Version|
|_L_3|02h|00h|_SSSS_|_PP_|_MM MM TT TT VV_|
|1 octet|1 octet|1 octet|2 octets|1 octet|5 octets|


Application ID /
Table ID


Application Software Type
MM MM Software Manufacturer ID
TT TT Manufacturer Specific Application Software ID
VV Version of the Application Software


1 octet 1 octet 1 octet 2 octets 2octets 2 octets 2 octets

  - LoadEvent: TaskCtrl1 (segment type 4)

data

state Interface

segmen segment Interface Object

machine/ Object reserved

t type ID address

event count

_L3_ 04h 00h _AAAA_ _NN_ 00h

1 octet 1 octet 1 octet 2 octets 1 octet 5 octets

  - LoadEvent: TaskCtrl2 (segment type 5)

data

state

segmen segment

machine/ callbackAddr CommObjPtr CommObjSegPtr1 [CommObjSeg-]

t type ID Ptr2

event

_L3_ 05h 00h _CCCC_ _OOOO_ _1111h_ _2222h_

1 octet 1 octet 1 octet 2 octet 2octet 2 octet 2 octet

**Exception handling**

The general exception handling shall apply.

|• LoadEvent: TaskPtr (segment type 3)|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|
|state<br>machine/<br>event|<br>segmen<br>t type|segment<br>ID|<br>initAddr|SaveAddr|PEIhandler|reserved|
|_L_3|03h|00h|_IIII_|_SSSS_|_PPPP_|00h|
|1 octet|1 octet|1 octet|2 octets|2octets|2 octets|2 octets|

|• LoadEvent: TaskCtrl1 (segment type 4)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|data|data|data|data|data|data|
|state<br>machine/<br>event|<br>segmen<br>t type|segment<br>ID|<br>Interface Object<br>address|Interface<br>Object<br>count|<br>reserved|
|_L_3|04h|00h|_AAAA_|_NN_|00h|
|1 octet|1 octet|1 octet|2 octets|1 octet|5 octets|

|• LoadEvent: TaskCtrl2 (segment type 5)|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|
|state<br>machine/<br>event|<br>segmen<br>t type|segment<br>ID|<br>callbackAddr|CommObjPtr|CommObjSegPtr1|CommObjSeg-<br>Ptr2|
|_L_3|05h|00h|_CCCC_|_OOOO_|_1111h_|_2222h_|
|1 octet|1 octet|1 octet|2 octet|2octet|2 octet|2 octet|


-----

##### 3.31.3 Procedure: DMP_LoadStateMachineWrite_RCo_IO 
This Management Procedure shall use the connection oriented communication mode.

The control and state of the Load State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Write

**Sequence**


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
Wrong state ⇒ error


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
type = PDT_CONTROL, ...)

endif

A_PropertyValue_Write-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
start_index = 1, element_count = 1,
data = depends _on_ _event)_

A_PropertyValue_Response-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
start_index = 1, element_count = 1, data = loadstate)

The transmitted data depend on the event.

###### 3.31.3.1 LoadEvent: Unload (write)


1 octet 9 octets

This command shall unload a loadable part. All data shall be declared as invalid. The Load State
Machine shall change to Unloaded.

|3.31.3.1 LoadEvent: Unload (write)|Col2|
|---|---|
|data|data|
|event|reserved|
|04h|00h|
|1 octet|9 octets|


-----

###### 3.31.3.2 LoadEvent: Start Loading (write)

data

event reserved

01h 00h

1 octet 9 octets

This command shall start the loading of the loadable part. The Load State Machine shall change to
Loading.

###### 3.31.3.3 LoadEvent: LoadCompleted (write)

data

event reserved

02h 00h

1 octet 9 octets

This command shall complete the loading of the loadable part. The checksum shall be calculated; all
data shall be declared as valid and the Load State Machine shall change to Loaded. In case of
download of an executable part, this executable part shall be started if the other run conditions are
fulfilled.

###### 3.31.3.4 Load Control: Additional Load Controls (Write)

Type If data less than 8 octets:
Subtype Data
= Additional Fill octets

03h xx Data depending on the sub type .. 00h 00h 00h 00h 00h 00h 00h

1 octet 1 octet 8 octets

Please refer to [14] for the requirements on which subtype shall be supported per Profile.

  - LoadEvent: AllocAbsDataSeg (segment type 0)

data

segment access memory memory
event start address length

type attributes type attributes [reserved ]

03h 00h _SSSS_ _EEEE_  - SSSS +1 _AA_ _TT_ _MM_ 00h

1 octet 1 octet 2 octet 2 octet 1 octet 1 octet 1 octet 1 octet
This load event shall serve for the absolute allocation of data or code.

|3.31.3.2 LoadEvent: Start Loading (write)|Col2|
|---|---|
|data|data|
|event|reserved|
|01h|00h|
|1 octet|9 octets|

|3.31.3.3 LoadEvent: LoadCompleted (write)|Col2|
|---|---|
|data|data|
|event|reserved|
|02h|00h|
|1 octet|9 octets|

|Type<br>= Additional|Subtype|Data|If data less than 8 octets:<br>Fill octets|
|---|---|---|---|
|03h|xx|Data depending on the sub type|.. 00h 00h 00h 00h 00h 00h 00h|

|• LoadEvent: AllocAbsDataSeg (segment type 0)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|data|
|event|segment<br>type|<br>start address|length|access<br>attributes|<br>memory<br>type|memory<br>attributes|reserved|
|03h|00h|_SSSS_|_EEEE_  -_SSSS_ +1|_AA_|_TT_|_MM_|00h|
|1 octet|1 octet|2 octet|2 octet|1 octet|1 octet|1 octet|1 octet|


-----

Access Attributes contains the access level of the segment
bit 0…3 write access level
bit 4…7 read access level
Memory type contains the type of the memory of the segment
bit 0…2 memory type
1 Zero page RAM
2 RAM
3 EEPROM
bit 3…7 Reserved. Shall be zero
Memory Attributes additional memory configuration
bit 0…6 Reserved. Shall be zero
bit 7 0 Checksum control disabled

  - LoadEvent: AllocAbsStackSeg (segment type 1)

data

segment access memory memory
event start address length

type attributes type attributes [reserved ]

03h 01h _SSSS_ _EEEE_  - SSSS +1 _AA_ _TT_ _MM_ 00h

1 octet 1 octet 2 octets 2 octets 1 octet 1 octet 1 octet 1 octet

Access Attributes contains the access level of the segment
bit 0…3 write access level
bit 4…7 read access level
Memory type contains the type of the memory of the segment
bit 0…2 memory type
1 Zero page RAM
2 RAM
3 EEPROM
bit 3…7 Reserved. Shall be zero
Memory Attributes additional memory configuration
bit 0…6 Reserved. Shall be zero
bit 7 0 Checksum control disabled

  - LoadEvent: AllocAbsTaskSeg (segment type 2)

data

segment
event start address PEI type application ID / table ID - Version

type

03h 02h _SSSS_ _PP_ _MM MM TT TT VV_

1 octet 1 octet 2 octets 1 octet 5 octets

|• LoadEvent: AllocAbsStackSeg (segment type 1)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|data|data|data|data|data|data|data|data|
|event|segment<br>type|<br>start address|length|access<br>attributes|<br>memory<br>type|memory<br>attributes|reserved|
|03h|01h|_SSSS_|_EEEE_  -_SSSS_ +1|_AA_|_TT_|_MM_|00h|
|1 octet|1 octet|2 octets|2 octets|1 octet|1 octet|1 octet|1 octet|

|• LoadEvent: AllocAbsTaskSeg (segment type 2)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|data|data|data|data|data|
|event|segment<br>type|<br>start address|PEI type|<br>application ID / table ID - Version|
|03h|02h|_SSSS_|_PP_|_MM MM TT TT VV_|
|1 octet|1 octet|2 octets|1 octet|5 octets|


Application ID /
Table ID


Application Software Type
MM MM Software Manufacturer ID
TT TT Manufacturer Specific Application Software ID
VV Version of the Application Software


-----

1 octet 1 octet 2 octets 2 octets 2 octets 2 octets

  - LoadEvent: TaskCtrl1 (segment type 4)

data

nr. of

segment Interface Object
event Interface reserved

type address

Objects

03h 04h _AAAA_ _NN_ 00h

1 octet 1 octet 2 octets 1 octet 5 octets

  - LoadEvent: TaskCtrl2 (segment type 5)

data

segment
event callbackAddr CommObjPtr CommObjSegPtr1 [CommObjSegPtr]

type 2

03h 05h CCCC OOOO 1111h 2222h

1 octet 1 octet 2 octets 2 octets 2 octets 2 octets

  - Load Event Relative Allocation

data
event subtype data fill octets
03h 0Ah number of octets 00h 00h 00h 00h 00h 00h
8 bit 1 octet 2 octets 6 octets

This command shall set the maximum size (in octets) of the loadable part being loaded. If the
requested number of octets is not supported by the Management Server (device) then the Load State
Machine of the loadable part shall change to error.

EXAMPLE This command may be used to set the maximum length of the Group Address Table or Group Association Table
being downloaded.

  - Load Event Data Relative Allocation

data
event subtype data mode fill reserved
03h 0Bh requested memory size 00h 00h 00h 00h
8 bit 1 octet 4 octets 1 octet 1 octet 2 octets

|• LoadEvent: TaskPtr (segment type 3)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|data|data|data|data|data|data|
|event|segment<br>type|<br>initAddr|SaveAddr|PEIhandler|reserved|
|03h|03h|IIII|SSSS|PPPP|00h|
|1 octet|1 octet|2 octets|2 octets|2 octets|2 octets|

|• LoadEvent: TaskCtrl1 (segment type 4)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|data|data|data|data|data|
|event|segment<br>type|<br>Interface Object<br>address|nr. of<br>Interface<br>Objects|<br>reserved|
|03h|04h|_AAAA_|_NN_|00h|
|1 octet|1 octet|2 octets|1 octet|5 octets|

|• LoadEvent: TaskCtrl2 (segment type 5)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|data|data|data|data|data|data|
|event|segment<br>type|<br>callbackAddr|CommObjPtr|CommObjSegPtr1|CommObjSegPtr<br>2|
|03h|05h|CCCC|OOOO|1111h|2222h|
|1 octet|1 octet|2 octets|2 octets|2 octets|2 octets|

|03h|0Ah|number of octets|00h|00h|00h|00h|00h|00h|
|---|---|---|---|---|---|---|---|---|

|03h|0Bh|requested memory size|00h|00h|00h|00h|
|---|---|---|---|---|---|---|


-----

Mode

  - bit 0 (lsb) 0: keep the existing memory contents of the allocated memory unchanged
1: fill the memory contents of the allocated memory with the value as
specified in the field fill.

  - bit 1 to bit 7 (msb) These bits are reserved and shall be 0.
fill memory fill byte
This is the value with which the allocated memory shall be filled if bit 0 of
_Mode is set._

###### 3.31.3.5 Load State (Response Value from Load State Property)

State

8 bit

This state value shall represent the current state of the Load State Machine.

###### 3.31.3.6 Load Control: No Operation (Write)

00h 00h 00h 00h 00h 00h 00h 00h 00h 00h
8 bit 9 octets

This command shall have no effect.

###### 3.31.3.7 Exception handling
The general exception handling shall apply.

##### 3.31.4 Procedure: DMP_DownloadLoadablePart_RCo_IO

###### 3.31.4.1 Normal conditions
This method shall use the connection oriented or connectionless remote communication.

**Used Application Layer Services for Management**

  - A_PropertyValue_Write

  - A_PropertyValue_Read

**Complete Download Sequence for one loadable part[ 15)]**

|00h|00h 00h 00h 00h 00h 00h 00h 00h 00h|
|---|---|


remark

Unload

Load State Machine shall changes to
Unload (00h)

Retry read Property for 30 Seconds.


**Managemen**

**t Client**

A_PropertyValue_Write-PDU
(object_index, Property_id = 5, start_index = 01h,
nr_of_elem = 01h,Data = 04 00 …)

This part is
optional A_PropertyValue_Response –PDU

(object_index, Property_id=5, start_index = 01h,
nr_of_elem = 01h, data = 00)

If data is equal 04 (unloading) read Property and verify value
if data is equal 00 (unloaded) continue
else break with error

15) The optional state Unloading is not used.


**Management**
**Server**


-----

if data is not equal 02 break with error
This part is A_PropertyValue_Write-PDU
optional and (object_index, Property_id = 5, start_index = 01h,
may repeated

nr_of_elem = 01h, data = 03 … …)

for different

additional
load controls A_PropertyValue_Response –PDU

(object_index, Property_id=5, start_index = 01h,
nr_of_elem = 01h, data = 02)

if data is not equal 02 break with error
Load the loadable data via Property access or memory access

A_PropertyValue_Write-PDU
(object_index, Property_id = 5, start_index = 01h,
nr_of_elem = 01h, data = 02 00 … …)

A_PropertyValue_Response –PDU
(object_index, Property_id=5, start_index = 01h,
nr_of_elem = 01h, data = 01)

if data is not equal 01 break with error

###### 3.31.4.2 Error and exception handling
The general exception handling shall apply.


Start loading

Load State Machine shall change to
Loading.

Additional load controls

Load State Machine shall stay in the
state Loading.

Load complete
Time-out?

Load State Machine shall change to
the state Loaded.


##### 3.31.5 Procedure: DMP_ExtLoadStateMachineWrite_RCo_IO
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_FunctionPropertyExtCommand

**Sequence**


**Management**
**Client**


**Management**
**Server**


A_ FunctionPropertyExtCommand-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = command)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = load state)


The Management Server
shall execute the Control
Property and return the
result and error indication
to the Management Client


-----

The format of command shall be identical to the one specified for
DMP_LoadStateMachineWrite_RCo_IO in 3.31.3.

**Exception handling**

The general exception handling shall apply.

#### 3.32 DM_LoadStateMachineVerify

##### 3.32.1 Use
This device Management Procedure shall be used to verify the state of a Load State Machine of a
Management Server. The state shall be located in the Management Procedure.

A DM_Connect shall be executed before executing this Management Procedure.

DM_LoadStateMachineVerify (flags, stateMachineType, stateMachineNr, state)

flags bit 0 : location of data

0: 1: in management control
All other bits are reserved. These shall be set to 0. This shall be tested by
the Management Client.
stateMachineType type of the object that contains the state machine:

type state machine
0001 address table
0002 association table
0003 application program
0004 PEI program

stateMachineNr index to the state machine. For this index only the state machines of this
type are relevant. This index starts counting from 0.
state state of the state machine

##### 3.32.2 Procedure: DM_LoadStateMachineVerify_RCo_Mem
This Management Procedure shall use the connection oriented communication mode.

The control and state of the Load State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address of the management control shall be 0104h. The address (AAAA) of the load state
depends on the Load State Machine.

**address of load state**
**state machine**

**(AAAA)**

address table B6EAh

association table B6EBh

application program B6ECh

PEI program B6EDh

This Management Procedure shall not be used for further developments of Management Servers.

|type|state machine|
|---|---|
|0001<br>0002<br>0003<br>0004|address table<br>association table<br>application program<br>PEI program|

|state machine|address of load state<br>(AAAA)|
|---|---|
|address table|B6EAh|
|association table|B6EBh|
|application program|B6ECh|
|PEI program|B6EDh|


-----

**Used Application Layer Services for Management**

  - A_Memory_Read

**Sequence**

Management
Client

A_Memory_Read-PDU
(addr = AAAA, length = 01h)

A_Memory_Response-PDU
(addr = AAAA, length = 01h, data = loadstate)

**Exception handling**

The general exception handling shall apply.


Management
Server


remark

A_Disconnect.ind ⇒ error,
different state ⇒ error


##### 3.32.3 Procedure: DM_LoadStateMachineVerify_R_IO
This method shall either use the connection oriented or connectionless communication mode.

The control and state of the Load State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read


-----

**Sequence**

Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
type = PDT_CONTROL, ...)

endif


A_Disconnect.ind ⇒ error,
Wrong state ⇒ error


**Exception handling**

The general exception handling shall apply.


##### 3.32.4 Procedure: DMP_ExtLoadStateMachineVerify_RCo_IO
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**



  - A_FunctionPropertyExtState_Read

**Sequence**

**Management**
**Client**


**Management**
**Server**


A_ FunctionPropertyExtState_Read-PDU
(object_type = OT, object_instance = OI, PID = PP)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = load state)

**Exception handling**


The Management Server
shall return the result and
error indication to the
Management Client


The general exception handling shall apply.


-----

#### 3.33 DM_LoadStateMachineRead

##### 3.33.1 Use
This device Management Procedure shall be used to read the state of a Load State Machine of a
Management Server. The state shall be located in the Management Procedure.

A DM_Connect shall be executed before executing this Management Procedure.

DM_LoadStateMachineRead (dataBlockStartAddress, flags, stateMachineType,
stateMachineNr, state)
dataBlockStartAddress : specifies the address where the data are stored in the data block
flags : bit 0 : location of data

0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
stateMachineType : type of the object that contains the state machine:

type state machine
0001 address table
0002 association table
0003 application program
0004 PEI program

stateMachineNr : index to the state machine. For this index only the state machines
of this type are relevant. This index starts counting from 0.
state : state of the state machine

##### 3.33.2 Procedure: DMP_LoadStateMachineRead_RCo_Mem
This Management Procedure shall use the connection oriented communication mode.

The control and state of the Load State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address of the management control is 0104 h. The address (AAAA) of the load state
depends on the Load State Machine.

**address of load state**
**state machine**

**(AAAA)**

address table B6EAh

association table B6EBh

application program B6ECh

PEI program B6EDh

This Management Procedure shall not be used for further developments of Management Servers.

**Used Application Layer Services for Management**

  - A_Memory_Read

|type|state machine|
|---|---|
|0001<br>0002<br>0003<br>0004|address table<br>association table<br>application program<br>PEI program|

|state machine|address of load state<br>(AAAA)|
|---|---|
|address table|B6EAh|
|association table|B6EBh|
|application program|B6ECh|
|PEI program|B6EDh|


-----

**Sequence**

Management
Client

A_Memory_Read-PDU
(addr = AAAA

A_Memory_Response-PDU
(addr = AAAA, length = 01h, data =

**Exception handling**

The general exception handling shall apply.


Management
Server


remark

A_Disconnect.ind ⇒ error,
no data received ⇒ error


##### 3.33.3 Procedure: DMP_LoadStateMachineRead_R_IO
This method shall use either the connection oriented or the connectionless communication mode.

The control and state of the Load State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read

**Sequence**


Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
no data received ⇒ error


if Property of management control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
type = PDT_CONTROL, ...)

endif

A_PropertyValue_Read-PDU

(object_index = X,
PID = PID_LOAD_STATE_CONTROL,
start_index = 1, element_count = 1)

A_PropertyValue_Response-PDU


-----

**Exception handling**

The general exception handling shall apply.

##### 3.33.4 Procedure: DMP_ExtLoadStateMachineRead_RCo_IO
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_FunctionPropertyExtState_Read

**Sequence**


**Management**
**Client**

A_ FunctionPropertyExtState_Read-PDU
(object_type = OT, object_instance = OI, PID = PP)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = load state)

**Exception handling**

The general exception handling shall apply.

#### 3.34 DM_RunStateMachineWrite


**Management**
**Server**


The Management Server
shall return the result and
error indication to the
Management Client


##### 3.34.1 Use
This device Management Procedure shall be used to write to the Run State Machine of a Management
Server The data shall be located in the Management Procedure. Depending on the flag, the resulting
state is verified immediately.

**event** **resulting state**

Restart Ready or Running

Stop Terminated

A DM_Connect shall be executed before executing this Management Procedure.

|event|resulting state|
|---|---|
|Restart|Ready or Running|
|Stop|Terminated|


-----

DM_RunStateMachineWrite (flags, stateMachineType, stateMachineNr, event)

flags : bit 0 : location of data

0: 1: in management control
bit 1 : verify the resulting state enabled / disabled

0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
stateMachineType : type of the object that contains the state machine:

type state machine
0003 application program
0004 PEI program

stateMachineNr : index to the state machine. For this index only the state machines
of this type are relevant. This index starts counting from 0.
event : code of the event

##### 3.34.2 Procedure: DMP_RunStateMachineWrite_RCo_Mem
This Management Procedure shall use the connection oriented communication mode.

The control and state of the Run State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

The Verify Mode of the Management Server shall not be used.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address of the run control shall be 0103h. The address (AAAA) of the run state depends on
the Run State Machine.

**address of run state**
**state machine**

**(AAAA)**

application program 0101h

PEI program 0102h

This Management Procedure shall not be used for further developments of Management Servers.

**Used Application Layer Services for Management**

  - A_Memory_Write

  - A_Memory_Read

|type|state machine|
|---|---|
|0003<br>0004|application program<br>PEI program|

|state machine|address of run state<br>(AAAA)|
|---|---|
|application program|0101h|
|PEI program|0102h|


-----

###### Sequence

Management
Client

A_Memory_Write-PDU
(addr = 0103h, length = 01h, data =

repeat

A_Memory_Read-PDU
(addr = AAAA

A_Memory_Response-PDU
(addr = AAAA, length = 01h, data =

until runstate is correct (for max. 3 times)

**Exception handling**

The general exception handling shall apply.


Management
Server


remark

A_Disconnect.ind ⇒ error,
Wrong state ⇒ error


##### 3.34.3 Procedure: DMP_RunStateMachineWrite_R_IO
This method shall use either the connection oriented or the connectionless communication mode.

The control and state of the Run State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Write


-----

**Sequence**

Management
Client

if Property of run control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
type = PDT_CONTROL, ...)

endif

A_PropertyValue_Write-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
start_index = 1, element_count = 1, data = EE)

A_PropertyValue_Response-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
start_index = 1, element_count = 1, data = runstate)

**Exception handling**


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,

Wrong state ⇒ error


The transmitted data depend on the event and are specified in the clauses 3.34.3.1 to 3.34.3.4 below.

###### 3.34.3.1 Run Control: Restart (Write)

01h 00h 00h 00h 00h 00h 00h 00h 00h 00h
8 bit 9 octets

This command shall restart the executable part related to the Interface Object in which this Run
Control Property is located.

###### 3.34.3.2 Run Control: Stop (Write)

02h 00h 00h 00h 00h 00h 00h 00h 00h 00h
8 bit 9 octets

This command shall stop the executable part related to the Interface Object in which this Run Control
Property is located.

###### 3.34.3.3 Run Control: No Operation (Write)

00h 00h 00h 00h 00h 00h 00h 00h 00h 00h
8 bit 9 octets

This command shall have no effect.

|01h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|---|---|---|---|---|---|---|---|---|---|

|02h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|---|---|---|---|---|---|---|---|---|---|

|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|---|---|---|---|---|---|---|---|---|---|


-----

###### 3.34.3.4 Run State (Read from Run Control)

State

8 bit

This state value shall be the Run State of the Run State Machine.

##### 3.34.4 Procedure: DMP_ExtRunStateMachineWrite_RCo_IO
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_FunctionPropertyExtCommand

**Sequence**


**Management**
**Client**


**Management**
**Server**


A_ FunctionPropertyExtCommand-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = command)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = run state)

The format of command shall be identical to the one specified for
DMP_RunStateMachineWrite_R_IO in 3.34.3.

**Exception handling**

The general exception handling shall apply.


The Management Server
shall execute the Control
Property and return the
result and error indication
to the Management Client


-----

#### 3.35 DM_RunStateMachineVerify

##### 3.35.1 Use
This device Management Procedure shall be used to verify the state of a Run State Machine of a
Management Server. The state shall be located in the Management Procedure.

A DM_Connect shall be executed before executing this Management Procedure.

DM_RunStateMachineVerify (flags, stateMachineType, stateMachineNr, state)

flags bit 0: location of data
0: 1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

stateMachineType type of the object that contains the state machine

**state machine** **type**

application program 0003

PEI program 0004

stateMachineNr index to the state machine. For this index only the state
machines of this type are relevant. This index starts counting
from 0.

state state of the state machine

##### 3.35.2 Procedure: DMP_RunStateMachineVerify_RCo_Mem
This Management Procedure shall use the connection oriented communication mode.

The control and state of the Run State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address (AAAA) of the run state depends on the Run State Machine.

**state machine** **address of run state**

application program 0101h

PEI program 0102h

This Management Procedure shall not be used for further developments of Management Servers.

**Used Application Layer Services for Management**

  - A_Memory_Read

|state machine|type|
|---|---|
|application program|0003|
|PEI program|0004|

|state machine|address of run state|
|---|---|
|application program|0101h|
|PEI program|0102h|


-----

**Sequence**

Management
Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
different state ⇒ error


##### 3.35.3 Procedure: DMP_RunStateMachineVerify_R_IO
This method shall use either the connection oriented or the connectionless communication mode.

The control and state of the Run State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read

**Sequence**


Management
Client

if Property of run control is unknown to the Management Client

A_PropertyDescription_Read-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL)

A_PropertyDescription_Response-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
type = PDT_CONTROL...)

endif

A_PropertyValue_Read-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
start_index = 1, element_count = 1)

A_PropertyValue_Response-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
start_index = 1, element_count = 1, data = runstate)

**Exception handling**

To be completed.


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error

A_Disconnect.ind ⇒ error,
Wrong state ⇒ error


-----

##### 3.35.4 Procedure: DMP_ExtRunStateMachineVerify_RCo_IO
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**



  - A_FunctionPropertyExtState_Read

**Sequence**

**Management**
**Client**


**Management**
**Server**


A_ FunctionPropertyExtState_Read-PDU
(object_type = OT, object_instance = OI, PID = PP)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = run state)

**Exception handling**


The Management Server
shall return the result and
error indication to the
Management Client


The general exception handling shall apply.

#### 3.36 DM_RunStateMachineRead


##### 3.36.1 Use
This device Management Procedure shall be used to read the state of a Run State Machine of a
Management Server The state shall be located in the Management Procedure.

A DM_Connect shall be executed before executing this Management Procedure.


DM_RunStateMachineRead (dataBlockStartAddress, flags, stateMachineType,
stateMachineNr, state)

flags bit 0: location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are stored in the data block.


stateMachineType type of the object that contains the state machine

**state machine** **type**

application program 0003

PEI program 0004

|state machine|type|
|---|---|
|application program|0003|
|PEI program|0004|


stateMachineNr index to the state machine. For this index only the state
machines of this type are relevant. This index starts counting
from 0.


-----

##### 3.36.2 Procedure: DMP_RunStateMachineRead_RCo_Mem
This Management Procedure shall use the connection oriented communication mode.
The control and state of the Run State Machine shall be located in the memory of the Management
Server and shall be accessible as Memory Mapped Resource.

This Management Procedure shall support only one state machine of each type.

This Management Procedure shall only be used with device model for mask version 070nh (BIM
M112). The address (AAAA) of the run state depends on the Run State Machine.

**state machine** **address of run state**

application program 0101h

PEI program 0102h

This Management Procedure shall not be used for further developments of Management Servers.

**Used Application Layer Services for Management**

  - A_Memory_Read

###### Sequence

|state machine|address of run state|
|---|---|
|application program|0101h|
|PEI program|0102h|


Management
Client

A_Memory_Read-PDU
(addr = AAAA, length = 01h)

A_Memory_Response-PDU
(addr = AAAA, length = 01h, data = runstate)

**Exception handling**

To be completed.


Management
Server


remark

A_Disconnect.ind ⇒ error,


##### 3.36.3 Procedure: DMP_RunStateMachineRead_R_IO
This method shall use either the connection oriented or the connectionless communication mode.
The control and state of the Run State Machine shall be located in Interface Objects of the
Management Server and shall be accessible via Property services.

The Management Client shall search the according Interface Object in the Management Server.

**Used Application Layer Services for Management**

  - A_PropertyDescription_Read

  - A_PropertyValue_Read


-----

**Sequence**

Management
Client

if Property of run control is unknown to the Management Client


Management
Server


remark

A_Disconnect.ind ⇒ error,
Property does not exist ⇒
error


endif


A_PropertyValue_Response-PDU

(object_index = X,
PID = PID_RUN_STATE_CONTROL,
start_index = 1, element_count = 1, data =

**Exception handling**


A_Disconnect.ind ⇒ error,


The general exception handling shall apply.

##### 3.36.4 Procedure: DMP_ExtRunStateMachineRead_RCo_IO
This Management Procedure shall use the connection oriented communication mode.


**Used Application Layer Services for Management**

  - A_FunctionPropertyExtState_Read


**Sequence**

**Management**
**Client**


**Management**
**Server**


A_ FunctionPropertyExtState_Read-PDU
(object_type = OT, object_instance = OI, PID = PP)

A_FunctionPropertyExtState_Response-PDU
(object_type = OT, object_instance = OI, PID = PP,
data = run state)

**Exception handling**


The Management Server
shall return the result and
error indication to the
Management Client


The general exception handling shall apply.


-----

#### 3.37 Procedures with Link Services

##### 3.37.1 Basic requirements
To easily and quickly update a link between a Group Object in a device and a Group Address, independently of the target microcontroller, the A_Link_Read and A_Link_Write-services are provided.

This link establishment consists of a single link connecting a Group Object to a Group Address (this
is, to a shared variable).

The Management Client assigning the new Group Addresses shall

  - previously have checked that this Group Address is free, and

  - know the Individual Address of the target device.

**Requirements and error handling**

Minimal Management Server side implementations may only support start_index 1. They shall react
with a negative response (start_index = 0) when receiving an A_Link_Read-PDU or an
A_Link_Write-PDU with any other start_index.

Any failure to execute a request at Network Management level (table full, non-existing
group_object_number, invalid reserved bits, unknown start_index …) shall be answered by the
negative response.

##### 3.37.2 DM_GroupObjectLink_Read_RCl
**Used Application Layer Services for Management**

 - A_Link_Read

**Parameters of the Management Procedure**

DM_GroupObjectLink_Read_RCl(/* [in] */ GO.number, /* [out] */ GO.sendingindex,
/* [out] */ GO.GAList)

GO.number: Number of the Group Object from which the associated Group
Addresses shall be read.

GO.sendingindex: The index of the sending Group Address for this Group Object as
returned by the Management Server (device).

GO.GAList The list of all Group Addresses associated to the Group Object as
returned by the Management Server (device)

**Variables**

start_index_loop: The Management Client shall start reading the Group Addresses
associated to the Group Object in the Management Server starting
from the 1[st] one in the list, with start_index =start_index°loop 1. If an
response is received from the Management Server with 6 Group
Addresses, then the request shall be repeated: start_index_loop shall
be incremented by 6 and used as start_index for the next call of the
A_Link_Read-service by the Management Client

group_address_set: A set of 6 or less GAs returned by the Management Server (device) in
one A_Link_Response-PDU.
The Management Client collects all these responses of one or more
iterations in GO.GAList


-----

###### Sequence

Management
Client

start_index = 1
repeat

A_Link_Read-PDU
(group_object_number = GO.number, start_index = )

A_Link_Response-PDU
(group_object_number = GO.number,
sending_addresss = GO.sendingindex,
start_address =,
group_address_list = group_address_set)

The Management Server adds the received group_address_set
to the GO.GAList.
until a negative response is returned (start_index = 0) or less than
6 GAs are returned

##### 3.37.3 DM_GroupObjectLink_Write_RCl
**Used Application Layer Services for Management**

 - A_Link_Write

**Parameters of the Management Procedure**


Network /
Management
Server


remark


DM_GroupObjectLink_Write_RCl(/* [in] */ GO.number, /* [in] */ GO.action, /* [in] */ GO.sending,
/* [in] */ GO.value, /* [out] */ GO.sendingindex, /* [out] */ GO.GAList)

GO.number: Number of the GO to which the GA shall be added or from which the
GA shall be removed.

GO.action This flag shall indicate whether the contained GA shall be added to the
GO or be removed from the GO.
0: add: The contained GA shall be added to the list of GA assigned
to the referred GO.
1: delete: The contained GA shall be removed from the list of GAs

assigned to the referred GO.

GO.sending: Indication whether the added GA shall be the sending GA or not. This
flag shall not be interpreted if the GA is removed.

GO.value: The value of the GA hat shall be linked to or unlinked from the GO.

GO.sendingindex: The index of the sending Group Address for this Group Object as
returned by the Management Server (device).

GO.GAList The list of all Group Addresses associated to the Group Object as
returned by the Management Server (device).


-----

**Sequence**

Management
Client


Network /
Management
Server


remark


The Management Server (device) shall add or
delete the GA to or from the list of GAs assigned
to the referred GO and set the sending flag, both
according the flags.
The Management Server shall reply with the list of
GAs assigned to the referred GO (1); if it has a
problem, it shall respond with a negative
A_Link_Response-PDU.
A_Link_Response-PDU
(group_object_number = GO.number,
sending_addresss = GO.sendingindex, start_index = 1,

group_address_list = GO.GAList)

**Error and exception handling**

(1) The Management Server shall reply with the list of GAs assigned to the GO starting with
start_index 1, thus with the first GA assigned to the GO. The number of GAs in the
A_Link_Response-PDU shall be in-between 0 and 6, in function of the number of GAs
assigned to the GO. If more than 6 GA are assigned, the Management Server shall only
respond with the 6 first ones. The Management Server shall only send one single
A_Link_Response-PDU. This means that the Management Client may take into account that
the received A_Link_Response-PDY does not contain the GA that has just been added.

#### 3.38 DM_LCSlaveMemWrite

##### 3.38.1 Use
This device Management Procedure shall write a contiguous block of data to the specified memory
addresses of the slave memory in the Management Server (Coupler). The data shall be located either
in the management control or in the data block. Only the data that are specified in the data block are
written. Depending on the flag the data shall be verified immediately. If the deviceStartAddress if
higher than the deviceEndAddress, this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure is specific for the first generation Coupler model and shall not be
used for further developments of Management Servers.


-----

DM_LCSlaveMemWrite (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0: location of data
0: in data block
1: in Management Procedure
bit 1: verify enabled / disabled
0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

deviceStartAddress address of first memory octet that is written by this
Management Procedure

deviceEndAddress address of the last memory octet that is written by this
Management Procedure

data the data that are transferred by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.38.2 Procedure: DMP_LCSlaveMemWrite_Rco
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall not be used.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_RouterMemory_Read_Read-PDUs and/or A_RouterMemory_Write-PDUs, as specified below, all
of which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the
maximum size that can be transported over the communication path consisting of the Management
Client, the Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_RouterMemory_Write

  - A_RouterMemory_Read


-----

###### Sequence

Management
Client


Management
Server


remark


for each data block (data size≤ maximal size), until all data are transmitted

A_RouterMemory_Write-PDU

(Addr, Length, Data)

if verify = enabled

A_RouterMemory_Read-PDU

(Addr, Length)

A_RouterMemory_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

if verify = enabled and
different or no data received
⇒ error
else

delay for programming the memory in the device[ 16)]
endif
endfor

**Exception handling**

The general exception handling shall apply.

#### 3.39 DM_LCSlaveMemVerify

##### 3.39.1 Use
This device Management Procedure shall read a contiguous block of slave memory in the
Management Server (Coupler) and compare it with the specified data. The data shall be located either
in the management control or in the data block. Only the data that are specified in the data block shall
be compared. If the deviceStartAddress if higher than the deviceEndAddress this Management
Procedure shall be skipped

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

16) The delay time depends on the Management Server and on the amount of written octets (see [08]).


-----

DM_LCSlaveMemVerify (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0: location of data
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.

dataBlockStartAddress specifies the address where the data are located in the data
block. If the data are located in the Management Procedure, this
field is set to 0.

deviceStartAddress address of first memory octet that is compared by this
Management Procedure

deviceEndAddress address of the last octet that is compared by this Management
Procedure

data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.39.2 Procedure: DMP_LCSlaveMemVerify_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_RouterMemory_Read-PDUs and/or A_RouterMemory_Write-PDUs, as specified below, all of
which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum
size that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_RouterMemory_Read

**Sequence**


Management
Client


Management
Server


remark


for each data block (data size≤ maximal size), until all data are transmitted

A_RouterMemory_Read-PDU

(Addr, Length)

A_RouterMemory_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

different or no data received
⇒ error
endfor


-----

**Exception handling**

The general exception handling shall apply.

#### 3.40 DM_LCSlaveMemRead

##### 3.40.1 Use
This device Management Procedure shall read a contiguous block of slave memory in the
Management Server (Coupler) and store it in the data block. If the deviceStartAddress if higher than
the deviceEndAddress this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCSlaveMemRead (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
deviceStartAddress address of first memory octet that is read by this Management
Procedure
deviceEndAddress address of the last memory octet that is read by this Management
Procedure
data the data that are read by this Management Procedure. The data are
stored in the data block.

##### 3.40.2 Procedure: DMP_LCSlaveMemRead_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_RouterMemory_Read PDUs and/or A_RouterMemory_Write PDUs, as specified below, all of
which except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum
size that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

###### Used Application Layer Services for Management

  - A_RouterMemory_Read


-----

**Sequence**

Management
Client


Management
Server


remark


for each data block (data size ≤maximal size), until all data are transmitted

A_RouterMemory_Read-PDU

(Addr, Length)

A_RouterMemory_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

no data received ⇒ error
endfor

**Exception handling**

The general exception handling shall apply.

#### 3.41 DM_LCExtMemWrite

##### 3.41.1 Use
This device Management Procedure shall write a contiguous block of data to the specified memory
addresses of the external memory in the Management Server (Coupler). The data shall be located
either in the management control or in the data block. Only the data that are specified in the data block
shall be written. Depending on the flag the data shall be verified immediately. If the
deviceStartAddress if higher than the deviceEndAddress this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCExtMemWrite (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in Management Procedure
bit 1 verify enabled / disabled
0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block. If
the data are located in the Management Procedure, this field is set
to 0.
deviceStartAddress address of first memory octet that is written by this Management
Procedure
deviceEndAddress address of the last memory octet that is written by this
Management Procedure
data the data that are transferred by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.


-----

##### 3.41.2 Procedure: DMP_LCExtMemWrite_Rco
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall not be used.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_FilterTable_Read PDUs and/or A_FilterTable_Write PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_FilterTable_Write

  - A_FilterTable_Read

**Sequence**


Management
Client


Management
Server


remark


for each data block (data size ≤ maximal size), until all data are transmitted

A_FilterTable_Write-PDU

(Addr, Length, Data)

if verify = enabled

A_FilterTable_Read-PDU

(Addr, Length)

A_FilterTable_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

if verify = enabled and
different or no data received
⇒ error
else

delay for programming the memory in the device[ 17)]
endif
endfor

**Exception handling**

The general exception handling shall apply.

17) The delay time depends on the Management Server and on the amount of written octets (see [08]).


-----

#### 3.42 DM_LCExtMemVerify

##### 3.42.1 Use
This device Management Procedure shall read a contiguous block of external memory from the
Management Server (Coupler) and compare it with the specified data. The data shall be located either
in the management control or in the data block. Only the data that are specified in the data block shall
be compared. If the deviceStartAddress if higher than the deviceEndAddress this Management
Procedure shall be skipped

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCExtMemVerify (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block. If
the data are located in the Management Procedure, this field is set
to 0.
deviceStartAddress address of first memory octet that is compared by this Management
Procedure
deviceEndAddress address of the last memory octet that is compared by this
Management Procedure
data the data that are compared by this Management Procedure. The
data can be located in the data block or in the Management
Procedure.

##### 3.42.2 Procedure: DMP_LCExtMemVerify_RCo
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_FilterTable_Read-PDUs and A_FilterTable_Response-PDUs, as specified below, all of which
except possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size
that can be transported over the communication path consisting of the Management Client, the
Management Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

###### Used Application Layer Services for Management

  - A_FilterTable_Read


-----

**Sequence**

Management
Client

A_FilterTable_Open-PD

for each data block (≤11 octet), until all data are transmitted


Management
Server


remark


A_FilterTable_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

different or no data received
⇒ error
endfor
**Exception handling**

The general exception handling shall apply.

#### 3.43 DM_LCExtMemRead

##### 3.43.1 Use
This device Management Procedure shall read a contiguous block of external memory from the
Management Server (Coupler) and store it in the data block. If the deviceStartAddress if higher than
the deviceEndAddress this Management Procedure shall be skipped.

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCExtMemRead (flags, dataBlockStartAddress, deviceStartAddress,
deviceEndAddress, data)

flags bit 0 location of data
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be
tested by the Management Client.
dataBlockStartAddress specifies the address where the data are located in the data block.
deviceStartAddress address of first memory octet that is read by this Management
Procedure
deviceEndAddress address of the last memory octet that is read by this Management
Procedure
data the data that are read by this Management Procedure. The data are
stored in the data block.


-----

##### 3.43.2 Procedure: DMP_LCExtMemRead_Rco
This Management Procedure shall use the connection oriented communication mode.

**Preconditions**

This Management Procedure shall transfer the data in data blocks and transmit these in subsequent
A_FilterTable_Read PDUs and A_FilterTable_Write PDUs, as specified below, all of which except
possibly the last PDU, shall have a data field (ASDU) with a size equal to the maximum size that can
be transported over the communication path consisting of the Management Client, the Management
Server and Couplers and Routers in between these two.

   - If the Management Server does not support the L_Data_Extended Frame format, then this
maximal size shall be 11 octets.

   - If the Management Server supports L_Data_Extended Frames, then the maximal size shall
be adapted in function of the capabilities of the Management Server and possible Couplers
and Routers in the communication path to the Management Client. This is specified in [06].

**Used Application Layer Services for Management**

  - A_FilterTable_Read

**Sequence**


Management
Client


Management
Server


remark


for each data block (data size ≤ maximal size), until all data are transmitted

A_FilterTable_Read-PDU

(Addr, Length)

A_FilterTable_Response-PDU A_Disconnect.ind ⇒

(Addr, Length, Data) error,

no data received ⇒ error
endfor

**Exception handling**

The general exception handling shall apply.

#### 3.44 DM_LCExtMemOpen

##### 3.44.1 Use
This device Management Procedure shall be used to enable writing in the external memory of the
Management Server (Coupler).

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.


-----

##### 3.44.2 Procedure: DMP_LCExtMemOpen_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_FilterTable_Open

**Sequence**


Management
Client

A_FilterTable_Open-PDU

()

**Exception handling**

The general exception handling shall apply.

#### 3.45 DM_LCRouteTableStateWrite


Management
Server


remark


##### 3.45.1 Use
This device Management Procedure shall be used to write the state of the routing table to the
Management Server (line coupler).

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCRouteTableStateWrite (flags, routeTableState)

flags bit 0 location of data (routeTableState)
0: in data block
1: in management control
bit 1 verify enabled / disabled
0: disabled
1: enabled
All other bits are reserved. These shall be set to 0. This shall be tested by
the Management Client.
routeTableState state of the routing table (see description of APDU)

##### 3.45.2 Procedure: DMP_LCRouteTableStateWrite_RCo
This Management Procedure shall use the connection oriented communication mode.

The Verify Mode of the Management Server shall not be used.

**Used Application Layer Services for Management**

  - A_RouterStatus_Write

  - A_RouterStatus_Read


-----

**Sequence**

Management
Client

if verify = enabled


Management
Server


remark


A_RouterStatus_Response-PDU A_Disconnect.ind ⇒

(RouteTableState) error,

different or no data received
⇒ error
endif

**Exception handling**

The general exception handling shall apply.

#### 3.46 DM_LCRouteTableStateVerify

##### 3.46.1 Use
This device Management Procedure shall be used to read and verify the state of the routing table to the
Management Server (Coupler).

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCRouteTableStateVerify (flags, routeTableState)

flags bit 0 location of data (routeTableState)
0: in data block
1: in management control
All other bits are reserved. These shall be set to 0. This shall be tested by
the Management Client.
routeTableState state of the routing table (see description of APDU)

##### 3.46.2 Procedure: DMP_LCRouteTableStateVerify_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_RouterStatus_Read


-----

###### Sequence

Management
Client


Management
Server


remark


A_RouterStatus_Response-PDU A_Disconnect.ind ⇒

(RouteTableState) error,

different or no data received
⇒ error

**Exception handling**

The general exception handling shall apply.

#### 3.47 DM_LCRouteTableStateRead

##### 3.47.1 Use
This device Management Procedure shall be used to read the state of the Routing Table to the
Management Server (Coupler).

A DM_Connect shall be executed before executing this Management Procedure.

This device Management Procedure shall not be used for further developments of Management
Servers.

DM_LCRouteTableStateRead (flags, routeTableState)

flags bit 0 location of data (routeTableState)
0: in data block
1: All other bits are reserved. These shall be set to 0. This shall be tested by
the Management Client.
routeTableState state of the routing table (see description of APDU)

##### 3.47.2 Procedure: DMP_LCRouteTableStateRead_RCo
This Management Procedure shall use the connection oriented communication mode.

**Used Application Layer Services for Management**

  - A_RouterStatus_Read

**Sequence**


Management
Client

**Exception handling**


Management
Server


remark

A_Disconnect.ind ⇒
error,
no data received ⇒ error


A_RouterStatus_Response-PDU


The general exception handling shall apply.


-----

### 4 Security related Management Procedures

#### 4.1 DM_SecureSync_SBC
**Use**

This Device Management Procedure shall be used to synchronise the two Sequence Numbers to be
used for secure communication between a MaC and a single MaS.

This serves the preparation of the secure procedures NM_DomainAddress_SerialNumber_Write and
NM_IndividualAddress_SerialNumber_Write.

If initiated or passed on an open medium, the system broadcast communication mode shall be used; on
a closed medium, the broadcast communication mode shall be used.

The parameter serial_number of the S-A_Sync_Req-PDU shall contain the assumed KNX Serial
Number of the MaS (mpp_SN_mas); this value shall not be zero.

**Used Application Layer Services for Management**

  - S-A_Sync

**Parameters of the Management Procedure**

DM_SecureSync_SBC( /* [in] */ mpp_comm_mode, /* [in] */ mpp_SN_mas,
/* [in] */ mpp_key_request, /* [in] */ mpp_key_type,
/* [in] */ mpp_seq_nr_mac_in, /* [out] */ mpp_seq_nr_mas_out,
/* [out] */ mpp_seq_nr_mac_out)

mpp_comm_mode: Indication of whether either broadcast – or system broadcast
communication mode shall be used.
mpp_SN_mas: The KNX Serial Number of the device with which the Sequence
Numbers will be synchronised.
mpp_key_request: The key of the MaS with which the Sequence Numbers will be
synchronised. This can be any of the following.

                       - The FDSK if the MaC supposes the MaS to be in default
state.

USE S-Mode, PB-Mode (“Advanced Security”)

                       - A Tool Key that is configured before.

USE S-Mode

                       - A common key established before during a Diffie-Hellmann
key exchange procedure.

USE PB-Mode (“Basic Security”)
mpp_key_type: This shall indicate whether the Tool Key is used or not and shall
determine the value of the field Tool Access in the SCF of the
S-A_Sync messages.

                       - In S-Mode, the mpp_key_type shall be “Tool Access” and the
field Tool Access shall be set accordingly.

                       - In PB-Mode, the mpp_key_type shall be “no Tool Access”
and the field Tool Access in the SCF shall be cleared.

mpp_seq_nr_mac_in: The Sequence Number that the MaC assumes that it has to use as its
own local Sequence Number Sending for communicating with the
device.
If the MaC does not store this SeqNr, then mpp_seq_nr_mac_in shall
be zero.
mpp_seq_nr_mas_out: The device Sequence Number as returned by the device.


-----

mpp_seq_nr_mac_out: The tool Sequence Number as returned by the device.

**Variables**

challenge_in: The challenge chosen by the local S-AL
Please note the requirements on the challenge, in the specification of the
S-A_Sync-service in [03].

Random: The Random value generated by the remote S-AL

**Sequence**

local S-AL remote S-AL

The local S-AL shall create the challenge_in, compose the S-A_Sync_Req-PDU, secure the message
with the MAC and request the transmission with a T_Data_Broadcast or T_Data_SystemBroadcast
according the parameter mpp_comm_mode.

S-A_SYNC_REQ-PDU
(SeqNrlocal = mpp_seq_nr_mac_in,
KNX Serial Number = mpp_SN_mas, challenge = challenge_in,
MAC)
comm_mode = mpp_comm_mode, SCF.T = mpp_key_type,
SCF.SBC = 1, key = mpp_key_request

.The remote S-AL shall evaluate the received S-A_Sync.ind as specified in [03]: it shall

not accept the request if it has responded to a preceding request less than 1 s before; if it
accepts the request then it shall evaluate the KNX Serial Number if ≠ 0; it shall verify the
MAC.
If the service request is accepted, it shall respond as follows.

                - mpp_seq_nr_mas_out shall be the SeqNr of the remote S-AL itself
(= PID_SEQUENCE_NUMBER_SENDING).

                - mpp_seq_nr_mac_out shall be the maximal value of
1. mpp_seq_nr_mac_in, and
2. the sequence number that the MaS accepts as next SeqNr for that MaC).

               - In case the MaC uses the Tool Key, this is thus be derived from the
Sequence Number for Tool Access (see [05]).

               - In case of any other communication partner, this shall thus be derive
from the Last Valid SeqNr as stored for that partner in the Security
Individual Address Table (see PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in ).
The MaS shall also assume this highest value as the new value that it shall expect
from the MaC. (In case of 1., the MaS thus changes the SeqNr that it expects from
the MaC to this highest value.)

                - It shall create a Random-value and XOR it with the received Challenge (see
S-A_Sync-service specification in [03]
The KNX Serial Number shall not be contained in the S-A_Sync_Res-PDU.
The MaS shall secure the message with the MAC using the key as indicated in the request
and request the transmission with a T_Data_Broadcast or T_Data_SystemBroadcast
according the parameter mpp_comm_mode.

S-A_SYNC_RES-PDU
(Challenge XOR Random, SeqNrremote = mpp_seq_nr_mas_out,
SeqNrlocal = mpp_seq_nr_mac_out)
comm_mode = mpp_comm_mode, SCF.T = mpp_key_type,

SCF.SBC = 1, key = mpp_key_request

The remote S-AL shall after transmission of the S-A_SYNC_RES-PDU start a 1 s timer; while this

timer is running, it shall not accepted any further S-A_SYNC_REQ-PDU.


-----

local S-AL remote S-AL

If the local S-AL receives the S-A_Sync_Res-PDU then it shall ignore this message if it has not sent out
before an S-A_Sync_Req-PDU.
If the local S-AL accepts the S-A_Sync_Res-PDU then it shall do the following.

- It shall calculate the Random value by XOR-ing it with its own initially used Challenge (see the
specification of the S A_Sync-service in [02].)

- It shall verify the MAC.
If there are no errors, then the MaC shall use the following values for SeqNrlocal and SeqNrremote.

- SeqNrlocal = max(mpp_seq_nr_mac_out, SeqNrlocal)

In-between the transmission of the S-A_Sync_Req-PDU and the reception of the
S-A_Sync_Res-PDU, the MaC may have transmitted any S-A_Data-PDUs, which
incremented its Sequence Number Sending. The MaC shall thus take the highest value.

- SeqNrremote = (mpp_seq_nr_mas_out, SeqNrremote,stored)

It should normally not happen that the MaS replies (mpp_seq_nr_mas_out) with a value that
is lower than the optionally locally stored one (SeqNrremote,stored). For the case that this
however happens (MaS error), the MaC shall assume the highest value.

**Exception handling**

- If the MaC does not receive a response from the MaS, then it shall repeat the request once. If
there is still no request after one retry then the MaC shall consider the procedure as failed.

NOTE 18 The S-Mode MaC will call this Management Procedure with the Tool Access flag set and using
the Tool Key or the FDSK. If either key (Tool Key or FDSK) fails, the S-Mode MaC will typically retry the
Management Procedure with the other key (FDSK respectively Tool Key). This will allow handling the case where
the MaS was before handled by another instance of the MaC, or, the case where the MaS has manually been
triggered to perform a Master Reset.

- If a response is received but the MAC-verification fails then the MaC shall consider the procedure
as failed.

#### 4.2 DM_SecureSync_RCl
**Use**

This Device Management Procedure shall be used to synchronise the two Sequence Numbers to be
used for secure communication between a MaC and a single MaS.

This Management Procedure is used to synchronise at runtime, this is, between a MaC and a MaS for
which both network configuration is complete and correct; this Management Procedure shall be used
on point-to-point connectionless or – connection oriented communication mode.

This Management Procedure can be used between a Tool and an end device or between end devices.

The parameter serial_number of the S-A_Sync_Req-PDU shall contain either the assumed KNX Serial
Number of the MaS or be 0 (mpp_SN_mas).

**Used Application Layer Services for Management**

  - S-A_Sync

**Parameters of the Management Procedure**

DM_SecureSync_RCl( /* [in] */ mpp_comm_mode, /* [in] */ mpp_SN_mas,
/* [in] */ mpp_key_request, /* [in] */ mpp_key_type,
/* [in] */ mpp_seq_nr_mac_in, /* [out] */ mpp_seq_nr_mas_out,
/* [out] */ mpp_seq_nr_mac_out)

mpp_comm_mode: Indication of whether either point-to-point connectionless – or
connection-oriented communication mode shall be used.


-----

mpp_SN_mas: This parameter shall either

                       - equal the KNX Serial Number of the device with which the
Sequence Numbers will be synchronised, or

                       - be the value 0.

mpp_key_request: The key of the MaS with which the Sequence Numbers will be
synchronised. This can be any of the following.

                       - The FDSK if the MaC supposes that the MaS is using its
FDSK.

                       - A Tool Key that is configured before.

USE S-Mode

                       - A common key configured before for point-to-point
communication between the MaC and the MaS as contained
in the respective Point-to-point Key Tables. (Please refer to
the specification of PID_P2P_KEY_TABLE in [05]).

USE S-Mode, PB-Mode
mpp_key_type: This shall indicate whether the Tool Key is used or not and shall
determine the value of the field Tool Access in the SCF of the
S-A_Sync messages.
mpp_seq_nr_mac_in: The Sequence Number that the MaC assumes that it has to use as its
own local Sequence Number Sending for communicating with the
device.
If the MaC does not store this SeqNr, then seq_nr_mac_in shall be
zero.
mpp_seq_nr_mas_out: The device Sequence Number as returned by the MaS (device).
mpp_seq_nr_mac_out: The tool Sequence Number as returned by the MaS (device).

**Variables**

challenge_in: The challenge chosen by the local S-AL
Please refer to the requirements on the challenge in the specification of the
S-A_Sync-service in [03].

Random: The Random value generated by the remote S-AL

**Sequence**

local S-AL remote S-AL

The local S-AL shall create the challenge_in, compose the S-A_Sync_Req-PDU, secure the message
with the MAC and request the transmission with a T_Data_Individual or T_Data_Connected according
the parameter mpp_comm_mode; if T_Data_Connected is used, then a TL-connection shall be
established before, if this is not yet the case.

S-A_SYNC_REQ-PDU
(SeqNrlocal = mpp_seq_nr_mac_in,
KNX Serial Number = mpp_SN_mas, challenge = challenge_in,
MAC)
comm_mode = mpp_comm_mode, SCF.T = mpp_key_type,
SCF.SBC = 0, key = mpp_key_request


-----

local S-AL remote S-AL

.The remote S-AL shall evaluate the received S-A_Sync.ind as specified in the S-A_Sync
service in [03]: it shall not accept the request if it has responded to a preceding request
less than 1 s before; if it accepts the request then it shall evaluate the KNX Serial Number
if ≠ 0; it shall verify the MAC.
If the service request is accepted, it shall respond as follows.

                - mpp_seq_nr_mas_out shall be the SeqNr of the remote S-AL itself
(= PID_SEQUENCE_NUMBER_SENDING).

                - mpp_seq_nr_mac_out shall be the maximal value of
1. mpp_seq_nr_mac_in, and
2. the sequence number that the MaS accepts as next SeqNr for that MaC).

               - In case the MaC uses the Tool Key, this is thus be derived from the
Sequence Number for Tool Access(see “Sequence Number for Tool
Access” in [05]).

               - In case of any other communication partner, this shall thus be derived
from the Sequence Number as stored for that partner in the Security
Individual Address Table (see PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in [05]).
The MaS shall also assume this highest value as the new value that it shall expect
from the MaC. (In case of 1., the MaS thus changes the SeqNr that it expects from
the MaC to this highest value.)

                - It shall create a Random-value and XOR it with the received Challenge (see the
requirements on the challenge in the specification of the S-A_Sync-service in [03].).
The KNX Serial Number shall not be contained in the S-A_Sync_Res-PDU.
The MaS shall secure the message with the MAC using the key as indicated in the request
and request the transmission with a T_Data_Broadcast or T_Data_SystemBroadcast
according the parameter comm_mode.

S-A_SYNC_RES-PDU
(Challenge XOR Random, SeqNrremote = mpp_seq_nr_mas_out,
SeqNrlocal = mpp_seq_nr_mac_out)
comm_mode = mpp_comm_mode, SCF.T = mpp_key_type,

SCF.SBC = 0, key = mpp_key_request

The remote S-AL shall after transmission of the S-A_SYNC_RES-PDU start a 1 s timer; while this

timer is running, it shall not accepted any further S-A_SYNC_REQ-PDU.
If the local S-AL receives the S-A_Sync_Res-PDU then it shall ignore this message if it has not sent out
before an S-A_Sync_Req-PDU.
If the local S-AL accepts the S-A_Sync_Res-PDU then it shall do the following.

- It shall calculate the Random value by XOR-ing it with its own initially used Challenge (see the
specification of the S-A_Sync-service in [03]).

- It shall verify the MAC.
If there are no errors, then the MaC shall use the following values for SeqNrlocal and SeqNrremote.

- SeqNrlocal = max(mpp_seq_nr_mac_out, SeqNrlocal)

In-between the transmission of the S-A_Sync_Req-PDU and the reception of the
S-A_Sync_Res-PDU, the MaC may have transmitted any S-A_Data-PDUs, which
incremented its Sequence Number Sending. The MaC shall thus take the highest value.

- SeqNrremote = (mpp_seq_nr_mas_out, SeqNrremote,stored)

It should normally not happen that the MaS replies (mpp_seq_nr_mas_out) with a value that
is lower than the optionally locally stored one (SeqNrremote,stored). For the case that this
however happens (MaS error), the MaC shall assume the highest value.

**Exception handling**

- If the MaC does not receive a response from the MaS, then in case of point-to-point
connectionless communication it shall repeat the request once; if there is still no request after one
retry then the MaC shall consider the procedure as failed. In case of point-to-point connectionoriented communication, the request shall not be repeated.

NOTE 19 Please also refer to NOTE 18: if the synchronisation fails for the S-Mode MaC with either the
FDSK or the Tool Key, then that MaC may repeat the entire Management Procedure with the Tool Key
respectively the FDSK.


-----

- If a response is received but the MAC-verification fails then the MaC shall consider the procedure
as failed.


-----

### 5 Group Object Diagnostics

#### 5.1 DMP_GO_DIAGNOSTICS_RCl
This Management Procedure shall be used to perform Group Object Diagnostics to the GOs of the
MaS.

This Management Procedure shall be used in point-to-point connectionless communication mode. If
the MaS supports connections, then it shall additionally be supported connection-oriented.

DMP_GO_DIAGNOSTICS_RCl (/* [in] */ dmp_command, /* [in] */ dmp_group_object_number,
/* [in] */ command_data, /* [out] */ command_result_data)

  - dmp_command: the command that shall be executed

  - dmp_group_object_number: indication of the Group Object to which the command shall

be executed

S-Mode the Group Object number

E-Mode the Group Object index

  - dmp_command_data: command specific data

  - dmp_command_result_data: Return Code and possible additional command result data

**Used Application Layer services**

   - A_FunctionPropertyCommand

MaC MaS
In function of the command that will be used, the MaC may have to set the
Operation Mode to “Diagnostic Mode”. Please refer to the specification of the
GO Diagnostic commands for which commands require prior setting the
Operation Mode to “Diagnostic Mode”.

A_FunctionPropertyCommand-PDU

(object_index = 00h,
PID = PID_OPERATION_MODE, data = 1)

If the MaS accepts the command then it shall set its Operation Mode to “Diagnostic Mode”

and respond to the MaS with Return Code E_OM_CURRENT_OPERATION_MODE and

the Time Left.
If the MaS does not accept the command then it shall respond with the Return

Code E_OM_ERROR and the Time Left.
A_FunctionPropertyState_Response-PDU

(object_index = 00h,
PID = PID_OPERATION_MODE, Return Code,
Operation Mode, Time Left)

If the MaS responds with a negative Return Code, then the MaC shall
abandon the procedure.
If the MaS responds with a positive Return Code, then the MaC shall continue
the procedure.

|be executed|Col2|
|---|---|
|S-Mode|the Group Object number|
|E-Mode|the Group Object index|


-----

If the MaS responds with a Time Left ≠ 255 s, then the MaC shall retrigger
the Operation Mode as needed before this Operation Mode expires
automatically at the MaS.

The MaS may now access Group Object Diagnostics.

A_FunctionPropertyCommand-PDU
(object_index = Group Object Table.index[ 18)],
PID = PID_GO_DIAGNOSTICS,
data = dmp_command + dmp_group_object_number
+ dmp_command_data)

If the MaS supports Group Object Diagnostics in the addressed Interface Object, then it shall respond.

A_FunctionPropertyState_Response-PDU
(object_index = Group Object Table.index
PID = PID_GO_DIAGNOSTICS,
data = dmp_return_code + dmp_command +
dmp_group_object_number +
dmp_command_result_data)

Depending on the specific command, the MaS or the user may further have to
do the following.

- It may have to interpret the data returned in the dmp_command_result_data.


EXAMPLE 13 For the command “Get local GO value”.

- It may additionally have to monitor the bus and the communication
partners of the addressed GO.

EXAMPLE 14 For the commands “Send A_GroupValue_Write” and “Send
local GO value on bus” the MaC may verify whether the MaS effectively
sends a Frame on the bus, whether this is received by the communication
partners and how these react.

- It may need subsequent commands to complete an entire operation.


EXAMPLE 15 The command “Read GO value from bus” may not return
the final result. This may have to be read over a next command “Get local
GO value”.
At the end, if the user does not perform any further GO Diagnostics, the MaC
shall set the Operation Mode of the MaS back to “Normal Operation” if this
was set to “Diagnostic Mode” before.

NOTE 20 These Device Management Procedures are specified for a single MaS.
The MaC shall reset however all involved MaS.


A_FunctionPropertyCommand-PDU

(object_index = 00h,
PID = PID_OPERATION_MODE, data = 0)


If the MaS accepts the command then it shall set its Operation Mode to “Normal Mode” and

respond to the MaS with Return Code E_OM_CURRENT_OPERATION_MODE and the

Time Left.
If the MaS does not accept the command then it shall respond with the Return
Code E_OM_ERROR and the Time Left. The MaC shall in that case after that time retry to

set the Operation Mode back to “Normal mode”.

18) In an E-Mode MaS, the Property shall not be addressed in the Group Object Table but in the E-Mode
Channel Object or Adjusted E-Mode Channel Object in which the GO resides that shall be diagnosed.


-----

A_FunctionPropertyState_Response-PDU

(object_index = 00h,
PID = PID_OPERATION_MODE, Return Code,
Operation Mode, Time Left)

#### 5.2 DMP_GA_DIAGNOSTICS_RCl
This Management Procedure shall be used to perform Group Object Diagnostics to the GAs of the
MaS.


This Management Procedure shall be used in point-to-point connectionless communication mode. If
the MaS supports connections, then it shall additionally be supported connection-oriented.

DMP_GA_DIAGNOSTICS_RCl (/* [in] */ dmp_command, /* [in] */ dmp_flags,
/* [in] */ dmp_group_address, /* [in] */ command_data,
/* [out] */ command_result_data)



- dmp_command: the command that shall be executed

- dmp_flags the flags that shall be included in the command



- dmp_group_address: indication of the Group Address to which the command shall
be executed

- dmp_command_data: command specific data


EXAMPLE 16 The value to be sent on the GA (WriteServiceID
01h) or nothing (WriteServiceID 03h).

- dmp_command_result_data: Return Code and possible additional command result data


**Used Application Layer services**

   - A_FunctionPropertyCommand


MaC MaS
NOTE 21 The GO Diagnostic commands that address Group Addresses do not require
Diagnostic Mode to be enabled. The MaC may set this.

The MaS may now access Group Object Diagnostics.

A_FunctionPropertyCommand-PDU
(object_index = Group Object Table.index[ 19)],
PID = PID_GO_DIAGNOSTICS,
data = dmp_command + dmp_flags +
dmp_group_address+ dmp_command_data)


If the MaS supports Group Object Diagnostics in the addressed Interface Object, then it shall

respond.
A_FunctionPropertyState_Response-PDU
(object_index = Group Object Table.index
PID = PID_GO_DIAGNOSTICS,
data = dmp_return_code + dmp_command)

Depending on the specific command, the MaS or the user may further have to
do the following.

19) In an E-Mode MaS, the Property shall not be addressed in the Group Object Table but in the E-Mode
Channel Object or Adjusted E-Mode Channel Object in which the GO resides that shall be diagnosed.


-----

MaC MaS

- The MaC may have to interpret the data returned in the dmp_command_result_data.

This mainly concerns negative Return Codes.

- The MaC may additionally have to monitor the bus and the
communication partners of the addressed GO.

EXAMPLE 17 For the WriteServiceID 01h Send A_GroupValue_Write and the
WriteServiceID 03h Send A_GroupValue_Read, the Return Code gives no indication of
success or failure of the transmission of a Telegram on the bus.
EXAMPLE 18 For the WriteServiceID 03h Send A_GroupValue_Read, the Return
Code gives no indication about the number and contents of any
A_GroupValue_Response-PDUs that have as a result been sent on the bus by other
devices.

- The MaC may need subsequent commands to complete an entire
operation.
The MaS shall in the above also provide the message to the internal GOs
(see the specification of the WriteServiceID 01h - Send
A_GroupValue_Write in [05]). The result of this is not contained in the
Return Code back to the MaC.

For the WriteServiceID “Send A_GroupValue_Write” if the MaC wants
to know if the internal GOs are updated, then it shall read one or more
values with the ReadServiceID “Get local GO value”. The MaC shall
however do this at first after 100 ms after the WriteServiceID. If the MaC
is not satisfied with the response, then it shall wait at least 1 s and may
repeat the request still two times more, each time waiting 1 s.

For the WriteServiceID 03h “Send A_GroupValue_Read” the MaC may
check whether any GO-value in the MaS has changed with a
ReadServiceID 01h “Get local GO value”.


-----

### 6 KNXnet/IP Management Procedures

#### 6.1 NM_SearchRequestExtended_Multicast


Client Server (device)

SEARCH_REQUEST_EXTENDED

(UDP, discovery endpoint, SRPs)


Evaluates all SRPs from the request according the specification of the Seach

Request Parameters in [10]
If the result of the evaluation is to create a response:.
SEARCH_RESPONSE_EXTENDED

(DIBs)

Collect all responses until either all expected responses
have arrived, or a timeout of 3 seconds elapsed.


#### 6.2 DM_SearchRequestExtended_Unicast

Client Server (device)


SEARCH_REQUEST_EXTENDED
(UDP or TCP, control endpoint, SRPs)


Evaluates all SRPs from the request according the specification of the Seach

Request Parameters in [10].
If the result of the evaluation is to create a response:.
SEARCH_RESPONSE_EXTENDED

(DIBs)

The client shall wait for UNICAST_SEARCH_RESPONSE_EXTENDED_TIME_OUT (10 s)


-----

#### 6.3 DMP_KNXnet/IP_Connect
This procedure shall be used to connect to a KNXnet/IP server using a specific connection type.

DMP_KNXnet/IP_Connect( /* [in] */ dmp_HPAIControlEndpoint,
/* [in] */ dmp_HPAIDataEndpoint, /* [in] */ dmp_CRI,
/* [out] */ dmp_CommChannelID, /* [out] */ dmp_Status,
/ *[out] */ dmp_HPAIServerDataEndpoint, / *[out] */ dmp_CRD)

**Parameters of the Management Procedure**

dmp_HPAIClientControlEndpoint: This Management Procedure Parameter shall contain the
HPAI of the Control Endpoint of the Management Client.
dmp_HPAIClientDataEndpoint: This Management Procedure Parameter shall contain the
HPAI of the Data Endpoint of the Management Client.
dmp_CRI: This Management Procedure Parameter shall contain the
Connection Request Information from the Management
Client.
dmp_CommChannelID: This Management Procedure Parameter shall return the
communication channel ID that is chosen by the
Management Server.
dmp_Status: This Management Procedure Parameter shall return the
status of the request.
dmp_HPAIServerDataEndpoint: This Management Procedure Parameter shall contain the
HPAI of the Data Endpoint of the Management Server.
dmp_CRD: This Management Procedure Parameter shall contain the
Connection Response Data Block from the Management
Server.

**Variables**

None.

**Precondition**

Through KNXnet/IP Discovery, it is confirmed that the KNXnet/IP device supports the requested
connection type.

NOTE 22 To this, the KNXnet/IP Client sends a DESCRIPTION_REQUEST to the control endpoint of the device to which it
wants to establish a KNXnet/IP Tunnelling Connection. The device shall respond with a DESCRIPTION_RESPONSE frame
holding the “DIB supported service families”. If the device supports KNXnet/IP Tunnelling, one of the DIBs will report a
Supported Service family 04h, this is, KNXnet/IP Tunnelling.

**Sequence**


**KNXnet/IP**

**Client**


**KNXnet/IP**
**Server**
CONNECT_REQUEST
(HPAI Control Endpoint = dmp_HPAIClientControlEndpoint,
HPAI Data Endpoint = dmp_HPAIClientDataEndpoint,

CRI = dmp_CRI)

CONNECT_RESPONSE
(dmp_CommChannelID = communication channel ID,
dmp_Status = status,
dmp_HPAIServerDataEndpoint = HPAI Data Endpoint,

dmp_CRD = CRD)


-----

#### 6.4 DMP_InterfaceObjectWrite_IP
**Used KNXnet/IP Services**

- DEVICE_CONFIGURATION_REQUEST

with cEMI-services
  - M_PropWrite.req
  - M_PropWrite.con

- DEVICE_CONFIGURATION_ACK

**Preconditions**

It is assumed that any type of KNXnet/IP connection exists to the Management Server with
Communication Channel ID dmp_CommChannelID.

**Parameters of the Management Procedure**

DMP_InterfaceObjectWrite_IP(/* [in] */ mpp_Obj.Type, /* [in] */ mpp_Obj.Inst,
/* [in] */ mpp_Prop.ID, /* [in] */ mpp_Prop.Value, /* [in] */ mpp_Prop.StartIndex,
/* [in] */ = mpp_Prop.NrOfElem, /* [out] */ = mpp_ErrorCode)

mpp_Obj.Type: This Management Procedure Parameter shall hold the Object Type of
the Interface Object in which the Property shall be written.
mpp_Obj.Inst: This Management Procedure Parameter shall hold the Instance of the
Interface Object in which the Property shall be written.
mpp_Prop.ID: This Management Procedure Parameter shall hold the Property
Identifier of the Property that shall be written.
mpp_Prop.Value: This Management Procedure Parameter shall hold the value of the
Property that is shall be written.
mpp_Prop.StartIndex: This Management Procedure Parameter shall hold the start index
within the Property value from which index onwards the Property
value shall be written.
mpp_Prop.NrOfElem: This Management Procedure Parameter shall hold the number of
Property array elements that shall be written.
mpp_ErrorCode: This Management Procedure Parameter shall return the Error Code
that may be returned by the Management Server.

**Variables**

mpp_Obj.NoE This shall hold the number of elements of the Property Value that is
written in one call of the cEMI service M_PropWrite.req.

mpp_Obj.SIx: This shall hold the start index within the Property Value from which
the Property elements are written.

**Sequence**

**KNXnet/IP** **KNXnet/IP**

**Client** **Server**

The Management Client writes the Property Value
with a DEVICE_CONFIGURATION_REQUEST.
For each data block until all data are transferred

DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = (M_PropWrite.req(IOT = mpp_Obj.Type,
OI = mpp.Obj.Inst, PID = mpp_Prop.ID,
NoE = mpp_Obj.NoE, SIx = mpp_Obj.SIx)


-----

The Management Server confirms the reception of the request

with a DEVICE_CONFIGURATION_ACK.
DEVICE_CONFIGURATION_ACK

(Status)

The Management Server now responds with the Property Value

with a new DEVICE_CONFIGURATION_REQUEST.
DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = M_PropWrite.con(IOT = mpp_Obj.Type,
OI = mpp_Obj.Inst, PID = mpp_Prop.ID,
NoE = mpp_Obj.NoE, SIx = mpp_Obj.SIx,

mpp_ErrorCode = Error Code))

The Management Client confirms the reception of the response
with a DEVICE_CONFIGURATION_ACK.

DEVICE_CONFIGURATION_ACK

(Status)

#### 6.5 DMP_InterfaceObjectRead_IP
**Used KNXnet/IP Services**

- DEVICE_CONFIGURATION_REQUEST

with cEMI-services
  - M_PropRead.req
  - M_PropRead.con

- DEVICE_CONFIGURATION_ACK

**Preconditions**

It is assumed that any type of KNXnet/IP connection exists to the Management Server with
Communication Channel ID dmp_CommChannelID.

**Parameters of the Management Procedure**

DMP_InterfaceObjectRead_IP(/* [in] */ mpp_Obj.Type, /* [in] */ mpp_Obj.Inst,
/* [in] */ mpp_Prop.ID, /* [out] */ mpp_Prop.Value, /* [out] */ mpp_Prop.CurrentNr)

mpp_Obj.Type: This Management Procedure Parameter shall hold the Object Type of
the Interface Object in which the Property shall be read.
mpp_Obj.Inst: This Management Procedure Parameter shall hold the Instance of the
Interface Object in which the Property shall be read.
mpp_Prop.ID: This Management Procedure Parameter shall hold the Property
Identifier of the Property that shall be read.
mpp_Prop.Value: This Management Procedure Parameter shall return the value of the
Property that is read.
mpp_Prop.CurrentNr: This Management Procedure Parameter shall return the current
number of elements of the Property that is read.


-----

**Variables**

mpp_Obj.NoE This shall hold the number of elements of the Property Value that is
read in one call of the cEMI service M_PropRead.req.

mpp_Obj.SIx: This shall hold the start index within the Property Value from which
the Property elements are read.

**Sequence**

**KNXnet/IP** **KNXnet/IP**

**Client** **Server**

If the Management Client does not know the number of elements of the Property
Value array then this has to be read on beforehand[ 20)].

DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = (M_PropRead.req(IOT = mpp_Obj.Type,
OI = mpp.Obj.Inst, PID = mpp_Prop.ID, NoE = 1, SIx = 0)

The Management Server confirms the reception of the request

with a DEVICE_CONFIGURATION_ACK.
DEVICE_CONFIGURATION_ACK

(Status)

The Management Server now responds with the number of elements

with a new DEVICE_CONFIGURATION_REQUEST.
DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = M_Propread.con(IOT = mpp_Obj.Type,
OI = mpp_Obj.Inst, PID = mpp_Prop.ID, NoE = 1, SIx = 0,

Data = mpp_Obj.NoE))

The Management Client confirms the reception of the response
with a DEVICE_CONFIGURATION_ACK.

DEVICE_CONFIGURATION_ACK

(Status)

The Management Client requests the Property Value
with a DEVICE_CONFIGURATION_REQUEST.

DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = (M_PropRead.req(IOT = mpp_Obj.Type,
OI = mpp.Obj.Inst, PID = mpp_Prop.ID,
NoE = mpp_Obj.NoE, SIx = mpp_Obj.SIx)

The Management Server confirms the reception of the request

with a DEVICE_CONFIGURATION_ACK.
DEVICE_CONFIGURATION_ACK

(Status)

20) This first reading is thus optional. It should only occur if the Management Client does not know the number
of elements of the Property Value. Specifically, this should be done when the Property Value may be an
array of which the current number of elements is unknown. By this value and by the knowledge of the
maximal Frame length in-between the Management Client and the Management Server (see “Discovery of
maximal Frame length” in [4]), the Management Client may know how many read operations may be
required and how much data can fit in one single response.


-----

The Management Server now responds with the Property Value

with a new DEVICE_CONFIGURATION_REQUEST.
DEVICE_CONFIGURATION_REQUEST
(CommunicationChannel ID = dmp_CommChannelID,
cEMI-Frame = M_Propread.con(IOT = mpp_Obj.Type,
OI = mpp_Obj.Inst, PID = mpp_Prop.ID,
NoE = mpp_Obj.NoE, SIx = mpp_Obj.SIx,

Data = mpp_Prop.Value))


The Management Client confirms the reception of the response
with a DEVICE_CONFIGURATION_ACK.

DEVICE_CONFIGURATION_ACK

(Status)

#### 6.6 NM_TunnellingFeature_Read


Tunnelling
Client


Tunnelling
Server (device)


TUNNELLING_FEATURE_GET

(Feature Identifier)


In case of a UDP connection, the Tunnelling Server shall confirm the
Tunnelling Feature service with TUNNELLING_ACK just like other
KNXnet/IP Tunnelling services (see clause “Tunnelling Feature services”

in [12]).
UDP: TUNNELLING_ACK

UDP: If the Tunnelling Client does not receive a TUNNELLING_ACK within the
TUNNELLING_REQUEST_TIME_OUT (1 s) then it shall repeat the
TUNNELLING_FEATURE_GET 1 time.

The Tunnelling Server shall within 3 s respond with a
TUNNELLING_FEATURE_RESPONSE, repeating the Feature Identifier
and including the Return Code and the Feature Value if the Return Code is

positive.
TUNNELLING_FEATURE_RESPONSE
(Feature Identifier, Return Code, Feature Value)


UDP: In case of a UDP connection, the Tunnelling Client shall confirm the reception of the
TUNNELLING_FEATURE_RESPONSE with a TUNNELLING_ACK.

UDP: TUNNELLING_ACK

UDP: If the Tunnelling Server does not receive a TUNNELLING_ACK within the TUNNELLING_REQUEST_TIME_OUT (1 s) then it shall repeat the TUNNELLING_FEATURE_RESPONSE 1 time.


-----

#### 6.7 NM_TunnellingFeature_Set

Tunnelling
Client


Tunnelling
Server (device)


TUNNELLING_FEATURE_SET
(Feature Identifier, Feature Value)


In case of a UDP connection, the Tunnelling Server shall confirm the
Tunnelling Feature service with TUNNELLING_ACK just like other
KNXnet/IP Tunnelling services (see clause “Tunnelling Feature services”

in [12]).
UDP: TUNNELLING_ACK

UDP: If the Tunnelling Client does not receive a TUNNELLING_ACK within the
TUNNELLING_REQUEST_TIME_OUT (1 s) then it shall repeat the
TUNNELLING_FEATURE_SET 1 time.

The Tunnelling Server shall within 3 s respond with a
TUNNELLING_FEATURE_RESPONSE, repeating the Feature Identifier
and including the Return Code and the Feature Value (also in case of a

negative Return Code).
TUNNELLING_FEATURE_RESPONSE
(Feature Identifier, Return Code, Feature Value)


UDP: In case of a UDP connection, the Tunnelling Client shall confirm the reception of the
TUNNELLING_FEATURE_RESPONSE with a TUNNELLING_ACK.

UDP: TUNNELLING_ACK

UDP: If the Tunnelling Server does not receive a TUNNELLING_ACK within the TUNNELLING_REQUEST_TIME_OUT (1 s) then it shall repeat the TUNNELLING_FEATURE_RESPONSE 1 time.


#### 6.8 NM_TunnellingFeature_Info

Tunnelling
Client


Tunnelling
Server (device)


If the value changes of an Interface Feature that is available to the connected

Tunnelling Client through TUNNELLING_FEATURE_INFO and that
Tunnelling Client has enabled the Interface Feature Info service (Interface
Feature 8), then the Tunnelling Server shall spontaneously send a
TUNNELLING_FEATURE_INFO to the Tunnelling Client, with the Feature

Identifier and the Feature Value.
TUNNELLING_FEATURE_INFO

(Feature Identifier, Feature Value)


UDP: In case of a UDP connection, the Tunnelling Client shall confirm the reception of the
TUNNELLING_FEATURE_INFO with a TUNNELLING_ACK.

UDP: TUNNELLING_ACK

UDP: If the Tunnelling Server does not receive a TUNNELLING_ACK within the TUNNELLING_
REQUEST_TIME_OUT (1 s) then it shall repeat the TUNNELLING_FEATURE_INFO 1 time.


-----

### 7 RF Management Procedures

#### 7.1 NMP_LinkQuality_Measure
**Use**

This Network Management Procedure shall be used to diagnose the Link Quality of the
communication between one MaS and one or more other devices (probes).

To this, the MaC will firstly set the IAs and possibly the repeat count and test criteria in the MaS.
Then, it will trigger each subsequent probe to send a message. Finally, the MaC will read out the
results from the MaS.

**Extended use: larger number of probe messages**

If step 2 in the below procedure is executed only once then this test will only give a simple basic
result.

The MaC may also repeat step 2 a number of times, so that there is richer information in the
resulting minimal -, maximal - and average values.

**Alternative use: long term recording**

The MaC may also skip part 2 and not actively trigger the probes.

In this case, it will wait a longer period (hours, days) before reading out the result from the MaS.

**Used Application Layer Services for Management**

  - A_PropertyValue_Write

  - A_PropertyValue_Read

  - A_FunctionProperty_Command

  - A_NetworkParameter_InfoReport

**Parameters of the Management Procedure**

IAProbes[]: The list of Individual Addresses of devices of which the MaC wants to read the
Link Quality of their communication with MaS 1 and the corresponding filter
information.
nr_probes: This is the number of probes in IAProbes[], thus the size of IAProbes[].
LinkQuality[] The array of Link Qualities (nr of Telegrams, minimal, average and maximal

values) according PID_RF_DIAG_QUALITY_TABLE[] in [05]. The size is
nr_probes. this is the result of this Management Procedure.

**Procedure**

**MaC** **MaS** **Probe(n)**

**1.**

The MaC sets the IAs of the device
of which it wants to measure the
Link Quality in MaS 1. This part is
a simple
DMP_InterfaceObjectWrite_R.


-----

**MaC** **MaS** **Probe(n)**
A_PropertyValue_Write-PDU
RF Medium Object, PID = PID_RF_DIAG_SA_FILTER_TABLE,

start_index = 0,
element_count = nr_probes,

data = IAProbes[])

The MaS 1 confirms the writing of the filter
Property.
A_PropertyValue_Response-PDU
(RF Medium Object, PID = PID_RF_DIAG_SA_FILTER_TABLE,

start_index = 0,
element_count = nr_probes,

data = IAProbes[])

**2.**

The MaC now triggers each Probe
to send a message.

**FOR n = 1 TO nr_probes**

The MaC triggers probe n to
send a message.


probe n confirms the reception
of the Function Property to the

MaC.
A_FunctionProperty_Response-PDU
(RF Medium Object, PID_RF_DIAG_PROBE, test_info = 00h,

test_result = 00h) [2)]

Probe n additionally sends a

message on broadcast to the

network.
A_NetworkParameter_InfoReport-PDU
(RF Medium Object, PID_RF_DIAG_PROBE, test_info = 00h,

test_result = 00h)[ 3)]

The MaS 1 receives this message. If the SA of
probe n is in its PID_RF_DIAG_SA_FILTER_TABLE, then it will measure the
message’s signal strength and add it to the average
calculation for that SA in PID_RF_DIAG_QUALITY_TABLE.
**NEXT**


-----

**MaC** **MaS** **Probe(n)**

**3.**

The MaC now reads the result
from the MaS. This part is a simple
DMP_InterfaceObjectRead_R.

A_PropertyValue_Read-PDU

RF Medium Object,
PID = PID_RF_DIAG_QUALITY_TABLE,
start_index = 0,
element_count = nr_probes)

The MaS responds with the Link Quality Table.
A_PropertyValue_Response-PDU
(RF Medium Object, PID = PID_RF_DIAG_QUALITY_TABLE,
start_index = 0, element_count =,

data = LinkQuality[])

NOTES TO THE PROCEDURE

1. This procedure is designed for the MaS and the probe n to be on the same Subnetwork (with the same Subnetwork
Address). If the MaS1 and the probe would be on different Subnetworks, with different DoAs, then the result will not
be the link quality between the MaS and the probe, but between the MaS and the Media Coupler between the MaS
and the rest of the KNX network.

2. This A_FunctionProperty_Response-PDU is in all cases sent to the MaC: this is the default behaviour of Function
Properties, and it adds reliability of this procedure to the MaC, as its command is confirmed.

3. The A_NetworkParameter_InfoReport PDU is sent on broadcast communication.

      - Other devices than the involved MaS within the RF Domain will receive this RF Telegram as well and may also update
their RF Diagnose Quality Table. This way, the MaC may run more than one test, to different MaS, in parallel.

      - Additionally, this broadcast Telegram gives an indication to the MaC that the Probe sends the test Telegram.

**Further notes**

- It is assumed that the RF communication between two RF devices 1 and 2 is symmetrical, this is,
that the link quality with device 1 as MaS and device 2 as probe, will be the same as the link
quality with device 1 as probe and device 2 as MaS.

- If the, while this procedure is running, the IA of any probe device in this procedure changes or is
assigned (by the MaC) to a different KNX RF device, then this procedure will return an incorrect
result for that IA entry. There are not requirements towards the MaS to detect this. The MaC
should only run this procedure in an environment where the IAs are stable during the execution of
this procedure.


-----

### 8 File Transfer Procedures

#### 8.1 Preconditions and error handling

##### 8.1.1 Preconditions
he Management Client shall act as a File Client. If the File Server Object is unknown to the
Management Client, then before accessing the File Server Object the Management Client shall use
DM_InterfaceObjectScan to find the Object Index of the File Server Object(s).

##### 8.1.2 Common error and exception handling
###### For all procedures that transfer a file or a directory listing, the corresponding receiver shall stop waiting for data after a certain time-out (if no data arrive). If a time-out occurs, an error message shall be created.

 Procedures that convey an invalid command shall be processed normally. The command shall simply be ignored and the appropriate error code shall be returned. This error code has influence to the next steps of the procedure.

#### 8.2 FTP_RetrieveFile
**Use**

This Management Procedure shall be used to read a file in FTP (raw) mode from a File Server.

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code, data)

- A_PropertyValue_Write-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_PropertyValue_Response-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_FileStream_InfoReport-PDU(destination_address, file_handle, file_block_sequence_number,
file_block)

**Variables in FTP_RetrieveFile**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.
File Path The path to the file to be retrieved from the File Server.
File handle File handle retrieved from the FTP server


-----

**Sequence**

Management Management remark
Client Server

repeat

get file handle from File Server Object

A_FunctionPropertyCommand-PDU The File Server shall execute
(Server IA, File Server OI, PID_FILE_COMMAND, the command “Get File
data = Get File handle) handle” and return the File

handle.
A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code, Return Value)

If the Return Code is “Object busy”, take the Return Value as Object Index of the
next free File Server Object.
If this object index is > 0, set File Server OI to this value and repeat, else report
“Server Busy”.
until a valid file handle is received or no more File Server Objects are available.
if the Return Code is “Command Successful”
File handle = Return Value
write file path into File Server Object Property PID_FILE_PATh (this needs not to be
done if the file path is transferred within the File Command).

DMP_InterfaceObject_Write_R
(Server IA, File Server OI, PID_FILE_PATh)

A_FunctionPropertyCommand-PDU
(Server IA, File Server OI, PID_FILE_COMMAND,
data = Retrieve File)

A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code)

if the Return Code is “Command Successful”, a file exists and will be transferred to the client

repeat
The Management Server (File Server) shall transmit the file

in consecutive A_FileStream_InfoReport-PDUs.

Each APDU shall have an APDU-length of 14
or longer as given in PID_MAX_APDU_LENGTh.

The last APDU may have a shorter length.
A_FileStream_InfoReport-PDU
(Client IA, file handle, file_block_sequence_number,
file_block)

until the whole file is transmitted

mark end of file
The field file_block is not present.
A_FileStream_InfoReport-PDU
(Client IA, file handle, file_block_sequence_number)

else if the Return Code is an Error Code, report this error.
The File handle shall be released.


-----

#### 8.3 FTP_StoreFile
**Use**

This Management Procedure shall be used to write a file in FTP (raw) mode to a File Server.

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code, data)

- A_PropertyValue_Write-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_PropertyValue_Response-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_FileStream_InfoReport-PDU(destination_address, file_handle, file_block_sequence_number,
file_block)

**Variables in FTP_StoreFile**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.
File Path The path to the file to be stored in the File Server.
File handle File handle retrieved from the FTP server

**Sequence**

Management Management remark
Client Server

repeat

get file handle from File Server Object

A_FunctionPropertyCommand-PDU The File Server shall execute
(Server IA, File Server OI, PID_FILE_COMMAND, the command “Get File
data = Get File handle) handle” and return the File

handle.
A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code, Return Value)

If the Return Code is “Object busy”, take the Return Value as Object Index of the
next free File Server Object.
If this object index is > 0, set File Server OI to this value and repeat, else report
“Server Busy”.
until a valid file handle is received or no more File Server Objects are available.
if the Return Code is “Command Successful”
File handle = Return Value
write file path into File Server Object Property PID_FILE_PATh (this needs not to be
done if the file path is transferred within the File Command).


-----

Management Management remark
Client Server

A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code)

if the Return Code is “Command Successful”, the server is ready to accept a file
repeat

The Management Client (File Client) shall transmit the file
in consecutive A_FileStream_InfoReport-PDUs.
Each APDU shall have an APDU-length of 14
or longer as given in PID_MAX_APDU_LENGTh.
The last APDU may have a shorter length.

A_FileStream_InfoReport-PDU
(Server IA, file handle, file_block_sequence_number,
file_block)

until the whole file is transmitted
mark end of file
The field file_block is not present.

A_FileStream_InfoReport-PDU
(Server IA, file handle, file_block_sequence_number)

else if the Return Code is an Error Code, report this error.
The File handle shall be released.

#### 8.4 FTP_ListDirectory
**Use**

This Management Procedure shall be used to read a directory listing from a File Server.

The procedure shall be identical to 8.2 “FTP_RetrieveFile”.

Every line of the directory listing shall start with a new A_FileStream_InfoReport-PDU. The number
of octets transferred in a A_FileStream_InfoReport-PDU shall be either 14 or as specified in
PID_MAX_APDU_LENGTh_OUT. It is although allowed that less octets than the maximum number
are transferred. This makes it possible to start every directory line with a new
A_FileStream_InfoReport-PDU.

#### 8.5 FTP_Rename (consisting of Rename From and Rename To)
**Use**

This Management Procedure shall be used to rename a file on a File Server. The procedure consists of
a sequence of the commands Rename From and Rename To. The File handle requested from the File
Server for the Rename From command shall also be used for the Rename To command i.e. no extra
File handle is requested for the Rename To command. The File handle shall therefore not be released
after the execution of the Rename From command. It shall be released after the execution of the
Rename To command (or after the time-out of 6 s, if one or both commands are missing).

This is to prevent the execution of a command other than Rename To after a Rename From coming
from another File Client.


-----

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code, data)

- A_PropertyValue_Write-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_PropertyValue_Response-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

**Variables in FTP_Rename**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.
File Path The path to the file to be renamed from the File Server.
File handle File handle retrieved from the FTP server

**Sequence**

Management Management remark
Client Server

repeat

get file handle from File Server Object

A_FunctionPropertyCommand-PDU The File Server shall execute
(Server IA, File Server OI, PID_FILE_COMMAND, the command “Get File
data = Get File handle) handle” and return the File

handle.
A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code, Return Value)

If the Return Code is “Object busy”, take the Return Value as Object Index of the
next free File Server Object.
If this object index is > 0, set File Server OI to this value and repeat, else report
“Server Busy”.
until a valid file handle is received or no more File Server Objects are available.
if the Return Code is “Command Successful”
File handle = Return Value
write file path into File Server Object Property PID_FILE_PATh (this needs not to be
done if the file path is transferred within the File Command).

DMP_InterfaceObject_Write_R Old File Path
(Server IA, File Server OI, PID_FILE_PATh)

A_FunctionPropertyCommand-PDU Rename From command


-----

Management Management remark
Client Server

if the Return Code is “Command Successful”, the command Rename To shall be executed
else an error shall be reported.

write file path into File Server Object Property PID_FILE_PATh (this needs not to be
done if the file path is transferred within the File Command).

DMP_InterfaceObject_Write_R New File Path
(Server IA, File Server OI, PID_FILE_PATh)

A_FunctionPropertyCommand-PDU Rename To command
(Server IA, File Server OI, PID_FILE_COMMAND,
data = Rename To)

A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code)

if the Return Code is “Command Successful”, the command was executed correctly
else an error shall be reported.
The File handle shall be released.

#### 8.6 FTP_Delete
**Use**

This Management Procedure shall be used to delete a file on a File Server.

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code, data)

- A_PropertyValue_Write-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

- A_PropertyValue_Response-PDU(destination_address, object_index, Property_id, nr_of_elem,
start_index, data)

**Variables in FTP_Delete**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.
File Path The path to the file to be deleted from the File Server.
File handle File handle retrieved from the FTP server


-----

**Sequence**

Management Management remark
Client Server

repeat

get file handle from File Server Object

A_FunctionPropertyCommand-PDU The File Server shall execute
(Server IA, File Server OI, PID_FILE_COMMAND, the command “Get File
data = Get File handle) handle” and return the File

handle.
A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code, Return Value)

If the Return Code is “Object busy”, take the Return Value as Object Index of the
next free File Server Object.
If this object index is > 0, set File Server OI to this value and repeat, else report
“Server Busy”.
until a valid file handle is received or no more File Server Objects are available.
if the Return Code is “Command Successful”
File handle = Return Value
write file path into File Server Object Property PID_FILE_PATh (this needs not to be
done if the file path is transferred within the File Command).

DMP_InterfaceObject_Write_R
(Server IA, File Server OI, PID_FILE_PATh)

A_FunctionPropertyCommand-PDU
(Server IA, File Server OI, PID_FILE_COMMAND,
data = Delete)

A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code)

if the Return Code is “Command Successful”, the command was executed correctly
else an error shall be reported.
The File handle shall be released.

#### 8.7 FTP_RemoveDirectory
**Use**

This Management Procedure shall be used to delete a directory on a File Server.

The procedure is identical to the procedure FTP_Delete in 8.6 except that the command “Remove
Directory” shall be used instead of the command “Delete”.

#### 8.8 FTP_MakeDirectory
**Use**

This Management Procedure shall be used to create a directory on a File Server.

The procedure is identical to the procedure FTP_Delete in 8.6 except that the command “Make
Directory” shall be used instead of the command “Delete”.


-----

#### 8.9 FTP_FileSize
**Use**

This Management Procedure shall be used to read the size of a specified file.

The procedure is identical to the procedure FTP_Delete in 8.6 except that the command “Get File
Size” shall be used instead of the command “Delete”.

The File Size shall be returned with the Return Code “Command successful”.

#### 8.10 FTP_EmptyDiskSpace
**Use**

This Management Procedure shall be used to read the size of the available free disk or memory space
of the File Server.

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code, data)

**Variables in FTP_EmptyDiskSpace**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.
File handle File handle retrieved from the FTP server

**Sequence**

Management Management remark
Client Server

repeat

get file handle from File Server Object

A_FunctionPropertyCommand-PDU The File Server shall execute
(Server IA, File Server OI, PID_FILE_COMMAND, the command “Get File
data = Get File handle) handle” and return the File

handle.
A_FunctionPropertyState_Response-PDU
(Client IA, File Server OI, PID_FILE_COMMAND, Return
Code, Return Value)

If the Return Code is “Object busy”, take the Return Value as Object Index of the
next free File Server Object.
If this object index is > 0, set File Server OI to this value and repeat, else report
“Server Busy”.
until a valid file handle is received or no more File Server Objects are available.
if the Return Code is “Command Successful”
File handle = Return Value


-----

Management Management remark
Client Server

if the Return Code is “Command Successful”, the command was executed correctly
else an error shall be reported.
The File handle shall be released.

The Empty Disk Space is returned with the Return Code “Command successful”.

#### 8.11 FTP_Abort
**Use**

This Management Procedure shall be used to stop any running transmission from a File Server. This is
the only command that is sent without requesting a File handle. The valid File handle has been given
to the client for the previous command (Retrieve File, List Directory or Get File) which has to be
stopped by the Abort command.

**Used Application Layer messages for management**

- A_FunctionPropertyCommand-PDU(destination_address, object_index, Property_id, data)

- A_FunctionPropertyState_Response-PDU(destination_address, object_index, Property_id,
return_code)

**Variables in FTP_Abort**

Server IA Individual Address of the FTP Server
File Server OI Object Index of the File Server Object in the Management Server.
Client IA Individual Address of the FTP Client.

**Sequence**


Management
Client


Management
Server


remark


if the Return Code is “Command Successful”, the command was executed correctly
else an error shall be reported.

#### 8.12 hTTP_GetFile
**Use**

This Management Procedure shall be used to read a file in hTTP mode from a File Server.

The procedure shall be identical to 8.2 “FTP_RetrieveFile”.

The Content-Type shall be returned with the Return Code “Command successful”.


-----

#### 8.13 hTTP_PostFile
**Use**

This Management Procedure shall be used to write a file in hTTP mode to a File Server.

The procedure shall be identical to 8.3 “FTP_StoreFile”.

the specification of the S-A_Sync-service in [03]

the requirements on the challenge in the specification of the S-A_Sync-service in [03]

“Sequence Number for Tool Access” in [05]

PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in [05]


-----

