#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <string.h>

/**
 * _strlen - returns length of a string.
 * @str: string to get length
 *
 * Return:length of str.
 */
int _strlen(char *str)
{
	int ln = 0;

	while (*str++)
		ln++;

	return (ln);
}
