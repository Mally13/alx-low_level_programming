#include "main.h"
/**
 * print_number - prints an integer
 * @n: the number to be printed
 */
void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
