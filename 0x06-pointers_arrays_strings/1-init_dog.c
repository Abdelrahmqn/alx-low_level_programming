#include "dog.h"
#include <stdio.h>
/**
*init_dog - writte a function that initalize a varible of type.
*@d:int
*@name: char
*@age: float
*@owner: char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;

		d->age = age;

		d->owner = owner;
	}
}
