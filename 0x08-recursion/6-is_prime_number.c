#include "main.h"
/**
 * is_divisible - checks divisibility
 * @n: number to be checked
 * @div: the divisor
 * Return: 1 if n is a prime number, 0 if not
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisible(n, div + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise, return 0
 * @n: number to be checked
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div + 1));
}
