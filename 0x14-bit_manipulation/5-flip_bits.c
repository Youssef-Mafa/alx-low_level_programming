#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = sizeof(unsigned long int) * 8; i >= 0; i--)
	{
		c = x >> i;
		if (c & 1)
			count++;
	}

	return (count);
}
