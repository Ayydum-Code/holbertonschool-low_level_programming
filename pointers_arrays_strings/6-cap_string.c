#include "main.h"

/**
 * cap_string - a function that capitalizes,
 * all words of a string
 * @s: the string
 *
 * Return: the string with capitlization.
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122 &&
		(x == 0 || s[x - 1] == ' ' || s[x - 1] == '.'
		|| s[x - 1] == '\t' || s[x - 1] == ',' || s[x - 1] == ';'
		|| s[x - 1] == '!' || s[x - 1] == '?' || s[x - 1] == '"'
		|| s[x - 1] == '(' || s[x - 1] == ')' || s[x - 1] == '}'
		|| s[x - 1] == '\n' || s[x - 1] == '{'))
		{
			s[x] = s[x] - 32;
		}
		x++;
	}

	return (s);
}
