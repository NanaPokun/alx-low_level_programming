#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory area pointer
 * @src: Source of memory area
 * @n: n byte
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
