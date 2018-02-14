#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees previously created 2-d array
 * @grid: array created with alloc_grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height == 0)
		return;

      	for (index = 0; index < height; index++)
		free(grid[index]);
}
