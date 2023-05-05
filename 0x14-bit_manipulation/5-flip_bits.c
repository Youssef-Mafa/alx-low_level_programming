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
	unsigned int x = 0;
	unsigned long int y = n ^ m;

	while (y)
	{
		x += y & 1;
		y >>= 1;
	}
	return (x);
}
