#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - Prints a character.
 * @arglist: A va_list containing the argument to be printed.
 *
 * Description: This function takes a va_list containing a character
 * argument and prints the character.
 */
void print_c(va_list arglist)
{
	printf("%c", va_arg(arglist, int));
}

/**
 * print_i - Prints an integer.
 * @arglist: A va_list containing the argument to be printed.
 *
 * Description: This function takes a va_list containing an integer
 * argument and prints the integer.
 */
void print_i(va_list arglist)
{
	printf("%d", va_arg(arglist, int));
}

/**
 * print_f - Prints a floating-point number.
 * @arglist: A va_list containing the argument to be printed.
 *
 * Description: This function takes a va_list containing a floating-point
 * argument and prints the floating-point number.
 */
void print_f(va_list arglist)
{
	printf("%f", va_arg(arglist, double));
}

/**
 * print_s - Prints a string.
 * @arglist: A va_list containing the argument to be printed.
 *
 * Description: This function takes a va_list containing a pointer to a
 * string argument and prints the string.
 */
void print_s(va_list arglist)
{
	char *s = va_arg(arglist, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

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
	size_t i = 0;

	va_start(arglist, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_c(arglist);
				break;
			case 'i':
				print_i(arglist);
				break;
			case 'f':
				print_f(arglist);
				break;
			case 's':
				print_s(arglist);
				break;
			default:
				break;
		}

		if (format[i + 1] != '\0' &&
				(format[i] == 'c' || format[i] == 'i'
				 || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}

		i++;
	}

	va_end(arglist);
	printf("\n");
}

