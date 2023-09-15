#include "main.h"

/**
 * more_numbers - Entry point of program to print more numbers
 *
 * Return: numbers from 1 to 14 ten times
 *
*/

void more_numbers(void)
{
	/*Declare and initialize values i and j*/
	int i;
	int j;

	/*for loop begins here*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}
}
