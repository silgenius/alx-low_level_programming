#include "main.h"
#include <string.h>

/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
