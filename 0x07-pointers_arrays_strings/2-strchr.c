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
	int i;

	for (i =0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}

	return (NULL); /* Character not found*/
}
