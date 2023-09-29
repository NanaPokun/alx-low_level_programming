#include "main.h"

/**
 * _isdigit - entry point to the program to check for digit
 *
 * @c: function parameters
 *
 * Return: 1 if c is digit or 0 if not
 */

int _isdigit(int c)
{
	/*If loop starts here*/
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
