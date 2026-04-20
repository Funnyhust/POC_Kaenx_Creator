KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

# Application Note 192/18 v06

**Title:** **Coupler security extensions**

**Status:** Approved Standard

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2022.01.04

**Subject:** Extensions for the Coupler for Security Proxy functionality.

**Documents:** **_Modified_**

[01] Chapter 3/3/3 “Network Layer” v01.01.02 of 2013.10.28

[02] Chapter 3/4/1 “Application Interface Layer” v01.01.02

[03] Chapter 3/5/1 “Resources” v01.09.03 AS of 2013.12.10

[04] Volume 6 “Profiles” v01.13.02 of 2013.10.28

[05] AN158 “KNX Data Security” v07 AS of 2019.08.20

**_Referred_**

[06] AN161 “Coupler Model 2.0” v05 AS of 2015.11.05

[07] AN189 “New routing algorithm for hc 7” v03 AS of 2018.03.27

[08] AN183 “KNXnet-IP System Broadcast” v03 AS of 2017.10.24

[09] AN193 “Access Policies” v04 AS of 2019.04.18

[10] AN195 “Segment Coupler” v03 AS of 2021.09.14

**Document updates**

**Version** **Date** **Modifications**
TFIP010-01 2014.04.29 Initial proposal to TF IP/Secure
KSG571-02 2016.06.20 Revised in view of changes to Data Security
Added options to restrict forwarding of plain Frames
Changed document title
KSG571-03 2016.07.04 Integrated conclusions of class meeting “Security”
KSG571-04 2016.12.08 Integrated input from Mr. Aymonin
Added support for translating connection-less point-to-point
communication
Added support for LTE Mode
KSG571-04 2016.12.12 Integrated conclusions of class meeting “Security”
KSG571-05 2016.12.14 Removed unicast proxy functionality again as concluded by
KSG Core.
Added configuration procedures
Security Routing control settings in ETS
KSG571-07 2017.06.21 Use new access description format
KSG571-08 2017.11.28 Integrated conclusions from KSG Core meeting
2017.09.27/28
KSG571-09 2018.01.15 Integrated conclusions from KSG Core meeting 2017.12.13

Savedate: Filename: page 1 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|TFIP010-01|2014.04.29|Initial proposal to TF IP/Secure|
|<br>KSG571-02|<br>2016.06.20|<br>Revised in view of changes to Data Security<br>Added options to restrict forwarding of plain Frames<br>Changed document title|
|KSG571-03|2016.07.04|<br>Integrated conclusions of class meeting“Security”|
|<br>KSG571-04|<br>2016.12.08|<br>Integrated input from Mr. Aymonin<br>Added support for translating connection-less point-to-point<br>communication<br>Added support for LTE Mode|
|KSG571-04|2016.12.12|Integrated conclusions of class meeting“Security”|
|<br>KSG571-05|<br>2016.12.14|<br>Removed unicast proxy functionality again as concluded by<br>KSG Core.<br>Added configuration procedures<br>Security Routing control settings in ETS|
|KSG571-07|2017.06.21|<br>Use new access description format|
|KSG571-08|2017.11.28|Integrated conclusions from KSG Core meeting<br>2017.09.27/28|
|KSG571-09|2018.01.15|Integrated conclusions from KSG Core meeting 2017.12.13|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Version** **Date** **Modifications**
KSG571-09.02 2018.01.26 Formulated one option for Temporary Unicast White List;
see 2.3.1.3
KSG571-09.03 2018.02.07 Further worked out temporary unicast enabling
KSG571-09.04 2018.04.23 Added Temporary Unicast White List sample code
(informative annex)
KSG571-10 2018.04.30 Finished support for LTE Mode
Slightly modified sample code in appendix
Prepared for RfV.
AN192 v01 2018.05.03 Preparation of the Draft Proposal.
KSG571-11 2018.06.06 Integrated voting comments
KSG571-12 2018.06.28 Integrated conclusions from KSG Core meeting 2018.06.13
KSG571-13 2018.07.06 Integrated conclusions from KSG Class meeting 2018.07.05
KSG571-13.01 2018.07.16 Fixed two bad figure references
KSG571-13.02 2018.07.17 Fixed wrong PID numeric value in PID_BROADCAST_ROUTING_CONTROL section
AN192 v02 2018.07.29 Creation of the Draft for Voting.
KSG571-14.01 2019.06.18 - Inclusion of the resolution of comments from Final Voting

by KSG.
KSG571-14.02 2019.07.04 - Completion of the integration of the resolution of

comments.
KSG571-14.03 2019.07.04 - Inclusion of the further conclusions resulting from the

comments from ABB in the KSG Core meeting of
2019.06.04-05.
```
                o ReadServiceID added to

```
PID_UNICAST_ROUTING_CONTROL;
```
                o Source Address added to

```
PID_UNICAST_ROUTING_CONTROL.
KSG571-15.01 2019.07.30 - Update according the KSG Class “Security” online

meeting of 2019.07.04. (Change marked by “author”
“v15.01”.)
AN192 v03 2019.07.30 - Creation of the Draft for Voting v03.
KSG571-16.01 2019.09.30 - Accepted all preceding tracked changes.

                 - First proposal of resolution of comments from Final

Voting.
KSG571-17.01 2019.11.21 - Inclusion of the KSG resolution of comments from FV

from the KSG Core meeting of 2019.10.01-02.

               - As in comment Zennio 3 also added Master Reset
behaviour and KNX default value for PID_BROADCAST_ROUTING_CONTROL.
AN192 v4 2019.12.18 - Publication of the Approved Standard.
KSG571-18.01 2020.09.14 - Re-opened the Working Document based on AN192 v04.

Accepted all tracked changes.

                - Inclusion of the conclusions of the KSG Core meeting f

2020.03.25.

Savedate: Filename: page 2 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG571-09.02|2018.01.26|Formulated one option for Temporary Unicast White List;<br>see 2.3.1.3|
|KSG571-09.03|2018.02.07|Further worked out temporary unicast enabling|
|<br>KSG571-09.04|<br> 2018.04.23|<br>Added Temporary Unicast White List sample code<br>(informative annex)|
|KSG571-10|2018.04.30|<br>Finished support for LTE Mode<br>Slightly modified sample code in appendix<br>Prepared for RfV.|
|AN192 v01|2018.05.03|Preparation of the Draft Proposal.|
|<br>KSG571-11|<br>2018.06.06|<br>Integrated voting comments|
|KSG571-12|2018.06.28|Integrated conclusions from KSG Core meeting 2018.06.13|
|<br>KSG571-13|<br>2018.07.06|<br>Integrated conclusions from KSG Class meeting 2018.07.05|
|KSG571-13.01|2018.07.16|Fixed two bad figure references|
|<br>KSG571-13.02|<br> 2018.07.17|<br>Fixed wrong PID numeric value in PID_BROADCAST_-<br>ROUTINGCONTROL section|
|AN192 v02|2018.07.29|_<br>Creation of the Draft for Voting.|
|<br>KSG571-14.01|<br> 2019.06.18|<br>• Inclusion of the resolution of comments from Final Voting<br>by KSG.|
|KSG571-14.02|2019.07.04|<br>• Completion of the integration of the resolution of<br>comments.|
|KSG571-14.03|2019.07.04|<br>• Inclusion of the further conclusions resulting from the<br>comments from ABB in the KSG Core meeting of<br>2019.06.04-05.<br>`o` ReadServiceID added to<br>PID_UNICAST_ROUTING_CONTROL;<br>`o` Source Address added to<br>PIDUNICASTROUTINGCONTROL.|
|KSG571-15.01|2019.07.30|___<br>• Update according the KSG Class “Security” online<br>meeting of 2019.07.04. (Change marked by “author”<br>“v15.01”.)|
|AN192 v03|2019.07.30|<br>• Creation of the Draft for Voting v03.|
|KSG571-16.01|2019.09.30|<br>• Accepted all preceding tracked changes.<br>• First proposal of resolution of comments from Final<br>Voting.|
|KSG571-17.01|2019.11.21|• Inclusion of the KSG resolution of comments from FV<br>from the KSG Core meeting of 2019.10.01-02.<br>• As in comment Zennio 3 also added Master Reset<br>behaviour and KNX default value for PID_BROAD-<br>CASTROUTINGCONTROL.|
|AN192 v4|2019.12.18|__<br>• Publication of the Approved Standard.|
|KSG571-18.01|2020.09.14|<br>• Re-opened the Working Document based on AN192 v04.<br>Accepted all tracked changes.<br>• Inclusion of the conclusions of the KSG Core meeting f<br>2020.03.25.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Version** **Date** **Modifications**
KSG571-18.02 2020.09.30 - Inclusion of the conclusions of the KSG Core meeting o

2020.09.21.
```
                o PID_SECURITY_PROXY_INDIVIDUAL_ADDRESS_T

```
ABLE removed and replaced by
PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in
the Security Interface Object.
```
                o Handling of plain messages received where secure

```
would be expected: see here.
KSG571-19.01 2020.10.15 - Inclusion of the conclusions of the KSG Core meeting of

2020.10.05.
```
                o Reading PID_UNICAST_ROUTING_CONTROL with

```
absent IA results in E_SUCCESS now but with result
FALSE.
```
                o Clear indication of “secure message” in

```
PID_ROUTING_PLAIN;
KSG571-20.01 2020.10.30 - Inclusion of the conclusions of the KSG Core meeting of

2020.10.19.
```
                o PID_ROUTING_PLAIN: removed “Plain Multicast”
                o In 3.5.2.2 there was notion of “Plain Unicast

```
forwarding mode” instead of the “Unicast Mode” used
elsewhere. Same for “Plain Broadcast forwarding
mode”. Streamlined the wording to “Plain Unicast
forwarding mode” (idem for broadcast)
KSG571-21.02 2021.02.22 - Updated according to the conclusion of the KSG Core

meeting of 2021.02.08.
```
                o PID_ROUTING_PLAIN (PID 80) split up in

```
PID_PTP_CONFIG (PID 80) and PID_BC_CONFIG
(PID 82)
KSG571-22.01 2021.02.25 - Integration of the conclusions of the KSG Core meeting

of 2021.02.22.
```
                o PID_UNICAST_ROUTING_CONTROL renamed to

```
PID_PTP_ROUTING_TEMP.
PID_BROADCAST_ROUTING_CONTROL replaced
with PID_BC_ROUTING_TEMP
```
                o Indication on respect of configured GO Config flags:

```
see 2.2.3.
KSG571-23.01 2021.03.05 - Inclusion of the conclusions of the KSG Class “Security”

online meeting of 2021.03.01.
```
                o Replaced the instance of the Security Proxy Group

```
Key Table (PID_SECURITY_PROXY_GRP_KEY_TABLE) per Router Object instance with a single
instance and added the secure side indications.
KSG571-24.01 2021.03.19 - Inclusion of the conclusions of the KSG Core meeting of

2021.03.08.

                - Inclusion of the feedback by Mr Wichert on the Security
Proxy Zone Key Table.
```
                o Added Sec@Prim and Sec@Sec to the Security

```
Flags.

Savedate: Filename: page 3 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG571-18.02|2020.09.30|• Inclusion of the conclusions of the KSG Core meeting o<br>2020.09.21.<br>`o`  PID_SECURITY_PROXY_INDIVIDUAL_ADDRESS_T<br>ABLE removed and replaced by<br>PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in<br>the Security Interface Object.<br>`o` Handling of plain messages received where secure<br>would be expected: see here.|
|KSG571-19.01|2020.10.15|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2020.10.05.<br>`o` Reading PID_UNICAST_ROUTING_CONTROL with<br>absent IA results in E_SUCCESS now but with result<br>FALSE.<br>`o` Clear indication of “secure message” in<br>PIDROUTINGPLAIN;|
|KSG571-20.01|2020.10.30|__<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2020.10.19.<br>`o` PID_ROUTING_PLAIN: removed “Plain Multicast”<br>`o` In 3.5.2.2 there was notion of “Plain Unicast<br>forwarding mode” instead of the “Unicast Mode” used<br>elsewhere. Same for “Plain Broadcast forwarding<br>mode”. Streamlined the wording to “Plain Unicast<br>forwarding mode” (idem for broadcast)|
|KSG571-21.02|2021.02.22|<br>• Updated according to the conclusion of the KSG Core<br>meeting of 2021.02.08.<br>`o` PID_ROUTING_PLAIN (PID 80) split up in<br>PID_PTP_CONFIG (PID 80) and PID_BC_CONFIG<br>(PID 82)|
|KSG571-22.01|2021.02.25|<br>• Integration of the conclusions of the KSG Core meeting<br>of 2021.02.22.<br>`o` PID_UNICAST_ROUTING_CONTROL renamed to<br>PID_PTP_ROUTING_TEMP.<br>PID_BROADCAST_ROUTING_CONTROL replaced<br>with PID_BC_ROUTING_TEMP<br>`o` Indication on respect of configured GO Config flags:<br>see 2.2.3.|
|KSG571-23.01|2021.03.05|<br>• Inclusion of the conclusions of the KSG Class “Security”<br>online meeting of 2021.03.01.<br>`o` Replaced the instance of the Security Proxy Group<br>Key Table (PID_SECURITY_PROXY_GRP_KEY_-<br>TABLE) per Router Object instance with a single<br>instance and added the secure side indications.|
|KSG571-24.01|2021.03.19|• Inclusion of the conclusions of the KSG Core meeting of<br>2021.03.08.<br>• Inclusion of the feedback by Mr Wichert on the Security<br>Proxy Zone Key Table.<br>`o` Added Sec@Prim and Sec@Sec to the Security<br>Flags.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Version** **Date** **Modifications**
KSG571-25.01 2021.05.26 - Inclusion of the conclusions of the KSG Core meeting of

2021.03.22.
```
                o Indication on ETS consistency check of configuration

```
(3.5.2.2).
```
                o Verification and indication of Load State dependency

```
of discussed Properties.
```
                o 2.2.2.6: also indicated in the pseudo code that

```
Security Proxy only applies after the normal routing
accepts the message.
```
                o PID_PTP_CONFIG marking of reserved bits and

```
relation with “Application in a Coupler”.
KSG571-25.02 2021.07.08 - Inclusion of the conclusions of the KSG Core meeting of

2021.06.28.
`o` Clearer independency of routing and Security Proxy.
`o` Scope of PID_PTP_CONFIG: reuse in Coupler

Application.
```
                o PID_PTP_ROUTING_TEMP:

```
° Removed Retrigger from Write ServiceID01.
° Clearer minimal Temporary Unicast White Lists
requirement.
° Adaptation of Temporary Unicast White List example
to pseudo code.
° Terms User/Start Individual Address unified.
KSG571-26.01 2021.07.13 - Accepted all changes!

                 - Streamlining terminology White List”, “Unicast White List”
and “Temporary White List”.

                - First inclusion of the feedback by Mr Winnewisser.

                - Inclusion of the conclusions of the KSG Core meeting of
2021.07.12.
```
                o Updated Figure 7.
                o PID_PTP_ROUTING_TEMP: renamed

```
WriteServiceID 00h from “Add Temporary Unicast
White List” to “Add to Temporary Unicast White List”.
Also 2.2.2.3 had to be adapted!

