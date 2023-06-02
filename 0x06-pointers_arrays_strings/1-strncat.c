#include "main.h"
/**
 * _strncat - Concatenates two strings dest and n bytes from src
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * @n: number of strings from src to be concatenated
 * Return: pointer to dest after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int lnsrc = 0, lndest = 0, i = 0;

	while (dest[i++])
		lndest++;
	i = 0;
	while (src[i++])
		lnsrc++;

	if (lnsrc != 0)
	{
		for (i = 0; src[i] && i < n; i++)
			dest[lndest + i] = src[i];
	}
	return (dest);
}
