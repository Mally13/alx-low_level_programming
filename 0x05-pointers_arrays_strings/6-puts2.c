#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string to be printed
 * Return:void
 */

void puts2(char *str)
{
	int i;
	int ln;

	ln = strlen(str);
	for (i = 0; i <= ln; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
