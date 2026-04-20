# Generator knob_V16
# Changes from v15:
# 1. Removed "Scene control" from Endpoint Function enum
# 2. Dynamic Endpoint Count: max 5 when Scene enabled, max 6 when disabled

MFR = "M-0085"
APP = "M-0085_A-2026-03-0014"
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
def add_param_basic(internal_name, pt_name, display_text, default_val, obj_size_bytes=1, suffix=None):
    global mem_offset
    pid, rid = new_p_id()
    suffix_attr = f' SuffixText="{suffix}"' if suffix else ""
    parameters.append(f'<Parameter Id="{pid}" Name="{internal_name}" ParameterType="{ptid(pt_name)}" Text="{display_text}" Value="{default_val}"{suffix_attr}><Memory CodeSegment="{RS}" Offset="{mem_offset}" BitOffset="0" /></Parameter>')
    mem_offset += obj_size_bytes
    parameter_refs.append(f'<ParameterRef Id="{rid}" RefId="{pid}" />')
    return pid, rid

def create_obj_struct(internal_name, func_text, obj_size, dp_type, ui_text, is_status=False, p_read="Disabled", p_write="Enabled", p_comm="Enabled", p_trans="Disabled", p_update="Disabled"):
    if is_status:
        p_read = "Enabled"; p_write = "Disabled"; p_trans = "Enabled"; p_update = "Enabled"
    return {
        "name": internal_name, "func": func_text, "size": obj_size, "dpt": dp_type, "ui": ui_text,
        "is_status": is_status, "read": p_read, "write": p_write, "comm": p_comm, "trans": p_trans, "update": p_update
    }

# ParameterTypes
# Two endpoint count types: max 5 (with scene) and max 6 (without scene)
add_pt_enum("EndpointCount5", "Endpoint Count (Scene ON)", {i: f"{i} Endpoints" if i > 1 else "1 Endpoint" for i in range(1, 6)})
add_pt_enum("EndpointCount6", "Endpoint Count (Scene OFF)", {i: f"{i} Endpoints" if i > 1 else "1 Endpoint" for i in range(1, 7)})
add_pt_enum("SceneCount", "Scene Count", {i: f"{i} Scenes" if i > 1 else "1 Scene" for i in range(1, 17)})
add_pt_number("Percent", "Percent", 0, 100, 8)
add_pt_number("SleepTime", "Sleep Time", 10, 3600, 16)
add_pt_enum("YesNo", "Yes/No", {0: "No", 1: "Yes"}, 8)
# Removed "Scene control" (value 8) from endpoint functions
add_pt_enum("EndpointFunction", "Endpoint Function", {0: "Disabled", 1: "Switch", 2: "CCT", 3: "Dimmer", 4: "Curtain", 5: "Fan", 6: "Air condition", 7: "Thermostat"})
add_pt_enum("SceneIcon", "Scene Icon", {i: f"Icon {i}" for i in range(1, 37)})
add_pt_enum("LightIcon", "Light Icon", {i: f"Icon {i}" for i in range(1, 21)})
add_pt_enum("CurtainIcon", "Curtain Icon", {i: f"Icon {i}" for i in range(1, 11)})
add_pt_text("NameText", "Name String", 14)

add_pt_enum("SwitchMode", "Switch Mode", {1: "Toggle", 2: "Auto On/Off", 3: "Momentary"})
add_pt_enum("StartupBehaviour", "Startup Behaviour", {0: "Restore Last Value", 1: "Set OFF", 2: "Set ON"})
add_pt_enum("AutoModeType", "Auto Mode Type", {0: "Auto OFF", 1: "Auto ON"})
add_pt_number("Time32", "Time Value", 1, 10800, 32)
add_pt_enum("AcStep", "Setpoint step", {0: "0.5 °C", 1: "1 °C"})
add_pt_enum("SceneNumber", "Scene Number", {i: f"Scene No. {i}" for i in range(1, 65)})
add_pt_float("Temperature", "Temperature Float", -20, 60)
add_pt_enum("Visible", "Show on display", {0: "No", 1: "Yes"}, 8)
add_pt_number("Byte255", "Byte Value", 0, 255, 8)

