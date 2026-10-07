from importlib import import_module
from xml.etree import ElementTree as ET


def _elements(root: ET.Element, name: str):
    return [node for node in root.iter() if node.tag.rsplit("}", 1)[-1] == name]


def test_buttons_display_v4_contract(tmp_path) -> None:
    module = import_module("knxgen.devices.6_8_buttons_display.generator")
    result = module.generate(output_dir=tmp_path, validate=True)
    root = ET.parse(result.product_xml).getroot()

    assert len(_elements(root, "Parameter")) == 407
    assert len(_elements(root, "ComObject")) == 114
    assert len(_elements(root, "RelativeSegment")) == 1
    assert _elements(root, "RelativeSegment")[0].get("Size") == "1697"
    assert not _elements(root, "Channel")
    assert len(_elements(root, "ChannelIndependentBlock")) == 1
    assert _elements(root, "ApplicationProgram")[0].get("ApplicationVersion") == "20"
    assert sorted(int(o.get("Number")) for o in _elements(root, "ComObject")) == list(range(1, 113)) + [129, 130]
    sentinel = next(node for node in _elements(root, "Parameter") if node.get("Name") == "Fixed_Value_DD")
    assert sentinel.get("Text") is None
    assert sentinel.get("Value") == "221"
    sentinel_memory = next(node for node in sentinel if node.tag.rsplit("}", 1)[-1] == "Memory")
    assert sentinel_memory.get("Offset") == "0"
    headlines = [
        node for node in _elements(root, "ParameterSeparator")
        if node.get("UIHint") == "Headline"
    ]
    assert any(node.get("Text") == "Button grouping settings" for node in _elements(root, "ParameterSeparator"))
    assert not any(node.get("Text") in {
        "Button grouping settings", "Display settings", "Brightness settings", "Sensor settings"
    } for node in headlines)
    assert not any(node.get("Text") in {"Single press", "Double press", "Long hold", "Communications"} for node in headlines)
    blocks = _elements(root, "ParameterBlock")
    assert not any("Endpoint_Merging" in node.get("Name", "") for node in blocks)
    general = next(node for node in blocks if node.get("Name") == "General_Settings")
    parameter_ids = {
        node.get("Name"): node.get("Id") for node in _elements(root, "Parameter")
    }
    device_variant = next(
        node for node in _elements(root, "ParameterType")
        if node.get("Name") == "Device variant (4, 6 or 8 buttons)"
    )
    assert [
        (node.get("Value"), node.get("Text"))
        for node in _elements(device_variant, "Enumeration")
    ] == [("4", "4 buttons"), ("6", "6 buttons"), ("8", "8 buttons")]
    general_refs = {
        node.get("RefId") for node in general.iter()
        if node.tag.rsplit("}", 1)[-1] == "ParameterRefRef"
    }
    for name in (
        "Top area button grouping direction",
        "Top area horizontal rows",
        "Top area vertical columns",
        "Bottom area button grouping direction",
        "Bottom area horizontal rows",
        "Bottom area vertical columns",
    ):
        parameter_id = parameter_ids[name]
        assert any(ref.startswith(parameter_id + "_R-") for ref in general_refs)
    assert not any("Temperature report delta" == name for name in parameter_ids)
    assert "Display name language" not in parameter_ids
    for button in range(1, 9):
        assert f"Button {button} name language" in parameter_ids
    rulers = [
        node for node in _elements(root, "ParameterSeparator")
        if node.get("UIHint") == "HorizontalRuler"
    ]
    assert len(rulers) > 3  # General settings plus scene-cycling group dividers.
    assert not any(node.get("Name") == "Checkbox" for node in _elements(root, "ParameterType"))
    endpoint_function = next(
        node for node in _elements(root, "ParameterType")
        if node.get("Name") == "Function of button group"
    )
    assert [
        (node.get("Value"), node.get("Text"))
        for node in _elements(endpoint_function, "Enumeration")
    ] == [("0", "Disabled"), ("2", "CCT"), ("3", "Dimmer"), ("4", "Shutter/Curtain")]
    dimming_behavior = next(
        node for node in _elements(root, "ParameterType")
        if node.get("Name") == "Dimming Behavior"
    )
    assert [node.get("Text") for node in _elements(dimming_behavior, "Enumeration")] == ["Start/Stop", "Step"]

    object_refs = {node.get("Id"): node for node in _elements(root, "ComObjectRef")}
    used_object_refs = {
        object_refs[node.get("RefId")]
        for node in _elements(root, "ComObjectRefRef")
    }
    visible_objects = {(node.get("Text"), node.get("FunctionText")) for node in used_object_refs}
    for expected in (
        ("Button 1 - {{0:...}}", "Switch"),
        ("Button 1 - {{0:...}}", "Scene control"),
        ("Button group 1 - {{0:...}}", "Dimming control"),
        ("Button group 1 - {{0:...}}", "Color temperature"),
        ("Button group 1 - {{0:...}}", "Up/down"),
    ):
        assert expected in visible_objects

    cct_control = next(
        node for node in _elements(root, "ComObject")
        if node.get("Number") == "5"
    )
    cct_status = next(
        node for node in _elements(root, "ComObject")
        if node.get("Number") == "6"
    )
    assert cct_control.get("DatapointType") == "DPST-7-600"
    assert cct_control.get("ObjectSize") == "2 Bytes"
    assert cct_status.get("DatapointType") == "DPST-7-600"
    assert cct_control.get("Name") == "NC1-ColorTemperature"
    assert cct_status.get("Name") == "NC1-ColorTemperatureStatus"
    assert "CctRelative" not in ET.tostring(root, encoding="unicode")
    named_refs = [node for node in _elements(root, "ComObjectRef") if node.get("TextParameterRefId")]
    assert named_refs
    assert all("{{0:...}}" in node.get("Text", "") for node in named_refs)
    # Only the English TypeText parameter may be used as a dynamic object-name
    # substitution.  Vietnamese names are numeric presets and are emitted as
    # static translated ComObjectRef variants instead (ETS cannot cast an enum
    # value through TextParameterRefId).
    assert all("_P-18_R-18" not in node.get("TextParameterRefId", "") for node in named_refs)
    assert any(node.get("TextParameterRefId", "").endswith("_R-336") for node in named_refs)
    # Name/language branches update text only, never the GA-bearing reference.
    refs_by_id = {node.get("Id"): node for node in _elements(root, "ParameterRef")}
    params_by_id = {node.get("Id"): node for node in _elements(root, "Parameter")}
    for branch in _elements(root, "choose"):
        ref = refs_by_id[branch.get("ParamRefId")]
        name = params_by_id[ref.get("RefId")].get("Name", "")
        if "name language" in name.lower() or "Vietnamese" in name:
            assert not _elements(branch, "ComObjectRefRef"), name
    for node in named_refs:
        target = params_by_id[refs_by_id[node.get("TextParameterRefId")].get("RefId")]
        assert not _elements(target, "Memory")
    assert len(_elements(root, "ParameterCalculation")) == 72
    assert not _elements(root, "Assign")
    assert any(node.get("Text") == "Button 1 - Đèn trần" for node in _elements(root, "ComObjectRef"))
    assert not any("Không hiển thị" in node.get("Text", "") for node in _elements(root, "ComObjectRef"))
    assert any(node.get("Text") == "Button 1 - Đèn hắt trần" for node in _elements(root, "ComObjectRef"))
    assert any(node.get("Text") == "Button group 1 - Hắt trần" for node in _elements(root, "ComObjectRef"))
    assert any(node.get("Text") == "Button group 1 - Rèm vải" for node in _elements(root, "ComObjectRef"))
    assert any(node.get("Text") == "Button 1 - Ra ngoài" for node in _elements(root, "ComObjectRef"))
    assert all(
        f"NC{button} Vietnamese dimmer/CCT name" in parameter_ids
        and f"NC{button} Vietnamese curtain name" in parameter_ids
        for button in range(1, 9)
    )
    assert any(node.get("Text") == "Button 1 - {{0:...}}" and node.get("FunctionText") == "Scene control" for node in _elements(root, "ComObjectRef"))

    parameters_by_name = {node.get("Name"): node for node in _elements(root, "Parameter")}
    assert parameters_by_name["Screen brightness"].get("Value") == "100"
    assert parameters_by_name["Led brightness"].get("Value") == "50"
    assert parameters_by_name["Turn off screen after"].get("Value") == "30"
    assert "Proximity sensor" not in parameters_by_name
    assert parameters_by_name["Proximity wake-up distance"].get("Value") == "50"
    assert all(name not in parameters_by_name for name in (
        "Active display brightness", "Standby display brightness", "Display dim timeout", "Display off timeout"
    ))

    dynamic_text = ET.tostring(_elements(root, "Dynamic")[0], encoding="unicode")
    device_variant_chooses = [
        node for node in _elements(root, "Dynamic")[0].iter()
        if node.tag.rsplit("}", 1)[-1] == "choose"
        and node.get("ParamRefId", "").endswith("_P-1_R-1")
    ]
    assert len(device_variant_chooses) == 2
    six_branch = next(
        node for node in device_variant_chooses[-1]
        if node.tag.rsplit("}", 1)[-1] == "when" and node.get("test") == "6"
    )
    six_blocks = {node.get("Name") for node in _elements(six_branch, "ParameterBlock")}
    assert six_blocks == {
        *(f"Button_{button}_Settings" for button in (1, 2, 3, 5, 6, 7)),
        "Button_1_3_Merged_Settings", "Button_5_7_Merged_Settings", "Button_2_6_Merged_Settings",
    }
    for pair_id, anchor, partner, offset in ((4, 1, 3, 4), (5, 5, 7, 5), (6, 2, 6, 6)):
        pair_parameter = params_by_id[refs_by_id[next(
            node.get("ParamRefId") for node in _elements(six_branch, "choose")
            if node.get("ParamRefId", "").endswith(f"_P-{pair_id}_R-{pair_id}")
        )].get("RefId")]
        assert pair_parameter.get("Text") == f"Operating mode of Button {anchor} + Button {partner}"
        assert _elements(pair_parameter, "Memory")[0].get("Offset") == str(offset)
    four_general_branch = next(
        node for node in device_variant_chooses[0]
        if node.tag.rsplit("}", 1)[-1] == "when" and node.get("test") == "4"
    )
    assert "Top (Buttons 1-4) area" in ET.tostring(four_general_branch, encoding="unicode")
    four_branch = next(
        node for node in device_variant_chooses[-1]
        if node.tag.rsplit("}", 1)[-1] == "when" and node.get("test") == "4"
    )
    four_branch_text = ET.tostring(four_branch, encoding="unicode")
    assert "Button 1 settings" in four_branch_text
    assert "Bottom (Buttons 5-8) area" not in four_branch_text
    assert "Button 5 settings" not in four_branch_text
    assert "Button group 1 + 2 settings" in dynamic_text
    assert "Button group 1 + 3 settings" in dynamic_text
    assert "Button group 5 + 6 settings" in dynamic_text
    assert "Button group 5 + 7 settings" in dynamic_text
    assert "Button NC" not in dynamic_text
    assert "Double press" not in dynamic_text
    assert "Long hold" not in dynamic_text
    assert "Store scene" not in dynamic_text
    assert "Transmission on change ≥ 1 °C" in dynamic_text
    assert "Periodic transmission every 5 minutes" in dynamic_text
    for text in (
        "Name", "Function of channel", "Switch mode",
        "Behavior on bus voltage recovery", "Icon",
        "Function of button group", "Dimming Mode (Long Press &gt;500ms)",
        "Travel time",
    ):
        assert text in ET.tostring(root, encoding="unicode")
    assert "Show on display" not in ET.tostring(root, encoding="unicode")
    assert "Automatic scene change" in ET.tostring(root, encoding="unicode")
    scene_objects = [node for node in _elements(root, "ComObject") if node.get("Name", "").endswith(tuple(f"Scene{i}" for i in range(1, 6)))]
    assert len(scene_objects) == 40
    assert all(node.get("Name", "").split("-", 1)[1].startswith("Scene") for node in scene_objects)
    for button in range(1, 9):
        assert f"NC{button} automatic scene change" in parameter_ids
        for index in range(1, 6):
            assert f"NC{button} Scene{index} English name" in parameter_ids
            assert f"NC{button} Scene{index} Vietnamese name" in parameter_ids
            assert f"NC{button} Scene{index} icon" in parameter_ids
        assert all(
            f"NC{button} Scene{gesture}" not in parameter_ids
            for gesture in ("Double", "Long")
        )

    scene_count_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Number of scenes (cycling)")
    assert [node.get("Text") for node in _elements(scene_count_type, "Enumeration")] == ["2 Scenes", "3 Scenes", "4 Scenes", "5 Scenes"]
    scene_action_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Single press scene action")
    assert [(node.get("Value"), node.get("Text")) for node in _elements(scene_action_type, "Enumeration")] == [("1", "Recall scene"), ("2", "Scene cycling")]
    scene_cycle_mode_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Scene cycling after button activation")
    assert [(node.get("Value"), node.get("Text")) for node in _elements(scene_cycle_mode_type, "Enumeration")] == [("0", "Automatic"), ("1", "Manual")]
    scene_icon_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Scene icon")
    assert [node.get("Text") for node in _elements(scene_icon_type, "Enumeration")] == [f"Icon {index}" for index in range(1, 37)]
    scene_number_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Scene number")
    assert len(_elements(scene_number_type, "Enumeration")) == 64

    button_one = next(node for node in blocks if node.get("Text") == "Button 1 settings")
    direct_children = list(button_one)
    assert direct_children[0].tag.rsplit("}", 1)[-1] == "ParameterRefRef"  # Name language
    name_visibility = direct_children[1]
    assert name_visibility.tag.rsplit("}", 1)[-1] == "choose"
    assert [node.get("test") for node in list(name_visibility)] == ["1"]  # Switch only
