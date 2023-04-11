#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}
