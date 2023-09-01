#!/bin/bash
gcc -c *.c
ar -rc create_static_lib.sh *.o
ranlib create_static_lib.sh
