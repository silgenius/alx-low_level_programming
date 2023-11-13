#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Write a function that checks
 * for lowercase character.
 *
 * @c: char to be checked
 *
 * Return: Always 0 (Success)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
