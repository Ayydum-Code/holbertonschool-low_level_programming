#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: The string being converted
 *
 * Return: the converted integer, or 0 if there are no digits
 */
int _atoi(char *s)
{
	int x = 0;
	int minus = 0;
	int result = 0;

	while (s[x] != '\0' && !(s[x] >= '0' && s[x] <= '9'))
	{
		if (s[x] == '-')
		{
			minus++;
		}
		x++;

	}
	while (s[x] >= '0' && s[x] <= '9')
	{

		if (minus % 2 != 0)
		{
			result = result * 10 - (s[x] - '0');
		}
		else
			result = result * 10 + (s[x] - '0');

		x++;

	}

		return (result);
}
