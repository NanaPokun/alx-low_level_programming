#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: The program prints the alphabet
 *
 * Return: Always 0
 *
 **/

int main(void)
{
	/* Declaring the alpha char here and initializing*/
	char alpha = 'a';

	/* Starting the do while loop*/
	do {
		putchar(alpha); /*prints character*/
		alpha++; /*updates character printed by 1*/
	} while (alpha <= 'z'); /*checks if char meets conditions*/
	/*Printing a newline*/
	putchar('\n');

	/*Retrun value is 0*/
	return (0);
}
