#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int n = 612852475143, largest, i;

	while (n / 2)
	{
		largest = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
	if (n > 2)
		largest = n;
	printf("%lu\n", largest);
	return (0);
}
