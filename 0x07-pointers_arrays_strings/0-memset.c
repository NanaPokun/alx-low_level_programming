#include "main.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: Pointer to the memory byte
 * @b: the constant byte of memory
 * @n: the n byte of memory
 *
 * Return: Pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
