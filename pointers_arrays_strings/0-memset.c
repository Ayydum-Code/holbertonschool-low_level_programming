#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area
 * @n: the unsigned int input
 * @b: the constant byte
 *
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
