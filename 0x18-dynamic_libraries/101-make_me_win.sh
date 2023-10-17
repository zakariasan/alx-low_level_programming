#!/bin/bash
wget -P /tmp/ https://github.com/zakariasan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/funlib.so
export LD_PRELOAD=/tmp/funlib.so
