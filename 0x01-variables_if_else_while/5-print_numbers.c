#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Description:The program prints all single numbers of base 10
 *
 * Return: Always is 0
 *
 */

int main(void)
{
	/*TVariables are declared and initialized here*/
	int single = 0;

	/**Begin looping here*/

	while (single < 10)
	{
		printf("%d", single);
		single++; /*updatung state*/
	}

	/*Printing a new line*/
	printf("\n");

	/*Return value is 0*/
	return (0);
}
