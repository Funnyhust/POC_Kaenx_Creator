# Detailed Product Documentation: Lumi KNOB Control (v19)

## 1. Product Overview
The Lumi KNOB Control is a KNX-certified smart interface combining a high-precision **stepless Rotary Knob** with a vibrant **LCD Display** and an elegant LED status ring.

### Key Features
- **Intuitive Interaction**: Rotate to adjust values (dimming, temperature, fan speed) and press to confirm or toggle power.
- **Dynamic Visual Feedback**: The LCD displays the device name, functional icons, and real-time status updates from the KNX bus.
- **Multi-Function Support**: Capable of controlling lighting (On/Off, Dimming, CCT), shutters/blinds, ventilation (Fan), and climate systems (AC/Thermostat).
- **Internal Scene Engine**: Supports up to 16 internal scenes for quick recall of complex building states.
- **KNX Data Secure**: Implements the latest security standards for safe and encrypted communication on the bus.

---

## 2. Technical Specifications & System Configuration
- **Product Code**: LMKNOB (Manufacturer: Lumi M-0085)
- **Medium Type**: KNX TP1 (MT-0)
- **Memory Footprint**: 512 Bytes. The final byte at offset 511 is a **0xDD** sentinel used by the firmware to verify a successful and complete ETS download.
- **Programming Tool**: ETS 5.7 or higher.

---

## 3. General Settings

| Parameter | Range | Default | Unit | Description |
|---|---|---|---|---|
| **Enable scene** | No / Yes | No | - | Enables/Disables the internal 16-scene configuration block. |
| **Endpoint count** | 1 .. 6 | 1 | - | Number of active menu pages. (Max 5 if Scenes are enabled). |
| **Screen brightness** | 0 .. 100 | 80 | % | Backlight intensity of the LCD. |
| **Led brightness** | 0 .. 100 | 80 | % | Intensity of the LED status ring around the knob. |
| **Turn off screen after** | 10 .. 3600 | 300 | s | Inactivity timeout before the screen enters sleep mode. |

---

## 4. Endpoint Function Details
The device supports up to 6 custom pages. Endpoint 1 is permanently assigned to the **Switch** function.

### 4.1. Switch (Basic On/Off Control)
- **Parameters**: Name, Switch mode, Behavior on bus voltage recovery, Auto mode type, Time value, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Sends On/Off commands.
  - `[S] Switch status`: **DPT 1.001** — Receives feedback from the actuator.

### 4.2. Dimmer (Brightness Control)
- **Parameters**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Power On/Off.
  - `[C] Brightness`: **DPT 5.001 (Scaling)** — Set brightness level 0–100%.
  - `[S] Switch status`: **DPT 1.001** — Power state feedback.
  - `[S] Brightness status`: **DPT 5.001** — Current brightness feedback.

### 4.3. CCT (Tunable White Control)
- **Parameters**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Power On/Off.
  - `[C] Brightness`: **DPT 5.001** — Set brightness level.
  - `[C] Color temperature`: **DPT 7.600** — Set color temperature in Kelvin.
  - `[S] Switch status`: **DPT 1.001** — Power feedback.
  - `[S] Brightness status`: **DPT 5.001** — Brightness feedback.
  - `[S] Color temperature status`: **DPT 7.600** — Color temperature feedback.

### 4.4. Curtain (Blind/Shutter Control)
- **Parameters**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Up/down`: **DPT 1.008** — Full open or full close command.
  - `[C] Stop`: **DPT 1.007** — Halts movement.
  - `[C] Position`: **DPT 5.001** — Precise position command (percentage).
  - `[S] Up/down status`: **DPT 1.011** — High when the motor is active.
  - `[S] Position status`: **DPT 5.001** — Current position feedback.

- **Parameters**: Name, Fan speed type (Steps/Scaling), Show on display.
- **Group Objects**:
  - `[C] Power`: **DPT 1.001** — Fan power toggle.
  - `[C] Fan speed`: **DPT 5.010 (Steps)** or **DPT 5.001 (Scaling)** — Interpreted based on parameter.
  - `[S] Power status`: **DPT 1.001** — Power feedback.
  - `[S] Fan speed status`: **DPT 5.010** or **DPT 5.001** — Interpreted based on parameter.

**Fan Speed Mapping (for Scaling mode)**:
| Speed Level | DPT 5.001 Value | Percentage |
|:---:|:---:|:---:|
| Off | 0 | 0% |
| Level 1 | 64 | 25% |
| Level 2 | 128 | 50% |
| Level 3 | 191 | 75% |
| Level 4 | 255 | 100% |

### 4.6. Air condition (HVAC HMI Control)
Fully compliant with KNX Volume 7 HVAC Interworking specifications (DPT 20.105).
- **Mode Mapping**: Auto=0, Heat=1, Cool=3, FanOnly=9, Dry=14.

#### Parameters

| Parameter | Options | Default | Description |
|---|---|---|---|
| **Setpoint step** | 0.5 °C / 1 °C | 0.5 °C | Temperature adjustment increment per knob step. |
| **▬ AC Modes ▬** | | | |
| Support auto mode | ☐ / ☑ | ☑ | Enable Auto mode selection in ETS. |
| Support heat mode | ☐ / ☑ | ☑ | Enable Heat mode selection. |
| Support cool mode | ☐ / ☑ | ☑ | Enable Cool mode selection. |
| Support dry mode | ☐ / ☑ | ☑ | Enable Dry mode selection. |
| Support fan mode | ☐ / ☑ | ☑ | Enable Fan-only mode selection. |
| **▬ Fan speed ▬** | | | |
| Fan speed steps | 2 / 3 / 4 speeds | 3 | Number of discrete fan speed levels supported. |
| Fan speed type | Steps / Scaling | Steps | 5.010 (Value 0-4) or 5.001 (Scaling 0-100%). |
| Support fan auto | ☐ / ☑ | ☑ | Enable Auto fan speed option. |
| **▬ Swing ▬** | | | |
| Swing positions | Not supported / On/Off only / 6 positions | 6 positions | Louver control mode. 6 positions = Swing + P1\~P4 + Stop. |
| **Show on display** | ☐ / ☑ | ☑ | Show this endpoint on the device display. |

#### Group Objects

| Object | Function text | DPT | Direction & Role |
|---|---|---|---|
| `Btn_AcPow` | Power | DPT 1.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcTar` | Setpoint | DPT 9.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcMod` | Mode | DPT 20.105 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcFan` | Fan speed | DPT 5.010 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcSwi` | Air swing | DPT 1.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcVan` | Louver position | DPT 5.010 / 5.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_AcPowS` | Power status | DPT 1.001 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_AcTarS` | Setpoint status | DPT 9.001 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_AcModS` | Mode status | DPT 20.105 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_AcFanS` | Fan speed status | DPT 5.010 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_AcSwiS` | Air swing status | DPT 1.001 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_AcVanS` | Louver pos. status | DPT 5.010 / 5.001 | **Bus &rarr; KNOB** (Feedback) |

