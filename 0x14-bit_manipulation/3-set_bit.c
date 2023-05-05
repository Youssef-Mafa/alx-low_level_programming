#include "main.h"

/**
 * set_bit - set  value of a bit to 1 at a given index
 * @n: A pointer to the number containing the bit
 * @index:index of the bit to set.
 *
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *  8))
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
