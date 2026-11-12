#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: The initial string being appended onto
 * @src: The string being used
 *
 * Return: a poointer string to dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while(dest[x] != '\0')
	{
		x++;
	}
	while(src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = src[y];

	return (dest);
}
