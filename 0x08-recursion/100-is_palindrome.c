#include "main.h"
int _strlen(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (p_check(s, 0, length - 1));
}

/**
 * p_check - Helper check to see if substring is palindrom
 * @s: string to check
 * @st: starting index of substring
 * @en: ending index of substring
 *
 * Return: 1 if string is palindrum, 0 if not
 *
*/
int p_check(char *s, int st, int en)
{
	if (st >= en)
	{
		return (1);
	}
	if (s[st] != s[en])
	{
		return (0);
	}

	return (p_check(s, st + 1, en - 1));
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}
