#include "main.h"

/**
 * print_sign - prints the sign of a character
 * @n: the number that is being checked against
 *
 * Return: 1 and prints + if n is greater than 0,
 * 0 and prints 0 if n is 0,
 * -1 and prints - if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
