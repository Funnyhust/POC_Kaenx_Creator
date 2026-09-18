from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True, slots=True)
class MemoryField:
    name: str
    offset: int
    size: int


def validate_memory_layout(fields: tuple[MemoryField, ...], segment_size: int) -> None:
    occupied: dict[int, str] = {}
    for field in fields:
        if field.offset < 0 or field.size < 1:
            raise ValueError(f"Invalid memory field: {field}")
        for address in range(field.offset, field.offset + field.size):
            if address >= segment_size:
                raise ValueError(f"'{field.name}' exceeds segment size {segment_size}")
            if address in occupied:
                raise ValueError(
                    f"'{field.name}' overlaps '{occupied[address]}' at offset {address}"
                )
            occupied[address] = field.name

