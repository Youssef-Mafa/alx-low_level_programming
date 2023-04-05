#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @v: value to raise
 * @p: power
 *
 * Return: result of the power
 */
int _pow_recursion(int v, int p)
{
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (v * _pow_recursion(v, p - 1));
}
