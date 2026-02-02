---
description: Generate KNX XML file from product description. Use when user says "tạo knx", "generate knx xml", "new knx device", "create knx product" or wants to create a new KNX device XML.
---

# Generate KNX XML from Product Description

This workflow generates a valid KNX XML file ready for Kaenx Creator import.

## Trigger Keywords
- "tạo knx", "generate knx", "new knx device"
- "create knx xml", "knx product", "knxprod"

## Required Information

Before generating, collect this from user:

| Field | Required | Example |
|-------|----------|---------|
| Product Name | ✅ | "4-Button Scene Controller" |
| Order Number | ✅ | "LUMI-BTN4" |
| Channels/Buttons count | ✅ | 4 |
| Functions per channel | ✅ | Switch, Dimming, Scene |
| ComObjects needed | ✅ | On/Off, Dimming Value, Scene |

## Generation Steps

### Step 1: Create Product Folder

Create folder in `Output_File/` with naming convention:

```bash
mkdir -p "d:\Lumi\KNX_Nordic\Kaenx_Creator_Tool\POC_Kaenx_Creator\Output_File\KNX_<ProductName>"
```

Example: `Output_File/KNX_4_Button_Scene/`

### Step 2: Load Context and Rules

// turbo
Load the knx-xml-context skill for validation rules:
```
Refer to: .agent/skills/knx-xml-context/SKILL.md
```

// turbo
Read the strict import rules:
```
Refer to: POC_KNX_XML_Source/XML_Import_Rule/Rule.md
```

// turbo
Read the optimization guide:
```
Refer to: POC_KNX_XML_Source/KNX_Optimization/KNX_Optimization_Guide.md
```

// turbo
Use Gold Master Template as base:
```
Template: POC_KNX_XML_Source/Gold_Master_Template.xml
```

### Step 3: Generate IDs

Follow ID format rules strictly:

```
Manufacturer:     M-00FA
Hardware:         M-00FA_H-<HHHH>-<V>
Application:      M-00FA_A-<AAAA>-<VV>-<RRRR>
Parameter:        M-00FA_A-...._P-<N>           (N = numeric)
ParameterRef:     M-00FA_A-...._P-<N>_R-<M>     (M = numeric + UNIQUE GLOBALLY)
ComObject:        M-00FA_A-...._O-<N>           (N = numeric)
ComObjectRef:     M-00FA_A-...._O-<N>_R-<M>     (M = numeric + UNIQUE GLOBALLY)
ParameterBlock:   M-00FA_A-...._PB-<N>          (N = numeric)
Hardware2Program: M-00FA_H-...._HP-<XXXX-XX-XXXXX> (≥13 chars suffix)
```

> [!CAUTION]
> **CRITICAL Rules:**
> 1. **RefId Uniqueness**: `_R-<M>` MUST be globally unique across the entire file (e.g. `R-1`..`R-100`). NEVER reuse `R-1` for different objects.
> 2. **Clean OrderNumber**: `OrderNumber` must contain **alphanumeric characters only**. Remove all hyphens or special chars (e.g. use "LUMI123" not "LUMI-123") to prevent encoding errors.
> 3. **Numeric Suffixes**: ALL ID suffixes MUST be NUMERIC ONLY.

### Step 4: Define ParameterTypes

Create types based on product requirements:

```xml
<!-- Enable/Disable -->
<ParameterType Id="..._PT-1" Name="EnableDisable">
  <TypeRestriction Base="Value" SizeInBit="1">
    <Enumeration Id="..._PT-1_EN-0" Text="Disabled" Value="0" />
    <Enumeration Id="..._PT-1_EN-1" Text="Enabled" Value="1" />
  </TypeRestriction>
</ParameterType>

<!-- Channel Mode -->
<ParameterType Id="..._PT-2" Name="ChannelMode">
  <TypeRestriction Base="Value" SizeInBit="8">
    <Enumeration Id="..._PT-2_EN-0" Text="Disabled" Value="0" />
    <Enumeration Id="..._PT-2_EN-1" Text="Switch" Value="1" />
    <Enumeration Id="..._PT-2_EN-2" Text="Dimming" Value="2" />
    <Enumeration Id="..._PT-2_EN-3" Text="Scene" Value="3" />
  </TypeRestriction>
</ParameterType>
```

### Step 5: Define Parameters with Memory Mapping

