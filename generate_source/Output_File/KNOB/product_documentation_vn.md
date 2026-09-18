# Tài liệu Kỹ thuật: Lumi KNOB Control (v19)

## 1. Tổng quan Sản phẩm
Lumi KNOB Control là thiết bị điều khiển thông minh chuẩn KNX, kết hợp **núm xoay vô cấp (Rotary Knob)** với **màn hình LCD** sắc nét và vòng đèn LED trạng thái.

### Đặc điểm nổi bật
- **Tương tác Đa năng**: Xoay để điều chỉnh giá trị, nhấn để bật/tắt.
- **Màn hình Trực quan**: Hiển thị tên, icon và trạng thái thời gian thực từ bus KNX.
- **Hỗ trợ Đa thiết bị**: Đèn (Switch, Dimmer, CCT), rèm cửa, quạt, điều hòa, bộ điều nhiệt.
- **Hệ thống Cảnh**: Tích hợp 16 cảnh nội bộ.
- **KNX Data Secure**: Mã hóa và bảo mật truyền thông.

---

## 2. Thông số Kỹ thuật
- **Mã sản phẩm**: LMKNOB (M-0085)
- **Chuẩn kết nối**: KNX TP1 (MT-0)
- **Bộ nhớ**: 512 Bytes. Byte cuối (offset 511) là **sentinel 0xDD** — firmware dùng để xác nhận ETS download thành công.
- **Phần mềm cấu hình**: ETS 5.7 trở lên.

---

## 3. Cài đặt Chung

| Tham số | Phạm vi | Mặc định | Đơn vị | Mô tả |
|---|---|---|---|---|
| **Enable scene** | No / Yes | No | - | Kích hoạt menu Cảnh (16 cảnh nội bộ). |
| **Endpoint count** | 1 .. 6 | 1 | - | Số trang điều khiển. (Tối đa 5 nếu bật Scene). |
| **Screen brightness** | 0 .. 100 | 80 | % | Độ sáng màn hình LCD. |
| **Led brightness** | 0 .. 100 | 80 | % | Độ sáng vòng đèn LED xung quanh núm xoay. |
| **Turn off screen after** | 10 .. 3600 | 300 | s | Thời gian tự động tắt màn hình khi không sử dụng. |

---

## 4. Chi tiết Chức năng Endpoint
Thiết bị hỗ trợ tối đa 6 Endpoint. Endpoint 1 cố định là Switch.

### 4.1. Switch (Công tắc On/Off)
- **Tham số**: Name, Switch mode, Behavior on bus voltage recovery, Auto mode type, Time value, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Gửi lệnh Bật/Tắt.
  - `[S] Switch status`: **DPT 1.001** — Nhận phản hồi từ Actuator.

### 4.2. Dimmer (Điều chỉnh Độ sáng)
- **Tham số**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Bật/Tắt.
  - `[C] Brightness`: **DPT 5.001** — Cài độ sáng 0–100%.
  - `[S] Switch status`: **DPT 1.001** — Trạng thái nguồn.
  - `[S] Brightness status`: **DPT 5.001** — Trạng thái độ sáng.

