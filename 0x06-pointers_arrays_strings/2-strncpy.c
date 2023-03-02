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
	int i = 0, srcln = strlen(src);

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srcln; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
