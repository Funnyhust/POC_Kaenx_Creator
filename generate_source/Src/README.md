# KNX XML Generator

Nguồn sinh XML KNX tập trung cho các thiết bị Lumi.

## Lệnh chính

```powershell
python generate.py
python generate.py --list
python generate.py --device knob --validate
python generate.py --all --validate
```

Khi không có tham số, CLI hiển thị hướng dẫn và danh sách thiết bị rồi thoát với
exit code 0.

## Nguyên tắc kiến trúc

- Manufacturer chỉ khai báo trong `knxgen/config/manufacturers.toml`.
- Mỗi thiết bị là một package Python độc lập dưới `knxgen/devices`.
- Cơ chế KNX dùng chung nằm trong `knxgen/common`.
- Không nhúng nguyên tài liệu XML vào generator dưới dạng chuỗi lớn.
- XML chỉ được xuất sau khi baseline, metadata và số lượng phần tử được kiểm tra.
- Thư mục output build không phải source of truth.

## Output

Mặc định, mỗi thiết bị chỉ tạo đúng một file:

```text
Src/Generated/<device>/prod.xml
```

Generator không tạo `.knxprod`, không nhận file `.signature` và không tự đóng gói
ZIP. `prod.xml` là XML hợp nhất để import vào Kaenx Creator.

## Baseline hiện hành

| Device key | Nguồn đã khóa |
| --- | --- |
| `knob` | KNOB v30 |
| `relay_4ch` | Relay standard-layout v2 |
| `shutter_4relay` | Shutter standard-layout v2 |
| `scene_button_4gang` | Icon v5 final |

Baseline được lưu trong thư mục của từng thiết bị để build không phụ thuộc
`Output_File`. Generator kiểm tra SHA-256, metadata, số parameter và số communication
object trước khi xuất.

## Tạo `.knxprod` có chữ ký

Quy trình phát hành:

1. Sinh và kiểm tra `prod.xml`.
2. Import `prod.xml` vào Kaenx Creator.
3. Dùng chức năng Publish/Export của Kaenx Creator để tạo `.knxprod`.
4. Import gói vừa tạo vào ETS để kiểm tra cuối cùng.

Mã nguồn Kaenx Creator được cung cấp cho dự án cho thấy luồng Publish gọi lần lượt:

```csharp
helper.ExportEts(...);
await OpenKNX.Toolbox.Sign.SignHelper.CheckMaster(tempPath, namespaceVersion);
await helper.SignOutput(tempPath, outputKnxprod, namespaceVersion);
```

`Kaenx-Creator` cục bộ chưa chứa phần triển khai `ExportHelper.SignOutput`; solution
tham chiếu repository ngang cấp `Kaenx-Creator-Share`. Phần ký nằm trong repository
`OpenKNX.Toolbox.Sign`.

Luồng ký thực tế của `OpenKNX.Toolbox.Sign` là:

1. Tách XML hợp nhất thành `Catalog.xml`, `Hardware.xml` và application XML.
2. Chọn bộ thư viện ETS phù hợp với namespace XML.
3. Nạp `Knx.Ets.XmlSigning.dll` của ETS bằng reflection.
4. Hash application, cập nhật các ID/hash liên quan trong Hardware và Catalog.
5. Gọi hàm nội bộ `Knx.Ets.XmlSigning.XmlSigning.SignDirectory` để sinh signature.
6. Thêm đúng `knx_master.xml`, sau đó nén thư mục thành `.knxprod`.

Do đó không thể tạo gói hợp lệ chỉ bằng cách ZIP XML hoặc tái sử dụng một file
signature cũ. Nếu tự động hóa `.knxprod` sau này, nên gọi trực tiếp
`OpenKNX.Toolbox.Sign`/`OpenKNXproducer` cùng bộ thư viện ETS đã cài, thay vì viết lại
thuật toán ký bằng Python.

- https://github.com/OpenKNX/OpenKNX.Toolbox.Sign
- https://github.com/OpenKNX/Kaenx-Creator-Share
