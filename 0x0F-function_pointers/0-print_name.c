#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function print name
 * @name:name should return
 * @f:function pointer to point code
 * Return:name or NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
