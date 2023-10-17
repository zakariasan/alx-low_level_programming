#!/bin/bash
wget -P .. https://github.com/zakariasan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigafun.so
export LD_PRELOAD="$PWD/../gigafun.so"
