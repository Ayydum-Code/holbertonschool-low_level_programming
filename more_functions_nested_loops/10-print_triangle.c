#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line..
 * @size: the size of the triangle.
 *
 * Description: uses _putchar to print.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size - row - 1)
		{
			_putchar(' ');
			col++;
		}
		col = 0;
		while (col < row + 1)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
