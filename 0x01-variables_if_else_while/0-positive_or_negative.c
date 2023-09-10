#include <stdlib.h>
#include <time.h>

/* more headers goes here */
#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Entry point into the program
 *
 * Description: The program either prints a negative or positive
 *
 * Return: Always 0
 *
 */
int main(void)
{
	/* Declaration of variables */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	/* If loop starts here*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	/* return function return 0*/
	return (0);
}
