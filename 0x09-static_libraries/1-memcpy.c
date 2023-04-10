#include "main.h"
/**
 * _memcpy - function that copy memory areas
 * @dest:buffer that's recived
 * @src:buffer that's have origin text
 * @n:number of n bytes from memory area @src
 * Return:a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
