#include "main.h"

/**
 * binary_to_uint -  function converts a binary number to unsigned int
 * @b:pointer pointing of 0 and 1 char
 * Return: converted number or 0 or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int a = 0;

	if (!b)
		return (0);

	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		n <<= 1;
		n += b[a] - '0';
		a++;
	}
	return (n);
}
