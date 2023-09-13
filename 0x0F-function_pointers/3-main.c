#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Description: This function serves as the entry point for the program.
 * It takes command-line arguments, where argc represents the total number of
 * arguments and argv is an array of strings containing those arguments.
 * The function processes the arguments to perform a specified operation
 * on two operands.
 *
 * Return: The function returns an integer status code.
 * Normally, it returns 0 to indicate
 * successful execution. If there is an error in the command-line arguments or
 * during execution, it may return a non-zero value to indicate an error.
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int result;
	char *temp_1;
	char *temp_2;

	temp_1 = "/";
	temp_2 = "%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], temp_1) == 0 || strcmp(argv[2], temp_2) == 0) &&
			(atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);
	result = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (result);
}
