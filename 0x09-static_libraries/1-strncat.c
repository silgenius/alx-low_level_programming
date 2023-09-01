#include "main.h"
#include <string.h>
/**
 * _strncat -   a  function appends the src string to the dest
 *
 * @src: char
 * @dest: char
 * @n: int
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
