#include "main.h"

/**
 * _puts - write function that prints a string.
 * @str: The string to print
 *
 * Description: uses _putchar to print a string
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar ('\n');
}
