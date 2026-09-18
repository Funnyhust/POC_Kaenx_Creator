from __future__ import annotations

from pathlib import Path
import tomllib

from knxgen.common.models import Manufacturer, ProductSpec


CONFIG_DIR = Path(__file__).resolve().parents[1] / "config"


def _read_toml(path: Path) -> dict:
    with path.open("rb") as stream:
        return tomllib.load(stream)


def load_manufacturer(key: str) -> Manufacturer:
    entries = _read_toml(CONFIG_DIR / "manufacturers.toml")["manufacturers"]
    try:
        data = entries[key]
    except KeyError as exc:
        raise ValueError(f"Unknown manufacturer profile '{key}'") from exc
    return Manufacturer(key=key, **data)


def load_product(path: Path) -> ProductSpec:
    return ProductSpec(**_read_toml(path)["product"])

