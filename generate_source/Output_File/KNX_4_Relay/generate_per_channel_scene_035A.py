#!/usr/bin/env python3
"""Generate KNX 4 Relay XML with per-channel scene configuration.
- 4 ComObjects Scene riêng cho mỗi channel
- Enable Scene nằm trong từng Channel block, hiện khi Mode = Switch (1)
- 8 scenes per channel
- Naming: Channel A/B/C/D (params), Output A/B/C/D (ComObjects)
- Memory: 125 bytes total
"""

PREFIX = "M-035A_A-2025-01-00001"
RS = f"{PREFIX}_RS-04-00001"

def p(n): return f"{PREFIX}_P-{n}"
def pr(n): return f"{PREFIX}_P-{n}_R-{n}"
def o(n): return f"{PREFIX}_O-{n}"
def or_(n): return f"{PREFIX}_O-{n}_R-{n}"
def pb(n): return f"{PREFIX}_PB-{n}"
def ps(n): return f"{PREFIX}_PS-{n}"
def pt(n): return f"{PREFIX}_PT-{n}"

CH_LABELS = ['A', 'B', 'C', 'D']

# Scene param mapping per channel
# CH1: P-23..P-38, CH2: P-39..P-54, CH3: P-55..P-70, CH4: P-71..P-86
# Enable: P-21(CH1), P-103(CH2), P-105(CH3), P-107(CH4)
# Store:  P-22(CH1), P-104(CH2), P-106(CH3), P-108(CH4)

# Sequential Channel Configuration
# Each channel gets 30 Parameter IDs and 3 ComObject IDs
CH_CONFIG = []
for i in range(4):
    base_p = i * 30
    CH_CONFIG.append({
        "ch": i + 1,
        "mode_p": base_p + 1,
        "startup_p": base_p + 2,
        "auto_p": base_p + 3,
        "time_p": base_p + 4,
        "offset": i * 7,
        "enable_p": base_p + 5,
        "store_p": base_p + 6,
        "scene_p_start": base_p + 7,      # 16 params (8 scenes x 2)
        "momentary_act_start": base_p + 23, # 8 params
        "scene_offset": 29 + (i * 16),
        "switch_o": (i * 3) + 1,
        "status_o": (i * 3) + 2,
        "scene_o": (i * 3) + 3,
    })

ENABLE_BITS = []
for i in range(4):
    ENABLE_BITS.append((CH_CONFIG[i]["enable_p"], i * 2))
    ENABLE_BITS.append((CH_CONFIG[i]["store_p"], (i * 2) + 1))


def gen_header():
    return '''<?xml version="1.0" encoding="utf-8" ?>
<KNX xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" CreatedBy="KNX MT" ToolVersion="4.0.0.0" xmlns="http://knx.org/xml/project/14">
  <ManufacturerData>
    <Manufacturer RefId="M-035A">
      <Catalog>
        <CatalogSection Id="M-035A_CS-1" Name="Devices" Number="1" DefaultLanguage="en-US">
          <CatalogItem Id="M-035A_H-2025-01_HP-2025-01-00001_CI-LM4OK16RE" Name="Lumi Switch actuator, 4 relay 16A SE" Number="1" ProductRefId="M-035A_H-2025-01_P-202501" Hardware2ProgramRefId="M-035A_H-2025-01_HP-2025-01-00001" DefaultLanguage="en-US" />
        </CatalogSection>
      </Catalog>
      <Hardware>
        <Hardware Id="M-035A_H-2025-01" Name="KNX 4-Channel Relay Hardware" SerialNumber="RL-4CH-2025" VersionNumber="1" BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true">
          <Products>
            <Product Id="M-035A_H-2025-01_P-202501" Text="Lumi Switch actuator, 4 relay 16A SE" OrderNumber="LM4OK16RE" IsRailMounted="true" DefaultLanguage="en-US" />
          </Products>
          <Hardware2Programs>
            <Hardware2Program Id="M-035A_H-2025-01_HP-2025-01-00001" MediumTypes="MT-0">
              <ApplicationProgramRef RefId="M-035A_A-2025-01-00001" />
            </Hardware2Program>
          </Hardware2Programs>
        </Hardware>
      </Hardware>
      <ApplicationPrograms>
        <ApplicationProgram Id="M-035A_A-2025-01-00001" ApplicationNumber="2025" ApplicationVersion="1" ProgramType="ApplicationProgram" MaskVersion="MV-07B0" Name="Switch Actuator 4-relay 16A/1.0" LoadProcedureStyle="MergedProcedure" PeiType="0" DefaultLanguage="en-US" DynamicTableManagement="false" Linkable="false" MinEtsVersion="4.0" IsSecureEnabled="true" MaxUserEntries="1" MaxSecurityProxyGroupKeyTableEntries="0" MaxSecurityIndividualAddressEntries="64" MaxTunnelingUserEntries="0" MaxSecurityP2PKeyTableEntries="1" MaxSecurityGroupKeyTableEntries="48">
          <Static>
            <Code>
              <RelativeSegment Id="{RS}" Name="Parameters" Size="125" LoadStateMachine="4" Offset="0" />
            </Code>
            <Options SupportsExtendedMemoryServices="true" SupportsExtendedPropertyServices="true" />'''.format(RS=RS)