Savedate: Filename: page 4 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG571-25.01|2021.05.26|• Inclusion of the conclusions of the KSG Core meeting of<br>2021.03.22.<br>`o` Indication on ETS consistency check of configuration<br>(3.5.2.2).<br>`o` Verification and indication of Load State dependency<br>of discussed Properties.<br>`o` 2.2.2.6: also indicated in the pseudo code that<br>Security Proxy only applies after the normal routing<br>accepts the message.<br>`o` PID_PTP_CONFIG marking of reserved bits and<br>relation with“Application in a Coupler”.|
|KSG571-25.02|2021.07.08|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.06.28.<br>`o` Clearer independency of routing and Security Proxy. <br>`o` Scope of PID_PTP_CONFIG: reuse in Coupler<br>Application. <br>`o` PID_PTP_ROUTING_TEMP:<br>° Removed Retrigger from Write ServiceID01. <br>° Clearer minimal Temporary Unicast White Lists<br>requirement. <br>° Adaptation of Temporary Unicast White List example<br>to pseudo code. <br>° Terms User/Start~~Individual~~Address unified.|
|KSG571-26.01|2021.07.13|• Accepted all changes!<br>• Streamlining terminology White List”, “Unicast White List”<br>and “Temporary White List”.<br>• First inclusion of the feedback by Mr Winnewisser.<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.07.12.<br>`o` Updated Figure 7.<br>`o` PID_PTP_ROUTING_TEMP: renamed<br>WriteServiceID 00h from “Add Temporary Unicast<br>White List” to “Add to Temporary Unicast White List”.<br>Also 2.2.2.3 had to be adapted!|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Version** **Date** **Modifications**
KSG571-27.01 2021.08.09 - Update according to the conclusions of the KSQG Core
meeting of 2021.08.09.
```
                o 2.2.1: Security Proxy also possible for Segment

```
Coupler.
```
                o Moved the definition of White List from clause 2.2.2.5

```
to clause 2.3.1.3.4 so that all format definitions of
White List are together at one place.
```
                o The definition of White List is extended, with

```
indications of inclusion of one Remaining Time and
one or more Ranges.
```
                o Added indication in clause 2.3.1.3.5.2 that revoking

```
means user Address, Remaining Time and all
Ranges.
```
                o 2.3.1.3.5.3: As above, extended the description of the

```
Success of the command with the meaning of one
Remaining Time and all Partner Address Ranges.
```
                o 2.3.1.3.6.1:

```
° Shifted the requirement for returning E_SUCCESS
out of the two bullets for not finding or finding the User
Address.
° Clearer, implementation independent specification of
the searching for the Partner Addresses.
```
                o 2.3.1.4.4.1: removed legacy indication of setting PIDs

```
individually (just above Figure 17).
```
                o 2.3.1.4.6:

```
° Made relation to routing parameters PID_IP_SBC_CONTROL and PID_RF_SBC_CONTROL clear.
° Removed E_SUCCESS_PERMANENTLY_ENABLED.
```
                o 2.3.1.5.6: merged the tables for PriSec and

```
SecPri in a single table.

                - Further changes.
```
                o Included the notion of Partner Addresses in Figure 7.

```
KSG571-28.01 2021.08.23 - Updated schemas: Figure 1.

                - Update according to the conclusions of the KSG Core
meeting of 2021.08.23.
```
                o Full redesign of PID_BC_ROUTING_TEMP.

```
Mandatory now in both Router Objects.
```
                o PID_PTP_CONFIG and PID_BC_CONFIG now

```
harmonized consider transmission on the medium.

Savedate: Filename: page 5 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG571-27.01|2021.08.09|• <br>Update according to the conclusions of the KSQG Core<br>meeting of 2021.08.09.<br>`o` 2.2.1: Security Proxy also possible for Segment<br>Coupler.<br>`o` Moved the definition of White List from clause 2.2.2.5<br>to clause 2.3.1.3.4 so that all format definitions of<br>White List are together at one place.<br>`o` The definition of White List is extended, with<br>indications of inclusion of one Remaining Time and<br>one or more Ranges.<br>`o` Added indication in clause 2.3.1.3.5.2 that revoking<br>means user Address, Remaining Time and all<br>Ranges.<br>`o` 2.3.1.3.5.3: As above, extended the description of the<br>Success of the command with the meaning of one<br>Remaining Time and all Partner Address Ranges.<br>`o` 2.3.1.3.6.1:<br>° Shifted the requirement for returning E_SUCCESS<br>out of the two bullets for not finding or finding the User<br>Address.<br>° Clearer, implementation independent specification of<br>the searching for the Partner Addresses.<br>`o` 2.3.1.4.4.1: removed legacy indication of setting PIDs<br>individually (just above Figure 17).<br>`o` 2.3.1.4.6:<br>° Made relation to routing parameters PID_IP_SBC_-<br>CONTROL and PID_RF_SBC_CONTROL clear.<br>° Removed E_SUCCESS_PERMANENTLY_-<br>ENABLED.<br>`o` 2.3.1.5.6: merged the tables for PriSec and<br>SecPri in a single table.<br>• <br>Further changes.<br>`o` Included the notion of Partner Addresses in Figure 7.|
|KSG571-28.01|2021.08.23|• Updated schemas: Figure 1.<br>• Update according to the conclusions of the KSG Core<br>meeting of 2021.08.23.<br>`o` Full redesign ofPID_BC_ROUTING_TEMP. <br>Mandatory now in both Router Objects. <br>`o` PID_PTP_CONFIG and PID_BC_CONFIG now<br>harmonized consider**transmission** on the medium.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Version** **Date** **Modifications**
KSG571-29.01 2021.09.09 - Inclusion of the KSG review results prior to renewed Final

Voting.
`o` Precise indication on matching with SAI.
```
                o Time of coming into effect and restart dependency of

```
PID_BC_CONFIG, PID_PTP_CONFIG,
PID_SECURITY_PROXY_GRP_KEY_TABLE.
```
                o Changed Master Reset behaviour for

```
PID_PTP_CONFIG and PID_BC_CONFIG.
`o` Small correction of PID value in BC routing.
`o` Remaining Time handling if Count = 0.
`o` Even more clear handing of multiple Add-commands

and additional indication that one White List ≡ 1 User
Address.
`o` PID_BC_ROUTING_TEMP:

° only concerns to be routed message (not own
initiated)
° one timer per instance: here and here.
```
                o Annex A: renamed SourceAddress to UserAddress.

```
AN192 v05 2021.09.14 - Preparation of the Draft for Voting.
KSG571-30.01 2021.10.14 - Inclusion of the first resolution of comments from Final

Voting v05.
KSG571-31.01 2021.10.25 - Inclusion of the resolution of comments from the KSG

Core meeting of 2021.10.18.
```
                o PID_PTP_ROUTING_TEMP - WriteServiceID 00h and

```
ReadServiceID 00h – Count extended from 1 octet to
2 octets.

                - Inclusion of the change proposals in the pseudo-code by

Mr Großen in 2.2.2.3 and 2.2.2.6.
KSG571-32.01 2021.11.26 - Inclusion of the feedback of the KSG Core meeting of

2021.11.15.
`o` MaC shall perform Master Reset to Default when it

changes Coupler Type and in 2.5.1.
```
                o Implementation of Security Proxy functionality requires

```
the implementation of Segment Coupler functionality
(2.7); TP1 Repeater behaviour not modified (2.2.1);
ETS to use the device as Segment Coupler (3.5.2.2.2)
```
                o Table 8: misconfiguration (identical entries) in the

```
evaluation of the SPGKT now always leads to “Block”.
KSG571-33.01 2021.12.14 - Inclusion of the feedback of the KSG Core meeting of

2021.12.13.
```
                o Updates as done during the meeting. (Location of the

```
Security Proxy Zone Key Table).
```
                o Removed all bubble comments.

```
AN192 v06 2022.01.04 - Creation of the Approved Standard.

Savedate: Filename: page 6 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG571-29.01|2021.09.09|• Inclusion of the KSG review results prior to renewed Final<br>Voting.<br>`o` Precise indication on matching with SAI. <br>`o` Time of coming into effect and restart dependency of<br>PID_BC_CONFIG, PID_PTP_CONFIG,<br>PID_SECURITY_PROXY_GRP_KEY_TABLE. <br>`o` Changed Master Reset behaviour for<br>PID_PTP_CONFIG and PID_BC_CONFIG. <br>`o` Small correction of PID value in BC routing. <br>`o` Remaining Time handling if Count= 0. <br>`o` Even more clear handing of multiple Add-commands <br>andadditional indication that one White List≡ 1 User<br>Address. <br>`o` PID_BC_ROUTING_TEMP: <br>° only concerns to be routed message (not own<br>initiated)<br>° one timer per instance: here andhere. <br>`o` Annex A: renamed SourceAddress to UserAddress.|
|AN192 v05|2021.09.14|<br>• Preparation of the Draft for Voting.|
|KSG571-30.01|2021.10.14|<br>• Inclusion of the first resolution of comments from Final<br>Voting v05.|
|KSG571-31.01|2021.10.25|<br>• Inclusion of the resolution of comments from the KSG<br>Core meeting of 2021.10.18.<br>`o` PID_PTP_ROUTING_TEMP - WriteServiceID 00h and<br>ReadServiceID 00h – Count extended from 1 octet to<br>2 octets.<br>• Inclusion of the change proposals in the pseudo-code by<br>Mr Großen in 2.2.2.3 and 2.2.2.6.|
|KSG571-32.01|2021.11.26|<br>• Inclusion of the feedback of the KSG Core meeting of<br>2021.11.15.<br>`o` MaC shall perform Master Reset to Default when it<br>changes Coupler Type and in 2.5.1.<br>`o` Implementation of Security Proxy functionality requires<br>the implementation of Segment Coupler functionality<br>(2.7); TP1 Repeater behaviour not modified (2.2.1);<br>ETS to use the device as Segment Coupler (3.5.2.2.2)<br>`o` Table 8: misconfiguration (identical entries) in the<br>evaluation of the SPGKT now always leads to“Block”.|
|KSG571-33.01|2021.12.14|• Inclusion of the feedback of the KSG Core meeting of<br>2021.12.13.<br>`o` Updates as done during the meeting. (Location of the<br>Security Proxy Zone Key Table).<br>`o` Removed all bubble comments.|
|AN192 v06|2022.01.04|<br>• Creation of the Approved Standard.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Contents**

###### 1 Purpose, motivation and scope ........................................................................ 8
 1.1 Motivation ................................................................................................ 8 1.2 Scope ...................................................................................................... 8
 1.2.1 Use cases ......................................................................................... 8

 2 Specification ....................................................................................................... 9
 2.1 Terms and definitions .............................................................................. 9
 2.1.1 Access Policies ................................................................................. 9 2.2 Stack and communication ..................................................................... 10
 2.2.1 Security Proxy ................................................................................. 10 2.2.2 Extended routing algorithm ............................................................. 11 2.2.3 Group Object Server ....................................................................... 21 2.3 Resource definition................................................................................ 21
 2.3.1 Router Interface Object ................................................................... 21 2.3.2 LTE Address Routing Table Object ................................................. 46 2.3.3 Security Interface Object ................................................................. 49 2.4 Management Procedures ...................................................................... 49 2.5 Configuration Procedures ...................................................................... 49
 2.5.1 General requirement ....................................................................... 49 2.5.2 Configuration Procedure for a complete download ......................... 49 2.5.3 Configuration Procedure for a partial download – Group Addresses ........................................................................................................ 50 2.6 Usage and context ................................................................................ 50 2.7 Profile definition ..................................................................................... 51
 2.7.1 Interface Objects and Properties ..................................................... 51 2.7.2 Router Object (Object Type 6) ........................................................ 52 2.7.3 LTE Address Routing Table Object (Object Type 7) ....................... 52 2.7.4 Security Interface Object (Object Type 17) ..................................... 53 2.8 Identifiers and discovery ........................................................................ 53

 3 Impact and dependencies ............................................................................... 53
 3.1 System specification (“Handbook”) dependencies ................................ 53 3.2 Configuration interworking ..................................................................... 53 3.3 Runtime Interworking ............................................................................ 53 3.4 Registration and certification ................................................................. 53 3.5 Integration and common tool impact ..................................................... 54
 3.5.1 ETS Product data extension ........................................................... 54 3.5.2 ETS impact ..................................................................................... 54

 Annex A ................................................................................................................... 56
 A.1 Temporary Unicast White List ............................................................... 56

Savedate: Filename: page 7 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

### 1 Purpose, motivation and scope

 _This clause is not intended for inclusion in the KNX Specifications._

#### 1.1 Motivation
The KNX Secure protocol suite shall secure several use cases where KNX communication
shall be limited to a group of authenticated devices or the communication as a whole shall
be protected against eavesdropping or manipulation. In particular the following use cases
shall be addressed.

a) Securing remote access to the installation (KNX IP Secure Tunnelling).
b) Securing the configuration of devices in the installation (KNX Data Security, KNX IP
Secure Device Management).
c) Securing run-time communication of certain applications (KNX Data Security).
d) Securing KNX communication in open IP networks (KNX IP Secure Routing).
e) Securing the KNX communication in open Subnetworks (KNX Data Security).

The last use-case addresses the commonly used scenario where a (possibly already
existing) KNX TP installation shall be extended with KNX RF S-Mode devices behind a
Media Coupler. In contrast to the twisted pair cable that is in buried inside concrete walls and
thereby provides a basic security against outside attackers in itself, the KNX RF wireless
spectrum is an open medium that can easily be accessed anonymously from outside the
installation. Therefore, it is a legit requirement to secure all communication within this KNX
RF Subnetwork, but on the same time allow integration of KNX RF Secure devices into
applications that are available unsecured on the KNX TP segment (e.g. an additional
secured KNX RF pushbutton participating in the same group as unsecured KNX TP
pushbuttons and the unsecured KNX TP light switch actuator).

To achieve this, the Coupler device that separates the to-be secured Subnetwork from the
unsecured Subnetwork must act as a middleman when routing KNX Frames from one
Subnetwork to the other and transparently add or remove the KNX Data Security to or from
the KNX Frame.

#### 1.2 Scope

##### 1.2.1 Use cases
In the following, SN A and SN B denote two Subnetworks connected by a Coupler/Router.

NOTE 1 Here, A and B are just labels and do not imply on which side of the Coupler they are connected. Typically, SN B will
be the RF Subnetwork on the Secondary Side.

###### 1.2.1.1 Runtime communication (multicast)
This section includes standard group communication and property multicast communication
(LTE-Mode).

1.2.1.1.1 Secure in both SN B and SN A
A Group Address or LTE TSAP (EFF and Destination Address) is configured securely in
both Subnetworks. The Coupler will route the secure Frames as specified today.

It is not foreseen to have different keys for the same Group Address/LTE TSAP on both
sides.

Savedate: Filename: page 8 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

1.2.1.1.2 Secure in SN B, plain in SN A
A Group Address or LTE TSAP (EFF and Destination Address) is configured securely in
SN B, but plainly in SN A. If the Coupler has Security Proxy functionality, it can transparently
translate between secure and plain communication. Therefore, runtime communication
between devices in SN A and SN B via this Group Address/LTE TSAP is possible.

