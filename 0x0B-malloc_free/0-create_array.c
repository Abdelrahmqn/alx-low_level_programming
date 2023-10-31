#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @c: the parameter c
 * retrun: Returns NULL if size = 0
 * or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

char *ar = malloc(size * sizeof(char));

	if (size == 0 || ar == 0)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	ar[i] = c;
	}
		return (ar);
}
