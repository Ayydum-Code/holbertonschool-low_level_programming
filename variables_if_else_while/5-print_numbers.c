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
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
