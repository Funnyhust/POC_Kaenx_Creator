# Application Specifications

## Control of Audio and Video Equipment

 General Principles

###### Summary

 This document specifies data formats for controlling Audio and Video Equipment through KNX.

 Version 01.00.00 is a KNX Approved Standard.

 This document is part of the KNX Specifications v2.1.


-----

##### Document updates

 Version Date Modifications

0.1 2008.11 Preparation of document on basis of function list elaborated by TF AV Control
0.2 2008.12 Result discussions TF AV Control
0.3 2009.02 Finalisation for submission to Working Group Interworking
0.4 2009.06 No comments from WGI - WGI approved
0.4 2009.06.26 Editorial update in view of inclusion in the KNX Specifications v2.0.
01.00.00 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

Filename: 07_70_01 Audio Video Control v01.00.00 AS.docx
Version: 01.00.00
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 9

|Version|Date|Modifications|
|---|---|---|
|0.1|2008.11|Preparation of document on basis of function list elaborated by TF AVControl|
|0.2|2008.12|Result discussions TF AVControl|
|0.3|2009.02|Finalisation for submission to Working Group Interworking|
|0.4|2009.06|No comments from WGI - WGI approved|
|0.4|2009.06.26|Editorial update in view of inclusion inthe KNXSpecifications v2.0.|
|01.00.00|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

##### 1 AV Control .............................................................................................................................. 5 1.1 Aims and Objectives ....................................................................................................... 5 1.2 Functional Specification ................................................................................................. 5 1.3 Constraints ...................................................................................................................... 5 1.4 Data points ...................................................................................................................... 6


-----

#### Abbreviations

AV Audio Video


-----

### 1 AV Control

#### 1.1 Aims and Objectives
###### The aim of the document is not to specify functional blocks for controlling Audio and Video equipment. 

 The aim of the document lies in providing an overview of typical AV functions and the way such functions could be realised as group objects in a KNX compatible AV sink or could be sent out by a device addressing such an AV sink. 

 The AV sink is thought to be most likely a gateway coupling KNX to one or more pieces of AV equipment. The device addressing an AV sink is thought to be most likely a commonly available KNX compatible switch, touch panel or visualisation/control software running on a PC. 

#### 1.2 Functional Specification
###### The underneath specification consists of a list of AV functions that can be realised in a KNX compatible AV sink or in devices controlling such a sink. 

 As such a sink is thought to be most likely a gateway, the specification does not oblige the mandatory use of a minimum subset of the listed data points. 

 As devices addressing such a sink are thought to be most likely common push buttons, the specification does not oblige the mandatory implementation of a minimum subset of the listed data points either. 

 In other words, when realizing any of the above devices, the manufacturer can freely choose which of the listed data points he wishes to implement. However, when realising a function contained in the underneath list, the manufacturer is obliged to realise the respective in- or output data point according to the given data point type. 

 The specification therefore serves to ensure that for the listed functions, the manufacturers use the required data point types in their realizations. 

#### 1.3 Constraints
###### There are no constraints for this Functional Block specification.


-----

#### 1.4 Data points

|Data point|Description/Remarks|Data point Type|Coding|Remarks|
|---|---|---|---|---|
|Play/Stop|Start playing – Stop playing|DPT_Start|1 = play/start<br>0 = stop||
|Pause|Temporarily halt playing|DPT_Enable|1 = Pause<br>0 = Resume||
|Skip|Browsing through channels/tracks/tuned<br>stations/discs up and down one by one|DPT_Step|0 = Backward<br>1 = Forward||
|Fast Forward/Backward|Moving fast forward or fast backward within the<br>current title/track or stopping it|DPT_Control<br>Dimming|See coding DPT 3.007|First bit: direction<br>0 = Moving backward<br>1 = Moving forward<br>next 3 bits<br>indicates  the rate of the fast/backward<br>Coding 000 = stop moving<br>back/forward|
|Stop Fast Forward/Backward|Stop Fast Forward/Backward|Stop Fast Forward/Backward|Stop Fast Forward/Backward|Stop Fast Forward/Backward|
|Tune/Search/Scan|Searching for new channel/station up or down|DPT_Step|0 = Backward<br>1 = Forward|‘Forward’ in case of stations implies<br>higher frequencies|
|Stop Tuning/Searching/Scanning|Halting the search for a  new channel/station up or<br>down|DPT_Trigger|0, 1 = Dedicated Stop|Some implementations might require<br>a dedicated stop for halting an<br>initiated tuning/searching/scanning<br>activity|
|Record|Start and stop recording|DPT_Start|1 = start recording<br>0 = stop recording||
|Volume/Bass/Treble/Balance<br>Absolute|Setting the volume to an absolute value|DPT_Scaling|See coding of DPT<br>5.001|Range from 0 to 100%|
|Volume/Bass/Treble/Balance<br>Relative Control|Increasing or decreasing the volume, bass, treble,<br>balance  (relative control)|DPT_Control<br>Dimming|See coding DPT 3.007|When using this function, it shall be<br>taken into account that when the stop<br>command is not received, the volume<br>might increase to the maximum value.|
|Volume/Bass/Treble/Balance<br>Relative Step|Increasing or decreasing the volume, bass, treble,<br>balance (relative by steps)|DPT_Step|0=Decrease<br>1=Increase|The volume step shall be<br>parameterized in the AV sink|


