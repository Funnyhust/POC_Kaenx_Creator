# System Specifications

## Communication

 Network Layer

Summary

This document specifies Network Layer of the KNX System.

Version 02.01.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2001.12.17 Preparation of the Approved Standard.
1.1 2007.08.06   - S16 “System Broadcast Services” v1.0 AS

                - AN047 “System Broadcast Services in media coupler” v03
1.1 2008.08.28   - AN102 “TP1 Bridges” integrated.
1.1 2008.10.28 Editorial update.

                 - clause 2.4: update of hexadecimal notations

                  - clause 2.4: integration of some text from 9/3 “Couplers” in which the

routing algorithm is removed.
1.1 2008.12.19 Preparation of the Approved Standard v1.1.
1.01.01 2011.08.03 Editorial corrections.
01.01.02 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
02.01.01 2020.01.06   - AN158 “KNX Data Security” integrated.
02.01.01 2020.01.08   - AN189 “New routing algorithm for hc 7” integrated.
02.01.01 2020.10.27   - AN183 “KNXnet/IP System Broadcast” integration started.
2021.09.22         - AN161 “Coupler Model 2.0” integration completed.
2021.09.28 Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 3/2/6 “KNX IP”

[02] Chapter 3/3/2 “Data Link Layer – General Requirements”

[03] Chapter 3/3/4 “Transport Layer”

[04] Chapter 3/3/7 “Application Layer”

[05] Chapter 3/5/1 “Resources”

Filename: 03_03_03 Network Layer v02.01.01 AS.docx
Version: 02.01.01
Status: Approved Standard
Savedate: 2021.09.28
Number of pages: 34

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.12.17|Preparation of the Approved Standard.|
|1.1|2007.08.06|• S16“System Broadcast Services” v1.0 AS|
|1.1|2007.08.06|• AN047“System Broadcast Services in media coupler” v03|
|1.1|2008.08.28|<br>• AN102“TP1 Bridges” integrated.|
|1.1|2008.10.28|<br>Editorial update.<br>• clause 2.4: update of hexadecimal notations<br>• clause 2.4: integration of some text from 9/3 “Couplers” in which the<br>routing algorithm is removed.|
|1.1|2008.12.19|<br>Preparation of the Approved Standard v1.1.|
|<br>1.01.01|<br>2011.08.03|<br>Editorial corrections.|
|<br>01.01.02|<br>2013.10.28|<br>Editorial updates for the publication of KNX Specifications 2.1.|
|<br>02.01.01|<br>2020.01.06|<br>- <br>AN158“KNX Data Security” integrated.|
|<br>02.01.01|<br>2020.01.08|<br>   <br>- <br>AN189“New routing algorithm for hc 7” integrated.|
|<br>02.01.01|<br>2020.10.27|<br>   <br>- <br>AN183“KNXnet/IP System Broadcast” integration started.|
|<br>02.01.01|2021.09.22|- <br>AN161“Coupler Model 2.0” integration completed.|
|<br>02.01.01|2021.09.28|Preparation for inclusion inthe KNXSpecifications v3.0.|


-----

#### Contents

###### 1 Overview ................................................................................................................................. 4

 2 Network services and protocol .............................................................................................. 6 2.1 NPDU ............................................................................................................................. 6 2.2 Network Layer services .................................................................................................. 6 2.2.1 N_Data_Individual service ................................................................................. 6 2.2.2 N_Data_Group service ........................................................................................ 7 2.2.3 N_Data_Broadcast service .................................................................................. 8 2.2.4 N_Data_SystemBroadcast service ...................................................................... 9 2.3 Parameters of Network Layer ....................................................................................... 11 2.4 Network Layer State Machines .................................................................................... 11 2.4.1 State Machine of Network Layer for normal devices ....................................... 11 2.4.2 State Machines for Couplers ............................................................................. 11


-----

### 1 Overview

The Network Layer shall be the layer between the Data Link Layer and the Network Layer User. This
Network Layer shall conform to the definitions of the ISO/OSI model (ISO 7498) Network Layer.

The Network Layer shall use the L_Data - and the L_SystemBroadcast services of the Data Link Layer
and shall provide N_Data_Individual, N_Data_Group, N_Data_Broadcast and N_Data_SystemBroadcast
services to the Network Layer user, see Figure 1.

_Local Layer-3 User_ _Remote Layer-3 User_

N_Data_Individual.req N_Data_Individual.con N_Data_Individual.ind

N_Data_Group.req N_Data_Group.con N_Data_Group.ind

N_Data_Broadcast.req N_Data_Broadcast.con N_Data_Broadcast.ind

N_Data_SystemBroadcast.req N_Data_SystemBroadcast.con N_Data_SystemBroadcast.ind

NPDU

Network Layer Network Layer

L_Data.req L_Data.con L_SystemBroadcast.req L_SystemBroadcast.con L_Data.ind L_SystemBroadcast.ind

**Figure 1 - Interactivity of the Network Layer**
**(not for Bridges or Routers)**

Filter Algorithm

N_Data_Group.req

N_Data_Group.ind

Individual Address

N_Data_Individual.req

N_Data_Individual.ind

Netw ork Layer N_Data_Broadcast.req Netw ork Layer

N_Data_Broadcast.ind

L_Data.ind

L_Data.Req
L_Data.con

Data Link Layer Data Link Layer

###### ........ ........

**Figure 2 - General Functionality of a Router or Bridge**

Communication across Subnetworks needs devices called Routers, see clause 2.4.3 “State Machine of
Network Layer for Routers”. Routers are devices that allow to couple two Data Link Layer protocol
instances together, which are connected to different Subnetworks. For routing frames from one
Subnetwork to the other the Router uses a filter algorithm. Furthermore a Router allows removing
misrouted messages so that they cannot flood the network. All the filter algorithms of a KNX network
together define the allowed communication paths between any two devices.

Communication across Subnetworks without filter characteristics needs devices called Bridges, see also
Figure 2. Like a Router a Bridge allows to couple two Data Link Layer protocol instances together, which
are connected to different Subnetworks. But a Bridge does not have the filter property of a Router and
therefore does not need any filter algorithm.

Two different mechanisms for routing are used. For Group Addressing a filter algorithm is used. For
point-to-point addressing the routing is done by interpreting the Individual Address.


-----

Two different Network Layer users must be distinguished:

1. The Network Layer user in a standard device: This is the Transport Layer, see [03].
2. The Network Layer user in a Router: this is the filter algorithm.


-----

### 2 Network services and protocol

#### 2.1 NPDU
The NPDU shall correspond to the LPDU of an L_Data-Frame without the Control Field, Source
Address, Destination Address, Address Type Flag and the octet count. The NPDU is shown in Figure 3
below.

Octet 5 Octet 6 Octet 7 Octet 8 ... Octet N

8 7 6 5 4 3 2 1 8 7 6 5 4 3 2 1 8 7 6 5 4 3 2 1 8 7 6 5 4 3 2 1 8 7 6 5 4 3 2 1 8 7 6 5 4 3 2

NPDU NPDU

NSDU

application user data

application control field

**L-3** **L-2** **L-4** **L-7**

**Figure 3 - Format of the NPDU**

#### 2.2 Network Layer services

##### 2.2.1 N_Data_Individual service
The local user of Network Layer shall prepare an NSDU for the remote user of Network Layer; the
destination shall be addressed with an Individual Address. The local user of Network Layer shall apply
the N_Data_Individual.req primitive to pass the NSDU to the local Network Layer. The local Network
Layer shall accept the service request and shall pass it with an L_Data.req with
address_type = ‘individual’ to the local Data Link Layer.

The local Network Layer shall encode the NSDU to the NPDU by adding the hop_count with the value
according to the parameter hop_count_type and mapping the arguments ack_request, destination_address,
octet_count and priority, and to the corresponding arguments ack_request, destination_address,
octet_count and priority of the L_Data.req primitive.

