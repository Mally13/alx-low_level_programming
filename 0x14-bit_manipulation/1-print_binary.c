#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int rem = 0;

	if (n == 0)
		_putchar(rem + '0');
	else
	{
		while (n > 0)
		{

			rem = n % 2;
			_putchar(rem + '0');
			n /= 2;
		}
	}
}
