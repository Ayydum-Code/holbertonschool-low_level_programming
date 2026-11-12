#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: the string
 *
 * Return: the string with repalced values
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	int n = 0;
	int l = 0;

	while (s[n] != '\0')
	{
		l = 0;
		while (letters[l] != '\0')
		{
			if (s[n] == letters[l])
			{
				s[n] = numbers[l];
			}
			l++;
		}
		n++;
	}

	return (s);
}
