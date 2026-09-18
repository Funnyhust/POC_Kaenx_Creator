from knxgen.common.config import load_manufacturer


def test_current_lumi_manufacturer() -> None:
    manufacturer = load_manufacturer("lumi")
    assert manufacturer.id == "M-035A"
    assert manufacturer.default_language == "en-US"


def test_legacy_lumi_manufacturer_is_explicit() -> None:
    assert load_manufacturer("lumi_legacy").id == "M-0085"