1.2.1.1.3 Insecure in both SN B and SN A
A Group Address or LTE TSAP (EFF and Destination Address) is configured plain in both
Subnetworks. From a systematic point of view this is possible. This defeats the purpose of
having completely secured communication on the – for example – RF Subnetwork and it
opens a possible security hole for the whole installation.

No overall control of the routing of plain messages is foreseen. There may be cases where
such communication can be allowed. This shall be solved by a properly configured Filter
Table.

###### 1.2.1.2 Runtime communication (unicast)
Translating unicast runtime communication between secure and plain is not in scope of this
document.

###### 1.2.1.3 Runtime communication (broadcast and system broadcast)
According to [05], end devices cannot exchange messages using (system) broadcast
communication mode. Therefore, no Security Proxy support is necessary nor possible for
(system) broadcast communication.

###### 1.2.1.4 Configuration

1.2.1.4.1 Configuration of secure devices across the Coupler
It shall be possible to run the secure Network – and Device Management Procedures from
SN A targeting a MaS in SN B and vice versa.

1.2.1.4.2 Not: Configuration of devices not supporting security across the Coupler
This is explicitly no use case in this context.

### 2 Specification

#### 2.1 Terms and definitions

##### 2.1.1 Access Policies
This document uses the following Access Policies. (The definition and notation style of the
Access Policies are defined in [05]). This document is in line with the Access Policies as
defined in [09].

Savedate: Filename: page 9 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Access**

**Property Name** **Policy**

6 80 PID_PTP_CONFIG 3FF / 0CC

6 81 PID_SECURITY_PROXY_GRP_KEY_TABLE 00C / 00C

6 82 PID_BC_CONFIG 3FF / 0CC

6 83 PID_PTP_ROUTING_TEMP 3FF / 0CC

6 84 PID_BC_ROUTING_TEMP 3FF / 0CC

7 53 PID_SECURITY_PROXY_ZONE_KEY_TABLE 00C / 00C

#### 2.2 Stack and communication

##### 2.2.1 Security Proxy
The Security Proxy is an optional extension to existing Coupler models like Coupler model
2.0 [06], mask 0912h and mask 091Ah, as only Coupler devices managing the traffic flow
between two KNX Subnetworks can transparently convert the Frames as part of the routing
process.

The Security Proxy is applicable only for Segment Couplers, Line Couplers and Backbone
Couplers.

The Security Proxy functionality can also be combined with the TP1 Repeater functionality.

   - The MaC shall however not configure this situation. If the Coupler is projected in
between two TP1 Segments, the MaC shall configure the Coupler as Segment
Coupler and not as TP1 Repeater.

NOTE 2 Please refer to 2.7: the implementation of the Security Proxy also requires the implementation of
the Segment Coupler functionality.

   - It is thus a misconfiguration if a device is configured as TP1 Repeater with enabled
Security Proxy functionality. The routing of the device shall however not change in
this case and the Security Proxy functionality shall be as specified.

NOTE 3 The MaC knows the location of the devices and the possible use of the Group Addresses

(Plain/Secure) at either side of the Coupler[ 1)]. Yet, the combination of Repeater behaviour (passing all messages)
with the Security Proxy behaviour (possible blocking point-to-point or broadcast) may give unexpected behaviour.

The Security Proxy shall only relate to the Network Layer of the Coupler. The Data Link
Layer behaviour of the above-mentioned base model of the Coupler (like L2-Acknowledge)
shall not be modified.

1) State ETS6.0.0.

Savedate: Filename: page 10 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Object Type|PID|Property Name|Access<br>Policy|
|---|---|---|---|
|6|80|PIDPTPCONFIG<br>|3FF / 0CC|
|<br>6|<br> 81|__<br>  PIDSECURITYPROXYGRPKEYTABLE<br>|00C / 00C|
|<br>6|<br> 82|_____<br>  PIDBCCONFIG|3FF / 0CC|
|<br>6|<br> 83|__<br>  PIDPTPROUTINGTEMP|3FF / 0CC|
|<br>6|<br> 84|___<br>  PIDBCROUTINGTEMP|3FF / 0CC|
|<br>7|<br> 53|___<br>  PIDSECURITYPROXYZONEKEYTABLE<br>|00C / 00C|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

##### 2.2.2 Extended routing algorithm

###### 2.2.2.1 Routing Configuration
The handling of point-to-point messages and broadcast and system broadcast messages
shall depend on the following parameters of the Router.

   - the PTP_ROUTE (see 2.3.1.1).

   - the BC_ROUTE (see 2.3.1.2)
The handling of plain multicast Frames shall be controlled through the Filter Table.

For each of these parameters, there shall be one instance per connected Subnetwork
(Primary / Secondary Side of the Coupler).

In addition to these permanent settings, there shall be a method to temporarily enable
unicast routing between specific Individual Addresses. For this, there shall only be a single
instance, in the Primary Router Object.

###### 2.2.2.2 Proxy Tables
If the Coupler translates a secure to a plain Frame or vice versa, the Group and
Point-to-point Keys are required. These are contained in the Security _Proxy Group Key_
_Table and the Proxy Zone Key Tables; see clauses 2.3.1.5 and 2.3.2.2. There shall be an_
instance of the Security Proxy Group Key Table in the Primary Router Object, and an
instance of the Security Proxy Zone Key Table in the LTE Address Routing Table Object. In
the use cases enumerated in 1.2.1.1 at most for one of these instances will be filled.

###### 2.2.2.3 Routing of T_Data_Group-PDUs
The routing rules from [01] and for Coupler model 2 based implementations [06] apply[ 2)]. If
according to these rules the Coupler with Security Proxy functionality concludes on routing
the received KNX T_Data_Group message then it shall additionally apply the following rules,
both in the communication way from the Secondary Side into the Primary Side and vice
versa.

**Implementation specific parameters**

These routing rules allow that the standard routing algorithm may at any place be
deviated from through implementation specific parameters. Yet, such implementation
specific parameters shall be restricted to the control of the routing and are not allowed at
the level of the Security Proxy or beyond.

NOTE 4 The below rules apply in addition to the Layer-3 routing rules of the Coupler. As the Layer-3
routing rules however also conclude on the Layer-2 acknowledge of the received message, it may be that the
Coupler acknowledges a message but yet does not route it. It is however also allowed that the Coupler combines
both rule sets and does not acknowledge messages which it would route because of the Layer-3 rules but blocks
because of the below Security Proxy rules.
NOTE 5 The below specifies the normal case for the evaluation of the Security Proxy Group Key Table.
Please refer to the detailed specification of the Security Proxy Group Key Table for the exceptions (Table 8).

2) These Routing rules will be adapted according AN189 “New routing algorithm for hc 7” ([06]).
Implementations of the Security Proxy shall comply with [06].

Savedate: Filename: page 11 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

- If the message contains an S-A_Data-PDU

   - If the Group Address is in the Security Proxy Group Key Table and the interface at
_which the message is received[ 3)] is marked “Secure”_
and the Load State of the Primary Router Object is ‘Loaded’

    - If the indication of the use of authentication and confidentiality in the SAI field in
the SCF does not correspond to the corresponding Security Flags in the
_Security Proxy Group Key Table_

 Do not forward the message to the other side

    - Else

 If the interface at which the message has to be transmitted is also marked
_“Secure” in the Security Proxy Group Key Table_

 Do not forward the message to the other side.

    - Else

 Decrypt the message with the corresponding key in the Security Proxy
Group Key Table.

 If the Data Security Sequence Number in the message is > Last Valid
SeqNr as looked up in the Security Individual Address Table in the Security
Interface Object, for the Source Address and decryption succeeds (the
reception validation in [05] applies)

 Update the Last Valid SeqNr in the Security Individual Addresses
_Table in the Security Interface Object_

 Forward only the decrypted message to the other side.

 Else

 Do not forward the message to the other side.

   - Else

    - Forward the encrypted message to the other side.

// The Secure message is thus routed unchanged, except for the hop count.

- Else If the message is an S-A_Sync-Req-PDU or S-A_Sync-Res-PDU

   - Do not forward the message to the other side.
(According to [05], this communication mode is not allowed for the S-A_Sync
service.)

3) This is Sec@Prim for a message received at the Primary Side and Sec@Sec for a massage received at the
Secondary Side.

Savedate: Filename: page 12 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

- Else (i.e. a plain T_Data_Group message)

   - If the Group Address is in the Security Proxy Group Key Table and the Load State
of the Primary Router Object is ‘Loaded’ and the Group Address is marked “Secure”
at the interface at which the message is received then

    - Do not forward the message to the other side.

   - Else

    - If the Group Address is marked “Secure” in the Security Proxy Group Key Table
for the side onto which the message would be sent
and the Load State of the Primary Router Object is ‘Loaded’

 Encrypt the message with the corresponding key in the Security Proxy
Group Key Table, changing the Source Address to the proxy’s IA and using
the proxy’s own Data Security SeqNr. The Security Flags in the Security
Proxy Group Key Table entry shall determine whether only authentication or
authentication and confidentiality shall be applied.

 Forward only the encrypted message to the other side.

    - Else

 Do not forward the message to the other side.

Savedate: Filename: page 13 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Figure 1 – Routing of T_Data_Group-PDUs (example)**

###### 2.2.2.4 Routing of T_Data_Tag_Group-PDUs
The routing rules from [01] and for Coupler model 2 based implementations [06] apply[ 2)]. If
according to these rules the Coupler with Security Proxy concludes on routing the received
KNX T_Data_Tag_Group message then it shall additionally apply the following rules, both in
the communication way from the Secondary Side into the Primary Side or vice versa.

- If the message contains an S-A_Data-PDU

   - If the TSAP (EFF and Destination Address) is in the Proxy Zone Key Table
associated with the side from which the message is received
and the Load State of this Router Object is ‘Loaded’

    - If the SAI field in the SCF does not correspond to the corresponding Security
Flags in the Proxy Zone Key Table

 Do not forward the Frame to the other side.

Savedate: Filename: page 14 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

    - Decrypt the message with the corresponding key in the Proxy Zone Key Table.

    - If the Data Security SeqNr in the message is > Last Valid SeqNr as looked up in
the Security Individual Addresses Table in the Security Interface Object for the
Source Address and decryption succeeds (the reception validation in [05]
applies)

 Update the Last Valid SeqNr in the Security Individual Addresses Table in
the Security Interface Object

 Forward only the decrypted message to the other side.

    - Else

 Do not forward the message to the other side.

   - Else

    - Forward the message to the other side.

- Else If the message is an S-A_Sync-Req-PDU or S-A_Sync-Res-PDU

   - Do not forward the message to the other side.
(According to [05], this communication mode is not allowed for the S-A_Sync
service.)

- Else

   - If the TSAP (EFF and Destination Address) is in the Proxy Zone Key Table
associated with the side onto which the message would be sent
and the Load State of this Router Object is ‘Loaded’

    - Encrypt the message with the corresponding key in the Proxy Zone Key Table,
changing the Source Address to the proxy’s IA and using the proxy’s own Data
Security SeqNr. The Security Flags in the Proxy Zone Key Table entry shall
determine whether only authentication or authentication and confidentiality shall
be applied.

    - Forward only the encrypted message to the other side.

   - Else

    - Forward the message to the other side.

NOTE 6 If LTE addresses with wildcards are used, each such address requires its own entry in the Proxy Zone Key Table.

###### 2.2.2.5 Routing of T_Data_Individual-PDUs
The Security Proxy is a Profile Module that extends a base Coupler Profile, like 0912h,
091Ah, 2920h. For these, at first the routing rules from [01] or Coupler Model 2.0 based
implementations [06] apply[ 4) ]as appropriate.

If according to these routing rules the received KNX unicast message shall be routed, then
the following shall additionally be verified.

**IF the Point-to-Point Routing Configuration (PID_PTP_CONFIG) associated with the side**
onto which the message would be sent to is “RULE”

**THEN Forward the message to the other side.**

4) These Routing rules will be adapted according AN189 “New routing algorithm for hc 7” ([06]).
Implementations of the Security Proxy shall comply with [06].

Savedate: Filename: page 15 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**ELSE in case the Point-to-Point Routing Configuration is “BLOCK”, there may be one or**
multiple Temporary Unicast White Lists. On reception of a unicast message, the Coupler
shall evaluate if the combination of Source Address and Destination Address is contained in
such a list.

Please refer to 2.3.1.3.4 for the definition of the White List.

**IF (the Source Address is the User Address of a Temporary Unicast White List and the Destination Address**

is contained as Partner Address in that Temporary Unicast White List)
**OR**
(the Destination Address is the User Address of a Temporary Unicast White List and the Source
Address is contained as Partner Address in that Temporary Unicast White List)
**THEN Forward the message to the other side**
**ELSE**
Do not forward the message to the other side

This allows to block the transmission of unicast messages onto the associated side for
security reasons, even if the message would comply with the routing conditions, but still
temporarily allow connections from/to devices in such protected network segment.

This is shown in in the flowchart in Figure 2.

Savedate: Filename: page 16 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

NOTE The decision “RULE” for PID_PTP_CONFIG means that the evaluation of PID_PTP_CONFIG
does not block the message, but that the normal routing rules as evaluated in the first decision
“Normal routing conditions” apply.

**Figure 2 - Routing of T_Data_Individual-PDUs in the Security Proxy**

These Temporary Unicast White Lists shall be managed by the Function Property
PID_PTP_ROUTING_TEMP residing on the Primary Router Object as specified in clause
2.3.1.3.

The Temporary Unicast White Lists shall thus be interpreted independently of the side from
which the message is received.

The Temporary Unicast White Lists shall be interpreted independently of the Load State
Machine of the Router Object.

Savedate: Filename: page 17 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Figure 3 - Routing of KNX unicast messages (example)**

Savedate: Filename: page 18 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

###### 2.2.2.6 Routing of T_Data_Broadcast and T_Data_SystemBroadcast
The routing rules from [01], for Coupler model 2 based implementations [06], and for
KNXnet/IP Routers [08] apply[ 5)]. This includes the evaluation of the system broadcast
routing modes as controlled by PID_PL110_SBC_CONTROL, PID_RF_SBC_CONTROL or
PID_IP_SBC_CONTROL.

If according to these routing rules the Coupler with Security Proxy functionality concludes on
routing a broadcast or system broadcast message then it shall additionally apply the
following rules, from the Secondary Side into the Primary Side or vice versa.

**IF Routing Rules conclude on routing the message THEN**
// If the routing rules conclude on routing the message.
**IF the BC_ROUTE in PID_BC_CONFIG associated with the side onto which the message would be sent**
to is BC_RULE THEN
Forward the message to the other side
// (S)BC message are permanently routed by the Security Proxy

**ELSE**
**IF the temporary “broadcast routing mode” as controlled by PID_BC_ROUTING_TEMP**
associated with the side onto which the message would be sent to is “enabled” THEN
Forward the message to the other side
// (S)BC message are temporary routed by the Security Proxy

**ELSE**
Do not forward the message // The Security Proxy blocks the message permanently

**END IF**
**END IF**
**ELSE**
Do not forward the message // If the routing rules do not conclude on routing the message.

**END IF**

5) These Routing rules will be adapted according AN189 “New routing algorithm for hc 7” ([06]).
Implementations of the Security Proxy shall comply with [06].

