## System Conformance Testing 8

### Interworking & Functionality Tests 77


# 11


Summary

This document contains test specifications for Testing of KNX Interworking
and Functionality of KNX products.


-----

###### Document Updates

**Version** **Date** **Modifications**
1.0 2001.03.13 Approved Standard
1.1a 2003.02.04 Update of the document to cater for functional block testing – working
document – integrated comments from SBT
1.1RfV 2003.02.25 Finalisation of the document for RfV
1.1FV 2003.09.18 Preparation of document for RfV – integration of comments from RfV –
deleting of checking of used addresses for E and A-mode in accordance to
KSG resolution September 2004
1.1AS 2005-02-24 Publication as AS – no comments during FV cycle
1.2 WD 2008-10 Proposal for update of the document: clarifications of test depth and
possible test rationalisation – removal of A-Mode
1.2 RfV 2008-11 Integration of Comments following KonCert November meeting
1.2 FV 2009-04 Integration of Comments following RfV – preparation for submission to
FV
1.2 AS 2009-06 Resolution of comments from FV – readying document for publication in
V2.0 of the KNX specifications
1.3 RfV 2013-10 Improvement/restructuring of content after number of audits at KNX
accredited test labs – integrated comments of KonCert 1013 meeting
1.3 FV 2014-02 Resolution of comments from Release for Voting Cycle – readying for
final voting
01.03.00 2015-04 No comments in final voting – publication as AS
01.04.00 2015-06 Proposal for an update following May KonCert meeting
WD

01.04.01 2015-10 Preparation for KonCert October meeting and for Release for Voting
01.04.02 2015-12 Resolution of comments from Release for Voting
01.04.03 2015-06 No comments in FV January 2016 – publication as AS
01.05.00 2016-06 Working document – further simplification of document content –
publication as RfV
01.05.01 2016-10 No comments in Release for Voting – immediate publication as AS
01.06.00 2017-04 Preparation of new version for KC meeting 042017
01.06.01 2017-04 Integration of comments from KC meeting – preparation for RfV
01.06.02 2017-09 Resolution of comments from April voting cycle
01.06.03 2018-03 Publication of Approved Standard version – no comments in Final voting
01.06.04 2019-12 Normative annexes added with tests of SAB state machine Shutters and
Blinds – state machine DAB – included flowchart with overview test
campaign
01.06.05 2020-01 Resolution of comments from circulation of document to KCG
01.06.06 2020-01 Readying for Release for Voting
01.06.07 2020-03 Resolution comments Release for Voting – readying for Final Voting
01.06.08 2020-09 Resolution comments Final Voting

Filename: 08_07_01 System Conformance Testing - Interworking Tests v01.06.08 AS
Version: 01.06.08
Status: Approved Standard
Savedate: 2020.10.09
Number of pages: 28

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.03.13|Approved Standard|
|1.1a|2003.02.04|Update of the document to cater for functional block testing – working<br>document – integrated comments from SBT|
|1.1RfV|2003.02.25|Finalisation of the document for RfV|
|1.1FV|2003.09.18|Preparation of document for RfV – integration of comments from RfV –<br>deleting of checking of used addresses for E and A-mode in accordance to<br>KSG resolution September 2004|
|1.1AS|2005-02-24|Publication as AS – no comments during FV cycle|
|1.2 WD|2008-10|Proposal for update of the document: clarifications of test depth and<br>possible test rationalisation – removal of A-Mode|
|1.2 RfV|2008-11|Integration of Comments following KonCert November meeting|
|1.2 FV|2009-04|Integration of Comments following RfV – preparation for submission to<br>FV|
|1.2 AS|2009-06|Resolution of comments from FV – readying document for publication in<br>V2.0 of the KNX specifications|
|1.3 RfV|2013-10|Improvement/restructuring of content after number of audits at KNX<br>accredited test labs – integrated comments of KonCert 1013 meeting|
|1.3 FV|2014-02|Resolution of comments from Release for Voting Cycle – readying for<br>final voting|
|01.03.00|2015-04|No comments in final voting –publication as AS|
|01.04.00<br>WD|2015-06|Proposal for an update following May KonCert meeting|
|01.04.01|2015-10|Preparation for KonCert October meeting and for Release for Voting|
|01.04.02|2015-12|Resolution of comments from Release for Voting|
|01.04.03|2015-06|No comments in FV January 2016 –publication as AS|
|01.05.00|2016-06|Working document – further simplification of document content –<br>publication as RfV|
|01.05.01|2016-10|No comments in Release for Voting – immediatepublication as AS|
|01.06.00|2017-04|Preparation of new version for KC meeting 042017|
|01.06.01|2017-04|Integration of comments from KC meeting –preparation for RfV|
|01.06.02|2017-09|Resolution of comments from April voting cycle|
|01.06.03|2018-03|Publication of Approved Standard version – no comments in Final voting|
|01.06.04|2019-12|Normative annexes added with tests of SAB state machine Shutters and<br>Blinds – state machine DAB – included flowchart with overview test<br>campaign|
|01.06.05|2020-01|Resolution of comments from circulation of document to KCG|
|01.06.06|2020-01|Readying for Release for Voting|
|01.06.07|2020-03|Resolution comments Release for Voting – readying for Final Voting|
|01.06.08|2020-09|Resolution comments Final Voting|


-----

##### Contents

