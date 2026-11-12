#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: The initial string being appended onto
 * @src: The string being used
 * @n: the bytes to copy from from src
 *
 * Return: a pointer string to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && src[y] < n)
	{
		dest[x] = src[y];
		x++;
		y++;
		dest[x] = '\0';
	}

	dest[x] = src[y];

	return (dest);
}
