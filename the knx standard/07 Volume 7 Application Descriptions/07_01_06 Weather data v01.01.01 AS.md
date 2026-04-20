# Application Descriptions

## Functional Blocks of Common Interest

 Weather data

Summary

This document defines how weather data, for observations and forecast,
shall be encoded.

Version 01.01.01 is Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

01.01.01 2019.07.09 - Document creation based on AN182 “WGI accepted DPTs 07.16”.

#### References

[01] Chapter 3/7/2 “Datapoint Types”

Filename: 07_01_06 Weather data v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2019.07.09
Number of pages: 8

|Version|Date|Modifications|
|---|---|---|
|01.01.01|2019.07.09|-<br>Document creation based on AN182 “WGI accepted DPTs 07.16”.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4

 2 Detailed description ............................................................................................................... 5 2.1 Production of weather data ............................................................................................. 5 2.2 Data consumption ........................................................................................................... 5

 3 Datapoint Types for weather encoding ................................................................................ 6 3.1 Outdoor temperature ....................................................................................................... 6 3.2 Wind speed ..................................................................................................................... 6 3.3 Wind direction ................................................................................................................ 6 3.4 Air pressure ..................................................................................................................... 6 3.5 Air relative humidity ....................................................................................................... 6 3.6 Air absolute humidity ..................................................................................................... 6 3.7 Rain level ........................................................................................................................ 6 3.8 Snow level ...................................................................................................................... 6 3.9 Cloud cover ..................................................................................................................... 6 3.10 CO2 ................................................................................................................................. 6 3.11 Ozone .............................................................................................................................. 7 3.12 Fine dust .......................................................................................................................... 7 3.13 Sun intensity ................................................................................................................... 7 3.14 Geographical location (longitude and latitude) .............................................................. 7 3.15 Geographical altitude (above sea level) .......................................................................... 7

 4 Weather forecast .................................................................................................................... 8 4.1 General ............................................................................................................................ 8


-----

### 1 Introduction
The aim of the weather coding is to give the possibility to share current weather status but also weather
forecast on a KNX system. This document will describe the definition of weather report and weather
forecast.

KNX

Energy Weather station
management

Sensor

Display
Internet

GSM

Radio channel

Logging

Remote Access

HVAC controllers

Shutters and
blinds controllers

…

Measurement (T°, Wind Speed,..)

Forecast (T°, Wind Speed,..)

Logging

**Figure 1 – Integration and use of weather forecast in KNX (example)**


KNX

Energy Weather station
management

Sensor

Display

Logging

HVAC controllers

Shutters and
blinds controllers

…


Remote Access


Forecast (T°, Wind Speed,..)


-----

### 2 Detailed description

#### 2.1 Production of weather data
Weather data is typically produced by weather stations and by weather forecast.

A weather report is the state of the weather at a given time.

The information that can be associated to weather information is the following. (This list is not
exclusive.)

Air humidity %
Air pressure Pa = Nm[-2]
Air quality (CO2, Ozone...) ppm

Outdoor temperature °C
Rain level mm
Cloud cover
Snow level mm
Sun intensity Wm[-2]

Wind direction
Wind speed ms[-1]
Localisation data

Three types of data can be available.

1. Weather report coming from sensors (like weather station).
2. Weather forecast coming from an external connection (internet, GSM, radio channel) or
calculated by an automatism considering the current measurement.
3. Weather logging coming from a log server.

#### 2.2 Data consumption
It is not standardized how KNX weather information shall be obtained.

EXAMPLE 1 From a web connection, local weather station, other service…

The information can be used by different applications, as sketched in Figure 1.


-----

### 3 Datapoint Types for weather encoding

#### 3.1 Outdoor temperature
Outdoor temperature shall be encoded according DPT_Value_Temp (DPT_ID: 9.001) ([01]).

#### 3.2 Wind speed
Wind speed shall in Standard Mode be encoded according DPT_Value_Wsp (DPT_ID: 9.005). In
LTE-Mode, DPT_WindSpeed_Z (DPT_ID: 203.101) shall be used.

