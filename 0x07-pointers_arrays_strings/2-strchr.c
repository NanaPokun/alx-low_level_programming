#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the character string
 * @c: Character
 *
 * Return: NULL
 *
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL); /* Character not found*/
}
