# KNX Cookbook

## KNX development on basis of existing system components

 Components by Weinzierl Engineering

Summary

This document is a development help for KNX newcomers.

This document describes the development of a KNX device based on
existing KNX components provided by the company Weinzierl
Engineering.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0.0 2011.05.13 Preparation of the Final version.
1.01.01 2011.08.11 Update according final Manufacturer Tool release.
01.01.02 2013.10.14 Editorial updates for the publication of KNX Specifications 2.1.
01.02.01 2014.06.02 Update.
01.02.02 2014.09.05 Editorial review in view of publication.

#### References

[01] Chapter 3/1/2 “Glossary”

[02] Chapter 3/6/2 “Physical External Interface”

[03] Volume 6 “Profiles”

Filename: 02_05_03 Components by Weinzierl v01.02.02.docx
Version: 01.02.02
Status: Final version
Savedate: 2014.09.05
Number of pages: 13

© C i h 2011 2014 KNX A i i C kb k 01 02 02 2 f 13

|Version|Date|Modifications|
|---|---|---|
|1.0.0|2011.05.13|Preparation of the Final version.|
|1.01.01|2011.08.11|Update according final Manufacturer Tool release.|
|01.01.02|2013.10.14|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.01|2014.06.02|Update.|
|01.02.02|2014.09.05|Editorial review in view of publication.|


-----

#### Contents

###### 1 About the Weinzierl Engineering KNX BAOS devices ...................................................... 4 1.1 Needed software ............................................................................................................. 4 1.2 About the Weinzierl KNX BAOS Starter Kit ................................................................. 4

 2 Preparation and test ............................................................................................................... 5 2.1 Connect and play ............................................................................................................ 5 2.2 ETS project ..................................................................................................................... 6 2.3 Use the serial terminal SW to check the device configuration ....................................... 7 2.4 Use the serial terminal SW in order to simulate the AM ................................................ 7

 3 Weinzierl Engineering BAOS based solutions .................................................................... 8 3.1 Hardware block diagram ................................................................................................. 8 3.2 Arduino microcontrollers ................................................................................................ 8 3.3 Arduino UNO used as KNX Sensor ............................................................................. 10 3.3.1 Setup ................................................................................................................. 10 3.3.2 Example 1 – Sensor: The Arduino UNO source code ...................................... 10 3.4 Arduino UNO used as KNX Actuator .......................................................................... 12 3.4.1 Setup ................................................................................................................. 12 3.4.2 Example 2 – actuator: the Arduino UNO source code ..................................... 13

© C i h 2011 2014 KNX A i i C kb k 01 02 02 3 f 13


-----

### 1 About the Weinzierl Engineering KNX BAOS devices

#### 1.1 Needed software

− Installed ETS4 software (Demo is sufficient).
− FTDI FT232RL driver.
− Any serial terminal software.
− Arduino IDE.

#### 1.2 About the Weinzierl KNX BAOS Starter Kit

− This product is based on the Weinzierl KNX BAOS device. Details:

 KNX Profile Class = System 7, see [03].

 Interface = serial asynchronous.

 FT1.2 based protocol, see [02].
− The Weinzierl KNX BAOS Starter Kit contains:

 1 development board (PCB).

 1 KNX BAOS 820 device.

 1 KNX BAOS 822 device.

 1 Power Supply (9 V).
− KNX BAOS devices come delivered with 250 pre-defined GOs or in other words, they are exfactory delivered with a preloaded certified application program.

© C i h 2011 2014 KNX A i i C kb k 01 02 02 4 f 13


-----

### 2 Preparation and test

#### 2.1 Connect and play
Install the FT232RL driver.

