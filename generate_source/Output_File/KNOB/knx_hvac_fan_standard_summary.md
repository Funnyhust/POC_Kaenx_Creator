# Tổng quan Kỹ thuật: Điều khiển HVAC, Fan và Thermostat trong chuẩn KNX

Tài liệu này tổng hợp các phương thức điều khiển và định dạng dữ liệu (DPT) dựa trên **Bộ tiêu chuẩn KNX (KNX Specifications v3.0)**, cụ thể là:
- **[KNX Vol 7/10/2]**: HVAC HMI Functional Blocks (Mã tài liệu: 07_10_02 HVAC FB HMI).
- **[KNX Vol 3/7/2]**: Datapoint Types (Mã tài liệu: 03_07_02 Datapoint Types).

---

## 1. HVAC Operating Mode (Chế độ vận hành hệ thống)
*Tham chiếu: [KNX Vol 7/10/2] - Section 3.1: FB UHRS (HVAC Room Settings)*

Đây là tham số quan trọng nhất để điều khiển trạng thái năng lượng của toàn hệ thống HVAC.

### 1.1. Chuẩn 1-Byte (DPT 20.102)
Trong chuẩn KNX, chế độ vận hành thường được gom vào một Group Object 1-Byte (DPT_HVACMode).

| Giá trị (Dec) | Tên Chế độ (HVAC Mode) | Mô tả (theo DPT 20.102) |
|---:|---|---|
| **0** | **Auto** | Hệ thống tự động chuyển đổi. |
| **1** | **Comfort** | Chế độ thoải mái (Occupied). |
| **2** | **Standby** | Chế độ chờ (Unoccupied). |
| **3** | **Economy** | Chế độ tiết kiệm (Night). |
| **4** | **Building Protection** | Chế độ bảo vệ (Frost/Heat protection). |

> [!TIP]
> **Giá trị gửi ra Bus**: Để chuyển sang "Standby", gửi giá trị `2`. Đây là cách điều khiển tiêu chuẩn nhất hiện nay.

---

## 2. HVAC Control Mode (DPT 20.105)
*Tham chiếu: [KNX Vol 3/7/2] - Datapoint Types Master List*

Xác định loại hình điều khiển nhiệt độ (Sưởi/Lạnh).

| Giá trị | Chế độ (Control Mode) |
|---:|---|
| 0 | Auto |
| 1 | Heat (Sưởi) |
| 3 | Cool (Làm lạnh) |
| 9 | Fan Only (Chỉ quạt) |
| 14 | Dry (Hút ẩm) |

---

## 3. Fan Control (Điều khiển Quạt)
*Tham chiếu: [KNX Vol 7/10/2] - Section 3.5: FB UFS (User Fan Speed)*

### 3.1. Theo cấp bậc (Step-based - DPT 5.010)
Sử dụng đối tượng 1-byte số nguyên (Counter).
- **Giá trị**: 0, 1, 2, 3...
- **Ghi chú**: Section 3.5.6.2 quy định `FanStep` dùng DPT 5.010 cho khối HMI.

### 3.2. Theo tỷ lệ (Scaling-based - DPT 5.001)
- **Bản tin**: 1-byte (0-255).
- **Ghi chú**: Section 3.5.6.1 quy định `FanSpeed` sử dụng DPT 5.001 (0-100%).

---

## 4. Thermostat & Setpoints (Bộ điều nhiệt & Điểm đặt)
*Tham chiếu: [KNX Vol 7/10/2] - Section 3.4: FB UHD (User HVAC Display)*

### 4.1. Nhiệt độ & Setpoint (DPT 9.001)
- Nhiệt độ phòng (`TempRoom`) và Điểm đặt hiệu dụng (`TempRoomSetpAct`) đều sử dụng DPT 9.001 (2-byte Float).

---

## 5. HVAC Controller Status (DPT 20.101)
*Tham chiếu: [KNX Vol 7/10/2] - Section 3.1: Room Setpoint Manager HVAC Status*

Đối tượng tổng hợp trạng thái (1-byte bit-field), rất hữu ích cho hiển thị LCD:
- **Bit 0-3**: Mode hiện tại (Khớp với DPT 20.102).
- **Bit 5**: Trạng thái Heat/Cool (1=Sưởi, 0=Lạnh).
- **Bit 4, 6, 7**: Các báo động hệ thống.

---

## 6. Tổng kết Quy chuẩn Interworking
Để thiết bị KNOB tương thích tốt nhất với Actuator của các hãng khác:
1. **Mode**: Dùng DPT 20.102 (Ref [02], Sec 3.1).
2. **Fan**: Dùng DPT 5.010 cho cấp quạt (Ref [02], Sec 3.5.6.2).
3. **Temperature**: Dùng DPT 9.001 (Ref [12], Sec 3.1).
4. **Status**: Kết hợp DPT 20.101 để lấy thông tin Heat/Cool và Alarm về hiển thị.