-----

|Data point|Description/Remarks|Data point Type|Coding|Remarks|
|---|---|---|---|---|
|Main Power (on/off – toggle)|Setting the main power on and off|DPT_Switch|1 = on<br>0 = off||
|Main Power (standby)|Putting main power to standby|DPT_Enable|1 = enable standby<br>0 = disable standby||
|Sleep Mode|Activates and deactivates the sleep mode|DPT_Enable|1 = enable sleep mode<br>0 = disable sleep mode||
|Set time to Sleep Mode|Setting the time until the sleep mode becomes<br>active in seconds|DPT_TimePeriodMin|See coding of DPT<br>7.006||
|Audio Mute|Entering and exiting mute mode|DPT_Enable|1 = enable mute<br>0 = disable mute||
|Select<br>Disc/Track/Station/Channel|Selecting and/or storing a specific disc, track,<br>station, channel through number|DPT_Value_1_<br>Ucount|See coding of DPT<br>5.010||
|Repeat|Activates and deactivates the repeat mode|DPT_Enable|1 = Enable repeat<br>0 = Disable repeat||
|Random/Shuffle|Activates and deactivates the shuffle mode|DPT_Enable|1 = Enable shuffle<br>0 = Disable shuffle||
|Source step by step|Source selection up/down|DPT_Step|0 = Backward<br>1 = Forward||
|Source absolute|Selecting a specific source through a number|DPT_Value_1_<br>Ucount|See coding of DPT<br>5.010||
|Surround on/off|Toggling between setting surround on and off|DPT_Enable|1 = Enable surround<br>0 = Disable surround||
|Scenes (up to 64)|Calling and storing AV memorized settings (e.g.<br>storing and calling disc, track, station, channel, ...)|DPT_SceneControl|See coding of DPT<br>18.001|It is the AV sink that determines the<br>setting of the connected AV<br>equipment<br>In the case where there is a need to be<br>able to store more than 64 different<br>settings, additional<br>DPT_SceneControl objects shall be<br>implemented|


-----

|Data point|Description/Remarks|Data point Type|Coding|Remarks|
|---|---|---|---|---|
|Text information (short)|Returns the denomination of the source, track,<br>station, ... (for displaying purposes)|DPT_String_ASCII|See coding of DPT<br>16.001||
|Text information (long)|Returns the denomination of the source, track,<br>station, ... (for displaying purposes)|DPT_VarString_8859<br>_1|See coding of DPT<br>24.001|For denominations larger than 14<br>octets (error handling for non-<br>supported lengths according to DPT<br>24.001)|
|Play/storing Frequency|Selecting frequency in Hz of desired station –<br>storing this frequency|DPT_Value_<br>Frequency|See coding of DPT<br>14.033||
|Read Frequency|Reading out frequency of currently playing station<br>or reading out memorized frequency|DPT_Value_<br>Frequency|See coding of DPT<br>14.033||
|RDS|Enable and disable RDS function|DPT_Enable|1 = Enable RDS<br>0 = Disable RDS||
|Zone/Duty call|Start or stop an emergency call in all or in one<br>zone|DPT_Enable|1 = enable zone call<br>0 = disable zone call||


-----

###### Navigation functions for KNX remote control with visual feedback

|Data point|Description/Remarks|Data point Type|Coding|Remarks|
|---|---|---|---|---|
|Menu|Entering or leaving a menu|DPT_State|0 = deactivate menu<br>1 = activate menu||
|Cursor Up/Down|Positioning of the cursor|DPT_UpDown|0 = Up<br>1 = Down||
|Cursor Left/Right|Positioning of the cursor|DPT_Left/Right|0 = Left<br>1 = Right|New DPT 1.xxx|
|Select|Selecting the chosen function|DPT_Trigger|0,1 = Trigger||
|Enter/Return|Entering the previously selected function|DPT_Trigger|0,1 = Trigger||


-----

