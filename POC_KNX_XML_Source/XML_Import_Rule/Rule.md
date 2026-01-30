# KNX Source XML Standardization Rules & Fixes

> **Source Code Reference:**
> - [ImportHelper.cs](file:///c:/Lumi/KNX/KNX/OpenKNXStack/knx_stack/Kaenx%20Creator%20Source/Kaenx-Creator/Kaenx.Creator/Classes/ImportHelper.cs) (Logic nhập XML)
> - [CheckHelper.cs](file:///c:/Lumi/KNX/KNX/OpenKNXStack/knx_stack/Kaenx%20Creator%20Source/Kaenx-Creator/Kaenx.Creator/Classes/CheckHelper.cs) (Quy tắc Validation)

> **Tài liệu tổng hợp từ:**
> 1. `KNX_XML_Standardization_Rules.md` (Quy chuẩn chung từ Codebase)
> 2. `KNX_Import_Fix_Report.md` (Các lỗi thực tế và giải pháp sửa chữa)

---

## PHẦN 1: QUY CHUẨN KỸ THUẬT (STANDARD RULES)

## 1. CẤU TRÚC CƠ BẢN

### 1.1 Namespace (Bắt buộc)
```xml
xmlns="http://knx.org/xml/project/{VERSION}"
```

| Namespace Version | Tính năng hỗ trợ | Ghi chú |
|:------------------|:-----------------|:--------|
| 14 | Help Files, Messages | Minimum cho các tính năng cơ bản |
| 20 | Modules, ProgressBar, RGBW Colors | **Khuyến nghị sử dụng** |

> **Source**: `ImportHelper.cs` L415-417

### 1.2 Cấu trúc Thư mục ID
Format chuẩn: `M-{ManuID}_{Type}-{ID}`

```
M-00FA                          # Manufacturer (OpenKNX = 0xFA)
├── _A-{AppId}-{Ver}-0000       # ApplicationProgram
├── _H-{HardId}-{Ver}           # Hardware
├── _CS-{Number}                # CatalogSection
├── _PT-{Name}                  # ParameterType
├── _P-{Id}                     # Parameter
├── _O-{Id}                     # ComObject
└── _RS-{LsmIdx}-{Offset}       # RelativeSegment
```

> **Source**: `ImportHelper.cs` L2197-2200 (`GetLastSplit` function)

---

## 2. DATAPOINT TYPES (QUAN TRỌNG NHẤT)

### 2.1 Định dạng Bắt buộc
Tool sử dụng prefix matching để parse DatapointType:

| Prefix | Mục đích | Ví dụ |
|:-------|:---------|:------|
| `DPST-{major}-{minor}` | Datapoint Subtype (đầy đủ) | `DPST-1-1` (Switch) |
| `DPT-{major}` | Datapoint Type (chung) | `DPT-1` (1-bit) |

> **⚠️ CRITICAL**: Format `1.001` hoặc `5.001` **SẼ KHÔNG HOẠT ĐỘNG**!

> **Source**: `ImportHelper.cs` L1283-1304

### 2.2 Bảng Tra cứu DPT Phổ biến
(Từ `datapoints.xml`)

| DPT | DPST | Tên | ObjectSize |
|:----|:-----|:----|:-----------|
| DPT-1 | DPST-1-1 | Switch | `1 Bit` |
| DPT-1 | DPST-1-8 | Up/Down | `1 Bit` |
| DPT-1 | DPST-1-9 | Open/Close | `1 Bit` |
| DPT-5 | DPST-5-1 | Scaling (0-100%) | `1 Byte` |
| DPT-5 | DPST-5-4 | Percent_U8 | `1 Byte` |
| DPT-7 | DPST-7-1 | 2-byte unsigned | `2 Bytes` |
| DPT-9 | DPST-9-1 | Temperature (°C) | `2 Bytes` |
| DPT-9 | DPST-9-4 | Lux | `2 Bytes` |
| DPT-14 | DPST-14-19 | Electric Current (A) | `4 Bytes` |

---

## 3. PARAMETER TYPES

### 3.1 Các loại được hỗ trợ

| Tag | Thuộc tính bắt buộc | Giá trị cho phép |
|:----|:--------------------|:-----------------|
| `TypeNone` | - | (Dùng cho display-only) |
| `TypeNumber` | `Type`, `SizeInBit`, `minInclusive`, `maxInclusive` | Type: `unsignedInt`, `signedInt` |
| `TypeFloat` | `Encoding`, `minInclusive`, `maxInclusive` | Encoding: `DPT 9`, `IEEE-754 Single`, `IEEE-754 Double` |
| `TypeRestriction` | `SizeInBit`, `Base="Value"` | (Cho Enum) |
| `TypeText` | `SizeInBit` | (Chia hết cho 8) |
| `TypeIPAddress` | `AddressType`, `Version` | AddressType: `HostAddress`, `GatewayAddress`, `UnicastAddress`, etc. |
| `TypeColor` | `Space` | Space: `RGB`, `HSV`, `RGBW` |
| `TypeRawData` | `MaxSize` | (Bytes) |
| `TypeDate` | `DisplayTheYear` | `true` / `false` |
| `TypeTime` | `Unit`, `minInclusive`, `maxInclusive` | Unit: `Milliseconds`, `Seconds`, etc. |
| `TypePicture` | `RefId` | (Reference to Baggage) |

> **Source**: `ImportHelper.cs` L875-991

### 3.2 Validation Rules cho TypeNumber

```csharp
// CheckHelper.cs L190-210
- UInt: min >= 0, max <= (2^SizeInBit - 1)
- Int:  min >= -(2^(SizeInBit-1)), max <= (2^(SizeInBit-1) - 1)
- CheckBox: UIHint="CheckBox" requires min=0, max=1
```

### 3.3 Ví dụ TypeRestriction (Enum)
```xml
<ParameterType Id="M-00FA_A-xxxx_PT-Options" Name="Options">
  <TypeRestriction Base="Value" SizeInBit="8">
    <Enumeration Id="M-00FA_A-xxxx_PT-Options_EN-0" Text="Option A" Value="0" />
    <Enumeration Id="M-00FA_A-xxxx_PT-Options_EN-1" Text="Option B" Value="1" />
    <Enumeration Id="M-00FA_A-xxxx_PT-Options_EN-2" Text="Option C" Value="2" />
  </TypeRestriction>
</ParameterType>
```

> **Note**: Enum Value không được trùng lặp trong cùng một ParameterType.

---

## 4. COM OBJECTS

### 4.1 ObjectSize Format
Chỉ chấp nhận 2 format:

| Format | Tool Parse | Kết quả |
|:-------|:-----------|:--------|
| `1 Bit` | Giữ nguyên | 1 bit |
| `1 Byte` | × 8 | 8 bits |
| `2 Bytes` | × 8 | 16 bits |

> **Source**: `ImportHelper.cs` L1273-1277

### 4.2 Flags
Các giá trị hợp lệ:

| Flag | Giá trị hợp lệ |
|:-----|:---------------|
| `ReadFlag` | `Enabled`, `Disabled` |
| `WriteFlag` | `Enabled`, `Disabled` |
| `CommunicationFlag` | `Enabled`, `Disabled` |
| `TransmitFlag` | `Enabled`, `Disabled` |
| `UpdateFlag` | `Enabled`, `Disabled` |
| `ReadOnInitFlag` | `Enabled`, `Disabled` |

> **Source**: `ImportHelper.cs` L2113-2134

### 4.3 Ví dụ ComObject
```xml
<ComObjectTable>
  <ComObject 
    Id="M-00FA_A-xxxx_O-1" 
    Name="Switch" 
    Text="On/Off" 
    Number="1" 
    FunctionText="Switching" 
    ObjectSize="1 Bit" 
    ReadFlag="Enabled" 
    WriteFlag="Enabled" 
    CommunicationFlag="Enabled" 
    TransmitFlag="Enabled" 
    UpdateFlag="Disabled" 
    ReadOnInitFlag="Disabled" 
    DatapointType="DPST-1-1" />
</ComObjectTable>
```

---

## 5. MEMORY SEGMENTS

### 5.1 RelativeSegment (Khuyến nghị cho MV-07B0)
```xml
<Code>
  <RelativeSegment 
    Id="M-00FA_A-xxxx_RS-04-00000" 
    Name="Parameters" 
    Offset="0" 
    Size="256" 
    LoadStateMachine="4" />
</Code>
```

| Thuộc tính | Mô tả |
|:-----------|:------|
| `Offset` | Offset trong memory (bytes) |
| `Size` | Kích thước segment (bytes) |
| `LoadStateMachine` | Thường là `4` cho parameter memory |

> **Source**: `ImportHelper.cs` L819-831

### 5.2 Parameter Memory Mapping
```xml
<Parameter Id="M-00FA_A-xxxx_P-1" Name="Param1" ParameterType="M-00FA_A-xxxx_PT-UInt8" Value="0">
  <Memory CodeSegment="M-00FA_A-xxxx_RS-04-00000" Offset="0" BitOffset="0" />
</Parameter>
```

> **BitOffset**: 0-7 (nếu > 7 sẽ báo lỗi)

---

## 6. MASK VERSIONS (HARDWARE)

### 6.1 MaskVersion phổ biến cho TP
| MaskVersion | ID | Mô tả |
|:------------|:---|:------|
| MV-07B0 | `MV-07B0` | System B - TP (Phổ biến nhất cho OpenKNX) |
| MV-57B0 | `MV-57B0` | System B - IP |
| MV-27B0 | `MV-27B0` | System B - RF |

> **Source**: `maskversion.xml`

### 6.2 Ví dụ Hardware
```xml
<Hardware Id="M-00FA_H-0001-0" Name="Device Name" SerialNumber="0001" VersionNumber="1" 
          BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true">
  <Products>
    <Product Id="M-00FA_H-0001-0_P-DEV01" Text="Product Name" OrderNumber="DEV-01" 
             IsRailMounted="false" DefaultLanguage="en-US" />
  </Products>
  <Hardware2Programs>
    <Hardware2Program Id="M-00FA_H-0001-0_HP-xxxx" MediumTypes="MT-0">
      <ApplicationProgramRef RefId="M-00FA_A-xxxx" />
    </Hardware2Program>
  </Hardware2Programs>
</Hardware>
```

---

## 7. DYNAMIC SECTION

### 7.1 Các Elements được hỗ trợ

| Element | Mô tả | Parent |
|:--------|:------|:-------|
| `ChannelIndependentBlock` | Block không phụ thuộc channel | `Dynamic` |
| `Channel` | Channel (repeatable) | `Dynamic` |
| `ParameterBlock` | Nhóm parameters | `Channel`, `ChannelIndependentBlock` |
| `ParameterRefRef` | Reference đến ParameterRef | `ParameterBlock` |
| `ComObjectRefRef` | Reference đến ComObjectRef | `ParameterBlock` |
| `ParameterSeparator` | Separator visual | `ParameterBlock` |
| `choose` / `when` | Conditional logic | Anywhere |

> **Source**: `ImportHelper.cs` L1758-2108

### 7.2 Access Levels
```xml
<ParameterBlock Access="ReadWrite" ...>
```

| Value | Mô tả |
|:------|:------|
| `None` | Ẩn hoàn toàn |
| `Read` | Chỉ đọc |
| `ReadWrite` | Đọc và ghi |

### 7.3 Block Layout
```xml
<ParameterBlock Layout="List" ...>
```

| Value | Mô tả |
|:------|:------|
| `List` | Hiển thị dạng danh sách |
| `Table` | Hiển thị dạng bảng |
| `Grid` | Hiển thị dạng lưới |

---

## 8. LANGUAGES & TRANSLATIONS

### 8.1 Supported Languages
```csharp
// ImportHelper.cs L34-58
"cs-CZ", "da-DK", "de-DE", "el-GR", "en-US", "es-ES", 
"fi-FI", "fr-FR", "hu-HU", "is-IS", "it-IT", "ja-JP", 
"nb-NO", "nl-NL", "pl-PL", "pt-PT", "ro-RO", "ru-RU", 
"sk-SK", "sl-SI", "sv-SE", "tr-TR", "zh-CN"
```

### 8.2 Translation Structure
```xml
<Languages>
  <Language Identifier="en-US">
    <TranslationUnit RefId="M-00FA_A-xxxx">
      <TranslationElement RefId="M-00FA_A-xxxx_P-1">
        <Translation AttributeName="Text" Text="Parameter 1" />
      </TranslationElement>
    </TranslationUnit>
  </Language>
</Languages>
```

---

## 9. VALIDATION CHECKLIST

Trước khi import, kiểm tra:

- [ ] Namespace version phù hợp với tính năng sử dụng
- [ ] ManufacturerId hợp lệ (0x0001 - 0xFFFF)
- [ ] Tất cả DatapointType dùng format `DPST-x-y` hoặc `DPT-x`
- [ ] ObjectSize dùng format `{N} Bit` hoặc `{N} Byte(s)`
- [ ] ParameterType.Type chỉ dùng `unsignedInt` hoặc `signedInt`
- [ ] Enum values không trùng lặp
- [ ] BitOffset trong range 0-7
- [ ] MaskVersion hợp lệ (ví dụ: `MV-07B0`)
- [ ] Tất cả ID references đều tồn tại

---

## PHẦN 2: CÁC LỖI THỰC TẾ & GIẢI PHÁP (CASE STUDIES)

Tài liệu dưới đây ghi nhận các lỗi **Critical** (gây Crash) đã phát hiện trong quá trình POC Import.

### 10.1 Lỗi Crash do sai tên thuộc tính (NullReferenceException)
*   **Mô tả:** Phần mềm Kaenx Creator tìm kiếm thuộc tính `VersionNumber` trong thẻ `<Hardware>`.
*   **Code gây lỗi:** `ImportHelper.cs` dòng 1595: `int.Parse(xhard.Attribute("VersionNumber").Value);`
*   **Vấn đề:** Dùng sai `Version="3"` thay vì `VersionNumber="3"`.
*   **Giải pháp:** Bắt buộc dùng `VersionNumber="3"`.

### 10.2 Lỗi Crash do độ dài chuỗi ID (ArgumentOutOfRangeException)
*   **Mô tả:** Khi nhập `CatalogItem`, phần mềm cắt chuỗi tham chiếu `Hardware2ProgramRefId` lấy **đúng 13 ký tự cuối**.
*   **Code gây lỗi:** `ImportHelper.cs` dòng 1705.
*   **Vấn đề:** ID ngắn hơn 13 ký tự (ví dụ suffix `2026-03-0003` chỉ có 12 ký tự) sẽ làm hàm `Substring` crash.
*   **Giải pháp:** Pad thêm số 0 để đủ 13 ký tự suffix: `..._HP-2026-03-00003`.

### 10.3 Lỗi Format dữ liệu (FormatException) với ID phi số
*   **Mô tả:** Kaenx Creator sử dụng `long.Parse()` để lấy phần đuôi của ID làm unique ID.
*   **Code gây lỗi:** `long.Parse(GetLastSplit(xele.Attribute("Id").Value, ...))`
*   **Vấn đề:** ID chứa chữ (ví dụ `PB-Btn1`, `P-Btn1-Mode`) không thể parse thành số.
*   **Giải pháp:** Chỉ sử dụng hậu tố số (Numeric Suffix) cho ID nội bộ: `PB-1`, `P-1`.

### 10.4 Thiếu thuộc tính Hardware bắt buộc
*   **Mô tả:** Thẻ `<Hardware>` yêu cầu đầy đủ thông tin để validate.
*   **Yêu cầu:** Bắt buộc có `BusCurrent`, `HasIndividualAddress`, `HasApplicationProgram`.
*   **Ví dụ đúng:**
    ```xml
    BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true"
    ```

### 10.5 Lỗi OrderNumber chứa ký tự đặc biệt
*   **Mô tả:** `OrderNumber` qua hàm `ExportHelper.GetEncoded()` sẽ bị biến đổi nếu chứa ký tự đặc biệt, gây lỗi tìm kiếm.
*   **Vấn đề:** `OrderNumber="KNX-BTN-V3"` (chứa dấu `-`).
*   **Giải pháp:** Xóa bỏ ký tự đặc biệt: `OrderNumber="KNXBTNV3"`.

---
*Generated by Antigravity Agent based on Kaenx Creator Source Code Analysis*
