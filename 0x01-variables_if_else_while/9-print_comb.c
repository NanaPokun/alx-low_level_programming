#include <stdio.h>

/**
 * main - The entry poit to the program
 *
 * Description: the program prints all possible char
 *
 * Return: Always is 0
 *
 */

int main(void)
{
	/*Declare and initialize avriable i*/
	int i;
	/*Begin for loop here and nest an if loop within*/
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i); /*Print out the first character*/
		/*Begin nestted if loop here */
		if (i < 9)
		{
			putchar(','); /*Include commas*/
			putchar(' '); /*Add a space after comma*/
		}
	}
	/*print a new line*/
	putchar('\n');
	/*Return statement is 0*/
	return (0);
}
