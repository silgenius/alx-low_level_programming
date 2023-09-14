#include "function_pointers.h"
#include <stdio.h>

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
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void *main_addr = (void *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(unsigned char *)(main_addr + i));
	}
	printf("\n");

	return (0);
}
