from __future__ import annotations

from pathlib import Path
from xml.etree.ElementTree import Element, SubElement

from knxgen.common.config import load_manufacturer, load_product
from knxgen.common.models import ProductSpec
from knxgen.common.product_generator import GeneratedProduct, write_generated_product
from knxgen.common.xml_builder import new_knx_document

from .com_objects import ComObjectDef, all_objects
from .dynamic import build_dynamic
from .identifiers import COM_OBJECT_IDS, PARAMETER_IDS
from .memory_map import (
    DIMMING_MODE,
    DIMMING_STEP,
    ENGLISH_NAME,
    GLOBAL,
    ICON,
    INDEPENDENT_FUNCTION,
    NAME_LANGUAGE,
    PAIRED_FUNCTION,
    REPEAT_INTERVAL,
    SCENE_1,
    SCENE_CYCLE_COUNT,
    SCENE_DOUBLE_ACTION,
    SCENE_DOUBLE_NUMBER,
    SCENE_LONG_ACTION,
    SCENE_LONG_NUMBER,
    SCENE_SINGLE_ACTION,
    SEGMENT_ID,
    SEGMENT_SIZE,
    VIETNAMESE_NAME,
    AUTO_MODE_TYPE,
    AUTO_TIME,
    SCENE_OBJECTS,
    SWITCH_MODE,
    SWITCH_STARTUP,
    CURTAIN_ICON,
    CURTAIN_TRAVEL_TIME,
    SCENE_ENGLISH_NAME_1,
    SCENE_VIETNAMESE_NAME_1,
    SCENE_ICON_1,
    endpoint,
)
from .parameters import ENUM_TYPES
from .translations import VIETNAMESE_LABELS


PRODUCT_FILE = Path(__file__).with_name("product.toml")
APP_ID = "M-035A_A-2027-01-0001"
HARDWARE_ID = "M-035A_H-2027-01"
PRODUCT_ID = f"{HARDWARE_ID}_P-LM68BDKNX"
H2P_ID = f"{HARDWARE_ID}_HP-2027-01-00001"


def product_spec() -> ProductSpec:
    spec = load_product(PRODUCT_FILE)
    load_manufacturer(spec.manufacturer)
    return spec


def _parameter_type_id(key: str) -> str:
    return f"{APP_ID}_PT-{key}"


def _parameter_id(key: str) -> str:
    return f"{APP_ID}_P-{PARAMETER_IDS[key]}"


def _parameter_ref_id(key: str) -> str:
    identifier = PARAMETER_IDS[key]
    return f"{APP_ID}_P-{identifier}_R-{identifier}"


def _object_id(key: str) -> str:
    return f"{APP_ID}_O-{COM_OBJECT_IDS[key]}"


def _object_ref_id(key: str) -> str:
    identifier = COM_OBJECT_IDS[key]
    return f"{APP_ID}_O-{identifier}_R-{identifier}"


def _add_enum_type(parent: Element, key: str, name: str, values: tuple[tuple[int, str], ...]) -> None:
    parameter_type = SubElement(parent, "ParameterType", {"Id": _parameter_type_id(key), "Name": name})
    restriction = SubElement(parameter_type, "TypeRestriction", {"Base": "Value", "SizeInBit": "8"})
    for value, text in values:
        SubElement(restriction, "Enumeration", {
            "Id": f"{_parameter_type_id(key)}_E-{value}",
            "Text": text,
            "Value": str(value),
        })


def _add_number_type(parent: Element, key: str, name: str, minimum: int, maximum: int, bits: int = 8) -> None:
    parameter_type = SubElement(parent, "ParameterType", {"Id": _parameter_type_id(key), "Name": name})
    SubElement(parameter_type, "TypeNumber", {
        "SizeInBit": str(bits),
        "Type": "unsignedInt",
        "minInclusive": str(minimum),
        "maxInclusive": str(maximum),
    })


