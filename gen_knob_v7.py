# Generator knob_V7
import json

MFR = "M-0085"
APP = "M-0085_A-2026-03-0005"
RS = f"{APP}_RS-04-00000"

lines = []
def L(s=""): lines.append(s)

next_p_id = 1
next_o_id = 1
next_pb_id = 1

def ptid(name): return f"{APP}_PT-{name}"
def new_p_id(): global next_p_id; val = next_p_id; next_p_id += 1; return f"{APP}_P-{val}", f"{APP}_P-{val}_R-{val}"
def new_o_id(): global next_o_id; val = next_o_id; next_o_id += 1; return f"{APP}_O-{val}", f"{APP}_O-{val}_R-{val}"
def new_pb_id(): global next_pb_id; val = next_pb_id; next_pb_id += 1; return f"{APP}_PB-{val}"

parameter_types = []
parameters = []
parameter_refs = []
com_objects = []
com_object_refs = []

def add_pt_number(id_name, display_name, min_v, max_v, size_b, t_type="unsignedInt"):
    parameter_types.append(f'<ParameterType Id="{ptid(id_name)}" Name="{display_name}"><TypeNumber SizeInBit="{size_b}" Type="{t_type}" minInclusive="{min_v}" maxInclusive="{max_v}" /></ParameterType>')

def add_pt_float(id_name, display_name, min_v, max_v):
    parameter_types.append(f'<ParameterType Id="{ptid(id_name)}" Name="{display_name}"><TypeFloat Encoding="DPT 9" minInclusive="{min_v}" maxInclusive="{max_v}" /></ParameterType>')

def add_pt_enum(id_name, display_name, options, size_b=8):
    lines_enum = [f'<ParameterType Id="{ptid(id_name)}" Name="{display_name}"><TypeRestriction Base="Value" SizeInBit="{size_b}">']
    for v, txt in options.items():
        lines_enum.append(f'<Enumeration Text="{txt}" Value="{v}" Id="{ptid(id_name)}_EN-{v}" />')
    lines_enum.append('</TypeRestriction></ParameterType>')
    parameter_types.append("\n".join(lines_enum))

def add_pt_text(id_name, display_name, size_bytes):
    parameter_types.append(f'<ParameterType Id="{ptid(id_name)}" Name="{display_name}"><TypeText SizeInBit="{size_bytes * 8}" /></ParameterType>')

mem_offset = 0
def add_param_basic(internal_name, pt_name, display_text, default_val, obj_size_bytes=1, is_text=False):
    global mem_offset
    pid, rid = new_p_id()
    if is_text:
        parameters.append(f'<Parameter Id="{pid}" Name="{internal_name}" ParameterType="{ptid(pt_name)}" Text="{display_text}" Value="{default_val}" />')
    else:
        parameters.append(f'<Parameter Id="{pid}" Name="{internal_name}" ParameterType="{ptid(pt_name)}" Text="{display_text}" Value="{default_val}"><Memory CodeSegment="{RS}" Offset="{mem_offset}" BitOffset="0" /></Parameter>')
        mem_offset += obj_size_bytes
    parameter_refs.append(f'<ParameterRef Id="{rid}" RefId="{pid}" />')
    return pid, rid

def add_com_object(internal_name, func_text, obj_size, dp_type, ui_text, p_read="Disabled", p_write="Enabled", p_comm="Enabled", p_trans="Disabled", p_update="Disabled"):
    oid, orid = new_o_id()
    num = oid.split('-')[-1]
    com_objects.append(f'<ComObject Id="{oid}" Name="{internal_name}" Text="{ui_text}" Number="{num}" FunctionText="{func_text}" ObjectSize="{obj_size}" DatapointType="{dp_type}" ReadFlag="{p_read}" WriteFlag="{p_write}" CommunicationFlag="{p_comm}" TransmitFlag="{p_trans}" UpdateFlag="{p_update}" />')
    com_object_refs.append(f'<ComObjectRef Id="{orid}" RefId="{oid}" />')
    return oid, orid

# INITIALIZE ParameterTypes
add_pt_enum("EndpointCount", "Endpoint Count", {i: f"{i} Endpoints" if i > 1 else "1 Endpoint" for i in range(1, 7)})
add_pt_enum("SceneCount", "Scene Count", {i: f"{i} Scenes" if i > 1 else "1 Scene" for i in range(1, 17)})
add_pt_number("Percent", "Percent", 0, 100, 8)
add_pt_number("SleepTime", "Sleep Time", 10, 3600, 16)
add_pt_enum("YesNo", "Yes/No", {0: "No", 1: "Yes"}, 8)

