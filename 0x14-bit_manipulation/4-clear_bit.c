#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: pointer to the number to modify
 * @index: index of the bit to modify
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
