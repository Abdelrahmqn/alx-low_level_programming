#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog's informains.
 *@name : dog
 *@age : int
 *@owner : char
 *description : longer than long
 */

struct dog
{
	char *name;
		float age;
			char *owner;
}typedef struct dog_t;
/**
 * dog_t - typedef for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
