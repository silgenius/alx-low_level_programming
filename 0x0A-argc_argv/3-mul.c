#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: arguement count
 * @argv: arguememt vector
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 1;
	if (argc <= 1)
	{
		printf("Error\n");

	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);
	}
	return (0);
}
