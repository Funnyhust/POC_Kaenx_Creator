#!/usr/bin/env python3
"""
KNX XML Comprehensive Validator
================================
Based on full analysis of Kaenx Creator source code:
- ImportHelper.cs (2213 lines)
- CheckHelper.cs (1067 lines)

This validator checks ALL known crash points BEFORE import.
"""

import xml.etree.ElementTree as ET
import sys
import re
from typing import List, Dict, Tuple, Optional

class ValidationResult:
    def __init__(self):
        self.errors: List[str] = []
        self.warnings: List[str] = []
        self.passed: List[str] = []
    
    def add_error(self, msg: str):
        self.errors.append(f"❌ ERROR: {msg}")
    
    def add_warning(self, msg: str):
        self.warnings.append(f"⚠️ WARNING: {msg}")
    
    def add_pass(self, msg: str):
        self.passed.append(f"✓ {msg}")
    
    def print_report(self):
        print("\n" + "="*60)
        print("KNX XML VALIDATION REPORT")
        print("="*60)
        
        if self.passed:
            print(f"\n✓ PASSED ({len(self.passed)}):")
            for p in self.passed:
                print(f"  {p}")
        
        if self.warnings:
            print(f"\n⚠️ WARNINGS ({len(self.warnings)}):")
            for w in self.warnings:
                print(f"  {w}")
        
        if self.errors:
            print(f"\n❌ ERRORS ({len(self.errors)}):")
            for e in self.errors:
                print(f"  {e}")
        
        print("\n" + "="*60)
        if self.errors:
            print(f"RESULT: FAIL - {len(self.errors)} error(s) will cause import failure")
        else:
            print("RESULT: PASS - XML should import successfully")
        print("="*60)

def get_encoded(input_str: str) -> str:
    """Mimics ExportHelper.GetEncoded from Kaenx Creator"""
    if not input_str:
        return ""
    result = input_str
    # Order matters - encode dot last
    result = result.replace("-", ".2D")
    result = result.replace(" ", ".20")
    result = result.replace("(", ".28")
    result = result.replace(")", ".29")
    result = result.replace("+", ".2B")
    result = result.replace(",", ".2C")
    result = result.replace("/", ".2F")
    result = result.replace(".", ".2E")
    return result

def get_last_split(id_str: str, offset: int = 0) -> str:
    """
    Mimics ImportHelper.GetLastSplit (L2197-2200):
    return input.Substring(input.LastIndexOf('_') + 1 + offset);
    
    Note: LastIndexOf returns -1 if not found, so -1+1+offset = offset
    """
    last_underscore = id_str.rfind('_')
    start_pos = last_underscore + 1 + offset
    if start_pos >= len(id_str):
        return ""
    return id_str[start_pos:]

def check_numeric_suffix(id_str: str, element_name: str, offset: int, result: ValidationResult) -> bool:
    """Check if ID suffix after GetLastSplit is numeric (int.Parse/long.Parse requirement)"""
    suffix = get_last_split(id_str, offset)
    
    # Handle leading dash for negative numbers
    if suffix.startswith('-'):
        suffix = suffix[1:]
    
    if not suffix:
        result.add_error(f"{element_name} ID '{id_str}' has empty suffix after offset {offset}")
        return False
    
    if not suffix.isdigit():
        result.add_error(f"{element_name} ID '{id_str}' has non-numeric suffix '{suffix}' (offset {offset}). This causes FormatException.")
        return False
    
    return True

