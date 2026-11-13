#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: The buffer pointer
 * @src: the string pointer
 * @n: the bytes to copy from src
 *
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);

}
