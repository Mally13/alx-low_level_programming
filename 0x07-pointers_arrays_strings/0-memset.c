#include "main.h"

/**
 * _memset - fills the first n bytes of memory area s with a constant byte of b
 * @s: starting address of memory to be filled
 * @b: characters to fill the first bytes of s
 * @n: number of bytes to be filled
 * Return: A pointer to the memoey filled area s 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