# Global Params - two endpoint count params (one for scene ON, one for scene OFF)
_rid_en_scene = add_param_basic("Gen_EnableScene", "YesNo", "Enable Scene", "0", 1)[1]
_rid_ep_count5 = add_param_basic("Gen_EpCount5", "EndpointCount5", "Endpoint Count", "1", 1)[1]
_rid_ep_count6 = add_param_basic("Gen_EpCount6", "EndpointCount6", "Endpoint Count", "1", 1)[1]
_rid_bright = add_param_basic("Gen_Brightness", "Percent", "Screen Brightness", "80", 1, suffix="%")[1]
_rid_led_bright = add_param_basic("Gen_LedBrightness", "Percent", "Led Brightness", "80", 1, suffix="%")[1]
_rid_sleep = add_param_basic("Gen_SleepTime", "SleepTime", "Turn Off Screen After", "300", 2, suffix="s")[1]
_rid_sc_count = add_param_basic("Gen_ScCount", "SceneCount", "Scene Count", "1", 1)[1]

global_objs = [
    create_obj_struct("Global_SysDate", "Date", "3 Bytes", "DPST-11-1", "System Date"),
    create_obj_struct("Global_SysTime", "Time", "3 Bytes", "DPST-10-1", "System Time"),
    create_obj_struct("Temperature", "Temperature Sensor", "2 Bytes", "DPST-9-1", "Temperature Sensor", is_status=True),
    create_obj_struct("Humidity", "Humidity Sensor", "2 Bytes", "DPST-9-7", "Humidity Sensor", is_status=True),
]

scene_defs = []
for sc in range(1, 17):
    _, rid_n = add_param_basic(f"Sc{sc}_Name", "NameText", "Name String", "", 14)
    _, rid_i = add_param_basic(f"Sc{sc}_Icon", "SceneIcon", "Icon", "1", 1)
    _, rid_num = add_param_basic(f"Sc{sc}_Number", "SceneNumber", "Scene Number", f"{sc}", 1)
    _, rid_vis = add_param_basic(f"Sc{sc}_Visible", "Visible", "Show on display", "1", 1)
    scene_defs.append((sc, rid_n, rid_i, rid_num, rid_vis))

