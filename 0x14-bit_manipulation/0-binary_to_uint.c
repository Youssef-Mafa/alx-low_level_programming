#include "main.h"

/**
 * binary_to_uint -  function converts a binary number to unsigned int
 * @b:pointer pointing of 0 and 1 char
 * Return: converted number or 0 or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
