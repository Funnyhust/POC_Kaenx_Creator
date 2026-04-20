# System Specifications

## Architecture

 Glossary

Summary

This document provides a general glossary to the KNX Specifications.

Version 01.05.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2001.03.28 Approved Standard.
1.1 2008.12.12 Editorial update.
1.1.01 2009.11.06  - Update with “Differential download”

                      - AN118 “cEMI Transport Layer”: added “cEMI Transport Layer” and
“cEMI Transport Layer Services”
2010.07.15        - Included “HMI” of AN112.
1.1.02 2010.07.22  - AN117 “KNX Communication Medium” integrated.
1.1.03 2010.10.19  - AN127 “Master Reset” integrated.
1.1.04 2011.09.15  - AN134 “Flexible E-Mode Channels” integrated.

                      - Included “TP-UART”.
1.1.05 2011.09.28  - Added and clarified MSB, msb, LSB and lsb.
01.03.00 2012.09.10  - Revision of the integration of AN127 “Master Reset” according the
updated AN127 “Master Reset” v05.
01.04.00 2013.10.23  - AN153 “Mask 0912h Property based configuration” integrated.

                      - Editorial review in view of publication in the KNX Specifications v2.1.
01.05.01 2019.09.11  - Inclusion of AN134 “Flexible E-Mode Channels”
2020.01.03        - Inclusion of AN158 “KNX Data Security” terms and definitions.
2020.01.08        - Inclusion of AN159 “KNX IP Secure” abbreviations.
2020.08.27        - Inclusion of AN170 “Group Object Diagnostics” (“COV”)
01.05.02 2020.10.26  - Inclusion of AN183 “KNXnet/IP System Broadcast” (‘IP

Domain’)
01.05.02 2021.09.13  - Inclusion of AN161 “Coupler Model 2.0”
01.05.03 2021.09.28  - Creation of the Approved Standard.

#### References

[01] Volume 6 “Profiles”

[02] Volume 4: “KNX Hardware Requirements and Tests”

[03] Volume 9 “Basic and System Components/Devices – Minimum Requirements –
Standardised solutions - Tests KNX System Conformance Testing”

[04] Part 9/4 “BCUs and BIMs”

#### Contents

##### 1 Glossary ................................................................................................................................... 3

 2 List of abbreviations ............................................................................................................ 20

Filename: 03_01_02 Glossary v01.05.03 AS.docx
Version: 01.05.03
Status: Approved Standard
Savedate: 2021.09.28
Number of pages: 24

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.03.28|Approved Standard.|
|1.1|2008.12.12|Editorial update.|
|1.1.01|2009.11.06|- <br>Update with “Differential download”<br>- <br>AN118 “cEMI Transport Layer”: added “cEMI Transport Layer” and<br>“cEMI Transport Layer Services”|
|1.1.01|2010.07.15|- <br>Included “HMI”of AN112.|
|1.1.02|2010.07.22|- <br>AN117 “KNXCommunication Medium” integrated.|
|1.1.03|2010.10.19|- <br>AN127 “Master Reset” integrated.|
|1.1.04|2011.09.15|- <br>AN134 “Flexible E-Mode Channels” integrated. <br>- <br>Included “TP-UART”.|
|1.1.05|2011.09.28|- <br>Added and clarified MSB, msb, LSB and lsb.|
|01.03.00|2012.09.10|- <br>Revision of the integration of AN127 “Master Reset” according the<br>updated AN127 “Master Reset” v05.|
|01.04.00|2013.10.23|- <br>AN153 “Mask 0912h Property based configuration” integrated. <br>- <br>Editorial review in view of publication inthe KNXSpecifications v2.1.|
|01.05.01|2019.09.11|• Inclusion ofAN134“Flexible E-Mode Channels”|
||2020.01.03|• Inclusion ofAN158“KNX Data Security” terms and definitions.|
||2020.01.08|• Inclusion ofAN159“KNX IP Secure” abbreviations.|
||2020.08.27|• Inclusion ofAN170“Group Object Diagnostics” (“COV”)|
|01.05.02|2020.10.26|• Inclusion ofAN183 “KNXnet/IP System Broadcast” (‘IP<br>Domain’)|
|01.05.02|2021.09.13|• Inclusion ofAN161“Coupler Model 2.0”|
|01.05.03|2021.09.28|• Creation of the Approved Standard.|


-----

### 1 Glossary

|Term|Definition|
|---|---|
|Access Control|The definition and evaluation of which communication partner has the<br>right to access which data or call which services. This is solved by<br>collecting communication partners with the same rights for all data and<br>services in Roles and defining for each Role and for each piece of data<br>or service the Permissions that this Role has.|
|ack_request|Service parameter informing the Data Link Layer on the required<br>L2-service acknowledgement when transmitting a_Frame_.|
|Address|Number or name used for identifying entities in a KNX installation<br>(devices, group of devices,_Shared Variable_, _Interface Object_).<br>See also:_Group Address, Individual Address_|
|Adjusted E-Mode Channel|This opposes to a Fixed E-Mode Channel. The definition of the available<br>Group Objects and Parameters depends on the value of the_Adjustable_<br>_Parameter_. <br>See also:_Basic E-Mode Channel_, _Ctrl FEC, Ctrl SEC_, _E-Mode Channel_, <br>_Extended E-Mode Channel_, _Fixed E-Mode Channel_, _Flexible E-Mode_<br>_Channel_, _PB FEC_, _PB SEC_|
|Application|An Application uses a set of functions to satisfy one user need.<br>An application is modelled as of one or more_Functional Blocks_ and<br>covers one task within an_Application Domain_. <br>EXAMPLE 1<br>In the HVAC Application Domain : direct electrical heating,<br>electrical heating with accumulators, warm water heating, fan coil air-<br>conditioning …|
|Application Domain|Set of applications characterised by a common know-how, market<br>regulation, expertise...<br>EXAMPLE 2<br>HVAC, lighting, security of goods, security of people, domestic<br>hot water, white goods …|
|Application Interface Object|An_Interface Object_ related to a user set of functions of a device.<br>EXAMPLE 3<br>For storing and accessing the Parameters of a sensor<br>application.<br>See also:_System Interface Object_|
|Application Model|Specification of the agreed solution for an_Application_ in terms of<br>_Functional Blocks_, _Datapoints_ and the links between them.|
|Application Modelling|The process of analysing an_Application_, deciding on the common<br>solution and specifying and agreeing on the model in terms of<br>_Functional Blocks_, _Datapoints_ and_Datapoint Types_.|
|Application Module (AM)|That part of a modular KNX device that can be separated from the_Bus_<br>_Coupling Unit_. The Application Module typically determines the<br>function of the KNX device, i.e. whether it is a sensor (application<br>module is e.g. a push button) or actuator (application module is e.g. a<br>relay).|


