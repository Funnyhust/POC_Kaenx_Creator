#!/usr/bin/env python3
"""
KNX XML Comprehensive Validator (Sanitized for Windows)
========================================================
Simplified output to avoid UnicodeEncodeError on Windows terminals.
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
        self.errors.append(msg)

    def add_warning(self, msg: str):
        self.warnings.append(msg)

    def add_pass(self, msg: str):
        self.passed.append(msg)

    def print_report(self):
        print("\n" + "="*60)
        print("KNX XML VALIDATION REPORT")
        print("="*60)
        
        if self.passed:
            print(f"\nPASSED ({len(self.passed)}):")
            for p in self.passed:
                print(f"  [OK] {p}")
        
        if self.warnings:
            print(f"\nWARNINGS ({len(self.warnings)}):")
            for w in self.warnings:
                print(f"  [!] {w}")
        
        if self.errors:
            print(f"\nERRORS ({len(self.errors)}):")
            for e in self.errors:
                print(f"  [X] {e}")
        
        print("\n" + "="*60)
        if self.errors:
            print(f"RESULT: FAIL - {len(self.errors)} error(s) will cause import failure")
        else:
            print("RESULT: PASS - XML should import successfully")
        print("="*60)

def get_last_split(id_str: str, offset: int = 0) -> str:
    idx = id_str.rfind('_')
    if idx == -1:
        return id_str[offset:]
    return id_str[idx + 1 + offset:]

def check_numeric_suffix(elem_id, tag_name, offset, result):
    if not elem_id: return
    try:
        parts = elem_id.split('_')
        last_part = parts[-1]
        
        # Kaenx-Creator's GetLastSplit(input, offset) uses:
        # return input.Substring(input.LastIndexOf('_') + 1 + offset)
        # So we skip 'offset' characters after the last underscore
        if len(last_part) <= offset:
            result.add_error(f"{tag_name} ID '{elem_id}' is too short for offset {offset}")
            return
            
        numeric_part = last_part[offset:]
        
        # Sometimes there might be a trailing dash/other parts, but usually it's used for int.Parse
        # If it starts with '-', C# skips it
        clean_numeric = numeric_part[1:] if numeric_part.startswith('-') else numeric_part
        
        # We need to handle cases like P-0_R-0 where there are MORE underscores
        # But usually this check is for the BASE identity
        
        int(clean_numeric) # Must be a valid integer
        result.add_pass(f"{tag_name} ID '{elem_id}' suffix is numeric decimal")
    except (ValueError, IndexError):
        result.add_error(f"{tag_name} ID '{elem_id}' has non-numeric suffix '{numeric_part if 'numeric_part' in locals() else 'unknown'}' (Will crash Kaenx-Creator)")

def validate_xml(file_path: str):
    result = ValidationResult()
    
    try:
        tree = ET.parse(file_path)
        root = tree.getroot()
    except Exception as e:
        result.add_error(f"XML Parse Error: {str(e)}")
        return result

    # Namespace detection
    ns = ""
    match = re.match(r'({.*})', root.tag)
    if match:
        ns = match.group(1)
    
    if 'project/20' not in ns:
        result.add_warning(f"Namespace '{ns}' detected. Version 20 recommended for modern features")

    # Track all IDs and their elements
    id_map = {}
    all_elements = root.findall('.//*')
    for elem in all_elements:
        elem_id = elem.get('Id')
        if elem_id:
            if elem_id in id_map:
                result.add_error(f"Duplicate ID found: '{elem_id}' in {elem.tag}")
            id_map[elem_id] = elem

    # 1. Referential Integrity Check
    ref_attributes = ['RefId', 'ParameterType', 'ParamRefId', 'CodeSegment', 'Hardware2ProgramRefId', 'ProductRefId']
    
    for elem in all_elements:
        for attr_name, attr_val in elem.attrib.items():
            # Check for direct RefId or known reference attributes
            is_ref = attr_name in ref_attributes or attr_name.endswith('RefId')
            
            if is_ref and attr_val:
                if attr_val not in id_map:
                    # Special case for Manufacturer RefId which might be external (M-XXXX)
                    if elem.tag.endswith('Manufacturer') and attr_name == 'RefId':
                        result.add_warning(f"External Reference: {elem.tag} attribute '{attr_name}' refers to external ID '{attr_val}'")
                    else:
                        result.add_error(f"Broken Reference: {elem.tag} attribute '{attr_name}' refers to missing ID '{attr_val}' (Likely 'Sequence' error trigger)")
                else:
                    result.add_pass(f"Reference '{attr_val}' ({attr_name}) is valid")

    # 2. Memory Footprint Check
    segments = {}
    for seg in root.findall(f'.//{ns}RelativeSegment'):
        seg_id = seg.get('Id')
        try:
            segments[seg_id] = {
                'size': int(seg.get('Size', '0')),
                'name': seg.get('Name', seg_id),
                'used_bytes': 0
            }
        except: pass

    for param in root.findall(f'.//{ns}Parameter'):
        mem = param.find(f'{ns}Memory')
        if mem is not None:
            seg_ref = mem.get('CodeSegment')
            offset = int(mem.get('Offset', '0'))
            bit_offset = int(mem.get('BitOffset', '0'))
            
            # Get size from ParameterType
            pt_id = param.get('ParameterType')
            pt = id_map.get(pt_id)
            size_in_bit = 8 # Default
            if pt is not None:
                restr = pt.find(f'{ns}TypeRestriction')
                if restr is not None:
                    size_in_bit = int(restr.get('SizeInBit', '8'))
            
            end_byte = offset + (bit_offset + size_in_bit + 7) // 8
            if seg_ref in segments:
                if end_byte > segments[seg_ref]['size']:
                    result.add_error(f"Memory Overflow: Parameter '{param.get('Name')}' (ends at byte {end_byte}) exceeds Segment '{segments[seg_ref]['name']}' size {segments[seg_ref]['size']}")
                else:
                    segments[seg_ref]['used_bytes'] = max(segments[seg_ref]['used_bytes'], end_byte)

    for seg_id, info in segments.items():
        if info['used_bytes'] > 0:
            result.add_pass(f"Segment '{info['name']}' memory usage: {info['used_bytes']}/{info['size']} bytes")

    # 2. Hardware ID Inheritance Check (Crucial for 'Sequence' Errors)
    for hw in root.findall(f'.//{ns}Hardware'):
        hw_id = hw.get('Id', '')
        # Check Products
        for prod in hw.findall(f'.//{ns}Product'):
            prod_id = prod.get('Id', '')
            if not prod_id.startswith(hw_id):
                result.add_error(f"Product ID '{prod_id}' must start with Hardware ID '{hw_id}'")
        # Check Hardware2Programs
        for h2p in hw.findall(f'.//{ns}Hardware2Program'):
            h2p_id = h2p.get('Id', '')
            if not h2p_id.startswith(hw_id):
                result.add_error(f"Hardware2Program ID '{h2p_id}' must start with Hardware ID '{hw_id}'")

    # 4. Kaenx-Creator 1.9.6 Specific Rules (from Rule.md)
    # Rule 10.2: CatalogItem ID parsing cuts 13 chars from end of Hardware2ProgramRefId
    for cat in root.iter(f'{ns}CatalogItem'):
        hp_ref = cat.get('Hardware2ProgramRefId', '')
        if hp_ref: # Only check if the attribute exists
            suffix = hp_ref.split('_')[-1]
            if len(suffix) < 13:
                 result.add_error(f"Hardware2ProgramRefId suffix '{suffix}' is too short ({len(suffix)} < 13). Kaenx-Creator 1.9.6 will crash.")
            else:
                result.add_pass(f"Hardware2ProgramRefId suffix '{suffix}' is of sufficient length.")

    # Rule 10.5: OrderNumber with special characters (like '-') fails encoding search
    for prod in root.iter(f'{ns}Product'):
        on = prod.get('OrderNumber', '')
        if on: # Only check if the attribute exists
            if not on.isalnum():
                # Check for allowed underscores if working backup has them, but Rule.md says alphanumeric
                if '-' in on:
                    result.add_error(f"OrderNumber '{on}' contains '-' which is known to cause 'Sequence' errors in Kaenx-Creator (Encoding mismatch)")
                else:
                    result.add_warning(f"OrderNumber '{on}' is not fully alphanumeric. Alphanumeric is recommended by technical docs.")
            else:
                result.add_pass(f"OrderNumber '{on}' is alphanumeric.")

    # 3. Hardware-Catalog Alignment Check (Critical for 'Sequence' Errors)
    for cat in root.findall(f'.//{ns}CatalogItem'):
        product_ref = cat.get('ProductRefId')
        cat_id = cat.get('Id', '')
        product = id_map.get(product_ref)
        if product is not None:
            order_number = product.get('OrderNumber', '')
            if order_number and order_number not in cat_id:
                result.add_error(f"CatalogItem ID '{cat_id}' must contain OrderNumber '{order_number}' (Confirmed 'Sequence' error trigger)")
            elif order_number:
                result.add_pass(f"CatalogItem ID format OK (contains {order_number})")

    # Logic Rule 10: Numeric suffixes for certain tags (Kaenx-Creator strict parsing)
    # Tags that must end in _ + (offset) + (decimal number)
    numeric_tags = {
        'Parameter': 2,       # P-xxx
        'ParameterType': 2,   # PT-xxx
        'ComObject': 2,       # O-xxx
        'ParameterRef': 2,    # P-xxx_R-xxx (Last part is numeric)
        'ComObjectRef': 2,    # O-xxx_R-xxx
        'ParameterBlock': 3,  # PB-xxx
        'ParameterSeparator': 3, # PS-xxx
        'Rename': 3,          # CH-xxx
        'ParameterBlockRename': 3 # PB-xxx
    }
    for tag, offset in numeric_tags.items():
        for elem in root.findall(f'.//{ns}{tag}'):
            check_numeric_suffix(elem.get('Id', ''), tag, offset, result)

    # RelativeSegment has special format sometimes (RS-04-00001)
    for seg in root.findall(f'.//{ns}RelativeSegment'):
        seg_id = seg.get('Id', '')
        if seg_id:
            last = seg_id.split('_')[-1]
            if last.startswith('RS-'):
                result.add_pass(f"RelativeSegment ID '{seg_id}' format OK")
            else:
                result.add_error(f"RelativeSegment ID '{seg_id}' must start with 'RS-'")

    # DatapointType format check
    for com in root.findall(f'.//{ns}ComObject'):
        dpt = com.get('DatapointType', '')
        if dpt and not (dpt.startswith('DPST-') or dpt.startswith('DPT-')):
            result.add_error(f"ComObject '{com.get('Name')}' has invalid DatapointType format '{dpt}' (Use DPST-x-y)")
        elif dpt:
            result.add_pass(f"ComObject '{com.get('Name')}' DPT format OK")

    # ObjectSize format check
    for com in root.findall(f'.//{ns}ComObject'):
        size = com.get('ObjectSize', '')
        if not re.match(r'^\d+ (Bit|Bits|Byte|Bytes)$', size):
            result.add_error(f"ComObject '{com.get('Name')}' has invalid ObjectSize format '{size}'")
        else:
            result.add_pass(f"ComObject '{com.get('Name')}' ObjectSize format OK")

    # 1. Basic Schema-like logic checks
    # Check for empty attributes that should be numeric or DPT
    critical_attrs = ['Value', 'Number', 'Size', 'Offset', 'BitOffset', 'DatapointType', 'ObjectSize']
    for elem in root.iter():
        for attr in critical_attrs:
            val = elem.get(attr)
            if val == "":
                result.add_error(f"Element <{elem.tag.split('}')[-1]}> has empty attribute '{attr}' (Confirmed '.NET FormatException' trigger)")
            elif val is not None:
                # Specific DPT format check
                if attr == 'DatapointType' and not val.startswith('DPST-') and not val.startswith('DPT-'):
                     result.add_error(f"Invalid DatapointType format '{val}' in <{elem.tag.split('}')[-1]}>")

    # Logic Rule 11.1: Security Options (Kaenx-Creator specific)
    app_program = root.find(f".//{ns}ApplicationProgram")
    if app_program is not None:
        mask_version = app_program.get("MaskVersion", "")
        if mask_version in ["MV-07B0", "MV-07B5"]:
            options = root.find(f".//{ns}Options")
            if options is None:
                result.add_error("ApplicationProgram uses a Secure mask but is missing the <Options> tag")
            else:
                if options.get("SupportsExtendedMemoryServices") != "true":
                    result.add_error("Secure device is missing 'SupportsExtendedMemoryServices=\"true\"' in <Options>")
                else:
                    result.add_pass("Secure memory services enabled in <Options>")
                
                if options.get("SupportsExtendedPropertyServices") != "true":
                    result.add_error("Secure device is missing 'SupportsExtendedPropertyServices=\"true\"' in <Options>")
                else:
                    result.add_pass("Secure property services enabled in <Options>")
    
    # Logic Rule 11.2: TypeRestriction must have Enumerations
    for ptype in root.findall(f".//{ns}ParameterType"):
        restriction = ptype.find(f"{ns}TypeRestriction")
        if restriction is not None:
            enums = restriction.findall(f"{ns}Enumeration")
            if not enums:
                result.add_error(f"ParameterType '{ptype.get('Name')}' uses TypeRestriction but has no Enumerations (Use TypeNumber instead)")
            else:
                result.add_pass(f"ParameterType '{ptype.get('Name')}' TypeRestriction has options")

    # Logic Rule 11.3: Supported Dynamic Elements (Kaenx-Creator 1.9.6 ParseDynamic)
    supported_dynamic = {
        'Channel', 'ChannelIndependentBlock', 'ParameterBlock', 'choose', 'when',
        'ParameterRefRef', 'ParameterSeparator', 'ComObjectRefRef', 'Module', 
        'Assign', 'Rename', 'ParameterBlockRename', 'Repeat', 'Button',
        'Rows', 'Columns', 'include'
    }
    dynamic_section = root.find(f'.//{ns}Dynamic')
    if dynamic_section is not None:
        for elem in dynamic_section.iter():
            tag = elem.tag.split('}')[-1]
            if tag == 'Dynamic': continue # Skip root of section
            if tag not in supported_dynamic:
                result.add_error(f"Unsupported dynamic element '{tag}' (Will cause crash: Unbekanntes Element in Dynamic)")
            else:
                # result.add_pass(f"Dynamic element '{tag}' is supported")
                pass

    # Check for overlapping memory

    return result

def main():
    if len(sys.argv) < 2:
        print("Usage: python validate_knx.py <xml_file>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    result = validate_xml(file_path)
    result.print_report()
    if result.errors:
        sys.exit(1)

if __name__ == "__main__":
    main()