def _build_parameter_types(parent: Element) -> None:
    for definition in ENUM_TYPES:
        _add_enum_type(parent, definition.key, definition.name, definition.values)
    _add_enum_type(parent, "VietnameseName", "Vietnamese display name code", VIETNAMESE_LABELS)
    _add_number_type(parent, "Percentage1To100", "Brightness percentage (1-100 %)", 1, 100)
    _add_number_type(parent, "ScreenTimeoutSeconds", "Screen timeout in seconds", 10, 3600, 16)
    _add_number_type(parent, "ProximityDistanceCm", "Proximity wake-up distance (30-200 cm)", 30, 200)
    _add_number_type(parent, "Repeat100ms", "Telegram repeat interval (100 ms units)", 0, 25)
    _add_number_type(parent, "AutoTimeSeconds", "Automatic switch timer in seconds", 1, 10800, 32)
    _add_number_type(parent, "CurtainTravelTimeSeconds", "Travel time", 1, 300, 16)
    text_type = SubElement(parent, "ParameterType", {
        "Id": _parameter_type_id("EnglishName20"),
        "Name": "English display name (maximum 20 ASCII characters)",
    })
    SubElement(text_type, "TypeText", {"SizeInBit": "160", "Pattern": "[ -~]{0,20}"})


def _add_parameter(parent: Element, key: str, name: str, text: str, type_key: str, value: int | str, offset: int, suffix: str | None = None) -> None:
    attributes = {
        "Id": _parameter_id(key),
        "Name": name,
        "Text": text,
        "ParameterType": _parameter_type_id(type_key),
        "Value": str(value),
    }
    if suffix:
        attributes["SuffixText"] = suffix
    parameter = SubElement(parent, "Parameter", attributes)
    SubElement(parameter, "Memory", {"CodeSegment": SEGMENT_ID, "Offset": str(offset), "BitOffset": "0"})