− [Link: http://www.ftdichip.com/Drivers/VCP.htm.](http://www.ftdichip.com/Drivers/VCP.htm)
− This will add a virtual com port to your computer.
− Use any serial terminal software, e.g. Serial Terminal from RealTerm.
− [Link: http://realterm.sourceforge.net/.](http://realterm.sourceforge.net/)
− Connect the PCB with the PC via USB.
− Screenshot:

**Figure 1 – Serial Terminal screenshot**

Connect.

− Wire the device.
− Open the serial terminal software (see Figure 1).
− Click tab page ‘Port’.
− Select the virtual com port that has been added.
− Put its settings to 19200, 8, 1, even.
Play.

− Click tab page Send.
− Type e.g. ‘0x10,0x40,0x40,0x16’ in the top entry field and click ‘Send Numbers’. This command
will reset the device. The device confirms by sending an FT1.2 ACK (0xE5). This is a perfect
method to test the principal working of the test setup.

© C i h 2011 2014 KNX A i i C kb k 01 02 02 5 f 13


-----

#### 2.2 ETS project
The purpose is to create an ETS project for testing both the sensor and actuator examples, which are
further down explained in this document.

[Download the KNX BAOS Module 820 ETS product template from this URL: www.weinzierl.de.](http://www.weinzierl.de/)

Required Group Object setup for the Sensor example:

− Type of datapoint = DPT 01 – Binary – 1 bit
− Group Object flags = Communication & Transmit
Required Group Object setup for the Actuator example:

− Type of datapoint = DPT 01 – Binary – 1 bit
− Group Object flags = Communication & Write
Screenshots:

**Figure 2 – ETS KNX BAOS parameter settings**

© C i h 2011 2014 KNX A i i C kb k 01 02 02 6 f 13


-----

**Figure 3 – ETS KNX BAOS group object settings**

#### 2.3 Use the serial terminal SW to check the device configuration

− Connect via USB.
− Send the following GetServerItem.Req command, e.g.:
‘0x68,0x05,0x05,0x68,0x73,0xF0,0x01,0x01,0x01,0x66,0x16’ (e.g. after reset).
− Expected result: GetServerItem.Res message from the BAOS in the terminal SW monitor, e.g. ‘68
0D 0D 68 F3 F0 81 01 01 01 06 00 00 C5 08 02 01 3D 16’. This will be repeated three times
because the serial terminal SW does not send the FT1.2 ACKs (0xE5).
Check the Weinzierl Engineering documentation for more details.

#### 2.4 Use the serial terminal SW in order to simulate the AM

− Connect via USB.
− For the Sensor example:

 Send the following alternating commands, e.g.:

 0x68,0x08,0x08,0x68,0x73,0xF0,0x06,0x01,0x01,0x01,0x31,0x01,0x9E,0x16

 0x68,0x08,0x08,0x68,0x53,0xF0,0x06,0x01,0x01,0x01,0x31,0x00,0x7D,0x16

 Expected result: A_GroupValue_Write telegrams sent from the BAOS to the bus.
− For the Actuator example:

 Send an A_GroupValue_Write telegrams to the bus with e.g. ETS Group Monitor.

 Expected result: indication messages from the BAOS in the serial terminal SW monitor, e.g.
‘68 08 08 68 D3 F0 C1 01 01 01 81 01 09 16’. This will be repeated three times because the
serial terminal SW doesn’t send the FT1.2 ACKs (0xE5).
Check the Weinzierl Engineering documentation for more details.

© C i h 2011 2014 KNX A i i C kb k 01 02 02 7 f 13


-----

### 3 Weinzierl Engineering BAOS based solutions

#### 3.1 Hardware block diagram

 BAOS

+BUS TX

#### External µC

-BUS RX

KEY VCC

LED GND

Galvanic Separation

**Figure 4 – Hardware Block Diagram**

Details:

− Interface: FT1.2 based protocol via TX and RX.
− For more details about the serial protocol, please consult the Weinzierl Engineering related BAOS
documentation. URL: www.weinzierl.de.

#### 3.2 Arduino microcontrollers
For the external microcontroller, we opted for the Arduino open source electronics prototyping platform.
More information can be found via this URL: arduino.cc

The main reason for choosing Arduino is the fact that the Arduino Software (compiler/loader) is free of
charge.

Several types of Arduino microcontrollers exist; we have used ‘Arduino UNO’.

Install the Arduino IDE:

− Link: arduino.cc
− Screenshot

© C i h 2011 2014 KNX A i i C kb k 01 02 02 8 f 13

|+BUS<br>-BUS<br>KEY<br>LED|TX<br>RX<br>VCC<br>GND|
|---|---|


-----

**Figure 5 – Arduino IDE**

© C i h 2011 2014 KNX A i i C kb k 01 02 02 9 f 13


-----

#### 3.3 Arduino UNO used as KNX Sensor

##### 3.3.1 Setup

VCC

VCC

I/O – pin 4

GND

10KΩ

TX – pin 1

Arduino UNO

Push
Button

GND

+BUS TX

RX

-BUS

KEY VCC

LED GND

BAOS

**Figure 6 – Arduino UNO used as KNX Sensor**

Details:

− Arduino UNO pin 4 serves as input port in order to capture push button events.
− Arduino UNO pin 1 serves as serial transmit port, which is connected to RX of the BAOS.
− A simple debounce routine is implemented in order to detect the push button events.
− For each push button event an ASCII command is sent to the BAOS.

##### 3.3.2 Example 1 – Sensor: The Arduino UNO source code

const int msg_odd_0[14] = {0x68,0x08,0x08,0x68,0x73,0xF0,0x06,0x01,0x01,0x01,0x31,0x00,0x9D,0x16};
const int msg_odd_1[14] = {0x68,0x08,0x08,0x68,0x73,0xF0,0x06,0x01,0x01,0x01,0x31,0x01,0x9E,0x16};
const int msg_even_0[14] = {0x68,0x08,0x08,0x68,0x53,0xF0,0x06,0x01,0x01,0x01,0x31,0x00,0x7D,0x16};
const int msg_even_1[14] = {0x68,0x08,0x08,0x68,0x53,0xF0,0x06,0x01,0x01,0x01,0x31,0x01,0x7E,0x16};

const int buttonPin = 4;
int buttonState = HIGH;
int KNXoutput = LOW;
long lastDebounceTime = 0;
long debounceDelay = 200;
int TM = 0;
int i = 0;

© C i h 2011 2014 KNX A i i C kb k 01 02 02 10 f 13

|+BUS<br>-BUS<br>KEY<br>LED|TX<br>RX<br>VCC<br>GND|
|---|---|


-----

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
for(i=0; i < 14; i++)
Serial.write(msg_odd_1[i]);
}
else
{
KNXoutput = LOW;
for(i=0; i < 14; i++)
Serial.write(msg_even_0[i]);
}
buttonState = HIGH;
TM = 0;
}
}

