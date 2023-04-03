#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @i: starting address of memory to be filled
 * @j: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *i, char j, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		i[x] = j;
		n--;
	}
	return (i);
}
