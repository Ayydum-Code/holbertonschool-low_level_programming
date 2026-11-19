#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by alloc_grid
 * @grid: the 2D grid to free
 * @height: number of rows in the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int x = height;

	while (x > 0)
	{
		x--;
		free(grid[x]);
	}
	free(grid);
}