**Swing & Louver Control Logic**:

| Mode | Swing Object (1-bit) | Louver Object (1-byte) | Meaning |
|:---:|:---:|:---:|---|
| **Auto** | 1 (On) | *Ignored* | Louver oscillates automatically (swing mode). |
| **Stop** | 0 (Off) | *Ignored* | Hold louver at current position. |
| **P1** | 0 (Off) | 1 (or 25%) | Fixed angle position 1 (lowest). |
| **P2** | 0 (Off) | 2 (or 50%) | Fixed angle position 2. |
| **P3** | 0 (Off) | 3 (or 75%) | Fixed angle position 3. |
| **P4** | 0 (Off) | 4 (or 100%) | Fixed angle position 4 (highest). |

### 4.7. Heater (Heating/Cooling Control)
- **Parameters**: Name, Show on display.
- **Group Objects**:

| Object | Function text | DPT | Direction & Role |
|---|---|---|---|
| `Btn_HePow` | Power | DPT 1.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_HeTar` | Setpoint | DPT 9.001 | **KNOB &rarr; Bus** (Command) |
| `Btn_HeMode` | Mode (H/C) | DPT 1.100 | **KNOB &rarr; Bus** (Command) |
| `Btn_HePowS` | Power status | DPT 1.001 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_HeTarS` | Setpoint status | DPT 9.001 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_HeModeS` | Mode status | DPT 1.100 | **Bus &rarr; KNOB** (Feedback) |
| `Btn_HeRmT` | Room temperature | DPT 9.001 | Receives external sensor value |

> **Power**: The KNOB sends the heating ON/OFF command to the actuator. `Power status` is the actuator's feedback back to the KNOB.
>
> **Heating mode / Setpoint**: Controlled externally by the app or automation logic. The KNOB is the receiving end; it responds with the status objects.
>
> **Room temperature** *(pending design)*: Bidirectional depending on sensor source:
> - **Internal sensor**: KNOB measures temperature and publishes it to the bus → App listens.
> - **External sensor**: An external KNX sensor publishes temperature to the bus → KNOB receives to display.
> Implementation decision pending. Currently configured as `Read/Transmit` (status) — to be revisited.

---

## 5. Internal Scene Engine
When `Enable scene` is active, a dedicated Scene Menu allows the user to trigger up to 16 locally configured scenes.

| Attribute | Description |
|---|---|
| **Name** | Custom descriptive text (max 14 characters). |
| **Icon** | Illustrative icon for the specific scene. |
| **Scene number** | Target scene value (1–64) triggered on the KNX bus. |
| **Show on display** | Toggle to show/hide the scene from the device UI. |

---

## 6. Global System Objects

| ID | Object name | Function text | DPT |
|---|---|---|---|
| 1 | Global_SysDate | Date | DPT 11.001 |
| 2 | Global_SysTime | Time | DPT 10.001 |
| 3 | Temperature | Temperature sensor | DPT 9.001 |
| 4 | Humidity | Humidity sensor | DPT 9.007 |

---

## 7. Configuration Best Practices
1. **Naming**: Keep Endpoint and Scene names under 14 characters for optimal LCD layout.
2. **Status Sync**: Always link the `[S] Status` objects to ensure the display reflects the actual state of the field devices.
3. **Download Validation**: Firmware relies on the **0xDD** sentinel at the last memory location. Ensure commissioning is completed until the ETS progress reaches 100%.
4. **AC Modes**: Uncheck modes not supported by the connected AC model to prevent invalid commands from being sent.
5. **Swing**: For AC units with fixed louvers only, select "On/Off only" to avoid sending unsupported position values.