###### 1 Introduction ....................................................................................................................... 5

 2 Interworking and Functionality Tests ............................................................................. 6

 3 Test Set-Up Description .................................................................................................... 7
 3.1 Hardware ............................................................................................................... 8 3.2 Software ................................................................................................................ 9 3.3 Documentation .................................................................................................... 10 3.3.1 Required paper input from manufacturer ..................................................... 10 3.3.2 Validation of documentation ........................................................................ 10 3.3.3 Archiving ...................................................................................................... 10 3.4 Final Test preparation .......................................................................................... 10 3.4.1 Addressing .................................................................................................... 10 3.4.2 Creating test sequences ................................................................................ 11 3.5 Validation of Test Equipment ............................................................................. 12

 4 Elaborating a test concept............................................................................................... 13
 4.1 General test depth rules ....................................................................................... 13 4.2 Setting Parameters ............................................................................................... 13 4.2.1 Default Configuration .................................................................................. 13 4.2.2 Parameter Change ........................................................................................ 13 4.3 Test rationalisation .............................................................................................. 14

 5 Running the KNX Interworking and Functionality Tests ........................................... 15
 5.1 Start-Up Test Suite Procedure - Configuration ................................................... 15 5.2 Checking the BDUT’s Reaction after Configuration .......................................... 15 5.3 Checking the BDUT’s Reaction after Reset ....................................................... 15 5.4 Checking the BDUT’s Reaction after Power Failure .......................................... 15 5.5 Checking the KNX Interworking Standards and Functionality in default settings ................................................................................................................. 16 5.5.1 General ......................................................................................................... 16 5.5.2 Test Step 1 : Test of IN-Function ................................................................. 16 5.5.3 Test Step 2 : Test of OUT-Function ............................................................. 17 5.6 Test Cases with modified Parameters ................................................................. 17 5.7 Checking Requirements for the Bus Load (if applicable) ................................... 17 5.7.1 Repetition Rate ............................................................................................. 17 5.7.2 Debounce time ............................................................................................. 18 5.7.3 Transmission Priority ................................................................................... 18 5.8 Checking requirements for an Application Module powered by secondary Power Supply (if applicable) ............................................................................... 18 5.9 Checking of Routing Counter ............................................................................. 18 5.10 Test of ETS plug ins, DCAs and S-mode stand-alone tools (if applicable) ........ 18 5.11 Ability of BDUT to respond to a Read Request (if applicable) .......................... 19

 6 Informative Annex: Interworking/Functionality Testing Flowchart ......................... 20

 7 Normative Annex A: Testing of State Diagram of FB SAB Blinds ............................. 22
 7.1 Introduction ......................................................................................................... 22 7.2 Actual tests .......................................................................................................... 22

 8 Normative Annex B: Testing of State Diagram of FB SAB Shutter ........................... 25
 8.1 Introduction ......................................................................................................... 25


-----

###### 8.2 Actual tests ........................................................................................................... 25

 9 Normative Annex C: Testing of State Diagram of FB DAB Dimmer ......................... 27
 9.1 Introduction .......................................................................................................... 27 9.2 Actual tests ........................................................................................................... 27


-----

#### 1 Introduction
This document describes the way the conformity of standardised and non-standardised KNX data
types as realized in KNX application programs shall be assessed by KNX accredited test labs. Hints
are given as regards ancillary test equipment (be it hard- or software) depending on the used medium
of the KNX device to be tested or needed to attribute links and set parameters depending on the
supported configuration mode (Easy or System mode).

The description of the interworking tests predominantly focuses on the testing of standardised and
non-standardised data types as realised in Group Objects (GO) and in products supporting S-Mode
configuration, as this is thought to be the more frequent test case. However, the document also gives
requirements on how to test data types if realised as polling values or properties of a KNX interface
object and when configured by E-Mode, however only as footnotes.

The purpose of this document (as also reflected in its structure) is to streamline the Interworking and
Functionality tests as carried out in KNX accredited test labs by

- specifying the general requirements for Interworking and Functionality tests of standardised and
non-standardised data types (e.g. test set-up) and

- laying down an Abstract Test Suite (ATS) applicable to all existing KNX standardised data types,
regardless of their implementation as Group Objects, polling values or properties of an interface
object.

In view of the multitude of KNX standardised data types, the document does not provide any
Executable Test Suites (ExTS). These have to be drawn up by the accredited test labs themselves on a
case by case basis: the aptitude of the accredited test labs to establish such ExTS is verified during the
KNX accreditation procedure of candidate test labs.

The document has to be read in conjunction with the

  - the submitted Manufacturer’s product documentation and KNX forms (See Volume 5 Table
3);

  - the underneath other parts of the KNX specifications, i.e.

`o` Always

         - Volume 3/7/1 Interworking Model;

         - Volume 3/7/2 Datapoint Types;

         - Any application notes to or updates of the before-mentioned volumes
(available from the KNX FTP server);

         - (if applicable for the product to be tested) any listed and approved KNX nonstandardized DPTs (available from the KNX FTP server);

`o` in case of S-Mode products and in case the functionality of the to be tested product
matches one of the required functional blocks;

         - Volume 6/30/1 Runtime Profiles - Clause “FB Profiles”,

         - Volume 7/x/x Application Descriptions


-----

#### 2 Interworking and Functionality Tests
Some test tools allow KNX Conformity testing of implemented standardised and non-standardized
variable types is carried out by means of a uniform test set-up (for further details see item 3.1).
Although interwoven, it is correct to assert that these tests consist of two distinct parts:

1. Functional Testing: These tests do not only check whether implemented (non-) standardised
data types correctly communicate on the bus, but also check their respective functionality.
However, the purpose of these tests is not to judge the performance of the product but to
ensure that the functionality of the product corresponds to what is stated in the specifications
supplied along with the product (i.e. what is laid down in a.o. the PIXIT-Proforma).
In other words, the BDUT’s behaviour is checked against the supplied documentation, the
purpose of the test is not to document the BDUT’s detected behaviour.

2. Actual Interworking Testing: These tests shall ensure that tested data types will interwork
with data types of the same type and/or that implemented non-standardized data types do not
disturb normal bus operation.


-----

#### 3 Test Set-Up Description
A uniform test tool is offered by KNX to conduct Interworking and Functionality Tests, named EITT.
The tool can be used to check conformity of both standardized as well as non-standardized data types.

For more information on the functionality of the tool, please refer to the Help file as shipped along
with the tool.

EITT as part of the test environment will emulate:

   - a Reference Sensor or a Reference Actuator in case of realisation of data types as group
objects[1].

