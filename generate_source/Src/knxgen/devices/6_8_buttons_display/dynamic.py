from __future__ import annotations

from xml.etree.ElementTree import Element, SubElement

from .identifiers import COM_OBJECT_IDS, PARAMETER_IDS


AREA_ENDPOINTS = {
    0: (("i", 0, 0), ("i", 1, 1), ("i", 2, 2), ("i", 3, 3)),
    1: (("p", 0, 1), ("i", 2, 2), ("i", 3, 3)),
    2: (("i", 0, 0), ("i", 1, 1), ("p", 2, 3)),
    3: (("p", 0, 1), ("p", 2, 3)),
    4: (("p", 0, 2), ("i", 1, 1), ("i", 3, 3)),
    5: (("i", 0, 0), ("i", 2, 2), ("p", 1, 3)),
    6: (("p", 0, 2), ("p", 1, 3)),
}


def _pref(app: str, key: str) -> str:
    identifier = PARAMETER_IDS[key]
    return f"{app}_P-{identifier}_R-{identifier}"


def _oref(app: str, key: str) -> str:
    identifier = COM_OBJECT_IDS[key]
    return f"{app}_O-{identifier}_R-{identifier}"


def _parameter(parent: Element, app: str, key: str) -> None:
    SubElement(parent, "ParameterRefRef", {"RefId": _pref(app, key)})


def _object(parent: Element, app: str, key: str) -> None:
    SubElement(parent, "ComObjectRefRef", {"RefId": _oref(app, key)})


def _choose(parent: Element, app: str, key: str) -> Element:
    return SubElement(parent, "choose", {"ParamRefId": _pref(app, key)})


def _headline(parent: Element, app: str, separator_ids, text: str, *, bold: bool = True) -> None:
    attributes = {"Id": f"{app}_PS-{next(separator_ids)}", "Text": text}
    if bold:
        attributes["UIHint"] = "Headline"
    SubElement(parent, "ParameterSeparator", attributes)


def _ruler(parent: Element, app: str, separator_ids) -> None:
    SubElement(parent, "ParameterSeparator", {
        "Id": f"{app}_PS-{next(separator_ids)}", "Text": "", "UIHint": "HorizontalRuler",
    })


def _name_language(parent: Element, app: str, button: int) -> str:
    language_key = f"NC{button}-NameLanguage"
    _parameter(parent, app, language_key)
    return language_key


def _name_value(parent: Element, app: str, button: int, language_key: str) -> None:
    language = _choose(parent, app, language_key)
    english = SubElement(language, "when", {"test": "0"})
    _parameter(english, app, f"NC{button}-EnglishName")
    vietnamese = SubElement(language, "when", {"test": "1"})
    _parameter(vietnamese, app, f"NC{button}-VietnameseName")


def _name(parent: Element, app: str, button: int) -> None:
    language_key = _name_language(parent, app, button)
    _name_value(parent, app, button, language_key)


def _appearance(parent: Element, app: str, button: int, *, curtain: bool = False) -> None:
    _parameter(parent, app, f"NC{button}-CurtainIcon" if curtain else f"NC{button}-Icon")


def _scene_name(parent: Element, app: str, button: int, slot: str) -> None:
    language = _choose(parent, app, f"NC{button}-NameLanguage")
    english = SubElement(language, "when", {"test": "0"})
    _parameter(english, app, f"NC{button}-{slot}EnglishName")
    vietnamese = SubElement(language, "when", {"test": "1"})
    _parameter(vietnamese, app, f"NC{button}-{slot}VietnameseName")
    _parameter(parent, app, f"NC{button}-{slot}Icon")


def _scene_branch(parent: Element, app: str, button: int, separator_ids) -> None:
    prefix = f"NC{button}"
    _headline(parent, app, separator_ids, "Single press", bold=False)
    _parameter(parent, app, f"{prefix}-SceneSingleAction")
    single = _choose(parent, app, f"{prefix}-SceneSingleAction")
    for value in (1, 3):
        branch = SubElement(single, "when", {"test": str(value)})
        _parameter(branch, app, f"{prefix}-Scene1")
        _scene_name(branch, app, button, "Scene1")
    cycle = SubElement(single, "when", {"test": "2"})
    _parameter(cycle, app, f"{prefix}-SceneCycleCount")
    _headline(cycle, app, separator_ids, "", bold=False)
    for index in range(1, 3):
        _parameter(cycle, app, f"{prefix}-Scene{index}")
        _scene_name(cycle, app, button, f"Scene{index}")
    count = _choose(cycle, app, f"{prefix}-SceneCycleCount")
    for value in range(3, 6):
        count_branch = SubElement(count, "when", {"test": str(value)})
        for index in range(3, value + 1):
            _parameter(count_branch, app, f"{prefix}-Scene{index}")
            _scene_name(count_branch, app, button, f"Scene{index}")

    for gesture, object_key in (("Double", "SceneDouble"), ("Long", "SceneLong")):
        _headline(parent, app, separator_ids, f"{gesture} press" if gesture == "Double" else "Long hold", bold=False)
        action_key = f"{prefix}-Scene{gesture}Action"
        _parameter(parent, app, action_key)
        action = _choose(parent, app, action_key)
        for value in (1, 2):
            branch = SubElement(action, "when", {"test": str(value)})
            _parameter(branch, app, f"{prefix}-Scene{gesture}Number")
            _scene_name(branch, app, button, f"Scene{gesture}")
    _headline(parent, app, separator_ids, "Communications", bold=False)
    objects_key = f"{prefix}-SceneObjects"
    _parameter(parent, app, objects_key)
    objects = _choose(parent, app, objects_key)
    shared = SubElement(objects, "when", {"test": "1"})
    _object(shared, app, f"{prefix}-SceneSingle")
    separate = SubElement(objects, "when", {"test": "3"})
    for object_key in ("SceneSingle", "SceneDouble", "SceneLong"):
        _object(separate, app, f"{prefix}-{object_key}")


