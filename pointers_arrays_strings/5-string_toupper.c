#include "main.h"

/**
 * string_toupper - a function that changes,
 * all lowercase letters of a string to uppercase.
 * @s: the string
 *
 * Return: the string in uppercasing
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
		x++;
	}

	return (s);
}
