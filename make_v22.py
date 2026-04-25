import re
with open("gen_knob_v21.py", "r", encoding="utf-8") as f:
    text = f.read()

# 1. Update version to v22
text = text.replace("Generator knob_V21", "Generator knob_V22\n# Changes from v21: Heater temp options removed, AC swing and AC scene options added.")

# 2. Add bit parameters for AC Swing and AC Scene
ac_en_swi_code = """    _, rid_ac_fan_auto= add_param_bit(f"Btn{ep}_AcFanAuto","Checkbox", "  Support fan auto",  "1")
    _, rid_ac_en_swi  = add_param_bit(f"Btn{ep}_AcEnSwi",  "Checkbox", "  Support air swing", "1")
    _, rid_ac_en_scn  = add_param_bit(f"Btn{ep}_AcEnScn",  "Checkbox", "  Support scene",     "0")"""
text = text.replace('    _, rid_ac_fan_auto= add_param_bit(f"Btn{ep}_AcFanAuto","Checkbox", "  Support fan auto",  "1")', ac_en_swi_code)

# 3. Add Scene GO for AC
ac_scene_go = """        create_obj_struct(f"Btn{ep}_AcVanS", "Louver position status", "1 Byte", "DPST-5-10", ac_ui, is_status=True),
        create_obj_struct(f"Btn{ep}_AcScn", "Scene", "1 Byte", "DPST-18-1", ac_ui)"""
text = text.replace('        create_obj_struct(f"Btn{ep}_AcVanS", "Louver position status", "1 Byte", "DPST-5-10", ac_ui, is_status=True)', ac_scene_go)

# 4. Integrate new AC bit params into endpoints_logic dictionary
text = text.replace('"rid_fan_auto": rid_ac_fan_auto, "rid_fan_type": rid_ac_fan_type', '"rid_fan_auto": rid_ac_fan_auto, "rid_fan_type": rid_ac_fan_type, "rid_en_swi": rid_ac_en_swi, "rid_en_scn": rid_ac_en_scn')

# 5. Remove heater temperature params from definitions
text = re.sub(r'    _, rid_he_step.*?    _, rid_he_max_temp = .*?\n', '', text, flags=re.DOTALL)
text = text.replace('"rid_step": rid_he_step, "rid_min": rid_he_min_temp, "rid_max": rid_he_max_temp, ', '')

# 6. Update render_endpoint_block for AC
ac_render = """        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_fan"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_swi"]}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_scn"]}" />')"""
text = text.replace('        res.append(f\'{I}    <ParameterRefRef RefId="{cfg["ac"]["rid_en_fan"]}" />\')', ac_render)

# 7. Update render_endpoint_block for Heater (Remove Temperature settings)
heater_render = """        res.append(f'{I}  <when test="7">') # Heater
        for orid in cfg["he"]["orids"]: res.append(f'{I}    <ComObjectRefRef RefId="{orid}" />')
        res.append(f'{I}    <ParameterRefRef RefId="{cfg["rid_visible"]}" />')
        res.append(f'{I}  </when>')"""
text = re.sub(r'        res.append\(f\'\{I\}  <when test="7">\'.*?        res.append\(f\'\{I\}  </when>\'\)', heater_render, text, flags=re.DOTALL)

with open("make_v22_test.py", "w", encoding="utf-8") as f:
    f.write(text)

import sys
sys.exit(0)
