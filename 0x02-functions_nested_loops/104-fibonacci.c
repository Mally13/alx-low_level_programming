#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success);
 */
int main(void)
{
	unsigned long i, j = 1, k = 2;

	for (i = 0; i < 49; i++)
	{
		if (i != 48)
			printf("%lu, %lu, ", j, k);
		else
			printf("%lu, %lu", j, k);
		j += k;
		k += j;
	}
	printf("\n");
	return (0);
}
