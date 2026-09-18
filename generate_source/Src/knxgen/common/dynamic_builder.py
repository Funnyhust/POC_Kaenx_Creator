from __future__ import annotations

from xml.etree.ElementTree import Element, SubElement


def parameter_block(parent: Element, *, identifier: str, name: str, text: str) -> Element:
    return SubElement(
        parent,
        "ParameterBlock",
        {"Id": identifier, "Name": name, "Text": text},
    )

