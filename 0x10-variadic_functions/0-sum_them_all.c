#include <stdarg.h>
#include "holberton.h"
/**
 * sum_them_all - Returns the sum of its parameters
 * @n: The number of parameters
 * Return: The sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return sum;
}
