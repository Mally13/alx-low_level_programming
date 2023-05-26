#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100 but muttiples of 3 and 5
 * print Fizz and Buzz respectively, for multiples of both 3 and 5
 * print FizzBuzz.
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
