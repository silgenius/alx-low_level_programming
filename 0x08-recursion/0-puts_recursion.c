#include "main.h"

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 *
 * @s: char
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	return (_puts_recursion(s + 1));
}
