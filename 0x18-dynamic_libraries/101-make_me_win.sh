#!/bin/bash
wget -P /tmp -q "https://github.com/99omniaashraf/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so"
export LD_PRELOAD="/tmp/libgiga.so"
