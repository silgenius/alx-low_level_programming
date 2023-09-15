#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - Prints values according to a specified format.
 * @format: A string containing format specifiers for the values to be printed.
 * @...: A variable number of arguments corresponding to the format specifiers.
 *
 * Description: This function takes a format string and a variable number of
 *
 * argumentsand prints the values according to the specified format.
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int c, d, flag;
	char *s;
	size_t i;
	double f;

	i = 0;
	flag = 0;

	va_start(arglist, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(arglist, int);
				printf("%c", c);
				break;
			case 'i':
				d = va_arg(arglist, int);
				printf("%d", d);
				break;
			case 'f':
				f = va_arg(arglist, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(arglist, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				flag = 1;
				break;
		}

		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
		flag = 0;
	}
	va_end(arglist);
	printf("\n");
}
