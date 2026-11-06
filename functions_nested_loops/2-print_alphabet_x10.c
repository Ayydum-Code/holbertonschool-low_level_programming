#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase x10
 *
 * Description: Uses _putchar, followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i < 11)
	{
		char c = 'a';

		while (c <= 'z')
		{

			_putchar(c);
			c++;

		}

	_putchar('\n');
	i++;
	}
}
