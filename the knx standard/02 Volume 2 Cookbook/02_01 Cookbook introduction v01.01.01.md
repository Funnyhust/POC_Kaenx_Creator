# KNX Cookbook

## Introduction

Summary

This document is a development help for KNX newcomers.

This document gives an overview and an introduction to the KNX
Cookbook.

This document is not part of the KNX Standard approval procedure.

This document is part of the KNX Specifications v2.1


-----

#### Contents

##### 1 Overview ................................................................................................................................. 3

 2 Introduction - purpose ........................................................................................................... 3

 3 Goal .......................................................................................................................................... 3

 4 Concept - disclaimer .............................................................................................................. 3

 5 Steps of the development process .......................................................................................... 4 5.1 Overview ......................................................................................................................... 4 5.2 Step 1: HW development ................................................................................................ 4 5.3 Step 2: AP Development ................................................................................................ 4 5.4 Step 3: Create an ETS database entry for your product with MT4 ................................ 4 5.5 Step 4: Certification ........................................................................................................ 4

#### Document updates

**Version** **Date** **Modifications**

1.0.0 2011.05.13 Preparation of the final version.
01.00.01 2013.10.14 Editorial updates for the publication of KNX Specifications 2.1.
01.01.01 2013.12.10 Editorial update to include reference to Chapter 2/6/1.

#### References

[01] Chapter 3/1/2 “Glossary”

[02] Volume 5 “Certification Manual”

[03] Volume 6 “Profiles”

Filename: 02_01 Cookbook introduction v01.01.01.docx
Version: 01.01.01
Status: Final version
Savedate: 2013.12.10
Number of pages: 4

© C i h 2010 2013 KNX A i i KNX C kb k 01 01 01 2 f 4

|Version|Date|Modifications|
|---|---|---|
|1.0.0|2011.05.13|Preparation of the final version.|
|01.00.01|2013.10.14|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.01.01|2013.12.10|Editorial update to include reference to Chapter 2/6/1.|


-----

### 1 Overview
This KNX Cookbook is composed of the following documents.

   - Part 2/1: Introduction

   - Part 2/2: Reading the KNX Specifications

   - Part 2/3:Features of KNX and ETS

`o` Chapter 2/3/1: Load Controls

   - Part 2/4: Development tools

`o` Chapter 2/4/1: Manufacturer Tool
`o` Chapter 2/4/2: EITT

   - Part 2/5: KNX Development on basis of existing system components

`o` Chapter 2/5/1: Components by Opternus
`o` Chapter 2/5/2: Components by TAPKO
`o` Chapter 2/5/3: Components by Weinzierl Engineering

   - Part 2/6: ETS App development

`o` Part 2/6/1

### 2 Introduction - purpose
The documents of this KNX Cookbook describe the development process of a KNX certified product.
This will be done in clear distinct steps and by means of easy and straightforward examples.

### 3 Goal
The KNX Cookbook does not replace the KNX Specifications. Sure the KNX Cookbook refers to other
document of the KNX Specifications. However, in your daily life as KNX developer you will still find
yourself in situations, where you need to consult these other documents of the KNX Specifications in
order to find the answer to any specific question. Part 2/2 of this KNX Cookbook “How to read the
standard”, will however assist you with this task.

The scope of this KNX Cookbook in respect to ETS versions or editions is ETS4 and MT4. All older ETS
version and editions will not even be mentioned here. In case you have a question about - or a problem
with these versions, please open a support ticket in your KNX Online Shop account
(http://onlineshop.knx.org).

### 4 Concept - disclaimer
This entire KNX Cookbook is based on very simple applications, which will be developed from scratch.

In order to keep the examples as simple as possible – though making sure that all common aspects of such
projects are present and hence reflect the reality of your daily tasks – the complexity of the parameter
structure and number of resources (for instance Group Objects) will be restricted. Or in other words, this
document is not about real life devices but about ‘the making of’.

© C i h 2010 2013 KNX A i i KNX C kb k 01 01 01 3 f 4


-----

### 5 Steps of the development process

#### 5.1 Overview
Step 1: Development of the actual HW.

Step 2: Development of the AP that will make the AM work.

Step 3: Create an ETS database entry for your product using MT4.

Step 4: The combination of the device with the AP need to be certified. Only then, your customer will
be able to import its ETS database entry into his ETS databases.

#### 5.2 Step 1: HW development
The HW always consists of two major parts.

1. KNX Certified platform
Since any KNX certified platform has a proven compliance with the KNX Specification; this part is
limited to a simple overview: see Part 2/5 “KNX Development on basis of existing system
components” and Part 2/6 “KNX Development on basis of existing stack solutions” of this volume.

2. The actual AM
The development of the AM is beyond the scope if this Cookbook.

#### 5.3 Step 2: AP Development
The development of the AP depends on the (KNX certified) platform that you have chosen.

 In general: see [03].
 For more practical details, please read the individual solutions (in chapter 5 and 6 of this volume)
 …

#### 5.4 Step 3: Create an ETS database entry for your product with MT4
It is not necessary to wait with this task until the AP is ready but it is probably the best practice for your
very first KNX product.

**Preparation**

Before you start make sure to have the following.

   - The list of all the parameters that you have foreseen in your Application Program, including
their exact memory location and length.

   - The list of Group Objects that you have foreseen in your Application Program, including the
size of the Datapoint Types that they use.

#### 5.5 Step 4: Certification
See Volume 5 “Certification Manual” ([02]) for more details.

© C i h 2010 2013 KNX A i i KNX C kb k 01 01 01 4 f 4


-----

