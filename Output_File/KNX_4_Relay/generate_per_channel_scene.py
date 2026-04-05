#!/usr/bin/env python3
"""Generate KNX 4 Relay XML with per-channel scene configuration.
- 4 ComObjects Scene riêng cho mỗi channel
- Enable Scene nằm trong từng Channel block, hiện khi Mode = Switch (1)
- 8 scenes per channel
- Naming: Channel A/B/C/D (params), Output A/B/C/D (ComObjects)
- Memory: 93 bytes total
"""

PREFIX = "M-0085_A-2025-01-00001"
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

CH_CONFIG = [
    {"ch": 1, "mode_p": 1, "startup_p": 2, "auto_p": 3, "time_p": 5, "offset": 0,
     "enable_p": 21, "store_p": 22, "scene_p_start": 23, "scene_offset": 29,
     "switch_o": 1, "status_o": 2, "scene_o": 9},
    {"ch": 2, "mode_p": 6, "startup_p": 7, "auto_p": 8, "time_p": 10, "offset": 7,
     "enable_p": 103, "store_p": 104, "scene_p_start": 39, "scene_offset": 45,
     "switch_o": 3, "status_o": 4, "scene_o": 10},
    {"ch": 3, "mode_p": 11, "startup_p": 12, "auto_p": 13, "time_p": 15, "offset": 14,
     "enable_p": 105, "store_p": 106, "scene_p_start": 55, "scene_offset": 61,
     "switch_o": 5, "status_o": 6, "scene_o": 11},
    {"ch": 4, "mode_p": 16, "startup_p": 17, "auto_p": 18, "time_p": 20, "offset": 21,
     "enable_p": 107, "store_p": 108, "scene_p_start": 71, "scene_offset": 77,
     "switch_o": 7, "status_o": 8, "scene_o": 12},
]

ENABLE_BITS = [
    (21, 0), (22, 1),   # CH1 enable, store
    (103, 2), (104, 3), # CH2
    (105, 4), (106, 5), # CH3
    (107, 6), (108, 7), # CH4
]

