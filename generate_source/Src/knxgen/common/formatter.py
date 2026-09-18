from __future__ import annotations

from xml.etree import ElementTree
from xml.etree.ElementTree import Element


def format_xml(root: Element) -> bytes:
    ElementTree.indent(root, space="  ")
    return ElementTree.tostring(root, encoding="utf-8", xml_declaration=True)

