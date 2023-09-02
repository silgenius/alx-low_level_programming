#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: arguement count
 * @argv: arguememt vector
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
