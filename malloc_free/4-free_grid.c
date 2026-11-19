#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid,
 * previously created by your alloc_grid function.
 * @grid: integer 1
 * @height: integer 2
 *
 * Return: newly allocated 2d array or NULL.
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
