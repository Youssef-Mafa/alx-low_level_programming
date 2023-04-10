#include "main.h"

/**
 * _atoi - changee string to int.
 * @s:string need converted.
 *
 * Return: int value of converted str.
 */
int _atoi(char *s)
{
	int si = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			si *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * si);
}
