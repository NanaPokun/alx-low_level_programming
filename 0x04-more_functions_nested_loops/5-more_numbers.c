#include "main.h"

/**
 * more_numbers - Entry point of program to print more numbers
 *
 * Return: is void
 *
*/

void more_numbers(void)
{
	/*Declare and initialize values i and j*/
	int i;
	int j;

	/*for loop for i and j begins here*/
	for (i = 0; i < 10; i++)
	{
		/*loop for j begins here*/
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			/*print numbers from 0 to 14*/
			_putchar(j % 10 + '0');
		}
		_putchar('\n'); /*prints new line*/
	}
}
