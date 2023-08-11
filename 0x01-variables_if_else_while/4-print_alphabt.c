#include <stdio.h>

/**
 * main - a program that prints the alphabet
 * in lowercase, followed by a new line
 * except the q and e
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
