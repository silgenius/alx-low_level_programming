#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: This program prints letter a-z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
