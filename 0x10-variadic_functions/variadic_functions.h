#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/* Header file containing struts and function prototypes */

/**
 * struct printer - A new steuct defining a printer
 * @symbol: a symbol representing datatype
 * @print: a function pointer that prints datatype that matches a symbol
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
