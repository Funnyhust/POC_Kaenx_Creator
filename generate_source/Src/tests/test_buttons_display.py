from importlib import import_module
from xml.etree import ElementTree as ET


def _elements(root: ET.Element, name: str):
    return [node for node in root.iter() if node.tag.rsplit("}", 1)[-1] == name]


def test_buttons_display_v2_contract(tmp_path) -> None:
    module = import_module("knxgen.devices.6_8_buttons_display.generator")
    result = module.generate(output_dir=tmp_path, validate=True)
    root = ET.parse(result.product_xml).getroot()

    assert len(_elements(root, "Parameter")) == 398
    assert len(_elements(root, "ComObject")) == 98
    assert len(_elements(root, "RelativeSegment")) == 1
    assert _elements(root, "RelativeSegment")[0].get("Size") == "1696"
    assert not _elements(root, "Channel")
    assert len(_elements(root, "ChannelIndependentBlock")) == 1
    assert _elements(root, "ApplicationProgram")[0].get("ApplicationVersion") == "2"
    headlines = [
        node for node in _elements(root, "ParameterSeparator")
        if node.get("UIHint") == "Headline"
    ]
    assert any(node.get("Text") == "Endpoint layout settings" for node in _elements(root, "ParameterSeparator"))
    assert not any(node.get("Text") in {
        "Endpoint layout settings", "Display settings", "Brightness settings", "Sensor settings"
    } for node in headlines)
    assert not any(node.get("Text") in {"Single press", "Double press", "Long hold", "Communications"} for node in headlines)
    blocks = _elements(root, "ParameterBlock")
    assert not any("Endpoint_Merging" in node.get("Name", "") for node in blocks)
    general = next(node for node in blocks if node.get("Name") == "General_Settings")
    parameter_ids = {
        node.get("Name"): node.get("Id") for node in _elements(root, "Parameter")
    }
    general_refs = {
        node.get("RefId") for node in general.iter()
        if node.tag.rsplit("}", 1)[-1] == "ParameterRefRef"
    }
    for name in (
        "Top area merging direction",
        "Top area horizontal rows",
        "Top area vertical columns",
        "Bottom area merging direction",
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
    assert len(rulers) == 3
    assert not any(node.get("Name") == "Checkbox" for node in _elements(root, "ParameterType"))
    endpoint_function = next(
        node for node in _elements(root, "ParameterType")
        if node.get("Name") == "Endpoint function"
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

    parameters_by_name = {node.get("Name"): node for node in _elements(root, "Parameter")}
    assert parameters_by_name["Screen brightness"].get("Value") == "80"
    assert parameters_by_name["Led brightness"].get("Value") == "100"
    assert parameters_by_name["Turn off screen after"].get("Value") == "300"
    assert "Proximity sensor" not in parameters_by_name
    assert parameters_by_name["Proximity wake-up distance"].get("Value") == "50"
    assert all(name not in parameters_by_name for name in (
        "Active display brightness", "Standby display brightness", "Display dim timeout", "Display off timeout"
    ))

    dynamic_text = ET.tostring(_elements(root, "Dynamic")[0], encoding="unicode")
    assert "Endpoint 1 + 2 settings" in dynamic_text
    assert "Endpoint 1 + 3 settings" in dynamic_text
    assert "Endpoint 5 + 6 settings" in dynamic_text
    assert "Endpoint 5 + 7 settings" in dynamic_text
    assert "Button NC" not in dynamic_text
    assert "Transmission on change ≥ 1 °C" in dynamic_text
    assert "Periodic transmission every 5 minutes" in dynamic_text
    for text in (
        "Name", "Function of channel", "Switch mode",
        "Behavior on bus voltage recovery", "Icon",
        "Function of endpoint", "Dimming Mode (Long Press &gt;500ms)",
        "Travel time",
    ):
        assert text in ET.tostring(root, encoding="unicode")
    assert "Show on display" not in ET.tostring(root, encoding="unicode")
    for button in range(1, 9):
        for index in range(1, 6):
            assert f"NC{button} Scene{index} English name" in parameter_ids
            assert f"NC{button} Scene{index} Vietnamese name" in parameter_ids
            assert f"NC{button} Scene{index} icon" in parameter_ids
        for gesture in ("Double", "Long"):
            assert f"NC{button} Scene{gesture} English name" in parameter_ids
            assert f"NC{button} Scene{gesture} Vietnamese name" in parameter_ids
            assert f"NC{button} Scene{gesture} icon" in parameter_ids

    scene_count_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Number of scenes (cycling)")
    assert [node.get("Text") for node in _elements(scene_count_type, "Enumeration")] == ["2 Scenes", "3 Scenes", "4 Scenes", "5 Scenes"]
    scene_number_type = next(node for node in _elements(root, "ParameterType") if node.get("Name") == "Scene number")
    assert len(_elements(scene_number_type, "Enumeration")) == 64

    button_one = next(node for node in blocks if node.get("Text") == "Button 1 settings")
    direct_children = list(button_one)
    assert direct_children[0].tag.rsplit("}", 1)[-1] == "ParameterRefRef"  # Name language
    name_visibility = direct_children[1]
    assert name_visibility.tag.rsplit("}", 1)[-1] == "choose"
    assert [node.get("test") for node in list(name_visibility)] == ["1"]  # Switch only
