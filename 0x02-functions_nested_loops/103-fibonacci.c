#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * of the  Fibonacci sequence whose value do not exceed 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long sum = 0, j = 1, k = 2;

	while(j <= 4000000 && k <= 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		if (k % 2 == 0)
			sum += k;
		j += k;
		k += j;
	}
	printf("%lu\n", sum);
	return (0);
}
