#include "main.h"

/**
 * puts_half - prints second half a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int n = 0, h2;

	while (str[n] != '\0')
	{
		n++;
	}
	if ((n % 2) != 0)
		h2 = (n - 1) / 2;
	else
		h2 = n / 2;

	while (h2 <= n)
	{
		_putchar(str[h2]);
		h2++;
	}
	_putchar('\n');
}
