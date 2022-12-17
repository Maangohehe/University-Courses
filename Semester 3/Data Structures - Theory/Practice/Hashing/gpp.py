import os
import sys

if len(sys.argv) != 2:
    print(f"USAGE: python3 gpp.py [filename]")
    exit(1)
filename = sys.argv[1]
ext = ".cpp"
os.system(f"g++ {filename+ext} -o {filename}")