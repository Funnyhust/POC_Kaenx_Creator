# Quy trình Phát triển Cấu hình XML cho Thiết bị KNOB

Tài liệu này tổng hợp quá trình xây dựng và tối ưu hóa file cấu hình XML cho thiết bị KNOB trong môi trường Kaenx Creator / ETS.

## 1. Vấn đề Ban đầu
- **Lỗi phần mềm**: Quá trình nhập file XML thủ công vào Kaenx Creator thường xuyên gây lỗi `NullReferenceException` hoặc `ArgumentOutOfRangeException`.
- **Nguyên nhân**: Do cấu trúc XML quá lớn, thiếu các thuộc tính bắt buộc của ETS (như Memory Offset, LoadProcedures) hoặc sai sót trong việc đặt ID (`P-X`, `O-X`).

## 2. Giải pháp: Lập trình hóa việc sinh File (Generator Approach)
Thay vì sửa XML bằng tay, chúng tôi đã chuyển sang sử dụng script Python (`gen_knob_v6.py`) để kiểm soát 100% cấu trúc:
- **Tự động hóa ID**: Script tự sinh các `Parameter ID` và `ComObject ID` liên tục, tránh trùng lặp.
- **Quản lý Bộ nhớ**: Tự động tính toán `Offset` cho từng tham số trong vùng nhớ 1024-byte.
- **Tuân thủ Schema**: Đảm bảo các kiểu dữ liệu nâng cao như `DPT 9` (Float) và `LoadProcedures` (ETS flashing) được chèn đúng chỗ.

## 3. Các Cốt mốc Kỹ thuật quan trọng
- **Cấu trúc Dynamic (Linh hoạt)**: Sử dụng `ChannelIndependentBlock` kết hợp thẻ `<choose>` để ẩn/hiện 6 Endpoints dựa trên cấu hình người dùng.
- **Phân tách Chức năng**: 
  - Hỗ trợ đầy đủ: Switch, CCT, Dimming, Curtain, Fan, AC, Thermostat.
  - Mỗi Endpoint có nhãn tên riêng (`Name String`) dài 14-byte hiển thị trong ETS.
- **Tối ưu hóa UI**:
  - Chuyển `Endpoint Count` và `Scene Count` sang dạng Enum (Dropdown) để người dùng dễ chọn.
  - Ẩn các tham số Icon không cần thiết cho các thiết bị như Fan, AC để giao diện gọn gàng hơn.
- **Giao diện Cảnh (Scene Control)**:
  - Khối cài đặt 16 cảnh độc lập với đầy đủ Tên, Icon và Số cảnh.
  - Sử dụng thẻ `ParameterSeparator` (Headline) để phân tách trực quan từng cảnh.
- **Đồng bộ Chức năng & Naming (v8)**:
  - **Endpoint 1 (Cố định)**: Được khóa cứng ở chức năng `Switch` (Công tắc), chỉ cho phép người dùng cấu hình chế độ (Toggle, Auto, Momentary). Các Endpoint từ 2-6 vẫn linh hoạt 7 chức năng.
  - **Curtain (Rèm)**: Chuẩn hóa tên Group Object theo chuẩn quốc tế: `Up/Down`, `Up/Down Status`, `Stop`, `Position`, `Position Status`.
  - **Sửa lỗi Build & Memory (v12)**:
  - **Lỗi 'Size 112'**: Khắc phục lỗi thiếu thẻ `<Memory>` và giá trị chuỗi quá dài.
- **Chuẩn hóa đặt tên Light (v13)**:
  - **Switch/Dimming/CCT**: Đổi toàn bộ các đối tượng liên quan đến bật/tắt từ `Power` / `Power Status` thành **`Switch`** / **`Switch Status`** để phù hợp với quy chuẩn đèn chiếu sáng.
  - **Semantic clarity**: Các chức năng Fan, AC, Thermostat vẫn giữ tên `Power` vì đây là điều khiển nguồn thiết bị, không phải công tắc đèn.
- **Tối ưu Scene & Đặt tên (v15)**:
  - **Sửa lỗi hiển thị Scene**: Khắc phục triệt để lỗi logic khiến Scene 1 bị ẩn khi chọn số lượng cảnh > 1. Giờ đây các khối Scene sẽ hiển thị cộng dồn chính xác theo số lượng đã chọn.
  - **Endpoint Scene Control**: Duy trì chức năng `Scene control` (Recall/Store) cho Endpoint.
  - **Xóa tên mặc định**: Duy trì các ô `Name string` để trống mặc định.

## 4. Quy tắc Đặt tên (Naming Standard)
Học tập từ chuẩn file `knx_scene_4_button.xml`:
- **Name**: Sử dụng mã kỹ thuật (vd: `Btn1_Mode`, `Btn1_SwMode`) để firmware dễ truy vấn.
- **Text**: Sử dụng nhãn tiếng Anh chuyên nghiệp (vd: `Function of Endpoint`, `Status Power`).
- **Object Function**: Được chuẩn hóa theo chuẩn KNX (vd: `Switch status`, `Color Temp`, `Moving`).

## 5. Kết quả
File XML đầu ra (`knob_device.xml`) hiện tại là bản **Final**, sẵn sàng để:
1. Import vào Kaenx Creator.
2. Publish ra file `.knxprod`.
3. Firmware sử dụng các Offset đã định nghĩa để map biến vào code C/C++.

---
*Ghi chú: Mọi thay đổi về sau nên được thực hiện thông qua script Python để đảm bảo tính đồng bộ và tránh lỗi thủ công.*
