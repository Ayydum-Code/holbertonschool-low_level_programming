#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Description: uses _putchar to print a straight line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
