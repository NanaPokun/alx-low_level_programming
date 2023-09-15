#include "main.h"

/**
 * print_most_numbers -Entry point to print most numbers
 *
 * Return: All numbers except 2 and 4
*/

void print_most_numbers(void)
{
	int y;

	/*for loop starts here*/
	for (y = 0; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}

	/*print newline*/
	_putchar('\n');
}
