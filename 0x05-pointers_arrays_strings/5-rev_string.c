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
	while(s[i])
	{
		length++;
		i++;
	}

	/* copy s to tmp */
	char temp[length];

	for (i = 0; s[i]; i++)
	{
		temp[i] = s[i];
	}

	/* print str in reverse */
	int j;

	j = 0;
	for (i = length - 1; i >= 0; i--)
	{
		s[j] = temp[i];
		j++;
	}
	s[j] = '\0'; /* append null char to s */
}
