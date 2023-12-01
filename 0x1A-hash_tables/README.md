# 0x1A. C - Hash Tables

## Description

This project is part of the ALX Low-Level Programming curriculum. It focuses on the implementation and usage of hash tables in the C programming language.

## Files

1. [0-hash_table_create.c](./0-hash_table_create.c) - C function that creates a hash table.
2. [1-djb2.c](./1-djb2.c) - C function that implements the djb2 algorithm to hash a string.
3. [2-key_index.c](./2-key_index.c) - C function that gives the index of a key using the hash_djb2 function.
4. [3-hash_table_set.c](./3-hash_table_set.c) - C function that adds an element to the hash table.
5. [4-hash_table_get.c](./4-hash_table_get.c) - C function that retrieves a value associated with a key.
6. [5-hash_table_print.c](./5-hash_table_print.c) - C function that prints a hash table.
7. [6-hash_table_delete.c](./6-hash_table_delete.c) - C function that deletes a hash table.

## How to Use

Each file corresponds to a specific task. Instructions on how to run or use each file are provided within the task's directory.

## AUTHORS

- [Martin Olutade](https://github.com/silgenius)

## Hash Table Usage

To use the hash table functions in your C program, include the `hash_tables.h` header file in your source code and compile the files with the provided functions.

Example:

```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "key", "value");
    printf("%s\n", hash_table_get(ht, "key"));
    hash_table_delete(ht);

    return (0);
}

