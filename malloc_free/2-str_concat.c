#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function concatenates two strings.
 * @s1: string array 1
 * @s2: string array 2
 *
 * Return: pointer to newly allocated space or NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	char *arr;
	int len = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	arr = malloc((len + len2 + 1) * sizeof(char));
	if (arr == NULL)
	return (arr);

	while (x < len)
	{
		arr[x] = s1[x];
		x++;
	}

	while (x - len != len2)
	{
		arr[x] = s2[x - len];
		x++;
	}
	arr[x] = '\0';

	return (arr);
}
