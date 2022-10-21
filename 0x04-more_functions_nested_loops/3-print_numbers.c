#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char ch = 48;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
