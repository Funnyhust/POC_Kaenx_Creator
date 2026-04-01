# Chiến Lược Triển Khai KNX Scene Control cho Thiết Bị Lumi

Tài liệu này mô tả chi tiết kế hoạch thêm tính năng Scene Control vào 3 dòng sản phẩm mục tiêu: Công tắc cảnh 4 nút, Actuator 4 Relay và Bộ điều khiển rèm.

---

## 0. Bảng Tóm Tắt Triển Khai

| Đặc tính | Công tắc cảnh 4 nút | Actuator 4 Relay | Bộ điều khiển rèm |
| :--- | :--- | :--- | :--- |
| **Vai trò** | Sender (Gửi lệnh) | Receiver (Nhận lệnh) | Receiver (Nhận lệnh) |
| **Số Scene/Slot** | Tùy biến nút | 16 Scene Slots | 10 Scene Slots |
| **DPT hỗ trợ** | 18.001 (Recall/Store) | 18.001 (Recall/Store) | 18.001 (Recall/Store) |
| **Tham số chính** | Interaction (Single/Double/Long), Action (Recall/Store), Scene Number | Global SLME, Slot Mapping, Relay 1..4 Action, SFSN (Per-slot) | Global SLME, Slot Mapping, Blinds Position %, SFSN (Per-slot) |
| **Logic Recall** | Gửi telegram ra bus | Khớp Slot -> Set On/Off/No Action cho 4 relay | Khớp Slot -> Chạy rèm đến vị trí % |
| **Logic Store** | Gửi telegram ra bus | Đọc trạng thái 4 relay -> Lưu NVS | Đọc vị trí rèm % -> Lưu NVS |
| **Lưu trữ (NVS)** | Không cần | Có (Lưu trạng thái học) | Có (Lưu vị trí học) |

---

## 1. Định Nghĩa Các Loại Action (Hành Động)

| Loại Action | Ý nghĩa | Kỹ thuật (DPT 18.001) |
| :--- | :--- | :--- |
| **None** (Không dùng) | Vô hiệu hóa nút nhấn / sự kiện. Thiết bị sẽ không gửi bất kỳ lệnh nào ra Bus. | Không gửi Telegram |
| **Recall** (Gọi cảnh) | Kích hoạt kịch bản đã lưu. Actuator sẽ chuyển trạng thái theo đúng số Scene nhận được. | Gửi Byte với **Bit 7 = 0** |
| **Store** (Học/Lưu cảnh) | Lưu trạng thái thực tế (độ sáng, vị trí rèm, On/Off) vào bộ nhớ của Actuator cho Scene đó. | Gửi Byte với **Bit 7 = 1** |

---

## 1. Công tắc cảnh 4 nút (Scene Sender)

Mỗi nút bấm sẽ hoạt động độc lập và có thể gửi lệnh Scene dựa trên 3 kiểu tương tác (Single, Double, Long).

| Tương tác | Tham số | Lựa chọn | Giá trị gửi (DPT 18.001) |
| :--- | :--- | :--- | :--- |
| **Nhấn 1 lần** (Single) | Action | None, Recall, Store | Bit 7: 0=Recall, 1=Store |
| **Nhấn 1 lần** (Single) | Scene Number | 0 ... 63 | Bit 0..5: Scene Number |
| **Nhấn 2 lần** (Double) | Action | None, Recall, Store | Bit 7 |
| **Nhấn 2 lần** (Double) | Scene Number | 0 ... 63 | Bit 0..5 |
| **Nhấn giữ** (Long) | Action | None, Recall, Store | Bit 7 |
| **Nhấn giữ** (Long) | Scene Number | 0 ... 63 | Bit 0..5 |

> **Logic gửi lệnh**: `(Action_Type << 7) | (Scene_Number & 0x3F)`

---

## 2. Actuator 4 Relay (Scene Receiver)

Thiết bị quản lý **16 Scene Slots**. Mỗi Slot là một kịch bản cho cả 4 relay.

| Phạm vi | Tham số | Lựa chọn | Mô tả |
| :--- | :--- | :--- | :--- |
| **Global** | Storage Function | Enable, Disable | Chốt chặn toàn cục (`SLME`) |
| **Slot (1-16)** | Scene Number | 0 ... 63 | ID Scene trên Bus để khớp Slot |
| **Slot (1-16)** | Relay 1..4 Action | No Action, ON, OFF | Trạng thái áp dụng khi Recall |
| **Slot (1-16)** | Storage Enable | Yes, No | Quyền cho phép học (`SFSN`) per slot |

> **Xử lý Store**: Nếu `SLME == Enable` & `SFSN[N] == Yes` -> Lưu trạng thái hiện tại của 4 relay vào NVS.

---

## 3. Bộ điều khiển rèm (Scene Receiver)

Thiết bị quản lý **10 Scene Slots**. Mỗi Slot lưu một vị trí rèm cụ thể.

| Phạm vi | Tham số | Lựa chọn/Tầm | Mô tả |
| :--- | :--- | :--- | :--- |
| **Global** | Storage Function | Enable, Disable | Chốt chặn toàn cục (`SLME`) |
| **Slot (1-10)** | Scene Number | 0 ... 63 | ID Scene trên Bus để khớp Slot |
| **Slot (1-10)** | Blinds Position | 0 ... 100 % | Vị trí rèm đích khi Recall |
| **Slot (1-10)** | Storage Enable | Yes, No | Quyền cho phép học (`SFSN`) per slot |

