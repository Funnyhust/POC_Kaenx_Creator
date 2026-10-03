from __future__ import annotations

from dataclasses import dataclass

from .translations import labels_for_presentation


@dataclass(frozen=True, slots=True)
class ComObjectDef:
    key: str
    number: int
    text: str
    function: str
    size: str
    dpt: str
    role: str


ENDPOINT_OBJECTS = (
    ("SwitchControl", 0, "Switch control", "Switch / dimmer touch control", "1 Bit", "DPST-1-1", "send"),
    ("SwitchStatus", 1, "Switch status", "Switch status feedback", "1 Bit", "DPST-1-1", "status"),
    ("BrightnessRelative", 2, "Relative brightness", "Brighter / darker", "4 Bit", "DPST-3-7", "send"),
    ("BrightnessStatus", 3, "Brightness status", "Absolute brightness feedback", "1 Byte", "DPST-5-1", "status"),
    # CCT is an absolute 2-byte value on KNX.  DPST-3-7 is reserved for
    # relative dimming/start-stop or step control and must not be used for
    # color-temperature values.
    ("ColorTemperature", 4, "Color temperature", "Color temperature", "2 Bytes", "DPST-7-600", "send"),
    ("ColorTemperatureStatus", 5, "Color temperature status", "Color temperature status", "2 Bytes", "DPST-7-600", "status"),
    ("CurtainMove", 6, "Curtain move", "Open / close", "1 Bit", "DPST-1-8", "send"),
    ("CurtainStop", 7, "Curtain stop / step", "Stop moving curtain", "1 Bit", "DPST-1-7", "send"),
    ("CurtainPosition", 8, "Curtain position status", "Absolute curtain position", "1 Byte", "DPST-5-1", "status"),
    *(
        (f"Scene{index}", 8 + index, f"Scene {index} activation", "Scene control", "1 Byte", "DPST-18-1", "send")
        for index in range(1, 6)
    ),
)


def all_objects() -> tuple[ComObjectDef, ...]:
    objects: list[ComObjectDef] = []
    for button in range(1, 9):
        # Keep a 14-number block per button: nine common objects plus five
        # independent scene activation objects.
        base = 1 + (button - 1) * 14
        for key, delta, text, function, size, dpt, role in ENDPOINT_OBJECTS:
            objects.append(ComObjectDef(f"NC{button}-{key}", base + delta, f"Button {button} - {text}", function, size, dpt, role))
    objects.extend((
        ComObjectDef("Temperature", 129, "Temperature Sensor", "Temperature", "2 Bytes", "DPST-9-1", "sensor"),
        ComObjectDef("Humidity", 130, "Humidity Sensor", "Humidity", "2 Bytes", "DPST-9-7", "sensor"),
    ))
    return tuple(objects)


def ref_presentation(key: str, variant: str) -> tuple[str, str] | None:
    """ETS-visible Text and FunctionText, aligned with established Lumi products."""
    if not key.startswith("NC"):
        return None
    prefix, role = key.split("-", 1)
    button = int(prefix[2:])
    base_variant, language, vietnamese_value = _variant_parts(variant)
    if language == "en":
        display_name = "{{0:...}}"
    elif language == "vi" and vietnamese_value is not None:
        display_name = dict(labels_for_presentation(base_variant)).get(vietnamese_value)
        if display_name is None:
            return None
    else:
        return None
    if base_variant == "button_switch":
        functions = {"SwitchControl": "Switch", "SwitchStatus": "Switch status"}
        return (f"Button {button} - {display_name}", functions[role]) if role in functions else None
    if base_variant == "button_scene":
        if not role.startswith("Scene") or not role[5:].isdigit():
            return None
        scene_index = int(role[5:])
        if scene_index not in range(1, 6):
            return None
        return (f"Button {button} - {display_name}", "Scene control")
    endpoint_functions = {
        "endpoint_dimmer": {
            "SwitchControl": "Switch", "SwitchStatus": "Switch status",
            "BrightnessRelative": "Dimming control", "BrightnessStatus": "Brightness status",
        },
        "endpoint_cct": {
            "SwitchControl": "Switch", "SwitchStatus": "Switch status",
            "BrightnessRelative": "Brightness control", "BrightnessStatus": "Brightness status",
            "ColorTemperature": "Color temperature", "ColorTemperatureStatus": "Color temperature status",
        },
        "endpoint_curtain": {
            "CurtainMove": "Up/down", "CurtainStop": "Stop", "CurtainPosition": "Position status",
        },
    }
    functions = endpoint_functions.get(base_variant, {})
    return (f"Button group {button} - {display_name}", functions[role]) if role in functions else None


def _variant_parts(variant: str) -> tuple[str, str | None, int | None]:
    """Split ``<presentation>_<language>[_<preset>]`` safely."""
    if variant.endswith("_en"):
        return variant[:-3], "en", None
    marker = "_vi_"
    if marker in variant:
        base, value = variant.rsplit(marker, 1)
        if value.isdigit():
            return base, "vi", int(value)
    return variant, None, None


def ref_text_parameter_key(key: str, variant: str) -> str | None:
    """Return the button/scene name parameter used by a dynamic ComObjectRef text.

    Kaenx Creator resolves ``TextParameterRefId`` against a ParameterRef and
    substitutes it into the ``{{0:...}}`` placeholder.  Keep the language
    choice in the dynamic tree, so the same object can show either the custom
    English name or the ETS-safe Vietnamese preset label.
    """
    if not key.startswith("NC"):
        return None
    _, language, _ = _variant_parts(variant)
    if language != "en":
        return None
    prefix, role = key.split("-", 1)
    button = int(prefix[2:])
    if role.startswith("Scene") and role[5:].isdigit():
        scene_index = int(role[5:])
        if scene_index in range(1, 6):
            return f"NC{button}-Scene{scene_index}ObjectName"
    base_variant, _, _ = _variant_parts(variant)
    return f"NC{button}-{base_variant}ObjectName"