When the communication way of the tested data point is IN, the BDUT (Bus Device Under Test - e.g.
binary output, analogue output) receives telegrams and brings about actions. EITT then assumes the
role of

   - KNX reference sensor in case of a group object data point[2];

When the communication way of the tested data point is OUT, after stimulating the BDUT (e.g. push
button, temperature sensor) it will send telegrams via the bus. EITT shall then assume the role of

   - KNX reference actuator in case of a group object data point[3];

and triggers an acknowledgement on receipt of the correct telegram.

Note: In case a data type is implemented as a Group Object, it is possible that its use is bidirectional: then this data point can both receive and send information (not recommended
according to volume 3/7/1).

1 a polling master or polling slave in case of realisation of data types as polling values, a property server or property client in
case of realisation of data types as properties.
2 polling slave in case of realisation of data types as polling values; property client in case of realisation of data types as
property values;
3 polling master in case of realisation of data types as polling values; property server in case of realisation of data types as
property values;


-----

The test set-up described below enables the testing of these functions:

**PC1**

KNX

EITT and **Interface**
Configuration Tool (if needed)

**Load Generator**

**BUS DEVICE UNDER TEST (BDUT)**

**Figure 1: Test Set-Up for testing of (non-) standardised data types**

##### 3.1 Hardware
The test set-up is depicted in the above figure and consists of[4]:

- one Bus Device Under Test (BDUT);

- one interface[5] connected to a PC. Characteristics of the PCs shall fit to the requirements as stated
in the user manuals of the used test/configuration tools;

- Medium specific components, e.g. when testing TP1 devices, a power supply and choke module
will have to be added to the above test set-up;

- a Mains artificial network 50 Ω / 50 µH + 5 Ω according CISPR16-2-1:2014 and CISPR16-21:2017 (Clause 7.3.2) shall only be installed next to the BDUT when the relevant Power Line
medium does not provide other means of separation of the test circuit, e.g. standardized PL-filters
or mains separation transformer;

4 The test set-up may also include configuration mode specific components, e.g. an Easy Configurator (when testing Easy
controller products) to attribute link information to the BDUT and/or set parameters.
5 Typically, this is a USB interface. Until ETS 5, the use of an RS232 interface is also possible. When testing functionality
and interworking of KNX IP devices, instead of a serial interface a KNXnet/IP tunnelling server shall be used.


-----

**Note**

a) If necessary, the KNX accredited test lab may incorporate a KNX reference sensor[6] in the
test set-up to stimulate IN functions, provided it ensures that this sensor[6] has been duly
certified (i.e. certificate issued!) by KNX. For traceability reasons, KNX strongly
recommends that telegrams generated by such reference devices are archived, especially if
the BDUT for some reason fails the test. Moreover, the use of reference devices shall be
documented in the resulting test-report (e.g. in the test set-up description).

b) When using EITT, an extra ACK generator is not required, as already generated by EITT
itself.

c) A Bus Load Generator[7]: If the Bus Device Under Test consists of a KNX standardized Bus
Access Unit (BAU), KNX Conformity testing can be restricted to testing of the BDUT
without activated Bus Load Generator.

If however, the Bus Device Under Test contains a non-standardised Bus Access Unit (i.e. a
BAU of which the system software has not (yet) been tested) or if a non- standardised Bus
Access Unit is tested separately, KNX Conformity testing shall be carried out once with and
once without activated Bus Load Generator.

##### 3.2 Software
Different types of software are required:

   - A license of the EITT Conformity Test tool;

   - A license of the Engineering Test Tool[8].

On the sole PC in the test set-up (PC1), EITT is run. In addition also the ETS will be needed in order
to configure the BDUT and/or change, whenever necessary, parameters of the BDUT by means of
download (although in some cases, parameters may only be modifiable via hardware settings).

Consult the KNX Website for information on the availability, latest versions and pricing of the beforesaid tools.

Other software packages may also be needed and be provided by the manufacturer.

The applicant shall moreover supply the test house with an ETS file containing the product data and
the product application(s) to be tested[9]. Prior to its use, the test house shall check whether the BDUT
data has been registered by KNX (status of the product shall have been set to “registered” – in case of
OEM it is allowed that the manufacturer of the BDUT differs from the actual applicant), in order to
ensure compatibility between the tested data and the data on the market.

6 or polling master/property client
7 The Bus Load Generator shall be supplied by the BDUT manufacturer and be able to generate the bus load as
specified in clause 11 of Volume 8/2/2.
8 For S-Mode configuration only
9 for E-mode, this requirement is for the time waived


-----

##### 3.3 Documentation

###### 3.3.1 Required paper input from manufacturer
According to Volume 5 (for further information, see this volume), the manufacturer shall supply
additional documents such as:

   - PIXIT Header[10]

   - for each in/output data point, a filled in data point description form[10]

   - the initial reaction tables of the BDUT[10]

   - If desired, the applicant may supply test proposals (e.g. in a form executable by EITT), be it to
test standardised or non-standardised data types implemented in the BDUT.

###### 3.3.2 Validation of documentation
Prior to starting the test, this documentation shall be compared to the KNX specifications, as regards
compliance to the Interworking Model of Volume 3/7/1, Standardised data types of Volume 3/7/2 and
(conditionally) compliance to a standardised functional block of Volume 7 and any application notes
that may exist to the before-said documents.

In case of use of non-standardised DPTs, it shall be verified by the KNX accredited test lab if these
DPTs are contained in the latest version of the overview of the accepted non-standardized DPTs, as
updated from time to time on the KNX FTP server.

Any submitted test proposal shall also be carefully validated. If necessary, the KNX accredited test lab
can make suggestions to modify such files and even has the authority to reject them overall, if they are
not considered apt to thoroughly test the BDUT.

In case a product is submitted to certification, for which the applicant claims conformity to a
standardised functional block, all features of the functional block shall be checked against the
functional block specifications, i.e. in the supplied PIXIT it shall be checked whether[11]:

 all mandatory in/output and parameters are implemented;

 any supported optional in/output and parameters are implemented as given in the
