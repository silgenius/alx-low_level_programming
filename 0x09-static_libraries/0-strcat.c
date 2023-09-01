#include "main.h"
#include <string.h>
/**
 * _strcat -   a  function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @src: char
 * @dest: char
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
