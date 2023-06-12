#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of array of integers
 * @a:pointer of array of intergers
 * @n: number of integers in array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = (n - 1); i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
