# Generator knob_V22
# Date: 2026-04-23
# Changes from v21: Heater temp options removed, AC swing and AC scene options added.
# Based on v19 with requested additions.
# Changes from v18:
# 1. Naming: Title Case throughout, "temp" -> "temperature"
# 2. AC: KNX-standard names (Setpoint, Mode, Fan speed, Swing)


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

def add_pt_checkbox(id_name, display_name):
    """1-bit checkbox: renders as square tick box in ETS (UIHint=CheckBox)"""
    parameter_types.append(f'<ParameterType Id="{ptid(id_name)}" Name="{display_name}"><TypeNumber SizeInBit="1" Type="unsignedInt" minInclusive="0" maxInclusive="1" UIHint="CheckBox" /></ParameterType>')

mem_offset = 0
def add_param_basic(internal_name, pt_name, display_text, default_val, obj_size_bytes=1, suffix=None):
    global mem_offset
    pid, rid = new_p_id()
    suffix_attr = f' SuffixText="{suffix}"' if suffix else ""
    parameters.append(f'<Parameter Id="{pid}" Name="{internal_name}" ParameterType="{ptid(pt_name)}" Text="{display_text}" Value="{default_val}"{suffix_attr}><Memory CodeSegment="{RS}" Offset="{mem_offset}" BitOffset="0" /></Parameter>')
    mem_offset += obj_size_bytes
    parameter_refs.append(f'<ParameterRef Id="{rid}" RefId="{pid}" />')
    return pid, rid

# Bit-level parameter support (packs up to 8 bits per byte)
bit_cursor_byte = -1
bit_cursor_bit = 8  # 8 = "no active bit byte, flush on next call"

def add_param_bit(internal_name, pt_name, display_text, default_val):
    """Allocate a 1-bit parameter; packs up to 8 bits into 1 byte."""
    global mem_offset, bit_cursor_byte, bit_cursor_bit
    pid, rid = new_p_id()
    if bit_cursor_bit >= 8:  # Need a new byte
        bit_cursor_byte = mem_offset
        bit_cursor_bit = 0
        mem_offset += 1
    parameters.append(f'<Parameter Id="{pid}" Name="{internal_name}" ParameterType="{ptid(pt_name)}" Text="{display_text}" Value="{default_val}"><Memory CodeSegment="{RS}" Offset="{bit_cursor_byte}" BitOffset="{bit_cursor_bit}" /></Parameter>')
    bit_cursor_bit += 1
    parameter_refs.append(f'<ParameterRef Id="{rid}" RefId="{pid}" />')
    return pid, rid

def flush_bits():
    """Finalize current bit-byte; next add_param_bit will start a fresh byte."""
    global bit_cursor_bit
    bit_cursor_bit = 8

def create_obj_struct(internal_name, func_text, obj_size, dp_type, ui_text, is_status=False, p_read="Disabled", p_write="Enabled", p_comm="Enabled", p_trans="Enabled", p_update="Disabled"):
    if is_status:
        p_read = "Enabled"; p_write = "Disabled"; p_trans = "Enabled"; p_update = "Enabled"
    return {
        "name": internal_name, "func": func_text, "size": obj_size, "dpt": dp_type, "ui": ui_text,
        "is_status": is_status, "read": p_read, "write": p_write, "comm": p_comm, "trans": p_trans, "update": p_update
    }

# ParameterTypes
add_pt_enum("EndpointCount5", "Endpoint count", {i: f"{i} Endpoints" if i > 1 else "1 Endpoint" for i in range(1, 6)})
add_pt_enum("EndpointCount6", "Endpoint count", {i: f"{i} Endpoints" if i > 1 else "1 Endpoint" for i in range(1, 7)})
add_pt_enum("SceneCount", "Scene count", {i: f"{i} Scenes" if i > 1 else "1 Scene" for i in range(1, 17)})
add_pt_number("Percent", "Percent", 0, 100, 8)
add_pt_number("SleepTime", "Sleep time", 10, 3600, 16)
# Checkbox ParameterType (real 1-bit square tick box)
add_pt_checkbox("Checkbox", "Checkbox")
add_pt_enum("EndpointFunction", "Endpoint function", {0: "Disabled", 1: "Switch", 2: "CCT", 3: "Dimmer", 4: "Curtain", 5: "Fan", 6: "Air conditioner", 7: "Heater", 8: "Scene control"})
add_pt_enum("SceneIcon", "Scene icon", {i: f"Icon {i}" for i in range(1, 37)})
add_pt_enum("LightIcon", "Light icon", {i: f"Icon {i}" for i in range(1, 21)})
add_pt_enum("CurtainIcon", "Curtain icon", {i: f"Icon {i}" for i in range(1, 3)})
add_pt_text("NameText", "Name", 10) # Optimized: 14 -> 10

