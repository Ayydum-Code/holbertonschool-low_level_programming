#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer,
 * to a 2 dimensional array of integers.
 * @width: integer array 1
 * @height: integer array 2
 *
 * Return: newly allocated 2d array or NULL.
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **harr;


	if (width <= 0)
		return NULL;

	if (height <= 0)
		return NULL;

	harr = malloc(height * sizeof (int*));
	if (harr == NULL)
	return (NULL);


	x = 0;
	while (x < height)
	{
		harr[x] = malloc(width * sizeof (int));
		if (harr[x] == NULL)
		return (harr);

		y = 0;
		while (y < width)
		{
			harr[x][y] = 0;
			y++;
		}

		x++;
	}

	return harr;
}
