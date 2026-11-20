#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: variable input
 *
 * Return: pointer to newly allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);

}
