#include <stdio.h>
#include <unistd.h>
/**
 * main - A program to print a line in the standard error
 * Return: 1(success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			stdout);
	return (1);
}
