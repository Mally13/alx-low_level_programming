#include "main.h"
/**
 * _strncpy - Copies string src to dest
 * @dest: pointer to store the copied string
 * @src: pointer to the string to be copied
 * @n: number of bytes to be copied
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lnsrc = 0, i = 0;

	while (src[i++])
		lnsrc++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = lnsrc; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
