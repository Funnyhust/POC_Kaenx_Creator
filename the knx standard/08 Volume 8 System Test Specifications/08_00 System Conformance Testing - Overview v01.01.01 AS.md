## System Conformance Testing
# 8

### Overview

Summary

This document gives an overview of the various KNX system
conformance tests.

This document is part of the KNX Specifications v2.1.

Version 01.01.01 is a KNX Approved Standard.


-----

###### Document Updates

**Version** **Date** **Modifications**

1.0 2001.12.18 Approved Standard (editorial update 1)

1.1 2009.02 Publication in preparation of V2.0 release, taking into account publication of
AN106 and AN109

01.01.01 2013.10.23 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 08_00 System Conformance Testing - Overview v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.23
Number of pages: 5

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.12.18|Approved Standard (editorial update 1)|
|1.1|2009.02|Publication in preparation of V2.0 release, taking into account publication of<br>AN106 and AN109|
|01.01.01|2013.10.23|Editorial updates for the publication of KNX Specifications 2.1.|


-----

##### Contents

###### 1 Overview of Volume 8: System Conformance Testing ....................................................... 4


-----

#### 1 Overview of Volume 8: System Conformance Testing

Volume 8 consists for the time being of 8 parts (some of which are empty), each of them containing test
specifications for a specific system related feature.

Volume 8 shall be regarded as the test counterpart of the Volume 3 ‘System Specifications’. Both
volumes are toolboxes. Where Volume 3 contains descriptions of the agreed system services, Volume 8
contains a description how these can be tested.

The numbering of the chapters and parts of volume 3 is reflected in the chapters and parts of volume 8,
i.e. to facilitate the finding of the testing specifications related to a specific system feature as found in
Volume 3.

What a device shall actually implement to bear the KNX logo, is reflected in Volume 6 (Profiles) as well
as in Volume 9 (Basic and System components/devices).

**8/1 Introduction**

This part gives an overview of the various tests, which have to be carried out to prove compliance of a
submitted product to the KNX system specifications. According to their construction, KNX products can
be divided into various test classes. These test classes in turn determine the test depth required. The part 1
‘Introduction’ provides guidelines for manufacturers and test labs on the extent of required testing for the
various KNX product types.

**8/2 Testing of Physical Layer and Link Layer**

This part is divided in several chapters, each of them containing test specifications for the physical and
link layer of an agreed KNX medium. This part thus includes tests for the medium dependant layers of the
KNX protocol, i.e. TP1, PL110, RF, etc. (test specifications for any new agreed medium will be added as
an additional chapter).

**8/3 KNX Network, Transport, Application (Interface) Layer, Management Service Testing**

This Part is separated into the following chapters:

Chapter 3 contains the tests needed to assess conformity of the implemented network layer of a device,
router or bridge.

Chapter 4 contains the tests needed to assess conformity of the implemented transport layer of a device
(a.o. handling of unnumbered data packets, unnumbered control data, numbered data packets – correct
generation of numbered control data – correct mapping of group addresses to connection numbers
according to address table and vice versa, etc. ).

Chapter 7 contains the tests needed to assess conformity of the implemented application and application
interface layer of a device as well as the tests needed to assess conformity of management services
supported by a KNX device, i.e. the mechanisms needed to configure the device. This part contains test
specifications for all defined management services, regardless of the configuration mode (S or E-Mode)
they belong to.
For the time being, only server tests are defined. Client tests will be added in a next version.

**8/6 Testing of Application Programmer’s Interface, Physical External Interface, External/Internal**
**Message Interface**

This part contains the tests needed to assess conformity of

   - the application programmer’s interface or software subroutines offered by the BAU system
software to the application programmer according to the KNX specifications.

   - the tests needed to assess electrical and software conformity of the implemented Physical
External Interface.


-----

**8/7 Testing of KNX Interworking**

This part contains the tests needed to assess conformity of the device to the agreed KNX datapoint types
and/or functional blocks.

**8/8 Testing of KNXnet/IP**

This part contains the tests for verification of compliance to the KNXnet/IP specifications, as carried out
by the KNXnet/IP Validation Tool.

**Various separate Test Suite Supplements**

These parts contain test specifications for dedicated topics like

   - testing of products complying to controller mode.

   - testing of handling of channels by easy mode clients.

   - Group Object & Network/Device Management Testing for Devices with Implementation
Independent Resources.

   - Testing of supported load state machines.

   - Testing of supported run state machines.

   - Etc.


-----

