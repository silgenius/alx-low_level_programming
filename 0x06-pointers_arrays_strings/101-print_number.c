#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: int
 * Return: nothing
 */
void print_number(int n)
{
	double power;

	power = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / ((int)power * 10) > 0)
		power *= 10;
	while (power >= 1)
	{
		_putchar((n / (int)power) + '0');
		n %= (int)power;
		power /= 10;
	}
}