The remote Network Layer shall map an L_Data.ind primitive with address_type = ’individual’ to an
N_Data_Individual.ind primitive. It shall remove the hop_count and shall generate the parameter
hop_count_type according to its value. The argument lsdu shall be decoded to the argument nsdu. The
arguments octet_count, priority and source_address shall be mapped to the corresponding arguments
octet_count, priority and source_address of the N_Data_Individual.ind primitive.

The local Network Layer shall map the L_Data.con primitive to the N_Data_Individual.con primitive.
The argument l_status shall be mapped to the corresponding argument n_status of the
N_Data_Individual.con primitive.

|Octet 5|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 6|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 7|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 8|Col26|Col27|Col28|Col29|Col30|Col31|Col32|...|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Octet N<br>8 7 6 5 4 3 2|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||||||||||||||||||||||||||||||||||||||||||||
|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|2|
||N|PD|U|||||||||||||||||||||||||N|PD|U||||||||||||||||||
|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|||||||||||||||||NSDU|NSDU|NSDU|NSDU|NSDU|NSDU|NSDU|NSDU|||||||||||||||||
|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>plication control field|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>plication control field|||||||appli|appli|appli|appli|appli|appli|appli|appli|cation user data|cation user data|cation user data|cation user data|cation user data|cation user data|cation user data|cation user data|||||||||
|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|address_type<br>network control field<br>"<br>"<br>length (1 to 15; start with Octet 7)<br>"<br>"<br>"|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|transport control field<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>plication control field|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>plication control field|||||||data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|
||**L-3**|**L-3**|**L-3**|**L-2**|**L-2**|**L-2**|**L-2**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|


-----

N_Data_Individual.req(ack_request, destination_address, hop_count_type, octet_count, priority, nsdu)

ack_request: Data Link Layer acknowledge requested or don’t care

destination_address: Individual Address of the destination

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data to be transferred by the Network Layer

N_Data_Individual.con(ack_request, destination_address, hop_count_type, octet_count, priority, nsdu,
n_status)

ack_request: Data Link Layer acknowledge requested or don’t care

destination_address: Individual Address of the destination

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data that has been transferred by Network Layer

n_status: ok: N_Data_Individual sent successfully with L_Data

not_ok: transmission of the associated L_Data request frame did not succeed

N_Data_Individual.ind(destination_address, hop_count_type, octet_count, priority, source_address, nsdu)

destination_address: the Individual Address of this device

hop_count_type: hop count equals 7 or not

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

source_address: Individual Address of the device that requested the N_Data_Individual service

nsdu: this is the user data that has been transferred by Network Layer

##### 2.2.2 N_Data_Group service
The N_Data_Group service shall be confirmed locally. The local user of Network Layer shall prepare an
NSDU for the remote user of Network Layer; the destination shall be addressed with a Group Address.
The local user of Network Layer shall apply the N_Data_Group.req primitive to pass the NSDU to the
local Network Layer. The local Network Layer shall accept the service request and shall pass it with an
L_Data.req with address_type = ‘multicast’ to the local Data Link Layer.

The local Network Layer shall encode the NSDU to the LSDU by adding the hop_count with the value
according to the parameter hop_count_type and mapping the arguments ack_request, destination_address,
octet_count and priority to the corresponding arguments ack_request, destination_address, octet_count
and priority of the L_Data.req primitive.

The remote Network Layer shall map an L_Data.ind primitive with address_type = ‘multicast’ and
destination_address<>‘0’ to an N_Data_Group.ind primitive. It shall remove the hop_count and generates
the parameter hop_count_type according to its value. The arguments destination_address, octet_count and
priority are mapped to the corresponding arguments destination_address, octet_count and priority of the
N_Data_Group.ind primitive.


-----

The local Network Layer maps the L_Data.con primitive to the N_Data_Group.con primitive. The
argument l_status is mapped to the corresponding argument n_status of the N_Data_Group.con primitive.

N_Data_Group.req(ack_request, destination_address, hop_count_type, octet_count, priority, nsdu)

ack_request: Data Link Layer acknowledge requested or not

destination_address: Group Address of the destination

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data to be transferred by Network Layer

N_Data_Group.con(ack_request, destination_address, hop_count_type, octet_count, priority, nsdu, n_status)

ack_request: Data Link Layer acknowledge requested or not

destination_address: Group Address of the destination

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data that has been transferred by Network Layer

n_status: ok: N_Data_Group sent successfully with L_Data service

not_ok: transmission of the associated L_Data request frame did not succeed

N_Data_Group.ind(destination_address, hop_count_type, octet_count, priority, nsdu)

destination_address: the addressed Group Address of this device

hop_count_type: hop count equals 7 or not

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data that has been transferred by Network Layer

##### 2.2.3 N_Data_Broadcast service
The local user of Network Layer shall prepare an NSDU for all the remote Network Layer users within
the same domain, the destination shall be addressed with the Broadcast Address (Destination
Address = ´0´ and address_type = ´multicast´). The local user of Network Layer shall apply the
N_Data_Broadcast.req primitive to pass the NSDU to the local Network Layer. The local Network Layer
shall accept the service request and shall pass it with an L_Data.req with address_type = ´ multicast ´ to
the local Data Link Layer.

The local Network Layer shall encode the NSDU to the LSDU by adding the hop_count with the value
according to the parameter hop_count_type and mapping the arguments ack_request octet_count and
priority to the corresponding arguments ack_request, octet_count and priority of the L_Data.req primitive
and setting the L_Data.req parameter destination_address to ‘0’.

The remote Network Layer shall map an L_Data.ind primitive with address_type = ´multicast´ and
destination_address = ´0´ to an N_Data_Broadcast.ind primitive. It shall remove the hop_count and shall
generate the parameter hop_count_type according to its value. The argument lsdu shall be mapped to the
argument nsdu. The argument priority shall be mapped to the corresponding argument priority of the
N_Data_Broadcast.ind primitive.


-----

The local Network Layer shall map the L_Data.con primitive to the N_Data_Broadcast.con primitive.
The argument l_status shall be mapped to the corresponding argument n_status of the
N_Data_Broadcast.con primitive.

N_Data_Broadcast.req(ack_request, hop_count_type, octet_count, priority, nsdu)

ack_request: Data Link Layer acknowledge requested or not

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data to be transferred by Network Layer

N_Data_Broadcast.con(ack_request, hop_count_type, octet_count, priority, nsdu, n_status)

ack_request: Data Link Layer acknowledge requested or not

hop_count_type: hop count 7 or Network Layer Parameter

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

nsdu: this is the user data that has been transferred by Network Layer

n_status: ok: N_Data_Broadcast sent successfully with L_Data service

not_ok: transmission of the associated L_Data request frame did not succeed

N_Data_Broadcast.ind(hop_count_type, octet_count, priority, source_address, nsdu)

hop_count_type: hop count equals 7 or not

octet_count: length information as described in Data Link Layer

priority: system, urgent, normal or low priority

source_address: Individual Address of the device that requested the N_Data_Broadcast service

nsdu: this is the user data that has been transferred by Network Layer

##### 2.2.4 N_Data_SystemBroadcast service
The local user of Network Layer shall prepare an NSDU for all the remote Network Layer users; the
destination shall be addressed with the system broadcast address (Destination Address = 0000h and
address_type = “multicast”). The local user of Network Layer shall apply the N_Data_SystemBroadcast.req primitive to pass the NSDU to the local Network Layer. The local Network Layer shall
accept the service request and shall pass it with an L_SystemBroadcast.req with
address_type = “multicast” to the local Data Link Layer.

The local Network Layer shall encode the NSDU to the LSDU by adding the hop_count with the value
according to the parameter hop_count_type and mapping the arguments ack_request octet_count and
priority to the corresponding arguments ack_request, octet_count and priority of the L_SystemBroadcast.req primitive and setting the L_SystemBroadcast.req parameter destination_address to 0000h.

