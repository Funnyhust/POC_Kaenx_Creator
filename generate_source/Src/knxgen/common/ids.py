from __future__ import annotations


def application_id(manufacturer_id: str, suffix: str) -> str:
    return f"{manufacturer_id}_A-{suffix}"


def hardware_id(manufacturer_id: str, suffix: str) -> str:
    return f"{manufacturer_id}_H-{suffix}"


def ensure_manufacturer_prefix(identifier: str, manufacturer_id: str) -> None:
    if not identifier.startswith(f"{manufacturer_id}_"):
        raise ValueError(f"ID '{identifier}' does not belong to {manufacturer_id}")

