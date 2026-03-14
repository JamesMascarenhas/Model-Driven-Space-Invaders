#!/bin/bash
set -e

MF="../SpaceInvadersV0_target/default/Makefile"

python3 - <<'PY'
from pathlib import Path

mf = Path("../SpaceInvadersV0_target/default/Makefile")
text = mf.read_text()

old = "CCFLAGS ="
new = "CCFLAGS = -std=c++14 -I/opt/homebrew/include -I/opt/homebrew/include/SDL2"

if old in text:
    text = text.replace(old, new, 1)
    mf.write_text(text)
    print("Patched CCFLAGS.")
else:
    print("CCFLAGS line not found.")
PY