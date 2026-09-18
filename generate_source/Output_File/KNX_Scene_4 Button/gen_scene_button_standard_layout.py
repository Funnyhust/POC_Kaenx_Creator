#!/usr/bin/env python3
"""Generate the Scene Button XML with the standard parameter layout only.

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


INPUT_XML = Path(__file__).with_name("knx_scene_4_button_m035a_final.xml")
OUTPUT_XML = Path(__file__).with_name("knx_scene_4_button_m035a_standard_layout.xml")
PREFIX = "M-035A_A-2026-01-0003"


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


def _extract_block(dynamic: str, block_id: str) -> tuple[str, str]:
    pattern = re.compile(
        rf"(?ms)^(\s*)<ParameterBlock\b[^>]*Id=\"{re.escape(block_id)}\"[^>]*>\s*$.*?^\1</ParameterBlock>\s*$"
    )
    match = pattern.search(dynamic)
    if not match:
        raise ValueError(f"Cannot find ParameterBlock {block_id}")
    return match.group(0), dynamic[: match.start()] + dynamic[match.end() :]


def _block_inner(block: str) -> str:
    lines = block.splitlines()
    if len(lines) < 2:
        raise ValueError("Invalid ParameterBlock")
    return "\n".join(lines[1:-1])


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
    stripped = re.sub(r'\s+(Name|Text|FunctionText)="[^"]*"', "", _without_dynamic(xml))
    stripped = re.sub(r'\s+(ReadFlag|WriteFlag|TransmitFlag|UpdateFlag)="[^"]*"', "", stripped)
    for number in (39, 51, 63, 75):
        pattern = rf'(<Parameter\b(?=[^>]*\bId="{PREFIX}_P-{number}")[^>]*)\s+Value="[^"]*"'
        stripped = re.sub(pattern, r"\1", stripped)
    return stripped


def _set_attr(tag: str, attr: str, value: str) -> str:
    if re.search(fr'\b{attr}="[^"]*"', tag):
        return re.sub(fr'\b{attr}="[^"]*"', f'{attr}="{value}"', tag)
    return tag[:-3] + f' {attr}="{value}" />'


def apply_com_object_flag_policy(xml: str) -> str:
    led_status_ids = {f"{PREFIX}_O-{number}" for number in (81, 82, 83, 84)}
    control_functions = {"Switch", "Dimming control", "Scene", "Double, Scene", "Long, Scene"}

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        fn_match = re.search(r'\bFunctionText="([^"]+)"', tag)
        object_id = id_match.group(1) if id_match else ""
        function_text = fn_match.group(1) if fn_match else ""

        if object_id in led_status_ids:
            tag = _set_attr(tag, "ReadFlag", "Disabled")
            tag = _set_attr(tag, "WriteFlag", "Enabled")
            tag = _set_attr(tag, "TransmitFlag", "Disabled")
            tag = _set_attr(tag, "UpdateFlag", "Enabled")
            return tag

        if function_text in control_functions:
            tag = _set_attr(tag, "UpdateFlag", "Disabled")
            return tag

        return tag

    return re.sub(r'<ComObject\b[^>]*/>', repl, xml)


def apply_default_value_policy(xml: str) -> str:
    long_hold_action_ids = {f"{PREFIX}_P-{number}" for number in (39, 51, 63, 75)}

    def repl(match: re.Match[str]) -> str:
        tag = match.group(0)
        id_match = re.search(r'\bId="([^"]+)"', tag)
        if not id_match or id_match.group(1) not in long_hold_action_ids:
            return tag
        return _set_attr(tag, "Value", "1")

    return re.sub(r'<Parameter\b[^>]*>', repl, xml)


def _rename_top_level_blocks(dynamic: str) -> str:
    dynamic = dynamic.replace(
        'Text="General setting" Name="General_Config"',
        'Text="General settings" Name="General settings"',
    )
    for index in range(1, 5):
        dynamic = dynamic.replace(
            f'Text="Button {index} - ..." Name="Btn{index}_Config"',
            f'Text="Button {index} settings" Name="Button {index}"',
        )
    return dynamic


def _remove_cycling_help_text(dynamic: str) -> str:
    return dynamic.replace(
        'Text="Each press recalls the next scene in the list (cyclic order)."',
        'Text=""',
    )


def _merge_common_settings_into_general(dynamic: str) -> str:
    sensor_block, dynamic = _extract_block(dynamic, f"{PREFIX}_PB-50")
    led_block, dynamic = _extract_block(dynamic, f"{PREFIX}_PB-60")

    general_insert = "\n".join(
        [
            f'                <ParameterSeparator Id="{PREFIX}_PS-58" Text="Brightness settings" UIHint="Headline" />',
            _block_inner(led_block).strip(),
            f'                <ParameterSeparator Id="{PREFIX}_PS-59" Text="" />',
            f'                <ParameterSeparator Id="{PREFIX}_PS-60" Text="Sensor settings" UIHint="Headline" />',
            _block_inner(sensor_block).strip(),
        ]
    )
    needle = f'                <ParameterRefRef RefId="{PREFIX}_P-80_R-80" />\n              </ParameterBlock>'
    replacement = (
        f'                <ParameterRefRef RefId="{PREFIX}_P-80_R-80" />\n'
        + general_insert
        + "\n              </ParameterBlock>"
    )
    if needle not in dynamic:
        raise ValueError("Cannot find the General settings insertion point")
    return dynamic.replace(needle, replacement)


def build_dynamic(xml: str) -> str:
    dynamic = _dynamic_match(xml).group(0)
    dynamic = _rename_top_level_blocks(dynamic)
    dynamic = _remove_cycling_help_text(dynamic)
    dynamic = _merge_common_settings_into_general(dynamic)
    return _plain_separators(dynamic)


def main() -> None:
    xml = INPUT_XML.read_text(encoding="utf-8")
    dynamic = build_dynamic(xml)
    match = _dynamic_match(xml)
    out_xml = xml[: match.start()] + dynamic + xml[match.end() :]
    out_xml = apply_child_indent_overrides(out_xml, dynamic)
    out_xml = apply_com_object_flag_policy(out_xml)
    out_xml = apply_default_value_policy(out_xml)
    out_xml = normalize_display_case(out_xml)

    if _without_dynamic_and_ref_text(xml) != _without_dynamic_and_ref_text(out_xml):
        raise AssertionError("Non-Dynamic XML changed outside allowed layout and flag overrides")
    for tag in ("ParameterRefRef", "ComObjectRefRef"):
        if _refs(xml, tag) != _refs(out_xml, tag):
            raise AssertionError(f"{tag} references changed")

    OUTPUT_XML.write_text(out_xml, encoding="utf-8", newline="\n")
    print(f"Wrote {OUTPUT_XML}")


if __name__ == "__main__":
    main()
