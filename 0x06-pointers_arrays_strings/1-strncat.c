#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate 2 char
 * @dest: first char
 * @src: second char
 * @n: amount of byte
 * Return: the result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
