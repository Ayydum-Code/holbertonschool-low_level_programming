#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: The array to copy
 *
 * Description: uses _putchar to print.
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (x < 8)
	{
		y = 0;
		while(y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}

		_putchar('\n');
		x++;
	}

}
