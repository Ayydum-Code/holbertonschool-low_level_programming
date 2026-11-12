#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers.
 * @a: the array of integers
 * @n: number of elements in the array
 *
 * Return: the integer array reversed
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = (n - 1);
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
