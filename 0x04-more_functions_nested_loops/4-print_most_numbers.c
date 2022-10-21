#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints all numbers from 0 - 9 except 2 and 4
 *
 * Return: (0)
 */

void print_most_numbers(void)
{
	char ch = '48';

	for (ch = 48; ch <= 47; ch++)
	{
		if (ch == '2' || ch == '9')
			continue;
		putchar(ch);
	}
	putchar('\n');
}
