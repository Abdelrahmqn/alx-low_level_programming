#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimum value in the range.
 * @max: maximum value in the range.
 * Return: NULL if min > max and when malloc fails.
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
