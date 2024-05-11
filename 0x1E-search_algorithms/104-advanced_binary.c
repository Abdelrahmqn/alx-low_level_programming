#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* advanced_binary - search for the value in the array
* @array: array of elements.
* @size: the size of the array
* @value: the value that we're looking for.
*
* Return: value if not, return null.must return (-1)
*/
int advanced_binary(int *array, size_t size, int value)
{
size_t mid, high = size - 1, low = 0;

	if (!array || size == 0)
		return (-1);


	while (high >= low)
	{
	printf("Searching in array: ");
	for (mid = low; mid < high; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (value);

	else if (array[mid] <= value)
	{
		low = mid + 1;
	}
	else
	{
		high = mid - 1;
	}
	}
	return (-1);
}
