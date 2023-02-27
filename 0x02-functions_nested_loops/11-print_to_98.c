#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n:int
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i <= -10 && i >= -99)
		{
			_putchar('-');
			_putchar((i / -10) + '0');
			_putchar((i % -10) + '0');
		}
		else if (i <= -100 && i >= -999)
		{
			_putchar('-');
			_putchar((i / -100) + '0');
			_putchar((i % -100) / 10 + '0');
			_putchar((i % -100) % 10 + '0');
		}
		else if (i < 0 && i >= -9)
		{
			_putchar('-');
			_putchar((i * -1) + '0');
		}
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
