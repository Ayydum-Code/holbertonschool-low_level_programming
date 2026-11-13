#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: The string
 * @c: the chracter to locate
 *
 * Return: a pointer to 'c' in the string
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
			return (&s[n]);
		n++;
	}
	return NULL;
}
