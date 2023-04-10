#include "main.h"
/**
 *  _memset - put  first n bytes of the memory area
 *          pointed by s with  constant byte c.
 * @s: pointer  to be filled.
 * @b: character to fill  memory area with.
 * @n: number of bytes to be filled.
 * Return: pointer filled  @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