functional block specifications;

 the correct identifiers are used (if applicable);

###### 3.3.3 Archiving
Any input or output files used or created by the test tools used for KNX conformity testing shall be
archived by appropriate means for traceability reasons.

##### 3.4 Final Test preparation

###### 3.4.1 Addressing
Define individual, group addresses and all other required parameters of the BDUT.

10 Regardless whether they have been implemented as group objects, polling values or properties of interface
objects. This documentation style may deviate from the KNX standardised PIXIT proforma, provided the
manufacturer’s documentation provides the same information.
11 In case of realisation of Functional blocks as interface objects, via property description read the above shall
also be checked by sample tests via the bus


-----

Note: If addresses must be attributed to all available objects or to a specific object, the manufacturer

shall declare this in the PIXIT Proforma and in the product information as supplied along with
the application software. If not, the application program has failed the conformity tests.

Recommended test set-up addressing rules are as follows:

_a)_ _as regards group addresses[12]:_

Group Addresses

Group Object 0 0001h

Group Object 1 0002h

…

Group Object n 000n (+1)h

_b)_ _as regards individual addresses[13],_

the PC1 connected to the EDI shall preferably have the individual address 1.0.240, whereby the BDUT
1.0.245. If a manufacturer opts to implement the setting of the individual address with other means
than a programming button or LED, these other means shall be properly documented in the PIXIT
proforma in order to be able to set the appropriate individual address by means of ETS.

###### 3.4.2 Creating test sequences

 3.4.2.1 General
Based on this information and in the case where the applicant did not provide a test proposal, the KNX
accredited test lab shall create a test set-up, thereby taking into account the default parameter settings
of the BDUT, individual address, group addresses and associations.

An ETS project shall be created and downloaded in the BDUT, after which telegram sequences for the
various OUT and IN functions implemented in the BDUT shall be created by means of EITT and this
for the various possible parameter settings (which are then again downloaded into the BDUT by
means of ETS)[14].

The initial reaction descriptions, which form part of the PIXIT proforma, shall be used as a basis
during testing of the reaction of the BDUT after configuration, reset and power failure.

###### 3.4.2.2 Telegram Sequences

3.4.2.2.1 General
Elaborate (a) telegram sequence(s) for the respective parameter settings.

12 between F000h and F3FFh for datapoint types with Functions of Common Interest (FOCI) - in the case of Emode devices, the group addresses will be automatically set without user interaction
13 in E- mode, the individual address is mostly either set by default or attributed without user intervention. If the
individual address can be set via user intervention (e.g. code wheels), it is recommended that individual
addresses are chosen as in S-Mode.
14 For E-mode devices, the addresses shall be attributed by means of the local user interface or other respectively
via the appropriate configurator. Subsequently, telegram sequences for the various OUT and IN functions
supported by the BDUT shall be defined in EITT and this for various possible parameter settings (either via
local settings on the BDUT or via the appropriate configurator).

|Col1|Group Addresses|
|---|---|
|Group Object 0|0001h|
|Group Object 1|0002h|
|…||
|Group Object n|000n (+1)h|


-----

Test steps depend on the product’s functionality. Some products act either as actuators (receiving
mode) or sensors (transmitting mode) or both. For instance, even a push button may act as an actuator
(e.g. its LEDs). Normally, when stimulated, it acts as a sensor and will transmit one or more telegrams
on the bus.

3.4.2.2.2 Test of IN Function
To test the IN function, a telegram sequence shall be created in EITT and subsequently used to
provoke reaction from the BDUT. This reaction shall then be compared to what the manufacturer laid
down in the PIXIT-Proforma (or specified in the comment line next to the telegram). The correct or
incorrect behaviour shall subsequently be recorded. KNX recommends that all telegrams in the
sequence are accompanied by details on the expected BDUT behaviour

**Note**

a) As specified in Part 3/7 "Interworking" of the KNX Specifications, partial implementation of
any data type in a data point with a communication way in (IN functions) is neither
acceptable nor can it be declared as a non-standardised data type. For this reason, be sure to
test the entire interworking functionality in data points with a communication way in (e.g. in
case of data type 1.001 both switching on as well as off).

b) In case of binary bi-directional functions (not recommended according to the KNX
Interworking Model but allowed for dimming actuators), when sending the appropriate frame
to the IN function, it shall be checked whether the data point generates the expected OUT
telegram.

3.4.2.2.3 Test of OUT Function
To test the OUT function, EITT allows the creation of telegram sequences, which are compared by the
tool with the transmitted telegrams resulting from a stimulation of the sensor. The correct or incorrect
behaviour shall subsequently be recorded. KNX recommends that all telegrams are accompanied by
instructions how to stimulate the BDUT in a comment field

**Note**

1) As specified in Part 3/7 "Interworking" of these KNX Handbook Series, partial
implementation of data types is only permitted in data points with a communication way out
(in general OUT functions). However, when the manufacturer declares full implementation of
a data type in a data point with communication way Out, the device shall be stimulated in a
sufficient number of settings in order to guarantee a profound test of the implemented data
point. It lies in the responsibility of the KNX accredited test lab to assess on a case-by-case
basis how often this needs to be done.

##### 3.5 Validation of Test Equipment
In order to ensure that the Test Set-up properly functions, KNX recommends that prior to starting the
KNX conformity tests, the testing body validates its test equipment. This can be done by installing an
already certified sample product (e.g. a push button) into the test set-up, by configuring it and by
verifying whether transmitting the appropriate telegrams triggers the correct reaction of the sample
product and stimulating it generates the appropriate telegrams.


-----

#### 4 Elaborating a test concept

##### 4.1 General test depth rules
The following general rules as regards test depth apply:

1. All group objects supported by the BDUT shall be manipulated in the test. If sending, the group
object shall have been stimulated once in order to verify the resulting telegram. If receiving, an
appropriate telegram shall have been sent to the group object to check the reaction of the product
as declared by the manufacturer. If the supported DPT supports several fields, different possible
settings of these fields shall be checked. It is recommended to opt for minimum or maximal object
values, if possible

