#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
*/
char *string_toupper(char *str)
{
	int i = 0;

	/*Iterate through the string*/
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/*Convert lowercase letter to uppercase*/
			str[i] -= 32; /*ASCII difference*/
		}
		i++;
	}

	return (str);
}
