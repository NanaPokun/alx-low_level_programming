#include "main.h"

/**
 * _isupper - Entry poit to program to print uppercase
 *
 * @c: function parameter
 *
 * Return:1 if c is upper els 0
 */
int _isupper(int c)
{
	/*If loop starts here*/
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
