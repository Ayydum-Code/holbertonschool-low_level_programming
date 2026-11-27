#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - pairs a format letter with its print function
 * @symbol: the format letter ('c', 'i', 'f', 's')
 * @print: the function that prints that type
 */
typedef struct printer
{
	char symbol;
	void (*print)(va_list args);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
