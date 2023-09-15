#include "main.h"

/**
 * print_line - prints a straight line using set of underscores
 *
 * @n: function parameter
 *
 * Return: void
 *
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/*Declare and initialize i*/
		int i;

		/*Loop for i begins here*/
		for (i = 0; i < n; i++)
		{
			_putchar('_'); /*prints underscore character*/
		}

		/*print a new line after that*/
		_putchar('\n');
	}
}
