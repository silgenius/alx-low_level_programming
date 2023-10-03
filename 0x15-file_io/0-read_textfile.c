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
	FILE *file;
	char *buffer;
	ssize_t byte_read, bytesWritten;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	byte_read = fread(buffer, sizeof(char), letters, file);

	if (byte_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[byte_read] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, byte_read);

	if (bytesWritten < 0 || bytesWritten != byte_read)
		return (0);

	return (byte_read);
}
