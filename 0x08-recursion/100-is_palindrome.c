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

	/* Base case: An empty string or a string with one character is a palindrome */
	if (length <= 1)
	{
		return (1);
	}

	/* Check if the first and last characters match */
	if (s[0] != s[length - 1])
	{
		return (0);
	}

	/* Replace the first and last characters with null terminators */
	s[length - 1] = '\0';
	s++;

 	/* Recursive call with the modified substring */
	return (is_palindrome(s));
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
