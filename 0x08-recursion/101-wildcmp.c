#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard character *
 * @s1: The first string to compare
 * @s2: The second string to compare (may contain '*')
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/*If both strings are empty, they are considered identical*/
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/*If the current characters match or s2 has a wildcard '*'*/
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/*If s2 has a '*', we can choose to match 0 characters in s1*/
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/*If characters don't match and s2 doesn't have a wildcard*/
	return (0);
}
