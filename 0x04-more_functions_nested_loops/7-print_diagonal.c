#include "main.h"

/**
* print_diagonal -  a function that draws a diagonal line
* on the terminal
* @n: amount to be printed
* Return: 0 success
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}

	}
}
