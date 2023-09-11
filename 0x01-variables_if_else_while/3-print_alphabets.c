#include <stdio.h>

/**
 * naim - Entry point to the program
 *
 * Description: The program prints both lower and uppercase alphabets
 *
 * Return: It's always 0
 *
 */

int main(void)
{
	/* Declaration and initialization of varianles here*/
	char lowcase = 'a';
	char uppcase = 'A';

	/* Begin the do while loop here*/
	do {
		putchar(lowcase); /*print the lowercase char*/
		lowcase++; /*updating the char printed by 1*/
	} while (lowcase <= 'z'); /* check condition*/

	/* Another do while loop for uppercase chars*/
	do {
		putchar(uppcase); /*prints uppercase char*/
		uppcase++; /*updating uppercase by 1*/
	} while (uppcase <= 'Z'); /*check condition again*/

	/*printing new line*/
	putchar('\n');

	/* retorn value is 0*/
	return (0);
}