-----

|Term|Definition|
|---|---|
|Application Process|An element within an installation (this is, in a device) that performs<br>information processing for a particular application. The Application<br>Process ensures the operations needed to execute the application.|
|Application Product|Is the combination of an_Application Module_, a_Bus Access Unit_ and an<br>Application Program. In some cases two or more of these parts<br>constitute one unit, which can not be divided in the above mentioned<br>components (e.g. preloaded Application Programs in a KNX product, of<br>which the Application Module can not be separated from the BAU).|
|Application Profile|Grouping and distribution of functions over several devices: defines<br>Functional Blocks grouping, and their external interfaces.|
|Application Program|Functionality (software) in a KNX device that realises its_Application_ <br>functions. It typically bases on API-functions for controlling hardware<br>inputs and outputs, to use_Group Objects_ and_Interface Objects_ to<br>interface to the KNX communication system. In S-Mode, the<br>Application Program is typically downloaded by means of ETS.|
|Application Reference|Local reference for the_Application Process_, e.g. identification of a<br>Group Object.|
|Application Specification|A complementary volume for a given application.<br>Its objective is to ensure KNX Interworking on basic functions subject to<br>agreement, keeping the possibility for inventive enhancements on<br>internal or complementary issues.|
|Area|A _Main Line_ and all connected_Lines_.|
|Backbone Coupler|_Router_ for connecting a_Main Line_ to a_Backbone Line_ of the same<br>Physical Layer Type.|
|Backbone Line|The Backbone Line is the_Subnetwork_ of the first level.<br>In the three-level topology the Backbone Line shall be the_Subnetwork_ <br>connecting the_Primary Sides_ of the_Backbone Couplers_.|
|Basic E-Mode Channel|Specification of the minimal, mandatory Functional Blocks and<br>Datapoints thereof that compose an E-Mode Channel.<br>NOTE 1<br>The Basic E-Mode Channel gives the Channel Code to the<br>Extended E-Mode Channel.<br>See also:_Adjusted E-Mode Channel_, _Ctrl FEC, Ctrl SEC_, _E-Mode Channel_, <br>_Extended E-Mode Channel_, _Fixed E-Mode Channel_, _Flexible E-Mode_<br>_Channel_, _PB FEC_, _PB SEC_|
|Basic Restart|The feature of the KNX device to be able to receive an A_Restart-PDU<br>and restart the communication stack of the device or the entire device.<br>NOTE 2<br>In more complex devices, the microprocessor is not reset if an<br>A_Restart is handled.<br>See also:_Master Reset_|


-----

|Term|Definition|
|---|---|
|BiBat device|A BiBat device shall be either<br>- <br>a _BiBat Master_, a_BiBat Slave_ or a_BiBat Retransmitters_, or<br>- <br>a _BiBat device with long header_ (Bidirectional RF alarm<br>sensor), or<br>- <br>a _BiBat device expecting feedback to own action._|
|BiBat device with long header|A BiBat device with long header shall emit its (rare) alarm telegrams<br>with a 3,5 s header, thus allowing not only mains powered BiBat<br>Masters but also battery driven receivers with a wake-up period of<br>< 3,4 s. A BiBat device with long header shall implement such a<br>wake-up period of ≤ 3,4 s. In addition they may optionally use<br>synchronized communication with a BiBat Master according the<br>methods of synchronous BiBat Slaves.<br>SYNONYM<br>Bidirectional RF alarm sensors|
|BiBat Master|The BiBat Master shall be part of in a_Synchronous BiBat System_. It<br>shall be is a bidirectional RF device with permanent reception capability<br>that shall be able to transmit synchronous RF frames for the<br>communication with the BiBat devices of its domain. In addition it shall<br>support all asynchronous communication of the standard KNX RF.|
|BiBat Slave|A BiBat Slave shall be a device that shall support bidirectional RF<br>communication. It shall be able to receive_synchronous RF frames_ in<br>receive windows from a_BiBat Master_ and shall be able to resynchronise<br>its internal clock and hence the position of its receive windows.|
|BiBat Slave expecting<br>feedback to own action|A _BiBat Slave expecting feedback to own action_ asynchronously (not<br>periodically but rarely i.e. activated by human interaction or an alarm)<br>sends a telegram to a mains powered BiBat Master. It expects a fast<br>(typically < 100 ms) asynchronous Data Link Layer acknowledge from<br>its BiBat Master. In addition status information may be transmitted to<br>the initiating BiBat Slave and to other components of the application<br>using the standard principles of synchronous BiBat Slaves.|
|Bridge|_System Device_ interconnecting two (physical) Segments.<br>A Bridge will forward any frame from one Segment to another,<br>respecting the rules of the Data Link Layer.<br>SYNONYM<br>TP1 Bridge|
|Broadcast Address|Group Address 0000h used for the Broadcast_Communication Service_.|
|Bus Access Unit (BAU)|A Bus Access Unit is a part of a KNX device containing electronics and<br>stack for its KNX communication and complying with at least the<br>minimum requirements as laid down in [01] as regards implemented<br>KNX protocol stack and agreed Physical Layer.|
|Bus Coupling Unit (BCU)|A Bus Coupling Unit is a standardised_Bus Access Unit_. <br>See also:_Bus Access Unit_|
|Bus Device Under Test<br>(BDUT)|The combination of hardware (in standardisation normally referred to as<br>DUT or EUT) and software (in standardisation normally called SUT or<br>IUT).|


-----

