from __future__ import annotations

from dataclasses import dataclass


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
    ("CctRelative", 4, "Relative color temperature", "Warmer / cooler", "4 Bit", "DPST-3-7", "send"),
    ("CctStatus", 5, "Color temperature status", "Color temperature feedback", "2 Bytes", "DPST-7-600", "status"),
    ("CurtainMove", 6, "Curtain move", "Open / close", "1 Bit", "DPST-1-8", "send"),
    ("CurtainStop", 7, "Curtain stop / step", "Stop moving curtain", "1 Bit", "DPST-1-7", "send"),
    ("CurtainPosition", 8, "Curtain position status", "Absolute curtain position", "1 Byte", "DPST-5-1", "status"),
    ("SceneSingle", 9, "Scene single press / touch", "Recall or store scene", "1 Byte", "DPST-18-1", "send"),
    ("SceneDouble", 10, "Scene double press", "Recall or store scene", "1 Byte", "DPST-18-1", "send"),
    ("SceneLong", 11, "Scene long press", "Recall or store scene", "1 Byte", "DPST-18-1", "send"),
)


def all_objects() -> tuple[ComObjectDef, ...]:
    objects: list[ComObjectDef] = []
    for button in range(1, 9):
        base = (button - 1) * 12
        for key, delta, text, function, size, dpt, role in ENDPOINT_OBJECTS:
            objects.append(ComObjectDef(f"NC{button}-{key}", base + delta, f"Button {button} - {text}", function, size, dpt, role))
    objects.extend((
        ComObjectDef("Temperature", 128, "Room temperature", "Measured room temperature", "2 Bytes", "DPST-9-1", "sensor"),
        ComObjectDef("Humidity", 129, "Relative humidity", "Measured relative humidity", "2 Bytes", "DPST-9-7", "sensor"),
    ))
    return tuple(objects)
