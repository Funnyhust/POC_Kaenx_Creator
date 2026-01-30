# KNX XML Validation Specification
## Complete Analysis from Kaenx Creator Source Code

> **Source Files Analyzed:**
> - [ImportHelper.cs](file:///c:/Lumi/KNX/KNX/OpenKNXStack/knx_stack/Kaenx%20Creator%20Source/Kaenx-Creator/Kaenx.Creator/Classes/ImportHelper.cs) - 2213 lines (XML Parsing Logic)
> - [CheckHelper.cs](file:///c:/Lumi/KNX/KNX/OpenKNXStack/knx_stack/Kaenx%20Creator%20Source/Kaenx-Creator/Kaenx.Creator/Classes/CheckHelper.cs) - 1067 lines (Validation Rules)

---

## 1. CRITICAL CRASH POINTS (Cause Runtime Exceptions)

### 1.1 NullReferenceException Points

| Line | File | Attribute | Required Value | Effect if Missing |
|------|------|-----------|----------------|-------------------|
| 1595 | ImportHelper | `Hardware.VersionNumber` | Integer string | **CRASH** - int.Parse on null |
| 74 | ImportHelper | `xmlns` | Namespace URL | **CRASH** - .Value on null |
| 77 | ImportHelper | `Manufacturer.RefId` | `M-XXXX` format | **CRASH** - .Substring(2) |
| 386 | ImportHelper | `ApplicationProgram.MaskVersion` | Mask ID | **CRASH** - .Value on null |
| 418 | ImportHelper | `ApplicationProgram.DefaultLanguage` | Culture code | **CRASH** - .Value on null |

### 1.2 ArgumentOutOfRangeException Points

| Line | File | Operation | Requirement | Effect if Violated |
|------|------|-----------|-------------|---------------------|
| **1705** | ImportHelper | `.Substring(..., 13)` | `Hardware2ProgramRefId` suffix must be **≥13 characters** | **CRASH** |
| 77 | ImportHelper | `.Substring(2)` | `RefId` must be ≥3 characters | **CRASH** |

### 1.3 FormatException Points (int.Parse / long.Parse)

> **CRITICAL RULE**: All ID suffixes after `GetLastSplit()` must be **purely numeric**.

| Line | File | Element | Attribute | Offset | Example Valid ID |
|------|------|---------|-----------|--------|------------------|
| 519 | ImportHelper | ParameterRef | Id | 2 | `..._R-**123**` |
| 531 | ImportHelper | ComObjectRef | Id | 2 | `..._OR-**456**` |
| 1073 | ImportHelper | Parameter | Id | 2 | `..._P-**1**` |
| 1076 | ImportHelper | Parameter | Id (parsed) | - | Must be integer |
| 1162 | ImportHelper | ParameterRef | Id | 2 | `..._R-**1**` |
| 1178 | ImportHelper | ParameterRef | RefId | 2 | Must match Parameter.Id |
| 1250-52 | ImportHelper | ComObject | Id | - | `..._O-**1**` (after last `-`) |
| 1337 | ImportHelper | ComObjectRef | Id | 2 | `..._OR-**1**` |
| 1354 | ImportHelper | ComObjectRef | RefId | - | After last `-` |
| 1448 | ImportHelper | Message | Id | 2 | `..._M-**1**` |
| 1512 | ImportHelper | ModuleDef | Id | 3 | `..._MD-**1**` |
| 1553 | ImportHelper | Allocator | Id | 2 | `..._AL-**1**` |
| 1572 | ImportHelper | Argument | Id | 2 | `..._A-**1**` |
| 1777 | ImportHelper | Channel | TextParameterRefId | 2 | Numeric suffix |
| 1833 | ImportHelper | ParameterBlock.Row | Id | 2 | Numeric suffix |
| 1845 | ImportHelper | ParameterBlock.Column | Id | 2 | Numeric suffix |
| 1856 | ImportHelper | ParameterBlock | ParamRefId | 2 | Numeric suffix |
| 1860 | ImportHelper | ParameterBlock | Id | 3 | Numeric suffix |
| 1865 | ImportHelper | ParameterBlock | TextParameterRefId | 2 | Numeric suffix |
| 1899 | ImportHelper | choose | ParamRefId | 2 | Numeric suffix |
| 1933 | ImportHelper | ParameterRefRef | RefId | 2 | Numeric suffix |
| 1954 | ImportHelper | ParameterSeparator | Id | 3 | Numeric suffix |
| 1981 | ImportHelper | ComObjectRefRef | RefId | 2 | Numeric suffix |
| 1992-95 | ImportHelper | Module | Id, RefId | 2, 3 | Numeric suffix |
| 1999 | ImportHelper | Module.Argument | RefId | 2 | Numeric suffix |
| 2004 | ImportHelper | Module.Argument | AllocatorRefId | 2 | Numeric suffix |
| 2022 | ImportHelper | Assign | TargetParamRefRef | 2 | Numeric suffix |
| 2027 | ImportHelper | Assign | SourceParamRefRef | 2 | Numeric suffix |
| 2040 | ImportHelper | Rename | Id | 3 | Numeric suffix |
| 2054 | ImportHelper | Repeat | Id | 2 | Numeric suffix |
| 2063 | ImportHelper | Repeat | ParameterRefId | 2 | Numeric suffix |
| 2089 | ImportHelper | Button | TextParameterRefId | 2 | Numeric suffix |

### 1.4 InvalidOperationException Points (Single/First on empty)

| Line | File | Operation | Requirement |
|------|------|-----------|-------------|
| 386 | ImportHelper | `.Single(b => b.Id == MaskVersion)` | MaskVersion must exist in BCUs |
| 1286 | ImportHelper | `DPTs.Single(d => d.Number == xtype[1])` | DPT number must exist |
| 1590 | ImportHelper | `.Single(h => h.Attribute("RefId").Value == AppImportHelper)` | ApplicationProgramRef must exist |
| 1639 | ImportHelper | `.Single(c => c.Attribute("Id").Value.Contains(orderNumber))` | CatalogItem must contain encoded OrderNumber |

---

## 2. HARDWARE SECTION REQUIREMENTS

### 2.1 Mandatory Attributes (CheckHelper L33-42, ImportHelper L1593-1599)

```xml
<Hardware 
    Name="DeviceName"
    SerialNumber="1234567890"
    VersionNumber="1"                    <!-- MANDATORY - NOT "Version" -->
    BusCurrent="10"                      <!-- MANDATORY -->
    HasIndividualAddress="true"          <!-- MANDATORY -->
    HasApplicationProgram="true"         <!-- MANDATORY (if app exists) -->
    IsIPEnabled="false">                 <!-- Optional -->
```

### 2.2 Hardware2ProgramRefId Format (ImportHelper L1705)

```xml
<CatalogItem 
    Hardware2ProgramRefId="M-00FA_H-KNXBTNV3_HP-1234-56-78901"
                                           <!--    ^^^^^^^^^^^^ 
                                               MUST be ≥13 chars after "_HP-" -->
```

**Valid Examples:**
- `..._HP-0000-00-00001` ✓ (13 chars: `0000-00-00001`)
- `..._HP-2026-03-00003` ✓ (13 chars: `2026-03-00003`)

**Invalid Examples:**
- `..._HP-2026-03-0003` ✗ (12 chars - CRASH)
- `..._HP-1-1-1` ✗ (5 chars - CRASH)

---

## 3. ID FORMAT RULES

### 3.1 GetLastSplit Logic (ImportHelper L2197-2200)

```csharp
private string GetLastSplit(string input, int offset = 0)
{
    return input.Substring(input.LastIndexOf('_') + 1 + offset);
}
```

**Pattern**: `PREFIX_SUFFIX` → Returns `SUFFIX[offset:]`

| Element | Example Full ID | Offset | Extracted | Must Be |
|---------|-----------------|--------|-----------|---------|
| Parameter | `M-00FA_A-0001-00-0001_P-1` | 2 | `1` | Integer |
| ParameterRef | `M-00FA_A-0001-00-0001_R-1` | 2 | `1` | Integer |
| ComObject | `M-00FA_A-0001-00-0001_O-1` | 0 (uses `-`) | `1` | Integer |
| ParameterType | `M-00FA_A-0001-00-0001_PT-MyType` | 3 | `MyType` | String (Unescaped) |
| ParameterBlock | `M-00FA_A-0001-00-0001_PB-1` | 3 | `1` | Integer |
| ModuleDef | `M-00FA_A-0001-00-0001_MD-1` | 3 | `1` | Integer |

### 3.2 Character Encoding (ImportHelper L2161-2194)

Special characters in IDs must be encoded:

| Character | Encoded | Character | Encoded |
|-----------|---------|-----------|---------|
| `-` | `.2D` | `.` | `.2E` |
| ` ` | `.20` | `/` | `.2F` |
| `(` | `.28` | `)` | `.29` |
| `+` | `.2B` | `,` | `.2C` |

**Example**: `KNX-BTN` in OrderNumber → `KNX.2DBTN` in CatalogItem ID

---

## 4. DATAPOINT TYPE FORMAT (ImportHelper L1278-1304)

### 4.1 Valid Formats

```xml
<!-- Sub-type specified (DPST) -->
<ComObject DatapointType="DPST-1-1" />    <!-- Switch On/Off -->
<ComObject DatapointType="DPST-5-1" />    <!-- Scaling 0-100% -->

<!-- Main type only (DPT) -->
<ComObject DatapointType="DPT-1" />       <!-- 1-Bit -->
<ComObject DatapointType="DPT-9" />       <!-- 2-Byte Float -->
```

### 4.2 ObjectSize Format (ImportHelper L1273-1277)

```xml
<!-- Bit format -->
<ComObject ObjectSize="1 Bit" />
<ComObject ObjectSize="4 Bits" />

<!-- Byte format -->
<ComObject ObjectSize="1 Byte" />
<ComObject ObjectSize="2 Bytes" />
```

**Parsing Logic**:
```csharp
string[] objSize = xcom.Attribute("ObjectSize").Value.Split(' ');
if(objSize[1] == "Bit")
    com.ObjectSize = int.Parse(objSize[0]);
else
    com.ObjectSize = int.Parse(objSize[0]) * 8;
```

---

## 5. CHECKHELPER VALIDATION RULES

### 5.1 ManufacturerId (CheckHelper L29-30)
```
Range: 0x0001 - 0xFFFF
OpenKNX: 0x00FA (special handling)
```

### 5.2 ParameterType Constraints (CheckHelper L141-326)

| Type | Constraints |
|------|-------------|
| Text | `SizeInBit % 8 == 0` |
| Enum | No duplicate values, values within bit range |
| NumberUInt | `min >= 0`, `max < 2^SizeInBit` |
| NumberInt | `min/max` within signed range |
| CheckBox | `min=0, max=1` |
| Color | `UIHint ∈ {RGB, RGBW, HSV}` |
| IpAddress | Valid `AddressType` |

### 5.3 Dynamic Section Structure (CheckHelper L925-1064)

| Element | Required |
|---------|----------|
| Channel | `Number` attribute, valid `TextParameterRefId` if used |
| ParameterBlock | Valid `ParamRefId` or `Id`, valid `TextParameterRefId` if used |
| choose | Valid `ParamRefId` pointing to existing ParameterRef |
| when | `test` attribute or `default="true"` |
| Module | Valid `RefId` to ModuleDef, all Arguments populated |

---

## 6. VALIDATION CHECKLIST

### 6.1 Pre-Import Checklist

- [ ] All IDs have numeric suffixes (no `Btn1`, `Mode`, etc.)
- [ ] `Hardware.VersionNumber` exists (not `Version`)
- [ ] `Hardware.BusCurrent` exists
- [ ] `Hardware.HasIndividualAddress="true"`
- [ ] `Hardware.HasApplicationProgram="true"`
- [ ] `Hardware2ProgramRefId` suffix length ≥ 13 characters
- [ ] `OrderNumber` encoded if contains special characters
- [ ] `DatapointType` format is `DPST-X-Y` or `DPT-X`
- [ ] `ObjectSize` format is `X Bit(s)` or `X Byte(s)`
- [ ] `DefaultLanguage` is valid culture code (e.g., `en-US`)
- [ ] `MaskVersion` exists in BCU list

### 6.2 Post-Import Validation (CheckHelper runs these)

- [ ] ParameterTypes have valid ranges
- [ ] Parameters have valid SavePath configurations
- [ ] ComObjects have valid DPT references
- [ ] Dynamic elements have all required references

---

## 7. ERROR MESSAGE MAPPING

| Error Message | Root Cause | Solution |
|---------------|------------|----------|
| "Unknown Error" (Crash) | NullReference or OutOfRange | Check attributes listed in Section 1 |
| "Input string was not in a correct format" | Non-numeric ID suffix | Rename IDs to use numbers only |
| "RefId not unique" | Duplicate parsed IDs | Ensure unique numeric suffixes |
| "Sequence contains no matching element" | Missing reference target | Verify CatalogItem contains encoded OrderNumber |
| "Index was outside the bounds" | String too short | Pad Hardware2ProgramRefId to 13 chars |

---

*Document generated from source code analysis of Kaenx Creator v8.x*
