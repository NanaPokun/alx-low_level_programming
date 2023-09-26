#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals
 * @a: integer of diagonal
 * @size: the size of diagonal
 *
 * Return: It is 0
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
