from __future__ import annotations

from collections import Counter
from pathlib import Path
from xml.etree import ElementTree as ET

from knxgen.common.models import ProductSpec


def _local_name(tag: str) -> str:
    return tag.rsplit("}", 1)[-1]


def _elements(root: ET.Element, name: str) -> list[ET.Element]:
    return [element for element in root.iter() if _local_name(element.tag) == name]


def validate_unique_ids(root: ET.Element) -> None:
    identifiers = [node.attrib["Id"] for node in root.iter() if "Id" in node.attrib]
    duplicates = [item for item, count in Counter(identifiers).items() if count > 1]
    if duplicates:
        raise ValueError(f"Duplicate KNX IDs: {', '.join(sorted(duplicates))}")


def validate_internal_references(root: ET.Element) -> None:
    identifiers = {node.attrib["Id"] for node in root.iter() if "Id" in node.attrib}
    missing: set[str] = set()
    for node in root.iter():
        for attribute in ("RefId", "ParamRefId", "TextParameterRefId"):
            reference = node.attrib.get(attribute)
            if node.tag.endswith("Manufacturer") and attribute == "RefId":
                continue
            if reference and reference not in identifiers and not reference.startswith("MT-"):
                missing.add(reference)
    if missing:
        raise ValueError(f"Unresolved internal references: {', '.join(sorted(missing))}")


def validate_required_metadata(
    root: ET.Element,
    spec: ProductSpec,
    manufacturer_id: str,
) -> None:
    hardware = next(
        element for element in _elements(root, "Hardware") if element.get("Id")
    )
    product = next(
        element for element in _elements(root, "Product") if element.get("Id")
    )
    application = next(
        element
        for element in _elements(root, "ApplicationProgram")
        if element.get("Id")
    )
    manufacturer = _elements(root, "Manufacturer")[0]
    required_hardware = (
        "VersionNumber",
        "BusCurrent",
        "HasIndividualAddress",
        "HasApplicationProgram",
    )
    missing = [name for name in required_hardware if hardware.get(name) is None]
    if missing:
        raise ValueError(f"Hardware is missing: {', '.join(missing)}")
    if manufacturer.get("RefId") != manufacturer_id:
        raise ValueError("Configured and generated manufacturer IDs differ")
    if product.get("OrderNumber") != spec.order_number:
        raise ValueError("Configured and generated order numbers differ")
    if application.get("MaskVersion") != spec.mask_version:
        raise ValueError("Configured and generated mask versions differ")


def validate_parameter_memory(root: ET.Element) -> None:
    segments = {
        element.get("Id"): int(element.get("Size", "0"))
        for element in _elements(root, "RelativeSegment")
    }
    for memory in _elements(root, "Memory"):
        segment = memory.get("CodeSegment")
        offset = int(memory.get("Offset", "0"))
        bit_offset = int(memory.get("BitOffset", "0"))
        if segment not in segments:
            raise ValueError(f"Memory references missing segment '{segment}'")
        if not 0 <= bit_offset <= 7:
            raise ValueError(f"Invalid BitOffset {bit_offset}")
        if offset >= segments[segment]:
            raise ValueError(
                f"Memory offset {offset} exceeds segment '{segment}' size"
            )


def validate_product_xml(
    product_xml: Path,
    spec: ProductSpec,
    manufacturer_id: str,
) -> None:
    root = ET.parse(product_xml).getroot()
    validate_unique_ids(root)
    validate_required_metadata(root, spec, manufacturer_id)
    validate_parameter_memory(root)
    for required in ("Catalog", "Hardware", "ApplicationPrograms"):
        if not _elements(root, required):
            raise ValueError(f"{product_xml.name} does not contain {required}")


def _kaenx_numeric_suffix(identifier: str, offset: int) -> int:
    """Mirror ImportHelper.GetLastSplit(..., offset) followed by int.Parse."""
    start = identifier.rfind("_") + 1 + offset
    return int(identifier[start:])


