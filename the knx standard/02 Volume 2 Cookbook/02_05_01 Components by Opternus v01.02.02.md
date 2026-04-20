# KNX Cookbook

### KNX development on basis of existing system components

 Components by Opternus

###### Summary

 This document is a development help for KNX newcomers.

 This document describes the development of a KNX device based on existing KNX components provided by the company Opternus.


-----

##### Document updates

###### Version Date Modifications

 1.0.00 2011.03.28 Preparation of the final version. 1.01.01 2011.08.11 Update according final Manufacturer Tool release. 01.01.02 2013.10.14 Editorial updates for the publication of KNX Specifications 2.1. 01.02.01 2014.06.02 Update. 01.02.02 2014.09.05 Editorial update in view of publication.

##### References

###### [01] Chapter 3/1/2 “Glossary”
 [02] Volume 6 “Profiles”

Filename: 02_05_01 Components by Opternus v01.02.02.docx
Version: 01.02.02
Status: Final version
Savedate: 2014.09.05
Number of pages: 29

|Version|Date|Modifications|
|---|---|---|
|1.0.00|2011.03.28|Preparation of the final version.|
|1.01.01|2011.08.11|Update according final Manufacturer Tool release.|
|01.01.02|2013.10.14|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.01|2014.06.02|Update.|
|01.02.02|2014.09.05|Editorial update in view of publication.|


-----

##### Contents

###### 1 About the BIM M130/1/2/5 devices ...................................................................................... 4 1.1 Needed software & hardware ......................................................................................... 4 1.2 About the Opternus Development Tool package ............................................................ 4 1.3 About the Arduino external microcontrollers ................................................................. 4

 2 Preparation and test ............................................................................................................... 5 2.1 Install the Minicube2 driver, NEC Debugger and IAR Embedded Workbench ............ 5 2.2 Install the BIM Tools ...................................................................................................... 5 2.3 Connect & Prepare device .............................................................................................. 5 2.4 Install the Arduino IDE .................................................................................................. 5

 3 Opternus BIM M13x based solutions ................................................................................... 6 3.1 Hardware block diagram ................................................................................................. 6 3.2 About the example downloads (source code) ................................................................. 6 3.3 Examples summary ......................................................................................................... 6 3.3.1 Example 1 – Simulated actuator (binary output) ................................................ 6 3.3.2 Example 2 – Actuator (binary output) ................................................................ 7 3.3.3 Example 3 – Sensor (push button) ...................................................................... 7 3.3.4 Example 4 – Actuator based on an external µC (FT1.2) .................................... 7 3.3.5 Example 5 – Sensor based on an external µC (FT1.2) ....................................... 7 3.4 Example 1 – Simulated acutator (binary output) in detail .............................................. 7 3.5 Example 2 – Actuator (binary output) in detail .............................................................. 8 3.6 Example 3 – Sensor (push button) in detail .................................................................... 9 3.7 Example 4 – Actuator based on an external µC in detail ............................................. 10 3.7.1 Example 4 – The Arduino UNO source code ................................................... 11 3.8 Example 5 – Sensor based on an external µC in detail................................................. 12 3.8.1 Example 5 – The Arduino UNO source code ................................................... 13

 4 Internal working of a BIM .................................................................................................. 14 4.1 Goal ............................................................................................................................... 14 4.2 Processing bus telegrams .............................................................................................. 14 4.3 Processing PEI Events .................................................................................................. 15

 5 AP development with IAR – based on example 2 (actuator) ........................................... 17 5.1 Goal ............................................................................................................................... 17 5.2 The complete file main.c .............................................................................................. 17 5.2.1 Detailed explanation of main.c ......................................................................... 19 5.3 The complete file tables.c ............................................................................................. 21 5.3.1 Detailed explanation of table.c ......................................................................... 21 5.4 Detailed explanation user.h .......................................................................................... 22 5.5 Reserved Memory ......................................................................................................... 23 5.6 Debug ............................................................................................................................ 23 5.7 Release .......................................................................................................................... 23 5.8 Important note: property compare load control ............................................................ 27

 6 ETS4 product entry creation – based on Example 2 (Actuator) ..................................... 28 6.1 Introduction ................................................................................................................... 28 6.2 Start: Hardware, Catalog, AP/Static Part ...................................................................... 28 6.3 AP Dynamic Part: ......................................................................................................... 28 6.4 Import into ETS4 and test ............................................................................................. 29


-----

#### 1 About the BIM M130/1/2/5 devices

##### 1.1 Needed software & hardware

###### − Installed MT4 software and valid license. − Installed ETS4 software and valid license. − An Opternus Development Tool package. − Arduino IDE: only required for the external microcontroller based examples.

##### 1.2 About the Opternus Development Tool package

###### − This product is based on the BIM M132
  KNX Profile Class = System 2, see [02]. − The Opternus Development Tool package containing:
  A development board (PCB)
  NEC Minicube development platform for flash MCU
  IAR Embedded Workbench
  BIM Tools − This solution requires development from scratch, as BIM Modules do not contain predefined Group Objects; this is, the AP is developed in the C programming language. − This solution comes with a proprietary (not standardized) API, see document BIM_M_13x_API_Reference_v1_2_01.pdf.

##### 1.3 About the Arduino external microcontrollers
###### For the external microcontroller, we opted for the Arduino open source electronics prototyping platform. More information can be found via this URL: arduino.cc.

 The main reason for choosing Arduino is the fact that the Arduino Software (compiler/loader) is free of charge.

 Several types of Arduino microcontrollers exist; we have used ‘Arduino UNO’.


-----

#### 2 Preparation and test

##### 2.1 Install the Minicube2 driver, NEC Debugger and IAR Embedded Workbench

###### − Link: http://www.opternus.com/uploads/media/EVB_Getting_Started_V1.1.pdf. − Install instructions for Minicube2 including NEC Debugger, see section I of EVB_Getting_Started_V1.1.pdf. − Install instructions for IAR Embedded Workbench, see section II of EVB_Getting_Started_V1.1.pdf.

