#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Starting number
 *
 * Description: Prints all natural numbers from n to 98, separated by a comma
 *              and a space. Numbers are printed in ascending order.
 *              The first printed number is n,and the last printed number is 98
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}

