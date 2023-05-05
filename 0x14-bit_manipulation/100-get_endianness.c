#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0=big, 1=little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}

