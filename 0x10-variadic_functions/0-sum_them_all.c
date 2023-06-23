#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums its parameters
 * @n: number of parameters
 * @...: a variable number of parameters
 * Return: sum of all parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += (va_arg(nums, int));

	va_end(nums);
	return (sum);
}
