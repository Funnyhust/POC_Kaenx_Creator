# 6/8-button display — V2

Một application program dùng chung cho hai mặt thiết bị. `Device selection` mặc định là
`8 buttons`; Dynamic chỉ hiển thị cấu hình phù hợp với biến thể đã chọn.

## Ghép endpoint

Với bản 8 nút, hai vùng 2×2 được cấu hình độc lập:

- Top: Button 1, Button 2 / Button 3, Button 4.
- Bottom: Button 5, Button 6 / Button 7, Button 8.

Trong `General settings`, mỗi vùng chọn hướng `No endpoint merging / Horizontal / Vertical`,
sau đó chọn hàng hoặc cột cần ghép. Có thể ghép ngang vùng trên và ghép dọc vùng dưới;
hoặc chỉ ghép một hàng, để hai nút của hàng còn lại hoạt động độc lập. Dynamic không tạo ra
tổ hợp ghép chồng lấn.

Với bản 6 nút, ba cặp Button 1+5, Button 2+4 và Button 6+8 được chọn độc lập giữa hai
button riêng hoặc một endpoint ghép.

## Chức năng

- Button độc lập: Disabled, Switch, Scene.
- Endpoint ghép: Disabled, CCT, Dimmer, Shutter/Curtain; tên và mã lựa chọn bám theo Knob.
- Touch tương đương single press; scene hỗ trợ recall, store hoặc cycle tối đa 5 scene.
  Mỗi scene trong cycle, double press và long hold có tên English/Vietnamese cùng icon riêng.
- Switch giữ các lựa chọn của sản phẩm 4 nút: Toggle, Auto ON/OFF, Momentary, hành vi khi
  khôi phục điện áp bus và bộ định thời tự động.
- Mỗi button/endpoint tự chọn ngôn ngữ tên. Tên English là chuỗi ASCII tối đa 20 ký tự;
  tên Vietnamese là mã số ổn định lấy từ danh sách trong `translations.py`, không truyền
  UTF-8 xuống firmware.
- Nhiệt độ và độ ẩm dùng cấu hình cố định: thay đổi 1 °C, thay đổi 5 %, chu kỳ 5 phút.
- General dùng `Screen brightness` mặc định 80 %, `Led brightness` 100 % và
  `Turn off screen after` 300 giây.
- Cảm biến tiệm cận luôn hoạt động; khoảng đánh thức màn hình cấu hình từ 30 đến 200 cm,
  mặc định 50 cm.

## Hợp đồng firmware

- Parameter memory: 1696 byte; global ở offset 0..15, mỗi button có block 208 byte.
- Communication object: 12 số dành cho mỗi button; Button 1 bắt đầu từ 0, Button 8 từ 84.
- Temperature = KO 128; humidity = KO 129.
- Endpoint ghép dùng block/KO của button anchor (số nhỏ hơn); firmware đọc layout để xác
  định button partner.
- Scene hiển thị 1..64 trong ETS; firmware phát giá trị KNX 0..63 bằng cách trừ 1.
- Button/endpoint luôn hiển thị trong vùng đã cấu hình; không có parameter `Show on display`.

ID sản phẩm/application và order number trong `product.toml` vẫn là provisional.

## Sinh file

```powershell
python generate.py --device 6_8_buttons_display --validate
```

Kết quả duy nhất là `Generated/6_8_buttons_display/prod.xml`; generator không tạo `.knxprod`.
