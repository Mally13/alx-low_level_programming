#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;

				if (j != n)
				{
					if (prod <= 9)
						printf("  %d,", prod);
					else if (prod <= 99)
						printf(" %d,", prod);
					else
						printf("%d,", prod);
				}
				else
				{
					if (prod <= 9)
						printf("  %d", prod);
					else if (prod <= 99)
						printf(" %d", prod);
					else
						printf("%d", prod);
					printf("\n");
				}
			}
		}
		printf("\n");
	}
}
