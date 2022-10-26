#include <stdio.h>
#include "main.h"

/**
 * swap_int -swaps 2 integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns nothing(0)
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
