#include "main.h"

/**
* print_square -  a function that prints a square, followed by a new line
* on the terminal
* @size: amount to be printed
* Return: 0 success
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		j = 0;
		while (j < size)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
			j++;
		}
	}
}
