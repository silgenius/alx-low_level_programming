#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to be appended.
 *
 * Description: This function appends the provided text content at the end of
 *              the specified file. It returns 1 on success and -1 on failure.
 *              If the file or filename is NULL, or if you don't have the
 *              required permissions to write the file, it returns -1. If
 *              text_content is NULL, it does nothing and returns 1.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	byte_written = write(fd, text_content, i);

	if (byte_written == -1)
		return (-1);

	close(fd);
	return (1);
}