2. All implemented parameters shall have been tested in at least the default setting and in one other
setting different from the default (for the latter it is recommended to opt for minimum or maximal
settings of the parameters, if possible).

3. The KNX accredited test lab shall keep proper track of the test depth, e.g. in the form of an
overview of the tested data points and parameters, showing in which case they were covered
during conformity testing.

Recommendations on how the tests can possibly be rationalised for more complex applications are
given in clause 4.3.

##### 4.2 Setting Parameters

###### 4.2.1 Default Configuration[15]
The default configuration is stored in the ETS product entry as supplied by the manufacturer. These
default settings shall be downloaded into the BDUT by means of ETS on PC1.

###### 4.2.2 Parameter Change
Most BDUT’s behaviour can be modified by means of parameters, e.g. locally on the device, via
parameters that are downloaded in the device, …. . If an application has several parameters, additional
tests will therefore be required in order to check the BDUT behaviour in other settings than the default
settings and on limit conditions. Such additional tests shall therefore be performed after the default
configuration described above.
Important: The BDUT shall be tested in a number of parameter settings, in order to guarantee a
profound test of the implemented functionality other than the default setting. It lies in the
responsibility of the KNX accredited test lab to assess on a case-by-case basis how often this is
necessary. The modification of parameters shall thereby however effectively change the BDUT’s
behaviour.

**Notes**

1. Practical experience has shown that in some cases a test lab might be obliged to modify a
parameter more than once in order to guarantee a profound test of the submitted application.
In other cases it might not be necessary to modify all parameters (e.g. if a manufacturer uses the
same timer subroutines for different outputs).
It therefore lies in the responsibility of the KNX accredited test labs to assess on a case-by-case
basis how often parameters shall be changed.

15 In case of E-mode compatible products (Controller mode), it shall be ensured that during the default test, the
default settings are configured by the configurator. For all other E-compatible products, parameters can only
be set locally (e.g. E-mode Push button).


-----

2. Note that the settings of parameters may influence the visibility of other parameters as well as
available group objects.

3. Be sure to document the various parameter settings by using the possibility in ETS to print-out a
device detail[16]. For traceability reasons KNX recommends that parameter names are given in the
language of the used product database or product description supplied by the manufacturer.

4. For time delays it is advised to select a high time factor and a low time base, instead of vice versa.

##### 4.3 Test rationalisation

1. In some cases, the test of a BDUT in its default parameter setting might show only limited
functionality. In that case, the KNX accredited test lab may as a first test step immediately
change the BDUT’s default parameter settings, if this contributes to testing more of its
implemented data points and/or functionality.

2. In the case where functionality of a product is repeated in the form of multiple identical
channels (e.g. 16-fold binary out), the KNX accredited test lab

a. May deviate from the general rule that all implemented objects shall be manipulated
at least once, provided that the product is tested in its default parameter settings and in
at least one other parameter setting.

b. shall not select the same parameter settings for all channels during a test case. In order
to be able to test more functionality, different parameter settings shall be chosen for
the available channels.

3. The testing of parameter settings, of which the functionality can only be tested with
considerable effort (large time delays), may be skipped.

4. In the case where the manufacturer has had pre-certification tests performed at a KNX test lab
on the basis of unregistered applications, it is allowed that the same KNX accredited test lab
only runs random tests on the registered application, if the manufacturer declares in writing to
the relevant KNX accredited test lab that the registered application and the one tested during
pre-certification is identical. The resulting test report should however include all the test cases
performed during the pre-certification tests and a confirmation shall be included in the test
report that the unregistered version of the application was subject to pre-certification tests.

5. In the case of a modified previously certified application, it is allowed that the test lab only
performs a test on the modified parts and limits itself to random tests of the unchanged
functionality on the basis of the (locked) EITT sequences used during the test of the original
application. The manufacturer shall provide the test lab with sufficient information on the
changed and unchanged parts of the new version of the application (can be typically done by
the submission of the Manufacturer Declaration on Product Modification). The test lab shall
include in the resulting test report a hint that only random tests were performed on the
modified application and shall also state the registration number of the original application.

6. In the case a new application contains already certified functionality, it is allowed that the test
lab only performs a test on the new parts and limits itself to random tests of the already tested
functionality on the basis of the (locked) EITT sequences used during the test of the already
certified functionality. The manufacturer shall provide the test lab with a written declaration
what functionality in the new application is identical to the one included in the already
certified application with the corresponding Registration number. The test lab shall include in
the resulting test report a hint that only tests on new functionality of the application were
performed and also state the registration number of the application containing the already
certified functionality.

16 or separately in the test report for E-Mode configuration


-----

#### 5 Running the KNX Interworking and Functionality Tests

##### 5.1 Start-Up Test Suite Procedure - Configuration
Download the BDUT default product data into the BDUT using ETS on PC1. Append to the created
test report a print out of the parameter settings by making use of the appropriate ETS report
possibilities[17].

##### 5.2 Checking the BDUT’s Reaction after Configuration
Compare the BDUT’s reaction after configuration with what the manufacturer has specified in the
appropriate BDUT’s initial reactions description (as part of the supplied PIXIT-proforma). Behaviour
of the BDUT after configuration denotes

   - for products commissioned via download the reaction of the BDUT after the complete
download procedure[18] of the data and restart, without disconnecting the device from the KNX
system. This download task can be achieved by means of ETS[19].

   - For any other products not commissioned via download, this reaction of the BDUT may be
checked after the (local) assignment of the addresses or even as early as after the connection
of the device to the network.

##### 5.3 Checking the BDUT’s Reaction after Reset
Compare the BDUT’s reaction after reset with what the manufacturer has specified in the appropriate
BDUT’s initial reactions description (as part of the supplied PIXIT-proforma). Behaviour of the
BDUT after reset denotes the reaction of the BDUT after disconnecting and reconnecting the bus
voltage from and to the BDUT (e.g. by pulling the connector between device and KNX-bus and
reconnecting it).

