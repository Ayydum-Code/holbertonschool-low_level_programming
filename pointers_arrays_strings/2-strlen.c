#include "main.h"

/**
 * _strlen - write function that returns the length of a string.
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
