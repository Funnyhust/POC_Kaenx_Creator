# Prompt: Tạo KNX Product XML cho Lumi Shutter Actuator 4 Relays

## Thông tin sản phẩm

- **Tên**: Lumi Shutter Actuator 4 Relays
- **Manufacturer ID**: M-0085 (Lumi)
- **Mask Version**: MV-07B0 (TP device)
- **Phần cứng**: 4 relay output, 1 kênh rèm duy nhất
- **Giao tiếp**: KNX TP (Twisted Pair)
- **Chế độ hoạt động**: Shutter mode only (không hỗ trợ Blinds/Slat)
- **KNX Secure**: Enabled (MaxSecurityIndividualAddressEntries=500, MaxSecurityGroupKeyTableEntries=512)

---

## Yêu cầu XML Format

Dựa theo format KNX XML project/20: `xmlns="http://knx.org/xml/project/20"`. File bao gồm đầy đủ: `Catalog`, `Hardware`, `ApplicationProgram` (Static + Dynamic), `Languages`.

---

## APPLICATION: Shutter Actuator

### Parameter 1: Blind Type (Loại rèm)

- **Kiểu**: Enum 8-bit
- **Mặc định**: 0 (Custom Config)
- **Các giá trị**:

| Value | Text                      | Mô tả                                                                                  |
| ----- | ------------------------- | ---------------------------------------------------------------------------------------- |
| 0     | Custom Config             | User tự cấu hình relay sequence                                                       |
| 1     | HOZ_DZ3W (Rèm 3 dây)    | 2 relay: Open=R1, Close=R2. Stop=bật cả R1+R2 cùng 300ms                              |
| 2     | HOZ_DZ4W (Rèm 4 dây)    | 3 relay: Open=R1, Close=R2, Stop=R3. Sequence: Stop→delay→Open/Close                   |
| 3     | HOZ_DT99 (AutoHome)       | 2 relay: Sequence đổi chiều phức tạp, Stop phụ thuộc trạng thái hiện tại      |
| 4     | HOZ_DZ3WP (3 dây Pulse)  | 2 relay: Pulse cả 2 relay 300ms trước khi ra lệnh chiều                             |
| 5     | VER_220 (Rèm cuốn 220V) | 2 relay: Open=R1, Close=R2. Motor tự dừng khi hết hành trình, không có Stop relay |

- **Firmware logic**: Mỗi loại rèm có relay sequence riêng (hard-coded trong firmware). Parameter này chỉ cho firmware biết dùng sequence nào.

---

### Parameter 2: Time for up-/downward movement (Same/Different)

- **Kiểu**: Enum 8-bit
- **Mặc định**: 0 (Same)
- **Giá trị**: 0=Same, 1=Different
- **Behavior trong ETS**:
  - Khi Same → chỉ hiện 1 field "Time for movement (sec)"
  - Khi Different → hiện 2 field: "Time Open (sec)" + "Time Close (sec)"

### Parameter 3: Time for movement - Open (sec)

- **Kiểu**: uint16 (16-bit unsigned)
- **Range**: 1 – 300 giây
- **Mặc định**: 30
- **KNX Standard tương đương**: MUDT (Move Up/Down Time)
- **Luôn hiện** cho mọi Blind Type

### Parameter 4: Time for movement - Close (sec)

- **Kiểu**: uint16
- **Range**: 1 – 300 giây
- **Mặc định**: 30
- **CHỈ hiện** khi Time Same/Different = Different

### Parameter 5: Extension of movement time

- **Kiểu**: Enum 8-bit
- **Giá trị**: 0%, 2%, 5% (default), 10%, 15%, 20%
- **Mục đích**: Thêm % thời gian buffer để đảm bảo rèm chạm điểm giới hạn cơ học

---

### Parameter 6: Pause at change of direction (ms) – RPT

- **Kiểu**: uint16
- **Range**: 0 – 5000 ms
- **Mặc định**: 500
- **KNX Standard**: RPT (Reversion Pause Time)
- **Mục đích**: Delay trước khi đổi chiều motor, bảo vệ motor/relay

### Parameter 7: Switch-on delay motor (ms)

- **Kiểu**: uint16
- **Range**: 0 – 5000 ms
- **Mặc định**: 200
- **Mục đích**: Delay sau khi ra lệnh trước khi relay đóng (ổn định điện áp)

### Parameter 8: Switch-off delay motor (ms)

- **Kiểu**: uint16
- **Range**: 0 – 5000 ms
- **Mặc định**: 200
- **Mục đích**: Delay sau lệnh tắt (hấp thụ back-EMF motor)

---

### Parameter 9: Startup Behaviour

- **Kiểu**: Enum 8-bit
- **Mặc định**: 0 (Stop)
- **Giá trị**: 0=Stop (no movement), 1=Open (move up), 2=Close (move down), 3=Restore last position

---

### Parameter 10: Objects for absolute position (Enable/Disable)

- **Kiểu**: Enum 8-bit
- **Mặc định**: 0 (not active)
- **Khi active**: Hiện GO "Set Position %" (SAPBP) trong ETS

### Parameter 11: Status objects (Enable/Disable)

- **Kiểu**: Enum 8-bit
- **Mặc định**: 0 (not active)
- **Khi active**: Hiện GO "Info Move Up/Down" (IMUD) + "Current Position %" (CAPBP)

