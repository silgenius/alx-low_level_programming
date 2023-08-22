#include "main.h"

/**
 * puts_half -   a function that prints half of a string,
 * followed by a new line.
 * @str: char
 * Return: the pointer to dest
 */
void puts_half(char *str)
{
	int i;
	int length = 0;
	int start_index;

	i = 0;
	while (str[i])
	{
		length++;
		i++;
	}

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1) / 2;
	for (i = start_index; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