#### 3.3 Wind direction
Wind direction shall be encoded according DPT_Angle (DPT_ID: 5.003).

In this, the interpretation shall be as follows.

00h (0°): North
40h ≈ 90°: East
80h ≈ 180°: South
BFh ≈ 270°: West

#### 3.4 Air pressure
Air pressure shall in Standard Mode be encoded according DPT_Value_Pres (DPT_ID: 9.006).

NOTE 1 For process information, the accuracy of DPT_Value_Pressure (F32; 14.058) is needed. For forecast
information and for displaying, DPT_Value_Pres (F16; 9.006) shall be used.

#### 3.5 Air relative humidity
Air relative humidity shall be encoded according DPT_Value_Humidity (DPT_ID: 9.007).

#### 3.6 Air absolute humidity
Air absolute humidity shall be encoded according DPT_Value_Absolute_Humidity (DPT_ID: 9.029).

#### 3.7 Rain level
Rain level shall be encoded according DPT_Rain_Amount (9.026, lm[-2]). Additionally, another DP with
DPT_Length_mm (DPT_ID: 7.011) may be implemented in parallel.

NOTE 2 1 mm corresponds with 1 lm[-2].
This is the amount of rain that has fallen since the preceding reset. If this function is implemented, the
user should have the possibility to reset the value to 0.

EXAMPLE 2 This can be done with a DP according DPT_Reset (DPT_ID: 1.015).
This is not the rain intensity, which reflects the current rain situation.

#### 3.8 Snow level
The snow height shall be encoded as DPT_Length_mm (DPT_ID: 7.011).

This is the height of the snow on any surface. This DPT shall be used both for the total snow height as
well as for any change in the snow height, e.g. since a preceding measurement.

#### 3.9 Cloud cover
The cloud cover shall be encoded as DPT_Cloud_Cover (DPT_ID: 20.021).

#### 3.10 CO2
CO2 concentrations in the air shall be encoded as DPT_Value_AirQuality (DPT_ID: 9.008).


-----

#### 3.11 Ozone
Ozone concentrations in the air shall be encoded as DPT_Concentration_µgm3 (DPT_ID: 9.030).

NOTE 3 Humans can smell ozone concentrations as low as 0,003 ppm or very sensitive persons even 0,001
ppm. This cannot be encoded using DPT_Value_AirQuality, which has the finest resolution of 0,01 ppm. Ozone shall
be encoded according DPT_Concentration_µgm3 (DPT_ID: 9.030).

#### 3.12 Fine dust
Fine dust particles are qualified according their aerodynamic diameter as PM10, PM2.5 or PM1 (particles
with an aerodynamic diameter of respectively less than 10 μm, 2,5 μm and 1 μm). The concentration of
fine dust particles shall for all be encoded using the same DPT_Concentration_µgm3 (DPT_ID: 9.030).
The size difference is not encoded in the DPT but shall be made by using different DPs.

#### 3.13 Sun intensity
Sun intensity shall be encoded according DPT_PowerDensity (DPT_ID: 9.022).

#### 3.14 Geographical location (longitude and latitude)
A geographical location on earth shall be expressed as longitude and latitude as in
DPT_GeographicalLocation (DPT_ID: 255.001).

#### 3.15 Geographical altitude (above sea level)
For the geographical altitude, this is the height above sea level, DPT_Length_m (V16; DPT_ID: 8.012)
shall be used.


-----

### 4 Weather forecast

#### 4.1 General
A weather forecast is characterised by the following.

   - a minimal value and a maximal value

   - a delay time

   - a probability

According the phenomenon that is forecasted, the appropriate DPT from the below shall be used.

   - 273.001 DPT_Forecast_Temperature

   - 273.002 DPT_Forecast_WindSpeed

   - 273.003 DPT_Forecast_RelativeHumidity

   - 273.004 DPT_Forecast_AbsoluteHumidity

   - 273.005 DPT_Forecast_CO2

   - 273.006 DPT_Forecast_AirPollutants

   - 273.007 DPT_Forecast_SunIntensity

   - 274.001 DPT_Forecast_Wind_Direction


-----

