#include "main.h"
#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 *
 * @haystack: char
 * @needle: char
 * Return:   pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
