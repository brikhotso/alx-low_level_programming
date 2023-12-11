#!/bin/bash
wget -P /tmp https://github.com/brikhotso/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD="/tmp/win.so"