def _build_parameters(parent: Element) -> list[str]:
    keys: list[str] = []

    def add(key: str, name: str, text: str, type_key: str, value: int | str, offset: int, suffix: str | None = None) -> None:
        _add_parameter(parent, key, name, text, type_key, value, offset, suffix)
        keys.append(key)

    add("DeviceVariant", "Device variant", "Device selection", "DeviceVariant", 8, GLOBAL["device_variant"])
    add("TopMergeDirection", "Top area merging direction", "Endpoint merging for Buttons 1, 2, 3 and 4", "MergeDirection", 0, GLOBAL["top_layout"])
    add("BottomMergeDirection", "Bottom area merging direction", "Endpoint merging for Buttons 5, 6, 7 and 8", "MergeDirection", 0, GLOBAL["bottom_layout"])
    for key, field, text in (("SixPair15", "six_pair_15", "Button 1 + Button 5"), ("SixPair24", "six_pair_24", "Button 2 + Button 4"), ("SixPair68", "six_pair_68", "Button 6 + Button 8")):
        add(key, f"6-button pair {text}", f"Operating mode of {text}", "PairMode", 0, GLOBAL[field])
    add("ScreenBrightness", "Screen brightness", "Screen brightness", "Percentage1To100", 80, GLOBAL["screen_brightness"], "%")
    add("LedBrightness", "Led brightness", "Led brightness", "Percentage1To100", 100, GLOBAL["led_brightness"], "%")
    add("TurnOffScreenAfter", "Turn off screen after", "Turn off screen after", "ScreenTimeoutSeconds", 300, GLOBAL["turn_off_screen_after"], "s")
    add("ProximityDistance", "Proximity wake-up distance", "Wake-up distance", "ProximityDistanceCm", 50, GLOBAL["proximity_distance"], "cm")
    add("TopHorizontalSelection", "Top area horizontal rows", "Select which horizontal rows are merged", "TopHorizontalSelection", 3, GLOBAL["top_horizontal_selection"])
    add("TopVerticalSelection", "Top area vertical columns", "Select which vertical columns are merged", "TopVerticalSelection", 3, GLOBAL["top_vertical_selection"])
    add("BottomHorizontalSelection", "Bottom area horizontal rows", "Select which horizontal rows are merged", "BottomHorizontalSelection", 3, GLOBAL["bottom_horizontal_selection"])
    add("BottomVerticalSelection", "Bottom area vertical columns", "Select which vertical columns are merged", "BottomVerticalSelection", 3, GLOBAL["bottom_vertical_selection"])

    enum_defaults = {definition.key: definition.default for definition in ENUM_TYPES}
    for button in range(1, 9):
        prefix = f"NC{button}"
        add(f"{prefix}-IndependentFunction", f"{prefix} independent function", "Function of channel", "IndependentFunction", enum_defaults["IndependentFunction"], endpoint(button, INDEPENDENT_FUNCTION))
        add(f"{prefix}-PairedFunction", f"{prefix} paired endpoint function", "Function of endpoint", "PairedFunction", enum_defaults["PairedFunction"], endpoint(button, PAIRED_FUNCTION))
        add(f"{prefix}-NameLanguage", f"Button {button} name language", "Name language", "NameLanguage", 0, endpoint(button, NAME_LANGUAGE))
        add(f"{prefix}-VietnameseName", f"{prefix} Vietnamese display name", "Name", "VietnameseName", 0, endpoint(button, VIETNAMESE_NAME))
        add(f"{prefix}-EnglishName", f"Button {button} English display name", "Name", "EnglishName20", " ", endpoint(button, ENGLISH_NAME))
        add(f"{prefix}-Icon", f"{prefix} light icon", "Icon", "Icon", 1, endpoint(button, ICON))
        add(f"{prefix}-CurtainIcon", f"{prefix} shutter/curtain icon", "Icon", "CurtainIcon", 1, endpoint(button, CURTAIN_ICON))
        add(f"{prefix}-CurtainTravelTime", f"{prefix} curtain travel time", "Travel time", "CurtainTravelTimeSeconds", 20, endpoint(button, CURTAIN_TRAVEL_TIME), "s")
        add(f"{prefix}-DimmingMode", f"{prefix} relative dimming mode", "Dimming Mode (Long Press >500ms)", "DimmingMode", 0, endpoint(button, DIMMING_MODE))
        add(f"{prefix}-DimmingStep", f"{prefix} fixed dimming step", f"Button {button} Step Size", "DimmingStep", 3, endpoint(button, DIMMING_STEP), "%")
        add(f"{prefix}-RepeatInterval", f"{prefix} dimming repeat interval", "Interval of tele. cyclic send [0..25,0=send once]", "Repeat100ms", 1, endpoint(button, REPEAT_INTERVAL), "*0.1s")
        add(f"{prefix}-SceneSingleAction", f"{prefix} single press / touch action", "  Single press action", "SceneSingleAction", 1, endpoint(button, SCENE_SINGLE_ACTION))
        add(f"{prefix}-SceneCycleCount", f"{prefix} scene cycle count", "  Number of scenes (cycling)", "SceneCycleCount", 2, endpoint(button, SCENE_CYCLE_COUNT))
        for index in range(1, 6):
            add(f"{prefix}-Scene{index}", f"{prefix} scene {index} number", f"  Scene {index} number", "SceneNumber1To64", 1, endpoint(button, SCENE_1 + index - 1))
        add(f"{prefix}-SceneDoubleAction", f"{prefix} double press action", "  Double press action", "SceneExtraAction", 1, endpoint(button, SCENE_DOUBLE_ACTION))
        add(f"{prefix}-SceneDoubleNumber", f"{prefix} double press scene number", "  Double press scene number", "SceneNumber1To64", 1, endpoint(button, SCENE_DOUBLE_NUMBER))
        add(f"{prefix}-SceneLongAction", f"{prefix} long press action", "  Long hold action", "SceneExtraAction", 2, endpoint(button, SCENE_LONG_ACTION))
        add(f"{prefix}-SceneLongNumber", f"{prefix} long press scene number", "  Long hold scene number", "SceneNumber1To64", 1, endpoint(button, SCENE_LONG_NUMBER))
        add(f"{prefix}-SwitchMode", f"{prefix} switch operating mode", "Switch mode", "SwitchMode", 1, endpoint(button, SWITCH_MODE))
        add(f"{prefix}-SwitchStartup", f"{prefix} switch startup behavior", "Behavior on bus voltage recovery", "StartupBehavior", 0, endpoint(button, SWITCH_STARTUP))
        add(f"{prefix}-AutoModeType", f"{prefix} automatic timer action", "Auto mode type", "AutoModeType", 0, endpoint(button, AUTO_MODE_TYPE))
        add(f"{prefix}-AutoTime", f"{prefix} automatic timer", "Time value", "AutoTimeSeconds", 60, endpoint(button, AUTO_TIME), "s")
        add(f"{prefix}-SceneObjects", f"{prefix} scene communication objects", "  Number of scene objects", "SceneObjects", 1, endpoint(button, SCENE_OBJECTS))
        scene_name_slots = (
            *((f"Scene{index}", f"  Scene {index} name", f"Scene {index}") for index in range(1, 6)),
            ("SceneDouble", "  Double press scene name", "Double Press"),
            ("SceneLong", "  Long hold scene name", "Long Hold"),
        )
        for slot, text, default in scene_name_slots:
            slot_index = (int(slot.removeprefix("Scene")) - 1) if slot[5:].isdigit() else (5 if slot == "SceneDouble" else 6)
            add(f"{prefix}-{slot}EnglishName", f"{prefix} {slot} English name", text, "EnglishName20", default, endpoint(button, SCENE_ENGLISH_NAME_1 + slot_index * 20))
            add(f"{prefix}-{slot}VietnameseName", f"{prefix} {slot} Vietnamese name", text, "VietnameseName", 0, endpoint(button, SCENE_VIETNAMESE_NAME_1 + slot_index))
            add(f"{prefix}-{slot}Icon", f"{prefix} {slot} icon", "  Icon", "Icon", 1, endpoint(button, SCENE_ICON_1 + slot_index))
    return keys


