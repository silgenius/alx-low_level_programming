#include <stdio.h>

/**
 * main - check number
 * @n: int to be checked
 * Return: 0
 */
int main(signed int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
