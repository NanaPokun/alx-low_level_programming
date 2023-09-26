#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -Searches string for any set of bytes
 * @s: first occurence of string
 * @accept:bytes in a string
 *
 * Return: NULL
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
