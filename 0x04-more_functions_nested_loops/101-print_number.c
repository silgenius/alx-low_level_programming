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
		n = n * -1;
	}
	if (n <= 9)
		_putchar(n + '0');
	else if (n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
