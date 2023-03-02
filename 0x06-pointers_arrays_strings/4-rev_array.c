#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer array to be reversed
 * @n: number of elements of the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j = n - 1;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[j - i];
		a[j - i] = a[i];
		a[i] = tmp;
	}
}