##### 2.2 Install the BIM Tools

###### − Run BIM_Tools_v1_1_50.msi.

##### 2.3 Connect & Prepare device 

###### − Connect: see section III of EVB_Getting_Started_V1.1.pdf. − Prepare: see section IV of EVB_Getting_Started_V1.1.pdf. − In this particular case, use BIM_M_130__M_135_Debug_v1_08.hex.

##### 2.4 Install the Arduino IDE

###### − Only required for the external microcontroller based examples (that is, example 4 & 5). − Link: arduino.cc.


-----

#### 3 Opternus BIM M13x based solutions

##### 3.1 Hardware block diagram

### BIM M13x

###### GND - C1 / EVB24 P70 – B5 / EVB07

P71 – A6 / EVB01

###### VCC - D2 / EVB18 P72 – B4 / EVB11

P73 – A5 / EVB05

###### VDD - D1 / EVB22 P74 – B3 / EVB15

P75 – A4 / EVB09
P76 – B2 / EVB19
P77 – A3 / EVB13

### 78F053X

TxD – D3 / EVB14
RxD – D4 / EVB10

### TP-UART

###### +Bus E1/EVB25

 -Bus E2/EVB26

 Figure 1 – Hardware block diagram

##### 3.2 About the example downloads (source code)

###### − All IAR projects are available as download. They can be found in the same directory where this very file can be downloaded from, that is each example has its dedicated zip file. − The Arduino UNO source code for example 4 & 5 can also be found in the relevant zip file. − The s19 file & MT4 project for example 2 can also be found in the relevant zip file. 

##### 3.3 Examples summary

###### 3.3.1 Example 1 – Simulated actuator (binary output) − This is the easiest example because there is no additional hardware required. − The output will be simulated by means of the so called test pins.


-----

###### 3.3.2 Example 2 – Actuator (binary output) − The AP toggles a LED via an I/O port. − This example includes the use of a timer. − This example includes the use of a parameter.

 3.3.3 Example 3 – Sensor (push button) − The AP detects push button events. − A normal closed push button is connected via an I/O port. − This example includes the use of a simple debounce function.

 3.3.4 Example 4 – Actuator based on an external µC (FT1.2) − An Arduino UNO external µC is connected to the BIM. − Bus events for GO0 will propagated to the external µC by the BIM via its TxD/RxD ports. − The external µC will switch a LED accordingly. − The communication between the BIM and the external µC is based on the FT1.2 serial protocol.

 3.3.5 Example 5 – Sensor based on an external µC (FT1.2) − An Arduino UNO external µC is connected to the BIM. − The external µC detects push button events. − Every push button event will be propagated to the BIM via its TxD/RxD ports. − The push button events will be further propagated via GO0 onto the bus by the BIM. − The communication between the BIM and the external µC is based on the FT1.2 serial protocol.

##### 3.4 Example 1 – Simulated acutator (binary output) in detail

###### BIM M13x

GND - C1 / EVB24 T3 (JP4)

VCC - D2 / EVB18

VDD - D1 / EVB22

470Ω

###### 78F053X

LED

TxD – D3 / EVB14

###### TP-UART RxD – D4 / EVB10

+Bus E1/EVB25

GND

-Bus E2/EVB26

###### Figure 2 – Hardware block diagram for example 1


-----

###### − Connect a LED + resistor between test pin 3 and GND of the BIM M13x Evaluation Board.
  Test pin 3 is T3 of JP4 (TEST pins).
  The test pins are not available on regular BIM M13x devices.
  GND is pin 24 of JP2 (BIM Connector). − Compile the sample project contained in: Opternus_Example1-v01.zip. − GO0 toggles test pin 3, this GO is by default associated with GA = 0/0/1. − Send A_GroupValue_Write Telegrams for GO0 e.g. with ETS Group Monitor.
  Value = 0 (off) should switch off the LED.
  Value = 1 (on) should switch on the LED.

##### 3.5 Example 2 – Actuator (binary output) in detail

###### BIM M13x

GND - C1 / EVB24 P70 – B5 / EVB07

P71 – A6 / EVB01

VCC - D2 / EVB18 P72 – B4 / EVB11

P73 – A5 / EVB05

VDD - D1 / EVB22 P74 – B3 / EVB15

P75 – A4 / EVB09 470Ω
P76 – B2 / EVB19
P77 – A3 / EVB13

###### 78F053X

LED

TxD – D3 / EVB14

###### TP-UART RxD – D4 / EVB10

+Bus E1/EVB25

GND

-Bus E2/EVB26

###### Figure 3 – Hardware Block Diagram for Example 2

 − Connect a LED + resistor between I/O port P70 and GND of the BIM M13x Evaluation Board.
  P70 is pin 7 of JP2 (BIM Connector), on regular BIM M13x devices P70 is pin B5.
  GND is pin 24 of JP2 (BIM Connector), on regular BIM M13x devices GND is pin C1. − Compile the sample project contained in: Opternus_Example2-v01.zip − The LED can be activated via GO0, which by default is associated with GA = 0/0/1.
  Value = 0 (off) should switch the LED off.
  Value = 1 (on) should make the LED toggle. − The toggle frequency = 1/ (toggle time * toggle factor).
  The Toggle Time is set to 100 ms.
  Toggle factor = 0 means that the LED is continuously lit. − The toggle factor is stored as parameter in the memory of the device (EEPROM).


-----

###### − The toggle factor can be changed via GO1, which by default is associated with GA = 0/0/2.
  E.g. value = 5 will make the LED toggle 2 times per second when activated.
  E.g. value = 10 will make the LED toggle each second when activated.

##### 3.6 Example 3 – Sensor (push button) in detail

###### BIM M13x

GND - C1 / EVB24 P70 – B5 / EVB07

P71 – A6 / EVB01

VCC - D2 / EVB18 P72 – B4 / EVB11

P73 – A5 / EVB05

