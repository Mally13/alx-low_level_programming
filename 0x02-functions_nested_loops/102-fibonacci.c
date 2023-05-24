#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success);
 */
int main(void)
{
	int i, j = 1, k = 2;

	for (i = 0; i <= 25; i++)
	{
		printf("%d, %d,", j, k);
		j += k;
		k += j;
	}
	printf('\n');

}