---

## GROUP OBJECTS (Communication Objects)

| GO# | Tên                       | DPT                           | ObjectSize | Flags                | Điều kiện hiện                           |
| --- | -------------------------- | ----------------------------- | ---------- | -------------------- | -------------------------------------------- |
| 1   | Move Up/Down (MUD)         | DPST-1-8 (DPT_UpDown 1.008)   | 1 Bit      | Write, Comm          | **Luôn hiện**                        |
| 2   | Stop (STOP)                | DPST-1-17 (DPT_Trigger 1.017) | 1 Bit      | Write, Comm          | **Luôn hiện**                        |
| 3   | Set Position % (SAPBP)     | DPST-5-1 (DPT_Scaling 5.001)  | 1 Byte     | Write, Comm          | Khi "Objects for absolute position" = active |
| 4   | Info Move Up/Down (IMUD)   | DPST-1-8 (DPT_UpDown 1.008)   | 1 Bit      | Read, Comm, Transmit | Khi "Status objects" = active                |
| 5   | Current Position % (CAPBP) | DPST-5-1 (DPT_Scaling 5.001)  | 1 Byte     | Read, Comm, Transmit | Khi "Status objects" = active                |

---

## MEMORY LAYOUT (20 bytes)

| Offset | Parameter                      | Size | Type   |
| ------ | ------------------------------ | ---- | ------ |
| 0      | Blind Type                     | 1    | uint8  |
| 1      | Time Same/Different            | 1    | uint8  |
| 2-3    | Time Open (sec)                | 2    | uint16 |
| 4-5    | Time Close (sec)               | 2    | uint16 |
| 6      | Extension %                    | 1    | uint8  |
| 7-8    | Pause at direction change (ms) | 2    | uint16 |
| 9-10   | Switch-on delay (ms)           | 2    | uint16 |
| 11-12  | Switch-off delay (ms)          | 2    | uint16 |
| 13     | Startup Behaviour              | 1    | uint8  |
| 14     | Enable Position Objects        | 1    | uint8  |
| 15     | Enable Status Objects          | 1    | uint8  |
| 16-19  | Reserved                       | 4    | -      |

---

## ETS DYNAMIC UI (Giao diện trong ETS)

### Tab "General"

- Product Information (text labels: Model, Firmware, Hardware, Manufacturer)

### Tab "Channel: Shutter"

```
┌─ Blind Type Selection ──────────────────────────┐
│ Blind Type: [Custom Config ▼]                    │
└──────────────────────────────────────────────────┘

┌─ Travel Time ────────────────────────────────────┐
│ Time for up-/downward movement: ● Same ○ Different│
│   Time for movement (sec): [30]                   │ ← Khi Same
│   Time for movement - Open (sec): [28]            │ ← Khi Different
│   Time for movement - Close (sec): [32]           │ ← Khi Different
│ Extension of movement time: [5%]                  │
└──────────────────────────────────────────────────┘

┌─ Motor Protection ──────────────────────────────┐
│ Pause at change of direction (ms): [500]         │
│ Switch-on delay motor (ms): [200]                │
│ Switch-off delay motor (ms): [200]               │
└──────────────────────────────────────────────────┘

┌─ Startup ────────────────────────────────────────┐
│ Startup Behaviour: [Stop (no movement) ▼]        │
└──────────────────────────────────────────────────┘

┌─ Optional Objects ──────────────────────────────┐
│ Objects for absolute position: ○ not active ○ active│
│   → GO "Set Position %" hiện khi active          │
│ Status objects: ○ not active ○ active             │
│   → GO "Info Move" + "Current Pos %" khi active  │
└──────────────────────────────────────────────────┘
```

### choose/when Logic:

1. `TimeSameDiff`: test=0 → hiện 1 time field; test=1 → hiện 2 time fields
2. `EnablePosition`: test=1 → hiện GO SAPBP
3. `EnableStatus`: test=1 → hiện GO IMUD + CAPBP

---

## Bảng mã rèm Lumi (reference cho firmware)

| Value | Mã       | Relay cần          | Relay sequence                                                  |
| ----- | --------- | ------------------- | --------------------------------------------------------------- |
| 1     | HOZ_DZ3W  | 2 (Open+Close)      | Open: R1=1 Hold; Close: R2=1 Hold; Stop: R1+R2=1 300ms→0       |
| 2     | HOZ_DZ4W  | 3 (Open+Close+Stop) | Stop_RL pulse 300ms→delay→Open/Close=1 Hold                   |
| 3     | HOZ_DT99  | 2 (Open+Close)      | Đổi chiều: Close→delay→Open; Stop phụ thuộc trạng thái |
| 4     | HOZ_DZ3WP | 2 (Open+Close)      | Pulse R1+R2 300ms→delay→Open/Close=1 Hold                     |
| 5     | VER_220   | 2 (Open+Close)      | Open: R1=1 tự dừng; Close: R2=1 tự dừng; Stop: tắt cả     |

---

## Tài liệu KNX Standard tham khảo

- `07_50_02 Shutters and Blinds Actuators v01.03.02` – Functional Block SAB
- `07_50_11 Shutters and Blinds Channels v01.00.01` – Channel Codes
- `03_07_02 Datapoint Types v02.02.01` – DPT definitions
