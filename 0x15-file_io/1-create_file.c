#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written to the file.
 *
 * Description: This function creates a file with the specified name and writes
 *             the provided text content to it. It returns 1 on success, and -1
 *             on failure (e.g., if the file cannot be created, written, or if
 *             an error occurs).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, byte_write;

	i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		byte_write = write(fd, text_content, i);

		if (byte_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
