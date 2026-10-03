from __future__ import annotations

from xml.etree.ElementTree import Element, SubElement

from .identifiers import COM_OBJECT_IDS, COM_OBJECT_REF_IDS, PARAMETER_IDS
from .translations import labels_for_presentation


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


def _oref(app: str, key: str, variant: str | None = None) -> str:
    object_id = COM_OBJECT_IDS[key]
    ref_id = object_id if variant is None else COM_OBJECT_REF_IDS[(key, variant)]
    return f"{app}_O-{object_id}_R-{ref_id}"


def _parameter(parent: Element, app: str, key: str) -> None:
    SubElement(parent, "ParameterRefRef", {"RefId": _pref(app, key)})


def _object_ref(parent: Element, app: str, key: str, variant: str | None = None) -> None:
    SubElement(parent, "ComObjectRefRef", {"RefId": _oref(app, key, variant)})


def _vietnamese_name_key(button: int, presentation: str, name_slot: str | None) -> str:
    if presentation == "button_scene":
        if name_slot is None:
            raise ValueError("Scene object presentation requires a scene name slot")
        return f"NC{button}-{name_slot}VietnameseName"
    if presentation == "button_switch":
        return f"NC{button}-VietnameseName"
    if presentation in {"endpoint_dimmer", "endpoint_cct"}:
        return f"NC{button}-DimmerVietnameseName"
    if presentation == "endpoint_curtain":
        return f"NC{button}-CurtainVietnameseName"
    raise ValueError(f"Unknown object presentation '{presentation}'")


def _object(
    parent: Element,
    app: str,
    key: str,
    variant: str | None = None,
    *,
    name_button: int | None = None,
    name_slot: str | None = None,
) -> None:
    """Add an object, optionally selecting its ETS name by language.

    English ComObjectRef entries carry the ``{{0:...}}`` placeholder and
    point to the TypeText English name ParameterRef.  Vietnamese names are
    numeric preset values for the firmware, so the branch selects a static
    translated ComObjectRef for the selected preset instead of asking ETS to
    cast an enumeration value through ``TextParameterRefId``.
    """
    if variant is None or name_button is None:
        _object_ref(parent, app, key, variant)
        return
    # The object reference must not depend on its label: ETS associates GAs
    # with that reference. Only the ETS-only text parameter changes.
    _object_ref(parent, app, key, f"{variant}_en")
    # ParameterCalculations update the display-only name, including empty text.


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


def _name_value(parent: Element, app: str, button: int, language_key: str, vietnamese_key: str) -> None:
    language = _choose(parent, app, language_key)
    english = SubElement(language, "when", {"test": "0"})
    _parameter(english, app, f"NC{button}-EnglishName")
    vietnamese = SubElement(language, "when", {"test": "1"})
    _parameter(vietnamese, app, vietnamese_key)


