#include <stdio.h>
/**
 * main - prints all base 16 numbers in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
