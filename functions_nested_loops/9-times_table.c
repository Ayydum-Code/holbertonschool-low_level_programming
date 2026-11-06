#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Uses _putchar to print every every iteration
 * of the 9 times table
 */
void times_table(void)
{
	int row, col, rc;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			rc = row * col;
			if (col > 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (rc >= 10)
			{
			_putchar('0' + rc / 10);
			_putchar('0' + rc % 10);
			}
			else
			{
			if (col != 0)
			_putchar(' ');
			_putchar('0' + rc);
			}
		col++;
		}

	_putchar('\n');
	row++;
	}


}
