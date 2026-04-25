import re
with open("GVS device/Switch Actuator with Secure, 4-Fold/M-0085/M-0085_A-0085-30-A90E.xml", "r", encoding="utf-8") as f:
    text = f.read()
    tests = set(re.findall(r'<when\s+test="([^"]+)"', text))
    for t in sorted(tests):
        print(f"test='{t}'")
