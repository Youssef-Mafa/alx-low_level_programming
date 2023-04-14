#include "main.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array
 *usnig malloc
 *@nmemb:number of elements
 *@size:byte size for each element
 *Return: NULL or ptr to alloct memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *y;
	unsigned int i;
	char *x;
	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);

	if (y == NULL)
		return (NULL);
	x = y;
	for (i = 0; i < (nmemb * size); i++)
	{
		x[i] = '\0';
	}
	return (y);
}
