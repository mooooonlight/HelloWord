#!/bin/bash
echo "begining to compile"

#rm tmp files
echo "remove files"
rm cmake_install.cmake
rm -rf CMakeFiles
rm CMakeCache.txt
rm Makefile

if [ $# != 0 ];then
    arg=$1
    if [ "clean" == ${arg} ];then
        echo "just exec clean, not make"
        exit 0;
    fi
fi

#cmake
cmake .

#make
make
