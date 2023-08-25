#!/bin/bash
gcc -Wall -Wetra -Werror -pendantic -c -fPIC *.c
gcc -shared -Wl, -soname, liball.so -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
