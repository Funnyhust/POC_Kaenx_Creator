from __future__ import annotations

import argparse
from collections.abc import Sequence
from pathlib import Path
import sys

from knxgen.registry import available_devices, generate


def _parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        prog="generate.py",
        description="Generate Lumi KNX product XML files.",
    )
    target = parser.add_mutually_exclusive_group()
    target.add_argument("--device", choices=available_devices(), help="device key")
    target.add_argument("--all", action="store_true", help="generate all devices")
    parser.add_argument("--list", action="store_true", help="list registered devices")
    parser.add_argument("--validate", action="store_true", help="validate generated XML")
    parser.add_argument(
        "--output",
        type=Path,
        help="output directory (default: Src/Generated)",
    )
    return parser


def _print_devices() -> None:
    print("Available devices:")
    for name in available_devices():
        print(f"  {name}")


def main(argv: Sequence[str] | None = None) -> int:
    parser = _parser()
    args = parser.parse_args(argv)

    if args.list:
        _print_devices()
        return 0

    if not args.device and not args.all:
        parser.print_help()
        print()
        _print_devices()
        return 0

    targets = available_devices() if args.all else (args.device,)
    try:
        for device_key in targets:
            result = generate(
                device_key,
                output_dir=args.output,
                validate=args.validate,
            )
            print(f"Generated {device_key}: {result.product_xml}")
    except (OSError, RuntimeError, ValueError) as exc:
        print(f"Error: {exc}", file=sys.stderr)
        return 1
    return 0
