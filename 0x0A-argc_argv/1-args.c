#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it
 *
 * @argc: arguement count
 * @argv: arguememt vector
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
