#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: Pointer to the string
 *
*/

void puts2(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i] != '\0' && c < 224)
	{
		_putchar(str[i]);
		i += 2;
		c++;
	}

	_putchar('\n');
}
