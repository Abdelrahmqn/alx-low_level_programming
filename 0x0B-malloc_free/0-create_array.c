#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: array
 * @c: specific to the array
 *
 * Return: pointer to the created array or NULL if it fails
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
