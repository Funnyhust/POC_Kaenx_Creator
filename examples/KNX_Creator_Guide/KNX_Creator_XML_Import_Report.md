# Báo cáo kỹ thuật – Nhập XML vào KNX Creator (Đã cập nhật thực tế)

## 1. Tổng quan

Tài liệu này tóm tắt các **yêu cầu bắt buộc** để nhập XML vào **KNX Creator**, được cập nhật dựa trên kết quả kiểm thử (test case) thực tế ngày **23/01/2026**.

**Kết quả kiểm thử quan trọng:**
Chúng tôi đã tạo 7 phiên bản (v1-v7) để kiểm tra các giả thuyết lỗi. Kết quả cho thấy KNX Creator **linh hoạt hơn** so với dự đoán ban đầu, nhưng **vẫn rất nghiêm ngặt** ở một số điểm cốt lõi.

> **⚠️ QUAN TRỌNG: PHÂN BIỆT RÕ GIỮA "NHẬP ĐƯỢC" VÀ "HOẠT ĐỘNG ĐƯỢC"**
>
> Việc KNX Creator chấp nhận file XML (không báo lỗi Import) **KHÔNG ĐẢM BẢO** rằng project đó sẽ hoạt động đúng 100% trên thiết bị thực tế.
>
> *   **Import thành công**: Chỉ có nghĩa là cú pháp XML vượt qua bộ lọc của tool.
> *   **Hoạt động thực tế**: Cần phải nạp xuống mạch thật (Download) và kiểm tra chức năng (Runtime Test).
>
> Đặc biệt với các trường hợp "linh hoạt" như **v1, v2, v3, v6**, chúng ta cần **quy trình kiểm thử chức năng** kỹ lưỡng để đảm bảo không có lỗi ngầm (runtime bugs).

---

## 2. Kết quả kiểm thử thực tế (v1 - v7)

| Phiên bản | Mô tả thay đổi | Kết quả nhập | Ghi chú thêm (Cần lưu ý) |
| :--- | :--- | :--- | :--- |
| **v1** | Namespace = `project/12` | ✅ **Thành công** | KNX Creator không chặn phiên bản namespace mới. |
| **v2** | Xóa khối `<Options>` | ✅ **Thành công** | Khối này không bắt buộc. |
| **v3** | Tham số `SizeInBit="1"` | ✅ **Thành công** | Cho phép 1-bit, nhưng cần test xem ETS có hiển thị đúng checkbox không. |
| **v4** | `DatapointType="1.001"` | ❌ **THẤT BẠI** | **Lỗi nghiêm trọng**. Bắt buộc dùng định dạng `DPST-x-y`. |
| **v5** | Xóa khối `<Dynamic>` | ❌ **THẤT BẠI** | **Bắt buộc**. Phải có cấu trúc Dynamic/ChannelIndependentBlock. |
| **v6** | Xóa `LoadProcedure` (MergeId=4) | ✅ **Thành công** | **CẢNH BÁO CAO**: Tool cho nhập, nhưng việc thiếu quy trình nạp bộ nhớ có thể khiến thiết bị không hoạt động. |
| **v7** | Xóa Bảng Tham số (Parameters) | ❌ **THẤT BẠI** | **Bắt buộc**. Phải có ít nhất một tham số. |

---

## 3. Các yêu cầu kỹ thuật BẮT BUỘC (Đã xác nhận gây lỗi)

Các yếu tố dưới đây nếu sai sẽ **chắc chắn** khiến quá trình nhập thất bại:

### 3.1 Định dạng DatapointType (Rất quan trọng)

Đây là nguyên nhân gây lỗi phổ biến nhất và nghiêm trọng nhất (thường gây crash).

❌ **KHÔNG ĐƯỢC DÙNG** (Kiểu ETS):
```xml
DatapointType="1.001"
```

✅ **BẮT BUỘC DÙNG** (Kiểu nội bộ KNX Creator):
```xml
DatapointType="DPST-1-1"
```

**Bảng ánh xạ:**
| Ký hiệu ETS | Ký hiệu KNX Creator |
|-------------|----------------------|
| 1.001 | DPST-1-1 |
| 1.002 | DPST-1-2 |
| 5.001 | DPST-5-1 |

---

### 3.2 Khối Dynamic (Dynamic Section)

Khối này **bắt buộc phải tồn tại**, ngay cả khi thiết bị rất đơn giản.
Nếu thiếu toàn bộ khối `<Dynamic>`, việc nhập sẽ thất bại.

Cấu trúc tối thiểu cần có:
```xml
<Dynamic>
  <ChannelIndependentBlock>
    <ParameterBlock ... >
       ...
    </ParameterBlock>
  </ChannelIndependentBlock>
</Dynamic>
```

---

### 3.3 Tham số (Parameters)

KNX Creator yêu cầu phải có **ít nhất một tham số** được định nghĩa.
Nếu xóa hết `<ParameterTypes>` và `<Parameters>`, việc nhập sẽ thất bại.

---

## 4. Các yếu tố được phép (Linh hoạt hơn dự kiến)

Trái với các giả định trước đây, KNX Creator **chấp nhận** các trường hợp sau (nhưng cần kiểm thử thực tế):

1.  **Namespace**: `http://knx.org/xml/project/12` vẫn được chấp nhận.
2.  **Options**: Khối `<Options />` có thể bỏ qua.
3.  **Tham số 1-bit**: `SizeInBit="1"` là hợp lệ.
4.  **LoadProcedures**: Việc thiếu một số `LoadProcedure` (ví dụ `MergeId="4"`) không gây lỗi nhập. **Tuy nhiên**, điều này rất rủi ro cho chức năng nạp thiết bị.

---

## 5. Kết luận & Quy trình khuyến nghị

Mặc dù KNX Creator bỏ qua một số lỗi cấu trúc nhỏ, nhưng nó **tuyệt đối không chấp nhận** sai lệch về:
1.  **Định dạng dữ liệu (Datapoint Naming)**.
2.  **Cấu trúc bảng nhớ động (Dynamic Structure)**.
3.  **Sự tồn tại của tham số**.

**Quy trình chuẩn:**
1.  Luôn sử dụng `DPST-x-y`.
2.  Luôn giữ lại khung sườn `Dynamic` và `Parameters`.
3.  **QUAN TRỌNG:** Với mọi file XML mới, ngay cả khi Import thành công, **BẮT BUỘC** phải thực hiện download xuống mạch thật để xác nhận hệ thống chạy đúng.
