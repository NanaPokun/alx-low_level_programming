#include "main.h"
/**
 * printalphabet - prints all alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	/*Declare variable alpha*/
	char alpha;
	/*Begin for loop*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	/*Print a newline*/	
	_putchar('\n');
}