The remote Network Layer shall map an L_SystemBroadcast.ind primitive with
address_type = “multicast” and destination_address = 0000h to an N_Data_SystemBroadcast.ind
primitive. It shall remove the hop_count and generate the parameter hop_count_type according to its
value. The argument lsdu shall be mapped to the argument nsdu. The argument priority shall be mapped
to the corresponding argument priority of the N_Data_SystemBroadcast.ind primitive.


-----

The local Network Layer shall map the L_SystemBroadcast.con primitive to the
N_Data_SystemBroadcast.con primitive. The argument l_status shall be mapped to the corresponding
argument n_status of the N_Data_SystemBroadcast.con primitive.

N_Data_SystemBroadcast.req(ack_request, hop_count_type, nsdu, octet_count, priority)

ack_request: This parameter shall be used to indicate whether a Data Link Layer
acknowledge is mandatory or optional.
hop_count_type: This parameter shall be used to indicate whether the hop_count shall be set
to 7 or if the Network Layer parameter shall be used.
nsdu: This parameter shall be used to contain the user data that shall be
transferred by the Network Layer.
octet_count: This parameter shall be used to indicate the length information of the
requested frame.
priority: This parameter shall be used to indicate the priority that shall be used to
transmit the requested frame; it shall be “system”, “urgent”, “normal” or
“low”.

N_Data_SystemBroadcast.con(ack_request, hop_count_type, nsdu, octet_count, priority, n_status)

ack_request: This parameter shall be used to indicate whether a Data Link Layer
acknowledge is indicated as mandatory or optional in the transmitted
frame.
hop_count_type: This parameter shall be used to indicate whether the hop_count of the
transmitted frame is set to 7 or if the Network Layer parameter is used.
nsdu: This parameter shall be used to contain the user data that is transferred by
the Network Layer.
octet_count: This parameter shall be used to indicate the length information of the
transmitted frame.
priority: This parameter shall be used to indicate the priority that is used to transmit
the requested frame; it shall be “system”, “urgent”, “normal” or “low”.
n_status: ok: This value of this parameter shall be used to indicate that the
transmission of the N_Data_SystemBroadcast is successful.
not_ok: This value of this parameter shall be used to indicate that the
transmission of the N_Data_SystemBroadcast.req did not
succeed.

N_Data_SystemBroadcast.ind(hop_count_type, nsdu, octet_count, priority, source_address)

hop_count_type: This parameter shall be used to indicate whether the hop count of the
received frame equals 7 or not.
nsdu: This parameter shall be used to contain the user data that is received by the
Network Layer.
octet_count: This parameter shall be used to contain the length information of the
received frame.
priority: This parameter shall be used to indicate the priority of the received frame;
it shall be “system”, “urgent”, “normal” or “low”.
source_address: This parameter shall be used to indicate the Source Address of the received
frame; it shall be the Individual Address of the device that has transmitted
the N_Data_SystemBroadcast-PDU.


-----

#### 2.3 Parameters of Network Layer
The following parameters influence the behaviour of Network Layer and are required inside Network
Layer in order to operate correctly:

hop_count will be added to the frame by Network Layer

device_type information about the device: either normal device or Bridge or Router.

#### 2.4 Network Layer State Machines

##### 2.4.1 State Machine of Network Layer for normal devices
The state machine of Network Layer for normal devices shall map services as described in clause 2.2. The
value of the hop count shall be added when the Transport Layer applies a Network Layer request
primitive.

In sending direction, the Network Layer shall set the value of the hop_count field in the NSDU to the
value according of the Network Layer parameter ‘hop_count’ (see clause 2.3 “Parameters of Network
Layer”).

##### 2.4.2 State Machines for Couplers

###### 2.4.2.1 General requirements

2.4.2.1.1 Introduction
Please refer to [02] for the overview of the Coupler types.

Couplers (KNX Router, KNX TP1 Bridge and KNX TP1 Repeater) do also have a Network Layer but
their Network Layer state machine differs from normal devices.

2.4.2.1.2 Busload requirements

- The Coupler shall be able to route telegrams in the communication mode
   - point-to-multipoint, connectionless and
   - point-to-point connectionless and –connection-oriented
if the busload at the primary side and the secondary side (without the Coupler) is lower than or equal
to 90 % (to be confirmed). If the bus load exceeds this value on the primary side and the secondary
side, it may acknowledge with BUSY any incoming telegram (up to 6 times).

- In case the Coupler is a TP1 Bridge or a TP1 Repeater it shall be possible to reduce the number of
repetitions from the primary side to the secondary side and vice versa for telegrams in the
communication mode
   - point-to-multipoint, connectionless and
   - point-to-point connectionless and –connection-oriented.

- In case of power down at the primary side, it is recommended that according to parameterization the
Coupler generates an error message.

###### 2.4.2.2 State Machine of Network Layer for a TP1 Repeater
If an L_Data.ind with a hop_count in [1 … 7] is received, the TP1 Repeater shall decrement the
hop_count and transmit the service parameters of the L_Data.ind with the corresponding service
parameters (source address, destination_address, address_type, priority, ack_request, octet_count, lsdu) of
an L_Data.req to the other side.

Otherwise, the Network Layer of the TP1 Repeater shall discard the L_Data.ind.


-----

###### 2.4.2.3 State Machine of Network Layer for a TP1 Bridge
If an L_Data.ind with address_type = ´multicast´ (Group Addressed, LTE-addressed) is received on one
side, the TP1 Bridge shall transmit the service parameters of the L_Data.ind with the corresponding
service parameters of an L_Data.req to the other side. Any hop count in [0 … 7] shall remain unchanged.

If an L_Data.ind with address_type = ‘multicast’ and Destination Address = 0000h is received on one
side, the TP1 Bridge shall process the L_Data.ind in its local stack and shall transmit the service
parameters of the L_Data.ind with the corresponding service parameters of an L_Data.req to the other
side. Any hop count in [0 … 7] shall remain unchanged.

If an L_Data.ind with address_type = ´individual´ and Destination Address equal to the Individual
Address of the TP1 Bridge is received, the TP1 Bridge shall process the L_Data.ind identical to a normal
device, see clause 2.2.1.

If an L_Data.ind with address_type = ‘individual’ and Destination Address not equal to the Individual
Address of the Bridge is received on one side, the TP1 Bridge shall transmit the service parameters of the
L_Data.ind with the corresponding service parameters of a L_Data.req to the other side. Any hop count in

[0 … 7] shall remain unchanged.

Otherwise, the Network Layer of the TP1 Bridge shall discard the L_Data.ind.

###### 2.4.2.4 State Machine of Network Layer for Routers

2.4.2.4.1 Basic rules
This clause specifies the basic rules for the State Machine for the Network Layer for Routers. These rules
can be influenced by additional, standard and implementation specific parameters.


Transport Layer


NSAPs

Network Layer of a
Coupler - entity 2


Data Link Layer of
a Coupler – entity 2


Network Layer services to
the Transport Layer


NPDUs provided to
routing and filtering


routing and
filtering


(a)


(c)


(b)


(d)





 N_Data_Individual (a) N_Data_Individual-PDU
 N_Data_Broadcast (b) N_Data_Broadcast-PDU
 N_Data_SystemBroadcast (c) N_Data_SystemBroadcast-PDU
(d) N_Data_Group-PDU


 N_Data_Individual (a) N_Data_Individual-PDU
 N_Data_Broadcast (b) N_Data_Broadcast-PDU
 N_Data_SystemBroadcast (c) N_Data_SystemBroadcast-PDU
(d) N_Data_Group-PDU


Data Link Layer of a

Coupler – entity 1


NPDUs provided to
routing and filtering


(b)


(c)


**Figure 4 – Basic model of the Network Layer for a Coupler**

