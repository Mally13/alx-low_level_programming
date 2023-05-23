#include "main.h"
/**
 * print_last_digit - print_last_digit(int);
 * @n: the number to obtain the last digit from
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
