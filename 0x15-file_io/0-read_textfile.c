#include "main.h"

/**
 * read_textfile - Reads and prints a text file.
 * @filename: The name of the file to be read.
 * @letters: The maximum number of letters to read and print.
 *
 * Description: This function reads a text file and prints its contents up to
 *              the specified number of letters. It returns the actual number
 *              of letters read and printed. If the file cannot be opened or
 *              read, or if the write operation fails, it returns 0.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t byte_read, bytesWritten, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byte_read = read(fd, buffer, letters);

	if (byte_read < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[byte_read] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, byte_read);

	free(buffer);
	close(fd);

	if (bytesWritten < 0 || bytesWritten != byte_read)
		return (0);

	return (byte_read);
}
