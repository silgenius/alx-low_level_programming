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
	int count, i, j;

	count = 0;
	i = 0;

	if (*accept == '\0')
		return (count);

	while (s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		i++;
	}
	return (count);
}
