"""Stable download-memory contract for the 4/6/8-button display.

Offset ``0`` is deliberately reserved for the hidden ETS marker byte.  All
device data starts at offset ``1`` so the marker remains available as a stable
header when the application gains more parameters in future revisions.
"""

SEGMENT_ID = "M-035A_A-2027-01-0001_RS-04-00000"
SENTINEL_OFFSET = 0
SEGMENT_SIZE = 1697

GLOBAL = {
    "device_variant": 1,
    "top_layout": 2,
    "bottom_layout": 3,
    "six_pair_13": 4,
    "six_pair_57": 5,
    "six_pair_26": 6,
    # Offset 7 is reserved from V1; name language is configured per button.
    "screen_brightness": 8,
    # Offset 9 is reserved from the first V2 draft.
    "led_brightness": 10,
    "turn_off_screen_after": 11,  # 16-bit value: offsets 11..12
    # Offset 13 is reserved from the first V2 draft.
    "proximity_distance": 14,
    # Offset 15 is reserved from the first V2 draft.
    "top_horizontal_selection": 1681,
    "top_vertical_selection": 1682,
    "bottom_horizontal_selection": 1683,
    "bottom_vertical_selection": 1684,
}

ENDPOINT_BASE = 17
ENDPOINT_SIZE = 208


def endpoint(button: int, field: int) -> int:
    if button not in range(1, 9):
        raise ValueError(f"Invalid button NC{button}")
    return ENDPOINT_BASE + (button - 1) * ENDPOINT_SIZE + field


# Field offsets inside every NC block. Paired endpoints use the anchor NC block.
INDEPENDENT_FUNCTION = 0
PAIRED_FUNCTION = 1
VIETNAMESE_NAME = 2
ENGLISH_NAME = 3  # 15 ETS characters in the fixed 20-byte slot at offsets 3..22
ICON = 23
DIMMING_MODE = 24
DIMMING_STEP = 25
REPEAT_INTERVAL = 26
SCENE_SINGLE_ACTION = 27
SCENE_CYCLE_COUNT = 28
SCENE_1 = 29  # five bytes: offsets 29..33
# Category-specific Vietnamese names use two bytes that were reserved for the
# removed double/long-press scene fields. The active function selects which
# byte is used; switch, dimmer/CCT and curtain names remain independent.
DIMMER_VIETNAMESE_NAME = 34
CURTAIN_VIETNAMESE_NAME = 35
# Offsets 36..37 remain reserved.
SWITCH_MODE = 38
SWITCH_STARTUP = 39
AUTO_MODE_TYPE = 40
AUTO_TIME = 41  # 32-bit value: offsets 41..44
SCENE_CYCLE_MODE = 45
# Offset 46 is reserved from the first V2 draft.
CURTAIN_ICON = 47
CURTAIN_TRAVEL_TIME = 48  # 16-bit value: offsets 48..49
NAME_LANGUAGE = 50
SCENE_ENGLISH_NAME_1 = 51  # five fixed 20-byte slots; ETS accepts 15 characters
SCENE_VIETNAMESE_NAME_1 = 191  # five numeric preset codes: offsets 191..195
SCENE_ICON_1 = 198  # five icons: Scene 1..5
