# Kế hoạch cấu hình thiết bị KNOB (Rotary Switch)

Tài liệu này dùng để theo dõi và tinh chỉnh cấu hình cho thiết bị KNOB mới.

## 1. Cấu hình chung (General Settings)
Dựa trên STT 8 trong file CSV:
- **Số lượng Endpoint**: Cho phép chọn từ 1 đến 6. **Endpoint 1 luôn hiển thị** để cài đặt.
- **Độ sáng màn hình**: Mặc định 80% (Đơn vị: %).
- **Thời gian ngủ tự động**: Dải cài đặt từ 10s đến 1h (3600s). Mặc định 5m (300s).
- **Tự động quay về màn hình chính**: Fix cứng 30s.
- **Kích hoạt chức năng cảnh**: Chọn Enable để mở khối cài đặt cảnh (hiển thị dưới cùng).
- **Các Object cố định**:
    - Object 1: Công tắc (Switch)
    - Object 2: Cảm biến nhiệt độ (Temperature)
    - Object 3: Cảm biến độ ẩm (Humidity)
    - Object 9: Ngày tháng (Date)

## 2. Cấu hình Endpoint (Endpoint Settings)
Dựa trên STT 9 trong file CSV. Khi chọn số lượng Endpoint > 0, các cài đặt cho từng Endpoint sẽ hiện ra.

### Quy trình chọn cho mỗi Endpoint:
1. **Endpoint 1 (Mặc định)**: Luôn xuất hiện. Cài đặt Tên, Icon và **Trạng thái khởi động**.
2. **Các Endpoint tiếp theo (2-6)**: Xuất hiện dựa trên số lượng đã chọn.
    - **Function of Endpoint**: Chọn loại chức năng.
    - **Cài đặt chi tiết**: Tên, Icon, và cấu hình riêng cho từng loại (AC, Rèm, v.v.).
    - **Công tắc (Switch)**:
        - Mode: Nhấn nhả / Nhấn giữ (Default: Nhấn giữ).
        - Icon: Chọn từ danh sách.
        - Tên thiết bị: Max 20 ký tự (Default: Switch 0x).
    - **Cảnh (Scene)**:
        - Icon: Chọn từ danh sách.
        - Tên cảnh: Max 20 ký tự (Default: Scene x). Tối đa 16 cảnh.
    - **Đèn CCT**:
        - Icon: Chọn từ danh sách.
        - Tên thiết bị: (Default: CCT 0x).
        - (Bổ sung ComObject: Bật/Tắt, Độ sáng, Nhiệt độ màu).
    - **Đèn Dim**:
        - Icon: Chọn từ danh sách.
        - Tên thiết bị: (Default: Dim 0x).
    - **Rèm (Curtain)**:
        - Loại rèm:
            - Standard 3-wire Motor
            - Standard 4-wire Motor
            - AutoHome Intelligent
            - Pulse-driven 3-wire
            - Direct 220V Roll-up
        - Hành trình rèm: Cài đặt thời gian (Default: 20s, dải 5-300s).
        - Icon: Chọn từ danh sách.
        - Tên thiết bị: (Default: Curtain 0x).
        - (Bổ sung ComObject Status: Vị trí hiện tại, Hướng di chuyển).
    - **Quạt (Fan)**:
        - Icon: Chọn từ danh sách.
        - Tên thiết bị: (Default: Fan 0x).
    - **Điều hòa (AC)**:
        - Tên thiết bị: (Default: Air conditioning 0x).
        - Bước nhiệt độ: 0.5 hoặc 1.
        - Các chế độ hỗ trợ (Bật/Tắt): Auto, Fan, Heat, Cool, Dry.
        - Tốc độ quạt hỗ trợ: Auto, Low, Mid, High.
        - Cửa gió hỗ trợ: P0, P1, P2, P3, P4, Stop, Swing.
        - Dải nhiệt độ: Tối thiểu (16-31), Tối đa (17-32).
    - **Sưởi (Thermostat)**:
        - Tên thiết bị: (Default: Thermostat 0x).
        - (Cài đặt nhiệt độ đặt, đo nhiệt độ phòng).

## 3. Logic Giao diện động (Dynamic Layout)
- **General settings**: Trang chứa các thông số chung (Số EP, Độ sáng, Ngủ, Kích hoạt cảnh).
- **Endpoint 1 setting**: Luôn luôn xuất hiện. Cài đặt Tên, Icon, Trạng thái khởi động, và Chức năng.
- **Endpoint x setting (2-6)**: Xuất hiện tương ứng với số lượng đã chọn.
    - Dòng đầu tiên: **Function of endpoint**.
    - Các dòng tiếp theo: Thay đổi nội dung theo `Function`.
- **Scene settings**: Chỉ xuất hiện dưới cùng nếu "Kích hoạt chức năng cảnh" = Enable.
- **Group Objects**: 
    - Với mỗi tham số điều khiển (Move, Set, Step), phải có thêm **Object Status** tương ứng để phản hồi trạng thái lên màn hình KNOB.


## 4. Ánh xạ Group Objects & Status
Mỗi chức năng khi chọn sẽ kích hoạt các Group Object tương ứng. Các Object có tiền tố [S] là Status dùng để phản hồi trạng thái từ Bus lên màn hình.

- **Công tắc (Switch)**:
    - [O] Switch (1 bit)
    - [S] Status Switch (1 bit)
- **Cảnh (Scene)**:
    - [O] Scene (1 byte) - Gửi mã cảnh (1-64).
- **Đèn CCT**:
    - [O] Switch (1 bit) / [S] Status Switch
    - [O] Brightness (1 byte) / [S] Status Brightness
    - [O] Color Temperature (2 byte) / [S] Status Col. Temp
- **Đèn Dim**:
    - [O] Switch (1 bit) / [S] Status Switch
    - [O] Brightness (1 byte) / [S] Status Brightness
- **Rèm (Curtain)**:
    - [O] Move Up/Down (1 bit)
    - [O] Stop (1 bit)
    - [O] Absolute Position (1 byte)
    - [S] Status Position (1 byte)
    - [S] Status Moving (1 bit)
- **Quạt (Fan)**:
    - [O] Switch (1 bit) / [S] Status Switch
    - [O] Fan Speed (1 byte: 0-4) / [S] Status Fan Speed
- **Điều hòa (AC)**:
    - [O] Power (1 bit) / [S] Status Power
    - [O] Target Temperature (2 byte) / [S] Status Target Temp
    - [O] Mode (1 byte) / [S] Status Mode
    - [O] Fan Speed (1 byte) / [S] Status Fan Speed
    - [O] Swing (1 byte) / [S] Status Swing
- **Sưởi (Thermostat)**:
    - [O] Power (1 bit) / [S] Status Power
    - [O] Target Temperature (2 byte) / [S] Status Target Temp
    - [S] Room Temperature (2 byte) - Phản hồi nhiệt độ đo được.

## 5. Các việc cần làm tiếp theo
- [x] Xác nhận tên trang `General settings` và `Endpoint x setting`.
- [x] Kiểm tra lại dải thông số cho Rèm (5-300s) và AC.
- [/] Bắt đầu khởi tạo lại `knob_device.xml` với cấu trúc Dynamic mới.

## 6. Danh sách Icon dự kiến
- **Đèn / CCT / Dim**: 20 Icon.
- **Rèm (Curtain)**: 2 Icon.
- **Cảnh (Scene)**: 36 Icon.
- **Các loại khác (Fan, AC, Thermostat)**: Sẽ sử dụng Icon mặc định hoặc bổ sung sau.
