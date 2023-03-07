#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: Steing to be checked
 * @accept: substring prefix to be checked
 * Return:  number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int k = 0;

	while(*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (k);
		}
		s++;

	}
	return (k);
}
