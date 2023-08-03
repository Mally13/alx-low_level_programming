#include "main.h"
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: string containing binary number to be converted
 * Return: the converted number or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, p = 1;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * p;
		p *= 2;
	}
	return (num);
}
