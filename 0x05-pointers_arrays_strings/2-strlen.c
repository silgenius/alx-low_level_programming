#include "main.h"

/**
 * _strlen -   a function that returns the length of a string.
 *
 * @s: char
 * Return: int (the length of a string)
 */
int _strlen(char *s)
{
	int i, length;
	
	length = 0;
	for (i = 0; s[i]; i++)
	{
		length++;
	}
	return (length);
}
