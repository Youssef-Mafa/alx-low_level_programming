#include "main.h"

/**
 * _strncat - function of strncat
 * @dest: string
 * @src: string 
 * @n: number bytes from src to append dst
 *
 * Return: pointer 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
