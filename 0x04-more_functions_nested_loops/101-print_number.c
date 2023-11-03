#include "main.h"

/**
* print_number -  a function that prints an integer.
*
* @n: prints n
* Return: void
*/
void print_number(int n)
{
	unsigned int pow;
	int loop_breaker;

	if (n < 1)
	{
		if (n != 0)
			_putchar('-');
		n = n * -1;
	}
	pow = 1;

	while (n / (pow * 10) > 0)
		pow *= 10; /*finding the power of n*/
	loop_breaker = 1;

	while (loop_breaker == 1)
	{
		if (pow == 1)
		{
			_putchar('0' + n % 10);
			loop_breaker = 0;
		}
		else
		{
			_putchar('0' + (n / pow) % 10);
			pow /= 10;
		}
	}
}
