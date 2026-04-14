import xml.etree.ElementTree as ET
import sys

def main():
    try:
        tree = ET.parse('d:/Project/KNX/Kaenx.Creator.Binaries/POC_Kaenx_Creator/Output_File/KNX_Scene_4 Button/POC GVS 8 Button/M-0085/M-0085_A-008A-20-FCD0.xml')
        root = tree.getroot()
        ns = {'knx': 'http://knx.org/xml/project/20'}
        channels = root.findall('.//knx:Channel', ns)
        for c in channels:
            print(f"Channel: {c.get('Id')} - {c.get('Name')}")
    except Exception as e:
        print(e)
if __name__ == '__main__':
    main()
