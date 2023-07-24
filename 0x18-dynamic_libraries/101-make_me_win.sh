#!/bin/bash
wget -P /tmp https://github.com/kafuipraise/alx-low_level_programming/raw/master/0x18-dynamic_libraries/Tilly.so
export LD_PRELOAD=/tmp/Tilly.so
