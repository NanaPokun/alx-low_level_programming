#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: The program prints numbers of base 10 with putchar
 *
 * Return: is Always 0
 *
 */
int main(void)
{
	int num = 0; /*This declares the variable and initializes it*/

	/*The while loop begins here*/
	while (num < 10)
	{
		putchar('0' + num); /*This prints the number*/

		num++; /*This updates the num by 1*/
	}

	putchar('\n'); /*Prints a newline after loop*/

	/*The return value is 0*/
	return (0);
}
