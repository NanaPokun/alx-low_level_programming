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

	while (str[j] != '\0')
	{
		case 'a':
		case 'A':
			str[j] = '4';
			break;
		case 'e':
		case 'E':
			str[j] = '3';
			break;
		case 'o':
		case 'O':
			str[j] = '0';
			break;
		case 't':
		case 'T':
			str[j] = '7';
			break;
		case 'l':
		case 'L':
			str[j] = '1';
			break;
	}
	j++;

	return (str);
}
