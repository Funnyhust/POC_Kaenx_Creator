from __future__ import annotations

from dataclasses import dataclass
import hashlib
from pathlib import Path
import shutil
from xml.etree import ElementTree as ET

from knxgen.common.config import load_manufacturer
from knxgen.common.formatter import format_xml
from knxgen.common.models import ProductSpec


OUTPUT_FILENAME = "prod.xml"


@dataclass(frozen=True, slots=True)
class GeneratedProduct:
    output_dir: Path
    product_xml: Path


def _remove_packaging_artifacts(build_dir: Path) -> None:
    """Keep the generator contract to one Kaenx Creator input file."""
    for stale_name in ("product.xml", "manifest.json"):
        stale = build_dir / stale_name
        if stale.is_file():
            stale.unlink()
    for stale in build_dir.glob("*.knxprod"):
        if stale.is_file():
            stale.unlink()


def write_generated_product(
    root: ET.Element,
    spec: ProductSpec,
    *,
    output_dir: Path | None,
    validate: bool,
) -> GeneratedProduct:
    """Write a programmatically built KNX document as the sole prod.xml."""
    manufacturer = load_manufacturer(spec.manufacturer)
    parameter_count = sum(1 for element in root.iter() if _local_name(element.tag) == "Parameter")
    com_object_count = sum(1 for element in root.iter() if _local_name(element.tag) == "ComObject")
    if spec.expected_parameter_count and parameter_count != spec.expected_parameter_count:
        raise ValueError(f"Parameter count changed for '{spec.device_key}': {parameter_count}")
    if spec.expected_com_object_count and com_object_count != spec.expected_com_object_count:
        raise ValueError(f"ComObject count changed for '{spec.device_key}': {com_object_count}")
    target_root = output_dir or Path(__file__).resolve().parents[2] / "Generated"
    build_dir = target_root / spec.device_key
    build_dir.mkdir(parents=True, exist_ok=True)
    product_xml = build_dir / OUTPUT_FILENAME
    product_xml.write_bytes(format_xml(root))
    _remove_packaging_artifacts(build_dir)
    if validate:
        from knxgen.common.validator import validate_internal_references
        from knxgen.common.validator import validate_kaenx_creator_import_contract
        from knxgen.common.validator import validate_product_xml

        validate_product_xml(product_xml, spec, manufacturer.id)
        parsed_root = ET.parse(product_xml).getroot()
        validate_internal_references(parsed_root)
        validate_kaenx_creator_import_contract(parsed_root, spec)
    return GeneratedProduct(output_dir=build_dir, product_xml=product_xml)


def _local_name(tag: str) -> str:
    return tag.rsplit("}", 1)[-1]


def generate_from_baseline(
    spec: ProductSpec,
    baseline: Path,
    *,
    output_dir: Path | None,
    validate: bool,
) -> GeneratedProduct:
    """Generate the single XML source consumed by Kaenx Creator."""
    manufacturer = load_manufacturer(spec.manufacturer)
    target_root = output_dir or Path(__file__).resolve().parents[2] / "Generated"
    build_dir = target_root / spec.device_key
    build_dir.mkdir(parents=True, exist_ok=True)

    tree = ET.parse(baseline)
    root = tree.getroot()
    baseline_sha256 = hashlib.sha256(baseline.read_bytes()).hexdigest()
    parameter_count = sum(
        1 for element in root.iter() if _local_name(element.tag) == "Parameter"
    )
    com_object_count = sum(
        1 for element in root.iter() if _local_name(element.tag) == "ComObject"
    )
    if baseline_sha256 != spec.baseline_sha256:
        raise ValueError(
            f"Baseline hash changed for '{spec.device_key}': {baseline_sha256}"
        )
    if parameter_count != spec.expected_parameter_count:
        raise ValueError(
            f"Parameter count changed for '{spec.device_key}': {parameter_count}"
        )
    if com_object_count != spec.expected_com_object_count:
        raise ValueError(
            f"ComObject count changed for '{spec.device_key}': {com_object_count}"
        )

    product_xml = build_dir / OUTPUT_FILENAME
    shutil.copyfile(baseline, product_xml)

    if validate:
        from knxgen.common.validator import validate_product_xml

        validate_product_xml(product_xml, spec, manufacturer.id)

    # Remove artifacts produced by the former packaging workflow. The generator's
    # public contract is now exactly one prod.xml file per device directory.
    _remove_packaging_artifacts(build_dir)

    return GeneratedProduct(output_dir=build_dir, product_xml=product_xml)
