#includ "dog.h"
/**
 *init_dog - dog's information
 *@d: int
 *@name: char
 *@age: number
 *@owner: name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
d->name = name;
d->age = age;
d->owner = owner;
	}
}
