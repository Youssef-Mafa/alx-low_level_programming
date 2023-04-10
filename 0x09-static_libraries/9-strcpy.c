#include "main.h"

/**
 * _strcpy -  function to copy string
 * @dest:  buffer contain string that copied.
 * @src:source string to copy.
 *
 * Return: pointer to dest string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
