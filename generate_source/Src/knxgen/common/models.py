from __future__ import annotations

from dataclasses import dataclass
class GenerationNotImplementedError(RuntimeError):
    """Raised until a legacy product generator has been migrated safely."""


@dataclass(frozen=True, slots=True)
class Manufacturer:
    key: str
    id: str
    name: str
    default_language: str


@dataclass(frozen=True, slots=True)
class ProductSpec:
    device_key: str
    manufacturer: str
    product_name: str
    order_number: str
    serial_number: str
    hardware_version: int
    bus_current_ma: int
    rail_mounted: bool
    application_name: str
    application_number: int
    application_version: int
    mask_version: str
    min_ets_version: str
    schema_version: int
    secure: bool
    medium: str
    baseline_sha256: str
    expected_parameter_count: int
    expected_com_object_count: int
