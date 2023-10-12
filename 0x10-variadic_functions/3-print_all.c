#include <stdarg.h>
#include "holberton.h"
#include "main.h"

/**
 * print_all - Prints any type of argument
 * @format: A list of types of arguments to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);
			_putchar(c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);
			print_number(num);
		}
		else if (format[i] == 'f')
		{
			double f = va_arg(args, double);
			print_float(f);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
			{
				print_string("(nil)");
			}
			else
			{
				print_string(str);
			}
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	_putchar('\n');
}
