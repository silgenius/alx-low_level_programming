#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the opcode printer program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Description: This program takes a single command-line argument, which
 * represents the number of bytes to be read from its own executable file.
 * It then reads and prints the hexadecimal representation of these bytes,
 * which can be interpreted as opcodes on certain platforms.
 *
 * Return: 0 on success, or an error code if the program encounters an issue.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

