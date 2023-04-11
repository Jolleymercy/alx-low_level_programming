#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to multi-dimen array
 */
int **alloc_grid(int width, int height)
{
	int **grid, r, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	/*if memory is insifficuent*/
	if (!grid)
		return (NULL);

	j = 0;
	while (j < height)
	{
		*(grid + j) = malloc(width * sizeof(int));

		if (!(*(grid + j)))
		{
			while (j--)
				free(*(grid + j));
			free(grid);
			return (NULL);
		}
		r = 0;
		while (r < width)
		{
			*(*(grid + j) + r) = 0;
			r++;

		}
		j++;
	}

	return (grid);
}
