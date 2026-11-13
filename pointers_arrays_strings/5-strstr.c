#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: The buffer pointer
 * @needle: the string pointer
 *
 * Return: the pointer to haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n = 0;
	unsigned int l = 0;

	while (haystack[n] != '\0')
	{
		l = 0;
		while (needle[l] != '\0' && (haystack[n + l]) == needle[l])
			l++;
		if (needle[l] == '\0')
			return (&haystack[n]);
		n++;
	}
	return (NULL);
}
