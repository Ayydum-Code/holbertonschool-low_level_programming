#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: The buffer pointer
 * @src: the string pointer
 * @n: the bytes to copy from from src
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;

	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);

}
