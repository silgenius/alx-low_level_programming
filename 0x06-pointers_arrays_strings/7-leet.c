#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * 
 * @s: str
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	const char *charset_alpha = "AaEeOoTtLl";
	const char *charset_num = "44330077711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; charset_alpha[j]; j++)
		{
			if (charset_alpha[j] == s[i])
				s[i] = charset_num[j];
		}
	}
	return (s);
}
