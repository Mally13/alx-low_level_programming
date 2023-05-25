#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success);
 */
int main(void)
{
	unsigned long i, j = 1, k = 2, n1, n2, n1half1, n1half2, n2half1, n2half2;

	for (i = 0; i < 49; i++)
	{
		if (i < 46)
		{
			printf("%lu, %lu, ", j, k);
			j += k;
			k += j;
		}
		else
		{
			n1half1 = j / 10000000000;
			n1half2 = j % 10000000000;
			n2half1 = k / 10000000000;
			n2half2 = k % 10000000000;
			n1 = n1half1 + n2half1;
		       	n2 = n1half2 + n2half2;
			if (n1half2 + n2half2 > 9999999999)
			{
				n1 += 1;
				n2 %= 10000000000;
			}
			if (i != 48)
				printf("%lu, %lu, ", n1, n2);
			else
				printf("%lu, %lu", n1, n2);
			n1half1 = n2half1;
			n1half2 = n2half2;
			n2half1 = n1;
			n2half2 = n2;
		}
	}
	printf("\n");
	return (0);
}