Savedate: Filename: page 19 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**
```
     o

```
**Figure 4 - Routing of T_Data_Broadcast-PDUs and of T_Data_SystemBroadcast-PDUs**
**(example)**

Savedate: Filename: page 20 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

##### 2.2.3 Group Object Server

 _The following shall be added underneath the list of Group Object config flags in clause 3.2 “General data_
_structure of the Group Object Table” in [02]._

…

These Config Flags are set during configuration. For devices supporting Data Security, it is
obligatory that these flags are maintained and respected as set; they shall not be modified or
overruled by any implementation specific means.

#### 2.3 Resource definition

##### 2.3.1 Router Interface Object
This overview only lists the Properties that are relevant for the Security Proxy.

The Router Interface Object (Interface Object Type = 6) shall hold the Properties as listed in
Table 1. (This table only gives an overview. For the mandatory and optional Properties,
please refer to 2.7).

The security conditions for accessing these Properties are specified in the detailed Property
descriptions in clause 2.3.1.1 and further.
Therefore, please refer to the detailed Property definitions below for the requirements
concerning access.

For Coupler model 2.0, the Resources associated with the Primary Side shall be located in
the Primary Router Object, the Resources associated with the Secondary Side shall be
located in the Secondary Router Object.

Couplers implementing the Profile 0912h or 091Ah and supporting Security Proxy shall
implement a second Router Object. The Security Proxy Resources associated with the
Primary Side shall be located in the first Router Object, the Security Proxy Resources
associated with the Secondary Side shall be located in the second Router Object.

NOTE 7 So this applies only to the Properties listed in Table 1. All other Coupler properties remain on the first Router
Object.

**Table 1 – Properties in the Router Interface Object**

**Property Name** **Property Identifier** **Property Datatype**

Security specific Coupler Properties (80 to 95)[ a]
Point-to-point Routing 80 = PID_PTP_CONFIG PDT_BITSET8
Configuration

Security Proxy Group Key 81 = PID_SECURITY_PROXY_GRP_KEY_TABLE PDT_GENERIC_19[]
Table

Broadcast Routing 82 = PID_BC_CONFIG PDT_BITSET8
Configuration

Temporary Point-to-point 83 = PID_PTP_ROUTING_TEMP PDT_FUNCTION
Routing

Temporary Broadcast Routing 84 = PID_BC_ROUTING_TEMP PDT_FUNCTION

a The PID-range from 80 to 95 is reserved for security related Properties to have these together in a continuous range.
This range is defined and reserved but not fully used with the current definitions. This allows for future extensions.

Savedate: Filename: page 21 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Property Name|Col2|Property Identifier|Property Datatype|
|---|---|---|---|
|Security specific Coupler Properties(80 to 95) a|Security specific Coupler Properties(80 to 95) a|Security specific Coupler Properties(80 to 95) a|Security specific Coupler Properties(80 to 95) a|
|Point-to-point Routing<br>Configuration|Point-to-point Routing<br>Configuration|80 = PID_PTP_CONFIG|PDT_BITSET8|
|Security Proxy Group Key<br>Table|Security Proxy Group Key<br>Table|81 = PID_SECURITY_PROXY_GRP_KEY_TABLE|PDT_GENERIC_19[]|
|Broadcast Routing<br>Configuration|Broadcast Routing<br>Configuration|82 = PID_BC_CONFIG|PDT_BITSET8|
|Temporary Point-to-point<br>Routing|Temporary Point-to-point<br>Routing|83 = PID_PTP_ROUTING_TEMP|PDT_FUNCTION|
|Temporary Broadcast Routing|Temporary Broadcast Routing|84 = PID_BC_ROUTING_TEMP|PDT_FUNCTION|
|a|<br> <br>The PID-range from 80 to 95 is reserved for security related Properties to have these together in a continuous range.<br>This range is defined and reserved but not fully used with the current definitions. This allows for future extensions.|<br> <br>The PID-range from 80 to 95 is reserved for security related Properties to have these together in a continuous range.<br>This range is defined and reserved but not fully used with the current definitions. This allows for future extensions.|<br> <br>The PID-range from 80 to 95 is reserved for security related Properties to have these together in a continuous range.<br>This range is defined and reserved but not fully used with the current definitions. This allows for future extensions.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

###### 2.3.1.1 PID_PTP_CONFIG (PID: 80)

**●** **Property name:** Point-to-point Routing Configuration

**●** **Property Datatype:** [PDT_BITSET8 ]

**●** **Datapoint Type:** None

**●** **Access policy:** 3FF/00C

**●** **Access level:** 2/2

2.3.1.1.1 Abstract Resource Definition
The Point-to-point Routing Configuration shall be a Property Parameter that shall control the
behaviour in case of routing point-to-point messages to be sent on the Medium Interface that
corresponds with its hosting Router Object.

It shall not control the following.

   - The reception of point-to-point messages from that Segment

   - The Data Link Layer behaviour (L2-Acknowledge)

   - The passing of point-to-point messages up in the own stack.

NOTE 8 This does not differentiate between Plain – or Secure messages!

Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

2.3.1.1.2 Location and instances
Please refer to the requirements for PID_PTP_CONFIG in clause 2.7.2.

The Point-to-point Routing Configuration shall be located in non-volatile memory.

2.3.1.1.3 Format
**Format**

The value shall be formatted as defined in Figure 5.

b7 b6 b5 b4 b3 b2 b1 b0

**Figure 5 – PID_PTP_CONFIG**

The value shall be an 8 bit value. Only the bits b1 to b0 are defined. The bits b7 to b2 are
reserved for future system extensions. The MaC shall for the Security Proxy only consider and
modify the field PTP_ROUTE.

Savedate: Filename: page 22 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|
|r|r|r|r|r|r|PTP_ROUTE|PTP_ROUTE|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Encoding**
**Bit** **Name** **Description**
**(d: default value)**
0 to 1 PTP_ROUTE Specifies the static 0: BLOCK
handling for transmitting Messages in point-to-point
messages in point-to- connectionless or point-topoint connectionless or point connection-oriented
point-to-point connection- communication mode shall
oriented communication **not be transmitted on the**
mode. Medium Interface related to the

hosting Router Object
independent of the Coupler
Type.
1: RULE (d)
Messages in point-to-point
connectionless or point-topoint connection-oriented
communication mode shall be
**transmitted on the Medium**
Interface related to the hosting
Router Object according to the
routing algorithm for the
Coupler Type, this is, in
function of the Individual
Address of the Coupler, the
Destination Address and other.
2, 3: reserved, shall not be used.
2 to 7 Reserved. These bits are reserved These bits shall not be modified
for future use. concerning the Security Proxy

functionality.

 _These reserved bits are currently under discussion in the KSG discussion topic [KSG00251-00]_
_“Application in a Coupler”. For the Security Proxy, only the bits 0 and 1 are concerned, however._

**KNX Default value**

The default value shall be RULE.

2.3.1.1.4 Usage by the MaC (ETS)
The MaC shall set the field PTP_ROUTE in this Property to permanently disable or
respectively enable the transmission of point-to-point messages over the Coupler onto the
connected medium.

The MaC shall use the Data Property services to this purpose.

2.3.1.1.5 Usage by the MaS
The value of Point-to-point Routing Configuration shall be interpreted by the Coupler’s
routing algorithm as specified in 2.2 and 2.3.1.1.1.

The Property value shall have effect at the latest 1 s after it changes.

The Property Value shall not change after a restart.

This property shall be evaluated independent of the Load State of the Router Interface
Object.

Savedate: Filename: page 23 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Bit|Name|Description|Encoding<br>(d: default value)|
|---|---|---|---|
|0 to 1|PTP_ROUTE|Specifies the static<br>handling for transmitting<br>messages in point-to-<br>point connectionless or<br>point-to-point connection-<br>oriented communication<br>mode.|0:<br>BLOCK<br>Messages in point-to-point<br>connectionless or point-to-<br>point connection-oriented<br>communication mode**shall**<br>**not be transmitted**on the<br>Medium Interface related to the<br>hosting Router Object<br>independent of the Coupler<br>Type.<br>1:<br>RULE**(d)** <br>Messages in point-to-point<br>connectionless or point-to-<br>point connection-oriented<br>communication mode**shall be**<br>**transmitted**on the Medium<br>Interface related to the hosting<br>Router Object according to the<br>routing algorithm for the<br>Coupler Type, this is, in<br>function of the Individual<br>Address of the Coupler, the<br>Destination Address and other.<br>2, 3:<br>reserved, shall not be used.|
|2 to 7|Reserved.|These bits are reserved<br>for future use.|These bits shall not be modified<br>concerning the Security Proxy<br>functionality.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX Default value

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA not influenced

n.a. Local Reset to default state KNX Default value

n.a. Power Cycle not influenced

###### 2.3.1.2 PID_BC_CONFIG (PID: 82)

**●** **Property name:** Broadcast Routing Configuration

**●** **Property Datatype:** [PDT_BITSET8 ]

**●** **Datapoint Type:** None

**●** **Access policy:** 3FF/00C

**●** **Access level:** 2/2

2.3.1.2.1 Abstract Resource Definition
The Broadcast Routing Configuration shall be a Property Parameter that shall control the
behaviour in case of routing broadcast messages and system broadcast messages to be
_sent on the Medium Interface that corresponds with its hosting Router Object._

It shall not control the following.

   - The reception of broadcast messages from that Segment

   - The Data Link Layer behaviour (L2-Acknowledge)

   - The passing of broadcast and system broadcast messages up in the own stack.

NOTE 9 This does not differentiate between Plain – or Secure messages!

2.3.1.2.2 Security
Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

2.3.1.2.3 Location and instances
Please refer to the requirements for PID_BC_CONFIG in clause 2.7.2.

The Broadcast Routing Configuration shall be located in non-volatile memory.

Savedate: Filename: page 24 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX Default value|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|not influenced|
|n.a. Local Reset to default state|KNX Default value|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.2.4 Format
**Format**

The value shall be formatted as defined in Figure 6.

b7 b6 b5 b4 b3 b2 b1 b0

**Figure 6 – PID_BC_CONFIG**

The value shall be an 8 bit value. Only the bits b1 to b0 are defined. The bits b7 to b2 are
reserved for future system extensions and the MaC shall always write these bit values with 0.
The MaS shall ignore these reserved bits.

**Encoding**
**Bit** **Name** **Description**
**(d: default value)**
0 to 1 BC_ROUTE Specifies the static 0: BC_BLOCK
handling for transmitting Messages in broadcast or
messages in broadcast - system broadcast
or system broadcast communication mode shall
communication mode. **not be transmitted on the**

Medium Interface related to the
hosting Router Object,
independent of the Coupler
Type.
1: BC_RULE (d)
Messages in broadcast or
system broadcast
communication mode shall be
**transmitted on the Medium**
Interface related to the hosting
Router Object according to the
routing algorithm for the
Coupler Type.
2, 3: reserved, shall not be used.
2 to 7 Reserved. Not used. Shall be 0.

**KNX Default value**

The default value shall be BC_RULE.

2.3.1.2.5 Usage by the MaC (ETS)
The MaC shall set this Property to permanently disable or respectively enable the
transmission of broadcast and system broadcast messages over the Coupler onto the
connected medium.

The MaC shall use the Data Property services to this purpose.

Savedate: Filename: page 25 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|
|0|0|0|0|0|0|BC_ROUTE|BC_ROUTE|

|Bit|Name|Description|Encoding<br>(d: default value)|
|---|---|---|---|
|0 to 1|BC_ROUTE|Specifies the static<br>handling for transmitting<br>messages in broadcast -<br>or system broadcast<br>communication mode.|0:<br>BC_BLOCK<br>Messages in broadcast or<br>system broadcast<br>communication mode**shall**<br>**not be transmitted** on the<br>Medium Interface related to the<br>hosting Router Object,<br>independent of the Coupler<br>Type.<br>1:<br>BC_RULE**(d)** <br>Messages in broadcast or<br>system broadcast<br>communication mode**shall be**<br>**transmitted** on the Medium<br>Interface related to the hosting<br>Router Object according to the<br>routing algorithm for the<br>Coupler Type.<br>2, 3:<br>reserved, shall not be used.|
|2 to 7|Reserved.|Not used.|Shall be 0.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.2.6 Usage by the MaS
The value of Broadcast Routing Configuration shall be interpreted by the Coupler’s routing
algorithm as specified in 2.2 and 2.3.1.1.1.

The Property value shall have effect at the latest 1 s after it changes.

The Property Value shall not change after a restart.

This property shall be evaluated independent of the Load State of the Router Interface
Object.

**Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX Default value

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA not influenced

n.a. Local Reset to default state KNX Default value

n.a. Power Cycle not influenced

###### 2.3.1.3 PID_PTP_ROUTING_TEMP (PID: 83)

 _This PID was named PID_UNICAST_ROUTING_CONTROL before._

**●** **Property name:** Temporary Point-to-point Routing

**●** **Property Datatype:** [PDT_FUNCTION ]

**●** **Datapoint Type:** None

**●** **Access policy:** 3FF/0CC

**●** **Access level:** 2/2

2.3.1.3.1 Abstract Resource definition
This Function Property shall serve for managing the Temporary Unicast White Lists in the
MaS (Coupler): see 2.2.2.5.

2.3.1.3.2 Security
Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

2.3.1.3.3 Location and instances
Please refer to the requirements for PID_PTP_ROUTING_TEMP in clause 2.7.2.

2.3.1.3.4 Format
The format of the Temporary Unicast White Lists is not standardised; they are exclusively
accessed through this Function Property PID_PTP_ROUTING_TEMP. The internal storage
format is thus implementation specific.

Savedate: Filename: page 26 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX Default value|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|not influenced|
|n.a. Local Reset to default state|KNX Default value|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

A Temporary Unicast White List shall be a list of

   - _one device on one side of the Coupler, called User (identified by the User Address_
when the Temporary Unicast White List is created) in the following

A Temporary Unicast White List shall thus always one-to-one be related with
one single User Address and vice versa.

   - one or more specific Partners on the other side, identified by one or more ranges
defined as Start Address and Count in the following

   - one Remaining Time for which the White List will still be active.

This is illustrated in Figure 7.

Yet, the minimal requirement is that the MaS shall be able to store at least one Temporary
Unicast White List, this is, one set of User Address, Remaining Time and one Partner
Addresses range (one Start Address with one Count) (see below).

**Remaining** **Partner Addresses**
**User Address**
**Time** **Start Address** **Count**

Temporary Unicast White List 1 1.0.10 38 s 1.1.50 2

1.1.60 2

Temporary Unicast White List 2 1.1.100 10 s 1.0.10 2

**Figure 7 – Temporary Unicast White Lists (EXAMPLE)**

**KNX default value**

The default value of the Temporary Unicast White Lists shall be empty: it shall not contain
any Temporary Unicast White List.

2.3.1.3.5 Write (A_FunctionPropertyCommand-PDU)
PID_PTP_ROUTING_TEMP and the Temporary Unicast White Lists shall be interpreted
independently of the Load State Machine of the Router Object.

**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Overview Write ServiceIDs**

**Table 2 – Overview PID_PTP_ROUTING_TEMP WriteServiceIDs**

