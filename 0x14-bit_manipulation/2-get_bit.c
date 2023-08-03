#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index of the value to nbe returned
 * @n: the number
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
