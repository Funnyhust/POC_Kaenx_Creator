"""Vietnamese ETS display names loaded from ``vietnamese_name_list.json``.

The numeric value is the zero-based index in the corresponding JSON category.
The same value is written to the firmware parameter and is used by the
generator to select the matching static ETS ComObjectRef text.
"""

from __future__ import annotations

import json
from pathlib import Path


_LIST_FILE = Path(__file__).with_name("vietnamese_name_list.json")
_DATA = json.loads(_LIST_FILE.read_text(encoding="utf-8"))

if _DATA.get("language") != "vi":
    raise ValueError(f"Unexpected language in {_LIST_FILE.name}")


def _load_category(category: str) -> tuple[tuple[int, str], ...]:
    entries = _DATA.get("categories", {}).get(category)
    if not isinstance(entries, list) or len(entries) != 20:
        raise ValueError(f"Vietnamese category '{category}' must contain exactly 20 names")
    labels: list[tuple[int, str]] = []
    for value, entry in enumerate(entries):
        if not isinstance(entry, dict) or not isinstance(entry.get("name"), str):
            raise ValueError(f"Invalid Vietnamese name entry {category}[{value}]")
        name = entry["name"]
        if not 1 <= len(name) <= 20:
            raise ValueError(f"Vietnamese name '{name}' must contain 1..20 characters")
        labels.append((value, name))
    return tuple(labels)


VIETNAMESE_LABELS_BY_CATEGORY = {
    category: _load_category(category)
    for category in ("on_off", "dimmer", "curtain", "scene")
}

VIETNAMESE_ON_OFF_LABELS = VIETNAMESE_LABELS_BY_CATEGORY["on_off"]
VIETNAMESE_DIMMER_LABELS = VIETNAMESE_LABELS_BY_CATEGORY["dimmer"]
VIETNAMESE_CURTAIN_LABELS = VIETNAMESE_LABELS_BY_CATEGORY["curtain"]
VIETNAMESE_SCENE_LABELS = VIETNAMESE_LABELS_BY_CATEGORY["scene"]

# Backwards-compatible alias for code that previously meant the switch list.
VIETNAMESE_LABELS = VIETNAMESE_ON_OFF_LABELS

PRESENTATION_CATEGORIES = {
    "button_switch": "on_off",
    "button_scene": "scene",
    "endpoint_dimmer": "dimmer",
    "endpoint_cct": "dimmer",
    "endpoint_curtain": "curtain",
}


def labels_for_presentation(presentation: str) -> tuple[tuple[int, str], ...]:
    """Return the fixed Vietnamese list for one ETS object presentation."""
    try:
        category = PRESENTATION_CATEGORIES[presentation]
    except KeyError as exc:
        raise ValueError(f"Unknown object presentation '{presentation}'") from exc
    return VIETNAMESE_LABELS_BY_CATEGORY[category]
