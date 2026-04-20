# System Specifications

## Management

 Configuration Procedures

Summary

This document specifies the Configuration Procedures for the KNX
Configuration Modes.

Version 02.01.01 document is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modification**
01 2003.10.08 New document as Ch. 3/5/3. Restarted version numbering.
2006.01.20        - Supplement 1 “Easy Configuration” clause 5 inserted.

               - Moved the clause “PB-Mode” already available in this document to the
placeholder that was foreseen in this document. Removed heading
“Procedure description” and promoted subheadings, so that each
Configuration Mode” becomes a Heading 1.
2006.10.02        - **AN089 “mask 0705h” inclusion of identification procedure. See 3.3.**
2006.10.03        - **AN059 “mask 0025h” inclusion of identification procedure. See 3.2.**
2007.01.05 Consolidated version with S22 integration.
2008.05.22        - **AN057 "System B" integrated.**
2008.04.04        - **AN090 “Discovery of long frame range” integrated.**
1.0 2009.06.24  - Preparation of the Approved Standard.

               - Preparation for inclusion in the KNX Specifications v2.0.
1.0.01 2009.10.08 Editrial update.
1.1.00 2009.11.10  - **AN118 “cEMI Transport Layer” integrated.**
1.1.01 2010.07.23  - **AN117 “KNX IP Communication Medium” integrated.**
1.2.00 2010.12.22  - **AN115 “Mask 5705h” integrated.**
01.03.00 2013.07.18  - **AN147 “PB-Mode KNX RF Multi Repeater” integrated.**
01.04.00 2013.07.19  - **AN148 “PB-Mode KNX RF Multi” integrated.**
01.04.01 2013.07.22  - Editorial review.
01.04.02 2013.09.03  - Editorial review.
01.05.01 2013.10.23  - **AN153 “Mask 0912h Property based management” integrated.**
01.05.02 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
02.01.01 2019.11.19  - **AN134 “Flexible E-Mode Channels” integrated.**
02.01.01 2019.12.23  - **AN157 “Mask 57B0h” integrated.**
2020.01.07        - **AN158 “KNX Data Security” integrated.**

               - **AN177 “Extended Memory services” integrated.**
2020.10.14        - **AN178 Specification of services using EFF”** integration started.
2020.11.26        - **AN183 “KNXnet/IP System Broadcast ”** integrated
2021.09.27        - **AN161 “Coupler Model 2.0” integrated.**
2021.09.30 Preparation for inclusion in the KNX Specifications v3.0.

**References**

[01] Chapter 3/2/5 “Communication Medium RF”

[02] Chapter 3/3/2 “Data Link Layer General”

[03] Chapter 3/3/3 “Network Layer”

[04] Chapter 3/4/1 “Application Interface Layer”

[05] Chapter 3/5/1 “Resources”

[06] Chapter 3/5/2 “Management Procedures”

[07] Chapter 3/6/3 “External Message Interface”

[08] Chapter 3/7/1 “Interworking Model”

[09] Chapter 3/7/3 “Standard Identifier Tables”

[10] Chapter 3/8/3 “KNXnet/IP Management”

[11] Volume 6 “Profiles”

[12] Volume 7 “Application Descriptions”

[13] Chapter 8/3/4 “Transport Layer Tests”

[14] Part 9/3 “Couplers”

© C i h 2004 2021 A i i S S ifi i 02 01 01 2 f 198

|Version|Date|Modification|
|---|---|---|
|01|2003.10.08|New document as Ch. 3/5/3. Restarted version numbering.|
||<br>2006.01.20|<br>• Supplement 1 “Easy Configuration” clause 5 inserted.<br>• Moved the clause “PB-Mode” already available in this document to the<br>placeholder that was foreseen in this document. Removed heading<br>“Procedure description” and promoted subheadings, so that each<br>Configuration Mode” becomes a Heading 1.|
||2006.10.02|<br>• **AN089“mask 0705h”** inclusion of identification procedure. See 3.3.|
||2006.10.03|<br>• **AN059“mask 0025h”** inclusion of identification procedure. See 3.2.|
||2007.01.05|<br>Consolidated version with S22 integration.|
||<br>2008.05.22|<br>• **AN057"System B"** integrated.|
||2008.04.04|<br>• **AN090“Discovery of long frame range”** integrated.|
|1.0|2009.06.24|<br>• Preparation of the Approved Standard.<br>• Preparation for inclusion in the KNX Specifications v2.0.|
|1.0.01|2009.10.08|<br>Editrial update.|
|<br>1.1.00|<br>2009.11.10|<br>• **AN118“cEMI Transport Layer”** integrated.|
|1.1.01|2010.07.23|<br>• **AN117“KNX IP Communication Medium”** integrated.|
|1.2.00|2010.12.22|<br>• **AN115“Mask 5705h”** integrated.|
|01.03.00|2013.07.18|<br>• **AN147“PB-Mode KNX RF Multi Repeater”** integrated.|
|01.04.00|2013.07.19|<br>• **AN148“PB-Mode KNX RF Multi”** integrated.|
|01.04.01|2013.07.22|<br>• Editorial review.|
|01.04.02|2013.09.03|<br>• Editorial review.|
|01.05.01|2013.10.23|<br>• **AN153“Mask 0912h Property based management”** integrated.|
|01.05.02|2013.10.28|<br>Editorial updates for the publication of KNX Specifications 2.1.|
|<br>02.01.01|<br>2019.11.19|<br>• **AN134“Flexible E-Mode Channels”** integrated.|
|02.01.01|2019.12.23|<br>• **AN157“Mask 57B0h”** integrated.|
||2020.01.07|<br>• **AN158 “KNX Data Security”** integrated. <br>• **AN177“Extended Memory services”** integrated.|
||2020.10.14|<br>• **AN178 Specification of services using EFF” **integration started.|
||2020.11.26|<br>• **AN183“KNXnet/IP System Broadcast” **integrated|
||2021.09.27|<br>• **AN161“Coupler Model 2.0”** integrated.|
||2021.09.30|<br>Preparation for inclusion in the KNX Specifications v3.0.|


-----

Filename: 03_05_03 Configuration Procedures v02.01.01 AS.docx
Version: 02.01.01
Status: Approved Standard
Savedate: 2021.09.30
Number of pages: 198

© C i h 2004 2021 A i i S S ifi i 02 01 01 3 f 198


-----

#### Contents

###### 1 Common requirements .......................................................................................................... 8 1.1 Management Procedure flexibility in the Configuration Procedures ............................. 8 1.2 Preconditions .................................................................................................................. 8 1.3 Installer Procedures ........................................................................................................ 9 1.3.1 Configuration environment ................................................................................. 9 1.4 Common requirements for the Configuration Procedure concerning KNX Data Security ........................................................................................................................... 9 1.4.1 Scope ................................................................................................................... 9 1.4.2 Key exchange ...................................................................................................... 9 1.4.3 Recommendations ............................................................................................... 9 1.5 S-Mode ......................................................................................................................... 10 1.5.1 Basic rules ......................................................................................................... 10 1.5.2 Support of the 16 octet FDSK ........................................................................... 10 1.5.3 Description and handling of security features in the KNX product database ... 10 1.5.4 Integration in the S-Mode Configuration Procedures ....................................... 11 1.5.5 Firmware update ............................................................................................... 15

 2 Common procedures ............................................................................................................ 16 2.1 Introduction ................................................................................................................... 16 2.2 Configuration Procedures for configuring the Powerline Domain Address ................. 16 2.2.1 Introduction ....................................................................................................... 16 2.2.2 Domain Address Creation Procedure................................................................ 16 2.3 Configuration Procedures for KNX RF ........................................................................ 17 2.3.1 Configuration Procedures for configuring the RF Domain Address ................ 17 2.3.2 Deep Scan ......................................................................................................... 22 2.4 Configuration Procedures for configuring the Subnetwork Address ........................... 22 2.4.1 General .............................................................................................................. 22 2.4.2 SNA configuration inherited in IA configuration (informative) ....................... 22 2.4.3 SNA read ........................................................................................................... 22 2.4.4 SNA update on IA change ................................................................................ 25 2.4.5 SNA update on power-up .................................................................................. 25 2.4.6 SNA heartbeat ................................................................................................... 26 2.4.7 SNA update on SNA inconsistency .................................................................. 26 2.5 Pre-assigned Group Addresses in Unidirectional devices ............................................ 30 2.6 Discovery of maximal frame length ............................................................................. 31 2.6.1 Goal ................................................................................................................... 31 2.6.2 Normal conditions ............................................................................................. 32 2.6.3 Error and exception handling ............................................................................ 33 2.7 Setting of IP Properties ................................................................................................. 34

 3 S-Mode .................................................................................................................................. 37 3.1 General .......................................................................................................................... 37 3.1.1 Differences between Remote – and Local access to the Management Server .. 37 3.4 System 300 .................................................................................................................... 38 3.4.1 Default download procedure ............................................................................. 38 3.5 System B ....................................................................................................................... 39 3.5.1 General requirements ........................................................................................ 39 3.5.2 Load procedure for complete download ........................................................... 42 3.5.3 Load procedure for partial download ................................................................ 44 3.5.4 Load Procedure for unload ................................................................................ 57

© C i h 2004 2021 A i i S S ifi i 02 01 01 4 f 198


-----

###### 3.6 RF bidirectional devices ............................................................................................... 57 3.6.1 Introduction ....................................................................................................... 57 3.6.2 Device Identification ......................................................................................... 57 3.6.3 Device individualisation ................................................................................... 58 3.6.4 Parameter download (RF bidirectional devices) ............................................... 58 3.6.5 Device linking ................................................................................................... 58 3.7 RF unidirectional devices ............................................................................................. 59 3.7.1 Introduction ....................................................................................................... 59 3.7.2 Device Identification ......................................................................................... 59 3.7.3 Device individualisation ................................................................................... 60 3.7.4 Parameter view (RF unidirectional devices) ..................................................... 60 3.7.5 RF KNX requirements for ETS ........................................................................ 60 3.8 RF Bidirectional Battery Driven devices (BiBat) ......................................................... 62 3.9 Configuration Procedures for KNX IP devices ............................................................ 63 3.9.1 Network Configuration and general Device Configuration requirements for KNX IP ............................................................................................................. 63 3.9.2 Configuration Procedures for mask 5705h ....................................................... 66 3.9.3 Configuration Procedures for mask 57B0h ....................................................... 71 3.9.4 Setting of IP Properties ..................................................................................... 86 3.10 Configuration Procedures for mask 0912h ................................................................... 86
 3.10.1 Normal conditions ............................................................................................. 86 3.10.2 Error and exception handling ............................................................................ 90 3.11 Configuration Procedures for mask 091Ah – Property based configuration ................ 91
 3.11.1 Normal conditions ............................................................................................. 91 3.11.2 Setting of IP Properties ..................................................................................... 96 3.12 Configuration Procedures for Coupler Model 2.0 ........................................................ 96
 3.12.1 General requirements ........................................................................................ 96 3.12.2 Configuration Procedure to verify the installed device .................................... 97 3.12.3 Network Configuration Procedure – Individual Address Assignment ............. 97 3.12.4 Configuration Procedure for a complete download .......................................... 98 3.12.5 Configuration Procedure for partial download - parameters .......................... 100 3.12.6 Configuration Procedure for partial download – Group Addresses ................ 101 3.12.7 Configuration Procedure for Unload .............................................................. 102 3.13 Configuration Procedures for USB interfaces ............................................................ 102
 3.13.1 Introduction ..................................................................................................... 102 3.13.2 Discovery of the model of the local device. ................................................... 102 3.13.3 Configuration of mask 2311h as stand-alone interface ................................... 103 3.13.4 Configuration of masks combined with mask 2311h ..................................... 105

 4 E-Mode ................................................................................................................................ 107 4.1 Flexible E-Mode Channels ......................................................................................... 107

 5 Push Button Mode (PB-Mode) .......................................................................................... 110 5.1 Introduction ................................................................................................................. 110 5.2 Push Button Mode devices ......................................................................................... 110 5.3 Data for link management .......................................................................................... 110 5.4 PB-Mode Configuration Procedures ........................................................................... 111 5.4.1 Assignment of the Individual Address by self acquisition of the device ........ 111 5.4.2 Unload of Individual Address in PB-Mode .................................................... 111 5.4.3 Assignment of Group Addresses .................................................................... 111 5.4.4 Link procedure ................................................................................................ 112

© C i h 2004 2021 A i i S S ifi i 02 01 01 f 198


-----

###### 5.4.5 Private parameters ........................................................................................... 133 5.5 Extension of a PB-Mode installation with S-mode devices ....................................... 133 5.6 PB-Mode installations with BiBat devices ................................................................. 133 5.7 PB-Mode for RF Multi ............................................................................................... 133 5.7.1 Use cases ......................................................................................................... 133 5.7.2 Link procedure between bidirectional KNX RF Multi devices ...................... 136 5.7.3 Link procedure between bidirectional KNX RF Ready sensor and KNX RF Multi actuator .................................................................................................. 141 5.7.4 Link procedure between unidir KNX RF Ready sensor and KNX RF Multi actuator ............................................................................................................ 147 5.7.5 Link procedure between bidir KNX RF Multi sensor and KNX RF Ready actuator ............................................................................................................ 150 5.7.6 Configuration examples in PB-Mode ............................................................. 153 5.8 PB-Mode installations with RF Multi Repeater ......................................................... 159 5.8.1 Installation cases ............................................................................................. 159 5.8.2 Physical acknowledge ..................................................................................... 160 5.8.3 Configuration procedure ................................................................................. 160 5.9 PB-Mode for Flexible E-Mode Channels ................................................................... 161 5.9.1 Introduction ..................................................................................................... 161 5.9.2 Domain Address Assignment ......................................................................... 161 5.9.3 Assignment of the Individual Address through self acquisition by the device ......................................................................................................................... 161 5.9.4 Unload of the Individual Address in PB-Mode .............................................. 161 5.9.5 Link Procedure ................................................................................................ 161 5.9.6 Manual Master Reset ...................................................................................... 162

 6 Controller Mode (Ctrl-Mode) ........................................................................................... 163 6.1 Introduction ................................................................................................................. 163 6.2 Configuration Procedure ............................................................................................. 163 6.2.1 Description ...................................................................................................... 163 6.3 Network Configuration Procedures ............................................................................ 171 6.3.1 Detect Ctrl-Mode devices for IA assignment, find free new IA and assign ... 171 6.3.2 Unload IA for Ctrl-Mode devices ................................................................... 172 6.4 Dedicated requirements for Ctrl-Mode on Communication Medium RF .................. 174 6.4.1 General requirements ...................................................................................... 174 6.4.2 Requirements for RF BiBat systems ............................................................... 174 6.5 Extendibility with S-Mode ......................................................................................... 175 6.6 Extendibility of other E-Modes by Controller ............................................................ 175 6.7 Ctrl-Mode for Flexible E-Mode Channels .................................................................. 175 6.7.1 Introduction ..................................................................................................... 175 6.7.2 Domain Address Assignment ......................................................................... 176 6.7.3 Domain Address assignment via Programming Mode ................................... 176 6.7.4 Individual Address Assignment ...................................................................... 176 6.7.5 Device Identification ....................................................................................... 176 6.7.6 FEC Channel reading ...................................................................................... 177 6.7.7 Localisation for Ctrl-Mode FEC devices ........................................................ 180 6.7.8 Read the current links and Parameter Values ................................................. 180 6.7.9 Link FEC Channels ......................................................................................... 181 6.7.10 Parameter setting ............................................................................................. 182

© C i h 2004 2021 A i i S S ifi i 02 01 01 6 f 198


-----

###### 7 Logical Tag Extended ........................................................................................................ 184

 8 Appendixes .......................................................................................................................... 185 8.1 Appendix 1: Structure of E-Mode Channel descriptions ............................................ 185 8.2 Appendix 2: Connection Rules ................................................................................... 186 8.2.1 Introduction ..................................................................................................... 186 8.2.2 Basic rule ........................................................................................................ 186 8.2.3 Visualisation Datapoints ................................................................................. 186 8.2.4 Adjustable E-Mode Channels ......................................................................... 187 8.2.5 Multiple Connection Codes ............................................................................ 187 8.2.6 Datapoints connectable only once .................................................................. 188 8.3 Appendix 3 : Localisation E-Mode Channels ............................................................. 190 8.4 Appendix 4 : Controller Mode download Procedures ................................................ 192 8.5 Appendix 5 : Structures for Parameters ...................................................................... 196 8.5.1 E-Mode Parameter Structure ........................................................................... 196 8.5.2 Parameter Type Table ..................................................................................... 196 8.5.3 Parameter Table .............................................................................................. 196 8.5.4 Positioning of parameters inside an E-Mode Channel .................................... 197

© C i h 2004 2021 A i i S S ifi i 02 01 01 f 198


-----

### 1 Common requirements

#### 1.1 Management Procedure flexibility in the Configuration Procedures
The below specified Configuration Procedures refer to specific Management Procedures. These are the
default Configuration Procedures and the Management Client may slightly modify them by e.g.
alternative Management Procedures.

EXAMPLE 1 DMP_Memory_Write_Rco may be replaced by DMP_MemWrite_Extended_R.
The Management Client may choose with internal optimizations between different Management
Procedures.

EXAMPLE 2 ETS starts with an “optimistic” download.
The idea for this optimization is the expectation that there is no big difference between the download
image and the data in the device. This expectation is true if only a small set of parameters has
changed compared to the last download.
The optimistic download will start with the DMP_MemVerify_RCo procedure and continues until the
Memory in the Server differs from the Memory image in the Client. From this moment on, the Client
will switch to the Procedure: DMP_MemWrite_RCoV, at the best with activated Verify Mode in the
MaS.

EXAMPLE 3 Management Client has to reach Memory addresses that are out of focus of the A_Memory service
(16Bit Address range = max 65kBytes addressable).
In this case, the Management Client has to use e.g. the A_UserMemory service.
Both services relates to different Management Procedures.

Alternative Management Procedures are listed in Table 1. Alternative Management Procedures are only
usable if the Management Server supports these. Supporting of Management Procedures is Profile and
database entry dependent.

**Table 1 - Relations between replaceable Management Procedures**

**Management Procedure** **Alternative Management** **Remarks**
**Procedure**

DMP_Memory_Write_RCo DMP_UserMemWrite_RCo Only useful for addresses > 65kB

DMP_Memory_Write_RCo DMP_MemWrite_Extended_R Setting of Verify Mode in the
MaS will have no effect to the
MaS behaviour.
Management Procedure is
usable connection oriented or
connection less.

DMP_LCSlaveMemWrite_RCo DMP_MemWrite_Extended_R

DMP_LCExtMemWrite_RCo DMP_MemWrite_Extended_R The “A_FilterTable_Open”
command can be omitted

#### 1.2 Preconditions
Prior to any device Configuration Procedure, the MaC shall have the results of the network Configuration
Procedure “Discovery of maximal Frame length” as specified in 2.6. It shall execute this procedure,
partially or in total, as needed [1][)].

In the further Configuration Procedures, the MaC shall limit the Frame size to the discovered maximal
size.

1) The MaC needs to have the results. It is not necessary that all tests are executed, if for instance the results are

known from previous tests, or if the results would be known from the product descriptions.

© C i h 2004 2021 A i i S S ifi i 02 01 01 8 f 198

|Management Procedure|Alternative Management<br>Procedure|Remarks|
|---|---|---|
|DMP_Memory_Write_RCo|DMP_UserMemWrite_RCo|Only useful for addresses > 65kB|
|<br>DMP_Memory_Write_RCo|<br>DMP_MemWrite_Extended_R|Setting of Verify Mode in the<br>MaS will have no effect to the<br>MaS behaviour.<br>Management Procedure is<br>usable connection oriented or<br>connection less.|
|DMP_LCSlaveMemWrite_RCo|DMP_MemWrite_Extended_R||
|<br>DMP_LCExtMemWrite_RCo|<br>DMP_MemWrite_Extended_R|The “A_FilterTable_Open”<br>command can be omitted|


-----

#### 1.3 Installer Procedures

##### 1.3.1 Configuration environment

###### 1.3.1.1 Recommendations to the installation procedure
These are recommendations for the installer to take, in order to increase the security of the configuration

**1.** **The configuration can be done in a “safe environment”.**

The configuration can be done in a location other than where the devices that are configured will
finally be mounted. This can for instance be done in the premises of the electrical installer instead
of at the construction site.

**2.** **The configuration can be done in a geographically very limited space**

The devices to be configured and the MaC (ETS, E-Mode Controller…) can be moved temporarily
to a very small setup with short communication paths between the participants, e.g. limited to a
desk or table. This way, the probability that the configuration procedure is recorded by any third
party is reduced.

For KNX TP1 this means that very short cabling is used.

**3.** **The time-span for the exchange of the keys shall be limited to the minimum**

Installer procedures shall last as short as possible. Any Programming Mode or Learning Mode shall
only be active as long as necessary.

###### 1.3.1.2 Manual Reset
KNX Secure Devices shall exhibit an HMI to allow a “Reset to default state” (including the IA), which
shall influence the KNX Security Resources as specified in the Resource definitions in the Security
Interface Object before. The functionality of this HMI access shall be the same as for a Master Reset with
Erase Code 02h.

NOTE 1 Special attention needs to be paid to the Download Counter: please refer
to PID_DOWNLOAD_COUNTER in the Device Object ([05]).
It is strongly recommended that there are no further, non-standard means for remotely triggering a Master
Reset, unless this foresees strong security measures.

EXAMPLE 4 An additional, non-KNX IP connection with strong security (e.g. through certificates).

#### 1.4 Common requirements for the Configuration Procedure concerning KNX Data Security

##### 1.4.1 Scope
These are requirements for the MaC (ETS, E-Mode Controller…).

##### 1.4.2 Key exchange
The key exchange mechanism will only happen once during the configuration of each device. After
configuration, during runtime, the symmetric encryption algorithm shall be used.

Any exchange of Security Keys shall happen through KNX Secure Communication using a Factory
Default Setup Key.

##### 1.4.3 Recommendations
Minimum one key is required for each sender. A unique key may be used for all Group Addresses of one
sender.

© C i h 2004 2021 A i i S S ifi i 02 01 01 9 f 198


-----

#### 1.5 S-Mode

##### 1.5.1 Basic rules
Rule 1 Once secure configuration is configured in a MaS that MaS shall further on always be
configured using secure communication.

Some Resources do not allow differentiating between Secure and Plain data.

EXAMPLE 5 It is not possible to have Group Addresses in the Group Address Table that can only be
configured using secure communication, and other GAs that can be configured without secure
communication.

Therefore, in order to prevent unsecure access (hacker) from modifying the secure configuration, the
entire configuration shall further be secure, once any security setting is used in the MaS.

Rule 2 The initial IA assignment is done unsecure.

Any next IA Management shall be done using secure communication.

This way, it shall be prevented that a hacker modifies the IA of the MaS and in that way excludes a
rightful MaC to manage the MaS.

Rule 3 The MaC shall use secure communication encrypted for authentication and
confidentiality with the FDSK to set the Tool Key.

The MaC shall then activate the Security Mode in the MaS using secure communication
accessing PID_SECURITY_MODE.

##### 1.5.2 Support of the 16 octet FDSK
The initial key exchange shall be protected using the FDSK. This is the only protection mechanism for
key exchange for S-Mode devices.

The FDSK may be printed on the device in some way. Other means to provide the FDSK to the ETS user
are possible as well.

The manufacturer of the KNX Secure device shall take care that each shipped KNX Secure device has a
sufficiently random ex-factory FDSK. Having the same FDSK for all devices will make the key
worthless.

EXAMPLE 6 This can be done by a good random generator.
NOTE 2 In the optimal case, each manufactured KNX Secure device would have a globally unique FDSK
value. This requires that the assigned values are logged by all manufacturers for all production sites and exchanged
between the manufacturers, to verify and guarantee the uniqueness. This is not required. Yet, when the FDSK-values
are created, sufficient random values shall be taken.
ETS shall assign a different, unique Tool Key value to each secure device; these Tool Keys shall be
randomly generated by ETS.

##### 1.5.3 Description and handling of security features in the KNX product database
The ETS MT shall provide the possibility per Datapoint (Group Object or Property) to indicate whether it
requires authentication or authentication and confidentiality.

It shall be possible that an application or a channel has a combination of secure DPs and insecure DPs.
The effective use of the security shall be the same for all secure DPs of a channel or an application. It
shall not be possible that of the secure DPs of a channel or application, part of them is handled insecure
and the remaining is handled secure. This is not allowed as it may compromise the security at application
level.

EXAMPLE 7 If the input GOs to an application are handled confidential, but the state report is handled unsecure, then the
hacker may conclude or guess well on the assumed input data and by this easier hack the security.

If secured DPs of a secure channel or secure application are already linked and the ETS user wants to link
a further secure DP but not in a secure way, then ETS shall warn the ETS user and ask him to use security
for this link as well, or abandon the security of the already established links.

© C i h 2004 2021 A i i S S ifi i 02 01 01 10 f 198


-----

Likewise, if an unsecure DP is attributed a GA that is used for secure communication, ETS shall warn the
ETS user and propose to either abandon the link, or use the security also for the newly added DP (if
possible) or abandon the security of the other already linked GOs; it may be noted to this last case that
this may mean that already programmed devices have to be reprogrammed.

If a product or application uses security, then its entire Device Configuration Procedures shall be done
using secure communication.

NOTE 8 This is necessary because the Resources (Group Address Table, Group Object Association Table…) are shared
between the secure DPs and the unsecure DPs.

##### 1.5.4 Integration in the S-Mode Configuration Procedures

###### 1.5.4.1 General
**Security Mode ex-factory**

Security Mode shall be disabled ex-factory. S-Mode Configuration Procedures do not support devices of
which Security Mode is enabled ex-factory.

If there would be a need that Security Mode is enabled ex-factory, then this shall be seen as the use of
pre-configured devices in the MaC and shall be solved through solutions to be provided by the MaC
(ETS).

**Diffie-Hellman**

The S-Mode Configuration Procedures do not support Diffie-Hellman key exchange, but shall use the
FDSK. This leaves no option open for a man-in-the-middle attack.

**Tool requirements for the Sequence Number Sending**

In the below procedures, the S-Mode MaC (ETS) will at various occasions synchronise the Sequence
Numbers with the MaS (device).

   - _A Sequence Number Sending larger than FF0000000000h is detected at any time_
If the MaC learns during any Configuration Procedure that the Sequence Number Sending of the MaS has
a value higher than FF0000000000h, then the MaC shall give a warning to the MaC user about this.
Unless the MaC user concludes differently, however, the Configuration Procedures shall be continued.

   - _A Sequence Number lower than the timestamp of the publication of the KNX Data Security_
_specifications is detected_
The KNX Data Security specifications have been published on January 5, 2018. If the MaC learns during
the initial configuration of a MaS that the Sequence Number Sending of the MaS has a value lower than
the timestamp of this publication, (time expired since that publication, expressed in milliseconds) then the
MaC shall set the Sequence Number Sending of the MaS to the current timestamp.

NOTE 3 For the MaC (ETS), the “initial configuration” means the following.

              - The MaC (ETS) does not know anything about the device (it has not yet stored any KNX
Serial Number or Sequence Number Sending of the device in its project information).

            - The MaC (ETS) detects that the MaS has passed through a Master Reset, as the assigned Tool
Key no longer is works and the FDSK appears to be active again.
EXAMPLE 9 On October 1, 2018, the MaC would initialise the Sequence Number Sending of the MaS with the
value 00 05 6E 75 08 00 (270 days = 23 328 000 000 ms).
NOTE 4 The above requirement that the Sequence Number Sending shall when re-initialised not be a value
higher than 100000000h makes that it is always lower than the current timestamp of the KNX Data Security
specifications.

   - _A Sequence Number Sending lower than the stored value is discovered_
If the MaC learns during any Configuration Procedure that the Sequence Number Sending of the MaS has
a value lower than the one stored from the preceding Configuration Procedure then it shall for that MaS
create all new keys (Tool Key, Group Keys, Point-to-point keys). This will require that all
communication partners of that MaS become updated with the new keys as well.

© C i h 2004 2021 A i i S S ifi i 02 01 01 11 f 198


-----

**Tool requirements for the Sequence Number for Tool Access**

On any occasion where the S-Mode MaC (ETS) synchronises its own Sequence Number (of which the
MaS stores its last known value as Sequence Number for Tool Access), the MaC shall use as own
Sequence Number (SeqNrlocal in S-A_Sync) the current timestamp of the KNX Data Security
specifications.

###### 1.5.4.2 Overview
The following steps shall be done.

1. Network Configuration see 1.5.4.3

2. Activating the Security Mode see 1.5.4.4

3. Set the Tool Key see 1.5.4.5

4. Device Configuration see 1.5.4.6

###### 1.5.4.3 Network Configuration Procedure (assignment of DoA and IA)

1.5.4.3.1 Initial assignment
The initial assignment of DoAs and IAs, this is, if the device is in ex-factory state, shall be done using the
following procedure.

Firstly, the KNX Serial Number is read out over (system) broadcast of the MaS in which Programming
Mode is active.

/* Read the KNX Serial Number of the device in which Programming Mode is active. */
NM_Read_SerialNumber_By_ProgrammingMode()

The MaC can search the received KNX Serial Number in its project information. The further handling
depends on whether for that KNX Serial Number already a Tool Key was downloaded or not.

**IF the Tool Key is already assigned to the MaS THEN**
/* The device is known and has already been configured correctly using the Tool Key. */
DMP_SYNC(system_broadcast, tool_key);
**IF sync procedure successful THEN**
exit: start Network Configuration with the Tool Key

**ELSE**
/* Synchronisation with the Tool Key did not work. Try with the FDSK. */
DMP_SYNC(system_broadcast, FDSK);
**IF sync procedure successful THEN**
Warn user: device is in ex-factory state for unknown reason;
**IF user wants to continue THEN**
exit: start Network Configuration with the FDSK

**ELSE**
exit: procedure failed: device in ex-factory state for unknown reason

**ELSE**
/* Procedure failed: MaS has unknown Tool Key. */
Warn user: MaS has unknown Tool Key. Possibly perform Master Reset on MaS.

**ELSE**
/* The MaS was never configured. Use the FDSK. */
DMP_SYNC(system_broadcast, FDSK);
**IF sync procedure successful THEN**
exit: start Network Configuration with the FDSK

**ELSE**

© C i h 2004 2021 A i i S S ifi i 02 01 01 12 f 198


-----

/* The FDSK is not active, so the MaS is configured with a Tool Key. */
/* Possibly this is a restored project. Use the Tool Key. */
DMP_SYNC(system_broadcast, tool_key);
**IF sync procedure successful THEN**
exit: start Network Configuration with the Tool Key
ELSE
/* Procedure failed: MaS has unknown Tool Key. */
Warn user: MaS has unknown Tool Key. Possibly perform Master Reset on MaS.

On open media, assign the DoA by using the KNX Serial Number. The use of KNX Data Security avoids
that possible Couplers in the communication path between MaC and MaS have to (be configured to) pass
plain Telegrams.


/* This shall be performed using KNX Data Security with the key found above. */


NM_DomainAddressSerialNumber_Write(nmp_SN_device = MaS Serial Number, nmp_DoA_new = new DoA for the

MaS)

Then the IA shall be assigned. This shall again use the KNX Serial Number on (system) broadcast
communication mode.

/* This shall be performed using KNX Data Security with the key found above. */
NM_IndividualAddress_SerialNumber_Write(nmp_SN_device = MaS Serial Number, nmp_IA_new = new IA of MaS,

nmp_DoA_Device = returned DoA of MaS)

Enable Security Mode in the MaS. This shall be done connection-oriented, using Extended Property
services; the Security Interface Object is addressed by its Object Type. KNX Data Security shall be used
to protect these messages.

DMP_Connect_RCo(nmp_destination_address = IA of MaS)
DMP_ExtFunctionProperty_Write_R(nmp_object_type = Security Interface Object, object_instance = 1,

PID = PID_SECURITY_MODE, data = “Write Security Mode” + 01h)

If from the above synchronisation it appears that the FDSK is active, then the Tool Key shall be assigned
to the MaS.

DMP_ExtInterfaceObjectWriteCon_R(nmp_object_type = Security Interface Object, object_instance = 1,

PID = PID_TOOL_KEY, nmp_nr_of_elem = 1, nmp_start_index = 1, data = Tool Key)

If the MaS implements KNX IP Secure, then he IP Secure configuration data shall be written at this point,
using KNX Data Security.

Perform a Confirmed Restart of the MaS.


DM_Restart(Restart Type = 1, Erase Code = 01h, Channel Number = 00h)


1.5.4.3.2 Modification of existing DoA or IA
If the MaS is not in ex-factory state and the Security Mode is enabled in the MaS, and the MaC wants to
modify the DoA or the IA, then the MaC shall do this using KNX Data Security, with the Tool Key, using
Authentication and Confidentiality.

The MaC shall not disable Security Mode in the MaS to this.

© C i h 2004 2021 A i i S S ifi i 02 01 01 13 f 198


-----

3 Connect to IA (T_Connect + A_DeviceDescriptor_Read) not encrypted
4 Confirmed Restart (Master Reset with Erase Code=1) encrypted with Tool Key.

###### 1.5.4.4 Enable the Security Mode in the MaS
This shall be done using secure communication. This uses a Function Property.

/* Procedure to enable Security Mode. */
DM_FunctionProperty_Write_R(object_type = Security Interface Object, property = PID_SECURITY_MODE,

start_index = 1, noElements = 1, command = Enable, error)

The Sequence Numbers used shall be the one resulting from the preceding step. After this, Security Mode
shall be enabled. The Device Management shall from this step onwards use secure communication and
shall be protected with the FDSK.

Security Mode can only be disabled using Secure Communication.

###### 1.5.4.5 Set the Tool Key
This step is mandatory: the MaC shall replace the FDSK with the Tool Key that shall have a different
value.

This shall be a normal Property access, using secure communication with confidentiality with the FDSK
as key.

/* Procedure to set a link */
DMP_InterfaceObject_Write_R(object_type = Security Interface Object, property = PID_TOOL_KEY, start_index = 1,

noElements = 1, data = Tool Key)

###### 1.5.4.6 Device Configuration Procedures
The further full device Configuration shall use secure communication, with confidentiality, using the Tool
Key.

This can use point-to-point connectionless or - connection-oriented communication. The Configuration
Procedures shall further be identical as specified in further in this document, but the AL-services shall be
encrypted.

NOTE 5 Possible T_Connect-, T_Disconnect-, T_ACK- and T_NAK-PDUs during the Configuration Procedure only base on TLservices and are not forwarded to AL. These can thus not be secured.

**Group Object Security Flags**

As part of the download of the Group Address and Group Object configuration, ETS shall for the used
Group Objects also set the appropriate bits in the Group Object Security Config Table.

© C i h 2004 2021 A i i S S ifi i 02 01 01 14 f 198

|Step|Description|Encryption|
|---|---|---|
|<br>1|<br>Perform Security Sync(S-A_Sync)|<br>encrypted with Tool Key.|
|<br>2|On open media and DoA changed: Write DoA by SerNo<br>(ADomainAddressSerialNumberWrite)|encrypted with Tool Key.|
|2|__ <br>Write IA by SerNo<br>(AIndividualAddressSerialNumberWrite)|encrypted with Tool Key.|
|3|__<br>Connect to IA(T_Connect + A_DeviceDescriptor_Read)|not encrypted|
|<br>4|Confirmed Restart(Master Reset with Erase Code=1)|encrypted with Tool Key.|


-----

##### 1.5.5 Firmware update
KNX devices that support KNX Data Security shall foresee the possibility of a firmware update. This
shall allow that shortcomings and bugs in the implementation of KNX Data Security can be corrected in
the installed devices.

- The means for accomplishing a firmware update are implementation specific.

EXAMPLE 10 This can be a Device Configuration App in ETS; this can be a stand-alone tool; this can be
performed over the bus using KNX Standard services and Management Procedures or manufacturer specific
services; this can be done locally on the device.

- The target of the firmware (security algorithm bugs, parameters, algorithms change, other KNX
stack code, other software in the device…) is not fixed.

- There are no requirements towards the hardware resources (like memory size) of the firmware
update.

KNX Association will not oblige a KNX manufacturer to provide and deploy a firmware, also not after a
certain time, like after detection of any need for this or after the approval of any system extension. New
devices brought onto the market shall however reflect the current state of the KNX security specifications
– 6 months after publication of the Approved Standard version.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 198


-----

### 2 Common procedures

#### 2.1 Introduction
This clause specifies Configuration Procedures that are independent of one Configuration Mode, this is,
can be used by Management Clients of two, more or all Configuration Modes.

#### 2.2 Configuration Procedures for configuring the Powerline Domain Address

##### 2.2.1 Introduction
These Configuration Procedures shall only be executed on explicit request by the installer through the
means provided by the device in addition the device shall have means to indicate to the installer the status
and/or progress of the different procedures.

   - NOTE These procedures rely on following services:

    - A_DomainAddressSelective_Read-service
    - A_DomainAddress_Read-service
    - A_DomainAddress_Write-service
Please consult the referred Management Procedures for the specific use of these services.

##### 2.2.2 Domain Address Creation Procedure
**Goal**

The DoA Creation procedure creates a new Domain Address.

**Condition**

The procedure shall only be started on explicit request by the installer.

**Process in the Server**

   - Select a DoA to check (randomly or selected by the Installer).

   - Initiate the Management Procedure NM_DomainAddress_Scan, with DoA_to_check as
parameter, and

   - store DoA if no response, else repeat procedures with another DoA.

All devices that support the A_DomainAddressSelective_Read-service and of which the Individual
Address is within in the specified address range shall respond.

**DoA Creation procedure as seen by the initiating DoA Server**

   - The DoA Server shall generate the value of the chosen DoA (different from 0000h) - using a
random generator, or selected by the Installer.

Subsequently, the device shall check if the created DoA is not already being used by another Powerline
Subnetwork instance by calling the Network Management Procedure
NM_DomainAddress_Scan(DoA_to_check, SNA_Range, DA_Range). The values for the parameters are
listed in the typical check sequences below.

   - If one or more A_DomainAddress_Response-PDUs are received with the given format, the
DoA shall be considered already in use: the device shall - automatically - restart the DoA
Creation procedure with another value for DoA_to_check. The scanning procedure has to be
executed until a free Domain Address is found.

   - If the DoA Server did not receive any A_DomainAddress_Response-PDU of the given format,
it shall assume that the DoA is not in use and the device may set definitively the Domain
Address to the DoA value generated by this DoA Creation procedure. Usually, after having set
the DoA, the other initialisation procedures of the device are to be enabled to proceed.

© C i h 2004 2021 A i i S S ifi i 02 01 01 16 f 198


-----

Do
/* Internal: Initiate DoA_to_check by asking the user or at random */
NM_DomainAddress_Scan(DoA_to_check, SNA_Start, SNA_Range, DA_Range)
If number of responses ≥ 1 then DoA_to_Check is occupied else DoA_to_Check is free
While DoA_to_check is occupied

**Typical check sequences on a given DoA**

Typically four levels of check are encountered.

**Table 2 – Possible DoA scanning levels**

**Level** **SNA_Start** **SNA_Range** **DA_Range** **Duration** **Description**

**1** none none none immediate no check at all (very insecure, except if
having a good knowledge of the
environment)

**2** Default SNA 1 255 ~ 1,5 minutes check 255 Device Addresses in one

shot on default Subnetwork Address.

**3** 1 128 16 ~ 10 minutes Check the first 16 Device Addresses on

the 128 possible Subnetworks:

**4** 0 255 25 ~ 3,5 hours check on the full range of possible
(PL110) Individual Addresses

#### 2.3 Configuration Procedures for KNX RF

##### 2.3.1 Configuration Procedures for configuring the RF Domain Address

###### 2.3.1.1 Introduction
If the Domain – and Individual Address need to be configured of a RF S-Mode device with unknown
DoA, then the MaC has to use system broadcast communication mode. As the use of this communication
mode will easily cause messages to loop in the installation and additionally cause messages to duplicate,
the following means are foreseen for the MaC to prevent from this.

   - AL-services designed for system broadcast communication mode may by the MaC or by the
TP1/RF Media Coupler also be used on broadcast communication mode.

   - The KNX TP1/RF Media Coupler will per default not route messages on system broadcast
communication mode. The MaC shall explicitly enable this only in the TP1/RF Media Couplers
that couples to the Subnetwork to which the MaS will later be assigned.

   - The KNX TP1/RF Media Coupler will set the Route Last flag in the KNX RF Frame. With this
flag set, any other TP1/RF Media Coupler will not route the message back to TP1.

**Reference topology**

The specification in the below clauses shall apply for any topology situation. In the examples however,
reference is made to the below reference topology.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 198

|Level|SNA Start<br>_|SNA Range<br>_|DA Range<br>_|Duration|Description|
|---|---|---|---|---|---|
|**1 **|<br>none|<br>none|<br>none|immediate|no check at all (very insecure, except if<br>having a good knowledge of the<br>environment)|
|**2 **|Default SNA|1|255|~ 1,5 minutes|check 255 Device Addresses in one<br>shot on default Subnetwork Address.|
|**3 **|1|128|16|~ 10 minutes|Check the first 16 Device Addresses on<br>the 128 possible Subnetworks:|
|**4 **|0|255|25|~ 3,5 hours<br>(PL110)|check on the full range of possible<br>Individual Addresses|


-----

TP1


TP1


TP1


TP1


1.1.0 1.2.0 1.3.0 . . . 1.15.0

RF RF RF RF

DoA 2 DoA 3

Device 1

↓

Device 2 IANEW = 1.3.10

↓

IANEW
= 1.2.20 MaC

1.3.250

**Figure 1 – Reference topology**

###### 2.3.1.2 Preparing the field
Before performing the actual DoA and IA assignment, the MaC has to “prepare the field”. This shall
mean that it shall set PID_RF_SBC_CONTROL in all RF Media Couplers as necessary.

This preparation of the field is included in the Configuration Procedures below.

**Common error handling when preparing the field**

1. The Configuration Procedure shall be aborted.

2. All instances of PID_RF_SBC_CONTROL that have already been set to a value not equal to
“Disable” shall be set back to “Disable” again.

3. The MaC user shall be informed that the preparation of the field failed and point to the Media
Coupler in which this failed, with an understandable interpretation of the error code. The MaC
user shall be signalled that this Media Coupler does not allow completion of the Configuration
Procedure and that the configuration of that Media Coupler needs to be adjusted firstly.

###### 2.3.1.3 MaC is in the same RF Domain as the MaS

EXAMPLE 11 This is the case in the reference topology of Figure 1, if the MaC assigns the DoA and IA of device 1. Device 1
is not assigned an IA yet, but the IANEW that it shall be assigned (1.3.10) will make it belong in the same Subnetwork 1.3 as the MaC.

**Requirements for the MaC**

- The IA and the DoA of all RF MCs in the installation have to be assigned already and the MaC shall
use a correct IA and DoA according to its position in the topology. If this is not the case, then the
MaC should not perform the Network Management procedure.

- The MaC shall use system broadcast communication mode to handle system broadcast services, and
not broadcast communication mode.

- The MaC shall not enable the routing of system broadcast services in any Media Coupler: it shall
make sure that PID_RF_SBC_CONTROL has the value “Disable” in all MCs in the installation. It
can either set this explicitly, or it can assume this after the automatic time-out for this Parameter has
expired and all MCs have assumed the default value “disable” again for their
PID_RF_SBC_CONTROL.

**STEP 1:** **Discovery of the Object Indexes of the Router Objects of the Secondary Sides of the**
**TP1/RF Media Couplers**

The S-Mode MaC should know the value of the PID_RF_SBC_CONTROL in the Media Couplers. If not,
then these have to be set appropriately before. It should also know the Object Indexes of the Router
Objects of the Secondary Side from its product storage. If not, this should also be discovered before.

© C i h 2004 2021 A i i S S ifi i 02 01 01 18 f 198


Device 2

↓

IANEW
= 1.2.20


MaC
1.3.250


DoA 2


RF


1.1.0


RF


1.3.0


-----

**IF MaC does not know the SBC routing in the MCs in the installation THEN {**
/* If the MaC does not know the Object Indexes of the Secondary Sides. */
**FOR EACH TP1/RF Media Coupler n in the installation {**
NM_ObjectIndex_Read(ASAP = N.IA, comm_mode_req = ptp-cl, objct_type = Router Object Type,
PID = PID_OBJECT_INDEX, test_info = (00, 255))
}
This will return the Object indexes of all Router Objects of the TP1/RF Media Couplers in the
installation. The first instance will always be the Router Object of the Primary Side, which is not needed
here. It is assumed here that the Coupler Model 2.0, mask 2920h is installed, in which the Router Object
of the RF Interface will be the second instance.

**STEP 2:** **Disable routing of system broadcast services in all TP1/RF Media Couplers**

/* Then the System Broadcast Routing Parameter can be set to “disable” in each TP1/RF MC. */
**FOR EACH TP1/RF Media Coupler n in the installation {**
DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = Disable, error)
}
}

If this results in no errors, then the Configuration Procedure shall continue.

If there is any error, then the MaC shall abort the Configuration Procedure and the common error
handling for “Preparing the field” (2.3.1.2) shall apply.

Now, the routing of system broadcast services is disabled in all TP1/RF Media Couplers.

**STEP 3:** **Assignment of DoA and IA**

The Domain Address and the Individual Address can now be assigned to the MaS. (In the given example
DoA = 3 and IA = 1.3.10).

/* The MaC shall use system broadcast communication mode to initiate this procedure. */
NM_DomainAndIndividualAddressWrite2(NmpDoANew = 3, NmpIANew = 1.3.10, NmpIACurrent)

###### 2.3.1.4 MaC and MaS are in a different RF Domain

EXAMPLE 12 This is the case in the reference topology of Figure 1, if the MaC assigns the DoA and IA of device 2. Device 2
is not assigned an IA yet, but the IANEW that it shall be assigned (1.2.20) will make it belong to a different Subnetwork 1.2 than the
MaC.

**Requirements for the MaC**

- The MaC shall use broadcast communication mode to handle system broadcast services, and not
system broadcast communication mode.

- The MaC shall enable routing of system broadcast services in the MC that will couple to the
Subnetwork to which the MaS will later belong and set PID_RF_SBC_CNTROL to route the system
broadcast services on system broadcast communication mode.

EXAMPLE 13 In the reference topology in Figure 1, the MaC shall set PID_RF_SBC_CONTROL in MC 1.2.0 to “system
broadcast”.

If the MaC is itself connected to a different KNX RF Subnetwork, then it shall enable routing of
system broadcast services in the MC that couples to its own Subnetwork and set
PID_RF_SBC_CONTROL to “broadcast”.

EXAMPLE 14 In the reference topology in Figure 1, the MaC shall set PID_RF_SBC_CONTROL in MC 1.3.0 to
“broadcast”.

The working together of these measures is shown in 2.3.1.4.1.

© C i h 2004 2021 A i i S S ifi i 02 01 01 19 f 198


-----

**STEP 1:** **Discovery of the Object Indexes of the Router Objects of the Secondary Sides of the**
**TP1/RF Media Couplers**

This is identical to step 1 above.

**STEP 2:** **Set PID_RF_SBC_CONTROL appropriately in all TP1/RF Media Couplers**

If there is any error in the below, then the MaC shall abort the Configuration Procedure and the common
error handling for “Preparing the field” (2.3.1.2) shall apply.

**2.1 For all Media Couplers except 1.3.0 and 1.2.0**

This is the same procedure as step 2 above.

/* Then the System Broadcast Routing Parameter can be set to “disable” in each TP1/RF MC. */
**FOR EACH further TP1/RF Media Coupler n in the installation {**
DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = Disable, error)
}
}

**2.2 For the “local” MC 1.3.0**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,

command = “broadcast”, error)

**2.3 For the “remote” MC 1.2.0**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,

command = ““system **broadcast””, error)**

**STEP 3:** **Assignment of DoA and IA**

The Domain Address and the Individual Address can now be assigned to the MaS. (In the given example
DoA = 2 and IA = 1.2.20).

/* The MaC shall use broadcast communication mode to initiate this procedure. */
NM_DomainAndIndividualAddressWrite2(NmpDoANew = 3, NmpIANew = 1.3.10, NmpIACurrent)
/* MC 1.2.0 will according its setting use system broadcast communication mode */
/* when forwarding the messages. */

**STEP 4:** **Disable routing of system broadcast services in MC 1.2.0 and 1.3.0**

**FOR MC 1.2.0 and MC 1.3.0 {**
DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = “disable”, error)
}
}

2.3.1.4.1 Design considerations - Preventing loops of system broadcast messages (INFORMATIVE)

EXAMPLE 15 This example bases on the reference topology in Figure 1 and shows that there are no loops and no message
duplication.

© C i h 2004 2021 A i i S S ifi i 02 01 01 20 f 198


-----

**MaC** **1.3.0** **1.2.0** **target**

MaC sends the request
on normal broadcast
(DoA 3)


MC 1.2.0 does not
accept the request: it
does not contain its own
DoA (DoA 2).

MC 1.2.0 accepts the
message.

MC 1.2.0 is
preconfigured to route
system broadcast
services effectively on
system broadcast.

MC 1.2.0 accepts the
request, as it is
configured to accept
system broadcast

MC 1.2.0 passes the
message to TP1, as the
same parameters says
to pass it.


the target does
not accept the
request: it is not
on SBC.
If the target would
“coincidentially” have
DoA 3, then it will
receive the response
and react.

the target
accepts the
system
broadcast.

the target
responds on
system
broadcast.

The target may
hear the echo,
but will not
listen to it,
because it does
not use its DoA.


The MaC may receive
this echo, but should
ignore it.

The MaC may receive
this response. It should
actually ignore it.

The MaC receives the
response, as it
contains DoA 3


MC 1.3.0 accepts the
request: it contains its
own DoA (DoA 3).

MC 1.3.0 forwards the
message on TP1.

MC 1.3.0 does not
accept the message: it
is not configured to
route system
broadcast messages

MC 1.3.0 may receive
this message, but will
not pass it, as it is
configured not to pass
system broadcast
messages.

MC 1.3.0 receives the
message from the TP1
side.

MC 1.3.0 passes the
message on RF, using
normal broadcast on
its “own” DoA (DoA 3),
because that one
single parameter was
not set differently by
ETS.


© C i h 2004 2021 A i i S S ifi i 02 01 01 21 f 198


-----

##### 2.3.2 Deep Scan
This procedure searches a Subnetwork on KNX with a given Subnetwork Address for all the Individual
Addresses that are used in it.

/* Search for all the Individual Addresses in the Subnetwork X. */
NM_SubnetworkDevices_Scan2(SNA =X, DA[]);

This returns a list of all Device Addresses DA[] that are occupied in the Subnetwork.

This Network Configuration Procedure shall only be applied on a KNX RF Subnetwork.

#### 2.4 Configuration Procedures for configuring the Subnetwork Address

##### 2.4.1 General
The SNA Configuration Procedures specified in clauses 2.4.3, 2.4.4, 2.4.5, 2.4.6 and 2.4.7 make use of
the transmission of an A_NetworkParameter_Write-PDU with hop_count = 0. Therefore, these
mechanisms do not work in the combination with Repeaters, because a Repeater is not located at a
specific place in the Line. Therefore a Repeater cannot send the A_NetworkParameter_Write-PDU. In
addition, a Repeater decrements the hop_count, i.e. the A_NetworkParameter_Write-PDU sent by
Routers with hop_count = 0 are not passed by a Repeater. For these reasons it shall be recommended to
the installer not to apply Repeaters in an installation that uses SNA management. Routers shall be used
instead.

##### 2.4.2 SNA configuration inherited in IA configuration (informative)
   - The SNA is part of the IA, as specified in [02]. In S-Mode, the SNA is not assigned separately,
but is part of the IA assignment procedures. The Configuration Procedure consists of executing
either one of the following Network Management Procedures (see [06]):

   - NM_IndividualAddress_Write
   - NM_IndividualAddress_SerialNumber_Write
   - NM_DomainAndIndividualAddress_Write
   - NM_DomainAndIndividualAddress_Write2

##### 2.4.3 SNA read

###### 2.4.3.1 Procedure specification
**Use**

This Network Configuration Procedure shall be used to determine the Subnetwork Address (SNA) of the
Subnetwork to which the Management Client that performs this procedure is connected.

Please refer to NM_NetworkParameter_Read_R in [06] for additional specifications about the
preconditions and parameters.

This Management Client can be any tool or device.

EXAMPLE 1 When a mobile service tool is temporarily connected to a Subnetwork, then it needs to acquire the current SNA
of the connected Subnetwork immediately after plug-in for self-acquisition of its temporary Individual Address. For the user of the
service tool it is not convenient to localise and access the corresponding Router and push a button on the Router to trigger an
A_NetworkParameter_Write updating the SNA.

EXAMPLE 2 Installation of an additional device in an existing system (e.g. in LTE mode): the device needs to acquire the
current SNA of the connected Subnetwork as soon as possible after the first power on. For the installer of the new device, it is not
convenient to wait for the next periodical SNA update from the Router (24 h heartbeat) or to localise and access the corresponding
Router and push a button on the Router.

© C i h 2004 2021 A i i S S ifi i 02 01 01 22 f 198


-----

NM_NetworkParameter_Read_R(hop_count_type_req = 0, object_type = Device Object,

PID = PID_SUBNET_ADDR, test_info = 00h, comm_mode_res = broadcast, hop_count_type_res = 0,
result_data[])

The value hop_count_type = 0 shall guarantee that the telegrams that are used in this Procedure remain in
one Subnetwork only.

The Management Client shall collect all received values of Subnetwork Addresses in the parameter
result_data[] for further processing.

###### 2.4.3.2 Specific requirements for the Management Server (Coupler)
**Couplers**

   - Couplers can be configured as Repeater, Bridge or Router. If configured as Repeater or Bridge
no A_NetworkParameter_Response-PDU shall be generated.

Whether or not a Coupler supports the SNA Server functionality shall be derived from the Device
Descriptor. There shall however be no explicit indication of this feature in the Device Descriptor itself.
Instead, for each Coupler Device Profile, which shall be related to the Device Descriptor, it is indicated
whether support of this feature is mandatory or optional.

**Requirements on Couplers configured as Router**

Whether or not the Router reacts on an SNA Read shall be controlled through the field EN_SNA_READ
in the Property PID_COUPL_SERV_CONTROL as specified in [05].

The reaction of the Router shall depend on its Individual Address m.n.0 as specified in Table 3.

If the Router responds, then it shall only respond on the side (primary side respectively secondary side)
on which the original request has been received. The values of the response shall always be:
hop_count_type = 0; object_type = 0000h (Device Object), PID = 57 = PID_SUBNET_ADDR,
test_info = 00h; comm_mode_response = broadcast and hop_count_type_res = 0; the value of test_result
shall be as specified in Table 3.

© C i h 2004 2021 A i i S S ifi i 02 01 01 23 f 198


-----

**Table 3 – Required reaction of the Router in function of its Individual Address**

**Line Address n**

**Area**
**Address m** **n ≠ 0** **n = 0**

**m ≠ 0** This is a Line Coupler. This is a Backbone Coupler

EXAMPLE 1.2.0 EXAMPLE 1.0.0

       - request received on primary side:       - request received on primary side:

The Coupler shall not respond. The Coupler shall respond with

test_result = 00h

       - request received on secondary side:       - request received on secondary side:

The Coupler shall respond with The Coupler shall respond with
test_result = m.n test_result = m.n

**m = 0** This is a Line Coupler connected directly to

This is a Coupler with Individual Address

the Backbone Line

0.0.0.

EXAMPLE 0.3.0

       - request received on primary side:

The Coupler shall respond with
test_result = 00h

This is a not allowed situation.

       - request received on secondary side:

The Coupler shall respond with
test_result = m.n

###### 2.4.3.3 Specific requirements for the Management Client (device)

 SNA update / error handling

If a response is received, the SNA Client shall use the contained SNA for further management of its
Individual Address. Due to broadcast addressing of the response, all devices on the Subnetwork will get
the SNA information at once. The response shall be accepted by SNA Clients without prior request.

If no response is received, the SNA Client shall wait until the time-out has expired. The time-out shall be
3 seconds for all physical media, taking into account the reaction time in the Router and frame
transmission time of the request and the response on a single Subnetwork (hop count 0).

In case of time-out, the SNA Client shall assume that there is no Router available in the Network (single
Subnetwork) or that a Router is present but not supporting the SNA read mechanism. In both cases the
SNA Client shall keep its current SNA.

The SNA Client may inform the user that the SNA read mechanism has failed.

   - If the SNA Client receives multiple subsequent responses, it shall systematically update its SNA
for each received response. This makes that the last response shall win and the SNA Client shall
use the contained SNA.

   - There is no special exception handling for multiple responses which may occur in the cases
below:

   - **Case 1** Wrong configuration of the network.
⇒ Various responses may occur with different SNA from several Routers.

⇒ Errors may happen.

   - **Case 2** **Backbone line with SNA = 00h**
⇒ The normal behaviour applies; see above.

© C i h 2004 2021 A i i S S ifi i 02 01 01 24 f 198

|Area<br>Address m|Line Address n|Col3|
|---|---|---|
|**Area**<br>**Address m**|**n **≠** 0**|**n = 0**|
|**m **≠** 0**|This is a Line Coupler.<br>EXAMPLE 1.2.0|This is a Backbone Coupler<br>EXAMPLE 1.0.0|
|**m **≠** 0**|• request received on primary side: <br>The Coupler shall not respond.|• request received on primary side: <br>The Coupler shall respond with<br>test_result = 00h|
|**m **≠** 0**|• request received on secondary side: <br>The Coupler shall respond with<br>test_result = m.n|<br>• request received on secondary side: <br>The Coupler shall respond with<br>test_result = m.n|
|**m = 0**|<br>This is a Line Coupler connected directly to<br>the Backbone Line<br>EXAMPLE 0.3.0|<br>This is a Coupler with Individual Address<br>0.0.0.|
|**m = 0**|• request received on primary side: <br>The Coupler shall respond with<br>test_result = 00h|This is a not allowed situation.|
|**m = 0**|<br>• request received on secondary side: <br>The Coupler shall respond with<br>test_result = m.n|<br>• request received on secondary side: <br>The Coupler shall respond with<br>test_result = m.n|


-----

   - **Case 3** Request and/or response are sent with hop-count > 0 due to an implementation error.
The message will be spread over several Subnetworks.

⇒ Various responses may occur with different SNA from several Routers in several
Subnetworks.
⇒ The hop-count value is not checked and corrected by the Router in connection with the
A_NetworkParameter_Read-PDU and the A_NetworkParameter_Response-PDU (standard
procedure for hop-count handling, this is, no specific requirement for Routers).

⇒ Errors may happen.

Routers shall not support SNA update as clients (both on primary and secondary side). This is, an
A_NetworkParameter_Response-PDU containing the SNA shall be ignored. Assignment of SNA to
Routers shall remain under full control of the installer.

##### 2.4.4 SNA update on IA change
“SNA update on IA change” is a procedure executed by the Router, in which it shall update the SNA on
its secondary side if the Router’s own Individual Address changes.

Whether a Router supports “SNA update on IA change” depends on the Coupler Profile.

If the Router supports “SNA update on IA change”, then it shall be possible to enable and disable the
“SNA update on IA change” in the Router by appropriately setting and clearing the field EN_SNA_UPDATE_WRITE in the Property PID_COUPL_SERV_CONTROL in the Router Object of the Router.
This Property and the default setting are specified in [05].

A Management Client shall not enable the SNA update on IA change in the Coupler if the Coupler is
configured as a Repeater.

   - If the “SNA update on IA change” is enabled, the Router shall if its Individual Address changes
once execute the Management Procedure NM_NetworkParameter_Write_R on its secondary
side as follows:

/* Update the SNA on the Router’s secondary side. */
NM_NetworkParameter_Write_R(ASAP = void; comm_mode = broadcast; hop_count_type_request = 0;

object_type = Device Object, PID = PID_SUBNET_ADDR, priority = system, value = Router.SNA)

NOTE In this use of the Management Procedure NM_NetworkParameter_Write_R, the hop_count value 0 is used. This
intentionally restricts the impact of this Configuration Procedure to only the Subnetwork on the secondary side.

Optionally, this SNA update may also be sent if an IA is assigned to the Router that is identical to the IA
that the Router already has.

##### 2.4.5 SNA update on power-up
   - “SNA update on power-up” is the procedure executed by the Router once after power up, in
which it shall update the SNA on its secondary side with the Management Procedure when it
powers up.

The “SNA update on power-up” shall be an optional extension of the above feature “SNA update on IA
change”. The procedure shall thus be controlled together with the procedure “SNAupdate on iA change”
by the field EN_SNA_UPDATE_WRITE of the Property PID_COUPL_SERV_CONTROL in the Router
Object of the Router. This Property and the default setting are specified in [05].

If the “SNA update on power-up” is enabled, the Router shall if it powers up once execute the
Management Procedure NM_NetworkParameter_Write_R on its secondary side as follows:

© C i h 2004 2021 A i i S S ifi i 02 01 01 2 f 198


-----

/* Update the SNA on the Router’s secondary side */
NM_NetworkParameter_Write_R(ASAP = void, comm_mode = broadcast, hop_count_type_req = 0,

object_type = Device Object, PID = PID_SUBNET_ADDR, priority = system, value = Router.SNA)

##### 2.4.6 SNA heartbeat
“SNA heartbeat” is a procedure executed by the Router, in which it shall cyclically update the SNA on its
secondary side.

Whether a Router supports “SNA heartbeat” depends on the Coupler Profile.

If the Router supports “SNA heartbeat”, then it shall be possible to enable and disable “SNA heartbeat” in
the Router by appropriately setting and clearing the field EN_SNA_HEART_BEAT in the Property
PID_COUPL_SERV_CONTROL in the Router Object of the Router. This Property and the default
setting are specified in [05].

A Management Client shall not enable “SNA heartbeat” in the Coupler if the Coupler is configured as
Repeater.

   - If the SNA heartbeat is enabled, the Router shall cyclically every 24 hour execute the
Management Procedure NM_NetworkParameter_Write_R on its secondary side as follows:

NM_NetworkParameter_Write_R(ASAP = void; comm_mode = broadcast; hop_count_type_request = 0;

object_type = Device Object, PID = PID_SUBNET_ADDR, priority = system, value = Router.SNA)


NOTE In this use of the Management Procedure NM_NetworkParameter_Write_R, the hop_count value 0 is used. This
intentionally restricts the impact of this Configuration Procedure to only the Subnetwork on the secondary side.

##### 2.4.7 SNA update on SNA inconsistency

###### 2.4.7.1 Definition of SNA Inconsistency

   - On the primary side an inconsistency is the situation where a Router receives a telegram with an
SNA (=AA+LA) in its Source Address (SA) that belongs at its secondary side.

Coupler.LA = Line Address of the Coupler
Coupler.AA = The Area Address of the Coupler
Telegram.SA.AA = The Area Address part of the Source Address of the received telegram
Telegram.SA.LA = The Line Address part of the Source Address of the received telegram

inconsistency = false
if Coupler.LA = 0 then /* The Coupler is a Backbone Coupler */
if Telegram.SA.AA = Coupler.AA then inconsistency = true
endif
else /*The Coupler is Line Coupler */
if (Telegram.SA.AA = Coupler.AA and Telegram.SA.LA = Coupler.LA) then inconsistency = true
endif
endif

On the secondary side an inconsistency is the situation where a Router receives a telegram with an SNA
that does not belong to its secondary side.

inconsistency = false
if Coupler.LA = 0 then /* The Coupler is a Backbone Coupler */
if Telegram.SA.AA != Coupler.AA then inconsistency = true
endif

© C i h 2004 2021 A i i S S ifi i 02 01 01 26 f 198


-----

else /* The Coupler is a Line Coupler */
if (Telegram.SA.AA != Coupler.AA or Telegram.SA.LA != Coupler.LA) then inconsistency =true
endif
endif

###### 2.4.7.2 Examples

   - Figure 2 visualises three cases of a devices having an inconsistent Individual Address.

###### 1. The device is located on a Line and has an Individual Address from outside this Line. If this device sends a telegram in point-to-point connection-oriented or connectionless communication mode, if inconsistency detection is enabled in the Line Coupler of this Line, this Line Coupler shall detect the inconsistency and generate a broadcast A_NetworkParameter_Write-PDU with the correct SNA as specified above.

 2. The device is located on the Backbone Line and has an Individual Address from a Main Line or a Line. The correct SNA of the Backbone Line is 0.0. If this device sends a telegram in point-to-point connection-oriented or connectionless communication mode and if inconsistency check is enabled in the Coupler, one Backbone Coupler shall detect the inconsistency[ 2)] and generate a point-to-point connectionless A_NetworkParameter_Write-PDU with the SNA 0.0 addressed to the device.

 3. The device is located on a Main Line.

 a. It has an Individual Address from another Area or from the Backbone Line. The Backbone Coupler shall detect the inconsistency and send an A_NetworkParameter_Write-PDU with the correct SNA to the Main Line.

 b. It has an Individual Address from one of the Lines in the same Area. One Line Coupler shall detect the inconsistency and send an A_NetworkParameter_Write- PDU addressed to the device, containing SNA 0.0. The device will take the new SNA. If it sends the next telegram in point-to-point connection-oriented or connectionless communication mode, case a. applies and in this second step the device gets the correct SNA.

2) Only one Backbone Coupler will detect the inconsistency: if the inconsistent Individual Address of a device on
the Backbone Line belongs to one Area, only this Backbone Coupler will detect the inconsistency.

© C i h 2004 2021 A i i S S ifi i 02 01 01 2 f 198


-----

**Figure 2 - Three cases of an inconsistent topology**

###### 2.4.7.3 SNA update on SNA inconsistency – procedure
The “SNA inconsistency check” in Routers is a mechanism that shall allow the Router to detect if a
device uses a topologically incorrect Individual Address. If the device supports the Management Server
side requirements to update its SNA through the Management Procedure NM_NetworkParameter_Write_R on PID_SUBNET_ADDR in the Device Object ([06]) then the Router will be able to assign a
correct SNA to such a device.

Whether a Router supports the “SNA inconsistency check” depends on the Router Profile. If it is
supported, it shall be possible to enable and disable the SNA inconsistency check in the Router by
accessing the field EN_SNA_INCONSISTENCY_CHECK in the Property PID_COUPL_SERV_CONTROL in the Router Object of the Router. This Property and the default setting are specified in [05].

If the “SNA inconsistency check” is enabled in a Router, the Router shall analyse the source Individual
Address of each telegram received by the Router in point-to-point connection-oriented communication
mode as well as in point-to-point connectionless communications mode (i.e. the Destination Address is an
Individual Address). This shall be done for telegrams received both on the primary side as well as on the
secondary side.

Telegrams received in other communication modes (i.e. multicast or broadcast) shall not be examined[ 3)].

All telegrams received in point-to-point connection-oriented and – connectionless communication shall be
examined, no matter whether the telegram is routed due to its Destination Address or not.

The format of the Individual Address is specified in [02] clause 1.4.2.

If the Source Address is topologically correct, the Router shall do no further action and proceed with the
routing of the telegram in function of its Destination Address, as specified in [03], clause 2.4.2.

If the Source Address is topologically incorrect, the Router shall not route the telegram, regardless of the
Destination Address: telegrams with inconsistent Source Address shall be blocked. Additionally the
Router shall update the SNA of the sender.

3) Checking telegrams in multicast communication mode could overload the Coupler, as most runtime telegrams as
sent in multicast. Checking of telegrams in broadcast is not possible, as this would disturb services used for
Individual Address assignment.

© C i h 2004 2021 A i i S S ifi i 02 01 01 28 f 198


-----

In order to update the SNA the Router shall act as follows:

  - If the telegram with the inconsistent Source Address is received from the secondary side of the
Router, the Router shall execute the Management Procedure NM_NetworkParameter_Write_R on
its secondary side as follows:

NM_NetworkParameter_Write_R(ASAP = void; comm_mode = broadcast; hop_count_type_request = 0;

object_type = Device Object, PID = PID_SUBNET_ADDR, priority = system, value = Router.SNA)

  - If the telegram with the inconsistent Source Address is received from the primary side of the
Router, the Router shall execute the Management Procedure NM_NetworkParameter_Write_R on
its primary side as follows:

if Coupler.LA = 0 then
/* The Coupler is a Backbone Coupler */
NM_NetworkParameter_Write_R(ASAP = Telegram.SA; comm_mode = point-to-point connectionless;
hop_count_type_request = 0; object_type = Device Object, PID = PID_SUBNET_ADDR,
priority = system, value = 00h)
else
/* The Router is a Line Coupler. */
/* It assumes the SNA of its primary side by its own IA as follows. */
SNAprimary.AA = Coupler.AA /* The Area Address of the primary side. */
SNAprimary.LA = 0 /* The Line Address part of the primary side. */
NM_NetworkParameter_Write_R(ASAP = Telegram.SA; comm_mode = point-to-point connectionless;
hop_count_type_request = 0; object_type = Device Object, PID = PID_SUBNET_ADDR,
priority = system, value = SNAprimary)
endif

NOTE For both Configuration Procedures, the Management Procedure NM_NetworkParameter_Write_R is used with
hop_count value 0. This intentionally restricts the impact of this Configuration Procedure to only the Subnetwork directly connected
to the secondary side respectively primary side of the Router.

###### 2.4.7.4 Constraints – building a correct two-level topology (informative)
In 2.4.7.3 the Line Coupler behaviour is specified to assign the correct SNA on the Main Line of a twolevel topology installation. This mechanism works well if the installer builds a true part of the full threelevel topology, i.e. the installer builds an installation that consists of up to fifteen Line Couplers
connected by a Main Line. These Line Couplers must share the same Area Address (see Figure 3).

LC LC LC
1.1.0 1.2.0 1.3.0

**Figure 3 - Example for a correct two-level topology**
**All Line Couplers have the same Area Address 1.**

© C i h 2004 2021 A i i S S ifi i 02 01 01 29 f 198


-----

   - In case the installer combines Line Couplers with different Area Addresses on the same Main
Line (see Figure 4) the SNA of the Main Line is not clearly defined. In this case the SNA that
will be assigned to a device depends on its previous Individual Address. Two cases must be
considered.

1. The device on the Main Line has an Individual Address not belonging to any Line in the
installation. In this case the Individual Address remains as it is, as no Line Coupler detects an
inconsistency.

2. The device on the Main Line has an Individual Address that belongs to a Line in the installation:
the affected Line Coupler sends an SNA write with its Main Line SNA.

In the second case depending to which Line the original Individual Address belongs, the device will get
the according Main Line SNA.

Also in the case of Figure 4 all Individual Addresses will be assigned in a way that routing works
correctly. Nevertheless combining Line Couplers with different Area Addresses on the same Main Line is
not recommended since extending such an installation with Backbone Couplers is not possible.

LC LC LC
1.1.0 1.2.0 2.1.0

**Figure 4 - Example for a not recommended two-level topology.**
**The Line Couplers attached to the same Main Line**
**have different Area Addresses (1 and 2)**

#### 2.5 Pre-assigned Group Addresses in Unidirectional devices
   - The Management Client shall be able to conclude the values of the pre-assigned Extended
Group Addresses from Device Descriptor Type 2.

The calculation of the Group Addresses assigned to output Group Objects for transmit-only device is
done starting from 0001h using the Group Object sequence defined in the E-Mode Channels (Index in the
Group Object list table) and the E-Mode Channel number in the DD2. Even if an input Group Object is
defined in a unidirectional sensor a Group Address shall be assigned to it (see Group Object 3 in the
example below).

**Example of DD2 and Group Address calculation**

   - Device Descriptor Type 2 value

© C i h 2004 2021 A i i S S ifi i 02 01 01 30 f 198


-----

Channel Info 4 0000h No additional channel

   - Group Addresses

**Group Object number** **Group Object name** **Pre-assigned Group Address**

1 Scene Activate 0001h

2 Scene Learn 0002h

_3_ _Info OnOff_ _0003h_
_(not used for transmit only device)_

4 OnOff 0004h

5 DimmingCtrl 0005h

#### 2.6 Discovery of maximal frame length

##### 2.6.1 Goal
This clause specifies the Configuration Procedures to discover the maximal frame size that can be used
between a Management Client and a Management Server.

L_Data_Standard frames shall always be capable of supporting APDUs of up to 14 octets.
L_Data_Extended frames are capable of transferring larger APDUs; therefore this procedure focuses on
discovering the maximal frame size that can be used with L_Data_Extended frames.

Discovery for Management with L_Data_Extended frames shall be done according the steps specified in
the following clauses.

© C i h 2004 2021 A i i S S ifi i 02 01 01 31 f 198

|Field|Value|Comments|
|---|---|---|
|Manufacturer|09h|Implementation dependent|
|Device Type|3000h|Implementation dependent|
|Version|10h|Implementation dependent|
|Link mode|00|No link management service supported|
|LT_Base|3Fh|no active local selector|
|<br>Channel Info 1|0008h|1 channel CH_PB_Scene|
|Channel Info 2|<br>000Eh|<br> 1 channel CH_Switch_Dimmer_Toggle|
|Channel Info 3|<br>0000h|<br> No additional channel|
|Channel Info 4|0000h|No additional channel|

|Group Object number|Group Object name|Pre-assigned Group Address|
|---|---|---|
|1|Scene Activate|0001h|
|2|Scene Learn|0002h|
|_3 _|_Info OnOff_|_0003h_<br>_(not used for transmit only device)_|
|4|OnOff|0004h|
|5|DimmingCtrl|0005h|


-----

##### 2.6.2 Normal conditions

###### 2.6.2.1 1[st] step: in the local device


ExtendedFrames = false;


MaxFrameLength(local) = 15 [4)];
/* Check the capabilities of the local device */
/* EMI 1 and EMI 2 do not support extended frames */
If EMI-Type = cEMI then
/* PID_MAX_APDU_LENGTH of the Device Object of the local device */
/* shall be read using the cEMI services for local device Management */
M_PropRead(Interface Object Type = Device Object; Object Instance = 1; Property_Id = 56, start_index = 1);

If PID_MAX_APDU_LENGTH.Value > 15 4[)] then
ExtendedFrames = true;
MaxFrameLength(local) = PID_MAX_APDU_LENGTH.Value
Endif
Endif

###### 2.6.2.2 2[nd] step: in the target device

If ExtendedFrames = true then
MaxFrameLength(target) = 15;
/* Read PID_MAX_APDU_LENGTH of the Device Object */
DMP_InterfaceObjectReadR(object_index = 0; PID = PID_MAX_APDU_LENGTH; start_index = 1;
element_count = 1);
If DeviceObject.PID_MAX_APDU_LENGTH is present then
If PID_MAX_APDU_LENGTH.Value > 15 then
MaxFrameLength(target) = DeviceObject.PID_MAX_APDU_LENGTH.Value
If MaxFrameLength(local) < MaxFrameLength(target) then
MaxFrameLength = MaxFrameLength(local)
Else
MaxFrameLength = MaxFrameLength(target)
Endif
Else
ExtendedFrames = false
Endif
Else
ExtendedFrames = false
Endif
Endif

4) Any KNX medium is specified to support a minimal APDU length of 15.

© C i h 2004 2021 A i i S S ifi i 02 01 01 32 f 198


-----

###### 2.6.2.3 3[rd] step: in all in-between couplers

If ExtendedFrames = true then
Repeat /* For all in-between Routers do */
/* Read the Device Descriptor Type 0 (mask version) */
DMP_Connect_RCo [5)](connection oriented communication, descriptor_type = 0)
/* Masks 0910h and 0911h do not support extended frames */
If(DD0 = 0910h or DD0 = 0911h) then
ExtendedFrames = false
Else
/* The object index of the Router Object needs to be known in advance */
RouterObject.index = DMP_InterfaceObjectScan_R();
/* Read the routing capabilities from the Router Object */
/* See PID_MAX_APDU_LENGTH in the Router Object as specified in [05] */
PID_MAX_APDU_LENGTH.Value = DMP_InterfaceObjectReadR
(object_index = RouterObject.index; PID = PID_MAX_APDU_LENGTH; start_index = 1;
element_count = 1)
/* If the above fails, PID_MAX_APDU_LENGTH shall alternatively be read
from the Device Object (which shall always have object_index = 0) */
If RouterObject.PID_MAX_APDU_LENGTH does not exist then
PID_MAX_APDU_LENGTH.Value = DMP_InterfaceObjectReadR (object_index = 0;
PID = PID_MAX_APDU_LENGTH; start_index = 1; element_count = 1)
EndIf
If Property not present then
ExtendedFrames = false
Else /* Either Property is present */
If PID_MAX_APDU_LENGTH.Value > 15 then
MaxFrameLength(thisRouter) = PID_MAX_APDU_LENGTH.Value
If MaxFrameLength(thisRouter) < MaxFrameLength then
MaxFrameLength = MaxFrameLength(thisRouter)
Endif
Else /* Property is present but has value ≤ 15 */
ExtendedFrames = false
Endif
Endif
Endif
Until ExtendedFrames = false OR no more in-between Routers
Endif

NOTE This same algorithm can be used to discover the transmission capabilities between any two devices, not solely between
ETS and its target device.

##### 2.6.3 Error and exception handling

   - If the discovery would make assume a certain L_Data_Extended frame length is supported
along the entire communication path and afterwards communication using this frame length
fails, then the following fall back option shall be used.

Failure of management with APDU-length > 55 shall firstly fall back to management with
APDU-length = 55 and only if also this fails to management with L_Data_Standard frames.

5) This assumes that all Routers support connections. If ever this would not be the case, we’d have to specify a
Management Procedure that returns the Device Descriptor for any kind of descriptor type and any kind of
communication mode.

© C i h 2004 2021 A i i S S ifi i 02 01 01 33 f 198


-----

NOTE Bridges and Repeaters are not considered by the procedure according clause 2.6.2. The possible presence of Bridges
and/or Repeaters is covered by the exception rule above.

#### 2.7 Setting of IP Properties
**Goal**

The goal of this Configuration Procedure is to write the IP system Properties as defined in the KNX
specification [10] that the user of the ETS configured in device and line settings into KNXnet/IP and
KNX IP devices.

**Prerequisites**

1. The routing multicast address is a valid class D IP address.

2. Device address, network mask and gateway address are valid and match together.

3. The target device already has a known Individual Address assigned.

**Inputs**

**Constants**

OID_KNXNETIP_PARAMETER The Object Type of the KNXnet/IP
Parameter Object

PID_PROJECT_INSTALLATION_ID The Property Identifier of the project
installation Property

PID_ADDITIONAL_INDIVIDUAL_ADDRESSES The Property Identifier of the Property
holding the array of additional Individual
Addresses

PID_IP_ASSIGNMENT_METHOD The Property Identifier of the Property
containing the method of IP address
assignment

PID_IP_ADDRESS The Property Identifier of the IP address
Property for manual address assignment

PID_SUBNET_MASK The Property Identifier of the subnetwork
mask Property for manual IP address
assignment

PID_DEFAULT_GATEWAY The Property Identifier of the Property
containing the default gateway for manual
assignment

PID_ROUTING_MULTICAST_ADDRESS The Property Identifier of the routing
multicast address Property

PID_TTL The Property Identifier of the Property
containing the multicast TTL

PID_FRIENDLY_NAME The Property Identifier of the friendly name
string Property

**Product Data:**

noAIAs The number of additional Individual Addresses supported by this device.

**Project:**

ProjID, InstID The project ID and installation ID.

MC The routing multicast address valid for this device.

TTL The TTL for multicast communication in this device.

© C i h 2004 2021 A i i S S ifi i 02 01 01 34 f 198


-----

**User:**

Name The friendly name of this device.

IA The Individual Address of the target device.

AIAs[] The array of additional Individual Addresses.

IPAMethod The selected method of IP address assignment.

IPA The manually configured IP address.

SN The manually configured IP subnetwork mask.

GW The manually configured default gateway address.

**Procedure**

The following Configuration Procedure is inserted into the common load procedure for devices with IP
parameters.

If the Configuration Procedure contains a DMP_Restart, it is inserted immediately before the first found
DMP_Restart (the DMP_Restart is thereby removed). Otherwise it is inserted before the final
DMP_Disconnect.

This Configuration Procedure is executed at a Complete Download or at a Partial Download “Cfg” (ETS
resets the Cfg flag if the user changes the IP configuration).
```
    /* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)
    /* Check if the project installation ID needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_PROJECT_INSTALLATION_ID, start_index=1,
    noElements=1, data=rPIID)
If (rPIID != PIID(ProjID,InstID))
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_PROJECT_INSTALLATION_ID, start_index=1,
    noElements=1, data=PIID(ProjID,InstID))
Endif
    /* Check if the routing multicast address needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID=PID_ROUTING_MULTICAST_ADDRESS, start_index=1,
    noElements=1, data=rMC)
If (rMC != MC)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID=PID_ROUTING_MULTICAST_ADDRESS, start_index=1,
    noElements=1, data=MC)
    restartRequired = true
Endif
    /* Check if the multicast TTL needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID=PID_TTL, start_index=1, noElements=1, data=rTTL)
If (rTTL != TTL)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID=PID_TTL, start_index=1, noElements=1, data=TTL)
    restartRequired = true
Endif
    /* Check if the friendly name needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_FRIENDLY_NAME, start_index=1, noElements=1,
    data=rName)
If (rName != Name)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_FRIENDLY_NAME, start_index=1, noElements=1,
    data=Name)
Endif
    /* Check if the IP assignment method needs to be written to the device. */

```
© C i h 2004 2021 A i i S S ifi i 02 01 01 3 f 198


-----

```
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_IP_ASSIGNMENT_METHOD, start_index=1,
    noElements=1, data=rIPAMethod)
If (rIPAMethod != IPAMethod)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_IP_ASSIGNMENT_METHOD, start_index=1,
    noElements=1, data= IPAMethod)
    restartRequired = true
Endif
If(IPAMethod==fixed)
    /* Check if the IP address needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_IP_ADDRESS, start_index=1, noElements=1,
    data=rIPA)
If (rIPA != IPA)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_IP_ADDRESS, start_index=1, noElements=1,
    data= IPA)
    restartRequired = true
Endif
    /* Check if subnetwork mask needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_SUBNET_MASK, start_index=1, noElements=1,
    data=rSN)
If (rSN != SN)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_SUBNET_MASK, start_index=1, noElements=1,
    data=SN)
    restartRequired = true
Endif
    /* Check if the default gateway needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_DEFAULT_GATEWAY, start_index=1, noElements=1,
    data=rGW)
If (rGW != GW)
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_DEFAULT_GATEWAY, start_index=1, noElements=1,
    data= GW)
    restartRequired = true
Endif
Endif
    /* Check if the additional Individual Address needs to be written to the device. */
DMP_InterfaceObjectRead_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_ADDITIONAL_INDIVIDUAL_ADDRESSES,
    start_index=1, noElements= noAIAs, data=rAIA[])
For i=1 to noAIAs
If (rAIA[] != AIAs[i])
    DMP_InterfaceObjectWrite_R(flags=2, dataBlockStartAddress=0, object_type=0,
    object_index=OID_KNXNETIP_PARAMETER, PID= PID_ADDITIONAL_INDIVIDUAL_ADDRESSES,
    start_index=i, noElements=1, data= AIAs[i])
Endif
Endfor
    /* Restart the device if necessary. */
If (RestartRequired)
    DMP_Restart_RCo()
Else
    DMP_Disconnect_RCo()
Endif

```
© C i h 2004 2021 A i i S S ifi i 02 01 01 36 f 198


-----

### 3 S-Mode

#### 3.1 General

##### 3.1.1 Differences between Remote – and Local access to the Management Server
   - In general, and unless specified explicitly below, the Configuration Procedures are changed by
the selection of the connection to the device. in function of the selection of the installer, the
connection will be built up and broken down by:

   - DMP_Connect_RCo and DMP_Disonnect_RCo for remote connections via RS232 or USB
   - DMP_Connect_LcEMI and DMP_Disonnect_LcEMI for local connection via USB
   - DMP_Connect_R_KNXnetIPDeviceManagement and
DMP_Disconnect_R_KNXnetIPDeviceManagement for KNXnet/IP Device Management
connections

The further Configuration Procedure (full download, partial download and unload) is further on not
differentiated in function of the type of connection to the Management Server; the same APDUs are
transmitted in the same sequence.

© C i h 2004 2021 A i i S S ifi i 02 01 01 3 f 198


-----

#### 3.4 System 300

##### 3.4.1 Default download procedure

###### 3.4.1.1 Inputs
The Number of octets in the Load Control “Relative Allocation” shall be calculated from the Maximum
Table Length of the Address or Association Table Property.

###### 3.4.1.2 Remote Configuration Procedure

3.4.1.2.1 Complete Sequence of downloading (Example)
_1._ _optional: Connect (T_Connect.Req)_
2. Check Device Descriptor
(A_DeviceDescriptor_Read-PDU, A_DeviceDescriptor_Response-PDU)
_3._ _optional: Check maximum APDU-Length_
4. Scan Interface Objects (map Object Index to Object Type and Instance for Property Write)
5. Check Manufacturer (Property Read/Verify (Object Type 00h,, Instance 1, Property 0Ch) )
6. Unload all loadable Objects. (write Unload = 04h to load control property of all loadable objects)
7. Load S-Mode Group Address Table

7.1. Start load :Property Write (Object Index (Object Type 1, Instance 1),Property 5, Value 01=Start
Load)
_7.2._ _optional :relative allocation ( Maximum table length) :_
_Property Write (Object Index (Object Type 1, Instance 1),Property 5, Value 03h,0Ah,Length_
_=Segment, Table length, Length)_
7.3. Write Table Values to Object Type 1, Instance 1, Property 23
7.4. Property Write (Object Index (Object Type 1, instance 1),Property 5, Value 02= Load Complete)
8. Load Association Table

8.1. Start load :Property Write (Object Index (Object Type 2, Instance 1),Property 5, Value 01=Start
Load)
_8.2._ _optional :relative allocation (Maximum table length) :_
_Property Write (Object Index (Object Type 2, Instance 1),Property 5, Value 03h,0Ah,Length_
_=Segment, Table length, Length)_
_8.3._ _Find Group Object Association Table Format (format 0 or format 1):_
_Property Description Read (Object Index (Object Type 2, instance 1), Property 23)._
_The format of the returned in the preceding step 8.3 shall be used to adapt the format of the_
_Property Values in the below steps for accessing the GroupObject Association Table._
8.4. Write Table Values to Object Type 2, Instance 1, Property 23h
8.5. Property Write (Object Index (Object Type 2, instance 1),Property 5, Value 02= Load Complete)
9. Load Application Parameter

9.1. Start load :Property Write (Object Index (Object Type 3, Instance 1),Property 5, Value 01=Start
Load)
9.2. Write Application Parameter via Property Write to Application Program Object
9.3. Property Write (Object Index (Object Type 3, instance 1),Property 5, Value 02= Load Complete)
9.4. Rescan Interface Objects (some new application Objects may pop up when the application is
loaded)
9.5. Write Application Parameter via Property Write to Application Interface Objects.

© C i h 2004 2021 A i i S S ifi i 02 01 01 38 f 198


-----

_10._ _.optional[ 6)]: Disconnect (T-Disconnect)_

3.4.1.2.2 Parameterisation of the Application Program
Parameter of the Application program can be downloaded direct to Application Interface Objects. The
Application Interface Objects are dynamically created after the System Interface Objects. Parameters
cannot be set until the application is loaded.

#### 3.5 System B

##### 3.5.1 General requirements

###### 3.5.1.1 Load State Machine
The configuration of the different programmable parts shall be based on the use of the Load State
Machine – Realisation Type 1, as specified in [05]

The number and value of the Load State shall be as specified in [05] clause “States of the Load State
Machine”.

The System B Load State Machine shall support the following Load Events, which are specified in [06]
clause “DMP_LoadStateMachineWrite_Rco_IO”.

###### 3.5.1.2 Load controls
This model shall support the following load controls.

**Table 4 – Load Controls for System B**

**Control Code** **Load Event** **Notes**

01h Start Loading None.

02h Load Completed None.

03h Additional Load Controls: None.

**Subtype** **Load Event**

0Bh Data Relative Allocation None.

04h Unload An Unload to a segment shall free the allocated memory. The reference pointer
(PID_TABLE_REFERENCE) shall be set to
zero.

An allocation (if necessary) shall occur if a segment is in the state Loading. In all other states the memory
allocation shall be ignored.

A successful memory allocation shall set the reference pointer (PID_TABLE_REFERENCE) to the base
address of the allocated memory. In any other case the reference pointer shall be set to zero. This shall
especially be the case when the segment is ‘unloaded’ or when a memory allocation failed.

Via ‘Mode’ and ‘Fill’ it shall be possible to prepare the memory for download. If the allocated memory
space shall be left unchanged e.g. when Group Addresses are to be added to the Group Address Table
‘Mode’ shall be set to zero, which means ‘keep the memory contents’.

If the allocated memory space shall be filled e.g. with FFh ‘Mode’ shall be set to 1 and ‘Fill’ to FFh. This
can accelerate the download procedure.

6) This is an option for the Management Client. For the common tool ETS®, this can be controlled via a flag in the
database entry for the product.

© C i h 2004 2021 A i i S S ifi i 02 01 01 39 f 198

|Control Code|Load Event|Col3|Notes|
|---|---|---|---|
|01h|Start Loading|Start Loading|None.|
|02h|Load Completed|Load Completed|None.|
|03h|Additional Load Controls:|Additional Load Controls:|None.|
|03h|**Subtype**|**Load Event**||
|03h|0Bh|Data Relative Allocation|None.|
|04h|Unload|Unload|An Unload to a segment shall free the allo-<br>cated memory. The reference pointer<br>(PID_TABLE_REFERENCE) shall be set to<br>zero.|


-----

If a Management Client allocates the same segment memory more than once, the device shall free the
previously allocated memory and attempt to reallocate the requested memory size at the original base
address. This feature is useful for the Management Client adding data to segments (e.g. adding Group
Addresses to the Group Address Table). If the reallocated memory size exceeds the available memory
space the base address shall be set to zero to indicate the memory allocation failure.

The manufacturer of the Application Program 1 and the Application Program 2 shall take care that the
device cannot reach a critical state if the load state machine of one or more segments changes from
‘loaded’ to a different state.

###### 3.5.1.3 Memory architecture
The memory segments Application Program 2, Application Program 1, Group Object Table, Group
Address Table and Association Table are recommended to be arranged in the device memory in
ascending order as described in Figure 5.

The described arrangement ensures effective usage of the device’s memory with the help of relative
memory allocation.

Nevertheless it shall be possible to arrange the segments in different ways. For successful use of the
loading process described below, the device must only be able to return a 4 octet absolute memory
address on a memory allocation request. Where the segment’s memory space is located actually does not
affect the download procedure as such.

Dynamic table management (one table shrinking to accommodate the growth of another table) is not
possible.

For most effective usage of the device’s memory with the help of relative memory allocation the device
must be able to return the (BaseAddress of the segment before + allocated memory of the segment before
+ 1) as BaseAddress of the current segment on a memory allocation request.

The ‘Reserve’ space between the segments can be there due to technical reasons (flash pages) or to leave
space between the segments for possible modification without having to rearrange other segments. The
implementation of these ‘Reserve’ spaces is of course optional.

The base address of the segments shall be requested from the management server by the load control
‘Table Data Relative Allocation’. It shall set the segment’s base address to PID_TABLE_REFERENCE.
The value 0h shall mean that no memory is allocated before or that the requested memory size is not
possible to be allocated.

The manufacturer of the Application Program 1 and the Application Program 2 shall take care that the
device cannot reach a critical state if the load state machine of one or more segments changes from
‘loaded’ to a different state.

In some cases it may be useful to write data at an absolute memory address of the device without
requesting a BaseAddress from the device. Therefore the application developer needs explicit knowledge
of the internal memory map of the device. In this case the Management Client shall check the base
address of the allocated memory being the expected memory address of the absolute code.

© C i h 2004 2021 A i i S S ifi i 02 01 01 40 f 198


-----

Base Pointer
Application Program 2


Base Pointer
Application Program 1


Base Pointer
Group Object Table


Base Pointer
Group Address Table


Base Pointer
AssociationTable


most significant
memory address

**Figure 5 – System B recommended memory architecture**

###### 3.5.1.4 Memory services
The memory of a System B device can be programmed via A_Memory_Write-service or
A_UserMemory_Write-service.

The A_Memory_Write-service can address memory locations up to 64 kbyte. The
A_UserMemory_Write-service can address memory locations up to 1 Mbyte.

The maximum memory address of 1 Mbyte is addressed via a 20 bit address value. Thus the value of
PID_TABLE_REFERENCE shall be limited to 20 bit values only; the higher 12 bits shall be marked as
reserved and set to 0.

These bits may later on be specified by the KNX Association to indicate usage of A_Memory_Write and
A_UserMemory_Write on different or the same memory.

If these bits are set to 0 A_UserMemory_Write and A_Memory_Write shall address the same memory.

The following table shall be applied:

© C i h 2004 2021 A i i S S ifi i 02 01 01 41 f 198


-----

**Table 5 – Use of A_Memory_Write and A_UserMemory_Write**

**service**

**memory >64k** **A_Memory_Write** **A_UserMemory_Write**

**present** A_Memory_Write shall be used by A_UserMemory_Write shall be
the client as well as by the server to supported by the server to address
address memory up to 64 k memory < 64k and also above.

The client shall use A_UserMemory_Write for the memory > 64 k

**not present** server: mandatory server: optional
client: mandatory

client: not allowed

##### 3.5.2 Load procedure for complete download

**Nr.** **Device management procedure** **Description**
MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

04 Check Manufacturer ID Check if expected Manufacturer ID ==
DeviceObject.PID_MANUFACTURER_ID

05 Unload device Unload Application Program 2
MaC: Set ApplicationProgram_2.LoadControl =
Unload
Unload Application Program 1
MaC: Set ApplicationProgram_1.LoadControl =
Unload
Unload Group Object Table
MaC: Set GroupObjectTable.LoadControl =
Unload
Unload Association Table
MaC: Set AssociationTable.LoadControl = Unload
Unload Address Table
MaC: Set AddressTable.LoadControl = Unload
Wait for all segments to be unloaded:
MaS: Set ApplicationProgram_2.LoadState =
Unloaded
MaS: Set ApplicationProgram_1.LoadState =
Unloaded
MaS: Set GroupObjectTable.LoadState =
Unloaded
MaS: Set AssociationTable.LoadState =
Unloaded
MaS: Set AddressTable.LoadState = Unloaded

© C i h 2004 2021 A i i S S ifi i 02 01 01 42 f 198

|memory >64k|service|Col3|
|---|---|---|
|<br>**memory >64k**|**A_Memory_Write**|**A_UserMemory_Write**|
|**present**|<br>A_Memory_Write shall be used by<br>the client as well as by the server to<br>address memory up to 64 k|<br>A_UserMemory_Write shall be<br>supported by the server to address<br>memory < 64k and also above.<br>The client shall use A_User-<br>Memory_Write for the memory > 64 k|
|**not present**|server: mandatory<br>client:<br>mandatory|<br>server: optional<br>client: <br>not allowed|

|Nr.|Device management procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|
|05|Unload device|<br>Unload Application Program 2<br>MaC: Set ApplicationProgram_2.LoadControl =<br>Unload<br>Unload Application Program 1<br>MaC: Set ApplicationProgram_1.LoadControl =<br>Unload<br>Unload Group Object Table<br>MaC: Set GroupObjectTable.LoadControl =<br>Unload<br>Unload Association Table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Unload Address Table<br>MaC: Set AddressTable.LoadControl = Unload<br>Wait for all segments to be unloaded:<br>MaS: Set ApplicationProgram_2.LoadState =<br>Unloaded<br>MaS: Set ApplicationProgram_1.LoadState =<br>Unloaded<br>MaS: Set GroupObjectTable.LoadState =<br>Unloaded<br>MaS: Set AssociationTable.LoadState =<br>Unloaded<br>MaS: Set AddressTable.LoadState= Unloaded|


-----

|Nr.|Device management procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|06|Loading Application Program 2|Set Application Program 2 to the LoadState ‘Loading’<br>MaC: Set ApplicationProgram_2.LoadControl =<br>Load<br>MaS: Set ApplicationProgram_2.LoadState =<br>Loading<br>Allocate the required memory size<br>MaC: Set ApplicationProgram_2.LoadControl =<br>Data Relative Allocation<br>Get Application Program 2 base pointer via Property<br>Reference<br>MaC: PropertyRead(ID_ApplicationProgram_2,<br>PID_REFERENCE)<br>MaS:<br>PropertyResponse((ID_ApplicationProgram_2,PI<br>D_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value;<br>if it is zero then allocation was not<br>successful. This causes an error message<br>of the MaC to the Installer.<br>If allocation was successful then loading is<br>continued:<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower<br>than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>,<br>Length)<br>if BaseAddress plus allocated memory is higher<br>than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress,<br><Data>, Length)<br>Set ApplicationProgram_2.ApplicationVersion<br>MaC: PropertyWrite(ID_ApplicationProgram_2,<br>PID_PROGRAM_VERSION)<br>Set ApplicationProgram_2 to the LoadState ‘Loaded’<br>MaC: Set ApplicationProgram_2.LoadControl =<br>LoadComplete<br>MaS: Set ApplicationProgram_2.LoadState =<br>Loaded<br>Read and save CRC checksum<br>MaC: Read Property Memory Control Block and<br>save CRC checksum.|
|07|Loading Application Program 1<br>(For details of the loading process apply the<br>routines of ‘application program 2’ accordingly:)|Set Application Program 1 to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Application Program 1 base pointer via Property<br>Reference<br>Load data via direct memory access<br>Set ApplicationProgram_1.ApplicationVersion<br>Set ApplicationProgram_1 to the LoadState ‘Loaded’<br>Read and save CRC checksum|


© C i h 2004 2021 A i i S S ifi i 02 01 01 43 f 198


-----

12 Disconnect Disconnect via bus

##### 3.5.3 Load procedure for partial download
   - Due to the ascending order of the memory segments it can be necessary to rearrange all or a
subset of the segments when modifying one segment.

- **Partial Download of the ‘application program 2’**

**Nr. Device management** **Description**

**procedure**

MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

04 Check Manufacturer ID Check if expected Manufacturer ID ==
DeviceObject.PID_MANUFACTURER_ID

7) Applicable for PL110 devices only.

© C i h 2004 2021 A i i S S ifi i 02 01 01 44 f 198

|Nr.|Device management procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|08|Loading the Group Object Table<br>(For details of the loading process apply the<br>routines of ‘application program 2’ accordingly:)|Set Group Object Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property<br>Reference<br>Load data via direct memory access<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|09|Loading the Address Table<br>(For details of the loading process apply the<br>routines of ‘application program 2’ accordingly:)|Set Address Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property<br>Reference<br>Load data via direct memory access<br>Load group responser table via property write 7) <br>MaC: PropertyWrite(ID_AddressTable,<br>GROUP_RESPONSER_TABLE)<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|10|Loading the Association-Table<br>(For details of the loading process apply the<br>routines of ‘application program 2’ accordingly:)|Set Association Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Association Table base pointer via Property<br>Reference<br>Load data via direct memory access<br>Set Association Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|11|Modifying access keys|Set access keys as required|
|12|Disconnect|Disconnect via bus|

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|05|Unload application<br>program 2|Unload Application Program 2<br>MaC: Set ApplicationProgram_2.LoadControl = Unload<br>Wait for segment to be unloaded:<br>MaS: Set ApplicationProgram_2.LoadState = Unloaded|
|06|Loading the Application<br>Program 2|<br>Set Application Program 2 to the LoadState ‘Loading’<br>MaC: Set ApplicationProgram_2.LoadControl = Load<br>MaS: Set ApplicationProgram_2.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set ApplicationProgram_2.LoadControl = Data Relative<br>Allocation<br>Get Application Program 2 base pointer via Property Reference<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_REFERENCE)<br>MaS:<br>PropertyResponse(ID_ApplicationProgram_2,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful⇒ Continue at Nr. 07<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set ApplicationProgram_2.ApplicationVersion<br>MaC: PropertyWrite(ID_ApplicationProgram_2,<br>PID_PROGRAM_VERSION)<br>Set ApplicationProgram_2 to the LoadState ‘Loaded’<br>MaC: Set ApplicationProgram_2.LoadControl = LoadComplete<br>MaS: Set ApplicationProgram_2.LoadState = Loaded<br>Read and save CRC checksum<br>⇒ Continue at Nr. 13|


© C i h 2004 2021 A i i S S ifi i 02 01 01 4 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|07|Unloading all the following<br>segments|Unload Application Program 1<br>MaC: Set ApplicationProgram_1.LoadControl = Unload<br>Unload Group Object Table<br>MaC: Set GroupObjectTable.LoadControl = Unload<br>Unload Address Table<br>MaC: Set AddressTable.LoadControl = Unload<br>Unload Association Table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Wait for all segments to be unloaded:<br>MaS: Set ApplicationProgram_1.LoadState = Unloaded<br>MaS: Set GroupObjectTable.LoadState = Unloaded<br>MaS: Set AddressTable.LoadState = Unloaded<br>MaS: Set AssociationTable.LoadState = Unloaded|
|08|Loading the Application<br>Program 2|Set Application Program 2 to the LoadState ‘Loading’<br>MaC: Set ApplicationProgram_2.LoadControl = Load<br>MaS: Set ApplicationProgram_2.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set ApplicationProgram_2.LoadControl = Data Relative<br>Allocation<br>Get Application Program 2 base pointer via Property Reference<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_REFERENCE)<br>MaS:<br>PropertyResponse(ID_ApplicationProgram_2,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful. This causes an error message of the MaC to<br>the Installer.<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set ApplicationProgram_2.ApplicationVersion<br>MaC: PropertyWrite(ID_ApplicationProgram_2,<br>PID_PROGRAM_VERSION)<br>Set ApplicationProgram_2 to the LoadState ‘Loaded’<br>MaC: Set ApplicationProgram_2.LoadControl = LoadComplete<br>MaS: Set ApplicationProgram_2.LoadState = Loaded<br>Read and save CRC checksum|


© C i h 2004 2021 A i i S S ifi i 02 01 01 46 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|09|Loading the Application<br>Program 1<br>(For details of the loading<br>process apply the routines<br>of ‘application program 2’<br>accordingly:)|Set Application Program 1 to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Application Program 1 base pointer via Property Reference<br>Load data via direct memory access<br>Set ApplicationProgram_1.ApplicationVersion<br>Set ApplicationProgram_1 to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|10|Loading the Group Object<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 2’<br>accordingly:)|Set Group Object Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|11|Loading the Address Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 2’<br>accordingly:)|Set Address Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property Reference<br>Load data via direct memory access<br>Load group responser table via property write 8) <br>MaC: PropertyWrite(ID_AddressTable,<br>GROUP_RESPONSER_TABLE)<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|12|Loading the Association-<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 2’<br>accordingly:)|Set Association Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Association Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Association Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|13|Modifying access keys|Set access keys as required|
|14|Disconnect|Disconnect via bus|



- **Partial Download of the ‘application program 1’**

**Nr. Device management** **Description**

**procedure**

MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

8) Applicable for PL110 devices only.

© C i h 2004 2021 A i i S S ifi i 02 01 01 4 f 198

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|
|05|Unload application<br>program 1|<br>Unload Application Program 1<br>MaC: Set ApplicationProgram_1.LoadControl = Unload<br>Wait for segment to be unloaded:<br>MaS: Set ApplicationProgram1.LoadState =Unloaded|
|06|Loading the Application<br>Program 1|_<br>Set Application Program 1 to the LoadState ‘Loading’<br>MaC: Set ApplicationProgram_1.LoadControl = Load<br>MaS: Set ApplicationProgram_1.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set ApplicationProgram_1.LoadControl = Data Relative<br>Allocation<br>Get Application Program 1 base pointer via Property Reference<br>MaC: PropertyRead(ID_ApplicationProgram_1, PID_REFERENCE)<br>MaS:<br>PropertyResponse(ID_ApplicationProgram_1,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful.⇒ Continue at Nr. 7<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_1, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_1,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set ApplicationProgram_1.ApplicationVersion<br>MaC: PropertyWrite(ID_ApplicationProgram_1,<br>PID_PROGRAM_VERSION)<br>Set ApplicationProgram_1 to the LoadState ‘Loaded’<br>MaC: Set ApplicationProgram_1.LoadControl = LoadComplete<br>MaS: Set ApplicationProgram_1.LoadState = Loaded<br>Read and save CRC checksum<br>⇒ Continue at Nr. 12|


© C i h 2004 2021 A i i S S ifi i 02 01 01 48 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|07|Unloading all the following<br>segments|Unload Group Object Table<br>MaC: Set GroupObjectTable.LoadControl = Unload<br>Unload Address Table<br>MaC: Set AddressTable.LoadControl = Unload<br>Unload Association Table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Wait for all segments to be unloaded:<br>MaS: Set GroupObjectTable.LoadState = Unloaded<br>MaS: Set AddressTable.LoadState = Unloaded<br>MaS: Set AssociationTable.LoadState =Unloaded|
|08|Loading the Application<br>Program 1|Set Application Program 1 to the LoadState ‘Loading’<br>MaC: Set ApplicationProgram_1.LoadControl = Load<br>MaS: Set ApplicationProgram_1.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set ApplicationProgram_1.LoadControl = Data Relative<br>Allocation<br>Get Application Program 1 base pointer via Property Reference<br>MaC: PropertyRead(ID_ApplicationProgram_1, PID_REFERENCE)<br>MaS:<br>PropertyResponse(ID_ApplicationProgram_1,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful. This causes an error message of the MaC to<br>the Installer.<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_1, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_1,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set ApplicationProgram_1.ApplicationVersion<br>MaC: PropertyWrite(ID_ApplicationProgram_1,<br>PID_PROGRAM_VERSION)<br>Set ApplicationProgram_1 to the LoadState ‘Loaded’<br>MaC: Set ApplicationProgram_1.LoadControl = LoadComplete<br>MaS: Set ApplicationProgram_1.LoadState = Loaded<br>Read and save CRC checksum|


© C i h 2004 2021 A i i S S ifi i 02 01 01 49 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|09|Loading the Group Object<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 1’<br>accordingly:)|Set Group Object Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|10|Loading the Address Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 1’<br>accordingly:)|Set Address Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property Reference<br>Load data via direct memory access<br>Load group responser table via property write 9) <br>MaC: PropertyWrite(ID_AddressTable,<br>GROUP_RESPONSER_TABLE)<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|11|Loading the Association-<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘application program 1’<br>accordingly:)|Set Association Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Association Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Association Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|12|Modifying access keys|Set access keys as required|
|13|Disconnect|Disconnect via bus|



- **Partial Download of the ‘Group Object Table’**

**Nr. Device management** **Description**

**procedure**

MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

04 Check Manufacturer ID Check if expected Manufacturer ID ==
DeviceObject.PID_MANUFACTURER_ID

05 Unload group object table Unload group object table

MaC: Set GroupObjectTable.LoadControl = Unload
Wait for segment to be unloaded:

MaS: Set GroupObjectTable.LoadState = Unloaded

9) Applicable for PL110 devices only.

© C i h 2004 2021 A i i S S ifi i 02 01 01 0 f 198

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|
|05|Unload group object table|<br>Unload group object table<br>MaC: Set GroupObjectTable.LoadControl = Unload<br>Wait for segment to be unloaded:<br>MaS: Set GroupObjectTable.LoadState =Unloaded|


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|06|Loading the group object<br>table|Set group object table to the LoadState ‘Loading’<br>MaC: Set GroupObjectTable.LoadControl = Load<br>MaS: Set GroupObjectTable.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set GroupObjectTable.LoadControl = Data Relative Allocation<br>Get GroupObjectTable base pointer via P²roperty Reference<br>MaC: PropertyRead(ID_GroupObjectTable, PID_REFERENCE)<br>MaS: PropertyResponse(ID_GroupObjectTable,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful.⇒ Continue at Nr. 7<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set GroupObjectTable.ApplicationVersion<br>MaC: PropertyWrite(ID_ GroupObjectTable,<br>PID_PROGRAM_VERSION)<br>Set Group Object Table to the LoadState ‘Loaded’<br>MaC: Set GroupObjectTable.LoadControl = LoadComplete<br>MaS: Set GroupObjectTable.LoadState = Loaded<br>Read and save CRC checksum<br>⇒ Continue at Nr. 11|
|07|Unloading all the following<br>segments|Unload Address Table<br>MaC: Set AddressTable.LoadControl = Unload<br>Unload Association Table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Wait for all segments to be unloaded:<br>MaS: Set AddressTable.LoadState = Unloaded<br>MaS: Set AssociationTable.LoadState =Unloaded|


© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|08|Loading the Group Object<br>Table|Set GroupObjectTable to the LoadState ‘Loading’<br>MaC: Set GroupObjectTable.LoadControl = Load<br>MaS: Set GroupObjectTable.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set GroupObjectTable.LoadControl = Data Relative Allocation<br>Get Group Object Table base pointer via Property Reference<br>MaC: PropertyRead(ID_GroupObjectTable, PID_REFERENCE)<br>MaS: PropertyResponse(ID_GroupObjectTable,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful. This causes an error message of the MaC to<br>the Installer.<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set GroupObjectTable.ApplicationVersion<br>MaC: PropertyWrite(ID_GroupObjectTable,<br>PID_PROGRAM_VERSION)<br>Set Group Object Table to the LoadState ‘Loaded’<br>MaC: Set GroupObjectTable.LoadControl = LoadComplete<br>MaS: Set GroupObjectTable.LoadState = Loaded<br>Read and save CRC checksum|
|09|Loading the Address Table<br>(For details of the loading<br>process apply the routines<br>of ‘group object table’<br>accordingly)|Set Address Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Group Object Table base pointer via Property Reference<br>Load data via direct memory access<br>Load group responser table via property write 10) <br>MaC: PropertyWrite(ID_AddressTable,<br>GROUP_RESPONSER_TABLE)<br>Set Group Object Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|


10) Applicable for PL110 devices only.

© C i h 2004 2021 A i i S S ifi i 02 01 01 2 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|10|Loading the Association-<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘group object table’<br>accordingly)|Set Association Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Association Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Association Table to the LoadState ‘Loaded’<br>Read and save CRC checksum|
|11|Modifying access keys|Set access keys as required|
|12|Disconnect|Disconnect via bus|



- **Partial Download of the ‘Group Address Table’**

**Nr. Device management** **Description**

**procedure**

MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

04 Check Manufacturer ID Check if expected Manufacturer ID ==
DeviceObject.PID_MANUFACTURER_ID

05 Unload Group Address Unload Group Address Table
Table MaC: Set GroupAddressTable.LoadControl = Unload

Wait for segment to be unloaded:

MaC: Set GroupAddressTable.LoadControl = LoadComplete
MaS: Set GroupAddressTable.LoadState = Unloaded

© C i h 2004 2021 A i i S S ifi i 02 01 01 3 f 198

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|
|05|Unload Group Address<br>Table|<br>Unload Group Address Table<br>MaC: Set GroupAddressTable.LoadControl = Unload<br>Wait for segment to be unloaded:<br>MaC: Set GroupAddressTable.LoadControl = LoadComplete<br>MaS: Set GroupAddressTable.LoadState = Unloaded|


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|06|Loading the Group<br>Address Table|Set Group Address Table to the LoadState ‘Loading’<br>MaC: Set GroupAddressTable.LoadControl = Load<br>MaS: Set GroupAddressTable.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set GroupAddressTable.LoadControl = Data Relative Allocation<br>Get GroupObjectTable base pointer via Property Reference<br>MaC: PropertyRead(ID_ GroupAddressTable, PID_REFERENCE)<br>MaS: PropertyResponse(ID_ GroupAddressTable,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful.<br>⇒ Continue at Nr. 7<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with the<br>stored CRC. If the CRC matches, then MaC shall use differential<br>download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set GroupAddressTable.ApplicationVersion<br>MaC: PropertyWrite(ID_ GroupAddressTable,<br>PID_PROGRAM_VERSION)<br>Set Group Address Table to the LoadState ‘Loaded’<br>MaC: Set GroupAddressTable.LoadControl = LoadComplete<br>MaS: Set GroupAddressTable.LoadState = Loaded<br>Read and save CRC checksum.<br>⇒ Continue at Nr. 10|
|07|Unloading all the following<br>segments|Unload Association Table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Wait for all segments to be unloaded:<br>MaS: Set AssociationTable.LoadState = Unloaded|


© C i h 2004 2021 A i i S S ifi i 02 01 01 4 f 198


-----

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|08|Loading the Group<br>Address Table|Set Group Address Table to the LoadState ‘Loading’<br>MaC: Set Group Address Table.LoadControl = Load<br>MaS: Set Group Address Table.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set Group Address Table.LoadControl = Data Relative Allocation<br>Get Group Address Table base pointer via Property Reference<br>MaC: PropertyRead(ID_Group Address Table, PID_REFERENCE)<br>MaS: PropertyResponse((ID_GroupAddressTable,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful. This causes an error message of the MaC to<br>the Installer.<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with the<br>stored CRC. If the CRC matches, then MaC shall use differential<br>download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set GroupAddressTable.ApplicationVersion<br>MaC: PropertyWrite(ID_ GroupAddressTable,<br>PID_PROGRAM_VERSION)<br>Set GroupAddressTable to the LoadState ‘Loaded’<br>MaC: Set GroupAddressTable.LoadControl = LoadComplete<br>MaS: Set GroupAddressTable.LoadState = Loaded<br>Read and save CRC checksum.|
|09|Loading the Association-<br>Table<br>(For details of the loading<br>process apply the routines<br>of ‘Group Address Table’<br>accordingly)|Set Association Table to the LoadState ‘Loading’<br>Allocate the required memory size<br>Get Association Table base pointer via Property Reference<br>Load data via direct memory access<br>Set Association Table to the LoadState ‘Loaded’<br>Read and save CRC checksum.|
|10|Modifying access keys|Set access keys as required|
|11|Disconnect|Disconnect via bus|



- **Partial Download of the ‘Association Table’**

**Nr. Device management** **Description**

**procedure**

MaC: Management Client, MaS: Managament Server

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

© C i h 2004 2021 A i i S S ifi i 02 01 01 f 198

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|


-----

08 Disconnect Disconnect via bus

© C i h 2004 2021 A i i S S ifi i 02 01 01 6 f 198

|Nr.|Device management<br>procedure|Description<br>MaC: Management Client, MaS: Managament Server|
|---|---|---|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID ==<br>DeviceObject.PID_MANUFACTURER_ID|
|05|Unload association able|<br>Unload association table<br>MaC: Set AssociationTable.LoadControl = Unload<br>Wait for segment to be unloaded:<br>MaS: Set AssociationTable.LoadState = Unloaded|
|06|Loading the association<br>table|Set association table to the LoadState ‘Loading’<br>MaC: Set AssociationTable.LoadControl = Load<br>MaS: Set AssociationTable.LoadState = Loading<br>Allocate the required memory size<br>MaC: Set AssociationTable.LoadControl = Data Relative Allocation<br>Get GroupObjectTable base pointer via Property Reference<br>MaC: PropertyRead(ID_ AssociationTable, PID_REFERENCE)<br>MaS: PropertyResponse(ID_ AssociationTable,PID_REFERENCE)<br>= BaseAddress<br>Base Address is a 4 octet absolute value; if it is zero then allocation<br>was not successful. This causes an error message of the MaC to<br>the Installer.<br>If allocation was successful then loading is continued:<br>Compare CRC checksum:<br>MaC: PropertyRead(ID_ApplicationProgram_2, PID_MCB)<br>MaS: PropertyResponse(ID_ApplicationProgram_2,PID_MCB, Data)<br>The current CRC shall be  responded and shall be compared with<br>the stored CRC. If the CRC matches, then MaC shall use<br>differential download algorithm.<br>Load data via direct memory access<br>if BaseAddress plus allocated memory is lower than FFFFh then<br>MaC: MemoryWrite(BaseAddress, <Data>, Length)<br>if BaseAddress plus allocated memory is higher than FFFFh then<br>MaC: UserMemoryWrite(BaseAddress, <Data>, Length)<br>Set AssociationTable.ApplicationVersion<br>MaC: PropertyWrite(ID_ AssociationTable,<br>PID_PROGRAM_VERSION)<br>Set AssociationTable to the LoadState ‘Loaded’<br>MaC: Set AssociationTable.LoadControl = LoadComplete<br>MaS: Set AssociationTable.LoadState = Loaded<br>Read and save CRC checksum.|
|07|Modifying access keys|Set access keys as required|
|08|Disconnect|Disconnect via bus|


-----

##### 3.5.4 Load Procedure for unload
   - The load procedure shall be connection oriented.

**Nr.** **Device Management** **Description**
**Procedure**

01 Connect Connect via bus

02 Verifying device version Read Device Descriptor Type 0

03 Get access rights Authorize

04 Check Manufacturer ID Check if expected Manufacturer ID = device Manufacturer ID

05 Unload device Set AddressTable.LoadControl = Unload
(For details of the Set AssociationTable.LoadControl = Unload
unloading process refer to Set ObjectTable.LoadControl = Unload
the routines of ‘Unload

MaC: Set ApplicationProgram_2.LoadControl = Unload

Device’ in 3.5.1.3)

MaC: Set ApplicationProgram_1.LoadControl = Unload
Wait until load states == unloaded

06 Disconnect Disconnect via bus

07 Unload IndividualAddress Set SerialNumber_IndividualAddress_Write(FFFFh) via broadcast
Check if SerialNumber_InidividualAddress_Read() == FFFFh (via broadcast)

The manufacturer of the Application Program 1 and the Application Program 2 shall take care that the
device cannot reach a critical state if the load state machine of one or more segments changes from
‘loaded’ to a different state.

#### 3.6 RF bidirectional devices

##### 3.6.1 Introduction
The specification of the functionality and procedures specified below builds the S-Mode interface of
KNX RF bidirectional devices.

This interface is mandatory for all KNX RF bidirectional devices regardless of their Configuration Mode.

##### 3.6.2 Device Identification

###### 3.6.2.1 Introduction

   - Bidirectional device shall

   - support Device Descriptor Type 2 (DD2) as specified in [05], and
   - support the Management Procedure DM_Connect_RCl as specified in [06] to read out DD2.

###### 3.6.2.2 Configuration Procedure

/* Read out connectionless the Device Descriptor Type 2 from the device */
DMP_Connect_RCl(IA, device_descriptor_type = 2)

© C i h 2004 2021 A i i S S ifi i 02 01 01 f 198

|Nr.|Device Management<br>Procedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying device version|Read Device Descriptor Type 0|
|03|Get access rights|Authorize|
|04|Check Manufacturer ID|Check if expected Manufacturer ID = device Manufacturer ID|
|05|Unload device<br>(For details of the<br>unloading process refer to<br>the routines of ‘Unload<br>Device’ in 3.5.1.3)|Set AddressTable.LoadControl = Unload<br>Set AssociationTable.LoadControl = Unload<br>Set ObjectTable.LoadControl = Unload<br>MaC: Set ApplicationProgram_2.LoadControl = Unload<br>MaC: Set ApplicationProgram_1.LoadControl = Unload<br>Wait until load states == unloaded|
|06|Disconnect|Disconnect via bus|
|07|Unload IndividualAddress|Set SerialNumber_IndividualAddress_Write(FFFFh) via broadcast<br>Check if SerialNumber_InidividualAddress_Read() == FFFFh (via broadcast)|


-----

##### 3.6.3 Device individualisation

###### 3.6.3.1 Introduction

   - The Individual Address shall be assigned to bidirectional devices by the procedures specified in

[06]:

   - NM_IndividualAddress_Write2,
   - NM_IndividualAddress_Read and
   - NM_IndividualAddress_SerialNumber_Write2.

##### 3.6.4 Parameter download (RF bidirectional devices)
Parameters shall be accessible in RF bidirectional devices via property services using the function
property PID_PARAMETER as specified in [05].

   - Note that for E-Mode Channels parameters can additionally be contained in the Properties:

Channel 1 Param 101 PID_CHANNEL_01_PARAM

… …

Channel 32 Param 132 PID_CHANNEL_32_PARAM

##### 3.6.5 Device linking
A central Management Client shall use the Property PID_OBJECTLINK[ 11)] with the codes “set link”
(00h) and “delete link” (01h) to add or respectively delete links in devices. Note that these functions
differ from the function CC_Config_Link(Set_Delete_Link) used in the PB-Mode Configuration
Procedure in that Configuration Mode in the device does not need to be active. This means that once the
central Management Client knows a device and has assigned an Individual Address, no installer
interaction is needed to set or delete links.

**Set Link**

/* Procedure to set a link */
DMP_InterfaceObject_Write_R(object_type = Device Object, property = PID_OBJECTLINK, start_index = 1,

noElements = 1, data = [Set Link, Extended Group Address, Group Object Handle])

**Delete Link**

/* Procedure to delete a link */
DMP_InterfaceObject_Write_R(object_type = Device Object, property = PID_OBJECTLINK, start_index = 1,

noElements = 1, data = [Delete Link, Extended Group Address, Group Object Handle])

|Channel 1 Param|101 PID CHANNEL 01 PARAM<br>_ _ _|
|---|---|
|…|…|
|Channel 32 Param|132 PID_CHANNEL_32_PARAM|


Links shall be set, retrieved and deleted in bidirectional devices via property services as specified in the
above procedures. The ETS database shall be extended to include information about the values of the preassigned addresses and the Group Object Handles. The values of the Group Object Handles in ETS shall
be hidden from the installer.

Unidirectional senders shall only have a pre-assigned Group Addresses for sending.

11) The functionality of PID_OBJECTLINK is specified in Chapter 3/5/1 “Resources”.

© C i h 2004 2021 A i i S S ifi i 02 01 01 8 f 198


-----

#### 3.7 RF unidirectional devices

##### 3.7.1 Introduction
   - The specification of the functionality and procedures specified below builds the S-Mode
interface of KNX RF unidirectional devices.

This interface is mandatory for all KNX RF unidirectional devices regardless of their Configuration
Mode.

##### 3.7.2 Device Identification

###### 3.7.2.1 Introduction

   - A KNX RF Unidirectional device shall

   - support Device Descriptor Type 2 as specified in [05], and
   - support the Management Procedure DM_DeviceDescriptor_InfoReport as specified in [06] to
spontaneously announce its Device Descriptor value, upon a manufacturer-specific user action.

###### 3.7.2.2 Configuration Procedure

/* The device reports on system broadcast communication mode */
/* on its Device Descriptor Type 2 value. */
/* This Management Procedure provides the received with the value of */
/* the KNX Serial Number of the device, its Individual Address and its DD2 value. */
DMP_DeviceDescriptor_InfoReport(descriptor_type = 2, device_descriptor, KNX Serial Number)

###### 3.7.2.3 Calculation of Group Addresses
ETS or a tool shall be able to conclude the values of the pre-assigned extended Group Addresses from the
Device Descriptor Type 2.

The calculation of Group Addresses assigned to output Group Objects for transmit only device is done
starting from 0001h using the object sequence defined in the E-Mode Channels (Index in the Datapoint
list table) and the E-Mode Channel number in the DD2. Even if an input Group Object is defined in a
unidirectional sensor a Group Address has to be assigned to it (see Datapoint number 3 in example
below).

**EXAMPLE 16 of DD2 and GA calculation**

   - Device Descriptor 2

**Field** **Value** **Comments**

Manufacturer 09h Manufacturer specific

Device Type 3000h Manufacturer specific

Version 10h Manufacturer specific

Link mode 00 No link management service supported

LT_Base 3Fh no active local selector

Channel Info 1 0008h 1 channel CH_PB_Scene

Channel Info 2 000Eh 1 channel CH_Switch_Dimmer_Toggle

Channel Info 3 0000h No additional channel

Channel Info 4 0000h No additional channel

© C i h 2004 2021 A i i S S ifi i 02 01 01 9 f 198

|Field|Value|Comments|
|---|---|---|
|Manufacturer|09h|Manufacturer specific|
|Device Type|3000h|Manufacturer specific|
|Version|10h|Manufacturer specific|
|Link mode|00|No link management service supported|
|LT_Base|3Fh|no active local selector|
|<br>Channel Info 1|0008h|1 channel CH_PB_Scene|
|Channel Info 2|<br>000Eh|<br> 1 channel CH_Switch_Dimmer_Toggle|
|Channel Info 3|<br>0000h|<br> No additional channel|
|Channel Info 4|0000h|No additional channel|


-----

   - Group Addresses

**GO number** **Object name** **Pre-assigned Group Address**

1 Scene Activate 0001h

2 Scene Learn 0002h

_3_ _Info OnOff_ _0003h_
_(not used for transmit only device)_

4 OnOff 0004h
5 DimmingCtrl 0005h

##### 3.7.3 Device individualisation

###### 3.7.3.1 Introduction
Unidirectional devices shall always use the Individual Address 05FFh. (See [05] clause “Individual
Addresses”: 05h as medium dependent default Subnetwork Address for RF and FFh as Device Address
for unregistered devices.)

##### 3.7.4 Parameter view (RF unidirectional devices)
Unidirectional devices compliant with the Easy PB-Mode Profile may send the current state of parameters
within the link procedure as described in clause 5.4.4.9.

Unidirectional devices compliant with the S-Mode Profile may also send the current state of parameters
during the Link Procedure as specified in 5.4.4.9.

   - DD0, DD2 using an A_DeviceDescriptor_InfoReport in broadcast communication mode as
specified in DM_DeviceDescriptor_InfoReport (see [06]).

   - parameter blocks (when existing) using action Channel_Param_Response in Property
PID_PB_CONFIG.

##### 3.7.5 RF KNX requirements for ETS

###### 3.7.5.1 General requirements
ETS is the PC based software tool for configuration (project design and commissioning) of KNX certified
devices released by the KNX Association itself. As such it is very desirable that the RF KNX system and
all of its components may be handled by ETS.

As the RF KNX system differs from TP1 and PL100 in many aspects (such as frame format, Property
access services and configuration), ETS needs the according adaptations. The RF KNX requirements for
ETS adaptations are therefore described in the following clauses.

Note that ETS is not required to provide any runtime functionality for RF.

###### 3.7.5.2 Product Administration
No adaptations are necessary.

###### 3.7.5.3 Project Administration
No adaptations are necessary.

###### 3.7.5.4 Project Design

3.7.5.4.1 Project Data
An additional option “Radio Frequency” shall be foreseen as medium type.

© C i h 2004 2021 A i i S S ifi i 02 01 01 60 f 198

|GO number|Object name|Pre-assigned Group Address|
|---|---|---|
|1|Scene Activate|0001h|
|2|Scene Learn|0002h|
|_3 _|_Info OnOff_|_0003h_<br>_(not used for transmit only device)_|
|4|OnOff|0004h|
|5|DimmingCtrl|0005h|


-----

3.7.5.4.2 Building View
Like in TP/PL, all RF products can be inserted into the project using the Product Finder. Transmit-only
devices can not be programmed via RF. As Individual Address, the Extended Address format shall be
supported. Transmit-only devices on RF shall have the default Individual Address 05FFh.

For assigning an Individual Address to a device see NM_IndividualAddress_Write2 in [06].

For reading out an Individual Address see NM_DomainAndSerialNumber_Read in [06].

3.7.5.4.3 Group Address View
RF KNX does not use plain Domain Addresses as TP/PL, but uses Extended Addresses instead (see
clause “Extended Group Addresses” in [01]). As it is not possible to assign an Extended Address to
transmit-only devices, these Extended Addresses have to be pre-assigned in the transmit-only device. The
Extended Addresses contain the device’s KNX Serial Number and are therefore unique for each Group
Object of every device. ETS shall be able to conclude the values of the pre-assigned Extended Group
Addresses from the information contained in the Device Descriptor Type 2 (E-Mode Channel Codes and
application ID) and from the information in the product database.

By reading out the devices, extended source Group Addresses are automatically linked to the product’s
corresponding Group Objects in the Building View and inserted in the Group Address view. In the Group
Address view, they can be structured optically (main group, middle group) for easier administration by
the project designer. Structuring, however, does not have any influence on the address itself.

3.7.5.4.4 Linking
The Extended Addresses can be linked to input Group Objects by drag&drop (like TP/PL). All devices
with input Group Objects have to be programmed hereafter (see Commissioning). Note that Extended
Group Addresses force a 1-to-n sender-to-receiver relationship.

3.7.5.4.5 Topology View
For Area and Line, "Radio Frequency" shall be foreseen as additional option for the medium type.

3.7.5.4.6 Retransmitter programming
A Retransmitter can be used in case the communication between two or more devices is blocked. The
Retransmitter receives all telegrams originating from a sender and resends these received telegrams.
Filtering telegrams is optional in the retransmitter. Filter Tables can be generated either by a "push button
teach-in" procedure or by programming with ETS.

In order to generate the Filter Table within ETS, all Extended Addresses have to be assigned to the
Retransmitter Group Objects by the project designer. This should preferably be done by drag&drop.

3.7.5.4.7 Media Coupler Programming
In order to connect the KNX RF system to a KNX TP/PL installation or to connect several KNX RF
systems via a KNX TP/PL Backbone, a Media Coupler can be used. As the frames are very different
between KNX TP/PL on one hand and KNX RF on the other hand, the frames have to be translated,
especially the Extended Addresses have to be associated to Group Addresses. This association can either
be done automatically or manually by the project designer.

The automatic translation table should be generated by ETS automatically with a "Generate automatic
translation table" command.

NOTE The “automatic translation” is specified in [01] under the clause “The Layer-2 of an RF-TP Media Coupler”.

For manual translation, the project designer should be able to assign KNX Group Addresses and
Individual Addresses to the according Extended Addresses by drag&drop. Therefore, the Media Coupler
needs to have the Group Objects (RF1, TP/PL1, RF2, TP/PL2... RF64, TP/PL64).

The translation table is downloaded into the Media Coupler via the wired medium, i.e. TP or PL.

© C i h 2004 2021 A i i S S ifi i 02 01 01 61 f 198


-----

###### 3.7.5.5 Commissioning and test

3.7.5.5.1 General

3.7.5.5.1.1 Property Access
ETS shall be able to handle all Properties necessary for management on RF.

It shall be able to access the Properties PID_OBJECT_VALUE, PID_OBJECTLINK,
PID_APPLICATION, PID_PARAMETER and PID_OBJECTADDRESS as specified in [04] and [05].

3.7.5.5.1.2 Frame Format
ETS shall be able to handle the RF KNX frame format.

3.7.5.5.1.3 Other Commissioning/Testing services
Other Commissioning/Test services of ETS that are not described in the following clauses shall work in
the same way as in TP/PL.

3.7.5.5.1.4 Duty Cycle Control
RF devices using the 868 MHz band are restricted to a duty cycle of 1 %, which means they are not
allowed to transmit data for more than 36 s per hour. During commissioning devices and testing
installations, ETS should not exceed this duty cycle. However, according to the current standardisation
situation, ETS is not obliged to automatically stop transmitting data, when this limit is exceeded.

3.7.5.5.2 Download
When downloading the configuration into the device, the commissioner shall be able to choose either to
download linked Extended Addresses or parameters or both. The duty cycle restrictions are especially
critical when downloading application programs into the devices. Therefore the download of application
programs is not mandatory for the devices. The possibility of downloading application programs should
be foreseen, nevertheless.

3.7.5.5.3 Device Information Read-Out
Additional to TP/PL device information, ETS shall be able to read out Device Descriptor 2 information.

###### 3.7.5.6 Manufacturer Tool
"Radio Frequency" shall be foreseen as new option for the medium type op products.

The available BCU list shall be extended with “RF BCU”.

#### 3.8 RF Bidirectional Battery Driven devices (BiBat)
   - The speciality of BiBat Slaves is that their receivers are not operating all the time due to batterylife-time. For this reason BiBat defines a synchronous timing system with dedicated receivetime-slots for the BiBat Slaves.

   - At runtime (after configuration) the BiBat Master has to operate the timing-system. So it is the
task of the BiBat Master to install this synchronous timing system.

   - If in S-Mode a central Management Client accesses BiBat devices it wants to configure links
and set parameters.

   - Thereby, the following has to be observed.

© C i h 2004 2021 A i i S S ifi i 02 01 01 62 f 198


-----

- Links TO BiBat Slaves are not possible (because of the time constrains of the timing-system). This
communication only works via the BiBat Master.

- Links FROM BiBat Slaves to standard-KNX RF devices are fully according to standard KNX RF.
For installing these links the BiBat Slave shall be set into asynchronous configuration-mode
(receiver is on during this period) and then the configuration is identical (services, procedure) to
S-Mode configuration of KNX RF devices as specified in clause 2.5.

For setting parameters the same applies, this is set the BiBat Slave into the asynchronous configurationmode and then set parameters identically to S-Mode configuration of KNX RF devices.

#### 3.9 Configuration Procedures for KNX IP devices

##### 3.9.1 Network Configuration and general Device Configuration requirements for KNX IP

###### 3.9.1.1 Assignment of Individual Address

   - There are three possible system constellations to be considered.

   - (A)


IP

|Col1|Col2|Col3|
|---|---|---|
||||
|**ETS**|**ETS**|**ETS**|
||||


   - (B)

IP

**ETS**

KNX TP

NOTE 6 User decision between direct connection via KNXnet/P Device Management or via KNXnet/IP Tunnelling. Default: direct
connection via KNXnet/P Device Management.

© C i h 2004 2021 A i i S S ifi i 02 01 01 63 f 198


-----

   - (C)

IP

**ETS**

**USB or RS232**

KNX TP
```
             Legend:

```
KNXnet/IP Tunneling connection KNX IP device

KNXnet/IP Device Management connection KNX TP device

IP network KNXnet/IP router

KNX subnetwork

**Figure 6 – System constellation A, B, and C**

For the assignment of an Individual Address to a KNX IP device ETS SHALL implement KNXnet/IP
Routing to ensure that the existing KNX Network Management Procedures can be used if other means of
accessing the KNX network, e.g. USB, RS232, or KNXnet/IP Tunnelling server, are not available.

   - This approach covers

   - that Programming Mode is active in only one device independent of the fact on which medium
it is situated;

   - that all system constellations (A), (B) or (C) are covered with the same procedure;

   - that devices can be selected by activating their Programming Mode;

   - that the Individual Address of a device can be changed (overwritten).

ETS SHALL offer an option for the assignment of an Individual Address using the MAC address of a
device. ETS SHALL ask for the MAC address, then SEARCH for the corresponding device, and finally
assign the Individual Address using KNXnet/IP Device Management. Alternatively, ETS may first
SEARCH for KNX IP devices and then present a list with IP address, MAC address, and friendly name. If
the list is empty the user may enter the IP address and a port number, which also covers NAT access
situations.

###### 3.9.1.2 Assignment of KNXnet/IP Routing Multicast Address

   - ETS SHALL set the KNXnet/IP Routing Multicast Address in all devices that are part of one
installation.

This ensures that all devices of one installation use the same KNXnet/IP Routing Multicast Address. If an
application entry provides a parameter for setting a KNXnet/IP Routing Multicast Address then this
parameter value SHALL be overwritten by ETS with the correct value for the installation.

© C i h 2004 2021 A i i S S ifi i 02 01 01 64 f 198


-----

###### 3.9.1.3 Download of Configuration:
ETS SHALL use KNXnet/IP Device Management with the cEMI Transport Layer services
(cEMI T_Data_Connected.req, cEMI T_Data_Connected.ind, cEMI T_Data_Individual.req, and
cEMI T_Data_Individual.ind) for point-to-point download of device configurations.

If a point-to-point connection is not possible ETS MAY configure a KNX IP device via the existing KNX
Subnetworks, e.g. via KNX TP1 and access via USB or RS232 interface.

###### 3.9.1.4 Configuration Procedures using IP System Broadcast
This clause lists Configuration Procedures using IP system broadcast.

3.9.1.4.1 Initial configuration without backbone security
Here, there are two cases.

(a) The MaS and the KNXnet/IP Router (in the case where the MaC is behind an KNXnet/IP
Router) are known to support IP system broadcast from the MaC’s product repository. This has
a product data flag “SupportsIpSystemBroadcast” to declare this.
(b) It is unknown if the MaS and the KNXnet/IP Router (in the case where the MaC behind an
KNXnet/IP Router) support IP system broadcast.

Case (a)

1. If the KNX Serial Number is not (yet) known, the MaC executes
NM_Read_SerialNumber_By_ProgrammingMode ([06]).
Repeat this until there is an answer or the user aborts the procedure.
2. Execute NM_DomainAddressSerialNumber_Write ([06]). If the MaS is configured to use Data
Security, use NM_DomainAddressSerialNumber_Secure_Write ([06]) with 4 octet DoA
instead.
3. Execute NM_IndividualAddress_SerialNumber_Write ([06]).
4. Continue with device P2P configuration.

Case (b)

1. Also in this case, the procedure in case (a) might work because the devices may in fact support
IP System broadcast even if this is not known to the MaC. In addition, the MaC shall do an
A_IndividualAddress_Read in step 1 alternating to the A_SystemNetworkParameter_Read.

2. If there is an answer to A_IndividualAddress_Read but not to
A_SystemNetworkParameter_Read this means that there is a device in which Programming
_Mode is “enabled” and it is already in the correct domain, so the rest of the procedure can be_
skipped and the procedure is regarded as success.

NOTE 7 The MaC shall warn the MaC user if in case (b) the multicast address is not equal to the system
setup multicast address. Programming devices may work only if the MaC has an IP connection to the KNX network,
not via TP1.

3.9.1.4.2 Initial configuration with backbone security
Since the MaS and any KNXnet/IP Router support the security modular Profile it is known that
A_SystemNetworkParameter_Read and A_DomainAddressSerialNumber_Write are supported. Therefore
the procedure here is simpler.

1. If the KNX Serial Number is not (yet) known, the MaC executes
NM_Read_SerialNumber_By_ProgrammingMode ([06]).
Repeat this until there is an answer or the user aborts the procedure.
2. The MaC looks up the current Tool Key, or the FDSK for ex-factory devices, based on the KNX
Serial Number.

© C i h 2004 2021 A i i S S ifi i 02 01 01 6 f 198


-----

3. Execute NM_DomainAddressSerialNumber_Secure_Write ([06]) with the KNX Serial Number,
the Tool Key/FDSK and the 21 octet Domain Address, consisting of the KNXnet/IP routing
multicast address, the routing security version, and the Backbone Key
4. Execute NM_IndividualAddress_SerialNumber_Secure_Write (not yet defined, not in scope of
this document)

5. Continue with device P2P configuration (not in scope of this document)/

##### 3.9.2 Configuration Procedures for mask 5705h

###### 3.9.2.1 General
The configuration of BIM M112 based devices is highly configurable using the ETS® mechanism of
Load Controls. The following Configuration Procedure is therefore an example for the configuration of
the Resources of mask 5705h (being BIM M112 based) devices.

###### 3.9.2.2 Default Full Download Procedure

3.9.2.2.1 Inputs

**_Constants_**
OIDX_ADDRESS_TABLE = 1 This is the index of the Interface Object holding the
Group Address Table.
OIDX_ASSOCIATION_TABLE = 2 This is the index of the Interface Object holding the
Group Object Association Table.
OIDX_APPLICATION_PROGRAM = 3 This is the index of the Interface Object holding the
Application Program.

**_Product data_**
GrAT.start: The start address of the Group Address Table..
AscT.start: Start address of the Group Object Association Table. May be overwritten by
the tool software if dynamic table management is enabled (Group Object
Association Table located directly behind Group Address Table).
UserMem.start: The start address of the User Memory. This is not to be mistaken as RAM.
User Memory is a manufacturer specific memory area that can be created in
the product database with the manufacturer tool.
UserMem.length: The length of the user memory block. This is not limited within the 16-bit
address space.
EEProm.start: The start address of the data block in EEProm space. This is the default area
that contains the application program, parameters, and tables.
EEProm.length: The length of a data block in EEProm space. It is possible to define multiple
data blocks with different length.

**_Application specific_**
SystemParam1: Manufacturer Code, Device Type, Version, Hardware Type, EEPROM
check limit, Software PEI-Type,
SystemParam2: Routing counter, INAK and BUSY retransmit limits, Configuration
Descriptor, Pointer to the Group Object Association Table, Pointer to the
Group Object Table, Pointer to the User Initialisation Routine, Pointer to the
User Program, pointer to the User save Program.
ProgramData: Group Address Table, Group Group Object Association Table, user program
code and parameters
GrAT.length: The length of the Group Address Table, according the number of GAs

© C i h 2004 2021 A i i S S ifi i 02 01 01 66 f 198


-----

assigned by the user.
AscT.length: The length of the Group Object Association Table, according to the number
of group address associations configured by the user.
Merge Procedures: Manufacturer/application specific load control sequences (fragments of a
load procedure) to be integrated into the default load procedure at the
specified merge points. The following merge Ids are defined for this
procedure:
1 = application program stack segment definition
2 = application program memory allocation
3 = loading of PEI program

**_From user_**
IA: Individual Address of the Management Server (device) to be configured.

3.9.2.2.2 Remote Configuration Procedure

/* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)
/* Check that the hardware type matches the given value in the product data. */
DMP_Identify_RCo2(Manufacturer Code, Hardware Type)
/* Unload the Application Program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 04h})
/* Unload the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ADDRESS_TABLE,

data = {event = 04h})
/* Unload the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 04h})
/* Start loading the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ADDRESS_TABLE,

data = {event = 01h})
/* Allocate the memory for the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ ADDRESS_TABLE,

data = {event = 03h, segment_type = 00h, start_address = GrAT.start, length = GrAT.length,
access_attributes = FFh, memory_type = 03h, memory_attributes = 80h})
/* Write the Group Address Table */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = GrAT.start, deviceEndAddress = GrAT.start + GrAT.length, data = from ProgramData)
/* Define the absolute task segment for the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ ADDRESS_TABLE,

data = {event = 03h, segment_type = 02h, start_address = GrAT.start, peitype=00h, appl_id=0000/0000/00})
/* Complete the loading of the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ ADDRESS_TABLE,

data = {event = 02h})
/* Start loading the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 01h})
/* Allocate the memory for the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 03h, segment_type = 00h, start_address = AscT.start, length = AscT.length, access_attributes
= FFh, memory_type = 03h, memory_attributes = 80h})
/* Write the Group Object Association Table */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = AscT.start, deviceEndAddress = AscT.start + AscT.length, data = from ProgramData)
/* Define the absolute task segment for the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 03h, segment_type = 02h, start_address = AscT.start, peitype=00h, appl_id=0000/0000/00})

© C i h 2004 2021 A i i S S ifi i 02 01 01 6 f 198


-----

/* Complete the loading of the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 02h})
/* Start loading the application program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 01h})
/* Allocate the user memory for the application program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ APPLICATION_PROGRAM,

data = {event = 03h, segment_type = 00h, start_address = UserMem.start, length = UserMem.length,
access_attributes = 00h, memory_type = 02h, memory_attributes = 00h})
/* Write the user memory */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = UserMem.start, deviceEndAddress = UserMem.start + UserMem.length, data = from
ProgramData)
/* Call merge procedure for application program stack segment definition, if present */
If (defined( Merge Procedure(MergeId=1)) Call Merge Procedure(MergeID=1)
Else
/* Define the absolute stack segment for the application program */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ APPLICATION_PROGRAM,

data = {event = 03h, segment_type = 01h, start_address = UserMem.start + UserMem.length + 1, length =
0001h, access_attributes = 00h, memory_type = 02h, memory_attributes = 00h})
Endif
/* Call merge procedure for application program memory allocation, if present */
If (defined( Merge Procedure(MergeId=2)) Call Merge Procedure(MergeID=2)
Else
/* Allocate the memory for the parameters and application program code. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ APPLICATION_PROGRAM,

data = {event = 03h, segment_type = 00h, start_address = EEProm.start, length = EEProm.length,
access_attributes = FFh, memory_type = 03h, memory_attributes = 80h})
Endif
/* Write the parameters and application program code */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = EEProm.start, deviceEndAddress = EEProm.start + EEProm.length, data = from
ProgramData)
/* Define the absolute task segment for the parameters and application program code */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ APPLICATION_PROGRAM,

data = {event = 03h, segment_type = 02h, start_address = EEProm.start, peitype= Software PEI-Type from
SystemParam1 appl_id= Manufacturer Code, Device Type, Version from SystemParam1})
/* Complete the loading of the application program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 02h})
/* Call merge procedure for application program 2 (PEI program), if present */
If (defined( Merge Procedure(MergeId=3)) Call Merge Procedure(MergeID=3)
Endif
/* Restart the device. */
DMP_Restart_R_Co()

3.9.2.2.3 Local EMI1/EMI2/cEMI
No Configuration Procedures are specified for downloading through an EMI1 or an EMI2 interface.
Downloading through a cEMI interface (KNXnet/IP Tunnelling) is not specified either.

© C i h 2004 2021 A i i S S ifi i 02 01 01 68 f 198


-----

###### 3.9.2.3 Default Application Unload Procedure

3.9.2.3.1 Inputs
See 3.9.2.2.1.

3.9.2.3.2 Remote Configuration Procedure

/* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)
/* Unload the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ADDRESS_TABLE,

data = {event = 04h})
/* Unload the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 04h})
/* Unload the Application Program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 04h})
/* Unload the PEI Program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_PEI_PROGRAM,

data = {event = 04h})
/* Restart the device. */
DMP_Restart_R_Co()

3.9.2.3.3 Local EMI1/EMI2/cEMI
No Unload Procedures are specified for downloading through an EMI1 or an EMI2 interface. Unloading
through a cEMI interface (KNXnet/IP Tunnelling) is not specified either.

###### 3.9.2.4 Default Partial Download Procedure

3.9.2.4.1 Inputs
See 3.9.2.2.1

Additional input from user: Partial Download Type (Parameters and/or Group Addresses).

3.9.2.4.2 Remote Configuration Procedure

   - This is generated from the complete download procedure by applying the following
transformations.

- Remove all UNLOAD(OIDX_APPLICATION_PROGRAM) and
UNLOAD(OIDX_PEI_PROGRAM) load controls.

- If the download does not include the group communication part.

   - Remove all load controls referring to the Group Address Table or the Group Object Association
Table Load State Machine.
   - Remove all Group Address Table and Group Object Association Table segment allocations

- Change all OIDX_APPLICATION_PROGRAM or OIDX_PEI_PROGRAM segment allocations to
memory writes (absolute data or stack segments in EEPROM only, all others are simply ignored).

/* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)
/* Check that the hardware type matches the given value in the product data. */
DMP_Identify_RCo2(Manufacturer Code, Hardware Type)
/* If the download does include the group communication part. */
If (Partial Download Type & Group Addresses)
/* Unload the Group Address Table. */

© C i h 2004 2021 A i i S S ifi i 02 01 01 69 f 198


-----

DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ADDRESS_TABLE,

data = {event = 04h})
/* Unload the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 04h})
/* Start loading the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ADDRESS_TABLE,

data = {event = 01h})
/* Allocate the memory for the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ ADDRESS_TABLE,

data = {event = 03h, segment_type = 00h, start_address = GrAT.start, length = GrAT.length,
access_attributes = FFh, memory_type = 03h, memory_attributes = 80h})
/* Write the Group Address Table */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = GrAT.start, deviceEndAddress = GrAT.start + GrAT.length, data = from ProgramData)
/* Complete the loading of the Group Address Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ ADDRESS_TABLE,

data = {event = 02h})
/* Start loading the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 01h})
/* Allocate the memory for the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 03h, segment_type = 00h, start_address = AscT.start, length = AscT.length, access_attributes
= FFh, memory_type = 03h, memory_attributes = 80h})
/* Write the Group Object Association Table */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = AscT.start, deviceEndAddress = AscT.start + AscT.length, data = from ProgramData)
/* Complete the loading of the Group Object Association Table. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_ASSOCIATION_TABLE,

data = {event = 02h})
Endif

/* If the download does include the parameters part. */
If (Partial Download Type & Parameters)
/* Start loading the application program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 01h})
/* Write the parameters and application program code */
DMP_MemWrite_RCoV(flags = data located in data block & verify mode enabled, dataBlockStartAddress = 0,

deviceStartAddress = EEProm.start, deviceEndAddress = EEProm.start + EEProm.length, data = from
ProgramData)
/* Complete the loading of the application program. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM,

data = {event = 02h})
/* Call merge procedure for application program 2 (PEI program), if present */
If (defined( Merge Procedure(MergeId=3)) Call Merge Procedure(MergeID=3)
Endif
Endif

/* Restart the device. */
DMP_Restart_R_Co()

© C i h 2004 2021 A i i S S ifi i 02 01 01 0 f 198


-----

##### 3.9.3 Configuration Procedures for mask 57B0h

###### 3.9.3.1 Merge points
The support of Mask 57B0h devices in the Management Client (ETS) shall foresee the support of merge
points, which shall be used to integrate application specific Management Procedures into the default
Configuration Procedures.

**Legend**

**Symbol Description**

O The merge point is optional.

M The merge point is mandatory.

The following MergeIDs are defined for this Mask 57B0h.

**MergeID O/M Description**

1 O This is used for a complete download before any modifying action is taken. A
typical use is to verify some Properties or the state of the device.

2 M This is executed just after switching the Application Program 1 Load State
Machine to Loading. It is expected to contain the necessary segment
allocation:

DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_APPLICATION_PROGRAM_1, data = {event = 0Bh, length, mode, fill})
Additionally, a Property Value may be written for subsegmentation:

DMP_InterfaceObjectWrite_RCo(object_index=_APPLICATION_PROGRA
M_1, PID= PID_MCB_TABLE, start_index, element_count, data).
For Partial Download it is essential, that bit 0 of the mode octet is 0 (do not fill)
at least if parameters are available.

3 M This is executed just after switching the Application Program 2 Load State
Machine to Loading. It is expected to contain the necessary segment
allocation:

DMP_LoadStateMachineWrite_R_Co_IO(object_index =
OIDX_APPLICATION_PROGRAM_2, data = {event = 0Bh, length, mode,
fill})
Additionally, a Property Value may be written for subsegmentation:

DMP_InterfaceObjectWrite_RCo(object_index=_APPLICATION_PROGRA
M_2, PID= PID_MCB_TABLE, start_index, element_count, data).
For Partial Download it is essential, that bit 0 of the mode octet is 0 (do not fill)
at least if parameters are available.

4 M This is executed after all segments are allocated. It is expected to contain load
controls necessary to write the Application Program data including parameters
for Application Program 1. Typically, this will be a DMP_MemWrite_RCoV.

5 M This is executed after all segments are allocated. It is expected to contain load
controls necessary to write the Application Program data including parameters
for Application Program 2. Typically, this will be a DMP_MemWrite_RCoV.

6 O This is executed after all Load State Machines are switched to Loaded. A
typical use is to write additional parameters via Properties that are accessible
only after loading the Application Program.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 198

|Symbol|Description|
|---|---|
|O|The merge point is optional.|
|M|The merge point is mandatory.|

|MergeID|O/M|Description|
|---|---|---|
|1|O|This is used for a complete download before any modifying action is taken. A<br>typical use is to verify some Properties or the state of the device.|
|2|M|This is executed just after switching the Application Program 1 Load State<br>Machine to Loading. It is expected to contain the necessary segment<br>allocation:<br>DMP_LoadStateMachineWrite_R_Co_IO(object_index = OIDX_-<br>APPLICATION_PROGRAM_1, data = {event = 0Bh, length, mode, fill})<br>Additionally, a Property Value may be written for subsegmentation:<br>DMP_InterfaceObjectWrite_RCo(object_index=_APPLICATION_PROGRA<br>M_1, PID= PID_MCB_TABLE, start_index, element_count, data).<br>For Partial Download it is essential, that bit 0 of the mode octet is 0 (do not fill)<br>at least if parameters are available.|
|3|M|This is executed just after switching the Application Program 2 Load State<br>Machine to Loading. It is expected to contain the necessary segment<br>allocation:<br>DMP_LoadStateMachineWrite_R_Co_IO(object_index =<br>OIDX_APPLICATION_PROGRAM_2, data = {event = 0Bh, length, mode,<br>fill})<br>Additionally, a Property Value may be written for subsegmentation:<br>DMP_InterfaceObjectWrite_RCo(object_index=_APPLICATION_PROGRA<br>M_2, PID= PID_MCB_TABLE, start_index, element_count, data).<br>For Partial Download it is essential, that bit 0 of the mode octet is 0 (do not fill)<br>at least if parameters are available.|
|4|M|This is executed after all segments are allocated. It is expected to contain load<br>controls necessary to write the Application Program data including parameters<br>for Application Program 1. Typically, this will be a DMP_MemWrite_RCoV.|
|5|M|<br>This is executed after all segments are allocated. It is expected to contain load<br>controls necessary to write the Application Program data including parameters<br>for Application Program 2. Typically, this will be a DMP_MemWrite_RCoV.|
|6|O|<br>This is executed after all Load State Machines are switched to Loaded. A<br>typical use is to write additional parameters via Properties that are accessible<br>only after loading the Application Program.|


-----

|MergeID|O/M|Description|
|---|---|---|
|7|O|This is executed immediately before the final Restart/Disconnect. If differential<br>download is supported, this part should contain LoadImage records for the<br>MCB (memory control block) tables (for Application Program 1: Interface<br>Objects 1 to 4, for Application Program 2: Interface Object 5)|


###### 3.9.3.2 Load Control implementation
The following table gives the implementation of the used “Load Controls”.

**Load Control** **Implementation** **Remarks**

LdCtrlConnect DM_Connect(flags=0) This load control will be ignored if
DM_Authorize(flags=0, a connection is already
key=project_key) established.

Authorization is performed in the
form DM_Authorize2_RCo [12)].

LdCtrlDisconnect DM_Disconnect(flags=0) ETS may ignore this load control
if it plans to access the device
immediately again.

LdCtrlRestart DM_Restart(flags=0)

LdCtrlUnload DM_LoadStateMachineWrite(event= In all System B load procedures,
Unload) Interface Object addressing is
Invalidate cached base pointer done via Object Index.

LdCtrlLoad DM_LoadStateMachineWrite(event=
Load)
Invalidate cached base pointer

LdCtrlLoadCompleted DM_LoadStateMachineWrite(event=
LoadCompleted)

LdCtrlRelSegment DM_LoadStateMachineWrite(event=
AllocRelSegment [13)])
Invalidate cached base pointer

LdCtrlWriteRelMem If base pointer not yet determined
DM_InterfaceObjectRead(PID_TABLE_REFERENCE)
DM_MemWrite(...)/DM_UserMemWr
ite(...) depending on address

LdCtrlLoad- If base pointer not yet determined
ImageRelMem

DM_InterfaceObjectRead(PID_TAB
LE_REFERENCE)
DM_MemRead(...)/DM_UserMemR
ead(...)depending on address

12) In [06] clause 3.5.2, System B is not listed in the paragraph with the Profiles. That indication is however
informative.. Please refer to [01] to read which Management Procedures are mandatory for which Profile.
13) In [06] clause 3.28.3.4 the LSM event is listed.

© C i h 2004 2021 A i i S S ifi i 02 01 01 2 f 198

|Load Control|Implementation|Remarks|
|---|---|---|
|LdCtrlConnect|DM_Connect(flags=0)<br>DM_Authorize(flags=0,<br>key=project_key)|This load control will be ignored if<br>a connection is already<br>established.<br>Authorization is performed in the<br>form DM_Authorize2_RCo12).|
|LdCtrlDisconnect|DM_Disconnect(flags=0)|<br>ETS may ignore this load control<br>if it plans to access the device<br>immediately again.|
|LdCtrlRestart|DM_Restart(flags=0)||
|LdCtrlUnload|<br>DM_LoadStateMachineWrite(event=<br>Unload)<br>Invalidate cached base pointer|In all System B load procedures,<br>Interface Object addressing is<br>done via Object Index.|
|LdCtrlLoad|DM_LoadStateMachineWrite(event=<br>Load)<br>Invalidate cached base pointer||
|LdCtrlLoadCompleted|DM_LoadStateMachineWrite(event=<br>LoadCompleted)||
|LdCtrlRelSegment|DM_LoadStateMachineWrite(event=<br>AllocRelSegment13)) <br>Invalidate cached base pointer||
|LdCtrlWriteRelMem|If base pointer not yet determined<br>     DM_InterfaceObjectRead(PID_-<br>TABLE_REFERENCE)<br>DM_MemWrite(...)/DM_UserMemWr<br>ite(...) depending on address||
|LdCtrlLoad-<br>ImageRelMem|If base pointer not yet determined<br>DM_InterfaceObjectRead(PID_TAB<br>LE_REFERENCE)<br>DM_MemRead(...)/DM_UserMemR<br>ead(...)depending on address||


-----

|Load Control|Implementation|Remarks|
|---|---|---|
|LdCtrlWriteProp|DM_InterfaceObjectWrite(...)||
|LdCtrlReadProp|<br>DM_InterfaceObjectRead(...)||
|LdCtrlCompareProp|<br>DM_InterfaceObjectVerify(...)||


###### 3.9.3.3 Input
System B requires the definition of fixed constants for the Object Indexes. ETS will access these Interface
Objects at these Indexes without checking the Interface Object Type. If the AP2 is not used, that the
Interface Object shall still be there. The Load State shall then be “Unloaded”.

**Constants**

OIDX_ADDRESS_TABLE = 1 This is the index of the Interface Object holding
the Group Address Table.
OIDX_ASSOCIATION_TABLE = 2 This is the index of the Interface Object holding
the Association Table.
OIDX_GROUPOBJECT_TABLE = 3 This is the index of the Interface Object holding
the Group Object Table.
OIDX_APPLICATION_PROGRAM_1 = 4 This is the index of the Interface Object holding
the Application Program 1.
OIDX_APPLICATION_PROGRAM_2 = 5 This is the index of the Interface Object holding
the Application Program 2.

**Application specific**

GrAT.length: The length of the Group Address Table, according the number of GAs
assigned by the user.
AscT.length: The length of the Group Object Association Table, according to the number of
Group Address associations configured by the user.
GrObjT.length: The length of the Group Object Table, according to the number of Group
Objects.

**From device**

GrAT.start: The base address of the Group Address Table.
AscT.start: The base address of the Association Table.
GrObjT.start: The base address of the Group Object Table.

**From user**

IA: Individual Address of the Management Server (device) to be configured.

© C i h 2004 2021 A i i S S ifi i 02 01 01 3 f 198


-----

###### 3.9.3.4 Complete Download

**Corresponds**
**Nr** **Device Management Procedure (Load Control)** **Remarks**

**to 3.5.2**

01 `<LdCtrlConnect />` 01

Reading DD0 is part of DM_Connect, 02
Verfying is done in the general predownload verification step (see below)

Authorize: Always done implicitly by 03
LdCtrlConnect if device supports
authorization

Verify Manufacturer: Done in the general 04
pre-download verification step (see below)

02 `<LdCtrlMerge MergeId="1" />`

03 `<LdCtrlUnload LsmIdx="5" />` Any Errors here are ignored if only AP 1 05
shall be loaded (see below)

04 `<LdCtrlUnload LsmIdx="4" />`

05 `<LdCtrlUnload LsmIdx="3" />`

06 `<LdCtrlUnload LsmIdx="2" />`

07 `<LdCtrlUnload LsmIdx="1" />`

08 `<LdCtrlLoad LsmIdx="5" />` Not executed if only AP 1 shall be loaded 06 Part 1

09 `<LdCtrlMerge MergeId="3" />` Not executed if only AP 1 shall be loaded 06 Part 2
Expected to contain <LdCtrlRelSegment
LsmIdx=”5” ... /> and optionally writing
Property PID_MCB_TABLE for subsegmentation

10 `<LdCtrlLoad LsmIdx="4" />` 07 Part 1

© C i h 2004 2021 A i i S S ifi i 02 01 01 4 f

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 3.5.2|
|---|---|---|---|
|01|`<LdCtrlConnect />`||01|
|||Reading DD0 is part of DM_Connect,<br>Verfying is done in the general pre-<br>download verification step (see below)|02|
|||Authorize: Always done implicitly by<br>LdCtrlConnect if device supports<br>authorization|03|
|||Verify Manufacturer: Done in the general<br>pre-download verification step (see below)|04|
|02|`<LdCtrlMerge MergeId="1" />`|||
|03|`<LdCtrlUnload LsmIdx="5" />`|Any Errors here are ignored if only AP 1<br>shall be loaded (see below)|05|
|04|`<LdCtrlUnload LsmIdx="4" />`|||
|05|`<LdCtrlUnload LsmIdx="3" />`|||
|06|`<LdCtrlUnload LsmIdx="2" />`|||
|07|`<LdCtrlUnload LsmIdx="1" />`|||
|08|`<LdCtrlLoad LsmIdx="5" />`|Not executed if only AP 1 shall be loaded|06 Part 1|
|09|`<LdCtrlMerge MergeId="3" />`|Not executed if only AP 1 shall be loaded<br>Expected to contain <LdCtrlRelSegment<br>LsmIdx=”5” ... /> and optionally writing<br>Property PID_MCB_TABLE for sub-<br>segmentation|06 Part 2|
|10|`<LdCtrlLoad LsmIdx="4" />`||07 Part 1|


-----

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 3.5.2|
|---|---|---|---|
|11|`<LdCtrlMerge MergeId="2" />`|Expected to contain <LdCtrlRelSegment<br>LsmIdx=”4” ... /> and optionally writing<br>Property PID_MCB_TABLE for sub-<br>segmentation|07 Part 2|
|12|`<LdCtrlLoad LsmIdx="3" />`||08 Part 1|
|13|`<LdCtrlRelSegment LsmIdx="3" Size="*" Mode="0" Fill="0" />`|Size = current size of Group Object table|08 Part 2|
|14|`<LdCtrlLoad LsmIdx="1" />`||09 Part 1|
|15|`<LdCtrlRelSegment LsmIdx="1" Size="*" Mode="0" Fill="0" />`|Size = current size of Group Address<br>Table|09 Part 2|
|16|`<LdCtrlLoad LsmIdx="2" />`||10 Part 1|
|17|`<LdCtrlRelSegment LsmIdx="2" Size="*" Mode="0" Fill="0" />`|Size = current size of Group Object<br>Association Table|10 Part 2|
|18|`<LdCtrlMerge MergeId="5" />`|Expected to contain the load controls<br>necessary to write the Application Program<br>data including parameters for AP2.|06 Part 3 and<br>4|
|19|`<LdCtrlMerge MergeId="4" />`|Expected to contain the load controls<br>necessary to write the Application Program<br>data including parameters for AP1.|07 Part 3 and<br>4|
|20|`<LdCtrlWriteRelMem Object Index="3" Offset="0" Size="*" Verify="true" />`|Size = current size of Group Object table|08 Part 3 and<br>4|
|21|`<LdCtrlWriteRelMem Object Index="2" Offset="0" Size="*" Verify="true" />`|Size = current size of association table|10 Part 3 and<br>4|
|22|`<LdCtrlWriteRelMem Object Index="1" Offset="0" Size="*" Verify="true" />`|Size = current size of Group Address<br>Table|09 Part 3 and<br>4|
|23|`<LdCtrlWriteProp Object Index="1" PID="53" Count="*" Verify="true" />`|Only for Masg Version 17B0h<br>Count = current size of group responder<br>table|10 Part 5|


© C i h 2004 2021 A i i S S ifi i 02 01 01 f 6


-----

34 `<LdCtrlRestart />` none

**Pre-download verification step**

ETS shall verify if it is allowed to load the data into the device right at the start and outside of the Configuration Procedure implementation. This includes:

   - Reading the Device Descriptor Type 0 from the installed device and verifying whether it is identical to or compatible with the Device Descriptor of
the device that it holds in its project information and that it intends to configure.
   - Reading the Manufacturer Identifier from the installed device and verifying whether it is identical to or compatible with the Manufacturer Identifier
of the device that it holds in its project information and that it intends to configure.
   - A list of additional Resources of which the value of the installed device and the value stored in the project for the device that it indends to configure
shall be identical. For System B these shall be the Properties PID_ORDER_INFO (identical), PID_VERSION (identical or higher), and
PID_HARDWARE_TYPE (identical) of the Device Object. The comparison is against the product data (parameter value in Application Program);
if no such parameter exists the comparison shall be skipped.

© C i h 2004 2021 A i i S S ifi i 02 01 01 6 f

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 3.5.2|
|---|---|---|---|
|24|`<LdCtrlWriteProp Object Index="5" PID="13" Verify="true" InlineData="*" />`|Not executed if only AP 1 shall be loaded<br>InlineData = ApplicationID of AP2|06 Part 5|
|25|`<LdCtrlWriteProp Object Index="4" PID="13" Verify="true" InlineData="*" />`|InlineData = ApplicationID of AP1|07 Part 5|
|26|`<LdCtrlLoadCompleted LsmIdx="5" />`|Not executed if only AP 1 shall be loaded|06 Part 6|
|27|`<LdCtrlLoadCompleted LsmIdx="4" />`||07 Part 6|
|28|`<LdCtrlLoadCompleted LsmIdx="3" />`||08 Part 5|
|29|`<LdCtrlLoadCompleted LsmIdx="2" />`||10 Part 6|
|30|`<LdCtrlLoadCompleted LsmIdx="1" />`||09 Part 5|
|31|`<LdCtrlMerge MergeId="6" />`|||
|32|`<LdCtrlMerge MergeId="7" />`|Expected to contain a reading of the<br>Property PID_MCB_TABLE if differential<br>download shall be supported|06,07,10 Part<br>7 <br>08,09 Part 6|
|33|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="*" />`|Only for Mash Version 17B0h.|none|
|34|`<LdCtrlRestart />`||none|


-----

**Post-download steps**

If an authorization access key is configured in the project, all devices supporting authorization shall be locked with this key. This is implemented outside of
the Configuration Procedure implementation. If fact, locking shall already be done immediately after assigning the Individual Address.

**Remarks on differences**

   - Splitting up the different parts of steps 06 to 10 in 3.5.2 is done in order to catch errors early.

   - If no AP2 is present in the product database entry, errors accessing the AP2 Interface Object are ignored.

   - In 2.5.2, it should be clarified if the procedure ends with Restart (ETS) or Disconnect.

   - In contrast to 2.5.2, ETS does not evaluate PID_TABLE_REFERENCE to check if the allocation succeeded, but looks at the Load State and expects
it to be ‘error’ after an unsuccessful allocation. To be clarified.

###### 3.9.3.5 Partial Download “Group Communication”
In 3.5.2, this corresponds a combination of the cases “Partial Download of the “Group Object Table’” (denoted C here), “Partial Download of the “Group
Address Table’” (D) and “Partial Download of the “Group Object Association Table’” (E). ETS does not offer these cases as separate procedures.

**Corresponds**
**Nr** **Device Management Procedure (Load Control)** **Remarks**
**to 3.5.3 C-E**

01 `<LdCtrlConnect />` C01, D01, E01

02 `<LdCtrlUnload LsmIdx="3" />` C05

03 `<LdCtrlUnload LsmIdx="2" />` E05

04 `<LdCtrlUnload LsmIdx="1" />` D05

05 `<LdCtrlLoad LsmIdx="3" />` C06 Part 1

06 `<LdCtrlRelSegment LsmIdx="3" Size="*" Mode="0" Fill="0" />` Size = current size of Group Object table C06 Part 2

07 `<LdCtrlLoad LsmIdx="1" />` D06 Part 1

08 `<LdCtrlRelSegment LsmIdx="1" Size="*" Mode="0" Fill="0" />` Size = current size of Group Address Table D06 Part 2

09 `<LdCtrlLoad LsmIdx="2" />` E06 Part 1

10 `<LdCtrlRelSegment LsmIdx="2" Size="*" Mode="0" Fill="0" />` Size = current size of association table E06 Part 2

© C i h 2004 2021 A i i S S ifi i 02 01 01 f 8

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 3.5.3 C-E|
|---|---|---|---|
|01|`<LdCtrlConnect />`||C01, D01, E01|
|02|`<LdCtrlUnload LsmIdx="3" />`||C05|
|03|`<LdCtrlUnload LsmIdx="2" />`||E05|
|04|`<LdCtrlUnload LsmIdx="1" />`||D05|
|05|`<LdCtrlLoad LsmIdx="3" />`||C06 Part 1|
|06|`<LdCtrlRelSegment LsmIdx="3" Size="*" Mode="0" Fill="0" />`|Size = current size of Group Object table|C06 Part 2|
|07|`<LdCtrlLoad LsmIdx="1" />`||D06 Part 1|
|08|`<LdCtrlRelSegment LsmIdx="1" Size="*" Mode="0" Fill="0" />`|Size = current size of Group Address Table|D06 Part 2|
|09|`<LdCtrlLoad LsmIdx="2" />`||E06 Part 1|
|10|`<LdCtrlRelSegment LsmIdx="2" Size="*" Mode="0" Fill="0" />`|Size = current size of association table|E06 Part 2|


-----

|Nr|Col2|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 3.5.3 C-E|
|---|---|---|---|---|
|11|11|`<LdCtrlWriteRelMem Object Index="3" Offset="0" Size="*" Verify="true`<br>`" />`|Size = current size of Group Object table|C06 Part 5|
|12|12|`<LdCtrlWriteRelMem Object Index="2" Offset="0" Size="*" Verify="true`<br>`" />`|Size = current size of Group Object Association<br>Table|E06 Part 5|
|13|13|`<LdCtrlWriteRelMem Object Index="1" Offset="0" Size="*" Verify="true`<br>`" />`|Size = current size of Group Address Table|D06 Part 5|
|14|14|`<LdCtrlWriteProp Object Index="1" PID="53" Count="*" Verify="true" /`<br>`> `|Only for 17B0<br>Count = current size of group responder table|none|
|15|`<LdCtrlLoadCompleted LsmIdx="3" />`|`<LdCtrlLoadCompleted LsmIdx="3" />`||C06 Part 7|
|16|`<LdCtrlLoadCompleted LsmIdx="2" />`|`<LdCtrlLoadCompleted LsmIdx="2" />`||E06 Part 7|
|17|`<LdCtrlLoadCompleted LsmIdx="1" />`|`<LdCtrlLoadCompleted LsmIdx="1" />`||D06 Part 7|
|18|`<LdCtrlMerge MergeId="7" />`|`<LdCtrlMerge MergeId="7" />`|||
|19|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="`<br>`*" />`|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="`<br>`*" />`|Only for 17B0|none|
|20|`<LdCtrlRestart />`|`<LdCtrlRestart />`||none|


**Pre-download verification step:**

   - Before a Partial Download is performed, ETS will check if the Application Program(s) are loaded and the ApplicationIDs of AP1 (and AP2 if
present) are identical.

© C i h 2004 2021 A i i S S ifi i 02 01 01 8 f 9


-----

**Remarks on differences**

   - C06/D06/E06 Part 6 is probably an error since the communication tables do not have a Property PID_PROGRAM_VERSION.
   - Splitting up the different parts of step C-E06 in 3.5.3 is done in order to catch errors early.
   - ETS does not currently implement differential download for this case, i.e. the communication tables are always loaded completely. Reasons: the
moderate size of typical tables and the fact that an added or removed group association affects half of the Group Address and Group Object
Association Table in the average.
   - It should be clarified if the procedure ends with Restart (ETS) or Disconnect ).
   - In contrast to 3.5.3 ETS does not evaluate PID_TABLE_REFERENCE to check if the allocation succeeded, but looks at the Load State and expects
it to be ‘error’ after an unsuccessful allocation. To be clarified.

###### 3.9.3.6 Partial Download “Parameters”
In 3.5.3, this corresponds to combination of the cases “Partial Download of the ‘Application Program 2’ ” (denoted A here) and “Partial Download of the
‘Application Program 1’ ” (B).

**Corresponds**
**Nr** **Device Management Procedure (Load Control)** **Remarks**
**to 2.5.3 A-B**

01 `<LdCtrlConnect />` A01, B01

02 `<LdCtrlLoadImageProp Object Index="4" PID="7" />` See below

03 `<LdCtrlLoadImageProp Object Index="5" PID="7" />` Not executed if only AP 1

04 `<LdCtrlUnload LsmIdx="5" />` Not executed if only AP 1 A05

05 `<LdCtrlUnload LsmIdx="4" />` B05

06 `<LdCtrlLoad LsmIdx="5" />` Not executed if only AP 1 A06 Part 1

07 `<LdCtrlMerge MergeId="3" />` Not executed if only AP 1 A06 Part 2
Expected to contain <LdCtrlRelSegment
LsmIdx=”5” ... /> and optionally writing
Property PID_MCB_TABLE for subsegmentation. The allocation must be done
with bit#0 of the mode octet = 0 (do not fill).

© C i h 2004 2021 A i i S S ifi i 02 01 01 9 f 80

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 2.5.3 A-B|
|---|---|---|---|
|01|`<LdCtrlConnect />`||A01, B01|
|02|`<LdCtrlLoadImageProp Object Index="4" PID="7" />`|See below||
|03|`<LdCtrlLoadImageProp Object Index="5" PID="7" />`|Not executed if only AP 1||
|04|`<LdCtrlUnload LsmIdx="5" />`|Not executed if only AP 1|A05|
|05|`<LdCtrlUnload LsmIdx="4" />`||B05|
|06|`<LdCtrlLoad LsmIdx="5" />`|Not executed if only AP 1|A06 Part 1|
|07|`<LdCtrlMerge MergeId="3" />`|Not executed if only AP 1<br>Expected to contain <LdCtrlRelSegment<br>LsmIdx=”5” ... /> and optionally writing<br>Property PID_MCB_TABLE for sub-<br>segmentation. The allocation must be done<br>with bit#0 of the mode octet = 0 (do not fill).|A06 Part 2|


-----

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 2.5.3 A-B|
|---|---|---|---|
|08|`<LdCtrlCompareProp Object Index="5" PID="7" InlineData="*" />`|Not executed if only AP 1<br>* = Data read in 03<br>See below||
|09|`<LdCtrlLoad LsmIdx="4" />`||B06 Part 1|
|10|`<LdCtrlMerge MergeId="2" />`|Expected to contain <LdCtrlRelSegment<br>LsmIdx=”4” ... /> and optionally writing<br>Property PID_MCB_TABLE for sub-<br>segmentation. The allocation must be done<br>with bit#0 of the mode octet = 0 (do not fill).|B06 Part 2|
|11|`<LdCtrlCompareProp Object Index="4" PID="7" InlineData="*" />`|* = Data read in 02<br>See below||
|12|`<LdCtrlMerge MergeId="5" />`|Not executed if only AP 1<br>Expected to contain the load controls<br>necessary to write the Application Program<br>data including parameters for AP2|A06 Part 5|
|13|`<LdCtrlMerge MergeId="4" />`|Expected to contain the load controls<br>necessary to write the Application Program<br>data including parameters for AP1|B06 Part 5|
|14|`<LdCtrlWriteProp Object Index="5" PID="13" Verify="true" InlineData="*`<br>`" />`|Not executed if only AP 1|A06 Part 6|
|15|`<LdCtrlWriteProp Object Index="4" PID="13" Verify="true" InlineData="*`<br>`" />`||B06 Part 6|
|16|`<LdCtrlLoadCompleted LsmIdx="5" />`|Not executed if only AP 1|A06 Part 7|
|17|`<LdCtrlLoadCompleted LsmIdx="4" />`||B06 Part 7|
|18|`<LdCtrlMerge MergeId="6" />`|||
|19|`<LdCtrlMerge MergeId="7" />`|Expected to contain a reading of the Property<br>PID_MCB_TABLE if differential download<br>shall be supported|A06/B06 Part 8|


© C i h 2004 2021 A i i S S ifi i 02 01 01 80 f 81


-----

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 2.5.3 A-B|
|---|---|---|---|
|20|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="*`<br>`" />`|Only for 17B0|none|
|21|`<LdCtrlRestart />`||none|


**Pre-download verification step**

   - Before a Partial Download is performed, ETS will check if the Application Program(s) are loaded and the ApplicationIDs of AP1 (and AP2 if
present) are identical.
   - In addition, ETS compares the CRCs read in the previous download with the CRCs in the device. If a mismatch is found, a standard Partial
Download is performed instead of a differential download.
Therefore, CRC comparison is not part of the actual Configuration Procedure in ETS.

**Remarks on differences**

   - In addition to the CRC comparison, ETS also checks if the base pointers before and after the Unload/Load/Alloc sequence are identical (Steps 02,
03, 08, 09).
If the base pointer would be different, Partial Download will not work and thus an error is reported by ETS in this case.
Thus, it is a requirement for devices that want to support Partial Download, that after unloading AP1+AP2 and then allocating the same amount of
memory again with mode “do not fill” the same memory range with unchanged data is allocated again and the same base pointers are returned.
   - At this stage, the LSM is in state ‘loaded’, so the CRCs in PID_MCB_TABLE may be incorrect (the device is supposed to calculate the CRC on the
transition to the ‘loaded’ state).
ETS reads and compares the CRCs as part of the pre-download checks before the actual load procedure runs so this is not a problem for ETS.
   - Splitting up the different parts of step C-E06 in 3.5.3 is done in order to catch errors early.
   - If an allocation error occurs, ETS does not try to recover as described in A08-12 and B08-11 but gives up and displays an error message.
   - The procedure shall end with a confirmed restart ([06] “Master Reset” with Erase Code 01h).
   - In contrast to 3.5.3, ETS does not evaluate PID_TABLE_REFERENCE to check if the allocation succeeded, but looks at the Load State and expects
it to be ‘error’ after an unsuccessful allocation.

© C i h 2004 2021 A i i S S ifi i 02 01 01 81 f 82


-----

###### 3.9.3.7 Partial Download “Group Communication and Parameters”
As this is just a combination of the other Partial Download cases, no detailed discussion is done here.

**Corresponds**
**Nr** **Device Management Procedure (Load Control)** **Remarks**
**to 2.5.3 A-E**

01 `<LdCtrlConnect />`

02 `<LdCtrlLoadImageProp Object Index="4" PID="7" />`

03 `<LdCtrlLoadImageProp Object Index="5" PID="7" />`

04 `<LdCtrlUnload LsmIdx="5" />`

05 `<LdCtrlUnload LsmIdx="4" />`

06 `<LdCtrlUnload LsmIdx="3" />`

07 `<LdCtrlUnload LsmIdx="2" />`

08 `<LdCtrlUnload LsmIdx="1" />`

09 `<LdCtrlLoad LsmIdx="5" />`

10 `<LdCtrlMerge MergeId="3" />`

11 `<LdCtrlCompareProp Object Index="5" PID="7" InlineData="*" />`

12 `<LdCtrlLoad LsmIdx="4" />`

13 `<LdCtrlMerge MergeId="2" />`

14 `<LdCtrlCompareProp Object Index="4" PID="7" InlineData="*" />`

15 `<LdCtrlLoad LsmIdx="3" />`

16 `<LdCtrlRelSegment LsmIdx="3" Size="*" Mode="0" Fill="0" />`

17 `<LdCtrlLoad LsmIdx="1" />`

18 `<LdCtrlRelSegment LsmIdx="1" Size="*" Mode="0" Fill="0" />`

19 `<LdCtrlLoad LsmIdx="2" />`

20 `<LdCtrlRelSegment LsmIdx="2" Size="*" Mode="0" Fill="0" />`

© C i h 2004 2021 A i i S S ifi i 02 01 01 82 f 83

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 2.5.3 A-E|
|---|---|---|---|
|01|`<LdCtrlConnect />`|||
|02|`<LdCtrlLoadImageProp Object Index="4" PID="7" />`|||
|03|`<LdCtrlLoadImageProp Object Index="5" PID="7" />`|||
|04|`<LdCtrlUnload LsmIdx="5" />`|||
|05|`<LdCtrlUnload LsmIdx="4" />`|||
|06|`<LdCtrlUnload LsmIdx="3" />`|||
|07|`<LdCtrlUnload LsmIdx="2" />`|||
|08|`<LdCtrlUnload LsmIdx="1" />`|||
|09|`<LdCtrlLoad LsmIdx="5" />`|||
|10|`<LdCtrlMerge MergeId="3" />`|||
|11|`<LdCtrlCompareProp Object Index="5" PID="7" InlineData="*" />`|||
|12|`<LdCtrlLoad LsmIdx="4" />`|||
|13|`<LdCtrlMerge MergeId="2" />`|||
|14|`<LdCtrlCompareProp Object Index="4" PID="7" InlineData="*" />`|||
|15|`<LdCtrlLoad LsmIdx="3" />`|||
|16|`<LdCtrlRelSegment LsmIdx="3" Size="*" Mode="0" Fill="0" />`|||
|17|`<LdCtrlLoad LsmIdx="1" />`|||
|18|`<LdCtrlRelSegment LsmIdx="1" Size="*" Mode="0" Fill="0" />`|||
|19|`<LdCtrlLoad LsmIdx="2" />`|||
|20|`<LdCtrlRelSegment LsmIdx="2" Size="*" Mode="0" Fill="0" />`|||


-----

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds<br>to 2.5.3 A-E|
|---|---|---|---|
|21|`<LdCtrlMerge MergeId="5" />`|||
|22|`<LdCtrlMerge MergeId="4" />`|||
|23|`<LdCtrlWriteRelMem Object Index="3" Offset="0" Size="*" Verify="true"`<br>`/>`|||
|24|`<LdCtrlWriteRelMem Object Index="2" Offset="0" Size="*" Verify="true"`<br>`/>`|||
|25|`<LdCtrlWriteRelMem Object Index="1" Offset="0" Size="*" Verify="true"`<br>`/>`|||
|26|`<LdCtrlWriteProp Object Index="1" PID="53" Count="*" Verify="true" />`|||
|27|`<LdCtrlWriteProp Object Index="5" PID="13" Verify="true" InlineData="*`<br>`" />`|||
|28|`<LdCtrlWriteProp Object Index="4" PID="13" Verify="true" InlineData="*`<br>`" />`|||
|29|`<LdCtrlLoadCompleted LsmIdx="5" />`|||
|30|`<LdCtrlLoadCompleted LsmIdx="4" />`|||
|31|`<LdCtrlLoadCompleted LsmIdx="3" />`|||
|32|`<LdCtrlLoadCompleted LsmIdx="2" />`|||
|33|`<LdCtrlLoadCompleted LsmIdx="1" />`|||
|34|`<LdCtrlMerge MergeId="6" />`|||
|35|`<LdCtrlMerge MergeId="7" />`|||
|36|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="*`<br>`" />`|||
|37|`<LdCtrlRestart />`|||


© C i h 2004 2021 A i i S S ifi i 02 01 01 83 f 84


-----

###### 3.9.3.8 Partial Download “Cfg”
This type of Partial Download is for quickly updating parameters affecting the behaviour of the device on the medium, like:

   - “Repeater present” flag for PL
   - IP configuration for IP enabled devices

The procedure is defined for 17B0 only.

**Corresponds to**
**Nr** **Device Management Procedure (Load Control)** **Remarks**

[13]

01 `<LdCtrlConnect />` Not in 2.5.3

02 `<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="*`
```
   " />

```
03 `<LdCtrlRestart />`

###### 3.9.3.9 Unload

**Corresponds to**
**Nr** **Device Management Procedure (Load Control)** **Remarks**
2.5.3

01 <LdCtrlConnect /> 01

02 <LdCtrlUnload LsmIdx="1" /> 05

03 <LdCtrlUnload LsmIdx="2" />

04 <LdCtrlUnload LsmIdx="3" />

05 <LdCtrlUnload LsmIdx="4" />

06 <LdCtrlUnload LsmIdx="5" /> Errors will be ignored here (to support
devices without AP2 object)

07 <LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="FF" /> Only for 17B0 None

08 <LdCtrlDisconnect />

© C i h 2004 2021 A i i S S ifi i 02 01 01 84 f 8

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds to<br>[13]|
|---|---|---|---|
|01|`<LdCtrlConnect />`||Not in 2.5.3|
|02|`<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="*`<br>`" />`|||
|03|`<LdCtrlRestart />`|||

|Nr|Device Management Procedure (Load Control)|Remarks|Corresponds to<br>2.5.3|
|---|---|---|---|
|01|<LdCtrlConnect />||01|
|02|<LdCtrlUnload LsmIdx="1" />||05|
|03|<LdCtrlUnload LsmIdx="2" />|||
|04|<LdCtrlUnload LsmIdx="3" />|||
|05|<LdCtrlUnload LsmIdx="4" />|||
|06|<LdCtrlUnload LsmIdx="5" />|Errors will be ignored here (to support<br>devices without AP2 object)|Errors will be ignored here (to support<br>devices without AP2 object)|
|07|<LdCtrlWriteProp Object Index="0" PID="73" Verify="true" InlineData="FF" />|Only for 17B0|None|
|08|<LdCtrlDisconnect />|||


-----

**Remarks on differences**

   - ETS never verifies the Manufacturer Identifier on unload. This is because a device can be unloaded without project context or even without product
data.

© C i h 2004 2021 A i i S S ifi i 02 01 01 8 f 86


-----

##### 3.9.4 Setting of IP Properties
Please refer to clause 2.7.

#### 3.10 Configuration Procedures for mask 0912h

##### 3.10.1 Normal conditions

###### 3.10.1.1 Merge points
The following Configuration Procedures contain merge points for manufacturer specific extensions. If
manufacturer specific extensions are used than the S-Mode MaC shall check the Manufacturer Identifier
before the first Merge point “Merge point 1”. For the standard Configuration Procedure without using
merge points the Manufacturer Identifier is not checked by he MaC.

The following Configuration Procedures contain three possibilities for loading the Filter Table. The
possibilities 1 and 2 are only examples and not specified yet. Possibilities 1 and 2 have to be specified
before they are allowed to be used. Possibility 3 is the only one allowed for implementations.

###### 3.10.1.2 Load procedure for complete download
There is no need for new additional timing requirements for the Management Client. The standard timing
for writing and reading Resources shall be performed.

**Nr.** **Device Management Procedure** **Description**

**MaC = Management Client**
**MaS = Management Server**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 optional e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Unload Routerobject MaC: Set LoadControl RouterObject (PID = 5) = Unload
MaS: Set LoadState RouterObject = Unloaded

06 Merge point 2 optional e.g. unload LTE Routing Object

06 Start Loading Routerobject MaC: Set LoadControl RouterObject (PID = 5) = Start Load
MaS: Set LoadState RouterObject = Loading

07.1 Load RouterObject Parameter MaC: PropertyWrite RouterObject:
PID_MAIN_LCCONFIG(PID = 52)
PID_SUB_LCCONFIG(PID = 53)
PID_MAIN_LCGRPCONFIG(PID = 54)
PID_SUB_LCGRPCONFIG(PID = 55)

MaS: PropertyResponse RouterObject:
PID_MAIN_LCCONFIG
PID_SUB_LCCONFIG
PID_MAIN_LCGRPCONFIG
PID_SUB_LCGRPCONFIG

07.2 Merge point 3 optional: additional Parameter Write

© C i h 2004 2021 A i i S S ifi i 02 01 01 86 f 8

|Nr.|Device Management Procedure|Description|
|---|---|---|
|**Nr.**|**Device Management Procedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|optional e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Unload Routerobject|<br>MaC: Set LoadControl RouterObject (PID = 5) = Unload<br>MaS: Set LoadState RouterObject = Unloaded|
|06|Merge point 2|optional e.g. unload LTE Routing Object|
|06|Start Loading Routerobject|MaC: Set LoadControl RouterObject (PID = 5) = Start Load<br>MaS: Set LoadState RouterObject = Loading|
|07.1|Load RouterObject Parameter|MaC: PropertyWrite RouterObject:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)<br>MaS: PropertyResponse RouterObject:<br>PID_MAIN_LCCONFIG<br>PID_SUB_LCCONFIG<br>PID_MAIN_LCGRPCONFIG<br>PID_SUB_LCGRPCONFIG|
|07.2|Merge point 3|<br>optional: additional Parameter Write|


-----

11 Disconnect Disconnect via bus

© C i h 2004 2021 A i i S S ifi i 02 01 01 8 f 88

|Nr.|Device Management Procedure|Description|
|---|---|---|
|**Nr.**|**Device Management Procedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|08|Load RouterObject<br>Routingtable|The Configuration Procedure of the Filter Table depends on the number and<br>distribution of used Group Addresses. To find the optimal way is in the<br>responsibility of the download tool. This may be specified separately if<br>necessary.|
|08|Load RouterObject<br>Routingtable|Possibility 1:<br>Step 1: Prepare routingtable ( Clear complete routingtable)<br>Step 2: Insert used Group Addresses<br>MaC: FunctionPropertyCommand (PID = 56)<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>Step 1: SRVID_CLEAR_ROUTINGTABLE<br>Step 2: SRVID_SET_GROUPADDRESS<br>MaS: FunctionPropertyStateResponse|
|08|Load RouterObject<br>Routingtable|Possibility 2:<br>Step 1: Prepare routingtable (Set complete  routingtable)<br>Step 2: Clear unused Group Addresses<br>MaC: FunctionPropertyCommand<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>Step 1: SRVID_SET_ROUTINGTABLE<br>Step 2: SRVID_CLEAR_GROUPADDRESS<br>MaS: FunctionPropertyStateResponse|
|08|Load RouterObject<br>Routingtable|Possibility 3: (Preference to start with this variant in ETS4)<br>Step 1: Prepare routingtable ( Clear complete routingtable)<br>MaC: FunctionPropertyCommand<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>SRVID_CLEAR_ROUTINGTABLE<br>MaS: FunctionPropertyStateResponse<br>Step 2: A_FilterTable_Open for direct memory access (may be necessary for<br>different implementations)<br>Step 3: Insert used Group Addresses over Direct Memory Access using the<br>Application Layer Services A_FilterTable_Read and A_FilterTable_Write|
|09|LoadComplete RouterObject|<br>MaC: Set LoadControl RouterObject = Load Complete<br>MaS: Set LoadState RouterObject = Loaded|
|10|Merge point 4|Optional: e.g.<br>Start Loading LTE Routing Object<br>PropWrite LTE Filter Table<br>Load Complete LTE Routing Object|
|11|Disconnect|Disconnect via bus|


-----

###### 3.10.1.3 Configuration Procedure for partial download of the parameters
With this Configuration Procedure the Filter Table will remain unchanged.

**Nr.** **Device ManagementProcedure** **Description**

**MaC = Management Client**
**MaS = Management Server**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 optional e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Start Loading Routerobject If LoadState RouterObject <> Loaded

Disconnect and continue with complete download because the content of
the Filter Table may be inconsistent.
Endif

MaC: Set LoadControl RouterObject = Start Loading
MaS: Set LoadState RouterObject = Loading

06. Load RouterObject Parameter MaC: PropertyWrite RouterObject:
1 PID_MAIN_LCCONFIG(PID = 52)

PID_SUB_LCCONFIG(PID = 53)
PID_MAIN_LCGRPCONFIG(PID = 54)
PID_SUB_LCGRPCONFIG(PID = 55)

MaS: PropertyResponse RouterObject:
PID_MAIN_LCCONFIG
PID_SUB_LCCONFIG
PID_MAIN_LCGRPCONFIG
PID_SUB_LCGRPCONFIG

06. Merge point 2 Optional: additional Parameter Write
2

07 LoadComplete RouterObject MaC: Set LoadControl RouterObject = Load Complete (to inform the MaS that
the Configuration Procedure is complete)
MaS: Set LoadState RouterObject = Loaded

08 Merge point 4 optional: e.g.
Start Loading LTE Routing Object
PropWrite LTE Filter Table
Load Complete LTE Routing Object

09 Disconnect Disconnect via bus

###### 3.10.1.4 Configuration Procedure for partial download of the Filter Table
This Configuration Procedure is performed by ETS when partial downloading the Filter Table.

With this Configuration Procedure the Parameters will remain unchanged.

**Nr.** **Device ManagementProcedure** **Description**

**MaC = Management Client**
**MaS = Management Server**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 optional e.g. PropCompare

© C i h 2004 2021 A i i S S ifi i 02 01 01 88 f 89

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|**Nr.**|**Device ManagementProcedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|optional e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Start Loading Routerobject|<br>If LoadState RouterObject <>  Loaded<br>Disconnect and continue with complete download because the content of<br>the Filter Table may be inconsistent.<br>Endif<br>MaC: Set LoadControl RouterObject = Start Loading<br>MaS: Set LoadState RouterObject = Loading|
|06.<br>1|Load RouterObject Parameter|MaC: PropertyWrite RouterObject:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)<br>MaS: PropertyResponse RouterObject:<br>PID_MAIN_LCCONFIG<br>PID_SUB_LCCONFIG<br>PID_MAIN_LCGRPCONFIG<br>PID_SUB_LCGRPCONFIG|
|06.<br>2|Merge point 2|<br>Optional: additional Parameter Write|
|07|LoadComplete RouterObject|MaC: Set LoadControl RouterObject = Load Complete (to inform the MaS that<br>the Configuration Procedure is complete)<br>MaS: Set LoadState RouterObject = Loaded|
|08|Merge point 4|optional: e.g.<br>Start Loading LTE Routing Object<br>PropWrite LTE Filter Table<br>Load Complete LTE Routing Object|
|09|Disconnect|Disconnect via bus|

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|**Nr.**|**Device ManagementProcedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|optional e.g. PropCompare|


-----

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|**Nr.**|**Device ManagementProcedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Start Loading Routerobject|<br>If LoadState RouterObject <>  Loaded<br>Disconnect and continue with complete download<br>Endif<br>MaC: Set LoadControl RouterObject = Start Load<br>MaS: Set LoadState RouterObject = Loading|
|06|Load Router Object<br>Routingtable|The Configuration Procedure of the Filter Table depends on the number and<br>distribution of used Group Addresses. To find the optimal way is in the<br>responsibility of the download tool. This may be specified separately if<br>necessary.|
|06|Load Router Object<br>Routingtable|Possibility 1:<br>Step 1: Prepare routingtable ( Clear complete routingtable)<br>Step 2: Insert used Group Addresses<br>MaC: FunctionPropertyCommand (PID = 56)<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>Step 1: SRVID_CLEAR_ROUTINGTABLE<br>Step 2: SRVID_SET_GROUPADDRESS<br>MaS: FunctionPropertyStateResponse|
|06|Load Router Object<br>Routingtable|Possibility 2:<br>Step 1: Prepare routingtable (Set complete  routingtable)<br>Step 2: Clear unused Group Addresses<br>MaC: FunctionPropertyCommand<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>Step 1: SRVID_SET_ROUTINGTABLE<br>Step 2: SRVID_CLEAR_GROUPADDRESS<br>MaS: FunctionPropertyStateResponse|
|06|Load Router Object<br>Routingtable|Possibility 3:<br>Step 1: Prepare routingtable ( Clear complete routingtable)<br>MaC: FunctionPropertyCommand<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>SRVID_CLEAR_ROUTINGTABLE<br>MaS: FunctionPropertyStateResponse<br>Step 2: A_FilterTable_Open for direct memory access (may be necessary for<br>different  implementations)<br>Step 3: Insert used Group Addresses over Direct Memory Access<br>MaC: LC_EXT_MEMORY_WRITE<br>MaS: LC_EXT_MEMORY_RESONSE|
|07|LoadComplete RouterObject|<br>MaC: Set LoadControl RouterObject = Load Complete<br>MaS: Set LoadState RouterObject = Loaded|
|08|Merge point 4|optional: e.g.<br>Start Loading LTE Routing Object<br>PropWrite LTE Filter Table<br>Load Complete LTE Routing Object|


© C i h 2004 2021 A i i S S ifi i 02 01 01 89 f 90


-----

08 Disconnect Disconnect via bus

###### 3.10.1.5 Configuration Procedure for unloading
This Configuration Procedure can be performed with or without the ETS Project. If the Coupler is
unloaded without ETS Project then Merge points 5 to 8 will not be executed. In this case the standard
Configuration Procedure for unloading without merge points will be executed.

**Nr.** **Device ManagementProcedure** **Description**

**MaC = Management Client**
**MaS = Management Server**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 5 optional e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Unload Routerobject MaC: Set LoadControl RouterObject (PID = 5) = Unload
MaS: Set LoadState RouterObject = Unloaded

06 Merge point 6 optional e.g. unload LTE Routing Object

07 Start Loading Routerobject MaC: Set LoadControl RouterObject (PID = 5) = Start Load
MaS: Set LoadState RouterObject = Loading

08 Load RouterObject default Parameter Load default parameter values
MaC: PropertyWrite RouterObject:
PID_MAIN_LCCONFIG(PID = 52)
PID_SUB_LCCONFIG(PID = 53)
PID_MAIN_LCGRPCONFIG(PID = 54)
PID_SUB_LCGRPCONFIG(PID = 55)

MaS: PropertyResponse RouterObject:

09 Merge point 7 optional

10 Load RouterObject clear routingtable
Routingtable MaC: FunctionPropertyCommand (PID = 56)

RouterObject.PID_ROUTETABLE_CONTROL:
SRVID_CLEAR_ROUTINGTABLE
MaS: FunctionPropertyStateResponse

11 LoadComplete RouterObject MaC: Set LoadControl RouterObject = Load Complete
MaS: Set LoadState RouterObject = Loaded

12 Unload Routerobject MaC: Set LoadControl RouterObject (PID = 5) = Unload
MaS: Set LoadState RouterObject = Unloaded

13 Merge point 8 Optional

14 Disconnect Disconnect via bus

##### 3.10.2 Error and exception handling
Not available.

© C i h 2004 2021 A i i S S ifi i 02 01 01 90 f 91

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|**Nr.**|**Device ManagementProcedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|08|Disconnect|Disconnect via bus|

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|**Nr.**|**Device ManagementProcedure**|**MaC = Management Client**<br>**MaS = Management Server**|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 5|optional e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Unload Routerobject|<br>MaC: Set LoadControl RouterObject (PID = 5) = Unload<br>MaS: Set LoadState RouterObject = Unloaded|
|06|Merge point 6|optional e.g. unload LTE Routing Object|
|07|Start Loading Routerobject|MaC: Set LoadControl RouterObject (PID = 5) = Start Load<br>MaS: Set LoadState RouterObject = Loading|
|08|Load RouterObject default Parameter|Load default parameter values<br>MaC: PropertyWrite RouterObject:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)<br>MaS: PropertyResponse RouterObject:|
|09|Merge point 7|optional|
|10|Load RouterObject<br>Routingtable|clear routingtable<br>MaC: FunctionPropertyCommand (PID = 56)<br>RouterObject.PID_ROUTETABLE_CONTROL:<br>SRVID_CLEAR_ROUTINGTABLE<br>MaS: FunctionPropertyStateResponse|
|11|LoadComplete RouterObject|MaC: Set LoadControl RouterObject = Load Complete<br>MaS: Set LoadState RouterObject = Loaded|
|12|Unload Routerobject|MaC: Set LoadControl RouterObject (PID = 5) = Unload<br>MaS: Set LoadState RouterObject = Unloaded|
|13|Merge point 8|Optional|
|14|Disconnect|Disconnect via bus|


-----

#### 3.11 Configuration Procedures for mask 091Ah – Property based configuration

##### 3.11.1 Normal conditions

###### 3.11.1.1 Reference
The same standard conditions shall be valid for the Property based configuration of Mask Version 091Ah
as for the Property based configuration of the Mask Version 0912h (see clause 3.10.1 “Normal
conditions”) with the following differences.

1. The handling of the Merge point 1 shall be different.
2. Additional IP dependent Parameters should be downloaded.

###### 3.11.1.2 Merge points
The Configuration Procedures contain merge points for implementation specific extensions.

The MaC shall always check the Manufacturer Identifier in the “Merge point 1” and in the “Merge point
5”.

###### 3.11.1.3 Load procedure for complete download
There is no need for new additional timing requirements for the Management Client. The standard timing
for writing and reading Resources shall be performed. After a complete Configuration, the Management
Client shall restart the Management Server (device). This shall be done to have a known reference in the
device to restart the IP stack.

All Properties in the KNXnet/IP Parameter Object should only be downloaded if they are existent in the
MaC’s database entry. Properties not existent in the database entry shall be skipped.

**Nr.** **Device Management Procedure** **Description**

01 Connect Connect via bus

02 Verifying Device Descriptor DeviceDescRead Type 0 (Mask Version Read)

03 Merge point 1 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

Optional: MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

Optional: additional manufacturer dependent checks e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Unload Router object MaC: Set LoadControl Router Object (PID = 5) = Unload

MaS: Set LoadState Router Object = Unloaded

06 Merge point 2 optional e.g. unload LTE Routing Object

07 Start Loading Router object MaC: Set LoadControl Router Object (PID = 5) = Start Load

MaS: Set LoadState Router Object = Loading

08 Load Router Object Parameter MaC: PropertyWrite Router Object:
PID_MAIN_LCCONFIG(PID = 52)
PID_SUB_LCCONFIG(PID = 53)
PID_MAIN_LCGRPCONFIG(PID = 54)
PID_SUB_LCGRPCONFIG(PID = 55)

© C i h 2004 2021 A i i S S ifi i 02 01 01 91 f 92

|Nr.|Device Management Procedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Descriptor|DeviceDescRead Type 0 (Mask Version Read)|
|03|Merge point 1|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>Optional: MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>Optional: additional manufacturer dependent checks e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Unload Router object|<br>MaC: Set LoadControl Router Object (PID = 5) = Unload<br>MaS: Set LoadState Router Object = Unloaded|
|06|Merge point 2|optional e.g. unload LTE Routing Object|
|07|Start Loading Router object|MaC: Set LoadControl Router Object (PID = 5) = Start Load<br>MaS: Set LoadState Router Object = Loading|
|08|Load Router Object Parameter|MaC: PropertyWrite Router Object:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)|


-----

Disconnect via bus

###### 3.11.1.4 Load procedure for partial download of the parameters
With this load procedure the Routing Table will remain unchanged.

All Properties in the KNXnet/IP Parameter Object should only be downloaded if they are existent in the
database entry. Properties not existent in the database entry shall be skipped.

**Nr.** **Device Management Procedure** **Description**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

Optional: MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

Optional: e.g. PropCompare

04 Start Loading Router Object If LoadState Router Object <> Loaded

Disconnect and continue with Nr. 05 of complete download because
the content of the Filter Table may be inconsistent.

Endif

MaC: Set LoadControl Router Object = Start Loading
MaS: Set LoadState Router Object = Loading

© C i h 2004 2021 A i i S S ifi i 02 01 01 92 f 93

|Nr.|Device Management Procedure|Description|
|---|---|---|
|09|Load KNXnet/IP Parameter Object|MaC: PropertyWrite KNXnet/IP Parameter Object:<br>PID_PROJECT_INSTALLATION_ID (PID = 51)<br>PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)<br>PID_IP_ASSIGNMENT_METHOD (PID = 55)<br>PID_IP_ADDRESS (PID = 60)<br>PID_SUBNET_MASK (PID = 61)<br>PID_DEFAULT_GATEWAY (PID = 62)<br>PID_ROUTING_MULTICAST_ADDRESS (PID = 66)<br>PID_TTL (PID = 67)<br>PID_FRIENDLY_NAME (PID = 76)|
|10|Merge point 3|<br>optional: additional Parameter Write|
|11|Load Router Object: Routing Table|Prepare routingtable ( Clear complete routingtable)<br>MaC: FunctionPropertyCommand:<br>RouterObject.PID_ROUTETABLE_CONTROL:, SRVID_CLEAR_ROUTINGTABLE<br>A_FilterTable_Open for direct memory access (may be necessary for<br>different implementations)<br>Insert used group addresses over Direct Memory Access using the<br>Application Layer Services A_FilterTable_Read and A_FilterTable_Write|
|12|LoadComplete Router Object|<br>MaC: Set LoadControl Router Object = Load Complete<br>MaS: Set LoadState Router Object = Loaded|
|13|Merge point 4|Optional: e.g.<br>Start Loading LTE Routing Object<br>PropWrite LTE Routing Table<br>Load Complete LTE Routing Object|
|14|Restart and Disconnect|Restart<br>Disconnect via bus|

|Nr.|Device Management Procedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>Optional: MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>Optional: e.g. PropCompare|
|04|Start Loading Router Object|If LoadState Router Object <>  Loaded<br>Disconnect and continue with Nr. 05 of complete download because<br>the content of the Filter Table may be inconsistent.<br>Endif<br>MaC: Set LoadControl Router Object = Start Loading<br>MaS: Set LoadState Router Object = Loading|


-----

Disconnect via bus

###### 3.11.1.5 Load procedure for partial download of the Filter Table
This load procedure is performed by ETS when partial downloading the Group Addresses.

With this load procedure the Parameters will remain unchanged.

**Nr.** **Device ManagementProcedure** **Description**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

Optional: MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

optional e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Start Loading Router Object If LoadState Router Object <> Loaded

Disconnect and continue with Nr. 05 of complete download because
the content of the Filter Table may be inconsistent.

Endif

MaC: Set LoadControl Router Object = Start Loading
MaS: Set LoadState Router Object = Loading

© C i h 2004 2021 A i i S S ifi i 02 01 01 93 f 94

|Nr.|Device Management Procedure|Description|
|---|---|---|
|05|Load Router Object Parameter|MaC: PropertyWrite Router Object:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)|
|06|Load KNXnet/IP Parameter Object|<br>MaC: PropertyWrite Router Object:<br>PID_PROJECT_INSTALLATION_ID (PID = 51)<br>PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)<br>PID_IP_ASSIGNMENT_METHOD (PID = 55)<br>PID_IP_ADDRESS (PID = 60)<br>PID_SUBNET_MASK (PID = 61)<br>PID_DEFAULT_GATEWAY (PID = 62)<br>PID_ROUTING_MULTICAST_ADDRESS (PID = 66)<br>PID_TTL (PID = 67)<br>PID_FRIENDLY_NAME (PID = 76)|
|07|Merge point 3||
|08|LoadComplete Router Object|MaC: Set LoadControl Router Object = Load Complete (to inform the MaS<br>that the load procedure is complete)<br>MaS: Set LoadState Router Object = Loaded|
|09|Merge point 4|optional: additional Parameter Write|
|10|Restart and Disconnect|Restart<br>Disconnect via bus|

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>Optional: MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>optional e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Start Loading Router Object|<br>If LoadState Router Object <>  Loaded<br>Disconnect and continue with Nr. 05 of complete download because<br>the content of the Filter Table may be inconsistent.<br>Endif<br>MaC: Set LoadControl Router Object = Start Loading<br>MaS: Set LoadState Router Object = Loading|


-----

Disconnect via bus

###### 3.11.1.6 Load procedure for partial download of Parameters and Filter Table
This load procedure is performed by the S-Mode MaC if parameters and Filter Table have to be
downloaded.

**Nr.** **Device Management Procedure** **Description**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

Optional: MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

Optional: e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Start Loading Router Object If LoadState Router Object <> Loaded

Disconnect and continue with Nr. 05 of complete download because
the content of the Filter Table may be inconsistent.

Endif

MaC: Set LoadControl Router Object = Start Loading
MaS: Set LoadState Router Object = Loading

06 Load Router Object Parameter MaC: PropertyWrite Router Object:
PID_MAIN_LCCONFIG(PID = 52)
PID_SUB_LCCONFIG(PID = 53)
PID_MAIN_LCGRPCONFIG(PID = 54)
PID_SUB_LCGRPCONFIG(PID = 55)

07 Load KNXnet/IP Parameter Object MaC: PropertyWrite Router Object:
PID_PROJECT_INSTALLATION_ID (PID = 51)
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)
PID_IP_ASSIGNMENT_METHOD (PID = 55)
PID_IP_ADDRESS (PID = 60)
PID_SUBNET_MASK (PID = 61)
PID_DEFAULT_GATEWAY (PID = 62)
PID_ROUTING_MULTICAST_ADDRESS (PID = 66)
PID_TTL (PID = 67)
PID_FRIENDLY_NAME (PID = 76)

08 Merge point 3

© C i h 2004 2021 A i i S S ifi i 02 01 01 94 f 9

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|06|Load Router Object: Routingtable|Prepare routingtable ( Clear complete routingtable)<br>MaC: FunctionPropertyCommand, Router<br>Object.PID_ROUTETABLE_CONTROL:, SRVID_CLEAR_ROUTINGTABLE<br>A_FilterTable_Open for direct memory access (may be necessary for<br>different  implementations)<br>Insert used group addresses over Direct Memory Access<br>MaC: LC_EXT_MEMORY_WRITE<br>MaS: LC_EXT_MEMORY_RESPONSE|
|07|LoadComplete Router Object|<br>MaC: Set LoadControl Router Object = Load Complete<br>MaS: Set LoadState Router Object = Loaded|
|08|Disconnect|Disconnect via Bus<br>Disconnect via bus|

|Nr.|Device Management Procedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>Optional: MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>Optional: e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Start Loading Router Object|<br>If LoadState Router Object <>  Loaded<br>Disconnect and continue with Nr. 05 of complete download because<br>the content of the Filter Table may be inconsistent.<br>Endif<br>MaC: Set LoadControl Router Object = Start Loading<br>MaS: Set LoadState Router Object = Loading|
|06|Load Router Object Parameter|MaC: PropertyWrite Router Object:<br>PID_MAIN_LCCONFIG(PID = 52)<br>PID_SUB_LCCONFIG(PID = 53)<br>PID_MAIN_LCGRPCONFIG(PID = 54)<br>PID_SUB_LCGRPCONFIG(PID = 55)|
|07|Load KNXnet/IP Parameter Object|<br>MaC: PropertyWrite Router Object:<br>PID_PROJECT_INSTALLATION_ID (PID = 51)<br>PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)<br>PID_IP_ASSIGNMENT_METHOD (PID = 55)<br>PID_IP_ADDRESS (PID = 60)<br>PID_SUBNET_MASK (PID = 61)<br>PID_DEFAULT_GATEWAY (PID = 62)<br>PID_ROUTING_MULTICAST_ADDRESS (PID = 66)<br>PID_TTL (PID = 67)<br>PID_FRIENDLY_NAME (PID = 76)|
|08|Merge point 3||


-----

Disconnect via bus

###### 3.11.1.7 Load procedure for partial download “Cfg”
This load procedure is performed by the S-Mode MaC if only parameters with “Cfg” flags have to be
downloaded.

**Nr.** **Device Management Procedure** **Description**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 1 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

Optional: MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

Optional: e.g. PropCompare

04 Set Verify Mode PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))

05 Start Loading Router Object If LoadState Router Object <> Loaded

Disconnect and continue with Nr. 05 of complete download because
the content of the Filter Table may be inconsistent.

Endif

MaC: Set LoadControl Router Object = Start Loading
MaS: Set LoadState Router Object = Loading

06 Load KNXnet/IP Parameter Object MaC: PropertyWrite Router Object:
PID_PROJECT_INSTALLATION_ID (PID = 51)
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)
PID_IP_ASSIGNMENT_METHOD (PID = 55)
PID_IP_ADDRESS (PID = 60)
PID_SUBNET_MASK (PID = 61)
PID_DEFAULT_GATEWAY (PID = 62)
PID_ROUTING_MULTICAST_ADDRESS (PID = 66)
PID_TTL (PID = 67)
PID_FRIENDLY_NAME (PID = 76)

07 Merge point 3

08 LoadComplete Router Object MaC: Set LoadControl Router Object = Load Complete (to inform the MaS
that the load procedure is complete)

MaS: Set LoadState Router Object = Loaded

09 Merge point 4 optional: additional Parameter Write

© C i h 2004 2021 A i i S S ifi i 02 01 01 9 f 96

|Nr.|Device Management Procedure|Description|
|---|---|---|
|09|Load Router Object: Routingtable|Prepare routingtable ( Clear complete routingtable)<br>MaC: FunctionPropertyCommand, Router<br>Object.PID_ROUTETABLE_CONTROL:, SRVID_CLEAR_ROUTINGTABLE<br>A_FilterTable_Open for direct memory access (may be necessary for<br>different  implementations)<br>Insert used group addresses over Direct Memory Access<br>MaC: LC_EXT_MEMORY_WRITE<br>MaS: LC_EXT_MEMORY_RESPONSE|
|10|LoadComplete Router Object|<br>MaC: Set LoadControl Router Object = Load Complete (to inform the MaS<br>that the load procedure is complete)<br>MaS: Set LoadState Router Object = Loaded|
|11|Merge point 4|optional: additional Parameter Write|
|12|Restart and Disconnect|Restart<br>Disconnect via bus|

|Nr.|Device Management Procedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 1|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>Optional: MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>Optional: e.g. PropCompare|
|04|Set Verify Mode|PropWrite(DeviceObj, PID_DEV_CONTROL (PID = 14))|
|05|Start Loading Router Object|<br>If LoadState Router Object <>  Loaded<br>Disconnect and continue with Nr. 05 of complete download because<br>the content of the Filter Table may be inconsistent.<br>Endif<br>MaC: Set LoadControl Router Object = Start Loading<br>MaS: Set LoadState Router Object = Loading|
|06|Load KNXnet/IP Parameter Object|MaC: PropertyWrite Router Object:<br>PID_PROJECT_INSTALLATION_ID (PID = 51)<br>PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (PID = 53)<br>PID_IP_ASSIGNMENT_METHOD (PID = 55)<br>PID_IP_ADDRESS (PID = 60)<br>PID_SUBNET_MASK (PID = 61)<br>PID_DEFAULT_GATEWAY (PID = 62)<br>PID_ROUTING_MULTICAST_ADDRESS (PID = 66)<br>PID_TTL (PID = 67)<br>PID_FRIENDLY_NAME (PID = 76)|
|07|Merge point 3||
|08|LoadComplete Router Object|MaC: Set LoadControl Router Object = Load Complete (to inform the MaS<br>that the load procedure is complete)<br>MaS: Set LoadState Router Object = Loaded|
|09|Merge point 4|optional: additional Parameter Write|


-----

Disconnect via bus

###### 3.11.1.8 Unload procedure
The unload procedure can be performed with or without the project information from the S-Mode MaC. If
the Router is unloaded without project information then Merge points 5 will not be executed. In this case
the standard unload procedure without merge points will be executed.

This unload procedure will be executed for all devices with Mask Version 091Ah, regardless if they are
capable of using the full filter table or not.

All Properties in the KNXnet/IP Parameter Object should only be downloaded if they are existent in the
database entry. Properties not existent in the database entry shall be skipped.

**Nr.** **Device ManagementProcedure** **Description**

01 Connect Connect via bus

02 Verifying Device Version DeviceDescRead Type 0 (MaskVersion Read)

03 Merge point 5 Mandatory: Verify manufacturer against database entry:
MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)

MaC: Capability check:
(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)

Optional: e.g. PropCompare

Implementation specific unload procedure

Restart if necessary

04 Disconnect Disconnect via bus

##### 3.11.2 Setting of IP Properties
Please refer to clause 2.7.

#### 3.12 Configuration Procedures for Coupler Model 2.0

##### 3.12.1 General requirements

###### 3.12.1.1 Introduction
For the Coupler Model 2.0, the general requirements of the Configuration Procedures of System B shall
apply. These are specified in clause 3.5.1.

The only difference is that there is only one mandatory memory mapped programmable part, this is the
“Filter Table Realization Type 3” as specified in [05].

###### 3.12.1.2 Load State Machine
For the Load State Machine in the Device Object, the MaS shall never restart the Coupler Model 2.0
while the Load State is “Loading”.

For the Load State Machine in the Router Object, the requirements of clause 2.5.1.1 “Load State
Machine” of System B in 3.5.1.1 shall apply as well for the Coupler Model 2.0.

© C i h 2004 2021 A i i S S ifi i 02 01 01 96 f 9

|Nr.|Device Management Procedure|Description|
|---|---|---|
|10|Restart and Disconnect|Restart<br>Disconnect via bus|

|Nr.|Device ManagementProcedure|Description|
|---|---|---|
|01|Connect|Connect via bus|
|02|Verifying Device Version|DeviceDescRead Type 0 (MaskVersion Read)|
|03|Merge point 5|Mandatory: Verify manufacturer against database entry:<br>MaC: PropRead(DeviceObj, PID_MANUFACTURER_ID (PID = 12)<br>MaC: Capability check:<br>(e.g.) MaC: PropRead(DeviceObj, PID_HARDWARE_TYPE (PID = 78)<br>Optional: e.g. PropCompare<br>Implementation specific unload procedure<br>Restart if necessary|
|04|Disconnect|Disconnect via bus|


-----

###### 3.12.1.3 Load Controls
The same Load Controls for the Load State Machine and the same additional Load Events (0Bh “Data
Relative Allocation”) as specified for System B in clause 3.5.1.2 “Load controls” shall apply as well for
the Coupler Model 2.0.

##### 3.12.2 Configuration Procedure to verify the installed device
This is not a full and own standing Configuration Procedure, but a series of Management Procedures that
are used before starting the further real Configuration Procedures.

/* Establish a Transport Layer connection to the Coupler. */
DMP_Connect_RCo(IA, connection-oriented);

NOTE 8 DMP_Connect_RCo also returns the Device Descriptor Type 0.

Compare the read out value of DD0 with the value of DD0 the device that will be downloaded.

/* Check that the hardware type matches the given value in the product data */
/* by reading and evaluating PID_MANUFACTURER_ID and PID_HARDWARE_TYPE. */
DM_Identify_RCo2(Manufacturer Code, Hardware Type);

/* Get the access rights. */
DM_Authorize2_RCo(client_key);

Most Configuration Procedures base on project information which can thus be assumed to be available.
These can thus base on PID_HARDWARE_TYPE. Only the procedure Unload is required to be possible
without project information: it therefore does not base on PID_HARDWARE_TYPE, but on
PID_PROGRAM_VERSION. The MaC shall update PID_PROGRAM_VERSION in its default
Configuration Procedures.

If the MaC (ETS) does not know the Object Indexes then it shall firstly scan the Interface Objects. The
request and the response shall use point-to-point connectionless communication mode; if the MaC has a
TL connection established with the Coupler, it shall use point-to-point connection-oriented
communication mode.

DMP_InterfaceObjectScan_R(ASAP)

In the list of Interface Objects, there shall be two instances of the Router Object. The MaC shall relate the
Router Object instance with the lower Object Index to the Primary Side and the instance with the higher
Object Index to the Secondary Side.

In the below, RouterObjectPrim denotes the Router Object of the Primary Side and RouterObjectSec
denotes the Router Object of the Secondary Side.

With the returned information, the MaC knows what Router Object relates to the Primary Side and what
Router Object relates to the Secondary Side.

##### 3.12.3 Network Configuration Procedure – Individual Address Assignment
The Device Configuration Procedures mainly use point-to-point communication. For this, it is primordial
that the local interface and the Couplers in the installation have the correct Individual Addresses.

/* Assign the main IA. */
NM_IndividualAddress_Write(/* [in] */ IA_new);

© C i h 2004 2021 A i i S S ifi i 02 01 01 9 f 98


-----

##### 3.12.4 Configuration Procedure for a complete download

/* Match the installed device with the description from the MaC’s project information as specified in 3.12.2 */

/* Connect to the Coupler. */
DMP_Connect_RCo(connection oriented communication, descriptor_type = 0);

**MergeID 1**

At this point, implementation specific additional Management Procedures may be executed.

This MergeID 1 is thought to allow the manufacturer to verify possible additional Properties before
the download starts.

/* Set the Load State Machine of the Device Object to “Unloaded”. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = 0, data = {event = 04h});

This setting of the LSM of the Device Object makes amongst other that the routing of group messages is
halted, so that the MaC may now modify any parameter without possible ambiguous situations for the
MaS (Coupler).

**MergeID 2**

At this point, implementation specific additional Management Procedures may be executed.

At this point, the LSM of the Device Object is “Unloaded”, the LSM of the Filter Table is has not
yet been changed, but no loading has started yet

NOTE 9 PID_LOAD_STATE_CONTROL is of type PDT_CONTROL and not of type PDT_FUNCTION. It shall thus be accessed
using A_PropertyValue_Write and not using A_FunctionProperty_Command.

/* Set the Load State Machine of the Device Object to “Loading”. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = 0, data = {event = 01h});

/* Set the Load State of the Secondary Router Object to “Loading”. */
/* There is no need to identify the PID: this procedure always accesses PID_LOAD_STATE_CONTROL. */
/* It may be that the LSM of the Secondary Router Object is in the state “Error”, */
/* which it can only leave through “Unloading”. Hence, for a full download, */
/* the state is firstly set to “Unloaded”. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject2.ObjectIndex, data = EV_UNLOAD);
/* Now, the LSM can be set to “Loading”. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject2.ObjectIndex, data = EV_START_LOAD);

/* Clear the Filter Table. */
DM_FunctionProperty_Write_R(OI = RouterObjectSec.ObjectIndex, PID = PID_ROUTE_TABLE_CONTROL,

command = SRVID_CLEAR_ROUTINGTABLE, error);
/* There is no need to check the state of the clearing of the Filter Table in a subsequent */
/* A_FunctionPropertyState_Read, as the Coupler should have reported any error */
/* in the “error” above. */

/* Memory allocation shall always be done, in line with other Configuration Procedures. */
/* Always the maximal size for 65 535 GAs shall be allocated = MAX_FILTER_TABLE_SIZE. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObjectSec.ObjectIndex,

data = EV_ADDITIONAL(requested memory_size = MAX_FILTER_TABLE_SIZE));

© C i h 2004 2021 A i i S S ifi i 02 01 01 98 f 99


-----

/* Load the Filter Table. */
/* The Filter Table shall only be loaded if it is used by the device. */
**IF PID_FILTER_TABLE_USE = TRUE THEN**
/* Get the pointer to the memory mapped Filter Table. */
DMP_InterfaceObjectRead_R(OI = RouterObject.ObjectIndex, PID = PID_TABLE_REFERENCE,
start_index = 1, element_count = 1, data = FilterTable.BaseAddress)
/* Write the Filter Table. */
/* If the Filter Table is totally below FFFFh, then download it in full using standard Memory Services. */
**IF (FilterTable_BaseAddress + FilterTableSize < FFFFh) THEN DMP_MemWrite_RCoV(FilterTable)**
/* If the Filter Table is partially in standard memory and partially in user memory. */
**ELSIF FilterTable_BaseAddress < FFFFh THEN**
{
DMP_MemWrite_RCoV(FilterTable part below FFFFh);
DMP_UserMemWrite_RCoV(FilterTable part above FFFFh)
}
**ELSE DMP_UserMemWrite_RCoV(FilterTable);**
**ENDIF**
/* Finally, also set the Property PID_FILTER_TABLE_USE. */
DMP_InterfaceObject_Write_R(OI = RouterObject.ObjectIndex, PID = PID_FILTER_TABLE_USE, start_index = 1,

element_count = 1, data = Filter Table Use)

**MergeID 3**

This MergeID 3 is in between the writing of the Filter Table and the setting of the FT LSM to
“Loaded”, to allow the manufacturer to add additional parameters.

If PID_PROGRAM_VERSION is used by the application and is needed for implementation
specific evaluation, then this shall be done in this MergeID 3.

/* Set the Load State of the LSM of the Filter Table to “Loaded” in the second Router Object. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject2.ObjectIndex, data = EV_LOAD_COMPLETE);
/* Read the CRC and store it in the ETS database. */
DMP_InterfaceObjectRead_R(OI = RouterObject2.ObjectIndex, PID = PID_MCB_TABLE, start_index = 1,

element_count = 1, data = ReadCRC);

/* Set PID_PROGRAM_VERSION. */
DMP_InterfaceObject_Write_R(OI = 0, PID = PID_PROGRAM_VERSION, start_index = 1, element_count = 1,

data = Program Version from product database)

/* Set the Load State of the LSM of the Device Object to “Loaded”. */
DMP_LoadStateMachineWrite_RCo_IO(OI = 0, data = EV_LOAD_COMPLETE);

/* Read the download counter. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_DOWNLOAD_COUNTER, start_index = 1, element_count = 1,

data = ReadDownLoadCounter);

The MaC shall store the read value of the Download Counter in its repository, so that it can use it later for
possible acceptance of partial download.

/* Disconnect from the device. */
DMP_Disconnect_RCo()

© C i h 2004 2021 A i i S S ifi i 02 01 01 99 f 100


-----

##### 3.12.5 Configuration Procedure for partial download - parameters

/* Match the installed device with the description from the MaC’s project information as specified in 3.12.2 */

/* Additionally, PID_PROGRAM_VERSION shall be read out and compared with the version stored */
/* in the project information. In case of a mismatch, the procedure continues with a full download. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_PROGRAM_VERSION, start_index = 1, element_count = 1,

data = Read PID_PROGRAM_VERSION)

/* Read the download counter. This can be done connectionless or connection-oriented. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_DOWNLOAD_COUNTER, start_index = 1,

element_count = 1, data = ReadDownLoadCounter)
If the read value of the Download Counter differs from the value that the MaC stored after the preceding
configuration, then the MaC shall not continue with a partial download, but instead perform a complete
download as specified in 3.12.4. Otherwise, the procedure shall continue as follows.

/* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)
/* Set the Load State Machine of the Device Object to “Unloaded”. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = 0, data = {event = 04h});

**MergeID 2**

Here, there is the possibility for the first implementation specific actions.

/* Set the Load State Machine of the Device Object to “Loading”. */
DMP_LoadStateMachineWrite_R_Co_IO(object_index = 0, data = {event = 01h});

/* Set the Property PID_FILTER_TABLE_USE. If there is an application program parameter */
/* on PID_FILTER_TABLE_USE, its value will be used instead of the constant 01. */
DMP_InterfaceObject_Write_R(OI = RouterObject.ObjectIndex, PID = PID_FILTER_TABLE_USE, start_index = 1,

element_count = 1, data = Filter Table Use)

**MergeID 3**

This MergeID 3 is in between the writing of the Filter Table and the setting of the FT LSM to
“Loaded”, to allow the manufacturer to add additional parameters.

If PID_PROGRAM_VERSION is used by the application and is needed for implementation
specific evaluation, then this shall be done in this MergeID 3.

/* Set the Load State of the LSM of the Device Object to “Loaded”. */
DMP_LoadStateMachineWrite_RCo_IO(OI = 0, data = EV_LOAD_COMPLETE);

/* Read the download counter. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_DOWNLOAD_COUNTER, start_index = 1, element_count = 1,

data = ReadDownLoadCounter);

/* Disconnect from the device. */
DMP_Disconnect_RCo()

© C i h 2004 2021 A i i S S ifi i 02 01 01 100 f 101


-----

##### 3.12.6 Configuration Procedure for partial download – Group Addresses

/* Match the installed device with the description from the MaC’s project information as specified in 3.12.2 */

/* Additionally, PID_PROGRAM_VERSION shall be read out and compared with the version stored */
/* in the project information. In case of a mismatch, the procedure continues with a full download. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_PROGRAM_VERSION, start_index = 1, element_count = 1,

data = Read PID_PROGRAM_VERSION)

/* Establish a Transport Layer connection to the remote device. */
DMP_Connect_RCo(IA, connection-oriented)

/* Unload the Filter Table. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject.ObjectIndex, data = EV_UNLOAD);

/* Start loading the Filter Table. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject.ObjectIndex, data = EV_START_LOAD);

/* Clear the Filter Table. */
DM_FunctionProperty_Write_R(OI = RouterObjectSec.ObjectIndex, PID = PID_ROUTE_TABLE_CONTROL,

command = SRVID_CLEAR_ROUTINGTABLE, error);

/* Allocate the memory for the Filter Table. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObjectSec.ObjectIndex,

data = EV_ADDITIONAL(requested memory_size = MAX_FILTER_TABLE_SIZE));

/* The following will be omitted if there is an application program parameter on */
/* PID_FILTER_TABLE_USE and its value is 0. */
/* Get the pointer to the memory mapped Filter Table. */
DMP_InterfaceObjectRead_R(OI = RouterObject.ObjectIndex, PID = PID_TABLE_REFERENCE, start_index = 1,

element_count = 1, data = FilterTable.BaseAddress)
/* Write the Filter Table. */
/* If the Filter Table is totally below FFFFh, then download it in full using standard Memory Services. */
**IF (FilterTable_BaseAddress + FilterTableSize < FFFFh) THEN DMP_MemWrite_RCoV(FilterTable)**
/* If the Filter Table is partially in standard memory and partially in user memory. */
**ELSIF FilterTable_BaseAddress < FFFFh THEN**
{
DMP_MemWrite_RCoV(FilterTable part below FFFFh);
DMP_UserMemWrite_RCoV(FilterTable part above FFFFh)
}
**ELSE DMP_UserMemWrite_RCoV(FilterTable);**

/* Set the Load State of the LSM of the Filter Table to “Loaded” in the second Router Object. */
DMP_LoadStateMachineWrite_RCo_IO(OI = RouterObject2.ObjectIndex, data = EV_LOAD_COMPLETE);

/* Read the CRC and store it in the ETS database. */
DMP_InterfaceObjectRead_R(OI = RouterObject2.ObjectIndex, PID = PID_MCB_TABLE, start_index = 1,

element_count = 1, data = ReadCRC);

/* Read the download counter. */
DMP_InterfaceObjectRead_R(OI = 0, PID = PID_DOWNLOAD_COUNTER, start_index = 1, element_count = 1,

data = ReadDownLoadCounter);

/* Disconnect from the device. */
DMP_Disconnect_RCo()

© C i h 2004 2021 A i i S S ifi i 02 01 01 101 f 102


-----

##### 3.12.7 Configuration Procedure for Unload

NOTE 10 In comparison with other Configuration Procedures, for Unload the installed device is not matched with the description
from the MaC’s project information. Solely the DD0 is read out to confirm the MaS as a mask m920h.

/* Connect to the Coupler and read the DD0. */
DMP_Connect_RCo(connection oriented communication, descriptor_type = 0);

/* In case no project information is available, PID_PROGRAM_VERSION is read to possibly find
/*¨the product in the product database, for possible implementation specific extensions to this procedure. */
DMP_InterfaceObjectRead_R(OI = 0 /* Device Object */, PID = PID_PROGRAM_VERSION, start_index = 1,
element_count = 1, data = Program Version)
**MergeID 3**

This MergeID 3 shall allow for further implementation specific Unload behaviour, such as the
resetting of implementation specific Parameters.

To this, PID_PROGRAM_VERSION may be read out and evaluated in the MergeID.

/* Request a Master Reset, resetting everything ex-factory, except the IA. */
DM_Restart_RCo(mpp_RestartType = Master Reset, mpp_EraseCode = “Factory Reset without IA”,

mpp_ChannelNumber = 00h, mpp_ErrorCode, mpp_ProcessTime)

#### 3.13 Configuration Procedures for USB interfaces

##### 3.13.1 Introduction
This clause 3.13 is structured as follows.

   - clause 3.13.3 “Configuration of mask 2311h”
This clause specifies the management of the KNX RF USB interface as standalone device. This
mainly considers the usage as interface to the bus, the management of the IA, the layer
switching etc.

   - clause 3.13.3.7 “Usage of the KNX USB RF Interface 1.1”
This considers how devices shall be managed in case the RF USB interface is hosted in an end
device. This considers aspects like Local Network Management and Local Device Management.

##### 3.13.2 Discovery of the model of the local device.

###### 3.13.2.1 Discovery of the type of USB interface
The MaC shall at first use the USB device feature services (clause 3.5.3.2 in [14]), “Device Feature Get”,
to read the Device Feature 02 “Host Device Device Descriptor Type 0”.

   - If this feature does not exist, the MaC shall assume an USB interface named “KNX USB data
interface device” in [11] and continue the discovery by reading the device features and the
Properties of the cEMI Server Object, like PID_MEDIUM_TYPE.
   - If this feature request is responded, then it may have the following values

**Table 6 – DD0 for KNX USB interfaces**

**Mask** **Medium, Type** **Description**

0310h KNX TP1 USB TP1 Interface 1.1

2311h KNX RF USB RF Interface 1.1

© C i h 2004 2021 A i i S S ifi i 02 01 01 102 f 103

|Mask|Medium, Type|Description|
|---|---|---|
|0310h|KNX TP1|USB TP1 Interface 1.1|
|2311h|KNX RF|USB RF Interface 1.1|


-----

For these Profiles, the use of EMI1 and EMI2 is not allowed. Consequently, the MaC may assume that
cEMI is supported. The MaC shall use the cEMI services for local management (clause 4.1.7 in [07],
M_PropRead, Mr_PropWrite) to further discover and manage the interface.

###### 3.13.2.2 Discovery of the local communication medium
The MaC shall conclude on the local KNX communication medium based on the above read value of the
Device Feature 02.

###### 3.13.2.3 Discovery of the possible additional implemented Profiles
In order to find out whether the USB interface is implemented in combination with another Profile, the
MaC shall read PID_DEVICE_DESCRIPTOR in the Device Object, again using the cEMI Services for
Local device management (M_PropRead, M_PropWrite).

- If this again returns the value 2311h, then the MaC shall assume that no further Profiles are
implemented in combination with the USB interface.

- If this returns a DD0-value x different from 2311h, then the MaC shall assume that the KNX USB
RF interface 1.1 is implemented in combination with a Profile according mask version x.

##### 3.13.3 Configuration of mask 2311h as stand-alone interface

###### 3.13.3.1 Busmonitor Mode

- For a stand-alone interface with DD0 equal to 2311h, the MaC may assume that the Busmonitor
Mode is supported.

- For a stand-alone interface with DD0 equal to 0310h, Busmonitor Mode is optional. To discover
whether Busmonitor Mode is supported or not, the MaC shall read
PID_COMM_MODES_SUPPORTED in the cEMI Server Object.

###### 3.13.3.2 Local Network Configuration (= via the cEMI interface)
The Network Management concerns the setting of the DoA and the IA of the interface. These data are
available as PID_RF_DOMAIN_ADDRESS in the Device Object and PID_CEMI_SERVER_SNA and
PID_CEMI_SERVER_DEVICE_ADDRESS in the cEMI Server Object and shall be accessed through
cEMI Services for Local device management (M_PropRead, M_PropWrite).

These settings shall apply immediately, this is, without reset.

###### 3.13.3.3 Remote Network Configuration (= via the bus)
It shall not be possible to change the Network Configuration via the bus.

The MaS shall not support the Remote Network Configuration Procedures to this[ 1)]; neither shall it allow
write access to PID_RF_DOMAIN_ADDRESS (RF Medium Object or Device Object),
PID_CEMI_SERVER_SNA or PID_CEMI_SERVER_DEVICE_ADDRESS.

The MaC shall not attempt to change the mask 2311h DoA of IA via the bus.

**If the USB connection is closed**

The Management of mask 2311h shall act as the MaS and shall not support the Network Configuration.

**If the USB connection is open**

If the cEMI Client is connected to the Data Link Layer, then mask 2311h will pass all messages from the
bus to the cEMI Client, which may either ignore these messages, in which case this Network
Configuration will fail, or may properly respond to these services, acting as an end device.

1) Mask 2311h shall not support Programming Mode and shall not react to the Network Configuration Procedures
in [07] that modify the DoA or IA.

© C i h 2004 2021 A i i S S ifi i 02 01 01 103 f 104


-----

If the cEMI Client is connected to the optional cEMI Transport Layer, then the following applies.

   - As required in clause 3.5.4.2.2 in [14], the Transport Layer will refuse further TL-connections
from the bus.

   - T_Data_Individual-message received from the bus will be accepted (acknowledged) and will be
passed to the cEMI Client, which may or may not respond to these services, respectively acting
as an end device or not.

###### 3.13.3.4 Local Device Configuration
Mask 2311h is natively only designed to host the USB interface functionality, and no other KNX
functionality like an Application Program, Coupler functionality, gateway or other. This shall only be
realised by combining mask 2311h with a mask n in the same device.

Consequently, the Local Device Configuration shall be limited to the configuration of the USB interface,
using the cEMI services for device management (M_Prop...) accessing the Properties in the cEMI Server
Object and the Device Object.

The cEMI Transport Layer is optional. The MaC shall read PID_COMM_MODES_SUPPORTED in the
cEMI Server Object to discover in particular whether the cEMI Transport Layer is supported.

   - If this is the case, then Local Device Configuration shall be possible.
As mask 2311h does not foresee any further management than the Local Network
Configuration, this cEMI Transport Layer is only an additional to the cEMI Services for local
management and shall not address any further Resources in the mask 2311h.

   - If cEMI Transport layer is not implemented, then the MaC shall not attempt any further device
configuration.

###### 3.13.3.5 Remote Device Configuration
The MaC shall not attempt any Remote Device Configuration of the mask 2311h.

###### 3.13.3.6 Further features
PID_IO_LIST in the Device Object allows discovery of all implemented KNX Interface Objects.

###### 3.13.3.7 Usage of the KNX USB RF Interface 1.1

3.13.3.7.1 RF Domain Address
Please refer to the Network Configuration Procedures for the mask 2311h (clause 3.13.3) and for the
implementation of mask 2311 with another mask n (clause 3.13.4).

The MaC shall not show Telegrams that come from other DoAs than the ones used in the own project.
For diagnostic reason it may be interesting for the user to know that Telegrams are going on the
neighbouring installations, without knowing the exact contents of the Frame. This will also show “own
devices” that would use incorrect DoA. These Frames with unknown DoA should be indicated, but the
content shall not be shown (with ***********).

Telegrams using extended RF group addresses with KNX Serial Numbers shall also be shown as
unknown device

© C i h 2004 2021 A i i S S ifi i 02 01 01 104 f 10


-----

3.13.3.7.2 Use of the cEMI Server IA

- If the mask 2311h is implemented as a stand-alone Profile in a device, thus not combined with any
other device Profile, then it may typically be powered exclusively over USB, and e.g. not via the
KNX bus. In that case, the cEMI Server will not be able to defend its IA while the USB cable is
unplugged. ETS should in that case check either not assign the IA to any other device [1]) or check the
uniqueness of the IA when reconnected.

- In case the mask 2311h is implemented in combination with another KNX Profile in a device, then
likely it will remain powered if the USB cable is disconnected and thus be able to defend its cEMI
Server IA.
In that case however, the cEMI Client, the MaC or any other user of the KNX RF USB interface,
shall never assign an IA to the cEMI Server that equals the IA of the end device part. This may lead
to unwanted behaviour and the RF USB Interface does not refuse this.

##### 3.13.4 Configuration of masks combined with mask 2311h

###### 3.13.4.1 Busmonitor Mode
Busmonitor Mode is optional if mask 2311h is combined with a mask n.

To discover whether Busmonitor Mode is supported or not, the MaC shall read
PID_COMM_MODES_SUPPORTED in the cEMI Server Object.

###### 3.13.4.2 Local Network Configuration (= via the cEMI interface)
The Network Configuration of the mask 2311h part shall be done as specified in 3.13.3.2, this is,
accessing Properties using the cEMI services for local device management.

The Local Network Configuration of the mask n shall be performed by using the cEMI Services for local
management accessing the Properties PID_SUBNET_ADDR and PID_DEVICE_ADDR in the Device
Object.

NOTE 11 The MaC could alternatively do this by connecting to the cEMI Transport Layer and using the Data Property services
(A_PropertyValue_....). This would however force the implementation of the cEMI Transport Layer solely for this reason. So, the
MaC shall not use the cEMI TL for the Local Network Management.

NOTE 12 Alternatively, the MaC could connect to the Data Link Layer of mask 2311h and assign the mask n IA via broadcast
communication of A_IndividualAddress_Write. On KNX RF, this would cause unnecessary busload; on KNX TP1, this would mean
that the device has to acknowledge a Telegram that it has sent out itself. Additionally, this would require that the Programming
Mode is firstly enabled in the device. This can be requested from the MaC user, who may not expect this requirement for a local
configuration, or the MaC may itself firstly enable Programming Mode in the device, through Properties, but then it may as well
directly write the Properties for the mask n IA. Additionally, the default NM_IndividualAddress_Write ends with a Restart, which may
cause that the cEMI Server resets as well. Therefore, this method shall not be chosen either.

The MaC shall take into account that the Domain Address for the cEMI Server is stored in PID_RF_DOMAIN_ADDRESS in the RF Medium Object, and is shared with the mask n implementation. Both
share this same DoA, so, if the cEMI Client modifies the DoA, then also the DoA of the mask n part will
change.

Therefore, if the MaC wants to transmit on a different DoA than the DoA contained in the Device Object,
then it should rather overrule the use of the Device DoA by adding a different DoA in an AddInfo-field in
the L_Data.req.

The confirmation in the L_Data.con shall contain the used DoA as describe in clause 4.1.4.3.2 in [07].

- Obviously if the own DoA of the interface is used, the transmission and confirmation will use the
same DoA and the communication will work.

- If in the other option another DoA is enforced by the MaC, then the response will not be received, as
it does not contain the Device DoA. This would be filtered out by the Layer-2 of the interface. The
MaC should in this case take care setting PID_FILTERING_MODE_SELECT to accept all KNX RF
Frames with ay DoA.

1) For instance, the interface could/should be projected and represented explicitly in the topology.

© C i h 2004 2021 A i i S S ifi i 02 01 01 10 f 106


-----

###### 3.13.4.3 Remote Network Configuration (=via the bus)
Also in a combined device, the MaC shall not configure the DoA or IA of the mask 2311h part over the
bus.

The MaC shall allow the Remote Network Configuration of the mask n part via the bus, according the
Management Procedures for the specific mask n, like NM_DomainAndIndividualAddress_Write,
NM_IndividualAddress_Write, NM_IndividualAddress_SerialNumber_Write and other.

NOTE 13 The mask 2311h part has an own IA, but shares its DoA with the DoA of the mask n part. This means that if the DoA of
the mask n part changes, that also the DoA of the mask 2311h part changes. This is not a problem in case there is only one single
MaC, which anyhow either connected remotely or connected locally.

**Reset**

The above Remote Network Management Procedures may end with an A_Restart-service. The
interpretation of this for the mask 2311h are implementation specific. If the mask 2311h in any way
interprets the reset, then it shall send an M_Reset.ind to the cEMI Client.

EXAMPLE 17 If PID_COMM_MODE or PID_FILTERING_MODE_SELECT changes value because of this A_Restart, then the
M_Reset.ind shall be sent.

###### 3.13.4.4 Local Device Configuration
The MaC shall perform the Local Device Configuration as independent parts each as specified before.

###### 3.13.4.5 Remote Device Configuration
The Remote Device Configuration of the mask n combined with the mask 2311h shall mainly concern the
Device Configuration of the mask n: the Resources of the mask 2311h mainly concern Network
Configuration – not Device Configuration – and are specified not be be able to be configured from
remote.

© C i h 2004 2021 A i i S S ifi i 02 01 01 106 f 10


-----

### 4 E-Mode

#### 4.1 Flexible E-Mode Channels

###### 4.1.1.1 Basic model – Fixed E-Mode Channel Object
Every E-Mode Channel shall be represented as an Interface Object of the type E-Mode Channel (Object
Type 14) as specified in Chapter 3/5/1 “Resources” ([05]). This E-Mode Channel Object shall contain all
data for description and configuration of:

   - the E-Mode Channel itself, and

   - its Group Objects, and

   - its Parameters.

**Table 7 – E-Mode Channel Object (example)**

NOTE 14 This is a worked out example of the existing E-Mode Channel CH_PB_Timed_Info.
NOTE 15 The Property Names and Identifiers in the below are only given for reference. Please refer to the
normative specification in [05].

**PID** **PID** **Value**

**Property Name**

**Value** **Name** **(remark)**

1 PID_OBJECT_TYPE Interface Object 14
Type

2 PID_OBJECT_NAME Interface Object [52h, 6Fh, 63h, 6Bh, 65h, 72h, 20h, 54h, 6Fh, 70h]
Name (“Rocker Top”)

25 PID_VERSION Version 1003h
(version 2.0.3)
51 PID_CHAN_NUMBER Channel Number 1
52 PID_CHAN_CODE Channel Code 0004h
(CH_PB_Timed_Info)
53 PID_CHAN_FLAGS Channel Flags 0000000000100010b
(non-adjustable input E-Mode Channel; supporting
Localisation Reports)
54 PID_CHAN_FB_LIST Functional Block [0196h, 01A5h]
List ({406 = FB Timed Sensor, 421 = FB Switching Sensor

Basic})
55 PID_CHAN_ADJ_LISTS Adjustable Not implemented: this is not an Adjustable E-Mode Channel.

Channel Object
List

61 PID_GO_CCODES_LIST Connection Codes [0002000000000000h, 0003000000000000h]

( GO 1: CC_Switched_OnOff_Status +0 + 0 + 0
GO 2: CC_Timed + 0 + 0 + 0)
62 PID_GO_CFLAGS_LIST Connection Flags [0004h, 0202]
( GO 1: {I},
GO 2: {O, L})
63 PID_OBJECTLINK Object Link PDT_FUNCTION
64 PID_GO_SUBUNIT Subunit Number [00h, 00h]
( GO 1: does not belong to a subunit,
GO 2: does not belong to a subunit)
65 PID_GO_NAME_LIST Group Object [53746174757320686E2031h, 54696D64204F75742031h]
Names ( GO 1: “Status In 1”,

GO 2: “Timd Out 1”)
70 PID_PARAM_TYPES Parameter Types (This E-Mode Channel does not have Parameters.)
71 PID_PARAM_FLAGS Parameter Flags (This E-Mode Channel does not have Parameters.)
72 PID_PARAM_NAMES Parameter Names (This E-Mode Channel does not have Parameters.)
73 PID_PARAM_UNITS Parameter Units (This E-Mode Channel does not have Parameters.)
79 PID_PARAM_VALUES Parameter Values (This E-Mode Channel does not have Parameters.)

© C i h 2004 2021 A i i S S ifi i 02 01 01 10 f 108

|PID<br>Value|PID<br>Name|Property Name|Value<br>(remark)|
|---|---|---|---|
|<br>1|<br> PID_OBJECT_TYPE|Interface Object<br>Type|<br>14|
|2|PID_OBJECT_NAME|Interface Object<br>Name|[52h, 6Fh, 63h, 6Bh, 65h, 72h , 20h, 54h, 6Fh, 70h]<br>(“Rocker Top”)|
|25|PID_VERSION|Version|1003h<br>(version 2.0.3)|
|51|PIDCHANNUMBER|Channel Number|1|
|<br>52|__<br> PID_CHAN_CODE|Channel Code|0004h<br>(CHPBTimedInfo)|
|53|PID_CHAN_FLAGS|Channel Flags|___<br>0000000000100010b<br>(non-adjustable input E-Mode Channel; supporting<br>Localisation Reports)|
|54|PID_CHAN_FB_LIST|Functional Block<br>List|[0196h, 01A5h]<br>({406 = FB Timed Sensor, 421 = FB Switching Sensor<br>Basic})|
|55|PID_CHAN_ADJ_LISTS|Adjustable<br>Channel Object<br>List|Not implemented: this is not an Adjustable E-Mode Channel.|
|61|PID_GO_CCODES_LIST|Connection Codes|[0002000000000000h, 0003000000000000h]<br>( GO 1:<br>CC_Switched_OnOff_Status +0 + 0 + 0<br> GO 2:<br>CCTimed+ 0+ 0+ 0)|
|62|PID_GO_CFLAGS_LIST|Connection Flags|_ <br>[0004h, 0202]<br>( GO 1:<br>{I},<br> GO 2:<br>{O, L})|
|63|PIDOBJECTLINK|Object Link|<br>PDTFUNCTION|
|<br>64|_<br> PID_GO_SUBUNIT|Subunit Number|_<br>[00h, 00h]<br>( GO 1:<br>does not belong to a subunit,<br> GO 2:<br>does not belong to a subunit)|
|65|PID_GO_NAME_LIST|Group Object<br>Names|<br>[53746174757320686E2031h, 54696D64204F75742031h]<br>( GO 1:<br>“Status In 1”,<br> GO 2:<br>“Timd Out 1”)|
|70|PIDPARAMTYPES|Parameter Types|(This E-Mode Channel does not have Parameters.)|
|<br>71|__<br> PIDPARAMFLAGS|Parameter Flags|(This E-Mode Channel does not have Parameters.)|
|<br>72|__<br> PIDPARAMNAMES|Parameter Names|(This E-Mode Channel does not have Parameters.)|
|<br>73|__<br> PIDPARAMUNITS|Parameter Units|(This E-Mode Channel does not have Parameters.)|
|<br>79|__<br> PIDPARAMVALUES|Parameter Values|(This E-Mode Channel does not have Parameters.)|


-----

###### 4.1.1.2 Adjusted E-Mode Channel Object

4.1.1.2.1 Specification
The concept of Adjustable the E-Mode Channel shall allow for alternative description and configuration
of

   - its Group Objects, and

   - its Parameters.

This is controlled through the Adjustable Parameter (AJS), which shall always be the first parameter of
the E-Mode Channel Object.

If the AJS has value 0, then the description and configuration of Group Objects and Parameters of the EMode Channel shall apply.

Every higher value of AJS (1, 2, 3…) shall specify alternative descriptions and configuration of Group
Objects and Parameters of the same E-Mode Channel, which shall however be accessed through 1 or
more instances of the Adjusted E-Mode Channel Object as specified in [05].

In the E-Mode Channel Object, the Property Adjustable Channel Object List (see [05]) shall specify the
object indexes of the Adjusted E-Mode Channel Objects for every possible value of AJS.

For linking purpose, the Property PID_OBJECTLINK (see [05]) of the Adjusted E-Mode Channel Object
shall be used, and not the same Property from the E-Mode Channel Object.

4.1.1.2.2 Example
Table 8 gives an example of an Adjusted E-Mode Channel Object for AJS = 1. Please compare with
Table 9 to see the difference in active GOs, names, Connection Codes, etc.

**Table 8 – Adjusted E-Mode Channel Object for AJS = 5: PB Sunblind (example)**

**PID** **PID** **Value**

**Property Name**

**Value** **Name** **(remark)**

1 PID_OBJECT_TYPE Interface Object Type 15
(Adjusted E-Mode Channel)
2 PID_OBJECT_NAME Interface Object Name 50422053756E426C696E64h

(“PB SunBlind”)
61 PID_GO_CCODES_LIST Connection Codes [0001001300000000h, 000B001300000000h]
( GO 1: CC_Switch_OnOff, + CC_Logical+ 0 + 0,
GO 2: CC_Move_UpDown+CC_Logical+0+0)
62 PID_GO_CFLAGS_LIST Connection Flags [0002h, 0002h]
( GO 1: {O},
GO 2: {O})
63 PID_OBJECTLINK Object Link PDT_FUNCTION
65 PID_GO_NAME_LIST Group Object Names [5374657053746F700000h,
5570446F776E00000000h]
( GO 1: “StepStop”,
GO 2: “UpDown”)
70 PID_PARAM_TYPES Parameter Types [0103h]
( Param. 1: PART_UpDownAction
71 PID_PARAM_FLAGS Parameter Flags [0000h]
( Param. 1: is not set locally, is not void and does not require a

restart)
72 PID_PARAM_NAMES Parameter Names [504220616374696F6E00h]
( Param. 1: “PB action”)
73 PID_PARAM_UNITS Parameter Units [00000000000000000000h]
(There are no Parameter Units.)
79 PID_PARAM_VALUES Parameter Values [1]
( Param. 1: The user has changed the default value 0 = Up to

1 = Down.)

© C i h 2004 2021 A i i S S ifi i 02 01 01 108 f 109

|PID<br>Value|PID<br>Name|Property Name|Value<br>(remark)|
|---|---|---|---|
|<br>1|<br> PID_OBJECT_TYPE|Interface Object Type|<br>15<br>(Adjusted E-Mode Channel)|
|2|PID_OBJECT_NAME|Interface Object Name|50422053756E426C696E64h<br>(“PB SunBlind”)|
|61|PID_GO_CCODES_LIST|Connection Codes|[0001001300000000h, 000B001300000000h]<br>( GO 1:<br>CC_Switch_OnOff, + CC_Logical+ 0 + 0,<br> GO 2:<br>CCMoveUpDown+CCLogical+0+0)|
|62|PID_GO_CFLAGS_LIST|Connection Flags|___<br>[0002h, 0002h]<br>( GO 1:<br>{O},<br> GO 2:<br>{O})|
|63|PIDOBJECTLINK|Object Link|PDTFUNCTION|
|<br>65|_<br> PID_GO_NAME_LIST|Group Object Names|_<br>[5374657053746F700000h,<br>5570446F776E00000000h]<br>( GO 1:<br>“StepStop”,<br> GO 2:<br>“UpDown”)|
|70|PID_PARAM_TYPES|Parameter Types|[0103h]<br>( Param. 1: PARTUpDownAction|
|71|PID_PARAM_FLAGS|Parameter Flags|_ <br>[0000h]<br>( Param. 1: is not set locally, is not void and does not require a<br>restart)|
|72|PID_PARAM_NAMES|Parameter Names|[504220616374696F6E00h]<br>( Param. 1:“PB action”)|
|73|PID_PARAM_UNITS|Parameter Units|[00000000000000000000h]<br>(There are no Parameter Units.)|
|79|PID_PARAM_VALUES|Parameter Values|[1]<br>( Param. 1: The user has changed the default value 0 = Up to<br>1 = Down.)|


-----

**Table 9 – Adjusted E-Mode Channel Object for AJS = 8: Scene Number (example)**

**PID** **PID** **Value**

**Property Name**

**Value** **Name** **(remark)**

1 PID_OBJECT_TYPE Interface Object Type 15
(Adjusted E-Mode Channel)
2 PID_OBJECT_NAME Interface Object Name 5042205363656E65204E756D626572h

(“PB Scene Number”)
61 PID_GO_CCODES_LIST Connection Codes [0008000000000000h]
( GO 1: CC_Scene_Number+0+0+0)
(Only one GO is active. It has CC_Scene_Number, which is 0008h
and no additional CCs.)
62 PID_GO_CFLAGS_LIST Connection Flags [0002h]
( GO 1: O)
63 PID_OBJECTLINK Object Link PDT_FUNCTION
65 PID_GO_NAME_LIST Group Object Names {5363656E654E724F7574h}
( GO1: “SceneNrOut”)
70 PID_PARAM_TYPES Parameter Types [1101h]
( Param. 1: PART_Scene_Number)
71 PID_PARAM_FLAGS Parameter Flags [0000h]
( Param. 1: Parameter 1 is not set locally, is not void and does not

require a restart.)
72 PID_PARAM_NAMES Parameter Names 5363656E65204E720000h
( Param. 1: “Scene Nr”)
73 PID_PARAM_UNITS Parameter Units 00000000000000000000h
(There are no Parameter Units.)
79 PID_PARAM_VALUES Parameter Values [04]
( Param. 1: The user has changed the default scene number value
from 0 to 4; the PDT of this PID_PARAM_VALUES is
PDT_GENERIC_01.)

### 5

© C i h 2004 2021 A i i S S ifi i 02 01 01 109 f 110

|PID<br>Value|PID<br>Name|Property Name|Value<br>(remark)|
|---|---|---|---|
|<br>1|<br> PID_OBJECT_TYPE|Interface Object Type|<br>15<br>(Adjusted E-Mode Channel)|
|2|PID_OBJECT_NAME|Interface Object Name|5042205363656E65204E756D626572h<br>(“PB Scene Number”)|
|61|PID_GO_CCODES_LIST|Connection Codes|[0008000000000000h]<br>( GO 1:<br>CC_Scene_Number+0+0+0)<br>(Only one GO is active. It has CC_Scene_Number, which is 0008h<br>and no additional CCs.)|
|62|PID_GO_CFLAGS_LIST|Connection Flags|[0002h]<br>( GO 1:<br>O)|
|63|PIDOBJECTLINK|Object Link|<br>PDTFUNCTION|
|<br>65|_<br> PID_GO_NAME_LIST|Group Object Names|_<br>{5363656E654E724F7574h}<br>( GO1:<br>“SceneNrOut”)|
|70|PID_PARAM_TYPES|Parameter Types|<br>[1101h]<br>( Param. 1: PARTSceneNumber)|
|71|PID_PARAM_FLAGS|Parameter Flags|__<br>[0000h]<br>( Param. 1: Parameter 1 is not set locally, is not void and does not<br>require a restart.)|
|72|PID_PARAM_NAMES|Parameter Names|<br>5363656E65204E720000h<br>( Param. 1: “Scene Nr”)|
|73|PID_PARAM_UNITS|Parameter Units|<br>00000000000000000000h<br>(There are no Parameter Units.)|
|79|PID_PARAM_VALUES|Parameter Values|[04]<br>( Param. 1: The user has changed the default scene number value<br>from 0 to 4; the PDT of this PID_PARAM_VALUES is<br>PDTGENERIC01.)|


-----

### 5 Push Button Mode (PB-Mode)

#### 5.1 Introduction
In the Push Button Mode (PB-Mode), no tool or external device (e.g. PC, Controller, ETS etc.) is needed
for configuration and linking. The devices themselves do the setup of the links, the assignment of
Individual Addresses and Group Addresses. To handle this, the devices support procedures for the
configuration and the link management.

To enable development and manufacturing of low cost products, the software overhead for the mandatory
configuration and link procedures in the Push Button Mode devices must be as small as possible.

A limited parameterisation is possible (local and over the bus: max size = two octets per parameter).

The download of applications in PB-Mode is not possible. The applications must be preprogrammed or
implemented statically.

The term “push button” comes from the way to select the E-Mode Channels to link.

Subunit: a set of Group Objects inside an E-Mode Channel. This is necessary in case of an E-Mode
Channel with input - and output Group Objects with the same Connection Code (or
compatible). There must be a possibility to select the input Subunit and the output Subunit.
The best example is the CH_Logical_AND/OR.

In PB-Mode there are two types of devices:

1. transmit-only, unidirectional devices, and
2. bidirectional devices.

#### 5.2 Push Button Mode devices
As indicated in the introduction above, linking and configuration in Push Button Mode has to be achieved
without any tool. This means that the devices must take over the link management.

#### 5.3 Data for link management
To ensure only useful links, the devices need some knowledge about the Connection Rules. The necessary
information shall be exchanged between the devices during the link procedure.

For each E-Mode Channel, the necessary information shall be put in a table called Channel Descriptor.
The Channel Descriptor shall contain information about the Subunits, the E-Mode Channel functions
(E-Mode Channel Code) and the Group Objects (Connection Code).

   - EXAMPLE 18 E-Mode Channel Descriptor of a dimming actuator.

**Table 10 - E-Mode Channel descriptor – example**

**Flags for Connection**

**Subunit** **Code** **Description**
**Pos.** **Name** **Rules**
**(Examples)** **(Examples)** **(Examples)**

**(Examples)**

1 E-Mode Channel Code 1 02 Dimming actuator /

V/X/R/S
2 Connection Code Group Object 1 1 01 On/off

V/X/R/S
3 Connection Code Group Object2 1 06 Bright/dark

V/X/R/S
4 Connection Code Group Object3 1 07 Value

... ... ... ... ...

© C i h 2004 2021 A i i S S ifi i 02 01 01 110 f 111

|Pos.|Name|Subunit<br>(Examples)|Code<br>(Examples)|Description<br>(Examples)|Flags for Connection<br>Rules<br>(Examples)|
|---|---|---|---|---|---|
|1|E-Mode Channel Code|1|02|Dimming actuator|/|
|2|Connection Code Group Object 1|1|01|On/off|V/X/R/S|
|3|Connection Code Group Object2|1|06|Bright/dark|V/X/R/S|
|4|Connection Code Group Object3|1|07|Value|V/X/R/S|
|...|...||...|...|...|


-----

#### 5.4 PB-Mode Configuration Procedures

##### 5.4.1 Assignment of the Individual Address by self acquisition of the device

- **TP1, PL110**

After installation of the devices, the Individual Addresses have to be assigned.

Self-acquisition mode definition: Device operating mode in which the device starts the automatic
assignment of an Individual Address.

To assign the Individual Addresses, the installer activates the Self-acquisition mode on each device one
by one. The activation of the Self-acquisition mode is manufacturer specific.

   - After activation of the Self-acquisition mode the device itself shall check its own current
Individual Address. This is called Distributed Address Assignment (DAA). It can be done
according either one of the Network Management Procedures (see [06])

   - NM_IndividualAddress_Check, or
   - NM_IndividualAddress_Check_LocalSubnetwork.

After DAA if the device gets a new Individual Address, there are no changes on the existing links.

- **RF**

In PB-Mode on the RF medium there shall be no self-acquisition of the Individual Addresses (2 octets),
but devices shall keep their factory assigned default Individual Address 05FFh.

Individual Addresses can only be assigned if the PB-Mode devices are accessed by a central management
unit.

##### 5.4.2 Unload of Individual Address in PB-Mode
The unloading of the IA of a PB-Mode device is for the time being not possible.

##### 5.4.3 Assignment of Group Addresses

###### 5.4.3.1 Introduction
The recommended Group Address ranges are specified in [05].

The actuators shall get the Group Addresses for their input Group Objects from the sensors and shall offer
the Group Addresses from their output Group Objects during the link process.

The sensors shall send the Group Addresses from their output Group Objects during the link process and
shall obtain the Group Addresses for their input Datapoints from the actuator.

The actuators shall decide on the basis of the Connection Codes which Group Address can be connected
to which Group Object. (See “Connection Rules".)

###### 5.4.3.2 Generation of the Group Addresses
Every sending Group Object shall be assigned a single unique Group Address that is not already in use in
the network. It has to be guaranteed that each Group Address exists only once in the project. Therefore,
every assigned Group Address shall be checked with the Group Address Check, as specified in
NM_GroupAddress_Scan in [06].

If a Group Address is already in use, then another Group Address shall be tested; only a free Group
Address may be assigned to a Group Object.

This procedure shall only be used in case of “O” flag Group Objects. For “I” flag Group Objects it is not
necessary to assign Group Addresses because it is done in the link procedure. A predefined dummy
Group Address shall be used in the link procedure.

The algorithm to find a new Group Address is manufacturer specific.

© C i h 2004 2021 A i i S S ifi i 02 01 01 111 f 112


-----

**Example for Building the Group Addresses**

- **TP1, PL110**

A Group Address consists of 16 bit (2 octets). Because of the given address range the upper 3 bits in
the high octet are fixed (110xxxxxxxxxxxxxb). In the following 8 bits, the Device Address (low
octet of the Individual Address) of the device performing this procedure can be integrated. In the
following 5 bits, the appropriate Group Object number, of the Group Object for which a new sending
Group Address is being searched, can be entered.

**Individual Address**

Subnetwork Address Device Address

**0** **0** **0** **0** **X** **X** **X** **X** **D** **D** **D** **D** **D** **D** **D** **D**

**0X** **01 - FE**

X : medium dependent

**Group Address**

C000 h - DFFF h

**1** **1** **0** **D** **D** **D** **D** **D** **D** **D** **D**

**0 - 31**

**01 - FE (FF)**

Device Address ( e.g. Object No.)

**Figure 7 - Example for finding a new Group Address**

With this method, the check time (time for Group Address check) in a project with only PB-Mode
devices will be reduced to the minimum. Group Address Check for multiple consecutive Group
Addresses can be done in one step using the range attribute of the A_NetworkParameter_Read
service in NM_GroupAddress_Scan of [06].

- **RF**

Due to the open and insecure nature of the medium RF, Extended Group Addresses shall not be
assigned dynamically and checked for uniqueness, but shall be pre-assigned. Each output Group
Object (= sending Group Object) shall be linked to a pre-assigned Extended Group Address. During
the link procedure this Extended Group Address shall be assigned to an input Group Object of
another device. This shall hold for unidirectional - and bidirectional devices: unidirectional senders
shall only have output Group Objects, which shall be linked to pre-assigned Extended Group
Addresses. Bidirectional devices may have input - as well as output Group Objects, of which only
the output Group Objects shall be linked to pre-assigned Extended Group Addresses. Input Group
Objects shall be linked to Extended Group Addresses during the link procedure.

##### 5.4.4 Link procedure
The Link-Procedure shall use the following Application Layer service on system Broadcast
communication mode:

   - A_NetworkParameter_Write.

All information exchanged by devices during the Link Procedure shall be exchanged by the use of this
service.

© C i h 2004 2021 A i i S S ifi i 02 01 01 112 f 113

|0|0|0|0|X|X|X|X|D|D|D|D|D|D|D|D|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|1|1|0|D|D|D|D|D|D|D|D|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**01  -  FE (FF)**|**0  -  31**|**0  -  31**|**0  -  31**|**0  -  31**|**0  -  31**|


-----

###### 5.4.4.1 Description of the service for the Link Procedure

Interface Object Type: Device Object (Object Type = 0)
Property name: PID_Config_Link
Property identifier PID: PID_PB_CONFIG, value = 59
Value: 4 octets (MSB: Command/Flags; MSB + 1…MSB + 3: data)

  - **PID_Config_Link definition**

**Value**

**MSB** **LSB**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 Enter_Config_Mode 0 0 0 1 0 0 0 0 00h 00h 00h

2 Start_Link 0 0 1 0

Number of Group
Manufacturer Code
Objects to link

3 Channel_Function_Actuator 0 0 1 1 0 0 0 0 0 0 0 Channel Code [1] 00h

4 Channel_Function_Sensor 0 1 0 0 0 0 0 0 0 0 0 Channel Code [1] 00h

5 Set_Channel_Param 0 1 0 1 Flags Parameter Index = 1 Value Value

6 Channel_Param_Response 0 1 1 0 Flags Parameter Index Value Value

7 Begin_Connection 0 1 1 1 0 0 0 0 00h 00 h 00h

8 Set_Delete_Link 1 0 0 0 Sub- Connection Code [2 ]
function or scene number Group Address

value

9 Link_Response 1 0 0 1 Flags Connection Code [2] Group Address

10 Stop_Link 1 0 1 0 Flags 00h 00h 00h

11 Quit_Config_Mode 1 0 1 1 0 0 0 0 00h 00h 00h

12 Reset_Installation 1 1 0 0 0 0 0 0 00h 00h 00h

1 E-Mode Channel Code = 13 bit

Please refer to the “Channel Information” as part of the DD2-specification in [05].

2 Connection Code = 8 bit

Connection Codes shall indicate which Datapoints can and cannot be linked together. The
values Connection Codes are for each E-Mode Channel Specification given in [12]. An
overview is given in [09].

Reserved values shall be set to 0 and shall be checked on reception; in case of discrepancy the message
shall be discarded.

###### 5.4.4.2 Action description

5.4.4.2.1 Overview

   - This clause 5.4.4.2 details the different link procedure actions. The table below summarizes all
the described actions.

© C i h 2004 2021 A i i S S ifi i 02 01 01 113 f 114

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**MSB**|**MSB**|**MSB**|**MSB**|**MSB**|**MSB**|**MSB**|**MSB**|||||||||||||||||**LSB**|**LSB**|**LSB**|**LSB**|**LSB**|**LSB**|**LSB**|**LSB**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|1|Enter_Config_Mode|0|0|0|1|0|0|0|0|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|2|<br>Start_Link|0|0|1|0|Flags|Flags|Sub function|Sub function|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Manufacturer Code|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|
|3|Channel_Function_Actuator|0|0|1|1|0|0|0|0|0|0|0|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|00h|00h|00h|00h|00h|00h|00h|00h|
|4|<br>Channel_Function_Sensor|0|1|0|0|0|0|0|0|0|0|0|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|Channel Code1|00h|00h|00h|00h|00h|00h|00h|00h|
|5|<br>Set_Channel_Param|0|1|0|1|Flags|Flags|Flags|Flags|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Parameter Index = 1|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|
|6|<br>Channel_Param_Response|0|1|1|0|Flags|Flags|Flags|Flags|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|
|7|<br>Begin_Connection|0|1|1|1|0|0|0|0|00h|00h|00h|00h|00h|00h|00h|00h|00 h|00 h|00 h|00 h|00 h|00 h|00 h|00 h|00h|00h|00h|00h|00h|00h|00h|00h|
|8|<br>Set_Delete_Link|1|0|0|0|Sub-<br>function|Sub-<br>function|Sub-<br>function|Sub-<br>function|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Connection Code2 <br>or scene number<br>value|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|
|9|Link_Response|1|0|0|1|Flags|Flags|Flags|Flags|Connection Code2|Connection Code2|Connection Code2|Connection Code2|Connection Code2|Connection Code2|Connection Code2|Connection Code2|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|
|10|<br>Stop_Link|1|0|1|0|Flags|Flags|Flags|Flags|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|11|<br>Quit_Config_Mode|1|0|1|1|0|0|0|0|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
|12|<br>Reset_Installation|1|1|0|0|0|0|0|0|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|


-----

1 Enter_Config_Mode Actuator to all A_NetworkParameter_Write
2 Start_Link Sensor to all A_NetworkParameter_Write
3 Channel_Function_Actuator Actuator to sensor A_NetworkParameter_Write
4 Channel_Function_Sensor Sensor to actuator A_NetworkParameter_Write
5 Set_Channel_Param Actuator to sensor A_NetworkParameter_Write
6 Channel_Param_Response Sensor to actuator A_NetworkParameter_Write
7 Begin_Connection Actuator to sensor A_NetworkParameter_Write
8 Set_Delete_Link Sensor to actuator A_NetworkParameter_Write
9 Link_Response Actuator to sensor A_NetworkParameter_Write
10 Stop_Link Sensor to all A_NetworkParameter_Write
11 Quit_Config_Mode Actuator to all A_NetworkParameter_Write
12 Reset_Installation To all A_NetworkParameter_Write

5.4.4.2.2 PID_Config_Link (Enter_Config_Mode)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 Enter_Config_Mode 0 0 0 1 0 0 0 0 00h 00h 00h

This command shall be sent by a device to be linked when Config Mode becomes active in the device.
(The way how in Config Mode is activated in a device is manufacturer specific.)

This action shall activate Config Mode in all sensors and optionally locks all actuators not concerned in
this link step.

This action is optional on open media.

5.4.4.2.3 PID_Config_Link (Start_Link: Flags, Subfunction, Manufacturer Code, Number of Group
Objects to link)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

2 Start_Link 0 0 1 0 Manufacturer Code (16 bit) Number of Group

Objects to link

   - Flags: Bit 3: shall indicate to actuators how to handle the link procedure.

0 = bidirectional device
1 = unidirectional device

This shall allow systems mixing uni- and bidirectional sensors.

Bit 2: “parameter indicator” shall indicate if parameters will be sent in
additional frames.

0 = no additional frames.
1 = frames concerning parameters will be sent after DD2.

© C i h 2004 2021 A i i S S ifi i 02 01 01 114 f 11

|Pos.|Action|Message direction|Service|
|---|---|---|---|
|1|EnterConfigMode|Actuator to all|ANetworkParameterWrite|
|<br>2|__<br>StartLink|<br>Sensor to all|__<br>ANetworkParameterWrite|
|<br>3|_<br>ChannelFunctionActuator|<br>Actuator to sensor|__<br>ANetworkParameterWrite|
|<br>4|__<br>ChannelFunctionSensor|<br>Sensor to actuator|__<br>ANetworkParameterWrite|
|<br>5|__<br>SetChannelParam|<br>Actuator to sensor|__<br>ANetworkParameterWrite|
|<br>6|__<br>ChannelParamResponse|<br>Sensor to actuator|__<br>ANetworkParameterWrite|
|<br>7|__<br>BeginConnection|<br>Actuator to sensor|__<br>ANetworkParameterWrite|
|<br>8|_<br>SetDeleteLink|<br>Sensor to actuator|__<br>ANetworkParameterWrite|
|<br>9|__<br>LinkResponse|<br>Actuator to sensor|__<br>ANetworkParameterWrite|
|<br>10|_<br>StopLink|<br>Sensor to all|__<br>ANetworkParameterWrite|
|<br>11|_<br>QuitConfigMode|<br>Actuator to all|__<br>ANetworkParameterWrite|
|<br>12|__<br>ResetInstallation|<br>To all|__<br>ANetworkParameterWrite|

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|1|Enter_Config_Mode|0|0|0|1|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|2|Start_Link|0|0|1|0|<br>Flags|<br>Flags|Sub function|Sub function|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Manufacturer Code (16 bit)|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|Number of Group<br>Objects to link|


-----

- Subfuncti
on:

- Manufact
urer Code
(16 bit):

- Number
of Group
Objects
to link

- Condition
:

- Requirem
ents:


00: basic mechanism.

Sensors shall send this service after activation (e.g. press push button). It
shall indicate to the selected actuator that the link process between this
sensor and the actuator that initiated the configuration is started. All other
sensors are optionally locked after receiving this service.

01: optional extension.

This service shall be sent by sensors. It shall indicate the activation of
Config Mode to link one sensor to several actuators. All others sensors are
optionally locked after receiving this service and consider configuration
ongoing (prevents from opening a new session).

This shall be sent for information only. No standard action is defined.

This field shall inform the receiver (actuator) how many Set_Delete_Link
frames will follow. If any are lost, e.g. due to interferences, the actuator shall
discard any other links received during this process in order to avoid “halflinked” E-Mode channels.

00h shall mean that the link is valid for all Datapoints common to both devices,
the sender and the receiver. Only one Set_Delete_Link frame is necessary.
NOTE This is allowed when there is no possible ambiguity in the Datapoints links
between these two devices.

   - To be secure, this action is usually processed if Config Mode is active.
It may however be directly used to start configuration to link one
sensor to several actuators. In this case the device needs some specific
HMI to initiate the service.

   - Support of Subfunction 00h is mandatory. Others are optional.


5.4.4.2.4 PID_Config_Link (Channel_Function_Actuator: Channel Code of the actuator)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

3 Channel_Function_Actuator 0 0 1 1 0 0 0 0 0 0 0 E-Mode Channel Code 00h

After receiving the Start_Link action the actuator shall send the E-Mode Channel Code of its selected
E-Mode Channel to the sensor. If the selected sensor E-Mode Channel is of an appropriate type then the
sensor shall select the function according to the received E-Mode Channel Code.

Expected response: Channel_Function_Sensor

Condition: To be secure, this action shall only be processed if Config Mode is active.

© C i h 2004 2021 A i i S S ifi i 02 01 01 11 f 116

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|3|Channel_Function_Actuator|0|0|1|1|0|0|0|0|0|0|0|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|00h|00h|00h|00h|00h|00h|00h|00h|


-----

5.4.4.2.5 PID_Config_Link (Channel_Function_Sensor: Channel Code of the sensor)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

4 Channel_Function_Sensor 0 1 0 0 0 0 0 0 0 0 0 E-Mode Channel Code 00h

This action shall be the reaction from the sensor after receiving the Channel_Function_Actuator action.

Condition: To be secure, this action is only processed if Config Mode is active.

5.4.4.2.6 PID_Config_Link (Set_Channel_Param: Flags, Parameter index, Value)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

5 Set_Channel_Param 0 1 0 1 Flags Parameter Index Value Value
= 1

With this action it shall be possible for actuator to set parameters in sensors.

Flags: 0 0 0 b

0 = do not override
1 = override

(possibility to change an already
set parameter)

Parameter Index: 1 to 255 (see E-Mode Channel Code definition)

Value: Parameter value according E-Mode Channel definition (right adjusted)

Expected response: Channel_Param_Response within a delay time[ 1)]

Condition: To be secure, this action is only processed if Config Mode is active.

5.4.4.2.7 PID_Config_Link (Channel_Param_Response: Flags, Parameter Index, Value)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

6 Channel_Param_Response 0 1 1 0 Flags Parameter Index Value Value

This action shall be the response from the sensor after receiving the Set_Channel_Param action.

It shall include information for the parameter setting.

1) Depending of medium, a suitable delay time should be selected (typically 1 s for TP1).

© C i h 2004 2021 A i i S S ifi i 02 01 01 116 f 11

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|4|Channel_Function_Sensor|0|1|0|0|0|0|0|0|0|0|0|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|<br>E-Mode Channel Code|00h|00h|00h|00h|00h|00h|00h|00h|

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|5|Set_Channel_Param|0|1|0|1|Flags|Flags|Flags|Flags|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Parameter Index<br>= 1|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|

|0|0|0|b|Col5|
|---|---|---|---|---|
||||||

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|6|Channel_Param_Response|0|1|1|0|Flags|Flags|Flags|Flags|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Parameter Index|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|Value|


-----

Flags: b e s s


00b = OK: Parameter has been set successfully
01b = Parameter was already set before:

override depends on application
specification or product features
10b = Parameter was locally set on the device:

override depends on application
specification or product features
11b = Parameter override not possible


0 = no error
1 = parameter error (incorrect index, incorrect value)


0 = parameter sent
1 = parameter block sent

When b = 0: Parameter is sent.

Parameter Index: = 0

The field value shall contain the E-Mode Channel number and the number of
parameters.

It shall inform the actuator how many parameters for the current E-Mode Channel
number will be sent. If any message is lost, e.g. due to RF interferences, the
actuator shall discard any other links received during this process in order to
avoid “half-linked” E-Mode Channels.

Value: MSB: E-Mode channel number

LSB: number of parameters

Parameter Index: N = 1 to 255 (see E-Mode Channel Code definition)

Value: Value of parameter N according E-Mode Channel definition (right adjusted).
In case of “parameter locally set” the value shall be the locally set value.

Conditions: To be secure, this action is only processed if Config Mode is active.

When b = 1: Parameter Block is sent.

Parameter Index: = 0: Shall enable a device to send its parameters in one shot after a manufacturer
specific interaction, and a receiver to check whether all parameters are received.

Only parameter blocks with 2 octets can be sent.

Value: MSB = 0

LSB: number of parameter blocks

Parameter Index: N = 1 ... 32: shall give the E-Mode Channel number in DD2 order declaration.

Value: Parameter block value of the given E-Mode Channel number. It shall be sent
most significant byte (MSB) and most significant bit (msb) firstly.

Unidirectional devices may send the current states of parameters.

The field value can be extended to 11 to handle parameters longer than two
octets.

NOTE ETS shall be able to display the values of the locally set parameters from this
information.

Conditions: None.

© C i h 2004 2021 A i i S S ifi i 02 01 01 11 f 118

|b|e|s|s|
|---|---|---|---|
|||||


-----

5.4.4.2.8 PID_Config_Link (Begin_Connection)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

7 Begin_Connection 0 1 1 1 0 0 0 0 00h 00 h 00h

This action shall be sent by the actuator to indicate that the sensor can start the link procedure.

Expected response: Set_Delete_Link within a delay time[ 1)]

Condition: To be secure, this action is only processed if Config Mode is active.

5.4.4.2.9 PID_Config_Link (Set_Delete_Link, Sub Function, Connection Code, Group Address)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

8 Set_Delete_Link 1 0 0 0 Sub- Connection Code Group Address
function or scene number

value

This PDU shall be sent for each individual Datapoint.

Subfunction: 0: The sensor shall use this service to link the Datapoints of the selected

E-Mode Channel with the Datapoints of the actuator. Octet 12 shall contain a
Connection Code.

1: The sensor shall use this service to associate a scene_number Datapoint to
one GA, indicating at the same time the scene_number value to use. It may
be repeated for several scene_number values. Octet 12 shall contain a scene
number value. The Connection Code is implicitly the one of a scene_number
Datapoint.

Requirements: Support of Subfunction 0 is mandatory. Support of Subfunction 1 is optional.

Error handling: Discard in case of unknown values.

Expected response: Link_Response within a delay time.

Condition: To be secure, this action is only processed if Config Mode is active.

1) Dependent of the used medium, a suitable delay time should be selected (typically 1 s for TP1)

© C i h 2004 2021 A i i S S ifi i 02 01 01 118 f 119

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|7|Begin_Connection|0|1|1|1|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00 h|00 h|00 h|00 h|00 h|00 h|00 h|00 h|00h|00h|00h|00h|00h|00h|00h|00h|

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|8|Set_Delete_Link|1|0|0|0|<br>Sub-<br>function|<br>Sub-<br>function|<br>Sub-<br>function|<br>Sub-<br>function|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Connection Code <br>or scene number<br>value|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|


-----

5.4.4.2.10 PID_Config_Link (Link_Response: Flags, Group Address)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

9 Link_Response 1 0 0 1 Flags Connection Code Group Address

The response from actuator after receiving the Set_Delete_Link shall include information about the Link
result.

Flags: 0 e s s

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|9|Link_Response|1|0|0|1|Flags|Flags|Flags|Flags|Connection Code|Connection Code|Connection Code|Connection Code|Connection Code|Connection Code|Connection Code|Connection Code|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|Group Address|


00b = link added
01b = use existing address
10b = link deleted
11b = link not added

(link procedure can be


0 = no error
1 = error (stop link procedure)

Comments: The required user interaction and HMI for adding or deleting link management
is manufacturer specific (e.g. a switch can indicate which operation to perform
or a push button can act as a toggle with indication lamp)

If another Group Address is already linked to a Datapoint, this Group Address
should be used by the sensor (for toggle function for example). In this case,
actuator sends this service with Flags set to 01b (link already used) and Group
Address set with the already linked Group Address).

5.4.4.2.11 PID_Config_Link (Stop_Link)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

10 Stop_Link 1 0 1 0 Flags 00h 00h 00h

This action shall be sent by the sensor and shall indicate to the actuator that the link process for the
selected E-Mode Channel shall be finished. All sensors shall be unlocked.

In case of abort, all devices shall return immediately to normal mode, this is, Config Mode shall become
inactive.

Flags: 0 a c t

|0|e|s|s|
|---|---|---|---|
|||||

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|10|Stop_Link|1|0|1|0|Flags|Flags|Flags|Flags|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|


0 = no error
1 = abort

|0|a|Col3|c|t|Col6|
|---|---|---|---|---|---|
|||<br> <br>|<br> <br>|<br> <br>||


© C i h 2004 2021 A i i S S ifi i 02 01 01 119 f 120


-----

5.4.4.2.12 PID_Config_Link (Quit_Config_Mode)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

11 Quit_Config_Mode 1 0 1 1 0 0 0 0 00h 00h 00h

After deactivation of the Config Mode the actuator shall send the Quit_Config_Mode action.

The sensors shall be set in normal mode after receiving this action - this is, Config Mode shall become
inactive - and all other actuators shall be unlocked.

Flags: 0 0 e e

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|11|Quit_Config_Mode|1|0|1|1|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|


0 = no error
1 = timer expiration
2 = channel code error
3 = wrong service

|0|0|e|Col4|e|Col6|
|---|---|---|---|---|---|
|||||||


5.4.4.2.13 PID_Config_Link (Reset Installation)

**Value**

**Octet 11** **Octet 12** **Octet 13** **Octet 14**

**Command** **Flags** **Data** **Data** **Data**

**Pos. Action** 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

12 Reset Installation 1 1 0 0 0 0 0 0 00h 00h 00h

With this action it shall be possible to reconfigure a device in factory setting (RESET).

Condition: To be secure, this action shall only be processed if Config Mode is active.

This action is not implemented in RF devices as no separation from the neighbouring installation is
possible.

###### 5.4.4.3 Link principle

   - All devices exchange information for the link procedure via the Application Layer service
A_NetworkParameter_Write.

_Basic mechanism_

A lock mechanism that shall be included in the link procedure shall ensure that only one sensor exchanges
link information with one actuator. When Config Mode becomes active in the first actuator E-Mode
Channel, all other actuator E-Mode Channels shall be locked (other actuator[ 1)] cannot be selected and all
actions except Quit_Config_Mode and Factory_Setup shall be ignored). When the first sensor starts the
link procedure, all others sensors are locked (other sensors[ 2)] cannot be selected and all services except
Stop_Link, Quit_Config_Mode and Factory_Setup are ignored). However, this lock mechanism is
optional and not recommended on open medium due to the fact that locking and unlocking can not be
ensured.

EXAMPLE When using the RF medium, devices could remain locked if they are just within the reach of the RF medium.

1) This includes all other channels of the selected actuator
2) This includes all other channels of the selected sensor

© C i h 2004 2021 A i i S S ifi i 02 01 01 120 f 121

|Col1|Col2|Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 11**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 12**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 13**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|**Octet 14**|
|||**Command**|**Command**|**Command**|**Command**|**Flags**|**Flags**|**Flags**|**Flags**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|**Data**|
|**Pos.**|** Action**|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|12|Reset Installation|1|1|0|0|0|0|0|0|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|<br>00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|


-----

The link procedure shall start when the Config Mode becomes active in an actuator. The way the Config
Mode is activated is manufacturer specific (e.g. a config switch). An Enter_Config_Mode action shall be
sent that shall indicate to sensors that the link procedure shall be activated and that may lock (optional)
other actuators. Then the installer selects[ 1)] the actuator E-Mode Channel to be linked (or unlinked) and a
function (optional) on the device that has started the configuration procedure. The way how the installer
selects a link to be added or deleted is manufacturer specific (e.g. short or long press on output…).

If the installer activates the sensor E-Mode channel to be linked, a Start_Link action shall be sent to
indicate that the link procedure shall be activated and to lock (optional) other sensors. Then devices shall
exchange information to add or delete links (using actions Channel_Function_Actuator,
Set_Channel_Param and Set_Delete_Link). In case of error (e.g. timer expiration) the link procedure shall
be aborted by sending a Stop_Link action.

The link procedure shall terminate when all the Group Objects are linked or unlinked. The sensor shall
send a Stop_Link action to indicate to the actuator that the link procedure shall be finished and to unlock
all other sensors. Actuator shall automatically or manually deactivate the Config Mode by sending a
Quit_Config_Mode action (manufacturer specific).

_Optional extension_

In complement to basic procedure, extensions are allowed, e.g. to link several actuators to one sensor.
Such procedure shall be framed for security using Start/Stop_Link actions.

###### 5.4.4.4 Link procedure for adding or deleting a link in bidirectional devices

5.4.4.4.1 Flowchart
###### Sensor Actuator
**(1) Activate Config Mode**
(Manufacturer specific)
**(2) A_NetworkParameter_Write**
(Enter_Config_Mode)

**(3) Sensors activate Config Mode** **(4) Other actuators are locked (optional)**
**(5) select Output to be linked**
_(select other function)_
**(6) Press push button on one sensor**

**(7) A_NetworkParameter_Write**
(Start_Link, Manufacturer Code)

**(8) Other sensors may be locked (optional)**

**(9) Send E-Mode Channel Code (optional)**
**(9) A_NetworkParameter_Write**
(Channel_Function_Actuator)

**(10) Device verifies the E-Mode Channel**
Code and sets the right E-Mode Channel
function if possible.

**(11) A_NetworkParameter_Write**
(Channel_Function_Sensor)

**(12) Send parameters (optional)**
**(13) A_NetworkParameter_Write**
(Set_Channel_Param)

1) Two examples:

1. One config-switch to put the actuator in configuration mode generally and a second for each Channel to
designate the actuator channel to be linked.
2. One button or switch to designate the channel and to put in configuration mode. The configuration mode
is quit after linking of every channel.

© C i h 2004 2021 A i i S S ifi i 02 01 01 121 f 122


-----

Sensors deactivate Config Mode. All actuators are unlocked.

5.4.4.4.2 Procedure

- **(1) Config Mode is activated in one actuator by the installer in a manufacturer specific way. (2) The**
actuator optionally transmits an Enter_Config_Mode action [(3) ]to indicate to sensors that the Config
Mode can be activated and [(4)] to optionally lock other actuators.

**(5) The installer selects the desired E-Mode Channel to link on this device 1).**

- **(6) The installer activates the desired E-Mode Channel on a sensor. (7) A Start_Link action shall be**
sent to indicate that the Config Mode is activated and [(8) ]to optionally lock other sensors.

- **(9) A Channel_Function_Actuator action is optionally sent to this sensor to indicate which E-Mode**
Channel the actuator wants to link.

1) A function can optionally be selected (e.g. an installer only wants to configure a switch function on a dimmer).

© C i h 2004 2021 A i i S S ifi i 02 01 01 122 f 123

|Sensor<br>(16)<br>Device verifies the flags and the Group<br>Address and links the next Datapoint.<br>(18) No more Datapoint to link.<br>All sensors are unlocked (optional).|A NetworkParameter Write<br>_ _<br>(Channel Param Response)<br>_ _<br>…<br>next parameters<br>…<br>(15) A NetworkParameter Write<br>_ _<br>(Begin Connection)<br>_<br>(17) A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Link Response)<br>_<br>A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Link Response)<br>_<br>(19) A NetworkParameter Write<br>_ _<br>(Stop Link)<br>_<br>…|Actuator<br>(14) If no more parameters received then<br>start linking Datapoints<br>Device adds or deletes the link.<br>Device adds or deletes the link.<br>e.g. select another output E-Mode Channel<br>on the same device to be linked.|
|---|---|---|
|Select another Input.|…||
||Link other E-Mode Channels between this sensor and<br>actuator<br>…||
|Sensors deactivate Config Mode.|A_NetworkParameter_Write<br>(Quit_Config_Mode)|Config Mode is deactivated (Manufacturer<br>specific or automatically)<br>All actuators are unlocked.|


-----

- **(11) The sensor optionally sends a Channel_Function_Sensor action with its own E-Mode Channel**
Code (see procedure adding a link with a generic push-button for other use of this action). In case the
_sensor detects incompatible E-Mode Channel Codes, it can stop the link procedure by sending a_
_Stop_Link action. In case of a generic sensor the sensor shall adapt its application automatically to_
the actuator E-Mode Channel Code. In this case the sensor shall answer with a generic E-Mode
Channel Code. Optionally the actuator can subsequently overwrite the set application via
_parameters (see below). Links shall be done by using Connection Codes related to the adapted_
E-Mode Channel in the sensor.

- If the actuator receives a non-matching E-Mode Channel Code, it may stop the link procedure by
sending a Quit_Config_Mode action and may indicate an error to the user.

- **(12) Optionally the actuator sets the E-Mode Channel parameters (13) by sending a**
Set_Channel_Param (see E-Mode Channel specification for parameter definition). [(14) ]When there are
no more parameters to send, [(15) ]the actuator shall send a Begin_Connection.

- Depending on its configuration state, the sensor shall either accept or rejects the received parameter
by sending a Channel_Param_Response.

- If the parameter response does not correspond to the parameter set (e.g. parameter set locally on the
sensor), the actuator may stop the link procedure by sending a Quit_Config_Mode.

- When there are no more Parameters to set, the actuator sends a Begin_Connection.

- **(16) When the sensor receives a Begin_Connection, it shall start the link procedure (17) by sending a**
Set_Delete_Link action for each Datapoint of the selected E-Mode Channel. It shall use the assigned
Group Address for output Datapoints (O Flag) and an empty[ 1)] Group Address (0000h) for input
Datapoints (I Flag).

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of its selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be compared with all
other Group Addresses of the appropriate Datapoint (it is not mandatory for an actuator to check all
input Datapoints of the selected E-Mode Channel).

  - Adding a link: If the received Group Address is not found, it shall be assigned to this Datapoint
and a Link_Response action with flag “link added” shall be sent.
If the appropriate Datapoint is an output (O Flag), a Group Address is already assigned
(see here). A Link_Response action with “flag use existing address” shall be sent. Depending of
the Connection Rules the actuator shall save the received Group Address or not.

  - Deleting a link: If the received Group Address is found and the appropriate Datapoint is an input
(I Flag), the received Group Address shall be deleted from the table and a Link_Response action
with flag “link deleted” shall be sent. For output Datapoints (O Flag), the actuator shall not
delete the Group Address and shall send a Link_Response action with flag “link deleted”.
When receiving a Link_Response action with flag “link deleted”, the sensor shall delete the
corresponding Group Address from the table if the connected Datapoint is an input Datapoint.
_Alternatively links may be deleted only in a special mode of the device (manufacturer specific)._

If no corresponding Connection Code is found, a Link_Response action with flag “link not
added” shall be sent by the actuator. The sensor shall continue the link procedure.

If there is no more place in the Group Address table of the actuator or if an error appears, the
actuator shall send a Link_Response action with flag “error”. The sensor shall stop the link
procedure by sending a Stop_Link action. The actuator or the sensor may indicate an error to
_the user in a manufacturer specific way._

1) The sensor will get a Group Address from the actuator. Because the mechanism will only connect one input and
one output Datapoint the Group Address will be determined by the actuator output Datapoint.
Anyway the empty Group Address is a dummy Group Address and will not be set to a Group Object.

© C i h 2004 2021 A i i S S ifi i 02 01 01 123 f 124


-----

If no link is made on an output Datapoint of an actuator, this actuator should not send any message
during runtime operation on this Datapoint (using a flag for example).

- **(18) If the sensor has linked all Datapoints of the activated E-Mode Channel, then (19) it shall stop the**
link procedure by sending a Stop_Link action.

- The way (HMI) how in the actuator the Config Mode is deactivated is manufacturer specific
(automatically or not).

5.4.4.4.3 Example

1. Before Group Address assignment

CH_PB_Toggle CH_Dimming_Actuator

feedback output state on/off output state

dimming value

value

2. After Group Address assignment

CH_PB_Toggle CH_Dimming_Actuator

feedback output state @1 on/off output state @2

dimming value @3

value

3. After link procedure

CH_PB_Toggle CH_Dimming_Actuator

@2 feedback output state @1 @1 on/off output state @2

dimming value @3

value

© C i h 2004 2021 A i i S S ifi i 02 01 01 124 f 12

|Col1|CH PB Toggle<br>_ _|ate|
|---|---|---|
||output st<br>feedback|output st<br>feedback|
||||
||||

|Col1|CH Dimming Actuator<br>_ _|e|
|---|---|---|
||on/off<br>imming<br>value<br>output stat<br>value|on/off<br>imming<br>value<br>output stat<br>value|
||||
|d|d|d|
||||
||||
||||

|Col1|CH PB Toggle<br>_ _|ate|
|---|---|---|
||<br>output st<br>feedback|<br>output st<br>feedback|
||||
||||

|Col1|CH Dimming Actuator<br>_ _|Col3|Col4|
|---|---|---|---|
||on/off<br>imming<br>value<br>output stat<br>value|on/off<br>imming<br>value<br>output stat<br>value|on/off<br>imming<br>value<br>output stat<br>value|
|||output stat|e|
|d|d|value||
|||||
|||||
|||||

|Col1|CH PB Toggle<br>_ _|Col3|Col4|
|---|---|---|---|
||<br> <br>|<br> <br>|<br> <br>|
|||||
||output st<br>eedback|output st|ate|
|||||

|Col1|CH Dimming Actuator<br>_ _|Col3|Col4|
|---|---|---|---|
||n/off<br>|n/off<br>|n/off<br>|
|||||
||<br>imming<br>value<br>output stat<br>value|output stat||
|d|d|value|value|
|||||
|||||
|||||


-----

###### 5.4.4.5 Link procedure for adding a link with a generic push button

5.4.4.5.1 Flowchart

###### Sensor Actuator

**(1) Activate Config Mode**
(Manufacturer specific)
**(2) A_NetworkParameter_Write**
(Enter_Config_Mode)

**(3) Sensors activate Config Mode** **(4) Other actuators are locked**

**(5) Select Output to be linked**
_(select other function)_
**(6) Press push button**
**(7) A_NetworkParameter_Write**
(Start_Link, Manufacturer Code)

**(8) Other sensors are locked**
Send E-Mode Channel Code
**(9) A_NetworkParameter_Write**
(Channel_Function_Actuator)

Sensor verifies E-Mode Channel Code
and sets the right channel.
Sensor answers sending Generic PB

**(10) A_NetworkParameter_Write**
(Channel_Function_Sensor, generic PB)

Receiving generic PB, the actuator
sets the application ID parameter
**(11) A_NetworkParameter_Write**
(Set_Channel_Param, appli ID)

**(12) A_NetworkParameter_Write**
(Channel_Param_Response)

…
next parameters Device sets the other parameters.

…

**(13) A_NetworkParameter_Write**
(Begin_Connection)

**(14) If no more parameters received,**
then link Datapoints.

**(15) A_NetworkParameter_Write**
(Set_Delete_Link)

**(16) Device adds the link.**
**(17) A_NetworkParameter_Write**
(Link_Response)

Device verifies the flags and the Group
Address and links the next Datapoint

A_NetworkParameter_Write

(Set_Delete_Link)

A_NetworkParameter_Write

(Link_Response)

Device adds the link

© C i h 2004 2021 A i i S S ifi i 02 01 01 12 f 126


-----

A_NetworkParameter_Write Deactivate Config Mode

(Quit_Config_Mode) (Manufacturer specific or

automatically).
Sensors go deactivate Config Mode All actuators are unlocked.

5.4.4.5.2 Procedure

- **(1) Config Mode is activated in an actuator by the installer (manufacturer specific). (2) The actuator**
shall transmit a Enter_Config_Mode action that shall indicate to sensors [(3)] that the Config Mode can
be activated and [(4) ]optionally to lock other actuators

**(5) The installer selects the desired Output to link on this device 1).**

- **(6) The installer activates the desired E-Mode Channel on a sensor. (7) A Start_Link action shall be**
sent to indicate that the link procedure shall be activated and [(8) ]optionally to lock other sensors

- **(8) A Channel_Function_Actuator action shall be sent to sensors to indicate which E-Mode Channel**
Code the actuator processes.

The reaction of the generic PB device shall depend of the generic sensor type.
      - Type A: generic sensors with local selection of the application (application ID).
      - Type B: generic sensors with automatic selection of the application (application ID).

- If the internal application ID of the generic PB is not configured (unassigned; only type B), the
application selection in the sensor shall be done as follows.

      - Generic PB type B:
The generic PB shall set the right E-Mode Channel function and application ID parameter
itself, depending of the received E-Mode Channel Code from the actuator. The generic PB
shall always respond to the actuator [(9) ]by sending a Channel_Function_Sensor action with
the E-Mode Channel Code "generic PB". The setting of the application ID (channel
function) parameter from the actuator will be rejected by sending a
Channel_Param_Response action with the Flag "parameter already set" and the setting
application ID.

  - If the internal application ID of the generic PB is already configured (via a previous connection
or set local via HMI), there are two cases for the reaction of the sensor after receiving the
E-Mode Channel Code from the actuator:
      - Generic PB type A:
The E-Mode Channel Code shall be accepted by [(10) ]sending a Channel_Function_Sensor
action with the E-Mode Channel Code "generic PB". The setting of the application ID
(channel function) parameter from the actuator will be rejected by [(12) ]sending a
Channel_Param_Response action with the Flag "parameter locally set" and the setting
application ID.
The setting of the application ID parameter from the actuator with a setting "override" Flag
will be rejected the Flag "parameter override not possible".

1) A function can optionally be selected (e.g. an installer only wants to configure a switch function on a dimmer).

© C i h 2004 2021 A i i S S ifi i 02 01 01 126 f 12

|(18)<br>No more Datapoint to link.<br>All sensors are unlocked.|(19) A NetworkParameter Write<br>_ _<br>(Stop Link)<br>_|e.g. select another output E-Mode<br>Channel on the same device to be<br>linked.|
|---|---|---|
|Select another input|||
|Sensors go deactivate Config Mode|A_NetworkParameter_Write<br>(Quit_Config_Mode)|Deactivate Config Mode<br>(Manufacturer specific or<br>automatically).<br>All actuators are unlocked.|


-----

      - Generic PB type B:
The E-Mode Channel Code shall be accepted by [(10) ]sending a Channel_Function_Sensor
action with the E-Mode Channel Code "generic PB". The setting of the application ID
(channel function) parameter from the actuator will be rejected by [(12) ]sending a
Channel_Param_Response action with the Flag "parameter already set" and the setting
application ID.
The actuator has the possibility to force the application of a generic PB of type B by
sending a Set_Channel_Param action with the setting Flag "override" and the application
ID. This is only a safety procedure without resetting the whole installation and should only
be used by a conscious action of the installer (e.g. by pressing a push button on the
actuator) and not generally.

- **(11) The actuator shall set the application ID parameter and the other E-Mode Channel parameters by**
sending a Set_Channel_Param action (see E-Mode Channel Code specification for parameter
definition) one by one.
Depending on its configuration state, the sensor shall [(12) ]send a Channel_Param_Response action
accepting or not the received parameters.

- If the parameter response does not correspond to the parameter set (e.g. parameter set locally on the
sensor), the actuator may stop the link procedure by sending a Quit_Config_Mode action.

- **(13) If there are no more parameters to be set, the actuator shall send a Begin_Connection action.**

- **(14) If the sensor receives a Begin_Connection, it shall start the link procedure by (15) sending a**
Set_Delete_Link action for each Datapoint of the selected E-Mode Channel. It shall use the assigned
Group Address for output Datapoints (O Flag) and an empty Group Address (0) for input Datapoints
(I Flag).

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be processed by the
actuator[ (16)].

If the appropriate Datapoint is an input (I Flag) the received Group Address shall be compared with
all other Group Addresses of the appropriate Datapoint. It is not mandatory for an output device to
check all input Datapoints of the selected E-Mode Channel.

    - If the received GA is not found, it shall be assigned to this Datapoint and [(20) ]a Link_Response
action with flag link added set shall be sent.

    - If the received GA is already assigned, [(21) ]a Link_Response action with flag link added set shall
be sent.

    - If there is no more place in the Group Address table or if an error appears, a Link_Response
action with flag error set shall be sent. The sensor shall stop the link procedure by sending a
Stop_Link action.

If the appropriate Datapoint is an output (O Flag), a GA is already assigned (see 5.4.3). [(22) ]A
Link_Response action with flag use existing address set shall be sent, containing the already assigned
GA. Depending of the Connection Rules the sensor shall save the received GA or not.
If no corresponding Connection Code is found, [(23) ]a Link_Response action with flag link not added
set shall be sent. The sensor shall continue the link procedure.

- **(24) If the sensor has linked all Datapoints of the activated E-Mode channel, it shall stop the link**
procedure [(25) ]by sending a Stop_Link action.

- The way the actuator deactivates the Config Mode is manufacturer specific (automatically or not).

© C i h 2004 2021 A i i S S ifi i 02 01 01 12 f 128


-----

###### 5.4.4.6 Link procedure for deleting a link

5.4.4.6.1 Flowchart

###### Sensor Actuator

Activate Config Mode

A_NetworkParameter_Write

(manufacturer specific)

(Enter_Config_Mode)

**Sensors activate Config Mode** **Other actuators are locked.**

Select sensor E-Mode Channel Select output E-Mode Channel to be
(e.g. Press push button) unlinked.

(The possibility to activate a special

A_NetworkParameter_Write unlink mode is manufacturer

(Start_Link) specific.)

**Other sensors are locked.**

A_NetworkParameter_Write

(Begin_Connection)

A_NetworkParameter_Write

(Set_Delete_Link)

Device deletes the link.

A_NetworkParameter_Write

(See procedure description.)

(Link_Response)

Unlink Datapoints.
A_NetworkParameter_Write

(Set_Delete_Link)

Device deletes the link.

A_NetworkParameter_Write

(See procedure description.)

(Link_Response)

Go to factory state if possible.
Check Group Address for each
Datapoint
GA_Check
(see procedure description.)
(Datapoint 1)

GA_Check
(Datapoint 2)

A_NetworkParameter_Write

(Stop_Link)

Go to factory state. E.g. select another output E-Mode

Channel on the same device to be

**All sensors are unlocked.**

unlinked.

Quit Config Mode

A_NetworkParameter_Write (manufacturer specific or

(Quit_Config_Mode) automatically).

**Sensors deactivate Config** **All actuators are unlocked.**
**Mode.**

5.4.4.6.2 Procedure

- The installer activates the Config Mode in an actuator (manufacturer specific). The actuator shall
send an Enter_Config_Mode action that shall indicate to the sensors that the link procedure can be
activated and optionally to lock other actuators.

The installer selects the desired E-Mode Channel to unlink on this device.

- The installer activates the desired E-Mode Channel on a sensor. A Start_Link action shall be sent
that shall indicate that the link procedure is activated and optionally to lock other sensors.

- If the actuator is set in unlink mode (manufacturer specific), it does not send the E-Mode Channel
Code and the parameters to the sensors.

- After sending a Begin_Connection action to the sensor, the link/unlink procedure shall be started.

© C i h 2004 2021 A i i S S ifi i 02 01 01 128 f 129

|Sensor<br>Sensors activate Config Mode<br>Select sensor E-Mode Channel<br>(e.g. Press push button)<br>Other sensors are locked.<br>Unlink Datapoints.<br>Go to factory state if possible.<br>Check Group Address for each<br>Datapoint<br>(see procedure description.)<br>Go to factory state.<br>All sensors are unlocked.|A NetworkParameter Write<br>_ _<br>(Enter Config Mode)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Start Link)<br>_<br>A NetworkParameter Write<br>_ _<br>(Begin Connection)<br>_<br>A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Link Response)<br>_<br>A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Link Response)<br>_<br>GA Check<br>_<br>(Datapoint 1)<br>GA Check<br>_<br>(Datapoint 2)<br>A NetworkParameter Write<br>_ _<br>(Stop Link)<br>_|Actuator<br>Activate Config Mode<br>(manufacturer specific)<br>Other actuators are locked.<br>Select output E-Mode Channel to be<br>unlinked.<br>(The possibility to activate a special<br>unlink mode is manufacturer<br>specific.)<br>Device deletes the link.<br>(See procedure description.)<br>Device deletes the link.<br>(See procedure description.)<br>E.g. select another output E-Mode<br>Channel on the same device to be<br>unlinked.|
|---|---|---|
||||
|**Sensors deactivate Config**<br>**Mode.**|A_NetworkParameter_Write<br>(Quit_Config_Mode)|Quit Config Mode<br>(manufacturer specific or<br>automatically).<br>**All actuators are unlocked.**|


-----

- For each Datapoint of its E-Mode Channel, the sensor shall send a Set_Delete_Link action.

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of the selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be processed by the
actuator.

If the appropriate Datapoint is an input (I Flag), the received Group Address shall be deleted from
the table and a Link_Response action with flag link deleted set shall be sent.

For output Datapoints (O Flag), the actuator shall not delete the Group Address and shall send a
Link_Response action with flag link deleted set.

- When receiving a Link_Response action with flag link deleted set, the sensor shall delete the
corresponding Group Address from the table if the connected Datapoint is an input Datapoint.

- The sensor shall check all Datapoints Group Address via Group Address check procedure. If no
device answers[ 1)], the E-Mode Channel shall go back to factory state (e.g. parameter application ID
for generic push-button shall be initialised or parameters shall be unassigned) and shall stop the link
procedure by sending a Stop_Link action

- The way the actuator deactivates the Config Mode is manufacturer specific (automatically or not).

5.4.4.6.3 Example

1. Before deleting link A

A

CH_PB_Toggle CH_Binary_Actuator_Basic

A

@2,@3 feedback output state @1 @1 input on/off output state @2

B CH_Binary_Actuator_Basic

@1 input on/off output state @3

B

2. After deleting link A

CH_PB_Toggle CH_Binary_Actuator_Basic

@3 feedback output state @1 input on/off output state @2

B CH_Binary_Actuator_Basic

@1 input on/off output state @3

B

1 It is then assumed that this was the last connection to this device which is deleted now.

© C i h 2004 2021 A i i S S ifi i 02 01 01 129 f 130

|Col1|CH PB Toggle<br>_ _|ate|
|---|---|---|
||output st<br>feedback|output st<br>feedback|
||||
||||

|Col1|CH Binary Actuator Basic<br>_ _ _|ate|
|---|---|---|
||output st<br>put on/off|output st<br>put on/off|
|in|in|in|
||||

|Col1|CH Binary Actuator Basic<br>_ _ _|ate|
|---|---|---|
||output st<br>put on/off|output st<br>put on/off|
|in<br>|in<br>|in<br>|
||||


-----

3. After deleting link B


@1


input on/off output state @2

CH_Binary_Actuator_Basic

input on/off output state @3

|Col1|CH PB Toggle<br>_ _|ate|
|---|---|---|
||output st<br>feedback|output st<br>feedback|
||||
||||

|Col1|CH Binary Actuator Basic<br>_ _ _|ate|
|---|---|---|
||output st<br>put on/off|output st<br>put on/off|
|in|in|in|
||||

|Col1|CH Binary Actuator Basic<br>_ _ _|ate|
|---|---|---|
||output st<br>put on/off|output st<br>put on/off|
|in|in|in|
||||


###### 5.4.4.7 Link procedure for modifying a link
To modify a link, the installer first deletes the existing link and then builds a new one.

###### 5.4.4.8 Link procedure for reconfiguring in factory setup
A manufacturer specific procedure may be proposed on each device to go back to factory setup.

The Reset Installation action is used to make a general factory setup.

5.4.4.8.1 Flowchart

###### Sensor or actuator  Device


A_NetworkParameter_Write
(Enter_Config_Mode)


Installer asks for factory reset
(manufacturer specific).


**Sensors activate Config Mode.** **Other actuators are locked (but reset**
**installation service is accepted).**

A_NetworkParameter_Write

(Reset_Installation)

Reset all devices.


A_NetworkParameter_Write
(Quit_Config_Mode)


Deactivate Config Mode
(manufacturer specific or automatically).


**Sensors deactivate Config Mode.** **All actuators are unlocked.**

5.4.4.8.2 Procedure

- To be secure, the Reset Installation is done during a link procedure

- The installer asks for a factory reset (manufacturer specific). An Enter_Config_Mode action shall be
sent to the devices to activate Config Mode and optionally to lock other actuators.

- A Reset Installation action shall be sent to the devices to return to factory setup. This action shall be
received and handled even if devices are locked.

- Devices shall reset all data (Individual Address, Group Addresses, parameters, manufacturer data).

- The way the actuator deactivates the Config Mode is manufacturer specific (automatically or not).

This action is not implemented in RF devices as no separation from the neighbour installation is possible.

###### 5.4.4.9 Link Procedure for unidirectional devices
For unidirectional devices a limited data exchange shall be used for the link procedure.

Sensors can only send messages. This procedure shall work together with bidirectional actuators.

Parameters can only be set locally on the devices.

NOTE The A_Device_Descriptor_Response-PDU in this procedure shall be sent in system broadcast communication mode.

© C i h 2004 2021 A i i S S ifi i 02 01 01 130 f 131


-----

5.4.4.9.1 Flowchart

###### Sensor Actuator
Activate Config Mode Activate Config Mode
(manufacturer specific) (manufacturer specific)

_Select output to be linked_
_(Select other function)_
Press push button
A_NetworkParameter_Write

(Start_Link, Unidir flag)

Device identification
A_DeviceDescriptor_Response

(type 0)

A_DeviceDescriptor_Response

(type 2)

A_NetworkParameter_Write

(Channel_Function_Sensor)

Device saves last E-Mode Channel Code
_Local selector for parameterization_
_(optional)_

A_NetworkParameter_Write

(Channel_Param_Response,
index = 0)

A_NetworkParameter_Write

(Channel_Param_Response,
index = param nr.)

dto.
Delay time for manufacturer specific
action.

A_NetworkParameter_Write

(Set_Delete_Link)

Device saves or deletes the link.
Delay time for manufacturer specific
action.

A_NetworkParameter_Write

(Set_Delete_Link)

Device saves or deletes the link.
Delay time
A_NetworkParameter_Write

(Stop_Link)

No more Datapoint to link

link other E-Mode Channels between e.g. select another output E-Mode Channel

this sensor and actuator. to be linked.

Quit Config Mode
(manufacturer specific)

© C i h 2004 2021 A i i S S ifi i 02 01 01 131 f 132

|Sensor<br>Activate Config Mode<br>(manufacturer specific)<br>Press push button<br>Device identification<br>Local selector for parameterization<br>(optional)<br>Delay time for manufacturer specific<br>action.<br>Delay time for manufacturer specific<br>action.<br>Delay time<br>No more Datapoint to link|A NetworkParameter Write<br>_ _<br>(Start Link, Unidir flag)<br>_<br>A DeviceDescriptor Response<br>_ _<br>(type 0)<br>A DeviceDescriptor Response<br>_ _<br>(type 2)<br>A NetworkParameter Write<br>_ _<br>(Channel Function Sensor)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Channel Param Response,<br>_ _<br>index = 0)<br>A NetworkParameter Write<br>_ _<br>(Channel Param Response,<br>_ _<br>index = param nr.)<br>A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Set Delete Link)<br>_ _<br>A NetworkParameter Write<br>_ _<br>(Stop Link)<br>_|Actuator<br>Activate Config Mode<br>(manufacturer specific)<br>Select output to be linked<br>(Select other function)<br>Device saves last E-Mode Channel Code<br>dto.<br>Device saves or deletes the link.<br>Device saves or deletes the link.|
|---|---|---|
||link other E-Mode Channels between<br>this sensor and actuator.|e.g. select another output E-Mode Channel<br>to be linked.|
|||Quit Config Mode<br>(manufacturer specific)|


-----

5.4.4.9.2 Procedure

- The installer activates the Config Mode in the devices in a manufacturer specific way.
The installer selects the desired output E-Mode channel on the actuator.

- The installer activates the desired E-Mode Channel on a sensor. The sensor shall send a Start_Link
action to indicate that the link procedure is activated.
The Start_Link service shall contain a flag that shall be used by a transmit-only device to inform a
Management Client that frames containing parameters will follow.

- After a delay time[ 1)] the sensor shall send an A_DeviceDescriptor_Response-PDU (type 0) and a
second A_DeviceDescriptor_Response-PDU (type 2) also on system broadcast communication
mode. The Device Descriptor shall contain the E-Mode Channel Codes of the current configuration
of the sensor.

- Optionally after a delay time[ 2)] the sensor may send a Channel_Function_Sensor.
The sensor also may send a Channel_Param_Response action for each parameter of the E-Mode
Channel to the actuator to indicate the current configuration.
Using a local selector, it is possible to modify the current configuration in a manufacturer specific
way. For each configuration both Channel_Function_Sensor and Channel_Param_Response actions
should be sent. The actuator shall process the last input configuration.
If a unidirectional device sends parameters, the Channel_Param_Response shall be used, with a first
Channel_Param_Response indicating the number of the following parameters. In case the according
bit is set in Start_Link, the Management Client shall expect the number of parameters announced in
the first Channel_Param_Response frame.

- After a delay time[ 3)] _or a manufacturer specific action, the sensor shall send a Set_Delete_Link_
action for each Datapoint of its E-Mode Channel.

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of the selected E-Mode channel. If a corresponding Connection Code is found or if
_Connection Codes are compatible (optional), the received Group Address shall be compared with all_
other Group Addresses of the appropriate Datapoint. It is not mandatory for an actuator to check all
_input Datapoints of the selected E-Mode channel._

   - Adding a link: If the received Group Address is not found, it shall be assigned to this Datapoint.

   - Deleting a link: If the received Group Address is found, the received Group Address shall be
deleted from the table. Alternatively links may be deleted only in a special mode of the device
_(manufacturer specific)._

If no corresponding Connection Code is found, the actuator shall take no action. The sensor
shall continue the link procedure.

If there is no more place in the Group Address Table of the actuator or if an error appears, the
actuator shall indicate this error in a manufacturer specific way to the user and ignore further
Set_Delete_Link actions from the sensor. Also previously received Set_Delete_Link actions in
the same E-Mode Channel shall be ignored by the actuator.

- _If no link is made on an output Datapoint of an actuator, this device should not send any message on_
_this Datapoint during runtime operation (using a flag for example)._

- If the sensor has linked all Datapoints of the activated E-Mode Channel, it shall stop the link
procedure by sending a Stop_Link action.

1) Delay time to be defined for medium RF.
2) Delay time to be defined for medium RF.
3) Delay time to be defined for medium RF.

© C i h 2004 2021 A i i S S ifi i 02 01 01 132 f 133


-----

- _The way the actuator deactivates the Config Mode is manufacturer specific (automatically or not)._

##### 5.4.5 Private parameters
In Push Button Mode an actuator is able to set parameters in the corresponding sensor during the link
procedure.

To handle private parameters (manufacturer specific parameters), the actuator needs the knowledge about
the manufacturer of the sensor.

The actuator gets this information (manufacturer code) with the Start Link action from the sensor.

With the manufacturer code of the sensor, the actuator is able to decide, if it can set private parameters or
not.

The mechanism to set private parameters is manufacturer specific.

#### 5.5 Extension of a PB-Mode installation with S-mode devices
To get the project data, ETS reads all information about the functionality, links and parameters from the
devices.

For this, ETS uses appropriate network management procedures indicated in the DD2, which must be
supported by all Push Button Mode devices.

Using these information S-Mode devices can be merged in the installation with ETS.

#### 5.6 PB-Mode installations with BiBat devices
In PB-Mode the connection between BiBat Master and BiBat Slave can be done without any changes to
normal PB-Mode. Only the time-slots shall be assigned in addition.

The connection from a BiBat device to a PB-Mode device outside the BiBat System can be done. In this
case at runtime the BiBat device shall behave as a transmit-only-device. At configuration-time the BiBat
device doesn’t offer (i.e. connect) it’s input Group Objects during the PB-Mode configuration.

#### 5.7 PB-Mode for RF Multi

##### 5.7.1 Use cases

###### 5.7.1.1 Overview
The KNX RF Multi configuration shall be tested with the following features.

   - KNX RF 1.1 devices (unidir and bidirectional)

   - KNX RF Ready devices (unidir and bidirectional)

   - KNX RF Multi devices (bidirectional)

© C i h 2004 2021 A i i S S ifi i 02 01 01 133 f 134


-----

###### 5.7.1.2 Summary of the configuration compatibility

**Table 11 – PB-Mode configuration compatibility**

**Actuator**

**KNX** **KNX** **KNX**

**Sensor** **RF 1.1** **RF Ready** **RF Multi**

The KNX RF Multi actuator
may receive Frames from
the KNX RF 1.1 thus the
configuration may be
effective.
But in runtime, the RF KNX
RF Multi device may not

**KNX RF 1.1** KNX RF 1.1 configuration KNX RF 1.1 configuration

receive Frames with 1 ms
preamble.
**The configuration**
**between a KNX RF 1.1**
**sensor and a KNX RF**
**Multi actuator should not**
**be performed.**

The KNX RF Multi actuator
determines that the sensor
is a KNX RF Ready sensor. If the physical requirements are fulfilled, the link
is performed (and the
scanning sequence is modified: e.g. F1, F2, F1, F3,

**KNX RF Ready** KNX RF 1.1 configuration KNX RF 1.1 configuration F1, F2,…in order to receive

a Frame with 4,8 ms
preamble in runtime).
If the physical
requirements are not
fulfilled (e.g. Slow
reception only), then the
link procedure is aborted
by the actuator.

The KNX RF Multi sensor
may receive Frames from If the physical

If the physical require
the KNX RF 1.1 thus the requirements are fulfilled,

ments are fulfilled, the link

configuration may be the link is performed.

is performed and the

effective.

Frames sent by the sensor If the physical

But in runtime, the RF Multi have a 4,8 ms preamble. requirements are not

**KNX RF Multi** sensor may not receive fulfilled (e.g. Slow

If the physical require
Frames with 1 ms reception only in the

ments are not fulfilled (e.g.

preamble. actuator and Fast

Slow reception only for the

The configuration between transmission only in the

sensor), the link procedure

a KNX RF 1.1 actuator and sensor), the link procedure

is aborted.

a KNX RF Multi sensor is aborted.
should not be performed.

© C i h 2004 2021 A i i S S ifi i 02 01 01 134 f 13

|Sensor|Actuator|Col3|Col4|
|---|---|---|---|
|**Sensor**|**KNX**<br>**RF 1.1**|**KNX**<br>**RF Ready**|**KNX**<br>**RF Multi**|
|**KNX RF 1.1**|KNX RF 1.1 configuration|KNX RF 1.1 configuration|The KNX RF Multi actuator<br>may receive Frames from<br>the KNX RF 1.1 thus the<br>configuration may be<br>effective.<br>But in runtime, the RF KNX<br>RF Multi device may not<br>receive Frames with 1 ms<br>preamble.<br>**The configuration**<br>**between a KNX RF 1.1**<br>**sensor and a KNX RF**<br>**Multi actuator should not**<br>**be performed.**|
|**KNX RF Ready**|KNX RF 1.1 configuration|KNX RF 1.1 configuration|The KNX RF Multi actuator<br>determines that the sensor<br>is a KNX RF Ready sen-<br>sor. If the physical require-<br>ments are fulfilled, the link<br>is performed (and the<br>scanning sequence is mo-<br>dified: e.g. F1, F2, F1, F3,<br>F1, F2,…in order to receive<br>a Frame with 4,8 ms<br>preamble in runtime).<br>If the physical<br>requirements are not<br>fulfilled (e.g. Slow<br>reception only), then the<br>link procedure is aborted<br>by the actuator.|
|**KNX RF Multi**|The KNX RF Multi sensor<br>may receive Frames from<br>the KNX RF 1.1 thus the<br>configuration may be<br>effective.<br>But in runtime, the RF Multi<br>sensor may not receive<br>Frames with 1 ms<br>preamble.<br>The configuration between<br>a KNX RF 1.1 actuator and<br>a KNX RF Multi sensor<br>should not be performed.|If the physical require-<br>ments are fulfilled, the link<br>is performed and the<br>Frames sent by the sensor<br>have a 4,8 ms preamble.<br>If the physical require-<br>ments are not fulfilled (e.g.<br>Slow reception only for the<br>sensor), the link procedure<br>is aborted.|If the physical<br>requirements are fulfilled,<br>the link is performed.<br>If the physical<br>requirements are not<br>fulfilled (e.g. Slow<br>reception only in the<br>actuator and Fast<br>transmission only in the<br>sensor), the link procedure<br>is aborted.|


-----

###### 5.7.1.3 Summary of the runtime compatibility in an homogeneous group
Summary of the runtime mode if the actuator are of the same type (for a given sensor).

**Table 12 – PB-Mode runtime compatibility (homogeneous group)**

**Actuator**

**KNX** **KNX** **KNX**

**Sensor** **RF 1.1** **RF Ready** **RF Multi**

If the installer has performed
a link (not recommended),

**KNX RF** then the actuator may receive

KNX RF 1.1 runtime KNX RF 1.1 runtime
**1.1** occasionally Frames from the

sensor, but the runtime may
not function properly.

The sensor transmits one The sensor transmits one The sensor and actuator

**KNX RF**

Frame : Frame : transmit one Frame :

**Ready**

      - on F1r (4,8 ms preamble)       - on F1r (4,8 ms preamble)       - on F1r (4,8 ms preamble)

The sensor and the actuator
transmit one or two
Frames(according to the
receiving requirements of the
KNX RF Multi devices):

                                     - the first on Fx RF channel

If the installer has performed

The sensor and the actuator (15 ms preamble) for the

a link (not recommended),

transmit one Frame : RecFast devices (bit

**KNX RF** then the sensor may receive

                     - on F1r (4,8 ms preamble) ReqAck set/reset)

**Multi** occasionally Frames from the

with the bit ReqAck not                         - and/or the second on Sx

sensor, but the runtime may

set. RF channel (500 ms

not function properly.

preamble) for the
RecSlow devices (bit
ReqAck set/reset)
The Frames are identical
(same LFN, same RC) except
the preamble length.

© C i h 2004 2021 A i i S S ifi i 02 01 01 13 f 136

|Sensor|Actuator|Col3|Col4|
|---|---|---|---|
|**Sensor**|**KNX**<br>**RF 1.1**|**KNX**<br>**RF Ready**|**KNX**<br>**RF Multi**|
|**KNX RF**<br>**1.1**|KNX RF 1.1 runtime|KNX RF 1.1 runtime|If the installer has performed<br>a link (not recommended),<br>then the actuator may receive<br>occasionally Frames from the<br>sensor, but the runtime may<br>not function properly.|
|**KNX RF**<br>**Ready**|The sensor transmits one<br>Frame :<br>• on F1r (4,8 ms preamble)|The sensor transmits one<br>Frame :<br>• on F1r (4,8 ms preamble)|The sensor and actuator<br>transmit one Frame :<br>• on F1r (4,8 ms preamble)|
|**KNX RF**<br>**Multi**|If the installer has performed<br>a link (not recommended),<br>then the sensor may receive<br>occasionally Frames from the<br>sensor, but the runtime may<br>not function properly.|The sensor and the actuator<br>transmit one Frame :<br>• on F1r (4,8 ms preamble)<br>with the bit ReqAck not<br>set.|The sensor and the actuator<br>transmit one or two<br>Frames(according to the<br>receiving requirements of the<br>KNX RF Multi devices):<br>• the first on Fx RF channel<br>(15 ms preamble) for the<br>RecFast devices (bit<br>ReqAck set/reset)<br>• and/or the second on Sx<br>RF channel (500 ms<br>preamble)  for the<br>RecSlow devices (bit<br>ReqAck set/reset)<br>The Frames are identical<br>(same LFN, same RC) except<br>the preamble length.|


-----

###### 5.7.1.4 Summary of the runtime compatibility in an non homogeneous group
Summary of the runtime mode if the actuators are not of the same type (for a given sensor):

**Table 13 – PB-Mode runtime compatibility (non homogeneous group)**

**Actuator**

**KNX RF Ready**

**KNX RF Ready** **KNX RF Ready** **+**

**+** **+** **slow KNX RF Multi**
**fast KNX RF Multi** **slow KNX RF Multi** **+**

**Sensor** **fast KNX RF Multi**

The sensor transmits one Configuration not possible Configuration not possible

**KNX RF**

Frame : with the slow KNX RF Multi with the slow KNX RF Multi

**Ready**

      - on F1r (4,8 ms preamble) actuator actuator

The sensor transmits two The sensor transmits two The sensor transmits three
Frames : Frames : Frames :

       - the first on F1r RF channel       - the first on F1r RF channel       - the first on F1r RF channel

(4,8 ms preamble) for the (4,8 ms preamble) for the (4,8 ms preamble) for the
RF Ready device (bit RF Ready device (bit RF Ready device (bit
ReqAck not set) ReqAck not set) ReqAck not set)

      - the second on Fx RF       - the second on Sx RF       - the second on Fx RF
channel (15 ms preamble) channel (500 ms channel (15 ms preamble)
(bit ReqAck set/reset) preamble) (bit ReqAck (bit ReqAck set/reset)

**KNX RF** set/reset) - the third on Sx RF channel
**Multi** (500 ms preamble) (bit

ReqAck set/reset)

The Frames are identical The Frames are identical The Frames are identical
(same LFN, same RC) except (same LFN, same RC) except (same LFN, same RC) except
the preamble length. the preamble length. the preamble length.

NOTE If the KNX RF Multi NOTE If the KNX RF Multi NOTE If the KNX RF Multi
device receives a Frame with the device receives a Frame with the device receives a Frame with the
ReqAck bit set, it replies with the ack, ReqAck bit set, it replies with the ack, ReqAck bit set, it replies with the ack,
even if it has already processed the even if it has already processed the even if it has already processed the
same Frame. same Frame. same Frame.

##### 5.7.2 Link procedure between bidirectional KNX RF Multi devices

###### 5.7.2.1 Scope
The following link procedure shall be used for adding or deleting links in bidirectional KNX RF Multi
devices.

© C i h 2004 2021 A i i S S ifi i 02 01 01 136 f 13

|Sensor|Actuator|Col3|Col4|
|---|---|---|---|
|**Sensor**|**KNX RF Ready**<br>**+ **<br>**fast KNX RF Multi**|**KNX RF Ready**<br>**+ **<br>**slow KNX RF Multi**|**KNX RF Ready**<br>**+ **<br>**slow KNX RF Multi**<br>**+ **<br>**fast KNX RF Multi**|
|**KNX RF**<br>**Ready**|The sensor transmits one<br>Frame :<br>• on F1r (4,8 ms preamble)|Configuration not possible<br>with the slow KNX RF Multi<br>actuator|Configuration not possible<br>with the slow KNX RF Multi<br>actuator|
|**KNX RF**<br>**Multi**|The sensor transmits two<br>Frames :<br>• the first on F1r RF channel<br>(4,8 ms preamble) for the<br>RF Ready device (bit<br>ReqAck not set)<br>• the second on Fx RF<br>channel (15 ms preamble)<br>(bit ReqAck set/reset)|The sensor transmits two<br>Frames :<br>• the first on F1r RF channel<br>(4,8 ms preamble) for the<br>RF Ready device (bit<br>ReqAck not set)<br>• the second on Sx RF<br>channel (500 ms<br>preamble) (bit ReqAck<br>set/reset)|The sensor transmits three<br>Frames :<br>• the first on F1r RF channel<br>(4,8 ms preamble) for the<br>RF Ready device (bit<br>ReqAck not set)<br>• the second on Fx RF<br>channel (15 ms preamble)<br>(bit ReqAck set/reset)<br>• the third on Sx RF channel<br>(500 ms preamble) (bit<br>ReqAck set/reset)|
|**KNX RF**<br>**Multi**|The Frames are identical<br>(same LFN, same RC) except<br>the preamble length.|The Frames are identical<br>(same LFN, same RC) except<br>the preamble length.|The Frames are identical<br>(same LFN, same RC) except<br>the preamble length.|
|**KNX RF**<br>**Multi**|NOTE<br>If the KNX RF Multi<br>device receives a Frame with the<br>ReqAck bit set, it replies with the ack,<br>even if it has already processed the<br>same Frame.|NOTE<br>If the KNX RF Multi<br>device receives a Frame with the<br>ReqAck bit set, it replies with the ack,<br>even if it has already processed the<br>same Frame.|NOTE<br>If the KNX RF Multi<br>device receives a Frame with the<br>ReqAck bit set, it replies with the ack,<br>even if it has already processed the<br>same Frame.|


-----

###### 5.7.2.2 Flowchart

**KNX RF Multi Sensor** **KNX RF Multi Actuator**

(1) Enter config mode
(implementation specific). The
actuator is set in permanent
reception mode on F1.

(2) A_NetworkParameter_Write

(3) Sensors activate config mode.

(Enter_Config_Mode)

Sensors set in permanent reception
mode on F1. _(4) Other actuators are locked_

_(optional)_

(5) Select output to be linked (Select
(6) Press push-button.
_other function)_

(7) A_NetworkParameter_Write

(Start_Link, Bidir. Flag, manufacturer code, dptnb) x 3

_(8) Other input devices are locked_
_(optional)_

(9) Send actuator’s physical
requirements

(10) A_NetworkParameter_Write

(11) Device verifies the actuator‘s
(Features)
physical requirements. If the sensor
does not carry out one of the
requirements, then it aborts the session
by sending a Stop_Link action.

(12) Send sensor’s physical
requirements.

(13) A_NetworkParameter_Write

(Features) (14) Device verifies the sensor‘s

physical requirements. If one of
the requirements is not fulfilled, it
aborts the session by sending a
Quit_Config_Mode action.

(15) Send E-Mode Channel Code
(15) A_NetworkParameter_Write (optional)

_(16) Device verifies the E-Mode_
(Channel_Function_Actuator)
_Channel Code and sets the right_
_channel function if possible_

(17) A_NetworkParameter_Write

(Channel_Function_Sensor)

(18) Send parameters (optional)

(19) A_NetworkParameter_Write

(Set_Channel_Param)

A_NetworkParameter_Write

(Channel_Param_Response)

(20) if no more parameters

next parameters received then start linking

Datapoints

© C i h 2004 2021 A i i S S ifi i 02 01 01 13 f 138


-----

**Sensor** **Actuator**

A_NetworkParameter_Write

(21)Start linking Datapoints (Begin_Connection)

(22) A_NetworkParameter_Write

Device adds or deletes the link.

(Set_Delete_Link, CC, GA1)

A_NetworkParameter_Write

(Link_Response, CC, GA1)

A_NetworkParameter_Write

(Set_Delete_Link, AckSlotNb, 00h)

A_NetworkParameter_Write

Device verifies the flags and the Group
Address and links the next Datapoint (Link_Response, AckSlotNb, 00h)

A_NetworkParameter_Write

(Set_Delete_Link, CC, GAn)

Device adds or deletes the link

A_NetworkParameter_Write

(Link_Response, CC, GAn)

A_NetworkParameter_Write

(Set_Delete_Link, AckSlotNb, 00h)

A_NetworkParameter_Write

(23) No more Datapoint to link
(Link_Response, AckSlotNb, 00h)

(24) A_NetworkParameter_Write-PDU

_All sensors are unlocked (optional)_ (Stop Link) e.g. select another output

E-Mode Channel on the same
device to be linked.

Select another input

Link other E-Mode Channel between this Quit config mode

sensor and actuator (implementation specific or

automatically).

A_NetworkParameter_Write-PDU

All other devices are unlocked
Sensors deactivate Config Mode (Quit Config Mode)
(optional)

**Figure 8 - Flowchart: KNX RF Multi sensor with a KNX RF Multi actuator**

© C i h 2004 2021 A i i S S ifi i 02 01 01 138 f 139


-----

###### 5.7.2.3 Procedure

- (1) Config Mode is activated by the installer in an implementation specific way (2). The sensor is set
in a reception mode that enables the reception of Ready Frames from the actuator. The actuator
device is set in permanent reception mode on F1 RF channel until the end of the configuration. The
actuator optionally transmits an Enter_Config_Mode (3) to indicate to sensors that the Config Mode
can be activated and (4) to optionally lock other actuators.

- (5) The installer selects the desired E-Mode Channel to link on this device[ 1)].

- (6) The installer activates the desired channel on a sensor (7). The sensor is set in permanent
reception mode on F1 RF channel until the end of the configuration. A Start_Link action shall be sent
to indicate that the Config Mode is activated and (8) to optionally lock other sensors.

- (9) The actuator sends the Features action (10) to indicate its physical requirements. The actuator then
waits for the answer to verify that the sensor is able to fulfil the requirements.

- (11) If the sensor receives the Features action from the actuator, it shall compare the actuator’s
requirements to its features. The requirements shall be fulfilled in order for the configuration to
continue. If all the requirements are not fulfilled, the sensor shall abort the configuration by sending a
Stop_Link service. If the requirements are fulfilled, it shall send the Features action (12) with its
physical requirement features.

- (13) If the actuator receives the Features action, it shall compare the sensor’s requirements features to
its requirements. The requirements shall be fulfilled in order for the configuration to continue. If one
of the requirements is not fulfilled, the actuator shall stop the link procedure by sending a
Quit_Config_Mode action (14). If all the requirements are fulfilled, the procedure shall go on.

- (15) Optionally the actuator sends a Channel_Function_Actuator service to sensors to indicate which
Channel Code it possesses.

- (16) The sensor optionally sends a Channel_Function_Sensor action with its own E-Mode Channel
Code (see procedure adding a link with a generic push-button for the other use of this action). In case
_the sensor detects incompatible E-Mode Channel Codes, it may stop the link procedure by sending a_
_Stop_Link action. In case of a generic sensor the sensor shall adapt its application automatically to the_
actuator E-Mode Channel Code. In this case the sensor shall answer with a generic E-Mode Channel
Code. Optionally the actuator may subsequently overwrite the set application via parameters (see
_below). Links shall be done by using Connection Codes related to the adapted E-Mode Channel in the_
sensor.

- If the actuator receives a non-matching E-Mode Channel Code, it may stop the link procedure by
sending a Quit_Config_Mode action and may indicate an error to the user.

- (17) Optionally the actuator sets the E-Mode Channel parameters (18) by sending a
Set_Channel_Param action (19) (see E-Mode Channel specification for parameter definition). (20) If
there are no more parameters to send, a Begin_Connection shall be sent by the actuator.

- Depending on its configuration state, the sensor shall either accept or reject the received parameters
by sending a Channel_Param_Response action.

- If the parameter response does not correspond to the parameter set (e.g. parameter set locally on the
input device), the actuator may stop the link procedure by sending a Quit_Config_Mode action.

- If there are no more parameters to set, the actuator device sends a Begin_Connection action.

1) A function can optionally be selected (e.g. an installer only wants to configure a switch function on a dimmer).

© C i h 2004 2021 A i i S S ifi i 02 01 01 139 f 140


-----

- (21) If the sensor receives a Begin_Connection action, it shall start the link procedure (22) by sending
a Set_Delete_Link action for each Datapoint of the selected E-Mode Channel. It shall use the
assigned Group Addresses for output Datapoint (O Flag) and an empty[ 1)]Group Address (0000h) for
input Datapoint(I Flag).

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of the selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be compared with all
other Group Addresses of the appropriate Datapoint (It is not mandatory for an actuator to check all
Datapoints of the selected Channel).

`o` Adding a link: If the received Group Address is not found, it shall be assigned to this Datapoint
and a Link_Response action with flag “link added” shall be sent. If the appropriate Datapoint is
an output (O Flag), a Group Address is already assigned. A Link_Response action with “flag
use existing address” shall be sent. Depending of the Connection Rules the actuator shall save
the received Group Address or not.

`o` Deleting a link: If the received Group Address is found and the appropriate Datapoint is
an input (I Flag), the received Group Address shall be deleted from the table and a
Link_Response action with flag “link deleted” shall be sent. For output Datapoints (O Flag), the
actuator shall not delete the Group Address and shall send a Link_Response action with flag
“link deleted”.

If receiving a Link_Response action with flag “link deleted”, the sensor shall delete the
corresponding Group Address from the table if the connected Datapoint is an input Datapoint.
_Alternatively links may be deleted only in a special mode of the device (implementation_
_specific)._

If no corresponding Connection Code is found, a Link_Response action with flag “link not
added” shall be sent by the actuator. The sensor shall continue the link procedure.

If there is no more place in the Group Address Table of the actuator or if an error appears, the
actuator shall send a Link_Response service with flag “error”. The sensor shall stop the link
procedure by sending a Stop_Link action. The actuator or the sensor may indicate an error to
_the user in an implementation specific way._

- A pair of Set_Delete_Link(sub_function 0 or 1) and Link_Response actions shall be followed by a
pair of Set_Delete_Link(sub_function 2) and Link_Response actions in the following cases:

`o` Case 1:

       - The link is a link addition and

       - It’s an output Datapoint in the sensor which requires ack management in runtime and
the actuator supports the ack management.

           - In this case, the sensor sends the Set_Delete_Link (subfunction 2) to set the
ack slot number to the actuator. This means also that if the Datapoint does
not require ack management in runtime, the Set_Delete_Link (subfunction 2)
is not sent.

1) The sensor will get a Group Address from the actuator. Because the mechanism will only connect one input and
one output Datapoint, the Group Address will be determined by the actuator output Datapoint. Anyway the
empty Group Address is a dummy Group Address and will not be set to a Group Object.

© C i h 2004 2021 A i i S S ifi i 02 01 01 140 f 141


-----

`o` Case 2:

       - The link is a link addition and

       - It’s an input Datapoint in the sensor that supports ack management and the actuator
requires the ack management.

           - In this case, the sensor sends the Set_Delete_Link (subfunction 2) to give the
opportunity to the actuator to specify the ack slot number if required. If the
actuator answers with an ack slot value set to FFh, it means that this
Datapoint (with the extended address) does not require acknowledge in
runtime.

`o` Adding a link: The storage of the ack slot number (by the sensor of the actuator) is
conditioned by the link addition realised previously for that Datapoint
with the extended address. If the link addition is successful, a
Link_Response service with flag “ack slot added” shall be sent. If the
appropriate Datapoint (with the extended address) is an actuator’s Output
(O Flag), the ack slot number is set by the actuator and a Link_Response
service with “use existing ack slot” shall be sent.

Deleting a link: If the configuration session leads to the deletion of the link, then the pair
of Set_Delete_Link (sub_function 2) and Link_Response services related
to the allocation of the ack slot number is not sent. The Set_Delete_Link
(sub_function 2) service is not sent by the sensor when the actuator
answered “link deleted” in the previous message.

- If no link is made on an output Datapoint of an actuator, this actuator shall not send any message
during runtime operation.

- If the sensor has linked all the Datapoints of the activated E-Mode Channel, it shall stop the link
procedure by sending a Stop_Link service.

- The way (HMI) how in the actuator the Config Mode is deactivated is implementation specific
(automatically or not).

###### 5.7.2.4 Acknowledge and Link deletion
If a link is deleted, the sensor shall internally update its table to take into account the deletion of the link
(extended address) in order to wait only for the acks that are relevant.

The delation of links may result in unused ack slots. No optimisation can be made on the reordering of the
acks slots. The transmitter has to fill the no more used ack slots.

The KNX RF Multi device shall reset its constraints (slow or fast) only after a factory reset of the KNX
RF Multi device.

##### 5.7.3 Link procedure between bidirectional KNX RF Ready sensor and KNX RF Multi actuator
The following link procedure shall be used for adding or deleting links.

© C i h 2004 2021 A i i S S ifi i 02 01 01 141 f 142


-----

###### 5.7.3.1 Flowchart

**Bidir KNX RF Ready Sensor** **KNX RF Multi Actuator**

(1) Enter config mode
(implementation specific). Select
output to be linked. (Select other
function).

(2) A_NetworkParameter_Write

Actuator set in permanent

(Enter_Config_Mode)

(3) Sensors activate config mode. reception mode on F1.

_(4) Other actuators are locked_

(6) Press push-button. The _(optional)._
message is sent on F1r RF

(7) A_NetworkParameter_Write

_(5) Select output to be linked_

(Start_Link, Bdir. Flag, manufacturer code, dptnb) _(Select other function)._

_(8) Other input devices are locked_
_(optional)_

(9) The actuator’s physical
requirements are not sent

(10) A_NetworkParameter_Write

because the sensor is a KNX

(11) The KNX RF ready device (Features) RF Ready device.
discards the unknown action.

Timeout elapsed.

12) The sensor’s physical requirements
action is not sent as the sensor is not
RF Multi (13) The actuator assumes that

the sensor is a KNX RF Ready
device because the Features
message has not been received.
The actuator verifies its physical
requirements against the default
one of a KNX RF Ready sensor.

(15) A_NetworkParameter_Write

(14) Send E-Mode Channel Code

(Channel_Function_Actuator) (optional)
_(16) Device verifies the E-Mode_
_Channel Code and sets the right_
_channel function if possible_

(17) A_NetworkParameter_Write

(Channel_Function_Sensor)

(18) Send parameters (optional)

(19) A_NetworkParameter_Write

(Set_Channel_Param)

A_NetworkParameter_Write

(Channel_Param_Response)

(20) if no more parameters
received then start linking

next parameters Datapoints

© C i h 2004 2021 A i i S S ifi i 02 01 01 142 f 143


-----

**Bidir KNX RF Ready Sensor** **KNX RF Multi Actuator**

A_NetworkParameter_Write

(21) Start linking Datapoints

(Begin_Connection)

(22) A_NetworkParameter_Write

Device adds or deletes the link.

(Set_Delete_Link, CC, GA1)

A_NetworkParameter_Write

(Link Response, CC, GA1)

Device verifies the flags and the Group
Address and links the next Datapoint

A_NetworkParameter_Write

(Set_Delete_Link, CC, GAn)

A_NetworkParameter_Write

(Link_Response, CC, GAn) Device adds or deletes the link

(23) No more Datapoint to link

A_NetworkParameter_Write-PDU

_All sensors are unlocked (optional)_ (Stop Link)

e.g. select another output
E-Mode Channel on the same
device to be linked.

Select another input Link other E-Mode Channel between this Quit config mode

sensor and actuator (implementation specific or

automatically).

A_NetworkParameter_Write-PDU

All other devices are unlocked
Sensors deactivate Config Mode (Quit Config Mode)
(optional)

**Figure 9 - Flowchart: bidir KNX RF Ready sensor with a KNX RF Multi actuator**

© C i h 2004 2021 A i i S S ifi i 02 01 01 143 f 144


-----

###### 5.7.3.2 Procedure

- (1) Config Mode is activated by the installer in an implementation specific way (2). The actuator
device shall be set in permanent reception mode on F1 RF channel until the end of the configuration.
The actuator optionally transmits an Enter_Config_Mode action (3) to indicate to sensors that the
Config Mode can be activated and (4) to optionally lock other actuators.

- (5) The installer selects the desired E-Mode Channel to link on this device[ 1)].

(6) The installer activates the desired E-Mode channel on a sensor (7). A Start_Link action shall be
sent to indicate that the Config Mode is activated and (8) to optionally lock other sensors.

- (9) The actuator shall send the Features action and shall wait for the Features action from the sensor.
If no Features action is received by the actuator (timeout of 1 s), it shall assume that the sensor is a
KNX RF Ready sensor. If the default KNX RF Ready features (no RF Multi, no Ack management)
are compatible with the requirements of the actuator, then the configuration can continue. If they do
not fulfil the actuator’s requirements, the actuator shall stop the link procedure by sending a
Quit_Config_Mode action.

- (15) Optionally the actuator sends a Channel_Function_Actuator service to sensors to indicate which
Channel Code it possesses.

- (16) The sensor optionally sends a Channel_Function_Sensor action with its own E-Mode Channel
Code (see procedure adding a link with a generic push-button for the other use of this action). In case
the sensor detects incompatible E-Mode Channel Codes, it can stop the link procedure by sending a
Stop_Link action. In case of a generic sensor the sensor shall adapt its application automatically to
the actuator E-Mode Channel Code. In this case the sensor shall answer with a generic E-Mode
Channel Code. Optionally the actuator can subsequently overwrite the set application via parameters
(see below). Links shall be done by using Connection Codes related to the adapted E-Mode Channel
in the sensor.

- If the actuator receives a non-matching E-Mode Channel Code, it may stop the link procedure by
sending a Quit_Config_Mode action and may indicate an error to the user.

- (17) Optionally the actuator sets the E-Mode Channel parameters (18) by sending a
Set_Channel_Param action (19) (see E-Mode Channel specification for parameter definition). (20) If
there are no more parameters to send, a Begin_Connection shall be sent by the actuator.

- Depending on its configuration state, the sensor shall either accept or reject the received parameters
by sending a Channel_Param_Response action.

- If the parameter response does not correspond to the parameter set (e.g. parameter set locally on the
input device), the actuator may stop the link procedure by sending a Quit_Config_Mode action.

- If there are no more parameters to set, the actuator device shall send a Begin_Connection action.

- (21) If the sensor receives a Begin_Connection action, it shall start the link procedure (22) by sending
a Set_Delete_Link action for each Datapoint of the selected E-Mode Channel. It shall use the
assigned Group Addresses for output Datapoint (O Flag) and a empty[ 2)]Group Address (0000h) for
input Datapoint (I Flag).

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of the selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be compared with all
other Group Addresses of the appropriate Datapoint (It is not mandatory for an actuator to check all
Datapoints of the selected Channel).

1) A function can optionally be selected (e.g. an installer only wants to configure a switch function on a dimmer).
2) The sensor will get a Group Address from the actuator. Because the mechanism will only connect one input and
one output Datapoint, the Group Address will be determined by the actuator output Datapoint. Anyway the
empty Group Address is a dummy Group Address and will not be set to a Group Object.

© C i h 2004 2021 A i i S S ifi i 02 01 01 144 f 14


-----

`o` Adding a link: if the received Group Address is not found, it shall be assigned to this Datapoint
and a Link_Response action with flag “link added” shall be sent. If the appropriate Datapoint is
an output (O Flag), a Group Address is already assigned. A Link_Response action with “flag
use existing address” shall be sent. Depending of the Connection Rules the actuator shall save
the received Group Address or not.

`o` Deleting a link: if the received Group Address is found and the appropriate Datapoint is an input
(I Flag), the received Group Address shall be deleted from the table and a Link_Response action
with flag “link deleted” shall be sent. For output Datapoints (O Flag), the actuator shall not
delete the Group Address and shall send a Link_Response action with flag “link deleted”.

If receiving a Link_Response action with flag “link deleted”, the sensor shall delete the
corresponding Group Address from the table if the connected Datapoint is an input Datapoint.
Alternatively links may be deleted only in a special mode of the device (implementation
specific).

If no corresponding Connection Code is found, a Link_Response action with flag “link not
added” shall be sent by the actuator. The sensor shall continue the link procedure.

If there is no more place in the Group Address Table of the actuator or if an error appears, the
actuator shall send a Link_Response service with flag “error”. The sensor shall stop the link
procedure by sending a Stop_Link action.The actuator or the sensor may indicate an error to the
user in an implementation specific way.

- If no link is made on an output Datapoint of an actuator, this actuator should not send any message
during runtime operation (using a flag for example).

- If the sensor has linked all the Datapoints of the activated E-Mode Channel, it shall stop the link
procedure by sending a Stop_Link service.

- The way (HMI) how in the actuator the Config Mode is deactivated is implementation specific
(automatically or not).

###### 5.7.3.3 Compatibility between sensor and actuator
During the configuration, the KNX RF Multi actuator checks if its physical requirements are compliant
with the KNX RF Ready sensor.

The configuration is possible only if:

  - the actuator is at least a Recfast device (scans the Fx RF channels) as the KNX RF ready sensor
only uses the F1r RF channel

  - and the actuator can be in permanent reception mode

In runtime, the actuator will be in permanent reception mode and scan the Fx RF channel in such a way
that it can receive Frames with 4,8 ms preamble from the KNX RF Ready sensor.

   - In runtime and from the actuator point of view, the following shall count.

   - For an input Datapoint

`o` The actuator will always receive Frames with fast ack not requested from the RF Ready
device (no ack management)

   - For an output Datapoint

`o` The actuator knows that the Frame to send is addressed to a RF Ready device and thus
will always send a Frame with fast ack not requested and with 4,8 ms preamble for the
RF Ready sensor

In runtime, the KNX RF Ready sensor always sends Frames with a short preamble of 4,8 ms. The KNX
RF Multi actuator is able to receive the Frames on F1 with a 4,8 ms preamble length due to its permanent
scanning mechanism.

© C i h 2004 2021 A i i S S ifi i 02 01 01 14 f 146


-----

In runtime, when the KNX RF Multi has to send a Group Object addressed at least to one KNX RF Ready
device and at least to one KNX RF Multi device on a fast Fx RF channel and at least to one KNX RF
Multi device on a slow Sx RF channel, then the RF KNX RF Multi device sends three times the same
Frame.

   - One Frame on F1 RF channel with a 4,8 ms preamble for the KNX RF Ready device (no ack
requested)

   - One Frame on Fx RF channel for the KNX RF Multi devices (with fast ack management if
required). One Frame on the Sx RF channel for the KNX RF Multi devices (with fast ack
management if required).

© C i h 2004 2021 A i i S S ifi i 02 01 01 146 f 14


-----

##### 5.7.4 Link procedure between unidir KNX RF Ready sensor and KNX RF Multi actuator

###### 5.7.4.1 Flowchart

**Unidir KNX RF Ready Sensor** **KNX RF Multi Actuator**

(1) Enter config mode
(implementation specific)..

Actuator set in permanent
reception mode on F1r.

(2) A_NetworkParameter_Write

(Enter_Config_Mode)

_(4) Other output devices are_
_locked (optional)_

(6) Press push-button. Sensor activates (5) Select output to be linked (Select
Config Mode (implementation _other function)_

(7) A_NetworkParameter_Write

specific).

_Other input devices are locked_ (Start_Link, Unidir. Flag, manufacturer code, dptnb)
_(optional)_

(8) A_DeviceDescriptor_Response

(broadcast, type 0)
Device identification

(9) A_DeviceDescriptor_Response

(broadcast, type 2)

(9) The actuator does not send the
Features message as the sensor is
anunidir device.

Timeout elapsed

(10) The actuator assumes that the
sensor is a KNX RF Ready sensor
because the Features message has
not been received. The actuator
verifies its physical requirements
againts those of the unidir KNX
Ready sensor.

(11) A_NetworkParameter_Write

(Channel_Function_Sensor) Devicesaves last Channel Code.

_Local selector for parameterization_
_(optional)_

(12) A_NetworkParameter_Write

(Channel_Param_Response, broadcast, index=0)

next parameters

A_NetworkParameter_Write

Delay time for implementation specific (Channel_Param_Response, broadcast, index=paramnb)
action

© C i h 2004 2021 A i i S S ifi i 02 01 01 14 f 148


-----

**Unidir KNX RF Ready**
**KNX RF Multi Actuator**

(13) Start linking Datapoints

(14) A_NetworkParameter_Write

(Set_Delete_Link) Device saves or deletes the link (no

Delay time for implementation specific ack management).
action
next parameters

A_NetworkParameter_Write

(Set_Delete_Link)

Delay time Device saves or deletes the link (no

ack management).

A_NetworkParameter_Write-PDU

(Stop Link)

(15) No more Datapoint to link

e.g select another output channel to
be linked

Link other channels between this
sensor and actuator

A_NetworkParameter_Write-PDU

(Quit_Config_Mode) All other devices are unlocked
(optional)

**Figure 10 - Flowchart unidir KNX RF Ready sensor with a KNX RF Multi actuator**

###### 5.7.4.2 Procedure

- (1) Config Mode is activated by the installer in an implementation specific way (2).The actuator
optionally transmits an Enter_Config_Mode action (3) to indicate to sensors that the Config Mode
can be activated and (4) to optionally lock other actuators. The sensor and actuator devices shall then
be set in permanent reception mode on F1 RF channel until the end of the configuration.

- (5) The installer selects the desired E-Mode Channel to link on this device[ 1)].

- (6) The installer activates the desired E-Mode channel on a sensor (7). A Start_Link action shall be
sent to indicate that the Config Mode is activated and to optionally lock other sensors.

1) A function can optionally be selected (e.g. an installer only wants to configure a switch function on a dimmer).

© C i h 2004 2021 A i i S S ifi i 02 01 01 148 f 149


-----

- (8) After a delay time[ 1)], the sensor shall send an A_DeviceDescriptor_Response(type 0) and (9) an
A_DeviceDescriptor_Response(type 2) on broadcast communication mode. The Device Descriptor
shall contain the Channel Codes of the current configuration of the sensor.

- (10) After a delay time (1 s), the KNX RF Multi actuator shall know that the sensor is a KNX RF
Ready sensor because the Features action is not received by the actuator.

- (11) Optionally after a delay time the sensor may send a Channel_Function_Sensor. The sensors also
may send a Channel_Param_Response action for each parameter (12) of the E-Mode Channel to the
actuator to indicate the current configuration. Using a local selector, it is possible to modify the
Channel_Function_Sensor and Channel_Param_Response in an implementation specific way. For
each configuration a Channel_Function_Sensor and Channel_Param_Response action should be sent.
The actuator shall process the last input configuration.

- (13) After a delay time or an implementation specific action, the sensor shall send a Set_Delete_Link
(14) action for each Datapoint (15) of its E-Mode channel.

- The actuator shall compare the received Connection Code with the different Connection Codes of the
Datapoints of the selected E-Mode Channel. If a corresponding Connection Code is found or if
Connection Codes are compatible (optional), the received Group Address shall be compared with all
other Group Addresses of the appropriate Datapoint. It is not mandatory for an actuator to check all
Datapoints of the selected Channel.

`o` Adding a link: If the received Group Address is not found, it shall be assigned to this
Datapoint.

`o` Deleting a link: If the received Group Address is found, the received Group Address shall be
deleted from the table. Alternatively links may be deleted only in a special
mode of the device (implementation specific).

If no corresponding Connection Code is found, the actuator shall take no
action. The sensor shall continue the link procedure.

If there is no more place in the Group Address Table of the actuator or if an
error appears, the actuator shall indicate this error in an implementation
specific way to the user and ignore further Set_Delete_Link action from the
sensor. Also previously received Set_Delete_Link actions in the same
Channel shall be ignored by the actuator.

- If no link is made on an output Datapoint of an actuator, this actuator should not send any message on
this Datapoint during runtime operation (using a flag for example).

- If the sensor has linked all the Datapoints of the activated E-Mode Channel, it shall stop the link
procedure by sending a Stop_Link service.

- The way (HMI) how in the actuator the Config Mode is deactivated is implementation specific
(automatically or not).

###### 5.7.4.3 Compatibility between sensor and actuator
During the configuration, the KNX RF Multi actuator checks if its physical requirement are compliant
with the default ones of the unidir KNX RF Ready device.

   - The configuration is possible only if

    - the actuator is at least a Recfast device (scans the Fx RF channels) as the KNX RF ready
sensor only uses the F1r RF channel, and

    - the actuator can be in permanent reception mode.

1) The delay must be sufficient (e.g. > 500 ms) to enable the actuator to perform its internal process of the telegram
especially when storing the link in the Set_Delete_Link action.

© C i h 2004 2021 A i i S S ifi i 02 01 01 149 f 1 0


-----

In runtime, the actuator shall be in permanent reception mode and scan the Fx RF channel in such a way
that it can receive Frames with 4,8 ms preamble from the KNX RF Ready sensor.

During the configuration, the KNX RF Ready sensor does not send the Set_Delete_Link(sub_function 2)
for the acknowledge management. The actuator has to store in its Group Object Association Table a flag
indicating that the link is for a RF Ready device so no acknowledge to manage for this extended Group
Address.

   - In runtime and from the actuator point of view:

   - For an input Datapoint

`o` The actuator will always receive Frames with fast ack not requested from the RF Ready
device (no ack management)

   - For an output Datapoint

`o` Not possible as the sensor is a unidir device

In runtime, the KNX RF Ready device shall always send Frames with a short preamble of 4,8 ms. The
KNX RF Multi actuator is able to receive the Frames on F1 with a 5 ms preamble length due to its
permanent scanning mechanism.

   - In runtime, if the KNX RF Multi has to send a Group Object addressed at least to one KNX RF
Ready device and at least to one KNX RF Multi device on a fast Fx RF channel and at least to
one KNX RF Multi on a slow Sx RF channel, then the RF KNX RF Multi device sends three
times the same Frame.

   - One Frame shall be sent on F1 RF channel with a 4,8 ms preamble for the KNX RF Ready
device (no ack requested)

   - One Frame shall be sent on Fx RF channel for the KNX RF Multi devices (with fast ack
management if required).

   - One Frame shall be sent on the Sx RF channel for the KNX RF Multi devices (with fast ack
management if required).

##### 5.7.5 Link procedure between bidir KNX RF Multi sensor and KNX RF Ready actuator
The following link procedure shall be used for adding or deleting links:

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 0 f 1 1


-----

###### 5.7.5.1 Flowchart

**Bidir KNX RF Multi Sensor** **KNX RF Ready Actuator**

Enter config mode (implementation Enter config mode
specific). Sensor set in permanent (implementation specific).
reception mode on F1r. A_NetworkParameter_Write Message sent on F1r RF channel.

Other RF multi sensors will probably (Enter_Config_Mode)

_Other actuator devices are locked_

not receive the message (because of

_(optional)._

the preamble of 4,8 ms from a KNX
Ready device). Select output to be linked (select

other function).

Press push-button. The message is
sent on F1r RF channels. A_NetworkParameter_Write

(Start_Link, Bdir. Flag, manufacturer code, dptnb) x 3

_Other sensor devices are locked_
_(optional)_

**The KNX RF Multi device assumes**
**that the actuator is a KNX RF**
**Ready device because it has not**
**received the Features message but**
**instead it receives the**
**Channel_Function_Actuator**
**message..**

Select output to be linked (Select

A_NetworkParameter_Write _other function)_

(Channel_Function_Actuator)

Send Channel Code (optional)

_Device verifies the Channel Code and_
_sets the right channel function if_
_possible_ A_NetworkParameter_Write

(Channel_Function_Sensor)

A_NetworkParameter_Write
Send parameters (optional)

(Set_Channel_Param)

A_NetworkParameter_Write

(Channel_Param_Response)

next parameters

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 1 f 1 2


-----

**Sensor** **Actuator**

A_NetworkParameter_Write

Start linking Datapoints (Begin_Connection)

_Other output devices are locked_
_(optional)_

A_NetworkParameter_Write

(Set_Delete_Link, CC, GA1) Device adds the link.

A_NetworkParameter_Write

(Link Response, CC, GA1)

Device verifies the flags and the Group
Address and links the next Datapoint

A_NetworkParameter_Write

(Set_Delete_Link, CC, GAn)

A_NetworkParameter_Write

(Link_Response, CC, GAn)

No more Datapoint to link Device adds the link

A_NetworkParameter_Write-PDU

(Stop Link)

e.g. select another output channel

_All input devices are unlocked_ on the same device to be linked.
_(optional)_

Select another input Link other channel between this sensor and

actuator Quit config mode
(implementation specific or
automatically).

A_NetworkParameter_Write-PDU

All other devices are unlocked
Input devices in normal mode (Quit Config Mode)
(optional)

**Figure 11 - Flowchart: bidir KNX RF Multi sensor with a KNX RF Ready actuator**

During the configuration, the KNX RF Multi actuator shall check if its physical requirements are
compliant with the default ones of the KNX RF Ready device.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 2 f 1 3


-----

The configuration is possible only if:

   - the sensor is at least a Recfast device (scans the Fx RF channels) as the KNX RF ready sensor
only uses the F1r RF channel (if input Datapoint have to be linked in the sensor).
   - and the sensor can be in permanent reception mode (if input Datapoint have to be linked in the
sensor)

In runtime, the sensor shall be in permanent reception mode and scan the Fx RF channel in such a way
that it can receive Frames with 4,8 ms preamble from the KNX RF Ready actuator.

In runtime and from the sensor point of view:

   - For an output Datapoint

`o` The sensor knows that the Frame to send is addressed to a RF Ready device and thus
will always send a Frame with fast ack not requested and with 4,8 ms preamble for the
RF Ready actuator

   - For an input Datapoint

`o` The sensor shall always receive Frames with fast ack not requested from the RF Ready
device (no ack management)

In runtime, the KNX RF Ready actuator always sends Frames with a short preamble of 4,8 ms. The KNX
RF Multi sensor is able to receive the Frames on F1 with a 4,8 ms preamble length due to its permanent
scanning mechanism.

In runtime, if the KNX RF Multi has to send a Group Object addressed at least to one KNX RF Ready
device and at least to one KNX RF Multi device on a fast Fx RF channel and at least to one KNX RF
Multi device on a slow RF channel, then the RF KNX RF Multi device sends three times the same Frame:

   - One Frame shall be sent on F1 RF channel with a 4,8 ms preamble for the KNX RF Ready
device (no ack requested)
   - One Frame shall be sent on Fx RF channel with a 15 ms preamble for the KNX RF Multi
devices (with fast ack management if required).
   - One Frame shall be sent on the Sx RF channel for the KNX RF Multi devices (with fast ack
management if required).

##### 5.7.6 Configuration examples in PB-Mode

###### 5.7.6.1 Example 1
The sensor is a battery powered device (e.g. a remote control):

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels
The actuator is also a battery powered device (e.g. a thermostat):

   - RS: It scans only the slow Sx RF channels.

   - TFS: It can transmit Frames on both Fx and Sx RF channels

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 3 f 1 4


-----

@1 dpt1 dpt2
SN2/@1 SN1/@2 1 Sx RF frame

dpt3 @2 dpt2 dpt3

1 Sx RF frame

Serial Number : SN1 Serial Number : NS2

**Figure 12 - RS/TFS bidir KNX RF Multi sensor with a RS/TFS KNX RF Multi actuator**

The sensor is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The actuator is a battery powered device (e.g. a thermostat):

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

RS/TFS

RF/TFS KNX RF Multi actuator
KNX RF Multi sensor

@1 dpt1
1 Sx RF frame SN1/@1

@1 dpt1 dpt2 1 Fx RF frame
SN2/@1 SN1/@2

dpt3 @2 dpt2 dpt3

1 Sx RF frame

Serial Number : SN1 Serial Number : SN2

**Figure 13 - RF/TFS bidir KNX RF Multi sensor with a RS/TFS KNX RF Multi actuator**

The sensor is a battery powered device (e.g. a remote control):

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The actuator is a mains powered device (e.g. light actuator):

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

RF/TFS
KNX RF Multi actuator

RS/TFS
KNX RF Multi sensor

@1 dpt1

1 Fx RF frame SN1/@1

@1 dpt1 dpt2 1 Sx RF frame
SN2/@1

SN1/@2

dpt3 @2 dpt2 dpt3

1 Fx RF frame

Serial Number : SN2
Serial Number : SN1

**Figure 14 - RS/TFS bidir KNX RF Multi sensor with a RF/TFS KNX RF Multi actuator**

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 4 f 1


-----

The sensor is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The actuator is a mains powered device (e.g. light actuator):

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

RF/TFS
KNX RF Multi actuator

RF/TFS
KNX RF Multi sensor @1 dpt1

1 Fx RF frame SN1/@1

@1 dpt1 dpt2 1 Fx RF frame
SN2/@1

SN1/@2

dpt3 @2 dpt2 dpt2

1 Fx RF frame

Serial Number : SN22
Serial Number : SN1

**Figure 15 - RF/TFS bidir KNX RF Multi sensor with a RF/TFS KNX RF Multi actuator**

The sensor is a battery powered device (e.g. a remote control):

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The first actuator is a battery powered device:

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The second actuator is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 1 6


-----

|Col1|dp|
|---|---|


1 Sx RF frame

@1 dpt1

SN1/@1

dpt2

SN1@2

dpt3

Serial Number : SN3

**Figure 16 - RS/TFS KNX RF Multi sensor with RFS/TS and RF/TFS KNX RF Multi actuators**

The sensor is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The first actuator is a battery powered device:

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The second actuator is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 6 f 1


-----

1 Sx RF frame SN1/@1 1 Fx RF frame

@1 dpt1 dpt2

SN2/@1

SN1/@2

dpt3 @2 dpt2 dpt3

1 Fx RF frame

SN3/@1 and

1 Sx RF frame Serial Number : SN2

Serial Number : SN1

RF/TFS
KNX RF Multi actuator

1 Fx RF frame

@1 dpt1

SN1/@1

dpt2

SN1/@2

dpt3

Serial Number : SN3

**Figure 17 - RF/TFS KNX RF Multi sensor with RS/TFS and RF/TFS KNX RF Multi actuators**

###### 5.7.6.2 Example 2
The sensor is a mains powered device:

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The first actuator is a mains powered device (e.g. light actuator):

   - RF: It scans only the fast Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

The configuration is first made between the fast KNX RF Multi sensor and the fast KNX RF Multi
actuator.

RF/TFS
KNX RF Multi actuator

RF/TFS
KNX RF Multi sensor @1 dpt1

1 Fx RF frame SN1/@1

@1 dpt1 dpt2 1 Fx RF frame
SN1/@1

dpt2

Serial Number : SN1 Serial Number : SN2

The second actuator is a battery powered device:

   - RS: It scans only the slow Sx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

Then the configuration is extended between the fast KNX RF Multi sensor and the slow KNX RF Multi
actuator.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 1 8

|Col1|Col2|
|---|---|


-----

|Col1|Col2|
|---|---|


1 Fx RF frame

@3 dpt1

SN1/@1

dpt2

Serial Number : SN3

The second sensor is a battery powered device:

   - RS: It scans only the slow Fx RF channels.
   - TFS: It can transmit Frames on both Fx and Sx RF channels

Then the configuration is extended between the slow KNX RF Multi sensor and the fast KNX RF Multi
actuator.

RF/TFS
KNX RF Multi actuator

RF/TFS
KNX RF Multi sensor 1 Fx RF frame

and SN1/@1 @1 dpt1
1 Sx RF frame SN4/@1 1 Fx RF frame

@1 dpt1 dpt2 and

SN2@1 1 Sx RF frame

dpt2

SN3/@1
Serial Number : SN2

Serial Number : SN1

RS/TFS

RS/TFS KNX RF Multi actuator
KNX RF Multi sensor 1 Fx RF frame

1 Fx RF frame @1 dpt1

@1 dpt1
SN2/@1 SN1/@1

dpt2

dpt2

Serial Number : SN4 Serial Number : SN3

Then the configuration is extended between the slow KNX RF Multi sensor and the slow KNX RF Multi
actuator.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 8 f 1 9

|Col1|d|
|---|---|


-----

1 Sx RF frame SN4/@1 1 Fx RF frame
@1 dpt1 dpt2 and

SN2/@1 1 Sx RF frame

dpt2

SN3/@1 Serial Number : SN2

Serial Number : SN1

RS/TFS
KNX RF Multi actuator 1 Fx RF frame

and

RS/TFS 1 Sx RF frame
KNX RF Multi sensor 1 Fx RF frame SN1/@1 @1 dpt1

and SN4/@1

@1 dpt1 1 Sx RF frame dpt2
SN2/@1

dpt2

SN3@1 Serial Number : SN3

Serial Number : SN4

**Figure 18 - RS/TFS and RF/TFS KNX RF Multi sensors with RS/TFS and RF/TFS KNX RF Multi**
**actuators**

#### 5.8 PB-Mode installations with RF Multi Repeater

##### 5.8.1 Installation cases
Usually, the installers determine that a Repeater is needed in an installation at different time according to
the way the installation is performed.

- Case 1

   - The installer performs the configuration of the devices before the devices are set in their final
position. In this situation, the configuration and the runtime between the devices have been
effective and there is no indication that a Repeater will be required later.
   - When the devices are set in their position, the runtime does not work anymore because the
devices are not in the same range area. In this case, a Repeater is required in order for the
runtime to be effective.

- Case 2

   - The devices are set in their final position and then the installer performs the configuration of the
devices. If the devices are not in the same range area, the configuration cannot be performed by
the installer. In this case, a Repeater is required in order for the configuration to be effective.

In both cases, if a Repeater is required, the installer activates the Learning Mode in the Repeater. If the
_Learning Mode is active in the Repeater then the Repeater shall repeat all the Frames and catch the KNX_
Serial Numbers or Extended Group Addresses of the received Frames.

In order to address both cases of installation, the Repeater shall enable the PB-Mode configuration
between devices if Learning Mode is active.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 9 f 160

|Col1|Col2|Col3|
|---|---|---|


-----

##### 5.8.2 Physical acknowledge
As a Repeater and for the repetition functionality, the Repeater never performs a physical acknowledge
(fast ack) of the received Frames that have to be repeated (whatever device has transmitted it, Repeater or
not).The Repeater repeats the Frame and (if physical acknowledge is required by the original Frame)
processes the received physical acknowledges transmitted by the actuators. Then, the Repeater builds the
dedicated Repeater Frame (synthesis of the physical acknowledgement) and transmits it in order for the
sensor to get the information.

A device that has its own local application and that is also a Repeater shall manage the repetition of the
Frame (as a Repeater) but also answer with a physical acknowledgement if its local application is
concerned by the received Frame.

##### 5.8.3 Configuration procedure

###### 5.8.3.1 Principle
There is no specific PB-Mode configuration between the sensor and the Repeater or between the actuator
and the Repeater. The configuration of the Repeater consists of temporarily activating the Learning Mode
in the Repeater through an implementation specific HMI.

If Learning Mode is active then the Repeater shall perform the following actions.

   - It shall repeat all the received Frames.

   - It shall extract the KNX Serial Numbers or the Extended Group Addresses of the received
Frames.

   - It shall store the KNX Serial Number or the Extended Group Addresses in the Repeating Table.

The HMI of the Repeater shall enable the installer to activate and inactivate the Learning Mode.

An automatic inactivation of the Learning Mode is recommended after a specific timeout.

The HMI may also enable the reset of the Repeating Table. The size of the Repeating Table is
implementation specific.

###### 5.8.3.2 Installation case 1
If the configuration is completed and if the devices are not in the same RF area, the installer sets a
Repeater in the installation and activates its Learning Mode. The installer has to manipulate locally the
sensor to force it to transmit runtime Frames (multicast communication). While Learning Mode is active,
if the Repeater receives any runtime Frame, it shall extract the KNX Serial Number or the Extended
Group Address and add it in its Repeating Table. If runtime communication in the actuator to sensor
direction is required, then the installer has to manipulate also the actuator to force it to transmit runtime
Frames. In case a Frame is automatically transmitted by the actuator if it receives a Frame from the sensor
then both devices shall be learned by the Repeater at the same time.

###### 5.8.3.3 Installation case 2
If the devices are firstly mounted in their final position before the configuration is performed and if they
are not in the same RF area then the installer cannot perform the configuration. The installer installs a
Repeater in the installation and activates its Learning Mode. The installer performs the PB-Mode
configuration between the sensor and the actuator. As Learning Mode is active in the Repeater, the
Repeater shall repeat all the Frames. In this case, the PB-Mode configuration is performed through the
Repeater.

If the configuration between the devices is complete, then the installation case 1 applies for the insertion
of entries in the Repeating Table.

© C i h 2004 2021 A i i S S ifi i 02 01 01 160 f 161


-----

###### 5.8.3.4 KNX Serial Number or Extended Group Address learning algorithm

Repeater Mode
(Repeat with filtering)

Enter Learning mode Exit Learning mode

Learn multicast mode
Multicast frame (Repeat with no filtering)

**Figure 19 – Learning Mode in the KNX RF Multi Repeater**

The algorithm enables the process of the two types of installations.

#### 5.9 PB-Mode for Flexible E-Mode Channels

##### 5.9.1 Introduction
Please observe the following differences between PB SEC and PB FEC.

   - Unload of the Individual Address is not possible for PB SEC devices. For PB FEC devices the
Unload of the Individual Address is mandatorily possible through the mandatory support of the
Master Reset.

   - For PB FEC devices a manual Master Reset is mandatory.

##### 5.9.2 Domain Address Assignment
There is no difference concerning the DoA-assignment of PB SEC devices and PB FEC devices, for none
of the KNX media.

##### 5.9.3 Assignment of the Individual Address through self acquisition by the device
There is no difference concerning the IA-assignment of PB SEC devices and PB FEC devices, for none of
the KNX media.

##### 5.9.4 Unload of the Individual Address in PB-Mode
PB SEC devices have no requirements concerning the unloading of the IA by any means.

PB FEC devices are required to support the unloading of the IA through the mandatory support of the
Master Reset.

###### 5.9.4.1 Assignment of Group Addresses
There is no difference concerning the generation and testing of GAs between PB SEC devices and
PB FEC devices, for none of the KNX media.

##### 5.9.5 Link Procedure
The Configuration Procedures for PB FEC devices shall be identical to those of PB SEC devices. The
presence of additional DPs will solely lead to the linking of more DPs than what would be the case with
linking PB SEC devices.

In PID_CONFIG_LINK(Start_Link), the number of GOs to link is now no longer related to the Channel
Code. Two E-Mode Channels with the same Channel Code may have a different number of GOs to link.

© C i h 2004 2021 A i i S S ifi i 02 01 01 161 f 162

|Repeater Mode<br>(Repeat with filtering)<br>Enter Learning mode Exit Learning<br>Learn multicast mode<br>st frame (Repeat with no filtering)|Repeater Mode<br>(Repeat with filtering)|
|---|---|
|Repeater Mode<br>(Repeat with filtering)<br>Enter Learning mode<br>Learn multicast mode<br>(Repeat with no filtering)<br>st frame<br>Exit Learning|Learn multicast mode<br>(Repeat with no filtering)|
|||


-----

As specified in for PID_PARAM_FLAGS in [05] for the specification of the field Restart in the Property
_Parameter Flags, as PB FEC device shall trace whether any Parameter is changed during the_
configuration, and if needed, autonomously conclude on an own device restart when the linking has
completed.

##### 5.9.6 Manual Master Reset
PB FEC devices shall foresee the possibility for a manual “reset to ex-factory state”. The way how this is
done is implementation specific.

© C i h 2004 2021 A i i S S ifi i 02 01 01 162 f 163


-----

### 6 Controller Mode (Ctrl-Mode)

#### 6.1 Introduction
Controller Mode relies on an external device named "Controller", whose role is to establish the links
between the E-Mode Channels and to set necessary parameters in the devices.

   - This procedure is done in several steps:

- Programming the Individual Address,

- Device identification,

- Localisation, and

- Link E-Mode Channels.

For having easy handling for the Installer, steps can be integrated or done automatically by the Controller.

In the Controller, devices are localised and identified by an action of the Installer or (where possible e.g.
via the KNX Serial Number) automatically by the Controller.

The Installer enters the links he wants to set between the E-Mode Channels at functional level via the
Controller’s Human Machine Interface (HMI). Devices do not need link intelligence for these steps, but
support of downloading procedures.

The Controller then calculates detailed links at Datapoint level (Group Addresses) in the background. If
an E-Mode Channel has parameters, the Controller may offer them to the user and download the chosen
value into the device.

The Controller is not necessary during run-time, but of course can have runtime functionality in addition
(decided by the manufacturer).

EXAMPLES A Controller can scan the bus for new devices (with default Individual Address) periodically e.g.
once per minute or can detect devices in failure and have replacement functionality.

Controllers are targeted for 1, 2, n or all applications. It belongs to the manufacturer of the Controller to
decide which applications are supported.

In the following clauses the Configuration Procedure of the Controller Mode is described in plain text and
via data flow charts. Then additional remarks are given concerning the extendibility of a Controller Mode
installation with S-Mode devices and S-Mode tool and the extendibility of other E-Modes via Controller.

#### 6.2 Configuration Procedure

##### 6.2.1 Description

###### 6.2.1.1 Programming the Individual Address

   - The Controller procedure shall use the Individual Address in the form as it is used within the
KNX S-Mode (today’s ETS).

The methods to bring a unique Individual Address into a device are the following.

a) Using the programming mode

See flowchart a).

The Controller shall use the existing S-Mode services and procedures as the existing tools to
program the Individual Address into the device. The way how to activate the Programming
Mode in the device can be manufacturer specific (e.g. programming button, magnet contact …)

For easier handling by the User the Individual Address can be substituted in the HMI by an
individual name.

© C i h 2004 2021 A i i S S ifi i 02 01 01 163 f 164


-----

b) Automatic Individual Address setting via serial number

See flowcharts b1) and b2)

For devices with a KNX Serial Number the Controller can program the Individual Addresses
automatically (without User action) as follows.

When entering the configuration process, the Controller shall ask on the default Individual
Address for the KNX Serial Numbers. If there is at least one answer the Controller knows that
there is a not configured device. The Controller programs a new Individual Address into the
device with a certain KNX Serial Number.

To the devices, the selection of the supported mechanism is left open. Controllers however shall support
both mechanisms.

###### 6.2.1.2 Device identification
The Controller reads the device Info (Device Descriptor Type 0 (mask version) and Device Descriptor
Type 2), to know what device it is talking to. (See specification of Device Descriptor Type 2 in [05]).

Device Descriptor type 2 in addition to the identification of the device shall also provide some indication
on the supported download mechanisms.

Of course, a Controller can only have knowledge of the E-Mode Channels existing when the Controller
itself is developed. If a Controller reads an E-Mode Channel Code that it doesn’t know it has to inform
the Installer that this E-Mode Channel and following ones can’t be handled.

To be supported also by older Controllers new devices optionally can contain their description in
Interface Objects (same standardised description formats; specific E-Mode Channel Code to be defined).
Controllers can read and store this description, so that they in future know this E-Mode Channel type
(optional feature of devices and Controllers).

Alternatives (also optional): Controller update with other medium (RS232 via PC, inside the factory,
floppy...).

###### 6.2.1.3 Localisation

6.2.1.3.1 Definition and use
From the network point of view, localisation is a logical differentiation between devices or E-Mode
Channels. The Installer will then be able to give a geographical name to each device or E-Mode Channel
(optional).

For an E-Mode Channel available only once in the network (derived from its E-Mode Channel Code), the
localisation is also not necessary because the installer knows where this unique device (e.g. washing
machine) is mounted. To recognise and support this is an optional feature of the Controller.

Thus, an explicit localisation is only necessary with the automatic Individual Address for devices or
E-Mode Channels existing multiple times in the network. It is realised as described in the clauses below.
The start situation is that the Controller knows what types of devices are in the project, but does not know
where they are mounted.

6.2.1.3.2 Localisation Group Addresses
The Controller shall calculate a set of localisation Group Addresses taken in a reserved Group Address
space (1024 Group Addresses required).

6.2.1.3.3 Localisation via Programming Mode
When using the Programming Mode, the localisation is done implicitly within the Device Identification
procedure and no additional localisation is necessary.

© C i h 2004 2021 A i i S S ifi i 02 01 01 164 f 16


-----

6.2.1.3.4 Localisation via Localisation Flag L (default procedure)

The Controller downloads a Localisation Group Addresses into each E-Mode Channel of each not yet
localised device. Every Group Address shall be assigned to only one E-Mode Channel. Therefore during
the standardisation of the E-Mode Channel, one Datapoint (or more if really necessary) shall be marked
as Localisation Datapoint, so the Controller knows what Datapoint gets a localisation Group Address.
Next, the Controller asks the User to localise the devices. This is done by their usual function.

- For sensors the User shall activate the sensor device or E-Mode Channel for generating a bus frame
e.g. by pressing the push button. The push button shall send a frame on the given unique Group
Address. The Controller shall read the Source Address of this frame and may offer the User to give a
name to the localised device or E-Mode Channel.

- For actuators the Controller shall send frames on the unique localisation Group Address using the
predefined values to distinguish or highlight the device, e.g. a lighting actuator shall be switched on
and after 2 s switched off by the Controller. The manufacturer of the device using this method has to
ensure, that the User can watch the reaction on the device, if necessary by a LED or similar. The
User identifies the actuator device or E-Mode Channel by the action, confirms on HMI the right
device and (optional) can give a name to it.

 See flowchart b1)

It is in the responsibility of the manufacturer of the Controller that he delivers a Controller with a safe
configuration procedure and correct error handling.

EXAMPLE The Controller can show the User if it has received two frames during the identification process of a
sensor, and the Controller will ask the User to repeat the localisation for this device.

6.2.1.3.5 Procedure through Localisation Channels
The standard localisation procedure can be replaced, by the use of a specific E-Mode Channel dedicated
for localisation (named "Localisation Channel"). The use of this method is optional for both device and
Controllers and is based on the presence of this E-Mode Channel type in the Device Descriptor Type2 of
the device.

If a device has a Localisation Channel listed in its Device Descriptor Type 2 provided during the
individualisation, the Controller can automatically link the Datapoints of the Localisation Channel.

A Localisation Channel is based on two Datapoints.

1. The "Localisation State" Datapoint of any Localisation_Channel in the installation shall be
linked to a common Group Address and shall be used to enter and quit localisation state.

2. The "Channel_Activation" Datapoint shall be assigned with to a unique Group Address and
shall be used to designate the E-Mode Channels to localise.

See Appendix 8.3 "Appendix 3 : Localisation E-Mode Channels" below for description of the
"Localisation Channel" Channel type.

For entering localisation state, the Controller shall send "Loc. ON" on the Localisation_State Datapoint.
Then all devices shall be in localisation state.

- For actuators, the Controller then only has to send the value setting bit(s) corresponding to the
E-Mode Channel(s) to localise on the "Channel_Activation" Datapoint of the device.

- For sensors, any activation of E-Mode Channel results in the transmission of the "Channel_Activation" Datapoint of the device and with corresponding bit(s) positioned. Localisation can be
done by extracting the Individual Address of the received frame.

To quit localisation state, the Controller shall send "Loc. OFF" on the Localisation_State Datapoint.

 See flowchart b2)

© C i h 2004 2021 A i i S S ifi i 02 01 01 16 f 166


-----

6.2.1.3.6 Localisation via Localisation Flag LA
The Controller shall calculate a set of localisation Group Addresses and download one such Group
Address into each E-Mode Channel into each not localised device. Every Group Address shall be
assigned to only one E-Mode Channel.

Every Group Address shall be assigned to only one E-Mode Channel. Therefore during the standardisation of the E-Mode Channel, one Datapoint (or more if really necessary) shall be marked as
Localisation Datapoint, so the Controller knows what Datapoint shall get a Localisation Group Address.

For sensor E-Mode Channels the Controller shall use the Datapoints marked with the L-flag to this
purpose.

For actuator E-Mode Channels the Controller shall use the Datapoints marked with the LA-flag to this
purpose. If the actuator E-Mode Channel has no output Datapoints, then the L-flag shall be used.
If the Controller supports both the procedure Localisation via Localisation Flag LA and the procedure
_Localisation via Localisation Channel and if the device of the actuator E-Mode Channel to link supports_
Localisation Channels too, then the procedure Localisation via Localisation Channel shall be used.

   - Next, the Controller shall ask the user to localize the devices. This is done by their usual
function.

  - For sensors the user activates the sensor device or E-Mode Channel for generating a bus frame
e.g. by pressing the push button. The push button shall send a frame on the given unique
Localisation Group Address. The Controller shall read the Source Address and offer the localised
device or E-Mode to the User. The user may be requested to give a name to the localised device
or E-Mode Channel.

  - For actuators the user activates the device or E-Mode Channel for generating a bus frame by
HMI (e.g. pressing a push button for manual actuation). The actuator shall send a frame on the
given unique Localisation Group Address. The Controller shall read the Source Address and offer
the localised device or E-Mode Channel to the user. The user may also be requested to give a
name to the localised device or E-Mode Channel.

**Procedure: Localize E-Mode Channels using LA-flag**

Put the Controller into localisation mode (user)
do until user abort
/* the Controller is ready to receive localisation Group Addresses */
If received N_DataGroup.ind(Destination Address,,,,, NSDU)
If Destination Address = one of the localisation Group Addresses
/* A channel is localised via HMI or sensor activation */
Check to which sensor channel or actuator channel this localisation Group Addresses is
assigned
and give the user the information that this channel is just localised.
end if
end if
end do
/* localisation finished via user abort */

Next the Controller shall establish the links between the localised devices as specified in 6.2.1.4.

During the linking process new Group Addresses shall be assigned to the localisation Datapoints. One
exception is allowed: if more than one actuator is linked in one step then only the localisation Datapoint
of one actuator shall get a new Group Address (Visualisation rule). The remaining localisation Datapoints
in this linking group shall keep their localisation Group Addresses so that these E-Mode Channels can be
localised again.

© C i h 2004 2021 A i i S S ifi i 02 01 01 166 f 16


-----

**Error and exception handling**

From the N_DataGroup_Indication-PDU that is received for localisation purposes, the Destination
(Group) Address shall be evaluated and additionally also the Source Address. If the Source Address does
not match to the IA of the actuator to which the localisation Group Address has been assigned then this
frame shall be ignored.

If an actuator has no HMI for manual actuation then the E-Mode Channels of this actuator have to be
localised through on of the three mandatory localisation methods.

###### 6.2.1.4 Link channels
The Controller asks the Installer, to choose the E-Mode Channel he wants to connect. The way this is
done is manufacturer specific (Level 4).

EXAMPLE The Controller presents the user all E-Mode Channels of the project on the HMI.

The Installer selects an E-Mode Channel.

Then the Controller asks the Installer what E-Mode Channel he wants to connect to the selected E-Mode
Channel. For this e.g. the Controller can offer all other E-Mode Channels or only the E-Mode Channels
that can be connected with the first chosen E-Mode Channel. The Controller decides what E-Mode
Channels are connectable through the Connection Rules (see "Appendix 2: Connection Rules" below) and
Connection Codes.

For Controllers using the Localisation Channel, putting the devices into Localisation State, will enable the
selection of the E-Mode Channel directly on the devices. Actuators and Sensors providing a means on
their local HMI to be activated will send their "Channel_Activation" Datapoint. The bit corresponding to
the E-Mode Channel that has been selected on the device shall be marked in the value. Then the
Controller can extract from the frame the device's Source Address and the number of the activated
E-Mode Channel, enabling to select the E-Mode Channel on the HMI.

 See flowchart c)

For each necessary link, the Controller defines Group Addresses to be used. When a new Group Address
is needed, the Controller ensures the selected Group Address is free, if necessary through Group Address
check.

For downloading the chosen link (and parameters) the existing system procedures (fixed or relocatable
DMA) shall be used. (See "Appendix 4 : Controller Mode download Procedures" below for References).

If there are parameters, the Controller may offer them to the User and write the chosen values into the
device, using the same download procedures as for downloading links. The parameters of a standardised
E-Mode Channel are also standardised. In addition there can be private parameters or local parameters
(not seen from the network point of view).

The detailed data structures and system mechanisms for parameter handling are described in "Appendix 5
: Structures for Parameters" below.

Standard Connection Rules are defined for Controllers, to allow a systematic result. See Appendix 2:
Connection Rules, below. Data flow chart

© C i h 2004 2021 A i i S S ifi i 02 01 01 16 f 168


-----

**a.** **Using the programming mode**

Device 1 Device 2 Controller /
Configuration Tool


_procedure_
_analog ETS_

_User can give_

_a name to the_
_localised device_

|Col1|Controller /<br>Configuration Tool|Col3|
|---|---|---|
||Controller /<br> Configuration Tool|_proc_<br>_analo_<br>_User c_<br>_a nam_<br>_localise_|
|Device Identification request<br>(to individual device)<br>Program Individual Address<br>(to device in progr. mode)<br>(to all devices)|Device Identification request<br>(to individual device)<br>Program Individual Address<br>(to device in progr. mode)<br>(to all devices)|Device Identification request<br>(to individual device)<br>Program Individual Address<br>(to device in progr. mode)<br>(to all devices)|


© C i h 2004 2021 A i i S S ifi i 02 01 01 168 f 169


-----

**b.** **Using KNX Serial Number**

**b1) With Localisation via default procedure**


**Individual**

**address**


_Devices 2 to n are not_

_yet configured_


**Product**

**identify**
_Same as in a)_


**Localise**

**device**


_Controller calculates_
_set of localisation_
_Group Addresses_
_(if necessary using_
_GA-Check)_


_For Sensors_

_Controller asks user_
_User activates sensor_ _to localise devices_
_devic or E-Mode_
_Channel_

Sends telegram _Controller can read_

_e.g. by pressing a_

(on given Group Address) _the Source Address_

_button_

_User can give a name_
_to the_
_localised device_


_For actuators_


_User Identifies actuator_
_device or E-Mode_
_Channel_
_e.g. while a lighting_
_actuator is switched on_
_and after 2s off_


Controller asks the
user to identify the
actuators


User confirms on
HMI the device and
can give a name to
the localised device


**Link devices**
_Same as in a)_

|Devices 2 - n|Col2|Col3|Controller /<br>Configuration Tool|Col5|
|---|---|---|---|---|
|_   n are not_<br>_ gured_<br>**vidual**<br>**dress**<br>**uct**<br>**ify**<br>_  in a)_ <br>** es** <br>_   a)_ <br>**lise**<br>**ice**<br>_ es sensor_<br>_  ode_<br>_  ing a_<br>_  actuator_<br>_  ode_<br>_   hting_<br>_  tched on_<br>_   f_|_   n are not_<br>_ gured_<br>**vidual**<br>**dress**<br>**uct**<br>**ify**<br>_  in a)_ <br>** es** <br>_   a)_ <br>**lise**<br>**ice**<br>_ es sensor_<br>_  ode_<br>_  ing a_<br>_  actuator_<br>_  ode_<br>_   hting_<br>_  tched on_<br>_   f_|_   n are not_<br>_ gured_<br>**vidual**<br>**dress**<br>**uct**<br>**ify**<br>_  in a)_ <br>** es** <br>_   a)_ <br>**lise**<br>**ice**<br>_ es sensor_<br>_  ode_<br>_  ing a_<br>_  actuator_<br>_  ode_<br>_   hting_<br>_  tched on_<br>_   f_|_   n are not_<br>_ gured_<br>**vidual**<br>**dress**<br>**uct**<br>**ify**<br>_  in a)_ <br>** es** <br>_   a)_ <br>**lise**<br>**ice**<br>_ es sensor_<br>_  ode_<br>_  ing a_<br>_  actuator_<br>_  ode_<br>_   hting_<br>_  tched on_<br>_   f_|_Controller a_<br>_to localise d_<br>_Controller c_<br>_the Source A_<br>_User can gi_<br>_to the_<br>_localised de_<br>Controller a<br>user to ident<br>actuators<br>_Controller c_<br>_set of locali_<br>_Group Addr_<br>_(if necessar_<br>_GA-Check)_<br>User confir<br>HMI the de<br>can give a n<br>the localised|
|_   n are not_<br>_ gured_<br>**vidual**<br>**dress**<br>**uct**<br>**ify**<br>_  in a)_ <br>** es** <br>_   a)_ <br>**lise**<br>**ice**<br>_ es sensor_<br>_  ode_<br>_  ing a_<br>_  actuator_<br>_  ode_<br>_   hting_<br>_  tched on_<br>_   f_|Response from 2 - n<br>Sends telegram<br>(on given Group Address)|Download unique Group Addresses<br>to each E-Mode Channel of each not<br>configured device<br>(on unique Individual Address)<br>Program Individual Address<br>(to every device one by one<br>distinguished by their KNX Serial<br>Number)<br>( indiv. address 0xFFh)<br>Controller sends telegram<br>(on unique Group Address)|Download unique Group Addresses<br>to each E-Mode Channel of each not<br>configured device<br>(on unique Individual Address)<br>Program Individual Address<br>(to every device one by one<br>distinguished by their KNX Serial<br>Number)<br>( indiv. address 0xFFh)<br>Controller sends telegram<br>(on unique Group Address)|Download unique Group Addresses<br>to each E-Mode Channel of each not<br>configured device<br>(on unique Individual Address)<br>Program Individual Address<br>(to every device one by one<br>distinguished by their KNX Serial<br>Number)<br>( indiv. address 0xFFh)<br>Controller sends telegram<br>(on unique Group Address)|


© C i h 2004 2021 A i i S S ifi i 02 01 01 169 f 1 0


-----

**b2) With Localisation via Localisation Channel**

Devices 2 - n Device 1

**Individual**
**address**

_Devices 2 to n are_ Response from 2 - n
_not yet configured_

**Product**
**identify**
_Same as in a)_

**Localise**

Set Localisation Links :

**device**

Download localisation Group Addresses in each
device having Localisation E-Mode Channel

Enter Localisation State

_For Sensors_ Sends Localisation_State datapoint with value Loc. ON

_User activates_
_sensor devic or_
_E-Mode Channel_ Sends Activated Channel identification
_e.g. by pressing a_ Sends Channel_Activation datapoint
_button_

_For Actuators_

Activate Channel

_User identifies_ Sends Channel_Activation Datapoint
_actuator device or_
_E-Mode Channel_
_e.g.while a_
_lighting actuator_
_is switched on_ Desactivate Channel
_and after 2 s off_ Sends Channel_Activation Datapoint

Exit Localisation State

**Link devices**

Sends Localisation_State datapoint with value Loc. OFF

_Same as in a)_


_Controller knows with_
_DD2, if there is any_
_Localisation E-Mode_
_Channel in the device,_
_use this procedure_

Controller asks user to
localise devices

Controller can read the
Source Address

_User can give a name to_
_the localised device_

Controller asks the user
to identify the Actuator
M on device Y

_User confirms on HMI of_
_the device and can give a_
_name to the localised_
_device_

_continue until all E-Mode_
_Channels are localised_


© C i h 2004 2021 A i i S S ifi i 02 01 01 1 0 f 1 1


-----

**c.** **E-Mode Channel selection using Localisation Channel**

Device n

**Link device**
**(optionnal on**
**controller)**

Enter Localisation_State
Send Localisation_State Datapoint with value Loc. ON

_for Sensors or_
_actuators having_
_Localisation_
_E-Mode Channel_

_user can select an_
_Onput or Output_
_(e.g : by_ Send Channel identification
_activating it or by_ Send Channel_Activation Datapoint with the bit
_pushbutton )_ corresponding to the channel positioned to 1

Exit Localisation_State
Send Localisation_State Datapoint with value Loc. OFF

#### 6.3 Network Configuration Procedures


_User starts the link_
_channel procedure_

_Controller can_
_treat the frame to_
_identify the_
_E-Mode Channel_
_or device_

_User stops the link_
_channel procedure_


##### 6.3.1 Detect Ctrl-Mode devices for IA assignment, find free new IA and assign
   - This network configuration procedure is executed periodically or on request by the Management
Client.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 1 f 1 2


-----

**_1. Get the KNX Serial Numbers of the devices that have the default Individual_**
Address

**_NM_SerialNumberDefaultIA_Scan_**

This returns a list of KNX Serial Numbers of devices that have the default
Individual Address.

If no devices reply, the Configuration Procedure is aborted.

**_2. Assign Individual Addresses to all found Devices_**

###### For every found device (KNX Serial Number)

**_2.1 Repeat Until a Free Individual Address is found_**

**_2.1.1 Propose a new Individual Address_**

This is an internal function inside the Management Client.
It proposes a new Individual Address.

**_2.1.2 Check if the proposed Individual Address is free_**

Either one of the following Management Procedures shall be used:

           - NM_IndividualAddress_Check_LocalSubNetwork
           - NM_IndividualAddress_Check

NOTE Please refer to the specification of these Management Procedures in Chapter 3/5/2
“Management Procedures”.

**_2.2 Assign the free Individual Address to the device_**

**_NM_IndividualAddress_SerialNumber_Write_**

##### 6.3.2 Unload IA for Ctrl-Mode devices

###### 6.3.2.1 Procedure
The IA of Ctrl-Mode devices can be set via Programming Mode or via the KNX Serial Number
procedure. By the fact that a Ctrl device has to support only one of the two methods, the Management
Client has to check out this via a try and error method or via knowledge of the device[ 1)].

If a device contains a KNX Serial Number then the KNX Serial Number procedure can be used[ 2)].
Therefore the starting point is the KNX Serial Number procedure.

There are two possible procedures.

  - The unloading of IA is done automatically: Programming Mode is set memory mapped
(Programming Mode – Realisation Type 2, as specified in [05]),
see procedure below.
  - The unloading is done by activating the Programming Mode via user interaction:
the user activates Programming Mode in one ore more devices; the IAs of these devices are reset
via NM_IndividualAddress_Reset ([06]) in one step[ 3)].

1) The knowledge if a device supports IA Serial Number services can be e.g. via it supports the procedure IA
Assignment via KNX Serial Number [4] in the device recognition phase
2) If the device supports a KNX Serial Number in property 11 of the device object 0 then also the individual
address Serial Number services shall be supported. This will be specified in a separate AN.
3) The IA of Devices than do not support the Programming Mode can’t be reset with this procedure.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 2 f 1 3


-----

**Procedure: Unload IA automatically**

IAnew.SNA = medium dependent default SNA
IAnew.DA = FFh
; The KNX Serial Number SN_Device of the device has to be known by the Management Client
: from former actions to the device if not then the KNX Serial Number is 000000000000h (invalid SN).
if KNX Serial Number of the device > 000000000000h
; Verify if the device with the given KNX Serial Number is found in the network
; if no device with the given KNX Serial Number exists on the network there will be no answer.
IAold = NM_IndividualAddress_SerialNumber_Read (SN = SN_Device)
if positive response
; Write IAnew using the KNX Serial Number.
NM_IndividualAddress_SerialNumber_Write (SN = SN_Device, IA = IAnew)
Exit procedure()
else
Exit procedure (error = KNX Serial Number failed)
end if
else
; From this stage the Programming Mode procedure starts for devices without SN.
; Check if there are already devices in Programming Mode on the network.
; If so, then the procedure will fail because the afterwards setting off the Programming Mode
; will cause two or more devices to be in Programming Mode.
NM_IndividualAddress_Read()
if responses
Exit procedure (error = devices in Programming Mode)
else
; Activate the Programming Mode in the device using the IA of the device.
DMP_Connect_RCo(IA = IAold)
DMP_ProgModeSwitch_RCo(mode = on)
DMP_Disconnect_RCo()
; set IA of the device to IAnew and then restart the device.
A_IndividualAddress_Write(IA = IAnew)
A_Connect_req (IA = IAnew)[ 1)]
DMP_Restart_RCo()
DMP_Disconnect_RCo()
end if
end if

###### 6.3.2.2 Error and exception handling

   - Table 14 gives an overview over the errors and a possible reaction by the Management Client.

1) The procedure DM_Connect_RCo can’t be used because there may be more than one devices with IA = IAnew.
The connection will be aborted on reception of TAck messages

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 3 f 1 4


-----

**Table 14 – Possible errors and Management Client reactions**

**Possible**

**Possible errors** **Possible reasons** **Management** **Remarks**

**Client reactions**

Expected KNX Serial Number is not device removed or Ask installer to Management
confirmed via NM_IndividualAddress_- damaged check Client may try
SerialNumber_Read some

repetitions

Programming Mode is already active in User error, Request user to
one or more devices when entering the unfinished IA deactivate
procedure assignment Programming

Mode of all
devices

#### 6.4 Dedicated requirements for Ctrl-Mode on Communication Medium RF

##### 6.4.1 General requirements
   - The Controller shall use the same Management Procedures as the Management Client in
S-Mode. The main difference is that the Controller has no database to derive the values of the
pre-assigned Group Addresses of the output Group Objects.

Group Addresses shall be pre-assigned by the manufacturer to the output Group Objects of the
Management Server (device) in consecutive order. The Controller shall be able to derive the Group
Addresses from the information contained in Device Descriptor Type 2. Therefore in Ctrl-Mode only
those E-Mode Channel Codes shall be used that allow concluding the presence of all Group Objects
(including inactive Group Objects). For establishing links, the Controller then assigns Group Addresses to
the input Group Objects.

EXAMPLE A single-fold push button can be configured for either switching, dimming or blinds. When “switching” is active, a
channel code shall be used that tells that dimming and blinds objects are also present.

A detailed Profile of the Ctrl-Mode is not yet worked out.

Supporting one E-Mode with a specific medium doesn’t require supporting specific Management
Procedure for other media.

##### 6.4.2 Requirements for RF BiBat systems
   - If a BiBat system is used in Ctrl-Mode, then the Controller, if present, could play the role of the
synchronous BiBat Master. (An E-Mode Controller as BiBat Slave does not make sense.)

   - In this case it is a normal Ctrl-Mode system with runtime communication in the frame of the
synchronous system. The Controller shall support BiBat Master functionality and the devices
shall support BiBat Slave functionality.

   - The Controller then shall be available in runtime (for synchronisation) and in most cases will be
also an application controller.

If the Controller is a normal device outside the BiBat System (i.e. it is not the BiBat Master) it shall
communicate to the BiBat Slaves via the BiBat Master. It can get messages from the BiBat devices
directly.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 4 f 1

|Possible errors|Possible reasons|Possible<br>Management<br>Client reactions|Remarks|
|---|---|---|---|
|Expected KNX Serial Number is not<br>confirmed via NM_IndividualAddress_-<br>SerialNumber_Read|device removed or<br>damaged|Ask installer to<br>check|Management<br>Client may try<br>some<br>repetitions|
|Programming Mode is already active in<br>one or more devices when entering the<br>procedure|User error,<br>unfinished IA<br>assignment|Request user to<br>deactivate<br>Programming<br>Mode of all<br>devices||


-----

#### 6.5 Extendibility with S-Mode
Optionally a Controller can offer its installation data to ETS via a standardised format (to be defined later)
via the bus. ETS will support this import-format and reuse the project data.

   - If no Controller data is available, ETS reads all information about functionality, links and
parameter settings about the Controller Mode devices out of the devices in the following way.

- Check all IAs in the address range of the Controller mode Subnetwork using device identification
(default Subnetwork Address 0X, X depends on the medium; check especially the default Individual
Address 0XFFh).

- Read the device type / function / links / parameters of the Controller Mode devices from the devices
itself, using the Controller Mode features.

- Do the localisation as in the standardised Controller Mode.

- Check presence of Routers on addresses xy00h: if any, reengineer the other (not E-Mode)
Subnetworks as usual.

- Configure the devices:
   - Controller Mode devices as Controller does.
   - S-Mode devices as usual in S-Mode

#### 6.6 Extendibility of other E-Modes by Controller
   - There is no requirement for a Controller to be able to extend other E-Mode installations.

Freedom is left to the Controller's manufacturer to decide which modes he is dealing with and thus which
modes his Controller will support.

#### 6.7 Ctrl-Mode for Flexible E-Mode Channels

##### 6.7.1 Introduction

###### 6.7.1.1 Overview
The below specifications give the typical Configuration Procedures for the FEC Client to configure FEC
devices. Deviations and optimizations are possible. In the normal case, the configuration of a FEC-device
consists of the subsequent execution of the procedures described in the following clauses:

- Domain Address Assignment

- Individual Address Assignment

- Device Identification

- FEC Channel reading

- Localisation for Ctrl-Mode FEC devices

- Read the current links and Parameter Values

- Link FEC Channels

- Parameter setting

###### 6.7.1.2 General remarks
In [06] it is specified for DMP_InterfaceObjectRead_R that the Property description shall be read for
“unknown Properties”. The Property description shall in any case be read if it has not been read before for
a given Property instance, if the Property specification allows for multiple Property Datatypes. In
particular in this document, the Property description shall be read if the PDT can be PDT_REFERENCE.

This shall make sure that the Property value is properly interpreted and that a good error handling is
possible.

EXAMPLE 19 This shall make sure that an 8 octet Property Value is not interpreted as a string if it is in fact a reference.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 1 6


-----

##### 6.7.2 Domain Address Assignment

###### 6.7.2.1 Finding a free RF Domain Address

NOTE 16 The RF Domain Address needs to be unique. It can however not be checked with sufficient certainty
that that any RF Domain Address value would not be used in neighbouring RF Domains. Therefore, the unique KNX
Serial Number of one of the KNX RF devices in the installation is taken as RF DoA. This device could in Ctrl-Mode be
the Controller itself; as it should however be foreseen that this Controller can also be used to configure other
installations, the Controller’s KNX Serial Number should not be taken as DoA. Therefore, it is proposed the KNX
Serial Number of the first programmed KNX RF device in the installation shall be used.
In order to use a unique value for the RF DoA, it is recommended that the KNX Serial Number of the
device that is linked first in an installation be taken as DoA for that installation. Other solutions for
choosing an RF DoA with sufficient guarantee of uniqueness are possible.

/* Read the DoA and the KNX Serial Number of one device */
/* in which the Programming Mode is active. */
NM_DomainAddress_Read(Device.SN = serial_number; Device.IA = individual_address,

Device.DoA = domain_address)

##### 6.7.3 Domain Address assignment via Programming Mode
This procedure sets the RF DoA and the device’s Individual Address; the device is identified by the user
by activating the Programming Mode in the device.

/* The Domain Address “Device.DoA” is assigned to the device. In the same go, the Individual */
/* Address Device.IAnew is assigned to the device. */
NM_DomainAndIndividualAddress_Write2(NmpDoANew = Device.DoA, NmpIANew = Device.IAnew,

Device.IAold = NmpIACurrent)


##### 6.7.4 Individual Address Assignment
The Individual Address can be assigned according the following procedures.

   - Using Programming Mode

   - Using the KNX Serial Number

The Network Configuration Procedures for FEC are identical to the Configuration Procedures for
Ctrl-Mode as specified in clause 6.2.1.1Programming the Individual Address.

##### 6.7.5 Device Identification

###### 6.7.5.1 Overview
The Management Client shall now from the preceding Individual Address Assignment procedure use the
Individual Addresses of the devices that it configures.

**Optimisation**

   - The preceding Procedures for Individual Address Assignment already contain reading out the
Individual Address of the device as a means to check the success of the IA assignment. This
procedure of clause 6.7.5.2 can in that case be skipped and the discovery can directly start with
the sequences of clause 6.7.6.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 6 f 1


-----

###### 6.7.5.2 Read the Device Descriptor

/* Read the Device Descriptor Type 2 */
DMP_Connect_RCl(nm_ASAP = Device.IA, nm_desc_type_req = DD2, nm_desc_type_res = DDresp,

nm_desc_value_res = Device.DD)

Now, the Device Descriptor Type 2 shall be evaluated. The procedure only continues if the device is a
FEC device.

/* If the responded Device Descriptor Type is not DD2 */
/* then the device is a pure S-Mode device or unknown Profile. */
if DDresp != DD2 then continue with the next device
/* If the device is an E-Mode device, but no FEC device */
/* then the further discovery can be skipped as well. */
if DDres.ManagementProfile != 1000b then continue with the next device

An optimisation is possible here if another instance of the same E-Mode device has been read out before:
if DD2 holds the same Manufacturer Code, Application Identification and Application Version as has
been read out from a different device before, then the Management Client may stop the reading out of this
device, use the data read out from the previously read device instance and continue with the next device.

The Management Client now knows that the device is a Flexible E-Mode device. It shall store the
information of the Individual Address and the DD2-value.

If the device’s KNX Serial Number is not yet known from the procedures in 6.7.4 “Individual Address
Assignment” above, then it should be read.

/* Read PID_SERIAL_NUMBER of the Device Object */
DMP_InterfaceObject_Read_RCl( /* [IN] */ object_index = 0; /* [IN] */ PID = PID_SERIAL_NUMBER,

/* [OUT] */ Device.SerialNumber = data)

The obtained KNX Serial Number may be needed in the assignment of the Group Addresses (see 6.7.9)
when the communication partner needs Extended Group Addresses.

##### 6.7.6 FEC Channel reading
For every discovered FEC device FEC[n], its E-Mode Channel description shall be read in full.

♦ Discovery of the Object Index of E-Mode Device Object

To start with, the Object Index of the E-Mode Device Object shall be read. This Object Index is needed
for the later localisation of the FEC-device.

FOR every FEC device FEC[n] discovered in the installation
/* This reads the Object Index of the E-Mode Device Object in the device FEC[n]. */
NM_ObjectIndex_Read(ASAP = FEC[n].IA,
comm_mode_req = point-to-point connectionless, object_type = E-Mode Device Object,
PID = PID_OBJECT_INDEX, test_info = 0101h, test_result = FEC[n].EDevObjectIndex,
comm_mode_res = point-to-point connectionless)
NEXT FEC device

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 f 1 8


-----

♦ Interface Object Index discovery

To start with, the Object index of the E-Mode Channel Object shall be read.

FOR every FEC device FEC[n] discovered in the installation
/* This reads the IO-index of all Properties “E-Mode Channel Object[”] [1) 2)] in the device FEC[n].*/
/* It returns the array of E-Mode Channel Objects in the device: ECObjectIndex[m]. */
NM_ObjectIndex_Read(ASAP = FEC[n].IA, comm_mode_req = point-to-point connectionless,
object_type = E-Mode Channel Object, PID = PID_OBJECT_INDEX,
test_info = 0100h [3][)], test_result = FEC[n].ECObjectIndex[m],
comm_mode_res = point-to-point connectionless)
/* The discovered Interface Object Index is used to immediately check whether the discovered */
/* E-Mode Channel is an Adjusted E-Mode Channel or not. */
FOR every E-Mode Channel Object ECObject m discovered in the device n
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],

PID = PID_CHAN_FLAGS)
IF PID_CHAN_FLAGS.A = 1 THEN
/* One or more instances of the Adjusted E-Mode Channels are present in the device. */
/* The IO-index of these Adjusted E-Mode Channel Objects is read[ 4)]. */
DMP_InterfaceObject_Read_R(ASAP = FEC[n]).IA,
object_index = FEC[n].ECObjectIndex[m], PID = PID_CHAN_ADJ_LISTS)
END IF
NEXT E-Mode Channel Object ECObject m
NEXT FEC device

♦ Reading the descriptions of the Flexible E-Mode Channels

This procedure reads the description of the E-Mode Channel Object and for each also the possible
Adjusted E-Mode Channel Objects. This description consists of the values of the Properties

   - PID_CHAN_CODE

   - PID_VERSION

   - PID_CHAN_NUMBER

   - PID_CHAN_FLAGS

   - PID_CHAN_FB_LIST

   - PID_GO_CCODES_LIST

   - PID_GO_CFLAGS_LIST

    - PID_GO_SUBUNIT
(only in the E-Mode Channel Object, not in the Adjusted E-Mode Channel Object)

   - PID_GO_NAME_LIST

   - PID_PARAM_TYPES

   - PID_PARAM_FLAGS

   - PID_PARAM_NAMES

   - PID_PARAM_UNITS

1) The Interface Object Type for the E-Mode Channel has value 14.
2) The specification of NM_InterfaceObject_Index_Read allows that the used A_NetworkParameter_Read be
possibly repeated if more FEC Channels would be implemented than can be discovered in one
A_NetworkParameter_Response-PDU.
3) The number_of _instance equals 0: this is the “lazy client” approach. The device responds with as many
instances as it can answer in one telegram.

4) It can be noted that these Adjusted E-Mode Channel Objects are not read via NM_InterfaceObject_Index_Read,
which would also return the Adjusted E-Mode Channel Objects of other E-Mode Channels in the device. Instead,
PID_CHAN_ADJ_LISTS is read.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 8 f 1 9


-----

This procedure can be merged with the preceding discovery of the Interface Object Indexes.

FOR every FEC device FEC[n] discovered in the installation
FOR every E-Mode Channel Object ECObject m discovered in the device n
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_CHAN_CODE)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_VERSION)

/* An optimisation is possible here [1)]. */
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_OBJECT_NAME)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_CHAN_NUMBER)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_CHAN_FLAGS)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_CHAN_FB_LIST)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_TYPES)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_FLAGS)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_NAMES)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_UNITS)

/* If the E-Mode Channel is NOT an Adjusted E-Mode Channel, then all data related to GO is read. */
IF PID_CHAN_FLAGS.A = 0 THEN
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_GO_CCODES_LIST)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_GO_CFLAGS_LIST)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_GO_SUBUNIT)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_GO_NAME_LIST)
/* If the E-Mode Channel is an Adjusted E-Mode Channel, then also every related Adjusted E-Mode */
/* Channel Objects l is read. */
ELSE THEN
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[l],
PID = PID_CHAN_ADJ_LISTS)
FOR every Adjusted E-Mode Channel Object l related to E-Mode Channel Object m
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_OBJECT_NAME)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_GO_CCODES_LIST)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_GO_CFLAGS_LIST)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_GO_NAME_LIST)

1) An optimisation is possible here: if the same Channel Code and Channel Version from the same manufacturer is
read out as has already been read out from a (different) device before, then the Management Client may interrupt
the FEC Channel Reading of this FEC Channel, use previously stored data instead and continue with the next
E-Mode Channel. It may be noted however that the number and indexes of the Group Objects may differ with
the value of the Adjustable Parameter, so these may be assumed identical only if also the value of the Adjustable
Parameters equals the value read in another instance of the FEC Channel before.

© C i h 2004 2021 A i i S S ifi i 02 01 01 1 9 f 180


-----

DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_PARAM_TYPES)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_PARAM_FLAGS)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_PARAM_NAMES)
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_PARAM_UNITS)
NEXT Adjusted E-Mode Channel Object
END IF
NEXT E-Mode Channel Object
NEXT FEC device

The Controller now has for every FEC device the complete description of its E-Mode Channels and
Adjusted E-Mode Channels.

##### 6.7.7 Localisation for Ctrl-Mode FEC devices

###### 6.7.7.1 Ctrl FEC specific: Property based Localisation
The Ctrl FEC device shall additionally support Localisation through PID_LOCALISATION_REPORT or
PID_LOCALISATION_COMMAND. At least one of these Properties shall be implemented.

NOTE 17 In a typical device, both Properties may be present.

It is possible that a FEC Channel supports both methods.

EXAMPLE 20 A relay output channel can be localised via PID_LOCALISATION_COMMAND; however, it may exhibit a local
operation of the hardware switch on the device itself, which, when operated while Localisation Mode is active in the device, initiates
a Localisation Report with PID_LOCALISATION_REPORT.

♦ Localisation with PID_LOCALISATION_COMMAND

This shall be initiated by the Controller.

1. The Controller shall firstly activate the Localisation Mode in all FEC-devices in the installation as
specified for PID_LOCALISATION_MODE in [05].

2. Then the controller may request the device localisation action through PID_LOCALISATION_COMMAND as specified in [05]; or receive Localisation reports issued by the FEC Channels as
specified with PID_LOCALISATION_REPORT in [05].

3. The Controller shall explicitly inactivate the Localisation Mode in all FEC-devices in the installation
as specified for PID_LOCALISATION_MODE in [05].

##### 6.7.8 Read the current links and Parameter Values

NOTE 18 This reads all GAs and all Parameter values of the FEC device. The further procedures focus on a single FEC Channel
only.

FOR every FEC device FEC[n] discovered in the installation
/* Read the GAs already assigned to that GO. */
count = 0; error = 0;
WHILE error <> FFh
DMP_FunctionPropertyState_Read(dmp_Iterator = count;
KNX_SerialNumber[count] = dmp_SerialNumber; GA[count] = dmp_GroupAddress;
GOIndex[count] = dmp_GOIndex);
count++;
END WHILE
/* This procedure returns all the GAs of all the GOs. */
/* By the preceding device discovery, the Controller knows which GOs and thus which GAs */

© C i h 2004 2021 A i i S S ifi i 02 01 01 180 f 181


-----

/* are related to which E-Mode Channel in the device. */
;
/* Now, the the current Parameter Values are read. */
FOR every E-Mode Channel Object ECObject m discovered in the device n
/* The size of PID_PARAM_VALUES may vary. Therefore, in the following */
/* DMP_InterfaceObjectRead_RCl, the included A_PropertyDescription_Read shall */
/* effectively be called. */
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_VALUES)
/* If the E-Mode Channel is an Adjusted E-Mode Channel, then also the Parameters
/* of every related Adjusted E-Mode Channel Objects are read. */
IF PID_CHAN_FLAGS.A = 1 THEN
FOR every Adjusted E-Mode Channel Object l related to E-Mode Channel Object m
/* Here as well, the A_PropertyDescription_Read shall be called. */
DMP_InterfaceObjectRead_RCl(object_index = FEC[n].AECObjectIndex[l],
PID = PID_PARAM_VALUES)
NEXT Adjusted E-Mode Channel Object
END IF

##### 6.7.9 Link FEC Channels
The installer procedures for the use of CTRL FEC devices can be identical to those of Ctrl SEC devices.

EXAMPLE 21 The presentation and the selection of the FEC Channels to link can be done by the Controller in the exact same
way as for Ctrl SEC devices.

The Controller procedures can be identical to those of the Ctrl SEC. Specifically the Connection Rules are
identical as in Ctrl SEC.

EXAMPLE 22 The Controller can use the same Management Procedures to find a free Group Address.

From the indications given by the installer about what FEC Channels shall be linked in this device, the
Controller calculates the necessary links between GOs and chooses GAs to use for this. The Controller
downloads the GAs in the FEC device. This is done GO per GO. For each GO the GAs are added one by
one. (The used procedure and AL-services support linking only one GA at a time.)

NOTE 19 The below Configuration procedure links all GOs related to one FEC Channel. The procedures can be repeated and
combined for further FEC Channels in the device. It is however not required and should not be assumed that all FEC Channels in a
device will be linked consecutively. Oppositely, the Controller should neither skip any GO to be linked in a FEC Channel; it should
only do “complete” links.

If the Controller concludes that the newly assigned GA shall be the sending GA for this GO, it shall set
the sending flag accordingly in the below procedure.

To avoid any unwanted effects, the Controller shall hold the application prior to changing any links or
Parameters.

/* Hold the Application Program. */
/* DMP_RunStateMachineWrite_R_IO always uses PID_RUN_STATE_CONTROL. */
/* If the Object Index of the Application Program Object is unknown, then it has to be discovered. */
/* This can be done by e.g. NM_ObjectIndex_Read as specified in [06] */
DMP_RunStateMachineWrite_R_IO(object_index = ApplicationProgram.ObjectIndex,

data = 02000000000000000000h)

© C i h 2004 2021 A i i S S ifi i 02 01 01 181 f 182


-----

The Controller can now add the GAs for the FEC Channel.

/* This procedure adds the GA(s) for one FEC Channel. */
For every GO to link in the FEC Channel
/* Now, the GAs can be assigned. The Group Object Index shall be the GO number within the E-Mode
Channel. */
/* The flag s (“Sending”) has to be set only if the GA is the sending GA for the GO. */
For every GA to be assigned to the GO
DM_FunctionProperty_Write_R(dmp_OI = FEC[n]. ECObjectIndex[m], dmp_PID = PID-OBJECTLINK,
dmp_command = “Add” + “Sending” + “KNX_Serial_Number” + GA + GO.number,
Return Code = dmp_error)
next GA
next GO

**Optimisation**

If the Controller knows from 6.7.8 the GAs that are already assigned to this device, then it may
skip in the above procedure the GAs that do not need to be changed and only handle the GAs
that need to be added or removed. The Controller may for instance evaluate the device’s
Configuration Signature to conclude whether its stored information on the device’s
configuration still matches the device’s real situation.

##### 6.7.10 Parameter setting
It is recommended that firstly the Adjustable Parameter is set. This Parameter shall be of type
PART_ADJUSTABLE_SELECTION and should be the first Parameter in the E-Mode Channel Object.

/* Set the Adjustable Parameter. */
DMP_InterfaceObjectWrite_RCl(object_index = FEC[n]. ECObjectIndex[m],

PID = PID_PARAM_VALUES, start_index = 1;
element_count = 1; data = “value of Adjustable Parameter”);

Based on the parameter description read in 6.7.6, the controller can download every separate parameter of
a linked FEC Channel by simple writing the Property value in the E-Mode Channel Object. If the FEC
Channel has been adjusted, the appropriate Property of the Adjusted E-Mode Channel Object is written
instead.

Restart = False
IF FEC Channel is not adjusted
FOR every parameter i of the FEC Channel
DMP_InterfaceObjectWrite_RCl(object_index = FEC[n].ECObjectIndex[m],
PID = PID_PARAM_VALUES, start_index = i;
element_count = 1; data = parameter_value);
/* Keep track if a Parameter is changed that requires a restart. */
IF FEC[n].ECObjectIndex[m].PID_PARAM_FLAGS.R = 1 THEN Restart = True
NEXT parameter

© C i h 2004 2021 A i i S S ifi i 02 01 01 182 f 183


-----

ELSE
/* The FEC Channel is adjusted. */
/* The Adjusted E-Mode Channel Interface Object is accessed now. */
FOR every parameter i of the Adjusted FEC Channel
DMP_InterfaceObjectWrite_RCl(object_index = FEC[n]. AECObjectIndex[i],
PID = PID_PARAM_VALUES, start_index = i;
element_count = 1; data = parameter_value);
/* Keep track if a Parameter is changed that requires a restart. */
IF FEC[n].AECObjectIndex[m].PID_PARAM_FLAGS.R = 1 THEN Restart = True
NEXT parameter
ENDIF
IF Restart = True THEN DM_Restart_RCl

If the Application Program is stopped prior to the linking or Parameter setting, then it shall be restarted
again. This will also mark the point in time from which onward the application shall start using the new
Parameter values.

/* Start the Application Program. */
DMP_RunStateMachineWrite_R_IO(object_index = ApplicationProgram.ObjectIndex,

data = 01000000000000000000h)

**Optimisation**

If the Controller knows the Parameter Values, then it may skip in the above procedure the
Parameters that do not need to be changed and only handle the Parameters that do need to be
changed. The Controller may for instance evaluate the device’s Configuration Signature to
conclude whether its stored information on the device’s configuration still matches the device’s
real situation.

© C i h 2004 2021 A i i S S ifi i 02 01 01 183 f 184


-----

### 7 Logical Tag Extended

Please refer to Part 10/1 "Logical Tag Extended".

© C i h 2004 2021 A i i S S ifi i 02 01 01 184 f 18


-----

### 8 Appendixes

#### 8.1 Appendix 1: Structure of E-Mode Channel descriptions
The E-Mode Channel description shall contain at least the information given below.

The standard contents and representation style are fixed in [08] and are used in the various specifications
of approved E-Mode Channels in [12].

**Information** **Meaning** **Example**

Channel Code Identifier 56

Channel name Name of the channel Dimming actuator

Classification of the devices in the classes Actuator
```
   o Sensor

```
− sensor, or

`o Actuator` − actuator, or
`o Miscellaneous` − miscellaneous

Application(s) Application or applications that use this E-Mode Channel. Lighting

Datapoints Datapoints handled by this E-Mode Channel.

Parameters Parameters handled by this E-Mode Channel (if any).

**Datapoints table (used by a certain E-Mode Channel):**

**Index in** **Main** **Additional** **Attributes for Connection Rules and localisation**
**Channel** **Connection Code** **Connection Code(s)** **(see Connection Rules)**

1 41 -
2 42 10

...

**Parameters table (used by a certain E-Mode Channel):**

**Index** **Identifier** **Bit-Offset**

1 10 0

2 84 8

...

   - These E-Mode Channel definitions use the standardised set of Connection Codes (for Datapoint
description) and parameters, specified in the following structures.

**Connection Code list**

**Data** **Value-interpretation**
**Identifier** **Name** **Explanation** **Behaviour**
**format** **Incl. range**

41 Light On/Off

**Parameters list**

**Identifier** **Name** **Data type/length** **Range**

10

© C i h 2004 2021 A i i S S ifi i 02 01 01 18 f 186

|Information|Meaning|Example|
|---|---|---|
|Channel Code|Identifier|56|
|Channel name|Name of the channel|Dimming actuator|
|`o` Sensor<br>`o` Actuator<br>`o` Miscellaneous|Classification of the devices in the classes<br>− sensor, or<br>− actuator, or<br>− miscellaneous|Actuator|
|Application(s)|Application or applications that use this E-Mode Channel.|Lighting|
|Datapoints|Datapoints handled by this E-Mode Channel.||
|Parameters|Parameters handled by this E-Mode Channel (if any).||

|Index in<br>Channel|Main<br>Connection Code|Additional<br>Connection Code(s)|Attributes for Connection Rules and localisation<br>(see Connection Rules)|
|---|---|---|---|
|1|41|--||
|2|42|10||
|...||||

|Index|Identifier|Bit-Offset|
|---|---|---|
|1|10|0|
|2|84|8|
|...|||

|Identifier|Name|Explanation|Data<br>format|Value-interpretation<br>Incl. range|Behaviour|
|---|---|---|---|---|---|
|41|Light On/Off|||||

|Identifier|Name|Data type/length|Range|
|---|---|---|---|
|10||||
|||||


-----

#### 8.2 Appendix 2: Connection Rules

##### 8.2.1 Introduction
E-Mode Channel definitions are only stored in Controllers. The E-Mode devices typically only contain
the E-Mode Channel Codes.

The basic rule described in the next clause applies most of the times. Specific cases are described case by
case in the following clauses.

##### 8.2.2 Basic rule
All Datapoints with the same Connection Code shall be connected together.

For this, there may be a free Group Address assigned to the desired Datapoints; for each Connection Code
a new Group Address is taken.

For plausibility, Controller or Supervisor can check whether there is at minimum one input - and one
output Datapoint in the selection.

**Example: Basic rule**

**Ch 01 Switch PB** **Ch 50** **Binary switch no delay**

**GA 1**

On/Off CC 01 On/Off CC 01
Status On/Off CC 02

**Ch 05 Dimming PB** **Ch 55** **Dimming actuator**

**GA 1** **GA 1**

On/Off CC 01 On/Off CC 01

**GA 2** **GA 2**

Bright/Dark CC 06 Bright/Dark CC 06
Value CC 07
Status On/Off CC 02
**Ch = E-Mode Channel Code** Status Value CC 08
CC = Connection Code
**GA = Group Address**

##### 8.2.3 Visualisation Datapoints
Visualisation Datapoints shall be connected together if they have same Connection Code on exact one
sending Datapoint and one or more receiving Datapoints are in the selection.

If more than one E-Mode Channel has to be visualised (means more than one sending Datapoint), then
each of them has to be connected in separate steps.

To identify a visualisation Datapoint, there must be assigned a Visualisation attribute (V) (part of the
attributes for Connection Rules and localisation) to the Datapoint definition inside the E-Mode Channel
description.

© C i h 2004 2021 A i i S S ifi i 02 01 01 186 f 18


-----

**Example: apartment display unit**

**first selection**
**and connection**

**Ch 50** **Binary switch no delay**
**Ch 99 Display unit** **GA 1** On/Off CC 01
Status On/Off R CC 02 Status On/Off S CC 02

**Ch 99 Display unit**

**GA 2**

Status On/Off R CC 02
**Ch 55** **Dimming actuator**
On/Off CC 01
Bright/Dark CC 06

**second selection** Value CC 07
**and connection** Status On/Off S CC 02

Status Value CC 08

##### 8.2.4 Adjustable E-Mode Channels
If an E-Mode Channel is adjustable (e.g. Generic Push Button), then the E-Mode Channel Code with the
best adaptation to the output E-Mode Channel has to be selected automatically if possible. If not
unambiguous, the user must be asked. Only adjustable input E-Mode Channels are allowed (adjustable
output E-Mode Channels are not allowed).

**Example: generic push button**

**Ch 100 Push Button** **Ch 55** **Dimming actuator**

**General**

On/Off CC 01
**Ch 01 Switch PB** Bright/Dark CC 06
On/Off CC 01 **GA 1** **GA 2** Value CC 07
Status On/Off CC 02
**Ch 05 Dimming PB** Status Value CC 08
On/Off CC 01
Bright/Dark CC 06

**Ch 06 Shutter PB**
Step CC 10
Move CC 12

##### 8.2.5 Multiple Connection Codes
   - To realise that e.g. a “light on/off” Datapoint can be connected to a "Central On/Off” Datapoint,
more flexibility is needed.

   - To establish this for a Datapoint, a list of connectable Connection Codes is defined in the
E-Mode Channel description. This may result in a Connection Code reference table.

© C i h 2004 2021 A i i S S ifi i 02 01 01 18 f 188

|Col1|Ch 55 Dimming actuator<br>On/Off CC 01<br>Bright/Dark CC 06<br>Value CC 07<br>Status On/Off S CC 02<br>Status Value CC 08|
|---|---|

|mple: generic push button|Col2|Col3|
|---|---|---|
|**Ch 100 Push Button**<br>**General**<br>**Ch 01 Switch PB**<br>On/Off<br>CC 01<br>**Ch 05 Dimming PB**<br>On/Off<br>CC 01|**Ch 55**<br>**Dimming actuator**<br>On/Off<br>CC 01<br>Bright/Dark<br>CC 06<br> <br>Value<br>CC 07<br>Status On/Off<br>CC 02<br>Status Value<br>CC 08<br> <br> <br> <br> <br>**GA 2** <br>**GA 1**|**Ch 55**<br>**Dimming actuator**<br>On/Off<br>CC 01<br>Bright/Dark<br>CC 06<br>Value<br>CC 07<br>Status On/Off<br>CC 02<br>Status Value<br>CC 08|
|Bright/Dark<br>CC 06<br>**Ch 06 Shutter PB**<br>Step<br>CC 10<br>Move<br>CC 12|Bright/Dark<br>CC 06<br>**Ch 06 Shutter PB**<br>Step<br>CC 10<br>Move<br>CC 12|Bright/Dark<br>CC 06<br>**Ch 06 Shutter PB**<br>Step<br>CC 10<br>Move<br>CC 12|


-----

**Example**

**Connection Code** **65 Shutter Move (Main Connection Code)**
Reference CC ∑ 01 Switch On/Off (Additional Connection Code)
∑ 03 Central Off (Additional Connection Code)

**Connection Code** **33 Standby/Comfort**
Reference CC ∑ 01ref. On/Off

**Connection Code** **32 Window Contact**
Reference CC ∑ 01ref. On/Off

.... ....

If no connection can be achieved with the basic rule then the Connection Code reference table can be
used to find new possible connections.

**Example: binary input is connected to a shutter actuator**

M

C 53 **Shutter actuator**
Step 64
C 33 **Binary Input** **GA 1** Move 65
On/Off 01 ∑ Ref. On/Off 01

##### 8.2.6 Datapoints connectable only once
For some functionality, it is recommended to have one exact connection to each Datapoint of an E-Mode
Channel. However, there may be more than one such Datapoint inside an E-Mode Channel. This can be
for instance the input Datapoints of a logical function or several inputs for window contacts on a room
temperature Controller.

To identify these Datapoints, they have to be marked with an Exclusive-attribute.

Only one Group Address shall be assigned to these Datapoints. The other way round, it is only allowed to
assign such a Group Address to one Datapoint of this type.

© C i h 2004 2021 A i i S S ifi i 02 01 01 188 f 189

|mple|Col2|
|---|---|
|**Connection Code**<br>Reference CC|**65 Shutter Move (Main Connection Code)**<br>∑ 01 Switch On/Off (Additional Connection Code)<br>∑ 03 Central Off (Additional Connection Code)|
|**Connection Code**<br>Reference CC|**33 Standby/Comfort**<br>∑ 01ref. On/Off|
|**Connection Code**<br>Reference CC|**32 Window Contact**<br>∑ 01ref. On/Off|
|....|....|

|mple: binary input is connected to a shutter actuator|Col2|
|---|---|
|C 33<br>**Binary Input**<br>On/Off<br>01<br>**GA 1**|C 53<br>**Shutter actuator**<br>Step<br>64<br>Move<br>65<br>∑ Ref. On/Off<br>01<br>M|
|C 33<br>**Binary Input**<br>On/Off<br>01|C 33<br>**Binary Input**<br>On/Off<br>01|


M


-----

**Example: several window contacts are connected to a temperature Controller**

###### ϑ

**Ch 31 Temp. Controller Binary** **GA 1** **Ch 56** **Thermo Output Binary**
Position On/Off CC 30 Position On/Off CC 30
Standby/Comfort CC 33
Window Contact X CC 32
Window Contact X CC 32
Window Contact X CC 32 **Ch 33** **Binary Input**
Window Contact CC 32

**GA 2**

**Ch 33** **Binary Input**
Window Contact CC 32

**GA 3**

**Ch 33** **Binary Input**
Window Contact CC 32

**GA 4**

© C i h 2004 2021 A i i S S ifi i 02 01 01 189 f 190


-----

#### 8.3 Appendix 3 : Localisation E-Mode Channels
To support the localisation procedure through "Localisation Channels" three specific E-Mode Channel
types are defined. They shall have the same structure, as described in this clause. The difference between
the three E-Mode Channels is that the first one supports localisation for devices with up to 8 channels, the
second is used in devices with 9 to 16 channels, the third in devices with 17 up to 24 channels.

One E-Mode Channel of type « Localisation » is added at the end of the list of used E-Mode Channels of
the Device Descriptor Type 2.

NOTE More than 24 E-Mode Channels are not possible in E-Mode devices supporting “Localisation Channel” because the last
E-Mode Channel type in the Device Descriptor will be occupied by the Localisation E-Mode Channel itself.

Localisation E-Mode Channels shall be based on two Datapoints. The « Localisation_State » Datapoint
shall be used to enter/quit the Localisation_State. The « Channel_Activation » Datapoint shall be used to
indicate the E-Mode Channels to localise.

**Localisation E-Mode Channel for device with 8 E-Mode Channels**

- « Localisation_State » Datapoint

The « Localisation_State » Datapoint shall be used to enter Localisation_State. Therefore the
Controller shall send the value "Loc. ON" on the Localisation_State Datapoint. Then the Localisation
State shall become active in all E-Mode devices with Localisation State Datapoint. To deactivate the
Localisation State the Controllers shall send the value « Loc. OFF » on the Localisation_State
Datapoint.

Bit 0

Loc. OFF value 0 The Localisation State shall be deactivated.

The E-Mode device shall be in normal state. There
shall be no visualisation effects.

Loc. ON value 1 The Localisation State shall be activated.

Any change on Datapoint Channel_Activation shall
generate a « visual effect ». Any action on the input
to designate the E-Mode Channel shall generate a
telegram on the visualisation Group Object.

- « Channel_Activation » Datapoint

   - This Datapoint shall be an 8 bit field, where each bit represents the state of the « visual effect »
of each E-Mode Channel.

Octet 0

bit 7 6 5 4 3 2 1 0

value 0 : not active

value 1 : active

   - bidirectional group_object (reception for actuator’s localisation, emission for sensor’s
localisation)

© C i h 2004 2021 A i i S S ifi i 02 01 01 190 f 191

|Bit|0|
|---|---|

|Octet|0|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|bit|7|6|5|4|3|2|1|0|


-----

**Localisation E-Mode channel for device with 16 E-Mode Channels**

- « Localisation_State » Datapoint

Same as localisation E-Mode Channel for device with 16 E-Mode Channels.

- « Channel_Activation » Datapoint

   - This Datapoint shall be a 16 bit field, where each bit shall represent the state of the « visual
effect » of each E-Mode Channel.

Octet 0 1

Bit 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Channel 16 Channel 10 Channel 1

**Localisation E-Mode Channel for device with 24 E-Mode Channels**

- « Localisation_State » Datapoint

Same as localisation E-Mode Channel for device with 24 E-Mode Channels.

- « Channel_Activation » Datapoint

   - This Datapoint shall be a 24 bit field, where each bit shall represent the state of the visual
effect of each E-Mode Channel.

Octet 0 1 2

Bit 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Channel 24 Channel 18 Channel 1

© C i h 2004 2021 A i i S S ifi i 02 01 01 191 f 192

|Octet|0|Col3|Col4|Col5|Col6|Col7|Col8|Col9|1|Col11|Col12|Col13|Col14|Col15|Col16|Col17|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Bit|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1|0|
|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|Channel 1<br>Channel 10<br>Channel 16|

|Octet|0|Col3|Col4|Col5|Col6|Col7|Col8|Col9|1|Col11|Col12|Col13|Col14|Col15|Col16|Col17|2|Col19|Col20|Col21|Col22|Col23|Col24|Col25|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Bit|23|22|21|20|19|18|17|16|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1|0|
|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|Channel 1<br>Channel 18<br>Channel 24|


-----

#### 8.4 Appendix 4 : Controller Mode download Procedures
Differentiation between Ctrl-Mode Fixed DMA and Ctrl-Mode Relocatable DMA download of links and
parameters into an easy device.

**Modify tables (link update) (Informative)**

**Steps** **Fixed DMA** **Relocatable DMA**

Start procedure T_Connect-PDU T_Connect-PDU

Identify download type − A_DeviceDescriptor_Read-PDU(DD0) − A_DeviceDescriptor_Read-PDU(DD0)
− A_DeviceDescriptor_Response-PDU(DD0 − A_DeviceDescriptor_Response-PDU(DD0

) )

Get the pointer to the Fixed to 0116h Read PID_TABLE_REFERENCE (PID = 7) of
Group Address Table the Addresstable Object
(AdrTabPtr) − A_PropertyValue_Read-PDU

− A_PropertyValue_Response_PDU

Get the pointer to the Read the pointer to the Association Table at Read PID_TABLE_REFERENCE (PID = 7) of
Association Table the fixed memory address @AssocTabPrt the Associationtable Object
(AssocTabPtr) − A_Memory_Read-PDU − A_PropertyValue_Read-PDU

− A_Memory_Response-PDU − A_PropertyValue_Response_PDU
Add 100h for obtaining absolute address.

Get the pointer to the Read the pointer to the Group Object Table at Read PID_TABLE_REFERENCE (PID = 7) of
Group Object Table the fixed memory address @CommsTabPtr the Application Object
(CommsTabPtr) − A_Memory_Read-PDU − A_PropertyValue_Read-PDU

− A_Memory_Response-PDU − A_PropertyValue_Response_PDU
Add 100h for obtaining absolute address.

Calculate max. number adr_cnt = (AssocTabPtr - AdrTabPtr - 3) / 2 adr_cnt = (AssocTabPtr – AdrTabPtr - 4) / 2
of groupaddress entries

Calculate max. number assoc_cnt = (CommsTabPtr - AssocTabPtr - assoc_cnt = (CommsTabPtr - AssocTabPtr of association entries 1) / 2 2) / 2

Read current length of − A_Memory_Read-PDU(AdrTabPtr − A_Memory_Read-PDU(AdrTabPtr
the Group Address − A_Memory_Response-PDU(AdrTabPtr) − A_Memory_Response-PDU(AdrTabPtr)
Table.

Read current Group Read all valid Group Address entries, using Read all valid Group Address entries
Addresses successive − A_Memory_Read-PDU

− A_Memory_Read-PDU − A_Memory_Response-PDU
− A_Memory_Response-PDU

Read current Read value at AssocTabPrt Read value at AssocTabPrt
association table length − A_Memory_Read-PDU(AssocTabPtr) − A_Memory_Read-PDU(AssocTabPtr)

− A_Memory_Response-PDU(AssocTabPtr) − A_Memory_Response-PDU(AssocTabPtr)

Read current Read all valid associations, using successive Read all valid associations, using successive
associations − A_Memory_Read-PDU − A_Memory_Read-PDU

− A_Memory_Response-PDU − A_Memory_Response-PDU

Recalculate the - Address - and
Association Tables
taking into account the
maximum of Group
Addresses and
associations.
Is one maximum
exceeded then stop at
this point and send
T_Disconnect-PDU.

© C i h 2004 2021 A i i S S ifi i 02 01 01 192 f 193

|Steps|Fixed DMA|Relocatable DMA|
|---|---|---|
|Start procedure|T_Connect-PDU|T_Connect-PDU|
|Identify download type|<br>− A_DeviceDescriptor_Read-PDU(DD0)<br>− A_DeviceDescriptor_Response-PDU(DD0<br>)|<br>− A_DeviceDescriptor_Read-PDU(DD0)<br>− A_DeviceDescriptor_Response-PDU(DD0<br>)|
|Get the pointer to the<br>Group Address Table<br>(AdrTabPtr)|Fixed to 0116h|Read PID_TABLE_REFERENCE (PID = 7) of<br>the Addresstable Object<br>− A_PropertyValue_Read-PDU<br>− A_PropertyValue_Response_PDU|
|Get the pointer to the<br>Association Table<br>(AssocTabPtr)|Read the pointer to the Association Table at<br>the fixed memory address @AssocTabPrt<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU<br>Add 100h for obtaining absolute address.|<br>Read PID_TABLE_REFERENCE (PID = 7) of<br>the Associationtable Object<br>− A_PropertyValue_Read-PDU<br>− A_PropertyValue_Response_PDU|
|Get the pointer to the<br>Group Object Table<br>(CommsTabPtr)|Read the pointer to the Group Object Table at<br>the fixed memory address @CommsTabPtr<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU<br>Add 100h for obtaining absolute address.|<br>Read PID_TABLE_REFERENCE (PID = 7) of<br>the Application Object<br>− A_PropertyValue_Read-PDU<br>− A_PropertyValue_Response_PDU|
|Calculate max. number<br>of groupaddress entries|adr_cnt = (AssocTabPtr - AdrTabPtr - 3) / 2|adr_cnt = (AssocTabPtr – AdrTabPtr - 4) / 2|
|Calculate max. number<br>of association entries|assoc_cnt = (CommsTabPtr - AssocTabPtr -<br>1) / 2|assoc_cnt = (CommsTabPtr - AssocTabPtr -<br>2) / 2|
|Read current length of<br>the Group Address<br>Table.|− A_Memory_Read-PDU(AdrTabPtr<br>− A_Memory_Response-PDU(AdrTabPtr)|− A_Memory_Read-PDU(AdrTabPtr<br>− A_Memory_Response-PDU(AdrTabPtr)|
|Read current Group<br>Addresses|Read all valid Group Address entries, using<br>successive<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|Read all valid Group Address entries<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|
|Read current<br>association table length|<br>Read value at AssocTabPrt<br>− A_Memory_Read-PDU(AssocTabPtr)<br>− A_Memory_Response-PDU(AssocTabPtr)|<br>Read value at AssocTabPrt<br>− A_Memory_Read-PDU(AssocTabPtr)<br>− A_Memory_Response-PDU(AssocTabPtr)|
|Read current<br>associations|<br>Read all valid associations, using successive<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|<br> <br>Read all valid associations, using successive<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|
|Recalculate the<br>Address -  and<br>Association Tables<br>taking into account the<br>maximum of Group<br>Addresses and<br>associations.<br>Is one maximum<br>exceeded then stop at<br>this point and send<br>T_Disconnect-PDU.|<br>-|<br>-|


-----

Write new association − A_Memory_Write-PDU(AssocTabPrt) − A_Memory_Write-PDU(AssocTabPrt)
table length − A_Memory_Read-PDU(AssocTabPrt) − A_Memory_Read-PDU(AssocTabPrt)

− A_Memory_Response-PDU(AssocTabPrt) − A_Memory_Response-PDU(AssocTabPrt)

Write new address table − A_Memory_Write-PDU(AdrTabPrt) − A_Memory_Write-PDU(AdrTabPrt)
length − A_Memory_Read-PDU(AdrTabPrt) − A_Memory_Read-PDU(AdrTabPrt)

− A_Memory_Response-PDU(AdrTabPrt) − A_Memory_Response-PDU(AdrTabPrt)

Restart the Allow the application to restart by clearing all Restart the communication by
communication / error flags at RunError (010Dh) 1. setting the Load State of the Address
application − A_Memory_Write-PDU Table Object to “Loaded”

(010Dh, FFh) − A_PropertyValue_Write-PDU
− A_Memory_Response-PDU (Addresstable Object,

PID_LOAD_STATE_CONTROL = 5,
value = “Loaded”)
− A_PropertyValue_Response_PDU
2. setting the Load State of the

AssociationTable Object to “Loaded”
− A_PropertyValue_Write-PDU

(Associationtable Object,
PID_LOAD_STATE_CONTROL = 5,
value = “Loaded”)
− A_PropertyValue_Response_PDU

Finalise T_Disconnect-PDU T_Disconnect-PDU

© C i h 2004 2021 A i i S S ifi i 02 01 01 193 f 194

|Steps|Fixed DMA|Relocatable DMA|
|---|---|---|
|Stop the communication<br>/ application|Stop the application by setting all error flags<br>at RunError (010Dh)<br>− A_Memory_Write-PDU<br>(010Dh, 00h)<br>− A_Memory_Response-PDU<br>Stop the communication by setting the length<br>of the Group Address Table to 1<br>− A_Memory_Write-PDU<br>(AdrTabPrt, 01h)<br>− A_Memory_Response-PDU|Stop the communication by<br>1. setting the Load State of the Address<br>Table Object to “Loading”<br>− A_PropertyValue_Write-PDU<br>(Addresstable Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loading”)<br>− A_PropertyValue_Response_PDU<br>2. setting the Load State of the<br>AssociationTable Object to “Loading”<br>− A_PropertyValue_Write-PDU<br>(Associationtable Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loading”)<br>− A_PropertyValue_Response_PDU|
|Write Group Address<br>table|Write all Group Address entries, using<br>successive<br>− A_Memory_Write-PDU<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|<br>Write all Group Address entries, using<br>successive<br>− A_Memory_Write-PDU<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|
|Write association table|<br>Write all Association Table entries, using<br>successive<br>− A_Memory_Write-PDU<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|<br>Write all Association Table entries, using<br>successive<br>− A_Memory_Write-PDU<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU|
|Write new association<br>table length|<br>− A_Memory_Write-PDU(AssocTabPrt)<br>− A_Memory_Read-PDU(AssocTabPrt)<br>− A_Memory_Response-PDU(AssocTabPrt)|<br> <br>− A_Memory_Write-PDU(AssocTabPrt)<br>− A_Memory_Read-PDU(AssocTabPrt)<br>− A_Memory_Response-PDU(AssocTabPrt)|
|Write new address table<br>length|<br>− A_Memory_Write-PDU(AdrTabPrt)<br>− A_Memory_Read-PDU(AdrTabPrt)<br>− A_Memory_Response-PDU(AdrTabPrt)|<br> <br>− A_Memory_Write-PDU(AdrTabPrt)<br>− A_Memory_Read-PDU(AdrTabPrt)<br>− A_Memory_Response-PDU(AdrTabPrt)|
|Restart the<br>communication /<br>application|<br>Allow the application to restart by clearing all<br>error flags at RunError (010Dh)<br>− A_Memory_Write-PDU<br>(010Dh, FFh)<br>− A_Memory_Response-PDU|<br>Restart the communication by<br>1. setting the Load State of the Address<br>Table Object to “Loaded”<br>− A_PropertyValue_Write-PDU<br>(Addresstable Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loaded”)<br>− A_PropertyValue_Response_PDU<br>2. setting the Load State of the<br>AssociationTable Object to “Loaded”<br>− A_PropertyValue_Write-PDU<br>(Associationtable Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loaded”)<br>− A_PropertyValue_Response_PDU|
|Finalise|T_Disconnect-PDU|<br>T_Disconnect-PDU|


-----

**Modify parameters**

Setting of parameters is done via the same mechanisms as in S-Mode. In addition the parameters are
stored as a block directly following after the Group Object Table. The parameter blocks of the E-Mode
Channels are stored in sequence without gaps.

**Steps** **Fixed DMA** **Relocatable DMA**

Start procedure T_Connect-PDU T_Connect-PDU

Identify download type − A_DeviceDescriptor_Read-PDU(DD0) − A_DeviceDescriptor_Read-PDU(DD0)
− A_DeviceDescriptor_Response-PDU(DD − A_DeviceDescriptor_Response-PDU(DD

0) 0)

Stop the Stop the application by setting all error flags Stop the application by
communication / at RunError (010Dh) 1. setting the Load State of the Application
application − A_Memory_Write-PDU Object to “Loading”

(010Dh, 00h) − A_PropertyValue_Write-PDU
− A_Memory_Response-PDU (Application Object,

PID_LOAD_STATE_CONTROL = 5,
value = “Loading”)
− A_PropertyValue_Response_PDU

Get object table pointer Read the pointer to the Group Object Table Read PID_TABLE_REFERENCE (PID = 7)
CommsTabPtr at the fixed memory address of the Application Object

@CommsTabPtr − A_PropertyValue_Read-PDU
− A_Memory_Read-PDU − A_PropertyValue_Response_PDU
− A_Memory_Response-PDU
Add 100h for obtaining absolute address.

Get object count − A_Memory_Read-PDU(CommsTabPrt) − A_Memory_Read-PDU(CommsTabPrt)
− A_Memory_Response-PDU- − A_Memory_Response-PDU
(CommsTabPrt) (CommsTabPrt)

Calculate starting point para_adr = CommsTabPtr + (object table para_adr = CommsTabPtr + (object table
of parameter block length x 3) + 2 length x 3) + 2

Calculate address - offset of the parameter
(byte) to be changed,
using the relative
position information
from the channel
description

Read current parameter − A_Memory_Read-PDU − A_Memory_Read-PDU
value (byte) (para_adr + offset) (para_adr + offset)

− A_Memory_Response-PDU − A_Memory_Response-PDU

(para_adr + offset) (para_adr + offset)

change value inside the - read parameterbyte by
setting the relevant bits

Write new parameter − A_Memory_Write-PDU − A_Memory_Write-PDU
value (byte) (para_adr + offset, param. value) (para_adr + offset, param. value)

− A_Memory_Read-PDU − A_Memory_Read-PDU
(para_adr + offset) (para_adr + offset)
− A_Memory_Response-PDU − A_Memory_Response-PDU

(para_adr + offset) (para_adr + offset)

Restart the Allow the application to restart by clearing all − A_PropertyValue_Write-PDU
communication / error flags at RunError (010Dh) (Application Object,
application − A_Memory_Write-PDU PID_LOAD_STATE_CONTROL = 5,

(010Dh, FFh) value = “Loaded”)
− A_Memory_Read-PDU − A_PropertyValue_Response_PDU

(010Dh)
− A_Memory_Response-PDU

© C i h 2004 2021 A i i S S ifi i 02 01 01 194 f 19

|Steps|Fixed DMA|Relocatable DMA|
|---|---|---|
|Start procedure|T_Connect-PDU|T_Connect-PDU|
|Identify download type|<br>− A_DeviceDescriptor_Read-PDU(DD0)<br>− A_DeviceDescriptor_Response-PDU(DD<br>0)|<br>− A_DeviceDescriptor_Read-PDU(DD0)<br>− A_DeviceDescriptor_Response-PDU(DD<br>0)|
|Stop the<br>communication /<br>application|Stop the application by setting all error flags<br>at RunError (010Dh)<br>− A_Memory_Write-PDU<br>(010Dh, 00h)<br>− A_Memory_Response-PDU|Stop the application by<br>1. setting the Load State of the Application<br>Object to “Loading”<br>− A_PropertyValue_Write-PDU<br>(Application Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loading”)<br>− A_PropertyValue_Response_PDU|
|Get object table pointer<br>CommsTabPtr|Read the pointer to the Group Object Table<br>at the fixed memory address<br>@CommsTabPtr<br>− A_Memory_Read-PDU<br>− A_Memory_Response-PDU<br>Add 100h for obtaining absolute address.|<br>Read PID_TABLE_REFERENCE (PID = 7)<br>of the Application Object<br>− A_PropertyValue_Read-PDU<br>− A_PropertyValue_Response_PDU|
|Get object count|− A_Memory_Read-PDU(CommsTabPrt)<br>− A_Memory_Response-PDU-<br>(CommsTabPrt)|− A_Memory_Read-PDU(CommsTabPrt)<br>− A_Memory_Response-PDU-<br>(CommsTabPrt)|
|Calculate starting point<br>of parameter block|para_adr = CommsTabPtr + (object table<br>length x 3) + 2|para_adr = CommsTabPtr + (object table<br>length x 3) + 2|
|Calculate address<br>offset of the parameter<br>(byte) to be changed,<br>using the relative<br>position information<br>from the channel<br>description|-|-|
|Read current parameter<br>value (byte)|− A_Memory_Read-PDU<br>(para_adr + offset)<br>− A_Memory_Response-PDU<br>(para_adr + offset)|− A_Memory_Read-PDU<br>(para_adr + offset)<br>− A_Memory_Response-PDU<br>(para_adr + offset)|
|change value inside the<br>read parameterbyte by<br>setting the relevant bits|<br>-|<br>-|
|Write new parameter<br>value (byte)|− A_Memory_Write-PDU<br>(para_adr + offset, param. value)<br>− A_Memory_Read-PDU<br>(para_adr + offset)<br>− A_Memory_Response-PDU<br>(para_adr + offset)|− A_Memory_Write-PDU<br>(para_adr + offset, param. value)<br>− A_Memory_Read-PDU<br>(para_adr + offset)<br>− A_Memory_Response-PDU<br>(para_adr + offset)|
|Restart the<br>communication /<br>application|<br>Allow the application to restart by clearing all<br>error flags at RunError (010Dh)<br>− A_Memory_Write-PDU<br>(010Dh, FFh)<br>− A_Memory_Read-PDU<br>(010Dh)<br>− A_Memory_Response-PDU|<br>− A_PropertyValue_Write-PDU<br>(Application Object,<br>PID_LOAD_STATE_CONTROL = 5,<br>value = “Loaded”)<br>− A_PropertyValue_Response_PDU|


-----

Finalise T_Disconnect-PDU T_Disconnect-PDU

**These mechanisms work under the following conditions:**

- The Application Program is preloaded and running.

- The information of relative position of the parameters comes indirectly from the Device Descriptor
Type 2.

- The Association Table follows directly behind the Group Address Table (including BCU 2
checksumbyte of Group Address Table)

- The Group Object Table follows directly behind the Association Table (including BCU 2
checksumbyte of Association Table).

- The Parameter Table follows directly behind the Group Object Table.

- The Group Address Table Object is always the Interface Object nr. 1.

- The Association Table Object is always the Interface Object nr. 2.

- The Application Program Object is always the Interface Object nr. 3.

- Access Protection:

It is recommended not to use the Access Protection in Ctrl-Mode devices; if Access Protection
is used in an E-Mode installation at minimum the Group Address Table and its pointer should
be readable.

© C i h 2004 2021 A i i S S ifi i 02 01 01 19 f 196

|Steps|Fixed DMA|Relocatable DMA|
|---|---|---|
|Finalise|T_Disconnect-PDU|T_Disconnect-PDU|


-----

#### 8.5 Appendix 5 : Structures for Parameters

##### 8.5.1 E-Mode Parameter Structure
Inside all E-Mode devices with public parameters accessible from the network, the parameters shall be
organised inside a block. A parameter block shall be related to an E-Mode Channel. The parameter
position, the Parameter Type and the possible and default values for the parameters are described and
fixed through the E-Mode Channel Code.

The parameter definition, the Parameter Type, the values, the position inside a parameter block and the
usage for a parameter will be defined by the application groups within KNX Association.

##### 8.5.2 Parameter Type Table
The Parameter Type table identifies a set of Parameter Types. These Parameter Types will be used inside
the parameter definitions. Each Parameter Type is identified by a type identifier. This identifier is for
reference in the Parameter Table.

The Parameter Types are defined by a name (not implementation relevant), by the size in bits or octets
and the use of the value (Enumeration list or discrete value).

The Parameter Types are mandatory if a parameter is implemented using a referenced type.

**EXAMPLE** **Parameter Types**

**Identifier** **Name** **Size** **Use**

1 UINT1 1 bit enumeration

2 UINT2 2 bit enumeration

3 UINT3 3 bit enumeration

4 UINT4 4 bit enumeration

5 UINT8 1 octet enumeration

6 UINT16 2 octet enumeration

7 INTEGER 1 octet value

8 DOUBLE 2 octet value

9 .... .... ....

##### 8.5.3 Parameter Table
The Parameter Table shall identify a set of parameters used for E-Mode devices. These parameters shall
be used inside the E-Mode Channel definitions. Each parameter shall be identified by a parameter
identifier. This identifier shall be used for reference in the E-Mode Channel descriptions.

The parameters are defined by a name (not implementation relevant, but can be used to display on an
HMI), by the Parameter Type and a usage of the parameter. The values shall be presented by an
enumeration list including naming or in case of discrete values by the value range. The default value shall
also be fixed and should be the ex-factory value.

The parameters are mandatory, if an E-Mode Channel type is implemented using a referenced parameter.

© C i h 2004 2021 A i i S S ifi i 02 01 01 196 f 19

|Identifier|Name|Size|Use|
|---|---|---|---|
|1|UINT1|1 bit|enumeration|
|2|UINT2|2 bit|enumeration|
|3|UINT3|3 bit|enumeration|
|4|UINT4|4 bit|enumeration|
|5|UINT8|1 octet|enumeration|
|6|UINT16|2 octet|enumeration|
|7|INTEGER|1 octet|value|
|8|DOUBLE|2 octet|value|
|9|....|....|....|


-----

**EXAMPLE 23** **Parameter Table**

**Identifier** **Name** **Usage** **Type identifier** **Values** **Value description**

01 Generic PB Channel selection, 5 (UINT8) 0 not configured
adjusting the operation 1 switching
mode of the channel 2 dimming

4 shutter control

02 ON delay ON delay for switching 7 (INTEGER) Range 5-200    actuators, Value x
100 ms

03 Timer duration Duration time for 4 (UINT4) 0 no automatic OFF
switching OFF 1 10 seconds
automatically an 2 30 seconds
actuator 3 one minute

04 Binary selection Channel selection, 2 (UINT1) 0 not configured
adjusting the operation 1 standard
mode of the channel 2 cyclic on

3 alarm

05 Binary cycle time Cycle time for binary 7 (INTEGER) Range 10-120    
input frames, Value x
1second

06 Binary alarm Cycle time for binary 4 (UINT4) 0 10 seconds
cycle alarm frames 1 20 seconds

2 30 seconds
3 1 minute
4 2 minutes
5 5 minutes
6 10 minutes

... ... ... ... ... ...

##### 8.5.4 Positioning of parameters inside an E-Mode Channel
The E-Mode Channel descriptions shall contain all parameters assigned to an E-Mode Channel identified
by a E-Mode Channel Code. These parameters shall be located inside a parameter block. Each parameter
itself shall be referred inside the parameter block with its size in bits or octets (corresponding to the
Parameter Type) and with a bit offset to the beginning of the block. Therefore all parameters of the given
E-Mode Channel can be positioned inside the block in order to get some optimisation (right adjusted e.g.)
for the application programs using the parameters.

Each parameter block shall end on an octet boundary. The position of the parameters inside the parameter
block are not restricted to the boundary of the parameters itself. Therefore, in between the parameters
inside a parameter block, unused bits are possible. These bits shall always be set to zero.

The assignment and positioning of parameters in a given E-Mode Channel definition are independent of
the definition of other E-Mode Channels.

The positioning of all parameters inside the parameter block of an implemented E-Mode Channel is
mandatory.

© C i h 2004 2021 A i i S S ifi i 02 01 01 19 f 198

|Identifier|Name|Usage|Type identifier|Values|Value description|
|---|---|---|---|---|---|
|01|Generic PB|Channel selection,<br>adjusting the operation<br>mode of the channel|5 (UINT8)|0 <br>1 <br>2 <br>4|not configured<br>switching<br>dimming<br>shutter control|
|02|ON delay|ON delay for switching<br>actuators, Value x<br>100 ms|7 (INTEGER)|Range 5-200|-|
|03|Timer duration|Duration time for<br>switching OFF<br>automatically an<br>actuator|4 (UINT4)|0 <br>1 <br>2 <br>3|no automatic OFF<br>10 seconds<br>30 seconds<br>one minute|
|04|Binary selection|Channel selection,<br>adjusting the operation<br>mode of the channel|2 (UINT1)|0 <br>1 <br>2 <br>3|not configured<br>standard<br>cyclic on<br>alarm|
|05|Binary cycle time|Cycle time for binary<br>input frames, Value x<br>1second|7 (INTEGER)|Range 10-120|-|
|06|Binary alarm<br>cycle|Cycle time for binary<br>alarm frames|4 (UINT4)|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6|10 seconds<br>20 seconds<br>30 seconds<br>1 minute<br>2 minutes<br>5 minutes<br>10 minutes|
|...|...|...|...|...|...|


-----

**EXAMPLE 24: An E-Mode channel has assigned the parameters ON delay (8 bit) and Timer duration (4 bit). The**
minimum length of parameter block is 12 bit. Let’s suppose it is an advantage for the application to
have a bit offset of 2 bit to an octet border for the parameter Timer duration the resulting parameter
block can be shown as the following.

Channel abc Octet0 Octet 1

Bit offset 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Parameters **03 Timer Duration** **02 ON delay**

All grey parameter bits are not used and may be read and written as zero.

**EXAMPLE 25:** An adjustable E-Mode Channel has assigned the parameters Binary cycle time and Binary alarm
cycle. These parameters are exclusive together and are used in accordance to the E-Mode Channel
adjustment. The first parameter inside this block then is the E-Mode channel selection parameter.
The second (and further) parameters are depending on the adjustment on the same locations behind
the adjustment parameter.

Channel def Octet0 Octet 1

Bit offset 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Parameters 0 **04 Binary selection = 0**

Parameters 1 **04 Binary selection = 1**

Parameters 2 **04 Binary selection = 2** **05 Binary cycle time**

Parameters 3 **04 Binary selection = 3** **06 Bin.alarmcycle**

© C i h 2004 2021 A i i S S ifi i 02 01 01 198 f 198

|Channel abc<br>Bit offset<br>Parameters|Octet0|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Octet 1|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Channel abc<br>Bit offset<br>Parameters|0|1|2|3|4|5|6|7|7|8|9|10|11|12|13|14|15|
|Channel abc<br>Bit offset<br>Parameters|||**03 Timer Duration**|**03 Timer Duration**|**03 Timer Duration**|**03 Timer Duration**||||**02 ON delay**|**02 ON delay**|**02 ON delay**|**02 ON delay**|**02 ON delay**|**02 ON delay**|**02 ON delay**|**02 ON delay**|

|Channel def<br>Bit offset<br>Parameters 0<br>Parameters 1<br>Parameters 2<br>Parameters 3|Octet0|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Octet 1|Col12|Col13|Col14|Col15|Col16|Col17|Col18|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Channel def<br>Bit offset<br>Parameters 0<br> <br>Parameters 1<br> <br>Parameters 2<br> <br>Parameters 3<br>|0|1|2|3|4|5|6|7|7|8|9|10|11|12|13|14|15|
|Channel def<br>Bit offset<br>Parameters 0<br> <br>Parameters 1<br> <br>Parameters 2<br> <br>Parameters 3<br>|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|**04 Binary selection = 0**|||||||||
|Channel def<br>Bit offset<br>Parameters 0<br> <br>Parameters 1<br> <br>Parameters 2<br> <br>Parameters 3<br>|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|**04 Binary selection = 1**|||||||||
|Channel def<br>Bit offset<br>Parameters 0<br> <br>Parameters 1<br> <br>Parameters 2<br> <br>Parameters 3<br>|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**04 Binary selection = 2**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|**05 Binary cycle time**|
|Channel def<br>Bit offset<br>Parameters 0<br> <br>Parameters 1<br> <br>Parameters 2<br> <br>Parameters 3<br>|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|**04 Binary selection = 3**|||||**06 Bin.alarmcycle**|**06 Bin.alarmcycle**|**06 Bin.alarmcycle**|**06 Bin.alarmcycle**|


-----

