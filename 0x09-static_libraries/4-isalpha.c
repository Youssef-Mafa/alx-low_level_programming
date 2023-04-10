#include "main.h"
/**
 * _isalpha - virefy a character is alphabetic.
 * @c: character need to checked.
 *
 * Return: 1 if character is alpha , 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