add_pt_enum("EndpointFunction", "Endpoint Function", {1: "Switch", 2: "CCT", 3: "Dimming", 4: "Curtain", 5: "Fan", 6: "AC", 7: "Thermostat"})

add_pt_enum("SceneIcon", "Scene Icon", {i: f"Icon {i}" for i in range(1, 37)})
add_pt_enum("LightIcon", "Light Icon", {i: f"Icon {i}" for i in range(1, 21)})
add_pt_enum("CurtainIcon", "Curtain Icon", {1: "Roller", 2: "Blinds"})

add_pt_text("NameText", "Name String", 14)

# Switch Logic Enumerations
add_pt_enum("SwitchMode", "Switch Mode", {1: "Toggle", 2: "Auto On/Off", 3: "Momentary"})
add_pt_enum("StartupBehaviour", "Startup Behaviour", {0: "Restore Last Value", 1: "Set OFF", 2: "Set ON"})
add_pt_enum("AutoModeType", "Auto Mode Type", {0: "Auto OFF", 1: "Auto ON"})
add_pt_number("Time32", "Time Value", 1, 10800, 32)

add_pt_number("SceneNumber", "Scene Number", 1, 64, 8)
add_pt_number("TravelTime", "Travel Time", 5, 300, 16)

add_pt_enum("ACMode", "AC Mode", {0: "Auto", 1: "Fan", 2: "Heat", 3: "Cool", 4: "Dry"})
add_pt_enum("ACFanSpeed", "AC Fan Speed", {0: "Auto", 1: "Low", 2: "Mid", 3: "High"})
add_pt_enum("ACSwing", "AC Swing", {0: "Stop", 1: "P0", 2: "P1", 2: "P2", 3: "P3", 4: "P4", 5: "Swing"})
add_pt_float("Temperature", "Temperature Float", -20, 60)

# Global Params
_rid_ep_count = add_param_basic("Gen_EpCount", "EndpointCount", "Endpoint Count", "1", 1)[1]
_rid_bright = add_param_basic("Gen_Brightness", "Percent", "Brightness", "80", 1)[1]
_rid_sleep = add_param_basic("Gen_SleepTime", "SleepTime", "Sleep Time", "300", 2)[1]
_rid_en_scene = add_param_basic("Gen_EnableScene", "YesNo", "Enable Scene", "0", 1)[1]
_rid_sc_count = add_param_basic("Gen_ScCount", "SceneCount", "Scene Count", "1", 1)[1]

# Fixed Global Objects
o_gl_sw = add_com_object("Global_Switch", "Switch", "1 Bit", "DPST-1-1", "Global Switch")[1]
o_gl_temp = add_com_object("Temperature", "Temperature Sensor", "2 Bytes", "DPST-9-1", "Temperature Sensor")[1]
o_gl_hum = add_com_object("Humidity", "Humidity Sensor", "2 Bytes", "DPST-9-7", "Humidity Sensor")[1]
o_gl_date = add_com_object("Global_SysDate", "Date", "3 Bytes", "DPST-11-1", "System Date")[1]
o_gl_time = add_com_object("Global_SysTime", "Time", "3 Bytes", "DPST-10-1", "System Time")[1]

scene_defs = []
for sc in range(1, 17):
    _, rid_n = add_param_basic(f"Sc{sc}_Name", "NameText", "Name String", f"Scene {sc}", 14, is_text=True)
    _, rid_i = add_param_basic(f"Sc{sc}_Icon", "SceneIcon", "Icon", "1", 1)
    _, rid_num = add_param_basic(f"Sc{sc}_Number", "SceneNumber", "Scene Number", f"{sc}", 1)
    scene_defs.append((sc, rid_n, rid_i, rid_num))

