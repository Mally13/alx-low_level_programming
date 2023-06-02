#include "main.h"

/**
 * _strcat - Concatenates teo strings
 * @dest: pointer to the first string
 * @src: pointer to the second string to be appended
 * Return: pointer to the final string after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int lndest = 0, i = 0;

	while (dest[i++])
	{
		lndest++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[lndest++] = src[i];
	}

	return (dest);

}
