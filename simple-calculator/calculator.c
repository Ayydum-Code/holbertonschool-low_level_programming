
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * return - Always 0 (success)
 */

int main(void)
{
	int choice = 1;

	printf ("  Welcome to Adam's simple calculator  \n ");

	while (choice != 0)
	{

	printf (" Please select an option from the list below \n ");
	printf (" 1) Add \n ");
	printf (" 2) Subtract \n ");
	printf (" 3) Multiply \n ");
	printf (" 4) Divide \n ");
	printf (" 0) Quit \n ");
	scanf("%d", &choice);
	printf ("Choice: %d \n", choice);

	if (choice < 0 || choice >= 5)
		{
		printf ("  Invalid choice, please choose again  \n ");
		}

	if (choice == 0)
		{
			printf ("Bye!\n");
			return (0);
		}
	}
	return (0);
}