VDD - D1 / EVB22 P74 – B3 / EVB15

P75 – A4 / EVB09
P76 – B2 / EVB19
P77 – A3 / EVB13

###### 78F053X

TxD – D3 / EVB14 Push

###### TP-UART RxD – D4 / EVB10 Button

+Bus E1/EVB25

-Bus E2/EVB26

GND

###### Figure 4 – Hardware Block Diagram for Example 3

 − Connect a push button between I/O port P77 and GND of the BIM M13x Evaluation Board.
  P77 is pin 13 of JP2 (BIM Connector), on regular BIM M13x devices P77 is pin A3.
  GND is pin 24 of JP2 (BIM Connector), on regular BIM M13x devices GND is pin C1. − Compile the sample project contained in: Opternus_Example3-v01.zip. − The push button events will be propagated via GO0 onto the bus.
  GO0 by default is associated with GA = 0/0/1.
  Each push button event makes the value of GO0 toggle. − P77 initialization:
  P77 is set as output port.
  The pull-up resistor of P77 is set, which makes the value of P77 become logically 1. − The push button events are detected as follows:
  After each AP loop (3,3 ms) the value of P77 is evaluated.
  If the value of P77 = 0 (logically) it means that the button is pushed.
  The value of GO0 is toggled and sent to the bus.
  A timer (200 ms) is started in order to debounce the push button events. − P77 is after each push button event reset as follows:
  Set P77 as input.
  Set P77 as output.
  Set the pull-up resistor of P77, which makes the value of P77 become logically 1 again.


-----

##### 3.7 Example 4 – Actuator based on an external µC in detail

###### BIM M13x

GND - C1 / EVB24 P70 – B5 / EVB07

P71 – A6 / EVB01

VCC - D2 / EVB18 P72 – B4 / EVB11

P73 – A5 / EVB05

VDD - D1 / EVB22 P74 – B3 / EVB15

P75 – A4 / EVB09
P76 – B2 / EVB19
P77 – A3 / EVB13

I/O – pin 2

###### 78F053X

TxD – D3 / EVB14 RX – pin 0

###### TP-UART RxD – D4 / EVB10 TX – pin 1 470Ω

+Bus E1/EVB25

Arduino UNO

-Bus E2/EVB26

LED

GND

###### Figure 5 – Hardware block diagram for example 4

 − Connect the external µC:
  GND of the external µC with GND of the BIM: pin 24 of JP2 (BIM Connector), on regular BIM M13x devices GND is pin C1.
  RX – pin 0 of the external µC with TxD of the BIM: pin 14 of JP2 (BIM Connector), on regular BIM M13x devices TxD is pin D3.
  TX – pin 1 of the external µC with RxD of the BIM: pin 10 of JP2 (BIM Connector), on regular BIM M13x devices RxD is pin D4. − Compile the sample project contained in: Opternus_Example4-v01.zip. − The LED can (indirectly) be activated via GO0, which by default is associated with GA = 0/0/1.
  Value = 0 (off) should switch the LED off.
  Value = 1 (on) should make the LED toggle. − For the external µC:
  Arduino UNO pin 2 serves as simulation of a KNX binary output channel by means of a LED.
  Depending on the actual content of every received FT1.2 message the LED will either be switched on or off.


-----

###### 3.7.1 Example 4 – The Arduino UNO source code

// 0x68,0x03,0x03,0x68,0xF3,0x00,0x01,0xF4,0x16 -> on
// 0x68,0x03,0x03,0x68,0xF3,0x00,0x00,0xF3,0x16 -> off

const int ledPin = 2;
int incomingByte = 0;

const int maxLen = 20;
int msgState = 0;
int msgCntr = 0;
int msgLen = 0;
int msg[maxLen];

void setup()
{
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);
Serial.begin(19200, SERIAL_8E1);
}

void loop()
{
if (Serial.available())
{
incomingByte = Serial.read();

if(msgState==0 && incomingByte==0x68)
{
msgState = 1;
msgCntr = 0;
msgLen = 0;

for(int i=0;i<maxLen;i++)
msg[i] = 0;
}
if(msgState==1)
{
msg[msgCntr++] = incomingByte;

if(msgCntr==2)
msgLen = incomingByte + 6;

if(msgCntr==msgLen)
{
if(incomingByte==0x16)
{
msgState = 0;
digitalWrite(ledPin, msg[6]);

Serial.write(0xE5); //ACK
}
}
}
}
}


-----

##### 3.8 Example 5 – Sensor based on an external µC in detail

BIM M13x

GND - C1 / EVB24 P70 – B5 / EVB07

P71 – A6 / EVB01

VCC - D2 / EVB18 P72 – B4 / EVB11

P73 – A5 / EVB05

VDD - D1 / EVB22 P74 – B3 / EVB15

P75 – A4 / EVB09
P76 – B2 / EVB19
P77 – A3 / EVB13

VCC

78F053X I/O – pin 4

TxD – D3 / EVB14 RX – pin 0 10KΩ

TP-UART RxD – D4 / EVB10 TX – pin 1

+Bus E1/EVB25

Arduino UNO

-Bus E2/EVB26

Push
Button

GND

###### Figure 6 – Hardware block diagram for example 5

 − Connect the external µC:
  GND of the external µC with GND of the BIM: pin 24 of JP2 (BIM Connector), on regular BIM M13x devices GND is pin C1.
  RX – pin 0 of the external µC with TxD of the BIM: pin 14 of JP2 (BIM Connector), on regular BIM M13x devices TxD is pin D3.
  TX – pin 1 of the external µC with RxD of the BIM: pin 10 of JP2 (BIM Connector), on regular BIM M13x devices RxD is pin D4. − Compile the sample project contained in: Opternus_Example5-v01.zip. − The push button events will (indirectly) be propagated via GO0 onto the bus.
  GO0 by default is associated with GA = 0/0/1.
  Every push button event makes the value of GO0 toggle. − For the external µC:
  Arduino UNO pin 4 serves as input port in order to capture push button events.
  A simple debounce routine is implemented in order to detect the push button events.
  For each push button event an FT1.2 message is sent to the BIM.