def _independent(parent: Element, app: str, button: int, context: str, block_ids, separator_ids) -> None:
    block = SubElement(parent, "ParameterBlock", {
        "Id": f"{app}_PB-{next(block_ids)}",
        "Name": f"Button_{button}_Settings",
        "Text": f"Button {button} settings",
    })
    function_key = f"NC{button}-IndependentFunction"
    language_key = _name_language(block, app, button)
    visible_name = _choose(block, app, function_key)
    switch_name = SubElement(visible_name, "when", {"test": "1"})
    _name_value(switch_name, app, button, language_key)
    _parameter(block, app, function_key)
    function = _choose(block, app, function_key)
    switch = SubElement(function, "when", {"test": "1"})
    _object(switch, app, f"NC{button}-SwitchControl")
    _object(switch, app, f"NC{button}-SwitchStatus")
    switch_mode_key = f"NC{button}-SwitchMode"
    _parameter(switch, app, switch_mode_key)
    switch_mode = _choose(switch, app, switch_mode_key)
    toggle = SubElement(switch_mode, "when", {"test": "1"})
    _parameter(toggle, app, f"NC{button}-SwitchStartup")
    automatic = SubElement(switch_mode, "when", {"test": "2"})
    for key in ("SwitchStartup", "AutoModeType", "AutoTime"):
        _parameter(automatic, app, f"NC{button}-{key}")
    _appearance(switch, app, button)
    scene = SubElement(function, "when", {"test": "2"})
    _scene_branch(scene, app, button, separator_ids)


def _paired(parent: Element, app: str, anchor: int, partner: int, context: str, block_ids, separator_ids) -> None:
    block = SubElement(parent, "ParameterBlock", {
        "Id": f"{app}_PB-{next(block_ids)}",
        "Name": f"Button_{anchor}_{partner}_Merged_Settings",
        "Text": f"Endpoint {anchor} + {partner} settings",
    })
    _name(block, app, anchor)
    function_key = f"NC{anchor}-PairedFunction"
    _parameter(block, app, function_key)
    function = _choose(block, app, function_key)

    dimmer = SubElement(function, "when", {"test": "3"})
    for key in ("SwitchControl", "SwitchStatus", "BrightnessRelative", "BrightnessStatus"):
        _object(dimmer, app, f"NC{anchor}-{key}")
    dimming_mode_key = f"NC{anchor}-DimmingMode"
    _parameter(dimmer, app, dimming_mode_key)
    dimming_mode = _choose(dimmer, app, dimming_mode_key)
    fixed_step = SubElement(dimming_mode, "when", {"test": "1"})
    _parameter(fixed_step, app, f"NC{anchor}-DimmingStep")
    _parameter(fixed_step, app, f"NC{anchor}-RepeatInterval")
    _appearance(dimmer, app, anchor)

    cct = SubElement(function, "when", {"test": "2"})
    for key in ("SwitchControl", "SwitchStatus", "BrightnessRelative", "BrightnessStatus", "CctRelative", "CctStatus"):
        _object(cct, app, f"NC{anchor}-{key}")
    _appearance(cct, app, anchor)

    curtain = SubElement(function, "when", {"test": "4"})
    _parameter(curtain, app, f"NC{anchor}-CurtainIcon")
    _parameter(curtain, app, f"NC{anchor}-CurtainTravelTime")
    for key in ("CurtainMove", "CurtainStop", "CurtainPosition"):
        _object(curtain, app, f"NC{anchor}-{key}")


def _emit_layout(parent: Element, app: str, layout: int, buttons: tuple[int, int, int, int], label: str, block_ids, separator_ids) -> None:
    context = f"{label}-L{layout}"
    for kind, left, right in AREA_ENDPOINTS[layout]:
        if kind == "i":
            _independent(parent, app, buttons[left], context, block_ids, separator_ids)
        else:
            _paired(parent, app, buttons[left], buttons[right], context, block_ids, separator_ids)


def _area_controls(parent: Element, app: str, label: str, direction_key: str, horizontal_key: str, vertical_key: str, separator_ids) -> None:
    _headline(parent, app, separator_ids, f"{label} area", bold=False)
    _parameter(parent, app, direction_key)
    direction = _choose(parent, app, direction_key)
    horizontal = SubElement(direction, "when", {"test": "1"})
    _parameter(horizontal, app, horizontal_key)
    vertical = SubElement(direction, "when", {"test": "2"})
    _parameter(vertical, app, vertical_key)


