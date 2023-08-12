#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a program that prints all
 * possible different combinations
 * of  two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(i == 8 && j == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
