#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start from
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}
