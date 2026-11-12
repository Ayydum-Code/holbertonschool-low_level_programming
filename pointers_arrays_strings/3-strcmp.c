#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 *
 * Return: the sum value of the compared strings
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x] && x != '\0')
	{
		x++;

	}

	return(s2[x] - s1[x]);
}
