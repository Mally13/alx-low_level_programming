#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string.
 * @dest: pointer to char of the copied string
 * @src: pointer to char of the string to be copied
 * @n: number of chars to copy
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcln = strlen(src);

	if (n <= srcln)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
		return (dest);
	}
	else if (n > srcln)
	{
		for (i = 0; i < srcln; i++)
			dest[i] = src[i];
		dest[srcln] = '\0';
		return (dest);
	}
	else
		return (dest);
}
