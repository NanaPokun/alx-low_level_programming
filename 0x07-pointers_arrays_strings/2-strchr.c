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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);  /*Return a pointer to the null terminator if c is '\0*/
	}

	return (NULL); /* Character not found*/
}
