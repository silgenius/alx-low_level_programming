#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the new file for the copied text
 * @src: the copied text
 * @n:the amount of copies to be printed
 *
 * Return: return the copied text
 */

char *_strncpy(char *dest, char *src, int n)
{
		return (strncpy(dest, src, n));
}
