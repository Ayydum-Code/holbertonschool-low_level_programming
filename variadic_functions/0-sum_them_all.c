#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns sums of all it's parameters
 * @n: the variable
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start (args, n);

	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(args, unsigned int);
		i++;
	}

	va_end(args);
	return (sum);
}
