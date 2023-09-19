#include "main.h"

/**
 * _strlen - Return the length of the string
 *
 * @s: Pointer to the string
 *
 * Return: Length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	
	return len;
}
