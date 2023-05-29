#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @n: number of elements in an array
 * @a: pointer to array of ints
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
