#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int x = 0, i, j;
	char tmp;

	while (s[x] != '\0')
	x++;

	i = 0;
	j = (x - 1);
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
