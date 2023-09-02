#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - a program that multiplies two numbers.
 *
 * @argc: arguement count
 * @argv: arguememt vector
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int i, result;
	size_t j;

	result = 0;
	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (strlen(argv[i])); j++)
			{
				if (!((argv[i][j] >= '0') &&
							(argv[i][j] <= '9')))
				{
					printf("Error\n");
					return (0);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
