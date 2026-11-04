#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints whether the random number n
 * is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		puts("positive");
	}
	else if (n > 0)
	{
		puts("negative");
	}
	if (n == 0)
	{
		puts("zero");
	}
	return (0);
}
