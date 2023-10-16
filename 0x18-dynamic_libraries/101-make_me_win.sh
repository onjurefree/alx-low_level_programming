#!/bin/bash
wget -p /tmt https:/github.com/baccrie/alx_low_level_programming/raw/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD+?tmp/libmask.so
