#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * from memory area src to memory area dest
 *
 * @s: char
 * @c: char to checked
 * Return: the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
