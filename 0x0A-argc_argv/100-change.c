#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: Number of arguments passed
 * @argv: A list of arguments passed
 * Return: 0 (success) or 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, twos, ones;
	int total_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents %= 25;
	dimes = cents / 10;
	cents %= 10;
	nickels = cents / 5;
	cents %= 5;
	twos = cents / 2;
	cents %= 2;
	ones = cents;

	total_coins = quarters + dimes + nickels + twos + ones;
	printf("%d\n", total_coins);
	return (0);
}
