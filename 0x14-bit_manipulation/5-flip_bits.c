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
	unsigned long int x = n ^ m;
	unsigned int inc = 0;

	while (x)
	{
		inc += x & 1;
		x >>= 1;
	}
	return (inc);
}
