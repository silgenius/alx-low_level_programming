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
	int sum = 0;

	for (int i = 3; i < 10; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