def gen_header():
    return '''<?xml version="1.0" encoding="utf-8" ?>
<KNX xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" CreatedBy="KNX MT" ToolVersion="5.6.0.0" xmlns="http://knx.org/xml/project/20">
  <ManufacturerData>
    <Manufacturer RefId="M-0085">
      <Catalog>
        <CatalogSection Id="M-0085_CS-1" Name="Devices" Number="1" DefaultLanguage="en-US">
          <CatalogItem Id="M-0085_H-2025-01_HP-2025-01-00001_CI-LM4OK16RE" Name="Lumi Switch actuator, 4 relay 16A SE" Number="1" ProductRefId="M-0085_H-2025-01_P-202501" Hardware2ProgramRefId="M-0085_H-2025-01_HP-2025-01-00001" DefaultLanguage="en-US" />
        </CatalogSection>
      </Catalog>
      <Hardware>
        <Hardware Id="M-0085_H-2025-01" Name="KNX 4-Channel Relay Hardware" SerialNumber="RL-4CH-2025" VersionNumber="1" BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true">
          <Products>
            <Product Id="M-0085_H-2025-01_P-202501" Text="Lumi Switch actuator, 4 relay 16A SE" OrderNumber="LM4OK16RE" IsRailMounted="true" DefaultLanguage="en-US" />
          </Products>
          <Hardware2Programs>
            <Hardware2Program Id="M-0085_H-2025-01_HP-2025-01-00001" MediumTypes="MT-0">
              <ApplicationProgramRef RefId="M-0085_A-2025-01-00001" />
            </Hardware2Program>
          </Hardware2Programs>
        </Hardware>
      </Hardware>
      <ApplicationPrograms>
        <ApplicationProgram Id="M-0085_A-2025-01-00001" ApplicationNumber="2025" ApplicationVersion="1" ProgramType="ApplicationProgram" MaskVersion="MV-07B0" Name="Switch Actuator 4-relay 16A/1.0" LoadProcedureStyle="MergedProcedure" PeiType="0" DefaultLanguage="en-US" DynamicTableManagement="false" Linkable="false" MinEtsVersion="4.0" IsSecureEnabled="true" MaxUserEntries="1" MaxSecurityProxyGroupKeyTableEntries="0" MaxSecurityIndividualAddressEntries="500" MaxTunnelingUserEntries="0" MaxSecurityP2PKeyTableEntries="0" MaxSecurityGroupKeyTableEntries="512">
          <Static>
            <Code>
              <RelativeSegment Id="{RS}" Name="Parameters" Size="93" LoadStateMachine="4" Offset="0" />
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
    # PT-8: Scene Relay Action (8 bit)
    lines.append(f'              <ParameterType Id="{pt(8)}" Name="SceneRelayAction_PT">')
    lines.append('                <TypeRestriction Base="Value" SizeInBit="8">')
    for val, txt in [(0,"OFF"),(1,"ON")]:
        lines.append(f'                  <Enumeration Text="{txt}" Value="{val}" Id="{pt(8)}_EN-{val}" />')
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
    enable_names = [
        (21, "R1_EnableScene", "Enable Scene"),
        (22, "R1_EnableSceneStore", "Enable Scene Store"),
        (103, "R2_EnableScene", "Enable Scene"),
        (104, "R2_EnableSceneStore", "Enable Scene Store"),
        (105, "R3_EnableScene", "Enable Scene"),
        (106, "R3_EnableSceneStore", "Enable Scene Store"),
        (107, "R4_EnableScene", "Enable Scene"),
        (108, "R4_EnableSceneStore", "Enable Scene Store"),
    ]
    for pid, name, text in enable_names:
        bit = [b for pp, b in ENABLE_BITS if pp == pid][0]
        lines.append(f'              <Parameter Id="{p(pid)}" Name="{name}" ParameterType="{pt(6)}" Text="{text}" Value="0"><Memory CodeSegment="{RS}" Offset="28" BitOffset="{bit}" /></Parameter>')
    lines.append('')

    # Scene params per channel
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
            lines.append(f'              <Parameter Id="{p(act_p)}" Name="R{n}_Scene{s+1}_Act" ParameterType="{pt(8)}" Text="Scene {s+1} Action" Value="0"><Memory CodeSegment="{RS}" Offset="{act_off}" BitOffset="0" /></Parameter>')
        lines.append('')

    lines.append('            </Parameters>')
    return '\n'.join(lines)

def gen_parameter_refs():
    lines = ['            <ParameterRefs>']
    # Channel config refs
    all_pids = []
    for ch in CH_CONFIG:
        all_pids.extend([ch["mode_p"], ch["startup_p"], ch["auto_p"], ch["time_p"]])
    # Enable/Store refs
    for pid, _ in ENABLE_BITS:
        all_pids.append(pid)
    # Scene refs
    for ch in CH_CONFIG:
        sp = ch["scene_p_start"]
        for i in range(16):  # 8 scenes x 2 params
            all_pids.append(sp + i)
    for pid in all_pids:
        lines.append(f'              <ParameterRef Id="{p(pid)}_R-{pid}" RefId="{p(pid)}" />')
    lines.append('            </ParameterRefs>')
    return '\n'.join(lines)

def gen_comobject_table():
    lines = ['            <ComObjectTable>']
    for idx, ch in enumerate(CH_CONFIG):
        lbl = CH_LABELS[idx]
        sw = ch["switch_o"]
        st = ch["status_o"]
        sc = ch["scene_o"]
        lines.append(f'              <ComObject Id="{o(sw)}" Name="Output {lbl}" Text="Output {lbl}-..." Number="{sw}" FunctionText="Switch" ObjectSize="1 Bit" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-1-1" />')
        lines.append(f'              <ComObject Id="{o(st)}" Name="Output {lbl}" Text="Output {lbl}-..." Number="{st}" FunctionText="Switch Status" ObjectSize="1 Bit" ReadFlag="Enabled" WriteFlag="Disabled" CommunicationFlag="Enabled" TransmitFlag="Enabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-1-1" />')
        lines.append(f'              <ComObject Id="{o(sc)}" Name="Output {lbl} Scene" Text="Output {lbl}-..." Number="{sc}" FunctionText="Scene Control" ObjectSize="1 Byte" ReadFlag="Disabled" WriteFlag="Enabled" CommunicationFlag="Enabled" TransmitFlag="Disabled" UpdateFlag="Disabled" ReadOnInitFlag="Disabled" DatapointType="DPST-18-1" />')
    lines.append('            </ComObjectTable>')
    return '\n'.join(lines)

def gen_comobject_refs():
    lines = ['            <ComObjectRefs>']
    all_oids = []
    for ch in CH_CONFIG:
        all_oids.extend([ch["switch_o"], ch["status_o"], ch["scene_o"]])
    for oid in all_oids:
        lines.append(f'              <ComObjectRef Id="{o(oid)}_R-{oid}" RefId="{o(oid)}" />')
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
        # Scene section - inside channel block, when Mode = Switch (1)
        lines.append(f'                    <!-- Scene Settings for Channel {lbl} -->')
        lines.append(f'                    <choose ParamRefId="{pr(ch["mode_p"])}">')
        lines.append(f'                      <when test="1">')
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
            ps_id = ps_scene_base[idx] + s
            lines.append(f'                            <ParameterRefRef RefId="{pr(num_p)}" />')
            lines.append(f'                            <choose ParamRefId="{pr(num_p)}">')
            lines.append(f'                              <when test=">0">')
            lines.append(f'                                <ParameterRefRef RefId="{pr(act_p)}" />')
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
    return f'''            <AddressTable MaxEntries="65535" />
            <AssociationTable MaxEntries="65535" />
            <LoadProcedures>
              <LoadProcedure MergeId="2">
                <LdCtrlRelSegment AppliesTo="full" LsmIdx="4" Size="93" Mode="0" Fill="0" />
              </LoadProcedure>
              <LoadProcedure MergeId="4">
                 <LdCtrlWriteRelMem ObjIdx="4" Offset="0" Size="93" Verify="true" />
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
