#include "main.h"

/**
 * _abs -computes the absolute value of an integer
 * @a: an integer value
 * Return: absolute value of a
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
