"""Kaenx-compatible numeric XML IDs mapped to descriptive source keys.

Kaenx Creator parses the suffixes of Parameter, ParameterRef, ComObject,
ComObjectRef and Dynamic block IDs as integers.  Human-readable names therefore
live in source keys and XML Name/Text fields, while serialized IDs stay numeric.
"""

from .com_objects import all_objects


GLOBAL_PARAMETER_KEYS = (
    "DeviceVariant",
    "TopMergeDirection",
    "BottomMergeDirection",
    "SixPair15",
    "SixPair24",
    "SixPair68",
    "ScreenBrightness",
    "LedBrightness",
    "TurnOffScreenAfter",
    "ProximityDistance",
    "TopHorizontalSelection",
    "TopVerticalSelection",
    "BottomHorizontalSelection",
    "BottomVerticalSelection",
)


def _endpoint_keys(button: int) -> tuple[str, ...]:
    prefix = f"NC{button}"
    return (
        f"{prefix}-IndependentFunction",
        f"{prefix}-PairedFunction",
        f"{prefix}-NameLanguage",
        f"{prefix}-VietnameseName",
        f"{prefix}-EnglishName",
        f"{prefix}-Icon",
        f"{prefix}-CurtainIcon",
        f"{prefix}-CurtainTravelTime",
        f"{prefix}-DimmingMode",
        f"{prefix}-DimmingStep",
        f"{prefix}-RepeatInterval",
        f"{prefix}-SceneSingleAction",
        f"{prefix}-SceneCycleCount",
        *(f"{prefix}-Scene{index}" for index in range(1, 6)),
        f"{prefix}-SceneDoubleAction",
        f"{prefix}-SceneDoubleNumber",
        f"{prefix}-SceneLongAction",
        f"{prefix}-SceneLongNumber",
        f"{prefix}-SwitchMode",
        f"{prefix}-SwitchStartup",
        f"{prefix}-AutoModeType",
        f"{prefix}-AutoTime",
        f"{prefix}-SceneObjects",
        *(f"{prefix}-Scene{index}EnglishName" for index in range(1, 6)),
        *(f"{prefix}-Scene{index}VietnameseName" for index in range(1, 6)),
        f"{prefix}-SceneDoubleEnglishName",
        f"{prefix}-SceneDoubleVietnameseName",
        f"{prefix}-SceneLongEnglishName",
        f"{prefix}-SceneLongVietnameseName",
        *(f"{prefix}-Scene{index}Icon" for index in range(1, 6)),
        f"{prefix}-SceneDoubleIcon",
        f"{prefix}-SceneLongIcon",
    )


PARAMETER_KEYS = GLOBAL_PARAMETER_KEYS + tuple(
    key for button in range(1, 9) for key in _endpoint_keys(button)
)
PARAMETER_IDS = {key: index for index, key in enumerate(PARAMETER_KEYS, start=1)}

COM_OBJECT_IDS = {
    item.key: index for index, item in enumerate(all_objects(), start=1)
}

assert len(PARAMETER_IDS) == 398
assert len(COM_OBJECT_IDS) == 98