endpoints_logic = []
for ep in range(1, 7):
    _, rid_name = add_param_basic(f"Btn{ep}_Name", "NameText", "Name String", f"Endpoint {ep}", 14, is_text=True)
    _, rid_func = add_param_basic(f"Btn{ep}_Mode", "EndpointFunction", "Function of Endpoint", "1", 1)
    
    # 1. Switch
    _, rid_sw_mode = add_param_basic(f"Btn{ep}_SwMode", "SwitchMode", "Switch mode", "1", 1)
    _, rid_sw_startup = add_param_basic(f"Btn{ep}_SwStartup", "StartupBehaviour", "Behavior on Bus Voltage Recovery", "0", 1)
    _, rid_sw_autotype = add_param_basic(f"Btn{ep}_SwAutoType", "AutoModeType", "Auto Mode Type", "0", 1)
    _, rid_sw_time = add_param_basic(f"Btn{ep}_SwTime", "Time32", "Time Value", "60", 4)
    _, rid_sw_icon = add_param_basic(f"Btn{ep}_SwIcon", "LightIcon", "Icon", "1", 1)
    o_sw = add_com_object(f"Btn{ep}_Switch", "Switch", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_sw_s = add_com_object(f"Btn{ep}_Stat", "Switch status", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")

    # 2. CCT
    _, rid_cct_icon = add_param_basic(f"Btn{ep}_CctIcon", "LightIcon", "Icon", "1", 1)
    o_cct_sw = add_com_object(f"Btn{ep}_CctPow", "Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_cct_sw_s = add_com_object(f"Btn{ep}_CctPowS", "Status Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_cct_br = add_com_object(f"Btn{ep}_CctBri", "Brightness", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_cct_br_s = add_com_object(f"Btn{ep}_CctBriS", "Status Brightness", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_cct_ct = add_com_object(f"Btn{ep}_CctCol", "Color Temp", "2 Bytes", "DPST-7-600", f"Endpoint {ep} - ...")
    o_cct_ct_s = add_com_object(f"Btn{ep}_CctColS", "Status Col Temp", "2 Bytes", "DPST-7-600", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    
    # 3. Dimming
    _, rid_dim_icon = add_param_basic(f"Btn{ep}_DimIcon", "LightIcon", "Icon", "1", 1)
    o_dim_sw = add_com_object(f"Btn{ep}_DimSw", "Switch", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_dim_sw_s = add_com_object(f"Btn{ep}_DimStat", "Switch status", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_dim_br = add_com_object(f"Btn{ep}_DimBri", "Brightness", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_dim_br_s = add_com_object(f"Btn{ep}_DimBriS", "Brightness status", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")

    # 4. Curtain
    _, rid_cu_time = add_param_basic(f"Btn{ep}_CuTime", "TravelTime", "Travel Time", "20", 2)
    _, rid_cu_icon = add_param_basic(f"Btn{ep}_CuIcon", "CurtainIcon", "Icon", "1", 1)
    o_cu_move = add_com_object(f"Btn{ep}_CuMov", "Move", "1 Bit", "DPST-1-8", f"Endpoint {ep} - ...")
    o_cu_stop = add_com_object(f"Btn{ep}_CuStp", "Stop", "1 Bit", "DPST-1-7", f"Endpoint {ep} - ...")
    o_cu_pos = add_com_object(f"Btn{ep}_CuPos", "Set Position", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_cu_pos_s = add_com_object(f"Btn{ep}_CuPosS", "Status Position", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_cu_mov_s = add_com_object(f"Btn{ep}_CuMovS", "Status Moving", "1 Bit", "DPST-1-11", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    
    # 5. Fan
    o_fan_sw = add_com_object(f"Btn{ep}_FanPow", "Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_fan_sw_s = add_com_object(f"Btn{ep}_FanPowS", "Status Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_fan_sp = add_com_object(f"Btn{ep}_FanSpd", "Speed", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_fan_sp_s = add_com_object(f"Btn{ep}_FanSpdS", "Status Speed", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    
    # 6. AC
    o_ac_sw = add_com_object(f"Btn{ep}_AcPow", "Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_ac_sw_s = add_com_object(f"Btn{ep}_AcPowS", "Status Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_ac_tar = add_com_object(f"Btn{ep}_AcTar", "Target Temp", "2 Bytes", "DPST-9-1", f"Endpoint {ep} - ...")
    o_ac_tar_s = add_com_object(f"Btn{ep}_AcTarS", "Status Target Temp", "2 Bytes", "DPST-9-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_ac_mo = add_com_object(f"Btn{ep}_AcMod", "Mode", "1 Byte", "DPST-20-105", f"Endpoint {ep} - ...")
    o_ac_mo_s = add_com_object(f"Btn{ep}_AcModS", "Status Mode", "1 Byte", "DPST-20-105", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_ac_fsp = add_com_object(f"Btn{ep}_AcFan", "Fan Speed", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_ac_fsp_s = add_com_object(f"Btn{ep}_AcFanS", "Status Fan Speed", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_ac_swi = add_com_object(f"Btn{ep}_AcSwi", "Swing", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...")
    o_ac_swi_s = add_com_object(f"Btn{ep}_AcSwiS", "Status Swing", "1 Byte", "DPST-5-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    
    # 7. Thermostat
    o_th_sw = add_com_object(f"Btn{ep}_ThPow", "Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...")
    o_th_sw_s = add_com_object(f"Btn{ep}_ThPowS", "Status Power", "1 Bit", "DPST-1-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_th_tar = add_com_object(f"Btn{ep}_ThTar", "Target Temp", "2 Bytes", "DPST-9-1", f"Endpoint {ep} - ...")
    o_th_tar_s = add_com_object(f"Btn{ep}_ThTarS", "Status Target Temp", "2 Bytes", "DPST-9-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")
    o_th_rm_s = add_com_object(f"Btn{ep}_ThRmT", "Room Temp Feedback", "2 Bytes", "DPST-9-1", f"Endpoint {ep} - ...", p_read="Enabled", p_write="Disabled", p_trans="Enabled", p_update="Enabled")

    endpoints_logic.append({
        "ep": ep, "rid_name": rid_name, "rid_func": rid_func,
        "sw": {"rid_mode": rid_sw_mode, "rid_startup": rid_sw_startup, "rid_autotype": rid_sw_autotype, "rid_time": rid_sw_time, "rid_icon": rid_sw_icon, "orids": [o_sw[1], o_sw_s[1]]},
        "cct": {"rid_icon": rid_cct_icon, "orids": [o_cct_sw[1], o_cct_sw_s[1], o_cct_br[1], o_cct_br_s[1], o_cct_ct[1], o_cct_ct_s[1]]},
        "dim": {"rid_icon": rid_dim_icon, "orids": [o_dim_sw[1], o_dim_sw_s[1], o_dim_br[1], o_dim_br_s[1]]},
        "cu": {"rid_time": rid_cu_time, "rid_icon": rid_cu_icon, "orids": [o_cu_move[1], o_cu_stop[1], o_cu_pos[1], o_cu_pos_s[1], o_cu_mov_s[1]]},
        "fan": {"orids": [o_fan_sw[1], o_fan_sw_s[1], o_fan_sp[1], o_fan_sp_s[1]]},
        "ac": {"orids": [o_ac_sw[1], o_ac_sw_s[1], o_ac_tar[1], o_ac_tar_s[1], o_ac_mo[1], o_ac_mo_s[1], o_ac_fsp[1], o_ac_fsp_s[1], o_ac_swi[1], o_ac_swi_s[1]]},
        "th": {"orids": [o_th_sw[1], o_th_sw_s[1], o_th_tar[1], o_th_tar_s[1], o_th_rm_s[1]]}
    })

# ========== RENDER XML ==========
L('<?xml version="1.0" encoding="utf-8" ?>')
L('<KNX xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" CreatedBy="KNX MT" ToolVersion="5.1.255.16695" xmlns="http://knx.org/xml/project/14">')
L('  <ManufacturerData>')
L(f'    <Manufacturer RefId="{MFR}">')
L('      <Catalog><CatalogSection Id="M-0085_CS-1" Name="Devices" Number="1" DefaultLanguage="en-US">')
L(f'        <CatalogItem Id="M-0085_H-2026-03_HP-2026-03-00001_CI-LMKNOB" Name="Lumi KNOB Control" Number="1" ProductRefId="M-0085_H-2026-03_P-202603" Hardware2ProgramRefId="M-0085_H-2026-03_HP-2026-03-00001" DefaultLanguage="en-US" />')
L('      </CatalogSection></Catalog>')
L('      <Hardware><Hardware Id="M-0085_H-2026-03" Name="KNX KNOB Hardware" SerialNumber="KNOB-2026" VersionNumber="1" BusCurrent="10" HasIndividualAddress="true" HasApplicationProgram="true" SupportsKNXDataSecure="true" SupportsKNXToolAccessSecure="true">')
L('        <Products><Product Id="M-0085_H-2026-03_P-202603" Text="Lumi KNOB Control" OrderNumber="LMKNOB" IsRailMounted="false" DefaultLanguage="en-US" /></Products>')
L('        <Hardware2Programs><Hardware2Program Id="M-0085_H-2026-03_HP-2026-03-00001" MediumTypes="MT-0">')
L(f'          <ApplicationProgramRef RefId="{APP}" />')
L('        </Hardware2Program></Hardware2Programs>')
L('      </Hardware></Hardware>')
L('      <ApplicationPrograms>')
L(f'        <ApplicationProgram Id="{APP}" ApplicationNumber="1" ApplicationVersion="1" ProgramType="ApplicationProgram" MaskVersion="MV-07B0" Name="KNOB Control" LoadProcedureStyle="MergedProcedure" PeiType="0" DefaultLanguage="en-US" DynamicTableManagement="false" Linkable="false" MinEtsVersion="5.7" IsSecureEnabled="true" SupportsKNXDataSecure="true" SupportsKNXToolAccessSecure="true" ToolAccessSecure="true" MaxSecurityIndividualAddressEntries="64" MaxSecurityGroupKeyTableEntries="48">')
L('          <Static>')
L(f'            <Code><RelativeSegment Id="{RS}" Name="Parameters" Size="1024" LoadStateMachine="4" Offset="0" /></Code>')
L('            <Options SupportsExtendedMemoryServices="true" SupportsExtendedPropertyServices="true" />')

L('            <ParameterTypes>')
for pt in parameter_types: L("              " + pt)
L('            </ParameterTypes>')

L('            <Parameters>')
for p in parameters: L("              " + p)
L('            </Parameters>')

L('            <ParameterRefs>')
for r in parameter_refs: L("              " + r)
L('            </ParameterRefs>')

L('            <ComObjectTable>')
for c in com_objects: L("              " + c)
L('            </ComObjectTable>')

L('            <ComObjectRefs>')
for cr in com_object_refs: L("              " + cr)
L('            </ComObjectRefs>')

L('            <AddressTable MaxEntries="65535" />')
L('            <AssociationTable MaxEntries="65535" />')
L('            <LoadProcedures>')
L('              <LoadProcedure MergeId="2">')
L('                <LdCtrlRelSegment AppliesTo="full" LsmIdx="4" Size="1024" Mode="0" Fill="0" />')
L('              </LoadProcedure>')
L('              <LoadProcedure MergeId="4">')
L('                 <LdCtrlWriteRelMem ObjIdx="4" Offset="0" Size="1024" Verify="true" />')
L('              </LoadProcedure>')
L('            </LoadProcedures>')
L('            <Messages />')
L('          </Static>')
L('          <Dynamic>')
L('            <ChannelIndependentBlock>')

L(f'              <ParameterBlock Id="{new_pb_id()}" Name="General settings" Text="General settings">')
L(f'                <ParameterRefRef RefId="{_rid_ep_count}" />')
L(f'                <ParameterRefRef RefId="{_rid_bright}" />')
L(f'                <ParameterRefRef RefId="{_rid_sleep}" />')
L(f'                <ParameterRefRef RefId="{_rid_en_scene}" />')
L(f'                <ComObjectRefRef RefId="{o_gl_sw}" />')
L(f'                <ComObjectRefRef RefId="{o_gl_temp}" />')
L(f'                <ComObjectRefRef RefId="{o_gl_hum}" />')
L(f'                <ComObjectRefRef RefId="{o_gl_date}" />')
L(f'                <ComObjectRefRef RefId="{o_gl_time}" />')
L('              </ParameterBlock>')

for cfg in endpoints_logic:
    ep_n = cfg['ep']
    if ep_n == 1:
        L(f'              <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} Setting">')
        L(f'                <ParameterRefRef RefId="{cfg["rid_name"]}" />')
        L(f'                <ParameterRefRef RefId="{cfg["rid_func"]}" />')
    else:
        L(f'              <choose ParamRefId="{_rid_ep_count}">')
        L(f'                <when test=">={ep_n}">')
        L(f'                  <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} Setting">')
        L(f'                    <ParameterRefRef RefId="{cfg["rid_name"]}" />')
        L(f'                    <ParameterRefRef RefId="{cfg["rid_func"]}" />')

    L(f'                    <choose ParamRefId="{cfg["rid_func"]}">')
    
    L('                      <when test="1">') # Switch
    for orid in cfg["sw"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L(f'                        <ParameterRefRef RefId="{cfg["sw"]["rid_mode"]}" />')
    L(f'                        <choose ParamRefId="{cfg["sw"]["rid_mode"]}">')
    L('                          <when test="1">') # Toggle
    L(f'                            <ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" />')
    L('                          </when>')
    L('                          <when test="2">') # Auto On/Off
    L(f'                            <ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" />')
    L(f'                            <ParameterRefRef RefId="{cfg["sw"]["rid_autotype"]}" />')
    L(f'                            <ParameterRefRef RefId="{cfg["sw"]["rid_time"]}" />')
    L('                          </when>')
    L('                        </choose>')
    L(f'                        <ParameterRefRef RefId="{cfg["sw"]["rid_icon"]}" />')
    L('                      </when>')
    
    L('                      <when test="2">') # CCT
    L(f'                        <ParameterRefRef RefId="{cfg["cct"]["rid_icon"]}" />')
    for orid in cfg["cct"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L('                      </when>')

    L('                      <when test="3">') # Dimming
    for orid in cfg["dim"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L(f'                        <ParameterRefRef RefId="{cfg["dim"]["rid_icon"]}" />')
    L('                      </when>')

    L('                      <when test="4">') # Curtain
    L(f'                        <ParameterRefRef RefId="{cfg["cu"]["rid_time"]}" />')
    L(f'                        <ParameterRefRef RefId="{cfg["cu"]["rid_icon"]}" />')
    for orid in cfg["cu"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L('                      </when>')
    
    L('                      <when test="5">') # Fan
    for orid in cfg["fan"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L('                      </when>')
    
    L('                      <when test="6">') # AC
    for orid in cfg["ac"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L('                      </when>')

    L('                      <when test="7">') # Thermostat
    for orid in cfg["th"]["orids"]: L(f'                        <ComObjectRefRef RefId="{orid}" />')
    L('                      </when>')

    L('                    </choose>')
    L('                  </ParameterBlock>')
    
    if ep_n > 1:
        L('                </when>')
        L('              </choose>')

# SCENE SETTINGS
L(f'              <choose ParamRefId="{_rid_en_scene}">')
L('                <when test="1">')
L(f'                  <ParameterBlock Id="{new_pb_id()}" Name="Scene settings" Text="Scene settings">')
L(f'                    <ParameterRefRef RefId="{_rid_sc_count}" />')

for sc, rid_n, rid_i, rid_num in scene_defs:
    if sc == 1:
        L(f'                    <ParameterSeparator Id="{new_pb_id()}" Text="  Scene {sc}" UIHint="Headline" />')
        L(f'                    <ParameterRefRef RefId="{rid_n}" />')
        L(f'                    <ParameterRefRef RefId="{rid_i}" />')
        L(f'                    <ParameterRefRef RefId="{rid_num}" />')
    else:
        L(f'                    <choose ParamRefId="{_rid_sc_count}">')
        L(f'                      <when test=">={sc}">')
        L(f'                        <ParameterSeparator Id="{new_pb_id()}" Text="  Scene {sc}" UIHint="Headline" />')
        L(f'                        <ParameterRefRef RefId="{rid_n}" />')
        L(f'                        <ParameterRefRef RefId="{rid_i}" />')
        L(f'                        <ParameterRefRef RefId="{rid_num}" />')
        L(f'                      </when>')
        L(f'                    </choose>')

L('                  </ParameterBlock>')
L('                </when>')
L('              </choose>')

L('            </ChannelIndependentBlock>')
L('          </Dynamic>')

L('        </ApplicationProgram>')
L('      </ApplicationPrograms>')
L('    </Manufacturer>')
L('  </ManufacturerData>')
L('</KNX>')

output_path = r"d:\Project\KNX\Kaenx.Creator.Binaries\POC_Kaenx_Creator\Output_File\KNOB\knob_device.xml"
with open(output_path, "w", encoding="utf-8") as f:
    f.write("\n".join(lines) + "\n")

print("Generated knob_device.xml with highly refined Switch/Dimming logic")
