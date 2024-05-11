#include "search_algos.h"
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
	size_t pos, high = size - 1;
	size_t low = 0;

	if (!array || size == 0)
		return (-1);


	while (high >= low)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
			high = pos - 1;
		}
	return (-1);
}
