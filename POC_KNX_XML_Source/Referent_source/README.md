# KNX XML Source Examples (Safe Templates)

Thư mục này chứa các file mẫu XML đã được chuẩn hóa để import thành công vào **Kaenx Creator**.

## Danh sách file
1.  **`Switch_2Ch_Safe.xml`**: Công tắc 2 kênh.
2.  **`Dimmer_1Ch_Safe.xml`**: Dimmer 1 kênh (đầy đủ Absolute/Relative).
3.  **`Shutter_1Ch_Safe.xml`**: Điều khiển rèm/cửa cuốn.
4.  **`Button_4Ch_Universal_Safe.xml`**: Nút bấm 4 kênh đa năng (Toggle, Dimming, Shutter, Scene).

## ⚠️ Quy tắc BẮT BUỘC (CRITICAL RULE)

Để import thành công, bạn **TUYỆT ĐỐI KHÔNG** được dùng ký tự đặc biệt (như dấu gạch ngang `-`, dấu chấm `.`, v.v.) trong `OrderNumber` của sản phẩm.

*   ❌ **SAI:** `OrderNumber="BTN-4CH"` -> Kaenx sẽ mã hóa thành ID chứa `.2D`, gây lỗi không tìm thấy CatalogItem.
*   ✅ **ĐÚNG:** `OrderNumber="BTN4CH"` -> Import OK.

## Hướng dẫn sử dụng
1.  Copy file mẫu tương ứng vào thư mục dự án của bạn.
2.  Mở file bằng Text Editor (VS Code, Notepad++).
3.  Tìm và thay thế `RefId` nếu bạn muốn đổi Manufacturer (mặc định là `M-00FA`).
4.  Import vào Kaenx Creator: **File > Import > XML**.
