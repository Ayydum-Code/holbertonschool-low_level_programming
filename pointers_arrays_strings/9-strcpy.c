#include "main.h"

/**
 * _strcpy - a function that copies a string
 * @dest: The buffer pointer
 * @src: the string pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];

	return (dest);

}
