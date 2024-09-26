#!/bin/bash
# Compile all .c files into object files with position-independent code
gcc -c -fPIC *.c
# Link all object files into a dynamic library called liball.so
gcc -shared -o liball.so *.o
# Clean up the object files
rm *.o