def validate_kaenx_creator_import_contract(root: ET.Element, spec: ProductSpec) -> None:
    """Check assumptions hard-coded by Kaenx Creator's XML ImportHelper.

    Kaenx parses several KNX IDs as integers instead of treating them as opaque
    XML identifiers. This validation deliberately mirrors those parsing paths so
    a generated file fails before it reaches the Kaenx GUI.
    """
    parameter_ids: set[int] = set()
    parameters_by_id = {
        node.attrib["Id"]: node for node in _elements(root, "Parameter")
    }
    parameter_types_by_id = {
        node.attrib["Id"]: node for node in _elements(root, "ParameterType")
    }
    parameter_refs_by_id = {
        node.attrib["Id"]: node for node in _elements(root, "ParameterRef")
    }
    for node in _elements(root, "Parameter"):
        identifier = _kaenx_numeric_suffix(node.attrib["Id"], 2)
        if identifier in parameter_ids:
            raise ValueError(f"Kaenx duplicate Parameter numeric ID: {identifier}")
        parameter_ids.add(identifier)

    parameter_ref_ids: set[int] = set()
    for node in _elements(root, "ParameterRef"):
        ref_identifier = _kaenx_numeric_suffix(node.attrib["Id"], 2)
        target_identifier = _kaenx_numeric_suffix(node.attrib["RefId"], 2)
        if target_identifier not in parameter_ids:
            raise ValueError(f"Kaenx ParameterRef target is missing: {target_identifier}")
        if ref_identifier in parameter_ref_ids:
            raise ValueError(f"Kaenx duplicate ParameterRef numeric ID: {ref_identifier}")
        parameter_ref_ids.add(ref_identifier)

    com_object_ids: set[int] = set()
    for node in _elements(root, "ComObject"):
        identifier = int(node.attrib["Id"].rsplit("-", 1)[1])
        if identifier in com_object_ids:
            raise ValueError(f"Kaenx duplicate ComObject numeric ID: {identifier}")
        com_object_ids.add(identifier)

    com_ref_ids: set[int] = set()
    for node in _elements(root, "ComObjectRef"):
        ref_identifier = _kaenx_numeric_suffix(node.attrib["Id"], 2)
        target_identifier = int(node.attrib["RefId"].rsplit("-", 1)[1])
        if target_identifier not in com_object_ids:
            raise ValueError(f"Kaenx ComObjectRef target is missing: {target_identifier}")
        if ref_identifier in com_ref_ids:
            raise ValueError(f"Kaenx duplicate ComObjectRef numeric ID: {ref_identifier}")
        com_ref_ids.add(ref_identifier)
        if "TextParameterRefId" in node.attrib:
            text_parameter_ref_id = node.attrib["TextParameterRefId"]
            text_parameter_identifier = _kaenx_numeric_suffix(text_parameter_ref_id, 2)
            if text_parameter_identifier not in parameter_ref_ids:
                raise ValueError(
                    "Kaenx ComObjectRef TextParameterRefId is unresolved: "
                    f"{text_parameter_ref_id}"
                )
            text_parameter_ref = parameter_refs_by_id[text_parameter_ref_id]
            text_parameter = parameters_by_id.get(text_parameter_ref.attrib.get("RefId", ""))
            text_parameter_type = (
                parameter_types_by_id.get(text_parameter.attrib.get("ParameterType", ""))
                if text_parameter is not None
                else None
            )
            if text_parameter_type is None or not _elements(text_parameter_type, "TypeText"):
                raise ValueError(
                    "Kaenx ComObjectRef TextParameterRefId must target a TypeText parameter: "
                    f"{text_parameter_ref_id}"
                )

    for node in _elements(root, "ParameterBlock"):
        if "Id" in node.attrib and "ParamRefId" not in node.attrib:
            _kaenx_numeric_suffix(node.attrib["Id"], 3)
    for node in _elements(root, "ParameterSeparator"):
        _kaenx_numeric_suffix(node.attrib["Id"], 3)
    for node in _elements(root, "ParameterRefRef"):
        if _kaenx_numeric_suffix(node.attrib["RefId"], 2) not in parameter_ref_ids:
            raise ValueError(f"Kaenx Dynamic ParameterRefRef is unresolved: {node.attrib['RefId']}")
    for node in _elements(root, "choose"):
        if _kaenx_numeric_suffix(node.attrib["ParamRefId"], 2) not in parameter_ref_ids:
            raise ValueError(f"Kaenx Dynamic choose is unresolved: {node.attrib['ParamRefId']}")
    for node in _elements(root, "ComObjectRefRef"):
        if _kaenx_numeric_suffix(node.attrib["RefId"], 2) not in com_ref_ids:
            raise ValueError(f"Kaenx Dynamic ComObjectRefRef is unresolved: {node.attrib['RefId']}")
    for node in _elements(root, "when"):
        if not node.attrib.get("test") and node.attrib.get("default") != "true":
            raise ValueError("Kaenx CheckHelper requires a condition or default on every when")

    catalog_items = _elements(root, "CatalogItem")
    if not any(spec.order_number in node.attrib.get("Id", "") for node in catalog_items):
        raise ValueError("Kaenx ImportCatalog cannot find the order number in a CatalogItem ID")
    for node in _elements(root, "Channel"):
        if not node.attrib.get("Number"):
            raise ValueError(f"Kaenx CheckHelper requires Channel Number: {node.attrib.get('Name', '')}")
