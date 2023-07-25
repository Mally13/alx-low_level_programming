#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing the binary
 * Return: The converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d_num = 0, powerV = 1;
	int len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		d_num += (b[len] - '0') * powerV;
		powerV *= 2;
	}
	return (d_num);
}
