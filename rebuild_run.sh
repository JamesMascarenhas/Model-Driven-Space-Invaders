#!/bin/bash
set -e

cd "$(dirname "$0")"
bash ./fix_makefile.sh
cd ../SpaceInvadersV0_target/default
make
./Top -URTS_DEBUG=quit