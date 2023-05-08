#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, wr, len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
        len = strlen(text_content);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    wr = write(fd, text_content, len);
    close(fd);

    if (wr == -1 || wr != len)
        return (-1);

    return (1);
}
