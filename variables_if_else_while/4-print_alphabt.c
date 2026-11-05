#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase,
 * and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		if  (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
