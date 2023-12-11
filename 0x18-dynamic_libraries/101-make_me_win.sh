#!/bin/bash
gcc -shared -fPIC -o mylib.so rand.c -ldl
export LD_PRELOAD=/home/moh-bash/Devlopment/github_repos/alx-low_level_programming/0x18-dynamic_libraries/0x18.c/mylib.so