**WriteServiceID** **Description**

00h Add to Temporary Unicast
White List

01h Revoke Temporary Unicast
White List

02h Retrigger Temporary Unicast
White List

Savedate: Filename: page 27 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|User Address|Remaining<br>Time|Partner Addresses|Col4|
|---|---|---|---|
|**User Address**|**Remaining**<br>**Time**|**Start Address**|**Count**|
|1.0.10|38 s|1.1.50|2|
|||1.1.60|2|
|1.1.100|10 s|1.0.10|2|

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|WriteServiceID|Description|
|---|---|
|00h|Add to Temporary Unicast<br>White List|
|01h|Revoke Temporary Unicast<br>White List|
|02h|Retrigger Temporary Unicast<br>White List|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.3.5.1 WriteServiceID 00h: Add to Temporary Unicast White List

Octet 10 octet 11 octet 12+13 octet 14+15 Octet 16+17

ServiceID ServiceInfo

Add to
Temporary

reserved User Address Start Address Count

Unicast White
List

00h 00h

**Figure 8 – A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_PTP_ROUTING_TEMP**

The MaC shall use this command to add a range of partner Individual Addresses to the
Temporary Unicast White List related to the User Address as contained in the
ServiceInfo. This User Address will typically be the Individual Address of the requesting
MaC, but may be any value.

ServiceID: 00h Command “Add to Temporary Unicast White List”

ServiceInfo: User Address This shall be the Individual Address for which the
Temporary Unicast White List shall be added, the
device that will “use” the Temporary Unicast White
List.

|Octet 10|octet 11|octet 12+13|octet 14+15|Octet 16+17|
|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Add to<br>Temporary<br>Unicast White<br>List|User Address|Start Address|Count|
|00h|00h||||


Start Address
/ Count


A range of Partner Individual Addresses. Unicast
communication between the User Address and all
Partner devices in the range “Start Address” to
“Start Address” + “Count” – 1 shall be allowed.

Count = 0 is allowed (see below). This does not
add any Individual Address to the Temporary
Unicast White List and consequently no Remaining
Time is (re)initialised.


**Success**

If the MaS can successfully handle the command then it shall add the specified Partner
Individual Addresses to the Temporary Unicast White List of the Individual Address
identified by the field User Address and respond with an
A_FunctionPropertyState_Response-PDU as in Figure 9.

Octet 10 octet 11

Return Code ServiceID

E_SUCCESS Enable specific

unicast
communication

00h 00h

**Figure 9 – A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_PTP_ROUTING_TEMP**

Savedate: Filename: page 28 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|E_SUCCESS|Enable specific<br>unicast<br>communication|
|00h|00h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

Multiple “Add to Temporary Unicast White List” commands may be sent for one User
Address to build up a single Temporary Unicast White List of for this User Address with
multiple non-adjacent ranges of partner Individual Addresses.

The “Add to Temporary Unicast White List” commands may be sent for different User
Addresses; the MaS shall keep separate Temporary Unicast White Lists of allowed
communication partners for each User Address.

It is no error if the requested range is empty or overlaps with an already existing range
in the Temporary Unicast White Lists.

If the MaS accepts the Temporary Unicast White List, then it shall start a timeout timer
for that Temporary Unicast White List that shall be initiated with a value of 60 s. The
Temporary Unicast White List shall be revoked if the timer expires. The MaC may
retrigger this timer by a subsequent WriteServiceID 02h: see further. The MaS shall not
retrigger the timeout on any other condition; specifically, the reception or routing of a
message that fits the Temporary Unicast White List shall not retrigger the timeout.

**Error and exception handling**

    - If the MaS has no more resources to fulfil a request, it shall respond with Return
Code E_COMMAND_IMPOSSIBLE and keep the current Temporary Unicast
White Lists.

    - In the following error cases, it shall respond with error code E_DATA_VOID and
keep the current Temporary Unicast White Lists.

 The field User Address contained in the ServiceInfo is the Individual
Address of the Router itself.

NOTE 10 In case there is more than one Router Object, then the MaC has to address
the appropriate Router Object. Mistakes by the MaC are caught by the above two error
cases.

 The Range of Individual Addresses requested contains the Individual
Address of the Coupler itself.

There are no further requirements concerning the evaluation of the fields User Address,
_Start Address and Count. Additional evaluations of these fields can be added in the_
implementation; the MaS’ reaction is implementation specific and shall not be tested.

EXAMPLE 1 Range overflow : Start Address = 1.1.255 and Count = 2
EXAMPLE 2 Range overflow : Start Address = 15.15.255 and Count = 3

2.3.1.3.5.2 WriteServiceID 01h: Revoke Temporary Unicast White List

octet 10 octet 11 octet 12…13

ServiceID ServiceInfo

reserved Revoke User Address
Temporary
Unicast White
List

00h 01h

**Figure 10 - A_FunctionProperty_Write-PDU for Write ServiceID 01h for**
**PID_PTP_ROUTING_TEMP**

Savedate: Filename: page 29 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12…13|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Revoke<br>Temporary<br>Unicast White<br>List|User Address|
|00h|01h||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

The MaC shall use this command to revoke the Temporary Unicast White List for the
_User Address as contained in the field User Address in the command._

A Temporary Unicast White List in which the requested User Address from the
command is not included as User Address but as Partner Address shall not be affected
by this command.

ServiceID: 01h Command “Revoke Temporary Unicast White List”

User Address User Address for which Temporary Unicast White
List shall be removed.

**Success**

If the MaS can successfully handle the command then it shall revoke the current
Temporary Unicast White List associated with the requested User Address. This shall
be the full White List for that User Address, this is, the User Address, the Remaining
Time and all ranges of Partner Addresses. The MaS shall respond with an A_FunctionPropertyState_Response-PDU as in Figure 11.

octet 10 octet 11

Return Code ServiceID

E_SUCCESS Revoke
Temporary
Unicast White
List

00h 01h

**Figure 11 - A_FunctionPropertyState_Response-PDU for WriteServiceID 01h for**
**PID_PTP_ROUTING_TEMP**

It is no error if there is currently no Temporary Unicast White List for the requesting User
Address. This will happen if the MaC properly wants to clear the Temporary Unicast
White List(s) but can by any circumstance not do it before it expires. The state after the
command request is however clear: the Temporary Unicast White List is revoked.

The deletion of a Temporary Unicast White List is not restricted to the MaC that created
it. This also means that one MaC can delete a Temporary Unicast White List (User
Address) that is created or used by another MaC. This is not an exception.

Savedate: Filename: page 30 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|E_SUCCESS|Revoke<br>Temporary<br>Unicast White<br>List|
|00h|01h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Error and exception handling**

There are no standard errors or exceptions that shall be handled.

2.3.1.3.5.3 WriteServiceID 02h: Retrigger Temporary Unicast White List

octet 10 octet 11 octet 12…13

ServiceID ServiceInfo

reserved Retrigger User Address
Temporary
Unicast White
List

00h 02h

**Figure 12 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_PTP_ROUTING_TEMP**

The MaC shall use this command to retrigger the Temporary Unicast White List associated
with the User Address contained in the command.

ServiceID: 02h Command “Retrigger Temporary Unicast White
List”

User Address User Address for which the Temporary Unicast
White List shall be retriggered.

**Success**

If the MaS can successfully handle the command then it shall retrigger the Temporary
Unicast White List associated with the requested User Address with a value of 60 s.
This shall thus set the Remaining Time to 60 s for that User Address and all its ranges
of Partner Addresses. The MaS shall respond with an A_FunctionPropertyState_Response-PDU as in Figure 13.

octet 10 octet 11

Return Code ServiceID

E_SUCCESS Retrigger
Temporary
Unicast White
List

00h 02h

**Figure 13 - A_FunctionPropertyState_Response-PDU for WriteServiceID 02h for**
**PID_PTP_ROUTING_TEMP**

Savedate: Filename: page 31 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12…13|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Retrigger<br>Temporary<br>Unicast White<br>List|User Address|
|00h|02h||

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|E_SUCCESS|Retrigger<br>Temporary<br>Unicast White<br>List|
|00h|02h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Error and exception handling**

If the MaC experiences any of the following errors or exceptions, then it shall react and
respond with the negative Return Code as follows.

   - If the field User Address contains an Individual Address for which no Temporary
Unicast White List exists then the MaS shall respond with E_DATA_VOID.

NOTE 11 This opposes to the error handling of WriteServiceID 01h, in which an unknown value
of User Address is not an exception, because here the success and the exception have a different end
result.