def gen_parameter_types():
    lines = ['            <ParameterTypes>']
    # PT-1: Relay Mode
    lines.append(f'              <ParameterType Id="{pt(1)}" Name="Relay Mode">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    for val, txt in [(0,"Disabled"),(1,"Switch"),(2,"Auto On/Off"),(3,"Momentary")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(1)}_EN-{val}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-2: Startup
    lines.append(f'              <ParameterType Id="{pt(2)}" Name="Startup Behaviour">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    for val, txt in [(0,"Restore Last Value"),(1,"Set OFF"),(2,"Set ON")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(2)}_EN-{val}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-4: Time
    lines.append(f'              <ParameterType Id="{pt(4)}" Name="Time Value">')
    lines.append('                <TypeNumber Type="unsignedInt" SizeInBit="32" minInclusive="0" maxInclusive="10800" />')
    lines.append('              </ParameterType>')
    # PT-5: Auto Mode Type
    lines.append(f'              <ParameterType Id="{pt(5)}" Name="Auto Mode Type">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    for val, txt in [(0,"Auto OFF"),(1,"Auto ON")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(5)}_EN-{val}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-6: Enable
    lines.append(f'              <ParameterType Id="{pt(6)}" Name="Enable_PT">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="1">')
    for val, txt in [(0,"No"),(1,"Yes")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(6)}_EN-{val}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-7: Scene Number
    lines.append(f'              <ParameterType Id="{pt(7)}" Name="SceneNumber_PT">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    lines.append(f'                  <Enumeration Text="not active" Value="0" Id="{pt(7)}_EN-NA" />')
    for i in range(1, 65):
        lines.append(f'                  <Enumeration Text="Scene No. {i}" Value="{i}" Id="{pt(7)}_EN-{i}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-8: Scene Relay Action (8 bit) - ON/OFF for Switch and Auto modes
    lines.append(f'              <ParameterType Id="{pt(8)}" Name="SceneRelayAction_PT">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    for val, txt in [(0,"OFF"),(1,"ON")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(8)}_EN-{val}" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    # PT-9: Scene Relay Action ON Only (8 bit) - for Momentary mode
    lines.append(f'              <ParameterType Id="{pt(9)}" Name="SceneRelayActionOnOnly_PT">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    lines.append(f'                  <Enumeration Text="ON" Value="1" Id="{pt(9)}_EN-1" />')
    lines.append('                </TypeRestriction>')
    lines.append('              </ParameterType>')
    lines.append('            </ParameterTypes>')
    return '\n'.join(lines)

def gen_parameters():
    lines = ['            <Parameters>']
    # Channel configs
    for idx, ch in enumerate(CH_CONFIG):
        n = ch["ch"]
        lbl = CH_LABELS[idx]
        off = ch["offset"]
        lines.append(f'              <!-- Channel {lbl} (7 bytes, offset {off}) -->')
        lines.append(f'              <Parameter Id="{p(ch["mode_p"])}" Name="R{n}_Mode" ParameterType="{pt(1)}" Text="Channel {lbl} Function" Value="1"><Memory CodeSegment="{RS}" Offset="{off}" BitOffset="0" /></Parameter>')
        lines.append(f'              <Parameter Id="{p(ch["startup_p"])}" Name="R{n}_Startup" ParameterType="{pt(2)}" Text="Behavior on Bus Voltage Recovery" Value="0"><Memory CodeSegment="{RS}" Offset="{off+1}" BitOffset="0" /></Parameter>')
        lines.append(f'              <Parameter Id="{p(ch["auto_p"])}" Name="R{n}_AutoType" ParameterType="{pt(5)}" Text="Auto Mode Type" Value="0"><Memory CodeSegment="{RS}" Offset="{off+2}" BitOffset="0" /></Parameter>')
        lines.append(f'              <Parameter Id="{p(ch["time_p"])}" Name="R{n}_Time" ParameterType="{pt(4)}" Text="Time Value (s)" Value="500"><Memory CodeSegment="{RS}" Offset="{off+3}" BitOffset="0" /></Parameter>')
        lines.append('')

    # Scene enable flags (offset 28)
    lines.append('              <!-- Scene Enable Flags (offset 28, packed bits) -->')
    for idx, ch in enumerate(CH_CONFIG):
        lbl = CH_LABELS[idx]
        # Enable Scene
        pid_en = ch["enable_p"]
        bit_en = [b for pp, b in ENABLE_BITS if pp == pid_en][0]
        lines.append(f'              <Parameter Id="{p(pid_en)}" Name="R{ch["ch"]}_EnableScene" ParameterType="{pt(6)}" Text="Enable Scene" Value="0"><Memory CodeSegment="{RS}" Offset="28" BitOffset="{bit_en}" /></Parameter>')
        # Enable Store
        pid_st = ch["store_p"]
        bit_st = [b for pp, b in ENABLE_BITS if pp == pid_st][0]
        lines.append(f'              <Parameter Id="{p(pid_st)}" Name="R{ch["ch"]}_EnableSceneStore" ParameterType="{pt(6)}" Text="Enable Scene Store" Value="0"><Memory CodeSegment="{RS}" Offset="28" BitOffset="{bit_st}" /></Parameter>')
    lines.append('')

    # Momentary ON-only action params (Separate memory offsets 93-124)
    # This avoids overwrite issues by assigning a unique byte for Momentary Action.
    for idx, ch in enumerate(CH_CONFIG):
        n = ch["ch"]
        lbl = CH_LABELS[idx]
        mas = ch["momentary_act_start"]
        # Momentary actions start at offset 93
        mom_act_start_off = 93 + (idx * 8)
        lines.append(f'              <!-- Channel {lbl} Momentary Scene Actions (ON only, offsets {mom_act_start_off}-{mom_act_start_off+7}) -->')
        for s in range(8):
            mom_p = mas + s
            act_off = mom_act_start_off + s
            lines.append(f'              <Parameter Id="{p(mom_p)}" Name="R{n}_Scene{s+1}_MomAct" ParameterType="{pt(9)}" Text="Scene {s+1} Action" Value="1"><Memory CodeSegment="{RS}" Offset="{act_off}" BitOffset="0" /></Parameter>')
        lines.append('')

    # Scene params per channel (Original offsets 29-92 for Switch/Auto actions)
    for idx, ch in enumerate(CH_CONFIG):
        n = ch["ch"]
        lbl = CH_LABELS[idx]
        sp = ch["scene_p_start"]
        so = ch["scene_offset"]
        lines.append(f'              <!-- Channel {lbl} Scenes (offset {so}-{so+15}, 8 scenes x 2 bytes) -->')
        for s in range(8):
            num_p = sp + s * 2
            act_p = sp + s * 2 + 1
            num_off = so + s * 2
            act_off = so + s * 2 + 1
            lines.append(f'              <Parameter Id="{p(num_p)}" Name="R{n}_Scene{s+1}_Num" ParameterType="{pt(7)}" Text="Scene {s+1} Number" Value="0"><Memory CodeSegment="{RS}" Offset="{num_off}" BitOffset="0" /></Parameter>')
            lines.append(f'              <Parameter Id="{p(act_p)}" Name="R{n}_Scene{s+1}_Act" ParameterType="{pt(8)}" Text="Scene {s+1} Action" Value="1"><Memory CodeSegment="{RS}" Offset="{act_off}" BitOffset="0" /></Parameter>')
        lines.append('')

    lines.append('            </Parameters>')
    return '\n'.join(lines)

def gen_parameter_refs():
    lines = ['            <ParameterRefs>']
    all_pids = []
    # Collect all IDs from CH_CONFIG
    for ch in CH_CONFIG:
        all_pids.append(ch["mode_p"])
        all_pids.append(ch["startup_p"])
        all_pids.append(ch["auto_p"])
        all_pids.append(ch["time_p"])
        all_pids.append(ch["enable_p"])
        all_pids.append(ch["store_p"])
        # Scene Numbers and Switch Actions
        for i in range(16):
            all_pids.append(ch["scene_p_start"] + i)
        # Momentary Actions
        for i in range(8):
            all_pids.append(ch["momentary_act_start"] + i)
            
    for pid in sorted(all_pids):
        lines.append(f'              <ParameterRef Id="{p(pid)}_R-{pid}" RefId="{p(pid)}" />')
    lines.append('            </ParameterRefs>')
    return '\n'.join(lines)

def gen_comobject_table():
    lines = ['            <ComObjectTable>']
    for idx, ch in enumerate(CH_CONFIG):
        lbl = CH_LABELS[idx]
        n = ch["ch"]
        lines.append(f'              <ComObject Id="{o(ch["switch_o"])}" Name="Output {lbl}" Text="Output {lbl}-..." Number="{ch["switch_o"]}" FunctionText="Switch" ObjectSize="1 Bit" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-1-1" />')
        lines.append(f'              <ComObject Id="{o(ch["status_o"])}" Name="Output {lbl}" Text="Output {lbl}-..." Number="{ch["status_o"]}" FunctionText="Switch Status" ObjectSize="1 Bit" ReadFlag="Enabled" WriteFlag="Disabled" CommunicationFlag="Enabled" TransmitFlag="Enabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-1-1" />')
        lines.append(f'              <ComObject Id="{o(ch["scene_o"])}" Name="Output {lbl} Scene" Text="Output {lbl}-..." Number="{ch["scene_o"]}" FunctionText="Scene Control" ObjectSize="1 Byte" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-18-1" />')
    lines.append('            </ComObjectTable>')
    return '\n'.join(lines)

def gen_comobject_refs():
    lines = ['            <ComObjectRefs>']
    for ch in CH_CONFIG:
        lines.append(f'              <ComObjectRef Id="{o(ch["switch_o"])}_R-{ch["switch_o"]}" RefId="{o(ch["switch_o"])}" />')
        lines.append(f'              <ComObjectRef Id="{o(ch["status_o"])}_R-{ch["status_o"]}" RefId="{o(ch["status_o"])}" />')
        lines.append(f'              <ComObjectRef Id="{o(ch["scene_o"])}_R-{ch["scene_o"]}" RefId="{o(ch["scene_o"])}" />')
    lines.append('            </ComObjectRefs>')
    return '\n'.join(lines)

def gen_dynamic():
    lines = ['          <Dynamic>']
    lines.append('            <ChannelIndependentBlock>')
    
    # General Settings - only channel modes
    lines.append(f'              <ParameterBlock Id="{pb(10)}" Name="General_Config" Text="General Settings">')
    lines.append(f'                <ParameterSeparator Id="{ps(10)}" Text="Channel Operation Mode" UIHint="Headline" />')
    for idx, ch in enumerate(CH_CONFIG):
        lines.append(f'                <ParameterRefRef RefId="{pr(ch["mode_p"])}" />')
    lines.append(f'              </ParameterBlock>')
    lines.append('')

    # Channel blocks - each contains config + scene settings
    pb_ids = [20, 30, 40, 50]
    ps_scene_base = [100, 110, 120, 130]
    ps_scene_header = [30, 40, 50, 60]
    
    for idx, ch in enumerate(CH_CONFIG):
        n = ch["ch"]
        lbl = CH_LABELS[idx]
        lines.append(f'              <!-- Channel {lbl} Configuration -->')
        lines.append(f'              <choose ParamRefId="{pr(ch["mode_p"])}">')
        lines.append(f'                <when test=">0">')
        lines.append(f'                  <ParameterBlock Id="{pb(pb_ids[idx])}" Name="Channel{lbl}_Config" Text="Channel {lbl}-...">')
        lines.append(f'                    <ComObjectRefRef RefId="{or_(ch["switch_o"])}" />')
        lines.append(f'                    <ComObjectRefRef RefId="{or_(ch["status_o"])}" />')
        lines.append(f'                    <ParameterRefRef RefId="{pr(ch["startup_p"])}" />')
        # Auto mode
        lines.append(f'                    <choose ParamRefId="{pr(ch["mode_p"])}">')
        lines.append(f'                      <when test="2">')
        lines.append(f'                        <ParameterRefRef RefId="{pr(ch["auto_p"])}" />')
        lines.append(f'                        <ParameterRefRef RefId="{pr(ch["time_p"])}" />')
        lines.append(f'                      </when>')
        lines.append(f'                    </choose>')
        # Scene section - inside channel block, when Mode > 0 (Switch/Auto/Momentary)
        # For Momentary (mode=3): Scene Action shows ON only (PT-9, cannot select OFF)
        # For Switch (mode=1) and Auto (mode=2): Scene Action shows ON/OFF (PT-8)
        lines.append(f'                    <!-- Scene Settings for Channel {lbl} -->')
        lines.append(f'                    <choose ParamRefId="{pr(ch["mode_p"])}">')
        lines.append(f'                      <when test=">0">')
        lines.append(f'                        <ParameterSeparator Id="{ps(ps_scene_header[idx])}" Text="Scene Settings" UIHint="Headline" />')
        lines.append(f'                        <ParameterRefRef RefId="{pr(ch["enable_p"])}" />')
        lines.append(f'                        <choose ParamRefId="{pr(ch["enable_p"])}">')
        lines.append(f'                          <when test="1">')
        lines.append(f'                            <ParameterRefRef RefId="{pr(ch["store_p"])}" />')
        lines.append(f'                            <ComObjectRefRef RefId="{or_(ch["scene_o"])}" />')
        
        sp = ch["scene_p_start"]
        for s in range(8):
            num_p = sp + s * 2
            act_p = sp + s * 2 + 1
            mom_act_p = ch["momentary_act_start"] + s
            ps_id = ps_scene_base[idx] + s
            lines.append(f'                            <ParameterRefRef RefId="{pr(num_p)}" />')
            lines.append(f'                            <choose ParamRefId="{pr(num_p)}">')
            lines.append(f'                              <when test=">0">')
            # Scene Action: mode 1,2 = ON/OFF (PT-8); mode 3 = ON only (PT-9)
            lines.append(f'                                <choose ParamRefId="{pr(ch["mode_p"])}">')
            lines.append(f'                                  <when test="1">')
            lines.append(f'                                    <ParameterRefRef RefId="{pr(act_p)}" />')
            lines.append(f'                                  </when>')
            lines.append(f'                                  <when test="2">')
            lines.append(f'                                    <ParameterRefRef RefId="{pr(act_p)}" />')
            lines.append(f'                                  </when>')
            lines.append(f'                                  <when test="3">')
            lines.append(f'                                    <ParameterRefRef RefId="{pr(mom_act_p)}" />')
            lines.append(f'                                  </when>')
            lines.append(f'                                </choose>')
            lines.append(f'                              </when>')
            lines.append(f'                            </choose>')
        
        lines.append(f'                          </when>')
        lines.append(f'                        </choose>')
        lines.append(f'                      </when>')
        lines.append(f'                    </choose>')
        lines.append(f'                  </ParameterBlock>')
        lines.append(f'                </when>')
        lines.append(f'              </choose>')
        lines.append('')

    lines.append('            </ChannelIndependentBlock>')
    lines.append('          </Dynamic>')
    return '\n'.join(lines)

def gen_footer():
    return '''        </ApplicationProgram>
      </ApplicationPrograms>
    </Manufacturer>
  </ManufacturerData>
</KNX>'''

def gen_static_tail():
    return f'''            <AddressTable MaxEntries="500" />
            <AssociationTable MaxEntries="500" />
            <LoadProcedures>
              <LoadProcedure MergeId="2">
                <LdCtrlRelSegment AppliesTo="full" LsmIdx="4" Size="125" Mode="0" Fill="0" />
              </LoadProcedure>
              <LoadProcedure MergeId="4">
                 <LdCtrlWriteRelMem ObjIdx="4" Offset="0" Size="125" Verify="true" />
              </LoadProcedure>
            </LoadProcedures>
          </Static>'''

def main():
    parts = [
        gen_header(),
        gen_parameter_types(),
        gen_parameters(),
        gen_parameter_refs(),
        gen_comobject_table(),
        gen_comobject_refs(),
        gen_static_tail(),
        gen_dynamic(),
        gen_footer(),
    ]
    xml = '\n'.join(parts) + '\n'
    
    out_path = r"d:\Project\KNX\Kaenx.Creator.Binaries\POC_Kaenx_Creator\Output_File\KNX_4_Relay\knx_relay_4ch.xml"
    with open(out_path, 'w', encoding='utf-8') as f:
        f.write(xml)
    print(f"Generated: {out_path}")
    print(f"Total size: {len(xml)} bytes")
    
    # Quick validation
    param_ids = set()
    ref_ids = set()
    import re
    for m in re.finditer(r'Parameter Id="([^"]+)"', xml):
        pid = m.group(1)
        if pid in param_ids:
            print(f"DUPLICATE Parameter Id: {pid}")
        param_ids.add(pid)
    for m in re.finditer(r'ParameterRef Id="([^"]+)"', xml):
        rid = m.group(1)
        if rid in ref_ids:
            print(f"DUPLICATE ParameterRef Id: {rid}")
        ref_ids.add(rid)
    for m in re.finditer(r'ComObjectRef Id="([^"]+)"', xml):
        rid = m.group(1)
        if rid in ref_ids:
            print(f"DUPLICATE ComObjectRef Id: {rid}")
        ref_ids.add(rid)
    
    # Check all RefId references exist
    for m in re.finditer(r'ParameterRefRef RefId="([^"]+)"', xml):
        rid = m.group(1)
        if rid not in ref_ids:
            print(f"MISSING ParameterRef: {rid}")
    for m in re.finditer(r'ComObjectRefRef RefId="([^"]+)"', xml):
        rid = m.group(1)
        if rid not in ref_ids:
            print(f"MISSING ComObjectRef: {rid}")
    
    print(f"Parameters: {len(param_ids)}, Refs: {len(ref_ids)}")
    print("Validation complete.")

if __name__ == "__main__":
    main()
