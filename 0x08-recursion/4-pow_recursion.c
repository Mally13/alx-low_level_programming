#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: power that x is to be raised to
 * Return: new value of x or if y is lower than 0,
 * the function should return -1
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}
