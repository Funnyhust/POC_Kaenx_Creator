# KNX Cookbook

## KNX development on basis of existing system components

 Components by TAPKO Technologies

Summary

This document is a development help for KNX newcomers.

This document describes the development of a KNX device based on
existing KNX components provided by the company TAPKO
Technologies.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0.0 2011.05.13 Preparation of the final version.
1.01.01 2011.08.11 Update according final Manufacturer Tool release.
01.01.02 2013.10.14 Editorial updates for the publication of KNX Specifications 2.1.
01.02.01 2014.06.02 Update.
01.02.02 2014.09.05 Editorial review in view of publication.

#### References

[01] Chapter 3/1/2 “Glossary”

[02] Volume 6 “Profiles”

Filename: 02_05_02 Components by TAPKO v01.02.02.docx
Version: 01.02.02
Status: Final version
Savedate: 2014.09.05
Number of pages: 13

© C i h 2010 2014 KNX A i i C kb k 01 02 02 2 f 13

|Version|Date|Modifications|
|---|---|---|
|1.0.0|2011.05.13|Preparation of the final version.|
|1.01.01|2011.08.11|Update according final Manufacturer Tool release.|
|01.01.02|2013.10.14|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.01|2014.06.02|Update.|
|01.02.02|2014.09.05|Editorial review in view of publication.|


-----

#### Contents

###### 1 About the TAPKO Technologies SIM-KNX devices .......................................................... 4 1.1 Needed software ............................................................................................................. 4 1.2 About the TAPKO Technologies SIM-KNX Evaluation device .................................... 4

 2 Preparation and test ............................................................................................................... 5 2.1 Connect and play ............................................................................................................ 5 2.2 ETS project ..................................................................................................................... 6 2.3 Use the serial terminal SW to check the device configuration ....................................... 7 2.4 Use the serial terminal SW in order to simulate the AM ................................................ 7

 3 TAPKO Technologies SIM-KNX based solutions ............................................................... 8 3.1 Hardware block diagram ................................................................................................. 8 3.2 Arduino microcontrollers ................................................................................................ 8 3.3 Arduino UNO used as KNX Sensor ............................................................................. 10 3.3.1 Setup ................................................................................................................. 10 3.3.2 Example 1 – sensor: the Arduino UNO source code ........................................ 10 3.4 Arduino UNO used as KNX actuator ........................................................................... 12 3.4.1 Setup ................................................................................................................. 12 3.4.2 Example 2 – Actuator: The Arduino UNO source code ................................... 13

© C i h 2010 2014 KNX A i i C kb k 01 02 02 3 f 13


-----

### 1 About the TAPKO Technologies SIM-KNX devices

#### 1.1 Needed software

− Installed ETS4 software (Demo is sufficient).
− FTDI FT232BL driver.
− Any serial terminal software.
− Arduino IDE.

#### 1.2 About the TAPKO Technologies SIM-KNX Evaluation device

− This device is based on the TAPKO Technologies SIM-KNX device, details:

 KNX Profile Class = System 7, see [02].

 Interface = serial asynchronous.

 ASCII protocol.
− TAPKO Technologies SIM-KNX is available in two editions: 128 or 254 GOs.

 Two variants are available: RS232 or USB.
− The USB/128 edition has been used as base for this document.

 Application Module = PCB based on the FTDI FT232BL chip.

 The FT232BL chip converts USB into RS232 legacy peripherals.
− TAPKO Technologies SIM-KNX devices come delivered with 128 pre-defined GOs or in other
words, they are ex-factory delivered with a preloaded certified application program.

© C i h 2010 2014 KNX A i i C kb k 01 02 02 4 f 13


-----

### 2 Preparation and test

#### 2.1 Connect and play
Install the FT232BL driver

