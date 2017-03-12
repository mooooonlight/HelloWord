#!/bin/bash
echo "begining to compile"

#rm tmp files
echo "remove files"
rm cmake_install.cmake
rm -rf CMakeFiles
rm CMakeCache.txt
rm Makefile


#cmake
cmake .

#make
make