```xml
<Parameter 
  Id="M-00FA_A-0001-00-0000_P-1" 
  Name="CH1_Mode" 
  ParameterType="M-00FA_A-0001-00-0000_PT-2" 
  Text="Channel 1 Mode" 
  Value="0">
  <Memory CodeSegment="M-00FA_A-0001-00-0000_RS-04-00000" Offset="0" BitOffset="0" />
</Parameter>
```

### Step 6: Define ComObjects

Use correct DatapointType and ObjectSize formats:

| Function | DPT | ObjectSize |
|----------|-----|------------|
| Switch | DPST-1-1 | 1 Bit |
| Dimming Relative | DPST-3-7 | 4 Bits |
| Dimming Value | DPST-5-1 | 1 Byte |
| Scene | DPST-18-1 | 1 Byte |
| Temperature | DPST-9-1 | 2 Bytes |

```xml
<ComObject 
  Id="M-00FA_A-0001-00-0000_O-1" 
  Name="CH1_Switch" 
  Text="Channel 1 Switch" 
  Number="1" 
  ObjectSize="1 Bit" 
  DatapointType="DPST-1-1"
  ReadFlag="Disabled" 
  WriteFlag="Enabled" 
  CommunicationFlag="Enabled" 
  TransmitFlag="Disabled" />
```

### Step 7: Create Dynamic Section with Nested Logic

Apply "Default to Hidden" and "Master Switch" patterns:

```xml
<Dynamic>
  <Channel Name="Channel 1" Number="1">
    <ParameterBlock Id="..._PB-1" Name="CH1" Text="Channel 1">
      
      <!-- Master Switch -->
      <ParameterRefRef RefId="..._P-1_R-1" />
      
      <choose ParamRefId="..._P-1_R-1">
        <when test="0" />  <!-- Disabled: empty -->
        
        <when test="1">    <!-- Switch Mode -->
          <ComObjectRefRef RefId="..._O-1_R-1" />
          <ComObjectRefRef RefId="..._O-2_R-1" />
        </when>
        
        <when test="2">    <!-- Dimming Mode -->
          <ParameterRefRef RefId="..._P-2_R-1" />
          <ComObjectRefRef RefId="..._O-1_R-1" />
          <ComObjectRefRef RefId="..._O-3_R-1" />
        </when>
        
        <when test="3">    <!-- Scene Mode -->
          <ComObjectRefRef RefId="..._O-4_R-1" />
        </when>
      </choose>
      
    </ParameterBlock>
  </Channel>
</Dynamic>
```

### Step 8: Validate Before Save

// turbo
Run validation script:

```bash
python "d:\Lumi\KNX_Nordic\Kaenx_Creator_Tool\POC_Kaenx_Creator\POC_KNX_XML_Source\Validate_Tool\validate_knx_comprehensive.py" "<output_file>"
```

### Step 9: Save to Output Folder

Save the generated XML file to:

```
d:\Lumi\KNX_Nordic\Kaenx_Creator_Tool\POC_Kaenx_Creator\Output_File\KNX_<ProductName>\<product_name>.xml
```

## Validation Checklist

Before delivery, verify:

- [ ] All IDs have numeric suffixes only
- [ ] Hardware.VersionNumber exists (not "Version")
- [ ] Hardware2ProgramRefId suffix ≥ 13 characters
- [ ] **RefIds are GLOBALLY UNIQUE** across file (no reuse of R-1)
- [ ] **OrderNumber is alphanumeric only** (no special chars)
- [ ] All ParameterRef/ComObjectRef wrapped in `<choose><when>`
- [ ] DatapointType uses DPST-X-Y or DPT-X format
- [ ] ObjectSize uses "X Bit(s)" or "X Byte(s)" format
- [ ] Python validation script passes

## Output Structure

```
Output_File/
└── KNX_<ProductName>/
    ├── <product_name>.xml          # Main KNX XML file
    └── README.md                   # Product description (optional)
```

## Example Prompt

User: "Tạo KNX XML cho thiết bị 4 nút bấm, mỗi nút có chức năng Switch/Dimming/Scene"

Result: Generate XML with:
- 4 Channels (Button 1-4)
- Each channel has Mode parameter (Disabled/Switch/Dimming/Scene)
- Dynamic section shows relevant ComObjects based on selected mode
