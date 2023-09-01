# 0x09-static_libraries

## Description

This directory contains C programs and a Makefile for creating static libraries in the C programming language. Static libraries are collections of object files that can be linked with other programs at compile time to provide reusable functions and code.

## Directories and Files

- `create_static_lib.sh`: A Bash script for creating a static library from all the `.c` files in the current directory. It compiles the `.c` files into `.o` files and then creates a static library named `liball.a` using `ar`.

- `main.h`: Another header file used for various projects within this directory.

- Various `.c` files: These are C source code files, each containing one or more functions that perform specific tasks.

- `0-hello_world.c`: A simple C program that prints "Hello, World!" to the standard output.

- `1-create_static_lib.sh`: A Bash script that creates a static library from all the `.c` files in this directory.

## How to Use

To create the static library `liball.a`, you can run the provided `1-create_static_lib.sh` script from the command line:

```bash
./1-create_static_lib.sh

