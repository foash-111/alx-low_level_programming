#!/bin/bash

#1-compile our c files
gcc -c *.c

#2-creat our shared library and put object files inside it
gcc -shared -fPIC -o liball.so *.o

#3-make our library linked with our .c files
#-L. look for library in current directory
#ldynamic -> link the libdynamic.so library with my files when compile
#len -> my output file name
gcc *.c -L. -lall

#4-export the path of the directory that contain the library
#to the LD_LIBRARY_PATH environment-variable

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

#RUN YOUR PROGRAM SAFETY