def _flags(role: str) -> dict[str, str]:
    if role == "status":
        return {"ReadFlag": "Disabled", "WriteFlag": "Enabled", "CommunicationFlag": "Enabled", "TransmitFlag": "Disabled", "UpdateFlag": "Enabled", "ReadOnInitFlag": "Enabled"}
    if role == "sensor":
        return {"ReadFlag": "Enabled", "WriteFlag": "Disabled", "CommunicationFlag": "Enabled", "TransmitFlag": "Enabled", "UpdateFlag": "Disabled", "ReadOnInitFlag": "Disabled"}
    return {"ReadFlag": "Disabled", "WriteFlag": "Disabled", "CommunicationFlag": "Enabled", "TransmitFlag": "Enabled", "UpdateFlag": "Disabled", "ReadOnInitFlag": "Disabled"}


def _build_com_objects(parent: Element) -> tuple[ComObjectDef, ...]:
    objects = all_objects()
    for item in objects:
        attributes = {
            "Id": _object_id(item.key), "Name": item.key, "Text": item.text,
            "Number": str(item.number), "FunctionText": item.function,
            "ObjectSize": item.size, "DatapointType": item.dpt, "Security": "Optional",
        }
        attributes.update(_flags(item.role))
        SubElement(parent, "ComObject", attributes)
    return objects


