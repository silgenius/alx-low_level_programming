#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description:  a function that
 * prints the last digit of a number.
 *
 * @n: number to be checked
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
