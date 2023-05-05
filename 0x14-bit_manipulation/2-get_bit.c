#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > 63) ? -1 : (n >> index) & 1;
}
