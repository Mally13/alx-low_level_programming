#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: time table type
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j == 0)
					printf("%d,", prod);
				else if (j != n)
				{
					if (prod < 10)
						printf("   %d,", prod);
					else if (prod < 100)
						printf("  %d,", prod);
					else
						printf(" %d,", prod);
				}
				else
				{
					if (prod < 10)
						printf("   %d", prod);
					else if (prod < 100)
						printf("  %d", prod);
					else
						printf(" %d", prod);
					printf("\n");

				}
			}
		}
		printf("\n");
	}
	else if (n == 0)
		printf("%d\n", n);
}