add_pt_enum("SwitchMode", "Switch mode", {1: "Toggle", 2: "Auto On/Off", 3: "Momentary"})
add_pt_enum("StartupBehaviour", "Startup behavior", {0: "Restore Last Value", 1: "Set OFF", 2: "Set ON"})
add_pt_enum("AutoModeType", "Auto mode type", {0: "Auto OFF", 1: "Auto ON"})
add_pt_number("Time16", "Time value", 1, 65535, 16) # Optimized: 32 -> 16
add_pt_enum("AcStep", "Setpoint step", {0: "0.5 °C", 1: "1 °C"})
add_pt_enum("AcFanType", "Fan speed type (AC)", {0: "Steps (Low->Middle->High)", 1: "Scaling (%)"})
add_pt_enum("FanOnlyType", "Fan speed type (Fan)", {0: "Steps (0->4)", 1: "Scaling (0->100%)"})
add_pt_enum("AcFanOptions", "Fan speed", {0: "Auto", 1: "Low", 2: "Mid", 3: "High"})
add_pt_enum("AcSwingOptions", "Swing positions", {0: "Auto", 1: "P0", 2: "P1", 3: "P2", 4: "P3", 5: "P4", 6: "Stop"})
add_pt_enum("AcTempMin", "Min temperature", {i: f"{i} °C" for i in range(16, 25)})
add_pt_enum("AcTempMax", "Max temperature", {i: f"{i} °C" for i in range(24, 33)})
add_pt_enum("SceneNumber", "Scene number", {i: f"Scene No. {i}" for i in range(1, 65)})
add_pt_float("Temperature", "Temperature", -20, 60)
add_pt_enum("Visible", "Show on display", {0: "No", 1: "Yes"}, 8)
add_pt_number("Byte255", "Byte value", 0, 255, 8)
add_pt_number("TravelTime", "Travel time", 1, 300, 16)

# Global Params
_rid_en_scene = add_param_basic("Gen_EnableScene", "Visible", "Enable scene", "0", 1)[1]
_pid_ep_count6, _rid_ep_count6 = add_param_basic("Gen_EpCount6", "EndpointCount6", "Endpoint count", "1", 1)
# Create a second Parameter pointing to the SAME memory location (offset 1)
# This avoids the "dual ref to single param" which crashes Kaenx-Creator.
_pid_ep_count5, _rid_ep_count5 = new_p_id()
parameters.append(f'<Parameter Id="{_pid_ep_count5}" Name="Gen_EpCount5" ParameterType="{ptid("EndpointCount5")}" Text="Endpoint count" Value="1"><Memory CodeSegment="{RS}" Offset="1" BitOffset="0" /></Parameter>')
parameter_refs.append(f'<ParameterRef Id="{_rid_ep_count5}" RefId="{_pid_ep_count5}" />')
_rid_bright = add_param_basic("Gen_Brightness", "Percent", "Screen brightness", "80", 1, suffix="%")[1]
_rid_led_bright = add_param_basic("Gen_LedBrightness", "Percent", "Led brightness", "80", 1, suffix="%")[1]
_rid_sleep = add_param_basic("Gen_SleepTime", "SleepTime", "Turn off screen after", "300", 2, suffix="s")[1]
_rid_sc_count = add_param_basic("Gen_ScCount", "SceneCount", "Scene count", "1", 1)[1]

global_objs = [
    create_obj_struct("Global_SysDate", "Date", "3 Bytes", "DPST-11-1", "System date"),
    create_obj_struct("Global_SysTime", "Time", "3 Bytes", "DPST-10-1", "System time"),
    create_obj_struct("Temperature", "Temperature sensor", "2 Bytes", "DPST-9-1", "Temperature sensor", is_status=True),
    create_obj_struct("Humidity", "Humidity sensor", "2 Bytes", "DPST-9-7", "Humidity sensor", is_status=True),
]

global_scene_objs = [
    create_obj_struct("Global_Scene", "Scene control", "1 Byte", "DPST-18-1", "Scene")
]

