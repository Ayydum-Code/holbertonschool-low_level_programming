#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function  that returns a pointer,
 *  to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string array to copy
 *
 * Return: NULL if size 0, or pointer to the array
 */
char *_strdup(char *str)
{
	int x = 0;
	char *dupe;
	int len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	dupe = malloc((len + 1) * sizeof(char));
	if (dupe == NULL)
	return (NULL);

	while (x <= len)
	{
		dupe[x] = str[x];
		x++;
	}

return (dupe);
}
