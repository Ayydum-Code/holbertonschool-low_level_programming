#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array
 * @c: initalising character
 *
 * Return: NULL if size 0, or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *arr;

	if (size == 0)
	return (NULL);

	arr = malloc( size * sizeof(char));
	if (arr == NULL)
	return(arr);

	while (x < size)
	{
		arr[x] = c;
		x++;
	}

return (arr);
}
