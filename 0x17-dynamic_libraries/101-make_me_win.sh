#!/bin/bash
wget -q -O tmp/unrandom.so https://github.com/lizzieturner/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/unrandom.so 
export LD_PRELOAD=tmp/unrandom.so
