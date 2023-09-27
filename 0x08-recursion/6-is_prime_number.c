#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2)); /* Call helper function with divisor 2 */
}

/**
 * is_prime_recursive - Helper function to recursively check for prime
 * @n: The number to check
 * @divisor: The current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1) /* Base case: numbers less than or equal to 1 are not prime */
	{
		return (0);
	}
	if (divisor >= n) /* Base case: n is prime if no divisors found */
	{
		return (1);
	}
	if (n % divisor == 0) /* Check if n is divisible by divisor */
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}
