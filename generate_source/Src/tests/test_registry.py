from knxgen.registry import available_devices


def test_registered_devices() -> None:
    assert available_devices() == (
        "knob",
        "relay_4ch",
        "shutter_4relay",
        "scene_button_4gang",
        "6_8_buttons_display",
    )
