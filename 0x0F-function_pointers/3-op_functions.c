#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description: This function takes two integers, 'a' and 'b',
 * and returns their sum.
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description: This function takes two integers, 'a' and 'b',
 * and returns their difference.
 *
 * Return: The difference between 'a' and 'b'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Description: This function takes two integers, 'a' and 'b',
 * and returns their product.
 *
 * Return: The product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of two integers.
 * @a: The dividend.
 * @b: The divisor (should not be zero).
 *
 * Description: This function takes two integers, 'a' (dividend)
 * and 'b' (divisor), and returns
 * the result of 'a' divided by 'b'.
 *
 * Return: The result of 'a' divided by 'b'.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor (should not be zero).
 *
 * Description: This function takes two integers, 'a' (dividend)
 * and 'b' (divisor), and returns
 * the remainder of 'a' divided by 'b'.
 *
 * Return: The remainder of 'a' divided by 'b'.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

