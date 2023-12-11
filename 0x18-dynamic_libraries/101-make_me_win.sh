#!/bin/bash

# Compile the shared library
gcc -shared -fPIC -o mylib.so rand.c -ldl
export RUN_C="0"
# Set LD_PRELOAD, run the program, and then use the terminal interactively
export LD_PRELOAD=/home/moh-bash/Devlopment/github_repos/alx-low_level_programming/0x18-dynamic_libraries/0x18.c/mylib.so