Note: the behaviour of the BDUT during reset could be different from its behaviour after reset
(after the bus voltage has returned to its normal level).

##### 5.4 Checking the BDUT’s Reaction after Power Failure
Compare the BDUT’s reaction after power failure with what the manufacturer has specified in the
appropriate BDUT’s initial reactions description (as part of the supplied PIXIT-proforma). Behaviour
of the BDUT after power failure denotes the reaction of the BDUT after disconnecting and
reconnecting the ancillary power from the application module; the bus shall however not be removed
during this operation. This test only relates to BDUTs with an application module powered by an
ancillary power supply and not by the bus.

17 For E-mode devices, attribute the addresses via the setting of local user interface or other respectively via
downloading with the appropriate configurator. Set the default behaviour either locally or by downloading
with the appropriate configurator.
18 In some cases (e.g. when the BDUT immediately transmits telegrams after download), testing of the BDUT’s
reaction after configuration might imply that one has to cater for a test set-up with two PC's and two data
inferfaces or one PC with two interfaces.
19 Or E-mode configurator for E-Controller Mode products.


-----

**Note**

1. The behaviour of the BDUT during power failure could be different from its behaviour after
power failure (after the ancillary power has returned to its normal level).

2. Checking the BDUT’s reaction after configuration, reset, power failure does not denote
checking the state of its various data points (e.g. by sending a Group Value Read to the
respective Group Objects). It only denotes checking whether the BDUT’s reaction after
configuration, reset and power failure corresponds to what the applicant has laid down in the
BDUT’s initial reactions description (as part of the supplied PIXIT-proforma).

3. If the manufacturer has declared in the supplied PIXIT proforma that the reaction of the BDUT
is different when reset and power failure occur simultaneously than when they occur separately,
this shall additionally be tested.

##### 5.5 Checking the KNX Interworking Standards and Functionality in default settings

###### 5.5.1 General
Run the elaborated test sequence(s). In case of an IN-function, check its behaviour on receipt of
telegrams with what the manufacturer laid down in the PIXIT-proforma (expected behaviour). In case
of an OUT-function, record the transmitted telegrams.

###### 5.5.2 Test Step 1 : Test of IN-Function

 5.5.2.1 Description and Purpose of the Test
The purpose of the test is to check whether the IN-function of the data type works properly.

###### 5.5.2.2 Test Procedure
If necessary synchronise the BDUT as described by the manufacturer in the submitted documentation.

Run the telegram sequence you have elaborated on the basis of the documentation submitted by the
applicant.

Transmit the telegrams.

###### 5.5.2.3 Expected Results
Check whether the telegrams were answered by the BDUT with an ACK (if appropriate).

Check whether each telegram in the sequence has caused the expected reaction of the BDUT. This can
be done by comparing the observed reaction of the BDUT with what was documented in the comment
field while creating the telegram sequence.

In case of a claimed compliance to a functional block (including a state machine), conformity to this
state machine shall be explicitly tested.

###### 5.5.2.4 Documentation of Test Results
Document the correct or incorrect BDUT behaviour. In EITT this can be done by appending a printout of the Trace Buffer to the test report[20].

20 A standardized KNX test report template is available from the KNX Certification Department


-----

###### 5.5.3 Test Step 2 : Test of OUT-Function

 5.5.3.1 Description and Purpose of the Test
The purpose of the test is to check whether the OUT-function of the data type works properly.

###### 5.5.3.2 Test Procedure
If necessary synchronise the BDUT as described by the manufacturer.

Run the test sequences of expected telegrams (separated by time delays) you have elaborated in EITT
on the basis of the documentation submitted by the applicant.

Start the prepared test sequence. Prior to the elapsing of the time delay of the first expected telegram,
stimulate the BDUT according to the applicant’s specifications. Stimulate the BDUT again and again
till all expected telegrams in the sequence have been recorded.

###### 5.5.3.3 Expected Results
EITT automatically compares the received telegrams to the expected telegrams, as defined by the
prepared telegram sequence and automatically documents the test result.

###### 5.5.3.4 Documentation of Test Results
Document the correct or incorrect BDUT behaviour or – if necessary - modify the automatic
documentation of the result by EITT. Append a print-out of the EITT Trace Buffer to the test report.

##### 5.6 Test Cases with modified Parameters
Modify the parameters of the BDUT to other settings than the default.

Run ETS on PC1. Deactivate the ETS software after download of the new settings to the BDUT[21].

Run the tests of chapter 5.1 to 5.5 with these new parameter settings and with the elaborated telegram
sequence(s) for this respective test case.

##### 5.7 Checking Requirements for the Bus Load (if applicable)

###### 5.7.1 Repetition Rate
When a BDUT cyclically generates telegrams (this also applies for devices periodically requesting a
current state of a data point) the repetition rate shall always be limited, either by means of special
hardware (strap) or a software feature (parameter).

When a BDUT cyclically transmits telegrams, it shall first be checked in the PIXITs if a telegram
limitation has been implemented.

If limitation of the repetition rate is implemented by means of a parameter, it shall be checked if the
BDUT halts transmission after the parameterised number of telegrams during the parameterised time
delay were sent. This test shall have a purely qualitative and not quantitative nature, thereby using no
other special equipment than the tools normally used during testing.

21 For E-mode compatible products, other parameters in the BDUT shall be set via local means or via
the configurator.


-----

###### 5.7.2 Debounce time
Debounce time implemented in a BDUT (e.g. in case of binary inputs) shall be checked by
parameterising a high debounce time and evaluating (again qualitatively) whether the BDUT halts
transmission of telegrams when the debounce time is lower than the one parameterised.

###### 5.7.3 Transmission Priority
By default the transmission priority shall be low (represented by the word "Low" in ETS), unless the
functional block specification allows other settings for some data points.

Testing can include checking the default values of these flags by reading the product description in
ETS[22].

