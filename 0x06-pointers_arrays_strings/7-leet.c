#include "main.h"

/**
 * leet - Encodes a string into leet spak 1337
 *
 * @str: input string
 *
 * Return: Pointer to modified string
*/
char *leet(char *str)
{
	int j = 0;
	int i;
	char lchars = "aAeEoOtTlL";
	char lreplace = "4433007711";

	while (str[j] != '\0')
	{
		i = 0;
		while (lchars[i] != '\0')
		{
			if (str[j] == lchars[i])
			{
				str[j] = lreplace[i];
				break;
			}
			i++;
		}
		j++;
	}

	return (str);
}
