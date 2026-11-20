#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: lower range bracket
 * @max: higher range bracket
 *
 * Return: pointer to newly allocated array.
 */

int *array_range(int min, int max)
{
	int x = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max + 1 - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (x < max + 1 - min)
	{
		arr[x] = min + x;
		x++;
	}

	return (arr);
}
