#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - works extacly like realloc function
 *
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: ar, else return NULL if it fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int minimum;
	unsigned int i;
	void *new;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
		minimum = (new_size < old_size) ? new_size : old_size;
		if (minimum)
		{
			;
		}
	for (i = 0; i < old_size; i++)
	{
		*((char *)new + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new);

}
