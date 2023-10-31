#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a2dimensional array of integers
 * @width: the width of ar
 * @height: the height of ar
 *
 * Return: pointer to the 2-dimensional array of integers, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(sizeof(int) * height);
	if (ar[i] == NULL)
	{
		return (NULL);
	}
		for (j = 0; j < width; j++)
		{
		ar[i][j] = 0;
		}
	}
	return (ar);
}
