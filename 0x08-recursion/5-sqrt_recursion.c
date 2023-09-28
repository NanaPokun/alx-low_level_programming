#include "main.h"
int _sqrt_recursive(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursive(n, 0)); /* Call helper function with initial guess */
}

/**
 * _sqrt_recursive - Helper function to recursively calculate square root
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess > n) /* Base case: square root found */
	{
		return (-1);
	}
	if (guess * guess == n) /* Error case: square root does not exist */
	{
		return (guess);
	}

	return (_sqrt_recursive(n, guess + 1)); /* Recursively refine guess */
}
