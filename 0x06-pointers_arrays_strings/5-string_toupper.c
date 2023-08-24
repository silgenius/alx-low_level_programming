#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * of a string to uppercasechar *string_toupper(char *)
 * 
 * @s: str
 * Return: nothing
 */
char *string_toupper(char *s)
{
	int i, convert;

	convert = 'a' - 'A';
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - convert;
		}
	}
	s[i] = '\0';

	return (s);
}