© C i h 2011 2014 KNX A i i C kb k 01 02 02 11 f 13


-----

#### 3.4 Arduino UNO used as KNX Actuator

##### 3.4.1 Setup

VCC

I/O – pin 2

GND

RX – pin 0

470Ω

Arduino UNO

LED

+BUS TX

RD GND

-BUS

KEY VCC

LED GND

BAOS

**Figure 7 – Arduino UNO used as KNX Actuator**

Details:

− Arduino UNO pin 2 serves as simulation of a KNX binary output channel by means of a LED.
− Arduino UNO pin 0 serves as serial receive port, which is connected to TX of the BAOS.
− A simple serial port read routine is implemented in order to capture and process ASCII commands
from the BAOS.
− Depending on the actual content of each received ASCII command the LED will either be switched
on or off.
Remark:

− In the source code (see further) an acknowledge byte (0xE5) is sent after each received BAOS
message. This obviously is only effective if the Arduino UNO pin 1 (TX) is connected to RD of the
BAOS (which is not the case in the above figure).

© C i h 2011 2014 KNX A i i C kb k 01 02 02 12 f 13

|+BUS<br>-BUS<br>KEY<br>LED|TX<br>RD<br>VCC<br>GND|
|---|---|


-----

##### 3.4.2 Example 2 – actuator: the Arduino UNO source code

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

if(msg[5]==0xF0 && msg[7]==0x01)
digitalWrite(ledPin, msg[11]);

Serial.write(0xE5); //ACK
}
}
}
}
}

© C i h 2011 2014 KNX A i i C kb k 01 02 02 13 f 13


-----

