#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: This program prints letter a-z
 * 10 times
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
