from __future__ import annotations

from pathlib import Path

from knxgen.common.config import load_manufacturer, load_product
from knxgen.common.models import ProductSpec
from knxgen.common.product_generator import GeneratedProduct, generate_from_baseline


PRODUCT_FILE = Path(__file__).with_name("product.toml")
BASELINE_FILE = Path(__file__).with_name("baseline") / "product.xml"


def product_spec() -> ProductSpec:
    spec = load_product(PRODUCT_FILE)
    load_manufacturer(spec.manufacturer)
    return spec


def generate(
    *,
    output_dir: Path | None,
    validate: bool,
) -> GeneratedProduct:
    return generate_from_baseline(
        product_spec(),
        BASELINE_FILE,
        output_dir=output_dir,
        validate=validate,
    )
