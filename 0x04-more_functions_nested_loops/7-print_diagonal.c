#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times to print
 */

void print_diagonal(int n)
{
	int blank, len = 0;

	if (n > 0)
		for (len = 0; len < n; len ++)
		{
			for (blank = 0; blank < len; blank++)
				_putchar(' ');
			_putchar('\\');
			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	_putchar('\n');
}