|Term|Definition|
|---|---|
|Bus Interface Module (BIM)|A Bus Interface Module is a standardised_Bus Access Unit_.|
|cEMI Transport Layer|Transport Layer instance provided by a cEMI Server and accessible via<br>cEMI Transport Layer services.|
|cEMI Transport Layer<br>services|Transport Layer services provided by the cEMI Transport Layer.|
|Certifiable Product|Product for which requirements and tests have been laid down in the<br>KNX Specifications.|
|Certified KNX Product|A product that conforms to the KNX Specifications minimum<br>requirements and has successfully passed the KNX Association<br>Conformance Assessment. As a consequence it may bear the KNX logo.<br>Such a product may either be an_Application Product_, a Basic - or<br>System Component or a software (tool or similar).<br>A certified Basic - and or System Component or Device may or may not<br>comply with the KNX standardised features as laid down in the<br>KNX Specifications[03]. These standardised features are optional for<br>certification: if implemented, the features however have to follow the<br>regulations of the KNX Specifications. Both the standardised as well as<br>the non-standardised solution may bear the KNX logo, provided in both<br>cases at least the minimum are fulfilled (for more information see[03]).|
|Channel Code|Globally defined identifier for a given type of E-Mode Channel.<br>EXAMPLE 4<br>Dimmer|
|Chapter|Subdivision of a Part<br>EXAMPLE 5<br>Chapter 3/2/2 specifies the KNX Twisted Pair 1 Communication<br>Medium.|
|Cipher text|Cipher text is a generic term that denotes the encrypted data.<br>Cipher text opposes to_plain data_.|
|Client|Application Process using application-specific services offered by a<br>_Server_.|
|Client/Server Model|Messaging Model using_Interface Objects_. <br>In this model each object belongs to the relevant application process of<br>one given device and is accessed by / provided to remote processes.|
|Coexistence|Absence of unwanted interference of a device with other devices|
|Communication Mode|Kind of object on which the communication relies.<br>See also:_Group Objects, Application Interface Objects, System Interface_<br>_Objects_|
|Communication Process|A process providing reliable communication facilities between the<br>devices.|
|Communication Profile|A consistent set of communication features supported by devices.<br>Intended for runtime Interworking in a given Profile.<br>See also:_Configuration Profile; Device Profile_|


-----

|Term|Definition|
|---|---|
|Communication Service|A global service provided by the_Communication Process_ to transfer<br>_Messages_. There are services for:<br>- <br>group communication<br>- <br>broadcast communication<br>- <br>point-to-point connectless- and connection-oriented<br>communication<br>- <br>TP1 Fast Polling|
|Compatibility|This word is ambiguous, it may be applied to any of the words<br>Coexistence, Exchangeability, Interworking, Interoperability,<br>Compatibility. It therefore should not be used|
|Complex Network|Network where the hierarchical addressing is possible, under full control<br>of a professional installer.<br>See also:_Simple Network_|
|Configuration|Operation : Establish links and set some functional parameters between<br>channels of devices that co-operate to provide a given system function.|
|Configuration Controller|Controller that configures the links between Devices, Channels,<br>Functional Blocks or Datapoints.|
|Configuration Interworking|Ability to set up links and parameters on two or more devices so that<br>they achieve afterwards Runtime Interworking.<br>See also:_Runtime Interworking_|
|Configuration Mode|A way to configure a system.A specification describes, for each<br>Configuration Mode:<br>− <br>the specific ways to use the standard communication features<br>− <br>the process and usage of relevant network management<br>services.|
|Configuration Profile|List of requirements for devices conerning configuration.<br>See also:_Communication Profile, Device Profile_|
|Configurator|Configuration function whose role is to establish the link between<br>device’s channels, according to the inputs of the installer.<br>The function is hosted in a_Configuration Controller_.|
|Connection Code|Globally defined identifier assigned to Datapoints in E-Mode that can be<br>linked together.<br>EXAMPLE 6<br>Blinds_Move|
|Coupler|A Coupler can be a_Router_ or a_Bridge_.|
|Ctrl FEC|The name of the Profile for the Controller Mode with Flexible E-Mode<br>Channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl SEC_, _E-Mode_<br>_Channel_, _Extended E-Mode Channel_, _Fixed E-Mode Channel_, _Flexible_<br>_E-Mode Channel_, _PB FEC_, _PB SEC_|


-----

|Term|Definition|
|---|---|
|Ctrl SEC|The name of the Profile for the Controller Mode with Static E-Mode<br>Channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC, E-Mode_<br>_Channel_, _Extended E-Mode Channel_, _Fixed E-Mode Channel_, _Flexible_<br>_E-Mode Channel_, _PB FEC_, _PB SEC_|
|Datagram|Full sequence of elements (physical symbols) transmitted by a device as<br>such transporting a frame on the medium.|
|Datapoint|A Datapoint is any interface over which data in the_Functional Block_ can<br>be set or received and/or transmitted (for its run-time operation).<br>A Datapoint can be<br>- <br>an Input,<br>- <br>an Output,<br>- <br>a Parameter<br>- <br>a Status of Diagnostic Value<br>and can be implemented as<br>- <br>_Group Object_<br>- <br>_Interface Object_<br>- <br>memory mapped value or<br>- <br>TP1 Fast Polling Value.|
|Datapoint Type|The specification of format, encoding, range and unit for Datapoints.|
|Derived Certificate|Certificate granted to a KNX Association member company or licensee,<br>who markets a product under his own brand name for which a main<br>certificate already exists.<br>See also:_Main Certificate_|
|Descriptor Type|The value of the field descriptor_type in the A_DeviceDescriptor_-<br>Read-PDU and the A_DeviceDescriptor_Response-PDU.|
|Destination Address|<br>The field in the KNX telegram that contains the Group Address or<br>Individual Address indicating to which device(s) the frame is sent.|
|Device|The physical element which will be attached to the network. It is a<br>physical, concrete object that a customer can buy. Devices provide<br>different functions to the system for each distributed application. So it<br>contains one or more Functional Blocks.|
|Device Address|Part of the_Individual Address_ identifying a device in one_Subnetwork_. <br>Depending on the_Configuration Mode_, the Device Address shall be<br>unique within a_Subnetwork_. It is a one octet value.|
|Device Descriptor|The value of the field device_descriptor in the A_DeviceDescriptor_-<br>Response-PDU.|


-----

