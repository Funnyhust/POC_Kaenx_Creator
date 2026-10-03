"""Kaenx-compatible numeric XML IDs mapped to descriptive source keys.

Kaenx Creator parses the suffixes of Parameter, ParameterRef, ComObject,
ComObjectRef and Dynamic block IDs as integers.  Human-readable names therefore
live in source keys and XML Name/Text fields, while serialized IDs stay numeric.
"""

from .com_objects import all_objects
from .translations import labels_for_presentation


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
        f"{prefix}-SceneCycleMode",
        *(f"{prefix}-Scene{index}" for index in range(1, 6)),
        f"{prefix}-SwitchMode",
        f"{prefix}-SwitchStartup",
        f"{prefix}-AutoModeType",
        f"{prefix}-AutoTime",
        *(f"{prefix}-Scene{index}EnglishName" for index in range(1, 6)),
        *(f"{prefix}-Scene{index}VietnameseName" for index in range(1, 6)),
        *(f"{prefix}-Scene{index}Icon" for index in range(1, 6)),
    )


_BASE_PARAMETER_KEYS = GLOBAL_PARAMETER_KEYS + tuple(
    key for button in range(1, 9) for key in _endpoint_keys(button)
)
PARAMETER_IDS = {key: index for index, key in enumerate(_BASE_PARAMETER_KEYS, start=1)}

# Keep all existing parameter IDs stable.  The hidden marker is deliberately
# assigned after the existing table even though its memory byte is at offset 0.
SENTINEL_PARAMETER_KEY = "FixedValueDD"
PARAMETER_IDS[SENTINEL_PARAMETER_KEY] = len(PARAMETER_IDS) + 1

# These parameters share the per-button block but use separate reserved bytes,
# allowing each device function to keep its own Vietnamese list/value.
CATEGORY_NAME_PARAMETER_KEYS = tuple(
    key
    for button in range(1, 9)
    for key in (
        f"NC{button}-DimmerVietnameseName",
        f"NC{button}-CurtainVietnameseName",
    )
)
for key in CATEGORY_NAME_PARAMETER_KEYS:
    PARAMETER_IDS[key] = len(PARAMETER_IDS) + 1

PARAMETER_KEYS = _BASE_PARAMETER_KEYS + (
    SENTINEL_PARAMETER_KEY,
) + CATEGORY_NAME_PARAMETER_KEYS

COM_OBJECT_IDS = {
    item.key: index for index, item in enumerate(all_objects(), start=1)
}

def _named_object_variants(base: str) -> tuple[str, ...]:
    """Return safe ETS object-name variants for one presentation.

    English names are TypeText values and can therefore be attached through
    ``TextParameterRefId``.  Vietnamese names are Value/Enumeration values
    (the firmware receives the numeric code), so they must be represented by
    one static ComObjectRef per preset.  ETS cannot cast an enumeration value
    to the string required by ``TextParameterRefId``; emitting ``*_vi_N``
    variants lets the Dynamic choose select a fixed, already-translated text
    instead.
    """
    labels = labels_for_presentation(base)
    return (
        f"{base}_en",
        *(f"{base}_vi_{value}" for value, _ in labels),
    )


OBJECT_REF_VARIANTS = tuple(
    variant
    for base in (
        "button_switch",
        "button_scene",
        "endpoint_dimmer",
        "endpoint_cct",
        "endpoint_curtain",
    )
    for variant in _named_object_variants(base)
)
COM_OBJECT_REF_IDS = {
    (key, variant): 1000 + object_id * (len(OBJECT_REF_VARIANTS) + 1) + variant_index
    for key, object_id in COM_OBJECT_IDS.items()
    for variant_index, variant in enumerate(OBJECT_REF_VARIANTS, start=1)
}

DISPLAY_NAME_PARAMETER_KEYS = tuple(
    f"NC{button}-{slot}ObjectName"
    for button in range(1, 9)
    for slot in ("button_switch", "endpoint_dimmer", "endpoint_cct", "endpoint_curtain", *(f"Scene{i}" for i in range(1, 6)))
)
for key in DISPLAY_NAME_PARAMETER_KEYS:
    PARAMETER_IDS[key] = len(PARAMETER_IDS) + 1
PARAMETER_KEYS += DISPLAY_NAME_PARAMETER_KEYS

assert len(PARAMETER_IDS) == 407
assert len(COM_OBJECT_IDS) == 114