NOTE 1 The Coupler has a different Layer-2 algorithm than an end device. This is specified in [02] clause 6.2 “The Layer-2 of a
Router” and, amongst other, does not only accept point-to-point messages addressed to the own IA of the Coupler, but also to IAs
of devices connected to Subnetworks of other Layer-2 instances in the Coupler.

The below considers the routing and internal handling of messages for management (N_Data_Individual,
N_Data_Broadcast and N_Data_SystemBroadcast). The internal handling of runtime multicast
communication (N_Data_Group) is not specified. The use case where the Coupler has itself an
Application Program is not considered.


NSAPs

Network Layer of a
Coupler - entity 1


(d)





-----

a. The Coupler shall for each Interface have an entity of the “Network Layer of a Coupler”. This shall
make use of the Layer 2 services of that interface, and provide the services N_Data_Individual,
N_Data_Broadcast and N_Data_SystemBroadcast to the Transport Layer, just like the Layer 3 of an
end device.

b. If the Transport Layer or the Transport Layer User confirms or responds to a Network Layer service
primitive, then it shall use the same NSAP as on which the service is requested. The Coupler device
shall thus respond to a service on the interface (Primary Side or Secondary Side) on which the request
has arrived.

c. Additionally, each NPDU created by any Layer 3 entity shall be evaluated for routing and filtering for
decision whether it shall be passed to the other Layer 3 entities. This shall be done both for any TPDU
provided by the Transport Layer, as well as for any LPDU received from the Data Link Layer, this
means, both for incoming messages as for outgoing messages.

NOTE 2 From b and c, it can be concluded that, if a Coupler Model 2.0 responds to a service on broadcast – or system
broadcast communication mode, that it then will at least respond through the interface on which the original request has arrived. If
additionally, the Coupler parameters for these communication modes allow so, the response will also be transferred on all other
interfaces.

d. A layer 3 entity that handles an NPDU provided by another Layer 3 entity shall not pass this message
to the Transport Layer.

2.4.2.4.2 Basic routing algorithm
If an L_Data.ind with address_type = ´multicast´ and hop_count in [1...7] is received and the filter
condition for the Destination Address is true, the Router shall decrement the hop_count and shall transmit
the service parameters of the L_Data.ind with the corresponding service parameters of a L_Data.req to the
other side.

If an L_Data.ind with address_type = ´individual´ and Destination Address equal to the Individual
Address of the Router is received, the Router shall process the L_Data.ind identical to a normal device,
see clause 2.2.1.

If an L_Data.ind with address_type = ‘individual’ is received and the Destination Address matches the
conditions for routing, the Router shall transmit the service parameters of the L_Data.ind with the
corresponding service parameters of an L_Data.req to the other side. Additionally, the Router shall
decrement the hop count.

Otherwise, the Network layer of the Router shall discard the L_Data.ind.

An N_Data_Individual.req service invoked by the Network Layer user at the Router shall be processed as
described in clause 2.2.1.

2.4.2.4.3 Implementation specific Parameters influencing Layer 3 of the Coupler
The below specifications give the standard routing algorithms for the various communication modes. If
the Profile of the Coupler allows for implementation specific Parameters, then these may influence the
standard decisions of the flowchart and add additional or even alternative decisions.

There shall however be one combination of settings of the implementation specific Parameters that shall
make the Coupler behave according to the standard algorithms. It is not required that this be with the
standard values of the Parameters.


-----

2.4.2.4.4 Layer-2 acknowledge by the Coupler
In the below courses of actions, indications are given concerning the Layer-2 acknowledge of the
incoming Frame.

   - This is only relevant if the communication medium on which the incoming Frame arrives,
supports and requests Layer-2 acknowledge. If this is not the case, then no Layer-2
acknowledge of the incoming Frame has to be considered.

   - The conditions for Layer-2 acknowledge in the routing algorithm build an OR condition. If at
least one course of action requires Layer-2 acknowledge, then the incoming Frame shall be
acknowledged.

   - If the courses of action lead to different acknowledge types, then the Layer-2 acknowledge with
the highest priority shall be sent. The priorities shall be as indicated in Table 1.

**Table 1 – priority of Layer-2 Acknowledges**

**Acknowledge type** **Order**

**No acknowledge** lowest

**ACK** medium

**NACK, BUSY** highest

The acknowledgement of one course of action may influence the final messages handling in
another course of action. There are no requirements.

NOTE 3 If the Frame is negatively acknowledged by any course of events then it will be resent by the sender.
In that case, it may happen that the course(s) of events that have before concluded on a positive acknowledge and
have already handled the Frame, will not recognise the repeated Frame as a repetition. There are no requirements on
this.

EXAMPLE 1

If the incoming Frame should be acknowledged with ACK concerning the passing in the local stack but with BUSY
concerning the routing, then the BUSY shall effectively be sent.

Whether or not the Frame is then still passed in the local stack, is implementation specific.

EXAMPLE 2 If the incoming Frame should be acknowledged with BUSY concerning the passing in the local stack
but with NACK concerning the routing, then it is implementation dependent which one of both Acknowledge Frames will
effectively be sent.

NOTE 4 This is typically the combination of the conclusion concerning routing to the other Subnetwork and the
conclusion concerning passing the message also in the internal stack to the own management of the Coupler.

EXAMPLE 3 If the incoming message is not Routed, but passed in the internal stack, then it shall be acknowledged.

2.4.2.4.5 More detailed Routing Algorithms

2.4.2.4.5.1 Introduction and general requirements
For a Router there are five possible courses of action in response to a received LSDU.

   - ROUTE_DECREMENTED
The LSDU shall be routed from one Subnetwork (on the primary side or the secondary side) to
the second Subnetwork side (on the secondary side or the primary side) after the hop count
value is decremented. The LSDU shall only be routed to the second Subnetwork after it has
been positively acknowledged on the first Subnetwork.

|Acknowledge type|Order|
|---|---|
|**No acknowledge **|lowest|
|**ACK**|medium|
|**NACK, BUSY**|highest|


-----

   - ROUTE_LAST

    - The LSDU shall be routed from the first Subnetwork to the second Subnetwork.

    - If the medium of the second Subnetwork has a hop count then this hop count value shall be
set to zero.

    - If the medium of the second Subnetwork has a route last flag, then this flag shall be set.

    - The telegram shall be acknowledged according to the Data Link Layer specifications of the
medium of the first Subnetwork and then the LSDU shall be routed to the second
Subnetwork.

   - FORWARD_LOCALLY
The LSDU shall be processed to an NSDU and given to the local Network Layer User after it
has been acknowledged positively on the Subnetwork from which it has arrived.

   - IGNORE_TOTALLY
The LSDU shall be ignored; no acknowledgment shall be sent back to the originator of the
LSDU.

   - IGNORE_ACKED

    - The Network Layer shall ignore the LSDU and shall not route it.

    - The normal Data Link Layer of the Coupler however still applies. If the Coupler is
addressed in the communication[ 1)] and if the communication medium on the Subnetwork on
which the LSDU arrives supports Layer-2 acknowledge, then the Coupler shall
acknowledge the Frame.

    - This Layer-2 behaviour shall be independent of the Routing conclusion; in particular, the
decision to route or not the message does not impact on the type of acknowledge (in case of
TP1: no acknowledge, ACK, NACK or BUSY).

    - If the Layer-2 concludes on NACK, then it will not pass the message for possible routing to
Layer-3, so, there will be no routing conclusion like IGNORE_ACKED.

    - It is however recommended that if Layer-3 concludes on IGNORE_ACKED that Layer-2
does not acknowledge with BUSY[ 2)].

   - ROUTE_INITIAL

    - The LSDU shall be routed from the first Subnetwork to the second Subnetwork.

    - If the Medium of the second Subnetwork has a hop count then this hop count value shall be
set as follows.

 If there are no further Parameters, it shall be set to 7.

 If there are further Parameters (standard – or implementation specific), then the hop
