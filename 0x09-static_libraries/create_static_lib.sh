#!/bin/bash
# Creates static library from c files in .
gcc ./*.c -c -fpic | ar rcs liball.a *.o

