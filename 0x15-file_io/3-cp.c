#include "main.h"

/**
 * error_FileTo - Handles an error when writing to a file.
 * @file: The name of the file.
 *
 * Description: This function is called when an error occurs while attempting
 *              to write to the specified file. It prints an error message to
 *              the standard error output and exits the program with status 99.
 */
void error_FileTo(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_FileFrom - Handles an error when reading from a file.
 * @file: The name of the file.
 *
 * Description: This function is called when an error occurs while attempting
 *              to read from the specified file. It prints an error message to
 *              the standard error output and exits the program with status 98.
 */
void error_FileFrom(char *file)
{
	dprintf(2, "Error: Can't read from file %s", file);
	exit(98);
}

/**
 * error_close - Handles an error when closing a file descriptor.
 * @n: The file descriptor number.
 *
 * Description: This function is called when an error occurs while attempting
 *              to close the specified file descriptor. It prints an error
 *              message to the standard error output and exits the program with
 *              status 100.
 */
void error_close(int n)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
	exit(100);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Description: This program takes two command-line arguments: the source file
 *(file_from) and the destination file (file_to). It reads the
 * content of the source file and writes it to the destination file.
 *
 * Return: Upon successful completion, returns 0. If incorrect arguments are
 * provided or if there are errors during file operations, it returns 1.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int fd_FileTo, fd_FileFrom;
	ssize_t byteread, bytewrite;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_t\n");
		exit(97);
	}

	fd_FileTo = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd_FileTo == -1)
		error_FileTo(argv[2]);

	fd_FileFrom = open(argv[1], O_RDONLY);

	if (fd_FileFrom == -1)
		error_FileFrom(argv[1]);
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (0);
	while ((byteread = read(fd_FileFrom, buffer, 1024)) != 0)
	{
		if (byteread == -1)
			error_FileFrom(argv[1]);
		bytewrite = write(fd_FileTo, buffer, byteread);
		if (bytewrite == -1)
			error_FileTo(argv[2]);
	}

	free(buffer);

	if ((close(fd_FileFrom)) == -1)
		error_close(fd_FileFrom);
	if ((close(fd_FileTo)) == -1)
		error_close(fd_FileTo);
	return (0);
}

