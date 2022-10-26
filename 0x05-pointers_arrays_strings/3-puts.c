#include <stdio.h>
#include "main.h"

/**
 *_puts -  a function that prints a string, followed by a new line,
 * to stdout
 *
 * @str: the functioon takes a string
 *
 * Return: returns nothing
 */

void _puts(char *str)
{
	putchar(*str);
	putchar('\n');
}
