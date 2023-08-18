#include <stdio.h>
/**
 * primeFactors - find prime factor of
 * a number
 *
 * @n: int
 * Return: void
 */
void primeFactors(long long n)
{
	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (int i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}


	if (n > 2)
		printf("%lld ", n);
}

/**
* main -  a program that finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
* Return: void
*/
int main(void)
{
	primeFactors(612852475143);
	return (0);
}
