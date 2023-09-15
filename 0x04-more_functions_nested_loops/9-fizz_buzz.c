#include <stdio.h>

/**
 * main - Entry point to program to print chsrs and int
 *
 * Description: prints fizz, buzz or fizzbuzz
 *
 * Return: Always is 0.
 *
*/

int main(void)
{
	/*Declare and initialize variable to use*/
	int j;

	/*Begin your four loop*/
	for (j = 1; j <= 100; j++)
	{
		/*Begin if and else loops to check conditions*/
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", j);
		}

		/*Begin if loop to print space and new line*/
		if (j != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	/*return value is 0*/
	return (0);
}
