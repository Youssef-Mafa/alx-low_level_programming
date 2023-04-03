#include "main.h"
/**
 * _strspn - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *x, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*x)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*x == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		x++;
	}
	return (n);
}