def _area_pages(parent: Element, app: str, buttons: tuple[int, int, int, int], label: str, direction_key: str, horizontal_key: str, vertical_key: str, block_ids, separator_ids) -> None:
    direction = _choose(parent, app, direction_key)
    independent = SubElement(direction, "when", {"test": "0"})
    _emit_layout(independent, app, 0, buttons, label, block_ids, separator_ids)

    horizontal = SubElement(direction, "when", {"test": "1"})
    horizontal_selection = _choose(horizontal, app, horizontal_key)
    for selection, layout in ((1, 1), (2, 2), (3, 3)):
        branch = SubElement(horizontal_selection, "when", {"test": str(selection)})
        _emit_layout(branch, app, layout, buttons, label, block_ids, separator_ids)

    vertical = SubElement(direction, "when", {"test": "2"})
    vertical_selection = _choose(vertical, app, vertical_key)
    for selection, layout in ((1, 4), (2, 5), (3, 6)):
        branch = SubElement(vertical_selection, "when", {"test": str(selection)})
        _emit_layout(branch, app, layout, buttons, label, block_ids, separator_ids)


def build_dynamic(app: str) -> Element:
    block_ids = iter(range(2, 10000))
    separator_ids = iter(range(1, 100000))
    dynamic = Element("Dynamic")
    channel = SubElement(dynamic, "ChannelIndependentBlock")
    general = SubElement(channel, "ParameterBlock", {
        "Id": f"{app}_PB-1",
        "Name": "General_Settings",
        "Text": "General settings",
    })
    _parameter(general, app, "DeviceVariant")
    merge_config = _choose(general, app, "DeviceVariant")
    _headline(merge_config, app, separator_ids, "Endpoint layout settings", bold=False)
    six_config = SubElement(merge_config, "when", {"test": "6"})
    _headline(six_config, app, separator_ids, "Button pairs: 1 + 5, 2 + 4 and 6 + 8", bold=False)
    for key in ("SixPair15", "SixPair24", "SixPair68"):
        _parameter(six_config, app, key)
    eight_config = SubElement(merge_config, "when", {"test": "8"})
    _area_controls(eight_config, app, "Top (Buttons 1-4)", "TopMergeDirection", "TopHorizontalSelection", "TopVerticalSelection", separator_ids)
    _area_controls(eight_config, app, "Bottom (Buttons 5-8)", "BottomMergeDirection", "BottomHorizontalSelection", "BottomVerticalSelection", separator_ids)
    _ruler(general, app, separator_ids)
    _headline(general, app, separator_ids, "Display settings", bold=False)
    for key in ("ScreenBrightness", "LedBrightness", "TurnOffScreenAfter"):
        _parameter(general, app, key)
    _ruler(general, app, separator_ids)
    _headline(general, app, separator_ids, "Proximity sensor settings", bold=False)
    _parameter(general, app, "ProximityDistance")
    _headline(general, app, separator_ids, "The screen turns on when presence is detected within this distance.", bold=False)
    _ruler(general, app, separator_ids)
    _headline(general, app, separator_ids, "Sensor settings", bold=False)
    _headline(general, app, separator_ids, "Temperature measurement", bold=False)
    _headline(general, app, separator_ids, "Transmission on change ≥ 1 °C", bold=False)
    _object(general, app, "Temperature")
    _headline(general, app, separator_ids, " ", bold=False)
    _headline(general, app, separator_ids, "Humidity measurement", bold=False)
    _headline(general, app, separator_ids, "Transmission on change ≥ 5 %", bold=False)
    _object(general, app, "Humidity")
    _headline(general, app, separator_ids, " ", bold=False)
    _headline(general, app, separator_ids, "Transmission cycle", bold=False)
    _headline(general, app, separator_ids, "Periodic transmission every 5 minutes", bold=False)

    variant = _choose(channel, app, "DeviceVariant")
    six = SubElement(variant, "when", {"test": "6"})
    six_pairs = (("SixPair15", 1, 5), ("SixPair24", 2, 4), ("SixPair68", 6, 8))
    for key, a, b in six_pairs:
        pair_mode = _choose(six, app, key)
        independent = SubElement(pair_mode, "when", {"test": "0"})
        _independent(independent, app, a, f"Six-{key}-I", block_ids, separator_ids)
        _independent(independent, app, b, f"Six-{key}-I", block_ids, separator_ids)
        paired = SubElement(pair_mode, "when", {"test": "1"})
        _paired(paired, app, a, b, f"Six-{key}-P", block_ids, separator_ids)

    eight = SubElement(variant, "when", {"test": "8"})
    _area_pages(eight, app, (1, 2, 3, 4), "Top", "TopMergeDirection", "TopHorizontalSelection", "TopVerticalSelection", block_ids, separator_ids)
    _area_pages(eight, app, (5, 6, 7, 8), "Bottom", "BottomMergeDirection", "BottomHorizontalSelection", "BottomVerticalSelection", block_ids, separator_ids)
    return dynamic
