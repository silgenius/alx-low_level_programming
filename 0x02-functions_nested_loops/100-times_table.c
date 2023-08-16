#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description:  a function that
 * prints the n times table, starting with 0.
 *
 * @n: n is the number of times table
 * to be printed
 *
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, result;

	if ((n < 0) || (n > 15))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result <= 9)
				_putchar(result + '0');
			else if ((result >= 10) && (result <= 99))
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				int tmp;

				_putchar(result / 100 + '0');
				tmp = result % 100;
				_putchar(tmp / 10 + '0');
				_putchar(tmp % 10 + '0');
			}
			if (result != n * n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