-----

###### 3.8.1 Example 5 – The Arduino UNO source code

const int msg_odd_1[9] = {0x68,0x03,0x03,0x68,0x73,0x00,0x01,0x74,0x16};
const int msg_even_0[9] = {0x68,0x03,0x03,0x68,0x53,0x00,0x00,0x53,0x16};

const int buttonPin = 4;
int buttonState = HIGH;
int KNXoutput = LOW;
long lastDebounceTime = 0;
long debounceDelay = 200;
int TM = 0;
int i = 0;

void setup()
{
pinMode(buttonPin, INPUT);
Serial.begin(19200,SERIAL_8E1);
}

void loop()
{
if ((millis() - lastDebounceTime) > debounceDelay)
{
buttonState = digitalRead(buttonPin);
lastDebounceTime = millis();
TM = 1;
}
if ((TM == 1) && (buttonState == LOW))
{
if (KNXoutput == LOW)
{
KNXoutput = HIGH;
for(i=0; i < 9; i++)
Serial.write(msg_odd_1[i]);
}
else
{
KNXoutput = LOW;
for(i=0; i < 9; i++)
Serial.write(msg_even_0[i]);
}
buttonState = HIGH;
TM = 0;
}
}


-----

#### 4 Internal working of a BIM 

##### 4.1 Goal
###### This is explains the relation between KNX bus traffic events and the BIM M13x device resources. It is especially interesting if a deeper knowledge is required about the BIM based solutions, that is, understanding in full detail the relation between the BIM resources, the KNX communication stack and the AP.

##### 4.2 Processing bus telegrams
###### See Figure 7.

 The system software (KNX stack) does the following.

 − It analyses the Group Address and the value of the Telegram. − It determines which GO is involved, by consulting the following Resources:
  the Group Address Table – this is the list of GAs.
  the Group Object Association Table, which maps between the GAs and the GOs.
  the Group Object Table, which is the list of GOs and their descriptions. − It updates the value for the involved GO in RAM. The consulted Resources are:
  the Application Info Block to retrieve the pointer to CObjects and
  CObjects that contain the pointers for all GO values. − Sets the Update Flag for the involved GO in the RAM Flags. The AP continuously polls the Update Flags. If at least one is set then it will
 − fetch the GO value as stored in RAM, and − control the PEI (if required and/or applicable), and − reset the Update Flag in the RAM Flags.


-----

###### Figure 7 – Processing bus Telegrams

##### 4.3 Processing PEI Events
###### See: Figure 8.

 The AP:

 − Notices an event at the PEI. − Updates the value for the involved GO in RAM, the consulted resources are:
  the Application Info Block to retrieve the pointer to CObjects, and
  CObjects contains the pointers for all GO values. − Sets the Transmit Request Flag for the involved GO in the RAM Flags. The system software (KNX Stack) continuously polls the Transmit Request Flags? If at least one is set, then it will do the following.

 − Generate the (group) Telegram; the consulted resources in order to find the appropriate GA are:
  the Group Object Table = list with GO descriptions.
  the Association Table = mapping between GAs and GOs.
  the Group Address Table = list with GAs. − In order to find the appropriate data,
  the Application Info Block to retrieve the pointer to CObjects, and
  CObjects contains the pointers for all GO values.


-----

###### − Transmit the Telegram on the bus. − Reset the Transmit Request Flag for the involved GO in the RAM Flags.

## Processing PEI Events

**PEI**

**The AP:**

1) notices an event at the

**AP** 2) updates the value of the GO accordingly

-> using CObjects

3) sets the ‘Transmit Request Flag’ in RAMFlags

RAMFlags Association Table

**KNX Stack:**

Address Table Object Table

1) checks if at least 1 ‘Transmit Request Flag’ has
been set in RAMFlags

CObjects

2) builds up the telegram
-> using the Object Table, Association Table &
Addres Table to get the
-> using CObjects to get the

**KNX Stack**

3) transmits the telegram on the bus

4) resets the ‘Transmit Request Flag’ in RAMFlags

A_GroupValue_Write (GA, data)

###### K N X

 Figure 9 – Processing PEI events


-----

#### 5 AP development with IAR – based on example 2 (actuator)

##### 5.1 Goal
###### This is explains example 2 on source code level. It is especially interesting if a deeper knowledge is required about this solution, that is, understanding the structure of the AP in full detail.

 The IAR project (including the s19 file) is together with the MT4 project available as download, it can be found in the same directory where this file can be downloaded from. File: Opternus_Example2-v01.zip.

##### 5.2 The complete file main.c

/******************************************************************************


- File: main.c

******************************************************************************/
#include "BIM_M13x.h"

// ram flags for communication objects
BYTE RAMFlags[(NUM_OF_COM_OBJ / 2) + 1];

// communication object values
BYTE Data_Obj0; /* this GO is used to activate or deactivate the output (P70) */
BYTE Data_Obj1; /* this GO is used to change the toggle factor via the bus */

#define TOGGLETIME MSEC100
TIMER_TAB UserTimerTab;
BYTE P70_status; /* status of the output (P70) */
BYTE param0; /* to store the value of the toggle factor */

/******************************************************************************/
// parameter: ToggleFactor
// used for TimerTicks = ToggleFactor * TOGGLETIME
#pragma constseg = PARAM
__root const BYTE ToggleFactor;

void AppInit(void)
{
// after initialization a taskswitch is required because
// the task switch is disabled at cstartup
U._TmInit(NUM_OF_TIMERS);

/* set the status of the output (P70) to 'not active' (no toggling) */
P70_status = 0xff;

/* set I/O port P70 to output */
PM7 reset_bit BIT0;

/* set the initial toggle factor value according to the memory parameter */
/* toggle factor = 0 means that the LED is lit continously when active */
param0 = ToggleFactor;

FORCE_TASKSWITCH();
}

