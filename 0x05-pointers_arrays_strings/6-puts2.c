#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: char
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i];  i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
