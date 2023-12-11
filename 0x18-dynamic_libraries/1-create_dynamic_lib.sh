!#/bin/bash
gcc -c *.c -fpic
gcc -shared *.o -o liball.so

