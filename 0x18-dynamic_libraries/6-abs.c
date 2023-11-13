#include "main.h"

/**
 * _abs - Entry point
 *
 * Description:  a function that computes
 * the absolute value of an integer.
 *
 * @n: digit to be converted
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	return (n);
}
