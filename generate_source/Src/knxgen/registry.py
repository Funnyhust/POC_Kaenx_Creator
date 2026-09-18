from __future__ import annotations

from importlib import import_module
from pathlib import Path


_DEVICES = {
    "knob": "knxgen.devices.knob.generator",
    "relay_4ch": "knxgen.devices.relay_4ch.generator",
    "shutter_4relay": "knxgen.devices.shutter_4relay.generator",
    "scene_button_4gang": "knxgen.devices.scene_button_4gang.generator",
    "6_8_buttons_display": "knxgen.devices.6_8_buttons_display.generator",
}


def available_devices() -> tuple[str, ...]:
    return tuple(_DEVICES)


def generate(
    device_key: str,
    *,
    output_dir: Path | None,
    validate: bool,
):
    try:
        module_name = _DEVICES[device_key]
    except KeyError as exc:
        choices = ", ".join(available_devices())
        raise ValueError(
            f"Unknown device '{device_key}'. Available: {choices}"
        ) from exc
    module = import_module(module_name)
    return module.generate(
        output_dir=output_dir,
        validate=validate,
    )
