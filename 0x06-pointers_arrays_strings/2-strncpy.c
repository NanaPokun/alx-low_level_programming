#include "main.h"

/**
 * _strncpy - Copies a string with a limit
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	/*Copy src to dest with char limiit*/
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/*Pad with null char if necessary*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
