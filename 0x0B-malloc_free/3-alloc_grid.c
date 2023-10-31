#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 * return: NULL on failure, allocated memorey when success.
 */
int **alloc_grid(int width, int height)
{
int **ar;
int i;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	**array = malloc(width * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
	ar[i] = malloc(sizeof(int) * height);
	}
	return (ar);
}
