#include "main.h"

/**
 * *_strcat - function
 * @dest: pointer to the string to be concatenated upon.
 * @src:  source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
