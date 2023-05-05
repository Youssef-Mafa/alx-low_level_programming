#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, y = 0;
	unsigned long int i;

	for (x = 63; x >= 0; x--)
	{
		i = n >> x;

		if (i & 1)
		{
			_putchar('1');
			y++;
		}
		else
		{
			if (y != 0)
			{
				_putchar('0');
			}
		}
	}

	if (y == 0)
	{
		_putchar('0');
	}
}
