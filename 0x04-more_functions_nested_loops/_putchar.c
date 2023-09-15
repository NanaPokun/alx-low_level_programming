#include <unistd.h>
/**
 * _putchar - Entry point to the program
 *
 * Return: write chracter c to file descriptor*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
