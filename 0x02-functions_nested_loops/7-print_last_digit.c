#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: Integer to be checked
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int m;
	m = a % 10;
	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
