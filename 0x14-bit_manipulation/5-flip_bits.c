#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int i, bits = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((xor >> i) & 1)
			bits++;
	}
	return (bits);
}
