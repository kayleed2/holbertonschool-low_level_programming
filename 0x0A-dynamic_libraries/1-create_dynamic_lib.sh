#!/bin/bash
# Creates dynamic library from c files in .
gcc ./*.c -c -fpic | gcc *.o -shared -o liball.so

