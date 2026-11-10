#include "main.h"

/**
 * puts_half - prints every half of a string.
 * @str: The string to print
 *
 * Description: uses _putchar to print.
 */
void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	x = x / 2;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
