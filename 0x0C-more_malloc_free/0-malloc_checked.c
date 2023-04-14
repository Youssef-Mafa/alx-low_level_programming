#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function check allocat memo
 *@b:num of bytes allocate
 *Return:pointer to allocate memo
 */
void *malloc_checked(unsigned int b)
{
	void *loc;
	loc = malloc(b);
	if (loc == NULL)
		exit(98);
	return (loc);
}