### 4.3. CCT (Đèn Tunable White)
- **Tham số**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Switch`: **DPT 1.001** — Bật/Tắt.
  - `[C] Brightness`: **DPT 5.001** — Độ sáng.
  - `[C] Color temperature`: **DPT 7.600** — Nhiệt độ màu (Kelvin).
  - `[S] Switch status` / `Brightness status` / `Color temperature status`: Phản hồi tương ứng.

### 4.4. Curtain (Điều khiển Rèm)
- **Tham số**: Name, Icon, Show on display.
- **Group Objects**:
  - `[C] Up/down`: **DPT 1.008** — Mở/Đóng toàn phần.
  - `[C] Stop`: **DPT 1.007** — Dừng chuyển động.
  - `[C] Position`: **DPT 5.001** — Đặt vị trí (%).
  - `[S] Up/down status`: **DPT 1.011** — Báo đang di chuyển.
  - `[S] Position status`: **DPT 5.001** — Vị trí hiện tại.

### 4.5. Fan (Điều khiển Quạt)
- **Tham số**: Tên, Kiểu tốc độ quạt (Steps/Scaling), Hiển thị trên màn hình.
- **Group Objects**:
  - `[C] Power`: **DPT 1.001** — Bật/Tắt quạt.
  - `[C] Fan speed`: **DPT 5.010 (Steps)** hoặc **DPT 5.001 (Scaling)** — Tùy theo tham số cấu hình.
  - `[S] Power status`: **DPT 1.001** — Phản hồi trạng thái nguồn.
  - `[S] Fan speed status`: **DPT 5.010** hoặc **DPT 5.001** — Tùy theo tham số cấu hình.

**Bảng ánh xạ tốc độ (cho chế độ Scaling)**:
| Mức tốc độ | Giá trị DPT 5.001 | Phần trăm |
|:---:|:---:|:---:|
| Off | 0 | 0% |
| Mức 1 | 64 | 25% |
| Mức 2 | 128 | 50% |
| Mức 3 | 191 | 75% |
| Mức 4 | 255 | 100% |

### 4.6. Điều hòa (Điều hòa - HVAC HMI)
Tuân thủ tiêu chuẩn KNX HVAC HMI Volume 7 (DPT 20.105).
- **Bảng mã chế độ (Mode)**: Auto=0, Heat=1, Cool=3, FanOnly=9, Dry=14.

#### Tham số cấu hình

| Tham số | Tùy chọn | Mặc định | Mô tả |
|---|---|---|---|
| **Setpoint step** | 0.5 °C / 1 °C | 0.5 °C | Bước tăng/giảm nhiệt độ mỗi bước xoay. |
| **▬ AC Modes ▬** | | | |
| Support auto mode | ☐ / ☑ | ☑ | Bật chế độ Auto cho điều hòa. |
| Support heat mode | ☐ / ☑ | ☑ | Bật chế độ Heat (sưởi). |
| Support cool mode | ☐ / ☑ | ☑ | Bật chế độ Cool (làm mát). |
| Support dry mode | ☐ / ☑ | ☑ | Bật chế độ Dry (hút ẩm). |
| Support fan mode | ☐ / ☑ | ☑ | Bật chế độ Fan-only (chỉ quạt). |
| **▬ Fan speed ▬** | | | |
| Fan speed steps | 2 / 3 / 4 speeds | 3 | Số lượng cấp tốc độ quạt hỗ trợ. |
| Fan speed type | Steps / Scaling | Steps | 5.010 (Giá trị 0-4) hoặc 5.001 (Tỷ lệ 0-100%). |
| Support fan auto | ☐ / ☑ | ☑ | Cho phép chọn tốc độ quạt Tự động. |
| **▬ Swing ▬** | | | |
| Swing positions | Not supported / On/Off only / 6 positions | 6 positions | Chế độ điều khiển cánh đảo gió. |
| **Show on display** | ☐ / ☑ | ☑ | Hiển thị endpoint này trên màn hình thiết bị. |

#### Group Objects

| Object | Function text | DPT | Hướng & Vai trò |
|---|---|---|---|
| `Btn_AcPow` | Power | DPT 1.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcTar` | Setpoint | DPT 9.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcMod` | Mode | DPT 20.105 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcFan` | Fan speed | DPT 5.010 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcSwi` | Air swing | DPT 1.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcVan` | Louver position | DPT 5.010 / 5.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_AcPowS` | Power status | DPT 1.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_AcTarS` | Setpoint status | DPT 9.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_AcModS` | Mode status | DPT 20.105 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_AcFanS` | Fan speed status | DPT 5.010 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_AcSwiS` | Air swing status | DPT 1.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_AcVanS` | Louver pos. status | DPT 5.010 / 5.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |

**Logic điều khiển Swing & Louver**:

| Chế độ | Swing Object (1-bit) | Louver Object (1-byte) | Ý nghĩa |
|:---:|:---:|:---:|---|
| **Auto** | 1 (On) | *Bỏ qua* | Cánh tự đảo qua lại (chế độ quét gió). |
| **Stop** | 0 (Off) | *Bỏ qua* | Dừng cánh gió tại vị trí hiện tại. |
| **P1** | 0 (Off) | 1 (hoặc 25%) | Góc cố định vị trí 1 (thấp nhất). |
| **P2** | 0 (Off) | 2 (hoặc 50%) | Góc cố định vị trí 2. |
| **P3** | 0 (Off) | 3 (hoặc 75%) | Góc cố định vị trí 3. |
| **P4** | 0 (Off) | 4 (hoặc 100%) | Góc cố định vị trí 4 (cao nhất). |

**Chú ý về AC Modes**: Mỗi điều hòa hỗ trợ số mode khác nhau. Installer bỏ tick các mode không hỗ trợ để tránh gửi lệnh không hợp lệ.

### 4.7. Máy sưởi (Heater)
- **Tham số**: Name, Show on display.
- **Group Objects**:

| Object | Function text | DPT | Hướng & Vai trò |
|---|---|---|---|
| `Btn_HePow` | Nguồn (Power) | DPT 1.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_HeTar` | Nhiệt độ cài đặt | DPT 9.001 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_HeMode` | Chế độ (Nóng/Lạnh) | DPT 1.100 | **KNOB &rarr; Bus** (Lệnh điều khiển) |
| `Btn_HePowS` | Trạng thái nguồn | DPT 1.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_HeTarS` | Trạng thái nhiệt độ | DPT 9.001 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_HeModeS` | Trạng thái chế độ | DPT 1.100 | **Bus &rarr; KNOB** (Phản hồi trạng thái) |
| `Btn_HeRmT` | Nhiệt độ phòng | DPT 9.001 | Nhận giá trị từ cảm biến ngoài |

> **Power**: KNOB gửi lệnh Bật/Tắt thiết bị sưởi. `Power status` là phản hồi từ actuator về KNOB.
>
> **Heating mode / Setpoint**: Do App hoặc hệ thống tự động điều khiển. KNOB là bên **nhận** và bắt theo. Status objects là phản hồi từ KNOB ngược lại về App.
>
> **Room temperature** *(cần xác nhận thêm)*: Tùy theo loại cảm biến sử dụng:
> - **Cảm biến nội bộ**: KNOB đo nhiệt độ và **phát ra bus** → App lắng nghe.
> - **Cảm biến ngoài**: Cảm biến KNX bên ngoài phát ra bus → KNOB **nhận để hiển thị**.
> Chưa quyết định cuối cùng. Hiện tại cấu hình là `Read/Transmit` — sẽ xem xét lại.

---

## 5. Hệ thống Cảnh Nội bộ

Khi kích hoạt `Enable scene`, menu Cảnh xuất hiện với tối đa 16 cảnh.

| Thuộc tính | Mô tả |
|---|---|
| **Name** | Tên hiển thị (tối đa 14 ký tự). |
| **Icon** | Biểu tượng minh họa. |
| **Scene number** | Giá trị 1–64 tương ứng số cảnh KNX. |
| **Show on display** | Ẩn/hiện cảnh trên màn hình thiết bị. |

---

## 6. Global Objects

| ID | Tên | Function text | DPT |
|---|---|---|---|
| 1 | Global_SysDate | Date | DPT 11.001 |
| 2 | Global_SysTime | Time | DPT 10.001 |
| 3 | Temperature | Temperature sensor | DPT 9.001 |
| 4 | Humidity | Humidity sensor | DPT 9.007 |

---

## 7. Lưu ý Cấu hình
1. **Tên thiết bị**: Giữ dưới 14 ký tự để hiển thị đẹp trên LCD.
2. **Status Sync**: Luôn nối `[S] Status` objects để màn hình phản ánh đúng trạng thái thực tế.
3. **Download validation**: Firmware kiểm tra byte **0xDD** ở cuối bộ nhớ. Đảm bảo quá trình commissioning hoàn tất 100%.
4. **AC Modes**: Tắt (bỏ tick) các mode điều hòa không hỗ trợ để tránh gửi lệnh không hợp lệ.
5. **Swing**: Chọn "On/Off only" cho các điều hòa chỉ hỗ trợ đảo/dừng, không có vị trí cố định.