//-----------------------------------------------------------------------// this is the main function of the application program
// it is called at the end of cstartup
//-----------------------------------------------------------------------void main (void)
{

// initialization
AppInit();


-----

// start the main loop of the application program
// it will be interrupted every 3.3ms and
// continued after a complete system cycle

for(;;)
{
/* activate or deactivate the output(P70) via GO0 */
if (U._TestAndCopyObject(COM_OBJ0, &Data_Obj0, 1) == TRUE)
{
if (Data_Obj0 == 0)
{
P7 reset_bit BIT0; /* deactivate the output */
P70_status = 0xff;
U._TmStop(&UserTimerTab.Timers[0]);
}
else
{
P7 set_bit BIT0; /* activate the output */
P70_status = 0x01;
U._TmStart(&UserTimerTab.Timers[0], TOGGLETIME * param0);
}
}

/* toggle the output when the timer elapses */
if(U._TmIsRunning(&UserTimerTab.Timers[0]) && U._TmIsExpired(&UserTimerTab.Timers[0]))
{
if(P70_status == 0x00)
{
P7 set_bit BIT0;
P70_status = 0x01;
}
else
{
P7 reset_bit BIT0;
P70_status = 0x00;
}
U._TmAddStart(&UserTimerTab.Timers[0], TOGGLETIME * param0);
}

/* get a new toggle factor value via GO1 */
if (U._TestAndCopyObject(COM_OBJ1, &Data_Obj1, 1) == TRUE)
{
param0 = Data_Obj1;

if (P70_status != 0xff)
U._TmAddStart(&UserTimerTab.Timers[0], TOGGLETIME * param0);
}

}
}

//-----------------------------------------------------------------------// this function is called @ power loss
//-----------------------------------------------------------------------void save()
{
}

//-----------------------------------------------------------------------// this function is called @ AP unload
//-----------------------------------------------------------------------void unload()
{
}


-----

const BYTE NbComsOb = NUM_OF_COM_OBJ;
const CObjPtr CObjects[] =   // table for com objects
{
(void*)&NbComsOb,      // ptr to number of cobjects
&Data_Obj0,
&Data_Obj1
};

//-----------------------------------------------------------------------// the application info block contains
// information required for the operating system
//-----------------------------------------------------------------------#pragma constseg = APPINFOBLOCK
const AppInfoBlock AIB =
{
Swap(0x0001),          // AIBVersion
0x01, 0x01,           // ApplFirmwareVersion, ApplFirmwareSubVersion
__program_start,        // AppMain
save,              // AppSave
unload,             // AppUnload
CObjects,            // pCObjects
RAMFlags,            // pRAMFlags
&UserTimerTab,         // pUserTimerTab
NULL,              // pUsrIntObjRoot
NULL,              // pUsrParamMgmt
0x0000             // WatchDogTime
};
#pragma constseg = default

###### 5.2.1 Detailed explanation of main.c

// ram flags for communication objects
BYTE RAMFlags[(NUM_OF_COM_OBJ / 2) + 1];

// communication object values
BYTE Data_Obj0; /* this GO is used to activate or deactivate the output (P70) */
BYTE Data_Obj1; /* this GO is used to change the toggle factor via the bus */

###### − This reserves the required RAM for the GOs of this AP: flags + values. − This is the operational (live) data for the GOs. − The actual definitions of the GOs are stored in EEPROM and will be set up in tables.c (see further) in the resource called Object Table. − The address of RAMFlags needs to be specified in the Application Info Block.

BYTE P70_status; /* status of the output (P70) */
BYTE param0; /* to store the value of the toggle factor */

###### − This reserves the required RAM in order to store the status of P70 and the toggle factor. − The exact memory locations depend on the settings stored in BIM_M_130.xcl.

#pragma constseg = PARAM
__root const BYTE ToggleFactor;


-----

###### − This reserves the required EEPROM in order to store the toggle factor. − The exact memory locations depend on the settings stored in BIM_M_130.xcl.


const BYTE NbComsOb = NUM_OF_GOM_OBJ;


###### − This reserves 1 byte in EEPROM in order to store the number of GOs.

const BYTE NbComsOb = NUM_OF_COM_OBJ;
const CObjPtr CObjects[] =   // table for com objects
{
(void*)&NbComsOb,      // ptr to number of cobjects
&Data_Obj0,
&Data_Obj1
};

###### − This reserves the necessary EEPROM in order to store/set up a table, which consists of:
  a pointer to where the number of GOs is stored; this is a pointer to EEPROM, and
  pointers to where the GO values are stored; these are pointers to RAM.. − The address of GObjects needs to be specified in the Application Info Block.

#pragma constseg = APPINFOBLOCK
const AppInfoBlock AIB =
{
Swap(0x0001),          // AIBVersion
0x01, 0x01,           // ApplFirmwareVersion, ApplFirmwareSubVersion
__program_start,        // AppMain
save,              // AppSave
unload,             // AppUnload
CObjects,            // pCObjects
RAMFlags,            // pRAMFlags
&UserTimerTab,         // pUserTimerTab
NULL,              // pUsrIntObjRoot
NULL,              // pUsrParamMgmt
0x0000             // WatchDogTime
};

###### − This reserves the necessary EEPROM in order to store the Application Info Block. − This information stores amongst others:
  the starting address of the AP,
  pointers to the save & unload routines,
  pointer to the RAM flags, and
  pointer to the table containing the GO value pointers (= GObjects).


-----

##### 5.3 The complete file tables.c

/******************************************************************************


- File: tables.c

******************************************************************************/
#include "BIM_M13x.h"