count shall be set according to the parameter settings.

EXAMPLE 4 In mask 2920h, the Parameter PID_HOP_COUNT in the Router Object of the
Primary Side applies.

    - If the Medium of the second Subnetwork has a route last flag, then this flag shall be cleared.

NOTE 5 ROUTE_INITIAL is so far only needed to route from Secondary Side RF to Primary Side any other
current KNX communication medium. There is no definition or use of this for when the medium on the second
Subnetwork would have a route last flag.

It shall be possible to parameterize the Router in such a way, that independent of the communication
mode and the hop count the Router always acknowledges any received telegram.

1) EXAMPLES: If the contained Group Address is in the Filter Table; if the Destination Address is an Individual
Address topologically on the other side of the Medium Interface; if the Frame is on broadcast communication
mode…
2) This is because – for this course of action – a possible repetition of the Frame will again be ignored and will thus
unnecessarily occupy the bus.


-----

A Router shall be a Line Coupler or a Backbone Coupler. This shall depend on its position in the
topology. This shall be reflected in the value of the Individual Address of the device. (The Individual
Address is specified in [02].)

♦ If used as Backbone Coupler

− Device Address: shall be 0
− Line Address: shall be 0
− Area Address: shall differ from 0

The Backbone Coupler shall separate the Backbone Line from the Main Line.

♦ If used as Line Coupler

− Device Address: shall be 0
− Line Address: shall differ from 0
− Area Address: shall differ from 0

The following clauses specify the routing algorithm for a Router, which can either be a Line Coupler or a
Backbone Coupler, depending on his position in the topology.

Abbreviations:

C hop count value contained in the N-protocol header

D low order octet of the Destination Address, i.e., Device Address part

G Group Address

SD low nibble of high order octet plus low order octet, i.e.,
Line Address + Device Address

Z high nibble of high order octet of the Destination Address, i.e., Area Address

ZS high order octet of the Destination Address, i.e., hierarchy information part:
Area Address + Line Address

2.4.2.4.5.2 Routing in case of a Group Destination Address

2.4.2.4.5.2.1 Routing conditions
Telegrams on point-to-multipoint connectionless communication mode with standard Group Addresses,
shall be routed or blocked from the Primary Side to the Secondary Side and vice versa, in function of the
following.

1. The value of the hop count or of the route last flag in the Telegram that is evaluated.
2. The Load State of the Device Object (see [05]).
3. Parameters of the Network Layer

1. Standard Parameters
2. Optional implementation specific Parameters

These parameters may allow the following:

            - generally block routing
            - generally route or
            - route according to the Filter Table
            - other routing directions.


-----

4. The Filter Table

1. The Load State machine of the Router Object of the Secondary Side

This Load State Machine is the Load State Machine of the Filter Table.
2. Parameters influencing the use of the Filter Table
3. The evaluation of the Filter Table.

It is Profile dependent which of these conditions are available.

For these telegrams on point-to-multipoint connectionless communication mode with standard Group
Addresses it shall via parameterization of the Coupler be possible to:

   - generally block routing,
   - generally route or
   - route according to the Filter Table.

2.4.2.4.5.2.2 Routing between media with a hop count

EXAMPLE 5 TP1/TP1, IP/TP1 and TP1/PL110

The standard routing shall be as follows.


**IF** routing condition = TRUE and 0h < C ≤ 7h **THEN ROUTE_DECREMENTED**


**ELSIF routing condition = TRUE and C = 0h** **THEN IGNORE_ACKED [3)]**
**ELSE** IGNORE_TOTALLY

The above applies regardless of whether the Coupler is used as a Backbone Coupler or a Line Coupler.

3) The ACK is sent by the Data Link Layer.


-----

The routing condition for a Group Address x shall be calculated as depicted in Figure 5.

START GA x

Device Object
LSM = loaded

yes no

Filter Table no
LSM = loaded

yes

Parameter
_Filter Table Use_ no
= TRUE?

yes

yes Filter Table evaluation no

= positive?

Routing_condition = TRUE Routing_condition = FALSE

**Figure 5 – Calculation of routing_condition (standard algorithm)**

Evaluate the standard - and implementation specific Coupler parameters
/* If the evaluation of the parameters does not already let conclude on the routing condition, */
/* so, if the routing condition is still unknown, then the evaluation shall be as follows. */
**IF routing condition = unknown THEN**
**IF Load State of the Device Object != Loaded THEN**
Routing Condition = FALSE
**ELSIF Load State of the Filter Table != Loaded THEN**
Routing Condition = FALSE
**ELSIF Parameter Filter Tabe Use = False THEN**
Routing Condition = FALSE
**ELSIF Filter Table evaluation = positive THEN**
routing condition = TRUE

**ELSE**
routing condition = FALSE

2.4.2.4.5.2.3 Routing between a medium with a hop count and a medium with a route last flag
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 6 TP1/RF


-----

The standard routing shall be as follows.

**Primary Side to Secondary Side**

**IF** routing condition = TRUE and 0h < C ≤ 7h **THEN ROUTE_LAST**
**ELSIF routing condition = TRUE and C = 0h** **THEN IGNORE_ACKED [4)]**
**ELSE** IGNORE_TOTALLY

**Secondary Side to Primary Side**

**IF** routing condition = TRUE and route last = 0 **THEN ROUTE_INITIAL**
**ELSIF routing condition = TRUE and route last = 1** **THEN IGNORE_ACKED [5)]**
**ELSE** IGNORE_TOTALLY

The above applies regardless of whether the Coupler is used as a Backbone Coupler or a Line Coupler.

The routing condition shall be as specified for routing between media with a hop count: see Figure 5

The routing condition for a Group Address x shall be calculated as depicted in 0 (Figure 5 and following
pseudo code).

2.4.2.4.5.3 Routing in case of an LTE Address
Telegrams on point-to-multipoint connectionless communication mode with LTE Group Addresses shall
be routed like standard Group Addresses as specified in 0. this is, it shall differentiate on the Secondary
Side between a medium with a hop count and a medium with a route last flag, with the following
differences.

- The “routing condition” shall be calculated by evaluating the LTE Address Routing Table
(clause 4.6.4 in [05]) instead of the Filter Table.

- This Load State Machine of the LTE Address Routing Table shall be evaluated instead of the Load
State Machine of the Filter Table.

- The parameter “Filter Table Use” (PID_FILTER_TABLE_USE, see [05]) shall not affect the
evaluation of the LTE Address Routing Table. The Property PID_LTE_ROUTESELECT (see [05])
can be set to result in the same effect.

2.4.2.4.5.4 Routing in case of an Individual Destination Address: Line Coupler

2.4.2.4.5.4.1 Introduction
Depending on parameterization of the Line Coupler, Telegrams on point-to-point connectionless - or
connection-oriented communication mode shall be routed or blocked from the Main Line to the Line and
vice versa. The routing can be summarized as follows.

4) The Acknowledge is sent by the Data Link Layer.
5) The Acknowledge is sent by the Data Link Layer, depending on the indications in the handled Frame and the
configuration of the Coupler.
EXAMPLE It may be that the TP1/RF Media Coupler is configured to acknowledge Frames for KNX RF
Multi.


-----

2.4.2.4.5.4.2 Main Line to Line Routing

_2.4.2.4.5.4.2.1 Routing between media with a hop count_

EXAMPLE 7 TP1/TP1, IP/TP1 and TP1/PL110

**IF** ZS = own Subnetwork Address THEN
**IF D = 00h THEN FORWARD_LOCALLY**
**ELSE**

**IF** 0h < C ≤ 7h **THEN ROUTE_DECREMENTED**
**ELSE IGNORE_ACKED**
**ELSE IGNORE_TOTALLY**

START ZS

ZS = own

no IGNORE_TOTALLY

SNA ?

yes