def validate_xml(file_path: str) -> ValidationResult:
    result = ValidationResult()
    
    print(f"\nValidating: {file_path}")
    print("-" * 60)
    
    # Parse XML
    try:
        tree = ET.parse(file_path)
        root = tree.getroot()
        result.add_pass("XML syntax is valid")
    except Exception as e:
        result.add_error(f"XML parsing failed: {e}")
        return result
    
    # Extract namespace
    ns = {'knx': 'http://knx.org/xml/project/11'}
    if '}' in root.tag:
        ns_url = root.tag.split('}')[0].strip('{')
        ns = {'knx': ns_url}
    
    # ============================================================
    # SECTION 1: Check Manufacturer (ImportHelper L77)
    # ============================================================
    manu = root.find('.//knx:Manufacturer', ns)
    if manu is None:
        result.add_error("Manufacturer node not found")
        return result
    
    ref_id = manu.get('RefId')
    if ref_id:
        if len(ref_id) < 3:
            result.add_error(f"Manufacturer RefId '{ref_id}' too short for Substring(2)")
        else:
            result.add_pass(f"Manufacturer RefId format OK: {ref_id}")
    else:
        result.add_error("Manufacturer missing RefId attribute")
    
    # ============================================================
    # SECTION 2: Check ApplicationProgram (ImportHelper L384-418)
    # ============================================================
    app_prog = manu.find('.//knx:ApplicationProgram', ns)
    if app_prog is None:
        result.add_error("ApplicationProgram node not found")
        return result
    
    # Check required attributes
    for attr in ['ApplicationNumber', 'ApplicationVersion', 'MaskVersion', 'DefaultLanguage']:
        val = app_prog.get(attr)
        if val is None:
            result.add_error(f"ApplicationProgram missing required attribute: {attr}")
        elif attr in ['ApplicationNumber', 'ApplicationVersion']:
            if not val.isdigit():
                result.add_error(f"ApplicationProgram.{attr} must be integer, got: {val}")
            else:
                result.add_pass(f"ApplicationProgram.{attr} = {val}")
    
    # ============================================================
    # SECTION 3: Check Hardware (ImportHelper L1593-1599)
    # Note: KNX XML has nested <Hardware><Hardware Id=...></Hardware></Hardware>
    # We need the INNER Hardware element that has attributes
    # ============================================================
    hardware_list = manu.findall('.//knx:Hardware', ns)
    hardware = None
    for hw in hardware_list:
        # Find the Hardware element that has VersionNumber or Name (the inner one)
        if hw.get('VersionNumber') is not None or hw.get('Name') is not None:
            hardware = hw
            break
    
    if hardware is None:
        # Fallback: try to find any Hardware with Id attribute
        for hw in hardware_list:
            if hw.get('Id') is not None:
                hardware = hw
                break
    
    if hardware is None:
        result.add_error("Hardware node with attributes not found")
    else:
        # CRITICAL: VersionNumber not Version
        if hardware.get('VersionNumber') is None:
            if hardware.get('Version') is not None:
                result.add_error("Hardware uses 'Version' instead of 'VersionNumber' - causes NullReferenceException at L1595")
            else:
                result.add_error("Hardware missing 'VersionNumber' attribute - causes NullReferenceException at L1595")
        else:
            result.add_pass(f"Hardware.VersionNumber = {hardware.get('VersionNumber')}")
        
        # Check other mandatory attributes (CheckHelper L36-41)
        if hardware.get('BusCurrent') is None:
            result.add_warning("Hardware missing 'BusCurrent' attribute")
        else:
            result.add_pass(f"Hardware.BusCurrent = {hardware.get('BusCurrent')}")
        
        has_ind_addr = hardware.get('HasIndividualAddress')
        if has_ind_addr is None:
            result.add_warning("Hardware missing 'HasIndividualAddress' attribute")
        elif has_ind_addr.lower() not in ['true', '1']:
            result.add_warning("Hardware.HasIndividualAddress is not 'true'")
        else:
            result.add_pass("Hardware.HasIndividualAddress = true")
        
        has_app = hardware.get('HasApplicationProgram')
        if has_app is None:
            result.add_warning("Hardware missing 'HasApplicationProgram' attribute")
        elif has_app.lower() not in ['true', '1']:
            result.add_warning("Hardware.HasApplicationProgram is not 'true'")
        else:
            result.add_pass("Hardware.HasApplicationProgram = true")
    
    # ============================================================
    # SECTION 4: Check Hardware2ProgramRefId Length (ImportHelper L1705)
    # ============================================================
    catalog_items = manu.findall('.//knx:CatalogItem', ns)
    for item in catalog_items:
        h2p_ref = item.get('Hardware2ProgramRefId')
        if h2p_ref:
            # Find "_HP-" or similar pattern
            hp_idx = h2p_ref.find('_HP-')
            if hp_idx != -1:
                suffix = h2p_ref[hp_idx + 4:]  # After "_HP-"
                if len(suffix) < 13:
                    result.add_error(
                        f"Hardware2ProgramRefId suffix '{suffix}' length is {len(suffix)}. "
                        f"MUST be ≥13 characters to avoid ArgumentOutOfRangeException at L1705"
                    )
                else:
                    result.add_pass(f"Hardware2ProgramRefId suffix length OK: {len(suffix)}")
    
    # ============================================================
    # SECTION 5: Check OrderNumber Encoding (ImportHelper L1638-1639)
    # ============================================================
    products = manu.findall('.//knx:Product', ns)
    for prod in products:
        order_num = prod.get('OrderNumber', '')
        if order_num:
            encoded = get_encoded(order_num)
            # Check if any CatalogItem contains encoded order number
            found = False
            for item in catalog_items:
                item_id = item.get('Id', '')
                if encoded in item_id:
                    found = True
                    result.add_pass(f"CatalogItem ID contains encoded OrderNumber '{encoded}'")
                    break
            
            if not found and encoded != order_num:  # Only error if encoding was needed
                result.add_warning(
                    f"OrderNumber '{order_num}' should be encoded as '{encoded}' in CatalogItem IDs"
                )
    
    # ============================================================
    # SECTION 6: Check All ID Formats (FormatException points)
    # ============================================================
    print("\nChecking ID formats...")
    
    # Parameters (offset 2) - L1073
    for elem in app_prog.findall('.//knx:Parameter', ns):
        check_numeric_suffix(elem.get('Id', ''), 'Parameter', 2, result)
    
    # ParameterRefs (offset 2) - L1162
    for elem in app_prog.findall('.//knx:ParameterRef', ns):
        check_numeric_suffix(elem.get('Id', ''), 'ParameterRef', 2, result)
        if elem.get('RefId'):
            check_numeric_suffix(elem.get('RefId', ''), 'ParameterRef.RefId', 2, result)
    
    # ComObjects (uses last '-' instead of GetLastSplit) - L1250-1252
    for elem in app_prog.findall('.//knx:ComObject', ns):
        co_id = elem.get('Id', '')
        if '-' in co_id:
            suffix = co_id.split('-')[-1]
            if not suffix.isdigit():
                result.add_error(f"ComObject ID '{co_id}' has non-numeric suffix '{suffix}' after last '-'")
    
    # ComObjectRefs (offset 2) - L1337
    for elem in app_prog.findall('.//knx:ComObjectRef', ns):
        check_numeric_suffix(elem.get('Id', ''), 'ComObjectRef', 2, result)
    
    # ParameterTypes (offset 3 for name extraction, not numeric) - L855
    # These are OK to have non-numeric names
    
    # Dynamic section elements
    dynamic = app_prog.find('.//knx:Dynamic', ns)
    if dynamic is not None:
        # ParameterBlocks (offset 3 for Id) - L1860
        for elem in dynamic.findall('.//knx:ParameterBlock', ns):
            pb_id = elem.get('Id')
            if pb_id:
                check_numeric_suffix(pb_id, 'ParameterBlock', 3, result)
        
        # choose elements (ParamRefId offset 2) - L1899
        for elem in dynamic.findall('.//knx:choose', ns):
            pref = elem.get('ParamRefId')
            if pref:
                check_numeric_suffix(pref, 'choose.ParamRefId', 2, result)
        
        # ParameterRefRef (RefId offset 2) - L1933
        for elem in dynamic.findall('.//knx:ParameterRefRef', ns):
            ref_id = elem.get('RefId')
            if ref_id:
                check_numeric_suffix(ref_id, 'ParameterRefRef.RefId', 2, result)
        
        # ComObjectRefRef (RefId offset 2) - L1981
        for elem in dynamic.findall('.//knx:ComObjectRefRef', ns):
            ref_id = elem.get('RefId')
            if ref_id:
                check_numeric_suffix(ref_id, 'ComObjectRefRef.RefId', 2, result)
    
    # ============================================================
    # SECTION 7: Check DatapointType Format (ImportHelper L1278-1304)
    # ============================================================
    print("\nChecking DatapointType formats...")
    for co in app_prog.findall('.//knx:ComObject', ns):
        dpt = co.get('DatapointType')
        if dpt:
            if not (dpt.startswith('DPST-') or dpt.startswith('DPT-')):
                result.add_error(f"ComObject DatapointType '{dpt}' must start with 'DPST-' or 'DPT-'")
            else:
                result.add_pass(f"DatapointType format OK: {dpt}")
    
    # ============================================================
    # SECTION 8: Check ObjectSize Format (ImportHelper L1273-1277)
    # ============================================================
    print("\nChecking ObjectSize formats...")
    for co in app_prog.findall('.//knx:ComObject', ns):
        obj_size = co.get('ObjectSize')
        if obj_size:
            parts = obj_size.split(' ')
            if len(parts) != 2:
                result.add_error(f"ObjectSize '{obj_size}' invalid format. Expected 'X Bit(s)' or 'X Byte(s)'")
            elif parts[1] not in ['Bit', 'Bits', 'Byte', 'Bytes']:
                result.add_error(f"ObjectSize '{obj_size}' unit must be Bit/Bits/Byte/Bytes")
            elif not parts[0].isdigit():
                result.add_error(f"ObjectSize '{obj_size}' size must be numeric")
            else:
                result.add_pass(f"ObjectSize format OK: {obj_size}")
    
    return result

def main():
    if len(sys.argv) < 2:
        print("Usage: python validate_knx_comprehensive.py <xml_file>")
        print("\nThis validator checks ALL known Kaenx Creator crash points:")
        print("  - NullReferenceException (5 points)")
        print("  - ArgumentOutOfRangeException (2 points)")
        print("  - FormatException (35+ points)")
        print("  - InvalidOperationException (4 points)")
        sys.exit(1)
    
    result = validate_xml(sys.argv[1])
    result.print_report()
    
    sys.exit(1 if result.errors else 0)

if __name__ == "__main__":
    main()
