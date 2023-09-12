#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: The program would print the base 16 chars
 *
 * Return: It is always 0
 *
 */

int main(void)
{
	/*Declare and initialize the variable*/
	int hexa = 0;

	/*Begin the while loop here*/
	while (hexa < 10)
	{
		putchar('0' + hexa); /*This would print out first value*/
		hexa++; /*Updating the value declared*/
	}
	hexa = 0; /*Reinitialize hexa after first loop*/
	/*Begin second loop for alpha values*/
	while (hexa < 6)
	{
		putchar('a' + hexa); /*print new value of hexa*/
		hexa++; /*Update value of hexa*/
	}
	/*Print a newline*/
	putchar('\n');
	/*The return is always 0*/
	return (0);
}