def _name(parent: Element, app: str, button: int, function_key: str) -> None:
    language_key = _name_language(parent, app, button)
    language = _choose(parent, app, language_key)
    english = SubElement(language, "when", {"test": "0"})
    _parameter(english, app, f"NC{button}-EnglishName")
    vietnamese = SubElement(language, "when", {"test": "1"})
    function = _choose(vietnamese, app, function_key)
    for test in ("2", "3"):
        dimmer = SubElement(function, "when", {"test": test})
        _parameter(dimmer, app, f"NC{button}-DimmerVietnameseName")
    curtain = SubElement(function, "when", {"test": "4"})
    _parameter(curtain, app, f"NC{button}-CurtainVietnameseName")


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
    recall = SubElement(single, "when", {"test": "1"})
    _parameter(recall, app, f"{prefix}-Scene1")
    _scene_name(recall, app, button, "Scene1")
    cycle = SubElement(single, "when", {"test": "2"})
    _parameter(cycle, app, f"{prefix}-SceneCycleCount")
    _parameter(cycle, app, f"{prefix}-SceneCycleMode")
    count = _choose(cycle, app, f"{prefix}-SceneCycleCount")
    for value in range(2, 6):
        count_branch = SubElement(count, "when", {"test": str(value)})
        for index in range(1, value + 1):
            _ruler(count_branch, app, separator_ids)
            _parameter(count_branch, app, f"{prefix}-Scene{index}")
            _scene_name(count_branch, app, button, f"Scene{index}")
    _headline(parent, app, separator_ids, "Communications", bold=False)
    communication_action = _choose(parent, app, f"{prefix}-SceneSingleAction")
    recall_communication = SubElement(communication_action, "when", {"test": "1"})
    _object(
        recall_communication,
        app,
        f"{prefix}-Scene1",
        "button_scene",
        name_button=button,
        name_slot="Scene1",
    )
    cycle_communication = SubElement(communication_action, "when", {"test": "2"})
    cycle_count = _choose(cycle_communication, app, f"{prefix}-SceneCycleCount")
    for value in range(2, 6):
        count_branch = SubElement(cycle_count, "when", {"test": str(value)})
        for index in range(1, value + 1):
            scene_slot = f"Scene{index}"
            _object(
                count_branch,
                app,
                f"{prefix}-{scene_slot}",
                "button_scene",
                name_button=button,
                name_slot=scene_slot,
            )


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
    _name_value(switch_name, app, button, language_key, f"NC{button}-VietnameseName")
    _parameter(block, app, function_key)
    function = _choose(block, app, function_key)
    switch = SubElement(function, "when", {"test": "1"})
    _object(switch, app, f"NC{button}-SwitchControl", "button_switch", name_button=button)
    _object(switch, app, f"NC{button}-SwitchStatus", "button_switch", name_button=button)
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
        "Text": f"Button group {anchor} + {partner} settings",
    })
    function_key = f"NC{anchor}-PairedFunction"
    _name(block, app, anchor, function_key)
    _parameter(block, app, function_key)
    function = _choose(block, app, function_key)

    dimmer = SubElement(function, "when", {"test": "3"})
    for key in ("SwitchControl", "SwitchStatus", "BrightnessRelative", "BrightnessStatus"):
        _object(dimmer, app, f"NC{anchor}-{key}", "endpoint_dimmer", name_button=anchor)
    dimming_mode_key = f"NC{anchor}-DimmingMode"
    _parameter(dimmer, app, dimming_mode_key)
    dimming_mode = _choose(dimmer, app, dimming_mode_key)
    fixed_step = SubElement(dimming_mode, "when", {"test": "1"})
    _parameter(fixed_step, app, f"NC{anchor}-DimmingStep")
    _parameter(fixed_step, app, f"NC{anchor}-RepeatInterval")
    _appearance(dimmer, app, anchor)

    cct = SubElement(function, "when", {"test": "2"})
    for key in ("SwitchControl", "SwitchStatus", "BrightnessRelative", "BrightnessStatus", "ColorTemperature", "ColorTemperatureStatus"):
        _object(cct, app, f"NC{anchor}-{key}", "endpoint_cct", name_button=anchor)
    _appearance(cct, app, anchor)

    curtain = SubElement(function, "when", {"test": "4"})
    _parameter(curtain, app, f"NC{anchor}-CurtainIcon")
    _parameter(curtain, app, f"NC{anchor}-CurtainTravelTime")
    for key in ("CurtainMove", "CurtainStop", "CurtainPosition"):
        _object(curtain, app, f"NC{anchor}-{key}", "endpoint_curtain", name_button=anchor)


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
    _headline(merge_config, app, separator_ids, "Button grouping settings", bold=False)
    four_config = SubElement(merge_config, "when", {"test": "4"})
    _area_controls(four_config, app, "Top (Buttons 1-4)", "TopMergeDirection", "TopHorizontalSelection", "TopVerticalSelection", separator_ids)
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
    four = SubElement(variant, "when", {"test": "4"})
    _area_pages(four, app, (1, 2, 3, 4), "Top", "TopMergeDirection", "TopHorizontalSelection", "TopVerticalSelection", block_ids, separator_ids)

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
