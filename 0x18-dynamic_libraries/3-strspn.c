#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The segment to be measured.
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int no_bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				no_bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (no_bytes);
		}
		s++;
	}
	return (no_bytes);
}
