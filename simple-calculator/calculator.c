
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
	int val1 = 0;
	int val2 = 0;

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
	else if (choice > 0 && choice < 5)
		{
			printf ("  Please input value A:  \n ");
			scanf("%d", &val1);
			printf ("  Please input value B:  \n ");
			scanf("%d", &val2);
			printf ("  Value A is %d and Value B is %d\n ", val1, val2);

			if(choice == 1)
			{
				printf ("  You have chosen Addition  \n ");
				printf ("  Result: %d \n ", (val1 + val2));
			}
			if(choice == 2)
			{
				printf ("  You have chosen Subtraction  \n ");
				printf ("  Result: %d \n ", (val1 - val2));
			}
			if(choice == 3)
			{
				printf ("  You have chosen Multiplication  \n ");
				printf ("  Result: %d \n ", (val1 * val2));
			}
			if(choice == 4)
			{
				if (val2 == 0)
				{
					printf (" 0 is not a valid divisible number, please try again  \n ");
				}
				else
				{
				printf ("  You have chosen Division  \n ");
				printf ("  Result: %d \n ", (val1 / val2));
				}
			}


		}

	if (choice == 0)
		{
			printf ("Bye!\n");
			return (0);
		}
	}
	return (0);
}
