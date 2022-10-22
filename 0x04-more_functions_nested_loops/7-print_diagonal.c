#include "main.h"
#include <stdio.h>

/**
 * print_line - prints numbers between 0 to 14
 * 10 times.
 * @n: int n
 * Return: no return.
 *
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		putchar(' ');
	}
	putchar("\\");
	putchar('\n');
}
