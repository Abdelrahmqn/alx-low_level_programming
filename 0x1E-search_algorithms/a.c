#include "search_algos.h"
/**
* advanced_interpolation - advaned
*
* @array: the array.
* @low: first index.
* @high: last index.
* @value: the value that we're looking for.
*
* Return: the value, if exist, or NULL if not array
*/
int advanced_interpolation(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	while (high >= low)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
		{
			return (advanced_interpolation(array, pos + 1, high, value));
		}
		if (array[pos] > value)
		{
			return (advanced_interpolation(array, low, pos - 1, value));
		}
	}
		return (-1);
}
/**
* interpolation_search - searches for the value using interpolation
*
* @array: the array
* @size: the size of the array
* @value: the value that we're looking for.
*
* Return: the value, if exist, or NULL if not array
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;

	if (!array || size == 0)
		return (-1);


	return (advanced_interpolation(array, low, high, value));
}

