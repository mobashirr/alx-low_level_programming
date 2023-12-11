#!/bin/bash

# Compile all .c files into object files
gcc -c -fpic *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
# rm *.o

