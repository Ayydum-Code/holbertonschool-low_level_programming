#include "main.h"

/**
 *_abs: computes the absolute value of an integer.
 *@n: the number that is being checked against
 *
 *
 * Return: 1 and prints + if n is greater than 0,
 * 0 and prints 0 if n is 0,
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
