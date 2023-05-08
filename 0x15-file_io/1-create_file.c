#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to name of file
 * @text_content: pointer to text
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, len);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
