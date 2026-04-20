# System Specifications

## Management (informative)

Summary

Part 3/5 “Management” contains the specifications of which data shall be
managed in a KNX device and the procedures to this. It contains the
specification of the Configuration Procedures.

Version 01.01.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

v0.1 2006.01.23 Document creation.
v1.0 2009.01.05 Preparation of the Approved Standard
01.00.01 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
01.01.01 2021.09.28 Removed the reference to the “Installer Procedures” specification.
Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 3/3/7 “Application Layer”

[02] Chapter 3/5/2 “Management Procedures”

[03] Chapter 3/5/3 “Configuration Procedures”

Filename: 03_05 Management v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2021.09.28
Number of pages: 4

©C i h 2006 2021 A i i S S ifi i 01 01 01 2 f 4

|Version|Date|Modifications|
|---|---|---|
|v0.1|2006.01.23|Document creation.|
|v1.0|2009.01.05|Preparation of the Approved Standard|
|01.00.01|2013.10.28|Editorial updates for the publication of KNX Specifications 2.1.|
|01.01.01|2021.09.28|Removed the reference to the “Installer Procedures” specification.<br>Preparation for inclusion in the KNX Specifications v3.0.|


-----

#### Contents

##### 1 Conventions: Four levels of specification ............................................................................. 4

©C i h 2006 2021 A i i S S ifi i 01 01 01 3 f 4


-----

### 1 Conventions: Four levels of specification

**Table 1 – Levels of management specification**

**Nr. Level**

**4 Installer procedures**

Description Description of installer's actions.
(in this context):

Example: 1. Activate the Controller.
2. Designate each sensor one by one by pressing the programming
button.

Expected result:   - One of the manufacturer specific solutions described as example
procedure.

KNX Specifications: The Installer Procedures are not specified in the KNX Specifications.
Please refer to the training documentation of the MaC software.

**3 Configuration Procedures**

Description Description of Configuration Procedures, which make use of
(in this context): Management Procedures (for each Configuration Mode).

Example: 1. On first designation on a device, device enters « conf mode ».
2. Controller initiates "set Individual Address".

Expected result:   - Specification of the Configuration Modes (S-Mode, Ctrl-Mode,
PB-Mode, LTE-Mode…).
##### - Requirements on network - and device management and device
Profiles.

KNX Specifications: Chapter 3/5/3 “Configuration Procedures” [03].

**2 Management Procedures**

Description Mandatory procedures for managing Network Resources and Device
(in this context): Resources, modelled as interaction schemes.

Example: 1. Set an Individual Address from Controller.
2. Check existence of Individual Address with T_Connect.
3. Send A_IndividualAddress_Write-PDU.

Expected result: Common Management Procedures and common device Profiles.

KNX Specifications: Chapter 3/5/2 “Management Procedures” [02].

**1 Application Layer services**

Description Application Layer services used by Management.
(in this context):

Example: Application Layer services: A_IndividualAddress_Write…

Expected result: Common services

KNX Specifications: Chapter 3/7/3 “Application Layer” [01].

©C i h 2006 2021 A i i S S ifi i 01 01 01 4 f 4

|Nr.|Level|Col3|
|---|---|---|
|**4**|** Installer procedures**|** Installer procedures**|
|<br> <br> <br>|Description<br>(in this context):|Description of installer's actions.|
|<br> <br> <br>|Example:|1. Activate the Controller.<br>2. Designate each sensor one by one by pressing the programming<br>button.|
|<br> <br> <br>|Expected result:|- One of the manufacturer specific solutions described as example<br>procedure.|
|<br> <br> <br>|KNX Specifications:|The Installer Procedures are not specified in the KNX Specifications.<br>Please refer to the training documentation of the MaC software.|
|**3**|** Configuration Procedures**|** Configuration Procedures**|
|<br> <br> <br>|Description<br>(in this context):|Description of Configuration Procedures, which make use of<br>Management Procedures (for each Configuration Mode).|
|<br> <br> <br>|Example:|1. On first designation on a device, device enters « conf mode ».<br>2. Controller initiates "set Individual Address".|
|<br> <br> <br>|Expected result:|- Specification of the Configuration Modes (S-Mode, Ctrl-Mode,<br>PB-Mode, LTE-Mode…).<br>- Requirements on network - and device management and device<br>Profiles.|
|<br> <br> <br>|KNX Specifications:|Chapter 3/5/3 “Configuration Procedures” [03].|
|**2**|** Management Procedures**|** Management Procedures**|
|<br> <br> <br>|Description<br>(in this context):|Mandatory procedures for managing Network Resources and Device<br>Resources, modelled as interaction schemes.|
|<br> <br> <br>|Example:|1. Set an Individual Address from Controller.<br>2. Check existence of Individual Address with T_Connect.<br>3. Send A_IndividualAddress_Write-PDU.|
|<br> <br> <br>|Expected result:|<br>Common Management Procedures and common device Profiles.|
|<br> <br> <br>|KNX Specifications:|Chapter 3/5/2 “Management Procedures” [02].|
|**1**|** Application Layer services**|** Application Layer services**|
|<br> <br> <br>|Description<br>(in this context):|Application Layer services used by Management.|
|<br> <br> <br>|Example:|Application Layer services: A_IndividualAddress_Write…|
|<br> <br> <br>|Expected result:|<br>Common services|
|<br> <br> <br>|KNX Specifications:|Chapter 3/7/3 “Application Layer” [01].|


-----

