#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char ch = '0';

	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
