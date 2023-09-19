#include <unistd.h>

/**
 * _putchar - Writes a character to the std uotput
 *
 * @c:The function parameter of char to print
 *
 * Return: Always is 0n, sucess, 1, error
 *
 */

int _putchar(int c)
{
	/*return value is a write function*/
	return write(1, &c, 1);
}
