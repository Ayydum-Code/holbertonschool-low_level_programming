#include "main.h"

/**
 * _strnspn - a function that gets the length of a prefix substring.
 * @accept: The buffer pointer
 * @s: the string pointer
 *
 * Return: the pointer to dest
 */
unsigned int _strspn(char *s, char *accept)
{


	unsigned int n = 0;
	unsigned int l = 0;

	while (s[n] != '\0')
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (s[n] == accept[l])
			{
				break;
			}
			l++;
		}
		if (s[n] != accept[l])
			{
				return(n);
			}
		n++;
	}

	return (n);
}
