#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the sizeof the type use on system
 *
 * Return: It is always 0
 *
 */

int main(void)
{
	/* The functions print the sizeof the type */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", 
		(unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