D = 00 ? yes FORWARD_LOCALLY

no

0 < C ≤ 7 ? yes ROUTE_DECREMENTED

no

IGNORE_ACKED

**Figure 6 – Line Coupler – Routing of point-to-point messages**
**from Main Line to Line (standard algorithm)**

_2.4.2.4.5.4.2.2 Routing between a medium with a hop count and a medium with a route last flag_
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 8 TP1/RF

**IF** ZS = own Subnetwork Address THEN
**IF D = 00h THEN FORWARD_LOCALLY**
**ELSE**

**IF** 0h < C ≤ 7h **THEN ROUTE_LAST**
**ELSE IGNORE_ACKED**
**ELSE IGNORE_TOTALLY**


IGNORE_TOTALLY


FORWARD_LOCALLY


ZS = own

SNA ?


0 < C ≤ 7 ?


yes


no


yes


-----

IGNORE_TOTALLY


FORWARD_LOCALLY


IGNORE_ACKED


ZS = own

SNA ?


0 < C ≤ 7 ?


START ZS


no


no


no


**Figure 7 – Line Coupler – Routing of point-to-point messages**
**from Main Line to Line (standard algorithm)**

2.4.2.4.5.4.3 Line to Main Line Routing

_2.4.2.4.5.4.3.1 Routing between media with a hop count_

EXAMPLE 9 TP1/TP1, IP/TP1 and TP1/PL110

START ZS

ZS = own

yes no

SNA ?

D = 00 ? 0 < C ≤ 7 ?

yes no no

FORWARD_LOCALLY IGNORE_TOTALLY IGNORE_ACKED

**Figure 8 – Line Coupler – Routing of point-to-point messages**
**from Line to Main Line (standard algorithm)**


ROUTE_DECREMENTED


IGNORE_ACKED


FORWARD_LOCALLY


D = 00 ?


D = 00 ?


yes


yes


no


yes


no


-----

_2.4.2.4.5.4.3.2 Routing between a medium with a hop count and a medium with a route last flag_
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 10 TP1/RF

NOTE 6 This is applicable for the following existing Coupler models:

      - TP1/RF Coupler

**IF** ZS = own Subnetwork Address THEN
**IF D = 00h** **THEN FORWARD_LOCALLY**
**ELSE IGNORE_TOTALLY**
**ELSE**
**IF** route last = 1 **THEN IGNORE_ACKED**
**ELSE ROUTE_INITIAL**

START ZS

yes ZS = own SNA ? no

FORWARD_LOCALLY yes D = 00 ? RL = 1? yes IGNORE_ACKED

no no

IGNORE_TOTALLY ROUTE_INITIAL

**Figure 9 – Line Coupler – Routing of point-to-point messages**
**from Line to Main Line (standard algorithm)**

2.4.2.4.5.5 Routing in case of an Individual Destination Address: Backbone Coupler

2.4.2.4.5.5.1 Backbone Line to Main Line Routing

_2.4.2.4.5.5.1.1 Routing between media with a hop count_

EXAMPLE 11 TP1/TP1, IP/TP1 and TP1/PL110

**if** Z = own Area Address then
**if** SD <> 00h then
**if** 0h < C ≤ 7h **then ROUTE_DECREMENTED**
**else** IGNORE_ACKED
**else FORWARD_LOCALLY**
**else** IGNORE_TOTALLY


-----

IGNORE_TOTALLY


ROUTE_DECREMENTED


Z = own Area

Address?


0 < C ≤ 7 ?


yes


yes


yes


**Figure 10 – Backbone Coupler – Routing of point-to-point messages**
**from Backbone Line to Main Line (standard algorithm)**

_2.4.2.4.5.5.1.2 Routing between a medium with a hop count and a medium with a route last flag_
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 12 TP1/RF

**IF** Z = own Area Address THEN
**IF** SD <> 00h THEN

**IF** 0h < C ≤ 7h **THEN ROUTE_LAST**
**ELSE IGNORE_ACKED**
**ELSE FORWARD_LOCALLY**
**ELSE** IGNORE_TOTALLY


FORWARD_LOCALLY


SD = 00 ?


no


no


-----

**Figure 11 – Backbone Coupler – Routing of point-to-point messages**
**from Backbone Line to Main Line (standard algorithm)**

2.4.2.4.5.5.2 Main Line to Backbone Routing

_2.4.2.4.5.5.2.1 Routing between media with a hop count_

EXAMPLE 13 TP1/TP1, IP/TP1 and TP1/PL110

**IF** Z <> own Area Address THEN
IF 0h < C ≤ 7h **THEN ROUTE_DECREMENTED**
**ELSE IGNORE_ACKED**
**ELSEIF SD = 00h THEN FORWARD_LOCALLY**
**ELSE IGNORE_TOTALLY**


-----

ROUTE_DECREMENTED


IGNORE_ACKED


Z = own Area

Address?


0 < C ≤ 7 ?


no


yes


yes


**Figure 12 – Backbone Coupler – Routing of point-to-point messages**
**from Main Line to Backbone Line (standard algorithm)**

_2.4.2.4.5.5.2.2 Routing between a medium with a hop count and a medium with a route last flag_
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 14 TP1/RF

**IF** Z <> own Area Address THEN
**IF** route last = 1 **THEN IGNORE_ACKED**
**ELSEIF** ROUTE_INITIAL
**ELSEIF SD = 00h THEN FORWARD_LOCALLY**
**ELSE IGNORE_TOTALLY**

START Z

no Z <> own Area yes

Address ?

FORWARD_LOCALLY yes SD = 00 ? RL = 1 ? yes IGNORE_ACKED

no no

IGNORE_TOTALLY ROUTE_INITIAL

**Figure 13 – Backbone Coupler – Routing of point-to-point messages**
**from Main Line to Backbone Line (standard algorithm)**


IGNORE_TOTALLY


SD = 00 ?


no


yes


-----

2.4.2.4.5.6 Routing in case of a Broadcast Destination Address

2.4.2.4.5.6.1 Handling of unknown APCIs received in broadcast communication mode
If on a connection (Primary Side or Secondary Side) that does not support system broadcast
communication mode, a message is received on broadcast communication mode with an unknown APCI,
then this APCI shall further be considered as a broadcast APCI and not as a system broadcast APCI.
Please also refer to the indication “Unknown APCIs” in Table 2.

2.4.2.4.5.6.2 Routing between closed media with a hop count

EXAMPLE 15 TP1/TP1, IP/TP1

The following requirements shall apply for a Line Coupler as well as for a backbone Coupler and for the
direction from Primary Side to Secondary Side as well as from Secondary Side to Primary Side.

/* This concerns the routing of the message. */
**IF 0h < C ≤ 7h then ROUTE_DECREMENTED**
**ELSE IGNORE_ACKED**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

START

0 < C ≤ 7 ? yes ROUTE_DECREMENTED

no

IGNORE_ACKED

FORWARD_LOCALLY

**Figure 14 – Routing of broadcast messages**
**from a closed medium to a closed medium (standard algorithm)**

2.4.2.4.5.6.3 Routing between a closed medium with a hop count and an open medium with a hop count
The Primary Side is a closed medium with a hop count and the Secondary Side is an open medium with a
hop count.

EXAMPLE 16 TP1/PL110

_2.4.2.4.5.6.3.1 Introduction_
Only the case is specified with the open medium on the Secondary Side. The case with the open medium
on the Primary Side is not specified.


IGNORE_ACKED


FORWARD_LOCALLY


START


no


-----

_2.4.2.4.5.6.3.2 Primary Side to Secondary Side_
**Routing algorithm**

The routing of broadcast services shall be the same as the routing of broadcast services specified between
closed media in 2.4.2.4.5.6.2 “Routing between closed media with a hop count”.

**Communication mode used on PL110**

If according to the routing algorithm a broadcast service is routed on PL110, then on PL110 always the
broadcast communication mode shall be used; system broadcast communication mode shall not be used.

