#include "main.h"

/**
 * _isupper - checks for lowercase characters
 *
 * @c: the character that is being checked against
 * Return: 1 if luppercase, 0 if not
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
