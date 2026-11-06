#include "main.h"

/**
 *print_last_digit - prints last digit of a number
 * @n: the number that is being checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
		_putchar('0' + a);
		return (a);
	}
	else
	{
		_putchar('0' + a);
		return (a);
	}
}
