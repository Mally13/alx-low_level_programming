#include "main.h"
#include <string.h>
/**
 * _strcat - appends the src string to the dest
 * string, overwriting the terminating null byte (\0)
 * at the end of dest
 * @dest: string to be overwritten
 * @src: string to be appended
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dstln = strlen(dest);
	int srcln = strlen(src);
	int i;

	for (i = 0; i <= srcln; i++)
	{
		dest[dstln + i] = src[i];
	}
	return (dest);
}
