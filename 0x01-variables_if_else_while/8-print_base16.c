#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints letter a-z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