##### 5.8 Checking requirements for an Application Module powered by secondary Power Supply (if applicable)
KNX products, where the application modules have a power supply independent from the bus shall be
so conceived that in case of power failure of this supply, it shall not disturb the operation of the bus in
any way, e.g. by generating BUSY telegrams. The manufacturer shall indicate in the PIXIT the value
state after the secondary power returns (e.g. default) and what will be the device reaction.

Testing will include analysing the PIXIT pro-forma and checking whether the BDUT does not
transmit busy signals in case of de-energisation of the secondary power supply. This can be done in
the following way:

1. Put the application module in power off state.

2. Send telegrams to the BDUT (it shall not return busy signals).

3. Put the application module in a power on state.

4. Send telegrams to the BDUT again (it shall process the received telegrams).

##### 5.9 Checking of Routing Counter

The KNX specifications lay down that the routing counter shall always be lower than 7, except when
justified (e.g. in case of visualization software). During Interworking conformity testing, the testing body
shall check whether the BDUT complies with this requirement, by checking the appropriate byte in the
transmitted telegrams.

**Note**

When creating telegrams in EITT, the routing counter is set to 6 by default. EITT also clearly indicates
telegrams received with routing 7 in the trace buffer (by a red coloured ‘7’ preceding the received
telegram).

##### 5.10 Test of ETS plug ins, DCAs and S-mode stand-alone tools (if applicable)

In the exceptional case, where an S-mode device is programmed by means of an ETS plug in, DCAs or via
an S-mode stand-alone tool (not recommended for future developments)(for further information see
Volume 5 clause 6.1.1.2), during commissioning a trace shall be made in order to ensure that
commissioning is carried out with KNX conforming telegrams.

22 or verification of the values in the control byte of the telegrams generated by products in their default settings
(in case of E-mode products)


-----

If the plug-in does not provide means to document the parameterized device settings by the ETS reporting
function, it is allowed that the test lab does not document the different device settings by means of
snapshots in the resulting test report, but that it simply archives the test projects as well as the used plug-in
software for traceability reasons. This shall be appropriately stated in the resulting test report.

##### 5.11 Ability of BDUT to respond to a Read Request (if applicable)
The ability of a BDUT to respond to a Read Request is merely an additional test during KNX
conformity testing when the box ‘Request’ is ticked in the datapoint description form.


-----

#### 6 Informative Annex: Interworking/Functionality Testing Flowchart

**Figure 2: Interworking/Functionality Flowchart Part 1**


-----

**Figure 3: Interworking/Functionality Flowchart Part 2**


-----

#### 7 Normative Annex A: Testing of State Diagram of FB SAB Blinds

##### 7.1 Introduction
The underneath test sequence constitutes the minimum required tests to be performed to check
compliance of a blinds actuator to the state diagram as given in clause 2.2.3 of Volume 7/50/2. The
minimum required tests only takes into account the mandatory data points that need to be implemented
according to Volume 7/50/2.

##### 7.2 Actual tests

