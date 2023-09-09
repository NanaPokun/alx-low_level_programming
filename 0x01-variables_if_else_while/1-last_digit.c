#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Description: Program prints the last digit of a random number
 *
 * Return: Always 0
 *
 */
int main(void)
{
	/*Initializing the n variable */
	int n;

	/* Declare my variables here */
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* This would extract the last digit*/
	l = n % 10;
	/* The if loop starts here */
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, l);
	}
	/* returns 0 and end program */
	return (0);
}
