#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0(succes)
 */

int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