_2.4.2.4.5.6.3.3 Secondary Side to Primary Side_
**Routing algorithm**

The routing of broadcast services shall the same as the routing of broadcast services specified between
closed media in 2.4.2.4.5.6.2 “Routing between closed media with a hop count”.

2.4.2.4.5.6.4 Routing between a closed medium with hop count and an open medium with route last flag
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 17 TP1/RF

_2.4.2.4.5.6.4.1 Introduction_
The routing of broadcast services between a closed medium with hop count and an open medium with
route last flag (e.g. TP1/RF) shall be similar as the routing of broadcast messages between a closed
medium with hop count and an open medium with hop count (e.g. TP1/RF). See 2.4.2.4.5.6.3.

_2.4.2.4.5.6.4.2 From Primary Side to Secondary Side_

EXAMPLE 18 From TP1 to RF

**Routing algorithm**

The routing of broadcast services shall the same as the routing of broadcast services specified between
closed media in 2.4.2.4.5.6.2 “Routing between closed media with a hop count”.

/* This concerns the routing of the message. */
**ELSIF 0h < C ≤ 7h then ROUTE_LAST[ 6)]**
**ELSE IGNORE_ACKED**
**ENDIF**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

**Communication mode used on the open medium with the route last flag**

EXAMPLE 19 on RF

If according to the routing algorithm a broadcast service is routed on the open medium, then on the open
medium always the broadcast communication mode shall be used; system broadcast communication
mode shall not be used.


-----

_2.4.2.4.5.6.4.3 From Secondary Side to Primary Side_

EXAMPLE 20 From RF to TP1

**Routing algorithm**

/* This concerns the routing of the message. */
**IF route last = 1 THEN IGNORE_ACKED**
**ELSE ROUTE_INITIAL**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

2.4.2.4.5.7 Routing of system broadcast services

2.4.2.4.5.7.1 General
**Definition**

System Broadcast services are the AL-services that are marked with “yes” in Table 2.

**Table 2 – AL-service dependent use of broadcast – or system broadcast communication mode**

**Abbreviations**

This indicates which communication mode shall be used on the open medium.

SBC: System Broadcast communication mode

BC: Broadcast communication mode

**Legend**

P: It shall depend on Parameter setting (PID_PL110_SBC_CONTROL or PID_RF_SBC_CONTROL)
which communication mode shall be used.

X: This communication mode is not allowed and shall not be used.

M: This communication mode is mandatory and shall be used.

|APCI|SBC<br>service?|Open Medium|Col4|
|---|---|---|---|
|**APCI**|**SBC**<br>**service?**|**SBC**|**BC**|
|APCI_DomainAddress_Write|yes|P|P|
|APCI_DomainAddress_Read|yes|P|P|
|APCI_DomainAddress_Response|yes|P|P|
|APCI_DomainAddressSelective_Read|yes|P|P|
|APCI_DomainAddressSerialNumber_Read|yes|P|P|
|APCI_DomainAddressSerialNumber_Response|yes|P|P|
|APCI_DomainAddressSerialNumber_Write|yes|P|P|
|APCI_IndividualAddress_Write|no|X|M|
|APCI_IndividualAddress_Read|no|X|M|
|APCI_IndividualAddress_Response|no|X|M|
|APCI_NetworkParameter_Write|no b|X|M|
|APCI_NetworkParameter_Read|no|X|M|
|APCI_NetworkParameter_Response|no|X|M|
|APCI_IndividualAddressSerialNumber_Read|no|X|M|
|APCI_IndividualAddressSerialNumber_Response|no|X|M|
|APCI_IndividualAddressSerialNumber_Write|no|X|M|


-----

_c_ _Unknown or unsupported APCIs shall thus be handled as broadcast services and not as system_
_broadcast services. See 2.4.2.4.5.6.1._

**Routing and communication mode**

The below clauses only specify the Network Layer routing algorithm and do not consider the
communication mode if routing the message: the communication mode shall be according to the value of
PID_PL110_SBC_CONTROL or PID_RF_SBC_CONTROL.

KNX closed media do not need the system broadcast communication mode and only support the
broadcast communication mode. If a message is routed or sent onto a closed medium, then always only
broadcast communication mode can and shall be used.

2.4.2.4.5.7.2 Routing between closed media that have a hop count

EXAMPLE 21 TP1/TP1 and IP/TP1

Closed media do not have special requirements concerning the handling of system broadcast services.
These services shall be handled using broadcast communication.

The following requirements shall apply for a Line Coupler as well as for a backbone Coupler and for the
direction from Primary Side to Secondary Side as well as from Secondary Side to Primary Side.

/* This concerns the routing of the message. */
**ELSIF 0h < C ≤ 7h THEN ROUTE_DECREMENTED**
**ELSE IGNORE_ACKED**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

|APCI|SBC<br>service?|Open Medium|Col4|
|---|---|---|---|
|**APCI**|**SBC**<br>**service?**|**SBC**|**BC**|
|APCI_SystemNetworkParameter_Read|yes|P|P|
|APCI_SystemNetworkParameter_Response|yes|P|P|
|APCI_SystemNetworkParameter_Write|yes|P|P|
|APCI_SystemNetworkParameter_InfoReport a|yes|P|P|
|Unknown APCIsc|unknown|X|M|
|_a _<br>_These APCIs are not yet specified. The Media Coupler shall however handle them according to this_<br>_table._<br>_b _<br>_Implementations exist that use A_NetworkParameter_Write on system broadcast communication_<br>_mode. This service however remains a broadcast service and the Coupler shall handle it as such,_<br>_regardless of the effective communication mode used in received messages._<br>_c _<br>_Unknown or unsupported APCIs shall thus be handled as broadcast services and not as system_<br>_broadcast services. See 2.4.2.4.5.6.1._|_a _<br>_These APCIs are not yet specified. The Media Coupler shall however handle them according to this_<br>_table._<br>_b _<br>_Implementations exist that use A_NetworkParameter_Write on system broadcast communication_<br>_mode. This service however remains a broadcast service and the Coupler shall handle it as such,_<br>_regardless of the effective communication mode used in received messages._<br>_c _<br>_Unknown or unsupported APCIs shall thus be handled as broadcast services and not as system_<br>_broadcast services. See 2.4.2.4.5.6.1._|_a _<br>_These APCIs are not yet specified. The Media Coupler shall however handle them according to this_<br>_table._<br>_b _<br>_Implementations exist that use A_NetworkParameter_Write on system broadcast communication_<br>_mode. This service however remains a broadcast service and the Coupler shall handle it as such,_<br>_regardless of the effective communication mode used in received messages._<br>_c _<br>_Unknown or unsupported APCIs shall thus be handled as broadcast services and not as system_<br>_broadcast services. See 2.4.2.4.5.6.1._|_a _<br>_These APCIs are not yet specified. The Media Coupler shall however handle them according to this_<br>_table._<br>_b _<br>_Implementations exist that use A_NetworkParameter_Write on system broadcast communication_<br>_mode. This service however remains a broadcast service and the Coupler shall handle it as such,_<br>_regardless of the effective communication mode used in received messages._<br>_c _<br>_Unknown or unsupported APCIs shall thus be handled as broadcast services and not as system_<br>_broadcast services. See 2.4.2.4.5.6.1._|


-----

IGNORE_ACKED


FORWARD_LOCALLY


START


no


**Figure 15 – Routing of broadcast messages**
**from a closed medium to a closed medium (standard algorithm)**

2.4.2.4.5.7.3 Routing between a closed medium with a hop count and an open medium with a hop count
The Primary Side is a closed medium with a hop count and the secondary side is an open medium also
with a hop count.

EXAMPLE 22 Between TP1 and PL110

_2.4.2.4.5.7.3.1 From Primary Side to Secondary Side_

EXAMPLE 23 From TP1 to PL110

