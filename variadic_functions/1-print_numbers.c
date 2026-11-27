#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @n: the variable
 * @separator: string to be printed between numbers
 *
 * description: uses printf
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
