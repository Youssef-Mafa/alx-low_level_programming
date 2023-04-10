#include "main.h"

/**
 * *_strcat - function
 * @dest: pointer to  string
 * @src:  source string 
 *
 * Return:  pointer 
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
