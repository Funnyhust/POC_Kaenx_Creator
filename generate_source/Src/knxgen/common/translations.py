from __future__ import annotations


def translation_key(device_key: str, name: str) -> str:
    return f"{device_key}.{name}"