@[tCheck whether shutters are in the most upper position

IN BC 10.15.254 00/0/036 E1 00 00 :GroupValueRead(Grp=00/0/036)

OUT BC 01.04.001 00/0/036 E2 00 40 00 :Reason: 0% completly up

Assigned group addresses: MUD 0/0/28 - SSUD 0/0/29- STOP 0/0/30 (optional)

@[tBlinds actuator FB profile 1

@[t state STOPPED --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING --> action 3 (stop when moving)  next state stopped

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING -->action 6 (time out)  next state stopped

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state STOPPED --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 4 (stop when moving)  next state stopped

IN BC 10.15.254 00/0/029 E1 00 80 :DPT 1.007 DPT_Step (Value: Decrease)

@[t state STOPPED --> action 4 (step up)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 80 :DPT 1.007 DPT_Step (Value: Decrease)

@[t state STEPPING -->action 3 (stepping down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STEPPING -->action 6 (time out)  next state stopped

@[t state STOPPED -->action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)


-----

@[t state MOVING --> action 4 (stop when moving)  next state stopped

IN BC 10.15.254 00/0/029 E1 00 80 :DPT 1.007 DPT_Step (Value: Decrease)

@[t state STOPPED -->action 4 (step up)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 80 :DPT 1.007 DPT_Step (Value: Decrease)

@[t state STEPPING -->action 4 (step up)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 80 :DPT 1.007 DPT_Step (Value: Decrease)

@[t state STEPPING -->action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 6 (time out)  next state stopped

@[t state STOPPED -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STEPPING -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STEPPING -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STEPPING -->action 6 (time out)  next state stopped

(@[t (optional) state STOPPED --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.017 DPT_Trigger

@[t (optional) state STOPPED --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 80 :DPT 1.017 DPT_Trigger

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING -->action 6 (time out)  next state stopped

@[t state STOPPED -->action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING -->action 3 (stop when moving)  next state stopped

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STOPPED -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STEPPING -->action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING -->action 6 (time out)  next state stopped


-----

@[t state STOPPED -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

(@[t (optional) state STEPPING --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.017 DPT_Trigger

@[t state STOPPED -->action 3 (step down)  next state stepping

IN BC 10.15.254 00/0/029 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

(@[t (optional) state STEPPING --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 80 :DPT 1.017 DPT_Trigger

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

(@[t (optional) state MOVING --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.017 DPT_Trigger

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

(@[t (optional) state MOVING --> action 5 (stop)  next stopped

IN BC 10.15.254 00/0/030 E1 00 80 :DPT 1.017 DPT_Trigger


-----

#### 8 Normative Annex B: Testing of State Diagram of FB SAB Shutter

##### 8.1 Introduction
The underneath test sequence constitutes the minimum required tests to be performed to check
compliance of a shutter actuator to the state diagram as given in clause 2.2.3 of Volume 7/50/2. The
minimum required tests only takes into account the mandatory data points that need to be implemented
according to Volume 7/50/2.

##### 8.2 Actual tests

@[tCheck whether shutters are in the most upper position

@@Assigned Group address: MUD 0/0/28 - STOP 0/0/30

IN BC 10.15.254 00/0/036 E1 00 00 :GroupValueRead(Grp=00/0/036)

OUT BC 01.04.001 00/0/036 E2 00 40 00 :Reason: 0% completely up

@[tShutter Actuator FB Profile2

@[t state STOPPED --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING --> action 5 (stop)  next state stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state MOVING -->action 6 (timeout)  next state stopped

@[t state STOPPED --> action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[t state STOPPED --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 5 (stop)  next state stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STOPPED --> action 5 (stop)  next state stopped

IN BC 10.15.254 00/0/030 E1 00 81 :DPT 1.007 DPT_Step (Value: Increase)

@[t state STOPPED -->action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING -->action 1 (move down)  next state moving

IN BC 10.15.254 00/0/028 E1 00 81 :DPT 1.008 DPT_UpDown (Value: Down)

@[treverse pause time 0,5s


-----

@[t-> action 6 (time out)  next state stopped

@[t state STOPPED --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING --> action 2 (move up)  next state moving

IN BC 10.15.254 00/0/028 E1 00 80 :DPT 1.008 DPT_UpDown (Value: Up)

@[t state MOVING -->action 6 (time out)  next state stopped

@[t state STOPPED


-----

#### 9 Normative Annex C: Testing of State Diagram of FB DAB Dimmer

##### 9.1 Introduction
The underneath test sequence constitutes the minimum required tests to be performed to check
compliance of a dimming actuator to the state diagram as given in clause 3.2.2 of Volume 7/20/2. The
minimum required tests only takes into account the mandatory data points that need to be implemented
according to Volume 7/20/2.

##### 9.2 Actual tests

@@Assigned Group address: SOO 0/1/0 - ASC 0/1/2 RSC 0/1/1

@[tState OFF -> Event 1 (switch off)  next state OFF

IN BC 10.15.254 00/1/000 E1 00 80 :DPT 1.xxx Boolean (switch off)

@[tState OFF->Event 4 (decrease dimming)  next state OFF

IN BC 10.15.254 00/1/001 E1 00 81 :DPT 3.007 Dimming (step 1, decrease)

@[tState OFF->Event 5 (stop dimming)  next state OFF

IN BC 10.15.254 00/1/001 E1 00 80 :DPT 3.007 Dimming (stop, decrease)

@[tState OFF->Event 6 (dimming value off)  next state OFF

IN BC 10.15.254 00/1/002 E2 00 80 00 :DPT 5.00x Scaling (0.00%)

@[tState OFF->Event 2 (switch on)  next state ON

IN BC 10.15.254 00/1/000 E1 00 81 :DPT 1.xxx Boolean (switch on)

@[tState ON->Event 5 (stop dimming)  next state ON

IN BC 10.15.254 00/1/001 E1 00 88 :DPT 3.007 Dimming (stop, increase)

@[tState ON->Event 7 (dimming value %)  next state ON

IN BC 10.15.254 00/1/002 E2 00 80 7F :DPT 5.00x Scaling (49.80%)

@[tState ON->Event 3 (increase dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 89 :DPT 3.007 Dimming (step 1, increase)

@[tState DIMMING->Event 3 (increase dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 8A :DPT 3.007 Dimming (step 2, increase)

@[tState DIMMING->Event 4 (decrease dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 81 :DPT 3.007 Dimming (step 1, decrease)

@[tState DIMMING->Event 2 (switch on)  next state ON

IN BC 10.15.254 00/1/000 E1 00 81 :DPT 1.xxx Boolean (switch on)

@[tState ON->Event 4 (decrease dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 81 :DPT 3.007 Dimming (step 1, decrease)

@[tState DIMMING->Event 5 (stop dimming)  next state ON

IN BC 10.15.254 00/1/001 E1 00 80 :DPT 3.007 Dimming (stop, decrease)

@[tState ON->Event 4 (decrease dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 81 :DPT 3.007 Dimming (step 1, decrease)

@[tState DIMMING->Event 7 (dimming value %)  next state ON

IN BC 10.15.254 00/1/002 E2 00 80 7F :DPT 5.00x Scaling (49.80%)


-----

@[tState ON->Event 3 (increase dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 89 :DPT 3.007 Dimming (step 1, increase)

@[tState DIMMING->Event 8 (actual value reached set value)  next state ON

@[tState ON->Event 1 (switch off)  next state OFF

IN BC 10.15.254 00/1/000 E1 00 80 :DPT 1.xxx Boolean (switch off)

@[tState OFF->Event 2 (switch on)  next state ON

IN BC 10.15.254 00/1/000 E1 00 81 :DPT 1.xxx Boolean (switch on)

@[tState ON->Event 2 (switch on)  next state ON

IN BC 10.15.254 00/1/000 E1 00 81 :DPT 1.xxx Boolean (switch on)

@[tState ON->Event 6 (dimming value off)  next state OFF

IN BC 10.15.254 00/1/002 E2 00 80 00 :DPT 5.00x Scaling (0.00%)

@[tState OFF->Event 3 (increasing dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 89 :DPT 3.007 Dimming (step 1, increase)

@[tState DIMMING->Event 1 (switch off)  next state OFF

IN BC 10.15.254 00/1/000 E1 00 80 :DPT 1.xxx Boolean (switch off)

@[tState OFF->Event 3 (increase dimming)  next state dimming

IN BC 10.15.254 00/1/001 E1 00 89 :DPT 3.007 Dimming (step 1, increase)

@[tState DIMMING->Event 6 (dimming value off)  next state OFF

IN BC 10.15.254 00/1/002 E2 00 80 00 :DPT 5.00x Scaling (0.00%)

@[tState OFF->Event 7 (dimming value %)  next state ON

IN BC 10.15.254 00/1/002 E2 00 80 7F :DPT 5.00x Scaling (49.80%)

@[tState ON


-----

