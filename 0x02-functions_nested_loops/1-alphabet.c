#include "main.h"
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return:0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	print_alphabet();
	return (0);
}
