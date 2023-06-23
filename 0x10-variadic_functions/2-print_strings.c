#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of arguments passed
 * @...: variable number of string arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nill)");
		else
			printf("%s", string);

		if (i != (n -1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
