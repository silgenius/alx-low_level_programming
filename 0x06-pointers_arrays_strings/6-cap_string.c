#include "main.h"

/**
 * cap_string - a function that changes all lowercase
 * letters of a string to uppercasechar *string_toupper(char *)
 *
 * @s: str
 * Return: char
 */
char *cap_string(char *s)
{
	int convert, i;

	i = 0;
	convert = 'a' - 'A';

	if (s[i] >= 'a' && s[i] <= 'z')
		s[0] -= convert;

	for (i = 1; s[i]; i++)
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= convert;
			default:
				break;
		}
	}

	return (s);
}
