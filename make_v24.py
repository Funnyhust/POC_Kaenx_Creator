import re
with open("gen_knob_v23.py", "r", encoding="utf-8") as f:
    text = f.read()

# 1. Update version to v24
text = text.replace("Generator knob_V23", "Generator knob_V24\n# Changes from v23: Global WriteFlag enabled. AC Swing enum. Heater objects renamed.")

# 2. Global Write Flag in create_obj_struct
# Old:
# def create_obj_struct(internal_name, func_text, obj_size, dp_type, ui_text, is_status=False, p_read="Disabled", p_write="Enabled", p_comm="Enabled", p_trans="Enabled", p_update="Disabled"):
#     if is_status:
#         p_read = "Enabled"; p_write = "Disabled"; p_trans = "Enabled"; p_update = "Enabled"
# New: p_write stays Enabled for status too
text = text.replace(
    'p_read = "Enabled"; p_write = "Disabled"; p_trans = "Enabled"; p_update = "Enabled"',
    'p_read = "Enabled"; p_write = "Enabled"; p_trans = "Enabled"; p_update = "Enabled"'
)

# 3. Add new ParameterType for AC Swing
text = text.replace(
    'add_pt_enum("AcSwingOptions"',
    'add_pt_enum("AcSwingType", "Swing position", {0: "Not support", 1: "Support swing level", 2: "Support swing scaling"})\nadd_pt_enum("AcSwingOptions"'
)

# 4. Update AC params in definitions loop
# Remove rid_ac_en_swi and rid_ac_swi_pos bits
text = text.replace(
    '    _, rid_ac_en_swi  = add_param_bit(f"Btn{ep}_AcEnSwi",  "Checkbox", "  Support air swing", "1")\n    _, rid_ac_swi_pos = add_param_bit(f"Btn{ep}_AcSwiPos", "Checkbox", "  Support swing positions", "0")',
    '    _, rid_ac_swi_type = add_param_basic(f"Btn{ep}_AcSwiType", "AcSwingType", "  Swing position", "0", 1)'
)

# Update endpoints_logic dict for AC
text = text.replace(
    '"rid_en_swi": rid_ac_en_swi, "rid_swi_pos": rid_ac_swi_pos',
    '"rid_swi_type": rid_ac_swi_type'
)

# 5. Update Heater objects
he_objs_old = """    he_objs = [
        create_obj_struct(f"Btn{ep}_HePow", "Power", "1 Bit", "DPST-1-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeTar", "Setpoint", "2 Bytes", "DPST-9-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeMode", "Heating mode", "1 Bit", "DPST-1-100", he_ui),
        create_obj_struct(f"Btn{ep}_HePowS", "Power status", "1 Bit", "DPST-1-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeTarS", "Setpoint status", "2 Bytes", "DPST-9-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeModeS", "Heating mode status", "1 Bit", "DPST-1-100", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeRmT", "Room temperature", "2 Bytes", "DPST-9-1", he_ui, is_status=True)
    ]"""
he_objs_new = """    he_objs = [
        create_obj_struct(f"Btn{ep}_HePow", "Heater power", "1 Bit", "DPST-1-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeTar", "Set temperature threshold", "2 Bytes", "DPST-9-1", he_ui),
        create_obj_struct(f"Btn{ep}_HeMode", "Enable control", "1 Bit", "DPST-1-1", he_ui),
        create_obj_struct(f"Btn{ep}_HePowS", "Heater power status", "1 Bit", "DPST-1-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeTarS", "Set temperature threshold", "2 Bytes", "DPST-9-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeModeS", "Enable control status", "1 Bit", "DPST-1-1", he_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_HeRmT", "Room temperature", "2 Bytes", "DPST-9-1", he_ui, is_status=True)
    ]"""
text = text.replace(he_objs_old, he_objs_new)

# 6. Update render_endpoint_block for AC Swing section
ac_swing_render_old = """        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Swing" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_swi"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_swi_pos"]}" />')"""
ac_swing_render_new = """        res.append(f'{I}    <ParameterSeparator Id="{new_pb_id()}" Text="Swing" UIHint="Headline" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_swi_type"]}" />')"""
text = text.replace(ac_swing_render_old, ac_swing_render_new)

with open("gen_knob_v24.py", "w", encoding="utf-8") as f:
    f.write(text)

print("v24 created.")
