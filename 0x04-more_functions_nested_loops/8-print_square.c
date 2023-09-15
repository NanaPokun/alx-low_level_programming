#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: function parameter
 *
 * Return: character printed
 *
*/
void print_square(int size)
{
	/*if code block starts here*/
	if (size <= 0)
	{
		_putchar('\n'); /*prints only a newline*/
	}
	else
	{
		/*Declare and initialize variables i and j*/
		int i;
		int j;

		/*Begin the for loop*/
		for (i = 0; i < size; i++)
		{
			/*Loop to print square starts here*/
			for (j = 0; j < size; j++)
			{
				_putchar('#'); /*prints pound # sign*/
			}

			/*print a new line*/
			_putchar('\n');
		}
	}
}
