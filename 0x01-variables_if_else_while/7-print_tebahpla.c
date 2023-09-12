#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: This program prints alphabets in reverse
 *
 * Return: It is always 0
 *
 */

int main(void)
{
	/*Declare the variable and initialize to z*/
	char alpha = 'z';

	/*The while loop begins here*/
	while (alpha >= 'a')
	{
		putchar(alpha); /*Prints the first character*/
		alpha--; /*Reduce the variable by 1*/
	}

	/*Print a new line*/
	putchar('\n'); /*print a new line*/

	return (0); /*This returns a value of 0*/
}
