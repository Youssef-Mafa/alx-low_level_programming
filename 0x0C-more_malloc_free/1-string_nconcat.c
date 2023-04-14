#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1:pointer to mem contain string 1
 * @s2:pointer to mem contain strin 2
 * @n:number of byets s2 that we need
 * Return:NULL or string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = n;
	for (i = 0; s1[i]; i++)
	{
		j++;
	}
	x = malloc((j + 1) * sizeof(char));
	if (x == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		x[j++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		x[j++] = s2[i];
	}
	x[j] = '\0';
	return (x);
}
