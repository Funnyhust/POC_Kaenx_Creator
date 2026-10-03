from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True, slots=True)
class DatapointType:
    id: str
    size: str


DPT = {
    "switch": DatapointType("DPST-1-1", "1 Bit"),
    "stop_step": DatapointType("DPST-1-7", "1 Bit"),
    "up_down": DatapointType("DPST-1-8", "1 Bit"),
    "dimming": DatapointType("DPST-3-7", "4 Bit"),
    # Absolute color temperature value (Kelvin / mired value as defined by
    # the KNX application profile), not a relative dimming step.
    "color_temperature": DatapointType("DPST-7-600", "2 Bytes"),
    "scaling": DatapointType("DPST-5-1", "1 Byte"),
    "counter_0_255": DatapointType("DPST-5-10", "1 Byte"),
    "temperature": DatapointType("DPST-9-1", "2 Bytes"),
    "humidity": DatapointType("DPST-9-7", "2 Bytes"),
    "scene_control": DatapointType("DPST-18-1", "1 Byte"),
    "date_time": DatapointType("DPST-19-1", "8 Bytes"),
    "hvac_mode": DatapointType("DPST-20-105", "1 Byte"),
}
