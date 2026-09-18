"""Stable V2 download-memory contract; V1 fields keep their original offsets."""

SEGMENT_ID = "M-035A_A-2027-01-0001_RS-04-00000"
SEGMENT_SIZE = 1696

GLOBAL = {
    "device_variant": 0,
    "top_layout": 1,
    "bottom_layout": 2,
    "six_pair_15": 3,
    "six_pair_24": 4,
    "six_pair_68": 5,
    # Offset 6 is reserved from V1; name language is configured per button.
    "screen_brightness": 7,
    # Offset 8 is reserved from the first V2 draft.
    "led_brightness": 9,
    "turn_off_screen_after": 10,  # 16-bit value: offsets 10..11
    # Offset 12 is reserved from the first V2 draft.
    "proximity_distance": 13,
    # Offset 14 is reserved from the first V2 draft.
    "top_horizontal_selection": 1680,
    "top_vertical_selection": 1681,
    "bottom_horizontal_selection": 1682,
    "bottom_vertical_selection": 1683,
}

ENDPOINT_BASE = 16
ENDPOINT_SIZE = 208


def endpoint(button: int, field: int) -> int:
    if button not in range(1, 9):
        raise ValueError(f"Invalid button NC{button}")
    return ENDPOINT_BASE + (button - 1) * ENDPOINT_SIZE + field


# Field offsets inside every NC block. Paired endpoints use the anchor NC block.
INDEPENDENT_FUNCTION = 0
PAIRED_FUNCTION = 1
VIETNAMESE_NAME = 2
ENGLISH_NAME = 3  # 20 bytes: offsets 3..22
ICON = 23
DIMMING_MODE = 24
DIMMING_STEP = 25
REPEAT_INTERVAL = 26
SCENE_SINGLE_ACTION = 27
SCENE_CYCLE_COUNT = 28
SCENE_1 = 29  # five bytes: offsets 29..33
SCENE_DOUBLE_ACTION = 34
SCENE_DOUBLE_NUMBER = 35
SCENE_LONG_ACTION = 36
SCENE_LONG_NUMBER = 37
SWITCH_MODE = 38
SWITCH_STARTUP = 39
AUTO_MODE_TYPE = 40
AUTO_TIME = 41  # 32-bit value: offsets 41..44
SCENE_OBJECTS = 45
# Offset 46 is reserved from the first V2 draft.
CURTAIN_ICON = 47
CURTAIN_TRAVEL_TIME = 48  # 16-bit value: offsets 48..49
NAME_LANGUAGE = 50
SCENE_ENGLISH_NAME_1 = 51  # seven 20-byte names: Scene 1..5, Double, Long
SCENE_VIETNAMESE_NAME_1 = 191  # seven numeric preset codes: offsets 191..197
SCENE_ICON_1 = 198  # seven icons: Scene 1..5, Double, Long
