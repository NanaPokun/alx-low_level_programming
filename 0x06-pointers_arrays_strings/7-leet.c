#include "main.h"

/**
 * leet - Encodes a string into leet spak 1337
 *
 * @n: input string
 *
 * Return: Pointer to modified string
*/
char *leet(char *n)
{
	int j = 0;
	int i;
	char lchars[] = "aAeEoOtTlL";
	char lreplace[] = "4433007711";

	while (n[j] != '\0')
	{
		i = 0;
		while (lchars[i] != '\0')
		{
			if (n[j] == lchars[i])
			{
				n[j] = lreplace[i];
				break;
			}
			i++;
		}
		j++;
	}

	return (n);
}
