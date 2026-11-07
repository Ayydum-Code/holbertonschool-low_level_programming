#include "main.h"

/**
 * void more_numbers - rints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Description: uses _putchar to print 0 to 14,
 */
void more_numbers(void)
{

	int i = 1;

	while (i < 11)
	{
		char c = 0;

		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar('0' + c / 10);
			}

		_putchar('0' + c % 10);
		c++;
		}

	_putchar('\n');
	i++;
	}

}
