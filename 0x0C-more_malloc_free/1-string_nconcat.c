#include "main.h"
#include <string.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = malloc(strlen(s1) + n * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		array[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		if (j == strlen(s2))
			break;
		array[i] = s2[j];
		i++;
	}
	array[i] = '\0';
	return (array);
}