#pragma constseg = ADDRTAB
__root const BYTE AdrTab[] =
{   NUM_OF_COM_OBJ + 1,  // for debug: one group address per communication object
0x11, 0xFD,      // physical address 1.1.253
// group addresses
0x00, 0x01,
0x00, 0x02,
0x00         // padding
};
#pragma constseg = ASSOCTAB
__root const BYTE AssTab[] =
{   NUM_OF_COM_OBJ + 0,  // for debug: one association per communication object
//  grp.addr., comobj. num.,
0x01,     0x00,
0x02,     0x01,
0x00         // padding
};
#pragma constseg = COMTAB
__root const BYTE EE_CommsTab[] =
{   NUM_OF_COM_OBJ,    // number of communication objects,
0x00,    // pointer to RAMFlags is no longer used
// but must be specified for compatibility
/*Obj0*/ NULL, (COMM_ENABLE + WRITE_ENABLE + TRANSMIT_ENABLE + READ_ENABLE + TX_LOW),

UINT1,
/*Obj1*/ NULL, (COMM_ENABLE + WRITE_ENABLE + TRANSMIT_ENABLE + READ_ENABLE + TX_LOW), UINT8

};
#pragma constseg = default

###### 5.3.1 Detailed explanation of table.c

#pragma constseg = ADDRTAB
__root const BYTE AdrTab[] =
{   NUM_OF_COM_OBJ + 1,  // for debug: one group address per communication object
// (group addresses must be sorted in ascending order!)
0x11, 0xFD,      // physical address 1.1.253
// group addresses
0x00, 0x01,
0x00, 0x02,
0x00         // padding
};

###### − This reserves the required EEPROM for the Address Table of this AP.
  The first two bytes are reserved for the Individual Address IA of the BCU.
  The last byte is always 0x00 in order to indicate the end of this table.
  The GAs for this AP are stored between the IA and the ‘end of table’ byte.
  In case the AP requires more GAs, they need to be added between the IA and the last byte, two bytes per extra GA.


-----

#pragma constseg = ASSOCTAB
__root const BYTE AssTab[] =
{   NUM_OF_COM_OBJ + 0,  // for debug: one association per communication object
//  grp.addr., comobj. num.,
0x01,     0x00,
0x02,     0x01,
0x00         // padding
};

###### − This reserves the required EEPROM for the Association Table of this AP. − This table defines the links between the GAs and the GOs. − The last byte is always 0x00 in order to indicate the end of this table. − Each ‘association’ contains two bytes:
  first = index of the GA in the Address Table
  second = index of the GO in the Object Table. − In case the AP requires more associations, they need to be added before the ‘end of table’ byte, two bytes per extra association.

#pragma constseg = COMTAB
__root const BYTE EE_CommsTab[] =
{   NUM_OF_COM_OBJ,    // number of communication objects,
0x00,    // pointer to RAMFlags is no longer used
// but must be specified for compatibility
/*Obj0*/ NULL, (COMM_ENABLE + WRITE_ENABLE + TRANSMIT_ENABLE + READ_ENABLE + TX_LOW),

UINT1,
/*Obj1*/ NULL, (COMM_ENABLE + WRITE_ENABLE + TRANSMIT_ENABLE + READ_ENABLE + TX_LOW), UINT8

};

###### − This reserves the required EEPROM for the Object Table of this AP. − This table contains the actual definitions of the individual GOs.
  The first byte contains the number of GOs.
  The second byte is reserved and needs to be set to 0x00 (because of compatibility reason). − Each GO definition contains 3 bytes.
  The first byte is not used (set to NULL).
  The second byte is the config byte; it is used to define the communication flags (CRWTU) and the priority (system, high, low, normal).
  Third byte defines the type (length) of the GO.

##### 5.4 Detailed explanation user.h

/******************************************************************************


- File: user.h

******************************************************************************/
#ifndef __USER_H
#define __USER_H

#define NUM_OF_TIMERS  1
#define NUM_OF_COM_OBJ 2


-----

#define COM_OBJ0 0
#define COM_OBJ1 1

#endif

###### − This AP has 1 Timer. NUM_OF_TIMERS is therefore set to 1. − This AP has 2 GOs. NUM_OF_GOM_OBJ is therefore set to 2. − Defining COM_OBJx is mandatory! Even if you don’t use them in the rest of the source code.

##### 5.5 Reserved Memory
###### The reserved memory locations in RAM (variables) and EEPROM (parameters) are as mentioned before defined in the file BIM_M_130.xcl.

/********************************************************************\
|*  D A T A                            *|
\********************************************************************/
-Z(DATA)CSTACK+_CSTACK_SIZE#FBCF
-Z(DATA)NEAR_I,NEAR_Z,NEAR_N=FB00-FBCF

/********************************************************************\
|*  C O D E                            *|
\********************************************************************/
-Z(CODE)PARAM=9C00-9FFF
-Z(CODE)NEAR_ID,CONST,RCODE,CODE=8200-9BFF

-Z(CODE)COMTAB=8190-81FF
-Z(CODE)ASSOCTAB=8140-818F
-Z(CODE)ADDRTAB=8116-813F

-Z(CODE)APPINFOBLOCK=8000-8115
-Z(CODE)ROOTCODE=7800-7FFF
/********************************************************************/
-Z(CODE)BCU2_JMP=7700-77FF

##### 5.6 Debug

###### − Make sure that the ‘Debug’ option is selected in the Workspace window. − Select Project/Make via the menu to compile and link the project. − Select Project/Debug via the menu in order to start the preparations for a debug session. − Select Debug/Go via the menu to actually start the AP. − This AP should as such work and does not require any real debugging unless you would like to test it with other (hard-coded) GAs as the ones specified in the Address Table.

##### 5.7 Release
###### Make sure that the ‘Release’ option is selected within the Workspace window.

 Select Project/Make via the menu to build the project; this will create the file BIM_M_130_Template.map in the Release\List folder of this project.

 As its content is too large to be copied here, only the most important part is shown here.

------------------------------------------------------------------------PARAM
Relative segment, address: 9C00 - 9C00 (0x1 bytes), align: 0
Segment part 13. ROOT.   Intra module refs:  AppInit


-----

