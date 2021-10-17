#!/bin/bash
# Creates dynamic library from c files in .
gcc ./*.c -c -Wall -pedantic - Werror -Wextra -fpic | gcc *.o -shared -o liball.so

