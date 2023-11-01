#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - 2 dimensional grid previously created by your alloc_grid
 * @grid: just your grid
 * @height: this is the height of an array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
		free(grid);
}
