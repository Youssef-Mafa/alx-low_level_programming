#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - initializ struct dog and thier variables
 *@d: pointer to struct dog
 *@name:pointer to var name
 *@age:pointer to age
 *@owner:pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
