#include "main.c"

/**
 * print_line - prints numbers between 0 to 14
 * 10 times.
 * @n: int n
 * Return: no return.
 *
 */

void print_line(int n)
{
	n = 2;

	int i;

	for (i = 0; i <= n - 1; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
