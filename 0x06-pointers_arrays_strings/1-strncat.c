#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/*Calculate the length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*Append src to dest with char limit*/
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	/*Null terminator at the end*/
	dest[dest_len] = '\0';

	return (dest);
}
