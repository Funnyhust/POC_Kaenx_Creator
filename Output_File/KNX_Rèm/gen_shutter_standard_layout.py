#!/usr/bin/env python3
"""Generate the Shutter XML with the standard parameter layout only.

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


INPUT_XML = Path(__file__).with_name("knx_shutter_m035a_final.xml")
OUTPUT_XML = Path(__file__).with_name("knx_shutter_m035a_standard_layout.xml")
PREFIX = "M-035A_A-1234-56-00001"


def p_ref(num: int) -> str:
    return f"{PREFIX}_P-{num}_R-{num}"


def o_ref(num: int) -> str:
    return f"{PREFIX}_O-{num}_R-{num}"


def pb(num: int) -> str:
    return f"{PREFIX}_PB-{num}"


def ps(num: int) -> str:
    return f"{PREFIX}_PS-{num}"


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


def _without_dynamic_and_ref_text(xml: str) -> str:
    stripped = re.sub(r'\s+Text="[^"]*"', "", _without_dynamic(xml))
    stripped = re.sub(r'\s+(Name|FunctionText)="[^"]*"', "", stripped)
    stripped = re.sub(rf'(?ms)^\s*<ComObject\b[^>]*\bId="{PREFIX}_O-5"[^>]*/>\s*', "", stripped)
    stripped = re.sub(rf'(?ms)^\s*<ComObjectRef\b[^>]*\bRefId="{PREFIX}_O-5"[^>]*/>\s*', "", stripped)
    return stripped


def _set_attr(tag: str, attr: str, value: str) -> str:
    if re.search(fr'\b{attr}="[^"]*"', tag):
        return re.sub(fr'\b{attr}="[^"]*"', f'{attr}="{value}"', tag)
    return tag[:-3] + f' {attr}="{value}" />'


def apply_com_object_policy(xml: str) -> str:
    labels = {
        f"{PREFIX}_O-1": "Up/down",
        f"{PREFIX}_O-2": "Stop",
        f"{PREFIX}_O-3": "Position",
        f"{PREFIX}_O-4": "Position status",
    }

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        if not id_match:
            return tag
        object_id = id_match.group(1)
        if object_id == f"{PREFIX}_O-5":
            return ""
        if object_id in labels:
            label = labels[object_id]
            tag = _set_attr(tag, "Name", label)
            tag = _set_attr(tag, "Text", label)
            tag = _set_attr(tag, "FunctionText", label)
        return tag

    xml = re.sub(r'<ComObject\b[^>]*/>\s*', repl, xml)
    xml = re.sub(rf'(?m)^\s*<ComObjectRef\b[^>]*\bRefId="{PREFIX}_O-5"[^>]*/>\s*', "", xml)
    return xml


def build_dynamic() -> str:
    scene_pairs = [
        ("Scene A", 15, 16),
        ("Scene B", 18, 19),
        ("Scene C", 21, 22),
        ("Scene D", 24, 25),
        ("Scene E", 27, 28),
        ("Scene F", 30, 31),
        ("Scene G", 33, 34),
        ("Scene H", 36, 37),
        ("Scene I", 39, 40),
        ("Scene J", 42, 43),
    ]

    lines = [
        "          <Dynamic>",
        "            <ChannelIndependentBlock>",
        f'              <ParameterBlock Id="{pb(1)}" Name="General settings" Text="General settings">',
        f'                <ParameterSeparator Id="{ps(1)}" Text="Device settings" UIHint="Headline" />',
        f'                <ParameterRefRef RefId="{p_ref(1)}" />',
        f'                <ParameterRefRef RefId="{p_ref(3)}" />',
        f'                <ParameterRefRef RefId="{p_ref(12)}" />',
    ]
    for obj in range(1, 5):
        lines.append(f'                <ComObjectRefRef RefId="{o_ref(obj)}" />')
    lines += [
        f'                <choose ParamRefId="{p_ref(12)}">',
        '                  <when test="1">',
        f'                    <ComObjectRefRef RefId="{o_ref(6)}" />',
        "                  </when>",
        "                </choose>",
        "              </ParameterBlock>",
        "",
        f'              <choose ParamRefId="{p_ref(12)}">',
        '                <when test="1">',
        f'                  <ParameterBlock Id="{pb(2)}" Name="Scene settings" Text="Scene settings">',
        f'                    <ParameterSeparator Id="{ps(4)}" Text="Scene settings" UIHint="Headline" />',
        f'                    <ParameterRefRef RefId="{p_ref(13)}" />',
    ]

    for index, (label, scene_num, scene_pos) in enumerate(scene_pairs, start=1):
        lines += [
            f'                    <ParameterSeparator Id="{ps(10 + index)}" Text="{label}" UIHint="Headline" />',
            f'                    <ParameterRefRef RefId="{p_ref(scene_num)}" />',
            f'                    <choose ParamRefId="{p_ref(scene_num)}">',
            '                      <when test=">0">',
            f'                        <ParameterRefRef RefId="{p_ref(scene_pos)}" />',
            "                      </when>",
            "                    </choose>",
            f'                    <ParameterSeparator Id="{ps(30 + index)}" Text="" />',
        ]

    lines += [
        "                  </ParameterBlock>",
        "                </when>",
        "              </choose>",
        "            </ChannelIndependentBlock>",
        "          </Dynamic>",
    ]
    return _plain_separators("\n".join(lines))


def main() -> None:
    xml = INPUT_XML.read_text(encoding="utf-8")
    dynamic = build_dynamic()
    match = _dynamic_match(xml)
    out_xml = xml[: match.start()] + dynamic + xml[match.end() :]
    out_xml = apply_child_indent_overrides(out_xml, dynamic)
    out_xml = apply_com_object_policy(out_xml)
    out_xml = normalize_display_case(out_xml)

    if _refs(xml, "ParameterRefRef") != _refs(out_xml, "ParameterRefRef"):
        raise AssertionError("ParameterRefRef references changed")
    expected_object_refs = _refs(xml, "ComObjectRefRef")
    expected_object_refs.pop(f"{PREFIX}_O-5_R-5", None)
    if expected_object_refs != _refs(out_xml, "ComObjectRefRef"):
        raise AssertionError("ComObjectRefRef references changed unexpectedly")

    OUTPUT_XML.write_text(out_xml, encoding="utf-8", newline="\n")
    print(f"Wrote {OUTPUT_XML}")


if __name__ == "__main__":
    main()