ENTRY          ADDRESS     REF BY
=====          =======     ======
ToggleFactor      9C00
------------------------------------------------------------------------
###### This means that ‘ToggleFactor’ will be stored at address 9C00.

 Project/Make will also create the file BIM_M_130_Template.s19 in the Release\Exe folder of this project.

 This is its content.

S00C00003F43535441525455503E
S1138000000101010082CA83CB83029C08FB00FBB0
S109801000000000000066
S10B81160311FD000100020049
S10981400201000201002F
S10B81900200005F00005F071C
S1138200712AE661D01600FB100E00D23261613291
S1138210AD0143617197868AFC8BFA0200800216D5
S1138220810240810290819AD382B5B7D4100000B4
S1138230B1B1891CD6C2A220DE0D25DE0DDE0C25CF
S1138240DE0CDE0B25DE0BDE0A25DE0A9D17076138
S11382500C07DE01612DDE01DE026128DE02DE0391
S11382602903DE0321342734352735302730278A84
S1138270C7B2B49B7882B7AF891CD6AE04BE08AE31
S113828005BE09AE02BE06AE03BE0787BE04AE013C
S1138290BE0565616C616A616BE4E2B6B6B6B4AF03
S11382A0FAFEA101B372021277D6629A7682A1FF16
S11382B09E0CFB710B278E009C9E0DFB710B6F7146
S11382C00A6F712AE2712BE6000000000000000032
S11382D000B2AFB3B59AA282FA64A1000B079E0C58
S11382E0FB100000B1A0F0B18E0DFB120000706312
S11382F09A2A82B3B1021677D6C49A768210010004
S1138300A501120BFBB3D2020477D6C2B29A7682CD
S113831051BD2B8E0BFB9E0DFB8E0CFB41AD1F1034
S11383200000B1A0F0B18E0DFB12000070639A2A18
S113833082B3B1A1FB75021677D6C49A7682100077
S113834000A501120AFBB3D2020477D6C2B29A7610
S11383508251BD438E0AFB4D00BD15A1FF0B079E44
S11383600CFB1002FBD4021C77D6C49A7682FA273F
S1138370A1010A079E0CFB100000B1A0F0B18E0D04
S1138380FB12000070639A2A82B3B11002FBD4027C
S11383901477D6C49A76821002FBD4021A77D6C414
S11383A09A76824D00BD039BFD82021877D6C49A4B
S11383B076824D00BD039BFD828E0CFB4D00AD0308
S10F83C09BDA82A1010A079BDE82AFAFAA
S10B9C000002019C0AFB0BFBAE
S90382007A


-----

###### As such this file is correct but not usable for the MT, as it needs to be modified first.

 This can be done automatically via a Post-build command line, by doing the following.
 − Click Project/Options − Click Build Actions − Copy this: C:\Program Files\Siemens AG\BIM Tools\aioc.exe -t modifier --targs Template_130
"$PROJ_DIR$\config.xml" "$PROJ_DIR$\Release\Exe\BIM_M_130_Template.s19"
"$PROJ_DIR$\Release\Exe\BIM_M_130_Template_mod.s19" into the Post-build command line field.
###### Building the project will from now on create two extra files in the Release\Exe folder of this project:

 − BIM_M_130_Template_mod.log, and − BIM_M_130_Template_mod.s19. BIM_M_130_Template_mod.s19 is the actual modified s19 file and is directly usable (via import) in the MT. This is its content:

S00F000054656D706C6174655F313330C1
S113000000F00000000000000000000000000000FC
S113E800000101010082CA83CB83029C08FB00FB48
S109E810000000000000FE
S10B01160311FD0001000200C9
S1090140020100020100AF
S10B01900200005F00005F079C
S1130200712AE661D01600FB100E00D23261613211
S1130210AD0143617197868AFC8BFA020080021655
S1130220810240810290819AD382B5B7D410000034
S1130230B1B1891CD6C2A220DE0D25DE0DDE0C254F
S1130240DE0CDE0B25DE0BDE0A25DE0A9D170761B8
S11302500C07DE01612DDE01DE026128DE02DE0311
S11302602903DE0321342734352735302730278A04
S1130270C7B2B49B7882B7AF891CD6AE04BE08AEB1
S113028005BE09AE02BE06AE03BE0787BE04AE01BC
S1130290BE0565616C616A616BE4E2B6B6B6B4AF83
S11302A0FAFEA101B372021277D6629A7682A1FF96
S11302B09E0CFB710B278E009C9E0DFB710B6F71C6
S11302C00A6F712AE2712BE60000000000000000B2
S11302D000B2AFB3B59AA282FA64A1000B079E0CD8
S11302E0FB100000B1A0F0B18E0DFB120000706392
S11302F09A2A82B3B1021677D6C49A768210010084
S1130300A501120BFBB3D2020477D6C2B29A76824D
S113031051BD2B8E0BFB9E0DFB8E0CFB41AD1F10B4
S11303200000B1A0F0B18E0DFB12000070639A2A98
S113033082B3B1A1FB75021677D6C49A76821000F7
S113034000A501120AFBB3D2020477D6C2B29A7690
S11303508251BD438E0AFB4D00BD15A1FF0B079EC4
S11303600CFB1002FBD4021C77D6C49A7682FA27BF
S1130370A1010A079E0CFB100000B1A0F0B18E0D84
S1130380FB12000070639A2A82B3B11002FBD402FC
S11303901477D6C49A76821002FBD4021A77D6C494
S11303A09A76824D00BD039BFD82021877D6C49ACB
S11303B076824D00BD039BFD828E0CFB4D00AD0388
S10F03C09BDA82A1010A079BDE82AFAF2A
S10B1C000002019C0AFB0BFB2E


-----

