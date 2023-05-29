#include "main.h"
/**
 * swap-int - swps the values of two ints
 * @a: value to be swapped
 * @b: value to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
