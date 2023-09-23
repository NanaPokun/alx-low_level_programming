#include "main.h"

/**
 * print_number - Prints number of chars
 *
 * @n: Pointer to parameter
 *
 * Return: 0
 *
 */
void print_number(int n)
{
	unasigned int fn;
	fn = n;

	if (n < 0)
	{
		_putchar('-');
		fn = -n;
	}
	if (fn / 10 != 0)
	{
		print_number(fn / 10);
	}

	_putchar((fn % 10) + '0');
}
