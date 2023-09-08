#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: The program prints a set of char to output
 *
 * Return: Always is 1
 *
 */

int main(void)
{
	/**
	 * Declares the text char with a value
	 *
	 * declares length variable with a value
	 *
	 */
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = 61; //Length of text and newline


	/**
	 * This simple function prints the exact text
	 *
	 * returns 1
	 *
	 */
	write(STDOUT_FILENO, text, length);
	return (1);
}
