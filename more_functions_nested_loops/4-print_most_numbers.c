#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Description: uses _putchar to print 0 to 9,
 * do not print 2 and 4
 */
void print_most_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		if  (c != 2 && c != 4)
		{
		_putchar('0' + c);
		}
	c++;
	}
	_putchar('\n');

}
