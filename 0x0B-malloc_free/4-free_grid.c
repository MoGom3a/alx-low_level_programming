#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid
 * @grid: 2d arrey values
 * @height: int
 * return: NULL
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
