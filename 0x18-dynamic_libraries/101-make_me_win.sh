#!/bin/bash
wget -P /tmp https://github.com/zakariasan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libran.so
export LD_PRELOAD=/tmp/libran.so
