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
		return 1;
	}

	/* Compare the first and last characters */
	if (s[0] == s[length - 1])
	{
		/* Recursive call with the substring (excluding the first and last characters) */
		return is_palindrome(s + 1);
	}

	return 0; /* If the first and last characters don't match, it's not a palindrome */
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
