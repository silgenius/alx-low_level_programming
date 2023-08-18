#include "main.h"

/**
* print_number -  a function that prints an integer.
*
* @n: prints n
* Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int divisor = 1;
	int temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar('0' + digit);
		n -= digit * divisor;
		divisor /= 10;
	}
}
