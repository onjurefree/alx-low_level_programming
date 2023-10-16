#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fpic 8.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
