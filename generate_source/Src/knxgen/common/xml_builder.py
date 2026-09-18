from __future__ import annotations

from xml.etree.ElementTree import Element, SubElement

from knxgen.common.models import Manufacturer, ProductSpec


def new_knx_document(spec: ProductSpec, manufacturer: Manufacturer) -> Element:
    root = Element("KNX")
    root.set("CreatedBy", "Lumi KNX XML Generator")
    root.set("ToolVersion", "0.1.0")
    root.set("xmlns", f"http://knx.org/xml/project/{spec.schema_version}")
    data = SubElement(root, "ManufacturerData")
    SubElement(data, "Manufacturer", {"RefId": manufacturer.id})
    return root
