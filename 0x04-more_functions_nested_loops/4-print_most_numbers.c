#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints all numbers from 0 - 9 except 2 and 4
 *
 * Return: (0)
 */

void print_most_numbers(void)
{
	char ch = 48;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50 || ch == 52)
			continue;
		putchar(ch);
	}
	putchar('\n');
}
