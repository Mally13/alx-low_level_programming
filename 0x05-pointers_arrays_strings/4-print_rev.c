#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: pointer to string to be reversed
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	for (; i >= 0; i--)
	{
		if (*s != '\0')
			_putchar(*s);
		s--;
	}
	_putchar('\n');
}
