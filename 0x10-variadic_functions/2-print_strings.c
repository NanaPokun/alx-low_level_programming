#include <stdarg.h>
#include "variadic_function.h"
/**
 * print_strings - Prints strings, followed by a separator and a new line
 * @separator: The string to print between strings
 * @n: The number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
		if (str != NULL)
		{
			print_string(str);
		}
		else
		{
			print_string("(nil)");
		}
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
