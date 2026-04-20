# Profiles

## S-Mode Profiles for system components

 DoA based RF Retransmitter

Summary

This document specifies the requirements for extending a Base Profile
that supports KNX RF Communication Medium to be able to support RF
DoA based Retransmitter functionality.

This document is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

01.01.01 2021.09.01 - Document creation based on AN160 “KNX RF S-Mode device Profiles”
clause 2.8.1.
01.01.01 2022.03.25 - Review and publication of the Approved Standard.

#### References

[01] Chapter 3/2/5 “Radio Frequency”

Filename: 06_04_01 DoA based RF Retransmitter v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2022.03.25
Number of pages: 7

|Version|Date|Modifications|
|---|---|---|
|01.01.01|2021.09.01|-<br>Document creation based on AN160 “KNX RF S-Mode device Profiles”<br>clause 2.8.1.|
|01.01.01|2022.03.25|-<br>Review and publication of the Approved Standard.|


-----

#### Contents

**1** **Introduction and common requirements ............................................................................. 4**

**2** **Common Profile ..................................................................................................................... 5**
2.1 Overview ......................................................................................................................... 5
2.2 Physical Layer - general ................................................................................................. 5

**3** **Medium dependent layers ..................................................................................................... 6**
3.1 Goal ................................................................................................................................. 6
3.2 RF medium dependent layers ......................................................................................... 6
3.2.1 Data Link Layer-Retransmitter ........................................................................... 6

**4** **Interface Objects .................................................................................................................... 7**
4.1 Overview ......................................................................................................................... 7
4.2 Device Object ................................................................................................................. 7
4.3 RF Medium Object ......................................................................................................... 7


-----

### 1 Introduction and common requirements
The Domain Address based RF Retransmitter is not a device Profile but is a Profile extension for
functionality that can be added to any KNX RF S-Mode Profile. The below clauses do therefore not
specify a full Profile, but only indicate the Features that are required for this Module Profile.


-----

### 2 Common Profile

#### 2.1 Overview

**Feature**

1 Network Layer – Domain Address based RF Retransmitter M

#### 2.2 Physical Layer - general

|Col1|Feature|DoA Based RF Retransmitter|
|---|---|---|
|1|Network Layer – Domain Address based RF Retransmitter|M|

|Col1|Specification|Col3|Test|
|---|---|---|---|
|[01]|-<br>§6.1.7 “The Layer-2 of an RF<br>Retransmitter”||- <br>to be defined|


-----

### 3 Medium dependent layers

#### 3.1 Goal
This Profile describes the requirements on a device in order to guarantee compliance with one of the
standard communication media of the system. Compliance with one of these Profiles is a prerequisite for
both runtime and configuration Interworking.

#### 3.2 RF medium dependent layers

1. Data Link Layer-Retransmitter M
2. APDU-length ≥ 55

NOTE 1 The Profile “DoA based RF Retransmitter” is not a full device Profile but a Profile Module, this is, it is only an extension
to a full device Profile. The APDU-length that is indicated here shall be the minimal APDU-length that the implementation shall be
able to retransmit. For the specification of the APDU-length that the device shall support for its own runtime communication and
management, please refer to the respective RF device Profiles.

##### 3.2.1 Data Link Layer-Retransmitter

**Specification** **Test**

[01] - §6.1.7 “The Layer-2 of an RF
Retransmitter”

          - Route Last flag

          - History List

          - RF Repetition Counter

For the “Domain Address based RF Retransmitter”, the History List shall at least support the KNX RF
DoA; the support of the KNX SN is optional.

|Col1|DoA Based RF Retransmitter|
|---|---|
|1. Data Link Layer-Retransmitter<br>2. APDU-length|M <br>≥ 55|

|Specification|Test|
|---|---|
|[01] -<br>§6.1.7 “The Layer-2 of an RF<br>Retransmitter”<br>- <br>Route Last flag<br>- <br>History List<br>- <br>RF Repetition Counter||


-----

### 4 Interface Objects

#### 4.1 Overview


0 Device Object M
19 RF Medium Object M

#### 4.2 Device Object

**Property**

1 PID_OBJECT_TYPE Data 3/1

|Interface Object|DoA Based RF Retransmitter|
|---|---|
|0 Device Object|M|
|19 RF Medium Object|M|

|Property|Col2|DoA Based RF Retransmitter|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|


#### 4.3 RF Medium Object

**Property**

1 PID_OBJECT_TYPE Data 3/1
57 PID_RF_RETRANSMITTER Data 3/2

|Property|Col2|DoA Based RF Retransmitter|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|57 PID_RF_RETRANSMITTER|Data|3/2|


-----

