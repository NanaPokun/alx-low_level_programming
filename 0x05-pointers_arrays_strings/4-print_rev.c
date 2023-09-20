#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to the string to be printed in reverse
 *
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
