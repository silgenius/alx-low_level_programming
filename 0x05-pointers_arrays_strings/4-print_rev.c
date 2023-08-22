#include "main.h"

/**
 * print_rev -  a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: char
 * Return: nothing
 */
void print_rev(char *s)
{
	/* finding the length */
	int length, i;

	length = 0;
	i = 0;
	while (s[i])
	{
		length++;
	}

	/* print str in reverse */

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar("\n");
}
