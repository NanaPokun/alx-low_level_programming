#include "main.h"

/**
 * print_numbers - Entry point to program to print numbers
 *
 * _putchar: prints characters
 *
*/

void print_numbers(void)
{
	int i; /*Declares and initializes i*/

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0'); /*prints chracter*/
	}
	_putchar('\n'); /*prints new line*/
}