> **Xử lý Store**: Nếu `SLME == Enable` & `SFSN[N] == Yes` -> Lưu vị trí hiện tại `%` vào NVS.

---

## 4. Quản lý bộ nhớ (NVS)

Để đảm bảo các Scene được "học" (Store) không bị mất khi mất điện:
1. **Mirror RAM**: Toàn bộ bảng Scene (16 cho Relay, 10 cho Rèm) được load lên RAM khi khởi động.
2. **NVS Write**: Khi có lệnh Store hợp lệ, cập nhật RAM trước, sau đó ghi xuống Flash (debounced).
3. **Cấu trúc lưu trữ**:
    - `0x00`: Global Config (SLME, v.v.)
    - `0x01 - 0x10`: Scene Data (Position/State, Scene Number mapping).

---

## 6. Phân Tích Tác Động Bộ Nhớ (Memory Impact)

Việc thêm Scene Control không làm thay đổi cấu trúc cốt lõi nhưng sẽ tốn thêm một lượng nhỏ RAM và Flash để lưu trữ bảng tra cứu (Lookup Table).

### 6.1 Bảng Ước Tính Chính Xác (RAM & Flash)

| Thiết bị | RAM (Bảng Mapping + Data) | Flash (NVS - Học) | Flash (App - ETS) |
| :--- | :--- | :--- | :--- |
| **Công tắc 4 nút** | **~12 Bytes** | 0 Bytes | ~60 Bytes |
| **Actuator 4 Relay** | **~49 Bytes** | ~33 Bytes | ~120 Bytes |
| **Bộ điều khiển rèm** | **~31 Bytes** | ~21 Bytes | ~100 Bytes |

### 6.2 Chi tiết tính toán

#### A. Công tắc 4 nút (Sender)
- **Cấu trúc**: 4 nút * 3 kiểu nhấn (Single, Double, Long) = 12 sự kiện.
- **Dữ liệu**: Mỗi sự kiện tốn 1 Byte (lưu Action Type & Scene Number).
- **RAM**: **12 Bytes** để tra cứu nhanh khi có sự kiện nhấn nút.

#### B. Actuator 4 Relay (16 Scenes)
- **RAM Mapping**: 16 Byte (để biết Scene Number nào ứng với Slot nào).
- **RAM Stored Data**: 32 Byte (trạng thái On/Off đã học) + 1 Byte (SLME).
- **Tổng RAM**: **49 Bytes**.

#### C. Bộ điều khiển rèm (10 Scenes)
- **RAM Mapping**: 10 Byte.
- **RAM Stored Data**: 20 Byte (vị trí % đã học) + 1 Byte (SLME).
- **Tổng RAM**: **31 Bytes**.

### 6.3 Nhận xét
Dù thiết bị là Sender hay Receiver, việc load bảng Mapping từ Flash lên RAM khi boot là **bắt buộc** để đảm bảo tốc độ phản hồi (Real-time). Tuy nhiên, tổng dung lượng RAM tốn thêm cho cả 3 thiết bị cộng lại vẫn chưa đến **100 Bytes**, hoàn toàn lý tưởng cho mọi dòng chip.

### 6.3 Thay đổi cấu trúc NVS
Bạn chỉ cần thêm một **NVS ID** mới (ví dụ: `SCENE_TABLE_ID = 0x05`) vào hệ thống quản lý lưu trữ hiện tại. 
- Khi nhận lệnh **Store**, firmware chỉ cập nhật 2 bytes tương ứng của slot đó vào NVS.
- Khi **Boot**, firmware đọc một lần duy nhất 33 bytes này lên RAM để sử dụng cho lệnh **Recall**.

---

## 7. Kế hoạch kiểm tra (Verification Plan)

### Kiểm tra Sensor (4-Button Switch)
1. Dùng ETS Group Monitor quan sát telegram gửi đi khi thực hiện Single/Double/Long press.
2. Xác nhận bit MSB (bit 7) đúng cho Store (1) và Recall (0).
3. Xác nhận Scene Number (bit 0-5) truyền đi chính xác.

### Kiểm tra Actuator & Shutter
1. **Preset Test**: Cấu hình scene qua ETS -> Gửi lệnh Recall từ sensor -> Xác nhận Relay/Rèm phản ứng đúng.
2. **Learning Test**: 
    - Thay đổi trạng thái thiết bị thủ công (ví dụ: Relay 1 ON, Relay 2 OFF).
    - Gửi lệnh Store từ nút bấm.
    - Mất điện -> Bật điện lại (Power Cycle).
    - Recall lại scene đó -> Xác nhận trạng thái được khôi phục đúng như lúc Learn.
3. **Security Test**: 
    - Khóa `SLME = Disable` trong ETS -> Thử gửi lệnh Store -> Xác nhận thiết bị giữ nguyên giá trị cũ, không ghi đè giá trị mới.
4. **Range Test**: Gửi Scene Number không nằm trong danh sách mapping -> Xác nhận thiết bị không có hành động lạ.
