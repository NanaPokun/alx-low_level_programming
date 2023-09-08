#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: The program prints the sizeof the type
 *
 * Return: It always is 0
 *
 */

int main(void)
{
	/**
	 * The printf function to print sizeof type starts here
	 *
	 * Return is 0
	 *
	 */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
