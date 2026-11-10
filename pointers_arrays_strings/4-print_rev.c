#include "main.h"

/**
 * print_rev - write function that prints a string in reverse.
 * @s: The string to print
 *
 * Description: uses _putchar to print a string in reverse
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	while (x > 0)
	{
		x--;
		s--;
		_putchar (*s);
	}

	_putchar ('\n');
}
