#include "main.h"

/**
 * print_triangle - Entry point to the program
 *
 * @size: the size of the triangle, function parameter
 *
 * Return: the size
 *
*/

void print_triangle(int size)
{
	/*Begin your if loop here*/
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/*Declare and initialize variables i and j*/
		int i;
		int j;

		/*Begin your for loop here*/
		for (i = 1; i <= size; i++)
		{
			/*Loop for spaces*/
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			/*Loop through to print # if j ,= i*/
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			/*print a new line*/
			_putchar('\n');
		}
	}
}
