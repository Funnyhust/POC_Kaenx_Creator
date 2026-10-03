# 4/6/8-button display — V9

Một application program dùng chung cho ba biến thể thiết bị. `Device selection` mặc định là
`8 buttons`; Dynamic chỉ hiển thị cấu hình phù hợp với biến thể đã chọn.

## Ghép button group

Với bản 8 nút, hai vùng 2×2 được cấu hình độc lập:

- Top: Button 1, Button 2 / Button 3, Button 4.
- Bottom: Button 5, Button 6 / Button 7, Button 8.

Trong `General settings`, mỗi vùng chọn hướng `Keep buttons separate / Horizontal / Vertical`,
sau đó chọn hàng hoặc cột cần ghép. Có thể ghép ngang vùng trên và ghép dọc vùng dưới;
hoặc chỉ ghép một hàng, để hai nút của hàng còn lại hoạt động độc lập. Dynamic không tạo ra
tổ hợp ghép chồng lấn.

Với bản 6 nút, ba cặp Button 1+5, Button 2+4 và Button 6+8 được chọn độc lập giữa hai
button riêng hoặc một button group.

Với bản 4 nút, chỉ dùng vùng Top gồm Button 1 đến Button 4. Cách ghép ngang/dọc và các
lựa chọn ghép một hàng hoặc một cột giống vùng Top của bản 8 nút; vùng Bottom và Button 5
đến Button 8 không được sinh trong Dynamic.

## Chức năng

- Button độc lập: Disabled, Switch, Scene.
- Button group: Disabled, CCT, Dimmer, Shutter/Curtain; tên và mã lựa chọn bám theo Knob.
- Touch tương đương single press; scene chỉ hỗ trợ kích hoạt (recall) bằng một lần nhấn.
  Có thể chọn một scene hoặc Scene cycling tối đa 5 scene; Scene cycling có lựa chọn
  tự động/thủ công chuyển cảnh khi được kích hoạt bằng nút (mặc định tự động).
  Mỗi scene có tên English/Vietnamese cùng icon riêng.
- Switch giữ các lựa chọn của sản phẩm 4 nút: Toggle, Auto ON/OFF, Momentary, hành vi khi
  khôi phục điện áp bus và bộ định thời tự động.
- Mỗi button/button group tự chọn ngôn ngữ tên. Tên English là chuỗi ASCII tối đa 15 ký tự;
  tên Vietnamese là mã số ổn định lấy từ `vietnamese_name_list.json`; mỗi nhóm chức năng
  dùng danh sách riêng (Switch, Dimmer/CCT, Curtain và Scene), mã `0..19`, không truyền
  UTF-8 xuống firmware. Tên này cũng được thay động vào tên Group Object trong ETS
  (`Button 1 - {name}` hoặc `Button group 1 - {name}`) qua `TextParameterRefId`;
  không cần tạo lại ComObject cho từng tên.
- Nhiệt độ và độ ẩm dùng cấu hình cố định: thay đổi 1 °C, thay đổi 5 %, chu kỳ 5 phút.
- General dùng `Screen brightness` mặc định 80 %, `Led brightness` 100 % và
  `Turn off screen after` 300 giây.
- Cảm biến tiệm cận luôn hoạt động; khoảng đánh thức màn hình cấu hình từ 30 đến 200 cm,
  mặc định 50 cm.

## Hợp đồng firmware

- Parameter memory: 1697 byte; byte đầu offset 0 là marker ẩn `0xDD`, global ở offset 1..16, mỗi button có block 208 byte.
- Communication object: 9 object chức năng chung và 5 object kích hoạt Scene cho mỗi button,
  dùng block 14 số; Button 1 bắt đầu từ 0, Button 8 từ 98.
- V12: button objects start at KO 1 (14 numbers per button); temperature = KO 129; humidity = KO 130. All GO numbers moved up by one from V11; parameter memory offsets are unchanged.
- Button group dùng block/KO của button anchor (số nhỏ hơn); firmware đọc layout để xác
  định button partner.
- Scene hiển thị 1..64 trong ETS; firmware phát giá trị KNX 0..63 bằng cách trừ 1.
- Button/button group luôn hiển thị trong vùng đã cấu hình; không có parameter `Show on display`.

ID sản phẩm/application và order number trong `product.toml` vẫn là provisional.

## Sinh file

```powershell
python generate.py --device 6_8_buttons_display --validate
```

Kết quả duy nhất là `Generated/6_8_buttons_display/prod.xml`; generator không tạo `.knxprod`.
