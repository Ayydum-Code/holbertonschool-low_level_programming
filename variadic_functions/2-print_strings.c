#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @n: the number of strings passed to the function
 * @separator: string to be printed between numbers
 *
 * description: uses printf
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