− [Link: http://www.ftdichip.com/Drivers/VCP.htm](http://www.ftdichip.com/Drivers/VCP.htm)
− This will add a virtual com port to your computer
− Use any serial terminal software, e.g. Serial Terminal from RealTerm
− [Link: http://realterm.sourceforge.net/](http://realterm.sourceforge.net/)
− Connect the PCB with the PC via USB
− Screenshot:

**Figure 1 – Serial terminal screenshot**

Connect.

− Wire the device.
− Open the serial terminal software (see Figure 1).
− Click tab page ‘Port’.
− Select the virtual com port that has been added.
− Put its settings to 9600, 8, 1, none.
Play

− Click tab page Send.
− Make sure to set EOL (end of line) settings to ‘+CR’.
− Type e.g. ‘dag’ in the top entry field and click ‘Send ASCII’. This command will ask the device to
send back its Individual Address. This is a perfect method to test the principal working of the test
setup.
− Other commands that could be used in this context are: das, dpg, dps, dr, dsg, dvg, gci. Consult the
TAPKO Technologies SIM-KNX related documentation for more details.

© C i h 2010 2014 KNX A i i C kb k 01 02 02 5 f 13


-----

#### 2.2 ETS project
The purpose is to create an ETS project for testing both the sensor and actuator examples, which are
further down explained in this document.

[Download a generic SIM-KNX based ETS project file from this URL: www.tapko.de.](http://www.tapko.de/)

Required Group Object setup for the Sensor example:

− Group Object DPT = DPT 1.
− Group Object flags = Communication & Transmit.
− Group Object usage = sending.
− Group Object sending setup = send on every receive.
Required Group Object setup for the Actuator example:

− Group Object DPT = DPT 1.
− Group Object flags = Communication & Write.
− Group Object usage = receiving.
− Group Object indication setup = indication on every receive.
Screenshots:

**Figure 2 – KNX-SIM ETS parameter settings**

© C i h 2010 2014 KNX A i i C kb k 01 02 02 6 f 13


-----

**Figure 3 – KNX-SIM ETS Group Object settings**

#### 2.3 Use the serial terminal SW to check the device configuration
Connect via USB.

Send the following ASCII commands:

− ocg(0) to check the configuration of GO nr. 0.

 expected response for a sensor: $01 $00 $47 $0001 $0000 $00.

 expected response for an actuator: $01 $00 $17 $0000 $0802 $00.
− ogg(0) to check the assigned GA(s) for the same GO.

 expected response, e.g.: $0001 for 0/0/1.

 expected response, e.g.: $0002 for 0/0/2.
Check the TAPKO Technologies documentation for more details.

#### 2.4 Use the serial terminal SW in order to simulate the AM
Connect via USB.
For the Sensor example:

− Send e.g. the following ASCII command: ‘ovs (0)1’ to set the value of Group Object 0 to 1.
− Expected result: an A_GroupValue_Write Telegram sent from the SIM-KNX to the bus.
For the Actuator example:

− Send an A_GroupValue_Write Telegram to the bus with e.g. ETS Group Monitor.
− Expected result: an indication message from the SIM-KNX in the terminal SW monitor, e.g. ‘oui
$01 $18 1’.
Check the TAPKO Technologies documentation for more details.

© C i h 2010 2014 KNX A i i C kb k 01 02 02 7 f 13


-----

### 3 TAPKO Technologies SIM-KNX based solutions

#### 3.1 Hardware block diagram

##### SIM-KNX

+Bus – pin 4 TxD – pin 6

##### External µC

-Bus – pin 1 RxD – pin 7

Key – pin 2 VCC – pin 5

LED – pin 3 GND – pin 8

Galvanic Separation

**Figure 4 – Hardware Block Diagram**

Details:

− Interface: serial ASCII protocol via TxD (pin 6) and RxD (pin 7).
− For more details about the serial protocol, please consult the TAPKO Technologies related SIMKNX documentation. URL: www.tapko.de.

#### 3.2 Arduino microcontrollers
For the external microcontroller, we opted for the Arduino open source electronics prototyping platform.
More information can be found via this URL: arduino.cc.

The main reason for choosing Arduino is the fact that the Arduino Software (compiler/loader) is free of
charge.

Several types of Arduino microcontrollers exist; we have used ‘Arduino UNO’.

© C i h 2010 2014 KNX A i i C kb k 01 02 02 8 f 13

|+Bus – pin 4<br>-Bus – pin 1<br>Key – pin 2<br>LED – pin 3|TxD – pin 6<br>RxD – pin 7<br>VCC – pin 5<br>GND – pin 8|
|---|---|


-----

Install the Arduino IDE:

− Link: arduino.cc.
− Screenshot.

**Figure 5 – Arduino IDE**

© C i h 2010 2014 KNX A i i C kb k 01 02 02 9 f 13


-----

#### 3.3 Arduino UNO used as KNX Sensor

##### 3.3.1 Setup

VCC

VCC

I/O pin 4

GND

10KΩ

TX – pin 1

Arduino UNO

Push
Button

GND

+Bus – pin 4 TxD – pin 6

-Bus – pin 1 RxD – pin 7

Key – pin 2 VCC – pin 5

LED – pin 3 GND – pin 8

SIM-KNX

**Figure 6 – Arduino UNO used as KNX Sensor**

Details:

− Arduino UNO pin 4 serves as input port in order to capture push button events.
− Arduino UNO pin 1 serves as serial transmit port, which is connected to RxD of the SIM-KNX.
− A simple debounce routine is implemented in order to detect the push button events.
− For each push button event an ASCII command is sent to the SIM-KNX.

##### 3.3.2 Example 1 – sensor: the Arduino UNO source code

const int buttonPin = 4;
int buttonState = HIGH;
int KNXoutput = LOW;
long lastDebounceTime = 0;
long debounceDelay = 200;
int TM = 0;

void setup()
{
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}

© C i h 2010 2014 KNX A i i C kb k 01 02 02 10 f 13


-----

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
KNXoutput = !KNXoutput;
if (KNXoutput == LOW)
{
Serial.write("ovs(0)0");
Serial.write(13);
}
else
{
Serial.write("ovs(0)1");
Serial.write(13);
}
buttonState = HIGH;
TM = 0;
}
}

© C i h 2010 2014 KNX A i i C kb k 01 02 02 11 f 13


-----

#### 3.4 Arduino UNO used as KNX actuator

##### 3.4.1 Setup

VCC

I/O – pin 2

GND

RX – pin 0

470Ω

Arduino UNO

(*)

LED

74LVCC3245

(**)

+Bus – pin 4 TxD – pin 6

GND

-Bus – pin 1 RxD – pin 7

Key – pin 2 VCC – pin 5

LED – pin 3 GND – pin 8

SIM-KNX

**Figure 7 – Arduino UNO used as KNX actuator**

Details:

− Arduino UNO pin 2 serves as simulation of a KNX binary output channel by means of a LED.
− Arduino UNO pin 0 serves as serial receive port, which is connected to TxD of the SIM-KNX.
− A simple serial port read routine is implemented in order to capture and process ASCII commands
from the SIM-KNX.
− Depending on the actual content of each received ASCII command the LED will either be switched
on or off.
Remarks:

NOTE 1 The voltage translator 74LVCC3245 transfers the 3.3V TxD signal from the SIM-KNX into a 5V RX
signal for the Arduino UNO.
NOTE 2 Moreover, we even had to double-loop the connection between SIM-KNX TxD (pin 6) and the voltage
translator, around a clamp on magnetic noise filter.

© C i h 2010 2014 KNX A i i C kb k 01 02 02 12 f 13

|+Bus – pin 4<br>-Bus – pin 1<br>Key – pin 2<br>LED – pin 3|TxD – pin 6<br>RxD – pin 7<br>VCC – pin 5<br>GND – pin 8|
|---|---|


-----

##### 3.4.2 Example 2 – Actuator: The Arduino UNO source code

//oui $01 $18 0 -> {0x6F,0x75,0x69,0x20,0x24,0x30,0x31,0x20,0x24,0x31,0x38,0x20,0x30,0x20,0x0A,0x0D}
//oui $01 $18 1 -> {0x6F,0x75,0x69,0x20,0x24,0x30,0x31,0x20,0x24,0x31,0x38,0x20,0x31,0x20,0x0A,0x0D}
const int ledPin = 2;
int incomingByte = 0;

const int maxLen = 20;
int msgState = 0;
int msgCntr = 0;
int msg[maxLen];

void setup()
{
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);
Serial.begin(9600);
}

void loop()
{
if (Serial.available())
{
incomingByte = Serial.read();

if(msgState==0 && incomingByte==0x6f) //'o'
{
msgState = 1;
msgCntr = 0;

for(int i=0;i<maxLen;i++)
msg[i] = 0;

}
if(msgState!=0 && msgCntr<maxLen)
{
msg[msgCntr++] = incomingByte;

if(msgState==1 && incomingByte==0x75) //'u'
msgState = 2;

if(msgState==2 && incomingByte==0x69) //'i'
msgState = 3;

if(msgState==3 && msgCntr==13)
{
msgState = 0;
digitalWrite(ledPin, msg[12]-0x30); //0x30='0'
}
}
}
}

© C i h 2010 2014 KNX A i i C kb k 01 02 02 13 f 13


-----

