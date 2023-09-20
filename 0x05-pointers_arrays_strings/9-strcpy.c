#include "main.h"

/**
 * _strcpy - Copies a string including the null terminator.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // Null-terminate the destination string.
	
	return (dest);
}
