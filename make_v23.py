import re
with open("gen_knob_v22.py", "r", encoding="utf-8") as f:
    text = f.read()

# 1. Update version to v23
text = text.replace("Generator knob_V22", "Generator knob_V23\n# Changes from v22: Endpoint Scene control removed. AC Swing moved to separate section, AC scene typo corrected to swing position checkbox.")

# 2. Remove EndpointFunction option 8
text = text.replace(
    ', 8: "Scene control"}',
    '}'
)

# 3. Replace AC bit parameters
bits_old = """    _, rid_ac_en_swi  = add_param_bit(f"Btn{ep}_AcEnSwi",  "Checkbox", "  Support air swing", "1")
    _, rid_ac_en_scn  = add_param_bit(f"Btn{ep}_AcEnScn",  "Checkbox", "  Support scene",     "0")"""
bits_new = """    _, rid_ac_en_swi  = add_param_bit(f"Btn{ep}_AcEnSwi",  "Checkbox", "  Support air swing", "1")
    _, rid_ac_swi_pos = add_param_bit(f"Btn{ep}_AcSwiPos", "Checkbox", "  Support swing positions", "0")"""
text = text.replace(bits_old, bits_new)

# 4. Remove AC Scene Group Object
text = text.replace(
    '        create_obj_struct(f"Btn{ep}_AcVanS", "Louver position status", "1 Byte", "DPST-5-10", ac_ui, is_status=True),\n        create_obj_struct(f"Btn{ep}_AcScn", "Scene", "1 Byte", "DPST-18-1", ac_ui)',
    '        create_obj_struct(f"Btn{ep}_AcVanS", "Louver position status", "1 Byte", "DPST-5-10", ac_ui, is_status=True)'
)

# 5. Remove sc_ui and sc_objs definitions
text = re.sub(r'\n\s*sc_ui = f"Endpoint \{ep\} - Scene control"\n\s*sc_objs = \[\n\s*create_obj_struct\(f"Btn\{ep\}_ScTrig", "Scene trigger", "1 Byte", "DPST-18-1", sc_ui\)\n\s*\]\n', '\n', text)

# 6. Update endpoints_logic dictionary mappings
text = text.replace('"rid_en_swi": rid_ac_en_swi, "rid_en_scn": rid_ac_en_scn', '"rid_en_swi": rid_ac_en_swi, "rid_swi_pos": rid_ac_swi_pos')
text = re.sub(r'\s*"sc": \{"objs": sc_objs\},\n', '\n', text)

# 7. Update render_endpoint_block for AC (Modes + Swing)
ac_render_old = """        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_fan"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_swi"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_scn"]}" />')
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Fan speed" UIHint="Headline" />')"""
ac_render_new = """        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_fan"]}" />')
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Swing" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_swi"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_swi_pos"]}" />')
        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Fan speed" UIHint="Headline" />')"""
text = text.replace(ac_render_old, ac_render_new)

# 8. Remove `when test="8"` blocks
text = re.sub(r'\s*res.append\(f\'\{I\}  <when test="8">\'.*?        res.append\(f\'\{I\}  </when>\'\)\n', '\n', text, flags=re.DOTALL)

# 9. Remove cfg["sc"]["orids"] registration
text = re.sub(r'\s*cfg\["sc"\]\["orids"\] = register_objects\(cfg\["sc"\]\["objs"\]\)', '', text)

# Output
with open("gen_knob_v23.py", "w", encoding="utf-8") as f:
    f.write(text)

print("Mutation applied. gen_knob_v23.py created.")
