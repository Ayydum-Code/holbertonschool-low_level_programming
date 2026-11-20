#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer to newly allocated space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	char *arr;
	unsigned int len = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 > n )
		len2 = n;

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
