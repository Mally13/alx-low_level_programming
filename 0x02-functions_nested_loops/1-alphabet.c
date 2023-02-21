#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return:0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	print_alphabet();
	return (0);
}
