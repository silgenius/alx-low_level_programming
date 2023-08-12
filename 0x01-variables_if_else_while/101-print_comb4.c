#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a program that prints all
 * possible different combinations
 * of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
