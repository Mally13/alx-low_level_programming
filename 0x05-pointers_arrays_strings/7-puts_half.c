#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed from
 * Retuen: void
 */

void puts_half(char *str)
{
	int i, ln = strlen(str);

	if (ln % 2 == 0)
	{
		for (i = ln / 2; i <= ln; i++)
		{
			if (str[i] != '\0')
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = (ln - 1) / 2; i <= ln; i++)
		{
			if (str[i] != '\0')
			{
				_putchar(str[i]);
			}
		}
	}

	_putchar('\n');
}
