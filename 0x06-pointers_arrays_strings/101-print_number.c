#include "main.h"

/**
 * print_number - a function that prints an integer.
 * 
 * @n: int
 * Return: 
 */
void print_number(int n)
{
	double power;
	int loop_break;

	loop_break = 1;
	power = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / ((int)power * 10) > 0)
		power *= 10;
	while (loop_break >= 1)
	{
		if ((int)power == 1)
		{
			_putchar(n % 10 + '0');
			loop_break = 0;
		}
		else
		{
			_putchar(((n / (int)power) % 10) + '0');
			power /= 10;
		}
	}
}
