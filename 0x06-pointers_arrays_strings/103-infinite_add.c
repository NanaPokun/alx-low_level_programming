#include "main.h"

/**
 * infinite_add - Prints integer reverse arrays
 *
 * @n: Integer parameters
 *
 * Return: It is 0
*/
void rev_string(char *n)
{
	
}

/**
 * infinite_add - Adds two numbers
 * @n1: Represents first number to add
 * @n2: Represents second number to add
 * @r: Pointer to buffer
 * @size_r: Buffer size
 * Return: Pointer to calling function*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovfl = 0; i = 0; j = 0; dg = 0;
	int v1 = 0; v2 = 0; tmp_total = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	i--;
	j--;

	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || i >= 0 || ovfl == 1)
	{
		if (i < 0)
		{
			v1 = 0;
		}
		else
		{
			v1 = *(n1 + i) - '0';
		}
	}
}
