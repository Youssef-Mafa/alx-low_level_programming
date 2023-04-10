#include "main.h"
/**
 *_strpbrk -  function locates the first occurrence in the string
 *@s: pointer that's contain string
 *@accept:pointer that's contain char who we search for
 *Return: return s if founded or null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
