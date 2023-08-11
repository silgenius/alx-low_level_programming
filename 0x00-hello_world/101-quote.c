#include <stdio.h>

/**
 * main - using the putchar to display a string
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
