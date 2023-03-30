#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int y)
{
	int x;

	x = 0;
	while (x < y && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < y)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

