#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - prints a name using a given function
 * @size: is the size of the array
 * @action: is a pointer to the function
 * @array: the array itself
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action == NULL || array == NULL)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