2.3.1.3.6 Read (A_FunctionPropertyState_Read-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12… octet n

Reserved ServiceID ServiceInfo

ReadServiceID

00h See below. See below.

If the MaS can respond to the command then it shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate Positive Return Code, the ReadServiceID as
from the request and the command result as specified below.

**Overview ReadServiceIDs**

**Table 3 – Overview PID_PTP_ROUTING_TEMP ReadServiceIDs**

**ReadServiceID** **Description**

00h Check Temporary Unicast White List

2.3.1.3.6.1 ReadServiceID 00h: Check Temporary Unicast White List

This ReadServiceID shall be used to check if there is a Temporary Unicast White List for
the User Address and one or more Partner Addresses as contained in the ServiceInfo in
the MaS.

octet 10 octet 11 octet 12+13 octet 14+15 Octet 16+17

ServiceID ServiceInfo

Check
Temporary

reserved User Address Start Address Count

Unicast White
List

00h 00h

**Figure 14 - A_FunctionPropertyState_Read-PDU for ReadServiceID 00h for**
**PID_PTP_ROUTING_TEMP**

Savedate: Filename: page 32 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12… octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||ReadServiceID||
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Check Temporary Unicast White List|

|octet 10|octet 11|octet 12+13|octet 14+15|Octet 16+17|
|---|---|---|---|---|
||ServiceID|ServiceInfo|ServiceInfo|ServiceInfo|
|reserved|Check<br>Temporary<br>Unicast White<br>List|User Address|Start Address|Count|
|00h|00h||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

ServiceID: 00h Command “Check for the existence of a
Temporary Unicast White List for the User
Address”.

ServiceInfo: User Address The Individual Address for which the presence of a
Temporary Unicast White List as a User Address
shall be investigated.

Start Address The first Partner Individual Address of which the
presence in the Temporary Unicast White List of
the User Address is searched.

Count This shall define the range of IAs that shall be
searched as Partner Address in the Temporary
Unicast White List for the User Address, starting
from “Start Address” to “Start Address” + “Count” –
1.

If the MaS accepts the check then it shall respond with the Return Code E_SUCCESS,
regardless of whether the check results in ServiceResult TRUE or FALSE.

To execute the check, the MaS shall do a comparison between the fields contained in
the request and its Temporary Unicast White Lists.

- If the User Address value of the request is not found in the Temporary Unicast White
Lists as a User Address then the MaS shall respond with the field
_ServiceResult = FALSE._

- If the User Address value of the request is found in the Temporary Unicast White Lists,
then the MaS shall check if all searched Partner Addresses are contained in the
Temporary Unicast White List.
If each value is found then the result shall be TRUE. This is specifically in the following
cases.

    - If all sets are found.

    - If there is a Temporary Unicast White List for the User Address but it contains
_more than what is verified over Start Address + Count._

The result shall be FALSE in the following cases.

    - If one or more values are not found.

Savedate: Filename: page 33 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

EXAMPLE 3 In the example of Figure 7, the following requests will be returned.

User Start

Count Result Notes

Address Address

1.0.10 1.1.50 2 TRUE All searched entries are found.

1.0.10 1.1.61 1 TRUE All searched entries are found.

1.0.10 1.1.60 4 FALSE There are only two entries for 1.01.10
starting from 1.1.60, and 4 entries are
searched.

1.0.10 1.1.70 1 FALSE There is no entry for User Address
1.0.10 with Partner Address 1.1.70.

1.0.10 1.1.100 1 FALSE The comparison is for the User
Address with the Partner Address, not
vice versa.

1.1.100 1.0.10 1 TRUE Normal case.

1.0.40 1.1.50 1 FALSE There is no entry with User IA 1.0.40.

**Success**

If the MaS can successfully handle the command then it shall respond with an
A_FunctionPropertyState_Response-PDU as in Figure 15 with the positive Return Code
E_SUCCESS and the result of the operation.

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceResult

E_SUCCESS Check Individual
Individual Address
Address Presence

00h 00h

**Figure 15 – A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**
**PID_PTP_ROUTING_TEMP**

|User<br>Address|Start<br>Address|Count|Result|Notes|
|---|---|---|---|---|
|1.0.10|1.1.50|2|TRUE|All searched entries are found.|
|1.0.10|1.1.61|1|TRUE|All searched entries are found.|
|1.0.10|1.1.60|4|FALSE|There are only two entries for 1.01.10<br>starting from 1.1.60, and 4 entries are<br>searched.|
|1.0.10|1.1.70|1|FALSE|There is no entry for User Address<br>1.0.10 with Partner Address 1.1.70.|
|1.0.10|1.1.100|1|FALSE|The comparison is for the User<br>Address with the Partner Address, not<br>vice versa.|
|1.1.100|1.0.10|1|TRUE|Normal case.|
|1.0.40|1.1.50|1|FALSE|There is no entry with User IA 1.0.40.|

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceResult|
|E_SUCCESS|Check<br>Individual<br>Address|Individual<br>Address<br>Presence|
|00h|00h||


ServiceResult: Individual

Address
Presence


0 FALSE: There is no Temporary
Unicast White List for the
User Address that contains all
values of the requested
Partner Address Range.

1 TRUE There is a Temporary Unicast
White List for the User
Address that contains all
values of the requested
Partner Address Range.


The following exceptions and errors shall be handled.

- If the field ServiceID contains a value that is not known or not supported, then the MaS
shall respond with E_COMMAND_INVALID.

Savedate: Filename: page 34 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

- If the field Count = 0, then the User Address shall be searched for no Partner Individual
Address. The check will result TRUE as soon as there is any entry for that User
Address, regardless of the associated Partner Individual Address. The field Start
_Address shall be don’t care in this case._

2.3.1.3.7 Common error – and exception handling for PID_PTP_ROUTING_TEMP
In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as specified above and repeating the
ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

2.3.1.3.8 Temporary Unicast White List and Master Reset

**Erase Code** **Effect**

01h Confirmed Restart KNX default

02h Reset to default state KNX default

05h ResetParam KNX default

06h ResetLinks KNX default

07h Reset to default without IA KNX default

n.a. Local Reset to default state KNX default

n.a. Power Cycle KNX default

###### 2.3.1.4 PID_BC_ROUTING_TEMP (PID: 84)

**●** **Property name:** Temporary Broadcast Routing

**●** **Property Datatype:** [PDT_FUNCTION ]

**●** **Datapoint Type:** None

**●** **Access policy:** 3FF/0CC

**●** **Access level:** 3/2

2.3.1.4.1 Abstract Resource Definition
This Function Property shall serve for temporarily enabling of the transmission of broadcast and system broadcast messages; see 2.2.2.6.

**Timer**

When the MaC sets either Routing Mode (Broadcast Routing Mode or System Broadcast
Routing Mode) to “Enable”, then the MaS shall start or retrigger a timer with a value of 60 s.
If the timer expires, the MaS shall autonomously set both Routing Modes to “Disable”.

NOTE 12 This requires the implementation of only one single timer. If the MaC wishes to continue using one Routing Mode
(e.g., Broadcast) whilst not wanting to continue the other Routing Mode (e.g., System Broadcast), it can explicitly disable the
other Routing Mode.

Savedate: Filename: page 35 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|> 7Fh||

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|KNX default|
|02h Reset to default state|KNX default|
|05h ResetParam|KNX default|
|06h ResetLinks|KNX default|
|07h Reset to default without IA|KNX default|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|KNX default|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

There shall be one instance of this timer per Router Object instance. This timer shall not be
shared between two or more instances of this Function Property.

Additionally, there is only a single timer that shall be used for both BC Temporary Routing
Mode and the SBC Temporary Routing Mode.

**KNX default value**

The KNX default value of the BC Temporary Routing Mode and the SBC Temporary Routing
Mode, which are both controlled through this Function Property, shall both be “Disabled”.

**Load State Machine dependency**

PID_BC_ROUTING_TEMP shall be interpreted independently of the Load State Machine of
the Router Object.

**Mandatory and optional implementation of the ServiceIDs**

Please refer to the Profile specification in 2.7.2.1 for the required support of the ServiceIDs.

2.3.1.4.2 Security
Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

2.3.1.4.3 Location and instances
Please refer to the requirements for PID_BC_ROUTING_TEMP in clause 2.7.2.

2.3.1.4.4 Write (A_FunctionPropertyCommand-PDU)

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Table 4 – Encoding of Mode in PID_BC_ROUTING_TEMP**

**Mode** **Value**

00h Disabled

01h Enabled

**Overview WriteServiceIDs**

**Table 5 – Overview PID_BC_ROUTING_TEMP WriteServiceIDs**

**WriteServiceID** **Description**

00h Set BC Temporary Routing Mode
01h Set SBC Temporary Routing Mode

Savedate: Filename: page 36 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|Mode|Value|
|---|---|
|00h|Disabled|
|01h|Enabled|

|WriteServiceID|Description|
|---|---|
|00h|Set BC Temporary Routing Mode|
|01h|Set SBC Temporary Routing Mode|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.4.4.1 WriteServiceID 00h: Set BC Temporary Routing Mode

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Set BC Mode
Temporary
Routing Mode

00h 00h

**Figure 16 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_BC_ROUTING_TEMP**

The MaC shall use this command to enable or disable the transmission of to be routed
broadcast messages on the connected medium represented by Router Object that hosts
this Property.

ServiceID: 00h Command “Set BC Temporary Routing Mode”

ServiceInfo: Mode The requested mode encoded as specified in
Table 4.

If the MaS can successfully handle the command then it shall do the following.

   - It shall temporarily enable the routing of broadcast messages.

   - It shall initiate or retrigger the timer for the instance of this function in this Interface
Object with a value of 60 s.
The MaS shall in any case respond with an A_FunctionPropertyState_Response-PDU
as in Figure 17 with the appropriate positive or negative Return Code as listed in
2.3.1.4.6.

octet 10 octet 11

Return Code ServiceID

Set BC
Temporary
Routing Mode

00h

**Figure 17 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_BC_ROUTING_TEMP**

The MaS shall reset the Broadcast Temporary Routing Mode to “Disabled” if the timer
expires. The MaC may extend this period by sending another “Set BC Temporary Routing
Mode“ command or “Set SBC Temporary Routing Mode“ command, with Mode = Enabled
before this timeout is reached.

Savedate: Filename: page 37 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Set BC<br>Temporary<br>Routing Mode|Mode|
|00h|00h||

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Set BC<br>Temporary<br>Routing Mode|
||00h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.4.4.2 WriteServiceID 01h: Set SBC Temporary Routing Mode

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Set SBC Mode
Temporary
Routing Mode

00h 01h

**Figure 18 - A_FunctionProperty_Write-PDU for Write ServiceID 01h for**
**PID_BC_ROUTING_TEMP**

The MaC shall use this command to enable or disable the transmission of system
broadcast messages on the connected medium represented by Router Object that hosts
this Property.

ServiceID: 01h Command “Set SBC Temporary Routing Mode”

ServiceInfo: Mode The requested mode encoded as specified in
Table 4.

If the MaS can successfully handle the command then it shall do the following.

   - It shall temporarily enable the routing of system broadcast messages.

   - It shall initiate or retrigger the timer for this function with a value of 60 s.
The MaS shall in any case respond with an A_FunctionPropertyState_Response-PDU
as in Figure 19 with the appropriate positive or negative Return Code as listed in
2.3.1.4.6.

octet 10 octet 11

Return Code ServiceID

Set SBC
Temporary
Routing Mode

01h

**Figure 19 - A_FunctionPropertyState_Response-PDU for WriteServiceID 01h for**
**PID_BC_ROUTING_TEMP**

The MaS shall reset the System Broadcast Temporary Routing Mode to “Disabled” if the
timer expires. The MaC may extend this period by sending another “Set BC Temporary
Routing Mode“ command or “Set SBC Temporary Routing Mode“ command, with
Mode = Enabled before this timeout is reached.

Savedate: Filename: page 38 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Set SBC<br>Temporary<br>Routing Mode|Mode|
|00h|01h||

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Set SBC<br>Temporary<br>Routing Mode|
||01h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.4.5 Read (A_FunctionPropertyState_Read-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

ReadServiceID

00h See below. See below.

The ReadServiceIDs shall not retrigger the timer.

**Overview ReadServiceIDs**

**Table 6 – Overview PID_BC_ROUTING_TEMP ReadServiceIDs**

**ReadServiceID** **Description**

00h Get BC Temporary Routing Mode
01h Get SBC Temporary Routing Mode

2.3.1.4.5.1 ReadServiceID 00h: Get BC Temporary Routing Mode

octet 10 octet 11

ServiceID

reserved Get BC
Temporary
Routing Mode

00h 00h

**Figure 20 - A_FunctionPropertyState_Read-PDU for ReadServiceID 00h for**
**PID_BC_ROUTING_TEMP**

The MaC shall use this command to read the BC Temporary Routing Mode in the
Router Object.

ServiceID: 00h Command “Get BC Temporary Routing Mode”

ServiceInfo: (none)

If the MaS can successfully handle the command then it shall respond with an
A_FunctionPropertyState_Response-PDU as in Figure 21 with the positive Return Code
E_SUCCESS and the current state of the BC Temporary Routing Mode.

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceInfo

E_SUCCESS Get BC Mode
Temporary
Routing Mode

00h 00h

**Figure 21 - A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**
**PID_BC_ROUTING_TEMP**

Savedate: Filename: page 39 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||ReadServiceID||
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Get BC Temporary Routing Mode|
|01h|Get SBC Temporary Routing Mode|

|octet 10|octet 11|
|---|---|
||ServiceID|
|reserved|Get BC<br>Temporary<br>Routing Mode|
|00h|00h|

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceInfo|
|E_SUCCESS|Get BC<br>Temporary<br>Routing Mode|Mode|
|00h|00h||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

The following exceptions and errors shall be handled.

   - If the field ServiceID contains a value that is not known or not supported, then the
MaS shall respond with E_COMMAND_INVALID.

2.3.1.4.5.2 ReadServiceID 01h: Get SBC Temporary Routing Mode

octet 10 octet 11

ServiceID

reserved Get SBC
Temporary
Routing Mode

00h 01h

**Figure 22 - A_FunctionPropertyState_Read-PDU for ReadServiceID 01h for**
**PID_BC_ROUTING_TEMP**

The MaC shall use this command to read the SBC Temporary Routing Mode in the
Router Object.

ServiceID: 00h Command “Get SBC Temporary Routing Mode”

ServiceInfo: (none)

If the MaS can successfully handle the command then it shall respond with an
A_FunctionPropertyState_Response-PDU as in Figure 23 with the positive Return Code
E_SUCCESS and the current state of the SBC Temporary Routing Mode.

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceInfo

E_SUCCESS Get SBC Mode
Temporary
Routing Mode

00h 01h

**Figure 23 - A_FunctionPropertyState_Response-PDU for ReadServiceID 01h for**
**PID_BC_ROUTING_TEMP**

The following exceptions and errors shall be handled.

   - If the field ServiceID contains a value that is not known or not supported, then the
MaS shall respond with E_COMMAND_INVALID.

2.3.1.4.6 Common error – and exception handling for PID_BC_ROUTING_TEMP
**PID_IP_SBC_CONTROL and PID_RF_SBC_CONTROL**

These Properties also allow to control the temporary routing of system broadcast messages.
PID_IP_SBC_CONTROL and PID_RF_SBC_CONTROL in the routing part of the Coupler
and PID_BC_ROUTING_TEMP in the Security Proxy part shall be independent. These
Properties shall be in an AND-relationship: in order to pass broadcast or system broadcast
messages, both Properties shall be set to pass these messages.

Savedate: Filename: page 40 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|
|---|---|
||ServiceID|
|reserved|Get SBC<br>Temporary<br>Routing Mode|
|00h|01h|

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceInfo|
|E_SUCCESS|Get SBC<br>Temporary<br>Routing Mode|Mode|
|00h|01h||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Error handling of PID_BC_ROUTING_TEMP**

In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as listed in Table 7 and repeating the
ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

If the MaS cannot execute the WriteServiceID successfully then it shall not initiate or restart
the timer.

**Table 7 – PID_BC_ROUTING_TEMP Return Codes**

**Return Code ErrorName** **ErrorType**

F2h E_COMMAND_INVALID Invalid command

An invalid value is requested in the field ServiceID (ReadServiceID or
WriteSericeID).

EXAMPLE 04 The command “Set SBC Temporary Routing Mode” is received for a Router
Object that represents a TP1 Segment.

F8h E_DATA_VOID Void data

The service or the function (Property) is supported, but the request data is not valid
for this receiver.

2.3.1.4.7 Temporary Broadcast Routing Mode and Master Reset

**Erase Code** **Effect**

01h Confirmed Restart KNX default

02h Reset to default state KNX default

05h ResetParam KNX default

06h ResetLinks KNX default

07h Reset to default without IA KNX default

n.a. Local Reset to default state KNX default

n.a. Power Cycle KNX default

Savedate: Filename: page 41 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|||

|Return Code|ErrorName|ErrorType|
|---|---|---|
|F2h|E_COMMAND_INVALID|Invalid command|
|F2h|<br>An invalid value is requested in the field_ServiceID_ (ReadServiceID or<br>WriteSericeID).<br>EXAMPLE 04 The command “Set SBC Temporary Routing Mode” is received for a Router<br>Object that represents a TP1 Segment.|<br>An invalid value is requested in the field_ServiceID_ (ReadServiceID or<br>WriteSericeID).<br>EXAMPLE 04 The command “Set SBC Temporary Routing Mode” is received for a Router<br>Object that represents a TP1 Segment.|
|F8h|E_DATA_VOID|Void data|
|F8h|<br>The service or the function (Property) is supported, but the request data is not valid<br>for this receiver.|<br>The service or the function (Property) is supported, but the request data is not valid<br>for this receiver.|

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|KNX default|
|02h Reset to default state|KNX default|
|05h ResetParam|KNX default|
|06h ResetLinks|KNX default|
|07h Reset to default without IA|KNX default|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|KNX default|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

###### 2.3.1.5 PID_SECURITY_PROXY_GRP_KEY_TABLE (PID: 81)

**●** **Property name:** Security Proxy Group Key Table

**●** **Property Datatype:** PDT_GENERIC_19[]

**●** **Datapoint Type:** None

**●** **Access policy:** 00C/00C

**●** **Access level:** 2/2

2.3.1.5.1 Abstract Resource definition
The Proxy Group Key Table shall contain the Group Addresses, security keys and security
settings that the Security Proxy shall use to translate incoming and outgoing secure group
communication between any two Coupler interfaces.

The Security Proxy Group Key Table shall be located in the Primary Router Object. That
instance shall be used for all group communication between all medium interfaces.

2.3.1.5.2 Security
Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

Devices shall protect critical security information like keys, permission tables etc. from any
access. Even when having physical access to the device an attacker should not be able to
gain any critical information by for example reading out flash or using a JTAG interface.

2.3.1.5.3 Location and instances
Please refer to the requirements for PID_SECURITY_PROXY_GRP_KEY_TABLE in
clause 2.7.2.

2.3.1.5.4 Format

**Array index** **Security**
**GA** **Key**
**Settings**
(2 octets) (16 octets) (1 octet)
1
2
…
m

**Figure 24 – Proxy Group Keys Table**

The table shall be sorted according the numerical value of the Group Address from smallest
to largest.

- GA
The GA shall contain the Group Address.

- Key
This shall be the key that shall be used for secure group communication with the GA.

- Security Settings
The GA Security Flags shall be formatted as defined in Figure 25.

Savedate: Filename: page 42 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|GA|Key|Security<br>Settings|
|---|---|---|
|(2 octets)|(16 octets)|<br>(1 octet)|
||||
||||
||||
||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

b7 b6 b5 b4 b3 b2 b1 b0

Secure Security
reserved
Interfaces Flags

0 0 0 0

**Figure 25 – Security Settings**

   - Security Flags – conf and auth
This field shall determine if only authentication or confidentiality and authentication
shall be applied for secure group communication with the GA.

   - Bits b5 to b2
The bits b5 to b2 are reserved for future extensions and the MaC shall always write
these bit values with 0. For the functionality of the Security Proxy, the MaS shall
ignore these bits. The MaS may have to support these bits if they are used and
standardised in future system extensions.

   - Secure Interfaces
These fields shall indicate for each Medium Interface of the Security Proxy if the
communication on the Group Address for that entry shall be used Plain or Secure.
The encoding shall be as follows.

**Sec@Prim** **Communication on that Group Address on**
**the Primary Medium Interface shall be:**

0 Plain

1 Secure

**Sec@Sec** **Communication on that Group Address on**
**the Secondary Medium Interface shall be:**

0 Plain

1 Secure

These indications shall apply both for reception as well as for transmission, this is, if
this bit is cleared/set, the Security Proxy shall only accept plain/secured received
messages on that GA from that Interface and it shall as well transmit messages on
that GA on that interface plain/secure.

**Default value**

The default value shall be empty, this is, there shall be no elements; the table length shall be
0.

2.3.1.5.5 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of GA from smallest to largest.

Savedate: Filename: page 43 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|
|Secure<br>Interfaces|Secure<br>Interfaces|reserved|reserved|reserved|reserved|Security<br>Flags|Security<br>Flags|
|Sec@Prim|Sec@Sec|r|r|r|r|conf|auth|
|||0|0|0|0|||

|Sec@Prim|Communication on that Group Address on<br>the Primary Medium Interface shall be:|
|---|---|
|0|Plain|
|1|Secure|

|Sec@Sec|Communication on that Group Address on<br>the Secondary Medium Interface shall be:|
|---|---|
|0|Plain|
|1|Secure|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

2.3.1.5.6 Usage by the MaS
The MaS (Security Proxy) shall use the entries in the Security Proxy Group Key Table both
for verification and decryption of received messages on the contained Group Address from
any Medium Interface as well as for securing or not messages on that Group Address
according to the indications for transmission on any Medium Interface.

On reception of a message at the any side the GA shall firstly be searched in the Filter
Table. If found, the GA shall additionally be searched in the Security Proxy Group Key Table.

Table 8 specifies the handling in function of the combination of the security of the received
message, the presence of the contained Group Address in the Filter Table and the Security
Settings for that Group Address in the Security Proxy Group Key Table.

**Rule – exception handling for identical Security Settings at Rx-Side and Tx-Side**

If the GA is present in the Security Proxy Group Key Table and the Security Interfaces
settings are identical at the Rx-side and on the Tx-side then this shall be considered as a
configuration mistake and the message shall be blocked.

Savedate: Filename: page 44 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Table 8 – Evaluation of the Security Proxy Group Key Table**

Resource: Resource:
**Filter Table** **Security Proxy Group Key Table**

**Received** (FT) (SPGKT)

**Action** **Notes**

**message is** **Rx Side is secure?** **Tx Side is secure?**

**GA found in** **GA found**

Rx at Prim Side: Sec@Prim Tx at Prim Side: Sec@Prim

**FT?** **in SPGKT?**

Rx at Sec Side: Sec@Sec Tx at Sec Side: Sec@Sec

1 Don’t care No Don’t care. (not possible) (not possible) Block the message
2 Plain Yes No (not possible) (not possible) Pass to the other side
unchanged

3.1 Plain Yes Yes No Yes Encrypt the message and Normal case
(GA is plain on Rx Side) (GA is secure on Tx Side) pass it to the other side.

3.2 Plain Yes Yes Yes No Block the message Somebody is sending plain on
(GA is secure on Rx Side) (GA is plain on Tx Side) a secure side. May be a

hacker, or a misconfiguration,
but should not spread to the
other side.
4.1 Secure Yes Yes No Yes Block the message Somebody is sending a secure
(GA is plain on Rx Side) (GA is secure on Tx Side) message on a plain side. This

is likely a misconfiguration. (Or
a hacker hoping to get through
the Security Proxy)
4.2 Secure Yes Yes Yes No Decrypt the message and Normal case.
(GA is secure on Rx Side) (GA is plain on Tx Side) pass it to the other side.

5 Secure Yes No (not possible) (not possible) Pass to the other side
unchanged

Savedate: Filename: page 45 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Case|Received<br>message is|Resource:<br>Filter Table<br>(FT)|Resource:<br>Security Proxy Group Key Table<br>(SPGKT)|Col5|Col6|Action|Notes|
|---|---|---|---|---|---|---|---|
|**Case**|**Received**<br>**message is**|**GA found in**<br>**FT?**|**GA found**<br>**in SPGKT?**|<br>**Rx Side is secure?**<br>Rx at Prim Side: Sec@Prim<br>Rx at Sec Side: Sec@Sec|**Tx Side is secure?**<br>Tx at Prim Side: Sec@Prim<br>Tx at Sec Side: Sec@Sec|**Tx Side is secure?**<br>Tx at Prim Side: Sec@Prim<br>Tx at Sec Side: Sec@Sec|**Tx Side is secure?**<br>Tx at Prim Side: Sec@Prim<br>Tx at Sec Side: Sec@Sec|
|1|Don’t care|No|Don’t care.|<br>(not possible)|(not possible)|Block the message||
|2|Plain|Yes|No|(not possible)|(not possible)|Pass to the other side<br>unchanged||
|3.1|Plain|Yes|Yes|No<br>(GA is plain on Rx Side)|Yes<br>(GA is secure on Tx Side)|Encrypt the message and<br>pass it to the other side.|Normal case|
|3.2|Plain|Yes|Yes|Yes<br>(GA is secure on Rx Side)|No<br>(GA is plain on Tx Side)|Block the message|Somebody is sending plain on<br>a secure side. May be a<br>hacker, or a misconfiguration,<br>but should not spread to the<br>other side.|
|4.1|Secure|Yes|Yes|No<br>(GA is plain on Rx Side)|Yes<br>(GA is secure on Tx Side)|Block the message|Somebody is sending a secure<br>message on a plain side. This<br>is likely a misconfiguration. (Or<br>a hacker hoping to get through<br>the Security Proxy)|
|4.2|Secure|Yes|Yes|Yes<br>(GA is secure on Rx Side)|No<br>(GA is plain on Tx Side)|Decrypt the message and<br>pass it to the other side.|Normal case.|
|5|Secure|Yes|No|(not possible)|(not possible)|Pass to the other side<br>unchanged||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Error and exception handling**

If the PID_SECURITY_PROXY_GRP_KEY_TABLE is empty, or if the Load State of the
Primary Router Interface Object is not “Loaded”, the algorithm in 2.2.2.3 shall evaluate the
“Proxy Group Key Table” as empty, i.e. the Coupler will not act as Security Proxy for
T_Data_Group messages in these cases.

Additionally, the MaS may either rely on the proper contents as set by the MaC, or the MaS
may perform any of the following or further verifications of the contents of the Security Proxy
Group Key Table. This shall not be done if the entries of the table are set by the MaC, but on
the transition of the Load State of the containing Router Object from “Loading” to “Loaded”.
The following are optional, implementation specific verifications that may cause the Load
State to become “Error”.

   - The Group Address 0000h is contained in any field GA.

   - An invalid or impossible combination of the Security Flags is set.

EXAMPLE 5 In the current definition of KNX Data Security, it is not possible that the “conf” flag is
set and the “auth” flag is cleared.
EXAMPLE 6 As indicated under “Rule” in 2.3.1.5.6, identical settings of the Secure Interfaces in the
Security Settings are a configuration mistake.

   - The list is not sorted.

   - The list contains one or more double entries.
**Master Reset**

The Property value shall not change after a Basic Restart.

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX default

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA KNX default

n.a. Local Reset to default state KNX default

n.a. Power Cycle not influenced

##### 2.3.2 LTE Address Routing Table Object

###### 2.3.2.1 General
This overview only lists the Properties that are relevant for the Security Proxy.

The LTE Address Routing Table Object (Interface Object Type = 7) shall hold the Properties
as listed in 9 (This table only gives an overview. For the mandatory and optional Properties,
please refer to 2.7).

The security conditions for accessing these Properties are specified in the detailed Property
descriptions further.
Therefore, please refer to the detailed Property definitions below for the requirements
concerning access.

Savedate: Filename: page 46 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX default|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|KNX default|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**Table 9 – LTE Address Routing Table Object**

**Property Name** **Property Identifier** **Property Datatype**
Security Proxy Zone Key Table 53 = PID_SECURITY_PROXY_ZONE_KEY_TABLE PDT_GENERIC_20[]

###### 2.3.2.2 PID_SECURITY_PROXY_ZONE_KEY_TABLE (PID: 53)

**●** **Property name:** Security Proxy Zone Key Table

**●** **Property Datatype:** PDT_GENERIC_20[]

**●** **Datapoint Type:** None

**●** **Access policy:** 00C/00C

**●** **Access level:** 2/2

2.3.2.2.1 Abstract Resource definition
The Proxy Zone Key Table shall contain the EFF and Zone Addresses, the security keys and
the security setting that the Security Proxy shall use to translate incoming and outgoing
secure property multicast communication (LTE-Mode) on this Coupler interface to and from
plain on the other Coupler interface.

Both communication ways shall be controlled by this one single Resource.

2.3.2.2.2 Security
Please refer to the above access requirements. These requirements are exclusive: other
Roles, security features or services shall not have access to this Property.

Devices must protect critical security information like keys, permission tables etc. from any
access. Even when having physical access to the device an attacker should not be able to
gain any critical information by for example reading out flash or using a JTAG interface.

2.3.2.2.3 Location and instances
Please refer to the requirements for PID_SECURITY_PROXY_ZONE_KEY_TABLE in
clause 2.7.3.

2.3.2.2.4 Format

**Array index** **TSAP** **Key** **Security Settings**
**Reserved** **EFF** **Zone Address**
**(4 bits)** **(4 bits)** **(2 octets)** **(16 octets)** **(1 octet)**
1 0000
2 0000
… 0000
n 0000

**Figure 26 – Proxy Zone Keys Table**

The table shall be sorted according to the numerical value of the TSAP from smallest to
largest.

  - _TSAP_
The TSAP shall be a unique key in this table and shall be the combination of the EFF + Zone
Address.

Savedate: Filename: page 47 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Property Name|Property Identifier|Property Datatype|
|---|---|---|
|Security Proxy Zone Key Table|53 = PID_SECURITY_PROXY_ZONE_KEY_TABLE|PDT_GENERIC_20[]|

|Col1|TSAP|Col3|Key|Security Settings|
|---|---|---|---|---|
|**Reserved**|**EFF**|**Zone Address**|||
|**(4 bits) **|**(4 bits) **|**(2 octets) **|**(16 octets) **|**(1 octet) **|
|0000|||||
|0000|||||
|0000|||||
|0000|||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

  - _EFF_
The EFF (Extended Frame Format) of the Extended Control Field.

  - _Zone Address_
The Zone Address shall be equal to the fully qualified Zone Address, even every wildcard
address shall be explicit in this table.

  - _Key_
This shall be the key that shall be used for secure Zone Address communication.

  - _Security Settings_
This field shall indicate for each Medium Interface of the Security Proxy if the communication
on the TSAP for that entry shall be used Plain or Secure and if only authentication or
confidentiality and authentication shall be applied for secure communication. The Security
Settings shall be formatted as defined in Figure 25.

**Default value**

The default value shall be empty, this is, there shall be no elements; the table length shall be
0.

2.3.2.2.5 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of the TSAP from smallest to
largest.

2.3.2.2.6 Usage by the MaS
The MaS (Security Proxy) shall use the entries in the Security Proxy Zone Key Table both
for verification and decryption of received secure property multicast communication
(LTE-Mode) received through this TSAP from any Medium Interface, as well as for securing
or not messages transmitted on that property multicast communication (LTE-Mode) on any
Medium Interface.

If the PID_SECURITY_PROXY_ZONE_KEY_TABLE is empty, or if the Load State of the
Router Interface Object is not “Loaded”, the algorithm in 2.2.2.4 shall evaluate the “Proxy
Zone Key Table” as empty, i.e. the Coupler will not act as Security Proxy for
T_Data_Tag_Group messages in these cases.

**Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX default

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA KNX default

n.a. Local Reset to default state KNX default

n.a. Power Cycle not influenced

Savedate: Filename: page 48 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX default|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|KNX default|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

##### 2.3.3 Security Interface Object
Because the Security Proxy requires secure Device Management, the Coupler with Security
_Proxy functionality shall implement KNX Data Security and thus have a Security Interface_
Object ([05]).

The following Resources are not only used for the Coupler’s management, but also by the
_Security Proxy:_

   - PID_SEQUENCE_NUMBER_SENDING

   - PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE

   - PID_SECURITY_FAILURES_LOG

###### 2.3.3.1 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE

 _Additionally, the specification of PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE in [05] has to be_
_adjusted as follows. Clause 2.3.5.8.1 “Abstract Resource definition” shall be rephrased as follows._

The Security Individual Address Table shall store the IAs of the communication partners
from which the MaS is configured to receive Data Security messages. These shall be the
following devices.

   - Devices to which the the MaS has secure links.

   - Devices for which the MaS acts as a Secure Proxy.

The table shall additionally for each IA store the Last Valid SeqNr that is accepted from any
message from that IA.

#### 2.4 Management Procedures

 _This clause is not intended for inclusion in the KNX Specifications._

This document does not introduce new or modify existing Management Procedures.

#### 2.5 Configuration Procedures

##### 2.5.1 General requirement
The MaC shall perform a Master Reset with Erase Code “Reset to Default State” or “Reset
to Default State without IA”, as appropriate, in the following cases.

   - If the Coupler Type of the Coupler is changed (Line – or Backbone Coupler, TP1
Bridge, TP1 Repeater or Segment Coupler).

   - If the Security Mode of the Coupler is changed.

##### 2.5.2 Configuration Procedure for a complete download
The configuration procedure in [06] clause 2.6.4 shall be extended directly before MergeID 3
by the following.

It shall be prevented that during the download, any unwanted message, Plain or Secure, is
passed into any unintended direction. The Load State Machine dependencies of the
Resources (Filter Table, Security Proxy Group Key Table …) guarantee that no message is
passed in the unloaded state. Therefore, the MaC shall set the LSMs to „Unloaded“ as soon
as possible in any Configuration Procedure and back to „Loaded“ only as late as possible.

Savedate: Filename: page 49 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

**IF there is any translation between Secure and Plain communication in this Coupler THEN**
/* Write the Proxy Group Key table. */
DMP_InterfaceObject_Write_R(OI =ObjectIndex, PID = PID_SECURITY_PROXY_ GRP_KEY_TABLE,
start_index = 1, element_count = count, data = key_table);
**FOR EACH Router Object**
/* Write the routing control bits. */
DMP_InterfaceObject_Write_R(OI = ObjectIndex, PID = PID_PTP_CONFIG, start_index = 1,
element_count = 1, data = point-to-point_routing_configuration);
DMP_InterfaceObject_Write_R(OI = ObjectIndex, PID = PID_BC_CONFIG, start_index = 1,
element_count = 1, data = point-to-point_routing_configuration);
**IF secure communication on this SN has to be translated to plain THEN**

/* Write the Proxy Zone Key table. */
DMP_InterfaceObject_Write_R(OI =ObjectIndex, PID = PID_SECURITY_PROXY_ZONE_KEY_TABLE, start_index = 1, element_count = count, data = key_table);

**ENDIF**
**NEXT**

##### 2.5.3 Configuration Procedure for a partial download – Group Addresses
The configuration procedures in [06] clause 2.6.6 shall be extended directly before setting
the Load State of the Router Object to ‘Loaded’ by the following.

**IF there is any translation between Secure and Plain communication in this Coupler THEN**
/* Write the Security Proxy Group Key table. */
DMP_InterfaceObject_Write_R(OI =ObjectIndex, PID = PID_SECURITY_PROXY_ GRP_KEY_TABLE,
start_index = 1, element_count = count, data = key_table);
**FOR EACH Router Object**
/* Write the routing control bits. */
DMP_InterfaceObject_Write_R(OI = ObjectIndex, PID = PID_PTP_CONFIG, start_index = 1,
element_count = 1, data = routing_control);
DMP_InterfaceObject_Write_R(OI = ObjectIndex, PID = PID_BC_CONFIG, start_index = 1,
element_count = 1, data = point-to-point_routing_configuration);
**IF secure communication on this SN has to be translated to plain THEN**
/* Write the Proxy Zone Key table. */
DMP_InterfaceObject_Write_R(OI =ObjectIndex, PID = PID_SECURITY_PROXY_ZONE_KEY_TABLE, start_index = 1, element_count = count, data = key_table);

**ENDIF**
**NEXT**

#### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

The Security Proxy is meant to allow secure communication on one of its connected
Subnetworks and plain communication on another connected Subnetwork and despite
allowing communication between both by translating between plain – and secure
communication in both directions.

It is meant as an intermediate solution to couple KNX Subnetworks with full secure
communication to KNX Subnetworks with (partially) plain communication.

EXAMPLE 7 This allows setting of an RF Line with fully secured communication and communicate over this
Security Proxy in the KNX TP1/RF Media Coupler with ‘existing’ TP1 devices that do not support KNX Data
Security yet.

Savedate: Filename: page 50 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

#### 2.7 Profile definition

 _This clause shall be integrated in [04]._

The “Security Proxy” feature set is an optional extension of the existing Coupler Profiles.

**Feature**

1. KNX Data Security [05] M
2. Extended routing algorithm 2.2.2 M
3. Segment Coupler [10] M

##### 2.7.1 Interface Objects and Properties

###### 2.7.1.1 Interface Objects
The “Security Proxy” is an extension to any base Coupler Profile, of which the Interface
Objects shall be implemented as specified in Volume 6 ([04]) for that base Profile.
_Additionally, the following shall be implemented._

**Security**

**Proxy**

**Interface Object**

0 Device Object M
6 Router Object M M
17 Security Interface Object M

Savedate: Filename: page 51 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Col1|Feature|Col3|Security Proxy|
|---|---|---|---|
|1.|KNX Data Security|[05]|M|
|2.|Extended routing algorithm|2.2.2|M|
|3.|Segment Coupler|[10]|M|

|Col1|Security<br>Proxy|Col3|
|---|---|---|
|**Object Type**<br>**Interface Object**|**Primary Side**|**Secondary Side**|
|0 Device Object|M|M|
|6 Router Object|M|M|
|17 Security Interface Object|M|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

##### 2.7.2 Router Object (Object Type 6)

**Coupler with Security Ext**

**Instance**

**Instance**

**Secondary**

**Primary Side**

Feature **Side**

1. PID_PTP_CONFIG 2.3.1.1 M M
2. PID_BC_CONFIG 2.3.1.2 M M
3. PID_PTP_ROUTING_TEMP 2.3.1.3 M X
4. PID_BC_ROUTING_TEMP 2.3.1.4 M M
5. PID_SECURITY_PROXY_GRP_KEY_TABLE 2.3.1.5 M X
a PID_PTP_ROUTING_TEMP is mandatory in the Router Object of the Primary Side. It is not allowed in a Router

Object of the Secondary Side.

###### 2.7.2.1 PID_BC_ROUTING_TEMP - ServiceIDs

**Medium represented**

**Command** **by the Router Object**

**WriteServiceIDs** **TP1** **PL110** **RF** **KNX IP**

**Nr** **Name**

WriteServiceID 00h Set BC Temporary Routing Mode M M M M

WriteServiceID 01h Set SBC Temporary Routing Mode X M M M

**ReadServiceIDs**

**Nr** **Name**

ReadServiceID 00h Get BC Temporary Routing Mode M M M M

ReadServiceID 01h Get SBC Temporary Routing Mode X M M M

##### 2.7.3 LTE Address Routing Table Object (Object Type 7)

Feature

7. PID_SECURITY_PROXY_ZONE_KEY_TABLE 2.3.2.2 M

Savedate: Filename: page 52 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Feature|Col2|Col3|Coupler with Security Ext|Col5|
|---|---|---|---|---|
|Feature|Feature||**Instance**<br>**Primary Side**|**Instance**<br>**Secondary**<br>**Side**|
|1.|PID_PTP_CONFIG|2.3.1.1|M|M|
|2.|PID_BC_CONFIG|2.3.1.2|M|M|
|3.|PID_PTP_ROUTING_TEMP|2.3.1.3|M|X|
|4.|PID_BC_ROUTING_TEMP|2.3.1.4|M|M|
|5.|PID_SECURITY_PROXY_GRP_KEY_TABLE|2.3.1.5|M|X|
|a|PID_PTP_ROUTING_TEMP is mandatory in the Router Object of the Primary Side. It is not allowed in a Router<br>Object of the Secondary Side.|PID_PTP_ROUTING_TEMP is mandatory in the Router Object of the Primary Side. It is not allowed in a Router<br>Object of the Secondary Side.|PID_PTP_ROUTING_TEMP is mandatory in the Router Object of the Primary Side. It is not allowed in a Router<br>Object of the Secondary Side.|PID_PTP_ROUTING_TEMP is mandatory in the Router Object of the Primary Side. It is not allowed in a Router<br>Object of the Secondary Side.|

|Command|Col2|Medium represented<br>by the Router Object|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**WriteServiceIDs**|**WriteServiceIDs**|**TP1**|**PL110**|**RF**|**KNX IP**|
|**Nr**|**Name**|||||
|WriteServiceID 00h|Set BC Temporary Routing Mode|M|M|M|M|
|WriteServiceID 01h|Set SBC Temporary Routing Mode|X|M|M|M|
|**ReadServiceIDs**|**ReadServiceIDs**|||||
|**Nr**|**Name**|||||
|ReadServiceID 00h|Get BC Temporary Routing Mode|M|M|M|M|
|ReadServiceID 01h|Get SBC Temporary Routing Mode|X|M|M|M|

|Col1|Feature|Col3|Coupler with Security Ext|
|---|---|---|---|
|7.|PID_SECURITY_PROXY_ZONE_KEY_TABLE|2.3.2.2|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

##### 2.7.4 Security Interface Object (Object Type 17)

NOTE 13 As indicated in 2.7, the support of KNX Data Security is mandatory. As the Security Proxy
decrypts received S-A_Data-messages, it needs to store the Last Valued Sequence Numbers of the secure
senders and therefore PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE is mandatory.

**Property Identifier**

1 PID_OBJECT_TYPE M 3FF/0CC 3/X
54 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE M 00C/00C 2/2

#### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

The presence of the Security Proxy functionality in the Coupler can be marked in the product
description in the ETS MT (see below). On the bus, it can be discovered by the presence of
the Properties specified in 2.3.1.

### 3 Impact and dependencies

#### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

Indications about the integration in the KNX Specifications are given at the appropriate
locations in the above.

#### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The proposed specification does not break any existing Configuration Interworking.
Additionally, through the routing of point-to-point and (system) broadcast messages the
configuration of any MaS on either side of the Security Proxy with the MaC (ETS) on the
other side.

#### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

The pure runtime Interworking is not affected by the proposed specification. Additionally, the
proposed specification adds runtime Interworking by allowing secure – and plain devices to
communicate with each other.

#### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

The functionality specified in this AN can be implemented as soon as the proposal is
accepted in Release for Voting.

Appropriate test specifications have to be established.

Savedate: Filename: page 53 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx

|Property Identifier|Support|Access Policy|Access levels|
|---|---|---|---|
|1 PID_OBJECT_TYPE|M|3FF/0CC|3/X|
|54 PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE|M|00C/00C|2/2|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

#### 3.5 Integration and common tool impact

##### 3.5.1 ETS Product data extension
The necessary information shall be included in the ETS product data.

   - SupportsSecurityProxy

   - MaxSecureProxyGrpKeyTableSize

   - MaxSecureProxyZoneKeyTableSize

##### 3.5.2 ETS impact

###### 3.5.2.1 Group Keys
The GroupKey is a property of the GroupAddress in ETS. This shall be extended by a flag
per Group Address and Subnetwork whether or not security is enabled for this Group
Address.

The linking rules, device image creation and UI shall be modified accordingly.

If the configuration requires a Security Proxy, the Coupler product shall be checked if it
supports this functionality.

Since ETS does not currently support LTE-Mode linking, the corresponding proxy tables will
not be filled by ETS.

###### 3.5.2.2 Security Routing control settings
The settings of the parameter Point-to-point Routing Configuration (2.3.1.1) shall be made
available to the installer as ETS-managed parameters.

If the Coupler is not used as Security Proxy, then the value of PTP_ROUTE shall be set to
RULE and the value of BC_ROUTE shall be set to ALL.

If the Coupler is used as Security Proxy, the default values of the PTP_ROUTE and
BC_ROUTE settings shall both be BLOCK.

As it is possible that implementation specific Parameters or implementation specific default
values of standard Parameters allow the passing of messages that should be blocked or
converted by the fully configured Security Proxy function, ETS should in the background and
in project checks verify that any Coupler Parameter (Filter Table, Security Proxy Group Key
Table…) needs to be downloaded for proper secure functioning. ETS should give a warning
that the Coupler needs to be downloaded fully (AP) before the expected security is reached.

EXAMPLE 08 Before the Coupler is fully downloaded, it may be possible that Plain Frames are routed from a
Secured Segment into an unprotected Segment, thus allowing control of functions in that unprotected Segment.
EXAMPLE 09 Vice versa, plain Messages may be passed from the Plain Segment in the Secured Segment.
This will not allow controlling functions at the Secure side, but, it will reveal information from the Plain side.

3.5.2.2.1 Changing Coupler Type – do Master Reset
As there is no dedicated control for enabling or disabling the Security Proxy functionality in
the Coupler, switching the Coupler Type requires that several Resources need to be verified
and possibly reset. Therefore, when the MaC changes the Coupler Type, it shall at first
perform a Master Reset with Erase Code “Reset to default state” or “Reset to default state
without IA”.

Savedate: Filename: page 54 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

The MaC shall also perform a Master Reset when the Security Mode of the Coupler is
changed.

3.5.2.2.2 Security Proxy and TP1 Repeater
If the Coupler with Security Proxy functionality is projected between two TP1 Segments and
not as Line – or Backbone Coupler then, the MaC shall not allow configuring it as a TP1
Repeater. Instead, the MaC shall only allow configuring it as a Segment Coupler.

Savedate: Filename: page 55 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

## Annex A
###### (informative)

## Code examples

#### A.1 Temporary Unicast White List

This example illustrates how the Temporary Unicast White List as specified in 2.2.2.5 and
2.3.1.3 could be implemented. Though the notation is “C” like, it is not intended to provide
complete, optimal or even compilable code.

Design decisions of the sample are:

  - A fixed maximum number MAX_USERADDRESSES of Temporary Unicast White
List originators

  - A fixed maximum number MAX_RANGES_PER_WHITE_LIST of target ranges in
each Temporary Unicast White List

  - For compactness, invalid Individual Addresses are represented by 0, so unicast
communication from or to the address 0.0.0 will never be allowed. This restriction can
easily be removed by introducing additional IsValid fields.

The sample assumes that

  - A (relative) clock value (in seconds) is available by the function get_tick_count()

A single Temporary Unicast White List will be represented by the following structure:
```
struct AddressRange_t {
  uint16_t StartAddress;
  uint16_t Count;
};
struct WhiteList_t {
  uint16_t UserAddress;
  clock_t Expires;
  AddressRange_t PartnerRange[MAX_RANGES_PER_WHITE_LIST];
};

```
The collection of all Temporary Unicast White List is then:
```
WhiteList_t WhiteList[MAX_USERADDRESSES];

```
Savedate: Filename: page 56 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

Basic functions operating on a WhiteList_t entry:
```
// Checks if the passed Temporary Unicast White List is still valid (not expired)
bool IsWhiteListValid(WhiteList_t* whiteList)
{
  return whiteList->Expires >= get_tick_count();
}
// Updates the Expires field
void UpdateWhiteListExpiry(WhiteList_t* whiteList)
{
  whiteList->Expires = get_tick_count() + 60;
}
// Clears a Temporary Unicast White List
void ClearWhiteList(WhiteList_t* whiteList)
{
  memset(whiteList, 0, sizeof(WhiteList_t));
}
// checks whether a valid Temporary Unicast White List contains a given Destination Address
bool WhiteListContains(WhiteList_t* whiteList, uint16_t targetAddress)
{
  for (int i = 0; i < MAX_RANGES_PER_WHITE_LIST; i++)
  {
    if (targetAddress >= whiteList->PartnerRange[i].StartAddress
     && targetAddress < whiteList->PartnerRange[i].StartAddress + whiteList>PartnerRange[i].Count)
    {
      return true;
    }
  }
  return false;
}
// adds a Destination Address range to a Temporary Unicast White List
bool WhiteListAdd(WhiteList_t* whiteList, AddressRange_t partnerAddressRange)
{
  for (int i = 0; i < MAX_RANGES_PER_WHITE_LIST; i++)
  {
    if (whiteList->PartnerRange[i].Count == 0)
    {
      // entry is free
      whiteList->PartnerRange[i] = partnerAddressRange;
      return true;
    }
  }
  return false;
}

```
Savedate: Filename: page 57 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

Basic functions operating on the collection of all Temporary Unicast White Lists:
```
// Find the Temporary Unicast White List for the given User Address; 
// returns null if not found (or already expired)
WhiteList_t* FindWhiteList(uint16_t userAddress)
{
  for (int i = 0; i < MAX_USERADDRESSES; i++)
  {
    if (WhiteList[i].UserAddress == userAddress)
    {
      if (!IsWhiteListValid(&WhiteList[i]))
      {
        // entry is expired
        ClearWhiteList(&WhiteList[i]);
      }
      else
      {
        return &WhiteList[i];
    }
  }
  return null;
}
// Adds a new Temporary Unicast White List for the given User Address; 
// call only if FindWhiteList returned null!
WhiteList_t* AddNewWhiteList(uint16_t userAddress)
{
  for (int i = 0; i < MAX_USERADDRESSES; i++)
  {
    if (WhiteList[i].UserAddress == 0 || !IsWhiteListValid(&WhiteList[i]))
    {
      ClearWhiteList(&WhiteList[i]);
      WhiteList[i].UserAddress = userAddress;
      UpdateWhiteListExpiry(&WhiteList[i]);
      return &WhiteList[i];
    }
  }
  return null;
}
bool IsInWhiteList(uint16_t userAddress, uint16_t partnerAddress)
{
  WhiteList_t* whiteList = FindWhiteList(userAddress);
  if (whiteList != null)
  {
    return WhiteListContains(whiteList, partnerAddress);
  }
  return false;
}

```
Functions implementing the required algorithms:

To determine if unicast communication between two addresses is allowed.
```
bool IsUnicastAllowed(uint16_t address1, uint16_t address2)
{
  return IsInWhiteList (address1, address2) || IsInWhiteList (address2, address1);
}

```
Savedate: Filename: page 58 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN192** **Coupler security extensions**

Worker functions for PID_PTP_ROUTING_TEMP, Service ID = 00h:
```
bool AddToWhitelist(uint16_t userAddress, AddressRange_t partnerAddressRange)
{
  WhiteList_t* whiteList = FindWhiteList(userAddress);
  if (whiteList == null)
  {
    // Temporary Unicast White List not found (or expired); create a new Temporary Unicast
White List
    whiteList = AddNewWhiteList(userAddress);
    if (whiteList == null)
    {
      // no more Temporary Unicast White Lists available
      return false;
    }
  }
  if (partnerAddressRange.Count == 0 || WhiteListAdd(whiteList, partnerAddressRange))
  {
    UpdateWhiteListExpiry(whiteList);
    return true;
  }
  else
  {
    // could not add target to Temporary Unicast White List
    return false;
  }
}

```
Worker functions for PID_PTP_ROUTING_TEMP, Service ID = 01h:
```
void RevokeWhitelist(uint16_t userAddress)
{
  WhiteList_t* whiteList = FindWhiteList(userAddress);
  if (whiteList != null)
  {
    ClearWhiteList(whiteList);
  }
}

```
Savedate: Filename: page 59 of 59
2022 01 04 AN192 v06 Coupler security extensions AS docx


-----

