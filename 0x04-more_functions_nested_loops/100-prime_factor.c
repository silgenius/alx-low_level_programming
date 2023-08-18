#include <stdio.h>

/**
* main -  a program that finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
* Return: void
*/
int main(void)
{
	long long number = 612852475143;
	long long largestPrimeFactor = 2;

	while (number > 1)
	{
		if (number % largestPrimeFactor == 0)
		{
			number /= largestPrimeFactor;
		}
		else
		{
			largestPrimeFactor++;
		}
	}
	printf("%lld\n", largestPrimeFactor);
	return (0);
}

