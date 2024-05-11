#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* adv_binary - search for the value in the array
* @array: array of elements.
* @low: lower ind
* @high: the last ind
* @value: the value that we're looking for.
*
* Return: value if not, return null.must return (-1)
*/
int adv_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (high <= low)
		return (-1);

	printf("Searching in array: ");
	for (mid = low; mid < high; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = low + (high - low) / 2;

	if (array[mid] == value && mid == 0)
		return (mid);
	if (array[mid] >= value)
		return (adv_binary(array, low, mid, value));
	return (adv_binary(array, mid + 1, high, value));
}
/**
* advanced_binary - search for the value in the array
* @array: array of elements.
* @size: the size of the array.
* @value: the value that we're looking for.
*
* Return: value if not, return null.must return (-1)
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size == 0)
		return (-1);

	return (adv_binary(array, low, high, value));
}
