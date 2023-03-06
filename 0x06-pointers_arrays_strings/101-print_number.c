#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0 && n > -10)
	{
		n = -n;
		_putchar('-');
		_putchar( n + '0');
	}
	else if (n <= -10 && n > -100)
	{
		n = -n;
		_putchar('-');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n <= -100 && n > -1000)
	{
		n = -n;
		_putchar('-');
		_putchar((n / 100) + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n <= -1000 && n > -10000)
	{
		n = -n;
		_putchar('-');
		_putchar((n / 1000) + '0');
                _putchar((n % 1000) / 100 + '0');
                _putchar((n % 1000) % 100 / 10 + '0');
		_putchar((n % 1000) % 100 % 10 + '0');
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
        	_putchar((n % 10) + '0');
        }
        else if (n >= 100 && n < 1000)
        {
        	_putchar((n / 100) + '0');
        	_putchar((n % 100) / 10 + '0');
        	_putchar((n % 100) % 10 + '0');
        }
        else if (n >= -1000 && n < 10000)
        {
                _putchar((n / 1000) + '0');
                _putchar((n % 1000) / 100 + '0');
                _putchar((n % 1000) % 100 / 10 + '0');
                _putchar((n % 1000) % 100 % 10 + '0');
        }

}
