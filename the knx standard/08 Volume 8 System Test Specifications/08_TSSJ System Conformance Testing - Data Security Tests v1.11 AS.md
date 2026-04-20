## KNX System Conformance Testing 8

### Test Suite Supplement J

 KNX Data Security Tests

Summary

This document contains the KNX Data Security Tests in accordance with

  - AN158/13 v07 Data Security AS

  - AN163/13 v04 Extended Interface Object Addressing DV

  - AN177/15 v03 Extended Memory Services AS

  - AN170/15 v03 Group Object Diagnostics AS

  - AN193/18 v04 Access Policies AS

  - AN194/19 v02 Master Reset of Resources AS

All these tests are included in one document, as all of them are relevant for KNX Secure
devices. The tests according AN163, AN170 and AN 177 could also be applied for non-secure
devices.


-----

###### Document Updates

|Version|Date|Modifications|
|---|---|---|
|0.0|2015.08|Establishing of a catalogue of test cases for KNX Data Security<br>devices according Application Note 158/13|
|0.1|2016.11|Reworking catalogue, updating acc. Latest version of AN158,<br>AN163, AN170|
|0.1.1|2016-11-17|Positive test cases of 1.2.1 completed|
|0.1.2|2016-11-17|Role test cases enhanced|
|0.1.2|2016-11-23|Enhance check for ToolKey encrypted access while security<br>interface is unloaded and remove check from all other tests with<br>tool key access during unload|
|0.1.3|2016-11-<br>29/30|Complete revision of the previous version, especially with regard<br>to AN158|
|0.1.4|2017-03|Publication as WD to KonCert|
|0.1.6|2017-04|Renewedpublication of updated WD to KonCert|
|0.1.7|2017-05|Revision of document on basis of ABB comments -|
|0.1.8|2017-05|Update inpreparation of KonCert/KSG Meeting on 22/5/17|
|0.1.9|2017-05|Update document structure Clause 3, regarding KonCert/KSG<br>Meeting on 22/5/17|
|0.1.10|2017-05|Updatepreparation online meeting 14/6/17|
|0.1.11|2017-08|Updating document in preparation for extra-ordinary September<br>Voting Cycle – Stage 1 – intermediate circulation to KonCert|
|1.0|2017-11|Updating document in preparation for regular October Voting<br>Cycle|
|1.1|2018-05|Preparation for Final voting|
|1.2|2018-06|resolution of comments from final voting – updating of all access<br>policies – removal of “secure as faulty” telegrams – preparation for<br>renewed final voting in accordance with Certification Group<br>decision 20/6/18|
|1.3|2018-10|Further improvements following voting, following audits –<br>resolution of comments from 2nd Final Voting – updated Sync Req<br>tests to make them more clear – other updates following<br>conclusions of KSG 0918|
|1.4|2018-10|Preparation for 3rd final voting – insertion of further<br>improvememnts following product audits|


-----

|1.5|2019-05|Resolution of Comments from 3rd final voting and improvements<br>following conducted product audits.<br>3.7.2.14: removed telegrams for activation/deactivation of<br>programming mode. 3.2.14: changed to 3/3/3 and GK3.<br>3.1.7/3.1.18: SBC flag in response changed to 'service'.<br>3.8.17.1: fixed sending GO (2/2/2) and corresponding Group Key<br>(GK2).<br>3.8.17.5: Fixed reponses (error FDh) on empty<br>PID GO SECURITY FLAGS array.<br>_ _ _<br>3.8.4.3: changed 'required BDUT setting' and 'purpose' according<br>to TSS J v1.4.<br>3.8.11.5: Changed the error code when reading an empty Security<br>IA Table from ?? to FDh.<br>3.8.8.2: removed obsolete 'Acceptance' text.<br>3.8.13.1/3.8.13.8: changed text 'required BDUT setting' according<br>to TSS J v1.4.<br>5.1.2: fixed number of octets to read (was FE, now F9).<br>3.8.8.4: added 2 telegrams to read the security mode when SM is<br>off. Added 2 telegrams to deactivate security mode when SM is on.<br>3.7.2.4/5: Added tests for security mode deactivated.<br>3.7.2.9: all process times set to 0. Added test for unsupported<br>EraseCode FEh. Added check for programming mode.<br>3.7.2.10: removed KeyWrite responses for plain and A-only (SM<br>on).<br>3.8.2.3/3.8.4.3/3.8.6.3/3.8.7.3/3.8.11.4/3.8.12.9/3.8.13.7/3.8.14.4/3.<br>8.15.5/4.5.1/4.5.4/4.5.6: changed DptMain/Sub response values to<br>zeros (no-DPT defined) or wild-cards (DPT defined).<br>3.8.9.5/3.8.10.5/3.8.11.5/3.8.17.5: removed local/02/07 resets.<br>3.8.15.7: changed Factory Reset without IA (SeqnrSend >= FF 00<br>00 00 00 00) to re-init.<br>3.8.18.1/2: changed return codes from FCh to FBh when trying to<br>write PIDs with A-only with SM on.<br>3.8.18.3: changed return codes from FCh to FBh when trying to<br>write PIDs plain with SM on.<br>4.4.6: added extra octet in data (2 elements, 2 octets).<br>5.1.5: replaced hard coded address with datasheet variable.<br>Changed Return Code from FCh to FBh.<br>5.2.5: removed comment 'other appropriate negative retun code'.<br>3.1.9: Changed telegrams according to TSS J v1.5.<br>3.1.10: Added Sync telegrams to correct local SeqNum as a result<br>of tests in 3.1.9.<br>3.1.23: Added Sync telegrams to correct local SeqNum as a result<br>of tests in 3.1.22.<br>3.8.1.2: Changed all return codes from ?? to FBh.<br>3.8.7.4/3.8.8.7/3.8.9.5/3.8.10.5/3.8.11.5/3.8.12.1/3.8.13.6/3.8.14.5/<br>3.8.15.7/3.8.17.5: Added power cycle tests and Basic Restart tests<br>according AN194 v2.<br>General: added references to AN193 and AN194 in header info.<br>3.8.12.8: test case temporarily removed.<br>3.8.8.7/3.8.13.6/3.8.14.5: changed hard-coded BDUT IA address<br>after reset into variable.<br>4.6.2: removed telegrams. Test already performed by 3.8.8.2.<br>3.7.2.8: adapted the test case according to new specifications.|
|---|---|---|


-----

|1.6|2019-05|5.1.5: Changed Return Code from FCh to FBh. Added additional<br>test wrting on boundary of Read Only and Write Only memory.<br>3.8.12.8: test case temporarily removed.<br>3.8.8.7/3.8.13.6/3.8.14.5: changed hard-coded BDUT IA address<br>after reset into variable.<br>4.6.2: removed telegrams. Test already performed by 3.8.8.2.<br>3.7.2.8: adapted the test case according to new specifications.|
|---|---|---|
|1.7|2019-06|**3.1.28**: Changed required BDUT setting (PID=1).<br>**3.3.x**: Where needed the SeqNum.local and SeqNum.remote were<br>changed to hard coded values.<br>**3.3.17**: Fixed value for Challenge. Changed acceptance text and<br>added additional comments.<br>**3.3.19**: Changed Faulty telegram into normal telegram with<br>AddressTypeWrong=yes.<br>**3.8.4.3**: DPT Main/Sub in response changed to wild cards.<br>**3.8.12.2**: Removed sequence number synchronization after<br>confirmed restart.<br>**3.8.15.4**: Changed purpose and procedure texts.<br>**3.8.15.7**: Changed initially written sequence number and read<br>sequence number after power down.<br>**4.1.7/4.1.8**: PID changed to PID_TABLE.<br>**4.1.7/4.1.8/4.2.11/4.3.11/4.4.11**: User Interface Objects changed to<br>50001.<br>**4.1.10**: Changed PID to 52. Changed User Interface Object type<br>(50001). Fixed wrong Return Code (F4h into FCh).<br>**4.2.1**: Added alternative telegrams for PID in routers.<br>**4.2.4**: Added missing test with PID 080Ch.<br>**4.2.5**: Removed payload from telegram with ElemCount=0.<br>**4.2.12**: Test case changed to 'optional'.**4.2.13**: Changed Interface<br>Object to 3.<br>**4.6.1**: Changed property to PID_RUN_STATE_CONTROL.<br>**4.6.1/5.1.6**: bugfix-the template specified an incorrect BDUT<br>address.<br>**4.5.1/4/6**: added a (deactivated) telegram for alternative PDT<br>response.<br>**4.5.3**: Adapted test case for 'not existing Object Instance'.<br>**4.5.5**: Changed property index (low byte test) from 12h to FFh.<br>**4.5.6**: Changed expected property index to wildcards.<br>**4.5.7**: Added new test case for 'A_PropertyExtDescription_Read,<br>not existing PID'.<br>**4.6.5/4.7.5**: Changed the tested property to<br>PID_MANUFACTURER_ID in the Device Object.<br>**4.6.x/4.7.x**: All test cases declared 'conditional'.<br>**5.1.3/5.2.2**: Test case declared 'conditional'.<br>**5.1.6/5.2.5**: Test cases declared 'optional'.<br>**5.1.6**: Added telegrams for testing data size=0.|


-----

|1.8|2019-07|General: Changed IA1TOOL and IA2TOOL to respectively IA1<br>and IA2. Now only a single User Interface Object type is needed<br>with specific properties (see Test Set-up). Added a test set-up<br>description to the document.<br>3.3.5: Changed name of individual address from IA5 to IA3.<br>3.6.1.x: Changed names of individual addresses - IA1 to IA9 now<br>IA4-IA12.<br>4.1.10: Changed NumElem in PropExtValueRead to 1.<br>4.6.1: For secure devices added a reference to 3.8.8.1.<br>4.7.1: Removed PDT FUNCTION part and added reference to<br>_<br>3.8.8.1 and 4.6.1.<br>5.2.4: Fixed hard coded memory location into variable.<br>6.2.1: Changed responded index number to wildcard.|
|---|---|---|
|1.9|2020-06|**3.8.1.2**: fixed error code to reflect security error (FB into FC).<br>**3.8.7.4/3.8.8.7/3.8.9.5/3.8.10.5/3.8.11.5/3.8.12.1/3.8.13.6/3.8.14.5/**<br>**3.8.15.7/3.8.17.5**: BUGFIX-changed Basic Restart telegrams from<br>Extended to Normal frame.<br>**3.8.15.7**: BUGFIX-fixed some expected sequence numbers in<br>telegrams received from the BDUT. Added a Disconnect.<br>BUGFIX-Changed some incorrect TK1 into FDSK.<br>BUGFIX-Changed corrected reserved fields in<br>IndAddrSerNoWrite.<br>BUGFIX-Changed Inverted order of DoA_SN_Write and<br>IA_SN_Write in Test preparation.<br>BUGFIX-Changed timing before renewed S-A_Sync_Req set to<br>more than 1 sec and wait=yes/general improvement of timing.<br>**3.8.8**: Improvement: added deactivation of Security Mode at end.<br>**3.8.10.x**: corrected wrong entries (start indexes) in Group Key<br>Table.<br>**3.8.12**: BUGFIX-Changed wrong source address when restoring<br>IA.<br>**3.8.13.2**: BUGFIX-Changed second telegram SeqNo from table.<br>**3.8.14**: Changed priority of NetworkParamResponse to alarm<br>instead of system acc. 2.3.5.11 in AN158.<br>**3.8.7/10/15/17/18**: Improvement - terminated sequence with<br>deactivation of Security Mode.<br>**3.8.18.2**: fixed error code to FCh in case of Read<br>PID_SUBNET_ADDR with A+C and PID_DEVICE_ADDR with<br>A+C with SM on.<br>**3.7.2.11**: BUGFIX-Changed corrected wrong routing counter.<br>**3.8.3.2**: BUGFIX-Changed inserted SERNO variable instead of<br>fixed value.<br>IMPROVEMENT generally of Test Preparation - BDUT setup.<br>**3.3**: IMPROVEMENT - replaced first telegrams by general Test<br>Preparation - BDUT Setup.<br>**3.6.1.x**: IMPROVEMENT Clean up.<br>**3.8.8.12/13/14/15**: IMPROVEMENT Added Restore DoA.<br>**3.7**: IMPROVEMENT Corrected Address Extension Types for RF<br>Tests, split up 3.7.2.12 into two tests, one for RF and one for IP,<br>changed reading of modified domain address again back to<br>DomAddrSerNoRead instead of reading the relevant property.<br>**3.8.13.1**: IMPROVEMENT Alternative preparation because of<br>start test with FDSK.<br>**3.4 and 3.8.7/3.8.18**: IMPROVEMENT Preparationprior to test.|


-----

###### 3.8.15.7: IMPROVEMENT Synchronize Sequence Number during cleanup. 3.8.15.8: IMPROVEMENT Changed error code to F? to allow FFh = E_ERROR, F8h = E_DATA_VOID, F6h = E_DATA_MIN. 4.7.2.7/10: Simplified test of A_Authorize_Request and A_KeyWrite. 1.10 2020.09 Resolution of comments from Release for Voting – No update of the EITT test templates done 1.11 2020.12 Resolution of comments from Final Voting – Publication as AS

Filename: 8 TSS J - Data Security Tests v1.11 AS
Version: 1.11
Status: Approved Standard
Savedate: 2020.12.21
Number of pages: 277

|Col1|Col2|3.8.15.7: IMPROVEMENT Synchronize Sequence Number during<br>cleanup.<br>3.8.15.8: IMPROVEMENT Changed error code to F? to allow FFh<br>= E ERROR, F8h = E DATA VOID, F6h = E DATA MIN.<br>_ _ _ _ _<br>4.7.2.7/10: Simplified test of A Authorize Request and<br>_ _<br>A KeyWrite.<br>_|
|---|---|---|
|1.10|2020.09|**Resolution of comments from Release for Voting – No update**<br>**of the EITTtest templates done **|
|1.11|2020.12|**Resolution of comments from Final Voting – Publication as AS **|


-----

##### Contents

###### 1 List of Abbreviations ....................................................................................................... 18

 2 Test Environment DUT settings ..................................................................................... 20 2.1 Keys ................................................................................................................ 20 2.1.1 PID_P2P_KEY_TABLE (PID: 52) .................................................. 20 2.1.2 PID_GRP_KEY_TABLE (PID: 53) ................................................ 20 2.1.3 PID_TOOL_KEY (PID: 56) ............................................................ 20 2.2 Last valid sequence numbers .......................................................................... 20 2.3 Group Communication .................................................................................... 21 2.3.1 KNX Secure Group Object Flags ..................................................... 21 2.4 Individual Addresses used by Testtool ........................................................... 21 2.5 Test set-up ....................................................................................................... 21 2.5.1 IO and Property configuration ......................................................... 22 2.5.2 Memory configuration ..................................................................... 22 2.5.3 EITT Configuration .......................................................................... 23

 3 Test Cases for Application Note 158/13 ......................................................................... 25 3.1 S-A_Data PDU with Tool Key ....................................................................... 25 3.1.1 correct S-A_Data A only .................................................................. 25 3.1.2 correct S-A_Data A+C ..................................................................... 25 3.1.3 correct S-A_Data A only – with a second source ............................ 26 3.1.4 incorrect S-A_Data A only - incorrect APCI Sec ............................ 26 3.1.5 correct S-A_Data A only - incorrect SCF because of incorrect tool access ................................................................................................ 26 3.1.6 incorrect S-A_Data A only reserved SAI ......................................... 26 3.1.7 correct S-A_Data A only with SBC set to 1 .................................... 27 3.1.8 incorrect S-A_Data A only- reserved S-AL service type ................. 27 3.1.9 correct S-A_Data A only -sequence number identical/lower than last known ............................................................................................... 28 3.1.10 correct S-A_Data A only incrementation of sequence number by 1 28 3.1.11 correct S-A_Data A only incrementation of sequence number by 2 29 3.1.12 incorrect S-A_Data PDU - padded 6 bits in the secure data, following the sequence number, not set to zero ............................... 29 3.1.13 incorrect S-A_Data PDU - wrongly coded MAC for A only ........... 30 3.1.14 correct S-A_Data A+C ..................................................................... 30 3.1.15 correct S-A_Data A+C, with a second source ................................. 31 3.1.16 incorrect S-A_Data PDU - incorrect APCI ...................................... 31 3.1.17 correct S-A_Data A+C, incorrect SCF because of incorrect tool access ................................................................................................ 31 3.1.18 correct S-A_Data A+C, with SBC set to 1 ....................................... 32 3.1.19 incorrect S-A_Data A+C, reserved S-AL service type .................... 32 3.1.20 correct S-A_Data A+C, incrementation of sequence number by 1 .. 33 3.1.21 correct S-A_Data A+C, incrementation of sequence number by 2 .. 33 3.1.22 correct S-A_Data A+C, sequence number identical/lower than last known ............................................................................................... 34 3.1.23 incorrect S-A_Data A+C - wrongly encrypted cipher text .............. 34 3.1.24 correct S-A_Data A+C, Plain APDU ............................................... 35 3.1.25 incorrect S-A_Data A+C - wrongly coded MAC ............................ 35 3.1.26 correct S-A_Data, A only - but encrypted with AT=group ............. 36 3.1.27 correct S-A_Data, A+C - but encrypted with AT=group ................. 36


-----

###### 3.1.28 correct S-A_Data, A only – one byte too many ............................... 37 3.1.29 correct S-A_Data, A+C - but one byte too few ................................ 37 3.2 S-A_Data PDU with Group Key .................................................................... 38 3.2.1 Introduction....................................................................................... 38 3.2.2 correct S-A_Data PDU - A only ....................................................... 38 3.2.3 correct S-A_Data, A+C encoded, but A only required ..................... 38 3.2.4 correct S-A_Data PDU – A only - with a second source and destination address ............................................................................ 39 3.2.5 correct S-A_Data – A only - but encrypted with AT=P2P ............... 39 3.2.6 correct S-A_Data (A only) - correct SCF with correct tool key access ................................................................................................ 39 3.2.7 Test case (negative) - incorrect S-A_Data PDU - wrongly coded MAC for A only................................................................................ 39 3.2.8 Test case (positive) - correct S-A_Data PDU - A and C required .... 40 3.2.9 correct S-A_Data PDU –Group object security flags no A, no C .... 40 3.2.10 correct S-A_Data, - A and C required - with a second source and destination address ............................................................................ 40 3.2.11 correct S-A_Data – A+C - but encrypted with AT=P2P .................. 40 3.2.12 correct S-A_Data, - tool key Flag set and runtime key used for encyption........................................................................................... 41 3.2.13 correct S-A_Data - with a correct sequence number but from a different IA ....................................................................................... 41 3.2.14 incorrect S-A_Data PDU A+C- wrongly encrypted cipher text ....... 41 3.2.15 correct S-A_Data PDU - A and C required – A only received ......... 42 3.2.16 correct S-A_Data PDU - A and C required - Plain received ............ 42 3.2.17 incorrect S-A_Data PDU - wrongly coded MAC for A+C .............. 42 3.2.18 correct S-A_Data PDU – GA linked to GO requiring plain only ..... 42 3.2.19 correct S-A_Data PDU - only C set in Secure Group Object flags – A and C received .............................................................................. 43 3.3 S-A_Sync_Req ............................................................................................... 43 3.3.1 correct S-A_Sync_Req-PDU, A+C– P2P– connection-oriented ...... 43 3.3.2 correct S-A_Sync_Req-PDU, A+C– P2P– connectionless .............. 44 3.3.3 correct S-A_Sync_Req-PDU, A+C– P2P connectionless, from second IA .......................................................................................... 44 3.3.4 correct S-A_Sync_Req-PDU, A+C– P2P, connectionless, not with TooKey ............................................................................................. 45 3.3.5 correct S-A_Sync_Req-PDU, A+C– P2P, connectionless, not with tookey, from IA not part of the PID_Security_Individual_Address_Table ........................................ 46 3.3.6 correct S-A_Sync_Req-PDU – (system) broadcast .......................... 46 3.3.7 incorrect S-A_Sync_Req-PDU - incorrect APCI – P2P ................... 47 3.3.8 incorrect S-A_Sync_Req-PDU – reserved SAI case 1 ..................... 47 3.3.9 incorrect S-A_Sync_Req-PDU – reserved SAI case 2 .................... 47 3.3.10 S-A_Sync_Req, A+C with KNX Serial number set to 0 for (system) broadcast ........................................................................................... 48 3.3.11 S-A_Sync_Req-PDU, A+C with KNX Serial number not corresponding to that of the BDUT – (system) broadcast ................ 48 3.3.12 S-A_Sync_Req-PDU, A+C with KNX Serial number corresponding to that of the BDUT – (system) broadcast –with wrong encrypted data .................................................................................................... 49


-----

###### 3.3.13 correct S-A_Sync_Req-PDU - A+C req.– P2P - other challenge .... 49 3.3.14 correct S-A_Sync_Req-PDU – sequence number local lower than expected by BDUT – P2P ................................................................ 49 3.3.15 correct S-A_Sync_Req-PDU – Sequence number local higher to that expected by BDUT – P2P ................................................................ 50 3.3.16 correct S-A_Sync_Req-PDU – Sequence number local identical to that expected by BDUT – P2P ......................................................... 50 3.3.17 correct S-A_Sync_Req-PDU – verification of correct setting of sequence number sending – verification of not incrementing sequence number sending/local for S-A_Sync messages – checking of use of different random values - P2P –with tool key ................... 51 3.3.18 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key - incorrectly encrypted MAC ................................................................................ 52 3.3.19 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – sent as group ................................................................................................ 52 3.3.20 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – one byte too many ................................................................................................. 53 3.3.21 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – one byte too few .................................................................................................... 53 3.3.22 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – SBC flag set ..................................................................................................... 53 3.4 S-A_Sync_Res ................................................................................................ 54 3.4.1 correct S-A_Sync_Res-PDU to a P2P request – not tool key – sequence number local identical – connectionless ........................... 54 3.4.2 correct S-A_Sync_Res-PDU to a P2P request – not tool key – sequence number local higher – connectionless .............................. 55 3.4.3 correct S-A_Sync_Res without request before – not tool key – P2P – connectionless .................................................................................. 55 3.4.4 correct S-A_Sync_Res-PDU to a P2P request for a second IA ....... 56 3.4.5 correct S-A_Sync_Res-PDU to a P2P request but sent not P2P ...... 56 3.4.6 incorrect S-A_Sync_Res-PDU to a P2P request - wrong APCI ...... 57 3.4.7 correct S-A_Sync_Res-PDU to a P2P request – with tool key – connectionless .................................................................................. 57 3.4.8 incorrect S-A_Sync_Res-PDU to a P2P request - incorrect SAI ..... 57 3.4.9 correct S-A_Sync_Req-PDU to a broadcast request – broadcast response with SBC set (TP only) ..................................................... 58 3.4.10 incorrect S-A_Sync_Res-PDU to a broadcast request - wrong MAC ................................................................................................. 58 3.5 S_A_Data PDU for routing ............................................................................. 58 3.6 KNX Secure Access ........................................................................................ 59 3.6.1 Roles for Properties with P2P Key ................................................... 59 3.6.1.1 Introduction ...................................................................................... 59 3.6.1.2 correct S-A_Data PDU - A required - role correct to read and write .................................................................................................. 63 3.6.1.3 correct S-A_Data PDU - A required only - role incorrect to write .. 64 3.6.1.4 correct S-A_Data - A required - role not allowed to read nor write 64 3.6.1.5 correct S-A_Data PDU - A and C required - role correct to read and write .................................................................................................. 65 3.6.1.6 correct S-A_Data PDU - A and C required - role incorrect to write 65


-----

###### 3.6.1.7 correct S-A_Data - A and C required – role not allowed to read nor write .................................................................................................. 66 3.6.1.8 correct S-A_Data PDU - A and C required – IA not listed in P2P Key Table .......................................................................................... 66 3.6.1.9 correct S-A_Data PDU - A and C required – Role using incorrect key ..................................................................................................... 66 3.6.1.10 correct S-A_Data PDU - A and C required – IA known to server but no role ............................................................................................... 67 3.7 Access Policies ............................................................................................... 67 3.7.1 Introduction....................................................................................... 67 3.7.2 Access policies at Service Level....................................................... 68 3.7.2.1 A_IndividualAdress_Read (3FF/3FF) – Plain/A/A + C – Security Mode on ............................................................................................ 68 3.7.2.2 A_IndividualAdress_SerialNumber_Read (3FF/3FF) – Plain/A/A + C – Security Mode on ....................................................................... 68 3.7.2.3 A_DomainAddress_SerialNumber_Read ......................................... 69 3.7.2.4 A_Domain_Address_Read (3FF/3FF) – Plain/A/A + C – Security Mode on or off .................................................................................. 70 3.7.2.5 A_Domain_AddressSelective_Read (3FF/3FF) – Plain/A/A + C – Security Mode on or off .................................................................... 71 3.7.2.6 A_DeviceDescriptor_Read (3FF/0CC at data level) – Plain/A/A + C – Security Mode on ........................................................................... 72 3.7.2.7 A_Authorize_Request PDU (3FF/3FF) – Plain/A/A + C – Security Mode on ............................................................................................ 73 3.7.2.8 Reading and Writing of Memory (3FF/3FF at data level) ................ 74 3.7.2.9 Test A_Restart PDU ......................................................................... 77 3.7.2.10 Test A_KeyWrite PDU (3FF/0CC) .................................................. 80 3.7.2.11 Test A_DomainAddress_Write PDU [only open media] (3FF/00C) .......................................................................................... 81 3.7.2.12 Test A_DomainAddressSerialNumber_Write PDU ......................... 82 3.7.2.13 Test A_IndividualAddress_Write PDU (3FF/00C) and PID_PROG_Mode (3FF/0CC) ......................................................... 86 3.7.2.14 Test A_IndividualAddressSerialNumber_Write PDU (3FF/00C) .... 87 3.8 KNX Secure Properties with Tool Key .......................................................... 88 3.8.1 Test PID_OBJECT_TYPE(1) (3FF/0CC) ........................................ 88 3.8.1.1 PropertyValueRead plain, A or A+C ................................................ 88 3.8.1.2 PropertyValueWrite plain, A or A+C ............................................... 89 3.8.1.3 Check Property description ............................................................... 91 3.8.2 Test PID_OBJECT_NAME(2) [optional] (3FF/0CC) ..................... 91 3.8.2.1 Read Interface Object Name plain, with A only or with A+C ......... 91 3.8.2.2 PropertyValueWrite Plain, with A only or with A+C ...................... 92 3.8.2.3 Check Property description ............................................................... 94 3.8.3 Test PID_SERIAL_NUMBER(11) (3FF/0CC) ................................ 94 3.8.3.1 Read Serial Number plain, with A only or with A+C ...................... 94 3.8.3.2 PropertyValueWrite Plain, with A only or with A+C ...................... 95


-----

###### 3.8.3.3 Check Property description .............................................................. 96 3.8.4 Test PID_MANUFACTURER_ID(12) (3FF/0CC) ......................... 97 3.8.4.1 Read Manufacturer ID plain, with A only or with A+C .................. 97 3.8.4.2 PropertyValueWrite Plain, A and A+C ............................................ 98 3.8.4.3 Check Property description ............................................................ 100 3.8.5 Test PID_PROG_MODE (54) (3FF/0CC) ..................................... 100 3.8.6 Test PID_IO_LIST(71) (3FF/0CC) [optional – recommended] .... 100 3.8.6.1 Read PID_IO_LIST plain, secured with A or A+C ....................... 100 3.8.6.2 PropertyValueWrite Plain, with A and with A+C .......................... 101 3.8.6.3 Check Property description ............................................................ 103 3.8.7 Test PID_LOAD_STATE_CONTROL(5) (15F/04C) ................... 103 3.8.7.1 Secure Property Read and Write, Plain, with A only, with A+C ... 103 3.8.7.2 Property Write and Read - A and A+C with other than Tool Key . 106 3.8.7.3 Check Property description ............................................................ 107 3.8.7.4 Secure PropertyValuRead after power down check value ............. 108 3.8.8 Test Security Mode PID_SECURITY_MODE(51) (15F/04C) ..... 110 3.8.8.1 Activating/Deactivating Security Mode secure – Reading Security Mode – with A+C– positive case ................................................... 110 3.8.8.2 Activating Security Mode secure – incorrect Service IDs and incorrect ServiceInfo ...................................................................... 111 3.8.8.3 Secured FunctionPropertyCommand only authenticated ............... 111 3.8.8.4 Attempting to activate Security Mode unsecure ............................ 112 3.8.8.5 Check Property description ............................................................ 113 3.8.8.6 Secure FunctionPropertyStateRead ................................................ 114 3.8.8.7 Secure FunctionPropertyStateRead after power down and master reset ................................................................................................ 114 3.8.9 Test PID_P2P_KEY_TABLE(52) (00C/00C) ............................... 117 3.8.9.1 Secure PropertyValueWrite and Read – with A+C ........................ 117 3.8.9.2 Unsecure PropertyValueWrite and Read ....................................... 119 3.8.9.3 Secured PropertyValueRead only authenticated ............................ 121 3.8.9.4 Check Property description ............................................................ 122 3.8.9.5 Secure PropertyValueRead after power down and master reset .... 123 3.8.10 Test PID_GRP_KEY_TABLE(53) (00C/00C) .............................. 124 3.8.10.1 Secure PropertyValueWrite/Read – with A+C .............................. 124 3.8.10.2 Unsecure PropertyValueWrite and Read ....................................... 125 3.8.10.3 Secured PropertyValueRead only authenticated ............................ 126 3.8.10.4 Check Property Extended description ............................................ 127 3.8.10.5 Secure PropertyValueRead after power down and master reset .... 127 3.8.11 Test PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE(54) (00C/00C) ....................................................................................... 128 3.8.11.1 Secure PropertyValueWrite and Read – A+C ................................ 128 3.8.11.2 Unsecure PropertyValueWrite and Read ....................................... 130 3.8.11.3 Secured PropertyValueRead only authenticated ............................ 132


-----

###### 3.8.11.4 Check Property Extended description ............................................. 133 3.8.11.5 Secure PropertyValueRead after power down/master reset............ 134 3.8.12 Test PID_SECURITY_FAILURES_LOG(55) (1FF/0CC) ............ 135 3.8.12.1 Secure FunctionProperty, behavior on Power Down – UnsecureFunctionPropertyRead/Write – Unsecure FunctionPropertyRead with A only – UnsecureFunctionCommand – FunctionCommand with A only and A+C ...................................... 135 3.8.12.2 Secure FunctionPropertyCommand, behavior on Confirmed Restart ............................................................................................. 140 3.8.12.3 Secure FunctionPropertyCommand, behavior on Factory Reset .... 142 3.8.12.4 Secure FunctionPropertyCommand, behavior on Factory Reset without IA ....................................................................................... 143 3.8.12.5 Secure FunctionPropertyCommand, behavior on Local Factory Reset ................................................................................................ 145 3.8.12.6 Check prevention of Overflow in security counters ....................... 147 3.8.12.7 Secure FunctionPropertyStateRead, negative cases ....................... 148 3.8.12.8 Secure FunctionPropertyCommand, negative cases ....................... 149 3.8.12.9 Check PropDescrRead .................................................................... 150 3.8.13 Test PID_TOOL_KEY(56) (008/008) ............................................ 151 3.8.13.1 Secure PropertyValueWrite – A+C ................................................ 151 3.8.13.2 Check ToolKey usage when Security Interface Object is unloaded .......................................................................................... 153 3.8.13.3 Secured PropertyValueWrite sent only authenticated .................... 154 3.8.13.4 Unsecure PropertyValueWrite ........................................................ 155 3.8.13.5 Secure Property(Ext)ValueRead ..................................................... 155 3.8.13.6 Secure PropertyValueRead after power down/master reset............ 157 3.8.13.7 Check Property Extended description ............................................. 160 3.8.13.8 Check usage of the FDSK ............................................................... 160 3.8.14 Test PID_SECURITY_REPORT(57) (1FF/0CC) and PID_SECURITY_REPORT_CONTROL (58) (00C/00C) ............ 162 3.8.14.1 Secure PropertyValueRead and Write – A+C ................................ 162 3.8.14.2 Unsecure PropertyValueRead/write ............................................... 164 3.8.14.3 PropertyValueRead/write with A only ........................................... 166 3.8.14.4 Check Property description ............................................................. 167 3.8.14.5 Secure PropertyValueRead after power down/master reset............ 168 3.8.15 Test PID_SEQUENCE_NUMBER_SENDING(59) (00C/00C) .... 176 3.8.15.1 Secure PropertyValueWrite and stimulate immediate usage of SeqNb. – Secure PropValueRead ................................................... 176 3.8.15.2 Unsecure PropertyValue Access ..................................................... 177 3.8.15.3 Secure PropertyValueRead after power down check SeqNb. is unchanged ....................................................................................... 178 3.8.15.4 Auth. Secured PropertyValueRead/Write ....................................... 179 3.8.15.5 Check Property description ............................................................. 180 3.8.15.6 Overflow check ............................................................................... 181


-----

###### 3.8.15.7 Master Reset tests ........................................................................... 181 3.8.15.8 PropertyValueWrite attempt to set to 0 .......................................... 188 3.8.16 Test PID_ZONES_KEYS_TABLE(60) [Optional] ....................... 189 3.8.17 Test PID_GO_SECURITY_FLAGS(61) (00C/00C) ..................... 189 3.8.17.1 Secure PropertyValueWrite and Read of GO Security Flags ......... 189 3.8.17.2 Unsecure PropertyValueWrite/Read .............................................. 192 3.8.17.3 Auth. Secured PropertyValueRead/Write ...................................... 193 3.8.17.4 Check Property description ............................................................ 194 3.8.17.5 Secure PropertyValueRead after power down/master reset ........... 195 3.8.18 Test PID_SUBNET_ADDR and PID_DEVICE_ADDRESS (3FF/00C) ....................................................................................... 196 3.8.18.1 Secured S-A_Data, A only, toolkey ............................................... 196 3.8.18.2 Secured S-A_Data, P2P Key .......................................................... 199 3.8.18.3 Write and read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS unsecured ........................................... 202 3.8.19 Memory Access with Tool Key ..................................................... 204 3.8.19.1 Device Model 0x091A (IP-Router) ................................................ 204 3.9 TL Repititions in Secure Mode ..................................................................... 215

 4 Test Cases for Application Note 163 Extended Interface Object Addressing ......... 217 4.1 PropertyExtValue_Read / ValueRes PDU .................................................... 217 4.1.1 A_PropertyExtValue_Read, existing interface object type ........... 217 4.1.2 A_PropertyExtValue_Read, not existing interface object type ..... 217 4.1.3 A_PropertyExtValue_Read, not existing interface object instance 217 4.1.4 A_PropertyExtValue_Read, not existing PID ................................ 218 4.1.5 A_PropertyExtValue_Read, number of elements = 0 .................... 218 4.1.6 A_PropertyExtValue_Read, number of elements too big .............. 218 4.1.7 A_PropertyExtValue_Read, data fitting to Max APDU Length .... 219 4.1.8 A_PropertyExtValue_Read, data exceeds Max APDU Length ..... 219 4.1.9 A_PropertyExtValue_Read, start index too big ............................. 219 4.1.10 A_PropertyExtValue_Read, to area with higher access level ........ 220 4.1.11 A_ PropertyExtValue _Read, of type PDT_FUNCTION .............. 221 4.2 PropertyExtValue_WriteCon / WriteConRes PDU ...................................... 221 4.2.1 A_PropertyExtValue_WriteCon, receive A_PropertyExtValueWriteCon_Response, to data property, to PDT_Control .................................................................................. 221 4.2.2 A_PropertyExtValue_WriteCon, not existing interface object type ................................................................................................. 222 4.2.3 A_PropertyExtValue_WriteCon, not existing interface object instance ........................................................................................... 223 4.2.4 A_PropertyExtValue_WriteCon, not existing PID ........................ 223 4.2.5 A_PropertyExtValue_WriteCon, number of elements = 0 ............ 224 4.2.6 A_PropertyExtValue_WriteCon, number of elements too big ...... 225 4.2.7 A_PropertyExtValue_WriteCon, start index = 0 with > 2 Octets .. 225 4.2.8 A_PropertyExtValue_WriteCon, start index too big ..................... 225 4.2.9 A_PropertyExtValue_WriteCon, writing to read only property .... 226 4.2.10 A_PropertyExtValue_WriteCon, data type conflict (to data property, to PDT_Control) ............................................................................. 226


-----

###### 4.2.11 A_PropertyExtValue_WriteCon, to area with higher access level . 227 4.2.12 A_PropertyExtValue_WriteCon, minimum and maximum value, void value........................................................................................ 228 4.2.13 A_ PropertyExtValue _WriteCon, of type PDT_FUNCTION ....... 230 4.3 PropertyExtValue_WriteUnCon PDU .......................................................... 230 4.3.1 A_PropertyExtValue_WriteUnCon ................................................ 230 4.3.2 A_PropertyExtValue_WriteUnCon, not existing interface object type ................................................................................................. 230 4.3.3 A_PropertyExtValue_WriteUnCon, not existing interface object instance ........................................................................................... 231 4.3.4 A_PropertyExtValue_WriteUnCon, not existing PID .................... 231 4.3.5 A_PropertyExtValue_WriteUnCon, number of elements = 0 ........ 232 4.3.6 A_PropertyExtValue_WriteUnCon, number of elements too big .. 232 4.3.7 A_PropertyExtValue_WriteUnCon, start index = 0 with > 2 Octets .............................................................................................. 233 4.3.8 A_PropertyExtValue_WriteUnCon, start index too big ................. 233 4.3.9 A_PropertyExtValue_WriteUnCon, writing to read only property 233 4.3.10 A_PropertyExtValue_WriteUnCon, data type conflict .................. 234 4.3.11 A_PropertyExtValue_WriteUnCon, to area with higher access level................................................................................................. 234 4.3.12 A_ PropertyExtValue _WriteUnCon, of type PDT_FUNCTION .. 235 4.4 PropertyExtValue_InfoReport PDU ............................................................. 236 4.4.1 A_PropertyExtValue_InfoReport, to be ignored by MaS .............. 236 4.4.2 A_PropertyExtValue_InfoReport, not existing Interface Object Type ................................................................................................ 236 4.4.3 A_PropertyExtValue_InfoReport, not existing Interface Object instance ........................................................................................... 236 4.4.4 A_PropertyExtValue_InfoReport, not existing PID ....................... 237 4.4.5 A_PropertyExtValue_InfoReport, number of elements = 0 ........... 237 4.4.6 A_PropertyExtValue_InfoReport, number of elements too big ..... 238 4.4.7 A_PropertyExtValue_InfoReport, index = 0 with > 2 Octets ........ 238 4.4.8 A_PropertyExtValue_InfoReport, with start index too big ............ 238 4.4.9 A_PropertyExtValue_InfoReport, to read only property ............... 239 4.4.10 A_PropertyExtValue_InfoReport, additional error cases: data type conflict ............................................................................................ 239 4.4.11 A_PropertyExtValue_InfoReport, to area with higher access level, to be ignored by MaS .......................................................................... 239 4.5 PropertyExtDescription_Read / Response PDU .......................................... 241 4.5.1 A_PropertyExtDescription_Read receive A_PropertyExtDescription_Response ............................................ 241 4.5.2 A_PropertyExtDescription_Read, not existing Interface Object Type ................................................................................................ 241 4.5.3 A_PropertyExtDescription_Read, not existing Object Instance .... 242 4.5.4 A_PropertyExtDescription_Read, by property index ..................... 242 4.5.5 A_PropertyExtDescription_Read, not existing property index ...... 243 4.5.6 A_PropertyExtDescription_Read, Property Description Type none zero receive A_PropertyExtDescription_Response, Property Description Type zero..................................................................... 243 4.5.7 A_PropertyExtDescription_Read, not existing PID ....................... 244 4.6 A_FunctionPropertyExtCommand / State_Response ................................... 244


-----

###### 4.6.1 A_FunctionPropertyExtCommand receive A_FunctionPropertyExtState_Response ........................................ 244 4.6.2 A_FunctionPropertyExtCommand with funtion returns error ....... 245 4.6.3 A_FunctionPropertyExtCommand, not existing Interface Object Type ................................................................................................ 245 4.6.4 A_FunctionPropertyExtCommand, not existing PID .................... 245 4.6.5 A_FunctionPropertyExtCommand, not of type PDT_FUNCTION or PDT_CONTROL ........................................................................... 246 4.7 A_FunctionPropertyExtState_Read / Response............................................ 246 4.7.1 A_FunctionPropertyExtState_Read receive A_FunctionPropertyExtState_Response ........................................ 246 4.7.2 A_FunctionPropertyExtState_Read, not existing Interface Object Type ................................................................................................ 246 4.7.3 A_FunctionPropertyExtState_Read, not existing Object Instance 247 4.7.4 A_FunctionPropertyExtState_Read, not existing PID ................... 247 4.7.5 A_FunctionPropertyExtState_Read, not of type PDT_FUNCTION or PDT_CONTROL ....................................................................... 248

 5 Test Cases for Application Note 177 Extended Memory Services ............................ 249 5.1 MemoryExtended_Write ............................................................................... 249 5.1.1 correct MemoryExtended_Write .................................................... 249 5.1.2 MemoryExtended_Write up to MAX_APDU_LENGTH ............. 249 5.1.3 MemoryExtended_Write – not authorized ..................................... 250 5.1.4 MemoryExtended_Write – read only memory (if available in BDUT) ............................................................................................ 251 5.1.5 MemoryExtended_Write – partly read only memory (if available in BDUT) ............................................................................................ 251 5.1.6 MemoryExtended_Write – invalid size ......................................... 252 5.1.7 MemoryExtended_Write – invalid memory address ..................... 253 5.2 MemoryExtended_Read................................................................................ 254 5.2.1 correct MemoryExtended_Read ..................................................... 254 5.2.2 MemoryExtended_Read – not authorized ...................................... 254 5.2.3 MemoryExtended_Read – write only memory (if available in BDUT) ............................................................................................ 255 5.2.4 MemoryExtended_Read – partly write only memory (if available in BDUT) ............................................................................................ 255 5.2.5 MemoryExtended_Read – invalid size - exceeding MAX APDU length .............................................................................................. 255 5.2.6 MemoryExtended_Read – invalid memory address ...................... 256

 6 Test Cases for Application Note 170 Group Object Diagnostics .............................. 257 6.1 Testing of PID_OPERATION_MODE ........................................................ 257 6.1.1 Verification of Property Description of PID_OPERATION_MODE ........................................................... 257 6.1.2 Reading normal operation mode .................................................... 257 6.1.3 Reading normal operation mode – negative response due to invalid ReadServiceID coding ................................................................... 257 6.1.4 Reading normal operation mode – negative response due to wrong coding of reserved octet ................................................................. 257 6.1.5 Reading normal operation mode – negative response due to wrong ReadServiceID ............................................................................... 258


-----

###### 6.1.6 Activating and deactivating Diagnostic Mode ............................... 258 6.1.7 Attempting to activate Diagnostic Mode with incorrect data ......... 258 6.1.8 Attempting to activate Diagnostic Mode with incorrect coding for reserved octet .................................................................................. 259 6.1.9 Attempting to activate Diagnostic Mode with incorrect Service ID .................................................................................................... 259 6.1.10 Attempting to activate Diagnostic Mode with invalid Operation Mode ............................................................................................... 260 6.1.11 Effect of Run State Machine on Diagnostic Mode – Verification of time out ........................................................................................... 260 6.2 Testing of PID_GO_DIAGNOSTICS .......................................................... 261 6.2.1 Verification of Property Description of PID_GO_DIAGNOSTICS ............................................................. 261 6.2.2 GO Diagnostics - General negative tests ........................................ 261 6.2.3 WriteService ID 00h – set Local GO Value – Positive Case ......... 262 6.2.4 WriteService ID 00h – set Local GO Value – Negative Case – invalid GO number ......................................................................... 263 6.2.5 WriteService ID 00h – set Local GO Value – Negative Case – Size Mismatch ........................................................................................ 263 6.2.6 WriteService ID 00h – set Local GO Value – Negative Case – Config Flags error ........................................................................... 264 6.2.7 WriteService ID 01h – send Group Value Write – valid flags ....... 264 6.2.8 WriteService ID 01h – send Group Value Write – invalid flags .... 266 6.2.9 WriteService ID 01h – send Group Value Write – security flags set for group address without valid security key .................................. 267 6.2.10 WriteService ID 01h – send Group Value Write – unsupported group address ............................................................................................ 267 6.2.11 WriteService ID 02 – send Loccal Group GO value on the bus – positive case .................................................................................... 267 6.2.12 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – invalid GO number .............................................. 268 6.2.13 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – invalid size of GO number – one byte too many – too few ............................................................................................ 268 6.2.14 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – configuration flags mismatch .............................. 268 6.2.15 WriteService ID 03h – send Group Value Read positive case ....... 269 6.2.16 WriteService ID 03h – send Group Value Read – incorrect flags .. 269 6.2.17 WriteService ID 03h – send Group Value Read – unsupported group address ............................................................................................ 270 6.2.18 WriteService ID 03h – send Group Value Read – group address without security key ........................................................................ 271 6.2.19 WriteService ID 04h – Limit GO service senders – source address different than filter address ............................................................. 271 6.2.20 WriteService ID 04h – Limit GO service senders – source address same as filter address ...................................................................... 272 6.2.21 WriteService ID 04h – Limit GO service senders – effect when switching back to normal mode ...................................................... 272 6.2.22 WriteService ID 04h – Limit GO service senders – try setting filter in normal mode ............................................................................... 273


-----

###### 6.2.23 WriteService ID 04h – Limit GO service senders – invalid size ... 274 6.2.24 ReadService ID 00h – Get GO Config – positive case .................. 274 6.2.25 ReadService ID 00h – Get GO Config – negative case – wrong object number ................................................................................. 275 6.2.26 ReadService ID 00h – Get GO Config – negative case – one byte too few/one byte too many ................................................................... 275 6.2.27 ReadService ID 01h – Get Local GO value – positive case .......... 276 6.2.28 ReadService ID 01h – Get Local GO value – negative case – invalid object number ................................................................................. 276 6.2.29 ReadService ID 01h – Get Local GO value – negative case –object number one byte too few, one byte too many ................................ 276


-----

#### 1 List of Abbreviations

|Abbreviation|Description|
|---|---|
|A|Authentication|
|AIL|Application Interface Layer|
|APCI|Application Layer Protocol Control Information|
|APDU|Application Protocol Data Unit|
|ASAP|Application Layer Service Access Points|
|BCU|Bus Coupling Unit|
|BDUT|Bus Device Under Test|
|C|Confidentiality|
|CFB|Cipher feedback|
|DPT|Data Point Type|
|FDSK|Factory Default Setup Key|
|GA|Group Address|
|GO|Group Object|
|IA|Individual Address|
|IO|Interface Object|
|IOT|Interface Object Type|
|IV|Initialisation Vector|
|LDPU|Data Link Layer Protocol Data Unit|
|LSAP|Link Layer Service Access Point|
|MaC|Management Client|
|MAC|Message Authentication Code|
|MaS|Management Server|
|MiM|Man-in-the-Middle|
|NPDU|Network Layer Protocol Data Unit|
|P-AL|Plain Application Layer|
|P2P|Point to Point (Connection oriented or Connection less)|
|P2PCo|Point to Point Connection oriented|
|P2PCl|Point to Point Connection less|
|PCI|Protocol Control Information|
|PDT|Property Data Type|
|PDU|Protocol Data Unit|
|PID|Property Identifier|
|S-AL|Secure Application Layer|
|SAI|Security Algorithm Identifier|


-----

|SCF|Security Control Field|
|---|---|
|SDU|Service Data Unit|
|SeqNr|Sequence Number|
|SFCC|Security Failure Common Counter|
|SFL|Security Failures on Links|
|SHD|Secure Header|
|SNA|Subnetwork Address|
|SIA|Secure Individual Address|
|SIAT|Secure Individual Address Table|
|T|Tool Access Flag|
|TPDU|Transport Layer Protocol Data Unit|
|TSAP|Transport Layer Service Access Points|
|TSDU|Transport Layer Service Data Unit|


-----

#### 2 Test Environment DUT settings

##### 2.1 Keys

###### 2.1.1 PID_P2P_KEY_TABLE (PID: 52)

**Array index** **IA_Index** **Key** **Roles** **Remark**
(2 octets) (16 octets) (2 octets)
1 1 P2PK1 0000 0000 0000 0001b Role 1
2 2 P2PK2 0000 0000 0000 0010b Role 2
3 3 P2PK3 0000 0000 0000 0100b Role 3
4 4 P2PK4 0000 0000 0000 1000b Role 4
5 5 P2PK5 0000 0000 0001 0000b Role 5
6 6 P2PK6 0000 0000 0010 0000b Role 6
7 7 P2PK7 0000 0000 0000 0000b No Role
8 8 P2PK8 0000 0000 0001 1000b Role 4 and 5

###### Table 1:PID_P2P_KEY_TABLE (PID: 52)

 P2PKn (n=1..8): Point to Point key n, part of the PID_P2P_KEY_TABLE.

 FDSK: Factory default setup key (can be restored by Master Restart with factory settings)

 2.1.2 PID_GRP_KEY_TABLE (PID: 53)

**Array index** **GA_Index** **Key**
(2 octets) (16 octets)
1 GK1
2 GK2
3 GK3
4 GK4

###### Table 2: PID_GRP_KEY_TABLE (PID: 53)

 2.1.3 PID_TOOL_KEY (PID: 56) TK1: Tool key, stored in the DUT and active.

 TK2: Last stored Tool Key in the DUT, but due to Master Reset replaced by FDSK

##### 2.2 Last valid sequence numbers

**Array index** **Individual**

**Last Valid SeqNr**

**=** **Address**
**IA_Index** (2 octets) (6 octets)

1 **IA 4** Last Valid SeqNr from IA 4 (P2PLVSeq4)

2 **IA 5** Last Valid SeqNr from IA 5 (P2PLVSeq5)

3 **IA 6** Last Valid SeqNr from IA 6 (P2PLVSeq6)

4 **IA 7** Last Valid SeqNr from IA 7 (P2PLVSeq7)

5 **IA 8** Last Valid SeqNr from IA 8 (P2PLVSeq8)

6 **IA 9** Last Valid SeqNr from IA 9 (P2PLVSeq9)

7 **IA 10** Last Valid SeqNr from IA 10 (P2PLVSeq10)

8 **IA 11** Last Valid SeqNr from IA 11 (P2PLVSeq11)

9 **IA 12** Last Valid SeqNr from IA 12 (P2PLVSeq12)

###### Table 3:PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE (PID: 54)

 P2PLVSeq: last valid Sequence Number for P2P connections.

|IA Index|Key|Roles|Remark|
|---|---|---|---|
|**_**<br>(2 octets)|(16 octets)|(2 octets)||
|1|P2PK1|0000 0000 0000 0001b|Role 1|
|2|P2PK2|0000 0000 0000 0010b|Role 2|
|3|P2PK3|0000 0000 0000 0100b|Role 3|
|4|P2PK4|0000 0000 0000 1000b|Role 4|
|5|P2PK5|0000 0000 0001 0000b|Role 5|
|6|P2PK6|0000 0000 0010 0000b|Role 6|
|7|P2PK7|0000 0000 0000 0000b|No Role|
|8|P2PK8|0000 0000 0001 1000b|Role 4 and 5|

|GA Index|Key|
|---|---|
|**_**<br>(2 octets)|(16 octets)|
||GK1|
||GK2|
||GK3|
||GK4|

|Individual<br>Address<br>(2 octets)|Last Valid SeqNr<br>(6 octets)|
|---|---|
|**IA 4**|Last Valid SeqNr from IA 4 (P2PLVSeq4)|
|**IA 5**|Last Valid SeqNr from IA 5 (P2PLVSeq5)|
|**IA 6**|Last Valid SeqNr from IA 6 (P2PLVSeq6)|
|**IA 7**|Last Valid SeqNr from IA 7 (P2PLVSeq7)|
|**IA 8**|Last Valid SeqNr from IA 8 (P2PLVSeq8)|
|**IA 9**|Last Valid SeqNr from IA 9 (P2PLVSeq9)|
|**IA 10**|Last Valid SeqNr from IA 10 (P2PLVSeq10)|
|**IA 11**|Last Valid SeqNr from IA 11 (P2PLVSeq11)|
|**IA 12**|Last Valid SeqNr from IA 12 (P2PLVSeq12)|


-----

##### 2.3 Group Communication

###### 2.3.1 KNX Secure Group Object Flags

**Array index** **Flags** **Remark**
(1 octet)
1 00000000b Plain only
2 00000001b A only
3 00000010b C only
4 00000011b A+C only

###### Table 4: PID_GO_SECURITY_FLAGS (PID: 61)

##### 2.4 Individual Addresses used by Testtool
###### In the below test sequences, in most cases the Testool uses the IA1 individual address as its sending address. 

 For some of the tests, the Testtool needs to send with an alternative address IA2, in order to provoke the required test conditions. 

 The only requirement is that IA1 and IA2 shall be different. 

 The EITT conformance testing data sheet allows to set this alternative Individual EITT tool address accordingly:

 Figure 1 EITT Conformance Testing Data Sheet setting for alternative source address

##### 2.5 Test set-up
###### The test set-up consists of the following elements:

 • one Bus Device Under Test (BDUT)
 • the KNX Interworking Test Tool (EITT 4.3 or upwards) running on a PC, which is connected to the bus by an USB Interface
 • 1 power supply module (incl. choke)
 •

|Flags|Remark|
|---|---|
|(1 octet)||
|00000000b|Plain only|
|00000001b|A only|
|00000010b|C only|
|00000011b|A+C only|


-----

###### Figure 2 Test Setup

 2.5.1 IO and Property configuration For automatic testing the following Interface Object with specified Properties shall be configured in the BDUT.

 • One User Interface Object (=IO1, default object type value 50001 (=C351h))

 • PID_PDT_FUNCTION_TEST. This is a PDT_FUNCTION property with property identification 54. It shall be able to receive 3 octets of data and shall return an arbitrary Return Code and 3 octets of data (arbitrary value).

 • PID_TABLE. This property shall have at least 123 elements of type PDT_GENERIC_02.

 • PID 51: This property shall have a property identification of 51. The format shall be UINT8 and it shall be readable and writable. Access Policy shall be 3FF/0FF.

 • PID 52: This property shall have a property identification of 52. The format shall be PDT_GENERIC_02. This property shall have access level 2/2 (in case the device supports full access levels).

 • PID 201. This property shall have a property identification of 201. The format shall be PDT_GENERIC_01 and it shall allow values from 1 to 254, but not value 0, 128 and 255.

 2.5.2 Memory configuration For automatic testing of MemoryExtended_Read and MemoryExtended_Write (AN177, Extended Memory Services, Chapter 5) the following memory configuration in the BDUT shall present:

 • 3 types of memory blocks, i.e. Read/Write enabled memory, Read-Only enabled memory and Write-Only enabled memory.
 • The 3 memory blocks shall be consequtive (i.e., no gaps between the memory blocks).
 • The Read/Write memory block shall have the lowest address followed by the Read-Only memory block and finally the Write-Only memory block (highest address).

|LSB|Col2|MSB|LSB|Col5|MSB|LSB|Col8|MSB|
|---|---|---|---|---|---|---|---|---|
|**Read/Write **|**Read/Write **|**Read/Write **|**Read-Only **|**Read-Only **|**Read-Only **|**Write-Only **|**Write-Only **|**Write-Only **|


-----

###### Table 5 BDUT memory configuration

 • In case the described memory configuration is not possible, e.g. because the device does not have Write-Only memory or there are gaps between the memory blocks, certain test cases might not be applicable. In case the order of the memory blocks is different from the described configuration, the test cases are still applicable and need to be adjusted accordingly.

 2.5.3 EITT Configuration Before testing the secure BDUT the following steps shall be followed to setup EITT.

 1) Create a new project.

 2) In the Tool Bar select from the Test Template drop-down list the Data Security Template (“8 TSS J – Data Security Tests”). To view the template select the Tab “Conformance Tests” from the Tool Window on the left side of the EITT application. This will show a tree view of the Test Template like shown in Figure 3. The Test Template is divided in the following levels: Test Collections (e.g., “AN158 KNX Data Security”), Test Suites (e.g., “3.1 S-A_Data PDU with Tool Key”) and Test Cases (e.g., “3.1.1 correct S-A_Data A only”).

 Figure 3 Test Template Drop-down listbox and selected template

 3) Open the Data Sheet by right-clicking the root element in the Test Template and select “Open data sheet” from the context-menu. The data sheet contains all variables that are used by the template. Only the applicable variables need to be configured.

 4) Select the connected USB Interface in the “Project Specific Bus Connections” dialog which can be opened from the menu OptionsProject Specific Bus Connections. Possibly the connected interface must by given a nick name first. This can be done by pressing the “Interface Nicknames” (see EITT User Manual for more information). Also select the option “From Telegram” in the “Used Tool Address” column. This option will use the telegram source addresses as specified in the Test Template.

 Figure 4 Project Specific Bus Connections dialog


-----

###### 5) Configure the Security Configuration Table with all the keys as specified in Table 6. The Security Configuration Table is available as *.csv file from KNX.

**Source** **Address** **Destination** **Direction** **Key (16 octets)**
**Address** **Type** **Address**

10.15.254 Tool 00/0/000 in/out 11111111111111111111111111111111

10.15.254 Tool 00/0/000 in/out 00000000000000000000000000000001

10.15.254 Tool 00/0/000 in/out 00000000000000000000000000000002

10.15.254 Group 01/1/001 in/out AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

10.15.254 Group 02/2/002 in/out BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB

10.15.254 Group 03/3/003 in/out CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC

10.15.253 Group 04/4/004 in/out DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD

10.15.254 Group 06/6/006 in/out EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

01.01.001 Group 07/1/006 in/out FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF

10.01.001 Physical 02.02.002 in/out 22222222222222222222222222222222

01.01.002 Physical 02.02.002 in/out 33333333333333333333333333333333

01.01.003 Physical 02.02.002 in/out 44444444444444444444444444444444

01.01.004 Physical 02.02.002 in/out 55555555555555555555555555555555

01.01.005 Physical 02.02.002 in/out 66666666666666666666666666666666

01.01.006 Physical 02.02.002 in/out 77777777777777777777777777777777

01.01.008 Physical 02.02.002 in/out 88888888888888888888888888888888

01.01.009 Physical 02.02.002 in/out 99999999999999999999999999999999

###### Table 6 Security Configuration Table

 6) Create the required test case sequences by right-clicking on the applicable level in the Test Template tree. In the appearing context menu select “Create protected sequence for TP”. Sequences can be generated from the following levels, depending on where the user right-clicks:

 • Test Template root
 • Test Collection
 • Test Suite
 • Test Case

 From this point the user can connect to the bus and start the transmission of telegram sequences.

|Source<br>Address|Address<br>Type|Destination<br>Address|Direction|Key (16 octets)|Nick<br>Name|
|---|---|---|---|---|---|
|10.15.254|Tool|00/0/000|in/out|11111111111111111111111111111111|FDSK|
|10.15.254|Tool|00/0/000|in/out|00000000000000000000000000000001|TK1|
|10.15.254|Tool|00/0/000|in/out|00000000000000000000000000000002|TK2|
|10.15.254|Group|01/1/001|in/out|AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|GK1|
|10.15.254|Group|02/2/002|in/out|BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|GK2|
|10.15.254|Group|03/3/003|in/out|CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC|GK3|
|10.15.253|Group|04/4/004|in/out|DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD|GK4|
|10.15.254|Group|06/6/006|in/out|EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|GK5|
|01.01.001|Group|07/1/006|in/out|FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF|GK6|
|10.01.001|Physical|02.02.002|in/out|22222222222222222222222222222222|P2PK1|
|01.01.002|Physical|02.02.002|in/out|33333333333333333333333333333333|P2PK2|
|01.01.003|Physical|02.02.002|in/out|44444444444444444444444444444444|P2PK3|
|01.01.004|Physical|02.02.002|in/out|55555555555555555555555555555555|P2PK4|
|01.01.005|Physical|02.02.002|in/out|66666666666666666666666666666666|P2PK5|
|01.01.006|Physical|02.02.002|in/out|77777777777777777777777777777777|P2PK6|
|01.01.008|Physical|02.02.002|in/out|88888888888888888888888888888888|P2PK7|
|01.01.009|Physical|02.02.002|in/out|99999999999999999999999999999999|P2PK8|


-----

#### 3 Test Cases for Application Note 158/13

In the test cases in this chapter the TKLVSeq is the Last Valid Sequence Number for telegrams with the Tool
Key bit set.

##### 3.1 S-A_Data PDU with Tool Key[1]

###### 3.1.1 correct S-A_Data A only SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1.

Purpose: Check BDUT’s acceptance of a correct S-A_Data PDU and sending correct S-A_Data PDU with
authentication only.

Procedure: Send A_PropertyExtValue_Read message to OBJ_TYPE= 17, PID=1 with the correct S-A_Data
PDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [80h], appropriate sequence number
(TKLVSeq), plain APDU and MAC correctly encrypted with the TK1) and wait for
A_PropertyExtValue_Response.

(1)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.1.2 correct S-A_Data A+C  SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – Any IA - assigned security
tool key TK1.

Purpose: Check BDUT’s acceptance of a correct S-A_Data PDU for property access with access method A+C
and resource only configured for A. For Property Access the minimum requirements for the access method is
sufficient to gain access.

Procedure: Send A_PropertyExtValue_Readmessage to OBJ_TYPE= 17, PID=1 with the correct S-A_Data PDU
(i.e. correct APCI Sec [3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq),
cypher text and MAC correctly encrypted with the security key TK1) and wait for
A_PropertyExtValue_Response.

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

1 Tests applicable for both Data Secure and IP Secure Devices

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|


-----

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.1.3 correct S-A_Data A only – with a second source SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA2 3F1h 80h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA but different than
clause 3.1.1 - assigned security tool key TK1.

Purpose: Check BDUT’s accepts correct S-A_Data PDU from a second source address in contrast to test case
3.1.1, to check whether any IA is accepted if encrypted with the security tool key TK1.

Procedure: Send A_PropertyExtValue_Read message with a correct S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], appropriate sequence number (TKLVSeq), plain APDU and MAC
correctly encrypted with TK1) but with another source address than in clause 3.1.1, and wait for
A_PropertyExtValue_Response.

(1)  T A IN 3C 60 01.01.241 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T A OUT 3C 60 01.01.001 01.01.241 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.1.4 incorrect S-A_Data A only - incorrect APCI Sec
Covered by Application Layer Tests s. 8/3/7 “wrong APCIs”

###### 3.1.5 correct S-A_Data A only - incorrect SCF because of incorrect tool access SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 00h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check that the BDUT rejects a frame with correct S-A_Data PDU with plain data but with MAC
correctly encrypted with TK1 but for which in the SCF the tool bit is not set.

Procedure: Send A_PropertyExtValue_Read message with incorrect S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], incorrect Security Control Field [00h], appropriate sequence number (TKLVSeq), plain data and MAC
correctly encrypted with TK1).

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
SCF=00

Acceptance: the BDUT rejects the frame and does not show any reaction.

###### 3.1.6 incorrect S-A_Data A only reserved SAI SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA2|3F1h|80h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|00h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|


-----

|Off|TK1|IA1|3F1h|20h|TKLVSeq|000000|Plain|TK1|A PropertyExtValueRead<br>_<br>– OBJ Type = 17, PID=1<br>_|
|---|---|---|---|---|---|---|---|---|---|


Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Data PDU: incorrect SAI

Procedure: Send A_PropertyExtValue_Read message with incorrect S-A_Data PDU (i.e. correct APCI Sec

[3F1h], incorrect Security Control Field because of unsupported SAI [20h], appropriate sequence number
(TKLVSeq), plain data and MAC correctly encrypted with TK1).

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
SCF=20

Acceptance: the BDUT rejects the frame and shows no reaction

###### 3.1.7 correct S-A_Data A only with SBC set to 1 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 88h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check that the BDUT accepts a frame with correct S-A_Data PDU, but with SBC set to 1

Procedure: Send A_PropertyExtValue_Read message to BDUT with the correct S-A_Data PDU, (i.e. correct
APCI Sec [3F1h], correct Security Control Field [88h], appropriate sequence number (TKLVSeq), plain data and
MAC correctly encrypted with TK1), and wait for A_PropertyExtValue_Response.

(1)  T A SBC IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T A SBC OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame because
the SBC set to 1 shall not influence its acceptance of the frame

###### 3.1.8 incorrect S-A_Data A only- reserved S-AL service type  SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 84h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=1

Required BDUT setting: Property OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Data PDU: incorrect S-AL service type

Procedure: Send A_PropertyExtValue_Read message with the incorrect S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], incorrect SCF because of unsupported S-AL service type [84h], appropriate sequence number
(TKLVSeq), plain data and MAC correctly encrypted with TK1).

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
SCF=84

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|88h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|84h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|


-----

Acceptance: the BDUT rejects the frame and shows no reaction

###### 3.1.9 correct S-A_Data A only -sequence number identical/lower than last known SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h 2 x 000000 Plain TK1 A_PropertyExtValueRead TKLVSeq – OBJ_Type = 17, PID=1 or TKLVSeq –1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check BDUT’s rejection of an S-A_Data PDU, indicating a sequence number lower than the last
known for tool

Procedure: Send A_PropertyExtValue_Readmessage with the correct S-A_Data PDU,(i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], plain data and MAC correctly encrypted with TK1) but use
sequence number that is identical/lower than the sequence number last known by the receiver for the tool)

(1)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

(3)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

Acceptance: the BDUT rejects the frame and shows no reaction

###### 3.1.10 correct S-A_Data A only incrementation of sequence number by 1
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq + 000000 Plain TK1 A_PropertyExtValueRead TKLVSeq+1 – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU,

Procedure: Send two concurrent A_PropertyExtValue_Read messages with the correct S-A_Data PDU, (i.e.
correct APCI Sec [3F1h], correct Security Control Field [80h], correct sequence number (TKLVSeq), Plain
APDU and MAC correctly encrypted with TK1) and increment the sequence number between the two messages
by 1.

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|2 x<br>TKLVSeq<br>or<br>TKLVSeq<br>–1|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq +<br>TKLVSeq+1|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|


-----

(3)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: the BDUT accepts both frames and BDUT delivers responses with a correct encoded frame.

###### 3.1.11 correct S-A_Data A only incrementation of sequence number by 2
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq + 000000 Plain TK1 A_PropertyExtValueRead TKLVSeq+2 – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU,

Procedure: Send two concurrent PropertyValueRead messages with the correct S-A_Data PDU, (i.e. correct
APCI Sec [3F1h], correct Security Control Field [80h], correct sequence number (TKLVSeq), plain data and
MAC correctly encrypted with TK1) and increment the sequence number between the two messages by 2.

(1)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(2)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

(3)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: the BDUT accepts both frames and BDUT delivers responses with a correct encoded frame.

###### 3.1.12 incorrect S-A_Data PDU - padded 6 bits in the secure data, following the sequence number, not set to zero SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq != Plain TK1 A_PropertyExtValueRead 000000 – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1

Purpose: Check BDUT’s rejection of a correct S-A_Data PDU, but padded 6 bits in the secure data, following
the sequence number not set to zero.

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq +<br>TKLVSeq+2|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq|!=<br>000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|


-----

Procedure: Send A_PropertyExtValue_Read message with an correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], appropriate sequence number (TKLVSeq), plain data and MAC
correctly encrypted with TK1 but leading 6 bits set to other value than 0b).

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 01h

(2)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 02h

(3)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 04h

(4)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 08h

(5)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 10h

(6)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
reserved bits set to 20h

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.13 incorrect S-A_Data PDU - wrongly coded MAC for A only
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq 000000 Plain !=TK1 A_PropertyExtValueRead
 – OBJ_Type = 17, PID=1

Required BDUT setting: Property (OBJ_TYPE= 17, PID=1, Security Mode off) – any IA - assigned security tool
key TK1.

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU - wrong MAC

Procedure: Send A_PropertyExtValue_Read message with an correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], appropriate sequence number (TKLVSeq), plain data and MAC
incorrectly encrypted according to TK1).

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
MAC set to 01 02 03 04

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.14 correct S-A_Data A+C
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1.

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq|000000|Plain|!=TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17, PID=1|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|


-----

Purpose: Check BDUT’s accepts correct S-A_Data PDU from a certain individual address.

Procedure: Send A_PropertyExtValue_Read message to Security Support Control property with a correct SA_Data PDU, (i.e. correct APCI Sec [3F1h], correct Security Control Field [90h], appropriate sequence number
(TKLVSeq), cypher text and MAC correctly encrypted with TK1).

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.1.15 correct S-A_Data A+C, with a second source
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA2 3F1h 90h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA but different than in clause 3.1.14 - assigned security tool key TK1.

Purpose: Check BDUT’s accepts correct S-A_Data PDU from a second source address in contrast to test case
3.1.14, to check whether any IA is accepted if encrypted with the security tool key TK1.

Procedure: Send A_PropertyExtValue_Read message to Security Support Control property with a correct SA_Data, (i.e. correct APCI Sec [3F1h], correct Security Control Field [90h], appropriate sequence number
(TKLVSeq), cypher text and MAC correctly encrypted with TK1) but with another source address than in clause
3.1.14.

(1)  T C IN 3C 60 01.01.241 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 01.01.241 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.1.16 incorrect S-A_Data PDU - incorrect APCI
Covered by Application Layer Test s. 8/3/7 'wrong APCIs'

###### 3.1.17 correct S-A_Data A+C, incorrect SCF because of incorrect tool access
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 10h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check that the BDUT rejects a frame with correct S-A_Data PDU with cypher text and MAC correctly
encrypted with TK1 but for which in the SCF the tool bit is not set

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA2|3F1h|90h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|10h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|


-----

Procedure: Send A_PropertyExtValue_Read message with correct S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], incorrect Security Control Field [10h], appropriate sequence number (TKLVSeq), cypher text and MAC
correctly encrypted with TK1).

(1)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
SCF=10

Acceptance: the BDUT rejects the frame and does not show any reaction.

###### 3.1.18 correct S-A_Data A+C, with SBC set to 1
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 98h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check that the BDUT accepts a frame with correct S-A_Data PDU, but with SBC set to 1

Procedure: Send A_PropertyExtValue_Read message to BDUT with the correct S-A_Data PDU, (i.e. correct
APCI Sec [3F1h], correct Security Control Field [98h], appropriate sequence number (TKLVSeq), cypher text
and MAC correctly encrypted with TK1).

(1)  T C SBC IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C SBC OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: the BDUT accepts the frame as an SBC set to 1 shall not influence its acceptance of the frame

###### 3.1.19 incorrect S-A_Data A+C, reserved S-AL service type
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 94h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Data PDU: incorrect S-AL service type

Procedure: Send A_PropertyExtValue_Read message with the incorrect S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], incorrect SCF because of unsupported S-AL service type [94h], appropriate sequence number
(TKLVSeq), cypher text and MAC correctly encrypted with TK1).

(1)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
SCF=94

Acceptance: the BDUT rejects the frame and shows no reaction

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|98h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|94h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|


-----

###### 3.1.20 correct S-A_Data A+C, incrementation of sequence number by 1
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq, 000000 TK1 TK1 A_PropertyExtValueRead TKLVSeq – OBJ_Type = 17, + 1 PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU,

Procedure: Send a A_PropertyExtValue_Read messages with the correct S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], correct Security Control Field [90h], correct sequence number (TKLVSeq), cypher text and MAC
correctly encrypted with TK1), wait for response and repeat the same message but increment the sequence
number between the two messages by 1.

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: the BDUT accepts both frames and BDUT delivers responses with a correct encoded frame.

###### 3.1.21 correct S-A_Data A+C, incrementation of sequence number by 2
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq, 000000 TK1 TK1 A_PropertyExtValueRead TKLVSeq – OBJ_Type = 17, + 2 PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU

Procedure: Send an A_PropertyExtValue_Read messages with the correct S-A_Data PDU, (i.e. correct APCI
Sec [3F1h], correct Security Control Field [90h], correct sequence number (TKLVSeq), cypher text and MAC
correctly encrypted with TK1), wait for the response and send again the same message but increment the
sequence number between the two messages by 2.

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq,<br>TKLVSeq<br>+ 1|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq,<br>TKLVSeq<br>+ 2|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|


-----

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: the BDUT accepts both frames and BDUT delivers responses with a correct encoded frame.

###### 3.1.22 correct S-A_Data A+C, sequence number identical/lower than last known
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h 2 x 000000 TK1 TK1 A_PropertyExtValueRead TKLVSeq, – OBJ_Type = 17, TKLVSeq - PID=57 1

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check BDUT’s rejection of an S-A_Data PDU, indicating a sequence number identical/lower than the
last known by receiver

Procedure: Send A_PropertyExtValue_Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [90h], cipher text and MAC correctly encrypted with TK1) but use
sequence number that is identical than the sequence number last known by the receiver). Repeat the tests with a
sequence number lower than the last known by the receiver.

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(4)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.23 incorrect S-A_Data A+C - wrongly encrypted cipher text
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 !=TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU - wrongly encrypted cipher text

Procedure: Send A_PropertyExtValue_Read message with an incorrect S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq), cipher text correctly
encrypted according to TK1 and MAC correctly encrypted with TKLVSeq, cypher text set in the invalid
attributes of EITT to 01 02 03 04 05 06 07 08 09 0Ah)

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|2 x<br>TKLVSeq,<br>TKLVSeq -<br>1|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|!=TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|


-----

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

(3)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
Cypher set to 01 02 03 04 05 06 07 08 09 0A

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.24 correct S-A_Data A+C, Plain APDU 
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 On TK1 IA1 3F1h 90h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57

Required BDUT setting: PID_SECURITY_REPORT (57) of Security Interface Object (requiring A+C) – Any
IA - assigned security tool key TK1

Purpose: Check BDUT’s rejection of the correct S-A_Data PDU, however not providing confidentiality

Procedure: Send A_PropertyExtValue_Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq), correctly encoded Plain
APDU (set in the invalid attributes of EITT to 01 CC 00 11 00 10 39 01 00 00h) and MAC correctly encrypted
with TK1).

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
Cypher set to 01 CC 00 11 00 10 39 01 00 00

Deactivate Security Mode

(4)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(5)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Acceptance: the BDUT rejects the frame as not providing confidentiality.

###### 3.1.25 incorrect S-A_Data A+C - wrongly coded MAC 
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 TK1 !=TK1 A_PropertyExtValueRead
 – OBJ_Type = 17, PID=58

Required BDUT setting: PID_SECURITY_REPORT_CONTROL (58) of Security Interface Object (requiring
A+C) – Any IA - assigned security tool key TK1

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU with A+C and wrongly coded MAC

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|On|TK1|IA1|3F1h|90h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|TK1|!=TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=58|


-----

Procedure: Send A_PropertyExtValue_Read message with an incorrect S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq), cipher text correctly
encrypted with TK1 and incorrectly encrypted MAC according TK1, i.e. in EITT’s invalid attributes e.g. set to
the value 11 22 33 44h).

(1)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
MAC set to 11 22 33 44

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.26 correct S-A_Data, A only - but encrypted with AT=group
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57, however encrypted with Address Type =group

Required BDUT setting: Property (PID 57, Security Mode off) – any IA - assigned security tool key TK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU but encrypted with
AddressType=Group

Procedure: Send A_PropertyExtValue_Read message with the correct S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], appropriate sequence number (TKLVSeq), plain data and MAC
encrypted with TK1 but with address type information set to group [Use invalid attribute ‘Addr. Type wrong’ in
EITT set to ‘yes’].

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
address type wrong

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.27 correct S-A_Data, A+C - but encrypted with AT=group 
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57, however encrypted with Address Type =group

Required BDUT setting: Property Security Report (57) of Security Interface Object (requiring A+C) – Any IA assigned security tool key TK1

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU but encrypted with
AddressType=Group

Procedure: Send PropertyValueRead message to Security Report property with the correct S-A_Data PDU, (i.e.
correct APCI Sec [3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq),
cypher text and MAC correctly encrypted with TK1 but with address type information set to group [Use invalid
attribute ‘Addr. Type wrong’ in EITT set to ‘yes’].

(1)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
address type wrong

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57,however<br>encrypted with Address<br>Type =group|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57,however<br>encrypted with Address<br>Type =group|


-----

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.28 correct S-A_Data, A only – one byte too many
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 80h TKLVSeq 000000 Plain TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57, however one byte too many

Required BDUT setting: Property (PID 1, Security Mode off) – any IA - assigned security tool key TK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU with one byte too many

Procedure: Send A_PropertyExtValue_Read message with the correct S-A_Data PDU, (i.e. correct APCI Sec

[3F1h], correct Security Control Field [80h], appropriate sequence number (TKLVSeq), plain data and MAC
correctly encrypted with TK1), but add additional byte [Use the invalid attributes possibility in EITT, MAC = ??
?? ?? ?? xx whereby xx is any byte value].

(1)  ! T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1,
MAC set to ?? ?? ?? ?? 00

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.1.29 correct S-A_Data, A+C - but one byte too few
 SecMod Key IA ACPI SCF SeqNo 6 APDU MAC Other Sec reserved
 bits

 Off TK1 IA1 3F1h 90h TKLVSeq 000000 TK1 TK1 A_PropertyExtValueRead – OBJ_Type = 17, PID=57, but one byte too few

Required BDUT setting: Property Security Support Control (57) of Security Interface Object (requiring A+C) –
Any IA - assigned security tool key TK1

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU but one byte too few [Use the
invalid attributes possibility in EITT, MAC = ?? ?? ??]

Procedure: Send PropertyValueRead message to Object Type property with the correct S-A_Data PDU, (i.e.
correct APCI Sec [3F1h], correct Security Control Field [90h], appropriate sequence number (TKLVSeq),
cypher text and MAC correctly encrypted with TK1), but one byte too few.

(1)  ! T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1,
MAC set to ?? ?? ??

Acceptance: the BDUT rejects the frame and shows no reaction.

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|80h|TKLVSeq|000000|Plain|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57,however one<br>byte too many|

|SecMod|Key|IA|ACPI<br>Sec|SCF|SeqNo|6<br>reserved<br>bits|APDU|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|3F1h|90h|TKLVSeq|000000|TK1|TK1|A_PropertyExtValueRead<br>– OBJ_Type = 17,<br>PID=57,but one byte too<br>few|


-----

##### 3.2 S-A_Data PDU with Group Key[2]

###### 3.2.1 Introduction In this chapter, only tests are defined that are thought to bring added value in checking the compliance to AN 158 of a BDUT also supporting group communication. Tests that were already performed in clause 3.1 and of which it is assumed that the behaviour of the BDUT will be the same, regardless of whether sent P2P with Tool key or via group communication with a runtime key, are not repeated here. In the underneath examples of stimuli, the sequence number is always taken to be 1 for the first shown telegram in the sequence shown and incremented with each new group telegram. 

 The following object settings is assumed underneath ((S) denotes the sending address): 

 GO Number Security Key Group Address A/C flags ?

 0 GK1 1/1/1 A GK2 2/2/2 (S)

 1 GK3 3/3/3 C GK4 4/4/4 (S)

 2 - 5/5/5 Plain

 3 GK5 6/6/6 C only

The following object settings is assumed underneath:

- GO Number: 0 Security Key: GK1 / GK2 Group Address: 1/1/1, 2/2/2 (S), A/C: A

- GO Number: 1 Security Key: GK3 / GK4 Group Address: 3/3/3, 4/4/4 (S), A/C: A+C

- GO Number: 2 Security Key: ---  Group Address: 5/5/5  A/C: Plain

- GO Number: 3 Security Key: GK5  Group Address: 6/6/6  A/C: C only

###### 3.2.2 correct S-A_Data PDU - A only
Required BDUT setting: Group Object according 2.3.1 index 2 - group address and IA of the test tool in the
appropriate tables of the BDUT - assigned GK1.

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU and sending correct S-A_Data PDU.

Procedure: Send read message to group object with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h],
correct Security Control Field [00h], appropriate sequence number, plain APDU and MAC correctly encrypted
with the GK1) and wait for response.

(1)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

(2)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.2.3 correct S-A_Data, A+C encoded, but A only required 
Required BDUT setting: Group Object according 2.3.1 index 2 - group address and IA of test tool in the
appropriate tables of BDUT - assigned GK1.

Purpose: Check BDUT’s rejection of S-A_Data PDU with A+C to a group object requiring A only.

Procedure: Send message to group object with the correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly encrypted with
GK1), but to a Group Object requiring A only.

(1)  C IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

Acceptance: the BDUT rejects the frame and shows no reaction.

2 Tests only applicable for KNX Data Secure devices, not for KNX IP Secure devices.

|GO Number|Security Key|Group Address|A/C flags ?|
|---|---|---|---|
|0|GK1<br>GK2|1/1/1<br>2/2/2 (S)|A|
|1|GK3<br>GK4|3/3/3<br>4/4/4 (S)|C|
|2|-|5/5/5|Plain|
|3|GK5|6/6/6|C only|


-----

###### 3.2.4 correct S-A_Data PDU – A only - with a second source and destination address
Required BDUT setting: Group Object according 2.3.1 index 2 – another source and destination address as in
test case 3.2.3, destination address and IA of test tool in the appropriate tables of BDUT - assigned GK2.

Purpose: Check BDUT’s accepts correct S-A_Data PDU, with a second source and destination address in
contrast to test case 3.2.3, to check whether an alternative source and destination address are taken into account
during the MAC calculation.

Procedure: Send message to group object with a correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [00h], appropriate sequence number, plain APDU and MAC correctly encrypted with
GK2) but with a second source and destination address corresponding to the encrypted MAC.

(1)  A IN BC 10.15.253 02/2/002 E1 00 00 :GroupValueRead(Grp=02/2/002), Key: GK2

(2)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.2.5 correct S-A_Data – A only - but encrypted with AT=P2P 
Required BDUT setting: Group Object according 2.3.1 index 2 - only group address and IA of the test tool in the
appropriate tables of the BDUT - assigned security runtime key GK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU but encrypted with
AddressType=P2P.

Procedure: Send message to group object with the correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, plain data, MAC correctly encrypted with the
security runtime key GK1 but with address type information set to P2P [Use invalid attribute ‘Addr. Type
wrong’ in EITT set to ‘yes’].

(1)  ! A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1, address type wrong

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.6 correct S-A_Data (A only) - correct SCF with correct tool key access
Required BDUT setting: Group Object according 2.3.1 index 2 - group address and TK1 active in the device.

Purpose: Check that the BDUT rejects a frame with correct S-A_Data PDU of which the MAC is encrypted with
the correct security tool key (see AN158 clause 2.2.1.5.3.2)

Procedure: Send message to group object with the correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [80h], appropriate sequence number, plain APDU and MAC correctly encrypted with the
correct security tool key TK1). Repeat the message but without the toolkey bit set.

With tool key set and without toolkey set

(1)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: TK1

(2)  T A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: TK1

With another group address

(3)  A IN BC 10.15.254 02/2/002 E1 00 00 :GroupValueRead(Grp=02/2/002), Key: TK1

(4)  T A IN BC 10.15.254 02/2/002 E1 00 00 :GroupValueRead(Grp=02/2/002), Key: TK1

Acceptance: the BDUT rejects the frames and records this in the Security Failures log.

###### 3.2.7 Test case (negative) - incorrect S-A_Data PDU - wrongly coded MAC for A only
Required BDUT setting: Group Object according 2.3.1 index 2 - group address and IA of test tool in the
appropriate tables of BDUT - assigned runtime GK1.

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU - wrong MAC.


-----

Procedure: Send message to group object with an incorrect S-A_Data PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [00h], appropriate sequence number, plain APDU and MAC incorrectly encrypted
according to GK1).

(1)  ! A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1, MAC set to FF ??
?? ??

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.8 Test case (positive) - correct S-A_Data PDU - A and C required
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of the test tool in the
appropriate tables of the BDUT - assigned security runtime key GK3.

Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU.

Procedure: Send read message to group object with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h],
correct Security Control Field [10h], appropriate sequence number, cypher text and MAC correctly encrypted
with the security runtime key GK3) and wait for correct encoded response.

(1)  C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(2)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Acceptance: The BDUT accepts the frame and BDUT delivers response with a correct encoded frame.

###### 3.2.9 correct S-A_Data PDU –Group object security flags no A, no C
Required BDUT setting: Group Object according 2.3.1 index 1 - group address and IA of test tool in the
appropriate tables of BDUT – no runtime security key assigned.

Purpose: Check BDUT’s rejection of a correct S-A_Data PDU.

Procedure: Send message to group object with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10 or 00h], appropriate sequence number, cipher text and MAC correctly encrypted with
e.g. GK3), but to a Group Object of which the security flags A and C are not set.

(1)  C IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005), Key: GK3

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.10 correct S-A_Data, - A and C required - with a second source and destination address
Required BDUT setting: Group Object according 2.3.1 index 4 – source and destination address and IA of test
tool in the appropriate tables of BDUT - assigned runtime security GK4.

Purpose: Check BDUT’s accepts correct S-A_Data PDU, with a second source and destination address in
contrast to test case 3.2.9, to check whether an alternative source and destination address are taken into account
during the MAC calculation.

Procedure: Send message to group object with a correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, cypher text and MAC correctly encrypted with the
security runtime key GK4) but with a second source and destination address corresponding to the encrypted
MAC.

(1)  C IN BC 10.15.253 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(2)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Acceptance: the BDUT accepts the frames and sends the appropriate responses.

###### 3.2.11 correct S-A_Data – A+C - but encrypted with AT=P2P 
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of the test tool in the
appropriate tables of the BDUT - assigned GK3.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Data PDU but encrypted with
AddressType=P2P.


-----

Procedure: Send message to group object with the correct S-A_Data PDU, (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, cypher text and MAC correctly encrypted with GK2
but with address type information set to P2P [Use invalid attribute ‘Addr. Type wrong’ in EITT set to ‘yes’].

(1)  ! C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3, address type wrong

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.12 correct S-A_Data, - tool key Flag set and runtime key used for encyption
BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of test tool in the appropriate tables

- assigned runtime security key GK3.

Purpose: Check that the BDUT rejects a frame with S-A_Data PDU: Tool key flag set in SCF, but runtime key
used for encryption.

Procedure: Send message to group object with the correct S-A_Data PDU, (i.e.correct APCI Sec, Security
Control Field [90h], appropriate sequence number, cipher text and MAC correctly encrypted with the security
runtime key x).

(1)  ! T C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3, SCF=90

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.13 correct S-A_Data - with a correct sequence number but from a different IA
Required BDUT setting: Group Object according 2.3.1 index 4 assigned with the security runtime key GK4 group address and 2 IAs of the test tool in the appropriate tables of the BDUT, first IA having SeqNo lower (e.g.
15.15.254 – value 5) than sequence number of second IA (e.g. 15.15.253 - value 7).

Purpose: Check BDUT rejects S-A_Data PDU, with a sequence number that is actually the next sequence
number of the first IA.

Procedure: Send message from the second IA to group object with the correct S-A_Data PDU, (i.e. correct APCI
Sec [3F1h], correct Security Control Field [10h], correct incremented sequence number but from the first IA (in
this example 6), cipher text and MAC correctly encrypted with the security runtime key GK4).

Write the sequence number number (1) for IA1

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 02 AF FE 00 00 00 00 00 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
Data=AF FE 00 00 00 00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 02 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
RetCode=00), Key: TK1

Write the sequence number (3) for IA2

(3)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 AF FD 00 00 00 00 00 03
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=AF FD 00 00 00 00 00 03 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read Group Object with sequence number 2 (expected for IA1) from IA2

(5)  C IN BC 10.15.253 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.14 incorrect S-A_Data PDU A+C- wrongly encrypted cipher text
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of test tool in the
appropriate tables of BDUT - assigned runtime security key GK3.

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU - wrongly encrypted cipher text.


-----

Procedure: Send message to group object with an incorrect S-A_Data PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, cipher text correctly encrypted according to the
security runtime key GK3 and MAC correctly encrypted with the security runtime key GK3, cyphertext
afterwards changed manually).

(1)  ! C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3, Cypher set to FF

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.15 correct S-A_Data PDU - A and C required – A only received
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of test tool in the
appropriate tables of the BDUT - assigned security runtime key GK3.

Purpose: Check BDUT’s rejection of the correct S-A_Data PDU, however not providing confidentiality.

Procedure: Send message to group object with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, however correctly encoded Plain APDU but MAC
correctly encrypted with the security runtime key GK3)

(1)  A IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

Acceptance: the BDUT rejects the frame as not providing confidentiality.

###### 3.2.16 correct S-A_Data PDU - A and C required - Plain received
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of test tool in the
appropriate tables of the BDUT - assigned security runtime key GK3.

Purpose: Check BDUT’s rejection of the correct S-A_Data PDU, however sent plain.

Procedure: Send message to group object plainly encoded, not providing confidentiality nor authentication.

(1)  IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003)

Acceptance: the BDUT rejects the frame as neither providing confidentiality nor authentication.

###### 3.2.17 incorrect S-A_Data PDU - wrongly coded MAC for A+C
Required BDUT setting: Group Object according 2.3.1 index 4 - group address and IA of test tool in the
appropriate tables of BDUT - assigned runtime security key GK3.

Purpose: Check BDUT’s rejection of an incorrect S-A_Data PDU - wrongly coded MAC.

Procedure: Send message to group object with an incorrect S-A_Data PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [10h], appropriate sequence number, cipher text correctly encrypted with the security
runtime key GK3 and encrypted MAC incorrectly encrypted according security runtime key GK3).

(1)  ! C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3, MAC set to FF ??
?? ??

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.2.18 correct S-A_Data PDU – GA linked to GO requiring plain only
Required BDUT setting: Group Object according 2.3.1 index 1 - group address and IA of the test tool in the
appropriate tables of the BDUT – no assigned GK

Purpose: Check that the BDUT rejects a correct S-A_Data PDU but to a GO requiring plain data.

Procedure: Send read message to group object with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h],
correct Security Control Field [00h or 01h], appropriate sequence number, cypher text and/or MAC correctly
encrypted with the GK3) and wait for response.

(1)  C IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005), Key: GK3

Acceptance: The BDUT rejects the frame and shows no reaction.


-----

###### 3.2.19 correct S-A_Data PDU - only C set in Secure Group Object flags – A and C received
Required BDUT setting: Group Object according 2.3.1 index 3 - group address and IA of test tool in the
appropriate tables of the BDUT - assigned security runtime key GK5.

Purpose: Check BDUT’s rejection of the correct S-A_Data PDU, as message sent with authentication and
confidenticality but group object setting only require C.

Procedure: Send message to group object providing confidentiality and authentication.

(1)  C IN BC 10.15.254 06/6/006 E1 00 00 :GroupValueRead(Grp=06/6/006), Key: GK5

Acceptance: the BDUT rejects the frame as providing confidentiality nor authentication, where the object
requires only confidentiality.

##### 3.3 S-A_Sync_Req[3]

Perform the Sequence - Test Preparation - BDUT Setup

– Write SeqNoSending=2 in the BDUT

– Clear the entries in the EITT security sequence number table (with @@[rn command)

Set Sequence Number Remote to 2

(1)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 00 02
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 00 02 ), Key: TK1

[rn

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Sync with BDUT to update EITT with set Sequence Number Remote

(3)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(4)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

###### 3.3.1 correct S-A_Sync_Req-PDU, A+C– P2P– connection-oriented SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC
 Sec Local

 Off TK1 IA1 P2PCo 3F1h 92h 0 0 TK1 TK1 
Note1: SeqNoRemote is always the value of the SeqNoSending of the BDUT, i.e. value that is incremented with
each message the BDUT sends on the bus. The SeqNoSending of the BDUT can be overwritten via the relevant
property and can be reset.

Note2: SeqNoLocal 0 in the Sync request will always result in a response containing the sequence number

   - for tool access that the DUT expects from the tool if the request was sent with the tool key.
   - for point to point access that the DUT expects from the relevant device if the request was sent with a
P2P key.
In both cases the value is one higher than the value it has itself stored in its memory as the last one received.

The value SeqNoLocal for tool access can not be overwritten via a property and cannot be reset. That for point to
point access can.

3 Tests applicable for both KNX Data Secure as well as KNX IP Secure devicces.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCo|3F1h|92h|0|0|TK1|TK1|-|


-----

The value 0 for SeqNoLocal in the Sync request will not unnecessarily increase the expected sequence number in
the DUT

Required BDUT Setting: None.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  T req IN 3C 60 10.15.254 01.01.001 18 43 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  T res OUT 3C 60 01.01.001 10.15.254 18 43 F1 93 00 00 00 00 00 01 00 00 00 00 00 03 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=3, Seq.local=tool), Key: TK1

(5)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=3,
SeqNum.local=tool, MAC correctly encrypted with TK1 and the extracted random value).

###### 3.3.2 correct S-A_Sync_Req-PDU, A+C– P2P– connectionless SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Other
 Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h 0 0 TK1 TK1 
Required BDUT Setting: TK1 – test tool uses IA1.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU now sent connectionless.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 03 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=3, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=3,
SeqNum.local=tool, MAC correctly encrypted according TK1 and the extracted random value).

###### 3.3.3 correct S-A_Sync_Req-PDU, A+C– P2P connectionless, from second IA SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Other
 Sec Local

 Off TK1 IA2 P2PCl 3F1h 92h 0 0 TK1 TK1 
Required BDUT Setting – TK1, test tool uses IA2 (make sure that the EITT settings allow sending with a
different sending address).

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU sent from IA2.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|0|0|TK1|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA2|P2PCl|3F1h|92h|0|0|TK1|TK1|-|


-----

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC with TK1 but sent via IA2).

(1)  T req IN 3C 60 15.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 15.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 03 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=3, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=3,
SeqNum.local=tool, MAC correctly encrypted according TK1 and the extracted random value).

###### 3.3.4 correct S-A_Sync_Req-PDU, A+C– P2P, connectionless, not with TooKey[4] SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC
 Sec Local

 Off P2PK1 IA1 P2PCl 3F1h 12h 0 0 P2PK1 P2PK1 
THIS TEST CASE IS OPTIONAL FOR DEVICES NOT SUPPORTING P2P_KEY_TABLE

Required BDUT Setting: Allow IA1 to send messages encrypted by P2PK1, so set IA1 in
PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE and P2PK1 in the PID_P2P_KEY_TABLE.

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  T C IN 3C 60 10.15.254 01.01.001 11 41 CE 00 11 00 10 36 01 00 01 AF FE 00 00 00 00 00 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=AF FE 00 00 00 00 00 01 ), Key: TK1

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  T C IN 3C 60 10.15.254 01.01.001 1D 45 CE 00 11 00 10 34 01 00 01 00 01 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 ), Key: TK1

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  T C OUT 3C 60 01.01.001 10.15.254 0A 45 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(9)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 63 4B 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 64 4B A1 00 ?? ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=????)

(13)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU and send via the correct
sending Individual Address.

4 Optional for devices not supporting P2P_KEY_TABLE

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|12h|0|0|P2PK1|P2PK1|-|


-----

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [12h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC with P2PK1 and sent via IA1).

(14)  req IN 3C 60 10.15.254 01.01.001 18 03 F1 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(15)  res OUT 3C 60 01.01.001 10.15.254 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 05 00 00 00 00 00 02
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=5, Seq.local=2), Key: P2PK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [13h], received challenge XOR with random, SeqNum.remote=5,
SeqNum.local=2, MAC correctly encrypted according P2PK1 and the extracted random value).

###### 3.3.5 correct S-A_Sync_Req-PDU, A+C– P2P, connectionless, not with tookey, from IA not part of the PID_Security_Individual_Address_Table[5] SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Other
 Sec Local

 Off P2PK1 IA3 P2PCl 3F1h 12h 0 0 P2PK1 P2PK1 
Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting – P2PK1 - test tool uses IA3.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Req-PDU sent from IA3.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [12h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC with P2PK1but sent via IA3).

(1)  req IN 3C 60 01.01.023 01.01.001 18 03 F1 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.6 correct S-A_Sync_Req-PDU – (system) broadcast SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 SysBroadcast 3F1h 9Ah 0 =BDUT TK1 TK1

 Off TK1 IA1 Broadcast 3F1h 92h 0 =BDUT TK1 TK1

Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU sent broadcast and system
broadcast.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [9Ah for system broadcast, 92h for broadcast], SeqNum.local=0, KNX serial number set
to value of the BDUT, correctly encrypted challenge and correctly encrypted MAC).

Broadcast

(1)  T req IN 3C E0 10.15.254 00/0/000 18 03 F1 92 00 00 00 00 00 00 FE ED BA BE CA FE 00 00 00 00 00
01 00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=FE ED BA BE CA FE, Challenge=00 00 00 00 00
01), Key: TK1

(2)  T res OUT 3C E0 01.01.001 00/0/000 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 05 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=5, Seq.local=tool), Key: TK1

5 Optional for devices not supporting P2P_KEY_TABLE

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA3|P2PCl|3F1h|12h|0|0|P2PK1|P2PK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|SysBroadcast|3F1h|9Ah|0|=BDUT|TK1|TK1|-|
|Off|TK1|IA1|Broadcast|3F1h|92h|0|=BDUT|TK1|TK1|-|


-----

System Broadcast

(3)  T req SBC IN 3C E0 10.15.254 00/0/000 18 03 F1 9A 00 00 00 00 00 00 FE ED BA BE CA FE 00 00 00
00 00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=FE ED BA BE CA FE, Challenge=00 00 00 00
00 01), Key: TK1

(4)  T res SBC OUT 3C E0 01.01.001 00/0/000 18 03 F1 9B 00 00 00 00 00 01 00 00 00 00 00 05 00 00 00 00
00 00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=5, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [9Bh for system broadcast, 93h for broadcast], received challenge XOR with
random, SeqNum.remote=5, SeqNum.local=tool, MAC correctly encrypted according TK1 and the extracted
random value).

###### 3.3.7 incorrect S-A_Sync_Req-PDU - incorrect APCI – P2P
'Covered by 'Wrong APCI tests (Vol8/3/7)'

###### 3.3.8 incorrect S-A_Sync_Req-PDU – reserved SAI case 1 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Other Sec Local

 Off TK1 IA1 P2PCl 3F1h 82h 0 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Sync_Req-PDU with reserved value SAI =
000b.

Procedure: Send message to BDUT with an incorrect S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h],
incorrect Security Control Field [82h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge
and correctly encrypted MAC).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, SCF=82

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.9 incorrect S-A_Sync_Req-PDU – reserved SAI case 2 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h E2h 0 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Sync_Req-PDU with reserved SAI value =
111b.

Procedure: Send message to BDUT with an incorrect S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h],
incorrect Security Control Field [E2h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge
and correctly encrypted MAC).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, SCF=E2

Acceptance: the BDUT rejects the frame and shows no reaction.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|82h|0|0|TK1|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|E2h|0|0|TK1|TK1|-|


-----

###### 3.3.10 S-A_Sync_Req, A+C with KNX Serial number set to 0 for (system) broadcast SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC
 Sec Local

 Off TK1 IA1 System 3F1h 9Ah 0 0 TK1 TK1 Broadcast

 Off TK1 IA1 Broadcast 3F1h 92h 0 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Req-PDU sent broadcast and system
broadcast, but because the serial number is set to 0.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [9Ah for system broadcast, 92h for broadcast], SeqNum.local=0, KNX serial number=0,
correctly encrypted challenge and correctly encrypted MAC).

Broadcast

(1)  T req IN 3C E0 10.15.254 00/0/000 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

System Broadcast

(2)  T req SBC IN 3C E0 10.15.254 00/0/000 18 03 F1 9A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
01 00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.11 S-A_Sync_Req-PDU, A+C with KNX Serial number not corresponding to that of the BDUT – (system) broadcast SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC
 Sec Local

 Off TK1 IA1 System 3F1h 9Ah 0 !=BDUT TK1 TK1 Broadcast

 Off TK1 IA1 Broadcast 3F1h 92h 0 !=BDUT TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Req-PDU sent broadcast and system
broadcast, because the indicated serial number does not match that of the BDUT.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [9Ah for system broadcast, 92h for broadcast], SeqNum.local=0, KNX serial number not
corresponding to that of the BDUT, correctly encrypted challenge and correctly encrypted MAC).

Broadcast

(1)  T req IN 3C E0 10.15.254 00/0/000 18 03 F1 92 00 00 00 00 00 00 12 34 56 78 9A BB 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=12 34 56 78 9A BB, Challenge=00 00 00 00 00 01), Key:
TK1

System Broadcast

(2)  T req SBC IN 3C E0 10.15.254 00/0/000 18 03 F1 9A 00 00 00 00 00 00 12 34 56 78 9A BB 00 00 00 00
00 01 00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=12 34 56 78 9A BB, Challenge=00 00 00 00 00
01), Key: TK1

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|System<br>Broadcast|3F1h|9Ah|0|0|TK1|TK1|-|
|Off|TK1|IA1|Broadcast|3F1h|92h|0|0|TK1|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|System<br>Broadcast|3F1h|9Ah|0|!=BDUT|TK1|TK1|-|
|Off|TK1|IA1|Broadcast|3F1h|92h|0|!=BDUT|TK1|TK1|-|


-----

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.12 S-A_Sync_Req-PDU, A+C with KNX Serial number corresponding to that of the BDUT – (system) broadcast –with wrong encrypted data
See 3.3.18, as challenge is used as input for the MAC calculation. Also, currently EITT does not offer any
possibility to enter a wrong value for challenge.

###### 3.3.13 correct S-A_Sync_Req-PDU - A+C req.– P2P - other challenge
 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Other
 Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h 0 0 Other TK1 
Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU but with another challenge
value.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge (different
value from other test) and correctly encrypted MAC).

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 11 11 11 11 11 11
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=11 11 11 11 11 11), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 05 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=5, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=5,
SeqNum.local=tool, MAC correctly encrypted according to TK1 and the extracted random value).

###### 3.3.14 correct S-A_Sync_Req-PDU – sequence number local lower than expected by BDUT – P2P

 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challeng MAC Other Sec Local e

 Off TK1 IA1 P2PCl 3F1h 92h 1 0 TK1 TK1 
Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU indicating a SeqNum.local
lower than the currently stored SeqNum.local and replies with the next valid SeqNum.local.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=1, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 05 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=5, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=5,
SeqNum.local=tool, MAC correctly encrypted according to TK1 and the extracted random value).

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|0|0|Other|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challeng<br>e|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|1|0|TK1|TK1|-|


-----

###### 3.3.15 correct S-A_Sync_Req-PDU – Sequence number local higher to that expected by BDUT – P2P SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h 2000/2001 0 TK1 TK1

Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU indicating a SeqNum.local
higher than the currently stored SeqNum.local and replies with the SeqNum.local from the request.

Please use the EITT command (@@[sn) to set a sequence number local in the EITT sequence number table for
Tool that is HIGHER than the sequence number local received in the previous telegram. Change the value
accordingly if necessary.

[sn"Tool;;;IN;;2000"

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=tool, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 02 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=tool, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 05 00 00 00 00 07
D0 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=5, Seq.local=2000), Key: TK1

Increment the SeqNum.local once more.

[sn"Tool;;;IN;;2001"

(3)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 02 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=tool, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

(4)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 05 00 00 00 00 07
D1 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=5, Seq.local=2001), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=5,
SeqNum.local=2000/2001, MAC correctly encrypted according TK1 and the extracted random value).

The last stored SeqNum.local cannot be read out from the BDUT, only the last stored SeqNum.local used by
other communication partners from the BDUT can be read. After 3.3.4 this value is still set to 1

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 AF FE 00 00 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=AF FE 00 00 00 00 00 01 ), Key: TK1

###### 3.3.16 correct S-A_Sync_Req-PDU – Sequence number local identical to that expected by BDUT – P2P SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h 2002 0 TK1 TK1

Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU indicating a SeqNum.local
equalling 2002 and again replies with SeqNum.local=2002.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|2000/2001|0|TK1|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|2002|0|TK1|TK1|-|


-----

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=2002, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 07 D2 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=2002, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 06 00 00 00 00 07
D2 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=6, Seq.local=2002), Key: TK1

Acceptance: the BDUT accepts the frame and returns a correct S-A_Sync_Res (i.e. correct APCI Sec [3F1h],
correct Security Control Field [93h], received challenge XOR with random, SeqNum.remote=6,
SeqNum.local=2002, MAC correctly encrypted according TK1 and the extracted random value).

###### 3.3.17 correct S-A_Sync_Req-PDU – verification of correct setting of sequence number sending – verification of not incrementing sequence number sending/local for S-A_Sync messages – checking of use of different random values - P2P –with tool key SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challenge MAC Sec

 Off TK1 IA1 P2PCl 3F1h 92h any 0 TK1 TK1

Required BDUT Setting: TK1 – sequence number sending of BDUT
(PID_SEQUENCE_NUMBER_SENDING) set to 100.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Req-PDU and replies with the
SeqNum.remote previously set in the BDUT, in this case 100.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and
correctly encrypted MAC).

(1)  T C IN 3C 60 10.15.254 01.01.001 0F 01 D0 00 11 00 10 3B 01 00 01 00 00 00 00 00 64
:PropertyExtValueWriteUnCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 00 64 ), Key: TK1

Checking use of set sequence number remote.

(2)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(3)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 64 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=100, Seq.local=tool), Key: TK1

Checking stored sequence number remote.

(4)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(5)  T C OUT 30 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 00 64
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 00 64 ), Key: TK1

Checking different challenge.

(6)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 12 34 56 78 9A BC
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=12 34 56 78 9A BC), Key:
TK1

(7)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 65 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=101, Seq.local=tool), Key: TK1

Checking unchanged sequence number remote for repeated S-A_Sync.req.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|any|0|TK1|TK1|-|


-----

(8)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 12 34 56 78 9A BC
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=12 34 56 78 9A BC), Key:
TK1

(9)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 00 00 00 00 00 00 65 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 00, Seq.remote=101, Seq.local=tool), Key: TK1

Please verify in the trace buffer that the MAC in the last two S-A_Sync.response telegrams are different.

Acceptance: the BDUT accepts the frames and returns correct S-A_Sync_Responses (i.e. correct APCI Sec

[3F1h], correct Security Control Field [93h], received challenge XOR with random that changes with every
response [this will result in a differently encrypted second response] and MAC correctly encrypted according
TK1 and the extracted random value). The SeqNum.remote is set to 100 in the first S-A_Sync.response and 101
in the next two S-A_Sync.responses. The SeqNum.local=tool in all S-A_Sync.responses and checked
automatically by EITT.

###### 3.3.18 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key - incorrectly encrypted MAC SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h any 0 TK1 !=TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a S-A_Sync_Req-PDU with incorrectly encrypted MAC.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge but
incorrectly encrypted MAC).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, MAC set to 12 34 56 78

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.19 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – sent as group
 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h any 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a S-A_Sync_Req-PDU but sent as group.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge but sent as
group).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, address type wrong

Acceptance: the BDUT rejects the frame and shows no reaction.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|any|0|TK1|!=TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|any|0|TK1|TK1|Sent<br>as<br>group|


-----

###### 3.3.20 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – one byte too many
 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h any 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a S-A_Sync_Req-PDU but with one byte too many.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge but one
byte too many).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, MAC set to ?? ?? ?? ?? FF

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.21 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – one byte too few
 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge MAC Sec Local

 Off TK1 IA1 P2PCl 3F1h 92h any 0 TK1 TK1

Note: no changes in Sequence numbers following this (negative) test.

Required BDUT Setting: TK1

Purpose: Check that the BDUT rejects a frame with a S-A_Sync_Req-PDU but with one byte too few.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [92h], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge but one
byte too few).

(1)  ! T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1, MAC set to ?? ?? ??

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.3.22 S-A_Sync_Req-PDU - A+C req.– P2P - with tool key – SBC flag set
 SecMod Key IA ComType ACPI SCF SeqNo SerNo Challenge Sec Local

 Off TK1 IA1 P2PCl 3F1h 9Ah any 0 TK1 TK1

Required BDUT Setting: TK1

Purpose: Check that the BDUT accepts a frame with a S-A_Sync_Req-PDU with SBC flag set for P2P frame.

Procedure: Send message to BDUT with the correct S-A_Sync_Req-PDU (i.e. correct APCI Sec [3F1h], correct
Security Control Field [9Ah], SeqNum.local=0, KNX serial number=0, correctly encrypted challenge and with
SBC flag set).

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|any|0|TK1|TK1|One<br>byte<br>too<br>many|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|92h|any|0|TK1|TK1|One<br>byte<br>too<br>few|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNo<br>Local|SerNo|Challenge|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|9**A**h|any|0|TK1|TK1|SBC<br>flag<br>set|


-----

(1)  T req SBC IN 30 60 10.15.254 01.01.001 18 03 F1 9A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
01 00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

(2)  T res SBC OUT 30 60 01.01.001 10.15.254 18 03 F1 9B 00 00 00 00 00 01 00 00 00 00 00 65 00 00 00 00
00 01 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=101, Seq.local=tool), Key: TK1

Acceptance: the BDUT accepts the frames and returns correct S-A_Sync_Responses (i.e. correct APCI Sec

[3F1h], correct Security Control Field [9Bh], received challenge XOR with random, SeqNum.remote=101,
SeqNum.local=tool, MAC correctly encrypted according TK1 and the extracted random value).

##### 3.4 S-A_Sync_Res
###### These test cases only need to be performed if the BDUT can be stimulated to send a S-A_Sync_Req- PDU, (power-up reset, master reset, button pressures etc.), except for the test 3.4.3. (which is applicable for both KNX Data Secure as IP Secure devices). Such devices are for instance devices supporting PB Mode configuration.

 3.4.1 correct S-A_Sync_Res-PDU to a P2P request – not tool key –sequence number local identical – connectionless SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 13h As received Any = Sync_ P2PK1 Req

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and P2PK1 set in its P2P keys
table.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Res-PDU.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with a correct S-A_Sync_ResPDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [13h], challenge XOR random corresponding
to the S-A_Sync_Req, sequence number remote, sequence number local identical to the one received in the
BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and P2PK1).

Preparation

Set Security IA table IA1 = 1.0.65

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 10 41 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=10 41 00 00 00 00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set P2P Key Table: P2PK1 = 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22

(3)  T C IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for P2P Key

(5)  req IN 3C 60 01.00.065 01.01.001 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|13h|As received|Any|= Sync_<br>Req|P2PK1|-|


-----

(6)  res OUT 3C 60 01.01.001 01.00.065 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK1

Actual test

Please stimulate the BDUT to send a S-A_Sync_Req.

(7)  req OUT 3C 60 01.01.001 01.00.065 18 03 F1 12 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(8)  res IN 3C 60 01.00.065 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 0A 00
00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=10), Key: P2PK1

Acceptance: the BDUT accepts the frame and uses the local sequence number (10) as received in the SA_Sync_Res-PDU.

###### 3.4.2 correct S-A_Sync_Res-PDU to a P2P request – not tool key – sequence number local higher – connectionless SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 13h > than Any = Sync_ P2PK1 received Req

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and security key P2PK1 set in its
P2P keys table.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Res-PDU.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with a correct S-A_Sync_ResPDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [13h], challenge XOR random corresponding
to the S-A_Sync_Req, sequence number remote, sequence number local higher than the one received in the
BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and P2PK1).

Please stimulate the BDUT to send a S-A_Sync_Req.

(1)  req OUT 3C 60 01.01.001 01.00.065 18 03 F1 12 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(2)  res IN 3C 60 01.00.065 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 14 00
00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=20), Key: P2PK1

Acceptance: the BDUT accepts the frame and uses the local sequence number as received in the S-A_Sync_ResPDU.

###### 3.4.3 correct S-A_Sync_Res without request before – not tool key – P2P – connectionless SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 13h Any Any Any but P2PK1 correct

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and P2PK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Res-PDU but without preceding
request.

Procedure: Send to BDUT a correct S-A_Sync_Res-PDU (i.e. correct APCI Sec [3F1h], correct Security Control
Field [13h], challenge XOR random, sequence number remote, sequence number local and MAC correctly
encrypted with the random value and P2PK1).

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|13h|> than<br>received|Any|= Sync_<br>Req|P2PK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|13h|Any|Any|Any but<br>correct|P2PK1|-|


-----

Set Last Valid SeqNr for P2PK1 to 10

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 0A
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 0A ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

S-A_Sync_Res-PDU with value 30

(3)  res IN 3C 60 01.00.065 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 1E 00
00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=30), Key: P2PK1

Verify Last Valid SeqNr is still 10

(4)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(5)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 0A
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 0A ), Key: TK1

Acceptance: the BDUT does not react to the S-A_Sync_Res-PDU and does not use the local sequence number
(30) as received in the S-A_Sync_Res-PDU.

###### 3.4.4 correct S-A_Sync_Res-PDU to a P2P request for a second IA
Required BDUT Setting – IA2 in PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE and security key
P2PK2 set.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Res-PDU but sent from IA2.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with a correct S-A_Sync_ResPDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [13h], challenge XOR random corresponding
to the S-A_Sync_Req, sequence number remote, sequence number local equal or higher than the one received in
the BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and P2PK2) but from IA2.

(1)  req OUT 3C 60 01.01.001 10.15.253 18 03 F1 12 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK2

(2)  res IN 3C 60 10.15.253 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 14 00
00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=20), Key: P2PK2

Acceptance: the BDUT accepts the frame and uses the local sequence number as received in the S-A_Sync_ResPDU.

###### 3.4.5 correct S-A_Sync_Res-PDU to a P2P request but sent not P2P SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 System 3F1h 1Bh As received Any = Sync_ P2PK1
 Broadcast Req

Required BDUT Setting – IA of test tool in the appropriate tables of the BDUT and P2PK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Res-PDU but sent broadcast.

Procedure: Trigger the BDUT to send an S-A_Sync_Req P2P and reply to the BDUT with a correct SA_Sync_Res-PDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [1Bh], challenge XOR random
corresponding to the S-A_Sync_Req, sequence number remote, sequence number local identical to the received
in the BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and the P2PK1) but sent
broadcast.

Please stimulate the BDUT to send a S-A_Sync_Req.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|System<br>Broadcast|3F1h|1Bh|As received|Any|= Sync_<br>Req|P2PK1|-|


-----

(1)  req OUT 3C 60 01.01.001 01.00.065 18 03 F1 12 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(2)  res SBC IN 3C E0 01.00.065 00/0/000 18 03 F1 1B 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
0A 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=10), Key: P2PK1

Acceptance: the BDUT rejects the frame and shows no reaction.

###### 3.4.6 incorrect S-A_Sync_Res-PDU to a P2P request - wrong APCI
Covered by Application Layer Tests s. 8/3/7 'wrong APCIs'

###### 3.4.7 correct S-A_Sync_Res-PDU to a P2P request – with tool key – connectionless SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off TK1 IA1 P2PCl 3F1h 93h As received Any = Sync_ TK1 Req

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and TK1.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Res-PDU.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with a correct S-A_Sync_ResPDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [93h], challenge XOR random corresponding
to the S-A_Sync_Req, sequence number remote, sequence number local identical to the one received in the
BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and TK1).

(1)  T req OUT 3C 60 01.01.001 10.15.254 18 03 F1 92 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00
01 00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01),
Key: TK1

(2)  T res IN 3C 60 10.15.254 01.01.001 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 0A
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=10), Key: TK1

Acceptance: the BDUT accepts the frame and uses the local sequence number as received in the S-A_Sync_ResPDU.

###### 3.4.8 incorrect S-A_Sync_Res-PDU to a P2P request - incorrect SAI SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 53h As received Any = Sync_ P2PK1 Req

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and security key x set in its P2P
keys table.

Purpose: Check that the BDUT rejects a frame with incorrect S-A_Sync_Res-PDU, wrong SAI.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with a correct S-A_Sync_ResPDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [53h], challenge XOR random corresponding
to the S-A_Sync_Req, sequence number remote, sequence number local identical to the one received in the
BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and P2PK1).

Example of stimuli: not possible as unable to create wrong response telegram as random value sent out in request
by BDUT unknown.

Acceptance: the BDUT rejects the frame and does not use the received remote sequence number in the
subsequent frames sent.

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|TK1|IA1|P2PCl|3F1h|93h|As received|Any|= Sync_<br>Req|TK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|53h|As received|Any|= Sync_<br>Req|P2PK1|-|


-----

###### 3.4.9 correct S-A_Sync_Req-PDU to a broadcast request – broadcast response with SBC set (TP only) SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 1Bh As received Any = Sync_ P2PK1 Req

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and P2PK1.

Purpose: Check that the BDUT accepts a frame with a correct S-A_Sync_Res-PDU uses the local sequence
number as received in the S-A_Sync_Res-PDU.

Procedure: Trigger the BDUT to send an S-A_Sync_Req broadcast and reply to the BDUT with a correct SA_Sync_Res-PDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [1Bh], challenge XOR random
corresponding to the S-A_Sync_Req, sequence number remote, sequence number local identical to the one
received in the BDUT’s S-A_Sync_Req and MAC correctly encrypted with the random value and the P2PK1).

Please stimulate the BDUT to send a S-A_Sync_Req.

(1)  req OUT 3C 60 01.01.001 01.00.065 18 03 F1 12 00 00 00 00 00 0A 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=10, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(2)  res IN 3C 60 01.00.065 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 0A 00
00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=0, Seq.local=10), Key: P2PK1

Acceptance: the BDUT accepts the frame and uses the local sequence number as received in the S-A_Sync_ResPDU.

###### 3.4.10 incorrect S-A_Sync_Res-PDU to a broadcast request - wrong MAC
 SecMod Key IA ComType ACPI SCF SeqNoLocal SerNo Challen MAC
 Sec Remote ge XOR
 Random

 Off P2PK1 IA1 P2PCl 3F1h 13h As received Any = Sync_ !=P2P Req K1

Required BDUT Setting - IA of test tool in the appropriate tables of the BDUT and P2PK1.

Purpose: Check that the BDUT rejects a frame with a correct S-A_Sync_Res-PDU but with wrong MAC.

Procedure: Trigger the BDUT to send an S-A_Sync_Req and reply to the BDUT with an incorrect SA_Sync_Res-PDU (i.e. correct APCI Sec [3F1h], correct Security Control Field [13h], challenge XOR random
corresponding to the S-A_Sync_Req, sequence number remote, sequence number local identical to the one
received in the BDUT’s S-A_Sync_Req and MAC incorrectly encrypted with the random value and P2PK1).

Example of stimuli: not possible as unable to create wrong response telegram as random value sent out in request
by BDUT unknown.

Acceptance: the BDUT rejects the frame and does not use the received remote sequence number in the
subsequent frames sent.

##### 3.5 S_A_Data PDU for routing
###### To be completed. 

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|1Bh|As received|Any|= Sync_<br>Req|P2PK1|-|

|SecMod|Key|IA|ComType|ACPI<br>Sec|SCF|SeqNoLocal|SerNo<br>Remote|Challen<br>ge XOR<br>Random|MAC|Other|
|---|---|---|---|---|---|---|---|---|---|---|
|Off|P2PK1|IA1|P2PCl|3F1h|13h|As received|Any|= Sync_<br>Req|!=P2P<br>K1|-|


-----

##### 3.6 KNX Secure Access

###### 3.6.1 Roles for Properties with P2P Key[6]

 3.6.1.1 Introduction
For the testing of roles, it is necessary that the manufacturer supplies a sample application with different defined
roles and their individual rights as defined in a manufacturer specific Interface Object/properties. As an example,
the following could be set in the BDUT and the reaction to the reception of telegrams could be defined by the
supplied sample application:

Resource for roles: Certification Object, active only during KNX Certification, Object Type = C351h, Property
ID = 33h, general Access Policy 3FF/0FF

Source address Security key Role A/C R/W

IA4 = 1.1.1 P2PK1  1  A R/W

IA5 = 1.1.2 P2PK2  2  A+C R/W

IA6 = 1.1.3 P2PK3  3  A R

IA7 = 1.1.4 P2PK4  4  A+C R

IA8 = 1.1.5 P2PK5  5  A 
IA9 = 1.1.6 P2PK6  6  A+C 
IA10 = 1.1.7 unlisted

IA11 = 1.1.8 P2PK7  -  A+C 
IA12 = 1.1.9 P2PK8  4 and 5 A+C R

Default BDUT address: 2.2.2

Reset internal Sequence Numbers

[rn

Preparation:

Set BDUT IA

(1)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 22 02 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=2202, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(2)  T req IN 3C 60 10.15.254 02.02.002 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(3)  T res OUT 3C 60 02.02.002 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Deactivate Security Mode

(4)  T C IN 3C 60 10.15.254 02.02.002 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(5)  T C OUT 3C 60 02.02.002 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Set Security = unloaded

(6)  T C IN 3C 60 10.15.254 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 04 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=04 00 00 00 00 00 00 00 00 00 ), Key: TK1

6 Tests applicable for both KNX Data Secure as well as IP Secure devices.


-----

(7)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set Security = loading

(8)  T C IN 3C 60 10.15.254 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 01 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 00 00 00 00 00 00 00 00 00 ), Key: TK1

(9)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set Security IA table

(10)  T C IN 3C 60 10.15.254 02.02.002 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(11)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

(12)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 01 11 01 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 01 00 00 00 00 00 00 ), Key: TK1

(13)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(14)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 02 11 02 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
Data=11 02 00 00 00 00 00 00 ), Key: TK1

(15)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 02 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
RetCode=00), Key: TK1

(16)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 03 11 03 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0003,
Data=11 03 00 00 00 00 00 00 ), Key: TK1

(17)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 03 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0003,
RetCode=00), Key: TK1

(18)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 04 11 04 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0004,
Data=11 04 00 00 00 00 00 00 ), Key: TK1

(19)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 04 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0004,
RetCode=00), Key: TK1

(20)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 05 11 05 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0005,
Data=11 05 00 00 00 00 00 00 ), Key: TK1

(21)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 05 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0005,
RetCode=00), Key: TK1

(22)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 06 11 06 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0006,
Data=11 06 00 00 00 00 00 00 ), Key: TK1


-----

(23)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 06 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0006,
RetCode=00), Key: TK1

(24)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 07 11 08 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0007,
Data=11 08 00 00 00 00 00 00 ), Key: TK1

(25)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 07 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0007,
RetCode=00), Key: TK1

(26)  T C IN 3C 60 10.15.254 02.02.002 11 01 CE 00 11 00 10 36 01 00 08 11 09 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0008,
Data=11 09 00 00 00 00 00 00 ), Key: TK1

(27)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 36 01 00 08 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0008,
RetCode=00), Key: TK1

Set P2P Key Table: P2PKn = 0000000000000000000000000000000nh

(28)  T C IN 3C 60 10.15.254 02.02.002 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(29)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

IA4: Roles = Role1 (A, R+W)

(30)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 01 00 01 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 ), Key: TK1

(31)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

IA5: Roles = Role2 (A+C, R+W)

(32)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 02 00 02 33 33 33 33 33 33 33 33 33
33 33 33 33 33 33 33 00 02 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0002, Data=00 02 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 00 02 ), Key: TK1

(33)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 02 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0002,
RetCode=00), Key: TK1

IA6: Roles = Role3 (A, R)

(34)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 03 00 03 44 44 44 44 44 44 44 44 44
44 44 44 44 44 44 44 00 04 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0003, Data=00 03 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 44 00 04 ), Key: TK1

(35)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 03 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0003,
RetCode=00), Key: TK1

IA7: Roles = Role4 (A+C, R)

(36)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 04 00 04 55 55 55 55 55 55 55 55 55
55 55 55 55 55 55 55 00 08 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0004, Data=00 04 55 55 55 55 55 55 55 55 55 55 55 55 55 55 55 55 00 08 ), Key: TK1

(37)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 04 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0004,
RetCode=00), Key: TK1


-----

IA8: Roles = Role5 (A)

(38)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 05 00 05 66 66 66 66 66 66 66 66 66
66 66 66 66 66 66 66 00 10 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0005, Data=00 05 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 66 00 10 ), Key: TK1

(39)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 05 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0005,
RetCode=00), Key: TK1

IA9: Roles = Role6 (A+C)

(40)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 06 00 06 77 77 77 77 77 77 77 77 77
77 77 77 77 77 77 77 00 20 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0006, Data=00 06 77 77 77 77 77 77 77 77 77 77 77 77 77 77 77 77 00 20 ), Key: TK1

(41)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 06 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0006,
RetCode=00), Key: TK1

IA11: Roles = No Role

(42)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 07 00 07 88 88 88 88 88 88 88 88 88
88 88 88 88 88 88 88 00 00 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0007, Data=00 07 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 00 00 ), Key: TK1

(43)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 07 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0007,
RetCode=00), Key: TK1

IA12: Roles = Role4+Role5

(44)  T C IN 3C 60 10.15.254 02.02.002 1D 01 CE 00 11 00 10 34 01 00 08 00 08 99 99 99 99 99 99 99 99 99
99 99 99 99 99 99 99 00 18 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0008, Data=00 08 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 00 18 ), Key: TK1

(45)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 34 01 00 08 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0008,
RetCode=00), Key: TK1

Set Security = loaded

(46)  T C IN 3C 60 10.15.254 02.02.002 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK1

(47)  T C OUT 3C 60 02.02.002 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for P2PK1

(48)  req IN 3C 60 01.01.001 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(49)  res OUT 3C 60 02.02.002 01.01.001 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK1

Synchronize Sequence Number for P2PK2

(50)  req IN 3C 60 01.01.002 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK2

(51)  res OUT 3C 60 02.02.002 01.01.002 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK2

Synchronize Sequence Number for P2PK3


-----

(52)  req IN 3C 60 01.01.003 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK3

(53)  res OUT 3C 60 02.02.002 01.01.003 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK3

Synchronize Sequence Number for P2PK4

(54)  req IN 3C 60 01.01.004 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK4

(55)  res OUT 3C 60 02.02.002 01.01.004 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK4

Synchronize Sequence Number for P2PK5

(56)  req IN 3C 60 01.01.005 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK5

(57)  res OUT 3C 60 02.02.002 01.01.005 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK5

Synchronize Sequence Number for P2PK6

(58)  req IN 3C 60 01.01.006 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK6

(59)  res OUT 3C 60 02.02.002 01.01.006 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK6

Synchronize Sequence Number for P2PK7

(60)  req IN 3C 60 01.01.008 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK7

(61)  res OUT 3C 60 02.02.002 01.01.008 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK7

Synchronize Sequence Number for P2PK8

(62)  req IN 3C 60 01.01.009 02.02.002 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK8

(63)  res OUT 3C 60 02.02.002 01.01.009 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK8

Activate Security Mode

(64)  T C IN 3C 60 10.15.254 02.02.002 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(65)  T C OUT 3C 60 02.02.002 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

###### 3.6.1.2 correct S-A_Data PDU - A required - role correct to read and write
Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [00h], appropriate sequence number, plain data and MAC correctly
encrypted with P2PK1) with source address IA4 = 1.1.1

(1)  A IN 3C 60 01.01.001 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1


-----

(2)  A OUT 3C 60 02.02.002 01.01.001 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK1

(3)  A IN 3C 60 01.01.001 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK1

(4)  A OUT 3C 60 02.02.002 01.01.001 0A 01 CD C3 51 00 10 33 01 00 01 AA
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1

Acceptance: the BDUT accepts the frames and allows reading/writing the corresponding properties.

###### 3.6.1.3 correct S-A_Data PDU - A required only - role incorrect to write
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU

Procedure: Send PropertyValueWrite message with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h],
correct Security Control Field [00h], appropriate sequence number, MAC correctly encrypted with P2PK3) with
source address IA6 = 1.1.3

Read ok

(1)  A IN 3C 60 01.01.003 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK3

(2)  A OUT 3C 60 02.02.002 01.01.003 0A 01 CD C3 51 00 10 33 01 00 01 AA
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK3

Write NOK

(3)  A IN 3C 60 01.01.003 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK3

(4)  A OUT 3C 60 02.02.002 01.01.003 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK3

Acceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements = 0, no
data) as the role is not permitted to write the value.

###### 3.6.1.4 correct S-A_Data - A required - role not allowed to read nor write
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU but sent via the individual address that has role
not allowing to read or write

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [00h], appropriate sequence number, plain data and MAC correctly
encrypted with P2PK5) with source address IA8 = 1.1.5

Write NOK

(1)  A IN 3C 60 01.01.005 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK5

(2)  A OUT 3C 60 02.02.002 01.01.005 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK5

Read NOK

(3)  A IN 3C 60 01.01.005 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK5


-----

(4)  A OUT 3C 60 02.02.002 01.01.005 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK5

Acceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements = 0, no
data) as the role is not permitted to read nor write the value.

###### 3.6.1.5 correct S-A_Data PDU - A and C required - role correct to read and write
Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted with P2PK2) with source address IA5 = 1.1.2

Write OK

(1)  C IN 3C 60 01.01.002 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 55
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK2

(2)  C OUT 3C 60 02.02.002 01.01.002 0A 01 CF C3 51 00 10 33 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
RetCode=00), Key: P2PK2

Read OK

(3)  C IN 3C 60 01.01.002 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK2

(4)  C OUT 3C 60 02.02.002 01.01.002 0A 01 CD C3 51 00 10 33 01 00 01 55
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK2

Acceptance: the BDUT accepts the frames and allows reading/writing the corresponding properties.

###### 3.6.1.6 correct S-A_Data PDU - A and C required - role incorrect to write
Purpose: Check BDUT’s acceptance of the correct S-A_Data PDU but rejection to write corresponding value

Procedure: Send PropertyValueWrite message with the correct S-A_Data PDU (i.e. correct APCI Sec [3F1h],
correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly encrypted
with P2PK4) with source address IA7 = 1.1.4 or IA12 = 1.1.9

Read OK

(1)  C IN 3C 60 01.01.004 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK4

(2)  C OUT 3C 60 02.02.002 01.01.004 0A 01 CD C3 51 00 10 33 01 00 01 55
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK4

(3)  C IN 3C 60 01.01.009 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK8

(4)  C OUT 3C 60 02.02.002 01.01.009 0A 01 CD C3 51 00 10 33 01 00 01 55
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=55 ), Key: P2PK8

Write NOK

(5)  C IN 3C 60 01.01.004 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK4


-----

(6)  C OUT 3C 60 02.02.002 01.01.004 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK4

(7)  C IN 3C 60 01.01.009 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK8

(8)  C OUT 3C 60 02.02.002 01.01.009 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK8

Acceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements = 0, no
data) as the role is not permitted to write the value.

###### 3.6.1.7 correct S-A_Data - A and C required – role not allowed to read nor write
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU but sent via the individual address that has role
not allowing to read or write

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted with P2PK6) with source address IA9 = 1.1.6

Read NOK

(1)  C IN 3C 60 01.01.006 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK6

(2)  C OUT 3C 60 02.02.002 01.01.006 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK6

Write NOK

(3)  C IN 3C 60 01.01.006 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK6

(4)  C OUT 3C 60 02.02.002 01.01.006 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK6

Acceptance: the BDUT rejects the frame and sends a negative PropertyValueResponse (No of elements = 0, no
data) as the role is not permitted to read nor write the value.

###### 3.6.1.8 correct S-A_Data PDU - A and C required – IA not listed in P2P Key Table
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted with P2PK1) but with source address IA10 = 1.1.7

(1)  C IN 3C 60 01.01.007 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK1

(2)  C IN 3C 60 01.01.007 02.02.002 09 01 CC 00 00 03 60 01 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0036, PropId=0001, ElemCount=01, Index=0001), Key:
P2PK1

Acceptance: the BDUT ignores the frames.

###### 3.6.1.9 correct S-A_Data PDU - A and C required – Role using incorrect key
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU


-----

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted, but with the wrong key, e.g. P2PK3) with source address IA5 = 1.1.2

Write NOK

(1)  C IN 3C 60 01.01.002 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK3

Read NOK

(2)  C IN 3C 60 01.01.002 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK3

Acceptance: the BDUT ignores the frames.

###### 3.6.1.10 correct S-A_Data PDU - A and C required – IA known to server but no role
Purpose: Check BDUT’s rejection of the correct S-A_Data PDU

Procedure: Send PropertyValueWrite and Read message with the correct S-A_Data PDU (i.e. correct APCI Sec

[3F1h], correct Security Control Field [10h], appropriate sequence number, cipher text and MAC correctly
encrypted with correct key P2PK7) with source address IA11 = 1.1.8 (which has no role)

Write NOK

(1)  C IN 3C 60 01.01.008 02.02.002 0A 01 CE C3 51 00 10 33 01 00 01 AA
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=AA ), Key: P2PK7

(2)  C OUT 3C 60 02.02.002 01.01.008 0A 01 CF C3 51 00 10 33 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK7

Read NOK

(3)  C IN 3C 60 01.01.008 02.02.002 09 01 CC C3 51 00 10 33 01 00 01
:PropertyExtValueRead(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001), Key:
P2PK7

(4)  C OUT 3C 60 02.02.002 01.01.008 0A 01 CD C3 51 00 10 33 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK7

Acceptance: the BDUT shall send a negative response.

3.6.1.x Clean up

Restore original BDUT IA

(5)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Deactivate Security Mode

(6)  T C IN 3C 60 10.15.254 02.02.002 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(7)  T C OUT 3C 60 02.02.002 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

##### 3.7 Access Policies

###### 3.7.1 Introduction In the underneath test specifications, a number of examples are given, how the access policies as defined in clause 2.2.3.2 of AN158 and AN193 could be tested. Not all possible test cases are listed, the more common cases are given.


-----

###### In the underneath examples, always the TK1 (with the value 1) is assumed. As the sequence number, the value 1 is assumed in all examples of telegrams with A or A+C.

 The access policies as specified in the system specifications for the services is given between brackets in the titles. 

 3.7.2 Access policies at Service Level[7]

 3.7.2.1 A_IndividualAdress_Read (3FF/3FF) – Plain/A/A + C – Security Mode on
Required DUT setting: Security Mode of the DUT activated.

Purpose: Check whether DUT accepts an IndividualAddress_Read plain, authenticated and with confidentiality,
even if security mode is activated.

Procedure: Send message to the DUT to attempt to read the Individual Address plain and with authentication
and/or encryption.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate Prog Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

Plain

(5)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(6)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Authentication

(7)  T A IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead(), Key: TK1

(8)  T A OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001), Key: TK1

Confidentiality

(9)  T C IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead(), Key: TK1

(10)  T C OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001), Key: TK1

Acceptance: Acceptance: the BDUT accepts the Individual Address Read and answers in all cases with an
Individual Address Response.

###### 3.7.2.2 A_IndividualAdress_SerialNumber_Read (3FF/3FF) – Plain/A/A + C – Security Mode on
Required DUT setting: Security Mode of the DUT activated.

Purpose: Check whether DUT accepts an IndividualAddress_SerialNumber_Read plain, authenticated and with
confidentiality, even if security mode is activated.

Procedure: Send message to the DUT to attempt to read the Individual Address via Serial Number plain and with
authentication and/or encryption.

Plain

7 Tests applicable for both KNX data secure as well as IP Secure devices (however depending on whether the
relevant service is required according to the implemented profile).


-----

(1)  IN BC 10.15.254 00/0/000 E7 03 DC FE ED BA BE CA FE :IndAddrSnoRead(Sno=FEEDBABECAFE)

(2)  OUT BC 01.01.001 00/0/000 EB 03 DD FE ED BA BE CA FE 00 00 00 00
:IndAddrSnoResponse(Sno=FEEDBABECAFE, DomainAddr=0000, Reserved=0000)

Authentication

(3)  T A IN 3C E0 10.15.254 00/0/000 07 03 DC FE ED BA BE CA FE
:IndAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(4)  T A OUT 3C E0 01.01.001 00/0/000 0B 03 DD FE ED BA BE CA FE 00 00 00 00
:IndAddrSnoResponse(Sno=FEEDBABECAFE, DomainAddr=0000, Reserved=0000), Key: TK1

Confidentiality

(5)  T C IN 3C E0 10.15.254 00/0/000 07 03 DC FE ED BA BE CA FE
:IndAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(6)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 DD FE ED BA BE CA FE 00 00 00 00
:IndAddrSnoResponse(Sno=FEEDBABECAFE, DomainAddr=0000, Reserved=0000), Key: TK1

Acceptance: the BDUT accepts the Individual Address Read via Serial number and answers in all cases with an
Individual Address Serial Number Response.

###### 3.7.2.3 A_DomainAddress_SerialNumber_Read

3.7.2.3.1 For 2 octet (PL) and 6 octet (RF) (3FF/3FF at data level)
Required DUT setting: Security Mode of the DUT activated.

Purpose: Check whether DUT accepts a DomainAddress_SerialNumber_Read plain, authenticated and with
confidentiality, even if security mode is activated.

Procedure: Send message to the DUT to attempt to read the Domain Address via Serial Number plain and with
authentication and/or encryption.

Plain

(1)  IN BC 10.15.254 00/0/000 E7 03 EC FE ED BA BE CA FE :DomAddrSnoRead(Sno=FEEDBABECAFE)

(2)  OUT BC 01.01.001 00/0/000 ED 03 ED FE ED BA BE CA FE ?? ?? ?? ?? ?? ??
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=?? ?? ?? ?? ?? ??)

Authentication

(3)  T A IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(4)  T A OUT 3C E0 01.01.001 00/0/000 0D 03 ED FE ED BA BE CA FE ?? ?? ?? ?? ?? ??
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=?? ?? ?? ?? ?? ??), Key: TK1

Confidentiality

(5)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(6)  T C OUT 3C E0 01.01.001 00/0/000 0D 03 ED FE ED BA BE CA FE ?? ?? ?? ?? ?? ??
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=?? ?? ?? ?? ?? ??), Key: TK1

Acceptance: the BDUT accepts the Domain Address Read via Serial number and answers in all cases with a
Domain Address Serial Number Response.

3.7.2.3.2 For 4 octet (IP) and 21 octet (IP) (-/-) at data level
Required DUT setting: Security Mode of the DUT is activated or deactivated.

Purpose: Check whether DUT in all cases rejects a DomainAddress_SerialNumber_Read.

Procedure: Send message to the DUT to attempt to read the Domain Address via Serial Number plain and with
authentication and/or encryption.

Activate Security Mode


-----

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 00/0/000 E7 03 EC 12 34 56 78 9A BC :DomAddrSnoRead(Sno=123456789ABC)

A only

(4)  T A IN 3C E0 10.15.254 00/0/000 07 03 EC 12 34 56 78 9A BC
:DomAddrSnoRead(Sno=123456789ABC), Key: TK1

A+C

(5)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC 12 34 56 78 9A BC
:DomAddrSnoRead(Sno=123456789ABC), Key: TK1

Deactivate Security Mode

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(7)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(8)  IN BC 10.15.254 00/0/000 E7 03 EC 12 34 56 78 9A BC :DomAddrSnoRead(Sno=123456789ABC)

A only

(9)  T A IN 3C E0 10.15.254 00/0/000 07 03 EC 12 34 56 78 9A BC
:DomAddrSnoRead(Sno=123456789ABC), Key: TK1

A+C

(10)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC 12 34 56 78 9A BC
:DomAddrSnoRead(Sno=123456789ABC), Key: TK1

Acceptance: in all cases, the BDUT ignores a Domain Address Read.

###### 3.7.2.4 A_Domain_Address_Read (3FF/3FF) – Plain/A/A + C – Security Mode on or off
Required DUT setting: Security Mode of the DUT is activated or deactivated.

Purpose: Check whether DUT accepts a Domain_Address_Read plain, authenticated and with confidentiality, if
security mode is activated or deactivated.

Procedure: Send message to the DUT to attempt to read the Domain Address plain and with authentication
and/or encryption.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate the programming mode

(3)  T C IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

Plain

(5)  IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead()


-----

(6)  OUT BC 01.01.001 00/0/000 E7 03 E2 ?? ?? ?? ?? ?? ?? :DomAddrResponse(DomAddr=????????????)

Authenticated

(7)  T A IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead(), Key: TK1

(8)  T A OUT 3C E0 01.01.001 00/0/000 07 03 E2 ?? ?? ?? ?? ?? ??
:DomAddrResponse(DomAddr=????????????), Key: TK1

Confidentiality

(9)  T C IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead(), Key: TK1

(10)  T C OUT 3C E0 01.01.001 00/0/000 07 03 E2 ?? ?? ?? ?? ?? ??
:DomAddrResponse(DomAddr=????????????), Key: TK1

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(13)  IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead()

(14)  OUT BC 01.01.001 00/0/000 E7 03 E2 ?? ?? ?? ?? ?? ?? :DomAddrResponse(DomAddr=????????????)

Authenticated

(15)  T A IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead(), Key: TK1

(16)  T A OUT 3C E0 01.01.001 00/0/000 07 03 E2 ?? ?? ?? ?? ?? ??
:DomAddrResponse(DomAddr=????????????), Key: TK1

Confidentiality

(17)  T C IN BC 10.15.254 00/0/000 E1 03 E1 :DomAddrRead(), Key: TK1

(18)  T C OUT 3C E0 01.01.001 00/0/000 07 03 E2 ?? ?? ?? ?? ?? ??
:DomAddrResponse(DomAddr=????????????), Key: TK1

Acceptance: the BDUT accepts the reading of the Domain Address and answers in all cases with an Domain
Address Response.

###### 3.7.2.5 A_Domain_AddressSelective_Read (3FF/3FF) – Plain/A/A + C – Security Mode on or off
Required DUT setting: Security Mode of the DUT is activated or deactivated.

Purpose: Check whether DUT accepts a Domain_AddressSelective_Read plain, authenticated and with
confidentiality, if security mode is activated or deactivated.

Procedure: Send message to the DUT to attempt to read the Domain Address selective plain and with
authentication and/or encryption.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00)

(4)  OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01 01
02 03 04 05 06 )


-----

Authenticated

(5)  T A IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00), Key: TK1

(6)  T A OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01
01 02 03 04 05 06 ), Key: TK1

Confidentiality

(7)  T C IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00), Key: TK1

(8)  T C OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01
01 02 03 04 05 06 ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00)

(12)  OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01 01
02 03 04 05 06 )

Authenticated

(13)  T A IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00), Key: TK1

(14)  T A OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01
01 02 03 04 05 06 ), Key: TK1

Confidentiality

(15)  T C IN BC 10.15.254 00/0/000 EF 03 E3 01 01 02 03 04 05 06 01 02 03 04 05 06 00
:DomAddrSelectiveRead(Type=01, StartAddr=010203040506, EndAddr=010203040506, Res=00), Key: TK1

(16)  T C OUT BC 01.01.001 00/0/000 E8 03 E2 01 01 02 03 04 05 06 :DomAddrResponse(Invalid Format=01
01 02 03 04 05 06 ), Key: TK1

Acceptance: the BDUT accepts the reading of the Domain Address selective and answers in all cases with an
Domain Address Response.

###### 3.7.2.6 A_DeviceDescriptor_Read (3FF/0CC at data level) – Plain/A/A + C – Security Mode on
Required DUT setting: Security Mode of the DUT activated.

Purpose: Check whether DUT only answers with the correct device Descriptor Read when requested with
confidentiality, if security mode is activated.

Procedure: Send message to the DUT to attempt to read the Device Descriptor plain and with authentication
and/or encryption.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Reading DD0

(3)  IN BC 10.15.254 01.01.001 61 03 00 :DeviceDescriptorRead(DescType=00)


-----

(4)  OUT BC 01.01.001 10.15.254 63 03 40 FF FF :DeviceDescriptorResponse(DescType=00, Descriptor=FF
FF )

(5)  T A IN BC 10.15.254 01.01.001 61 03 00 :DeviceDescriptorRead(DescType=00), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 03 03 40 FF FF :DeviceDescriptorResponse(DescType=00,
Descriptor=FF FF ), Key: TK1

(7)  T C IN BC 10.15.254 01.01.001 61 03 00 :DeviceDescriptorRead(DescType=00), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 03 03 40 ?? ?? :DeviceDescriptorResponse(DescType=00,
Descriptor=?? ?? ), Key: TK1

Reading unsupported Device Descriptor, here 2

(9)  IN BC 10.15.254 01.01.001 61 03 02 :DeviceDescriptorRead(DescType=02)

(10)  OUT BC 01.01.001 10.15.254 61 03 7F :DeviceDescriptorResponse(DescType=3F)

(11)  T A IN BC 10.15.254 01.01.001 61 03 02 :DeviceDescriptorRead(DescType=02), Key: TK1

(12)  T A OUT BC 01.01.001 10.15.254 61 03 7F :DeviceDescriptorResponse(DescType=3F), Key: TK1

(13)  T C IN BC 10.15.254 01.01.001 61 03 02 :DeviceDescriptorRead(DescType=02), Key: TK1

(14)  T C OUT BC 01.01.001 10.15.254 61 03 7F :DeviceDescriptorResponse(DescType=3F), Key: TK1

Acceptance: the BDUT answers only with its proper Device Descriptor for Type 0 when requested with
confidentiality, else FFFFh. The BDUT answers negatively (with Type 3Fh) when the descriptor type is not
supported.

Deactivate Security Mode

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

###### 3.7.2.7 A_Authorize_Request PDU (3FF/3FF) – Plain/A/A + C – Security Mode on
Required DUT setting: Security Mode of the DUT activated. Assumed BAU password set 12345678h giving
access to level 3

Purpose: Check whether DUT accepts an A_Authorize_Request PDU plain, authenticated and with
confidentiality, even if security mode is activated.

Procedure: Send message to the DUT to attempt to request authorization plain and with authentication and/or
encryption.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  IN BC 10.15.254 01.01.001 66 43 D1 00 12 34 56 78 :AuthorizeRequest(12345678)

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  OUT BC 01.01.001 10.15.254 62 43 D2 03 :AuthorizeResponse(03)

(7)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(8)  T A IN 3C 60 10.15.254 01.01.001 06 47 D1 00 12 34 56 78 :AuthorizeRequest(12345678), Key: TK1

(9)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(10)  T A OUT BC 01.01.001 10.15.254 62 47 D2 03 :AuthorizeResponse(03), Key: TK1

(11)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)


-----

(12)  T C IN 3C 60 10.15.254 01.01.001 06 4B D1 00 12 34 56 78 :AuthorizeRequest(12345678), Key: TK1

(13)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(14)  T C OUT BC 01.01.001 10.15.254 62 4B D2 03 :AuthorizeResponse(03), Key: TK1

(15)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(16)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Deactivate Security Mode

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Acceptance: the BDUT accepts the authorize Request and answers in all cases with an authorize Response.

###### 3.7.2.8 Reading and Writing of Memory (3FF/3FF at data level)
Test shall be conducted for every system profile requiring support for Direct Memory Access. The following
example of a memory model is assumed in the BDUT (can be manufacturer specific). Memory address: 03D0h03DF – for the data stored there, the Access Policy declared by the manufacturer is: 000/000. Memory address:
03E0h-03EF - for the data stored there, the Access Policy declared by the manufacturer is: 3FF/00C. Perform
the tests with all types of Memory Services supported by the BDUT (Memory(Extented)Read/Write,
MemoryUserRead/Write, M_LC_TAB_MEM_READ/WRITE, M_LC_SLAVE_READ/Write,…

Required BDUT setting: Security Mode of the BDUT deactivated. Repeat the tests with Security Mode of the
BDUT activated.

Purpose: Check whether BDUT rejects to read and write to memory 03D0h-03DF, regardless whether the
security mode is on or off. Check whether BDUT allows to read and write to memory 03E0h-03EF when the
security mode is off and with A+C when security mode is on.

Procedure: Send messages to the BDUT to attempt to read and write to memory for which the access policies
allow or block access.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Memory Ext Write

Plain

(3)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 03 D0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003D0, Data=01 02 03 04 05 06 )

(4)  OUT BC 01.01.001 10.15.254 65 01 FC FC 00 03 D0 :MemoryExtendedWriteResponse(RetCode=FC,
Address=003D0, Data=)

A Only

(5)  T A IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 D0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003D0, Data=01 02 03 04 05 06 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 03 D0
:MemoryExtendedWriteResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 D0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003D0, Data=01 02 03 04 05 06 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 03 D0
:MemoryExtendedWriteResponse(RetCode=FC, Address=003D0, Data=), Key: TK1


-----

Memory Ext Read

Plain

(9)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0)

(10)  OUT BC 01.01.001 10.15.254 65 01 FE FC 00 03 D0 :MemoryExtendedReadResponse(RetCode=FC,
Address=003D0, Data=)

A Only

(11)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0), Key: TK1

(12)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 03 D0
:MemoryExtendedReadResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

A+C

(13)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 03 D0
:MemoryExtendedReadResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

Deactivate Security Mode

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Memory Ext Write

Plain

(17)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 03 D0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003D0, Data=01 02 03 04 05 06 )

(18)  OUT BC 01.01.001 10.15.254 65 01 FC FC 00 03 D0 :MemoryExtendedWriteResponse(RetCode=FC,
Address=003D0, Data=)

A Only

(19)  T A IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 D0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003D0, Data=01 02 03 04 05 06 ), Key: TK1

(20)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 03 D0
:MemoryExtendedWriteResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

A+C

(21)  T C IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 D0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003D0, Data=01 02 03 04 05 06 ), Key: TK1

(22)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 03 D0
:MemoryExtendedWriteResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

Memory Ext Read

Plain

(23)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0)

(24)  OUT BC 01.01.001 10.15.254 65 01 FE FC 00 03 D0 :MemoryExtendedReadResponse(RetCode=FC,
Address=003D0, Data=)

A Only

(25)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0), Key: TK1


-----

(26)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 03 D0
:MemoryExtendedReadResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

A+C

(27)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 D0 :MemoryExtendedRead(Byte Count=06,
Address=003D0), Key: TK1

(28)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 03 D0
:MemoryExtendedReadResponse(RetCode=FC, Address=003D0, Data=), Key: TK1

Activate Security Mode

(29)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(30)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Memory Ext Write

Plain

(31)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 03 E0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003E0, Data=01 02 03 04 05 06 )

(32)  OUT BC 01.01.001 10.15.254 65 01 FC FC 00 03 E0 :MemoryExtendedWriteResponse(RetCode=FC,
Address=003E0, Data=)

A Only

(33)  T A IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 E0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

(34)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 03 E0
:MemoryExtendedWriteResponse(RetCode=FC, Address=003E0, Data=), Key: TK1

A+C

(35)  T C IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 E0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

(36)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 03 E0
:MemoryExtendedWriteResponse(RetCode=00, Address=003E0, Data=), Key: TK1

Memory Ext Read

Plain

(37)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0)

(38)  OUT BC 01.01.001 10.15.254 65 01 FE FC 00 03 E0 :MemoryExtendedReadResponse(RetCode=FC,
Address=003E0, Data=)

A Only

(39)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0), Key: TK1

(40)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 03 E0
:MemoryExtendedReadResponse(RetCode=FC, Address=003E0, Data=), Key: TK1

A+C

(41)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0), Key: TK1

(42)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 FE 00 00 03 E0 01 02 03 04 05 06
:MemoryExtendedReadResponse(RetCode=00, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

Deactivate Security Mode


-----

(43)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(44)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Memory Ext Write

Plain

(45)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 03 E0 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=003E0, Data=01 02 03 04 05 06 )

(46)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 03 E0 :MemoryExtendedWriteResponse(RetCode=00,
Address=003E0, Data=)

A Only

(47)  T A IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 E0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

(48)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 03 E0
:MemoryExtendedWriteResponse(RetCode=00, Address=003E0, Data=), Key: TK1

A+C

(49)  T C IN 3C 60 10.15.254 01.01.001 0B 01 FB 06 00 03 E0 01 02 03 04 05 06
:MemoryExtendedWrite(Byte Count=06, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

(50)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 03 E0
:MemoryExtendedWriteResponse(RetCode=00, Address=003E0, Data=), Key: TK1

Memory Ext Read

Plain

(51)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0)

(52)  OUT BC 01.01.001 10.15.254 6B 01 FE 00 00 03 E0 01 02 03 04 05 06
:MemoryExtendedReadResponse(RetCode=00, Address=003E0, Data=01 02 03 04 05 06 )

A Only

(53)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0), Key: TK1

(54)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 FE 00 00 03 E0 01 02 03 04 05 06
:MemoryExtendedReadResponse(RetCode=00, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

A+C

(55)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 06 00 03 E0 :MemoryExtendedRead(Byte Count=06,
Address=003E0), Key: TK1

(56)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 FE 00 00 03 E0 01 02 03 04 05 06
:MemoryExtendedReadResponse(RetCode=00, Address=003E0, Data=01 02 03 04 05 06 ), Key: TK1

Acceptance: the BDUT rejects or allows reading or writing to this memory in accordance with the access
policies laid down by the manufacturer.

###### 3.7.2.9 Test A_Restart PDU
See tests defined for the relevant properties in clause 3.8.

Required DUT setting: Security and Programming Mode of the DUT activated.

Purpose: Check whether BDUT

- replies to a Restart type 1 with Erase Code FEh with error code 02h

- refuses to perform a restart after restart type = 0 when sent in plain


-----

- refuses to perform a restart after restart type 1 erase code 01, 02 and 07 when send in plain or with
Authentication only

- remains in Programming Mode after the test

Procedure: Send message to the DUT:

- with Erase Code FEh

- with restart type = 0

- with restart type 1 and erase codes 01, 02 and 07 but in plain and with authentication only.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate the programming mode

(3)  T C IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

Basic Restart ignore plain

(5)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(6)  IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00)

(7)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(8)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Basic Restart ignore A only

(9)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(10)  T A IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(11)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(12)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code FE return unsupported erase code

(13)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  IN BC 10.15.254 01.01.001 63 43 81 FE 00 :Restart(Response=00, Type=01, EraseCode=FE,
ChannelNumber=00)

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(16)  OUT BC 01.01.001 10.15.254 64 43 A1 02 00 00 :Restart(Response=01, Type=01, ErrorCode=02,
ProcessTime=0000)

(17)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(18)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 01 return access denied plain

(19)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(20)  IN BC 10.15.254 01.01.001 63 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00)

(21)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(22)  OUT BC 01.01.001 10.15.254 64 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000)


-----

(23)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(24)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 01 return access denied A only

(25)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(26)  T A IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(27)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(28)  T A OUT 3C 60 01.01.001 10.15.254 04 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000), Key: TK1

(29)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(30)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 02 return access denied plain

(31)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(32)  IN BC 10.15.254 01.01.001 63 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00)

(33)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(34)  OUT BC 01.01.001 10.15.254 64 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000)

(35)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(36)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 02 return access denied A only

(37)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(38)  T A IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(39)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(40)  T A OUT 3C 60 01.01.001 10.15.254 04 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000), Key: TK1

(41)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(42)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 07 return access denied

(43)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(44)  IN BC 10.15.254 01.01.001 63 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00)

(45)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(46)  OUT BC 01.01.001 10.15.254 64 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000)

(47)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(48)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset Erase Code 07 return access denied A only

(49)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(50)  T A IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(51)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)


-----

(52)  T A OUT 3C 60 01.01.001 10.15.254 04 43 A1 01 00 00 :Restart(Response=01, Type=01, ErrorCode=01,
ProcessTime=0000), Key: TK1

(53)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(54)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Verify that the programming mode is still activated

(55)  T C IN 3C 60 10.15.254 01.01.001 05 03 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36,
Count=1, Start=001), Key: TK1

(56)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00,
Prop=36, Count=1, Start=001, Data=01 ), Key: TK1

Acceptance: see purpose.

Clean up: Deactivate the programming mode

(57)  T C IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 00 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=00 ), Key: TK1

(58)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 00 :PropertyValueResponse(Obj=00,
Prop=36, Count=1, Start=001, Data=00 ), Key: TK1

###### 3.7.2.10 Test A_KeyWrite PDU (3FF/0CC)
Required BDUT Setting: Security Mode of the BDUT activated – TK1 set

Purpose: Check whether BDUT

- rejects to overwrite the BCU key plain

- rejects to overwrite the BCU key with TK1 and A only

- accepts to overwrite the BCU key with TK1 and A+C

Procedure: Send message to the BDUT to attempt to

- overwrite the BCU key plain

- overwrite the BCU key with TK1 and A only

- overwrite the BCU key with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt plain

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  IN BC 10.15.254 01.01.001 66 43 D3 03 FF FF FF FF :KeyWrite(03, FFFFFFFF)

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

attempt with A

(6)  T A IN 3C 60 10.15.254 01.01.001 06 47 D3 03 FF FF FF FF :KeyWrite(03, FFFFFFFF), Key: TK1

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

success with A+C

(8)  T C IN 3C 60 10.15.254 01.01.001 06 4B D3 03 FF FF FF FF :KeyWrite(03, FFFFFFFF), Key: TK1

(9)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(10)  T C OUT BC 01.01.001 10.15.254 62 43 D4 ?? :KeyResponse(??), Key: TK1

(11)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

(12)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Deactivate Security Mode

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Acceptance: the BDUT accepts to write the BCU key only with A+C. When refusing to write the BDU key, the
BDUT ignores the service.

###### 3.7.2.11 Test A_DomainAddress_Write PDU [only open media] (3FF/00C)
Required BDUT setting: Security Mode of the BDUT activated – activate BDUT programming mode – TK1 set
– assumed domain address of BDUT 010203040506h

Purpose: Check whether BDUT

- refuses to write the domain address plain

- refuses to write the domain address with TK1 and A only

- accepts to write the domain address with TK1 and A+C

Procedure: Send message to the BDUT to attempt to

- set domain address plain

- set domain address secured with TK1 and A only

- set domain address secured with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate the programming mode with TK and A+C

(3)  T C IN 3C 60 10.15.254 01.01.001 06 03 D7 00 36 10 01 01 :PropertyValueWrite(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 06 03 D6 00 36 10 01 01 :PropertyValueResponse(Obj=00, Prop=36,
Count=1, Start=001, Data=01 ), Key: TK1

Attempt to write the DoA plain

(5)  IN 2C E0 10.15.254 00/0/000 07 03 E0 01 01 01 01 01 01 :DomAddrWrite(DomAddr=010101010101)

Attempt to write the DoA with A only

(6)  T A IN 2C E0 10.15.254 00/0/000 07 03 E0 01 01 01 01 01 01
:DomAddrWrite(DomAddr=010101010101), Key: TK1

Read the domain address - unchanged

(7)  IN 2C E0 10.15.254 00/0/000 01 03 E1 :DomAddrRead()

(8)  OUT 2C E0 01.01.001 00/0/000 07 03 E2 01 02 03 04 05 06
:DomAddrResponse(DomAddr=010203040506)

Write the new domain address with A+C

(9)  T C IN 2C E0 10.15.254 00/0/000 07 03 E0 01 01 01 01 01 01
:DomAddrWrite(DomAddr=010101010101), Key: TK1

Read the new domain address

(10)  IN 2C E0 10.15.254 00/0/000 01 03 E1 :DomAddrRead()


-----

(11)  OUT 2C E0 01.01.001 00/0/000 07 03 E2 01 01 01 01 01 01
:DomAddrResponse(DomAddr=010101010101)

Write the new Domain address back to the original value

(12)  T C IN 2C E0 10.15.254 00/0/000 07 03 E0 01 02 03 04 05 06
:DomAddrWrite(DomAddr=010203040506), Key: TK1

Read the new IA - original value

(13)  IN 2C E0 10.15.254 00/0/000 01 03 E1 :DomAddrRead()

(14)  OUT 2C E0 01.01.001 00/0/000 07 03 E2 01 02 03 04 05 06
:DomAddrResponse(DomAddr=010203040506)

Acceptance: the BDUT accepts to write domain address when sent secured with A/C and refuses to do so in
plain or with A only.

###### 3.7.2.12 Test A_DomainAddressSerialNumber_Write PDU
Test case for 2 octet (PL) is not given here.

3.7.2.12.1 For 4 octet (IP) (3FF/00C at data level)
Required BDUT setting: Security Mode of the BDUT activated - TK1 set – BDUT has domain address
E000170Ch - check serial number of BDUT

Purpose: Check whether BDUT

- refuses to write the domain address plain

- refuses to write the domain address only A with TK1

- accepts to write the domain address with TK1 (A and C)

Procedure: Send message to the BDUT to attempt to

- set domain address plain

- set domain address with TK1 and A only

- set individual address secured with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to write the domain address plain

(3)  IN BC 10.15.254 00/0/000 EB 03 EE FE ED BA BE CA FE E1 00 17 0C
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=E1 00 17 0C)

attempt to write the domain address A only

(4)  T A IN 3C E0 10.15.254 00/0/000 0B 03 EE FE ED BA BE CA FE E2 00 17 0C
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=E2 00 17 0C), Key: TK1

Read the domain address - unchanged

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 0B 00 10 42 01 00 01
:PropertyExtValueRead(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 0B 00 10 42 01 00 01 E0 00 17 0C
:PropertyExtValueResponse(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001,
Data=E0 00 17 0C ), Key: TK1

Write the new domain address A+C

(7)  T C IN 3C E0 10.15.254 00/0/000 0B 03 EE FE ED BA BE CA FE E3 00 17 0C
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=E3 00 17 0C), Key: TK1


-----

Read the new domain address

(8)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 0B 00 10 42 01 00 01
:PropertyExtValueRead(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001), Key: TK1

(9)  T C OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 0B 00 10 42 01 00 01 E3 00 17 0C
:PropertyExtValueResponse(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001,
Data=E3 00 17 0C ), Key: TK1

Write the new domain address back to the original value

(10)  T C IN 3C E0 10.15.254 00/0/000 0B 03 EE FE ED BA BE CA FE E0 00 17 0C
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=E0 00 17 0C), Key: TK1

Read the new domain address

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 0B 00 10 42 01 00 01
:PropertyExtValueRead(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 0B 00 10 42 01 00 01 E0 00 17 0C
:PropertyExtValueResponse(ObjType=000B, ObjInst=0001, PropId=0042, ElemCount=01, Index=0001,
Data=E0 00 17 0C ), Key: TK1

Acceptance: the BDUT accepts to write domain address only when sent secured with TK1 and A+C

3.7.2.12.2 For 6 octet (RF) (3FF/00C at data level)
Required BDUT setting: Security Mode of the BDUT activated - TK1 set – BDUT has the domain address
010203040507h - check serial number of the BDUT

Purpose: Check whether BDUT

- refuses to write the domain address plain

- refuses to write the domain address only A with TK1

- accepts to write the domain address with TK1 (A and C)

Procedure: Send message to the BDUT to attempt to

- set domain address plain

- set domain address with TK1 and A only

- set individual address secured with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Set first the domain address A+C to specific value

(3)  T C IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 07
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 07), Key: TK1

Attempt to write the domain address plain

(4)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 11 02 03 04 05 07
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=11 02 03 04 05 07)

attempt to write the domain address A only

(5)  T A IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 21 02 03 04 05 07
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=21 02 03 04 05 07), Key: TK1

Read the domain address - unchanged

(6)  T C IN 2C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1


-----

(7)  T C OUT 2C E0 01.01.001 00/0/000 0D 03 ED FE ED BA BE CA FE 01 02 03 04 05 07
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 07), Key: TK1

Write the new domain address A+C

(8)  T C IN 2C E0 01.01.001 00/0/000 0D 03 EE FE ED BA BE CA FE 31 02 03 04 05 07
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=31 02 03 04 05 07), Key: TK1

Read the new domain address

(9)  T C IN 2C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(10)  T C OUT 2C E0 01.01.001 00/0/000 0D 03 ED FE ED BA BE CA FE 31 02 03 04 05 07
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=31 02 03 04 05 07), Key: TK1

Write the new domain address back to the original value

(11)  T C IN 2C E0 01.01.001 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 07
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 07), Key: TK1

Read the new domain address

(12)  T C IN 2C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(13)  T C OUT 2C E0 01.01.001 00/0/000 0D 03 ED FE ED BA BE CA FE 01 02 03 04 05 07
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 07), Key: TK1

Acceptance: the BDUT accepts to write domain address only when sent secured with TK1 and A+C

3.7.2.12.3 For 21 octet (IP) (00C/00C at data level)
Required BDUT setting: Security Mode of the BDUT deactivated – repeat the tests with Security Mode activated

- TK1 set – BDUT has domain address 222222222222222222222222222222222222222222h - check serial
number of BDUT

Purpose: Check whether BDUT

- refuses to write the domain address plain

- refuses to write the domain address only A with TK1

- accepts to write the domain address with TK1 (A and C)

Procedure: Send message to the BDUT to attempt to

- set domain address plain

- set domain address with TK1 and A only

- set domain address secured with TK1 and A+C

Deactivate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to write the domain address plain

(3)  IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 11 11 11 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11)

Attempt to write the domain address A only

(4)  T A IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 12 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=12 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11 11 11), Key: TK1

Read the domain address - unchanged


-----

(5)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(6)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 22 22 22 22
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=22 22 22 22), Key: TK1

Write the new domain address A+C

(7)  T C IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 13 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=13 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11 11 11), Key: TK1

Read the new domain address

(8)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(9)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 13 11 11 11
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=13 11 11 11), Key: TK1

Write the new domain address back to the original value

(10)  T C IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 22 22 22 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 22 22 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 22 22 22 22 22 22), Key: TK1

Read the new domain address

(11)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(12)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 22 22 22 22
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=22 22 22 22), Key: TK1

Activate Security Mode

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to write the domain address plain

(15)  IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 11 11 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11 11)

Attempt to write the domain address A only

(16)  T A IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 12 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=12 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11 11 11), Key: TK1

Read the domain address - unchanged

(17)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(18)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 22 22 22 22
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=22 22 22 22), Key: TK1

Write the new domain address A+C

(19)  T C IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 13 11 11 11 11 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=13 11 11 11 11 11 11 11
11 11 11 11 11 11 11 11 11 11 11 11 11), Key: TK1

Read the new domain address

(20)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1


-----

(21)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 13 11 11 11
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=13 11 11 11), Key: TK1

Write the new domain address back to the original value

(22)  T C IN 3C E0 10.15.254 00/0/000 1C 03 EE FE ED BA BE CA FE 22 22 22 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 22 22 :DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 22 22 22 22 22 22), Key: TK1

Read the new domain address

(23)  T C IN 3C E0 10.15.254 00/0/000 07 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE), Key: TK1

(24)  T C OUT 3C E0 01.01.001 00/0/000 0B 03 ED FE ED BA BE CA FE 22 22 22 22
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=22 22 22 22), Key: TK1

Acceptance: the BDUT accepts to write domain address only when sent secured with TK1 and A+C, both with
deactivated and activated security mode

###### 3.7.2.13 Test A_IndividualAddress_Write PDU (3FF/00C) and PID_PROG_Mode (3FF/0CC)
Required BDUT setting: Security Mode of the BDUT activated – TK1 set

Purpose: Check whether BDUT

- Refuses to activate the programming mode via the bus plain

- Activates the programming mode via the bus secured with TK1 (A and C),

- refuses to write the individual address plain

- refuses to write the individual address with TK 1 and A only

- accepts to write the individual address with TK1 and A+C

Procedure: Send message to the BDUT to attempt to

- set the programming mode via the bus in plain

- set the programming mode via the bus, secured (A and C) with the tool key

- set individual address plain

- set individual address with TK1 and A only

- set individual address secured with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to activate the programming mode plain

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 36 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FC)

Activate the programming mode with TK and A+C

(5)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 36 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 ), Key: TK1


-----

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Attempt to write the IA plain

(7)  IN BC 10.15.254 00/0/000 E3 00 C0 12 34 :IndAddrWrite(Addr=01.02.052)

Attempt to write the IA with A only

(8)  T A IN 3C E0 10.15.254 00/0/000 03 00 C0 12 34 :IndAddrWrite(Addr=01.02.052), Key: TK1

Read the IA - unchanged

(9)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(10)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Write the new IA

(11)  T C IN 3C E0 10.15.254 00/0/000 03 00 C0 12 34 :IndAddrWrite(Addr=01.02.052), Key: TK1

Read the new IA

(12)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(13)  OUT BC 01.02.052 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.02.052)

Write the new IA back to the original value

(14)  T C IN 3C E0 10.15.254 00/0/000 03 00 C0 11 01 :IndAddrWrite(Addr=01.01.001), Key: TK1

Read the new IA - original value

(15)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(16)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Acceptance: the BDUT accepts to set the programming mode/write individual address when sent secured with
A/C and refuses to do so in plain.

###### 3.7.2.14 Test A_IndividualAddressSerialNumber_Write PDU (3FF/00C)
Required BDUT setting: Security Mode of the BDUT activated - TK1 set – BDUT has SerialNumber
0009CAFE7777h

Purpose: Check whether BDUT

- refuses to write the individual address plain

- refuses to write the individual address only A with TK1

- accepts to write the individual address with TK1 (A and C)

Procedure: Send message to the BDUT to attempt to

- set individual address plain

- set individual address with TK1 and A only

- set individual address secured with TK1 and A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to write the IA plain

(3)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 12 34 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1234, Reserved=00000000)

Attempt to write the IA A only


-----

(4)  T A IN 3C E0 10.15.254 00/0/000 0D 03 DE FE ED BA BE CA FE 12 34 01 01 01 01
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1234, Reserved=34010101), Key: TK1

Read the IA - unchanged

(5)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(6)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Write the new IA with A+C

(7)  T C IN 3C E0 10.15.254 00/0/000 0D 03 DE FE ED BA BE CA FE 12 34 01 01 01 01
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1234, Reserved=34010101), Key: TK1

Read the new IA

(8)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(9)  OUT BC 01.02.052 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.02.052)

Write the new IA back to the original value

(10)  T C IN 3C E0 10.15.254 00/0/000 0D 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=01000000), Key: TK1

Read the new IA - original value

(11)  IN BC 10.15.254 00/0/000 E1 01 00 :IndAddrRead()

(12)  OUT BC 01.01.001 00/0/000 E1 01 40 :IndAddrResponse(Addr=01.01.001)

Deactivate Security Mode

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Acceptance: the BDUT accepts to write individual address only when sent secured.

##### 3.8 KNX Secure Properties with Tool Key[8]

###### 3.8.1 Test PID_OBJECT_TYPE(1) (3FF/0CC)

 3.8.1.1 PropertyValueRead plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether the BDUT in all cases sends a PropValueResponse with the Object Type of the Security
Interface Object reading 17 when security mode is off, and only with A+C when security mode is on

Procedure: Send message to the BDUT to read the object type of the Security Interface Object

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 01 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0001, ElemCount=01, Index=0001)

8 Tests applicable for both KNX data secure as well as IP Secure devices (however depending on whether the
relevant property is required according to the implemented profile).


-----

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 01 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
Data=FC )

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 01 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 01 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0001, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 01 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 01 01 00 01 00 11
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 11 ), Key: TK1

Acceptance: the BDUT in all cases sends a PropValueResponse with the Object Type of the Security Interface
Object reading 17 when security mode is off, and only with A+C when security mode is on.

###### 3.8.1.2 PropertyValueWrite plain, A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the PID_OBJECT_TYPE with plain telegrams or telegrams
secured with A only or A+C.

Procedure: Send messages to the BDUT to try and write the PID_OBJECT_TYPE

Activate Security Mode


-----

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB)

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB)

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 01 01 00 01 00 18
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=00 18 ), Key: TK1


-----

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 01 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Acceptance: the BDUT rejects the writing of the PID_OBJECT_TYPE.

###### 3.8.1.3 Check Property description[9]
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT accepts the reading of the description of property PID_OBJECT_TYPE with
unsecured telegrams when security mode is not activated and not when Security Mode is activated.

Procedure: Send message to the BDUT to read the description of the property PID_OBJECT_TYPE

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 01 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0001, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0001, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 01 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0001, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 01 0? ?? ?? ?? ?? ?? 04 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0001, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=04, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: the BDUT sends a property description response with correct type and count when security mode is
deactivated and sends a negative response when security mode is activated.

###### 3.8.2 Test PID_OBJECT_NAME(2) [optional] (3FF/0CC)

 3.8.2.1 Read Interface Object Name plain, with A only or with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT accepts to read the object name of the Security Interface Object with plain
telegrams or with telegrams secured with A or A+C

Procedure: Send message to the BDUT to read the Object name with plain telegrams and secured telegrams with
A only or with A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

9 Read and Write access level is manufacturer specific


-----

Plain

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 02 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0002, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 02 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
Data=FC )

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 02 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 02 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 02 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 13 01 CD 00 11 00 10 02 01 00 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 02 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0002, ElemCount=01, Index=0001)

(12)  OUT 3C 60 01.01.001 10.15.254 13 01 CD 00 11 00 10 01 01 00 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 02 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 13 01 CD 00 11 00 10 02 01 00 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 02 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 13 01 CD 00 11 00 10 02 01 00 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ), Key: TK1

Acceptance: the BDUT accepts reading of the object name of the Security Interface Object in all cases when
security mode is off and only with confidentiality when security mode is on.

###### 3.8.2.2 PropertyValueWrite Plain, with A only or with A+C
Required BDUT setting: Security Mode of the BDUT is activated or deactivated.

Purpose: Check whether BDUT rejects to write the PID_OBJECT_NAME with plain or with secured telegrams.

Procedure: Send message to the BDUT to try and write the PID_OBJECT_NAME


-----

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 02 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
RetCode=??)

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 02 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
RetCode=??), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 01 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0001, ElemCount=00, Index=0001,
RetCode=??), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 02 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
RetCode=??)

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 02 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
RetCode=??), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 02 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1


-----

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 02 00 00 01 ??
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0002, ElemCount=00, Index=0001,
RetCode=??), Key: TK1

Acceptance: the BDUT accepts the writing of the PID_OBJECT_NAME in all cases when security mode is off
and only with confidentiality when security mode is on.

###### 3.8.2.3 Check Property description
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT accepts the reading of the description of property PID_OBJECT_NAME with
unsecured telegrams is deactivated and rejects the reading of the description with unsecured telegrams when
security mode is activated.

Procedure: Send message to the BDUT to read the description of the property PID_OBJECT_NAME

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 02 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0002, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 02 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0002, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 02 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0002, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 02 0? ?? 00 00 00 00 02 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0002, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=02, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: the BDUT sends a property description response with correct type and count when security mode is
deactivated and a negative response when security mode is activated.

###### 3.8.3 Test PID_SERIAL_NUMBER(11) (3FF/0CC)

 3.8.3.1 Read Serial Number plain, with A only or with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT accepts reading of serial number, with plain or with telegrams secured with A
only or with A+C, when security mode is off, but only with A+C when security mode is on

Procedure: Send message to the BDUT to read Serial Number with plain telegrams or with telegrams secured
with A only or with A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain


-----

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0B 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000B, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 0B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=00, Index=0001,
Data=FC )

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0B 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 0B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0B 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 00 00 10 0B 01 00 01 FE ED BA BE CA FE
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=FE ED BA BE CA FE ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0B 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000B, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6F 01 CD 00 00 00 10 0B 01 00 01 FE ED BA BE CA FE
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=FE ED BA BE CA FE )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0B 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 00 00 10 0B 01 00 01 FE ED BA BE CA FE
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=FE ED BA BE CA FE ), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0B 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 00 00 10 0B 01 00 01 FE ED BA BE CA FE
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=FE ED BA BE CA FE ), Key: TK1

Acceptance: the BDUT accepts reading of serial number, with plain or with telegrams secured with A only or
with A+C, when security mode is off, but only with A+C when security mode is on.

###### 3.8.3.2 PropertyValueWrite Plain, with A only or with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the Serial Number with plain telegrams or telegrams secured
with A or A+C.

Procedure: Send message to the BDUT to try and write the Serial Number


-----

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 6B 03 D7 00 0B 10 01 FE ED BA BE CA FE :PropertyValueWrite(Obj=00,
Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE )

(4)  OUT BC 01.01.001 10.15.254 65 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=)

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 0B 03 D7 00 0B 10 01 FE ED BA BE CA FE
:PropertyValueWrite(Obj=00, Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 05 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 0B 03 D7 00 0B 10 01 FE ED BA BE CA FE
:PropertyValueWrite(Obj=00, Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 05 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 6B 03 D7 00 0B 10 01 FE ED BA BE CA FE :PropertyValueWrite(Obj=00,
Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE )

(12)  OUT BC 01.01.001 10.15.254 65 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=)

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 0B 03 D7 00 0B 10 01 FE ED BA BE CA FE
:PropertyValueWrite(Obj=00, Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 05 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 0B 03 D7 00 0B 10 01 FE ED BA BE CA FE
:PropertyValueWrite(Obj=00, Prop=0B, Count=1, Start=001, Data=FE ED BA BE CA FE ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 05 03 D6 00 0B 00 01 :PropertyValueResponse(Obj=00, Prop=0B,
Count=0, Start=001, Data=), Key: TK1

Acceptance: the BDUT rejects in all cases the writing of the Serial Number.

###### 3.8.3.3 Check Property description
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT accepts the reading of the description of property Serial Number with unsecured
telegrams.


-----

Procedure: Send message to the BDUT to read the description of the property Serial Number

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000B, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000B, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0B 0? ?? ?? ?? ?? ?? 16 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000B, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=16, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: the BDUT sends a property description response with the correct type and max count when security
mode is off and sends a negative property description response when the security mode is on.

###### 3.8.4 Test PID_MANUFACTURER_ID(12) (3FF/0CC)

 3.8.4.1 Read Manufacturer ID plain, with A only or with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether the BDUT accepts in all cases the reading of the Manufacturer ID, when the security
mode is off and only with A+C, when security mode is on

Procedure: Send message to the BDUT to read Manufacturer ID with plain telegrams or telegrams secured with
A only or A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 0C 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FC )

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0C 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001), Key: TK1


-----

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 0C 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0C 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 00 00 10 0C 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=?? ?? ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6B 01 CD 00 00 00 10 0C 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=?? ?? )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0C 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 00 00 10 0C 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=?? ?? ), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 0C 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 00 00 10 0C 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=?? ?? ), Key: TK1

Acceptance: the BDUT accepts in all cases the reading of the Manufacturer ID, when the security mode is off
and only with A+C, when security mode is on.

###### 3.8.4.2 PropertyValueWrite Plain, A and A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the Manufacturer ID with plain telegrams or telegrams secured
with A or A+C.

Procedure: Send message to the BDUT to try and write the Manufacturer ID

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain


-----

(3)  IN BC 10.15.254 01.01.001 6B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB)

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 6B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB)

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 00 00 10 0C 01 00 01 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=11 11 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 0C 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Acceptance: the BDUT rejects the writing of the Manufacturer ID.


-----

###### 3.8.4.3 Check Property description
Required BDUT setting: Security Mode of the BDUT deactivated and deactivated

Purpose: Check whether BDUT accepts the reading of the description of property Manufacturer ID with
unsecured telegrams when security mode is off and refuses the reading of the description with unsecured
telegrams when the security mode is on.

Procedure: Send message to the BDUT to read the description of the property Manufacturer ID

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0C 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000C, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0C 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000C, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0C 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000C, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0C 0? ?? ?? ?? ?? ?? ?4 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000C, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=?4, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: the BDUT sends a property description response with the correct type and maxcount when security
mode is off and a negative property description response when the security mode is on.

###### 3.8.5 Test PID_PROG_MODE (54) (3FF/0CC)
See 3.7.2.13

###### 3.8.6 Test PID_IO_LIST(71) (3FF/0CC) [optional – recommended]

 3.8.6.1 Read PID_IO_LIST plain, secured with A or A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether the BDUT accepts reading of PID_IO_LIST, with plain telegrams or with

telegrams secured with A only or A+C when security mode is off, and only with A+C when security tmode is on.

Procedure: Send message to the BDUT to read PID_IO_LIST with plain telegrams or with telegrams secured
with A only or A+C

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 47 02 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0047, ElemCount=02, Index=0001)


-----

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 47 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
Data=FC )

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 47 02 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 47 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 47 02 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 00 00 10 47 02 00 01 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=00 00 ?? ?? ), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 47 02 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0047, ElemCount=02, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6D 01 CD 00 00 00 10 47 02 00 01 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=00 00 ?? ?? )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 47 02 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 00 00 10 47 02 00 01 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=00 00 ?? ?? ), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 47 02 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0D 01 CD 00 00 00 10 47 02 00 01 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=00 00 ?? ?? ), Key: TK1

Acceptance: the BDUT accepts reading of PID_IO_LIST, with plain telegrams or with telegrams secured with A
only or A+C when security mode is off, and only with A+C when security mode is on.

###### 3.8.6.2 PropertyValueWrite Plain, with A and with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to write the PID_IO_LIST with plain telegrams or telegrams with A only
or A+C.

Procedure: Send message to the BDUT to try and write the PID_IO_LIST

Activate Security Mode


-----

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(3)  IN BC 10.15.254 01.01.001 6D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB)

A only

(5)  T A IN 3C 60 10.15.254 01.01.001 0D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 0D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(11)  IN BC 10.15.254 01.01.001 6D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB)

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 0D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 0D 01 CE 00 00 00 10 47 02 00 01 11 11 11 11
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=02, Index=0001,
Data=11 11 11 11 ), Key: TK1


-----

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 47 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0047, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Acceptance: the BDUT rejects the writing of the PID_IO_LIST.

###### 3.8.6.3 Check Property description
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT accepts the reading of the description of property PID_IO_LIST with unsecured
telegrams when security mode is off and sends a negative response when security mode is on.

Procedure: Send message to the BDUT to read the description of the property PID_IO_LIST

Plain

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 47 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0047, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 47 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=0047, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 47 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0047, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 47 0? ?? 00 00 00 00 04 00 ?? ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=0047, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=04, ElemMax=00??, RdAcc=?, WrAcc=?)

Acceptance: the BDUT sends a property description response with the correct type and count when security
mode is off and a negative response when security mode is on.

###### 3.8.7 Test PID_LOAD_STATE_CONTROL(5) (15F/04C)

 3.8.7.1 Secure Property Read and Write, Plain, with A only, with A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether

a) BDUT when in security mode off

- Rejects the writing of the load controls with plain telegrams

- Accepts the reading of the load controls with plain telegrams

- Accepts the reading and writing of the load controls with A only and with A+C

b) BDUT when in security mode on

- Rejects the reading and writing of the load controls with plain telegrams or with A only

- Accepts the reading and writing of the load controls with A+C

Procedure: Send message to the BDUT to read/write its load controls under the before said conditions.


-----

Preparation

Set Security IA table IA1 = 1.0.65

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 10 41 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=10 41 00 00 00 00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set P2P Key Table: P2PK1 = 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22

(3)  T C IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for P2P Key

(5)  req IN 3C 60 01.00.065 01.01.001 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(6)  res OUT 3C 60 01.01.001 01.00.065 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK1

Activate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(9)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(10)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC)

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 05 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0005, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 05 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
Data=FC )

A only

(13)  T A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

(15)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1


-----

(16)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

A+C

(17)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Deactivate Security Mode

(21)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(22)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Plain

(23)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(24)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC)

(25)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 05 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0005, ElemCount=01, Index=0001)

(26)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 05 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=?? )

A only

(27)  T A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1

(28)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(29)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(30)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

A+C

(31)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: TK1


-----

(32)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(33)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(34)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance:

The BDUT when in security mode off

- Rejects the writing of the load controls with plain telegrams

- Accepts the reading of the load controls with plain telegrams

- Accepts the reading and writing of the load controls with A only and with A+C

The BDUT when in security mode on

- Rejects the reading and writing of the load controls with plain telegrams or with A only

- Accepts the reading and writing of the load controls with A+C

###### 3.8.7.2 Property Write and Read - A and A+C with other than Tool Key
Required BDUT setting: Security Mode of the BDUT activated or deactivated - P2PK1 set in the P2P Key table

Purpose: Check whether BDUT rejects the reading and writing to the PID_LOAD_STATE_CONTROL via the
bus with telegrams secured with another key than the tool key (may be implementation dependent)

Procedure: Send message to the BDUT to attempt to write to PID_LOAD_STATE_CONTROL via the bus with
telegrams secured with another key than the tool key.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

A only

(3)  A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: P2PK1

(4)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK1

(5)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key:
P2PK1

(6)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK1

A+C

(7)  C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: P2PK1

(8)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK1


-----

(9)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key:
P2PK1

(10)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: P2PK1

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

A only

(13)  A IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: P2PK1

(14)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK1

(15)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key:
P2PK1

(16)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: P2PK1

A+C

(17)  C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 ), Key: P2PK1

(18)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=00, Index=0001,
RetCode=FC), Key: P2PK1

(19)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key:
P2PK1

(20)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: P2PK1

Acceptance: the BDUT rejects the reading and writing to the PID_LOAD_STATE_CONTROL via the bus with
telegrams secured with another key than the tool key (may be implementation dependent).

###### 3.8.7.3 Check Property description
Required BDUT setting: Security Mode of the BDUT activated or deactivated - tool key set in the
PID_TOOL_KEY

Purpose: Check whether BDUT accepts to read the description of the PID_LOAD_STATE_CONTROL with
plain telegrams when security mode is off and sends a negative response when security mode is on.

Procedure: Send plain message to the BDUT to read the description of PID_LOAD_STATE_CONTROL.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1


-----

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 05 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0005, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 05 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0005, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 05 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0005, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 05 0? ?? 00 00 00 00 ?0 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0005, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=?0, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: the BDUT accepts the reading of the PID_LOAD_STATE_CONTROL property description via the
bus with plain telegrams when security mode is off and sends a negative response when security mode is on.

###### 3.8.7.4 Secure PropertyValuRead after power down check value
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check whether BDUT does not change the set value of PID_LOAD_STATE_CONTROL after power
down –

check whether BDUT does not change the set value of PID_LOAD_STATE_CONTROL for master reset
confirmed restart

Procedure: Send master reset commands to the BDUT. Check whether the PID_LOAD_STATE_CONTROL is
unchanged for confirmed restart.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write Load complete

(3)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Confirmed Restart (Erase Code 01h)

(7)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

(8)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(9)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(10)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(11)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(12)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read Load State

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Write Load complete

(15)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Power down and power BDUT back up again

Read Load State

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Basic Restart

(21)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(22)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(23)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read Load State

(24)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 05 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001), Key: TK1

(25)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 05 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Acceptance: PID_LOAD_STATE_CONTROL is unchanged after confirmed restart / reconnecting the BDUT to
the bus.

Cleanup:

Deactivate Security Mode


-----

(26)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(27)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

###### 3.8.8 Test Security Mode PID_SECURITY_MODE(51) (15F/04C)

 3.8.8.1 Activating/Deactivating Security Mode secure – Reading Security Mode – with A+C– positive case
Required BDUT setting: Security Mode of the BDUT not activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT accepts to change the value of the PID with telegrams secured with the tool key
(A+C),

first activating the security mode and then again deactivating it. Check whether BDUT accepts to read the value
of the PID with telegrams secured with the tool key,

first with activated security mode and then with deactivated security mode

Procedure: Send message to the BDUT to activate via the bus the PID_SECURITY_MODE with telegrams
secured with the tool key and to deactivate it again.

Send messages to the BDUT to read via the bus the PID_SECURITY_MODE with telegrams secured with the
tool key.

- Security Mode On: A_FunctionPropertyCommand Octet 10 till 12: 00h 00h 01h (activate) –
A_FunctionPropertyStateRead Octet 10/11: 00h 01h

- Security Mode off: A_FunctionPropertyCommand Octet 10 till 12: 00h 00h 00h (deactivate) –
A_FunctionPropertyStateRead Octet 10/11: 00h 01h

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Read activated Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 01 ), Key:
TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Read deactivated Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
TK1

Acceptance: the BDUT accepts the writing to the PID_SECURITY_MODE via the bus with secured telegrams.
The BDUT shall respond with S-A_Data-Service with the


-----

- When writing Security Mode On/Off: A_FunctionPropertyState_Response Octet 10 and 11: 00h 00h
(successfully written)

- When reading Security Mode: A_FunctionPropertyState_Response Octet 10 to 12: 00h 00h 00h (in case of
deactivated security mode) and 00h 00h 01h (in case of activated security mode)

###### 3.8.8.2 Activating Security Mode secure – incorrect Service IDs and incorrect ServiceInfo
Required BDUT setting: Security Mode of the BDUT not activated - tool key set in the SKI tool

Purpose: Check whether BDUT rejects to change the value of the PID with telegrams secured with the tool key
but with incorrect Service IDs and incorrect ServiceInfo,

Procedure: Send message to the BDUT to activate via the bus the PID_SECURITY_MODE with telegrams
secured with the tool key and to deactivate it again.

Send messages to the BDUT to read via the bus the PID_SECURITY_MODE with telegrams secured with the
tool key.

Negative cases

1. A_FunctionPropertyCommand Octet 10 till 12: 00h 00h 03h (try to activate but with invalid ServiceInfo)

2. A_FunctionPropertyRead Octet 10 till 11: 00h 01h (try to read but with invalid ReadServiceID)

Write Security Mode with wrong Service Info

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 03
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 03 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 F8 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=F8, Data=00 ), Key: TK1

Check Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
TK1

Read Security Mode with invalid Service ID

(5)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 01
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 01 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 F2 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=F2, Data=01 ), Key: TK1

Check Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
TK1

Acceptance: the BDUT rejects the writing to the PID_SECURITY_MODE via the bus with secured telegrams.
The BDUT shall respond with

1. A_FunctionPropertyState_Response Octet 10 and 11: F8h 00h for negative test case1 (F8h =
E_DATA_VOID)

2. A_FunctionPropertyState_Response Octet 10 and 11: F2h 00h for negative test case2 (F2h =
E_COMMAND_INVALID)

###### 3.8.8.3 Secured FunctionPropertyCommand only authenticated
Repeat the tests of 3.8.8.1 however sending the secure telegrams only with authentication.


-----

Deactivate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Read deactivated Security Mode with A only

(3)  T A IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
TK1

Activate Security Mode with A only

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to deactivate Security Mode with A only

(7)  T A IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T A OUT 3C 60 01.01.001 10.15.254 07 01 D6 00 11 00 10 33 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=FC, Data=), Key: TK1

Read activated Security Mode with A only

(9)  T A IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(10)  T A OUT 3C 60 01.01.001 10.15.254 07 01 D6 00 11 00 10 33 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=FC, Data=), Key: TK1

Acceptance: the BDUT ignores the writing to the PID_SECURITY_MODE via the bus with telegrams only
authenticated in case the security mode is on.

BDUT shall respond with Return Code FCh and no data. If the security mode is off, the reading and writing of
the security mode succeeds.

###### 3.8.8.4 Attempting to activate Security Mode unsecure
Required BDUT setting: Security Mode of the BDUT not activated

Purpose: Check whether BDUT rejects to change the value of the PID with unsecured telegrams in case the
security mode is active, but allows the reading in case the security mode is off.

Procedure: Send message to the BDUT to attempt to manipulate via the bus the PID_SECURITY_MODE with
unsecured telegrams

Deactivate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to activate Security Mode with Plain

(3)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 33 00 00 01 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 01 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 33 FC :FctPropertyExtStateResponse(ObjType=0011,
ObjInst=0001, PropId=0033, RetCode=FC, Data=)


-----

Attempt to deactivate Security Mode with Plain

(5)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 33 00 00 00 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 33 FC :FctPropertyExtStateResponse(ObjType=0011,
ObjInst=0001, PropId=0033, RetCode=FC, Data=)

Attempt to read with Plain

(7)  IN BC 10.15.254 01.01.001 68 01 D5 00 11 00 10 33 00 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 )

(8)  OUT BC 01.01.001 10.15.254 69 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 )

Activate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to activate Security Mode with Plain

(11)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 33 00 00 01 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 01 )

(12)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 33 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=FC, Data=)

Attempt to deactivate Security Mode with Plain

(13)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 33 00 00 00 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 00 )

(14)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 33 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=FC, Data=)

Attempt to read with Plain

(15)  IN BC 10.15.254 01.01.001 68 01 D5 00 11 00 10 33 00 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 )

(16)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 33 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=FC, Data=)

Acceptance: the BDUT rejects the writing to the PID_SECURITY_MODE via the bus with unsecured telegrams
when the security mode is on.

The BDUT returns a FctPropState_Resp with the return code FCh and no data.

The BDUT however allows to read the security mode in case the mode is in the off state.

###### 3.8.8.5 Check Property description
Required BDUT setting: Security Mode of the BDUT activated and deactivated - tool key set in the
PID_TOOL_KEY

Purpose: Check whether BDUT accepts to read the description of the PID_SECURITY_MODE with plain
telegrams when security mode is off and sends a negative response when security mode is on.

Procedure: Send plain message to the BDUT to read the description of a the PID_SECURITY_MODE.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1


-----

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 33 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0033, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 33 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0033, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 33 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0033, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 33 0? ?? ?? ?? ?? ?? BE 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0033, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=BE, ElemMax=0001, RdAcc=?, WrAcc=?)

###### 3.8.8.6 Secure FunctionPropertyStateRead 
See 3.8.8.1

###### 3.8.8.7 Secure FunctionPropertyStateRead after power down and master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT does not change the set security mode after power down – check whether the
security mode remains activated for master reset confirmed restart and is deactivated for master reset factory
reset (with and without IA) and local factory reset.

Procedure: Disconnect and reconnect BDUT to the bus. Check whether the activated PID_SECURITY_MODE
is unchanged.

Send master reset commands to the BDUT. Check whether the PID_SECURITY_MODE is unchanged for
confirmed restart and is deactivated for master reset factory reset (with and without IA) and local factory reset

A. Master Reset - Confirmed Restart

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Confirmed Restart

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(7)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(8)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read activated Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1


-----

(10)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 01 ), Key:
TK1

B. Master Reset - Factory Reset without IA

Activate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Factory Reset without IA

(13)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(16)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(17)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(18)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Synchronize Sequence Number for Tool Key

(19)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(20)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read activated Security Mode

(21)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(22)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 01 ), Key:
TK1

C. Master Reset - Factory Reset with IA

Activate Security Mode

(23)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(24)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Factory Reset with IA

(25)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(26)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(27)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(28)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(29)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(30)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect


-----

Restore DoA

(31)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(32)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(33)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(34)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Read deactivated Security Mode

(35)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: FDSK

(36)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
FDSK

D. Perform Local Factory Reset

Activate Security Mode

(37)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(38)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Perform manual Factory Reset

Please perform manual Factory Reset

Restore DoA

(39)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(40)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(41)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(42)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Write Tool Key

(43)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(44)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read deactivated Security Mode


-----

(45)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(46)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 ), Key:
TK1

E. Power down BDUT and power it back up

Activate Security Mode

(47)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(48)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Power down and power BDUT back up again

Read activated Security Mode

(49)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(50)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 01 ), Key:
TK1

Basic Restart

(51)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(52)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(53)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read activated Security Mode

(54)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(55)  T C OUT 3C 60 01.01.001 10.15.254 09 01 D6 00 11 00 10 33 00 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 01 ), Key:
TK1

Acceptance: the PID_SECURITY_MODE is unchanged when reconnecting the BDUT to the bus, for confirmed
restart and for factory reset without IA. The PID_SECURITY_MODE is deactivated for master reset factory
reset (with IA) and local factory reset

Deactivate Security Mode

(56)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(57)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

###### 3.8.9 Test PID_P2P_KEY_TABLE(52) (00C/00C)

 3.8.9.1 Secure PropertyValueWrite and Read – with A+C
Required BDUT setting: Security Mode of the BDUT activated. Repeat the tests with Security Mode of the
BDUT deactivated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT accepts to write several values to the PID_P2P_KEY_TABLE with telegrams
secured with the tool key (A+C).

Check whether BDUT accepts to read the values written in the PID_P2P_KEY_TABLE with telegrams secured
with the tool key.

Procedure: Write several values to the PID_P2P_KEY_TABLE with telegrams secured with the tool key (A+C).
Send messages to the BDUT to read via the bus the written values.


-----

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P Key Table

(3)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

Write P2P Key Table entry

(5)  T C IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read length of P2P Key Table

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 34 01 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 01 ), Key: TK1

Read P2P Key Table entry

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 1D 01 CD 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

Repeat above tests with security mode of BDUT deactivated

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P Key Table

(13)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

Write P2P Key Table entry


-----

(15)  T C IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read length of P2P Key Table

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 34 01 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 01 ), Key: TK1

Read P2P Key Table entry

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 1D 01 CD 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

Acceptance: the BDUT accepts the writing to the PID_P2P_KEY_TABLE via the bus with secured telegrams.
The BDUT accepts the reading of the PID_P2P_KEY_TABLE via the bus with secured telegrams.

###### 3.8.9.2 Unsecure PropertyValueWrite and Read
Required BDUT setting: Security Mode of the BDUT not activated. Repeat the tests with Security Mode of the
BDUT deactivated.

Purpose: Check whether BDUT rejects to change the value of the PID with unsecured telegrams – check whether
the BDUT rejects to read the value of the PID with unsecured telegrams.

Procedure: Send message to the BDUT to attempt to manipulate or read via the bus the PID_P2P_KEY_TABLE
with unsecured telegrams

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P Key Table

(3)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 34 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
RetCode=FC)

Write P2P Key Table entry

(5)  IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8
F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 34 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
RetCode=FC)


-----

Read length of P2P Key Table

(7)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 34 01 00 00 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0000)

(8)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 34 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
Data=FC )

Read P2P Key Table entry

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 34 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
Data=FC )

Repeat above tests with security mode of BDUT deactivated

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P Key Table

(13)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 34 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
RetCode=FC)

Write P2P Key Table entry

(15)  IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8
F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 )

(16)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 34 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
RetCode=FC)

Read length of P2P Key Table

(17)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 34 01 00 00 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0000)

(18)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 34 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
Data=FC )

Read P2P Key Table entry

(19)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(20)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 34 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
Data=FC )

Acceptance: the BDUT rejects the writing to and reading of the PID_P2P_KEY_TABLE via the bus with
unsecured telegrams. The BDUT sends a PropertyValueResponse with no data.


-----

###### 3.8.9.3 Secured PropertyValueRead only authenticated
Repeat the tests of 3.8.9.1 however sending the secure telegrams only with authentication.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P KeyTable

(3)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
RetCode=FC), Key: TK1

Write P2P Key Table entry

(5)  T A IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read length of P2P Key Table

(7)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000), Key: TK1

(8)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 34 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Read P2P Key Table entry

(9)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(10)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 34 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear P2P KeyTable

(13)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 34 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
RetCode=FC), Key: TK1

Write P2P Key Table entry


-----

(15)  T A IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

(16)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read P2P Key Table entry

(17)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(18)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 34 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Read length of P2P Key Table

(19)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0000), Key: TK1

(20)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 34 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Acceptance: the BDUT ignores the writing to the PID_P2P_KEY_TABLE via the bus with telegrams only
authenticated. BDUT shall respond with a negative PropertyValueRes without data.

###### 3.8.9.4 Check Property description
Required BDUT setting: Security Mode of the BDUT not activated and activated - tool key set in the
PID_TOOL_KEY

Purpose: Check whether BDUT refuses the reading of the description of the PID_P2P_KEY_TABLE with plain
telegrams when security mode is off and only accepts reading when security mode is on and with A+C
telegrams.

Procedure: Send plain message to the BDUT to read the description of the PID_P2P_KEY_TABLE when
security mode is off and A+C when security mode is on.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 34 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0034, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 34 0? ?? 00 00 00 00 A4 ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0034, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=A4, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 34 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0034, DescrType=0, Index=0000)


-----

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 34 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0034, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: the BDUT accepts the reading of the description of the PID_P2P_KEY_TABLE via the bus with
plain telegrams.

###### 3.8.9.5 Secure PropertyValueRead after power down and master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT does not change the PID_P2P_KEY_TABLE after power down – check whether
the PID_P2P_KEY_TABLE remains unchanged for master reset confirmed restart. Rest of the master reset
commands is manufacturer specific.

Procedure: Disconnect and reconnect BDUT to the bus. Check whether the PID_P2P_KEY_TABLE is
unchanged.

Send master reset commands to the BDUT. Check whether the PID_P2P_KEY_TABLE is unchanged for
confirmed restart and power down.

A. Master Reset - Confirmed Restart

Restart

(1)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read P2P Key Table entry

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 1D 01 CD 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

B. Power down the BDUT and power it up again

Read P2P Key Table entry

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 1D 01 CD 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

Basic Restart

(11)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(12)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(13)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read P2P Key Table entry

(14)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 34 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001), Key: TK1


-----

(15)  T C OUT 3C 60 01.01.001 10.15.254 1D 01 CD 00 11 00 10 34 01 00 01 00 01 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE 00 01 :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE 00 01 ), Key:
TK1

Acceptance: the PID_P2P_KEY_TABLE is unchanged when reconnecting the BDUT to the bus and for
confirmed restart.

###### 3.8.10 Test PID_GRP_KEY_TABLE(53) (00C/00C)[10]

 3.8.10.1 Secure PropertyValueWrite/Read – with A+C
Required BDUT setting: Security Mode of the BDUT activated. Repeat the tests with Secuirty Mode of the
BDUT deactivated. Tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT accepts to write several values to the PID_GRP_KEY_TABLE with telegrams
secured with the tool key (A+C). Check whether BDUT accepts to read the values written in the
PID_GRP_KEY_TABLE with telegrams secured with the tool key.

Procedure: Write several values to the PID_GRP_KEY_TABLE with telegrams secured with the tool key
(A+C). Send messages to the BDUT to read via the bus the written values.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(3)  T C IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 35 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read it back

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 1B 01 CD 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FE :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE ), Key: TK1

Dectivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(9)  T C IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FF :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FF ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 35 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

10 PID_GRP_KEY_TABLE is only mandatory for S-Mode implementations of KNX Data Security in devices that support Group Objects.


-----

Read it back

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 1B 01 CD 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FF :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FF ), Key: TK1

Acceptance: the BDUT accepts the writing to the PID_GRP_KEY_TABLE via the bus with secured telegrams.
The BDUT accepts the reading of the PID_GRP_KEY_TABLE via the bus with secured telegrams.

###### 3.8.10.2 Unsecure PropertyValueWrite and Read
Required BDUT setting: Security Mode of the BDUT not activated. Repeat the tests with Security Mode of the
BDUT deactivated.

Purpose: Check whether BDUT rejects to change the value of the PID with unsecured telegrams – check whether
the BDUT rejects to read the value of the PID with unsecured telegrams.

Procedure: Send message to the BDUT to attempt to manipulate or read via the bus the
PID_GRP_KEY_TABLE with unsecured telegrams.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(3)  IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8
F9 FA FB FC FD FE :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01,
Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 35 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
RetCode=FC)

Read it back

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 35 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0035, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 35 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
Data=FC )

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(9)  IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8
F9 FA FB FC FD FE :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01,
Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE )

(10)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 35 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
RetCode=FC)

Read it back


-----

(11)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 35 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0035, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 35 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
Data=FC )

Acceptance: the BDUT rejects the writing to and the reading of the PID_GRP_KEY_TABLE via the bus with
unsecured telegrams. The BDUT sends a PropertyValueResponse with no data.

###### 3.8.10.3 Secured PropertyValueRead only authenticated
Repeat the tests of 3.8.10.1 however sending the secure telegrams only with authentication.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(3)  T A IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE ), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 35 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read it back

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 35 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write key to table

(9)  T A IN 3C 60 10.15.254 01.01.001 1B 01 CE 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6 F7
F8 F9 FA FB FC FD FE :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FE ), Key: TK1

(10)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 35 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read it back

(11)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(12)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 35 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Acceptance: the BDUT ignores the writing to the PID_GRP_KEY_TABLE via the bus with telegrams only
authenticated. BDUT shall respond with a negative PropertyValueRes without data


-----

###### 3.8.10.4 Check Property Extended description
Required BDUT setting: Security Mode of the BDUT not activated and activated - tool key set in the
PID_TOOL_KEY.

Purpose: Check whether BDUT rejects to read the description of the PID_GRP_KEY_TABLE with plain
telegrams when security mode is off and accepts to read the description when security mode is on with A+C.

Procedure: Send plain message to the BDUT to read the description of the PID_GRP_KEY_TABLE when
security mode is off and A+C when security mode is on.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 35 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0035, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 35 0? ?? 00 00 00 00 A2 ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0035, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=A2, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 35 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0035, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 35 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0035, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: the BDUT responds with a Property Description Extended Response including the required
description when security mode is on and with A+C and sends a negative response when security mode is off
and sent with plain.

###### 3.8.10.5 Secure PropertyValueRead after power down and master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT does not change the PID_GRP_KEY_TABLE after power down – check
whether the PID_GRP_KEY_TABLE remains unchanged for master reset confirmed restart. Reaction to other
master reset commands are manufacturer specific.

Procedure: Disconnect and reconnect BDUT to the bus. Check whether the PID_GRP_KEY_TABLE is
unchanged.

Send master reset commands to the BDUT. Check whether the PID_GRP_KEY_TABLE is unchanged for
confirmed restart and power down.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

A. Master Reset - Confirmed Restart

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

(4)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(7)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(8)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read GRP key table

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 1B 01 CD 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FF :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FF ), Key: TK1

Power down BDUT and power it up again

B. Power down BDUT and power it up again

Read GRP key table

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 1B 01 CD 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FF :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FF ), Key: TK1

Basic Restart

(13)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read GRP key table

(16)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 35 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0035, ElemCount=01, Index=0001), Key: TK1

(17)  T C OUT 3C 60 01.01.001 10.15.254 1B 01 CD 00 11 00 10 35 01 00 01 00 10 11 F0 F1 F2 F3 F4 F5 F6
F7 F8 F9 FA FB FC FD FF :PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0035,
ElemCount=01, Index=0001, Data=00 10 11 F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 FA FB FC FD FF ), Key: TK1

Acceptance: the PID_GRP_KEY_TABLE is unchanged when reconnecting the BDUT to the bus and for
confirmed restart.

Cleanup:

Deactivate Security Mode

(18)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(19)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

###### 3.8.11 Test PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE(54) (00C/00C)

 3.8.11.1 Secure PropertyValueWrite and Read – A+C
Required BDUT setting: Security Mode of the BDUT activated. Repeat the tests with Security Mode of the
BDUT deactivated - tool key set and a key for the extra entry in the IA table already set accordingly.


-----

Purpose: Check the content of the security IA table records and write new elements to the Security IA Table with
telegrams secured with the tool key (A+C).

Procedure: Send Property Read messages to the BDUT secured with the tool key to check the content of the
Security IA Table: the elements in this table shall be 8 octets, each IA coded as 2 octets and the corresponding
last valid sequence number from this IA as 6 octets.

Send Property Write messages to the BDUT secured with the tool key to add new IAs to the IA table.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(3)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

Write entry to Security IA Table

(5)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read length of Security IA Table

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 36 01 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 01 ), Key: TK1

Read entry of Security IA Table

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(13)  T C IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1


-----

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 00 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
RetCode=00), Key: TK1

Write entry to Security IA Table

(15)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read length of Security IA Table

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 0B 01 CD 00 11 00 10 36 01 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 01 ), Key: TK1

Read entry of Security IA Table

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

Acceptance: Acceptance: the BDUT sends Property Response messages secured with the tool key, containing the
correct security IA table records. When writing new records, the BDUT correctly accepts frames secured
according to the elements of the newly written IA record.

###### 3.8.11.2 Unsecure PropertyValueWrite and Read
Required BDUT setting: Security Mode of the BDUT activated. Repeat the tests with Security Mode of the
BDUT deactivated.

Purpose: Check whether BDUT rejects the reading or writing to its Security IA Table unsecured.

Procedure: Send message to the BDUT to attempt to read and/or write its security IA table, however with
unsecured frames.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(3)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 36 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
RetCode=FC)

Write entry to Security IA Table

(5)  IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 )


-----

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 36 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FC)

Read length of Security IA Table

(7)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 36 01 00 00 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0000)

(8)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 36 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
Data=FC )

Read entry of Security IA Table

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 36 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=FC )

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(13)  IN BC 10.15.254 01.01.001 6B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 36 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
RetCode=FC)

Write entry to Security IA Table

(15)  IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 )

(16)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 36 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FC)

Read length of Security IA Table

(17)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 36 01 00 00 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0000)

(18)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 36 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
Data=FC )

Read entry of Security IA Table

(19)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(20)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 36 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=FC )

Acceptance: the BDUT rejects the reading or writing of its security IA table.


-----

###### 3.8.11.3 Secured PropertyValueRead only authenticated
Repeat the tests of 3.8.11.1 however sending the secure telegrams only with authentication.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(3)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
RetCode=FC), Key: TK1

Write entry to Security IA Table

(5)  T A IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read length of Security IA Table

(7)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000), Key: TK1

(8)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 36 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Read entry of Security IA Table

(9)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(10)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 36 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Security IA Table

(13)  T A IN 3C 60 10.15.254 01.01.001 0B 01 CE 00 11 00 10 36 01 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 00 00 00 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
RetCode=FC), Key: TK1

Write entry to Security IA Table


-----

(15)  T A IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

(16)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Read length of Security IA Table

(17)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000), Key: TK1

(18)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 36 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Read entry of Security IA Table

(19)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(20)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 36 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Acceptance: the BDUT ignores the writing to the Security IA Table via the bus with telegrams only
authenticated. Respond with length equal to 0 and no data.

###### 3.8.11.4 Check Property Extended description
Required BDUT setting: Security Mode of the BDUT not activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT rejects to read the description of the Security IA Table with plain telegrams and
when security mode is off and only accepts to read the description with A+C when security mode is on

Procedure: Send plain message to the BDUT to read the description of the Security IA Table.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 36 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0036, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 36 0? ?? 00 00 00 00 98 ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0036, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=98, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 36 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0036, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 36 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0036, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: the BDUT rejects the reading of the description of the
PID_SECURITY_INDIVIDUAL_ADDRESS_TABLE via the bus with plain telegrams with security mode off
and accepts it when security mode is on with A+C.


-----

###### 3.8.11.5 Secure PropertyValueRead after power down/master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the security IA table records - check that the content is identical after power up –
check that the content is identical after master reset confirmed restart. The behaviour of the rest of the master
reset commands is manufacturer specific.

Procedure: Send Property Read messages to the BDUT secured with the tool key to check the content of the
Security IA Table. Power down the BDUT and power it up again. Send Property Read messages to the BDUT
again secured with the tool key to check the content of the Security IA Table.

Send master reset confirmed restart.

A. Master Reset - Confirmed Restart

Write entry to Security IA Table

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Restart

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(7)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(8)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read entry of Security IA Table

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

B. Power down the BDUT and power it up again

Power down the BDUT and power it up again

Read entry of Security IA Table

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

Basic Restart

(13)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read entry of Security IA Table


-----

(16)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 36 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001), Key: TK1

(17)  T C OUT 3C 60 01.01.001 10.15.254 11 01 CD 00 11 00 10 36 01 00 01 11 F0 00 00 00 00 00 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=11 F0 00 00 00 00 00 00 ), Key: TK1

Acceptance: the content of the Security IA Table is identical after power up to the content before power down.
The content is identical after master reset confirmed restart.

###### 3.8.12 Test PID_SECURITY_FAILURES_LOG(55) (1FF/0CC)

 3.8.12.1 Secure FunctionProperty, behavior on Power Down – UnsecureFunctionPropertyRead/Write – Unsecure FunctionPropertyRead with A only – UnsecureFunctionCommand – FunctionCommand with A only and A+C
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG is saved at power down and restored at
power up.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number error.
Power Down BDUT and power up again. Check the counters values are same as before power off. Check that
last error message is the same as before power off.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

General procedure for clauses 3.8.12.1 to 3.8.12.7:

Clear Error Counts

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(5)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(6)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(7)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(8)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1


-----

(10)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:

Power down BDUT and power up again

Power down BDUT and power up again

Synchronize Sequence Number for the Tool Key

(13)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(14)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are same as before power off

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Check the last message is same as before power off

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Basic Restart

(19)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(20)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(21)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Synchronize Sequence Number for the Tool Key

(22)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(23)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are same as before power off

(24)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(25)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1


-----

Check the last message is same as before power off

(26)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(27)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Perform Unsecured FctPropStateRead

BDUT DOES NOT allow to read the values unsecured and returns an error

(28)  IN BC 10.15.254 01.01.001 69 01 D5 00 11 00 10 37 00 00 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 00 00 )

(29)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=)

Read of Last Message unsecured

(30)  IN BC 10.15.254 01.01.001 69 01 D5 00 11 00 10 37 00 01 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 01 00 )

(31)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=)

Perform FctPropStateRead with A only

BDUT DOES NOT allow to read the values with A only and returns an error

(32)  T A IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(33)  T A OUT 3C 60 01.01.001 10.15.254 07 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=), Key: TK1

Read of Last Message with A only

(34)  T A IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(35)  T A OUT 3C 60 01.01.001 10.15.254 07 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=), Key: TK1

Perform FctPropStateRead with A+C

BDUT DOES allow to read the values with A+C only

(36)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(37)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 05
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 05 ), Key: TK1

Read of Last Message with A + C

(38)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(39)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
04 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 04 ), Key: TK1

Try to Clear Unsecured - BDUT returns an error

(40)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 37 00 00 00 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 00 00 )

(41)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=)


-----

Try to Clear with A only - BDUT returns an error

(42)  T A IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(43)  T A OUT 3C 60 01.01.001 10.15.254 07 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=), Key: TK1

Clear with A + C BDUT does respond

(44)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(45)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Deactivate Security Mode

(46)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(47)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Clear Error Counts

(48)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(49)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(50)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(51)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(52)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(53)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(54)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(55)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(56)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(57)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:


-----

Power down BDUT and power up again

Power down BDUT and power up again

Synchronize Sequence Number for the Tool Key

(58)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(59)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are same as before power off

(60)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(61)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Check the last message is same as before power off

(62)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(63)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Basic Restart

(64)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(65)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(66)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Synchronize Sequence Number for the Tool Key

(67)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(68)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are same as before power off

(69)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(70)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Check the last message is same as before power off

(71)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(72)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Perform Unsecured FctPropStateRead

BDUT DOES allow to read the values unsecured

(73)  IN BC 10.15.254 01.01.001 69 01 D5 00 11 00 10 37 00 00 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 00 00 )


-----

(74)  OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 )

Read of Last Message unsecured

(75)  IN BC 10.15.254 01.01.001 69 01 D5 00 11 00 10 37 00 01 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 01 00 )

(76)  OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF FE
?? ?? ?? ?? ?? ?? ?? ?? ?? 02 )

Perform FctPropStateRead with A only

BDUT DOES allow to read the values with A only

(77)  T A IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(78)  T A OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read of Last Message with A only

(79)  T A IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(80)  T A OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Try to clear unsecured - BDUT returns an error

(81)  IN BC 10.15.254 01.01.001 69 01 D4 00 11 00 10 37 00 00 00 :FctPropertyExtCommand(ObjType=0011,
ObjInst=0001, PropId=0037, Data=00 00 00 )

(82)  OUT BC 01.01.001 10.15.254 67 01 D6 00 11 00 10 37 FC
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=FC, Data=)

Clear with A only

(83)  T A IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(84)  T A OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Acceptance: After provoking the different errors, the counters are different from 0. The error message is
identical to the last provoked error. After power up, the counters values are same as before power off. The last
error message is the same as before power off.

###### 3.8.12.2 Secure FunctionPropertyCommand, behavior on Confirmed Restart
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG remains unchanged after confirmed
restart.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number error.
Send confirmed restart to BDUT. Check the counters values remain identical before and after confirmed restart.
Check the same for the last error message.

Repeat general procedure of clause 3.8.12.1:

Clear Error Counts

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1


-----

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(5)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:

Perform confirmed restart (01h) Restart Type 1, Erasecode = 1

(11)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(12)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(13)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(14)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(15)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(16)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Check the counters values are same as before

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Check the last message is same as before


-----

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Acceptance: After provoking the different errors, the counters are different from 0. The error message is
identical to the last provoked error. After confirmed restart, the counters values are same as before. The last error
message is the same as before.

###### 3.8.12.3 Secure FunctionPropertyCommand, behavior on Factory Reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG has been cleared after factory reset.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number error.
Send Factory reset to BDUT. Check the counters values have been cleared after factory reset. Check the same
for the last error message.

Repeat general procedure of clause 3.8.12.1:

Clear Error Counts

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(5)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1


-----

Specific procedure for this clause:

Perform factory reset (02h) - Restart Type 1, Erasecode = 2

(11)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(12)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(13)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(14)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(15)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(16)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(17)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(18)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write ToolKey to the BDUT

(19)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(20)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for the Tool Key

(21)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(22)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are cleared

(23)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(24)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 00 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
00 00 00 00 00 ), Key: TK1

Check the last message is cleared

(25)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(26)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=01 ), Key: TK1

Acceptance: After provoking the different errors, the counters are different from 0. The error message is
identical to the last provoked error. After factory reset, the counters values have been cleared. The last error
message is also cleared.

###### 3.8.12.4 Secure FunctionPropertyCommand, behavior on Factory Reset without IA
Required BDUT setting: Security Mode of the BDUT activated - tool key set


-----

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG has been cleared after factory reset
without IA.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number error.
Send Factory reset without IA to BDUT. Check the counters values have been cleared after factory reset without
IA. Check the same for the last error message.

Repeat general procedure of clause 3.8.12.1:

Clear Error Counts

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(5)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:

Perform Factory Reset without IA - Restart Type 1, Erasecode = 7

(11)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(12)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(13)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(14)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(15)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

(16)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Synchronize Sequence Number for the Tool Key

(17)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(18)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are cleared

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 00 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
00 00 00 00 00 ), Key: TK1

Check the last message is cleared

(21)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(22)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=01 ), Key: TK1

Acceptance: After provoking the different errors, the counters are different from 0. The error message is
identical to the last provoked error. After factory reset without IA, the counters values have been cleared. The
last error message is also cleared.

###### 3.8.12.5 Secure FunctionPropertyCommand, behavior on Local Factory Reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG has been cleared after Local Factory
Reset.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number error.
Do Local Factory Reset of BDUT. Check the counters values have been cleared after Local Factory Reset.
Check the same for the last error message.

Repeat general procedure of clause 3.8.12.1:

Clear Error Counts

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(5)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)


-----

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:

Perform Local Factory Reset - Check the counters values are cleared

Please perform manual Factory Reset

Restore DoA

(11)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(12)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write ToolKey to the BDUT

(13)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for the Tool Key

(15)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(16)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Check the counters values are cleared

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 00 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
00 00 00 00 00 ), Key: TK1

Check the last message is cleared

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1


-----

(20)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=01 ), Key: TK1

Acceptance: After provoking the different errors, the counters are different from 0. The error message is
identical to the last provoked error. After Local Factory Reset, the counters values have been cleared. The last
error message is also cleared.

###### 3.8.12.6 Check prevention of Overflow in security counters
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_FAILURES_LOG does not wrap over to 0 when reaching
FFFFh for the individual security counters.

Procedure: Set the failure logs of the BDUT to the maximum value (can be manufacturer specific). Provoke the
different security errors. Read the counters and check if they have remained at the maximum value of FFFFh.

Set error counters to FFFFh (can be manufacturer specific) and check on Overflow

(1)  T C IN 3C 60 10.15.254 01.01.001 10 01 D4 00 11 00 10 37 00 FF FF FF FF FF FF FF FF FF
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 FF FF FF FF FF FF FF FF FF
), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 FF
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=FF ), Key: TK1

Check if error counters are properly set

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 FF FF FF FF FF FF FF FF
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 FF FF
FF FF FF FF FF FF ), Key: TK1

Repeat general procedure of clause 3.8.12.1:

Increment Cryptographic Error (wrong key)

(5)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(6)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(7)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(8)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Specific procedure for this clause:

Check if error counters are still at FFFFh

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 FF FF FF FF FF FF FF FF
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 FF FF
FF FF FF FF FF FF ), Key: TK1

Acceptance: After provoking the different errors, the counters remain at FFFFh.


-----

###### 3.8.12.7 Secure FunctionPropertyStateRead, negative cases
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check negative cases for A-FunctionPropertyState_Read.

Procedure: Clear the failure logs of the BDUT. Provoke the different security errors. Read the counters and
check if they are different from 0. Read last error message and compare to message from sequence number
Error. Perform a number of negative cases for A_FunctionPropertyState_Read. Read the counters and check if
they are different from 0. Read last error message and compare to message from sequence number Error.

Repeat general procedure of clause 3.8.12.1:

Clear Error Counts

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 37 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 ), Key: TK1

Increment Cryptographic Error (wrong key)

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D5 00 11 00 10 33 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 ), Key:
00000000000000000000000000000000

Increment Error against the Access and Roles (A instead of C)

(4)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 00
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0000), Key: TK1

(5)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 00 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0000,
Data=FC ), Key: TK1

Increment Seq Error Counters (provoke seq. error counter increase by sending seq. nr. = 0)

(6)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Specific procedure for this clause:

Negative Case Incorrect ServiceID for FctPropStateRead

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 05 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 05 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F2 05
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F2, Data=05 ), Key: TK1

Wrong Service Info for FctPropStateRead


-----

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 11
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 11 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=00 ), Key: TK1

FunctionPropStateRead with unsupported Index

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 08
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 08 ), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=01 ), Key: TK1

FunctionPropStateRead with incorrect Length

(17)  T C IN 3C 60 10.15.254 01.01.001 07 01 D5 00 11 00 10 37 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 ), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 37 F8 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=F8, Data=00 ), Key: TK1

Read All Counters AND Check the counters values are NOT 0

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(21)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(22)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Acceptance: The BDUT answers with the Return Codes as specified in the telegrams.

###### 3.8.12.8 Secure FunctionPropertyCommand, negative cases
Require BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check negative cases for A-FunctionPropertyCommand.

Procedure: Perform a number of negative cases for A_FunctionPropertyState_Read. Read the counters and check
if they are different from 0. Read last error message and compare to message from SCF Error.

Example of stimuli

Perform the test right after those of clause 3.8.12.7.

Specific procedure for this clause.

FunctionCommand with incorrect ServiceID

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  T C IN 3C 60 10.15.254 01.01.001 06 42 C7 06 37 00 05 00 :FctPropCmd(ObjIdx=06, PropId=37,
Data=00 05 00 ), Key: TK1

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  T C OUT 3C 60 01.01.001 10.15.254 05 42 C9 06 37 F2 05 :FctPropState_Rsp(ObjIdx=06, PropId=37,
RetCode=F2, Data=05 ), Key: TK1

(5)  IN B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect


-----

FctPropCommand with wrong Service Info

(7)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(8)  T C IN 3C 60 10.15.254 01.01.001 06 42 C7 06 37 00 00 11 :FctPropCmd(ObjIdx=06, PropId=37,
Data=00 00 11 ), Key: TK1

(9)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(10)  T C OUT 3C 60 01.01.001 10.15.254 05 42 C9 06 37 F8 00 :FctPropState_Rsp(ObjIdx=06, PropId=37,
RetCode=F8, Data=00 ), Key: TK1

(11)  IN B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(12)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

FctPropWrite with wrong length

(13)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(14)  T C IN 3C 60 10.15.254 01.01.001 04 42 C7 06 37 00 :FctPropCmd(ObjIdx=06, PropId=37, Data=00 ),
Key: TK1

(15)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(16)  T C OUT 3C 60 01.01.001 10.15.254 05 42 C9 06 37 FF 00 :FctPropState_Rsp(ObjIdx=06, PropId=37,
RetCode=FF, Data=00 ), Key: TK1

Error code F8 is also allowed. In that case, deactivate previous telegram and activate the following telegram.

(17)  T C OUT 3C 60 01.01.001 10.15.254 05 42 C9 06 37 F8 00 :FctPropState_Rsp(ObjIdx=06, PropId=37,
RetCode=F8, Data=00 ), Key: TK1

(18)  IN B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(19)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Read All Counters AND Check the counters values are NOT 0

(20)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 00 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 00 00 ), Key: TK1

(21)  T C OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 11 00 10 37 00 00 00 00 00 00 01 00 01 00 01
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=00 00 00 00 00
01 00 01 00 01 ), Key: TK1

Read last error message

Compare to Seq Error Counter message

(22)  T C IN 3C 60 10.15.254 01.01.001 09 01 D5 00 11 00 10 37 00 01 00
:FctPropertyExtStateRead(ObjType=0011, ObjInst=0001, PropId=0037, Data=00 01 00 ), Key: TK1

(23)  T C OUT 3C 60 01.01.001 10.15.254 15 01 D6 00 11 00 10 37 00 01 00 AF FE ?? ?? ?? ?? ?? ?? ?? ?? ??
02 :FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0037, RetCode=00, Data=01 00 AF
FE ?? ?? ?? ?? ?? ?? ?? ?? ?? 02 ), Key: TK1

Acceptance: The BDUT answers with the correct error codes as indicated in the above stimuli. Read the counters
and check if they are different from 0. Read last error message and compare to message from SCF Error.

###### 3.8.12.9 Check PropDescrRead
Required BDUT setting: Security Mode of the BDUT activated and deactivated - tool key set

Purpose: Check whether the BDUT delivers a PropDescrResponse, if the PropDescrRead was sent unsecured
and the security mode is off. Check whether the BDUT sends a negative PropDescrResponse, if sent unsecured
and property mode is on.

Procedure: Send unsecured Property Description Read to the PID_SECURITY_FAILURES_LOG and wait for
the Response.

Activate Security Mode


-----

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 37 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0037, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 37 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0037, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 37 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0037, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 37 0? ?? 00 00 00 00 BE 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0037, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=BE, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: The BDUT answers with the correct Property Description Response with correct type and count if
requested unsecure and with security mode off respectively with a negative respone with security mode on.

###### 3.8.13 Test PID_TOOL_KEY(56) (008/008)

 3.8.13.1 Secure PropertyValueWrite – A+C
Required BDUT setting: Security Mode of the BDUT activated or deactivated – BDUT reset to factory state (=
FDSK active)

Purpose: Check whether BDUT accepts the writing of the PID_TOOL_KEY with messages secured with the
FDSK when the PID_TOOL_KEY is empty and confirms the setting of security tool key with a message
authenticated and encrypted with the newly set security tool key.

Check whether the BDUT accepts the writing of a new security tool key and confirms the setting of the new
security tool key with a message authenticated and encrypted with the newly set security tool key.

Prepration - different from general preparation because of start with FDSK - presupposes Security Mode
deactivated

Write Domain Address via Serial Number and System Broadcast (activate for open media)

(1)  IN BC 10.15.254 00/0/000 ED 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

(2)  IN BC 10.15.254 00/0/000 E7 03 EC FE ED BA BE CA FE :DomAddrSnoRead(Sno=FEEDBABECAFE)

(3)  OUT BC 01.01.001 00/0/000 ED 03 ED FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Write Individual Address via Serial Number and Domain Broadcast (activate for open media)

(4)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 01 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=01000000)

(5)  IN BC 10.15.254 00/0/000 E7 03 DC FE ED BA BE CA FE :IndAddrSnoRead(Sno=FEEDBABECAFE)

(6)  OUT BC 01.01.001 00/0/000 EB 03 DD FE ED BA BE CA FE 00 00 00 00
:IndAddrSnoResponse(Sno=FEEDBABECAFE, DomainAddr=0000, Reserved=0000)

Factory Reset with IA


-----

(7)  IN BC 10.15.254 01.01.001 63 03 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00)

(8)  OUT BC 01.01.001 10.15.254 64 03 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??)

Write Domain Address via Serial Number and System Broadcast (activate for open media)

(9)  IN BC 10.15.254 00/0/000 ED 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

(10)  IN BC 10.15.254 00/0/000 E7 03 EC FE ED BA BE CA FE
:DomAddrSnoRead(Sno=FEEDBABECAFE)

(11)  OUT BC 15.15.255 00/0/000 ED 03 ED FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoResponse(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Write Individual Address via Serial Number and Domain Broadcast (activate for open media)

(12)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 01 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=01000000)

(13)  IN BC 10.15.254 00/0/000 E7 03 DC FE ED BA BE CA FE :IndAddrSnoRead(Sno=FEEDBABECAFE)

(14)  OUT BC 01.01.001 00/0/000 EB 03 DD FE ED BA BE CA FE 00 00 00 00
:IndAddrSnoResponse(Sno=FEEDBABECAFE, DomainAddr=0000, Reserved=0000)

Procedure:

Send message to the BDUT to set the security tool key with messages secured with the FDSK.

Send messages to the BDUT to set the security tool key to a new value with messages secured with the current
security tool key.

Send messages to the BDUT to check the acceptance of messages secured with the new security tool key.

Activate Security Mode

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(16)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Write with FDSK

(17)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 02 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 02 ), Key: FDSK

(18)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK2

Write with first different key the final tool key

(19)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK2

(20)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Perform local Factory Reset - the tool key is replaced by the FDSK

Please perform manual Factory Reset

Restore DoA

(21)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)


-----

Restore IA

(22)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(23)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(24)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Deactivate Security Mode

(25)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(26)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Write with FDSK

(27)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 02 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 02 ), Key: FDSK

(28)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK2

Write with first different key the final tool key

(29)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK2

(30)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Acceptance: the BDUT accepts writing with the FDSK a first security tool key respectively a new security tool
key and confirms this with a message secured with the newly set security tool key. The BDUT accepts only
messages secured with the newly set security tool key.

###### 3.8.13.2 Check ToolKey usage when Security Interface Object is unloaded
Required BDUT setting: Security Mode of the BDUT activated or deactivated - Load state of the Security
Interface Object set to unloaded

Purpose: Check whether BDUT accepts telegrams secured with the set security tool key, even if the load state of
the Security Interface Object is set to unloaded.

Procedure: Send messages to the BDUT secured with the tool key

Set Security to unloaded

(1)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 04 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=04 00 00 00 00 00 00 00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Activate Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1


-----

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write Tool Key value 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 02

(5)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 02 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 02 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK2

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK2

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Write Tool Key value

(9)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 02 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 02 ), Key: TK2

(10)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK2

Set Security to loaded

(11)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK2

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK2

Acceptance: the BDUT shall accept the messages encrypted with the security took key, even if the load state of
the Security Interface Object is set to unloaded.

###### 3.8.13.3 Secured PropertyValueWrite sent only authenticated
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects PropertyWrite telegrams secured with the set security tool key, however
only authenticated, not with confidentiality.

Procedure: Send PropertyWrite messages to the BDUT secured with the tool key, but only authenticated.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK2

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Try to write PID_TOOL_KEY secured with A only

(3)  T A IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK2

(4)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
RetCode=FC), Key: TK2


-----

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK2

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Try to write Tool Key secured with A only

(7)  T A IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK2

(8)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
RetCode=FC), Key: TK2

Acceptance: the BDUT shall respond with E_ACCESS_DENIED

###### 3.8.13.4 Unsecure PropertyValueWrite
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects the reading and writing of its PID_TOOL_KEY in an unsecured way.

Procedure: Send message to the BDUT to attempt to read and write its PID_TOOL_KEY, however with
unsecured frames.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK2

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Try to write Tool Key unsecured

(3)  IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 38 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
RetCode=FC)

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK2

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Try to write Tool Key unsecured

(7)  IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 38 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
RetCode=FC)

Acceptance: the BDUT shall respond with E_ACCESS_DENIED

###### 3.8.13.5 Secure Property(Ext)ValueRead 
Required BDUT setting: Security Mode of the BDUT activated or deactivated


-----

Purpose: Check whether BDUT rejects the reading of the PID_TOOL_KEY with plain messages and messages
secured with set security tool key in A and/or A+C.

Procedure: Send message to the BDUT to read the security tool key with plain messages and messages secured
A and A+C with the TK2.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK2

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2

Try to read Tool Key unsecured

(3)  IN BC 10.15.254 01.01.001 65 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38, Count=1,
Start=001)

(4)  OUT BC 01.01.001 10.15.254 65 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38, Count=0,
Start=001, Data=)

Try to read Tool Key secured with A only

(5)  T A IN 3C 60 10.15.254 01.01.001 05 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38, Count=1,
Start=001), Key: TK2

(6)  T A OUT 3C 60 01.01.001 10.15.254 05 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38,
Count=0, Start=001, Data=), Key: TK2

Try to read Tool Key secured with A+C

(7)  T C IN 3C 60 10.15.254 01.01.001 05 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38, Count=1,
Start=001), Key: TK2

(8)  T C OUT 3C 60 01.01.001 10.15.254 05 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38,
Count=0, Start=001, Data=), Key: TK2

Try to read Tool Key unsecured

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 38 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0038, ElemCount=01, Index=0001)

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC )

Try to read Tool Key secured with A only

(11)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 38 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001), Key: TK2

(12)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC ), Key: TK2

Try to read Tool Key secured with A+C

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 38 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001), Key: TK2

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC ), Key: TK2

Deactivate Security Mode

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK2

(16)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK2


-----

Try to read Tool Key unsecured

(17)  IN BC 10.15.254 01.01.001 65 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38, Count=1,
Start=001)

(18)  OUT BC 01.01.001 10.15.254 65 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38,
Count=0, Start=001, Data=)

Try to read Tool Key secured with A only

(19)  T A IN 3C 60 10.15.254 01.01.001 05 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38,
Count=1, Start=001), Key: TK2

(20)  T A OUT 3C 60 01.01.001 10.15.254 05 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38,
Count=0, Start=001, Data=), Key: TK2

Try to read Tool Key secured with A+C

(21)  T C IN 3C 60 10.15.254 01.01.001 05 03 D5 06 38 10 01 :PropertyValueRead(Obj=06, Prop=38,
Count=1, Start=001), Key: TK2

(22)  T C OUT 3C 60 01.01.001 10.15.254 05 03 D6 06 38 00 01 :PropertyValueResponse(Obj=06, Prop=38,
Count=0, Start=001, Data=), Key: TK2

Try to read Tool Key unsecured

(23)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 38 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0038, ElemCount=01, Index=0001)

(24)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC )

Try to read Tool Key secured with A only

(25)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 38 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001), Key: TK2

(26)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC ), Key: TK2

Try to read Tool Key secured with A+C

(27)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 38 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001), Key: TK2

(28)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 38 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=00, Index=0001,
Data=FC ), Key: TK2

Acceptance: the BDUT rejects the reading of security tool key.

###### 3.8.13.6 Secure PropertyValueRead after power down/master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose:

- check that the BDUT continues to accept the tool key set in the PID_TOOL_KEY after power down/power up

- check that the BDUT continues to accept the tool key set in the PID_TOOL_KEY after master reset confirmed
restart

- check that the BDUT continues to accept the tool key after master reset factory reset (without IA)

- check that the BDUT only accepts the FDSK after master reset factory reset (with IA) and local factory reset

Procedure: Power down and power up the BDUT. Send master reset confirmed restart, master reset factory reset
(with or without IA) and local factory reset.

Power down BDUT and power it up again: access with TK2 is possible


-----

Please power down the BDUT and power up again

Write Tool Key

(1)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK2

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Basic Restart

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Write Tool Key with TK1

(6)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK1

(7)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Confirmed Restart - the tool key is not replaced by the FDSK

(8)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(9)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(10)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(11)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(12)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(13)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Write Tool Key with TK1

(14)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK1

(15)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Master Reset - Factory reset (without IA) - the tool key is not replaced by the FDSK

(16)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(17)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(18)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(19)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(20)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(21)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Write Tool Key with TK1


-----

(22)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK1

(23)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Master Reset - Factory reset (with IA) - the tool key is replaced by the FDSK

(24)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(25)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(26)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(27)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(28)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(29)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(30)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(31)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(32)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(33)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Write Tool Key with FDSK

(34)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(35)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Perform local master reset - the tool key is replaced by the FDSK

Please perform manual Factory Reset

Restore DoA

(36)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(37)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(38)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK


-----

(39)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Write Tool Key with FDSK

(40)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(41)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Acceptance:

- the BDUT continues to accept the tool key set in the PID_TOOL_KEY after power down/power up

- the BDUT continues to accept the tool key set in the PID_TOOL_KEY after master reset confirmed restart

- the BDUT continues to accept the tool key after master reset factory reset (without IA)

- the BDUT only accepts the FDSK after master reset factory reset (with IA) and local factory reset

###### 3.8.13.7 Check Property Extended description
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects to read the description of the PID_TOOL_KEY with plain telegrams
when security mode is off and accepts to read the description with A+C when security mode is on.

Procedure: Send plain message to the BDUT to read the description of the PID_TOOL_KEY.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 38 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0038, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 38 0? ?? 00 00 00 00 A0 ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0038, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=A0, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 38 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0038, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 38 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0038, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: the BDUT accepts the reading of the description of the PID_TOOL_KEY via the bus with A+C
telegrams when security is on and rejects it with plain telegrams when security mode is off.

###### 3.8.13.8 Check usage of the FDSK
Required BDUT setting: Security Mode of the BDUT inactive - PID_TOOL_KEY empty - BDUT reset to
factory state (= FDSK active)


-----

Purpose: Check whether BDUT accepts telegrams secured with the FDSK, in the case when the
PID_TOOL_KEY is empty - check whether the BDUT rejects telegrams secured with the FDSK, in the case
when the PID_TOOL_KEY contains the security tool key.

Procedure: Send messages to the BDUT secured with the FDSK.

Master Reset - Factory reset (with IA) - the tool key is replaced by the FDSK

(1)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 63 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 64 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(7)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(8)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(9)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(10)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Write Tool Key value TK1 using FDSK

(11)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Write Tool Key value TK1 using TK1

(13)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Try to write a new tool key with the FDSK but a valid toolky is inside the BDUT

(15)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 33 33 33 33 33 33 33 33 33 33 33
33 33 33 33 33 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 ), Key: FDSK

With Tool Key check that no data is modified

(16)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: TK1


-----

(17)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Acceptance: the BDUT shall accept the messages encrypted with the FDSK when the PID_TOOL_KEY is
empty and reject them when the PID_TOOL_KEY contains the security tool key.

###### 3.8.14 Test PID_SECURITY_REPORT(57) (1FF/0CC) and PID_SECURITY_REPORT_CONTROL (58) (00C/00C)

 3.8.14.1 Secure PropertyValueRead and Write – A+C
Required BDUT setting: Security Mode of the BDUT activated. Repeat the tests with Security Mode of the
BDUT deactivated. Tool key set in the PID_TOOL_KEY.

Purpose: Check whether the BDUT allows to read and write the PID_SECURITY_REPORT_CONTROL with
telegrams secured with the tool key (A+C). Check whether the BDUT allows to read and write the
PID_SECURITY_REPORT with telegrams secured with the tool key (A+C). Check whether the BDUT
generates a security report via a Network Parameter InfoReport when a security failure is provoked, however
only with activated PID_SECURITY_REPORT_CONTROL.

Procedure: Send telegrams secured with the tool key to the BDUT to activate the
PID_SECURITY_REPORT_CONTROL. Read control A+C. Provoke Error. Check automated report. Overwrite
Report A+C. Read Report A+C. Deactivate Control A+C. Provoke renewed error. Check that BDUT does not
send automated report. Check Report A+C.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(3)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Provoke error - send a wrong sequence number

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

Check automated report

(8)  OUT B8 01.01.001 00/0/000 E6 03 DB 00 11 39 00 01
:NetworkParameterResponse/InfoReport(ObjType=0011, PID=39, TestData=00 01 )

Overwrite Security report with A+C

(9)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1


-----

(10)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read Security report with A+C

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

Deactivate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(13)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Provoke error - send a wrong sequence number

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

Check that no automated report is generated - Read Security report with A+C to check if security failure was
recorded

(16)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(17)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Repeat the tests with Security Mode of BDUT off: identical reaction

Deactivate Security Mode

(18)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(19)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate Security Reporting via PID 58 of security object

(20)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(21)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(22)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(23)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Provoke error - send a wrong sequence number

(24)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1


-----

Check automated report

(25)  OUT B8 01.01.001 00/0/000 E6 03 DB 00 11 39 00 01
:NetworkParameterResponse/InfoReport(ObjType=0011, PID=39, TestData=00 01 )

Overwrite Security report with A+C

(26)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(27)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Read Security report with A+C

(28)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(29)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

Deactivate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(30)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(31)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Provoke error - send a wrong sequence number

(32)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

Check that no automated report is generated - Read Security report with A+C to check if security failure was
recorded

(33)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(34)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Acceptance: the BDUT allows activating and reading security control A+C. BDUT sends an automated report
with control activated and not when control is deactivated. The BDUT allows overwriting and reading the
automated report A+C.

###### 3.8.14.2 Unsecure PropertyValueRead/write
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check that the BDUT allows the reading of the PID_SECURITY_REPORT if the security mode is in
the off state, but not in the on state. Check whether BDUT rejects the writing of the PID_SECURITY_REPORT
in an unsecured way. Check that the BDUT does not allow neither reading nor writing of the
PID_SECURITY_REPORT_CONTROL with unsecured frames.

Procedure: Send unsecure telegrams to the BDUT reading of the PID_SECURITY_REPORT. Send message to
the BDUT to attempt to write the PID_SECURITY_REPORT in an unsecured way. Send unsecure telegrams to
the BDUT reading and writing the PID_SECURITY_REPORT_CONTROL in an unsecured way.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1


-----

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Test of PID_SECURITY_REPORT_CONTROL (58)

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FC)

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3A 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003A, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC )

Test of PID_SECURITY_REPORT (57)

(7)  IN BC 10.15.254 01.01.001 6A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 39 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FC)

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 39 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0039, ElemCount=01, Index=0001)

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC )

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Test of PID_SECURITY_REPORT_CONTROL (58)

(13)  IN BC 10.15.254 01.01.001 6A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FC)

(15)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3A 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003A, ElemCount=01, Index=0001)

(16)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC )

Test of PID_SECURITY_REPORT (57)

(17)  IN BC 10.15.254 01.01.001 6A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 )


-----

(18)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 39 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FC)

(19)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 39 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0039, ElemCount=01, Index=0001)

(20)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? )

Acceptance: the BDUT accepts the reading of the PID_SECURITY_REPORT with unsecured telegrams only if
the security mode is in the off stateand rejects the writing of the PID_SECURITY_REPORT unsecured. The
BDUT rejects the reading and writing of the PID_SECURITY_REPORT_CONTROL unsecured.

###### 3.8.14.3 PropertyValueRead/write with A only
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check that the BDUT allows the reading of the PID_SECURITY_REPORT with A only, but only
when the security mode is off. Check whether BDUT rejects the writing of the PID_SECURITY_REPORT with
A only but only when the security mode is on. Check that the BDUT does not allow neither reading nor writing
of the PID_SECURITY_REPORT_CONTROL with A only.

Procedure: Send telegrams to the BDUT reading of the PID_SECURITY_REPORT secured with A only. Send
message to the BDUT to attempt to write the PID_SECURITY_REPORT with A only. Send telegrams to the
BDUT reading and writing the PID_SECURITY_REPORT_CONTROL with A only.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Test of PID_SECURITY_REPORT_CONTROL (58)

(3)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(4)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Test of PID_SECURITY_REPORT (57)

(7)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(8)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 39 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

(9)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(10)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC ), Key: TK1


-----

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Test of PID_SECURITY_REPORT_CONTROL (58)

(13)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

(15)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(16)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Test of PID_SECURITY_REPORT (57)

(17)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

(18)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 39 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(19)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(20)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=?? ), Key: TK1

Acceptance: the BDUT accepts the reading of the PID_SECURITY_REPORT with telegrams secured with A
only (but only when the security mode is off) and rejects the writing of the PID_SECURITY_REPORT secured
with A only (only when the security mode is on). The BDUT rejects the reading and writing of the
PID_SECURITY_REPORT_CONTROL with A only.

###### 3.8.14.4 Check Property description
Required BDUT setting: Security Mode of the BDUT deactivated

Purpose: Check whether BDUT:

- accepts to read the description of the PID_SECURITY_REPORT with plain telegrams when security mode is
off

- rejects to read the description of the PID_SECURITY_REPORT_CONTROL with plain telegrams when
security mode is off

- rejects to read the description of the PID_SECURITY_REPORT with plain telegrams when security mode is
on

- accepts to read the description of the PID_SECURITY_REPORT_CONTROL with A+C telegrams when
security mode is on

Procedure: Turn security mode off. Send plain message to the BDUT to read the description of the
PID_SECURITY_REPORT and the PID_SECURITY_REPORT_CONTROL. Switch security mode on. Send
plain telegrams to the BDUT to read the description of the PID_SECURITY_REPORT and send A+C to read
the description of the PID_SECURITY_REPORT_CONTROL.


-----

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropDescription of PID_SECURITY_REPORT (57)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 39 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0039, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 39 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0039, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

PropDescription of PID_SECURITY_REPORT_CONTROL (58)

(5)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 3A 00 00
:PropertyExtDescrRead(ObjType=0011, ObjInst=0001, PropId=003A, DescrType=0, Index=0000), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3A 0? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003A, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=??, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropDescription of PID_SECURITY_REPORT (57)

(9)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 39 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=0039, DescrType=0, Index=0000)

(10)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 39 0? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=0039, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=??, ElemMax=????, RdAcc=?, WrAcc=?)

PropDescription of PID_SECURITY_REPORT_CONTROL (58)

(11)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 3A 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=003A, DescrType=0, Index=0000)

(12)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3A 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003A, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: See purpose.

###### 3.8.14.5 Secure PropertyValueRead after power down/master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_SECURITY_REPORT is identical after confirmed restart/power down
and cleared after factory reset, factory reset without IA, Local Factory reset a. Check the
PID_SECURITY_REPORT_CONTROL remains active after confirmed restart/power down and is deactivated
after factory reset, factory reset without IA, local factory reset.

Procedure: Send Property Read messages to the BDUT to check the PID_SECURITY_REPORT. Power down
the BDUT and power it up again. Send Property Read messages to the BDUT to check the content of
PID_SECURITY REPORT.

Send Property Read messages to the BDUT secured with the tool key to check the status of
PID_SECURITY_REPORT_CONTROL. Power down the BDUT and power it up again. Send Property Read
messages to the BDUT secured with the tool key to check the status of PID_SECURITY REPORT_CONTROL.


-----

Send master reset confirmed restart, master reset factory reset (with or without IA) and local factory reset.

Master Reset, Power Down for PID_SECURITY_REPORT_CONTROL (58)

A. confirmed restart test

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(3)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Perform restart

(5)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(6)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(7)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(8)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(9)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(10)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

B. Power down test

Power down BDUT and power up again

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

C. Basic Restart

(15)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(16)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(17)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(18)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1


-----

(19)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

D. Master Reset - Factory Reset (without IA)

Factory Reset without IA

(20)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(21)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(22)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(23)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(24)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(25)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Synchronize Sequence Number for Tool Key

(26)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(27)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(28)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(29)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

E. Master Reset - Factory reset (with IA)

Factory Reset with IA

(30)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(31)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(32)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(33)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(34)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(35)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(36)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(37)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write Tool Key value TK1 using FDSK

(38)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK


-----

(39)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for Tool Key

(40)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(41)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(42)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(43)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

F. Master Reset - Local Factory Reset

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(44)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(45)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Perform manual Factory Reset

Please perform manual Factory Reset

Restore DoA

(46)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(47)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write Tool Key value TK1 using FDSK

(48)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(49)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for Tool Key

(50)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(51)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Status of the Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(52)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1


-----

(53)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3A 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

Master Reset, Power Down for PID_SECURITY_REPORT (57)

A. confirmed restart test

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(54)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(55)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Provoke error - send a wrong sequence number

(56)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
FDSK

(57)  OUT B8 01.01.001 00/0/000 E6 03 DB 00 11 39 00 01
:NetworkParameterResponse/InfoReport(ObjType=0011, PID=39, TestData=00 01 )

Read Security Report

(58)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(59)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Perform restart

(60)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(61)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(62)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(63)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(64)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(65)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Read Security Report

(66)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(67)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

B. Power down test

Power down BDUT and power up again

Read Security Report

(68)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(69)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1


-----

C. Basic Restart

(70)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(71)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(72)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

Read Security Report

(73)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(74)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

D. Master Reset - Factory reset (without IA)

Factory Reset without IA

(75)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(76)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(77)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(78)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(79)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(80)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Synchronize Sequence Number for Tool Key

(81)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(82)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Security Report

(83)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(84)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

E. Master Reset - Factory reset (with IA)

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(85)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

(86)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Provoke error - send a wrong sequence number

(87)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
FDSK

(88)  OUT B8 01.01.001 00/0/000 E6 03 DB 00 11 39 00 01
:NetworkParameterResponse/InfoReport(ObjType=0011, PID=39, TestData=00 01 )


-----

Read Security Report

(89)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(90)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Factory Reset with IA

(91)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(92)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(93)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(94)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(95)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(96)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(97)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(98)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write Tool Key value TK1 using FDSK

(99)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(100)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for Tool Key

(101)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(102)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Security Report

(103)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(104)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

F. Master Reset Local Factory Reset

Activate Security Reporting via PID_SECURITY_REPORT_CONTROL (58) of security object

(105)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1


-----

(106)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Provoke error - send a wrong sequence number

(107)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
FDSK

(108)  OUT B8 01.01.001 00/0/000 E6 03 DB 00 11 39 00 01
:NetworkParameterResponse/InfoReport(ObjType=0011, PID=39, TestData=00 01 )

Read Security Report

(109)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(110)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Perform manual Factory Reset

Please perform manual Factory Reset

Restore DoA

(111)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Restore IA

(112)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Write Tool Key value TK1 using FDSK

(113)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(114)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for Tool Key

(115)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(116)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Read Security Report

(117)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(118)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 39 01 00 01 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=00 ), Key: TK1

Acceptance: The content of the PID_ SECURITY_REPORT is identical after master reset confirmed
restart/power down and the content has been cleared or set to factory state after master reset factory reset (with
or without IA), local factory reset.

The status of the PID_ SECURITY_REPORT_CONTROL is identical after master reset confirmed restart/power
down and the content has been cleared or set to factory state after master reset factory reset (with or without IA),
local factory reset.


-----

###### 3.8.15 Test PID_SEQUENCE_NUMBER_SENDING(59) (00C/00C)

 3.8.15.1 Secure PropertyValueWrite and stimulate immediate usage of SeqNb. – Secure PropValueRead
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT immediately uses a new value of the PID_SEQUENCE_NUMBER_SENDING
after writing it via secure property access. Read the value Secure.

Procedure: Send message to the BDUT secured with the security tool key to write a new value of the
PID_SEQUENCE_NUMBER_SENDING as well as read it.

Synchronize Sequence Number for Tool Key

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Activate Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(5)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Check updated value of the Sequence number used in above telegram.

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 1F 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 01 ), Key: TK1

Check that the Sequence number is at least equal or higher than the Sequence number previously written + 1.

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(11)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Check updated value of the Sequence number used in above telegram.


-----

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 1F 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 01 ), Key: TK1

Check that the Sequence number is at least equal or higher than the Sequence number previously written + 1.

Acceptance: the BDUT immediately uses the new PID_SEQUENCE_NUMBER_SENDING, even in the
Property Response message following the writing of the PID_SEQUENCE_NUMBER_SENDING. The BDUT
reports the PID_SEQUENCE_NUMBER_SENDING when read with a secure PropValueRead.

###### 3.8.15.2 Unsecure PropertyValue Access
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT rejects the reading or writing of its Sequence Number sending in an unsecured
way.

Procedure: Send message to the BDUT to attempt to read and/or write its Sequence Number sending, however
with unsecured frames.

Synchronize Sequence Number for Tool Key

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Activate Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SEQUENCE_NUMBER_SENDING unsecured

(5)  IN BC 10.15.254 01.01.001 6F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
RetCode=FC)

Try to read PID_SEQUENCE_NUMBER_SENDING unsecured

(7)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3B 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(8)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
Data=FC )

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SEQUENCE_NUMBER_SENDING unsecured


-----

(11)  IN BC 10.15.254 01.01.001 6F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
RetCode=FC)

Try to read PID_SEQUENCE_NUMBER_SENDING unsecured

(13)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3B 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003B, ElemCount=01, Index=0001)

(14)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
Data=FC )

Acceptance: BDUT responds with E_ACCESS_DENIED in all cases

###### 3.8.15.3 Secure PropertyValueRead after power down check SeqNb. is unchanged
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether a power down/power up action does not have any influence on the value of the
PID_SEQUENCE_NUMBER_SENDING

Procedure: Power the BDUT down and up again. Send a message secured with the tool key to check the value of
the PID_SEQUENCE_NUMBER_SENDING.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(3)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 32
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 32 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Power cycle BDUT

Power down BDUT and power up again

Read PID_SEQUENCE_NUMBER_SENDING

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 1F 33
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 33 ), Key: TK1

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING


-----

(9)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 32
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 32 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Power down BDUT

Power down BDUT and power up again

Read PID_SEQUENCE_NUMBER_SENDING

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 1F 33
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 33 ), Key: TK1

Acceptance: after power up, the BDUT uses a PID_SEQUENCE_NUMBER_SENDING that is equal or higher
than the PID_SEQUENCE_NUMBER_SENDING at power down.

###### 3.8.15.4 Auth. Secured PropertyValueRead/Write
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT rejects reading and writing the sequence number sending secured with the set
security tool key, however only authenticated.

Procedure: Send read and write messages to the BDUT secured with the tool key, but only authenticated.

Synchronize Sequence Number for Tool Key

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

Activate Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Read PID_SEQUENCE_NUMBER_SENDING

(5)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(6)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(7)  T A IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 ), Key: TK1

(8)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Deactivate Security Mode


-----

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Read PID_SEQUENCE_NUMBER_SENDING

(11)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(12)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(13)  T A IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 1F 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 1F 00 ), Key: TK1

(14)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Acceptance: BDUT responds with E_ACCESS_DENIED in all cases

###### 3.8.15.5 Check Property description
Required BDUT setting: Security Mode of the BDUT deactivated and activated - tool key set in the
PID_TOOL_KEY

Purpose: Check whether BDUT rejects to read the description of the PID_SEQUENCE_NUMBER_SENDING
with plain telegrams when security mode is off and accepts reading it with A+C when security mode is on

Procedure: Send plain message to the BDUT to read the description of the
PID_SEQUENCE_NUMBER_SENDING when security mode is off and A+C when security mode is on.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 3B 00 00
:PropertyExtDescrRead(ObjType=0011, ObjInst=0001, PropId=003B, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3B 0? ?? 00 00 00 00 96 00 01 ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003B, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=96, ElemMax=0001, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 3B 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=003B, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: See purpose.


-----

###### 3.8.15.6 Overflow check
Required BDUT setting: Security Mode of the BDUT deactivated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT stops sending after PID_SEQUENCE_NUMBER_SENDING has reached its
maximum value.

Procedure: Write the PID_SEQUENCE_NUMBER_SENDING to a value equaling its maximum value minus 1.
Perform two read operations to the PID_SEQUENCE_NUMBER_SENDING and check whether the BDUT
does not reply to the second read operation as then the PID_SEQUENCE_NUMBER_SENDING would have
exceeded the maximum value.

Deactivate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(3)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 FF FF FF FF FF FE
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF FF FF FF FF FE ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

The BDUT immediately uses the new PID_SEQUENCE_NUMBER_SENDING, even in the Property Response
message following the writing of the PID_SEQUENCE_NUMBER_SENDING.

Read PID_SEQUENCE_NUMBER_SENDING

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FF FF FF FF FF FF
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF FF FF FF FF FF ), Key: TK1

Second PropValueRead is not responded as PID_SEQUENCE_NUMBER_SENDING overflow reached

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

Acceptance: The BDUT stops sending after PID_SEQUENCE_NUMBER_SENDING has reached its maximum
value (optionally maximum value minus 1).

###### 3.8.15.7 Master Reset tests
Required BDUT setting: Security Mode of the BDUT activated - tool key set in the PID_TOOL_KEY

Purpose: Check whether BDUT does not change the value of the sequence number sending when the value is
less than FF 00 00 00 00 00h when receiving Master Reset commands and it does when the value is equal or
higher (except for Confirmed Restart and Factory Reset without IA commands).

Procedure: Initialize the sequence number sending property with values less than FF 00 00 00 00 00h or
equalling this value. Perform a basic reset, power cycle, master reset of the BDUT with the erase codes 1, 2 and
7 as well as a local factory reset and read out the PID_SEQUENCE_NUMBER_SENDING.

Value below FF0000000000h

Secure PropertyValueWrite with SeqNb with value less than FF0000000000h

(1)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FE FF FF FF FF FC
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FC ), Key: TK1


-----

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Power down test: no change

Power down BDUT and power up again

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FD
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FD ), Key: TK1

Basic Restart: no change

(9)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(10)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(11)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(12)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

(13)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FE
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FE ), Key: TK1

Initialize SeqNb with value less than FF0000000000h

(15)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(16)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FE FF FF FF FF FD
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FD ), Key: TK1

(17)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(18)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(19)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(20)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset - Confirmed restart: no change

(21)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(22)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(23)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(24)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(25)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(26)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

(27)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1


-----

(28)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FF
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FF ), Key: TK1

Secure PropertyValueWrite with SeqNb with value less than FF0000000000h

(29)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(30)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FE FF FF FF FF FD
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FD ), Key: TK1

(31)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(32)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(33)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(34)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset - Factory Reset without IA: no change

(35)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(36)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: TK1

(37)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(38)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1

(39)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(40)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

(41)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key: TK1

(42)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FF
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FF ), Key: TK1

Secure PropertyValueWrite with SeqNb with value less than FF0000000000h

(43)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(44)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FE FF FF FF FF FD
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FD ), Key: TK1

(45)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(46)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

(47)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(48)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset - factory reset with IA: no change

(49)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(50)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: TK1

(51)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(52)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: TK1


-----

(53)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(54)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(55)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Synchronize Sequence Number for Tool Key

(56)  T req IN 3C 60 10.15.254 15.15.255 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(57)  T res OUT 3C 60 15.15.255 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

(58)  T C IN 30 60 10.15.254 15.15.255 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(59)  T C OUT 30 60 15.15.255 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FF
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FF ), Key: FDSK

Secure PropertyValueWrite with SeqNb with value less than FF0000000000h

(60)  IN B0 10.15.254 15.15.255 60 80 :T-Connect(Addr=15.15.255)

(61)  T C IN 30 60 10.15.254 15.15.255 0F 41 CE 00 11 00 10 3B 01 00 01 FE FF FF FF FF FD
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FD ), Key: FDSK

(62)  OUT B0 15.15.255 10.15.254 60 C2 :T-Ack(Seq=0)

(63)  T C OUT 30 60 15.15.255 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

(64)  IN B0 10.15.254 15.15.255 60 C2 :T-Ack(Seq=0)

(65)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Local Factory Reset: no change

Please perform manual Factory reset

Restore DoA

(66)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Synchronize Sequence Number for Tool Key

(67)  T req IN 3C 60 10.15.254 15.15.255 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(68)  T res OUT 3C 60 15.15.255 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

(69)  T C IN 30 60 10.15.254 15.15.255 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(70)  T C OUT 30 60 15.15.255 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FE FF FF FF FF FE
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FE FF FF FF FF FE ), Key: FDSK

Restore IA


-----

(71)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Secure PropertyValueWrite with SeqNb with value equal or higher than FF0000000000h

(72)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(73)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FF 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 00 ), Key: FDSK

(74)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(75)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

(76)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(77)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Power down test: no change

Power down BDUT and power up again

(78)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(79)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FF 00 00 00 00 01
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 01 ), Key: FDSK

Basic Restart: no change

(80)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(81)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: FDSK

(82)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(83)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(84)  T C OUT 3C 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FF 00 00 00 00 02
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 02 ), Key: FDSK

Master Reset - Confirmed restart: no change

(85)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(86)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: FDSK

(87)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(88)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=00??), Key: FDSK

(89)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(90)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

(91)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(92)  T C OUT 30 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FF 00 00 00 00 04
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 04 ), Key: FDSK


-----

Secure PropertyValueWrite with SeqNb with value FF0000000000h

(93)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(94)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FF 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 00 ), Key: FDSK

(95)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(96)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

(97)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(98)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset - Factory Reset without IA: no change

(99)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(100)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 07 00 :Restart(Response=00, Type=01, EraseCode=07,
ChannelNumber=00), Key: FDSK

(101)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(102)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01,
ErrorCode=00, ProcessTime=00??), Key: FDSK

(103)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(104)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

(105)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(106)  T C OUT 30 60 01.01.001 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 FF 00 00 00 00 02
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 02 ), Key: FDSK

Secure PropertyValueWrite with SeqNb with value FF0000000000h

(107)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(108)  T C IN 30 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 FF 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 00 ), Key: FDSK

(109)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(110)  T C OUT 30 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

(111)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(112)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Master Reset - factory reset with IA: reinit - check that BDUT never reinitialises with value 0

(113)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(114)  T C IN 3C 60 10.15.254 01.01.001 03 43 81 02 00 :Restart(Response=00, Type=01, EraseCode=02,
ChannelNumber=00), Key: FDSK

(115)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(116)  T C OUT 3C 60 01.01.001 10.15.254 04 43 A1 00 00 ?? :Restart(Response=01, Type=01,
ErrorCode=00, ProcessTime=00??), Key: FDSK

(117)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

(118)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Restore DoA

(119)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Synchronize Sequence Number for Tool Key

(120)  T req IN 3C 60 10.15.254 15.15.255 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(121)  T res OUT 3C 60 15.15.255 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

(122)  T C IN 30 60 10.15.254 15.15.255 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(123)  T C OUT 30 60 15.15.255 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 ?? ?? ), Key: FDSK

Secure PropertyValueWrite with SeqNb with value FF0000000000h

(124)  IN B0 10.15.254 15.15.255 60 80 :T-Connect(Addr=15.15.255)

(125)  T C IN 30 60 10.15.254 15.15.255 0F 41 CE 00 11 00 10 3B 01 00 01 FF 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=FF 00 00 00 00 00 ), Key: FDSK

(126)  OUT B0 15.15.255 10.15.254 60 C2 :T-Ack(Seq=0)

(127)  T C OUT 30 60 15.15.255 10.15.254 0A 41 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

(128)  IN B0 10.15.254 15.15.255 60 C2 :T-Ack(Seq=0)

(129)  IN B0 10.15.254 15.15.255 60 81 :T-Disconnect

Local Factory Reset: reinit

Please perform manual Factory reset

Restore DoA

(130)  IN 2C E0 10.15.254 00/0/000 0D 03 EE FE ED BA BE CA FE 01 02 03 04 05 06
:DomAddrSnoWrite(Sno=FEEDBABECAFE, DomAddr=01 02 03 04 05 06)

Synchronize Sequence Number for Tool Key

(131)  T req IN 3C 60 10.15.254 15.15.255 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(132)  T res OUT 3C 60 15.15.255 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

(133)  T C IN 30 60 10.15.254 15.15.255 09 01 CC 00 11 00 10 3B 01 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001), Key:
FDSK

(134)  T C OUT 30 60 15.15.255 10.15.254 0F 01 CD 00 11 00 10 3B 01 00 01 00 00 00 00 ?? ??
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 ?? ?? ), Key: FDSK

Acceptance: See purpose.

Restore IA


-----

(135)  IN BC 10.15.254 00/0/000 ED 03 DE FE ED BA BE CA FE 11 01 00 00 00 00
:IndAddrSnoWrite(Sno=FEEDBABECAFE, IndAddr=1101, Reserved=00000000)

Synchronize Sequence Number for Tool Key

(136)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(137)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Tool key

(138)  T C IN 3C 60 10.15.254 01.01.001 19 01 CE 00 11 00 10 38 01 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01,
Index=0001, Data=00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 ), Key: FDSK

(139)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 38 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0038, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Write PID_SEQUENCE_NUMBER_SENDING

(140)  T C IN 3C 60 10.15.254 01.01.001 0F 01 CE 00 11 00 10 3B 01 00 01 00 00 00 00 00 01
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 00 01 ), Key: TK1

(141)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3B 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for Tool Key

(142)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=0, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
TK1

(143)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: TK1

###### 3.8.15.8 PropertyValueWrite attempt to set to 0
Required BDUT Setting: Security Mode of the BDUT activated - tool key set in the PID_TOOL_KEY.

Purpose: Check whether BDUT refuses to write the value 0 to the PID_SEQUENCE_NUMBER_SENDING.

Procedure: Send PropValueWrite attempting to set the PID_SEQUENCE_NUMBER_SENDING to 0.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Attempt to perform Secure PropertyValueWrite with value 0

(3)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(4)  T C IN 3C 60 10.15.254 01.01.001 0F 41 CE 00 11 00 10 3B 01 00 01 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 ), Key: TK1

(5)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 41 CF 00 11 00 10 3B 00 00 01 F?
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003B, ElemCount=00, Index=0001,
RetCode=F?), Key: TK1

(7)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)


-----

(8)  IN B0 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: The BDUT sends a negative PropValueResponse.

Deactivate Security Mode

(9)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

###### 3.8.16 Test PID_ZONES_KEYS_TABLE(60) [Optional] To be completed.

 3.8.17 Test PID_GO_SECURITY_FLAGS(61) (00C/00C)

 3.8.17.1 Secure PropertyValueWrite and Read of GO Security Flags
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

The following object settings is assumed underneath:

- G0 Number = 0, Security Key = GK1, Group Address = 1/1/1

- G0 Number = 1, Security Key = GK3, Group Address = 3/3/3

- G0 Number = 2, Security Key = ---, Group Address = 5/5/5

Purpose: Check whether BDUT properly accepts new values of the GO Security Flags related to the
corresponding Group Objects - Check whether BDUT accepts writing values 0..3d of the GO security flags and
ignoring any setting of the reserved bits. Check that the BDUT reacts to telegrams properly secured with the
relevant keys (if applicable) according to the setting of the relevant GO security flags.

Procedure: Send messages secured with the tool key to the BDUT to write new values of the GO Security Flags
related to the corresponding Group Objects. Send a message attempting to write values including the reserved
bits set to 1 of the GO security flags - Send messages encrypted with the relevant keys A and/or C (if applicable)
to check the reaction of the BDUT according to the relevant GO security flags settings.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Set load state to 'start loading'

(3)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 01 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=01 00 00 00 00 00 00 00 00 00 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set load state to 'load completed'

(5)  T C IN 3C 60 10.15.254 01.01.001 13 01 CE 00 11 00 10 05 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Reset GO security flags with PropValueWrite secure


-----

(7)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 ), Key: TK1

(8)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

Read group values unsecure

(9)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(10)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(11)  IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001)

(12)  OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00)

(13)  IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003)

(14)  OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00)

Modify GO security flags with PropValueWrite secure

(15)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 01 03 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=01 03 00 ), Key: TK1

(16)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

PropValueRead secure

(17)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(18)  T C OUT 3C 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 01 03 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=01 03 00 ), Key: TK1

Read group values with plain/A/A+C

(19)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(20)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(21)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

(22)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2

(23)  C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(24)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Modify GO security flags even with values with reserved bits set to 1

(25)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

(26)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

Read group values with plain/A/A+C

(27)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(28)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(29)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

(30)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2


-----

(31)  C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(32)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Deactivate Security Mode

(33)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(34)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Reset GO security flags with PropValueWrite secure

(35)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 ), Key: TK1

(36)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

Read group values unsecure

(37)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(38)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(39)  IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001)

(40)  OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00)

(41)  IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003)

(42)  OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00)

Modify GO security flags with PropValueWrite secure

(43)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 01 03 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=01 03 00 ), Key: TK1

(44)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

PropValueRead secure

(45)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(46)  T C OUT 3C 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 01 03 00
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=01 03 00 ), Key: TK1

Read group values with plain/A/A+C

(47)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(48)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(49)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

(50)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2

(51)  C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(52)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Modify GO security flags even with values with reserved bits set to 1

(53)  T C IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1


-----

(54)  T C OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 03 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
RetCode=00), Key: TK1

Read group values with plain/A/A+C

(55)  IN BC 10.15.254 05/5/005 E1 00 00 :GroupValueRead(Grp=05/5/005)

(56)  OUT BC 01.01.001 05/5/005 E1 00 40 :GroupValueResponse(Grp=05/5/005, 00)

(57)  A IN BC 10.15.254 01/1/001 E1 00 00 :GroupValueRead(Grp=01/1/001), Key: GK1

(58)  A OUT BC 01.01.001 02/2/002 E1 00 40 :GroupValueResponse(Grp=02/2/002, 00), Key: GK2

(59)  C IN BC 10.15.254 03/3/003 E1 00 00 :GroupValueRead(Grp=03/3/003), Key: GK3

(60)  C OUT BC 01.01.001 04/4/004 E1 00 40 :GroupValueResponse(Grp=04/4/004, 00), Key: GK4

Acceptance: The BDUT accepts the writing of its GO Security Flags, also when the b2 to b7 bits are set The
BDUT reacts according to its GO security flags settings depending on the received telegrams and depending on
the keys used for A and C (if applicable).

###### 3.8.17.2 Unsecure PropertyValueWrite/Read 
Required BDUT setting: Security Mode of the BDUT activated or deactivated.

Purpose: Check whether BDUT rejects the reading and writing of its GO Security Flags in an unsecured way.

Procedure: Send message to the BDUT to attempt to read and write its GO Security Flags, however with
unsecured frames.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropValueRead

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3D 03 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003D, ElemCount=03, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
Data=FC )

PropValueWrite

(5)  IN BC 10.15.254 01.01.001 6C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
RetCode=FC)

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropValueRead

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 3D 03 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=003D, ElemCount=03, Index=0001)


-----

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
Data=FC )

PropValueWrite

(11)  IN BC 10.15.254 01.01.001 6C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
RetCode=FC)

Acceptance: the BDUT sends a response with length=0 and no data.

Check if GO security flags are unchanged

(13)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(14)  T C OUT 30 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

###### 3.8.17.3 Auth. Secured PropertyValueRead/Write
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Check whether BDUT rejects reading and writing the PID_GO_SECURITY_FLAGS secured with the
set security tool key, however only authenticated.

Procedure: Send read/write messages to the BDUT secured with the tool key, but only authenticated.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropValueRead A only

(3)  T A IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(4)  T A OUT 30 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

PropValueWrite A only

(5)  T A IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 ), Key: TK1

(6)  T A OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Deactivate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

PropValueRead A only


-----

(9)  T A IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(10)  T A OUT 30 60 01.01.001 10.15.254 0A 01 CD 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

PropValueWrite A only

(11)  T A IN 30 60 10.15.254 01.01.001 0C 01 CE 00 11 00 10 3D 03 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=00 00 00 ), Key: TK1

(12)  T A OUT 30 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3D 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=00, Index=0001,
RetCode=FC), Key: TK1

Acceptance: the BDUT sends a response with length=0 and no data

Check if GO security flags are unchanged

(13)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(14)  T C OUT 30 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

###### 3.8.17.4 Check Property description
Required BDUT setting: Security Mode of the BDUT activated and deactivated- tool key set in the
PID_TOOL_KEY

Purpose: Check the content of the PID_GO_SECURITY_FLAGS is identical after confirmed restart resp. power
down. The behaviour of other master reset commands are manufacturer specific.

Procedure: Send Property Read messages to the BDUT to check the PID_GO_SECURITY_FLAGS. Send
confirmed restart. Power down the BDUT and power it up again. Send Property Read messages to the BDUT to
check the content of PID_GO_SECURITY_FLAGS.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(3)  T C IN 3C 60 10.15.254 01.01.001 08 01 D2 00 11 00 10 3D 00 00
:PropertyExtDescrRead(ObjType=0011, ObjInst=0001, PropId=003D, DescrType=0, Index=0000), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3D 0? ?? 00 00 00 00 91 ?? ?? ??
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003D, DescrType=0, Index=0???,
DptMain=0000, DptSub=0000, Wr/PDT=91, ElemMax=????, RdAcc=?, WrAcc=?), Key: TK1

Deactivate Security Mode

(5)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(6)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

(7)  IN BC 10.15.254 01.01.001 68 01 D2 00 11 00 10 3D 00 00 :PropertyExtDescrRead(ObjType=0011,
ObjInst=0001, PropId=003D, DescrType=0, Index=0000)

(8)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 11 00 10 3D 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0011, ObjInst=0001, PropId=003D, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)


-----

Acceptance: The BDUT rejects the reading of the description of PID_GO_SECURITY_FLAGS with plain
telegrams when security mode is off and accepts the reading with A+C when security mode is on.

###### 3.8.17.5 Secure PropertyValueRead after power down/master reset
Required BDUT setting: Security Mode of the BDUT activated - tool key set

Purpose: Check the content of the PID_GO_SECURITY_FLAGS is identical after confirmed restart resp. power
down and cleared after factory reset, factory reset without IA and Local Factory reset.

Procedure: Send Property Read messages to the BDUT to check the PID_GO_SECURITY_FLAGS. Send
confirmed restart, factory reset, factory reset without IA secured with the tool key. Power down the BDUT and
power it up again. Perform Local Factory Reset. Send Property Read messages to the BDUT to check the content
of PID_GO_SECURITY_FLAGS.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

A. Master Reset - Confirmed Restart

(3)  T C IN 3C 60 10.15.254 01.01.001 03 03 81 01 00 :Restart(Response=00, Type=01, EraseCode=01,
ChannelNumber=00), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 04 03 A1 00 00 00 :Restart(Response=01, Type=01, ErrorCode=00,
ProcessTime=0000), Key: TK1

(5)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(6)  T C OUT 30 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

B. Power down the BDUT and power up again

Power down BDUT and power up again

(7)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(8)  T C OUT 30 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

C. Basic Restart

(9)  IN B0 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(10)  T C IN BC 10.15.254 01.01.001 61 43 80 :Restart(Response=00, Type=00), Key: TK1

(11)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(12)  T C IN 30 60 10.15.254 01.01.001 09 01 CC 00 11 00 10 3D 03 00 01
:PropertyExtValueRead(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001), Key: TK1

(13)  T C OUT 30 60 01.01.001 10.15.254 0C 01 CD 00 11 00 10 3D 03 00 01 FD FF FC
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=003D, ElemCount=03, Index=0001,
Data=FD FF FC ), Key: TK1

Acceptance: The content of the PID_GO_SECURITY_FLAGS is identical after confirmed restart resp. power
down.

Cleanup:

Deactivate Security Mode


-----

(14)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(15)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

###### 3.8.18 Test PID_SUBNET_ADDR and PID_DEVICE_ADDRESS (3FF/00C)[11]

 3.8.18.1 Secured S-A_Data, A only, toolkey
Required BDUT setting: Security Mode of the BDUT activated or deactivated - tool key set

Purpose: Send message to BDUT to write and read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with
plain telegrams or secured with the tool key (A+C, and A only).

Procedure:

- Check whether BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the
tool key with A+C or with A only

- Check whether BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the
tool key with A+C if security mode is activated

- Check whether BDUT rejects to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the
tool key with A only if security mode is activated

- Check whether BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the
tool key with A+C or with A only if Security Mode is deactivated

Preparation

Set Security IA table IA1 = 1.0.65

(1)  T C IN 3C 60 10.15.254 01.01.001 11 01 CE 00 11 00 10 36 01 00 01 10 41 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=10 41 00 00 00 00 00 00 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Set P2P Key Table: P2PK1 = 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22

(3)  T C IN 3C 60 10.15.254 01.01.001 1D 01 CE 00 11 00 10 34 01 00 01 00 01 22 22 22 22 22 22 22 22 22
22 22 22 22 22 22 22 00 01 :PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0034,
ElemCount=01, Index=0001, Data=00 01 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 00 01 ), Key: TK1

(4)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 34 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
RetCode=00), Key: TK1

Synchronize Sequence Number for P2P Key

(5)  req IN 3C 60 01.00.065 01.01.001 18 03 F1 12 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00
00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
P2PK1

(6)  res OUT 3C 60 01.01.001 01.00.065 18 03 F1 13 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=table), Key: P2PK1

Activate Security Mode

(7)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(8)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

11 Tests only applicable for some system profiles. See Volume 6


-----

Try to write PID_SUBNET_ADDR with A+C

(9)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: TK1

(10)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_SUBNET_ADDR with A+C

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 ), Key: TK1

Try to write PID_DEVICE_ADDR with A+C

(13)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: TK1

(14)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_DEVICE_ADDR with A+C

(15)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(16)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Try to write PID_SUBNET_ADDR with A only

(17)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: TK1

(18)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Try to read PID_SUBNET_ADDR with A only

(19)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(20)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Try to write PID_DEVICE_ADDR with A only

(21)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: TK1

(22)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Try to read PID_DEVICE_ADDR with A only

(23)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1


-----

(24)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC ), Key: TK1

Deactivate Security Mode

(25)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(26)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SUBNET_ADDR with A+C

(27)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: TK1

(28)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_SUBNET_ADDR with A+C

(29)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(30)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 ), Key: TK1

Try to write PID_DEVICE_ADDR with A+C

(31)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: TK1

(32)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_DEVICE_ADDR with A+C

(33)  T C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(34)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Try to write PID_SUBNET_ADDR with A only

(35)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: TK1

(36)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_SUBNET_ADDR with A only

(37)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key: TK1

(38)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 ), Key: TK1

Try to write PID_DEVICE_ADDR with A only


-----

(39)  T A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: TK1

(40)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: TK1

Read PID_DEVICE_ADDR with A only

(41)  T A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key: TK1

(42)  T A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: TK1

Acceptance:

- The BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the tool key
with A+C or with A only

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the tool key
with A+C if security mode is activated

- The BDUT rejects to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the tool key
with A only if security mode is activated

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with the tool key
with A+C or with A only if Security Mode is deactivated

###### 3.8.18.2 Secured S-A_Data, P2P Key
Required BDUT setting: Security Mode of the BDUT activated or deactivated – P2P key set for IA

Purpose: Send message to the BDUT to attempt to write and read PID_SUBNET_ADDR and
PID_DEVICE_ADDRESS (A+C, or A only) with P2P key.

Procedure:

- Check whether BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P
key with A+C or with A only

- Check whether BDUT rejects to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P
key with A+C or with A only if security mode is activated

- Check whether BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P
key with A+C or with A only if Security Mode is deactivated

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SUBNET_ADDR with A+C

(3)  C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: P2PK1

(4)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_SUBNET_ADDR with A+C


-----

(5)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key:
P2PK1

(6)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK1

Try to write PID_DEVICE_ADDR with A+C

(7)  C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: P2PK1

(8)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_DEVICE_ADDR with A+C

(9)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
P2PK1

(10)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK1

Try to write PID_SUBNET_ADDR with A only

(11)  A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: P2PK1

(12)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Try to read PID_SUBNET_ADDR with A only

(13)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key:
P2PK1

(14)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK1

Try to write PID_DEVICE_ADDR with A only

(15)  A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: P2PK1

(16)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Try to read PID_DEVICE_ADDR with A only

(17)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
P2PK1

(18)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC ), Key: P2PK1

Deactivate Security Mode


-----

(19)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(20)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SUBNET_ADDR with A+C

(21)  C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: P2PK1

(22)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_SUBNET_ADDR with A+C

(23)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key:
P2PK1

(24)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 ), Key: P2PK1

Try to write PID_DEVICE_ADDR with A+C

(25)  C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: P2PK1

(26)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_DEVICE_ADDR with A+C

(27)  C IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
P2PK1

(28)  C OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: P2PK1

Try to write PID_SUBNET_ADDR with A only

(29)  A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 ), Key: P2PK1

(30)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_SUBNET_ADDR with A only

(31)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 39 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001), Key:
P2PK1

(32)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 ), Key: P2PK1

Try to write PID_DEVICE_ADDR with A only


-----

(33)  A IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A ), Key: P2PK1

(34)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB), Key: P2PK1

Read PID_DEVICE_ADDR with A only

(35)  A IN 3C 60 10.15.254 01.01.001 09 01 CC 00 00 00 10 3A 01 00 01
:PropertyExtValueRead(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001), Key:
P2PK1

(36)  A OUT 3C 60 01.01.001 10.15.254 0A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 ), Key: P2PK1

Acceptance:

- The BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P key with
A+C or with A only

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P key with
A+C if security mode is activated

- The BDUT rejects to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P key with A
only if security mode is activated

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS secured with P2P key with
A+C or with A only if Security Mode is deactivated

###### 3.8.18.3 Write and read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS unsecured
Required BDUT setting: Security Mode of the BDUT activated or deactivated

Purpose: Send message to the BDUT to write and read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS
unsecured.

Procedure:

- Check whether BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain
telegrams if security mode is activated

- Check whether BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain
telegrams if Security Mode is activated

- Check whether BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain
telegrams if security mode is deactivated

- Check whether BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain
telegrams if Security Mode is deactivated

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SUBNET_ADDR unsecured

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB)


-----

Read PID_SUBNET_ADDR unsecured

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 39 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0039, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 39 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
Data=FC )

Try to write PID_DEVICE_ADDR unsecured

(7)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB)

Read PID_DEVICE_ADDR unsecured

(9)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 3A 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=003A, ElemCount=01, Index=0001)

(10)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 3A 00 00 01 FC
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
Data=FC )

Deactivate Security Mode

(11)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: TK1

(12)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: TK1

Try to write PID_SUBNET_ADDR unsecured

(13)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 39 01 00 01 72
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=72 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 39 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=00, Index=0001,
RetCode=FB)

Read PID_SUBNET_ADDR unsecured

(15)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 39 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0039, ElemCount=01, Index=0001)

(16)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 39 01 00 01 11
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0039, ElemCount=01, Index=0001,
Data=11 )

Try to write PID_DEVICE_ADDR unsecured

(17)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 3A 01 00 01 8A
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=8A )

(18)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 3A 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=00, Index=0001,
RetCode=FB)

Read PID_DEVICE_ADDR unsecured

(19)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 3A 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=003A, ElemCount=01, Index=0001)


-----

(20)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 3A 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=01 )

Acceptance:

- The BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain telegrams if
security mode is activated

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain telegrams if
Security Mode is activated

- The BDUT rejects to write PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain telegrams if
security mode is deactivated

- The BDUT accepts to read PID_SUBNET_ADDR and PID_DEVICE_ADDRESS with plain telegrams if
Security Mode is deactivated

Cleanup:

Deactivate Security Mode

(21)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(22)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

###### 3.8.19 Memory Access with Tool Key Memory access might depend on the security mode. This dependency shall be tested. 

 The memory model is device profile dependent. Unfortunately the Memory Layout is not completely specified in the specification and additionally varies manufacturer dependent.

 3.8.19.1 Device Model 0x091A (IP-Router)
3.8.19.1.1 Parameter Memory

The Parameter Memory of the Device Model 0x091A is related to the BCU1 memory Model. For this Device
Model relevant addresses are:

- Address: 0x104, Name: Manufacture, Description: 1 Byte Manufacturer Data

- Address: 0x105-0x106, Name: Device Type

- Address: 0x107, Name Version

- Address: 0x117-0x118, Name: IA, Description: Individual Address of the Host device

- Address: 0x11B, Name: LK_def_2

- Address: 0x11C, Name: LK_Grp_Conf

Reading and writing of these addresses is related only to legacy tool usage and legacy data base entries.

For this, reading and writing must only be ensured if Security Mode is off.

If the manufacturer supports downward compatible configuration, it must be ensured, that writing to this
addresses is not possible, if the Security Mode is on.

Reading of this addresses might work and is manufacturer dependent.

---------------------------------------------------------------------------------
Testing memory acces because of backward compatibility to memory range 0x100-0x1FF

Access Policy to memory: (3FF/0CC)

---------------------------------------------------------------------------------
Preparation:


-----

Synchronize Sequence Number for Tool Key

(1)  T req IN 3C 60 10.15.254 01.01.001 18 03 F1 92 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01
00 00 00 00 :S-A_Sync(Req, Seq.local=1, KNX serial=00 00 00 00 00 00, Challenge=00 00 00 00 00 01), Key:
FDSK

(2)  T res OUT 3C 60 01.01.001 10.15.254 18 03 F1 93 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 :S-A_Sync(Rsp, Challenge=00 00 00 00 00 01, Seq.remote=table, Seq.local=tool), Key: FDSK

Deactivate Security Mode

(3)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(4)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Deactivate Security Reporting

(5)  T C IN 3C 60 10.15.254 01.01.001 0A 01 CE 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
Data=00 ), Key: FDSK

(6)  T C OUT 3C 60 01.01.001 10.15.254 0A 01 CF 00 11 00 10 3A 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=003A, ElemCount=01, Index=0001,
RetCode=00), Key: FDSK

----------------------------------------------------------------------------------------------------------------------------------------------------
A_Memory_Read

(7)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

Security Mode off, PtPCo, Service plain

(8)  IN BC 10.15.254 01.01.001 63 42 01 01 00 :MemoryRead(Count=01, Addr=0100)

(9)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(10)  OUT BC 01.01.001 10.15.254 64 42 41 01 00 00 :MemoryResponse(Count=01, Addr=0100, Data=00 )

(11)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key (or FDSK)

(12)  T A IN 3C 60 10.15.254 01.01.001 03 46 01 01 00 :MemoryRead(Count=01, Addr=0100), Key: FDSK

(13)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(14)  T A OUT 3C 60 01.01.001 10.15.254 04 46 41 01 00 00 :MemoryResponse(Count=01, Addr=0100,
Data=00 ), Key: FDSK

(15)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

Acceptance: positive

Security Mode off, PtPCo, Service encrypted with Tool Key (or FDSK)

(16)  T C IN 3C 60 10.15.254 01.01.001 03 4A 01 01 00 :MemoryRead(Count=01, Addr=0100), Key: FDSK

(17)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(18)  T C OUT 3C 60 01.01.001 10.15.254 04 4A 41 01 00 00 :MemoryResponse(Count=01, Addr=0100,
Data=00 ), Key: FDSK

(19)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

Acceptance: positive

Activate Security Mode


-----

(20)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(21)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Security Mode on, PtPCo, Service plain

(22)  IN BC 10.15.254 01.01.001 63 4E 01 01 00 :MemoryRead(Count=01, Addr=0100)

(23)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(24)  OUT BC 01.01.001 10.15.254 63 4E 40 01 00 :MemoryResponse(Count=00, Addr=0100, Data=)

(25)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

Acceptance: negative

Security Mode on, PtPCo, Service authenticated with Tool Key (or FDSK)

(26)  T A IN 3C 60 10.15.254 01.01.001 03 52 01 01 00 :MemoryRead(Count=01, Addr=0100), Key: FDSK

(27)  OUT B0 01.01.001 10.15.254 60 D2 :T-Ack(Seq=4)

(28)  T A OUT 3C 60 01.01.001 10.15.254 03 52 40 01 00 :MemoryResponse(Count=00, Addr=0100, Data=),
Key: FDSK

(29)  IN BC 10.15.254 01.01.001 60 D2 :T-Ack(Seq=4)

Acceptance: negative

Security Mode on, PtPCo, Service encrypted with Tool Key (or FDSK)

(30)  T C IN 3C 60 10.15.254 01.01.001 03 56 01 01 00 :MemoryRead(Count=01, Addr=0100), Key: FDSK

(31)  OUT B0 01.01.001 10.15.254 60 D6 :T-Ack(Seq=5)

(32)  T C OUT 3C 60 01.01.001 10.15.254 04 56 41 01 00 00 :MemoryResponse(Count=01, Addr=0100,
Data=00 ), Key: FDSK

(33)  IN BC 10.15.254 01.01.001 60 D6 :T-Ack(Seq=5)

(34)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: positive

Deactivate Security Mode

(35)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(36)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

A_Memory_Write

(37)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

Verify Mode On

(38)  IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )

(39)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(40)  OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )

(41)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

Security Mode off, PtPCo, Service plain

(42)  IN BC 10.15.254 01.01.001 64 46 81 01 00 11 :MemoryWrite(Count=01, Addr=0100, Data=11 )


-----

(43)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(44)  OUT BC 01.01.001 10.15.254 64 46 41 01 00 11 :MemoryResponse(Count=01, Addr=0100, Data=11 )

(45)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key (or FDSK)

(46)  T A IN 3C 60 10.15.254 01.01.001 04 4A 81 01 00 22 :MemoryWrite(Count=01, Addr=0100, Data=22 ),
Key: FDSK

(47)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(48)  T A OUT 3C 60 01.01.001 10.15.254 04 4A 41 01 00 22 :MemoryResponse(Count=01, Addr=0100,
Data=22 ), Key: FDSK

(49)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

Acceptance: positive

Security Mode off, PtPCo, Service encrypted with Tool Key (or FDSK)

(50)  T C IN 3C 60 10.15.254 01.01.001 04 4E 81 01 00 33 :MemoryWrite(Count=01, Addr=0100, Data=33 ),
Key: FDSK

(51)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(52)  T C OUT 3C 60 01.01.001 10.15.254 04 4E 41 01 00 33 :MemoryResponse(Count=01, Addr=0100,
Data=33 ), Key: FDSK

(53)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

Acceptance: positive

Activate Security Mode

(54)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(55)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Security Mode on, PtPCo, Service plain

(56)  IN BC 10.15.254 01.01.001 64 52 81 01 00 44 :MemoryWrite(Count=01, Addr=0100, Data=44 )

(57)  OUT B0 01.01.001 10.15.254 60 D2 :T-Ack(Seq=4)

(58)  OUT BC 01.01.001 10.15.254 63 52 40 01 00 :MemoryResponse(Count=00, Addr=0100, Data=)

(59)  IN BC 10.15.254 01.01.001 60 D2 :T-Ack(Seq=4)

Acceptance: negative

Security Mode on, PtPCo, Service authenticated with Tool Key (or FDSK)

(60)  T A IN 3C 60 10.15.254 01.01.001 04 56 81 01 00 55 :MemoryWrite(Count=01, Addr=0100, Data=55 ),
Key: FDSK

(61)  OUT B0 01.01.001 10.15.254 60 D6 :T-Ack(Seq=5)

(62)  T A OUT 3C 60 01.01.001 10.15.254 03 56 40 01 00 :MemoryResponse(Count=00, Addr=0100, Data=),
Key: FDSK

(63)  IN BC 10.15.254 01.01.001 60 D6 :T-Ack(Seq=5)

Acceptance: negative

Security Mode on, PtPCo, Service encrypted with Tool Key (or FDSK)

(64)  T C IN 3C 60 10.15.254 01.01.001 04 5A 81 01 00 00 :MemoryWrite(Count=01, Addr=0100, Data=00 ),
Key: FDSK


-----

(65)  OUT B0 01.01.001 10.15.254 60 DA :T-Ack(Seq=6)

(66)  T C OUT 3C 60 01.01.001 10.15.254 04 5A 41 01 00 00 :MemoryResponse(Count=01, Addr=0100,
Data=00 ), Key: FDSK

(67)  IN BC 10.15.254 01.01.001 60 DA :T-Ack(Seq=6)

(68)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: positive

Deactivate Security Mode

(69)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(70)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

----------------------------------------------------------------------------------------------------------------------------------------------------
A_MemoryExtended_Read

Security Mode off, PtPCo, Service plain

(71)  IN BC 10.15.254 01.01.001 65 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100)

(72)  OUT BC 01.01.001 10.15.254 66 01 FE 00 00 01 00 00 :MemoryExtendedReadResponse(RetCode=00,
Address=00100, Data=00 )

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key (or FDSK)

(73)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100), Key: FDSK

(74)  T A OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 01 00 00
:MemoryExtendedReadResponse(RetCode=00, Address=00100, Data=00 ), Key: FDSK

Acceptance: positive

Security Mode off, PtPCo, Service encrypted with Tool Key (or FDSK)

(75)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100), Key: FDSK

(76)  T C OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 01 00 00
:MemoryExtendedReadResponse(RetCode=00, Address=00100, Data=00 ), Key: FDSK

Acceptance: positive

Activate Security Mode

(77)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(78)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Security Mode on, PtPCo, Service plain

(79)  IN BC 10.15.254 01.01.001 65 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100)

(80)  OUT BC 01.01.001 10.15.254 65 01 FE FC 00 01 00 :MemoryExtendedReadResponse(RetCode=FC,
Address=00100, Data=)

Acceptance: negative


-----

Security Mode on, PtPCo, Service authenticated with Tool Key (or FDSK)

(81)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100), Key: FDSK

(82)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 01 00
:MemoryExtendedReadResponse(RetCode=FC, Address=00100, Data=), Key: FDSK

Acceptance: negative

Security Mode on, PtPCo, Service encrypted with Tool Key (or FDSK)

(83)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 01 00 :MemoryExtendedRead(Byte Count=01,
Address=00100), Key: FDSK

(84)  T C OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 01 00 00
:MemoryExtendedReadResponse(RetCode=00, Address=00100, Data=00 ), Key: FDSK

Acceptance: positive

Deactivate Security Mode

(85)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(86)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

A_MemoryExtended_Write

Security Mode off, PtPCo, Service plain

(87)  IN BC 10.15.254 01.01.001 66 01 FB 01 00 01 00 11 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=11 )

(88)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 01 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=00100, Data=)

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key (or FDSK)

(89)  T A IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 01 00 22 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=22 ), Key: FDSK

(90)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 01 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00100, Data=), Key: FDSK

Acceptance: positive

Security Mode off, PtPCo, Service encrypted with Tool Key (or FDSK)

(91)  T C IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 01 00 33 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=33 ), Key: FDSK

(92)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 01 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00100, Data=), Key: FDSK

Acceptance: positive

Activate Security Mode

(93)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(94)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

Security Mode on, PtPCo, Service plain

(95)  IN BC 10.15.254 01.01.001 66 01 FB 01 00 01 00 44 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=44 )


-----

(96)  OUT BC 01.01.001 10.15.254 65 01 FC FC 00 01 00 :MemoryExtendedWriteResponse(RetCode=FC,
Address=00100, Data=)

Acceptance: negative

Security Mode on, PtPCo, Service authenticated with Tool Key (or FDSK)

(97)  T A IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 01 00 55 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=55 ), Key: FDSK

(98)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 01 00
:MemoryExtendedWriteResponse(RetCode=FC, Address=00100, Data=), Key: FDSK

Acceptance: negative

Security Mode on, PtPCo, Service encrypted with Tool Key (or FDSK)

(99)  T C IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 01 00 00 :MemoryExtendedWrite(Byte Count=01,
Address=00100, Data=00 ), Key: FDSK

(100)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 01 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00100, Data=), Key: FDSK

Acceptance: positive

Deactivate Security Mode

(101)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(102)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

-------------------------------------------------------------------------------------------------------------------
3.8.19.1.1.1.1 Filter Table

The Filter Table should only be readable and writable secured A+C, when Security Mode is on.

Addresse 0x200-0x21FF Filter Table

Reading and writing is needed with actual tools. During configuration ETS e.g. uses DMA access via various
services.

-------------------------------------------------------------------------------------------------------------------
3.8.19.1.1.1.2 A_FilterTable_Read/Write-service (0x200-0x21FF)

(103)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

Verify Mode On

(104)  IN BC 10.15.254 01.01.001 66 43 D7 00 0E 10 01 04 :PropertyValueWrite(Obj=00, Prop=0E, Count=1,
Start=001, Data=04 )

(105)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(106)  OUT BC 01.01.001 10.15.254 66 43 D6 00 0E 10 01 04 :PropertyValueResponse(Obj=00, Prop=0E,
Count=1, Start=001, Data=04 )

(107)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

Open Filter Table

(108)  IN BC 10.15.254 01.01.001 61 47 C0 :RoutingTableOpen()

(109)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

3.8.19.1.1.1.2.1 Security Mode off, PtPCo, Service plain

(110)  IN BC 10.15.254 01.01.001 65 4B C3 01 02 00 11 :RoutingTableWrite(Count=01, Addr=0200, Data=11
)

(111)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)


-----

(112)  OUT BC 01.01.001 10.15.254 65 47 C2 01 02 00 11 :RoutingTableResponse(Count=01, Addr=0200,
Data=11 )

(113)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(114)  IN BC 10.15.254 01.01.001 64 4F C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200)

(115)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(116)  OUT BC 01.01.001 10.15.254 65 4B C2 01 02 00 11 :RoutingTableResponse(Count=01, Addr=0200,
Data=11 )

(117)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key (or FDSK)

(118)  T A IN 3C 60 10.15.254 01.01.001 05 53 C3 01 02 00 22 :RoutingTableWrite(Count=01, Addr=0200,
Data=22 ), Key: FDSK

(119)  OUT B0 01.01.001 10.15.254 60 D2 :T-Ack(Seq=4)

(120)  T A OUT 3C 60 01.01.001 10.15.254 05 4F C2 01 02 00 22 :RoutingTableResponse(Count=01,
Addr=0200, Data=22 ), Key: FDSK

(121)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(122)  T A IN 3C 60 10.15.254 01.01.001 04 57 C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200), Key:
FDSK

(123)  OUT B0 01.01.001 10.15.254 60 D6 :T-Ack(Seq=5)

(124)  T A OUT 3C 60 01.01.001 10.15.254 05 53 C2 01 02 00 22 :RoutingTableResponse(Count=01,
Addr=0200, Data=22 ), Key: FDSK

(125)  IN BC 10.15.254 01.01.001 60 D2 :T-Ack(Seq=4)

Acceptance: positive

3.8.19.1.1.1.2.2 Security Mode off, PtPCo, Service encrypted with Tool Key (or FDSK)

(126)  T C IN 3C 60 10.15.254 01.01.001 05 5B C3 01 02 00 33 :RoutingTableWrite(Count=01, Addr=0200,
Data=33 ), Key: FDSK

(127)  OUT B0 01.01.001 10.15.254 60 DA :T-Ack(Seq=6)

(128)  T C OUT 3C 60 01.01.001 10.15.254 05 57 C2 01 02 00 33 :RoutingTableResponse(Count=01,
Addr=0200, Data=33 ), Key: FDSK

(129)  IN BC 10.15.254 01.01.001 60 D6 :T-Ack(Seq=5)

(130)  T C IN 3C 60 10.15.254 01.01.001 04 5F C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200), Key:
FDSK

(131)  OUT B0 01.01.001 10.15.254 60 DE :T-Ack(Seq=7)

(132)  T C OUT 3C 60 01.01.001 10.15.254 05 5B C2 01 02 00 33 :RoutingTableResponse(Count=01,
Addr=0200, Data=33 ), Key: FDSK

(133)  IN BC 10.15.254 01.01.001 60 DA :T-Ack(Seq=6)

Acceptance: positive

Activate Security Mode

(134)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(135)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

3.8.19.1.1.1.2.3 Security Mode on, PtPCo, Service plain


-----

(136)  IN BC 10.15.254 01.01.001 65 63 C3 01 02 00 44 :RoutingTableWrite(Count=01, Addr=0200, Data=44
)

(137)  OUT B0 01.01.001 10.15.254 60 E2 :T-Ack(Seq=8)

(138)  OUT BC 01.01.001 10.15.254 64 5F C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, )

(139)  IN BC 10.15.254 01.01.001 60 DE :T-Ack(Seq=7)

(140)  IN BC 10.15.254 01.01.001 64 67 C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200)

(141)  OUT B0 01.01.001 10.15.254 60 E6 :T-Ack(Seq=9)

(142)  OUT BC 01.01.001 10.15.254 64 63 C2 00 02 00 :RoutingTableResponse(Count=00, Addr=0200, )

(143)  IN BC 10.15.254 01.01.001 60 E2 :T-Ack(Seq=8)

Acceptance: negative

Security Mode on, PtPCo, Service authenticated with Tool Key (or FDSK)

(144)  T A IN 3C 60 10.15.254 01.01.001 05 6B C3 01 02 00 55 :RoutingTableWrite(Count=01, Addr=0200,
Data=55 ), Key: FDSK

(145)  OUT B0 01.01.001 10.15.254 60 EA :T-Ack(Seq=A)

(146)  T A OUT 3C 60 01.01.001 10.15.254 04 67 C2 00 02 00 :RoutingTableResponse(Count=00,
Addr=0200, ), Key: FDSK

(147)  IN BC 10.15.254 01.01.001 60 E6 :T-Ack(Seq=9)

(148)  T A IN 3C 60 10.15.254 01.01.001 04 6F C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200), Key:
FDSK

(149)  OUT B0 01.01.001 10.15.254 60 EE :T-Ack(Seq=B)

(150)  T A OUT 3C 60 01.01.001 10.15.254 04 6B C2 00 02 00 :RoutingTableResponse(Count=00,
Addr=0200, ), Key: FDSK

(151)  IN BC 10.15.254 01.01.001 60 EA :T-Ack(Seq=A)

Acceptance: negative

3.8.19.1.1.1.2.4 Security Mode on, PtPCo, Service encrypted with Tool Key

(152)  T C IN 3C 60 10.15.254 01.01.001 05 73 C3 01 02 00 00 :RoutingTableWrite(Count=01, Addr=0200,
Data=00 ), Key: FDSK

(153)  OUT B0 01.01.001 10.15.254 60 F2 :T-Ack(Seq=C)

(154)  T C OUT 3C 60 01.01.001 10.15.254 05 6F C2 01 02 00 00 :RoutingTableResponse(Count=01,
Addr=0200, Data=00 ), Key: FDSK

(155)  IN BC 10.15.254 01.01.001 60 EE :T-Ack(Seq=B)

(156)  T C IN 3C 60 10.15.254 01.01.001 04 77 C1 01 02 00 :RoutingTableRead(Count=01, Addr=0200), Key:
FDSK

(157)  OUT B0 01.01.001 10.15.254 60 F6 :T-Ack(Seq=D)

(158)  T C OUT 3C 60 01.01.001 10.15.254 05 73 C2 01 02 00 00 :RoutingTableResponse(Count=01,
Addr=0200, Data=00 ), Key: FDSK

(159)  IN BC 10.15.254 01.01.001 60 F2 :T-Ack(Seq=C)

(160)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: positive

Deactivate Security Mode

(161)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK


-----

(162)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

3.8.19.1.1.1.3 A_MemoryExtended_Read/-Write-service (0x200-0x21FF)

3.8.19.1.1.1.3.1 Security Mode off, PtPCo, Service plain

(163)  IN BC 10.15.254 01.01.001 66 01 FB 01 00 02 00 11 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=11 )

(164)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 02 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=00200, Data=)

(165)  IN BC 10.15.254 01.01.001 65 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200)

(166)  OUT BC 01.01.001 10.15.254 66 01 FE 00 00 02 00 11 :MemoryExtendedReadResponse(RetCode=00,
Address=00200, Data=11 )

Acceptance: positive

Security Mode off, PtPCo, Service authenticated with Tool Key

(167)  T A IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 02 00 22 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=22 ), Key: FDSK

(168)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 02 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00200, Data=), Key: FDSK

(169)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200), Key: FDSK

(170)  T A OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 02 00 22
:MemoryExtendedReadResponse(RetCode=00, Address=00200, Data=22 ), Key: FDSK

Acceptance: positive

3.8.19.1.1.1.3.2 Security Mode off, PtPCo, Service encrypted with Tool Key

(171)  T C IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 02 00 33 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=33 ), Key: FDSK

(172)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 02 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00200, Data=), Key: FDSK

(173)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200), Key: FDSK

(174)  T C OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 02 00 33
:MemoryExtendedReadResponse(RetCode=00, Address=00200, Data=33 ), Key: FDSK

Acceptance: positive

Activate Security Mode

(175)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: FDSK

(176)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK

3.8.19.1.1.1.3.3 Security Mode on, PtPCo, Service plain

(177)  IN BC 10.15.254 01.01.001 66 01 FB 01 00 02 00 44 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=44 )

(178)  OUT BC 01.01.001 10.15.254 65 01 FC FC 00 02 00 :MemoryExtendedWriteResponse(RetCode=FC,
Address=00200, Data=)

(179)  IN BC 10.15.254 01.01.001 65 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200)


-----

(180)  OUT BC 01.01.001 10.15.254 65 01 FE FC 00 02 00 :MemoryExtendedReadResponse(RetCode=FC,
Address=00200, Data=)

Acceptance: negative

Security Mode on, PtPCo, Service authenticated with Tool Key

(181)  T A IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 02 00 55 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=55 ), Key: FDSK

(182)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FC FC 00 02 00
:MemoryExtendedWriteResponse(RetCode=FC, Address=00200, Data=), Key: FDSK

(183)  T A IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200), Key: FDSK

(184)  T A OUT 3C 60 01.01.001 10.15.254 05 01 FE FC 00 02 00
:MemoryExtendedReadResponse(RetCode=FC, Address=00200, Data=), Key: FDSK

Acceptance: negative

3.8.19.1.1.1.3.4 Security Mode on, PtPCo, Service encrypted with Tool Key

(185)  T C IN 3C 60 10.15.254 01.01.001 06 01 FB 01 00 02 00 00 :MemoryExtendedWrite(Byte Count=01,
Address=00200, Data=00 ), Key: FDSK

(186)  T C OUT 3C 60 01.01.001 10.15.254 05 01 FC 00 00 02 00
:MemoryExtendedWriteResponse(RetCode=00, Address=00200, Data=), Key: FDSK

(187)  T C IN 3C 60 10.15.254 01.01.001 05 01 FD 01 00 02 00 :MemoryExtendedRead(Byte Count=01,
Address=00200), Key: FDSK

(188)  T C OUT 3C 60 01.01.001 10.15.254 06 01 FE 00 00 02 00 00
:MemoryExtendedReadResponse(RetCode=00, Address=00200, Data=00 ), Key: FDSK

Acceptance: positive

----------------------------------------------------------------------------------------------------------------------------------------------------
Cleanup:

Deactivate Security Mode

(189)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 00
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 00 ), Key: FDSK

(190)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key:
FDSK


-----

##### 3.9 TL Repititions in Secure Mode

Secure frames shall be repeated with same security as original frame.

Activate Security Mode

(1)  T C IN 3C 60 10.15.254 01.01.001 09 01 D4 00 11 00 10 33 00 00 01
:FctPropertyExtCommand(ObjType=0011, ObjInst=0001, PropId=0033, Data=00 00 01 ), Key: TK1

(2)  T C OUT 3C 60 01.01.001 10.15.254 08 01 D6 00 11 00 10 33 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 ), Key: table

Test that all repeated frames during connected mode are secured

(3)  IN 3C 60 10.15.254 01.01.001 00 80 :T-Connect(Addr=01.01.001)

(4)  T C IN 3C 60 10.15.254 01.01.001 01 43 00 :DeviceDescriptorRead(DescType=00), Key: TK1

(5)  OUT 3C 60 01.01.001 10.15.254 00 C2 :T-Ack(Seq=0)

(6)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(7)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(8)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(9)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(10)  OUT 3C 60 01.01.001 10.15.254 00 81 :T-Disconnect

Test that acknoledge of secured repeated frames is working in connected mode

(11)  IN 3C 60 10.15.254 01.01.001 00 80 :T-Connect(Addr=01.01.001)

(12)  T C IN 3C 60 10.15.254 01.01.001 01 43 00 :DeviceDescriptorRead(DescType=00), Key: TK1

(13)  OUT 3C 60 01.01.001 10.15.254 00 C2 :T-Ack(Seq=0)

(14)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(15)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(16)  IN 3C 60 10.15.254 01.01.001 00 C2 :T-Ack(Seq=0)

(17)  OUT 3C 60 01.01.001 10.15.254 00 81 :T-Disconnect

Test that all repeated frames are secured even if there are 2 messages parked by the transport layer

(18)  IN 3C 60 10.15.254 01.01.001 00 80 :T-Connect(Addr=01.01.001)

(19)  T C IN 3C 60 10.15.254 01.01.001 01 43 00 :DeviceDescriptorRead(DescType=00), Key: TK1

(20)  OUT 3C 60 01.01.001 10.15.254 00 C2 :T-Ack(Seq=0)

(21)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

Simulate an ACK sent to the BDUT but not received by it, so send after another command. The response must
be parked and sent later with security

(22)  T C IN 3C 60 10.15.254 01.01.001 05 47 D5 00 36 10 01 :PropertyValueRead(Obj=00, Prop=36,
Count=1, Start=001), Key: TK1

(23)  OUT 3C 60 01.01.001 10.15.254 00 C6 :T-Ack(Seq=1)

(24)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table


-----

(25)  T C OUT 3C 60 01.01.001 10.15.254 03 43 40 27 B0 :DeviceDescriptorResponse(DescType=00,
Descriptor=27 B0 ), Key: table

(26)  IN 3C 60 10.15.254 01.01.001 00 C2 :T-Ack(Seq=0)

(27)  T C OUT 3C 60 01.01.001 10.15.254 06 47 D6 00 36 10 01 ?? :PropertyValueResponse(Obj=00,
Prop=36, Count=1, Start=001, Data=?? ), Key: table

(28)  T C OUT 3C 60 01.01.001 10.15.254 06 47 D6 00 36 10 01 ?? :PropertyValueResponse(Obj=00,
Prop=36, Count=1, Start=001, Data=?? ), Key: table

(29)  IN 3C 60 10.15.254 01.01.001 00 C2 :T-Ack(Seq=0)

(30)  OUT 3C 60 01.01.001 10.15.254 00 81 :T-Disconnect

Acceptance: The purpose of the test is NOT to check the correct TL timing, but the correct sending of the
secured TL repetitions.


-----

#### 4 Test Cases for Application Note 163 Extended Interface Object Addressing[12]

##### 4.1 PropertyExtValue_Read / ValueRes PDU

###### 4.1.1 A_PropertyExtValue_Read, existing interface object type
Required BDUT setting: PID_MANUFACTURER_ID has default value, access level is “Manufacturer” by
default key setting.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtValue_Read and sending correct
A_PropertyExtValue_Response.

Procedure: A_PropertyExtValue_Read to accessible property PID_MANUFACTURER_ID in Device Interface
Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6B 01 CD 00 00 00 10 0C 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=01, Index=0001,
Data=?? ?? )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with default
value.

###### 4.1.2 A_PropertyExtValue_Read, not existing interface object type
Required BDUT setting: access leve l is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read

Procedure: A_PropertyExtValue_Read to property PID_MANUFACTURER_ID in Interface Object of type
0x000F and 0x8000.

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 0F 00 10 0C 01 00 01 :PropertyExtValueRead(ObjType=000F,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 0F 00 10 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=000F, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

(3)  IN BC 10.15.254 01.01.001 69 01 CC 80 00 00 10 0C 01 00 01 :PropertyExtValueRead(ObjType=8000,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 80 00 00 10 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=8000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.3 A_PropertyExtValue_Read, not existing interface object instance
Required BDUT setting: access level is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to property PID_MANUFACTURER_ID in Device Interface Object
(Type 0) and object instance 0x0000, 0x0002 and 0x0800.

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 00 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0000, PropId=000C, ElemCount=01, Index=0001)

12 Basis DV voting version – tests applicable for both KNX data secure as well as IP Secure devices.


-----

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 00 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0000, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 20 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0002, PropId=000C, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 20 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0002, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 80 00 0C 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0800, PropId=000C, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 80 00 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0800, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.4 A_PropertyExtValue_Read, not existing PID
Required BDUT setting: access level is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to PIDs 0x0003 and 0x0800 in Device Interface Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 03 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0003, ElemCount=01, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 03 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0003, ElemCount=00, Index=0001,
Data=FD )

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 18 00 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0800, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 18 00 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0800, ElemCount=00, Index=0001,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.5 A_PropertyExtValue_Read, number of elements = 0
Required BDUT setting: access level is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to accessible property PID_MANUFACTURER_ID in Device Interface
Object (Type 0) with number of elements = 0.

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 00 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=00, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.6 A_PropertyExtValue_Read, number of elements too big
Required BDUT setting: access level is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.


-----

Procedure: A_PropertyExtValue_Read to accessible property PID_MANUFACTURER_ID in Device Interface
Object (Type 0) with number of elements = 2.

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 02 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=02, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 0C 00 00 01 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0001,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.7 A_PropertyExtValue_Read, data fitting to Max APDU Length
Required BDUT Setting: access level is “Manufacturer” by default key setting.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to accessible property PID_TABLE in User Interface Object (Type
50001) with start index = 1 and 245 elements to be read (assuming the MAX_APDU_LENGTH of the device
being 254).

(1)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 17 F5 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0017, ElemCount=F5, Index=0001)

(2)  OUT 3C 60 01.01.001 10.15.254 FE 01 CD C3 51 00 10 17 F5 00 01 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0017, ElemCount=F5, Index=0001,
Data=?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
?? ?? ?? ?? ?? ?? ?? ?? )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = F5 and data = ?? being the 245 read bytes.

###### 4.1.8 A_PropertyExtValue_Read, data exceeds Max APDU Length
Required BDUT setting: access level is “Manufacturer” by default key setting

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to accessible property PID_TABLE in User Interface Object (Type
50001) with start index = 1 and 254 elements to be read.

(1)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 17 FE 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0017, ElemCount=FE, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD C3 51 00 10 17 00 00 01 F4
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0017, ElemCount=00, Index=0001,
Data=F4 )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_LENGTH_EXCEEDS_MAX_APDU_LENGTH.

###### 4.1.9 A_PropertyExtValue_Read, start index too big
Required BDUT setting: access level is “Manufacturer” by default key setting.


-----

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read.

Procedure: A_PropertyExtValue_Read to accessible property PID_MANUFACTURER_ID in Device Interface
Object (Type 0) with start index = 2.

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0C 01 00 02 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000C, ElemCount=01, Index=0002)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 0C 00 00 02 FD
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000C, ElemCount=00, Index=0002,
Data=FD )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ADDRESS_VOID.

###### 4.1.10 A_PropertyExtValue_Read, to area with higher access level
This test case is CONDITIONAL on the full support for Authorization.

Required BDUT setting: PID 52 in User Interface Object (Type 50001) has access level 2/2.

Purpose: Check BDUT’s acceptance of the A_PropertyExtValue_Read to property from lower access level than
required for reading.

Procedure: A_PropertyExtValue_Read to PID 52 in User Interface Object (Type 50001) which has access level
2/2 but after only authorizing with level 3.

Preparation: Restrict access level

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 66 47 D3 00 00 00 00 00 :KeyWrite(00, 00000000)

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(9)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 66 4B D3 01 11 11 11 11 :KeyWrite(01, 11111111)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(13)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(14)  IN BC 10.15.254 01.01.001 66 4F D3 02 22 22 22 22 :KeyWrite(02, 22222222)

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(16)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(17)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(19)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(20)  OUT BC 01.01.001 10.15.254 6A 01 CD C3 51 00 10 34 00 00 01 FC
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
Data=FC )

Set access levels to default

(21)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)


-----

(22)  IN BC 10.15.254 01.01.001 66 43 D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(23)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(24)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(25)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(26)  IN BC 10.15.254 01.01.001 66 47 D3 00 FF FF FF FF :KeyWrite(00, FFFFFFFF)

(27)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(28)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(29)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(30)  IN BC 10.15.254 01.01.001 66 4B D3 01 FF FF FF FF :KeyWrite(01, FFFFFFFF)

(31)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(32)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(33)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(34)  IN BC 10.15.254 01.01.001 66 4F D3 02 FF FF FF FF :KeyWrite(02, FFFFFFFF)

(35)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(36)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(37)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(38)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with number
of elements = 0 and data = E_ACCESS_DENIED.

###### 4.1.11 A_ PropertyExtValue _Read, of type PDT_FUNCTION
Required BDUT setting:

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_Read attempting to access a function
property type, thereafter returning a correct A_PropertyExtValue_Response.

Procedure: A_PropertyExtValue_Read to PID_SECURITY_MODE in Security Interface Object (Type 17).

(1)  IN BC 10.15.254 01.01.001 69 01 CC 00 11 00 10 33 01 00 01 :PropertyExtValueRead(ObjType=0011,
ObjInst=0001, PropId=0033, ElemCount=01, Index=0001)

(2)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 11 00 10 33 00 00 01 FE
:PropertyExtValueResponse(ObjType=0011, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
Data=FE )

Acceptance: BDUT accepts A_PropertyExtValue_Read and sends A_PropertyExtValue_Response with return
code E_DATA_TYPE_CONFLICT without any data.

##### 4.2 PropertyExtValue_WriteCon / WriteConRes PDU

###### 4.2.1 A_PropertyExtValue_WriteCon, receive A_PropertyExtValueWriteCon_Response, to data property, to PDT_Control
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtValue_WriteCon and sending correct
A_PropertyExtValueWriteCon_Response.

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with different value than default.

To data property


-----

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 36 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

To PDT_CONTROL

A_PropertyExtValue_WriteCon to accessible property PID_RUN_STATE_CONTROL in Application Program
Object (Type 3).

(5)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 03 00 10 06 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 03 00 10 06 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
RetCode=00)

Alternatively for routers:

A_PropertyExtValue_WriteCon to accessible property PID_LOAD_STATE_CONTROL in Router Object
(Type 6).

(7)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 06 00 10 05 01 00 01 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0006, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 06 00 10 05 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0006, ObjInst=0001, PropId=0005, ElemCount=01, Index=0001,
RetCode=00)

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_SUCCESS. Check content of PID_PROG_MODE
by A_PropertyExtValue_Read to make sure that value was altered.

###### 4.2.2 A_PropertyExtValue_WriteCon, not existing interface object type
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to property PID_PROG_MODE in Interface Object of types 0x000F
and 0x8000 with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 0F 00 10 36 01 00 01 00
:PropertyExtValueWriteCon(ObjType=000F, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 0F 00 10 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=000F, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 80 00 00 10 36 01 00 01 00
:PropertyExtValueWriteCon(ObjType=8000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )


-----

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 80 00 00 10 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=8000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.3 A_PropertyExtValue_WriteCon, not existing interface object instance
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to property PID_PROG_MODE in Device Interface Object (Type 0)
and object instance 0x0000, 0x0002 and 0x0800 with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 00 36 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0000, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 00 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0000, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 20 36 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0002, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 20 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0002, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(5)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 80 00 36 01 00 01 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0800, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 80 00 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0800, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(7)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(8)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.4 A_PropertyExtValue_WriteCon, not existing PID
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to PIDs 0x0003, 0x0800 and 0x080C in Device Interface Object
(Type 0) with different value than default.


-----

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 03 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0003, ElemCount=01, Index=0001,
Data=01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 03 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0003, ElemCount=00, Index=0001,
RetCode=FD)

(3)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 18 00 01 00 01 10
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0800, ElemCount=01, Index=0001,
Data=10 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 18 00 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0800, ElemCount=00, Index=0001,
RetCode=FD)

(5)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 18 0C 01 00 01 10
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=080C, ElemCount=01, Index=0001,
Data=10 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 18 0C 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=080C, ElemCount=00, Index=0001,
RetCode=FD)

(7)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(8)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_MANUFACTURER_ID by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.5 A_PropertyExtValue_WriteCon, number of elements = 0
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 0 and different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 36 01 00 01 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
RetCode=00)

(3)  IN BC 10.15.254 01.01.001 69 01 CE 00 00 00 10 36 00 00 01
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001, Data=)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )


-----

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.6 A_PropertyExtValue_WriteCon, number of elements too big
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 2 and different value than default.

(1)  IN BC 10.15.254 01.01.001 6B 01 CE 00 00 00 10 36 02 00 01 00 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=02, Index=0001,
Data=00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 01 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FD)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.7 A_PropertyExtValue_WriteCon, start index = 0 with > 2 Octets
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with start index = 0 and 3 octets of data.

(1)  IN BC 10.15.254 01.01.001 6C 01 CE 00 00 00 10 36 01 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 00 FE
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0000,
RetCode=FE)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_DATA_TYPE_CONFLICT. Check content of
PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.8 A_PropertyExtValue_WriteCon, start index too big
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.


-----

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with start index = 2.

(1)  IN BC 10.15.254 01.01.001 6A 01 CE 00 00 00 10 36 01 00 02 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
Data=00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 02 FD
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0002,
RetCode=FD)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ADDRESS_VOID. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.9 A_PropertyExtValue_WriteCon, writing to read only property
Required BDUT setting: PID_SERIAL_NUMBER has default value, access level is “Manufacturer” by default
key setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to read only property PID_SERIAL_NUMBER in Device Interface
Object (Type 0) with different value than default.

(1)  IN BC 10.15.254 01.01.001 6F 01 CE 00 00 00 10 0B 01 00 01 01 02 03 04 05 06
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=01 02 03 04 05 06 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 0B 00 00 01 FB
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=00, Index=0001,
RetCode=FB)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0B 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000B, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6F 01 CD 00 00 00 10 0B 01 00 01 ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ACCESS_READ_ONLY. Check content of
PID_SERIAL_NUMBER by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.10 A_PropertyExtValue_WriteCon, data type conflict (to data property, to PDT_Control)
Required BDUT setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon.

Procedure: A_PropertyExtValue_WriteCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with 3 bytes data different from default and start index = 1. A_PropertyExtValue_WriteCon to
accessible property PID_RUN_STATE_CONTROL in Application Interface Object (Type 3) with 9 and 11
bytes data different from default and start index = 1.

(1)  IN BC 10.15.254 01.01.001 6C 01 CE 00 00 00 10 36 01 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 00 00 )


-----

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 00 00 10 36 00 00 01 FE
:PropertyExtValueWriteConRes(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
RetCode=FE)

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(5)  IN 3C 60 10.15.254 01.01.001 12 01 CE 00 03 00 10 06 01 00 01 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 03 00 10 06 00 00 01 FE
:PropertyExtValueWriteConRes(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=00, Index=0001,
RetCode=FE)

(7)  IN 3C 60 10.15.254 01.01.001 14 01 CE 00 03 00 10 06 01 00 01 00 00 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
Data=00 00 00 00 00 00 00 00 00 00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 03 00 10 06 00 00 01 FE
:PropertyExtValueWriteConRes(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=00, Index=0001,
RetCode=FE)

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_DATA_TYPE_CONFLICT. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.2.11 A_PropertyExtValue_WriteCon, to area with higher access level
Required BDUT setting: None.

Purpose: Check BDUT’s acceptance of the A_PropertyExtValue_WriteCon to property from lower access level
than required for writing.

Procedure: A_PropertyExtValue_WriteCon to PID 52 in User Interface Object (Type 50001) which requires
access level 2/2, after having reduced access level to level 3.

Preparation: Restrict access levels

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 66 47 D3 00 00 00 00 00 :KeyWrite(00, 00000000)

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(9)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 66 4B D3 01 11 11 11 11 :KeyWrite(01, 11111111)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(13)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(14)  IN BC 10.15.254 01.01.001 66 4F D3 02 22 22 22 22 :KeyWrite(02, 22222222)

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)


-----

(16)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(17)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(19)  IN BC 10.15.254 01.01.001 6B 01 CE C3 51 00 10 34 01 00 01 00 02
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=00 02 )

(20)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 34 00 00 01 FC
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=00, Index=0001,
RetCode=FC)

(21)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(22)  OUT BC 01.01.001 10.15.254 6B 01 CD C3 51 00 10 34 01 00 01 ?? ??
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=?? ?? )

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_ACCESS_DENIED. Check content of PID 52 by
A_PropertyExtValue_Read to make sure that value was not altered.

Set access levels to default

(23)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(24)  IN BC 10.15.254 01.01.001 66 43 D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(25)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(26)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(27)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(28)  IN BC 10.15.254 01.01.001 66 47 D3 00 FF FF FF FF :KeyWrite(00, FFFFFFFF)

(29)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(30)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(31)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(32)  IN BC 10.15.254 01.01.001 66 4B D3 01 FF FF FF FF :KeyWrite(01, FFFFFFFF)

(33)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(34)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(35)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(36)  IN BC 10.15.254 01.01.001 66 4F D3 02 FF FF FF FF :KeyWrite(02, FFFFFFFF)

(37)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(38)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(39)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(40)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

###### 4.2.12 A_PropertyExtValue_WriteCon, minimum and maximum value, void value
Required BDUT setting: None.

Purpose: Check BDUT’s acceptance of the A_PropertyExtValue_WriteCon to property requiring a minimum
and maximum value.

Procedure: A_PropertyExtValue_WriteCon to PID 201 in User Interface Object (Type 50001) which allows
values from 1 to 254, but not value 128.


-----

(1)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 01
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
RetCode=00)

(3)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 00
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 00 00 01 F6
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=00, Index=0001,
RetCode=F6)

(5)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 C9 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD C3 51 00 10 C9 01 00 01 01
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=01 )

(7)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 FE
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=FE )

(8)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
RetCode=00)

(9)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 FF
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=FF )

(10)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 00 00 01 F7
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=00, Index=0001,
RetCode=F7)

(11)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 C9 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001)

(12)  OUT BC 01.01.001 10.15.254 6A 01 CD C3 51 00 10 C9 01 00 01 FE
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=FE )

(13)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 77
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=77 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
RetCode=00)

(15)  IN BC 10.15.254 01.01.001 6A 01 CE C3 51 00 10 C9 01 00 01 80
:PropertyExtValueWriteCon(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=80 )

(16)  OUT BC 01.01.001 10.15.254 6A 01 CF C3 51 00 10 C9 00 00 01 F8
:PropertyExtValueWriteConRes(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=00, Index=0001,
RetCode=F8)

(17)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 C9 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001)

(18)  OUT BC 01.01.001 10.15.254 6A 01 CD C3 51 00 10 C9 01 00 01 77
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=00C9, ElemCount=01, Index=0001,
Data=77 )


-----

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_DATA_MIN respectively E_DATA_MAX for
values outside the before-saids range and E_DATA_VOID for not allowed value. Read the values back to check
if they were unchanged.

###### 4.2.13 A_ PropertyExtValue _WriteCon, of type PDT_FUNCTION
Required BDUT setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteCon due to function property
type and sending correct A_PropertyExtValueWriteCon_Response.

Procedure: A_PropertyExtValue_WriteCon to PID_SECURITY_MODE in Security Interface Object (Type 17)

(1)  IN BC 10.15.254 01.01.001 6C 01 CE 00 11 00 10 33 01 00 01 00 00 00
:PropertyExtValueWriteCon(ObjType=0011, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 11 00 10 33 00 00 01 FE
:PropertyExtValueWriteConRes(ObjType=0011, ObjInst=0001, PropId=0033, ElemCount=00, Index=0001,
RetCode=FE)

Acceptance: BDUT accepts A_PropertyExtValue_WriteCon and sends
A_PropertyExtValueWriteCon_Response with return code E_DATA_TYPE_CONFLICT without any data.

##### 4.3 PropertyExtValue_WriteUnCon PDU

###### 4.3.1 A_PropertyExtValue_WriteUnCon
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 10 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 01
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(4)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 10 36 01 00 01 00
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(5)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(6)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was altered.

###### 4.3.2 A_PropertyExtValue_WriteUnCon, not existing interface object type
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.


-----

Procedure: A_PropertyExtValue_WriteUnCon to property PID_PROG_MODE in Interface Object of types
0x000F and 0x8000 with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 0F 00 10 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=000F, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 6A 01 D0 80 00 00 10 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=8000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon ort. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.3 A_PropertyExtValue_WriteUnCon, not existing interface object instance
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to property PID_PROG_MODE in Device Interface Object (Type
0) and object instance 0x0000, 0x0002 and 0x0800 with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 00 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0000, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 20 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0002, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 80 00 36 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0800, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(4)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(5)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.4 A_PropertyExtValue_WriteUnCon, not existing PID
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to PIDs 0x0003, 0x0800 and 0x080C in Device Interface Object
(Type 0) with different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 18 0C 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=080C, ElemCount=01, Index=0001,
Data=01 )


-----

(2)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 10 03 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0003, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 18 00 01 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0800, ElemCount=01, Index=0001,
Data=01 )

(4)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(5)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.5 A_PropertyExtValue_WriteUnCon, number of elements = 0
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 0 and different value than default.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 10 36 00 00 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.6 A_PropertyExtValue_WriteUnCon, number of elements too big
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 2 and different value than default.

(1)  IN BC 10.15.254 01.01.001 6B 01 D0 00 00 00 10 36 02 00 01 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=02, Index=0001,
Data=01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.


-----

###### 4.3.7 A_PropertyExtValue_WriteUnCon, start index = 0 with > 2 Octets
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with start index = 0 and 3 octets of data.

(1)  IN BC 10.15.254 01.01.001 6C 01 D0 00 00 00 10 36 01 00 00 01 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0000,
Data=01 01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.8 A_PropertyExtValue_WriteUnCon, start index too big
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with start index = 2.

(1)  IN BC 10.15.254 01.01.001 6A 01 D0 00 00 00 10 36 01 00 02 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.9 A_PropertyExtValue_WriteUnCon, writing to read only property
Required BDUT Setting: PID_SERIAL_NUMBER has default value, access level is “Manufacturer” by default
key setting

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to read only property PID_SERIAL_NUMBER in Device
Interface Object (Type 0) with different value than default.

(1)  IN BC 10.15.254 01.01.001 6F 01 D0 00 00 00 10 0B 01 00 01 01 02 03 04 05 06
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=01 02 03 04 05 06 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0B 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000B, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6F 01 CD 00 00 00 10 0B 01 00 01 ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? )


-----

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_SERIAL_NUMBER by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.10 A_PropertyExtValue_WriteUnCon, data type conflict
Required BDUT Setting: PID_PROG_MODE has default value, access level is “Manufacturer” by default key
setting

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtValue_WriteUnCon.

Procedure: A_PropertyExtValue_WriteUnCon to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with 2 bytes data different from default and start index = 1.

(1)  IN BC 10.15.254 01.01.001 6B 01 D0 00 00 00 10 36 01 00 01 01 01
:PropertyExtValueWriteUnCon(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.11 A_PropertyExtValue_WriteUnCon, to area with higher access level
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the A_PropertyExtValue_WriteUnCon to property from lower access
level than required for writing.

Procedure: A_PropertyExtValue_WriteUnCon to PID 52 in User Interface Object (Type 50001) which has
access level 2/2, after having reduced access level to 3.

Preparation: Restrict access level

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 66 47 D3 00 00 00 00 00 :KeyWrite(00, 00000000)

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(9)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 66 4B D3 01 11 11 11 11 :KeyWrite(01, 11111111)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(13)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(14)  IN BC 10.15.254 01.01.001 66 4F D3 02 22 22 22 22 :KeyWrite(02, 22222222)

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(16)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(17)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect


-----

(19)  IN BC 10.15.254 01.01.001 6B 01 D0 C3 51 00 10 34 01 00 01 BE EF
:PropertyExtValueWriteUnCon(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=BE EF )

(20)  IN BC 10.15.254 01.01.001 69 01 CC C3 51 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(21)  OUT BC 01.01.001 10.15.254 6B 01 CD C3 51 00 10 34 01 00 01 00 01
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=00 01 )

Set access levels to default

(22)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(23)  IN BC 10.15.254 01.01.001 66 43 D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(24)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(25)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(26)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(27)  IN BC 10.15.254 01.01.001 66 47 D3 00 FF FF FF FF :KeyWrite(00, FFFFFFFF)

(28)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(29)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(30)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(31)  IN BC 10.15.254 01.01.001 66 4B D3 01 FF FF FF FF :KeyWrite(01, FFFFFFFF)

(32)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(33)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(34)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(35)  IN BC 10.15.254 01.01.001 66 4F D3 02 FF FF FF FF :KeyWrite(02, FFFFFFFF)

(36)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(37)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(38)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(39)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check content of PID 52 by
A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.3.12 A_ PropertyExtValue _WriteUnCon, of type PDT_FUNCTION
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_ PropertyExtValue _WriteUnCon due to function
property type and make sure that the operation mode was not altered.

Procedure: A_PropertyExtValue_WriteUnCon to PID_SECURITY_MODE in Security Interface Object (Type
17)

(1)  IN BC 10.15.254 01.01.001 6C 01 D0 00 11 00 10 33 01 00 01 00 00 01
:PropertyExtValueWriteUnCon(ObjType=0011, ObjInst=0001, PropId=0033, ElemCount=01, Index=0001,
Data=00 00 01 )

(2)  T C IN BC 10.15.254 01.01.001 68 01 D5 00 11 00 10 33 00 00 :FctPropertyExtStateRead(ObjType=0011,
ObjInst=0001, PropId=0033, Data=00 00 ), Key: TK1

(3)  T C OUT BC 01.01.001 10.15.254 6A 01 D6 00 11 00 10 33 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0011, ObjInst=0001, PropId=0033, RetCode=00, Data=00 00 00 ),
Key: TK1


-----

Acceptance: BDUT does not respond to A_PropertyExtValue_WriteUnCon. Check PID_SECURITY_MODE to
make sure it was not altered.

##### 4.4 PropertyExtValue_InfoReport PDU

###### 4.4.1 A_PropertyExtValue_InfoReport, to be ignored by MaS
Required BDUT Setting: None.

Purpose: Check whether the BDUT ignores a correct A_PropertyExtValue_InfoReport

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Device Interface
Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 10 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not react to the A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.2 A_PropertyExtValue_InfoReport, not existing Interface Object Type
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport to not existing Interface Object Type.

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Interface Object of
type 0x000F and 0x8000.

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 0F 00 10 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=000F, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 6A 01 D1 80 00 00 10 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=8000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(4)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.3 A_PropertyExtValue_InfoReport, not existing Interface Object instance
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport to not existing Interface Object
instance.

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) and object instance 0x0000, 0x0002 and 0x0800.

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 00 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0000, PropId=0036, ElemCount=01, Index=0001,
Data=01 )


-----

(2)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 20 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0002, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 80 00 36 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0800, PropId=0036, ElemCount=01, Index=0001,
Data=01 )

(4)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(5)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

(

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.4 A_PropertyExtValue_InfoReport, not existing PID
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport to not existing PID.

Procedure: A_PropertyExtValue_InfoReport to PID 0x0003 and 0x0800 and 0x080C in Device Interface Object
(Type 0).

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 18 0C 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=080C, ElemCount=01, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 10 03 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0003, ElemCount=01, Index=0001,
Data=01 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 18 00 01 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0800, ElemCount=01, Index=0001,
Data=01 )

(4)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(5)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.5 A_PropertyExtValue_InfoReport, number of elements = 0
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport with number of elements = 0.

Procedure: A_PropertyExtValue_InfoReport to to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 0.

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 10 36 00 00 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=00, Index=0001,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )


-----

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.6 A_PropertyExtValue_InfoReport, number of elements too big
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport with number of elements too big.

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with number of elements = 2.

(1)  IN BC 10.15.254 01.01.001 6B 01 D1 00 00 00 10 36 02 00 01 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=02, Index=0001,
Data=01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.7 A_PropertyExtValue_InfoReport, index = 0 with > 2 Octets
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport with number of elements too big and
being ignored by the MaS.

Procedure: A_PropertyExtValue_InfoReport to to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with index = 0 and 3 octets of data.

(1)  IN BC 10.15.254 01.01.001 6C 01 D1 00 00 00 10 36 01 00 01 01 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.8 A_PropertyExtValue_InfoReport, with start index too big
Required BDUT Setting: None.

Purpose: Check whether BDUT ignores A_PropertyExtValue_InfoReport with start index too big.

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with start index = 2.

(1)  IN BC 10.15.254 01.01.001 6A 01 D1 00 00 00 10 36 01 00 02 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0002,
Data=01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )


-----

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.9 A_PropertyExtValue_InfoReport, to read only property
Required BDUT Setting: None.

Purpose: Check wheter BDUT ignores A_PropertyExtValue_InfoReport to read only property.

Procedure: A_PropertyExtValue_InfoReport to to read only property PID_SERIAL_NUMBER in Device
Interface Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 6F 01 D1 00 00 00 10 0B 01 00 01 01 02 03 04 05 06
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=01 02 03 04 05 06 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 0B 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=000B, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6F 01 CD 00 00 00 10 0B 01 00 01 ?? ?? ?? ?? ?? ??
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=000B, ElemCount=01, Index=0001,
Data=?? ?? ?? ?? ?? ?? )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_SERIAL_NUMBER by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.10 A_PropertyExtValue_InfoReport, additional error cases: data type conflict
Required BDUT Setting: None.

Purpose: Check wheter BDUT ignores A_PropertyExtValue_InfoReport to property with different data type
(data length).

Procedure: A_PropertyExtValue_InfoReport to accessible property PID_PROG_MODE in Device Interface
Object (Type 0) with 3 bytes data and start index = 1.

(1)  IN BC 10.15.254 01.01.001 6C 01 D1 00 00 00 10 36 01 00 01 01 01 01
:PropertyExtValueInfoReport(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=01 01 01 )

(2)  IN BC 10.15.254 01.01.001 69 01 CC 00 00 00 10 36 01 00 01 :PropertyExtValueRead(ObjType=0000,
ObjInst=0001, PropId=0036, ElemCount=01, Index=0001)

(3)  OUT BC 01.01.001 10.15.254 6A 01 CD 00 00 00 10 36 01 00 01 00
:PropertyExtValueResponse(ObjType=0000, ObjInst=0001, PropId=0036, ElemCount=01, Index=0001,
Data=00 )

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of
PID_PROG_MODE by A_PropertyExtValue_Read to make sure that value was not altered.

###### 4.4.11 A_PropertyExtValue_InfoReport, to area with higher access level, to be ignored by MaS
Required BDUT Setting: None.

Purpose: Check wheter BDUT ignores A_PropertyExtValue_InfoReport to property from lower access level
than required for writing.

Procedure: A_PropertyExtValue_InfoReport to PID 52 in User Interface Object (Type 50001) which has access
level 2/2, after having reduced access level to 3.

Set access levels

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)


-----

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 66 47 D3 00 00 00 00 00 :KeyWrite(00, 00000000)

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)

(9)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 66 4B D3 01 11 11 11 11 :KeyWrite(01, 11111111)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(13)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(14)  IN BC 10.15.254 01.01.001 66 4F D3 02 22 22 22 22 :KeyWrite(02, 22222222)

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(16)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(17)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(19)  IN BC 10.15.254 01.01.001 6B 01 D1 C3 51 00 10 34 01 00 01 00 02
:PropertyExtValueInfoReport(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=00 02 )

(20)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(21)  IN BC 10.15.254 01.01.001 66 43 D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(22)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(23)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(24)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(25)  IN BC 10.15.254 01.01.001 69 45 CC C3 51 00 10 34 01 00 01 :PropertyExtValueRead(ObjType=C351,
ObjInst=0001, PropId=0034, ElemCount=01, Index=0001)

(26)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(27)  OUT BC 01.01.001 10.15.254 6B 45 CD C3 51 00 10 34 01 00 01 00 01
:PropertyExtValueResponse(ObjType=C351, ObjInst=0001, PropId=0034, ElemCount=01, Index=0001,
Data=00 01 )

(28)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(29)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT does not respond to A_PropertyExtValue_InfoReport. Check content of PID 52 by
A_PropertyExtValue_Read to make sure that value was not altered.

Set access levels to default

(30)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(31)  IN BC 10.15.254 01.01.001 66 43 D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(32)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(33)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(34)  IN BC 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(35)  IN BC 10.15.254 01.01.001 66 47 D3 00 FF FF FF FF :KeyWrite(00, FFFFFFFF)

(36)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(37)  OUT BC 01.01.001 10.15.254 62 47 D4 00 :KeyResponse(00)


-----

(38)  IN BC 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(39)  IN BC 10.15.254 01.01.001 66 4B D3 01 FF FF FF FF :KeyWrite(01, FFFFFFFF)

(40)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(41)  OUT BC 01.01.001 10.15.254 62 4B D4 01 :KeyResponse(01)

(42)  IN BC 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

(43)  IN BC 10.15.254 01.01.001 66 4F D3 02 FF FF FF FF :KeyWrite(02, FFFFFFFF)

(44)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(45)  OUT BC 01.01.001 10.15.254 62 4F D4 02 :KeyResponse(02)

(46)  IN BC 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(47)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

##### 4.5 PropertyExtDescription_Read / Response PDU

###### 4.5.1 A_PropertyExtDescription_Read receive A_PropertyExtDescription_Response
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtDescription_Read with property addressed by
its PID and sending correct A_PropertyExtDescription_Response.

Procedure: A_PropertyExtDescription_Read to accessible property PID_SERIAL_NUMBER and
PID_DEVICE_CONTROL, both in Device Interface Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000B, DescrType=0, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0B 00 0? ?? ?? ?? ?? 16 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000B, DescrType=0, Index=000?,
DptMain=????, DptSub=????, Wr/PDT=16, ElemMax=0001, RdAcc=?, WrAcc=?)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0E 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000E, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 00 0? ?? ?? ?? ?? B3 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=000?,
DptMain=????, DptSub=????, Wr/PDT=B3, ElemMax=0001, RdAcc=?, WrAcc=?)

Optionally the following telegram can be returned instead of the previous one: property data type
PDT_GENERIC_01 instead of PDT_BITSET8.

(5)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 00 0? ?? ?? ?? ?? 91 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=000?,
DptMain=????, DptSub=????, Wr/PDT=91, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response.

###### 4.5.2 A_PropertyExtDescription_Read, not existing Interface Object Type
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtDescription_Read due to invalid Interface
Object Type and sending correct A_PropertyExtDescription_Response. Set invalid type in high and low byte
alternatively.

Procedure: A_PropertyExtDescription_Read to PID_SERIAL_NUMBER in Interface Object of type 0x000F and
0x8000.

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 0F 00 10 0B 00 00 :PropertyExtDescrRead(ObjType=000F,
ObjInst=0001, PropId=000B, DescrType=0, Index=0000)


-----

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 0F 00 10 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=000F, ObjInst=0001, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 80 00 00 10 0B 00 00 :PropertyExtDescrRead(ObjType=8000,
ObjInst=0001, PropId=000B, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 80 00 00 10 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=8000, ObjInst=0001, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response
with fields Property Description Type, DPT, writeable, PDT, max_nr_of_elem, and access of the
A_PropertyExtDescription_Response-PDU equal to zero.

###### 4.5.3 A_PropertyExtDescription_Read, not existing Object Instance
Required BDUT setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtDescription_Read due to invalid Object
Instance and sending correct A_PropertyExtDescription_Response.

Procedure: A_PropertyExtDescription_Read to Object instance 0x0000, 0x0002 and 0x0800 in Device interface
object.

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 00 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0000, PropId=000B, DescrType=0, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 00 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0000, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 20 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0002, PropId=000B, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 20 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0002, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

(5)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 80 00 0B 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0800, PropId=000B, DescrType=0, Index=0000)

(6)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 80 00 0B 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0800, PropId=000B, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response
with fields Property Description Type, DPT, writeable, PDT, max_nr_of_elem, and access of the
A_PropertyExtDescription_Response-PDU equal to zero.

###### 4.5.4 A_PropertyExtDescription_Read, by property index 
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtDescription_Read with property addressed by
its index and sending correct A_PropertyExtDescription_Response.

Procedure: A_PropertyExtDescription_Read to accessible property PID_SERIAL_NUMBER by its index
0x0003 and PID_DEVICE_CONTROL by its index 0x0005, both in Device Interface Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 00 00 03 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0000, DescrType=0, Index=0003)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0B 00 03 ?? ?? ?? ?? 16 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000B, DescrType=0, Index=0003,
DptMain=????, DptSub=????, Wr/PDT=16, ElemMax=0001, RdAcc=?, WrAcc=?)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 00 00 05 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0000, DescrType=0, Index=0005)


-----

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 00 05 ?? ?? ?? ?? B3 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=0005,
DptMain=????, DptSub=????, Wr/PDT=B3, ElemMax=0001, RdAcc=?, WrAcc=?)

Optionally the following telegram can be returned instead of the previous one: property data type
PDT_GENERIC_01 instead of PDT_BITSET8.

(5)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 00 05 ?? ?? ?? ?? 91 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=0005,
DptMain=????, DptSub=????, Wr/PDT=91, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response.

###### 4.5.5 A_PropertyExtDescription_Read, not existing property index
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtDescription_Read due to invalid PID and
sending correct A_PropertyExtDescription_Response. Set invalid property index in high and low byte
alternatively.

Procedure: A_PropertyExtDescription_Read to property index 0x00FF and 0x0800 in Device Interface Object
(Type 0).

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 00 00 FF :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0000, DescrType=0, Index=00FF)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 00 00 FF 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=0000, DescrType=0, Index=00FF,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 00 08 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0000, DescrType=0, Index=0800)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 00 08 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=0000, DescrType=0, Index=0800,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response
with fields Property Description Type, DPT, writeable, PDT, max_nr_of_elem, and access of the
A_PropertyExtDescription_Response-PDU equal to zero.

###### 4.5.6 A_PropertyExtDescription_Read, Property Description Type none zero receive A_PropertyExtDescription_Response, Property Description Type zero
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the correct A_PropertyExtDescription_Read with property description
type non zero and sending correct A_PropertyExtDescription_Response with property description type zero.

Procedure: A_PropertyExtDescription_Read to accessible property PID_SERIAL_NUMBER and
PID_DEVICE_CONTROL with property description type 0xF, both in Device Interface Object (Type 0).

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0B F0 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000B, DescrType=F, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0B 0? ?? ?? ?? ?? ?? 16 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000B, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=16, ElemMax=0001, RdAcc=?, WrAcc=?)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 0E F0 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=000E, DescrType=F, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 0? ?? ?? ?? ?? ?? B3 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=0???,
DptMain=????, DptSub=????, Wr/PDT=B3, ElemMax=0001, RdAcc=?, WrAcc=?)


-----

Optionally the following telegram can be returned instead of the previous one: property data type
PDT_GENERIC_01 instead of PDT_BITSET8.

(5)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 0E 00 05 ?? ?? ?? ?? 91 00 01 ??
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=000E, DescrType=0, Index=0005,
DptMain=????, DptSub=????, Wr/PDT=91, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response
with property description type 0x0.

###### 4.5.7 A_PropertyExtDescription_Read, not existing PID
Require BDUT setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_PropertyExtDescription_Read due to invalid PID and
sending correct A_PropertyExtDescription_Response.

Procedure: A_PropertyExtDescription_Read to PID 0x00FF and 0x0800 in Device interface object.

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 10 FF 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=00FF, DescrType=0, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 10 FF 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=00FF, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

(3)  IN BC 10.15.254 01.01.001 68 01 D2 00 00 00 18 00 00 00 :PropertyExtDescrRead(ObjType=0000,
ObjInst=0001, PropId=0800, DescrType=0, Index=0000)

(4)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 00 00 18 00 00 00 00 00 00 00 00 00 00 00
:PropertyExtDescrResponse(ObjType=0000, ObjInst=0001, PropId=0800, DescrType=0, Index=0000,
DptMain=0000, DptSub=0000, Wr/PDT=00, ElemMax=0000, RdAcc=0, WrAcc=0)

Acceptance: BDUT accepts A_PropertyExtDescription_Read and sends A_PropertyExtDescription_Response
with fields Property Description Type, DPT, writeable, PDT, max_nr_of_elem, and access of the
A_PropertyExtDescription_Response-PDU equal to zero.

##### 4.6 A_FunctionPropertyExtCommand / State_Response

All tests in this test suite (4.6.x) are CONDITIONAL and applicable when the BDUT supports function
properties of the type PDT_FUNCTION and/or PDT_CONTROL. This depends on profiles and/or manufacturer
choices.

###### 4.6.1 A_FunctionPropertyExtCommand receive A_FunctionPropertyExtState_Response
Required BDUT setting: None

Purpose: Check BDUT’s acceptance of the correct A_FunctionPropertyExtComand and sending correct
A_FunctionPropertyExtState_Response.

For SECURE DEVICES these services on a PDT_FUNCTION are already tested in 3.8.8.1 and the
PDT_FUNCTION telegrams below can be disabled.

Procedure: For SECURE DEVICES these services on a PDT_FUNCTION are already tested in 3.8.8.1 and the
PDT_FUNCTION telegrams below can be disabled.

Procedure: A_FunctionPropertyExtCommand is executed on an accessible property of type PDT_FUNCTION
(tested by a PID_PDT_FUNCTION_TEST in User Interface Object (Type 50001)) and a PDT_CONTROL
(tested by PID_LOAD_STATE_CONTROL in Application1 Interface Object (Type 3)).

To PDT_FUNCTION

(1)  IN BC 10.15.254 01.01.001 69 01 D4 C3 51 00 10 36 00 00 01 :FctPropertyExtCommand(ObjType=C351,
ObjInst=0001, PropId=0036, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 C3 51 00 10 36 ?? ?? ?? ??
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0001, PropId=0036, RetCode=??, Data=?? ?? ?? )


-----

(3)  IN BC 10.15.254 01.01.001 68 01 D5 C3 51 00 10 36 00 00 :FctPropertyExtStateRead(ObjType=C351,
ObjInst=0001, PropId=0036, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 D6 C3 51 00 10 36 ?? ?? ?? ??
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0001, PropId=0036, RetCode=??, Data=?? ?? ?? )

To PDT_CONTROL

(5)  IN 3C 60 10.15.254 01.01.001 10 01 D4 00 03 00 10 06 00 00 00 00 00 00 00 00 00 00
:FctPropertyExtCommand(ObjType=0003, ObjInst=0001, PropId=0006, Data=00 00 00 00 00 00 00 00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 03 00 10 06 00 01
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0006, RetCode=00, Data=01 )

Acceptance: BDUT accepts A_FunctionPropertyExtCommand and sends
A_FunctionPropertyExtState_Response with the function state.

###### 4.6.2 A_FunctionPropertyExtCommand with funtion returns error
Required BDUT setting: None

Purpose: Check BDUT’s acceptance of the correct A_FunctionPropertyExtComand but invalid data and sending
correct A_FunctionPropertyExtState_Response. The Return Codes are specific to the tested function property.

Procedure: See clause 3.8.8.2 as an example.

Acceptance: BDUT accepts A_FunctionPropertyExtCommand and sends
A_FunctionPropertyExtState_Response with the function state and Return Code specified for the tested function
property. For clause 3.8.8.2 these are F2 and F8.

###### 4.6.3 A_FunctionPropertyExtCommand, not existing Interface Object Type
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtComand due to invalid Interface
Object Type and sending correct A_FunctionPropertyExtState_Response. Set invalid type in high and low byte
alternatively.

Procedure: A_FunctionPropertyExtComand to PID_OPERATION_MODE in Interface Object of type 0x000F
and 0x8000.

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 0F 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=000F,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 0F 00 10 34 FD :FctPropertyExtStateResponse(ObjType=000F,
ObjInst=0001, PropId=0034, RetCode=FD, Data=)

(3)  IN BC 10.15.254 01.01.001 69 01 D4 80 00 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=8000,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 80 00 00 10 34 FD :FctPropertyExtStateResponse(ObjType=8000,
ObjInst=0001, PropId=0034, RetCode=FD, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtComand and sends A_FunctionPropertyExtState_Response
with return code E_ADDRESS_VOID without any data.

###### 4.6.4 A_FunctionPropertyExtCommand, not existing PID
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtCommand due to invalid PID and
sending correct A_FunctionPropertyExtState_Response. Set invalid PID in high and low byte alternatively.

Procedure: A_FunctionPropertyExtCommand to PID 0x0003 and 0x0800 in Application1 Interface Object (Type
3).

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 03 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0003, Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 03 00 10 03 FD :FctPropertyExtStateResponse(ObjType=0003,
ObjInst=0001, PropId=0003, RetCode=FD, Data=)


-----

(3)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 18 00 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0800, Data=00 00 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 03 00 18 00 FD :FctPropertyExtStateResponse(ObjType=0003,
ObjInst=0001, PropId=0800, RetCode=FD, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with return code E_ADDRESS_VOID without any data.

###### 4.6.5 A_FunctionPropertyExtCommand, not of type PDT_FUNCTION or PDT_CONTROL
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtCommand due to data property type
and sending correct A_FunctionPropertyExtState_Response.

Procedure: A_FunctionPropertyExtCommand to PID_MANUFACTURER_ID in the Device Interface Object
(Type 0).

(1)  IN BC 10.15.254 01.01.001 68 01 D4 00 00 00 10 0C 00 01 :FctPropertyExtCommand(ObjType=0000,
ObjInst=0001, PropId=000C, Data=00 01 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 00 00 10 0C FE :FctPropertyExtStateResponse(ObjType=0000,
ObjInst=0001, PropId=000C, RetCode=FE, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtCommand and sends
A_FunctionPropertyExtState_Response with return code E_DATA_TYPE_CONFLICT without any data.

##### 4.7 A_FunctionPropertyExtState_Read / Response

All tests in this test suite (4.7.x) are CONDITIONAL and applicable when the BDUT supports function
properties of the type PDT_FUNCTION and/or PDT_CONTROL. This depends on profiles and/or manufacturer
choices.

###### 4.7.1 A_FunctionPropertyExtState_Read receive A_FunctionPropertyExtState_Response
Require BDUT setting: None

Purpose: Check BDUT’s acceptance of the correct A_FunctionPropertyExtState_Read and sending correct
A_FunctionPropertyExtState_Response.

Procedure: For SECURE DEVICES these services on a PDT_FUNCTION are already tested in 3.8.8.1.

Procedure: For non-SECURE DEVICES these services are tested in 4.6.1.

To PDT_FUNCTION

(tested in 4.6.1)

To PDT_CONTROL

(1)  IN BC 10.15.254 01.01.001 66 01 D5 00 03 00 10 05 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0005, Data=)

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 03 00 10 05 00 01
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0005, RetCode=00, Data=01 )

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with the function state.

###### 4.7.2 A_FunctionPropertyExtState_Read, not existing Interface Object Type
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtState_Read due to invalid Interface
Object Type and sending correct A_FunctionPropertyExtState_Response. Set invalid type in high and low byte
alternatively.


-----

Procedure: A_FunctionPropertyExtState_Read to PID_OPERATION_MODE in Interface Object of type
0x000F and 0x8000

(1)  IN BC 10.15.254 01.01.001 68 01 D5 00 0F 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=000F,
ObjInst=0001, PropId=0034, Data=00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 0F 00 10 34 FD :FctPropertyExtStateResponse(ObjType=000F,
ObjInst=0001, PropId=0034, RetCode=FD, Data=)

(3)  IN BC 10.15.254 01.01.001 68 01 D5 80 00 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=8000,
ObjInst=0001, PropId=0034, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 80 00 00 10 34 FD :FctPropertyExtStateResponse(ObjType=8000,
ObjInst=0001, PropId=0034, RetCode=FD, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with return code E_ADDRESS_VOID without any data.

###### 4.7.3 A_FunctionPropertyExtState_Read, not existing Object Instance
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtState_Read due to invalid Interface
Object Instance and sending correct A_FunctionPropertyExtState_Response. Set invalid type in high and low
byte alternatively.

Procedure: A_FunctionPropertyExtState_Read to PID_OPERATION_MODE in Interface Object of instance
0x0000, 0x0002 and 0x0800

(1)  IN BC 10.15.254 01.01.001 68 01 D5 C3 51 00 00 34 00 00 :FctPropertyExtStateRead(ObjType=C351,
ObjInst=0000, PropId=0034, Data=00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 C3 51 00 00 34 FD
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0000, PropId=0034, RetCode=FD, Data=)

(3)  IN BC 10.15.254 01.01.001 68 01 D5 C3 51 00 20 34 00 00 :FctPropertyExtStateRead(ObjType=C351,
ObjInst=0002, PropId=0034, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 C3 51 00 20 34 FD
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0002, PropId=0034, RetCode=FD, Data=)

(5)  IN BC 10.15.254 01.01.001 68 01 D5 C3 51 80 00 34 00 00 :FctPropertyExtStateRead(ObjType=C351,
ObjInst=0800, PropId=0034, Data=00 00 )

(6)  OUT BC 01.01.001 10.15.254 67 01 D6 C3 51 80 00 34 FD
:FctPropertyExtStateResponse(ObjType=C351, ObjInst=0800, PropId=0034, RetCode=FD, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with return code E_ADDRESS_VOID without any data.

###### 4.7.4 A_FunctionPropertyExtState_Read, not existing PID
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtState_Read due to invalid PID and
sending correct A_FunctionPropertyExtState_Response. Set invalid PID in high and low byte alternatively.

Procedure: A_FunctionPropertyExtState_Read to PID 0x0003 and 0x0800 in Application1 Interface Object
(Type 3).

(1)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 03 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0003, Data=00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 03 00 10 03 FD :FctPropertyExtStateResponse(ObjType=0003,
ObjInst=0001, PropId=0003, RetCode=FD, Data=)

(3)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 18 00 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0800, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 03 00 18 00 FD :FctPropertyExtStateResponse(ObjType=0003,
ObjInst=0001, PropId=0800, RetCode=FD, Data=)


-----

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with return code E_ADDRESS_VOID without any data.

###### 4.7.5 A_FunctionPropertyExtState_Read, not of type PDT_FUNCTION or PDT_CONTROL
Required BDUT Setting: None.

Purpose: Check BDUT’s acceptance of the incorrect A_FunctionPropertyExtState_Read due to data property
type and sending correct A_FunctionPropertyExtState_Response.

Procedure: A_FunctionPropertyExtState_Read to PID_MANUFACTURER_ID in Device Interface Object
(Type 0).

(1)  IN BC 10.15.254 01.01.001 66 01 D5 00 00 00 10 0C :FctPropertyExtStateRead(ObjType=0000,
ObjInst=0001, PropId=000C, Data=)

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 00 00 10 0C FE :FctPropertyExtStateResponse(ObjType=0000,
ObjInst=0001, PropId=000C, RetCode=FE, Data=)

Acceptance: BDUT accepts A_FunctionPropertyExtState_Read and sends
A_FunctionPropertyExtState_Response with return code E_DATA_TYPE_CONFLICT without any data.


-----

#### 5 Test Cases for Application Note 177 Extended Memory Services[13]

##### 5.1 MemoryExtended_Write

###### 5.1.1 correct MemoryExtended_Write
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s acceptance of the correct MemoryExtended_Write and sending correct
MemoryExtended_Response.

Procedure: Send MemoryExtended_Write to accessible memory.

(1)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 A0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=0A000, Data=01 02 03 04 05 06 )

(2)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 A0 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=0A000, Data=)

(3)  OUT BC 01.01.001 10.15.254 67 01 FC 01 00 A0 00 A8 A3
:MemoryExtendedWriteResponse(RetCode=01, Address=0A000, Data=A8 A3 )

(4)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 A0 00 :MemoryExtendedRead(Byte Count=06,
Address=0A000)

(5)  OUT BC 01.01.001 10.15.254 6B 01 FE 00 00 A0 00 01 02 03 04 05 06
:MemoryExtendedReadResponse(RetCode=00, Address=0A000, Data=01 02 03 04 05 06 )

Acceptance: BDUT accepts MemoryExtended_Write and sends MemoryExtended_Response with Return Code
00h.

###### 5.1.2 MemoryExtended_Write up to MAX_APDU_LENGTH
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s acceptance of the correct MemoryExtended_Write and sending correct
MemoryExtended_Response.

Procedure: Send MemoryExtended_Write to accessible memory and write maximum amount of data
corresponding to MAX_APDU_LENGTH of BDUT (here assumed to be 254).

(1)  IN 3C 60 10.15.254 01.01.001 FE 01 FB F9 00 A0 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10
11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32
33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54
55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76
77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98
99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5
D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4
F5 F6 F7 F8 F9 :MemoryExtendedWrite(Byte Count=F9, Address=0A000, Data=01 02 03 04 05 06 07 08 09 0A
0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C
2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E
4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70
71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92
93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1
B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF
D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED
EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 )

13 DV specifications taken as a basis – tests applicable for both KNX data secure as well as IP Secure
###### devices.  The following memory map is assumed for the underneath tests. The order of the type of memory is also required to perform the underneath tests (if supported by BDUT): 0A000h – 0AFFFh
 [read/writable] - 0B000h – 0BFFFh [read only] - 0C000h – 0CFFFh [write only]


-----

(2)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 A0 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=0A000, Data=)

(3)  OUT BC 01.01.001 10.15.254 67 01 FC 01 00 A0 00 B9 F9
:MemoryExtendedWriteResponse(RetCode=01, Address=0A000, Data=B9 F9 )

(4)  IN BC 10.15.254 01.01.001 65 01 FD F9 00 A0 00 :MemoryExtendedRead(Byte Count=F9,
Address=0A000)

(5)  OUT 3C 60 01.01.001 10.15.254 FE 01 FE 00 00 A0 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31
32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53
54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75
76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97
98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6
B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4
D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3
F4 F5 F6 F7 F8 F9 :MemoryExtendedReadResponse(RetCode=00, Address=0A000, Data=01 02 03 04 05 06 07
08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29
2A 2B 2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B
4C 4D 4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D
6E 6F 70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F
90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF
B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD
CE CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB
EC ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 )

Acceptance: BDUT accepts MemoryExtended_Write and sends MemoryExtended_Response with Return Code
00h.

###### 5.1.3 MemoryExtended_Write – not authorized
This test case is CONDITIONAL on the full support for Authorization.

Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Write to accessible memory when not authorized and
sends MemoryExtended_Response with Return Code FCh.

Procedure: Send Authorize Request with key for access level x (in the underneath example 3). Send
MemoryExtended_Write to memory that requires higher access level than x (in the underneath example 3).

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

access level to 00

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

MemExtWrite succeeds

(6)  IN BC 10.15.254 01.01.001 6B 45 FB 06 00 A0 00 00 0F 19 01 19 02 :MemoryExtendedWrite(Byte
Count=06, Address=0A000, Data=00 0F 19 01 19 02 )

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 65 45 FC 00 00 A0 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=0A000, Data=)

(9)  IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

Access level to 03

(10)  IN BC 10.15.254 01.01.001 66 4B D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)


-----

(12)  OUT BC 01.01.001 10.15.254 62 4B D2 03 :AuthorizeResponse(03)

(13)  IN B0 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

MemExtWrite does not succeed

(14)  IN BC 10.15.254 01.01.001 6B 4D FB 06 00 A0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=0A000, Data=01 02 03 04 05 06 )

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)

(16)  OUT BC 01.01.001 10.15.254 65 4D FC FC 00 A0 00 :MemoryExtendedWriteResponse(RetCode=FC,
Address=0A000, Data=)

(17)  IN B0 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

(18)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT rejects MemoryExtended_Write and sends MemoryExtended_Response with Return Code
FCh.

###### 5.1.4 MemoryExtended_Write – read only memory (if available in BDUT)
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Write to read only memory and sends
MemoryExtended_Response with Return Code FBh.

Procedure: [to be described]

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

Access to service, shall be denied as read only

(6)  IN BC 10.15.254 01.01.001 6B 45 FB 06 00 B0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=0B000, Data=01 02 03 04 05 06 )

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 65 45 FC FB 00 B0 00 :MemoryExtendedWriteResponse(RetCode=FB,
Address=0B000, Data=)

(9)  IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

(10)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT rejects MemoryExtended_Write and sends MemoryExtended_Response with Return Code
FBh.

###### 5.1.5 MemoryExtended_Write – partly read only memory (if available in BDUT)
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Write to partly read only memory and sends
MemoryExtended_Response with Return Code FBh.

Procedure: [to be described]

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 6B 41 FB 06 00 AF FF 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=0AFFF, Data=01 02 03 04 05 06 )

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)


-----

(4)  OUT BC 01.01.001 10.15.254 65 41 FC FB 00 AF FF :MemoryExtendedWriteResponse(RetCode=FB,
Address=0AFFF, Data=)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

(7)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(8)  IN BC 10.15.254 01.01.001 6B 41 FB 06 00 BF FF 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=0BFFF, Data=01 02 03 04 05 06 )

(9)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(10)  OUT BC 01.01.001 10.15.254 65 41 FC FB 00 BF FF :MemoryExtendedWriteResponse(RetCode=FB,
Address=0BFFF, Data=)

(11)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(12)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT rejects MemoryExtended_Write to partly read only memory and sends
MemoryExtended_Response with Return Code FBh.

###### 5.1.6 MemoryExtended_Write – invalid size
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s reaction on MemoryExtended_Write with invalid data size.

Procedure: Send MemoryExtended_Write with

- data size = 0

- data size lower than written data

- data size bigger than written data

- data size bigger than supported data size (If supported APDU_length of BDUT is lower than 249 bytes (F9h),
then the byte count shall be set to the APDU_length +1 and the number of bytes written to APDU_length)

Byte Count=0 with 1 byte data

(1)  IN BC 10.15.254 01.01.001 66 01 FB 00 00 A0 00 01 :MemoryExtendedWrite(Byte Count=00,
Address=0A000, Data=01 )

(2)  OUT BC 01.01.001 10.15.254 65 01 FC FF 00 A0 00 :MemoryExtendedWriteResponse(RetCode=FF,
Address=0A000, Data=)

Byte Count=5 with 6 bytes data

(3)  IN BC 10.15.254 01.01.001 6B 01 FB 05 00 A0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=05, Address=0A000, Data=01 02 03 04 05 06 )

(4)  OUT BC 01.01.001 10.15.254 65 01 FC FF 00 A0 00 :MemoryExtendedWriteResponse(RetCode=FF,
Address=0A000, Data=)

Byte Count=7 with 6 bytes data

(5)  IN BC 10.15.254 01.01.001 6B 01 FB 07 00 A0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=07, Address=0A000, Data=01 02 03 04 05 06 )

(6)  OUT BC 01.01.001 10.15.254 65 01 FC FF 00 A0 00 :MemoryExtendedWriteResponse(RetCode=FF,
Address=0A000, Data=)

Write 249 bytes, length is inconsistent - as otherwise causing link layer error.

If supported APDU_length of BDUT is lower than 249 bytes (F9h), then the byte count shall be set to the
APDU_length +1 and the number of bytes written to APDU_length.


-----

(7)  IN 3C 60 10.15.254 01.01.001 FE 01 FB FA 00 A0 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10
11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B 2C 2D 2E 2F 30 31 32
33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D 4E 4F 50 51 52 53 54
55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F 70 71 72 73 74 75 76
77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91 92 93 94 95 96 97 98
99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0 B1 B2 B3 B4 B5 B6 B7
B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE CF D0 D1 D2 D3 D4 D5
D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC ED EE EF F0 F1 F2 F3 F4
F5 F6 F7 F8 F9 :MemoryExtendedWrite(Byte Count=FA, Address=0A000, Data=01 02 03 04 05 06 07 08 09
0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20 21 22 23 24 25 26 27 28 29 2A 2B
2C 2D 2E 2F 30 31 32 33 34 35 36 37 38 39 3A 3B 3C 3D 3E 3F 40 41 42 43 44 45 46 47 48 49 4A 4B 4C 4D
4E 4F 50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F 60 61 62 63 64 65 66 67 68 69 6A 6B 6C 6D 6E 6F
70 71 72 73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 90 91
92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF B0
B1 B2 B3 B4 B5 B6 B7 B8 B9 BA BB BC BD BE BF C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 CA CB CC CD CE
CF D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 DA DB DC DD DE DF E0 E1 E2 E3 E4 E5 E6 E7 E8 E9 EA EB EC
ED EE EF F0 F1 F2 F3 F4 F5 F6 F7 F8 F9 )

(8)  OUT BC 01.01.001 10.15.254 65 01 FC FF 00 A0 00 :MemoryExtendedWriteResponse(RetCode=FF,
Address=0A000, Data=)

Acceptance: BDUT rejects MemoryExtended_Write with invalid size and sends MemoryExtended_Response
with

Return Code FFh in case of MemoryExtended_Write with data size = 0.

Return Code FFh in case of MemoryExtended_Write with data size lower than written data.

Return Code FFh in case of MemoryExtended_Write with data size bigger than written data.

Return Code FFh in case of MemoryExtended_Write with data size bigger than supported data size.

###### 5.1.7 MemoryExtended_Write – invalid memory address
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s reaction to MemoryExtended_Write on not supported memory address.

Procedure: [to be described]

(1)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 00 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=00000, Data=01 02 03 04 05 06 )

(2)  OUT BC 01.01.001 10.15.254 65 01 FC FD 00 00 00 :MemoryExtendedWriteResponse(RetCode=FD,
Address=00000, Data=)

(3)  IN BC 10.15.254 01.01.001 6B 01 FB 06 0F A0 00 01 02 03 04 05 06 :MemoryExtendedWrite(Byte
Count=06, Address=FA000, Data=01 02 03 04 05 06 )

(4)  OUT BC 01.01.001 10.15.254 65 01 FC FD 0F A0 00 :MemoryExtendedWriteResponse(RetCode=FD,
Address=FA000, Data=)

Acceptance: BDUT rejects MemoryExtended_Write with invalid memory address and sends
MemoryExtended_Response with Return Code FDh.

Test preparation

Write memory with some known values.

(5)  IN BC 10.15.254 01.01.001 6B 01 FB 06 00 A0 00 12 34 56 78 9A BC :MemoryExtendedWrite(Byte
Count=06, Address=0A000, Data=12 34 56 78 9A BC )

(6)  OUT BC 01.01.001 10.15.254 65 01 FC 00 00 A0 00 :MemoryExtendedWriteResponse(RetCode=00,
Address=0A000, Data=)


-----

##### 5.2 MemoryExtended_Read

###### 5.2.1 correct MemoryExtended_Read
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s acceptance of the correct MemoryExtended_Read and sending correct
MemoryExtended_Response.

Procedure: Send MemoryExtended_Read to accessible memory (in this example 0A000h with memory content
123456789ABCh).

(1)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 A0 00 :MemoryExtendedRead(Byte Count=06,
Address=0A000)

(2)  OUT BC 01.01.001 10.15.254 6B 01 FE 00 00 A0 00 12 34 56 78 9A BC
:MemoryExtendedReadResponse(RetCode=00, Address=0A000, Data=12 34 56 78 9A BC )

Acceptance: BDUT accepts MemoryExtended_Read and sends MemoryExtended_Response with Return Code
00h and valid data.

###### 5.2.2 MemoryExtended_Read – not authorized
This test case is CONDITIONAL on the full support for Authorization.

Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Read to accessible memory when not authorized and
sends MemoryExtended_Response with Return Code FCh.

Procedure: Send Authorize Request with key for access level x (in the underneath example 3). Send
MemoryExtended_Read to memory that requires higher access level than x (in the underneath example 3).

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

access level set to 00

(2)  IN BC 10.15.254 01.01.001 66 43 D1 00 FF FF FF FF :AuthorizeRequest(FFFFFFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 62 43 D2 00 :AuthorizeResponse(00)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

MemExt_Read positive

(6)  IN BC 10.15.254 01.01.001 65 45 FD 06 00 A0 00 :MemoryExtendedRead(Byte Count=06,
Address=0A000)

(7)  OUT B0 01.01.001 10.15.254 60 C6 :T-Ack(Seq=1)

(8)  OUT BC 01.01.001 10.15.254 6B 45 FE 00 00 A0 00 12 34 56 78 9A BC
:MemoryExtendedReadResponse(RetCode=00, Address=0A000, Data=12 34 56 78 9A BC )

(9)  IN B0 10.15.254 01.01.001 60 C6 :T-Ack(Seq=1)

access level set to 03

(10)  IN BC 10.15.254 01.01.001 66 4B D1 00 00 00 00 00 :AuthorizeRequest(00000000)

(11)  OUT B0 01.01.001 10.15.254 60 CA :T-Ack(Seq=2)

(12)  OUT BC 01.01.001 10.15.254 62 4B D2 03 :AuthorizeResponse(03)

(13)  IN B0 10.15.254 01.01.001 60 CA :T-Ack(Seq=2)

MemExt_Read negative

(14)  IN BC 10.15.254 01.01.001 65 4D FD 06 00 A0 00 :MemoryExtendedRead(Byte Count=06,
Address=0A000)

(15)  OUT B0 01.01.001 10.15.254 60 CE :T-Ack(Seq=3)


-----

(16)  OUT BC 01.01.001 10.15.254 65 4D FE FC 00 A0 00 :MemoryExtendedReadResponse(RetCode=FC,
Address=0A000, Data=)

(17)  IN B0 10.15.254 01.01.001 60 CE :T-Ack(Seq=3)

Acceptance: BDUT rejects MemoryExtended_Read and sends MemoryExtended_Response with Return Code
FCh and no data.

###### 5.2.3 MemoryExtended_Read – write only memory (if available in BDUT)
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Read to accessible memory that is write only and sends
MemoryExtended_Response with Return Code FAh.

Procedure: Send MemoryExtended_Read to memory that is write only.

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 65 41 FD 06 00 C0 00 :MemoryExtendedRead(Byte Count=06,
Address=0C000)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 65 41 FE FA 00 C0 00 :MemoryExtendedReadResponse(RetCode=FA,
Address=0C000, Data=)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT rejects MemoryExtended_Read and sends MemoryExtended_Response with Return Code
FAh and no data.

###### 5.2.4 MemoryExtended_Read – partly write only memory (if available in BDUT)
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check that BDUT rejects MemoryExtended_Read to accessible memory that is partly write only and
sends MemoryExtended_Response with Return Code FAh.

Procedure: Send MemoryExtended_Read to memory that is partly write only.

(1)  IN BC 10.15.254 01.01.001 60 80 :T-Connect(Addr=01.01.001)

(2)  IN BC 10.15.254 01.01.001 65 41 FD 06 00 BF FF :MemoryExtendedRead(Byte Count=06,
Address=0BFFF)

(3)  OUT B0 01.01.001 10.15.254 60 C2 :T-Ack(Seq=0)

(4)  OUT BC 01.01.001 10.15.254 65 41 FE FA 00 BF FF :MemoryExtendedReadResponse(RetCode=FA,
Address=0BFFF, Data=)

(5)  IN B0 10.15.254 01.01.001 60 C2 :T-Ack(Seq=0)

(6)  IN BC 10.15.254 01.01.001 60 81 :T-Disconnect

Acceptance: BDUT rejects MemoryExtended_Read and sends MemoryExtended_Response with Return Code
FAh and no data.

###### 5.2.5 MemoryExtended_Read – invalid size - exceeding MAX APDU length
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s reaction on MemoryExtended_Read with invalid data size.

Procedure: Send MemoryExtended_Read with data size = 0, with data size bigger than 249 (max size supported
with extended L_Data frame), with data size bigger than the supported APDU length (in case of devices
supporting APDU length smaller than 254).

MemExt_Read 0 bytes


-----

(1)  IN BC 10.15.254 01.01.001 65 01 FD 00 00 A0 00 :MemoryExtendedRead(Byte Count=00,
Address=0A000)

(2)  OUT BC 01.01.001 10.15.254 65 01 FE FF 00 A0 00 :MemoryExtendedReadResponse(RetCode=FF,
Address=0A000, Data=)

MemExt_Read 250 bytes (this exceeds max size supported with extended L-Data Frame)

(3)  IN BC 10.15.254 01.01.001 65 01 FD FA 00 A0 00 :MemoryExtendedRead(Byte Count=FA,
Address=0A000)

(4)  OUT BC 01.01.001 10.15.254 65 01 FE F4 00 A0 00 :MemoryExtendedReadResponse(RetCode=F4,
Address=0A000, Data=)

Only for devices supporting APDU length smaller than 254

MemExt_Read 249 bytes, but response would exceed APDU length

(5)  IN BC 10.15.254 01.01.001 65 01 FD F9 00 A0 00 :MemoryExtendedRead(Byte Count=F9,
Address=0A000)

(6)  OUT BC 01.01.001 10.15.254 65 01 FE F4 00 A0 00 :MemoryExtendedReadResponse(RetCode=F4,
Address=0A000, Data=)

Acceptance: BDUT rejects MemoryExtended_Read with invalid size and sends MemoryExtended_Response
with

Return Code FFh in case of MemoryExtended_Read with data size = 0

Return Code F4h in case of MemoryExtended_Read with data size data size bigger than 249 (max size supported
with extended L_Data frame)

Return Code F4h in case of MemoryExtended_Read with data size bigger than the supported APDU length

###### 5.2.6 MemoryExtended_Read – invalid memory address 
Required BDUT setting: The LSM of the memory is in state loading.

Purpose: Check BDUT’s reaction to MemoryExtended_Read on not supported memory address (in the
underneath example 00000h and FA000h).

Procedure: [to be described]

(1)  IN BC 10.15.254 01.01.001 65 01 FD 06 00 00 00 :MemoryExtendedRead(Byte Count=06,
Address=00000)

(2)  OUT BC 01.01.001 10.15.254 65 01 FE FD 00 00 00 :MemoryExtendedReadResponse(RetCode=FD,
Address=00000, Data=)

(3)  IN BC 10.15.254 01.01.001 65 01 FD 06 0F A0 00 :MemoryExtendedRead(Byte Count=06,
Address=FA000)

(4)  OUT BC 01.01.001 10.15.254 65 01 FE FD 0F A0 00 :MemoryExtendedReadResponse(RetCode=FD,
Address=FA000, Data=)

Acceptance: BDUT rejects MemoryExtended_Read with invalid memory address and sends
MemoryExtended_Response with Return Code FDh and no data.


-----

#### 6 Test Cases for Application Note 170 Group Object Diagnostics[14]

##### 6.1 Testing of PID_OPERATION_MODE

###### 6.1.1 Verification of Property Description of PID_OPERATION_MODE
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a correct PropertyExtDescrResponse when sending a
PropertyExtDescrRead to the PID_OPERATION_MODE.

Procedure: Send a PropertyExtDescrRead to the Application Program Object (Object Type 3), property 52d.
Wait for the BDUT to report with a PropertyExtDescrResponse, with the proper data.

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 03 00 10 34 00 00 :PropertyExtDescrRead(ObjType=0003,
ObjInst=0001, PropId=0034, DescrType=0, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 03 00 10 34 00 ?? 00 00 00 00 BE 00 01 ??
:PropertyExtDescrResponse(ObjType=0003, ObjInst=0001, PropId=0034, DescrType=0, Index=00??,
DptMain=0000, DptSub=0000, Wr/PDT=BE, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: The BDUT behaves as specified above.

###### 6.1.2 Reading normal operation mode
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT informs via FctPropertyExtStateResponse that it is currently in normal operation
mode.

Procedure: Send a FctPropertyExtStateRead to the Application Program Object (Object Type 3), property 52d.
Wait for the BDUT to report normal operation mode (00h), normally with Time left value set to FFh (no time
out) with return code 20h (= current operation mode).

(1)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.3 Reading normal operation mode – negative response due to invalid ReadServiceID coding
To be completed.

###### 6.1.4 Reading normal operation mode – negative response due to wrong coding of reserved octet
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when
FctPropertyExtSateRead contains incorrect coding for the reserved octet (values other than 00h).

Procedure: Send a FctPropertyExtStateRead to the Application Program Object (Object Type 3), property 52d
with coding 01h for the reserved octet. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Read service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 01 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=01 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

14 Tests only applicable for KNX data secure devices.


-----

Acceptance: The BDUT behaves as specified above.

###### 6.1.5 Reading normal operation mode – negative response due to wrong ReadServiceID
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when
FctPropertyExtSateRead contains incorrect coding for the ReadServiceID (values other than 00h).

Procedure: Send a FctPropertyExtStateRead to the Application Program Object (Object Type 3), property 52d
with coding 01h for the ReadServiceID. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Read service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 01 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 01 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=01 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.6 Activating and deactivating Diagnostic Mode
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a positive FctPropertyExtStateResponse when setting it into
diagnostic mode with a correct FctPropertyExtCommand, check whether BDUT again responds with a positive
FctPropertyExtStateResponse when returning it to normal mode with a correct FctPropertyExtCommand.

Procedure: Send a FctPropertyExtCommand to the Application Program Object (Object Type 3), property 52d
with the correct service ID (00h for write) and Service Info (01h for activating the diagnostic mode). Wait for the
BDUT to report with a positive FctPropertyExtStateResponse, return code 20h, the Write service ID and the
service result (including operation mode and time left). Send again a FctPropertyExtCommand to the
Application Program Object (Object Type 3), property 52d with the correct service ID (00h for write) and
Service Info (00h for deactivating the diagnostic mode). Wait for the BDUT to report with a positive
FctPropertyExtStateResponse, return code 20h, the Write service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1E
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1E )

(3)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1E
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1E )

(5)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

(7)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.7 Attempting to activate Diagnostic Mode with incorrect data
Required BDUT setting: the BDUT is in normal operation mode.


-----

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when trying to set it into
diagnostic mode with an incorrect FctPropertyExtCommand (one byte more/one byte less).

Procedure: Send a FctPropertyExtCommand to the Application Program Object (Object Type 3), property 52d
with one byte more, one respectively two bytes less of data. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Write service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 67 01 D4 00 03 00 10 34 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 ?? 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=?? 00 FF )

(3)  IN BC 10.15.254 01.01.001 68 01 D4 00 03 00 10 34 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

(5)  IN BC 10.15.254 01.01.001 6A 01 D4 00 03 00 10 34 00 00 01 00
:FctPropertyExtCommand(ObjType=0003, ObjInst=0001, PropId=0034, Data=00 00 01 00 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.8 Attempting to activate Diagnostic Mode with incorrect coding for reserved octet
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when trying to set it into
diagnostic mode with an incorrect FctPropertyExtCommand (incorrect coding for reserved octet).

Procedure: Send a FctPropertyExtCommand to the Application Program Object (Object Type 3), property 52d
with the reserved octet set to other values than 00h. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Write service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 01 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=01 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.9 Attempting to activate Diagnostic Mode with incorrect Service ID
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when trying to set it into
diagnostic mode with an incorrect FctPropertyExtCommand (incorrect Service ID).

Procedure: Send a FctPropertyExtCommand to the Application Program Object (Object Type 3), property 52d
with the service ID set to other values than 00h. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Write service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 01 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 01 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 01 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=01 00 FF )

Acceptance: The BDUT behaves as specified above.


-----

###### 6.1.10 Attempting to activate Diagnostic Mode with invalid Operation Mode
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when trying to set it into
diagnostic mode with an incorrect FctPropertyExtCommand (incorrect operation Mode).

Procedure: Send a FctPropertyExtCommand to the Application Program Object (Object Type 3), property 52d
with the Operation Mode set to other values than 00h or 01h. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse, return code A0h, the Write service ID and the service result (including operation
mode and time left).

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 02 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 02 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

###### 6.1.11 Effect of Run State Machine on Diagnostic Mode – Verification of time out
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT does not allow changing the Operation Mode in case the Run State Machine is
not in the state ‘Running’.

Procedure: Send a FctPropertyCmd to the Interfaceprogram Object (Object Type 4), property 06d
(PID_RUN_STATE_CONTROL) to halt the application program. Try sending several FctPropertyExt
commands. Wait for the BDUT to report with a negative FctPropertyExtStateResponse, return code A0h, the
Write service ID and the service result (including operation mode and time left).

Send again FctPropertyCmd to the Interfaceprogram Object (Object Type 4), property 06d
(PID_RUN_STATE_CONTROL) to put the application program to running. Try sending several FctPropertyExt
commands. Wait for the BDUT to report with a positive FctPropertyExtStateResponse. Wait for 30 seconds and
check whether BDUT automatically switches back to normal mode.

(1)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 03 00 10 06 01 00 01 02 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
Data=02 00 00 00 00 00 00 00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 03 00 10 06 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
RetCode=00)

(3)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(4)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

(5)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(6)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 A0 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=A0, Data=00 00 FF )

(7)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

(9)  IN 3C 60 10.15.254 01.01.001 13 01 CE 00 03 00 10 06 01 00 01 01 00 00 00 00 00 00 00 00 00
:PropertyExtValueWriteCon(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
Data=01 00 00 00 00 00 00 00 00 00 )


-----

(10)  OUT BC 01.01.001 10.15.254 6A 01 CF 00 03 00 10 06 01 00 01 00
:PropertyExtValueWriteConRes(ObjType=0003, ObjInst=0001, PropId=0006, ElemCount=01, Index=0001,
RetCode=00)

BDUT shall report Time Left of minimum 30 seconds.

(11)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(12)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1E
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1E )

Wait for a period slightly shorter than the 'Initial Time Left' value specified in the data sheet (default: 30
seconds).

Change the waiting time in the next line to 'Initial Time Left' minus 1 second (default: 29 seconds).

(13)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(14)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 0?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 0? )

Wait for about 2 seconds

BDUT shall have switched back to normal mode

(15)  IN BC 10.15.254 01.01.001 68 01 D5 00 03 00 10 34 00 00 :FctPropertyExtStateRead(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 )

(16)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Acceptance: The BDUT behaves as specified above.

##### 6.2 Testing of PID_GO_DIAGNOSTICS

###### 6.2.1 Verification of Property Description of PID_GO_DIAGNOSTICS
Required BDUT setting: the BDUT is in normal operation mode.

Purpose: Check whether BDUT responds with a correct PropertyExtDescrResponse when sending a
PropertyExtDescrRead to the PID_GO_DIAGNOSTICS.

Procedure: Send a PropertyExtDescrRead to the Group Object Table (Object Type 9), property 66d. Wait for the
BDUT to report with a PropertyExtDescrResponse, with the proper data.

(1)  IN BC 10.15.254 01.01.001 68 01 D2 00 09 00 10 42 00 00 :PropertyExtDescrRead(ObjType=0009,
ObjInst=0001, PropId=0042, DescrType=0, Index=0000)

(2)  OUT 3C 60 01.01.001 10.15.254 10 01 D3 00 09 00 10 42 00 0? 00 00 00 00 BE 00 01 ??
:PropertyExtDescrResponse(ObjType=0009, ObjInst=0001, PropId=0042, DescrType=0, Index=000?,
DptMain=0000, DptSub=0000, Wr/PDT=BE, ElemMax=0001, RdAcc=?, WrAcc=?)

Acceptance: The BDUT behaves as specified above.

###### 6.2.2 GO Diagnostics - General negative tests
Required BDUT setting: the BDUT shall be either be in diagnostic or normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to

- With an invalid WriteService ID

- With a WriteServiceID = 0 but with invalid reserved octet

- With a ReadServiceID = 2

- With a ReadServiceID = 0 but with invalid reserved octet

Procedure: Send a


-----

FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d but with an invalid
WriteService ID.

FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with WriteService ID = 0 but
with invalid reserved octet.

FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d but with an invalid ReadService
ID.

FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with a ReadService ID = 0 but
with invalid reserved octet.

Wait for the BDUT to report with a negative FctPropertyExtStateResponse with the return code F2h
(E_COMMAND_INVALID), Read-or Write Service ID as in the request and no data.

WriteServiceID=5 (invalid)

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 05 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 05 00 07 AA )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F2 05
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F2, Data=05 )

WriteServiceID=0 with invalid reserved octet

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 01 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=01 00 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

ReadServiceID=2 (invalid)

(5)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 02 00 08
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 08 )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F2 02
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F2, Data=02 )

ReadServiceID=0 with invalid reserved octet

(7)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 01 00 00 08
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=01 00 00 08 )

(8)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Acceptance: The BDUT behaves as specified above.

###### 6.2.3 WriteService ID 00h – set Local GO Value – Positive Case
Required BDUT setting: the BDUT shall be set in diagnostic and then in normal operation mode.

Purpose: Check whether BDUT responds with a correct FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to a valid Group Object and with correct data for the object value.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d indicating
a correct group object number and object value. Wait for the BDUT to report with a
FctPropertyExtStateResponse repeating the group object number, informing about the GO status and confirming
the locally set GO value.

Setting diagnostic mode

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1? )

Writing value AA to object number 7


-----

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0?
AA )

Writing value 55 to object number 7

(5)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 55 )

(6)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0? 55
)

Setting normal mode

(7)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Writing value AA to object number 7

(9)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(10)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0?
AA )

Writing value 55 to object number 7

(11)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 55 )

(12)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0? 55
)

Acceptance: The BDUT behaves as specified above.

###### 6.2.4 WriteService ID 00h – set Local GO Value – Negative Case – invalid GO number
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to an invalid valid Group Object.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to write a value to an invalid group object number. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse with a negative return code E_GD_GO_VOID.

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 00 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 00 AA )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=00 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.5 WriteService ID 00h – set Local GO Value – Negative Case – Size Mismatch
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.


-----

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to an valid Group Object but with incorrect data size (one byte too many, one byte too
few).

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to write a value to a valid group object number, however with incorrect data as regards size (one byte too many,
one byte too few). Wait for the BDUT to report with a negative FctPropertyExtStateResponse with a negative
return code E_GD_GO_SIZE_MISMATCH.

(1)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 00 00 07 AA AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA AA )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A3 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A3, Data=00 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 00 00 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A3 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A3, Data=00 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.6 WriteService ID 00h – set Local GO Value – Negative Case – Config Flags error
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to a valid Group Object but with configuration flags not properly set.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to write a value to a valid group object number, however with incorrectly set configuration flgs. Wait for the
BDUT to report with a negative FctPropertyExtStateResponse with a negative return code
E_GD_CONFIG_FLAGS.

C-flag not set

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 08 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 08 AA )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A2 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A2, Data=00 )

W-Flag not set

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 0A AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 0A AA )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A2 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A2, Data=00 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.7 WriteService ID 01h – send Group Value Write – valid flags
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a positive FctPropertyExtStateResponse when sending a
FctPropertyExtCommand to a supported Group Address, correct flags and data.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d, with
correct flag settings, a supported group address and data. Check that a Group Value Write is subsequently sent
on the bus.

Flag Selector: if set and

- Value to be written is one byte

- And Value is lower than 64d


-----

then send GroupWrite with trailing bits after APCI set to 0 and data in the next octet.

Flags Selector set to next full octet, no security, group address 3/1/7 and value 10 (less than 64)

(1)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 80 19 07 0A
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 80 19 07 0A )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(3)  OUT BC 01.01.001 03/1/007 E2 00 80 0A :GroupValueWrite(Grp=03/1/007, 0A)

Flags Selector set to 6 trailing bits after APCI, no security, group address 3/1/7 and value 10 (less than 64)

(4)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 00 19 07 0A
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 19 07 0A )

(5)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(6)  OUT BC 01.01.001 03/1/007 E1 00 8A :GroupValueWrite(Grp=03/1/007, 0A)

Flags Selector set to next full octet, no security, group address 3/1/7 and value 55h (greater than 64)

(7)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 80 19 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 80 19 07 55 )

(8)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(9)  OUT BC 01.01.001 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

Flags Selector set to 6 trailing bits after APCI, no security, group address 3/1/7 and value 55h (greater than 64)

(10)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 00 19 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 19 07 55 )

(11)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(12)  OUT BC 01.01.001 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

Flags Selector set to 6 trailing bits after APCI, no security, group address 3/1/7 and value 123456h

(13)  IN BC 10.15.254 01.01.001 6E 01 D4 00 09 00 10 42 00 01 00 19 07 12 34 56
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 19 07 12 34 56 )

(14)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(15)  OUT BC 01.01.001 03/1/007 E4 00 80 12 34 56 :GroupValueWrite(Grp=03/1/007, 12 34 56)

Flags Selector set to next full octet, no security, group address 3/1/7 and value 123456h

(16)  IN BC 10.15.254 01.01.001 6E 01 D4 00 09 00 10 42 00 01 80 19 07 12 34 56
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 80 19 07 12 34 56 )

(17)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

(18)  OUT BC 01.01.001 03/1/007 E4 00 80 12 34 56 :GroupValueWrite(Grp=03/1/007, 12 34 56)

Flags Selector set to next full octet, with authentication only, group address 3/1/6 and value 55h

(19)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 81 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 81 19 06 55 )

(20)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

Secure telegram, assumed key ‘all Ah’ and sequence number 1

(21)  A OUT BC 01.01.001 03/1/006 E2 00 80 55 :GroupValueWrite(Grp=03/1/006, 55), Key: GK6

Flags Selector set to next full octet, with confidentiality and security, group address 3/1/6 and value 55h


-----

(22)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 83 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 83 19 06 55 )

(23)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=01 )

Secure telegram, assumed key ‘all Ah’ and sequence number 2

(24)  C OUT BC 01.01.001 03/1/006 E2 00 80 55 :GroupValueWrite(Grp=03/1/006, 55), Key: GK6

Acceptance: The BDUT behaves as specified above.

###### 6.2.8 WriteService ID 01h – send Group Value Write – invalid flags
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse (with the Return Code
E_DATA_VOID) when sending a FctPropertyExtCommand to a supported Group Address but with incorrect
flags.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d, with
incorrect flag settings. Check that a Group Value Write is not sent on the bus.

Flags Selector set to next full octet, only confidentiality, group address 3/1/6 and value 55h

(1)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 82 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 82 19 06 55 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Flags Selector set to 6 trailing bits, reserved bits set, group address 3/1/6 and value 55h

(3)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 04 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 04 19 06 55 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Flags Selector set to 6 trailing bits, reserved bits set, group address 3/1/6 and value 55h

(5)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 08 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 08 19 06 55 )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Flags Selector set to 6 trailing bits, reserved bits set, group address 3/1/6 and value 55h

(7)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 10 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 10 19 06 55 )

(8)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Flags Selector set to 6 trailing bits, reserved bits set, group address 3/1/6 and value 55h

(9)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 20 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 20 19 06 55 )

(10)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Flags Selector set to 6 trailing bits, reserved bits set, group address 3/1/6 and value 55h

(11)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 40 19 06 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 40 19 06 55 )

(12)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Acceptance: The BDUT behaves as specified above.


-----

###### 6.2.9 WriteService ID 01h – send Group Value Write – security flags set for group address without valid security key
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse (with the Return Code
E_DATA_VOID) when sending a FctPropertyExtCommand to a Group Address for which there is no valid
security key.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d, with a
supported group address for which a valid security key is missing. Check that a Group Value Write is not sent on
the bus.

With authentication flag set

(1)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 81 19 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 81 19 07 55 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

With authentication and confidentiality flag set

(3)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 83 19 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 83 19 07 55 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.10 WriteService ID 01h – send Group Value Write – unsupported group address
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse (with the Return Code
E_DATA_VOID) when sending a FctPropertyExtCommand to an unsupported Group Address.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d, with an
unsupported group address. Check that a Group Value Write is not sent on the bus.

(1)  IN BC 10.15.254 01.01.001 6C 01 D4 00 09 00 10 42 00 01 80 09 07 55
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 80 09 07 55 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=01 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.11 WriteService ID 02 – send Loccal Group GO value on the bus – positive case
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a positive FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with WriteServiceID 02 to a correct group object number.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d, with a
correct object number. Check whether the BDUT replies with a positive FctPropertyExtStateResponse repeating
the group object number and indicating ‘Transmit request’ as GO status. It may report the GO value. Check
moreover that the BDUT sends a Group Value Write on the bus.

(1)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 02 00 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 07 )

(2)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 02 00 07 0B ??
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=02 00 07 0B ??
)


-----

(3)  OUT BC 01.01.001 03/1/007 E2 00 80 ?? :GroupValueWrite(Grp=03/1/007, 00)

###### 6.2.12 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – invalid GO number
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 02h to an invalid valid Group Object.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to transmit the current local group object value on the bus by indicating an invalid group object number. Wait for
the BDUT to report with a negative FctPropertyExtStateResponse with a negative return code
E_GD_GO_VOID.

(1)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 02 00 00
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 00 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 02
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=02 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.13 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – invalid size of GO number – one byte too many – too few
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 02h to a Group Object but indicating only one byte or
indicating three bytes.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to transmit the current local group object value on the bus by indicating a group object number with one byte too
many or too few. Wait for the BDUT to report with a negative FctPropertyExtStateResponse with a negative
return code E_ERROR.

Group Object number one byte less

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 09 00 10 42 00 02 00 :FctPropertyExtCommand(ObjType=0009,
ObjInst=0001, PropId=0042, Data=00 02 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Group Object number one byte more

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 02 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Acceptance: The BDUT behaves as specified above.

###### 6.2.14 WriteService ID 02h – send Local Group GO value on the bus – Negative Case – configuration flags mismatch
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 02h to a Group Object number with improperly set
configuration flags.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d attempting
to transmit the current local group object value on the bus by indicating a group object number with improperly
set configuration flags. Wait for the BDUT to report with a negative FctPropertyExtStateResponse with a
negative return code E_GD_CONFIG_FLAGS.


-----

C-Flag not set

(1)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 02 00 08
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 08 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A2 02
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A2, Data=02 )

T-Flag not set

(3)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 02 00 0B
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 02 00 0B )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A2 02
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A2, Data=02 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.15 WriteService ID 03h – send Group Value Read positive case
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a positive FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 03h with the correct flags (security flags properly set, all
reserved bits to 0) on a supported group address.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d to a
supported group address, also using the correct flag settings. Wait for the BDUT to report with a positive
FctPropertyExtStateResponse. Check that the BDUT transmits the correct Group Value Read message.

Group address not requiring security

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 00 19 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 00 19 07 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=03 )

(3)  OUT BC 01.01.001 03/1/007 E1 00 00 :GroupValueRead(Grp=03/1/007)

Group Address requiring security (flags set to authentication only)

(4)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 01 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 01 19 06 )

(5)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=03 )

Security telegram with authentication only (example here assuming security key all Ah and sequence number 1)

(6)  A OUT BC 01.01.001 03/1/006 E1 00 00 :GroupValueRead(Grp=03/1/006), Key: GK6

Group Address requiring security (flags set to authentication and confidentiality)

(7)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 03 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 03 19 06 )

(8)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=03 )

(9)  C OUT BC 01.01.001 03/1/006 E1 00 00 :GroupValueRead(Grp=03/1/006), Key: GK6

Acceptance: The BDUT behaves as specified above.

###### 6.2.16 WriteService ID 03h – send Group Value Read – incorrect flags
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 03h with incorrect flags on a supported group address.


-----

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d to a
supported group address, however using incorrect flag settings. Wait for the BDUT to report with a negative
FctPropertyExtStateResponse (with Return Code E_DATA_VOID). Check that the BDUT does not transmit a
Group Value Read message.

Only confidentiality bit set

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 02 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 02 19 06 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

Reserved bit set

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 04 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 04 19 06 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(5)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 08 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 08 19 06 )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(7)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 10 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 10 19 06 )

(8)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(9)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 20 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 20 19 06 )

(10)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(11)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 40 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 40 19 06 )

(12)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(13)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 80 19 06
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 80 19 06 )

(14)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.17 WriteService ID 03h – send Group Value Read – unsupported group address
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 03h with an unsupported group address.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d to an
unsupported group address. Wait for the BDUT to report with a negative FctPropertyExtStateResponse (with
Return Code E_DATA_VOID). Check that the BDUT does not transmit a Group Value Read message.

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 00 09 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 00 09 07 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )


-----

Acceptance: The BDUT behaves as specified above.

###### 6.2.18 WriteService ID 03h – send Group Value Read – group address without security key
Required BDUT setting: the BDUT can either be in diagnostic or in normal operation mode.

Purpose: Check whether BDUT responds with a negative FctPropertyExtStateResponse when sending a
FctPropertyExtCommand with Write Service ID 03h with a supported group address without a security key.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d to an
supported group address, however setting the security flags although the group address requires plain
communication. Wait for the BDUT to report with a negative FctPropertyExtStateResponse (with Return Code
E_DATA_VOID). Check that the BDUT does not transmit a Group Value Read message.

(1)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 01 19 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 01 19 07 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 03 03 19 07
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 03 03 19 07 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F8 03
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F8, Data=03 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.19 WriteService ID 04h – Limit GO service senders – source address different than filter address
Required BDUT setting: the BDUT must be in diagnostic mode.

Purpose: Check whether BDUT does not update its group object value when the source address is different from
the filter address set with FctPropertyExtCommand and Write Service ID 04h.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with
Write Service 00h to a supported group address and set the object to a certain value. Send a
FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with Write Service 04h
indicating a certain individual address x.y.z. Send a group message via a source address different than x.y.z. and
with the before-said supported group address. Check whether the BDUT has not updated the object value.

Activate diagnostic mode

(1)  IN BC 15.15.255 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 15.15.255 6A 01 D6 00 03 00 10 34 20 00 01 1?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1? )

Set GO value to 0Xaa with WriteService ID 00h

(3)  IN BC 15.15.255 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(4)  OUT BC 01.01.001 15.15.255 6C 01 D6 00 09 00 10 42 21 00 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0?
AA )

Limit to source address 01.02.52 with Write Service ID 04h

(5)  IN BC 15.15.255 01.01.001 6A 01 D4 00 09 00 10 42 00 04 12 34
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 04 12 34 )

(6)  OUT BC 01.01.001 15.15.255 68 01 D6 00 09 00 10 42 00 04
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=04 )

Send from different source address than filtered and check if GO value is updated


-----

(7)  IN BC 15.15.255 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

(8)  IN BC 15.15.255 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 07
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 )

(9)  OUT BC 01.01.001 15.15.255 6C 01 D6 00 09 00 10 42 21 01 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=01 00 07 0?
AA )

Acceptance: The BDUT behaves as specified above.

###### 6.2.20 WriteService ID 04h – Limit GO service senders – source address same as filter address
Required BDUT setting: the BDUT must be in diagnostic mode.

Purpose: Check whether BDUT updates its group object value when the source address is equal to the filter
address set with FctPropertyExtCommand and Write Service ID 04h.

Procedure: Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with
Write Service 00h to a supported group address and set the object to a certain value. Send a
FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with Write Service 04h
indicating a certain individual address x.y.z. Send a group message with x.y.z. as source address and with the
before-said supported group address. Check whether the BDUT has updated the object value.

Activate diagnostic mode

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1? )

Set GO value to 0Xaa with WriteService ID 00h

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0?
AA )

Limit to source address (EDI) with Write Service ID 04h

(5)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 04 AF FE
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 04 AF FE )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 04
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=04 )

Send from source address (EDI) and check if GO value is updated

(7)  IN BC 10.15.254 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

(8)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 07
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 )

(9)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 01 00 07 0? 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=01 00 07 0? 55
)

Acceptance: The BDUT behaves as specified above.

###### 6.2.21 WriteService ID 04h – Limit GO service senders – effect when switching back to normal mode
Required BDUT setting: the BDUT must be first in diagnostic mode – updating the value in normal mode via
other individual address than filter address.


-----

Purpose: Check whether BDUT updates its group object value when the source address is different from the
filter address set with FctPropertyExtCommand and Write Service ID 04h, as it was switched from diagnostic
mode back to normal mode.

Procedure: Activate the diagnostic mode. Send a FctPropertyExtCommand to the Group Object Table (Object
Type 9), property 66d with Write Service 00h to a supported group address and set the object to a certain value.
Send a FctPropertyExtCommand to the Group Object Table (Object Type 9), property 66d with Write Service
04h indicating a certain individual address x.y.z. Deactivate the diagnostic mode. Send a group message with
different source address than the one set as filter address and with the before-said supported group address.
Check whether the BDUT has updated the object value (as it is no longer in diagnostic mode).

Activate diagnostic mode

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1? )

Set GO value to 0xAA with WriteServiceID 00h

(3)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 00 00 07 0? AA
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=00 00 07 0?
AA )

Set filter to source address 01.02.52

(5)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 04 12 34
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 04 12 34 )

(6)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 00 04
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=00, Data=04 )

Activate Normal Mode

(7)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(8)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Send from different source source address than filtered and check if GO value is updated

(9)  IN BC 10.15.254 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

(10)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 07
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 )

(11)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 01 00 07 0? 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=01 00 07 0? 55
)

Acceptance: The BDUT behaves as specified above.

###### 6.2.22 WriteService ID 04h – Limit GO service senders – try setting filter in normal mode
Required BDUT setting: the BDUT must be in normal mode

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to set an individual address
for limitng the GO senders when in normal mode.

Procedure: Activate the normal mode. Send a FctPropertyExtCommand to the Group Object Table (Object Type
9), property 66d with Write Service 04h indicating a certain individual address x.y.z. Check whether the BDUT
replies with a negative FctPropertyExtResponse.

Activate normal mode


-----

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 00 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 00 FF
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 00 FF )

Try to limit to source address 01.02.52 and check if negative command is sent

(3)  IN BC 10.15.254 01.01.001 6A 01 D4 00 09 00 10 42 00 04 12 34
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 04 12 34 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 F3 04
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=F3, Data=04 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.23 WriteService ID 04h – Limit GO service senders – invalid size
Required BDUT setting: the BDUT must be in diagnostic mode

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to set an individual address
for limitng the GO senders with one byte too few and one byte too many.

Procedure: Activate the diagnostic mode. Send a FctPropertyExtCommand to the Group Object Table (Object
Type 9), property 66d with Write Service 04h indicating a certain individual address x.y.z, but omitting one byte
and adding one byte. Check whether the BDUT replies with a negative FctPropertyExtResponse.

Set diagnostic mode

(1)  IN BC 10.15.254 01.01.001 69 01 D4 00 03 00 10 34 00 00 01 :FctPropertyExtCommand(ObjType=0003,
ObjInst=0001, PropId=0034, Data=00 00 01 )

(2)  OUT BC 01.01.001 10.15.254 6A 01 D6 00 03 00 10 34 20 00 01 1?
:FctPropertyExtStateResponse(ObjType=0003, ObjInst=0001, PropId=0034, RetCode=20, Data=00 01 1? )

Try to set filter sender IA but omitting one byte

(3)  IN BC 10.15.254 01.01.001 69 01 D4 00 09 00 10 42 00 04 00 :FctPropertyExtCommand(ObjType=0009,
ObjInst=0001, PropId=0042, Data=00 04 00 )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Try to set filter sender IA but adding one byte

(5)  IN BC 10.15.254 01.01.001 6B 01 D4 00 09 00 10 42 00 04 12 34 AA
:FctPropertyExtCommand(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 04 12 34 AA )

(6)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Acceptance: The BDUT behaves as specified above.

###### 6.2.24 ReadService ID 00h – Get GO Config – positive case
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a positive FctPropertyExtResponse if trying to read the configuration of a
group object via a FctPropertyExtRead indicating a correct group object number, regardless whether it is in
diagnostic or normal mode.

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 00h indicating a valid group object number. Check whether the BDUT replies with a positive
FctPropertyExtResponse, including from the read group object the configuration (i.e. repeating the group object
number, the flags [including the L(inked) flag, the security flags, configuration flags and priority flags, the size
and the DPT_ID].

(1)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 00 00 01
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 01 )


-----

(2)  OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 09 00 10 42 20 00 00 01 07 5F 00 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=20, Data=00 00 01 07 5F
00 00 00 00 00 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 00 00 08
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 08 )

(4)  OUT 3C 60 01.01.001 10.15.254 11 01 D6 00 09 00 10 42 20 00 00 08 04 DB 07 00 00 00 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=20, Data=00 00 08 04
DB 07 00 00 00 00 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.25 ReadService ID 00h – Get GO Config – negative case – wrong object number
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to read the configuration of a
group object via a FctPropertyExtRead indicating an incorrect group object number, regardless whether it is in
diagnostic or normal mode.

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 00h indicating an invalid group object number. Check whether the BDUT replies with a negative
FctPropertyExtResponse.

(1)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 00 00 00
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=00 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 00 01 01
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 01 01 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 00
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=00 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.26 ReadService ID 00h – Get GO Config – negative case – one byte too few/one byte too many
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to read the configuration of a
group object via a FctPropertyExtRead indicating an group object number with one byte too many or one byte
too few, regardless whether it is in diagnostic or normal mode.

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 00h indicating an group object number, however omitting one byte or adding one byte. Check whether
the BDUT replies with a negative FctPropertyExtResponse.

(1)  IN BC 10.15.254 01.01.001 69 01 D5 00 09 00 10 42 00 00 00 :FctPropertyExtStateRead(ObjType=0009,
ObjInst=0001, PropId=0042, Data=00 00 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

(3)  IN BC 10.15.254 01.01.001 6B 01 D5 00 09 00 10 42 00 00 00 07 AA
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 00 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Acceptance: The BDUT behaves as specified above.


-----

###### 6.2.27 ReadService ID 01h – Get Local GO value – positive case
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a positve FctPropertyExtResponse if trying to read the current value of a
group object via a FctPropertyExtRead indicating a valid group object number, regardless whether it is in
diagnostic or normal mode.

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 01h indicating a valid group object number. Check whether the BDUT replies with a positive
FctPropertyExtResponse, repeating the read group object number, the group object status (including update flag,
data request flag and transmission status) as well as the object number.

Set GO to certain value

(1)  IN BC 10.15.254 03/1/007 E2 00 80 55 :GroupValueWrite(Grp=03/1/007, 55)

Read twice and check if update flag persists

(2)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 07
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 )

(3)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 01 00 07 08 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=01 00 07 08 55
)

(4)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 07
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 )

(5)  OUT BC 01.01.001 10.15.254 6C 01 D6 00 09 00 10 42 21 01 00 07 08 55
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=21, Data=01 00 07 08 55
)

Acceptance: The BDUT behaves as specified above.

###### 6.2.28 ReadService ID 01h – Get Local GO value – negative case – invalid object number
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to read the current value of
an invalid group object via a FctPropertyExtRead, regardless whether it is in diagnostic or normal mode.

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 01h indicating an invalid group object number. Check whether the BDUT replies with a negative
FctPropertyExtResponse.

(1)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 00 00
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 00 )

(2)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=01 )

(3)  IN BC 10.15.254 01.01.001 6A 01 D5 00 09 00 10 42 00 01 01 01
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 01 01 )

(4)  OUT BC 01.01.001 10.15.254 68 01 D6 00 09 00 10 42 A1 01
:FctPropertyExtStateResponse(ObjType=0009, ObjInst=0001, PropId=0042, RetCode=A1, Data=01 )

Acceptance: The BDUT behaves as specified above.

###### 6.2.29 ReadService ID 01h – Get Local GO value – negative case –object number one byte too few, one byte too many
Required BDUT setting: the BDUT can either be in diagnostic or normal mode.

Purpose: Check whether BDUT sends a negative FctPropertyExtResponse if trying to read the current value of a
group object via a FctPropertyExtRead, omitting one byte or adding one byte.


-----

Procedure: Send a FctPropertyExtRead to the Group Object Table (Object Type 9), property 66d with Read
Service 01h indicating a group object number, however adding one byte or omitting one. Check whether the
BDUT replies with a negative FctPropertyExtResponse.

(1)  IN BC 10.15.254 01.01.001 69 01 D5 00 09 00 10 42 00 01 00 :FctPropertyExtStateRead(ObjType=0009,
ObjInst=0001, PropId=0042, Data=00 01 00 )

(2)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

(3)  IN BC 10.15.254 01.01.001 6B 01 D5 00 09 00 10 42 00 01 00 07 AA
:FctPropertyExtStateRead(ObjType=0009, ObjInst=0001, PropId=0042, Data=00 01 00 07 AA )

(4)  OUT BC 01.01.001 10.15.254 67 01 D6 00 09 00 10 42 FF :FctPropertyExtStateResponse(ObjType=0009,
ObjInst=0001, PropId=0042, RetCode=FF, Data=)

Acceptance: The BDUT behaves as specified above.


-----

