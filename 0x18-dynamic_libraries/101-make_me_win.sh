#!/bin/bash
wget -P /tmp https://github.com/brikhotso/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/iwin.so
