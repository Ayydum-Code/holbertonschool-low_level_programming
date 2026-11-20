#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: array
 * @size: bytes
 *
 * Return: pointer to newly allocated space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (arr);

	while (x < nmemb * size)
	{
		arr[x] = 0;
		x++;
	}

return (arr);
}
