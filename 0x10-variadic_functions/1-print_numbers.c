#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a separator and a new line
 * @separator: The string to print between numbers
 * @n: The number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		print_number(num);
        	if (separator != NULL && i < n - 1)
		{
			for (i = 0; separator[i]; i++)
			{
  				_putchar(separator[i]);
			}
		}
	}
	va_end(args);

	_putchar('\n');
}
