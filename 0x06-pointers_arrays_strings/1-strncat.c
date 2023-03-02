#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n
 * @dest: The string to be merged with n characters from src
 * @src: String contining n characters or more
 * @n: Number of characters to be added to dest
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int srcln = strlen(src);
	int destln = strlen(dest);
	int i;

	if (srcln != 0)
	{
		for (i = 0; src[i] && i < n; i++)
			dest[destln + i] = src[i];
	}
	return (dest);
}
