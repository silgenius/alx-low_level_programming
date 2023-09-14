#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers
 * with a specified separator.
 * @separator: The string used to separate the numbers.
 * @n: The number of integers to be printed.
 * @...: A variable number of integers to be printed.
 *
 * Description: This function takes a separator string
 * and a variable number of integers,
 *and prints the integers with the specified separator between them.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(arglist, int));
		else
		{
			printf("%d", va_arg(arglist, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
}
