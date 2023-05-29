#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int n = 0, h2;

	n = strlen(str);

	if ((n % 2) != 0)
		h2 = (n - 1) / 2;
	else
		h2 = n / 2;

	while (h2 <= n)
	{
		if (str[h2] != '\0')
			_putchar(str[h2]);
		h2++;
	}
	_putchar('\n');
}
