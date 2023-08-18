#include "main.h"

/**
* print_line -  a function that draws a straight linei
* in the terminal
* @n: amount to be printed
* Return: 0 success
*/
void print_line(int n)
{
	int i;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
