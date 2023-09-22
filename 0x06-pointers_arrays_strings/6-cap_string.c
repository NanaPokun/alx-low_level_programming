#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
*/
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1; /*Flag to indicanext letter capitalization*/

	/*Iterate through the string*/
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			/*Set the flag to capitalize the next letter*/
			capitalize = 1;
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			/*Capitalize the letter if the flag is set*/
			str[i] -= 32; /*ASCII difference*/
			capitalize = 0; /*Reset the flag*/
		}
		else
		{
			capitalize = 0; /*Reset the flag*/
		}
		i++;
	}
	return (str);
}
