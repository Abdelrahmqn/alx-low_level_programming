#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each element of an array.
 * @array: array of integers.
 * @size: the size.
 * @action: pointer to function.(my pointer)
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
