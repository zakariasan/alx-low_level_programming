#!/bin/bash
wget -q -O /tmp/libran.so https://github.com/zakariasan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libran.so
export LD_PRELOAD=/tmp/libran.so
