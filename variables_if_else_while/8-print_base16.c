#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)

{
	char c = '0';
	char C = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (C <= 'f')
	{
		putchar(C);
		C++;
	}
	putchar('\n');


	return (0);
}
