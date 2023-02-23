#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: Integer to be checked
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	if (a % 10 == 0)
		return (0);
	else
		return (a % 10);
}
