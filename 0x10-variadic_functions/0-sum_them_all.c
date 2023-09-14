#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to be summed.
 * @...: A variable number of arguments to be summed.
 *
 * Description: This function takes a variable number of arguments and returns their sum.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);

	va_start(arglist, n);
	result = 0;

	for (i = 0; i < n; i++)
	{
		result += va_arg(arglist, int);
	}

	va_end(arglist);

	return (result);
}
