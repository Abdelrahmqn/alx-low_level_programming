#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog's informains.
 *@name : dog
 *@age : int
 *@owner : char
 *description : dog
 *return - 0
 */

struct dog
{
*char name;
	float age;
		char *owner
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
