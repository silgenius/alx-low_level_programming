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
	int length, i, j;
	char temp;

	length = 0;
	i = 0;
	while (s[i])
	{
		length++;
		i++;
	}

	/* print str in reverse */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