S113F0000E000000000000000000000000000000EE
S113F01007004E0001010102030405060000000080
S113F02014000000000000000000000000000000C8
S113F03024000000000000000000000000000000A8
S113F0403400000000000000000000000000000088
S113F050110000000000000000000000000000009B
S113F0601300000116013F330300000000000000FC
S113F0701302000116000000000000000000000060
S113F080210000000000000000000000000000005B
S113F0902300000140018F33030000000000000042
S113F0A023020001400000000000000000000000F6
S113F0B0310000000000000000000000000000001B
S113F0C0330000E000E915330300000000000000F5
S113F0D033000001901FFF33030000000000000014
S113F0E03302000000FF00011234010000000000A0
S113F0F03305000000019000000000000000000043
S113F1005302000190000100010000000000000013
S113F11012000000000000000000000000000000D9
S113F12022000000000000000000000000000000B9
S113F1303200000000000000000000000000000099
S113F1400F000000000000000000000000000000AC
S113F150FF000000000000000000000000000000AC
S9030000FC

###### Not only the content of the first part has indeed been modified, it also has become longer, as the necessary load controls have been added.

 BIM_M_130_Template_mod.log gives a summary of the modifications applied compared to BIM_M_130_Template.s19, with the following content:

BIM-Tools v1.1.50.27121

Start reading MEMORYCONVERSION entries ...
MEMORYCONVENTRY: 7800 <-> 8115 Offset: +6800
MEMORYCONVENTRY: 8116 <-> 9FFF Offset: -8000
... finished reading MEMORYCONVERSION!

Start reading LOADCONTROLS entries ...
Read load control: CONNECT
Read load control: PROPERTYCOMPARE
Read load control: UNLOAD
Read load control: UNLOAD
Read load control: UNLOAD
Read load control: LOAD
Read load control: DATASEGMENT
Read load control: TABLEPOINTER
Read load control: LOAD
Read load control: DATASEGMENT
Read load control: TABLEPOINTER
Read load control: LOAD
Read load control: DATASEGMENT
Read load control: DATASEGMENT


-----

Read load control: APPDATA
Read load control: TABLEPOINTER
Read load control: LOADCOMPLETED
Read load control: LOADCOMPLETED
Read load control: LOADCOMPLETED
Read load control: DISCONNECT
... finished reading LOADCONTROLS!

Start parsing "C:\Documents and Settings\Administrator\My Documents\dev\Opternus Example 2 
V1.0\Release\Exe\BIM_M_130_Template.s19" ...
...finished!

Start creating "C:\Documents and Settings\Administrator\My Documents\dev\Opternus Example 2 
V1.0\Release\Exe\BIM_M_130_Template_mod.s19" ...
Start converting memory ...
... finished!
Start creating load controls ...
... finished!
... finished!

###### This is important as it is necessary to know where the parameters for the AP will be located in EEPROM.

 The log file shows that the offset for the memory locations have been changed:

MEMORYCONVENTRY: 7800 <-> 8115 Offset: +6800
MEMORYCONVENTRY: 8116 <-> 9FFF Offset: -8000

###### From BIM_M_130_Example_BasicKit.map it is known that the original location for ToggleFactor = 9C00 (see above). This means, because of

MEMORYCONVENTRY: 8116 <-> 9FFF Offset: -8000

###### that the actual location for this (ETS) parameters shall be calculated as 0x9C00 – 0x8000, that is - the address for ToggleFactor is 0x1C00.

##### 5.8 Important note: property compare load control
###### The second load control of the above mentioned S19 file makes ETS validate a particular device property, that is object 0, property 78 (0x4E). If the value of the target device property does not match with the value indicated in the load control, being ‘0x01 0x02 0x03 0x04 0x05 0x06’ then ETS will refuse to download the AP. The default value of this property for off-factory devices is set to ‘0xFF 0xFF 0xFF 0xFF 0xFF 0xFF’.

 There are two possibilities to ‘resolve’ this:
 − Either remove the load control from the load procedure (not recommended). − Or modify the value of device property accordingly with the Device Editor ETS App (recommended).


-----

#### 6 ETS4 product entry creation – based on Example 2 (Actuator)

##### 6.1 Introduction
###### This MT4 Project is available as part of the same download mentioned above.

##### 6.2 Start: Hardware, Catalog, AP/Static Part

###### − Start MT4 − Add Project
  Type = KNX Manufacturer Tool Project.
  Target ETS Version = ETS4. − Add ‘Hardware’
  Version = 1. − Define Product (= commercial realization of HW) − Add ‘Application Program’
  Number = 1 & Version = 1.
  Mask Version = 2.5. − Open and edit ‘Hardware’ in order to link the hardware to the AP
  select Application Programs.
  add new Hardware2Program.
  Select the AP. − AP Properties
  Dynamic Table Management = True. − Open the AP
  Import binary data: the (modified) s19 from Example 2 (see above), this will add the:
  Code Segments,
  Address Table,
  Association Table,
  Load Procedure, and the
  Communication Objects − Add Parameter Type
  ParameterTypeNumber, type = unsignedInt, size = 8bit. − Add Parameter
  Memory Parameter: Internal Name & Text = Toggle Factor.
  Change Code Segment to 0190h.
  Change Absolute Address to 1C00h (see above).
  Change Default Value to 5.

##### 6.3 AP Dynamic Part:

###### − Add to Channel 1, Page1:
  Add both ComObjectRefRefs 
  Add the ParameterRefRef  − ETS4 Preview – Parameter Dialog:


-----

###### Figure 10 – ETS4 Preview – Parameter dialog

 − ETS4 Preview – Object List:

 Figure 11 – ETS4 Preview – object list

##### 6.4 Import into ETS4 and test

###### − Build the project in MT4. − Create a test project via the ‘Edit’ menu in MT4. − Import the test project in ETS4. − The device is visible in the ‘Device’ panel under ’All Devices’. − Prior to programming with ETS, the evaluation board needs to be prepared as follows.
  Start the NEC Tool ID78K0-QB.
  Select chip 78F0537_64.
  Click File/Download from the menu in order to download BIM_M_130__M_135_Debug_v1_08.hex.
  Click Run/Go from the menu in order to activate the device.


-----

