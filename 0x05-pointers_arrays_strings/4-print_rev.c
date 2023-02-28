#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s:pointer to char to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; s++)
		i++;

	for (j = i; j >= 0; j--)
	{
		if (*s != '\0')
			_putchar(*s);
		s--;
	}
	_putchar('\n');
}
