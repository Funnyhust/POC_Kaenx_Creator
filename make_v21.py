d:\Project\KNX\Kaenx.Creator.Binaries\KNOBimport re
with open("gen_knob_v19.py", "r", encoding="utf-8") as f:
    text = f.read()

# 1. Update version comments
text = text.replace("Generator knob_V19", "Generator knob_V21\n# Based on v19 with requested additions.")

# 2. Add Scene to EndpointFunction and rename Air condition to Air conditioner
text = text.replace(
    'add_pt_enum("EndpointFunction", "Endpoint function", {0: "Disabled", 1: "Switch", 2: "CCT", 3: "Dimmer", 4: "Curtain", 5: "Fan", 6: "Air condition", 7: "Heater"})',
    'add_pt_enum("EndpointFunction", "Endpoint function", {0: "Disabled", 1: "Switch", 2: "CCT", 3: "Dimmer", 4: "Curtain", 5: "Fan", 6: "Air conditioner", 7: "Heater", 8: "Scene control"})'
)

# 3. Dynamic object names
text = text.replace('ep_ui = f"Endpoint {ep} - ..."', '')
text = re.sub(r'sw_objs\s*=\s*\[(.*?)\]', r'sw_ui = f"Endpoint {ep} - Switch"\n    sw_objs = [\1]', text, flags=re.DOTALL)
text = text.replace('ep_ui, is_status=True', 'sw_ui, is_status=True', 1)
text = text.replace('ep_ui)', 'sw_ui)', 1)

text = re.sub(r'cct_objs\s*=\s*\[(.*?)\]', r'cct_ui = f"Endpoint {ep} - CCT"\n    cct_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(cct_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'cct_ui'), text, flags=re.DOTALL)

text = re.sub(r'dim_objs\s*=\s*\[(.*?)\]', r'dim_ui = f"Endpoint {ep} - Dimmer"\n    dim_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(dim_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'dim_ui'), text, flags=re.DOTALL)

text = re.sub(r'cu_objs\s*=\s*\[(.*?)\]', r'cu_ui = f"Endpoint {ep} - Curtain"\n    cu_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(cu_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'cu_ui'), text, flags=re.DOTALL)

text = re.sub(r'fan_objs\s*=\s*\[(.*?)\]', r'fan_ui = f"Endpoint {ep} - Fan"\n    fan_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(fan_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'fan_ui'), text, flags=re.DOTALL)

text = re.sub(r'ac_objs\s*=\s*\[(.*?)\]', r'ac_ui = f"Endpoint {ep} - Air conditioner"\n    ac_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(ac_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'ac_ui'), text, flags=re.DOTALL)

text = re.sub(r'he_objs\s*=\s*\[(.*?)\]', r'he_ui = f"Endpoint {ep} - Heater"\n    he_objs = [\1]', text, flags=re.DOTALL)
text = re.sub(r'(he_objs = \[.*?\])', lambda m: m.group(1).replace('ep_ui', 'he_ui'), text, flags=re.DOTALL)

# 4. Add Scene GOs
sc_objs_code = """
    sc_ui = f"Endpoint {ep} - Scene control"
    sc_objs = [
        create_obj_struct(f"Btn{ep}_ScTrig", "Scene trigger", "1 Byte", "DPST-18-1", sc_ui)
    ]
"""
text = text.replace('endpoints_logic.append({', sc_objs_code + '\n    endpoints_logic.append({')

text = text.replace('"he": {"rid_step"', '"sc": {"objs": sc_objs},\n        "he": {"rid_step"')

# 5. Add Scene to register objects
text = text.replace('cfg["he"]["orids"] = register_objects(cfg["he"]["objs"])', 'cfg["he"]["orids"] = register_objects(cfg["he"]["objs"])\n    cfg["sc"]["orids"] = register_objects(cfg["sc"]["objs"])')

# 6. Add Scene to render_endpoint_block
sc_render = """        res.append(f'{I}  <when test="8">') # Scene control
        for orid in cfg["sc"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')
        res.append(f'{I}</choose>')"""
text = text.replace("res.append(f'{I}</choose>')", sc_render)

# 7. Remove Fixed Function Text
text = text.replace("""        res.append(f'{I}<ParameterSeparator Id="{new_pb_id()}" Text="Fixed Function: Switch" />')\n""", "")

# 8. Output to gen_knob_v21.py
text = text.replace('output_path = r"d:\\Project\\KNX\\Kaenx.Creator.Binaries\\POC_Kaenx_Creator\\Output_File\\KNOB\\knob_device.xml"', 'output_path = r"d:\\Project\\KNX\\Kaenx.Creator.Binaries\\POC_Kaenx_Creator\\Output_File\\KNOB\\knob_device.xml"')

with open("gen_knob_v21.py", "w", encoding="utf-8") as f:
    f.write(text)
