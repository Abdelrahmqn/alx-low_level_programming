#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
	return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
	free(ndog);
	free(ndog->name);
	return (NULL);
	}
	strcpy(ndog->name, name);
	strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
