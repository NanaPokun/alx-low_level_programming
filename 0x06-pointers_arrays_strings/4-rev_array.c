#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	/*Swap elements from the ends towards the center*/
	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
