from __future__ import annotations

from html import escape
import re


def _sentence_case_display(value: str) -> str:
    if not value.strip():
        return value

    leading = value[: len(value) - len(value.lstrip(" "))]
    text = value.lstrip(" ")
    parts = re.split(r"(\([^)]*\))", text)
    lowered = "".join(part if part.startswith("(") else part.lower() for part in parts)
    chars = list(lowered)
    for index, char in enumerate(chars):
        if char.isalpha():
            chars[index] = char.upper()
            break
    result = leading + "".join(chars)
    result = re.sub(
        r"\b(channel|output|scene) ([abcd])\b",
        lambda match: f"{match.group(1)} {match.group(2).upper()}",
        result,
        flags=re.IGNORECASE,
    )
    for acronym in ("knx", "led", "cct", "hvac", "dpt", "ets"):
        result = re.sub(rf"\b{acronym}\b", acronym.upper(), result, flags=re.IGNORECASE)
    result = re.sub(r"\bscene no\.", "Scene No.", result, flags=re.IGNORECASE)
    result = re.sub(r"\bshutter/curtain\b", "Shutter/Curtain", result, flags=re.IGNORECASE)
    result = result.replace("°c", "°C")
    return result


def _normalize_tag_display_case(tag: str) -> str:
    match = re.match(r"<(\w+)\b", tag)
    attrs_by_tag = {
        "Parameter": ("Text",),
        "ParameterBlock": ("Text",),
        "ParameterSeparator": ("Text",),
        "Enumeration": ("Text",),
        "ComObject": ("Name", "Text", "FunctionText"),
    }
    attrs = attrs_by_tag.get(match.group(1) if match else "", ())
    for attr in attrs:
        attr_match = re.search(fr'\b{attr}="([^"]*)"', tag)
        if attr_match:
            value = escape(_sentence_case_display(attr_match.group(1)), quote=True)
            tag = re.sub(fr'\b{attr}="[^"]*"', f'{attr}="{value}"', tag)
    return tag


def normalize_display_case(xml: str) -> str:
    return re.sub(
        r"<(?:Parameter|ParameterBlock|ParameterSeparator|Enumeration|ComObject)\b[^>]*>",
        lambda match: _normalize_tag_display_case(match.group(0)),
        xml,
    )
