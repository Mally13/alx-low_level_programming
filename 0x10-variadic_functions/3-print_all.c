#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>

/**
 * print_char - prints char
 * @arg: A list of char arguments to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints int
 * @arg: A list of int arguments to be printed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints float
 * @arg: A list of float arguments to be printed
 */
void print_float(va_list arg)
{
	float decimal;

	decimal = va_arg(arg, double);
	printf("%f", decimal);
}
/**
 * print_string - prints string
 * @arg : a list of string arguments to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: A variable number of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{

		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
