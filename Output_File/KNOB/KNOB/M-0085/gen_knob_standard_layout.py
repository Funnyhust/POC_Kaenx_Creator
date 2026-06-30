#!/usr/bin/env python3
"""Generate the KNOB XML with the shared standard parameter layout.

This keeps Parameters, memory mapping and ComObjects untouched. Layout changes
are limited to the Dynamic block and ParameterRef display-text overrides.
"""

from __future__ import annotations

from collections import Counter
from html import escape
from pathlib import Path
import re
import sys


for parent in Path(__file__).resolve().parents:
    if parent.name == "Output_File":
        sys.path.insert(0, str(parent))
        break
else:
    raise RuntimeError("Cannot find Output_File directory")

from standard_layout_utils import normalize_display_case


INPUT_XML = Path(__file__).with_name("M-0085_A-0001-01-A35F.xml")
OUTPUT_XML = Path(__file__).with_name("M-0085_A-0001-01-A35F_standard_layout.xml")


def _dynamic_match(xml: str) -> re.Match[str]:
    match = re.search(r"(?ms)^(\s*)<Dynamic>\s*$.*?^\1</Dynamic>\s*$", xml)
    if not match:
        raise ValueError("Cannot find a standalone <Dynamic> block")
    return match


def _without_dynamic(xml: str) -> str:
    match = _dynamic_match(xml)
    return xml[: match.start()] + xml[match.end() :]


def _without_dynamic_and_ref_text(xml: str) -> str:
    return re.sub(r'\s+(Name|Text|FunctionText)="[^"]*"', "", _without_dynamic(xml))


def _refs(xml: str, tag: str) -> Counter[str]:
    dynamic = _dynamic_match(xml).group(0)
    return Counter(re.findall(fr"<{tag}\s+RefId=\"([^\"]+)\"", dynamic))


def _plain_separators(dynamic: str) -> str:
    return dynamic.replace(' UIHint="Headline"', "")


def _pluralize_settings(dynamic: str) -> str:
    dynamic = dynamic.replace(' setting"', ' settings"')
    dynamic = dynamic.replace(' setting"', ' settings"')
    return dynamic


def _child_parameter_ref_ids(dynamic: str) -> set[str]:
    refs: set[str] = set()
    in_block = False
    after_separator = False
    for line in dynamic.splitlines():
        if "<ParameterBlock " in line:
            in_block = True
            after_separator = False
        if "</ParameterBlock>" in line:
            in_block = False
            after_separator = False
        if in_block and "<ParameterSeparator " in line and 'Text=""' not in line:
            after_separator = True
        if in_block and after_separator:
            match = re.search(r'<ParameterRefRef\s+RefId="([^"]+)"', line)
            if match:
                refs.add(match.group(1))
    return refs


def _parameter_text_by_ref_id(xml: str) -> dict[str, str]:
    param_text = {
        match.group("id"): match.group("text")
        for match in re.finditer(
            r'<Parameter\b(?=[^>]*\bId="(?P<id>[^"]+)")(?=[^>]*\bText="(?P<text>[^"]*)")[^>]*>',
            xml,
        )
    }
    return {
        match.group("ref_id"): param_text.get(match.group("param_id"), "")
        for match in re.finditer(
            r'<ParameterRef\b(?=[^>]*\bId="(?P<ref_id>[^"]+)")(?=[^>]*\bRefId="(?P<param_id>[^"]+)")[^>]*/>',
            xml,
        )
    }


def apply_child_indent_overrides(xml: str, dynamic: str) -> str:
    child_refs = _child_parameter_ref_ids(dynamic)
    ref_to_param = {
        match.group("ref_id"): match.group("param_id")
        for match in re.finditer(
            r'<ParameterRef\b(?=[^>]*\bId="(?P<ref_id>[^"]+)")(?=[^>]*\bRefId="(?P<param_id>[^"]+)")[^>]*/>',
            xml,
        )
    }
    child_params = {ref_to_param[ref_id] for ref_id in child_refs if ref_id in ref_to_param}

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        text_match = re.search(r'\bText="([^"]*)"', tag)
        if not id_match or id_match.group(1) not in child_params or not text_match:
            return tag
        text = text_match.group(1)
        if text.startswith("  "):
            return tag
        return re.sub(r'\bText="[^"]*"', f'Text="{escape("  " + text, quote=True)}"', tag)

    return re.sub(r'<Parameter\b[^>]*>', repl, xml)


def build_dynamic(xml: str) -> str:
    dynamic = _dynamic_match(xml).group(0)
    dynamic = _plain_separators(dynamic)
    dynamic = _pluralize_settings(dynamic)
    return dynamic


def main() -> None:
    xml = INPUT_XML.read_text(encoding="utf-8")
    dynamic = build_dynamic(xml)
    match = _dynamic_match(xml)
    out_xml = xml[: match.start()] + dynamic + xml[match.end() :]
    out_xml = apply_child_indent_overrides(out_xml, dynamic)
    out_xml = normalize_display_case(out_xml)

    if _without_dynamic_and_ref_text(xml) != _without_dynamic_and_ref_text(out_xml):
        raise AssertionError("Non-Dynamic XML changed outside ParameterRef text overrides")
    for tag in ("ParameterRefRef", "ComObjectRefRef"):
        if _refs(xml, tag) != _refs(out_xml, tag):
            raise AssertionError(f"{tag} references changed")

    OUTPUT_XML.write_text(out_xml, encoding="utf-8", newline="\n")
    print(f"Wrote {OUTPUT_XML}")


if __name__ == "__main__":
    main()
