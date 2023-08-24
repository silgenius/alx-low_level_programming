#include "main.h"
#include <string.h>

/**
 * _strncpy -  a function that prints a string, in reverse.
 * 
 * @src: char
 * @dest: char
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
