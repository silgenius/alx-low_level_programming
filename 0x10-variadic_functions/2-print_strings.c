#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings
 * with a specified separator.
 *
 * @separator: The string used to separate the strings.
 * @n: The number of strings to be printed.
 * @...: A variable number of pointers to strings to be printed.
 *
 * Description: This function takes a separator string and a variable number
 * of strings, and prints the strings with the
 * specified separator between them.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *tmp;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(arglist, char*);

		if (tmp == NULL)
			tmp = "(nil)";
		printf("%s", tmp);
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}

