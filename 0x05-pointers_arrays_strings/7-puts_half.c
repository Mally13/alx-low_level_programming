#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int n = 0, h;

	n = strlen(str);

	if ((n % 2) == 0)
		h = n / 2;
	else
		h = (n - 1) / 2;

	while (h <= n)
	{
		if (str[h] != '\0')
			_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
