#!/bin/bash
wget -P ./libgiga https://github.com/zakariasan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigafun.so
export LD_PRELOAD="$PWD/libgiga.so"
