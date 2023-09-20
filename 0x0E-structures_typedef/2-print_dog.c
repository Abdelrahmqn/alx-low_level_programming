#include "dog.h"
#include <stdio.h>
/**
 *print_dog - dog's information
 *@d: char
 */

void print_dog(struct dog *d)
{
	if (d)
	{

	if (d->name == NULL)
		d->name = "(nil)";
		printf("(nil)%s\n, d->name");
	else
		(d->owner == NULL)
			d->owner = "(nil)"
			printf("Name: %s\n, d->owner")

	}
}
