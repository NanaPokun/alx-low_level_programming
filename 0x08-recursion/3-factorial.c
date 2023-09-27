#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1)); /* Recursively calculate factorial */
}
