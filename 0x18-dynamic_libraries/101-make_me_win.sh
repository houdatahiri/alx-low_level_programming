#!/bin/bash
wget -P /tmp https://github.com/houdaalaoui/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
