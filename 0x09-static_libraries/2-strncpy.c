#include "main.h"

/**
 * _strncpy - function strncpy
 * @dest:buffer storing string copy
 * @src: source string
 * @n: max numbr of byte to copied from src
 *
 * Return: pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
