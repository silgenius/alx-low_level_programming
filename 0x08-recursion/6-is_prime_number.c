#include "main.h"

/**
 * prime_number_checker - function to check if a number is prime.
 *
 * @n: The number to check
 * @divisor: int
 * Return: 1 if prime
 */
int prime_number_checker(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n <= 1)
		return (0);
	if (n % divisor == 0)
		return (0);
	return (prime_number_checker(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_number_checker(n, 2));
}
