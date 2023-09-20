#include "main.h"

/**
 * put_half -Prints half of a string
 *
 * @str: Pointer to the string
*/

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != 0)
	{
		l++;
	}

	if (l % 2 == 0)
	{
		i = l / 2;
	}
	else
	{
		i = (l + 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
