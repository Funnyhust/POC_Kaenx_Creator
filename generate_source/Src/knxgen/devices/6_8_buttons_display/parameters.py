from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True, slots=True)
class EnumType:
    key: str
    name: str
    values: tuple[tuple[int, str], ...]
    default: int


ENUM_TYPES = (
    EnumType("DeviceVariant", "Device variant (6 or 8 buttons)", ((6, "6 buttons"), (8, "8 buttons")), 8),
    EnumType("MergeDirection", "Endpoint merging direction", ((0, "No endpoint merging"), (1, "Horizontal"), (2, "Vertical")), 0),
    EnumType("TopHorizontalSelection", "Horizontal endpoint merging in top area", ((1, "Upper row: Button 1 + Button 2"), (2, "Lower row: Button 3 + Button 4"), (3, "Both rows")), 3),
    EnumType("TopVerticalSelection", "Vertical endpoint merging in top area", ((1, "Left column: Button 1 + Button 3"), (2, "Right column: Button 2 + Button 4"), (3, "Both columns")), 3),
    EnumType("BottomHorizontalSelection", "Horizontal endpoint merging in bottom area", ((1, "Upper row: Button 5 + Button 6"), (2, "Lower row: Button 7 + Button 8"), (3, "Both rows")), 3),
    EnumType("BottomVerticalSelection", "Vertical endpoint merging in bottom area", ((1, "Left column: Button 5 + Button 7"), (2, "Right column: Button 6 + Button 8"), (3, "Both columns")), 3),
    EnumType("PairMode", "Endpoint merging mode for a button pair", ((0, "Keep as separate endpoints"), (1, "Merge as one endpoint")), 0),
    EnumType("NameLanguage", "Display name language", ((0, "English (custom text)"), (1, "Vietnamese (preset list)")), 0),
    EnumType("IndependentFunction", "Independent button function", ((0, "Disabled"), (1, "Switch"), (2, "Scene control")), 0),
    EnumType("PairedFunction", "Endpoint function", ((0, "Disabled"), (2, "CCT"), (3, "Dimmer"), (4, "Shutter/Curtain")), 3),
    EnumType("Icon", "Light icon", tuple((value, f"Icon {value}") for value in range(1, 21)), 1),
    EnumType("CurtainIcon", "Shutter/Curtain icon", ((1, "Icon 1"), (2, "Icon 2")), 1),
    EnumType("DimmingMode", "Dimming Behavior", ((0, "Start/Stop"), (1, "Step")), 0),
    EnumType("DimmingStep", "Step Size", ((1, "100"), (2, "50"), (3, "25"), (4, "12.5"), (5, "6.25"), (6, "3.125"), (7, "1.5625")), 3),
    EnumType("SceneSingleAction", "Single press scene action", ((0, "No action"), (1, "Recall scene"), (2, "Scene cycling"), (3, "Store scene")), 1),
    EnumType("SceneExtraAction", "Double / long press scene action", ((0, "No action"), (1, "Recall scene"), (2, "Store scene")), 0),
    EnumType("SceneNumber1To64", "Scene number", tuple((value, f"Scene No. {value}") for value in range(1, 65)), 1),
    EnumType("SceneCycleCount", "Number of scenes (cycling)", tuple((value, f"{value} Scenes") for value in range(2, 6)), 2),
    EnumType("SwitchMode", "Switch operating mode", ((0, "Disabled"), (1, "Toggle"), (2, "Auto ON / OFF"), (3, "Momentary")), 1),
    EnumType("StartupBehavior", "Switch behavior after bus voltage recovery", ((0, "Restore last value"), (1, "Set OFF"), (2, "Set ON")), 0),
    EnumType("AutoModeType", "Automatic switch timer action", ((0, "Auto OFF"), (1, "Auto ON")), 0),
    EnumType("SceneObjects", "Number of scene communication objects", ((1, "1 Object (shared)"), (3, "3 Objects (one per action)")), 1),
)


ICONS = next(item.values for item in ENUM_TYPES if item.key == "Icon")
