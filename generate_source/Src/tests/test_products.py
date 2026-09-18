from importlib import import_module
import hashlib

from knxgen.registry import available_devices


def test_product_configs_match_registry_keys() -> None:
    for key in available_devices():
        module = import_module(f"knxgen.devices.{key}.generator")
        assert module.product_spec().device_key == key


def test_each_device_generates_only_prod_xml(tmp_path) -> None:
    for key in available_devices():
        module = import_module(f"knxgen.devices.{key}.generator")
        result = module.generate(output_dir=tmp_path, validate=True)
        files = [path.name for path in result.output_dir.iterdir() if path.is_file()]

        assert files == ["prod.xml"]
        assert result.product_xml.name == "prod.xml"
        expected_hash = module.product_spec().baseline_sha256
        if expected_hash:
            assert hashlib.sha256(result.product_xml.read_bytes()).hexdigest() == expected_hash
