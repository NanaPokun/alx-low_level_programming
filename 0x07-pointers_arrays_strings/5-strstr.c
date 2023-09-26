#include <stddef.h>
#include "main.h"

/**
 * _strstr - Loads a substring
 * @haystack: function parameter string pointer
 * @needle: first occurrence of substring
 *
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