endpoints_logic = []
for ep in range(1, 7):
    ep_ui = f"Endpoint {ep} - ..."
    _, rid_name = add_param_basic(f"Btn{ep}_Name", "NameText", "Name String", "", 14)
    _, rid_func = add_param_basic(f"Btn{ep}_Mode", "EndpointFunction", "Function of Endpoint", "1", 1)
    
    # 1. Switch
    _, rid_sw_mode = add_param_basic(f"Btn{ep}_SwMode", "SwitchMode", "Switch mode", "1", 1)
    _, rid_sw_startup = add_param_basic(f"Btn{ep}_SwStartup", "StartupBehaviour", "Behavior on Bus Voltage Recovery", "0", 1)
    _, rid_sw_autotype = add_param_basic(f"Btn{ep}_SwAutoType", "AutoModeType", "Auto Mode Type", "0", 1)
    _, rid_sw_time = add_param_basic(f"Btn{ep}_SwTime", "Time32", "Time Value", "60", 4, suffix="s")
    _, rid_sw_icon = add_param_basic(f"Btn{ep}_SwIcon", "LightIcon", "Icon", "1", 1)
    _, rid_visible = add_param_basic(f"Btn{ep}_Visible", "Visible", "Show on display", "1", 1)
    sw_objs = [
        create_obj_struct(f"Btn{ep}_Switch", "Switch", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_Stat", "Switch Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True)
    ]

    # 2. CCT
    _, rid_cct_icon = add_param_basic(f"Btn{ep}_CctIcon", "LightIcon", "Icon", "1", 1)
    cct_objs = [
        create_obj_struct(f"Btn{ep}_CctPow", "Switch", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_CctBri", "Brightness", "1 Byte", "DPST-5-1", ep_ui),
        create_obj_struct(f"Btn{ep}_CctCol", "Color Temp", "2 Bytes", "DPST-7-600", ep_ui),
        create_obj_struct(f"Btn{ep}_CctPowS", "Switch Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CctBriS", "Brightness Status", "1 Byte", "DPST-5-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CctColS", "Color Temp Status", "2 Bytes", "DPST-7-600", ep_ui, is_status=True)
    ]
    
    # 3. Dimming
    _, rid_dim_icon = add_param_basic(f"Btn{ep}_DimIcon", "LightIcon", "Icon", "1", 1)
    dim_objs = [
        create_obj_struct(f"Btn{ep}_DimSw", "Switch", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_DimBri", "Brightness", "1 Byte", "DPST-5-1", ep_ui),
        create_obj_struct(f"Btn{ep}_DimStat", "Switch Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_DimBriS", "Brightness Status", "1 Byte", "DPST-5-1", ep_ui, is_status=True)
    ]

    # 4. Curtain
    _, rid_cu_icon = add_param_basic(f"Btn{ep}_CuIcon", "CurtainIcon", "Icon", "1", 1)
    cu_objs = [
        create_obj_struct(f"Btn{ep}_CuUpDn", "Up/Down", "1 Bit", "DPST-1-8", ep_ui),
        create_obj_struct(f"Btn{ep}_CuStop", "Stop", "1 Bit", "DPST-1-7", ep_ui),
        create_obj_struct(f"Btn{ep}_CuPos", "Position", "1 Byte", "DPST-5-1", ep_ui),
        create_obj_struct(f"Btn{ep}_CuUpDnS", "Up/Down Status", "1 Bit", "DPST-1-11", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CuPosS", "Position Status", "1 Byte", "DPST-5-1", ep_ui, is_status=True)
    ]
    
    # 5. Fan
    fan_objs = [
        create_obj_struct(f"Btn{ep}_FanPow", "Power", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_FanSpd", "Fan Speed", "1 Byte", "DPST-5-10", ep_ui),
        create_obj_struct(f"Btn{ep}_FanPowS", "Power Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_FanSpdS", "Fan Speed Status", "1 Byte", "DPST-5-10", ep_ui, is_status=True)
    ]
    
    # 6. AC
    _, rid_ac_step = add_param_basic(f"Btn{ep}_AcStep", "AcStep", "Setpoint step", "0", 1)
    ac_objs = [
        create_obj_struct(f"Btn{ep}_AcPow", "Power", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_AcTar", "Target Temp", "2 Bytes", "DPST-9-1", ep_ui),
        create_obj_struct(f"Btn{ep}_AcMod", "Mode", "1 Byte", "DPST-20-105", ep_ui),
        create_obj_struct(f"Btn{ep}_AcFan", "Fan Speed", "1 Byte", "DPST-5-10", ep_ui),
        create_obj_struct(f"Btn{ep}_AcSwi", "Swing", "1 Byte", "DPST-5-1", ep_ui),
        create_obj_struct(f"Btn{ep}_AcPowS", "Power Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcTarS", "Target Temp Status", "2 Bytes", "DPST-9-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcModS", "Mode Status", "1 Byte", "DPST-20-105", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcFanS", "Fan Speed Status", "1 Byte", "DPST-5-10", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcSwiS", "Swing Status", "1 Byte", "DPST-5-1", ep_ui, is_status=True)
    ]
    
    # 7. Thermostat
    th_objs = [
        create_obj_struct(f"Btn{ep}_ThPow", "Power", "1 Bit", "DPST-1-1", ep_ui),
        create_obj_struct(f"Btn{ep}_ThTar", "Set Point", "2 Bytes", "DPST-9-1", ep_ui),
        create_obj_struct(f"Btn{ep}_ThPowS", "Power Status", "1 Bit", "DPST-1-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_ThTarS", "Set Point Status", "2 Bytes", "DPST-9-1", ep_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_ThRmT", "Temperature", "2 Bytes", "DPST-9-1", ep_ui, is_status=True)
    ]

    endpoints_logic.append({
        "ep": ep, "rid_name": rid_name, "rid_func": rid_func, "rid_visible": rid_visible,
        "sw": {"rid_mode": rid_sw_mode, "rid_startup": rid_sw_startup, "rid_autotype": rid_sw_autotype, "rid_time": rid_sw_time, "rid_icon": rid_sw_icon, "objs": sw_objs},
        "cct": {"rid_icon": rid_cct_icon, "objs": cct_objs},
        "dim": {"rid_icon": rid_dim_icon, "objs": dim_objs},
        "cu": {"rid_icon": rid_cu_icon, "objs": cu_objs},
        "fan": {"objs": fan_objs},
        "ac": {"rid_step": rid_ac_step, "objs": ac_objs},
        "th": {"objs": th_objs},
    })

# Sentinel byte 0xDD at offset 511 (last byte) for ETS download detection
mem_offset = 511
_pid_sentinel, _rid_sentinel = new_p_id()
parameters.append(f'<Parameter Id="{_pid_sentinel}" Name="ETS_Sentinel" ParameterType="{ptid("Byte255")}" Text="ETS Sentinel" Value="221"><Memory CodeSegment="{RS}" Offset="511" BitOffset="0" /></Parameter>')
parameter_refs.append(f'<ParameterRef Id="{_rid_sentinel}" RefId="{_pid_sentinel}" />')

final_com_objects = []
final_com_object_refs = []

def register_objects(obj_list):
    rids = []
    for o in obj_list:
        oid, orid = new_o_id()
        num = oid.split('-')[-1]
        final_com_objects.append(f'<ComObject Id="{oid}" Name="{o["name"]}" Text="{o["ui"]}" Number="{num}" FunctionText="{o["func"]}" ObjectSize="{o["size"]}" DatapointType="{o["dpt"]}" ReadFlag="{o["read"]}" WriteFlag="{o["write"]}" CommunicationFlag="{o["comm"]}" TransmitFlag="{o["trans"]}" UpdateFlag="{o["update"]}" />')
        final_com_object_refs.append(f'<ComObjectRef Id="{orid}" RefId="{oid}" />')
        rids.append(orid)
    return rids

global_orids = register_objects(global_objs)
for cfg in endpoints_logic:
    cfg["sw"]["orids"] = register_objects(cfg["sw"]["objs"])
    cfg["cct"]["orids"] = register_objects(cfg["cct"]["objs"])
    cfg["dim"]["orids"] = register_objects(cfg["dim"]["objs"])
    cfg["cu"]["orids"] = register_objects(cfg["cu"]["objs"])
    cfg["fan"]["orids"] = register_objects(cfg["fan"]["objs"])
    cfg["ac"]["orids"] = register_objects(cfg["ac"]["objs"])
    cfg["th"]["orids"] = register_objects(cfg["th"]["objs"])


def render_endpoint_block(cfg, indent):
    """Render the inner content of an endpoint block (function selector + choose)"""
    ep_n = cfg['ep']
    res = []
    I = " " * indent
    res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_name"]}" />')
    if ep_n == 1:
        res.append(f'{I}<ParameterSeparator Id="{new_pb_id()}" Text="Fixed Function: Switch" />')
        for orid in cfg["sw"]["orids"]: res.append(f'{I}<ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["sw"]["rid_mode"]}" />')
        res.append(f'{I}<choose ParamRefId="{cfg["sw"]["rid_mode"]}">')
        res.append(f'{I}  <when test="1"><ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" /></when>')
        res.append(f'{I}  <when test="2">')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_autotype"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_time"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}</choose>')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["sw"]["rid_icon"]}" />')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_visible"]}" />')
    else:
        res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_func"]}" />')
        res.append(f'{I}<choose ParamRefId="{cfg["rid_func"]}">')
        # Switch
        res.append(f'{I}  <when test="1">')
        for orid in cfg["sw"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_mode"]}" />')
        res.append(f'{I}    <choose ParamRefId="{cfg["sw"]["rid_mode"]}">')
        res.append(f'{I}      <when test="1"><ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" /></when>')
        res.append(f'{I}      <when test="2">')
        res.append(f'{I}        <ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" />')
        res.append(f'{I}        <ParameterRefRef RefId="{cfg["sw"]["rid_autotype"]}" />')
        res.append(f'{I}        <ParameterRefRef RefId="{cfg["sw"]["rid_time"]}" />')
        res.append(f'{I}      </when>')
        res.append(f'{I}    </choose>')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_icon"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # CCT
        res.append(f'{I}  <when test="2">')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["cct"]["rid_icon"]}" />')
        for orid in cfg["cct"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # Dimming
        res.append(f'{I}  <when test="3">')
        for orid in cfg["dim"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["dim"]["rid_icon"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # Curtain
        res.append(f'{I}  <when test="4">')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["cu"]["rid_icon"]}" />')
        for orid in cfg["cu"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # Fan
        res.append(f'{I}  <when test="5">')
        for orid in cfg["fan"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # AC
        res.append(f'{I}  <when test="6">')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_step"]}" />')
        for orid in cfg["ac"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        # Thermostat
        res.append(f'{I}  <when test="7">')
        for orid in cfg["th"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}</choose>')
    return res

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
L(f'            <Code><RelativeSegment Id="{RS}" Name="Parameters" Size="512" LoadStateMachine="4" Offset="0" /></Code>')
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
for c in final_com_objects: L("              " + c)
L('            </ComObjectTable>')
L('            <ComObjectRefs>')
for cr in final_com_object_refs: L("              " + cr)
L('            </ComObjectRefs>')
L('            <AddressTable MaxEntries="65535" />')
L('            <AssociationTable MaxEntries="65535" />')
L('            <LoadProcedures>')
L('              <LoadProcedure MergeId="2"><LdCtrlRelSegment AppliesTo="full" LsmIdx="4" Size="512" Mode="0" Fill="0" /></LoadProcedure>')
L('              <LoadProcedure MergeId="4"><LdCtrlWriteRelMem ObjIdx="4" Offset="0" Size="512" Verify="true" /></LoadProcedure>')
L('            </LoadProcedures>')
L('          </Static>')
L('          <Dynamic>')
L('            <ChannelIndependentBlock>')

# General Settings block
L(f'              <ParameterBlock Id="{new_pb_id()}" Name="General settings" Text="General settings">')
L(f'                <ParameterRefRef RefId="{_rid_en_scene}" />')
# Dynamic endpoint count: show max 5 when scene ON, max 6 when scene OFF
L(f'                <choose ParamRefId="{_rid_en_scene}">')
L(f'                  <when test="0"><ParameterRefRef RefId="{_rid_ep_count6}" /></when>')
L(f'                  <when test="1"><ParameterRefRef RefId="{_rid_ep_count5}" /></when>')
L(f'                </choose>')
L(f'                <ParameterRefRef RefId="{_rid_bright}" />')
L(f'                <ParameterRefRef RefId="{_rid_led_bright}" />')
L(f'                <ParameterRefRef RefId="{_rid_sleep}" />')
for orid in global_orids: L(f'                <ComObjectRefRef RefId="{orid}" />')
L('              </ParameterBlock>')

# Endpoint 1 - always visible, fixed Switch
cfg1 = endpoints_logic[0]
L(f'              <ParameterBlock Id="{new_pb_id()}" Name="Endpoint 1" Text="Endpoint 1 Setting">')
for line in render_endpoint_block(cfg1, 16): L(line)
L('              </ParameterBlock>')

# Endpoints 2-5: visible when EITHER ep_count5 >= N OR ep_count6 >= N
for cfg in endpoints_logic[1:5]:
    ep_n = cfg['ep']
    L(f'              <choose ParamRefId="{_rid_en_scene}">')
    # Scene OFF → use ep_count6
    L(f'                <when test="0">')
    L(f'                  <choose ParamRefId="{_rid_ep_count6}">')
    L(f'                    <when test=">={ep_n}">')
    L(f'                      <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} Setting">')
    for line in render_endpoint_block(cfg, 24): L(line)
    L(f'                      </ParameterBlock>')
    L(f'                    </when>')
    L(f'                  </choose>')
    L(f'                </when>')
    # Scene ON → use ep_count5
    L(f'                <when test="1">')
    L(f'                  <choose ParamRefId="{_rid_ep_count5}">')
    L(f'                    <when test=">={ep_n}">')
    L(f'                      <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} Setting">')
    for line in render_endpoint_block(cfg, 24): L(line)
    L(f'                      </ParameterBlock>')
    L(f'                    </when>')
    L(f'                  </choose>')
    L(f'                </when>')
    L(f'              </choose>')

# Endpoint 6: ONLY visible when scene is OFF and ep_count6 >= 6
cfg6 = endpoints_logic[5]
L(f'              <choose ParamRefId="{_rid_en_scene}">')
L(f'                <when test="0">')
L(f'                  <choose ParamRefId="{_rid_ep_count6}">')
L(f'                    <when test=">=6">')
L(f'                      <ParameterBlock Id="{new_pb_id()}" Name="Endpoint 6" Text="Endpoint 6 Setting">')
for line in render_endpoint_block(cfg6, 24): L(line)
L(f'                      </ParameterBlock>')
L(f'                    </when>')
L(f'                  </choose>')
L(f'                </when>')
L(f'              </choose>')

# Scene settings block
L(f'              <choose ParamRefId="{_rid_en_scene}">')
L('                <when test="1">')
L(f'                  <ParameterBlock Id="{new_pb_id()}" Name="Scene settings" Text="Scene settings">')
L(f'                    <ParameterRefRef RefId="{_rid_sc_count}" />')
for sc, rid_n, rid_i, rid_num, rid_vis in scene_defs:
    L(f'                    <choose ParamRefId="{_rid_sc_count}">')
    L(f'                      <when test=">={sc}">')
    if sc > 1:
        L(f'                        <ParameterSeparator Id="{new_pb_id()}" />')
    L(f'                        <ParameterSeparator Id="{new_pb_id()}" Text="  Scene {sc}" UIHint="Headline" />')
    L(f'                        <ParameterRefRef RefId="{rid_n}" />')
    L(f'                        <ParameterRefRef RefId="{rid_i}" />')
    L(f'                        <ParameterRefRef RefId="{rid_num}" />')
    L(f'                        <ParameterRefRef RefId="{rid_vis}" />')
    L('                      </when>')
    L('                    </choose>')
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
print(f"Generated knob_device.xml v16: Removed Scene control func, dynamic EP count (5/6)")
print(f"Total memory used: {mem_offset} bytes")
