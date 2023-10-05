#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Description: This program takes two command-line arguments: the source file
 *              (file_from) and the destination file (file_to). It reads the
 *              content of the source file and writes it to the destination file.
 *
 * Return: Upon successful completion, returns 0. If incorrect arguments are
 *         provided or if there are errors during file operations, it returns 1.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int fd_FileTo, fd_FileFrom;
	ssize_t closeFileTo, closeFileFrom, byteread, bytewrite;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_t\n");
		exit(97);
	}

	fd_FileTo = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_FileTo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fd_FileFrom = open(argv[1], O_RDONLY);
	
	if (fd_FileFrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1025);
	if (buffer == NULL)
		return (0);
	byteread = read(fd_FileFrom, buffer, sizeof(char) *1024);
	if (byteread == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		close(fd_FileTo);
		close(fd_FileFrom);
		free(buffer);
		exit(98);
	}
	buffer[byteread] = '\0';
	bytewrite = write(fd_FileTo, buffer, byteread);
	if (bytewrite == -1 || bytewrite != byteread)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_FileTo);
		close(fd_FileFrom);
		free(buffer);
		exit(99);
	}

	closeFileFrom = close(fd_FileFrom);
	closeFileTo = close(fd_FileTo);

	if (closeFileFrom == -1 || closeFileTo == -1)
	{
		closeFileFrom == -1 ? dprintf(2, "Error: Can't close fd %d", fd_FileFrom) :
			dprintf(2, "Error: Can't close fd %d", fd_FileTo);
		exit(100);
	}

	free(buffer);
	return (0);
}


