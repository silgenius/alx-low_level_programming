#include <stdio.h>

/**
 * main - Entry pointt
 *
 * Description: A program that computes and
 * prints the sum of all multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

