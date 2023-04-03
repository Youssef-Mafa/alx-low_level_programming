#include "main.h"
/**
 * _strpbrk - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *x, char *accept)
{
	int i;

	while (*x)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*x == accept[i])
		return (x);
		}
	x++;
	}
	return ('\0');
}