scene_defs = []
for sc in range(1, 17):
    _, rid_n = add_param_basic(f"Sc{sc}_Name", "NameText", "Name", "", 14)
    _, rid_i = add_param_basic(f"Sc{sc}_Icon", "SceneIcon", "Icon", "1", 1)
    _, rid_num = add_param_basic(f"Sc{sc}_Number", "SceneNumber", "Scene number", f"{sc}", 1)
    _, rid_vis = add_param_basic(f"Sc{sc}_Visible", "Visible", "Show on display", "1", 1)
    scene_defs.append((sc, rid_n, rid_i, rid_num, rid_vis))

endpoints_logic = []
for ep in range(1, 7):
    

    # === BYTE PARAMS ===
    _, rid_name = add_param_basic(f"Btn{ep}_Name", "NameText", "Name", "", 10) # 14 -> 10
    _, rid_func = add_param_basic(f"Btn{ep}_Mode", "EndpointFunction", "Function of endpoint", "1", 1)
    # Switch
    _, rid_sw_mode = add_param_basic(f"Btn{ep}_SwMode", "SwitchMode", "  Switch mode", "1", 1)
    _, rid_sw_startup = add_param_basic(f"Btn{ep}_SwStartup", "StartupBehaviour", "  Behavior on bus voltage recovery", "0", 1)
    _, rid_sw_autotype = add_param_basic(f"Btn{ep}_SwAutoType", "AutoModeType", "  Auto mode type", "0", 1)
    _, rid_sw_time = add_param_basic(f"Btn{ep}_SwTime", "Time16", "  Time value", "60", 2, suffix="s") # 4 -> 2
    _, rid_sw_icon = add_param_basic(f"Btn{ep}_SwIcon", "LightIcon", "  Icon", "1", 1)
    # Icons
    _, rid_cct_icon = add_param_basic(f"Btn{ep}_CctIcon", "LightIcon", "  Icon", "1", 1)
    _, rid_dim_icon = add_param_basic(f"Btn{ep}_DimIcon", "LightIcon", "  Icon", "1", 1)
    # Curtain
    _, rid_cu_icon  = add_param_basic(f"Btn{ep}_CuIcon", "CurtainIcon", "  Icon", "1", 1)
    _, rid_cu_time  = add_param_basic(f"Btn{ep}_CuTime", "TravelTime", "  Travel time", "20", 2, suffix="s")
    # Fan byte params
    _, rid_fan_type = add_param_basic(f"Btn{ep}_FanType", "FanOnlyType", "  Fan speed type", "0", 1)
    # AC byte params
    _, rid_ac_step     = add_param_basic(f"Btn{ep}_AcStep", "AcStep", "  Setpoint step", "0", 1)
    _, rid_ac_min_temp = add_param_basic(f"Btn{ep}_AcMinTemp", "AcTempMin", "  Min temperature", "16", 1) # New
    _, rid_ac_max_temp = add_param_basic(f"Btn{ep}_AcMaxTemp", "AcTempMax", "  Max temperature", "30", 1) # New
    _, rid_ac_fan_type = add_param_basic(f"Btn{ep}_AcFanType", "AcFanType", "  Fan speed type", "0", 1)
    # He byte params

    # === BIT PARAMS — packed in 1 byte (bits 0-6, bit 7 unused) ===
    _, rid_visible    = add_param_bit(f"Btn{ep}_Visible",  "Checkbox", "Show on display",   "1")
    _, rid_ac_en_auto = add_param_bit(f"Btn{ep}_AcEnAuto", "Checkbox", "  Support auto mode", "1")
    _, rid_ac_en_heat = add_param_bit(f"Btn{ep}_AcEnHeat", "Checkbox", "  Support heat mode", "1")
    _, rid_ac_en_cool = add_param_bit(f"Btn{ep}_AcEnCool", "Checkbox", "  Support cool mode", "1")
    _, rid_ac_en_dry  = add_param_bit(f"Btn{ep}_AcEnDry",  "Checkbox", "  Support dry mode",  "1")
    _, rid_ac_en_fan  = add_param_bit(f"Btn{ep}_AcEnFan",  "Checkbox", "  Support fan mode",  "1")
    _, rid_ac_fan_auto= add_param_bit(f"Btn{ep}_AcFanAuto","Checkbox", "  Support fan auto",  "1")
    _, rid_ac_en_swi  = add_param_bit(f"Btn{ep}_AcEnSwi",  "Checkbox", "  Support air swing", "1")
    _, rid_ac_en_scn  = add_param_bit(f"Btn{ep}_AcEnScn",  "Checkbox", "  Support scene",     "0")
    flush_bits()  # Advance to next byte boundary after 7 bits

    # === OBJECTS (no memory allocation) ===
    sw_ui = f"Endpoint {ep} - Switch"
    sw_objs = [
        create_obj_struct(f"Btn{ep}_Switch", "Switch", "1 Bit", "DPST-1-1", sw_ui),
        create_obj_struct(f"Btn{ep}_Stat", "Switch status", "1 Bit", "DPST-1-1", sw_ui, is_status=True)
    ]
    cct_ui = f"Endpoint {ep} - CCT"
    cct_objs = [
        create_obj_struct(f"Btn{ep}_CctPow", "Switch", "1 Bit", "DPST-1-1", cct_ui),
        create_obj_struct(f"Btn{ep}_CctBri", "Brightness", "1 Byte", "DPST-5-1", cct_ui),
        create_obj_struct(f"Btn{ep}_CctCol", "Color temperature", "2 Bytes", "DPST-7-600", cct_ui),
        create_obj_struct(f"Btn{ep}_CctPowS", "Switch status", "1 Bit", "DPST-1-1", cct_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CctBriS", "Brightness status", "1 Byte", "DPST-5-1", cct_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CctColS", "Color temperature status", "2 Bytes", "DPST-7-600", cct_ui, is_status=True)
    ]
    dim_ui = f"Endpoint {ep} - Dimmer"
    dim_objs = [
        create_obj_struct(f"Btn{ep}_DimSw", "Switch", "1 Bit", "DPST-1-1", dim_ui),
        create_obj_struct(f"Btn{ep}_DimBri", "Brightness", "1 Byte", "DPST-5-1", dim_ui),
        create_obj_struct(f"Btn{ep}_DimStat", "Switch status", "1 Bit", "DPST-1-1", dim_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_DimBriS", "Brightness status", "1 Byte", "DPST-5-1", dim_ui, is_status=True)
    ]
    cu_ui = f"Endpoint {ep} - Curtain"
    cu_objs = [
        create_obj_struct(f"Btn{ep}_CuUpDn", "Up/down", "1 Bit", "DPST-1-8", cu_ui),
        create_obj_struct(f"Btn{ep}_CuStop", "Stop", "1 Bit", "DPST-1-7", cu_ui),
        create_obj_struct(f"Btn{ep}_CuPos", "Position", "1 Byte", "DPST-5-1", cu_ui),
        create_obj_struct(f"Btn{ep}_CuUpDnS", "Up/down status", "1 Bit", "DPST-1-11", cu_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_CuPosS", "Position status", "1 Byte", "DPST-5-1", cu_ui, is_status=True)
    ]
    fan_ui = f"Endpoint {ep} - Fan"
    fan_objs = [
        create_obj_struct(f"Btn{ep}_FanPow", "Power", "1 Bit", "DPST-1-1", fan_ui),
        create_obj_struct(f"Btn{ep}_FanSpd", "Fan speed", "1 Byte", "DPST-5-10", fan_ui),
        create_obj_struct(f"Btn{ep}_FanPowS", "Power status", "1 Bit", "DPST-1-1", fan_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_FanSpdS", "Fan speed status", "1 Byte", "DPST-5-10", fan_ui, is_status=True)
    ]
    ac_ui = f"Endpoint {ep} - Air conditioner"
    ac_objs = [
        create_obj_struct(f"Btn{ep}_AcPow", "Power", "1 Bit", "DPST-1-1", ac_ui),
        create_obj_struct(f"Btn{ep}_AcTar", "Setpoint", "2 Bytes", "DPST-9-1", ac_ui),
        create_obj_struct(f"Btn{ep}_AcMod", "Mode", "1 Byte", "DPST-20-105", ac_ui),
        # AC Step 2-stage Fan handling (Scaling or Steps)
        create_obj_struct(f"Btn{ep}_AcFan", "Fan speed", "1 Byte", "DPST-5-10", ac_ui),
        create_obj_struct(f"Btn{ep}_AcSwi", "Air swing", "1 Bit", "DPST-1-1", ac_ui),
        create_obj_struct(f"Btn{ep}_AcVan", "Louver position", "1 Byte", "DPST-5-10", ac_ui),
        # Status
        create_obj_struct(f"Btn{ep}_AcPowS", "Power status", "1 Bit", "DPST-1-1", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcTarS", "Setpoint status", "2 Bytes", "DPST-9-1", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcModS", "Mode status", "1 Byte", "DPST-20-105", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcFanS", "Fan speed status", "1 Byte", "DPST-5-10", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcSwiS", "Air swing status", "1 Bit", "DPST-1-1", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcVanS", "Louver position status", "1 Byte", "DPST-5-10", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcScn", "Scene", "1 Byte", "DPST-18-1", ac_ui)
    ]
    he_ui = f"Endpoint {ep} - Heater"
    he_objs = [
        create_obj_struct(f"Btn{ep}_HePow", "Power", "1 Bit", "DPST-1-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeTar", "Setpoint", "2 Bytes", "DPST-9-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeMode", "Heating mode", "1 Bit", "DPST-1-100", he_ui),
        create_obj_struct(f"Btn{ep}_HePowS", "Power status", "1 Bit", "DPST-1-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeTarS", "Setpoint status", "2 Bytes", "DPST-9-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeModeS", "Heating mode status", "1 Bit", "DPST-1-100", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeRmT", "Room temperature", "2 Bytes", "DPST-9-1", he_ui, is_status=True)
    ]

    
    sc_ui = f"Endpoint {ep} - Scene control"
    sc_objs = [
        create_obj_struct(f"Btn{ep}_ScTrig", "Scene trigger", "1 Byte", "DPST-18-1", sc_ui)
    ]

    endpoints_logic.append({
        "ep": ep, "rid_name": rid_name, "rid_func": rid_func, "rid_visible": rid_visible,
        "sw": {"rid_mode": rid_sw_mode, "rid_startup": rid_sw_startup, "rid_autotype": rid_sw_autotype, "rid_time": rid_sw_time, "rid_icon": rid_sw_icon, "objs": sw_objs},
        "cct": {"rid_icon": rid_cct_icon, "objs": cct_objs},
        "dim": {"rid_icon": rid_dim_icon, "objs": dim_objs},
        "cu": {"rid_icon": rid_cu_icon, "rid_time": rid_cu_time, "objs": cu_objs},
        "fan": {"rid_type": rid_fan_type, "objs": fan_objs},
        "ac": {"rid_step": rid_ac_step, "rid_min": rid_ac_min_temp, "rid_max": rid_ac_max_temp, "rid_en_auto": rid_ac_en_auto, "rid_en_heat": rid_ac_en_heat, "rid_en_cool": rid_ac_en_cool, "rid_en_dry": rid_ac_en_dry, "rid_en_fan": rid_ac_en_fan, "rid_fan_auto": rid_ac_fan_auto, "rid_fan_type": rid_ac_fan_type, "rid_en_swi": rid_ac_en_swi, "rid_en_scn": rid_ac_en_scn, "objs": ac_objs},
        "sc": {"objs": sc_objs},
        "he": {"objs": he_objs},
    })

# Sentinel byte 0xDD at offset 511
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
global_scene_orids = register_objects(global_scene_objs)
for cfg in endpoints_logic:
    cfg["sw"]["orids"] = register_objects(cfg["sw"]["objs"])
    cfg["cct"]["orids"] = register_objects(cfg["cct"]["objs"])
    cfg["dim"]["orids"] = register_objects(cfg["dim"]["objs"])
    cfg["cu"]["orids"] = register_objects(cfg["cu"]["objs"])
    cfg["fan"]["orids"] = register_objects(cfg["fan"]["objs"])
    cfg["ac"]["orids"] = register_objects(cfg["ac"]["objs"])
    cfg["he"]["orids"] = register_objects(cfg["he"]["objs"])
    cfg["sc"]["orids"] = register_objects(cfg["sc"]["objs"])

def render_endpoint_block(cfg, indent):
    ep_n = cfg['ep']
    res = []
    I = " " * indent
    res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_name"]}" />')
    if ep_n == 1:
        for orid in cfg["sw"]["orids"]: res.append(f'{I}<ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["sw"]["rid_mode"]}" />')
        res.append(f'{I}<choose ParamRefId="{cfg["sw"]["rid_mode"]}">')
        res.append(f'{I}  <when test="1"><ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" /></when>')
        res.append(f'{I}  <when test="2">')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_startup"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_autotype"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["sw"]["rid_time"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="8">') # Scene control
        for orid in cfg["sc"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}</choose>')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["sw"]["rid_icon"]}" />')
        res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_visible"]}" />')
    else:
        res.append(f'{I}<ParameterRefRef RefId="{cfg["rid_func"]}" />')
        res.append(f'{I}<choose ParamRefId="{cfg["rid_func"]}">')
        res.append(f'{I}  <when test="1">') # Switch
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
        res.append(f'{I}  <when test="2">') # CCT
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["cct"]["rid_icon"]}" />')
        for orid in cfg["cct"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="3">') # Dimmer
        for orid in cfg["dim"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["dim"]["rid_icon"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="4">') # Curtain
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["cu"]["rid_icon"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["cu"]["rid_time"]}" />')
        for orid in cfg["cu"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="5">') # Fan
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["fan"]["rid_type"]}" />')
        for orid in cfg["fan"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="6">') # Air condition
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Temperature settings" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_step"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_min"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_max"]}" />')
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="AC Modes" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_auto"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_heat"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_cool"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_dry"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_fan"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_swi"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_scn"]}" />')
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Fan speed" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_fan_type"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_fan_auto"]}" />')
        for orid in cfg["ac"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="7">') # Heater
        for orid in cfg["he"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}  <when test="8">') # Scene control
        for orid in cfg["sc"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}</choose>')
    return res

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
L(f'              <ParameterBlock Id="{new_pb_id()}" Name="General settings" Text="General settings">')
L(f'                <ParameterRefRef RefId="{_rid_en_scene}" />')
L(f'                <choose ParamRefId="{_rid_en_scene}">')
L(f'                  <when test="1"><ParameterRefRef RefId="{_rid_ep_count5}" /></when>')
L(f'                  <when test="0"><ParameterRefRef RefId="{_rid_ep_count6}" /></when>')
L(f'                </choose>')
L(f'                <ParameterRefRef RefId="{_rid_bright}" />')
L(f'                <ParameterRefRef RefId="{_rid_led_bright}" />')
L(f'                <ParameterRefRef RefId="{_rid_sleep}" />')
for orid in global_orids: L(f'                <ComObjectRefRef RefId="{orid}" />')
L('              </ParameterBlock>')
L(f'              <choose ParamRefId="{_rid_en_scene}">')
L('                <when test="1">')
L(f'                  <ParameterBlock Id="{new_pb_id()}" Name="Scene settings" Text="Scene settings">')
L(f'                    <ParameterRefRef RefId="{_rid_sc_count}" />')
for sc, rid_n, rid_i, rid_num, rid_vis in scene_defs:
    L(f'                    <choose ParamRefId="{_rid_sc_count}">')
    L(f'                      <when test=">={sc}">')
    if sc > 1: L(f'                        <ParameterSeparator Id="{new_pb_id()}" />')
    L(f'                        <ParameterSeparator Id="{new_pb_id()}" Text="  Scene {sc}" UIHint="Headline" />')
    L(f'                        <ParameterRefRef RefId="{rid_n}" />')
    L(f'                        <ParameterRefRef RefId="{rid_i}" />')
    L(f'                        <ParameterRefRef RefId="{rid_num}" />')
    L(f'                        <ParameterRefRef RefId="{rid_vis}" />')
    L('                      </when>')
    L('                    </choose>')
for orid in global_scene_orids:
    L(f'                    <ComObjectRefRef RefId="{orid}" />')
L('                  </ParameterBlock>')
L('                </when>')
L('              </choose>')
L(f'              <ParameterBlock Id="{new_pb_id()}" Name="Endpoint 1" Text="Endpoint 1 setting">')
for line in render_endpoint_block(endpoints_logic[0], 16): L(line)
L('              </ParameterBlock>')
for cfg in endpoints_logic[1:]:
    ep_n = cfg['ep']
    L(f'              <choose ParamRefId="{_rid_en_scene}">')
    L('                <when test="1">') # Scene ENABLED (uses _rid_ep_count5)
    if ep_n <= 5:
        L(f'                  <choose ParamRefId="{_rid_ep_count5}">')
        L(f'                    <when test=">={ep_n}">')
        L(f'                      <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} setting">')
        for line in render_endpoint_block(cfg, 24): L(line)
        L('                      </ParameterBlock>')
        L('                    </when>')
        L('                  </choose>')
    L('                </when>')
    L('                <when test="0">') # Scene DISABLED (uses _rid_ep_count6)
    L(f'                  <choose ParamRefId="{_rid_ep_count6}">')
    L(f'                    <when test=">={ep_n}">')
    L(f'                      <ParameterBlock Id="{new_pb_id()}" Name="Endpoint {ep_n}" Text="Endpoint {ep_n} setting">')
    for line in render_endpoint_block(cfg, 24): L(line)
    L(f'                      </ParameterBlock>')
    L('                    </when>')
    L('                  </choose>')
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
print(f"Generated knob_device.xml v32: Restored Support Fan Auto checkbox.")
print(f"Total memory used: {mem_offset} bytes")
