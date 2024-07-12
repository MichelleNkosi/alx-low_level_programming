#!/bin/bash
# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create the static library liball.a from all .o files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up .o files
rm -f *.o
