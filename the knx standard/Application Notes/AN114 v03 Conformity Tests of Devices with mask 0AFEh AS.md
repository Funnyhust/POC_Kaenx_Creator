## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 114/07 rev 3

### Approved by KonCert 06/08 - Approved by KTB in Final voting – Immediate effect after final voting

**Subject:** Conformity tests of devices supporting the DD0 0AFEh (IA downloadable, AP not downloadable)
device descriptor according AN094

**Question:** When a device supports mask version 0AFEh, which of the conformity tests as given in Volume
8 shall be fulfilled by this device?

**Answer:**

In the absence of a profile for devices complying with DD0 0AFEh in Volume 6, such devices shall fulfill at
least the following conformity tests as given in Volume 8 of the KNX specifications:

`o` The full TP1 Physical and Link layer tests as given in Volume 8/2/2. Depending on the use of
certified components in the device, it could be possible that some of the tests can be waived
(for further information see Volume 8/1,Volume 8/2/2 or any related application note);

`o` The full Network Layer tests in accordance with Volume 8/3/3;

`o` The Transport Layer Tests in accordance with Volume 8/3/4.
In order to avoid any conflicts with the current ETS, it is recommended to re-implement the
TL, with the TL Style 2 State Machine. If not desired, it is recommended to answer to any TConnect request with T-Disconnect. This may however have unwanted side-effects/error
messages in ETS.

`o` The Network Management Tests for A_Restart, A_IndAddrRead, A_IndAddrWrite and
A_DeviceDescriptorRead in accordance with Volume 8/3/7

`o` The tests related to Group Object Communication in accordance with Volume 8/3/7,
however depending on which extend the different Services (Write, Read, Response) and the
communication flags functionality is supported (as documented by the manufacturer in the
PICS & PIXIT for KNX Services). For instance, if none of the implemented Group Objects
can be read via the bus, the relevant tests of the device when receiving GrpValueRead can
be skipped.

`o` The normal interworking tests in accordance with Volume 8/7/1.


-----