/* This concerns the routing of the message. */
**IF PID_PL110_SBC_CONTROL = disable THEN IGNORE_ACKED**

**ELSIF 0h < C ≤ 7h THEN ROUTE_LAST[ 6)]**
**ELSE IGNORE_ACKED**
**ENDIF**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

6) Additionally, the communication mode shall be used according to the value of PID_RF_SBC_CONTROL
respectively PID_PL110_SBC_CONTROL.


ROUTE_DECREMENTED


yes


-----

|IGNORE ACKED<br>_|Col2|
|---|---|


ROUTE_LAST


IGNORE_ACKED


SBC=
disable?


yes


yes


**Figure 16 – Routing of system broadcast messages**
**TP1 to PL110**
**(standard algorithm)**

- If the message is routed from TP1 to PL110 then the communication mode that shall be
used shall depend on the APCI contained in the message and possibly on the Parameter
PIFD_PL110_SBC_CONTROL: see [05].

_2.4.2.4.5.7.3.2 From Secondary Side to Primary Side_

EXAMPLE 24 From PL110 to TP1

/* This concerns the routing of the message. */
/* The Parameter PID_PL110_SBC_CONTROL shall enable or disable the routing. */
/* to control the routing of system broadcast messages. This is evaluated firstly. */
/* The APCI for system broadcast are the APCIs listed in Table 2 for system broadcast. */
**IF** PID_PL110_SBC_CONTROL = disable THEN IGNORE_ACKED;
**ELSIF 0h < C ≤ 7h** **THEN ROUTE_DECREMENTED**
**ENDIF**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY


FORWARD_LOCALLY


START


no


-----

|IGNORE ACKED<br>_|Col2|
|---|---|


ROUTE_DECEMENTED


IGNORE_ACKED


SBC=
disable?


yes


yes


**Figure 17 – Routing of system broadcast messages**
**from PL110 to TP1**
**(standard algorithm)**

2.4.2.4.5.7.4 Routing between a closed medium with a hop count and an open medium with a route last
flag
The medium on the Primary Side has a hop count and the medium on the Secondary Side has a route last
flag.

EXAMPLE 25 Between TP1 and RF

_2.4.2.4.5.7.4.1 From Primary Side to Secondary Side_

EXAMPLE 26 From TP1 to RF

/* This concerns the routing of the message. */
/* The Parameter PID_RF_SBC_CONTROL shall enable or disable the routing; */
**/* it shall also control the communication mode: “broadcast” or “system broadcast”. */**
/* The APCI for system broadcast are the APCIs listed in Table 2 for system broadcast. */
**IF PID_RF_SBC_CONTROL = disable THEN IGNORE_ACKED**

**ELSIF 0h < C ≤ 7h THEN ROUTE_LAST[ 7)]**
**ELSE IGNORED_ACKED**
**ENDIF**

/* The Coupler shall also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

7) Additionally, the communication mode shall be used according the value of PID_RF_SBC_CONTROL.


FORWARD_LOCALLY


START any DA


no


-----

_2.4.2.4.5.7.4.2 From Secondary Side to Primary Side_

EXAMPLE 27 From RF to TP1

/* This concerns the routing of the message. */
/* The Parameter PID_RF_SBC_CONTROL shall enable or disable the routing; */
**/* the communication mode shall always be “Broadcast”. */**
/* The APCI for system broadcast are the APCIs listed in Table 2 for system broadcast. */
**IF** PID_RF_SBC_CONTROL = disable THEN IGNORE_ACKED;
**ELSIF route last = 0** **THEN ROUTE_INITIAL**
**ELSE IGNORE_ACKED**
**ENDIF**

/* The Coupler also pass the message in its internal stack to its own management. */
FORWARD_LOCALLY

2.4.2.4.5.7.5 Routing in case of System Broadcast Destination Address
– KNXnet/IP Router IP/TP1

_2.4.2.4.5.7.5.1 IP System Broadcast Routing Mode_
The handling of system broadcasts shall depend on the “IP System Broadcast Routing Mode” of the
KNXnet/IP Router; see PID_IP_SBC_CONTROL in [05].

_2.4.2.4.5.7.5.2 Routing from TP1 to IP_
If the IP System Broadcast Routing Mode of a KNXnet/IP Router has the value “Enable”, received TP1
broadcast Frames matching one of the following rules shall be forwarded as IP System Broadcast Frames
on the IP side instead of the normal routing handling.

   - A_SystemNetworkParameter_Read-PDU with object_type = 0 (Device Object), PID = 11
(PID_SERIAL_NUMBER) and operand = 01h.

   - A_DomainAddressSerialNumber_Write-PDU with 4 octet Domain Address

   - S-A_Sync_Request-PDU with the SBC bit in the Security Control Field (SCF) equal to 1 and
the tool access (T) bit in the Security Control Field (SCF) equal to 1.

   - S-A_Data-PDU with authentication and confidentiality and with the SBC bit in the Security
Control Field (SCF) equal to 1 and the tool access (T) bit in the Security Control Field (SCF)
equal to 1.

NOTE 7 See [04] for the definition of the S-A_Sync and S-A_Data PDUs and the Security Control Field.
Even if secure routing is enabled, this ROUTING_SYSTEM_BROADCAST shall not be wrapped in a
SECURE_WRAPPER.

NOTE 8 The S-A_Data-PDU is meant to transport an A_DomainAddressSerialNumber_Write-PDU encrypted
with the Tool Key or FDSK of the MaS, but the KNXnet/IP Router can of course not look into the encrypted PDU to
evaluate this.
Even if the KNXnet/IP Router supports only IP system broadcast but does not support security itself it
still shall handle the indicated S-A_Sync_Request-PDUs and S-A_Data-PDUs as specified above.

If the IP System Broadcast Routing Mode of a KNXnet/IP Router does not have the value “Enable”, or if
a received TP1 broadcast Frame does not match the above rules, it shall be forwarded to IP according to
the normal routing handling.


-----

_2.4.2.4.5.7.5.3 Routing from IP to TP1_
If the IP System Broadcast Routing Mode of the KNXnet/IP Router has the value “Enable”, a received IP
_System Broadcast Frame with the contained cEMI message matching one of the following rules shall be_
forwarded to TP1 as broadcast.

   - A_SystemNetworkParameter_Response-PDU with object_type = 0 (Device Object), PID = 11
(PID_SERIAL_NUMBER) and operand = 01h and the tool access (T) bit in the Security
Control Field (SCF) equal to 1.

   - S-A_Sync_Response-PDU with the SBC bit in the Security Control Field (SCF) equal to 1 and
the tool access (T) bit in the Security Control Field (SCF) equal to 1.
If the IP System Broadcast Routing Mode of a KNXnet/IP Router does not have the value “Enable”, or if
a received IP System Broadcast Frame does not match the above rules, it shall not be forwarded to TP1.

_2.4.2.4.5.7.5.4 hop_count_
If routing of broadcast or system broadcast frames is blocked by the IP System Broadcast Routing Mode
or by an application defined parameter, the router shall not apply any exception to this blocking for
hop_count equal to 7.

_2.4.2.4.5.7.5.5 Handling in the KNXnet/IP Router’s own MaS stack_
If the IP System Broadcast Routing Mode of a KNXnet/IP Router does not have the value “Enable”, a
received IP System Broadcast Frame from the IP side shall – in addition to the routing behaviour as
specified in 2.4.2.4.5.7.5.3 – be handled by the KNXnet/IP Router in the same way as by an IP end device
([01]).

NOTE 9 This allows to load the multicast address and maybe the Backbone Key of a “far” KNXnet/IP Router
via another KNXnet/IP Router, e.g. in a remote access scenario. When loading the “near” KNXnet/IP Router from the
TP1 side, no system broadcast is required, the MaC can load the multicast address and the Backbone Key via pointto-point communication.


-----

