#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - the fredoom for dogs.
 *
 *@d: variable
 */
void free_dog(dog_t *d)
{
	if (d)

	{
		free(d->name);
		free(d->owner);
	free(d);
	}
}
