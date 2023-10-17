#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/zakariasan/alx-low_level_programming/master/0x18-dynamic_libraries/my_gm.so
export LD_PRELOAD=/tmp/my_gm.so
