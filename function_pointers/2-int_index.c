#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @size: is the size of the array
* @cmp: is a pointer to the function used to compare
* @array: the array itself
*
* Return: Nothing.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (x < size)
	{
		if(cmp(array[x]) != 0)
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
