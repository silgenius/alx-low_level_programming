#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root using recursion.
 * @n: The number whose square root is to be found.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

