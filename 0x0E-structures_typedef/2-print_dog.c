#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the struct dog.
 *
 *@d: intialize
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Owner: %s\n", d->owner);
	}
}
