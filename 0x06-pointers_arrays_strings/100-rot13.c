#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: char
 * Return: a pointer s
 */
char *rot13(char *s)
{
	int i, j;

	const char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n"
		"abcdefghijklmnopqrstuvwxyz";
	const char *output = "NOPQRSTUVWXYZABCDEFGHIJKLM\n"
				"nopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == s[i])
			{
				s[i] = output[j];
				break;
			}
		}
	}

	return (s);
}