|Term|Definition|
|---|---|
|device localisation action|This shall be an action performed by the device and that should be<br>observable by a human and is further implementation dependent. It may<br>be<br>- <br>a single short action, or<br>EXAMPLE 7<br>A relay may close and open again.<br>- <br>a continuous state, or<br>EXAMPLE 8<br>An LED may flash.<br>- <br>a repeated action, or<br>EXAMPLE 9<br>A signal tone may be given periodically.<br>- <br>any implementation specific action.|
|Device Profile|Standardised set of features of a device required for configuration and<br>runtime interworking. It consists of<br>- <br>a _Communication Profile_, and<br>- <br>a _Configuration Profile_.|
|Differential Download|Optimisation of the Configuration Procedure in S-Mode, in which only<br>the data is downloaded that is assumed to differ between the current<br>contents and the intended contents after download.<br>NOTE 3 To this purpose, the Management Client may for instance hold a<br>memory image of a preceding download, which it compares with a new memory<br>image (new parameters, links…) to decide on which data to write in the device.|
|Domain|Logical Network on open media.(in a network with several media, part<br>of the network on one given open medium).|
|Domain Address|Address of a Domain on open media. Identifies one Logical Network, so<br>insulated from neighbouring networks.|
|Easy Configuration Mode<br>(= Easy Mode-<br>(= E-Mode)|This is a_Configuration Mode_ requiring only a limited number of simple<br>manual operations, possibly using a (electronic) "screwdriver", and with<br>limited cost. Higher complexity is reached by switching to the<br>_Configuration Mode_ “System Mode” (= S-Mode).<br>See also:_System Configuration Mode_|
|E-Mode Channel|An independent functional part of device containing a standardised<br>combination of one or more_Functional Blocks_. <br>EXAMPLE 10 A 4 fold binary input has 4 channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _Extended E-Mode Channel_, _Fixed E-Mode Channel_, <br>_Flexible E-Mode Channel_, _PB FEC_, _PB SEC_|
|Engineering Tool<br>Environment Components<br>(EteC)|A standard set of components and Application Programmer’s interfaces<br>for KNX PC software engineering.|
|Engineering Tool Software<br>(ETS)|Removable tool used for planning and commissioning KNX<br>installations, supporting all KNX approved media. It contains a standard<br>database of device description files and application programs<br>SYNONYM<br>System Tool|


-----

|Term|Definition|
|---|---|
|eteC Repository|Collection of templates of KNX products and applications, which may<br>be used in ETS projects, currently stored in a database.|
|ETS Catalog Entry|A catalogue entry in the ETS Window ‘Product Sets’ groups the<br>commercial data of a product defined in the ETeC repository and is<br>symbolised by a booklet. A catalogue entry is linked to a product: the<br>latter does not contain any commercial information. A product is<br>symbolised by an agreed product symbol. Many catalogue entries, i.e.<br>many commercial variations may be attributed to one product if all these<br>variations belong to a same product group.|
|Exchangeability|Possibility for one product to fully replace another product (which may<br>be from another manufacturer) and to provide all the same functionality.<br>Full exchangeability is difficult to achieve, because it requires an<br>exhaustive definitions of the products and does not enable the<br>manufacturers to distinguish their products from the other’s.<br>Exchangeability is not the target of KNX.|
|Extended E-Mode Channel|Specification of a Basic E-Mode Channel extended with possible<br>(allowed) additional, optional extensions that are implemented.<br>NOTE 4<br>An Extended E-Mode Channel does not have an own unique<br>Channel Code. It has the Channel Code of its Basic E-Mode Channel. Two or<br>more implementations of the same Extended E-Mode Channels, differing in their<br>implemented set of optional features will still have the same E-Mode Channel<br>Code.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _E-Mode Channel_, _Fixed E-Mode Channel_, _Flexible E-Mode_<br>_Channel_, _PB FEC_, _PB SEC_|
|External Message Interface<br>(EMI)|The External Message Interface provides a generic message interface to<br>each KNX OSI stack protocol layer. This optional interface is defined to<br>enable generic solutions for configuration tools or modular devices.|
|Fixed E-Mode Channel|This opposes to an Adjusted E-Mode Channel. The definition of the<br>available Group Objects and Parameters is fixed.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _E-Mode Channel_, _Extended E-Mode Channel_, _Flexible_<br>_E-Mode Channel_, _PB FEC_, _PB SEC_|
|Flexible E-Mode Channel|The possibility to specify and implement optional functionality (Group<br>Objects, Parameters) in E-Mode Channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _E-Mode Channel_, _Extended E-Mode Channel_, _Fixed_<br>_E-Mode Channel_, _PB FEC_, _PB SEC_|
|Frame|Sequence of octets exchanged between Data Link Layer instances over<br>the medium or media. It contains all information needed to ensure the<br>exchange.<br>SYNONYM<br>LPDU.|
|Function|A self-contained part that describes part of the behaviour of a_Functional_<br>_Block_ and that is not standardized.<br>EXAMPLE 11 logical and arithmetic functionals, morning boost, read outside<br>temperature|


-----

|Term|Definition|
|---|---|
|Functional Block|Consists of one or more_Functions_ that belong together and that can not<br>be separated across two devices but big enough that a device with only<br>one such Functional Block could be marketed. A Functional Block has a<br>well-defined black-box behaviour.<br>EXAMPLE 12 boiler controller, room demand manager, demand transformer.|
|Functional Safety|Those issues, specific to an Application Domain, and which come in<br>addition to, or as a precision to the general HBES functional safety<br>requirements (see CLC TC205 documents) and the normal product<br>functional safety requirements (see the relevant product standards).|
|Gateway|Device interconnecting a KNX network with an external network, on top<br>of Application Interface Layer.|
|Group Address|The Group Address identifies one or several entities in the network (one<br>_Shared Variable_ or several devices). It is a two octet value. A device<br>may have/know more than one Group Address.<br>Group Addresses are defined globally for the whole network. However<br>the specification allows local and global Group Addresses by defining in<br>each frame the maximum number of_Routers_ to be crossed.|
|Group Address Security Flags|The indication in the MaC whether for a Group Address, no secure<br>communication will be used, or secure communication with<br>authentication and/or confidentiality.|
|Group Address Table|This table contains each_Group Address_ known by a Device. It enables<br>to a_Group Address_ to be converted into a local_Group Index_ and vice<br>versa.|
|Group Association Table<br>(GrAT)|This table enables a_Group Index_ to be converted into a local_Application_<br>_Reference_ and vice versa.|
|Group Index|Abstract internal reference of a communication relationship. Enables to<br>build indirection's between_Group Addresses_ or_Individual Addresses_ <br>and_Application References_.|
|Group Object|Local image in the device of a_Shared Variable_ available in the<br>installation.<br>EXAMPLE 13 light_level in room x|
|Group Object Handle|A handle for accessing_Group Objects_ in point-to-point communication<br>via the Property PID_OBJECT_VALUE.|
|Hop Count|<br>Service Parameter indicating to the Network Layer how many<br>_Subnetworks_ the message is allowed to pass. Its use is to prevent endless<br>circulation of messages in case of incorrectly configured installations.|
|Identifier (Id)|Global identification in the KNX System of a given feature.<br>EXAMPLE 14 Every standard Interface Object is assigned a unique Identifier,<br>the Object Type. Object Type 320 for instance uniquely identifies the Functional<br>Block modelling the Outside Temperature Sensor.|


-----

|Term|Definition|
|---|---|
|Index (Idx)|Local identification in a device of a feature in an ordered list.<br>EXAMPLES 15 an element in an array, Interface Object index in the list of<br>Interface Objects of a device|
|Individual Address|Address of a given Device in an installation. The Individual Address is a<br>two octet value that consists of an eight bit_Subnetwork Address_ and an<br>eight bit_Device Address_. If the_Device Address_ is unique, then also the<br>Individual Address will be unique in the installation.|
|Installed system|A set of distributed applications and the underlying communication<br>infrastructure. It is made of several devices linked by a medium (with or<br>without cabling).|
|Interface Object|An implementation of a standard model for accessing data in a device,<br>using dedicated Application Layer services and independently of the<br>device specific storage. Interface Objects are handled by the Interface<br>Object Server in the Application Interface Layer. An Interface Object<br>contains one or more Properties.<br>See also:_Application Interface Object_, _System Interface Object_, _Property_|
|Interoperability (of<br>communication)|Capability of a device, in conformance with a set of standards, to<br>communicate with other devices.<br>See also:_Interworking_, _Exchangeability_|
|IP Domain|All KNXnet/IP devices in the same network with the same multicast<br>address and the same backbone encryption (either no encryption or<br>encryption with the same key) form an IP Domain.|
|KNX|KNX provides one consistent system for applications in the home and<br>buildings, from residential home to tertiary buildings.|
|KNX Basic and System<br>Components/Devices|These are products of which the features are explicitly laid down in the<br>KNX Specifications.<br>Some of these features are standardised (see [03]), of which compliance<br>is optional for certification.<br>As basic and system components/devices constitute the core of the KNX<br>system, they shall comply with the hardware requirements as laid down<br>in [02].|
|KNX Basic<br>Components/Devices|A KNX product without communication relevant part.<br>The following basic components are defined:<br>TP Cable, several connector types (DIN rail contact block, bus<br>interface connection block (for BCU), PEI, data rail to wire<br>connector, …), TP data rail (cover), TP overvoltage protector, TP<br>power supply unit, TP choke, PL filter, PL phase coupler.|
|KNX IP|Usage of the Internet Protocol as a KNX communication medium.|
|KNX IP device|A KNX device using the Internet Protocol as the only KNX<br>Communication Medium.<br>NOTE 5<br>A KNXnet/IP Tunnelling Server and a KNXnet/IP<br>Router are no KNX IP devices.|


-----

|Term|Definition|
|---|---|
|KNX Serial Number|The KNX Serial Number (or Unique Code), is a globally unique<br>identifier, programmed at manufacture, used to distinguish devices. The<br>_KNX Serial Number_ is exactly 6 octets. First two octets are the<br>Manufacturer’s Code.|
|KNX Specification|Specification of the KNX System.|
|KNX System|The KNX System provides a generic means for the exchange of<br>messages between distributed functions of one or more applications.|
|KNX System Components|A KNX product with a communication relevant part enabling connection<br>of an application part (as specified in ) is considered a KNX system<br>component.<br>EXAMPLE 16 BCU UP TP/PL, BCU AP/GE TP/PL, BCU N TP/PL,<br>standardised Bus Interface Modules|
|KNX Tools|Software packages such as visualisation and control software, planning<br>and configuration tools and test tools.|
|KNXnet/IP Client|An application that implements the KNXnet/IP Client protocol to get<br>access to a KNX Subnetwork over an IP network channel.|
|KNXnet/IP Router|A dedicated type of KNXnet/IP device that routes KNX protocol packets<br>between KNX Subnetworks.|
|KNXnet/IP Server|A KNX device that has physical access to a KNX network and<br>implements the KNXnet/IP Server protocol to communicate with<br>KNXnet/IP Client or other KNXnet/IP Servers (in case of KNXnet/IP<br>Routing) on an IP network channel. A KNXnet/IP Server is by design<br>always also a KNX node.|
|Layer|Subdivision of the OSI Architecture, that hierarchically structures a<br>communication system into several layers.|
|Line (Logical)|The Line is the Subnetwork of third level.<br>The Line shall serve to connect the_Secondary Side_of one_Line Couplers_. <br>One or more_Bridges_ may be present on a Line.<br>See also:_Main Line_; _Backbone Line_|
|Line (Physical)|The physical medium carrying the data exchange and power feed<br>services. A Line may be physically subdivided into several (physical)<br>_Segments_, interconnected by_Bridges_ or_Repeaters_.|
|Line Coupler|_Router_ for connecting a_Line_ to a_Main Line_ of the same Physical Layer<br>Type.|
|Logical Tag|Logical number given to one or more devices. Depending on the value, it<br>corresponds to a zone number (which may be functional,<br>geographical…) or to an_Individual Address_. Correspondence rules are<br>standardized.|


-----

|Term|Definition|
|---|---|
|Main Certificate|Certificate granted to a KNX Association member company or licensee,<br>who was responsible for the development of a KNX compatible product<br>and applied to have it certified by the KNX Association.<br>See also:_Derived Certificate_|
|Main Line|The Main Line is the Subnetwork of the second level.<br>In the three-level topology the Main Line shall serve to connect to the<br>_Primary Sides_ of one or more_Line Couplers_ and to the_Secondary Side_ <br>of one_Backbone Coupler_. <br>See also:_Line_, _Backbone Line_|
|Mains|The low voltage electricity distribution network of 230 V/50 Hz.|
|Manufacturer’s code|Global identifier assigned to a manufacturer. Manufacturer’s codes are<br>administered by the KNX Association. The Manufacturer’s code is made<br>of 2 octets.|
|Mask Version|Identification of an implementation, for operation like download,<br>memory_write ...(dedicated operations themselves are out of the scope<br>of the specification).<br>In particular, the Mask Version is read through a dedicated Application<br>Layer service by the S-Mode Management Client (_ETS_) to conclude on<br>the_Configuration Profile_ of the device and on possible further discovery<br>and configuration steps.<br>SYNONYM:<br>Device Descriptor Type 0|
|Master Product|The Master Product is a product selected by the manufacturer out of a<br>product group. Only this product is submitted to the required<br>conformance tests. However, the results of these tests are applicable for<br>all the other members of the group.|
|Master Reset|The feature of the KNX device that assumes the support of the Basic<br>Restart and additionally at least one of the following features.<br>- <br>Reset of the device to its ex-factory state.<br>- <br>Reset of the IA to the default, medium dependent IA.<br>- <br>Reset of all GO-links (Group Addresses, Associations),<br>possibly per application channel.<br>- <br>Reset of the application to the default application.<br>- <br>Reset of the Application Parameters to their default value,<br>possibly per application channel.<br>See also:_Basic Restart_|
|Media Coupler|Router for connecting two_Subnetworks_ of different Physical Layer<br>types.<br>See also:_Router_, _Transparant Media Coupler_|
|Member of Product Group|All products of a product group including the master product.|
|Message|Data exchanged between two adjacent layers - say (N+1)-layer and<br>(N)-layer in the OSI communication model.|


-----

|Term|Definition|
|---|---|
|Messaging Model|A way to define the distribution of information in the system for one<br>given application, and corresponding types of communication<br>exchanges.<br>Used messaging models are:<br>- <br>_Shared Variable_<br>- <br>_Client/Server_|
|Network|The Network is made of 1 or several logical_Subnetworks_, <br>interconnected through_Routers_.|
|Non-certifiable Product|A product for which requirements and tests are not defined in the<br>KNX Specifications (e.g. peripheral devices such as infrared remote<br>transmitter) at the time of application for certification. As a<br>consequence, they may not be branded with the KNX logo.|
|Non-selective Data Link<br>Layer acknowledge|Acknowledge by the Data Link Layer upon reception of<br>− <br>an L_Data-PDU in multicast communication mode irrespective<br>of whether the destination Standard Mode_Group Address_ is<br>contained in the_Group Address Table_ of the receiver, or<br>− <br>an L_Data_Extended-PDU in multicast communication mode<br>irrespective of whether the destination standard mode_Group_<br>_Address_ is contained in the_Group Address Table_ of the<br>receiver or is an LTE-HEE Group Address that addresses a<br>zone assigned to the receiving device.|
|Octet Count|Service parameter defining number of significant octets in a APDU.|
|OSI model|Open Systems Interconnection Reference Model (OSI Model or OSI<br>Reference Model for short) is a layered abstract description for<br>communications and network protocol design. Standardized by the<br>International Standards Organization ISO.|
|Part|Subdivision of a Volume of the KNX Specifications.<br>EXAMPLE 17 Part 3/2 contains several Chapters specifying the KNX<br>Communication Media.|
|PB FEC|The name of the Profile for the Push Button Mode with Flexible E-Mode<br>Channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _E-Mode Channel_, _Extended E-Mode Channel_, _Fixed_<br>_E-Mode Channel_, _Flexible E-Mode Channel_, _PB SEC_|
|PB SEC|The name of the Profile for the Push Button Mode with Static E-Mode<br>Channels.<br>See also:_Adjusted E-Mode Channel_, _Basic E-Mode Channel_, _Ctrl FEC,_<br>_Ctrl SEC_, _E-Mode Channel_, _Extended E-Mode Channel_, _Fixed_<br>_E-Mode Channel_, _Flexible E-Mode Channel_, _PB FEC _|
|Permission|The definition and conditions (plain, authentication, confidentiality) of<br>the functionality that will be accepted from a_Role_, in accessing a DP in<br>a device or in accepting services from a communication partner.|


-----

|Term|Definition|
|---|---|
|Physical External Interface<br>(PEI)|Optional standardised interface between a_Bus Access Unit_ and an<br>_Application Module_.|
|Plain data|This is a generic term that denotes unencrypted data. The content of the<br>plain data depends on the service and the user or not of confidentiality<br>and authentication.<br>Plain data opposes to_cipher text_.|
|Primary side of a Coupler|In the TP1 three-level topology, if the_Coupler_ is configured as a_Line_<br>_Coupler_, this is the_Main Line_. In case the_Coupler_ is configured as a<br>_Backbone Coupler_, this is the_Backbone Line_. In case the_Coupler_ is<br>configured as a_Bridge_, this is the part of the_Line_ containing other<br>_Couplers_ and possibly other devices.<br>See also:_Coupler_, _Router_, _Secondary side of a Coupler_|
|Priority|Service Parameter defining different priority levels for transmitting a<br>_frame_. The priority level is encoded in the_frame_, and attained (or not) in<br>a specific way for each medium.|
|Product|Any device, component or tool that is connected to the KNX network<br>(whether or not with communication relevant parts).A way to define the<br>distribution of information in the system for one given application, and<br>corresponding types of communication exchanges.|
|Product Group|The collection of all products for which the KNX Association<br>requirements apply in the same way and give the same result during<br>conformance assessment.|
|Property (of an Interface<br>Object)|Addressable object representing one aspect of an internal object. The<br>Property is an addressable part of an_Interface Object_. <br>The Property consists of the Property Description and the actual<br>Property Value.<br>EXAMPLE 18 A Property containing the Object Type, a Property containing a<br>setpoint value of some control|
|Protocol Data Unit (PDU)|Sequence of an integral number, N, of octets numbered O0 through ON-1. <br>Each octet may be viewed in turn as a sequence of eight bits numbered<br>b7 through b0. Throughout this document OI is shown to the left of OI+1 <br>and b j to the left of b j-1. In one octet, b7 is the most significant bit<br>(MSB), b0 the least significant one (LSB).<br>On the physical medium, the bit order in each octet is medium<br>dependent.|
|Quality Of Service|Set of service parameters specifying the quality level to be reached when<br>transmitting a frame. Includes the_Priority_ parameter.|
|Re-assessment|Procedure that is applied when modifications are carried out to an<br>already certified product (be it main or derived).|


-----

|Term|Definition|
|---|---|
|Repeater|System Device interconnecting two_Segments_. A Repeater will forward<br>every physical symbol from one segment to another.<br>See also:_TP1 Repeater_|
|RF chip|A chip tick shall be the basic time unit of the RF synchronous system. Its<br>duration is 1/32 768 s (approx. 30,5 µs). This shall also the basic RF<br>chip rate of any KNX RF system.|
|Role|A Role is an identification of a group of links to a device (multicast,<br>unicast and other) that have the same_Permissions_ throughout the AIL.|
|Router|System Device interconnecting two_Subnetworks_. A Router will forward<br>a _Frame_ from one_Subnetwork_ to another depending on the_Destination_<br>_Address_ and position of devices in the network.<br>A Router can be either a Line Coupler or a Backbone Coupler<br>See also:_Transparant Media Coupler_|
|Runtime Interworking|Capability of a product, in conformance with a set of standards, to<br>communicate with other products and to properly operate their intended<br>functions or properly respond to their stimuli according to the<br>application specifications.<br>See also:_Configuration Interworking_|
|Secondary side of a Coupler|In the TP1 three-level topology, if the_Coupler_ is configured as a_Line_<br>_Coupler_, this is the_Line_. In case the_Coupler_ is configured as a<br>_Backbone Coupler_, this is the_Main Line_. In case the_Coupler_ is<br>configured as a_Bridge_, this is the part of the_Line_ possibly containing<br>other devices but no Couplers.<br>See also:_Coupler_, _Router_, _Primary side of a Coupler_|
|Secure DP|Datapoint that requires either authentication and/or confidentiality.|
|Secure Link|Link to a_Secure DP._|
|Security Link Resources|The_Security Link Resources_ is a term that allows to refer as a whole to<br>the collection of the following Resources.<br>- <br>The Point-to-point Key Table<br>- <br>The Group Key Table<br>- <br>The Security Individual Address Table<br>- <br>The Tool Key.|
|Segment|Physical elementary subdivision of a_Physical Line_.|
|Selector|Any kind of selector enabling to set a logical tag: coding wheel, jumper,<br>dip switches, electronic screwdriver+EEPROM, …|
|Server|Application Process providing application-specific services.<br>See also:<br>_Client_|
|Service|Function provided by an (N)-Layer to an (N+1)-Layer.|


-----

|Term|Definition|
|---|---|
|Service Access Point|The point at which Service Primitives are exchanged between adjacent<br>layers.|
|Service Element|An Active Element within a Layer embodying a set of functions.|
|Service parameters|Parameters delivered by the (N+1)-layer to the (N)-layer in a service<br>primitive and needed by the (N)-layer to produce the protocol control<br>information ((N)-PCI) of the (N)-layer PDU.|
|Service primitive|A primitive exchanged between adjacent Layers, related to a given<br>Service. It transports a_Message_ and_Service Parameters_.|
|Shared Variable|An object in the Shared Memory Model, belonging to the system. A<br>local copy (or instance) of such a variable is called a_Group Object_. Also<br>referred to directly as_Group Object_. <br>See also:_Group Object_, _Shared Memory model_|
|Shared Variable Model|_Messaging model_ based on_Group Objects_. In this model each object<br>belongs to the communication system. The object may be produced<br>and/or consumed by several devices.|
|Simple Network|Network with one or a very limited set of_Subnetworks_, without<br>configuration of_Routers_ (flat addressing).<br>In such installations, (all)_Subnetwork_(s) shall be using their default<br>_Subnetwork Address_. <br>To allow consistent management, such a network is limited to at<br>maximum one instance of each possible medium.<br>_Routers_ - if any – shall be Transparent Media Couplers. Installation of<br>such_Routers_ don't require a professional installer. There are no<br>requirements on topology.<br>See also:_Complex Network_|
|Source Address|Address field; contains the_Individual Address_ of the device that<br>transmits a_Frame_.|
|Subnetwork|Logical subdivision of a_Network_. Subnetwork have a different name,<br>depending on their position in the Network hierarchy:_Backbone Line_, <br>_Main Line_ and _Lines_.|
|Subnetwork Address|Part of an Individual Address identifying a_Subnetwork_ in a network.<br>The Subnetwork Address consists of a four-bit Main Line Number and a<br>four bit Line Number.|
|Synchronous BiBat System|A Synchronous BiBat System consists of a single_BiBat Master_ and one<br>or several_BiBat Slaves_ (devices). Optionally there can be_BiBat_<br>_Retransmitters_ in addition.|
|Synchronous RF Frame|These are the_Frames_ that are transmitted by a_BiBat Master_ to its_BiBat_<br>_Slaves_ in a time-slotted mechanism. These can be data_Frames_ or Sync<br>_Frames_. They are identified by a dedicated value of the KNX Crt-field in<br>the frame.|


-----

|Term|Definition|
|---|---|
|Synchronous RF<br>Retransmitter|A Synchronous RF Retransmitter shall have permanent RF reception<br>capabilities (normally mains powered). It shall retransmit Synchronous<br>RF telegrams with a fixed time delay without the usual collision<br>avoidance of anynchronous RF. It shall treat asynchronous telegrams<br>like an asychronous RF Retransmitter.<br>SYNONYM<br>BiBat Retransmitter|
|System Configuration Mode<br>(= System Mode)<br>(= S-Mode)|This is a_Configuration Mode_ where the installation is designed and<br>configured by using a tool (e.g. PC based, perhaps including CAD<br>functions). The tool enables to manage the system complexity efficiently<br>and with reliability. The configuration may be very detailed.<br>KNX S-Mode installations are configured by means of the ETS<br>software.<br>See also:_Easy Configuration Mode, Engineering Tool Software (ETS)_|
|System Device|A KNX device with (one or more) communication relevant part(s) not<br>enabling connection of an additional application part (as specified in<br>[04]) is considered a KNX system device.<br>EXAMPLE 19 TP1 Coupler, EDI/RS232, appliance interface, TP/PL Media<br>Coupler, PL110 Repeater, TP1 Repeater.|
|System Interface Object|Internal Object related to a system function of a device<br>EXAMPLES 20 Application Program, Group Address Table….<br>This may be accessed dedicated L7 services.|
|TP1 Repeater|System Device interconnecting two (physical) TP1_Segments_. A<br>TP1 Repeater will forward any frame from one_Segments_ to another<br>without filtering (this is a_Bridge_ functionality), but with hop count<br>decrement (this is a_Router_ functionality).|
|TP-UART|A specific commercially available integrated solution for KNX TP1 bus<br>access.|
|Transparant Media Coupler|A _Router_ that couples two different media and does not requires<br>configuration.<br>It forwards broadcast-, multicast- and point-to-point messages without<br>filtering but with evaluation of the hop_count.<br>See also:_Router_, _Media Coupler_|
|user localisation action:|This shall be an action performed by a human on the device. the specific<br>realisation is implementation dependent.<br>EXAMPLE 21 a press on a rocker of a push button|
|Volume|Self consistent set of documents of the KNX Specifications, dedicated to<br>a given aspect.<br>EXAMPLE 22 Volume 3 “System Specifications”|
|Zone|Usually a geographical entity like a room, an appartment… May also be<br>functional.|


-----

### 2 List of abbreviations

|Abbreviation|Description|
|---|---|
|AA|Area Address|
|AC|Alternating Current|
|ACK|Positive Acknowledgement|
|ADC|Analog to Digital Converter|
|AES|Advanced Encryption Standard|
|AIL|Application Interface Layer|
|AIL-PDU|Application Interface Layer PDU|
|AIS|Application Interworking Specifications|
|AL|Application Layer|
|AM|Application Management<br>Application Module|
|AP|Application Process<br>Application Program|
|APCI|Application layer Protocol Control Field|
|APDU|Application Layer PDU|
|API|Application Programmer’s Interface|
|APS|Ancillary Power Supply|
|ASAP|Application Layer Service Access Point|
|ASCII|American Standard Code for Information Interchange|
|BAU|Bus Access Unit|
|BCU|Bus Coupling Unit|
|BDUT|Bus Device Under Test|
|BIM|Bus Interface Module|
|CBC|Cipher Block Chaining|
|CCM|Counter with CBC-MAC|
|cEMI|Common EMI|
|CFB|Cipher feedback|
|COM|Communication|
|COV|Change of Value|
|CSMA|Carrier Sense Multiple Access|
|CSMA/CA|Carrier Sense, Multiple Access, with Collision Avoidance|
|CTR|Counter Mode (of Operation)|
|DAA|Distributed Address Assignment|
|DAF|Destination Address Flag|


-----

|Abbreviation|Description|
|---|---|
|DC|Direct Current|
|DD0|Device Descriptor Type 0<br>The value 000000b for the Descriptor Type in the A_DeviceDescriptor-<br>_Read-service.|
|DD2|<br>Device Descriptor Type 2<br>The value 000010b for the Descriptor Type in the A_DeviceDescriptor-<br>_Read-service.|
|DDoS|<br>Distributed Denial of Service|
|DIV|Division with rounding results down to zero.|
|DLL|Data Link Layer|
|DoA|Domain Address|
|DoS|Denial of Service|
|DP|Datapoint|
|DPSU|Distributed Power Supply Unit|
|DPT|Datapoint Type|
|ECDH|Elliptic Curve Diffie–Hellman|
|EITT|KNX (formerly EIB) Interoperability Test Tool|
|EMC|Electro Magnetic Compatibility|
|EMI|External Message Interface|
|eteC|KNX Tool Environment Components|
|ETS|KNX Engineering Tool Software|
|FB|Functional Block|
|FCS|Frame Check Sequence / Frame CheckSum|
|FDSK|Factory Default Setup Key|
|FEC|Flexible E-Mode Channel<br>See also:_Flexible E-Mode Channel_|
|FOCI|Function Of Common Interest|
|GA|Group Address|
|GO|Group Object|
|GrAT|Group Addresss Table|
|GrOT|Group Object Table|
|Group_Obj|Group Object|
|<br>HBES|Home and Building Electronic Systems|
|HID|Human Interface Device|
|HMI|Human Machine Interface|
|ID|Identifier|


-----

|Abbreviation|Description|
|---|---|
|Idx|Index|
|IMI|Internal Message Interface|
|Int_Obj|Interface Object|
|<br>IO|Interface Object|
|IOT|Interface Object Type|
|IR|Infra-Red|
|IV|Initialisation Vector|
|KMB|KNX Association Marketing Board|
|KSG|KNX Association System Group|
|KTB|KNX Association Technical Board|
|L2-acknowledge|Layer 2 acknowledge (values ACK, NAK, BUSY, FULL)|
|L4-acknowledge|Layer 4 acknowledge|
|LA|Line Address|
|LPDU|Data Link Layer PDU|
|LSAP|Link Layer Service Access Point|
|lsb|Least Significant Bit|
|LSB|Least Significant Byte|
|LSM|Load State Machine|
|MaC|Management Client|
|MAC|Message Authentication Code|
|MaS|Management Server|
|MC|Message Code|
|MiM|Man-in-the-Middle|
|MOD|The remainder of division of one number by another.<br>A MOD B = A – B * (A DIV B)|
|msb|Most Significant Bit|
|MSB|Most Significant Byte|
|NL|Network Layer|
|NM|Network Management|
|NPDU|Network Layer PDU|
|NRZ|Non Return to Zero|
|OS|(PC) Operating System|
|OSI|Open Systems Interconnection|
|P-AL|Plain Application Layer|
|PBKDF2|Password-Based Key Derivation Function 2|


-----

|Abbreviation|Description|
|---|---|
|PCI|Protocol Control Information|
|PDT|Property Datatype|
|PDU|Protocol Data Unit|
|PEI|Physical External Interface|
|PELV|Protective Extra Low Voltage|
|PhL|Physical Layer|
|Ph-PDU|Physical Layer PDU|
|PID|Property Identifier|
|PL|Powerline|
|PSU|Power Supply Unit|
|RF|Radio Frequency|
|SAI|Security Algorithm Identifier|
|S-AL|Secure Application Layer|
|SAP|Service Access Point|
|SCF|Security Control Field|
|SDU|Service Data Unit|
|SEC|Static E-Mode Channel|
|SELV|Safety Extra Low Voltage|
|SeqNr|Sequence Number|
|SFL|Security Failures Log|
|SHA|Secure Hash Algorithm|
|SHD|Secure Header|
|SL|Session Layer|
|SM|System Management|
|SNA|Subnetwork Address|
|TF|Task Force|
|TL|Transport Layer|
|TP|Twisted Pair|
|TPDU|Transport Layer PDU|
|TP-UART|Twisted Pair Universal Asynchronous Receiver/Transmitter<br>See also:_TP-UART_|
|TSAP|Transport Layer Service Access Point|
|UART|Universal Asynchronous Receiver/Transmitter|
|USB|Universal Serial Bus|
|WG|Working Group|


-----

-----

