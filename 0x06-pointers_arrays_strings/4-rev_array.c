#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *x, int y)
{
	int i;
	int j;

	for (i = 0; i < y--; i++)
	{
		j = x[i];
		x[i] = x[y];
		x[y] = j;
	}
}
