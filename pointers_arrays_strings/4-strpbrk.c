#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @accept: The string being searched
 * @s: the string pointer
 *
 * Return: &s if a match is found, or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int l = 0;

	while (s[n] != '\0')
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (s[n] == accept[l])
				return (&s[n]);
			l++;
		}
		n++;
	}
	return (NULL);
}
