# 0x18. C - Dynamic Libraries

## Description

This project is part of the ALX Low-Level Programming curriculum. It explores the concept of dynamic libraries in the C programming language.

## Files

1. [libdynamic.so](./libdynamic.so) - A dynamic library containing various C functions.
2. [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) - Shell script that creates a dynamic library from a list of C files.
3. [100-operations.so](./100-operations.so) - A dynamic library containing mathematical operation functions.
4. [101-make_me_win.sh](./101-make_me_win.sh) - Shell script that injects a dynamic library to alter the outcome of the `gm` command in the Lotto program.

## AUTHORS

- [Martin Olutade](https://github.com/silgenius)

## How to Use

### Compilation

To compile the dynamic library, use the following command:

```bash
gcc -Wall -fPIC -c *.c

