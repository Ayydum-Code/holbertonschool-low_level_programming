#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: The array
 * @n: how many elements to print
 *
 * Description: uses _putchar to print.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		printf(", ");
		i++;
	}

	printf("\n");

}
