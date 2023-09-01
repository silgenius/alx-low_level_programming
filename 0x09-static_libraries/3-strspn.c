#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * from memory area src to memory area dest
 *
 * @s: char
 * @accept: char
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (count);
}
