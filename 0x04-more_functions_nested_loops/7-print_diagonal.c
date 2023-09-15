#include "main.h"

/**
 * print_diagonal - Prints a diagonal line with \
 *
 * @n: function parameter
 *
 * Return: void
 *
*/
void print_diagonal(int n)
{
	/*Loop for if and for starts here*/
	if (n <= 0)
	{
		_putchar('\n'); /*prints a newline*/
	}
	else
	{
		/*Declare and initialize a and b */
		int a, b;

		/*Loop for variables a and b starts here*/
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' '); /*prints the space befor the \*/
			}
			_putchar('\\'); /*prints the \ character*/
			_putchar('\n'); /*prints a new line*/
		}
	}
}
