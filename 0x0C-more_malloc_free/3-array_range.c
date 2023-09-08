#include "main.h"
#include <stdlib.h>
/**
 **array_range - function that creates an array of integers
 *@min: int
 *@max:also int
 *Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, result;

	if (min > max)
		return (NULL);

	result = max - min + 1;

	ptr = malloc(sizeof(int) * result);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
