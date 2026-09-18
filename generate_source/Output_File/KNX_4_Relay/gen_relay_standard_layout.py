#!/usr/bin/env python3
"""Generate the Relay XML with the standard parameter layout only.

The script keeps the existing Parameters, ParameterRefs, ComObjects and
ComObjectRefs untouched. It only replaces the <Dynamic> block and writes a new
XML file for comparison/import testing.
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


INPUT_XML = Path(__file__).with_name("knx_relay_4ch_m035a_final.xml")
OUTPUT_XML = Path(__file__).with_name("knx_relay_4ch_m035a_standard_layout.xml")


def _dynamic_match(xml: str) -> re.Match[str]:
    match = re.search(r"(?ms)^(\s*)<Dynamic>\s*$.*?^\1</Dynamic>\s*$", xml)
    if not match:
        raise ValueError("Cannot find a standalone <Dynamic> block")
    return match


def _without_dynamic(xml: str) -> str:
    match = _dynamic_match(xml)
    return xml[: match.start()] + xml[match.end() :]


def _refs(xml: str, tag: str) -> Counter[str]:
    dynamic = _dynamic_match(xml).group(0)
    return Counter(re.findall(fr"<{tag}\s+RefId=\"([^\"]+)\"", dynamic))


def _plain_separators(dynamic: str) -> str:
    return dynamic.replace(' UIHint="Headline"', "")


def _add_scene_group_separators(dynamic: str) -> str:
    channel_scene_nums = {
        "A": range(7, 23, 2),
        "B": range(37, 53, 2),
        "C": range(67, 83, 2),
        "D": range(97, 113, 2),
    }
    channel_separator_base = {"A": 500, "B": 600, "C": 700, "D": 800}
    for channel, ref_numbers in channel_scene_nums.items():
        for scene_index, ref_number in enumerate(ref_numbers, start=1):
            indent = " " * 24
            id_base = channel_separator_base[channel] + scene_index * 2
            line = (
                f'{indent}<ParameterRefRef RefId="M-035A_A-2025-01-00001_P-{ref_number}_R-{ref_number}" />'
            )
            if line not in dynamic:
                raise ValueError(f"Cannot find scene {scene_index} number ref for channel {channel}")
            spacer = (
                f'{indent}<ParameterSeparator Id="M-035A_A-2025-01-00001_PS-{id_base}" Text="" />\n'
                if scene_index > 1
                else ""
            )
            separator = (
                f'{indent}<ParameterSeparator Id="M-035A_A-2025-01-00001_PS-{id_base + 1}" '
                f'Text="Scene {scene_index}" />\n'
            )
            dynamic = dynamic.replace(line, spacer + separator + line, 1)
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


def apply_scene_child_text_overrides(xml: str) -> str:
    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        name_match = re.search(r'\bName="R[1-4]_Scene\d+_(Num|Act|MomAct)"', tag)
        if not name_match:
            return tag
        text = "  Scene number" if name_match.group(1) == "Num" else "  Scene action"
        return re.sub(r'\bText="[^"]*"', f'Text="{escape(text, quote=True)}"', tag)

    return re.sub(r'<Parameter\b[^>]*>', repl, xml)


def _without_dynamic_and_ref_text(xml: str) -> str:
    return re.sub(r'\s+(Name|Text|FunctionText)="[^"]*"', "", _without_dynamic(xml))


def build_dynamic(xml: str) -> str:
    dynamic = _dynamic_match(xml).group(0)

    replacements = {
        'Name="General_Config" Text="General Settings"': 'Name="General settings" Text="General settings"',
        'Text="General Settings" Name="General_Config"': 'Text="General settings" Name="General settings"',
        'Text="Channel Operation Mode"': 'Text="Channel function"',
        'Text="Channel Function"': 'Text="Channel function"',
        'Text="Settings"': 'Text="Behaviour"',
        'Text="Scene Settings"': 'Text="Scene settings"',
    }
    for old, new in replacements.items():
        dynamic = dynamic.replace(old, new)

    for label in "ABCD":
        dynamic = dynamic.replace(
            f'Name="Channel{label}_Config" Text="Channel {label} setting"',
            f'Name="Channel {label}" Text="Channel {label} settings"',
        )
        dynamic = dynamic.replace(
            f'Name="Channel{label}_Config" Text="Channel {label}-..."',
            f'Name="Channel {label}" Text="Channel {label} settings"',
        )

    dynamic = _add_scene_group_separators(dynamic)
    return _plain_separators(dynamic)


def main() -> None:
    xml = INPUT_XML.read_text(encoding="utf-8")
    dynamic = build_dynamic(xml)
    out_xml = xml[: _dynamic_match(xml).start()] + dynamic + xml[_dynamic_match(xml).end() :]
    out_xml = apply_child_indent_overrides(out_xml, dynamic)
    out_xml = normalize_display_case(out_xml)
    out_xml = apply_scene_child_text_overrides(out_xml)

    if _without_dynamic_and_ref_text(xml) != _without_dynamic_and_ref_text(out_xml):
        raise AssertionError("Non-Dynamic XML changed outside ParameterRef text overrides")
    for tag in ("ParameterRefRef", "ComObjectRefRef"):
        if _refs(xml, tag) != _refs(out_xml, tag):
            raise AssertionError(f"{tag} references changed")

    OUTPUT_XML.write_text(out_xml, encoding="utf-8", newline="\n")
    print(f"Wrote {OUTPUT_XML}")


if __name__ == "__main__":
    main()
