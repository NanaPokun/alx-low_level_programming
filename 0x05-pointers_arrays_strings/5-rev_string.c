#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
*/
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (start = 0; start < length / 2; start++)
	{
		temp = s[start];
		s[start] = s[length - start - 1];
		s[length - start - 1] = temp;
	}
}

