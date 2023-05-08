#include "main.h"

/**
 * read_textfile - function reads text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to name of file
 * @letters: number of letters the function should read and print
 * Return: 0 or number of bytes the function should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *tab;

	if (filename == NULL)
		return (0);

	tab = malloc(sizeof(*tab) * (letters + 1));
	if (tab == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1) {
		free(tab);
		return (0);
	}
	rd = read(op, tab, letters);
	if (rd == -1) {
		free(tab);
		close(op);
		return (0);
	}

	tab[rd] = '\0';
	wr = write(STDOUT_FILENO, tab, rd);
	if (wr == -1) {
		free(tab);
		close(op);
		return (0);
	}

	free(tab);
	close(op);
	return (wr);
}
