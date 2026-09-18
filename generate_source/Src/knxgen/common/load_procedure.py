from __future__ import annotations

from xml.etree.ElementTree import Element, SubElement


def add_merged_load_procedure(parent: Element) -> Element:
    return SubElement(parent, "LoadProcedures")

