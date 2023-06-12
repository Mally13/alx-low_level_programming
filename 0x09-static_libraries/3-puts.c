#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		i++;
		_putchar(*str);
	}
	_putchar('\n');
}
