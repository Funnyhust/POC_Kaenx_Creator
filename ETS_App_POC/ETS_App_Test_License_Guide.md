# ETS App POC — hướng dẫn license và chạy thử

Tài liệu này ghi lại các loại license cần có để cài và chạy ETS App POC trong ETS 6, cùng các đường lấy license theo quy trình của KNX.

## Tóm tắt

- License **ETS Professional** cho phép dùng ETS, nhưng không thay thế license của ETS App.
- Để chạy app chưa được KNX xác nhận (non-validated), cần **ETS App Developer license** hoặc **App test license**. App test license phải được một tổ chức ETS App Developer cấp.
- ETS phải có license tối thiểu **ETS Lite** để chạy bất kỳ ETS App nào; ETS Professional đáp ứng điều kiện nền này.
- ETS SDK không tự cấp license chạy app. Kể cả Demo ETS App đi kèm SDK cũng cần ETS App Developer license.

Nguồn: [ETS App developer licenses — KNX](https://support.knx.org/hc/en-us/articles/360000343810-ETS-App-developer-licenses), [ETS App test licenses — KNX](https://support.knx.org/hc/en-us/articles/360001513820-App-test-licenses-for-developers).

## Cách 1 — Công ty tự đăng ký làm ETS App Developer

Đây là đường phù hợp nếu công ty muốn tự phát triển, chạy thử và quản lý app.

1. Công ty cần là **KNX Member**, tối thiểu hạng **Interested Party**, và có Manufacturer Code.
2. Dùng MyKNX cá nhân được liên kết với tài khoản tổ chức. Người thực hiện cần có vai trò ETS App Developer hoặc CEO.
3. Trong tài khoản tổ chức MyKNX, mở **My account → Applications → Become an ETS App developer** và gửi yêu cầu.
4. Công ty và KNX Association ký thỏa thuận ETS App Developer bằng chữ ký điện tử.
5. Sau khi KNX chấp thuận, 5 license ETS App Developer được thêm vào tài khoản tổ chức, trong **My account → Products**. Có thể cấp/activate license cho tài khoản cá nhân đủ vai trò.
6. Trên máy chạy ETS 6, mở phần **Settings → Licensing**, đăng nhập MyKNX và activate license khả dụng theo luồng licensing của ETS.

> KNX ghi rằng quyền truy cập công cụ validation miễn phí; tuy nhiên, để đăng ký làm developer, công ty vẫn phải đáp ứng điều kiện thành viên KNX. Xem [Requirements to become an ETS App developer — KNX](https://support.knx.org/hc/en-us/articles/360000229110-Requirements-to-become-an-ETS-App-developer).

KNX nêu rằng hiện không có bản dùng thử của ETS App Developer license. Sau khi yêu cầu developer được chấp thuận, tổ chức nhận 5 license ban đầu. Xem [ETS App developer licenses — KNX](https://support.knx.org/hc/en-us/articles/360000343810-ETS-App-developer-licenses).

## Cách 2 — Một ETS App Developer cấp App test license

Nếu chưa có tư cách developer, có thể nhờ một tổ chức đã là ETS App Developer mời tài khoản MyKNX của người thử app:

1. Developer mở **Company Account → ETS Apps → ETS App Testers** trên MyKNX.
2. Developer mời tester bằng username/email. Tester chấp nhận lời mời trên MyKNX hoặc qua email; nếu chưa có MyKNX account thì tạo và kích hoạt account trước.
3. Sau khi tester chấp nhận lời mời ETS App Tester, developer mở dòng tester (nút hình bút chì), thêm app cần thử rồi bấm **Create**.
4. Tester nhận email xác nhận app đã được cấp. Trên ETS 6, đăng nhập MyKNX và dùng luồng **Settings → Licensing** để nhận/activate license.

> App test license cloud gắn với tài khoản MyKNX, hoạt động theo chu kỳ 30 ngày và tự gia hạn khi tester còn được cấp quyền. Loại dongle gắn với Dongle ID và hết hạn sau 30 ngày; developer có thể tạo lại khi cần thử tiếp. Xem [App test licenses — KNX](https://support.knx.org/hc/en-us/articles/360001513820-App-test-licenses-for-developers).

## Kiểm tra App ID của POC

Trong POC, cần kiểm tra `AppId` trong `AddInManifest.xml` và App ID mà mã nguồn trả về. Hai giá trị này phải khớp với App ID đã đăng ký trên MyKNX. Mã đang thấy trong scaffold là `M00FA-A0099`; không nên coi mã đó là license hoặc mặc định rằng nó đã được KNX đăng ký cho tổ chức. Hãy xác nhận App ID chính thức trước khi đăng ký phiên bản/nhờ developer tạo test license.

KNX mô tả App ID là mã được tạo khi đăng ký app và yêu cầu mã trong source code cùng `AddInManifest.xml` khớp với mã đã đăng ký. Xem [App Identifier — KNX](https://support.knx.org/hc/en-us/articles/360000084560-App-Identifier).

## Checklist chạy thử

- [ ] ETS 6 đã được activate bằng ETS Lite trở lên (máy này đang dùng ETS Professional).
- [ ] Có ETS App Developer license, hoặc developer đã mời và cấp App test license cho đúng MyKNX account.
- [ ] App ID trong manifest/source đã được đối chiếu với App ID đăng ký trên MyKNX.
- [ ] Đã cài file `.etsapp` vào ETS 6.
- [ ] Đã đăng nhập MyKNX và activate license trong **Settings → Licensing**.
- [ ] Chỉ chạy app trên project thử nghiệm/backup cho đến khi xác nhận rõ các thao tác mà app thực hiện.

## Tài liệu KNX

- [Requirements to become an ETS App developer](https://support.knx.org/hc/en-us/articles/360000229110-Requirements-to-become-an-ETS-App-developer)
- [ETS App developer licenses](https://support.knx.org/hc/en-us/articles/360000343810-ETS-App-developer-licenses)
- [App test licenses (for developers)](https://support.knx.org/hc/en-us/articles/360001513820-App-test-licenses-for-developers)
- [App Identifier](https://support.knx.org/hc/en-us/articles/360000084560-App-Identifier)