def _build_document(spec: ProductSpec) -> Element:
    manufacturer = load_manufacturer(spec.manufacturer)
    root = new_knx_document(spec, manufacturer)
    manufacturer_node = root.find("./ManufacturerData/Manufacturer")
    assert manufacturer_node is not None

    catalog = SubElement(manufacturer_node, "Catalog")
    section = SubElement(catalog, "CatalogSection", {"Id": "M-035A_CS-Display", "Name": "Display switches", "Number": "1", "DefaultLanguage": "en-US"})
    SubElement(section, "CatalogItem", {"Id": f"{H2P_ID}_CI-{spec.order_number}", "Name": spec.product_name, "Number": "1", "ProductRefId": PRODUCT_ID, "Hardware2ProgramRefId": H2P_ID, "DefaultLanguage": "en-US"})

    hardware_container = SubElement(manufacturer_node, "Hardware")
    hardware = SubElement(hardware_container, "Hardware", {
        "Id": HARDWARE_ID, "Name": spec.product_name, "SerialNumber": spec.serial_number,
        "VersionNumber": str(spec.hardware_version), "BusCurrent": str(spec.bus_current_ma),
        "HasIndividualAddress": "true", "HasApplicationProgram": "true",
        "SupportsKNXDataSecure": "true", "SupportsKNXToolAccessSecure": "true",
    })
    products = SubElement(hardware, "Products")
    SubElement(products, "Product", {"Id": PRODUCT_ID, "Text": spec.product_name, "OrderNumber": spec.order_number, "IsRailMounted": "false", "DefaultLanguage": "en-US"})
    h2ps = SubElement(hardware, "Hardware2Programs")
    h2p = SubElement(h2ps, "Hardware2Program", {"Id": H2P_ID, "MediumTypes": spec.medium})
    SubElement(h2p, "ApplicationProgramRef", {"RefId": APP_ID})

    programs = SubElement(manufacturer_node, "ApplicationPrograms")
    program = SubElement(programs, "ApplicationProgram", {
        "Id": APP_ID, "ApplicationNumber": str(spec.application_number), "ApplicationVersion": str(spec.application_version),
        "ProgramType": "ApplicationProgram", "MaskVersion": spec.mask_version, "Name": spec.application_name,
        "LoadProcedureStyle": "MergedProcedure", "PeiType": "0", "DefaultLanguage": "en-US",
        "DynamicTableManagement": "false", "Linkable": "false", "MinEtsVersion": spec.min_ets_version,
        "IsSecureEnabled": "true", "SupportsKNXDataSecure": "true", "SupportsKNXToolAccessSecure": "true",
        "ToolAccessSecure": "true", "MaxSecurityIndividualAddressEntries": "64", "MaxSecurityGroupKeyTableEntries": "64",
    })
    static = SubElement(program, "Static")
    code = SubElement(static, "Code")
    SubElement(code, "RelativeSegment", {"Id": SEGMENT_ID, "Name": "V1 parameter memory", "Size": str(SEGMENT_SIZE), "LoadStateMachine": "4", "Offset": "0"})
    parameter_types = SubElement(static, "ParameterTypes")
    _build_parameter_types(parameter_types)
    parameters = SubElement(static, "Parameters")
    parameter_keys = _build_parameters(parameters)
    refs = SubElement(static, "ParameterRefs")
    for key in parameter_keys:
        SubElement(refs, "ParameterRef", {"Id": _parameter_ref_id(key), "RefId": _parameter_id(key)})
    table = SubElement(static, "ComObjectTable")
    objects = _build_com_objects(table)
    object_refs = SubElement(static, "ComObjectRefs")
    for item in objects:
        SubElement(object_refs, "ComObjectRef", {"Id": _object_ref_id(item.key), "RefId": _object_id(item.key)})
    SubElement(static, "AddressTable", {"MaxEntries": "500"})
    SubElement(static, "AssociationTable", {"MaxEntries": "500"})
    procedures = SubElement(static, "LoadProcedures")
    load_segment = SubElement(procedures, "LoadProcedure", {"MergeId": "2"})
    SubElement(load_segment, "LdCtrlRelSegment", {"AppliesTo": "full", "LsmIdx": "4", "Size": str(SEGMENT_SIZE), "Mode": "0", "Fill": "0"})
    write_memory = SubElement(procedures, "LoadProcedure", {"MergeId": "4"})
    SubElement(write_memory, "LdCtrlWriteRelMem", {"ObjIdx": "4", "Offset": "0", "Size": str(SEGMENT_SIZE), "Verify": "true"})
    SubElement(static, "Options", {"SupportsExtendedMemoryServices": "true", "SupportsExtendedPropertyServices": "true"})
    program.append(build_dynamic(APP_ID))
    return root


def generate(*, output_dir: Path | None, validate: bool) -> GeneratedProduct:
    spec = product_spec()
    return write_generated_product(_build_document(spec), spec, output_dir=output_dir, validate=validate)
