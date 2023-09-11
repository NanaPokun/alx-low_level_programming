#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: The program prints lowercase numbers without p or e
 *
 * Return: Always 0
 *
 */

int main(void)
{
	/*Declaring and initializing variable*/
	char lowcase = 'a';

	/*Begin the do while loop here */
	do {
		/*Start an if loop to check if p or e is available*/
		if (lowcase != 'e' && lowcase != 'q')
		{
			putchar(lowcase); /*print the char*/
		} lowcase++; /*update the char by 1*/
	} while (lowcase <= 'z'); /*check if lowcase is less than or equal to z*/
	putchar('\n');

	/*Return value is 0*/
	return (0);
}
