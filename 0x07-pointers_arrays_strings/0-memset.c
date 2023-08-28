#include "main.h"
#include <stdio.h>

/**
 * char *_memset - The _memset() function fills
 * the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: char
 * @b: char (The value to be set)
 * @n: The number of bytes to be set in the memory block
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
}
