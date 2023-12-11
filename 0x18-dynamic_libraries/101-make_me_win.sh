#!/bin/bash
wget -O lib.so https://github.com/sozoia/alx-low_level_programming/raw/main/0x18-dynamic_libraries/mylib.so
export LD_PRELOAD=/lib.so

